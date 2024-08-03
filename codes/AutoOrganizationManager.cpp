void __fastcall AutoOrganizationManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ListViewSort_o *v6; // x19
  struct AutoOrganizationManager_StaticFields *static_fields; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  ListViewSort_o *v10; // x19
  struct AutoOrganizationManager_StaticFields *v11; // x0

  if ( (byte_49F8082 & 1) == 0 )
  {
    sub_1B640C8(&AutoOrganizationManager_TypeInfo, v1);
    sub_1B640C8(&ListViewSort_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_2612/*"AutoOrganization"*/, v4);
    sub_1B640C8(&StringLiteral_2618/*"AutoOrganizationWaveBattle"*/, v5);
    byte_49F8082 = 1;
  }
  *(_QWORD *)AutoOrganizationManager_TypeInfo->static_fields = 0x296B0000296ALL;
  v6 = (ListViewSort_o *)sub_1B64314(ListViewSort_TypeInfo, v1, v2);
  ListViewSort___ctor_40426136(v6, (System_String_o *)StringLiteral_2612/*"AutoOrganization"*/, 3, 0, 0LL);
  static_fields = AutoOrganizationManager_TypeInfo->static_fields;
  static_fields->autoOrganizationInfo = v6;
  sub_1B6406C(&static_fields->autoOrganizationInfo);
  v10 = (ListViewSort_o *)sub_1B64314(ListViewSort_TypeInfo, v8, v9);
  ListViewSort___ctor_40426136(v10, (System_String_o *)StringLiteral_2618/*"AutoOrganizationWaveBattle"*/, 3, 0, 0LL);
  v11 = AutoOrganizationManager_TypeInfo->static_fields;
  v11->waveBattleAutoOrganizationInfo = v10;
  sub_1B6406C(&v11->waveBattleAutoOrganizationInfo);
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
  UserServantEntity_array *ServantEquipList; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  System_Collections_Generic_List_object__o *v35; // x20
  __int64 v36; // x1
  __int64 v37; // x2
  System_Collections_Generic_HashSet_int__o *v38; // x24
  __int64 v39; // x1
  __int64 v40; // x2
  System_Collections_Generic_HashSet_int__o *v41; // x23
  const MethodInfo *v42; // x1
  __int64 v43; // x2
  AutoOrganizationServantBonusFilterEquipComponent_c *v44; // x0
  struct AutoOrganizationServantBonusFilterEquipComponent_StaticFields *static_fields; // x9
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID; // x25
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID; // x26
  Il2CppObject *v48; // x27
  int v49; // w28
  System_String_o *v50; // x0
  System_String_o *v51; // x0
  System_String_o *v52; // x0
  System_String_o *v53; // x0
  System_String_o *v54; // x0
  System_String_o *v55; // x0
  System_String_o *v56; // x0
  System_String_o *v57; // x0
  int v58; // w8
  __int64 v59; // x29
  unsigned int v60; // w24
  __int64 v61; // x8
  __int64 v62; // x8
  unsigned __int64 i; // x29
  UserServantEntity_o *v64; // x25
  __int64 v65; // x26
  __int64 v66; // x27
  int32_t v67; // w0
  __int64 v68; // x26
  __int64 v69; // x27
  int32_t v70; // w0
  __int64 v71; // x26
  __int128 v72; // q0
  __int64 v73; // x27
  __int64 v74; // x28
  int32_t v75; // w0
  int32_t v76; // w2
  int32_t atk; // w8
  Il2CppObject *v78; // x8
  float v79; // s13
  float v80; // s13
  __int64 v81; // x27
  __int64 v82; // x28
  float v83; // s0
  System_Collections_Generic_IEnumerable_TSource__o *v84; // x27
  AutoOrganizationManager_c *v85; // x0
  float v86; // s0
  AutoOrganizationManager_c *v87; // x0
  struct System_Object_array *items; // x8
  _QWORD *v89; // x9
  __int64 size; // x10
  Il2CppClass **v91; // x0
  __int64 v92; // x26
  __int64 v93; // x27
  int32_t v94; // w0
  __int64 v95; // x25
  __int64 v96; // x26
  struct System_Int32_array *v97; // x8
  _QWORD *v98; // x9
  __int64 v99; // x10
  System_Comparison_T__o *v100; // x19
  Il2CppObject *v101; // x21
  struct AutoOrganizationManager___c_StaticFields *v102; // x0
  System_Collections_Generic_HashSet_int__o *v104; // [xsp+0h] [xbp-F0h]
  DataMasterBase_TMaster__TEntity__PKType__o *v105; // [xsp+8h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v106; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v107; // [xsp+30h] [xbp-C0h]
  int v108; // [xsp+54h] [xbp-9Ch] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-98h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v110; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // 0:x0.16

  if ( (byte_49F807C & 1) == 0 )
  {
    sub_1B640C8(&AutoOrganizationManager_TypeInfo, organizedEquipIdList);
    sub_1B640C8(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo, v5);
    sub_1B640C8(&System_Comparison_AutoOrganizationManager_ServantData__TypeInfo, v6);
    sub_1B640C8(&Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantMaster___, v9);
    sub_1B640C8(&DataManager_TypeInfo, v10);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v11);
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, v12);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Add__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Contains__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__get_Count__, v16);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Sort__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__, v23);
    sub_1B640C8(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo, v24);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v26);
    sub_1B640C8(&ServantBonusFilterSelectMenu_TypeInfo, v27);
    sub_1B640C8(&AutoOrganizationManager_ServantData_TypeInfo, v28);
    sub_1B640C8(&Method_AutoOrganizationManager___c__AutoOrganizationEquip_b__20_0__, v29);
    sub_1B640C8(&AutoOrganizationManager___c_TypeInfo, v30);
    byte_49F807C = 1;
  }
  entity = 0LL;
  v108 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_98;
  ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)Master_object, 0LL);
  v35 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo,
                                                       v33,
                                                       v34);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
  v105 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
  v38 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v36,
                                                       v37);
  System_Collections_Generic_HashSet_int____ctor(
    v38,
    (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  v41 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v39,
                                                       v40);
  System_Collections_Generic_HashSet_int____ctor(
    v41,
    (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( eventId )
  {
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    Master_object = (__int64)AutoOrganizationManager__GetEventBonusIds(eventId, v42);
    if ( !Master_object )
      goto LABEL_98;
    v104 = (System_Collections_Generic_HashSet_int__o *)Master_object;
    if ( *(int *)(Master_object + 32) >= 1 )
    {
      v44 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
        v44 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      }
      static_fields = v44->static_fields;
      SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID = static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID;
      SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v48 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
      if ( !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
      Master_object = ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0LL);
      v108 = 0;
      if ( (int)Master_object >= 1 )
      {
        v49 = Master_object;
        while ( 1 )
        {
          v50 = System_Int32__ToString((int32_t)&v108, 0LL);
          v51 = System_String__Concat_61375396(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v50, 0LL);
          if ( UnityEngine_PlayerPrefs__HasKey(v51, 0LL) )
          {
            v52 = System_Int32__ToString((int32_t)&v108, 0LL);
            v53 = System_String__Concat_61375396(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v52, 0LL);
            Master_object = UnityEngine_PlayerPrefs__GetInt_69085444(v53, 0LL);
            if ( !v41 )
              goto LABEL_98;
            System_Collections_Generic_HashSet_int___Add(
              v41,
              Master_object,
              (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
          v54 = System_Int32__ToString((int32_t)&v108, 0LL);
          v55 = System_String__Concat_61375396(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v54, 0LL);
          Master_object = UnityEngine_PlayerPrefs__HasKey(v55, 0LL);
          if ( (Master_object & 1) != 0 )
          {
            v56 = System_Int32__ToString((int32_t)&v108, 0LL);
            v57 = System_String__Concat_61375396(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v56, 0LL);
            Master_object = UnityEngine_PlayerPrefs__GetInt_69085444(v57, 0LL);
            if ( !v48 )
              goto LABEL_98;
            Master_object = (__int64)EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                                       (EventBonusFilterGroupMemberMaster_o *)v48,
                                       Master_object,
                                       0LL);
            if ( !Master_object )
              goto LABEL_98;
            v58 = *(_DWORD *)(Master_object + 24);
            v59 = Master_object;
            if ( v58 >= 1 )
              break;
          }
LABEL_31:
          if ( ++v108 >= v49 )
            goto LABEL_34;
        }
        v60 = 0;
        while ( 1 )
        {
          if ( v60 >= v58 )
LABEL_99:
            sub_1B6432C(Master_object, v42);
          v61 = *(_QWORD *)(v59 + 8LL * (int)v60 + 32);
          if ( !v61 || !v41 )
            break;
          Master_object = System_Collections_Generic_HashSet_int___Add(
                            v41,
                            *(_DWORD *)(v61 + 20),
                            (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
          v58 = *(_DWORD *)(v59 + 24);
          if ( (int)++v60 >= v58 )
            goto LABEL_31;
        }
LABEL_98:
        sub_1B64324(Master_object);
      }
    }
  }
  else
  {
    v104 = v38;
  }
LABEL_34:
  if ( !ServantEquipList )
    goto LABEL_98;
  v62 = *(_QWORD *)&ServantEquipList->max_length;
  if ( (int)v62 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v62; ++i )
    {
      if ( i >= (unsigned int)v62 )
        goto LABEL_99;
      v64 = ServantEquipList->m_Items[i];
      if ( !v64 )
        goto LABEL_89;
      if ( organizedEquipIdList )
      {
        v66 = *(_QWORD *)&v64->fields.svtId.fields.currentCryptoKey;
        v65 = *(_QWORD *)&v64->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v110.fields.currentCryptoKey = v66;
        *(_QWORD *)&v110.fields.fakeValue = v65;
        v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v110, 0LL);
        Master_object = System_Collections_Generic_List_int___Contains(
                          organizedEquipIdList,
                          v67,
                          (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( (Master_object & 1) != 0 )
          goto LABEL_89;
      }
      if ( !v41 )
        goto LABEL_98;
      if ( v41->fields._count >= 1 )
      {
        v69 = *(_QWORD *)&v64->fields.svtId.fields.currentCryptoKey;
        v68 = *(_QWORD *)&v64->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v111.fields.currentCryptoKey = v69;
        *(_QWORD *)&v111.fields.fakeValue = v68;
        v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v111, 0LL);
        Master_object = System_Collections_Generic_HashSet_int___Contains(
                          v41,
                          v70,
                          (const MethodInfo_33640A0 *)Method_System_Collections_Generic_HashSet_int__Contains__);
        if ( (Master_object & 1) != 0 )
          goto LABEL_89;
      }
      Master_object = UserServantEntity__IsFriendShipSvtEquip(v64, 0LL);
      if ( (Master_object & 1) != 0 )
        goto LABEL_89;
      v71 = sub_1B64314(AutoOrganizationManager_ServantData_TypeInfo, v42, v43);
      System_Object___ctor((Il2CppObject *)v71, 0LL);
      *(_DWORD *)(v71 + 16) = 0;
      *(_QWORD *)(v71 + 32) = 0LL;
      *(_QWORD *)(v71 + 40) = 0LL;
      *(_QWORD *)(v71 + 45) = 0LL;
      *(_QWORD *)(v71 + 24) = 0LL;
      *(_DWORD *)(v71 + 56) = 0;
      v72 = *(_OWORD *)&v64->fields.id.fields.fakeValue;
      *(_OWORD *)&v107.fields.currentCryptoKey = *(_OWORD *)&v64->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v107.fields.fakeValue = v72;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v106 = v107;
      *(_QWORD *)(v71 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v106, 0LL);
      v74 = *(_QWORD *)&v64->fields.svtId.fields.currentCryptoKey;
      v73 = *(_QWORD *)&v64->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v112.fields.currentCryptoKey = v74;
      *(_QWORD *)&v112.fields.fakeValue = v73;
      v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v112, 0LL);
      *(_DWORD *)(v71 + 16) = v75;
      v76 = v75;
      atk = v64->fields.atk;
      Master_object = (__int64)v105;
      *(_DWORD *)(v71 + 44) = 0;
      *(_DWORD *)(v71 + 36) = atk;
      if ( !v105 )
        goto LABEL_98;
      Master_object = DataMasterBase_object__object__int___TryGetEntity(
                        v105,
                        &entity,
                        v76,
                        (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( (Master_object & 1) != 0 )
      {
        v78 = entity;
        if ( !entity )
          goto LABEL_98;
        *(_DWORD *)(v71 + 48) = entity[9].monitor;
        *(_DWORD *)(v71 + 40) = v78[13].klass;
      }
      Master_object = (__int64)v104;
      if ( !v104 )
        goto LABEL_98;
      if ( v104->fields._count >= 1
        && System_Collections_Generic_HashSet_int___Contains(
             v104,
             *(_DWORD *)(v71 + 16),
             (const MethodInfo_33640A0 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
      {
        v79 = *(float *)(v71 + 44) + 50000.0;
        *(float *)(v71 + 44) = v79;
        v80 = v79 + (float)((float)UserServantEntity__getRarity(v64, 0LL) * 100000.0);
        *(float *)(v71 + 44) = v80;
        v82 = *(_QWORD *)&v64->fields.limitCount.fields.currentCryptoKey;
        v81 = *(_QWORD *)&v64->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v113.fields.currentCryptoKey = v82;
        *(_QWORD *)&v113.fields.fakeValue = v81;
        Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v113, 0LL);
        v83 = v80 + (float)((float)(int)Master_object * 10000.0);
        goto LABEL_74;
      }
      Master_object = (__int64)UserServantEntity__GetEquipCategoryIdList(v64, 0, 0LL);
      if ( Master_object )
      {
        v84 = (System_Collections_Generic_IEnumerable_TSource__o *)Master_object;
        v85 = AutoOrganizationManager_TypeInfo;
        if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          v85 = AutoOrganizationManager_TypeInfo;
        }
        Master_object = System_Linq_Enumerable__Contains_int_(
                          v84,
                          v85->static_fields->CATEGORY_ID_NP_GAIN,
                          (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (Master_object & 1) != 0 )
        {
          v86 = *(float *)(v71 + 44) + 40000.0;
        }
        else
        {
          v87 = AutoOrganizationManager_TypeInfo;
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
            v87 = AutoOrganizationManager_TypeInfo;
          }
          Master_object = System_Linq_Enumerable__Contains_int_(
                            v84,
                            v87->static_fields->CATEGORY_ID_NP_REGAIN,
                            (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( (Master_object & 1) == 0 )
            goto LABEL_73;
          v86 = *(float *)(v71 + 44) + 30000.0;
        }
        *(float *)(v71 + 44) = v86;
      }
LABEL_73:
      v83 = *(float *)(v71 + 44) + (float)*(int *)(v71 + 36);
LABEL_74:
      *(float *)(v71 + 44) = v83;
      if ( !v35 )
        goto LABEL_98;
      items = v35->fields._items;
      v89 = Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__;
      ++v35->fields._version;
      if ( !items )
        goto LABEL_98;
      size = v35->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v35,
          (Il2CppObject *)v71,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
        if ( !organizedEquipIdList )
          goto LABEL_89;
      }
      else
      {
        v91 = &items->obj.klass + size;
        v35->fields._size = size + 1;
        v91[4] = (Il2CppClass *)v71;
        Master_object = sub_1B6406C(v91 + 4);
        if ( !organizedEquipIdList )
          goto LABEL_89;
      }
      v93 = *(_QWORD *)&v64->fields.svtId.fields.currentCryptoKey;
      v92 = *(_QWORD *)&v64->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v114.fields.currentCryptoKey = v93;
      *(_QWORD *)&v114.fields.fakeValue = v92;
      v94 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v114, 0LL);
      Master_object = System_Collections_Generic_List_int___Contains(
                        organizedEquipIdList,
                        v94,
                        (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( (Master_object & 1) == 0 )
      {
        v96 = *(_QWORD *)&v64->fields.svtId.fields.currentCryptoKey;
        v95 = *(_QWORD *)&v64->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v115.fields.currentCryptoKey = v96;
        *(_QWORD *)&v115.fields.fakeValue = v95;
        Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v115, 0LL);
        v97 = organizedEquipIdList->fields._items;
        v98 = Method_System_Collections_Generic_List_int__Add__;
        ++organizedEquipIdList->fields._version;
        if ( !v97 )
          goto LABEL_98;
        v99 = organizedEquipIdList->fields._size;
        v42 = (const MethodInfo *)(unsigned int)Master_object;
        if ( (unsigned int)v99 >= v97->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            organizedEquipIdList,
            Master_object,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
        }
        else
        {
          organizedEquipIdList->fields._size = v99 + 1;
          v97->m_Items[v99 + 1] = Master_object;
        }
      }
LABEL_89:
      LODWORD(v62) = ServantEquipList->max_length;
    }
  }
  Master_object = (__int64)AutoOrganizationManager___c_TypeInfo;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    Master_object = (__int64)AutoOrganizationManager___c_TypeInfo;
  }
  v100 = *(System_Comparison_T__o **)(*(_QWORD *)(Master_object + 184) + 16LL);
  if ( !v100 )
  {
    if ( !*(_DWORD *)(Master_object + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = (__int64)AutoOrganizationManager___c_TypeInfo;
    }
    v101 = **(Il2CppObject ***)(Master_object + 184);
    v100 = (System_Comparison_T__o *)sub_1B64314(
                                       System_Comparison_AutoOrganizationManager_ServantData__TypeInfo,
                                       v42,
                                       v43);
    System_Comparison_object____ctor(
      v100,
      v101,
      Method_AutoOrganizationManager___c__AutoOrganizationEquip_b__20_0__,
      0LL);
    v102 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v102->__9__20_0 = (struct System_Comparison_AutoOrganizationManager_ServantData__o *)v100;
    Master_object = sub_1B6406C(&v102->__9__20_0);
  }
  if ( !v35 )
    goto LABEL_98;
  System_Collections_Generic_List_object___Sort_55243320(
    v35,
    v100,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Sort__);
  return (AutoOrganizationManager_ServantData_array *)System_Collections_Generic_List_object___ToArray(
                                                        v35,
                                                        (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
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
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_object__o *v25; // x20
  __int64 Master_object; // x0
  UserServantEntity_array *OrganizationList; // x25
  __int64 v28; // x1
  __int64 v29; // x8
  unsigned __int64 v30; // x19
  UserServantEntity_o *v31; // x28
  __int64 v32; // x27
  __int64 v33; // x29
  const MethodInfo *v34; // x2
  int32_t v35; // w29
  const MethodInfo *v36; // x2
  int32_t v37; // w27
  const MethodInfo *v38; // x2
  int32_t v39; // w27
  bool UniqueSvtRestriction; // w27
  __int64 v41; // x2
  System_Predicate_object__o *v42; // x29
  Il2CppObject *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  __int128 v46; // q0
  Il2CppObject *v47; // x29
  const MethodInfo *v48; // x2
  int64_t v49; // x27
  float AdjustTotalRate; // s8
  __int128 v51; // q0
  int32_t atk; // w8
  __int64 v53; // x29
  __int128 v54; // q0
  const MethodInfo *v55; // x2
  int64_t v56; // x27
  float v57; // s0
  struct System_Object_array *items; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  Il2CppClass **v61; // x0
  System_Predicate_object__o **v63; // [xsp+8h] [xbp-128h]
  DataMasterBase_TMaster__TEntity__PKType__o *v64; // [xsp+10h] [xbp-120h]
  UserServantEntity_o **m_Items; // [xsp+38h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+40h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+60h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+80h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+A0h] [xbp-90h]
  Il2CppObject *entity; // [xsp+C8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16

  if ( (byte_49F807A & 1) == 0 )
  {
    sub_1B640C8(&AutoOrganizationManager_TypeInfo, restrictionInfo);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantMaster___, v7);
    sub_1B640C8(&DataManager_TypeInfo, v8);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Find__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__, v14);
    sub_1B640C8(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo, v15);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
    sub_1B640C8(&System_Predicate_AutoOrganizationManager_ServantData__TypeInfo, v18);
    sub_1B640C8(&AutoOrganizationManager_ServantData_TypeInfo, v19);
    sub_1B640C8(&Method_AutoOrganizationManager___c__DisplayClass18_0__AutoOrganizationServant_b__0__, v20);
    sub_1B640C8(&AutoOrganizationManager___c__DisplayClass18_0_TypeInfo, v21);
    byte_49F807A = 1;
  }
  entity = 0LL;
  v22 = sub_1B64314(AutoOrganizationManager___c__DisplayClass18_0_TypeInfo, restrictionInfo, organizedServantIds);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  v25 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo,
                                                       v23,
                                                       v24);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_65;
  OrganizationList = UserServantMaster__getOrganizationList((UserServantMaster_o *)Master_object, 0LL);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
  v64 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !OrganizationList )
    goto LABEL_65;
  v29 = *(_QWORD *)&OrganizationList->max_length;
  if ( (int)v29 >= 1 )
  {
    v30 = 0LL;
    v63 = (System_Predicate_object__o **)(v22 + 24);
    m_Items = OrganizationList->m_Items;
    do
    {
      if ( v30 >= (unsigned int)v29 )
        sub_1B6432C(Master_object, v28);
      v31 = m_Items[v30];
      if ( !v31 )
        goto LABEL_34;
      Master_object = UserServantEntity__getRarity(m_Items[v30], 0LL);
      if ( rarityBit != 31 && (_DWORD)Master_object == 0
        || (rarityBit & 1) == 0 && (_DWORD)Master_object == 1
        || (rarityBit & 2) == 0 && (_DWORD)Master_object == 2
        || (rarityBit & 4) == 0 && (_DWORD)Master_object == 3
        || (rarityBit & 8) == 0 && (_DWORD)Master_object == 4
        || (rarityBit & 0x10) == 0 && (_DWORD)Master_object == 5 )
      {
        goto LABEL_34;
      }
      v32 = *(_QWORD *)&v31->fields.svtId.fields.currentCryptoKey;
      v33 = *(_QWORD *)&v31->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v74.fields.currentCryptoKey = v32;
      *(_QWORD *)&v74.fields.fakeValue = v33;
      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v74, 0LL);
      if ( !v22 )
        goto LABEL_65;
      v35 = Master_object;
      *(_DWORD *)(v22 + 16) = Master_object;
      if ( organizedServantIds )
      {
        Master_object = System_Linq_Enumerable__Contains_int_(
                          (System_Collections_Generic_IEnumerable_TSource__o *)organizedServantIds,
                          Master_object,
                          (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (Master_object & 1) != 0 )
          goto LABEL_34;
        v35 = *(_DWORD *)(v22 + 16);
      }
      if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      Master_object = AutoOrganizationManager__IsFatigue(restrictionInfo, v35, v34);
      if ( (Master_object & 1) == 0 )
      {
        v37 = *(_DWORD *)(v22 + 16);
        if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
        Master_object = AutoOrganizationManager__IsAllOutBattleAlreadyUsed(restrictionInfo, v37, v36);
        if ( (Master_object & 1) == 0 )
        {
          v39 = *(_DWORD *)(v22 + 16);
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          Master_object = AutoOrganizationManager__IsDataLost(restrictionInfo, v39, v38);
          if ( (Master_object & 1) == 0 )
          {
            Master_object = UserServantEntity__IsLeave(v31, 0LL);
            if ( (Master_object & 1) == 0 )
            {
              Master_object = UserServantEntity__getQuestRestriction(v31, restrictionInfo, 1, 0LL);
              if ( (Master_object & 1) == 0 )
              {
                UniqueSvtRestriction = UserServantEntity__getUniqueSvtRestriction(v31, restrictionInfo, 0LL);
                Master_object = UserServantEntity__IsUniqueIndividualityRestriction(v31, restrictionInfo, 0LL);
                if ( !UniqueSvtRestriction && (Master_object & 1) == 0 )
                {
                  v42 = *v63;
                  if ( !*v63 )
                  {
                    v42 = (System_Predicate_object__o *)sub_1B64314(
                                                          System_Predicate_AutoOrganizationManager_ServantData__TypeInfo,
                                                          v28,
                                                          v41);
                    System_Predicate_object____ctor(
                      v42,
                      (Il2CppObject *)v22,
                      Method_AutoOrganizationManager___c__DisplayClass18_0__AutoOrganizationServant_b__0__,
                      0LL);
                    *(_QWORD *)(v22 + 24) = v42;
                    Master_object = sub_1B6406C(v63);
                  }
                  if ( !v25 )
                    goto LABEL_65;
                  v43 = System_Collections_Generic_List_object___Find(
                          v25,
                          (System_Predicate_T__o *)v42,
                          (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Find__);
                  if ( v43 )
                  {
                    v46 = *(_OWORD *)&v31->fields.id.fields.fakeValue;
                    v47 = v43;
                    *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)&v31->fields.id.fields.currentCryptoKey;
                    *(_OWORD *)&v72.fields.fakeValue = v46;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    v71 = v72;
                    v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v71, 0LL);
                    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
                    AdjustTotalRate = AutoOrganizationManager__GetAdjustTotalRate(
                                        (System_Collections_Generic_IEnumerable_QuestAutoOrganizationAdjustEntity__o *)questAutoOrganizationAdjustEntities,
                                        v49,
                                        v48);
                    if ( (float)(AdjustTotalRate * (float)v31->fields.atk) >= (float)(*(float *)&v47[3].monitor
                                                                                    * (float)SHIDWORD(v47[2].klass)) )
                    {
                      v51 = *(_OWORD *)&v31->fields.id.fields.fakeValue;
                      *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)&v31->fields.id.fields.currentCryptoKey;
                      *(_OWORD *)&v72.fields.fakeValue = v51;
                      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                      v70 = v72;
                      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v70, 0LL);
                      v47[1].monitor = (void *)Master_object;
                      atk = v31->fields.atk;
                      *(float *)&v47[3].monitor = AdjustTotalRate;
                      HIDWORD(v47[2].klass) = atk;
                    }
                  }
                  else
                  {
                    v53 = sub_1B64314(AutoOrganizationManager_ServantData_TypeInfo, v44, v45);
                    System_Object___ctor((Il2CppObject *)v53, 0LL);
                    *(_DWORD *)(v53 + 16) = 0;
                    *(_DWORD *)(v53 + 56) = 0;
                    *(_QWORD *)(v53 + 32) = 0LL;
                    *(_QWORD *)(v53 + 40) = 0LL;
                    *(_QWORD *)(v53 + 24) = 0LL;
                    *(_QWORD *)(v53 + 45) = 0LL;
                    v54 = *(_OWORD *)&v31->fields.id.fields.fakeValue;
                    *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)&v31->fields.id.fields.currentCryptoKey;
                    *(_OWORD *)&v72.fields.fakeValue = v54;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    v69 = v72;
                    *(_QWORD *)(v53 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(
                                              &v69,
                                              0LL);
                    *(_DWORD *)(v53 + 16) = *(_DWORD *)(v22 + 16);
                    *(_DWORD *)(v53 + 32) = UserServantEntity__getSvtClassId(v31, 0, 0LL);
                    *(_DWORD *)(v53 + 36) = v31->fields.atk;
                    v56 = *(_QWORD *)(v53 + 24);
                    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
                    v57 = AutoOrganizationManager__GetAdjustTotalRate(
                            (System_Collections_Generic_IEnumerable_QuestAutoOrganizationAdjustEntity__o *)questAutoOrganizationAdjustEntities,
                            v56,
                            v55);
                    Master_object = (__int64)v64;
                    *(float *)(v53 + 56) = v57;
                    if ( !v64 )
                      goto LABEL_65;
                    Master_object = DataMasterBase_object__object__int___TryGetEntity(
                                      v64,
                                      &entity,
                                      *(_DWORD *)(v53 + 16),
                                      (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
                    if ( (Master_object & 1) != 0 )
                    {
                      if ( !entity )
                        goto LABEL_65;
                      *(_DWORD *)(v53 + 48) = entity[9].monitor;
                    }
                    items = v25->fields._items;
                    v59 = Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__;
                    ++v25->fields._version;
                    if ( !items )
                      goto LABEL_65;
                    size = v25->fields._size;
                    if ( (unsigned int)size >= items->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v25,
                        (Il2CppObject *)v53,
                        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v61 = &items->obj.klass + size;
                      v25->fields._size = size + 1;
                      v61[4] = (Il2CppClass *)v53;
                      Master_object = sub_1B6406C(v61 + 4);
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_34:
      LODWORD(v29) = OrganizationList->max_length;
    }
    while ( (__int64)++v30 < (int)v29 );
  }
  Master_object = (__int64)v25;
  if ( !v25 )
LABEL_65:
    sub_1B64324(Master_object);
  return (AutoOrganizationManager_ServantData_array *)System_Collections_Generic_List_object___ToArray(
                                                        v25,
                                                        (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
}


void __fastcall AutoOrganizationManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  AutoOrganizationManager_c *v2; // x0
  ListViewSort_o *autoOrganizationInfo; // x0

  if ( (byte_49F8077 & 1) == 0 )
  {
    sub_1B640C8(&AutoOrganizationManager_TypeInfo, v1);
    byte_49F8077 = 1;
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
    sub_1B64324(autoOrganizationInfo);
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
  __int64 v15; // x2
  System_Func_T__TResult__o *v16; // x20
  System_Collections_Generic_IEnumerable_TResult__o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  AutoOrganizationManager___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x19
  System_Func_float__float__float__o *_9__25_1; // x20
  Il2CppObject *v23; // x21
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x0

  if ( (byte_49F8081 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Aggregate_float__float___, userSvtId);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___, v5);
    sub_1B640C8(&System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo, v6);
    sub_1B640C8(&System_Func_float__float__float__TypeInfo, v7);
    sub_1B640C8(&Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__25_1__, v8);
    sub_1B640C8(&Method_AutoOrganizationManager___c__DisplayClass25_0__GetAdjustTotalRate_b__0__, v9);
    sub_1B640C8(&AutoOrganizationManager___c__DisplayClass25_0_TypeInfo, v10);
    sub_1B640C8(&AutoOrganizationManager___c_TypeInfo, v11);
    byte_49F8081 = 1;
  }
  v12 = (Il2CppObject *)sub_1B64314(AutoOrganizationManager___c__DisplayClass25_0_TypeInfo, userSvtId, method);
  System_Object___ctor(v12, 0LL);
  if ( !v12 )
    sub_1B64324(v13);
  v12[1].klass = (Il2CppClass *)userSvtId;
  v16 = (System_Func_T__TResult__o *)sub_1B64314(
                                       System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo,
                                       v14,
                                       v15);
  System_Func_object__float____ctor(
    v16,
    v12,
    Method_AutoOrganizationManager___c__DisplayClass25_0__GetAdjustTotalRate_b__0__,
    0LL);
  v17 = System_Linq_Enumerable__Select_object__float_(
          (System_Collections_Generic_IEnumerable_TSource__o *)questAutoOrganizationAdjustEntities,
          (System_Func_TSource__TResult__o *)v16,
          (const MethodInfo_2E69710 *)Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___);
  v20 = AutoOrganizationManager___c_TypeInfo;
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)v17;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v20 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__25_1 = v20->static_fields->__9__25_1;
  if ( !_9__25_1 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = AutoOrganizationManager___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__25_1 = (System_Func_float__float__float__o *)sub_1B64314(System_Func_float__float__float__TypeInfo, v18, v19);
    System_Func_float__float__float____ctor(
      _9__25_1,
      v23,
      Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__25_1__,
      0LL);
    static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    static_fields->__9__25_1 = _9__25_1;
    sub_1B6406C(&static_fields->__9__25_1);
  }
  return System_Linq_Enumerable__Aggregate_float__float_(
           v21,
           1.0,
           (System_Func_TAccumulate__TSource__TAccumulate__o *)_9__25_1,
           (const MethodInfo_2E444A4 *)Method_System_Linq_Enumerable_Aggregate_float__float___);
}


System_Boolean_array *__fastcall AutoOrganizationManager__GetAutoOrganizationSetting(
        ListViewSort_o *sort,
        int32_t *settingUnitNum,
        const MethodInfo *method)
{
  __int64 Filter_40454232; // x0
  System_Boolean_array *v6; // x20
  unsigned __int64 v7; // x22
  __int64 v8; // x24
  __int64 v9; // x1
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

  if ( (byte_49F8078 & 1) == 0 )
  {
    sub_1B640C8(&bool___TypeInfo, settingUnitNum);
    byte_49F8078 = 1;
  }
  Filter_40454232 = sub_1B64170(bool___TypeInfo, 13LL);
  if ( !sort )
LABEL_38:
    sub_1B64324(Filter_40454232);
  v6 = (System_Boolean_array *)Filter_40454232;
  v7 = 0LL;
  v8 = Filter_40454232 + 32;
  do
  {
    Filter_40454232 = ListViewSort__GetFilter_40454232(sort, v7, 0LL);
    if ( !v6 )
      goto LABEL_38;
    max_length = v6->max_length;
    if ( v7 >= max_length )
      goto LABEL_37;
    *(_BYTE *)(v8 + v7++) = Filter_40454232 & 1;
  }
  while ( v7 != 13 );
  if ( (unsigned int)max_length < 2 )
LABEL_37:
    sub_1B6432C(Filter_40454232, v9);
  v11 = v6->m_Items[5];
  v12 = !v6->m_Items[4];
  v13 = !v11;
  v14 = v11;
  v15 = v13;
  v6->m_Items[4] |= v15;
  v6->m_Items[5] = v14 || v12;
  Filter_40454232 = sub_1B64170(bool___TypeInfo, 5LL);
  v16 = v6->max_length;
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
    if ( !Filter_40454232 )
      goto LABEL_38;
    if ( v17 >= *(unsigned int *)(Filter_40454232 + 24) )
      goto LABEL_37;
    v21 = v6->m_Items[v17 + 6];
    *(_BYTE *)(Filter_40454232 + 32 + v17++) = v21;
    v20 = (unsigned __int8)v20 & !v21;
  }
  while ( v17 != 5 );
  if ( v20 )
  {
    v22 = 0LL;
    while ( v19 != v22 )
    {
      v6->m_Items[v22++ + 6] = 1;
      if ( v22 == 5 )
        goto LABEL_23;
    }
    goto LABEL_37;
  }
LABEL_23:
  Filter_40454232 = sub_1B64170(bool___TypeInfo, 6LL);
  v23 = v6->max_length;
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
    if ( !Filter_40454232 )
      goto LABEL_38;
    v28 = *(unsigned int *)(Filter_40454232 + 24);
    if ( v24 >= v28 )
      goto LABEL_37;
    v29 = v6->m_Items[v24 + 11];
    *(_BYTE *)(Filter_40454232 + 32 + v24++) = v29;
    if ( v29 )
      LODWORD(v25) = v24;
  }
  while ( v24 != 6 );
  if ( !(_DWORD)v25 )
  {
    v25 = 0LL;
    while ( v25 < v28 )
    {
      *(_BYTE *)(Filter_40454232 + 32 + v25++) = 1;
      if ( v25 == 6 )
        goto LABEL_36;
    }
    goto LABEL_37;
  }
LABEL_36:
  *settingUnitNum = v25;
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
  System_Collections_Generic_HashSet_int__o *v31; // x19
  __int64 Master_object; // x0
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x20
  System_Int32_array *v35; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  Il2CppObject *v38; // x23
  Il2CppObject *v39; // x25
  __int64 v40; // x1
  System_Collections_Generic_List_EventBonusFilterEntity__o *FilterList; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v44; // x24
  System_Collections_Generic_List_object__o *v45; // x26
  AutoOrganizationManager___c_c *v46; // x0
  System_Comparison_T__o *_9__21_0; // x25
  Il2CppObject *v48; // x21
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  System_Collections_Generic_List_object__o *v52; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  System_Collections_Generic_List_object__o *v55; // x0
  int32_t v56; // w25
  int v57; // w8
  __int64 v58; // x26
  __int64 v59; // x26
  __int64 v60; // x21
  __int64 v61; // x27
  int32_t v62; // w1
  int v63; // w8
  __int64 v64; // x27
  int v65; // w24
  char v66; // w20
  __int64 v67; // x21
  SkillLvEntity_o *v68; // x28
  __int64 v69; // x21
  __int64 v70; // x29
  int32_t v71; // w21
  __int64 v72; // x1
  __int64 v73; // x2
  EventUpValInfo_o *v74; // x29
  __int64 v75; // x21
  __int64 v76; // x27
  int v77; // w8
  __int64 v78; // x26
  unsigned int v79; // w20
  __int64 v80; // x8
  ServantSkillMaster_o *v82; // [xsp+8h] [xbp-88h]
  Il2CppObject *v83; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_object__o *v84; // [xsp+18h] [xbp-78h]
  EventUpValSetupInfo_o *setupInfo; // [xsp+20h] [xbp-70h]
  EventUpValInfo_o *eventUpVallInfo; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v89; // 0:x0.16

  if ( (byte_49F807D & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_EventBonusFilterEntity__TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMaster_EventBonusFilterMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_EventMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantSkillMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMaster_SkillLvMaster___, v9);
    sub_1B640C8(&DataManager_TypeInfo, v10);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v12);
    sub_1B640C8(&EventUpValInfo_TypeInfo, v13);
    sub_1B640C8(&EventUpValSetupInfo_TypeInfo, v14);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Add__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Contains__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__get_Count__, v18);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v19);
    sub_1B640C8(&int___TypeInfo, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_SkillInfo___ctor__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__, v24);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__, v25);
    sub_1B640C8(&System_Collections_Generic_List_EventUpValInfo__TypeInfo, v26);
    sub_1B640C8(&System_Collections_Generic_List_SkillInfo__TypeInfo, v27);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28);
    sub_1B640C8(&Method_AutoOrganizationManager___c__GetEventBonusIds_b__21_0__, v29);
    sub_1B640C8(&AutoOrganizationManager___c_TypeInfo, v30);
    byte_49F807D = 1;
  }
  eventUpVallInfo = 0LL;
  v31 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_HashSet_int____ctor(
    v31,
    (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_61;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Master_object, 0, 0LL, 0LL);
  if ( !EventValUpEventIdHash )
    return v31;
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash;
  if ( EventValUpEventIdHash->fields._count < 1
    || !System_Collections_Generic_HashSet_int___Contains(
          EventValUpEventIdHash,
          eventId,
          (const MethodInfo_33640A0 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
    return v31;
  }
  v35 = System_Linq_Enumerable__ToArray_int_(
          v34,
          (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
  setupInfo = (EventUpValSetupInfo_o *)sub_1B64314(EventUpValSetupInfo_TypeInfo, v36, v37);
  EventUpValSetupInfo___ctor_38592760(setupInfo, v35, 0, 0, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v83 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
  v82 = (ServantSkillMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  v38 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v39 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  Master_object = sub_1B64170(int___TypeInfo, 1LL);
  if ( !Master_object )
    goto LABEL_61;
  v40 = Master_object;
  if ( !*(_DWORD *)(Master_object + 24) )
    goto LABEL_62;
  *(_DWORD *)(Master_object + 32) = eventId;
  if ( !v39 )
LABEL_61:
    sub_1B64324(Master_object);
  FilterList = EventBonusFilterMaster__GetFilterList(
                 (EventBonusFilterMaster_o *)v39,
                 (System_Int32_array *)Master_object,
                 1,
                 0LL);
  v44 = (DataMasterBase_TMaster__TEntity__PKType__o *)v83;
  if ( FilterList )
  {
    v45 = (System_Collections_Generic_List_object__o *)FilterList;
    if ( FilterList->fields._size >= 1 )
    {
      v46 = AutoOrganizationManager___c_TypeInfo;
      if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
        v46 = AutoOrganizationManager___c_TypeInfo;
      }
      _9__21_0 = (System_Comparison_T__o *)v46->static_fields->__9__21_0;
      if ( !_9__21_0 )
      {
        if ( !v46->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v46);
          v46 = AutoOrganizationManager___c_TypeInfo;
        }
        v48 = (Il2CppObject *)v46->static_fields->__9;
        _9__21_0 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_EventBonusFilterEntity__TypeInfo, v42, v43);
        System_Comparison_object____ctor(
          _9__21_0,
          v48,
          Method_AutoOrganizationManager___c__GetEventBonusIds_b__21_0__,
          0LL);
        static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
        static_fields->__9__21_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__21_0;
        sub_1B6406C(&static_fields->__9__21_0);
      }
      System_Collections_Generic_List_object___Sort_55243320(
        v45,
        _9__21_0,
        (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
      v52 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                           System_Collections_Generic_List_EventUpValInfo__TypeInfo,
                                                           v50,
                                                           v51);
      System_Collections_Generic_List_object____ctor(
        v52,
        (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
      v55 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                           System_Collections_Generic_List_SkillInfo__TypeInfo,
                                                           v53,
                                                           v54);
      System_Collections_Generic_List_object____ctor(
        v55,
        (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
      if ( v45->fields._size >= 1 )
      {
        v56 = 0;
        v84 = v45;
        do
        {
          Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                     v45,
                                     v56,
                                     (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
          if ( !Master_object )
            goto LABEL_61;
          v57 = *(_DWORD *)(Master_object + 20);
          v58 = Master_object;
          if ( v57 == 2 )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
            if ( !Master_object )
              goto LABEL_61;
            Master_object = (__int64)EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                                       (EventBonusFilterGroupMemberMaster_o *)Master_object,
                                       *(_DWORD *)(v58 + 24),
                                       0LL);
            if ( !Master_object )
              goto LABEL_61;
            v77 = *(_DWORD *)(Master_object + 24);
            v78 = Master_object;
            if ( v77 >= 1 )
            {
              v79 = 0;
              while ( v79 < v77 )
              {
                v80 = *(_QWORD *)(v78 + 8LL * (int)v79 + 32);
                if ( !v80 || !v31 )
                  goto LABEL_61;
                Master_object = System_Collections_Generic_HashSet_int___Add(
                                  v31,
                                  *(_DWORD *)(v80 + 20),
                                  (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
                v77 = *(_DWORD *)(v78 + 24);
                if ( (int)++v79 >= v77 )
                  goto LABEL_59;
              }
LABEL_62:
              sub_1B6432C(Master_object, v40);
            }
          }
          else if ( v57 == 1 )
          {
            if ( !v44 )
              goto LABEL_61;
            Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                       v44,
                                       *(_DWORD *)(Master_object + 24),
                                       (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Master_object )
              goto LABEL_61;
            v59 = Master_object;
            v61 = *(_QWORD *)(Master_object + 16);
            v60 = *(_QWORD *)(Master_object + 24);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v87.fields.currentCryptoKey = v61;
            *(_QWORD *)&v87.fields.fakeValue = v60;
            v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v87, 0LL);
            Master_object = (__int64)v82;
            if ( !v82 )
              goto LABEL_61;
            Master_object = (__int64)ServantSkillMaster__getServantSkillList(v82, v62, 0LL);
            if ( !Master_object )
              goto LABEL_61;
            v63 = *(_DWORD *)(Master_object + 24);
            v64 = Master_object;
            if ( v63 >= 1 )
            {
              v65 = 0;
              v66 = 0;
              do
              {
                if ( v65 >= (unsigned int)v63 )
                  goto LABEL_62;
                v67 = *(_QWORD *)(v64 + 8LL * v65 + 32);
                if ( !v67 || !v38 )
                  goto LABEL_61;
                Master_object = (__int64)SkillLvMaster__GetEntity((SkillLvMaster_o *)v38, *(_DWORD *)(v67 + 28), 1, 0LL);
                if ( Master_object && !*(_DWORD *)(v67 + 44) )
                {
                  v68 = (SkillLvEntity_o *)Master_object;
                  v69 = *(_QWORD *)(v59 + 16);
                  v70 = *(_QWORD *)(v59 + 24);
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v88.fields.currentCryptoKey = v69;
                  *(_QWORD *)&v88.fields.fakeValue = v70;
                  v71 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v88, 0LL);
                  v74 = (EventUpValInfo_o *)sub_1B64314(EventUpValInfo_TypeInfo, v72, v73);
                  EventUpValInfo___ctor(v74, setupInfo, v71, 1, 1, 0, 0LL);
                  eventUpVallInfo = v74;
                  Master_object = SkillLvEntity__getEventUpVal_39537972(v68, &eventUpVallInfo, 1, 1, 0, 1, 0LL, 0LL);
                  v66 |= Master_object;
                }
                v63 = *(_DWORD *)(v64 + 24);
                ++v65;
              }
              while ( v65 < v63 );
              v44 = (DataMasterBase_TMaster__TEntity__PKType__o *)v83;
              if ( (v66 & 1) != 0 )
              {
                v76 = *(_QWORD *)(v59 + 16);
                v75 = *(_QWORD *)(v59 + 24);
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v89.fields.currentCryptoKey = v76;
                *(_QWORD *)&v89.fields.fakeValue = v75;
                Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v89, 0LL);
                if ( !v31 )
                  goto LABEL_61;
                System_Collections_Generic_HashSet_int___Add(
                  v31,
                  Master_object,
                  (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
              }
            }
          }
LABEL_59:
          v45 = v84;
          ++v56;
        }
        while ( v56 < v84->fields._size );
      }
    }
  }
  return v31;
}


int32_t __fastcall AutoOrganizationManager__GetRarityBit(System_Boolean_array *rarityFlag, const MethodInfo *method)
{
  unsigned __int64 max_length; // x10
  unsigned __int64 v4; // x9
  __int64 v5; // x0
  bool *v6; // x8

  if ( !rarityFlag )
    sub_1B64324(0LL);
  max_length = rarityFlag->max_length;
  v4 = 0LL;
  v5 = 0LL;
  v6 = &rarityFlag->m_Items[4];
  do
  {
    if ( (__int64)v4 <= (int)max_length )
    {
      if ( v4 >= max_length )
        sub_1B6432C(v5, method);
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
  __int64 Filter_40454280; // x0
  System_Boolean_array *v4; // x19
  unsigned __int64 v5; // x21
  __int64 v6; // x23
  __int64 v7; // x1
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

  if ( (byte_49F8079 & 1) == 0 )
  {
    sub_1B640C8(&bool___TypeInfo, method);
    byte_49F8079 = 1;
  }
  Filter_40454280 = sub_1B64170(bool___TypeInfo, 7LL);
  if ( !sort )
LABEL_25:
    sub_1B64324(Filter_40454280);
  v4 = (System_Boolean_array *)Filter_40454280;
  v5 = 0LL;
  v6 = Filter_40454280 + 32;
  do
  {
    Filter_40454280 = ListViewSort__GetFilter_40454280(sort, v5, 0LL);
    if ( !v4 )
      goto LABEL_25;
    max_length = v4->max_length;
    if ( v5 >= max_length )
      goto LABEL_24;
    *(_BYTE *)(v6 + v5++) = Filter_40454280 & 1;
  }
  while ( v5 != 7 );
  if ( (unsigned int)max_length < 2 )
LABEL_24:
    sub_1B6432C(Filter_40454280, v7);
  v9 = v4->m_Items[5];
  v10 = !v4->m_Items[4];
  v11 = !v9;
  v12 = v9;
  v13 = v11;
  v4->m_Items[4] |= v13;
  v4->m_Items[5] = v12 || v10;
  Filter_40454280 = sub_1B64170(bool___TypeInfo, 5LL);
  v14 = v4->max_length;
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
    if ( !Filter_40454280 )
      goto LABEL_25;
    if ( v15 >= *(unsigned int *)(Filter_40454280 + 24) )
      goto LABEL_24;
    v19 = v4->m_Items[v15 + 6];
    *(_BYTE *)(Filter_40454280 + 32 + v15++) = v19;
    v18 = (unsigned __int8)v18 & !v19;
  }
  while ( v15 != 5 );
  if ( v18 )
  {
    v20 = 0LL;
    while ( v17 != v20 )
    {
      v4->m_Items[v20++ + 6] = 1;
      if ( v20 == 5 )
        return v4;
    }
    goto LABEL_24;
  }
  return v4;
}


void __fastcall AutoOrganizationManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  AutoOrganizationManager_c *v2; // x0
  ListViewSort_o *autoOrganizationInfo; // x0

  if ( (byte_49F8076 & 1) == 0 )
  {
    sub_1B640C8(&AutoOrganizationManager_TypeInfo, v1);
    byte_49F8076 = 1;
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
    sub_1B64324(autoOrganizationInfo);
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

  if ( (byte_49F807F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___, *(_QWORD *)&svtId);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    byte_49F807F = 1;
  }
  if ( !restrictionInfo || !restrictionInfo->fields.isAllOutBattle )
    return 0;
  allOutBattleGroupNo = restrictionInfo->fields.allOutBattleGroupNo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( !Master_object )
    sub_1B64324(0LL);
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
  Il2CppObject *Master_object; // x21
  int64_t UserId; // x0
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49F8080 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserEventDataLostMaster___, *(_QWORD *)&svtId);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    byte_49F8080 = 1;
  }
  entity = 0LL;
  if ( !restrictionInfo || !restrictionInfo->fields.isDataLostBattle )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
    sub_1B64324(UserId);
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
  Il2CppObject *Master_object; // x0
  int64_t v8; // x19
  bool isRecover; // [xsp+4h] [xbp-2Ch] BYREF
  int64_t recoverAt; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49F807E & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserEventServantFatigueMaster___, *(_QWORD *)&svtId);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    byte_49F807E = 1;
  }
  recoverAt = 0LL;
  isRecover = 0;
  if ( !restrictionInfo || !restrictionInfo->fields.isFatigure )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserEventServantFatigueMaster___);
  if ( !Master_object )
    sub_1B64324(0LL);
  if ( !UserEventServantFatigueMaster__GetFatigueInfo(
          (UserEventServantFatigueMaster_o *)Master_object,
          &recoverAt,
          &isRecover,
          restrictionInfo->fields.eventId,
          svtId,
          0LL) )
    return 0;
  v8 = recoverAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return v8 > NetworkManager__getTime(0LL);
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
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x21
  _BOOL8 v21; // x0
  Il2CppObject *current; // x29
  int32_t klass; // w22
  _BOOL8 v24; // x0
  float Rate; // s0
  __int64 v26; // x1
  __int64 v27; // x2
  AutoOrganizationManager___c_c *v28; // x0
  System_Func_T__TResult__o *_9__19_0; // x20
  Il2CppObject *v30; // x21
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  monitor_high = enemyClassId;
  if ( (byte_49F807B & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ServantClassMaster___, *(_QWORD *)&enemyClassId);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__, v10);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__get_Current__,
      v11);
    sub_1B640C8(&System_Func_AutoOrganizationManager_ServantData__float__TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___75676008, v14);
    sub_1B640C8(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo, v15);
    sub_1B640C8(&Method_AutoOrganizationManager___c__SortClassRelation_b__19_0__, v16);
    sub_1B640C8(&AutoOrganizationManager___c_TypeInfo, v17);
    byte_49F807B = 1;
  }
  entity = 0LL;
  memset(&v35, 0, sizeof(v35));
  v18 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo,
                                                       *(_QWORD *)&enemyClassId,
                                                       method);
  System_Collections_Generic_List_object____ctor_55234504(
    v18,
    (System_Collections_Generic_IEnumerable_T__o *)dataList,
    (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___75676008);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantClassMaster___);
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( monitor_high )
  {
    if ( !Master_object )
      goto LABEL_32;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &entity,
                                      monitor_high,
                                      (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_32;
      monitor_high = HIDWORD(entity[3].monitor);
    }
  }
  if ( !v18 )
LABEL_32:
    sub_1B64324(Master_object);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    v18,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__);
  v35 = v34;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v35,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__);
    if ( !v21 )
      break;
    current = v35.fields._current;
    if ( !v35.fields._current )
      sub_1B64324(v21);
    if ( !v20 )
      sub_1B64324(v21);
    klass = (int32_t)v35.fields._current[2].klass;
    v24 = DataMasterBase_object__object__int___TryGetEntity(
            v20,
            &entity,
            klass,
            (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( v24 )
    {
      if ( !entity )
        sub_1B64324(v24);
      klass = HIDWORD(entity[3].monitor);
    }
    if ( monitor_high )
      Rate = ClassRelationMaster__getRate(klass, monitor_high, 0LL);
    else
      Rate = 1.0;
    *((float *)&current[2].monitor + 1) = *(float *)&current[3].monitor
                                        * (float)(Rate * (float)SHIDWORD(current[2].klass));
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__);
  v28 = AutoOrganizationManager___c_TypeInfo;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v28 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__19_0 = (System_Func_T__TResult__o *)v28->static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = AutoOrganizationManager___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v28->static_fields->__9;
    _9__19_0 = (System_Func_T__TResult__o *)sub_1B64314(
                                              System_Func_AutoOrganizationManager_ServantData__float__TypeInfo,
                                              v26,
                                              v27);
    System_Func_object__float____ctor(
      _9__19_0,
      v30,
      Method_AutoOrganizationManager___c__SortClassRelation_b__19_0__,
      0LL);
    static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = (struct System_Func_AutoOrganizationManager_ServantData__float__o *)_9__19_0;
    sub_1B6406C(&static_fields->__9__19_0);
  }
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__float_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v18,
                                                               (System_Func_TSource__TKey__o *)_9__19_0,
                                                               (const MethodInfo_2E636C8 *)Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___);
  return (AutoOrganizationManager_ServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                                        v32,
                                                        (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___);
}


ListViewSort_o *__fastcall AutoOrganizationManager__get_SortInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  AutoOrganizationManager_c *v2; // x0

  if ( (byte_49F8074 & 1) == 0 )
  {
    sub_1B640C8(&AutoOrganizationManager_TypeInfo, v1);
    byte_49F8074 = 1;
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

  if ( (byte_49F8075 & 1) == 0 )
  {
    sub_1B640C8(&AutoOrganizationManager_TypeInfo, v1);
    byte_49F8075 = 1;
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
  this->fields.questAutoOrganizationAdjustRate = 0.0;
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

  if ( (byte_49F8083 & 1) == 0 )
  {
    sub_1B640C8(&AutoOrganizationManager___c_TypeInfo, v1);
    byte_49F8083 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(AutoOrganizationManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  AutoOrganizationManager___c_TypeInfo->static_fields->__9 = (struct AutoOrganizationManager___c_o *)v3;
  sub_1B6406C(AutoOrganizationManager___c_TypeInfo->static_fields);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return b->fields.priority - a->fields.priority;
}


float __fastcall AutoOrganizationManager___c___SortClassRelation_b__19_0(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return QuestAutoOrganizationAdjustEntity__GetAdjustRate(entity, this->fields.userSvtId, 0LL);
}