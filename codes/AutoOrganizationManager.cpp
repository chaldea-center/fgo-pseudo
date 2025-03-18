void __fastcall AutoOrganizationManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  ListViewSort_o *v5; // x19
  struct AutoOrganizationManager_StaticFields *static_fields; // x0
  ListViewSort_o *v7; // x19
  struct AutoOrganizationManager_StaticFields *v8; // x0

  if ( (byte_4C1D987 & 1) == 0 )
  {
    sub_1C3B764(&AutoOrganizationManager_TypeInfo, v1);
    sub_1C3B764(&ListViewSort_TypeInfo, v2);
    sub_1C3B764(&StringLiteral_2641/*"B441"*/, v3);
    sub_1C3B764(&StringLiteral_2647/*"B520"*/, v4);
    byte_4C1D987 = 1;
  }
  *(_QWORD *)AutoOrganizationManager_TypeInfo->static_fields = 0x296B0000296ALL;
  v5 = (ListViewSort_o *)sub_1C3B9B0(ListViewSort_TypeInfo);
  ListViewSort___ctor_42232596(v5, (System_String_o *)StringLiteral_2641/*"B441"*/, 3, 0, 0LL);
  static_fields = AutoOrganizationManager_TypeInfo->static_fields;
  static_fields->autoOrganizationInfo = v5;
  sub_1C3B708(&static_fields->autoOrganizationInfo);
  v7 = (ListViewSort_o *)sub_1C3B9B0(ListViewSort_TypeInfo);
  ListViewSort___ctor_42232596(v7, (System_String_o *)StringLiteral_2647/*"B520"*/, 3, 0, 0LL);
  v8 = AutoOrganizationManager_TypeInfo->static_fields;
  v8->waveBattleAutoOrganizationInfo = v7;
  sub_1C3B708(&v8->waveBattleAutoOrganizationInfo);
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
  __int64 Master_object; // x0
  const MethodInfo *v32; // x1
  UserServantEntity_array *ServantEquipList; // x21
  System_Collections_Generic_List_object__o *v34; // x20
  System_Collections_Generic_HashSet_int__o *v35; // x24
  System_Collections_Generic_HashSet_int__o *v36; // x23
  AutoOrganizationServantBonusFilterEquipComponent_c *v37; // x0
  struct AutoOrganizationServantBonusFilterEquipComponent_StaticFields *static_fields; // x9
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID; // x25
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID; // x26
  Il2CppObject *v41; // x27
  int v42; // w28
  System_String_o *v43; // x0
  System_String_o *v44; // x0
  System_String_o *v45; // x0
  System_String_o *v46; // x0
  System_String_o *v47; // x0
  System_String_o *v48; // x0
  System_String_o *v49; // x0
  System_String_o *v50; // x0
  int v51; // w8
  __int64 v52; // x29
  unsigned int v53; // w24
  __int64 v54; // x8
  __int64 v55; // x8
  unsigned __int64 i; // x29
  UserServantEntity_o *v57; // x25
  __int64 v58; // x26
  __int64 v59; // x27
  int32_t v60; // w0
  __int64 v61; // x26
  __int64 v62; // x27
  int32_t v63; // w0
  __int64 v64; // x26
  __int128 v65; // q0
  __int64 v66; // x27
  __int64 v67; // x28
  int32_t v68; // w0
  int32_t v69; // w2
  int32_t atk; // w8
  Il2CppObject *v71; // x8
  float v72; // s13
  float v73; // s13
  __int64 v74; // x27
  __int64 v75; // x28
  float v76; // s0
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x27
  AutoOrganizationManager_c *v78; // x0
  float v79; // s0
  AutoOrganizationManager_c *v80; // x0
  struct System_Object_array *items; // x8
  _QWORD *v82; // x9
  __int64 size; // x10
  Il2CppClass **v84; // x0
  __int64 v85; // x26
  __int64 v86; // x27
  int32_t v87; // w0
  __int64 v88; // x25
  __int64 v89; // x26
  struct System_Int32_array *v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  System_Comparison_T__o *v93; // x19
  Il2CppObject *v94; // x21
  struct AutoOrganizationManager___c_StaticFields *v95; // x0
  System_Collections_Generic_HashSet_int__o *v97; // [xsp+0h] [xbp-F0h]
  DataMasterBase_TMaster__TEntity__PKType__o *v98; // [xsp+8h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v99; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v100; // [xsp+30h] [xbp-C0h]
  int v101; // [xsp+54h] [xbp-9Ch] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-98h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16

  if ( (byte_4C1D980 & 1) == 0 )
  {
    sub_1C3B764(&AutoOrganizationManager_TypeInfo, organizedEquipIdList);
    sub_1C3B764(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo, v5);
    sub_1C3B764(&System_Comparison_AutoOrganizationManager_ServantData__TypeInfo, v6);
    sub_1C3B764(&Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___, v7);
    sub_1C3B764(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_1C3B764(&Method_DataManager_GetMaster_UserServantMaster___, v9);
    sub_1C3B764(&DataManager_TypeInfo, v10);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v11);
    sub_1C3B764(&Method_System_Linq_Enumerable_Contains_int___, v12);
    sub_1C3B764(&Method_System_Collections_Generic_HashSet_int__Add__, v13);
    sub_1C3B764(&Method_System_Collections_Generic_HashSet_int__Contains__, v14);
    sub_1C3B764(&Method_System_Collections_Generic_HashSet_int___ctor__, v15);
    sub_1C3B764(&Method_System_Collections_Generic_HashSet_int__get_Count__, v16);
    sub_1C3B764(&System_Collections_Generic_HashSet_int__TypeInfo, v17);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, v18);
    sub_1C3B764(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__, v19);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Contains__, v20);
    sub_1C3B764(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Sort__, v21);
    sub_1C3B764(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__, v22);
    sub_1C3B764(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__, v23);
    sub_1C3B764(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo, v24);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v26);
    sub_1C3B764(&ServantBonusFilterSelectMenu_TypeInfo, v27);
    sub_1C3B764(&AutoOrganizationManager_ServantData_TypeInfo, v28);
    sub_1C3B764(&Method_AutoOrganizationManager___c__AutoOrganizationEquip_b__21_0__, v29);
    sub_1C3B764(&AutoOrganizationManager___c_TypeInfo, v30);
    byte_4C1D980 = 1;
  }
  entity = 0LL;
  v101 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_98;
  ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)Master_object, 0LL);
  v34 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
  v98 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantMaster___);
  v35 = (System_Collections_Generic_HashSet_int__o *)sub_1C3B9B0(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v35,
    (const MethodInfo_35415FC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  v36 = (System_Collections_Generic_HashSet_int__o *)sub_1C3B9B0(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v36,
    (const MethodInfo_35415FC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( eventId )
  {
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    Master_object = (__int64)AutoOrganizationManager__GetEventBonusIds(eventId, v32);
    if ( !Master_object )
      goto LABEL_98;
    v97 = (System_Collections_Generic_HashSet_int__o *)Master_object;
    if ( *(int *)(Master_object + 32) >= 1 )
    {
      v37 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
        v37 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      }
      static_fields = v37->static_fields;
      SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID = static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID;
      SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v41 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
      if ( !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
      Master_object = ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0LL);
      v101 = 0;
      if ( (int)Master_object >= 1 )
      {
        v42 = Master_object;
        while ( 1 )
        {
          v43 = System_Int32__ToString((int32_t)&v101, 0LL);
          v44 = System_String__Concat_63368612(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v43, 0LL);
          if ( UnityEngine_PlayerPrefs__HasKey(v44, 0LL) )
          {
            v45 = System_Int32__ToString((int32_t)&v101, 0LL);
            v46 = System_String__Concat_63368612(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v45, 0LL);
            Master_object = UnityEngine_PlayerPrefs__GetInt_71080456(v46, 0LL);
            if ( !v36 )
              goto LABEL_98;
            System_Collections_Generic_HashSet_int___Add(
              v36,
              Master_object,
              (const MethodInfo_3542800 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
          v47 = System_Int32__ToString((int32_t)&v101, 0LL);
          v48 = System_String__Concat_63368612(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v47, 0LL);
          Master_object = UnityEngine_PlayerPrefs__HasKey(v48, 0LL);
          if ( (Master_object & 1) != 0 )
          {
            v49 = System_Int32__ToString((int32_t)&v101, 0LL);
            v50 = System_String__Concat_63368612(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v49, 0LL);
            Master_object = UnityEngine_PlayerPrefs__GetInt_71080456(v50, 0LL);
            if ( !v41 )
              goto LABEL_98;
            Master_object = (__int64)EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                                       (EventBonusFilterGroupMemberMaster_o *)v41,
                                       Master_object,
                                       0LL);
            if ( !Master_object )
              goto LABEL_98;
            v51 = *(_DWORD *)(Master_object + 24);
            v52 = Master_object;
            if ( v51 >= 1 )
              break;
          }
LABEL_31:
          if ( ++v101 >= v42 )
            goto LABEL_34;
        }
        v53 = 0;
        while ( 1 )
        {
          if ( v53 >= v51 )
LABEL_99:
            sub_1C3B9C8(Master_object, v32);
          v54 = *(_QWORD *)(v52 + 8LL * (int)v53 + 32);
          if ( !v54 || !v36 )
            break;
          Master_object = System_Collections_Generic_HashSet_int___Add(
                            v36,
                            *(_DWORD *)(v54 + 20),
                            (const MethodInfo_3542800 *)Method_System_Collections_Generic_HashSet_int__Add__);
          v51 = *(_DWORD *)(v52 + 24);
          if ( (int)++v53 >= v51 )
            goto LABEL_31;
        }
LABEL_98:
        sub_1C3B9C0(Master_object, v32);
      }
    }
  }
  else
  {
    v97 = v35;
  }
LABEL_34:
  if ( !ServantEquipList )
    goto LABEL_98;
  v55 = *(_QWORD *)&ServantEquipList->max_length;
  if ( (int)v55 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v55; ++i )
    {
      if ( i >= (unsigned int)v55 )
        goto LABEL_99;
      v57 = ServantEquipList->m_Items[i];
      if ( !v57 )
        goto LABEL_89;
      if ( organizedEquipIdList )
      {
        v59 = *(_QWORD *)&v57->fields.svtId.fields.currentCryptoKey;
        v58 = *(_QWORD *)&v57->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v103.fields.currentCryptoKey = v59;
        *(_QWORD *)&v103.fields.fakeValue = v58;
        v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v103, 0LL);
        Master_object = System_Collections_Generic_List_int___Contains(
                          organizedEquipIdList,
                          v60,
                          (const MethodInfo_366EFC0 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( (Master_object & 1) != 0 )
          goto LABEL_89;
      }
      if ( !v36 )
        goto LABEL_98;
      if ( v36->fields._count >= 1 )
      {
        v62 = *(_QWORD *)&v57->fields.svtId.fields.currentCryptoKey;
        v61 = *(_QWORD *)&v57->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v104.fields.currentCryptoKey = v62;
        *(_QWORD *)&v104.fields.fakeValue = v61;
        v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v104, 0LL);
        Master_object = System_Collections_Generic_HashSet_int___Contains(
                          v36,
                          v63,
                          (const MethodInfo_3541CF0 *)Method_System_Collections_Generic_HashSet_int__Contains__);
        if ( (Master_object & 1) != 0 )
          goto LABEL_89;
      }
      Master_object = UserServantEntity__IsFriendShipSvtEquip(v57, 0LL);
      if ( (Master_object & 1) != 0 )
        goto LABEL_89;
      v64 = sub_1C3B9B0(AutoOrganizationManager_ServantData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v64, 0LL);
      *(_DWORD *)(v64 + 16) = 0;
      *(_QWORD *)(v64 + 32) = 0LL;
      *(_QWORD *)(v64 + 24) = 0LL;
      *(_QWORD *)(v64 + 44) = 0LL;
      *(_DWORD *)(v64 + 64) = 0;
      *(_BYTE *)(v64 + 68) = 0;
      *(_QWORD *)(v64 + 72) = 0LL;
      v65 = *(_OWORD *)&v57->fields.id.fields.fakeValue;
      *(_OWORD *)&v100.fields.currentCryptoKey = *(_OWORD *)&v57->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v100.fields.fakeValue = v65;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v99 = v100;
      *(_QWORD *)(v64 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v99, 0LL);
      v67 = *(_QWORD *)&v57->fields.svtId.fields.currentCryptoKey;
      v66 = *(_QWORD *)&v57->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v105.fields.currentCryptoKey = v67;
      *(_QWORD *)&v105.fields.fakeValue = v66;
      v68 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v105, 0LL);
      *(_DWORD *)(v64 + 16) = v68;
      v69 = v68;
      atk = v57->fields.atk;
      Master_object = (__int64)v98;
      *(_DWORD *)(v64 + 48) = 0;
      *(_DWORD *)(v64 + 36) = atk;
      if ( !v98 )
        goto LABEL_98;
      Master_object = DataMasterBase_object__object__int___TryGetEntity(
                        v98,
                        &entity,
                        v69,
                        (const MethodInfo_329AE94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( (Master_object & 1) != 0 )
      {
        v71 = entity;
        if ( !entity )
          goto LABEL_98;
        *(_DWORD *)(v64 + 64) = entity[9].monitor;
        *(_DWORD *)(v64 + 44) = v71[13].klass;
      }
      Master_object = (__int64)v97;
      if ( !v97 )
        goto LABEL_98;
      if ( v97->fields._count >= 1
        && System_Collections_Generic_HashSet_int___Contains(
             v97,
             *(_DWORD *)(v64 + 16),
             (const MethodInfo_3541CF0 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
      {
        v72 = *(float *)(v64 + 48) + 50000.0;
        *(float *)(v64 + 48) = v72;
        v73 = v72 + (float)((float)UserServantEntity__getRarity(v57, 0LL) * 100000.0);
        *(float *)(v64 + 48) = v73;
        v75 = *(_QWORD *)&v57->fields.limitCount.fields.currentCryptoKey;
        v74 = *(_QWORD *)&v57->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v106.fields.currentCryptoKey = v75;
        *(_QWORD *)&v106.fields.fakeValue = v74;
        Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v106, 0LL);
        v76 = v73 + (float)((float)(int)Master_object * 10000.0);
        goto LABEL_74;
      }
      Master_object = (__int64)UserServantEntity__GetEquipCategoryIdList(v57, 0, 0LL);
      if ( Master_object )
      {
        v77 = (System_Collections_Generic_IEnumerable_TSource__o *)Master_object;
        v78 = AutoOrganizationManager_TypeInfo;
        if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          v78 = AutoOrganizationManager_TypeInfo;
        }
        Master_object = System_Linq_Enumerable__Contains_int_(
                          v77,
                          v78->static_fields->CATEGORY_ID_NP_GAIN,
                          (const MethodInfo_300875C *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (Master_object & 1) != 0 )
        {
          v79 = *(float *)(v64 + 48) + 40000.0;
        }
        else
        {
          v80 = AutoOrganizationManager_TypeInfo;
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
            v80 = AutoOrganizationManager_TypeInfo;
          }
          Master_object = System_Linq_Enumerable__Contains_int_(
                            v77,
                            v80->static_fields->CATEGORY_ID_NP_REGAIN,
                            (const MethodInfo_300875C *)Method_System_Linq_Enumerable_Contains_int___);
          if ( (Master_object & 1) == 0 )
            goto LABEL_73;
          v79 = *(float *)(v64 + 48) + 30000.0;
        }
        *(float *)(v64 + 48) = v79;
      }
LABEL_73:
      v76 = *(float *)(v64 + 48) + (float)*(int *)(v64 + 36);
LABEL_74:
      *(float *)(v64 + 48) = v76;
      if ( !v34 )
        goto LABEL_98;
      items = v34->fields._items;
      v82 = Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__;
      ++v34->fields._version;
      if ( !items )
        goto LABEL_98;
      size = v34->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v34,
          (Il2CppObject *)v64,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
        if ( !organizedEquipIdList )
          goto LABEL_89;
      }
      else
      {
        v84 = &items->obj.klass + size;
        v34->fields._size = size + 1;
        v84[4] = (Il2CppClass *)v64;
        Master_object = sub_1C3B708(v84 + 4);
        if ( !organizedEquipIdList )
          goto LABEL_89;
      }
      v86 = *(_QWORD *)&v57->fields.svtId.fields.currentCryptoKey;
      v85 = *(_QWORD *)&v57->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v107.fields.currentCryptoKey = v86;
      *(_QWORD *)&v107.fields.fakeValue = v85;
      v87 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v107, 0LL);
      Master_object = System_Collections_Generic_List_int___Contains(
                        organizedEquipIdList,
                        v87,
                        (const MethodInfo_366EFC0 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( (Master_object & 1) == 0 )
      {
        v89 = *(_QWORD *)&v57->fields.svtId.fields.currentCryptoKey;
        v88 = *(_QWORD *)&v57->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v108.fields.currentCryptoKey = v89;
        *(_QWORD *)&v108.fields.fakeValue = v88;
        Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v108, 0LL);
        v90 = organizedEquipIdList->fields._items;
        v91 = Method_System_Collections_Generic_List_int__Add__;
        ++organizedEquipIdList->fields._version;
        if ( !v90 )
          goto LABEL_98;
        v92 = organizedEquipIdList->fields._size;
        v32 = (const MethodInfo *)(unsigned int)Master_object;
        if ( (unsigned int)v92 >= v90->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            organizedEquipIdList,
            Master_object,
            *(const MethodInfo_366EC48 **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
        }
        else
        {
          organizedEquipIdList->fields._size = v92 + 1;
          v90->m_Items[v92 + 1] = Master_object;
        }
      }
LABEL_89:
      LODWORD(v55) = ServantEquipList->max_length;
    }
  }
  Master_object = (__int64)AutoOrganizationManager___c_TypeInfo;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    Master_object = (__int64)AutoOrganizationManager___c_TypeInfo;
  }
  v93 = *(System_Comparison_T__o **)(*(_QWORD *)(Master_object + 184) + 56LL);
  if ( !v93 )
  {
    if ( !*(_DWORD *)(Master_object + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = (__int64)AutoOrganizationManager___c_TypeInfo;
    }
    v94 = **(Il2CppObject ***)(Master_object + 184);
    v93 = (System_Comparison_T__o *)sub_1C3B9B0(System_Comparison_AutoOrganizationManager_ServantData__TypeInfo);
    System_Comparison_object____ctor(v93, v94, Method_AutoOrganizationManager___c__AutoOrganizationEquip_b__21_0__, 0LL);
    v95 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v95->__9__21_0 = (struct System_Comparison_AutoOrganizationManager_ServantData__o *)v93;
    Master_object = sub_1C3B708(&v95->__9__21_0);
  }
  if ( !v34 )
    goto LABEL_98;
  System_Collections_Generic_List_object___Sort_57202480(
    v34,
    v93,
    (const MethodInfo_368D730 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Sort__);
  return (AutoOrganizationManager_ServantData_array *)System_Collections_Generic_List_object___ToArray(
                                                        v34,
                                                        (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
}


AutoOrganizationManager_ServantData_array *__fastcall AutoOrganizationManager__AutoOrganizationServant(
        int32_t rarityBit,
        QuestRestrictionInfo_o *restrictionInfo,
        System_Int32_array *organizedServantIds,
        QuestAutoOrganizationAdjustEntity_array *questAutoOrganizationAdjustEntities,
        const MethodInfo *method)
{
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
  __int64 v22; // x23
  System_Collections_Generic_List_object__o *v23; // x20
  __int64 Master_object; // x0
  __int64 v25; // x1
  UserServantEntity_array *OrganizationList; // x25
  __int64 v27; // x8
  unsigned __int64 v28; // x19
  UserServantEntity_o *v29; // x28
  __int64 v30; // x27
  __int64 v31; // x29
  const MethodInfo *v32; // x2
  int32_t v33; // w29
  const MethodInfo *v34; // x2
  int32_t v35; // w27
  const MethodInfo *v36; // x2
  int32_t v37; // w27
  bool UniqueSvtRestriction; // w27
  System_Predicate_object__o *v39; // x29
  Il2CppObject *v40; // x0
  __int128 v41; // q0
  Il2CppObject *v42; // x29
  const MethodInfo *v43; // x2
  int64_t v44; // x27
  float AdjustTotalRate; // s8
  __int128 v46; // q0
  int32_t atk; // w8
  __int64 v48; // x29
  __int128 v49; // q0
  const MethodInfo *v50; // x2
  int64_t v51; // x27
  float v52; // s0
  struct System_Object_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  Il2CppClass **v56; // x0
  System_Predicate_object__o **v58; // [xsp+8h] [xbp-128h]
  DataMasterBase_TMaster__TEntity__PKType__o *v59; // [xsp+10h] [xbp-120h]
  UserServantEntity_o **m_Items; // [xsp+38h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+40h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+60h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+80h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+A0h] [xbp-90h]
  Il2CppObject *entity; // [xsp+C8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  if ( (byte_4C1D97D & 1) == 0 )
  {
    sub_1C3B764(&AutoOrganizationManager_TypeInfo, restrictionInfo);
    sub_1C3B764(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_1C3B764(&Method_DataManager_GetMaster_UserServantMaster___, v7);
    sub_1C3B764(&DataManager_TypeInfo, v8);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v9);
    sub_1C3B764(&Method_System_Linq_Enumerable_Contains_int___, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Find__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__, v14);
    sub_1C3B764(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo, v15);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
    sub_1C3B764(&System_Predicate_AutoOrganizationManager_ServantData__TypeInfo, v18);
    sub_1C3B764(&AutoOrganizationManager_ServantData_TypeInfo, v19);
    sub_1C3B764(&Method_AutoOrganizationManager___c__DisplayClass18_0__AutoOrganizationServant_b__0__, v20);
    sub_1C3B764(&AutoOrganizationManager___c__DisplayClass18_0_TypeInfo, v21);
    byte_4C1D97D = 1;
  }
  entity = 0LL;
  v22 = sub_1C3B9B0(AutoOrganizationManager___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  v23 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_65;
  OrganizationList = UserServantMaster__getOrganizationList((UserServantMaster_o *)Master_object, 0LL);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantMaster___);
  v59 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !OrganizationList )
    goto LABEL_65;
  v27 = *(_QWORD *)&OrganizationList->max_length;
  if ( (int)v27 >= 1 )
  {
    v28 = 0LL;
    v58 = (System_Predicate_object__o **)(v22 + 24);
    m_Items = OrganizationList->m_Items;
    do
    {
      if ( v28 >= (unsigned int)v27 )
        sub_1C3B9C8(Master_object, v25);
      v29 = m_Items[v28];
      if ( !v29 )
        goto LABEL_34;
      Master_object = UserServantEntity__getRarity(m_Items[v28], 0LL);
      if ( rarityBit != 31 && (_DWORD)Master_object == 0
        || (rarityBit & 1) == 0 && (_DWORD)Master_object == 1
        || (rarityBit & 2) == 0 && (_DWORD)Master_object == 2
        || (rarityBit & 4) == 0 && (_DWORD)Master_object == 3
        || (rarityBit & 8) == 0 && (_DWORD)Master_object == 4
        || (rarityBit & 0x10) == 0 && (_DWORD)Master_object == 5 )
      {
        goto LABEL_34;
      }
      v30 = *(_QWORD *)&v29->fields.svtId.fields.currentCryptoKey;
      v31 = *(_QWORD *)&v29->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v69.fields.currentCryptoKey = v30;
      *(_QWORD *)&v69.fields.fakeValue = v31;
      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v69, 0LL);
      if ( !v22 )
        goto LABEL_65;
      v33 = Master_object;
      *(_DWORD *)(v22 + 16) = Master_object;
      if ( organizedServantIds )
      {
        Master_object = System_Linq_Enumerable__Contains_int_(
                          (System_Collections_Generic_IEnumerable_TSource__o *)organizedServantIds,
                          Master_object,
                          (const MethodInfo_300875C *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (Master_object & 1) != 0 )
          goto LABEL_34;
        v33 = *(_DWORD *)(v22 + 16);
      }
      if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      Master_object = AutoOrganizationManager__IsFatigue(restrictionInfo, v33, v32);
      if ( (Master_object & 1) == 0 )
      {
        v35 = *(_DWORD *)(v22 + 16);
        if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
        Master_object = AutoOrganizationManager__IsAllOutBattleAlreadyUsed(restrictionInfo, v35, v34);
        if ( (Master_object & 1) == 0 )
        {
          v37 = *(_DWORD *)(v22 + 16);
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          Master_object = AutoOrganizationManager__IsDataLost(restrictionInfo, v37, v36);
          if ( (Master_object & 1) == 0 )
          {
            Master_object = UserServantEntity__IsLeave(v29, 0LL);
            if ( (Master_object & 1) == 0 )
            {
              Master_object = UserServantEntity__getQuestRestriction(v29, restrictionInfo, 1, 0LL);
              if ( (Master_object & 1) == 0 )
              {
                UniqueSvtRestriction = UserServantEntity__getUniqueSvtRestriction(v29, restrictionInfo, 0LL);
                Master_object = UserServantEntity__IsUniqueIndividualityRestriction(v29, restrictionInfo, 0LL);
                if ( !UniqueSvtRestriction && (Master_object & 1) == 0 )
                {
                  v39 = *v58;
                  if ( !*v58 )
                  {
                    v39 = (System_Predicate_object__o *)sub_1C3B9B0(System_Predicate_AutoOrganizationManager_ServantData__TypeInfo);
                    System_Predicate_object____ctor(
                      v39,
                      (Il2CppObject *)v22,
                      Method_AutoOrganizationManager___c__DisplayClass18_0__AutoOrganizationServant_b__0__,
                      0LL);
                    *(_QWORD *)(v22 + 24) = v39;
                    Master_object = sub_1C3B708(v58);
                  }
                  if ( !v23 )
                    goto LABEL_65;
                  v40 = System_Collections_Generic_List_object___Find(
                          v23,
                          (System_Predicate_T__o *)v39,
                          (const MethodInfo_368C2D4 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Find__);
                  if ( v40 )
                  {
                    v41 = *(_OWORD *)&v29->fields.id.fields.fakeValue;
                    v42 = v40;
                    *(_OWORD *)&v67.fields.currentCryptoKey = *(_OWORD *)&v29->fields.id.fields.currentCryptoKey;
                    *(_OWORD *)&v67.fields.fakeValue = v41;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    v66 = v67;
                    v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v66, 0LL);
                    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
                    AdjustTotalRate = AutoOrganizationManager__GetAdjustTotalRate(
                                        (System_Collections_Generic_IEnumerable_QuestAutoOrganizationAdjustEntity__o *)questAutoOrganizationAdjustEntities,
                                        v44,
                                        v43);
                    if ( (float)(AdjustTotalRate * (float)v29->fields.atk) >= (float)(*(float *)&v42[4].monitor
                                                                                    * (float)SHIDWORD(v42[2].klass)) )
                    {
                      v46 = *(_OWORD *)&v29->fields.id.fields.fakeValue;
                      *(_OWORD *)&v67.fields.currentCryptoKey = *(_OWORD *)&v29->fields.id.fields.currentCryptoKey;
                      *(_OWORD *)&v67.fields.fakeValue = v46;
                      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                      v65 = v67;
                      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v65, 0LL);
                      v42[1].monitor = (void *)Master_object;
                      atk = v29->fields.atk;
                      *(float *)&v42[4].monitor = AdjustTotalRate;
                      HIDWORD(v42[2].klass) = atk;
                    }
                  }
                  else
                  {
                    v48 = sub_1C3B9B0(AutoOrganizationManager_ServantData_TypeInfo);
                    System_Object___ctor((Il2CppObject *)v48, 0LL);
                    *(_DWORD *)(v48 + 16) = 0;
                    *(_QWORD *)(v48 + 44) = 0LL;
                    *(_DWORD *)(v48 + 64) = 0;
                    *(_BYTE *)(v48 + 68) = 0;
                    *(_QWORD *)(v48 + 72) = 0LL;
                    *(_QWORD *)(v48 + 24) = 0LL;
                    *(_QWORD *)(v48 + 32) = 0LL;
                    v49 = *(_OWORD *)&v29->fields.id.fields.fakeValue;
                    *(_OWORD *)&v67.fields.currentCryptoKey = *(_OWORD *)&v29->fields.id.fields.currentCryptoKey;
                    *(_OWORD *)&v67.fields.fakeValue = v49;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    v64 = v67;
                    *(_QWORD *)(v48 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(
                                              &v64,
                                              0LL);
                    *(_DWORD *)(v48 + 16) = *(_DWORD *)(v22 + 16);
                    *(_DWORD *)(v48 + 32) = UserServantEntity__getSvtClassId(v29, 0, 0LL);
                    *(_DWORD *)(v48 + 36) = v29->fields.atk;
                    v51 = *(_QWORD *)(v48 + 24);
                    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
                    v52 = AutoOrganizationManager__GetAdjustTotalRate(
                            (System_Collections_Generic_IEnumerable_QuestAutoOrganizationAdjustEntity__o *)questAutoOrganizationAdjustEntities,
                            v51,
                            v50);
                    Master_object = (__int64)v59;
                    *(float *)(v48 + 72) = v52;
                    if ( !v59 )
                      goto LABEL_65;
                    Master_object = DataMasterBase_object__object__int___TryGetEntity(
                                      v59,
                                      &entity,
                                      *(_DWORD *)(v48 + 16),
                                      (const MethodInfo_329AE94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
                    if ( (Master_object & 1) != 0 )
                    {
                      Master_object = (__int64)entity;
                      if ( !entity )
                        goto LABEL_65;
                      *(_DWORD *)(v48 + 64) = entity[9].monitor;
                      Master_object = ServantEntity__GetNotSamePartyKey((ServantEntity_o *)Master_object, 0LL);
                      *(_DWORD *)(v48 + 76) = Master_object;
                    }
                    items = v23->fields._items;
                    v54 = Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__;
                    ++v23->fields._version;
                    if ( !items )
                      goto LABEL_65;
                    size = v23->fields._size;
                    if ( (unsigned int)size >= items->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v23,
                        (Il2CppObject *)v48,
                        *(const MethodInfo_368BC6C **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v56 = &items->obj.klass + size;
                      v23->fields._size = size + 1;
                      v56[4] = (Il2CppClass *)v48;
                      Master_object = sub_1C3B708(v56 + 4);
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_34:
      LODWORD(v27) = OrganizationList->max_length;
    }
    while ( (__int64)++v28 < (int)v27 );
  }
  Master_object = (__int64)v23;
  if ( !v23 )
LABEL_65:
    sub_1C3B9C0(Master_object, v25);
  return (AutoOrganizationManager_ServantData_array *)System_Collections_Generic_List_object___ToArray(
                                                        v23,
                                                        (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
}


void __fastcall AutoOrganizationManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  AutoOrganizationManager_c *v2; // x0
  ListViewSort_o *autoOrganizationInfo; // x0

  if ( (byte_4C1D97A & 1) == 0 )
  {
    sub_1C3B764(&AutoOrganizationManager_TypeInfo, v1);
    byte_4C1D97A = 1;
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
    sub_1C3B9C0(autoOrganizationInfo, v1);
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

  if ( (byte_4C1D985 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_Aggregate_float__float___, userSvtId);
    sub_1C3B764(&Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___, v5);
    sub_1C3B764(&System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo, v6);
    sub_1C3B764(&System_Func_float__float__float__TypeInfo, v7);
    sub_1C3B764(&Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__26_1__, v8);
    sub_1C3B764(&Method_AutoOrganizationManager___c__DisplayClass26_0__GetAdjustTotalRate_b__0__, v9);
    sub_1C3B764(&AutoOrganizationManager___c__DisplayClass26_0_TypeInfo, v10);
    sub_1C3B764(&AutoOrganizationManager___c_TypeInfo, v11);
    byte_4C1D985 = 1;
  }
  v12 = (Il2CppObject *)sub_1C3B9B0(AutoOrganizationManager___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor(v12, 0LL);
  if ( !v12 )
    sub_1C3B9C0(v13, v14);
  v12[1].klass = (Il2CppClass *)userSvtId;
  v15 = (System_Func_T__TResult__o *)sub_1C3B9B0(System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo);
  System_Func_object__float____ctor(
    v15,
    v12,
    Method_AutoOrganizationManager___c__DisplayClass26_0__GetAdjustTotalRate_b__0__,
    0LL);
  v16 = System_Linq_Enumerable__Select_object__float_(
          (System_Collections_Generic_IEnumerable_TSource__o *)questAutoOrganizationAdjustEntities,
          (System_Func_TSource__TResult__o *)v15,
          (const MethodInfo_3022E00 *)Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___);
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
    _9__26_1 = (System_Func_float__float__float__o *)sub_1C3B9B0(System_Func_float__float__float__TypeInfo);
    System_Func_float__float__float____ctor(
      _9__26_1,
      v20,
      Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__26_1__,
      0LL);
    static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    static_fields->__9__26_1 = _9__26_1;
    sub_1C3B708(&static_fields->__9__26_1);
  }
  return System_Linq_Enumerable__Aggregate_float__float_(
           v18,
           1.0,
           (System_Func_TAccumulate__TSource__TAccumulate__o *)_9__26_1,
           (const MethodInfo_2FF92E4 *)Method_System_Linq_Enumerable_Aggregate_float__float___);
}


float __fastcall AutoOrganizationManager__GetAdjustTotalRate_32915928(
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
  Il2CppObject *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  System_Func_T__TResult__o *v15; // x20
  System_Collections_Generic_IEnumerable_TResult__o *v16; // x0
  AutoOrganizationManager___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  System_Func_float__float__float__o *_9__27_1; // x20
  Il2CppObject *v20; // x21
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x0

  if ( (byte_4C1D986 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_Aggregate_float__float___, individualities);
    sub_1C3B764(&Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___, v5);
    sub_1C3B764(&System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo, v6);
    sub_1C3B764(&System_Func_float__float__float__TypeInfo, v7);
    sub_1C3B764(&Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__27_1__, v8);
    sub_1C3B764(&Method_AutoOrganizationManager___c__DisplayClass27_0__GetAdjustTotalRate_b__0__, v9);
    sub_1C3B764(&AutoOrganizationManager___c__DisplayClass27_0_TypeInfo, v10);
    sub_1C3B764(&AutoOrganizationManager___c_TypeInfo, v11);
    byte_4C1D986 = 1;
  }
  v12 = (Il2CppObject *)sub_1C3B9B0(AutoOrganizationManager___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor(v12, 0LL);
  if ( !v12 )
    sub_1C3B9C0(v13, v14);
  v12[1].klass = (Il2CppClass *)individualities;
  sub_1C3B708(&v12[1]);
  v15 = (System_Func_T__TResult__o *)sub_1C3B9B0(System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo);
  System_Func_object__float____ctor(
    v15,
    v12,
    Method_AutoOrganizationManager___c__DisplayClass27_0__GetAdjustTotalRate_b__0__,
    0LL);
  v16 = System_Linq_Enumerable__Select_object__float_(
          (System_Collections_Generic_IEnumerable_TSource__o *)questAutoOrganizationAdjustEntities,
          (System_Func_TSource__TResult__o *)v15,
          (const MethodInfo_3022E00 *)Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___);
  v17 = AutoOrganizationManager___c_TypeInfo;
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)v16;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v17 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__27_1 = v17->static_fields->__9__27_1;
  if ( !_9__27_1 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = AutoOrganizationManager___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v17->static_fields->__9;
    _9__27_1 = (System_Func_float__float__float__o *)sub_1C3B9B0(System_Func_float__float__float__TypeInfo);
    System_Func_float__float__float____ctor(
      _9__27_1,
      v20,
      Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__27_1__,
      0LL);
    static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    static_fields->__9__27_1 = _9__27_1;
    sub_1C3B708(&static_fields->__9__27_1);
  }
  return System_Linq_Enumerable__Aggregate_float__float_(
           v18,
           1.0,
           (System_Func_TAccumulate__TSource__TAccumulate__o *)_9__27_1,
           (const MethodInfo_2FF92E4 *)Method_System_Linq_Enumerable_Aggregate_float__float___);
}


System_Boolean_array *__fastcall AutoOrganizationManager__GetAutoOrganizationSetting(
        ListViewSort_o *sort,
        int32_t *settingUnitNum,
        const MethodInfo *method)
{
  __int64 Filter_42259400; // x0
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

  if ( (byte_4C1D97B & 1) == 0 )
  {
    sub_1C3B764(&bool___TypeInfo, settingUnitNum);
    byte_4C1D97B = 1;
  }
  Filter_42259400 = sub_1C3B80C(bool___TypeInfo, 13LL);
  if ( !sort )
LABEL_38:
    sub_1C3B9C0(Filter_42259400, v6);
  v7 = (System_Boolean_array *)Filter_42259400;
  v8 = 0LL;
  v9 = Filter_42259400 + 32;
  do
  {
    Filter_42259400 = ListViewSort__GetFilter_42259400(sort, v8, 0LL);
    if ( !v7 )
      goto LABEL_38;
    max_length = v7->max_length;
    if ( v8 >= max_length )
      goto LABEL_37;
    *(_BYTE *)(v9 + v8++) = Filter_42259400 & 1;
  }
  while ( v8 != 13 );
  if ( (unsigned int)max_length < 2 )
LABEL_37:
    sub_1C3B9C8(Filter_42259400, v6);
  v11 = v7->m_Items[5];
  v12 = !v7->m_Items[4];
  v13 = !v11;
  v14 = v11;
  v15 = v13;
  v7->m_Items[4] |= v15;
  v7->m_Items[5] = v14 || v12;
  Filter_42259400 = sub_1C3B80C(bool___TypeInfo, 5LL);
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
    if ( !Filter_42259400 )
      goto LABEL_38;
    if ( v17 >= *(unsigned int *)(Filter_42259400 + 24) )
      goto LABEL_37;
    v21 = v7->m_Items[v17 + 6];
    *(_BYTE *)(Filter_42259400 + 32 + v17++) = v21;
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
  Filter_42259400 = sub_1C3B80C(bool___TypeInfo, 6LL);
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
    if ( !Filter_42259400 )
      goto LABEL_38;
    v28 = *(unsigned int *)(Filter_42259400 + 24);
    if ( v24 >= v28 )
      goto LABEL_37;
    v29 = v7->m_Items[v24 + 11];
    *(_BYTE *)(Filter_42259400 + 32 + v24++) = v29;
    if ( v29 )
      LODWORD(v25) = v24;
  }
  while ( v24 != 6 );
  if ( !(_DWORD)v25 )
  {
    v25 = 0LL;
    while ( v25 < v28 )
    {
      *(_BYTE *)(Filter_42259400 + 32 + v25++) = 1;
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
  System_Collections_Generic_List_EventBonusFilterEntity__o *FilterList; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v39; // x24
  System_Collections_Generic_List_object__o *v40; // x26
  AutoOrganizationManager___c_c *v41; // x0
  System_Comparison_T__o *_9__22_0; // x25
  Il2CppObject *v43; // x21
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x0
  System_Collections_Generic_List_object__o *v45; // x0
  System_Collections_Generic_List_object__o *v46; // x0
  int32_t v47; // w25
  int v48; // w8
  __int64 v49; // x26
  __int64 v50; // x26
  __int64 v51; // x21
  __int64 v52; // x27
  int v53; // w8
  __int64 v54; // x27
  int v55; // w24
  char v56; // w20
  __int64 v57; // x21
  SkillLvEntity_o *v58; // x28
  __int64 v59; // x21
  __int64 v60; // x29
  int32_t v61; // w21
  EventUpValInfo_o *v62; // x29
  __int64 v63; // x21
  __int64 v64; // x27
  int v65; // w8
  __int64 v66; // x26
  unsigned int v67; // w20
  __int64 v68; // x8
  ServantSkillMaster_o *v70; // [xsp+8h] [xbp-88h]
  Il2CppObject *v71; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_object__o *v72; // [xsp+18h] [xbp-78h]
  EventUpValSetupInfo_o *setupInfo; // [xsp+20h] [xbp-70h]
  EventUpValInfo_o *eventUpVallInfo; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16

  if ( (byte_4C1D981 & 1) == 0 )
  {
    sub_1C3B764(&System_Comparison_EventBonusFilterEntity__TypeInfo, method);
    sub_1C3B764(&Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___, v3);
    sub_1C3B764(&Method_DataManager_GetMaster_EventBonusFilterMaster___, v4);
    sub_1C3B764(&Method_DataManager_GetMaster_EventMaster___, v5);
    sub_1C3B764(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_1C3B764(&Method_DataManager_GetMaster_ServantSkillMaster___, v7);
    sub_1C3B764(&Method_DataManager_GetMaster_SkillLvMaster___, v8);
    sub_1C3B764(&DataManager_TypeInfo, v9);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToArray_int___, v11);
    sub_1C3B764(&EventUpValInfo_TypeInfo, v12);
    sub_1C3B764(&EventUpValSetupInfo_TypeInfo, v13);
    sub_1C3B764(&Method_System_Collections_Generic_HashSet_int__Add__, v14);
    sub_1C3B764(&Method_System_Collections_Generic_HashSet_int__Contains__, v15);
    sub_1C3B764(&Method_System_Collections_Generic_HashSet_int___ctor__, v16);
    sub_1C3B764(&Method_System_Collections_Generic_HashSet_int__get_Count__, v17);
    sub_1C3B764(&System_Collections_Generic_HashSet_int__TypeInfo, v18);
    sub_1C3B764(&int___TypeInfo, v19);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__, v20);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__, v21);
    sub_1C3B764(&Method_System_Collections_Generic_List_SkillInfo___ctor__, v22);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__, v23);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__, v24);
    sub_1C3B764(&System_Collections_Generic_List_EventUpValInfo__TypeInfo, v25);
    sub_1C3B764(&System_Collections_Generic_List_SkillInfo__TypeInfo, v26);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27);
    sub_1C3B764(&Method_AutoOrganizationManager___c__GetEventBonusIds_b__22_0__, v28);
    sub_1C3B764(&AutoOrganizationManager___c_TypeInfo, v29);
    byte_4C1D981 = 1;
  }
  eventUpVallInfo = 0LL;
  v30 = (System_Collections_Generic_HashSet_int__o *)sub_1C3B9B0(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v30,
    (const MethodInfo_35415FC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventMaster___);
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
          (const MethodInfo_3541CF0 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
    return v30;
  }
  v35 = System_Linq_Enumerable__ToArray_int_(
          v34,
          (const MethodInfo_302AB30 *)Method_System_Linq_Enumerable_ToArray_int___);
  setupInfo = (EventUpValSetupInfo_o *)sub_1C3B9B0(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_40351540(setupInfo, v35, 0, 0, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v71 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantMaster___);
  v70 = (ServantSkillMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  v36 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v37 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  Master_object = sub_1C3B80C(int___TypeInfo, 1LL);
  if ( !Master_object )
    goto LABEL_61;
  v32 = Master_object;
  if ( !*(_DWORD *)(Master_object + 24) )
    goto LABEL_62;
  *(_DWORD *)(Master_object + 32) = eventId;
  if ( !v37 )
LABEL_61:
    sub_1C3B9C0(Master_object, v32);
  FilterList = EventBonusFilterMaster__GetFilterList(
                 (EventBonusFilterMaster_o *)v37,
                 (System_Int32_array *)Master_object,
                 1,
                 1,
                 0LL);
  v39 = (DataMasterBase_TMaster__TEntity__PKType__o *)v71;
  if ( FilterList )
  {
    v40 = (System_Collections_Generic_List_object__o *)FilterList;
    if ( FilterList->fields._size >= 1 )
    {
      v41 = AutoOrganizationManager___c_TypeInfo;
      if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
        v41 = AutoOrganizationManager___c_TypeInfo;
      }
      _9__22_0 = (System_Comparison_T__o *)v41->static_fields->__9__22_0;
      if ( !_9__22_0 )
      {
        if ( !v41->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v41);
          v41 = AutoOrganizationManager___c_TypeInfo;
        }
        v43 = (Il2CppObject *)v41->static_fields->__9;
        _9__22_0 = (System_Comparison_T__o *)sub_1C3B9B0(System_Comparison_EventBonusFilterEntity__TypeInfo);
        System_Comparison_object____ctor(
          _9__22_0,
          v43,
          Method_AutoOrganizationManager___c__GetEventBonusIds_b__22_0__,
          0LL);
        static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
        static_fields->__9__22_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__22_0;
        sub_1C3B708(&static_fields->__9__22_0);
      }
      System_Collections_Generic_List_object___Sort_57202480(
        v40,
        _9__22_0,
        (const MethodInfo_368D730 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
      v45 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventUpValInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v45,
        (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
      v46 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_SkillInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v46,
        (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
      if ( v40->fields._size >= 1 )
      {
        v47 = 0;
        v72 = v40;
        do
        {
          Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                     v40,
                                     v47,
                                     (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
          if ( !Master_object )
            goto LABEL_61;
          v48 = *(_DWORD *)(Master_object + 20);
          v49 = Master_object;
          if ( v48 == 2 )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
            if ( !Master_object )
              goto LABEL_61;
            Master_object = (__int64)EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                                       (EventBonusFilterGroupMemberMaster_o *)Master_object,
                                       *(_DWORD *)(v49 + 24),
                                       0LL);
            if ( !Master_object )
              goto LABEL_61;
            v65 = *(_DWORD *)(Master_object + 24);
            v66 = Master_object;
            if ( v65 >= 1 )
            {
              v67 = 0;
              while ( v67 < v65 )
              {
                v68 = *(_QWORD *)(v66 + 8LL * (int)v67 + 32);
                if ( !v68 || !v30 )
                  goto LABEL_61;
                Master_object = System_Collections_Generic_HashSet_int___Add(
                                  v30,
                                  *(_DWORD *)(v68 + 20),
                                  (const MethodInfo_3542800 *)Method_System_Collections_Generic_HashSet_int__Add__);
                v65 = *(_DWORD *)(v66 + 24);
                if ( (int)++v67 >= v65 )
                  goto LABEL_59;
              }
LABEL_62:
              sub_1C3B9C8(Master_object, v32);
            }
          }
          else if ( v48 == 1 )
          {
            if ( !v39 )
              goto LABEL_61;
            Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                       v39,
                                       *(_DWORD *)(Master_object + 24),
                                       (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Master_object )
              goto LABEL_61;
            v50 = Master_object;
            v52 = *(_QWORD *)(Master_object + 16);
            v51 = *(_QWORD *)(Master_object + 24);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v75.fields.currentCryptoKey = v52;
            *(_QWORD *)&v75.fields.fakeValue = v51;
            v32 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v75, 0LL);
            Master_object = (__int64)v70;
            if ( !v70 )
              goto LABEL_61;
            Master_object = (__int64)ServantSkillMaster__getServantSkillList(v70, v32, 0LL);
            if ( !Master_object )
              goto LABEL_61;
            v53 = *(_DWORD *)(Master_object + 24);
            v54 = Master_object;
            if ( v53 >= 1 )
            {
              v55 = 0;
              v56 = 0;
              do
              {
                if ( v55 >= (unsigned int)v53 )
                  goto LABEL_62;
                v57 = *(_QWORD *)(v54 + 8LL * v55 + 32);
                if ( !v57 || !v36 )
                  goto LABEL_61;
                Master_object = (__int64)SkillLvMaster__GetEntity((SkillLvMaster_o *)v36, *(_DWORD *)(v57 + 28), 1, 0LL);
                if ( Master_object && !*(_DWORD *)(v57 + 44) )
                {
                  v58 = (SkillLvEntity_o *)Master_object;
                  v59 = *(_QWORD *)(v50 + 16);
                  v60 = *(_QWORD *)(v50 + 24);
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v76.fields.currentCryptoKey = v59;
                  *(_QWORD *)&v76.fields.fakeValue = v60;
                  v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v76, 0LL);
                  v62 = (EventUpValInfo_o *)sub_1C3B9B0(EventUpValInfo_TypeInfo);
                  EventUpValInfo___ctor(v62, setupInfo, v61, 1, 1, 0, 0LL);
                  eventUpVallInfo = v62;
                  Master_object = SkillLvEntity__getEventUpVal_41417724(v58, &eventUpVallInfo, 1, 1, 0, 1, 0LL, 0LL);
                  v56 |= Master_object;
                }
                v53 = *(_DWORD *)(v54 + 24);
                ++v55;
              }
              while ( v55 < v53 );
              v39 = (DataMasterBase_TMaster__TEntity__PKType__o *)v71;
              if ( (v56 & 1) != 0 )
              {
                v64 = *(_QWORD *)(v50 + 16);
                v63 = *(_QWORD *)(v50 + 24);
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v77.fields.currentCryptoKey = v64;
                *(_QWORD *)&v77.fields.fakeValue = v63;
                Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v77, 0LL);
                if ( !v30 )
                  goto LABEL_61;
                System_Collections_Generic_HashSet_int___Add(
                  v30,
                  Master_object,
                  (const MethodInfo_3542800 *)Method_System_Collections_Generic_HashSet_int__Add__);
              }
            }
          }
LABEL_59:
          v40 = v72;
          ++v47;
        }
        while ( v47 < v72->fields._size );
      }
    }
  }
  return v30;
}


int32_t __fastcall AutoOrganizationManager__GetRarityBit(System_Boolean_array *rarityFlag, const MethodInfo *method)
{
  unsigned __int64 max_length; // x10
  unsigned __int64 v4; // x9
  __int64 v5; // x0
  bool *v6; // x8

  if ( !rarityFlag )
    sub_1C3B9C0(0LL, method);
  max_length = rarityFlag->max_length;
  v4 = 0LL;
  v5 = 0LL;
  v6 = &rarityFlag->m_Items[4];
  do
  {
    if ( (__int64)v4 <= (int)max_length )
    {
      if ( v4 >= max_length )
        sub_1C3B9C8(v5, method);
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
  __int64 Filter_42259448; // x0
  __int64 v4; // x1
  System_Boolean_array *v5; // x19
  unsigned __int64 v6; // x21
  __int64 v7; // x23
  unsigned __int64 max_length; // x8
  _BOOL4 v9; // w9
  bool v10; // w8
  bool v11; // zf
  bool v12; // w9
  char v13; // w11
  unsigned int v14; // w8
  unsigned __int64 v15; // x9
  bool v16; // cf
  __int64 v17; // x8
  int v18; // w11
  _BOOL4 v19; // w13
  __int64 v20; // x9

  if ( (byte_4C1D97C & 1) == 0 )
  {
    sub_1C3B764(&bool___TypeInfo, method);
    byte_4C1D97C = 1;
  }
  Filter_42259448 = sub_1C3B80C(bool___TypeInfo, 7LL);
  if ( !sort )
LABEL_25:
    sub_1C3B9C0(Filter_42259448, v4);
  v5 = (System_Boolean_array *)Filter_42259448;
  v6 = 0LL;
  v7 = Filter_42259448 + 32;
  do
  {
    Filter_42259448 = ListViewSort__GetFilter_42259448(sort, v6, 0LL);
    if ( !v5 )
      goto LABEL_25;
    max_length = v5->max_length;
    if ( v6 >= max_length )
      goto LABEL_24;
    *(_BYTE *)(v7 + v6++) = Filter_42259448 & 1;
  }
  while ( v6 != 7 );
  if ( (unsigned int)max_length < 2 )
LABEL_24:
    sub_1C3B9C8(Filter_42259448, v4);
  v9 = v5->m_Items[5];
  v10 = !v5->m_Items[4];
  v11 = !v9;
  v12 = v9;
  v13 = v11;
  v5->m_Items[4] |= v13;
  v5->m_Items[5] = v12 || v10;
  Filter_42259448 = sub_1C3B80C(bool___TypeInfo, 5LL);
  v14 = v5->max_length;
  v15 = 0LL;
  v16 = v14 >= 2;
  v17 = v14 - 2;
  if ( (_DWORD)v17 == 0 || !v16 )
    v17 = 0LL;
  LOBYTE(v18) = 1;
  do
  {
    if ( v17 == v15 )
      goto LABEL_24;
    if ( !Filter_42259448 )
      goto LABEL_25;
    if ( v15 >= *(unsigned int *)(Filter_42259448 + 24) )
      goto LABEL_24;
    v19 = v5->m_Items[v15 + 6];
    *(_BYTE *)(Filter_42259448 + 32 + v15++) = v19;
    v18 = (unsigned __int8)v18 & !v19;
  }
  while ( v15 != 5 );
  if ( v18 )
  {
    v20 = 0LL;
    while ( v17 != v20 )
    {
      v5->m_Items[v20++ + 6] = 1;
      if ( v20 == 5 )
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

  if ( (byte_4C1D979 & 1) == 0 )
  {
    sub_1C3B764(&AutoOrganizationManager_TypeInfo, v1);
    byte_4C1D979 = 1;
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
    sub_1C3B9C0(autoOrganizationInfo, v1);
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

  if ( (byte_4C1D983 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___, *(_QWORD *)&svtId);
    sub_1C3B764(&DataManager_TypeInfo, v5);
    byte_4C1D983 = 1;
  }
  if ( !restrictionInfo || !restrictionInfo->fields.isAllOutBattle )
    return 0;
  allOutBattleGroupNo = restrictionInfo->fields.allOutBattleGroupNo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( !Master_object )
    sub_1C3B9C0(0LL, v8);
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

  if ( (byte_4C1D984 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_UserEventDataLostMaster___, *(_QWORD *)&svtId);
    sub_1C3B764(&DataManager_TypeInfo, v5);
    sub_1C3B764(&NetworkManager_TypeInfo, v6);
    byte_4C1D984 = 1;
  }
  entity = 0LL;
  if ( !restrictionInfo || !restrictionInfo->fields.isDataLostBattle )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v7);
    byte_4C1C955 = 1;
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
    sub_1C3B9C0(IsRestart, v7);
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

  if ( (byte_4C1D982 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_UserEventServantFatigueMaster___, *(_QWORD *)&svtId);
    sub_1C3B764(&DataManager_TypeInfo, v5);
    sub_1C3B764(&NetworkManager_TypeInfo, v6);
    byte_4C1D982 = 1;
  }
  recoverAt = 0LL;
  isRecover = 0;
  if ( !restrictionInfo || !restrictionInfo->fields.isFatigure )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserEventServantFatigueMaster___);
  if ( !Master_object )
    sub_1C3B9C0(0LL, v8);
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
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  monitor_high = enemyClassId;
  if ( (byte_4C1D97E & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_ServantClassMaster___, *(_QWORD *)&enemyClassId);
    sub_1C3B764(&DataManager_TypeInfo, v5);
    sub_1C3B764(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v6);
    sub_1C3B764(&Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___, v7);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__, v10);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__get_Current__,
      v11);
    sub_1C3B764(&System_Func_AutoOrganizationManager_ServantData__float__TypeInfo, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___77872096, v14);
    sub_1C3B764(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo, v15);
    sub_1C3B764(&Method_AutoOrganizationManager___c__SortClassRelation_b__19_0__, v16);
    sub_1C3B764(&AutoOrganizationManager___c_TypeInfo, v17);
    byte_4C1D97E = 1;
  }
  entity = 0LL;
  memset(&v36, 0, sizeof(v36));
  v18 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor_57193824(
    v18,
    (System_Collections_Generic_IEnumerable_T__o *)dataList,
    (const MethodInfo_368B560 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___77872096);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantClassMaster___);
  v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( monitor_high )
  {
    if ( !Master_object )
      goto LABEL_32;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &entity,
                                      monitor_high,
                                      (const MethodInfo_329AE94 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_32;
      monitor_high = HIDWORD(entity[3].monitor);
    }
  }
  if ( !v18 )
LABEL_32:
    sub_1C3B9C0(Master_object, v20);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    v18,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__);
  v36 = v35;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__);
    if ( !v22 )
      break;
    current = v36.fields._current;
    if ( !v36.fields._current )
      sub_1C3B9C0(v22, v23);
    if ( !v21 )
      sub_1C3B9C0(v22, v23);
    klass = (int32_t)v36.fields._current[2].klass;
    v26 = DataMasterBase_object__object__int___TryGetEntity(
            v21,
            &entity,
            klass,
            (const MethodInfo_329AE94 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( v26 )
    {
      if ( !entity )
        sub_1C3B9C0(v26, v27);
      klass = HIDWORD(entity[3].monitor);
    }
    if ( monitor_high )
      Rate = ClassRelationMaster__getRate(klass, monitor_high, 0LL);
    else
      Rate = 1.0;
    *(float *)&current[3].klass = *(float *)&current[4].monitor * (float)(Rate * (float)SHIDWORD(current[2].klass));
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__);
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
    _9__19_0 = (System_Func_T__TResult__o *)sub_1C3B9B0(System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    System_Func_object__float____ctor(
      _9__19_0,
      v31,
      Method_AutoOrganizationManager___c__SortClassRelation_b__19_0__,
      0LL);
    static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = (struct System_Func_AutoOrganizationManager_ServantData__float__o *)_9__19_0;
    sub_1C3B708(&static_fields->__9__19_0);
  }
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__float_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v18,
                                                               (System_Func_TSource__TKey__o *)_9__19_0,
                                                               (const MethodInfo_301A8C4 *)Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___);
  return (AutoOrganizationManager_ServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                                        v33,
                                                        (const MethodInfo_302ACC8 *)Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___);
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
  System_Linq_IOrderedEnumerable_TSource__o *v44; // x0
  AutoOrganizationManager___c_c *v45; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v46; // x19
  System_Func_object__int__o *_9__20_1; // x20
  Il2CppObject *v48; // x21
  struct AutoOrganizationManager___c_StaticFields *v49; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v50; // x0
  AutoOrganizationManager___c_c *v51; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v52; // x19
  System_Func_T__TResult__o *_9__20_2; // x20
  Il2CppObject *v54; // x21
  struct AutoOrganizationManager___c_StaticFields *v55; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v56; // x0
  AutoOrganizationManager___c_c *v57; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v58; // x19
  System_Func_object__int__o *_9__20_3; // x20
  Il2CppObject *v60; // x21
  struct AutoOrganizationManager___c_StaticFields *v61; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v62; // x0
  AutoOrganizationManager___c_c *v63; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v64; // x19
  System_Func_T__TResult__o *_9__20_4; // x20
  Il2CppObject *v66; // x21
  struct AutoOrganizationManager___c_StaticFields *v67; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x0
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+20h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF

  monitor_high = enemyClassId;
  if ( (byte_4C1D97F & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_ServantClassMaster___, *(_QWORD *)&enemyClassId);
    sub_1C3B764(&DataManager_TypeInfo, v5);
    sub_1C3B764(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v6);
    sub_1C3B764(&Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___, v7);
    sub_1C3B764(&Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__int___, v8);
    sub_1C3B764(&Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__long___, v9);
    sub_1C3B764(&Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__float___, v10);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__, v13);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__get_Current__,
      v14);
    sub_1C3B764(&System_Func_AutoOrganizationManager_ServantData__float__TypeInfo, v15);
    sub_1C3B764(&System_Func_AutoOrganizationManager_ServantData__long__TypeInfo, v16);
    sub_1C3B764(&System_Func_AutoOrganizationManager_ServantData__int__TypeInfo, v17);
    sub_1C3B764(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__, v18);
    sub_1C3B764(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___77872096, v19);
    sub_1C3B764(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo, v20);
    sub_1C3B764(&Method_AutoOrganizationManager___c__SortServant_b__20_0__, v21);
    sub_1C3B764(&Method_AutoOrganizationManager___c__SortServant_b__20_1__, v22);
    sub_1C3B764(&Method_AutoOrganizationManager___c__SortServant_b__20_2__, v23);
    sub_1C3B764(&Method_AutoOrganizationManager___c__SortServant_b__20_3__, v24);
    sub_1C3B764(&Method_AutoOrganizationManager___c__SortServant_b__20_4__, v25);
    sub_1C3B764(&AutoOrganizationManager___c_TypeInfo, v26);
    byte_4C1D97F = 1;
  }
  entity = 0LL;
  memset(&v71, 0, sizeof(v71));
  v27 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor_57193824(
    v27,
    (System_Collections_Generic_IEnumerable_T__o *)dataList,
    (const MethodInfo_368B560 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___77872096);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantClassMaster___);
  v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( monitor_high )
  {
    if ( !Master_object )
      goto LABEL_56;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &entity,
                                      monitor_high,
                                      (const MethodInfo_329AE94 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_56;
      monitor_high = HIDWORD(entity[3].monitor);
    }
  }
  if ( !v27 )
LABEL_56:
    sub_1C3B9C0(Master_object, v29);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v70,
    v27,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__);
  v71 = v70;
  while ( 1 )
  {
    v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v71,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__);
    if ( !v31 )
      break;
    current = v71.fields._current;
    if ( !v71.fields._current )
      sub_1C3B9C0(v31, v32);
    if ( !v30 )
      sub_1C3B9C0(v31, v32);
    klass = (int32_t)v71.fields._current[2].klass;
    v35 = DataMasterBase_object__object__int___TryGetEntity(
            v30,
            &entity,
            klass,
            (const MethodInfo_329AE94 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( v35 )
    {
      if ( !entity )
        sub_1C3B9C0(v35, v36);
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
    &v71,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__);
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
    _9__20_0 = (System_Func_T__TResult__o *)sub_1C3B9B0(System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    System_Func_object__float____ctor(_9__20_0, v42, Method_AutoOrganizationManager___c__SortServant_b__20_0__, 0LL);
    static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    static_fields->__9__20_0 = (struct System_Func_AutoOrganizationManager_ServantData__float__o *)_9__20_0;
    sub_1C3B708(&static_fields->__9__20_0);
  }
  v44 = System_Linq_Enumerable__OrderByDescending_object__float_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v27,
          (System_Func_TSource__TKey__o *)_9__20_0,
          (const MethodInfo_301A8C4 *)Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___);
  v45 = AutoOrganizationManager___c_TypeInfo;
  v46 = v44;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v45 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__20_1 = (System_Func_object__int__o *)v45->static_fields->__9__20_1;
  if ( !_9__20_1 )
  {
    if ( !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45);
      v45 = AutoOrganizationManager___c_TypeInfo;
    }
    v48 = (Il2CppObject *)v45->static_fields->__9;
    _9__20_1 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_AutoOrganizationManager_ServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__20_1, v48, Method_AutoOrganizationManager___c__SortServant_b__20_1__, 0LL);
    v49 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v49->__9__20_1 = (struct System_Func_AutoOrganizationManager_ServantData__int__o *)_9__20_1;
    sub_1C3B708(&v49->__9__20_1);
  }
  v50 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v46,
          (System_Func_TSource__TKey__o *)_9__20_1,
          (const MethodInfo_302A558 *)Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__int___);
  v51 = AutoOrganizationManager___c_TypeInfo;
  v52 = v50;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v51 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__20_2 = (System_Func_T__TResult__o *)v51->static_fields->__9__20_2;
  if ( !_9__20_2 )
  {
    if ( !v51->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v51);
      v51 = AutoOrganizationManager___c_TypeInfo;
    }
    v54 = (Il2CppObject *)v51->static_fields->__9;
    _9__20_2 = (System_Func_T__TResult__o *)sub_1C3B9B0(System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    System_Func_object__float____ctor(_9__20_2, v54, Method_AutoOrganizationManager___c__SortServant_b__20_2__, 0LL);
    v55 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v55->__9__20_2 = (struct System_Func_AutoOrganizationManager_ServantData__float__o *)_9__20_2;
    sub_1C3B708(&v55->__9__20_2);
  }
  v56 = System_Linq_Enumerable__ThenByDescending_object__float_(
          v52,
          (System_Func_TSource__TKey__o *)_9__20_2,
          (const MethodInfo_302A6F0 *)Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__float___);
  v57 = AutoOrganizationManager___c_TypeInfo;
  v58 = v56;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v57 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__20_3 = (System_Func_object__int__o *)v57->static_fields->__9__20_3;
  if ( !_9__20_3 )
  {
    if ( !v57->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v57);
      v57 = AutoOrganizationManager___c_TypeInfo;
    }
    v60 = (Il2CppObject *)v57->static_fields->__9;
    _9__20_3 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_AutoOrganizationManager_ServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__20_3, v60, Method_AutoOrganizationManager___c__SortServant_b__20_3__, 0LL);
    v61 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v61->__9__20_3 = (struct System_Func_AutoOrganizationManager_ServantData__int__o *)_9__20_3;
    sub_1C3B708(&v61->__9__20_3);
  }
  v62 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v58,
          (System_Func_TSource__TKey__o *)_9__20_3,
          (const MethodInfo_302A558 *)Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__int___);
  v63 = AutoOrganizationManager___c_TypeInfo;
  v64 = v62;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v63 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__20_4 = (System_Func_T__TResult__o *)v63->static_fields->__9__20_4;
  if ( !_9__20_4 )
  {
    if ( !v63->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v63);
      v63 = AutoOrganizationManager___c_TypeInfo;
    }
    v66 = (Il2CppObject *)v63->static_fields->__9;
    _9__20_4 = (System_Func_T__TResult__o *)sub_1C3B9B0(System_Func_AutoOrganizationManager_ServantData__long__TypeInfo);
    System_Func_object__long____ctor(_9__20_4, v66, Method_AutoOrganizationManager___c__SortServant_b__20_4__, 0LL);
    v67 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v67->__9__20_4 = (struct System_Func_AutoOrganizationManager_ServantData__long__o *)_9__20_4;
    sub_1C3B708(&v67->__9__20_4);
  }
  v68 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenByDescending_object__long_(
                                                               v64,
                                                               (System_Func_TSource__TKey__o *)_9__20_4,
                                                               (const MethodInfo_302A624 *)Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__long___);
  return (AutoOrganizationManager_ServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                                        v68,
                                                        (const MethodInfo_302ACC8 *)Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___);
}


ListViewSort_o *__fastcall AutoOrganizationManager__get_SortInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  AutoOrganizationManager_c *v2; // x0

  if ( (byte_4C1D977 & 1) == 0 )
  {
    sub_1C3B764(&AutoOrganizationManager_TypeInfo, v1);
    byte_4C1D977 = 1;
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

  if ( (byte_4C1D978 & 1) == 0 )
  {
    sub_1C3B764(&AutoOrganizationManager_TypeInfo, v1);
    byte_4C1D978 = 1;
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

  if ( (byte_4C1D988 & 1) == 0 )
  {
    sub_1C3B764(&AutoOrganizationManager___c_TypeInfo, v1);
    byte_4C1D988 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(AutoOrganizationManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  AutoOrganizationManager___c_TypeInfo->static_fields->__9 = (struct AutoOrganizationManager___c_o *)v2;
  sub_1C3B708(AutoOrganizationManager___c_TypeInfo->static_fields);
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
    sub_1C3B9C0(this, a);
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
    sub_1C3B9C0(this, a);
  return b->fields.priority - a->fields.priority;
}


float __fastcall AutoOrganizationManager___c___SortClassRelation_b__19_0(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1C3B9C0(this, 0LL);
  return d->fields.relationNum;
}


float __fastcall AutoOrganizationManager___c___SortServant_b__20_0(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1C3B9C0(this, 0LL);
  return d->fields.relationAtk;
}


int32_t __fastcall AutoOrganizationManager___c___SortServant_b__20_1(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1C3B9C0(this, 0LL);
  return d->fields.treasureDeviceLv;
}


float __fastcall AutoOrganizationManager___c___SortServant_b__20_2(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1C3B9C0(this, 0LL);
  return d->fields.relationDef;
}


int32_t __fastcall AutoOrganizationManager___c___SortServant_b__20_3(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1C3B9C0(this, 0LL);
  return d->fields.svtId;
}


int64_t __fastcall AutoOrganizationManager___c___SortServant_b__20_4(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1C3B9C0(this, 0LL);
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
    sub_1C3B9C0(this, 0LL);
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
    sub_1C3B9C0(this, 0LL);
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
    sub_1C3B9C0(this, 0LL);
  return QuestAutoOrganizationAdjustEntity__GetAdjustRate_40909736(entity, this->fields.individualities, 0LL);
}