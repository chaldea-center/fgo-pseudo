void __fastcall AutoOrganizationManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  struct AutoOrganizationManager_StaticFields *static_fields; // x0
  ListViewSort_o *v3; // x19
  struct AutoOrganizationManager_StaticFields *v4; // x0

  if ( (byte_4BD7FD4 & 1) == 0 )
  {
    sub_1C21E38(&AutoOrganizationManager_TypeInfo);
    sub_1C21E38(&ListViewSort_TypeInfo);
    sub_1C21E38(&StringLiteral_2655/*"AutoOrganization"*/);
    sub_1C21E38(&StringLiteral_2661/*"AutoOrganizationWaveBattle"*/);
    byte_4BD7FD4 = 1;
  }
  *(_QWORD *)AutoOrganizationManager_TypeInfo->static_fields = 0x296B0000296ALL;
  v1 = (ListViewSort_o *)sub_1C22084(ListViewSort_TypeInfo);
  ListViewSort___ctor_42029876(v1, (System_String_o *)StringLiteral_2655/*"AutoOrganization"*/, 3, 0, 0LL);
  static_fields = AutoOrganizationManager_TypeInfo->static_fields;
  static_fields->autoOrganizationInfo = v1;
  sub_1C21DDC(&static_fields->autoOrganizationInfo, v1);
  v3 = (ListViewSort_o *)sub_1C22084(ListViewSort_TypeInfo);
  ListViewSort___ctor_42029876(v3, (System_String_o *)StringLiteral_2661/*"AutoOrganizationWaveBattle"*/, 3, 0, 0LL);
  v4 = AutoOrganizationManager_TypeInfo->static_fields;
  v4->waveBattleAutoOrganizationInfo = v3;
  sub_1C21DDC(&v4->waveBattleAutoOrganizationInfo, v3);
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
  __int64 Master_object; // x0
  const MethodInfo *v6; // x1
  UserServantEntity_array *ServantEquipList; // x21
  System_Collections_Generic_List_object__o *v8; // x20
  System_Collections_Generic_HashSet_int__o *v9; // x24
  System_Collections_Generic_HashSet_int__o *v10; // x23
  AutoOrganizationServantBonusFilterEquipComponent_c *v11; // x0
  struct AutoOrganizationServantBonusFilterEquipComponent_StaticFields *static_fields; // x9
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID; // x25
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID; // x26
  Il2CppObject *v15; // x27
  int v16; // w28
  System_String_o *v17; // x0
  System_String_o *v18; // x0
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  int v25; // w8
  __int64 v26; // x29
  unsigned int v27; // w24
  __int64 v28; // x8
  __int64 v29; // x8
  unsigned __int64 i; // x29
  UserServantEntity_o *v31; // x25
  __int64 v32; // x26
  __int64 v33; // x27
  int32_t v34; // w0
  __int64 v35; // x26
  __int64 v36; // x27
  int32_t v37; // w0
  __int64 v38; // x26
  __int128 v39; // q0
  __int64 v40; // x27
  __int64 v41; // x28
  int32_t v42; // w0
  int32_t v43; // w2
  int32_t atk; // w8
  Il2CppObject *v45; // x8
  float v46; // s13
  float v47; // s13
  __int64 v48; // x27
  __int64 v49; // x28
  float v50; // s0
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x27
  AutoOrganizationManager_c *v52; // x0
  float v53; // s0
  AutoOrganizationManager_c *v54; // x0
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  Il2CppClass **v58; // x0
  __int64 v59; // x26
  __int64 v60; // x27
  int32_t v61; // w0
  __int64 v62; // x25
  __int64 v63; // x26
  struct System_Int32_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  System_Comparison_T__o *v67; // x19
  Il2CppObject *v68; // x21
  struct AutoOrganizationManager___c_StaticFields *v69; // x0
  System_Collections_Generic_HashSet_int__o *v71; // [xsp+0h] [xbp-F0h]
  DataMasterBase_TMaster__TEntity__PKType__o *v72; // [xsp+8h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+30h] [xbp-C0h]
  int v75; // [xsp+54h] [xbp-9Ch] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-98h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16

  if ( (byte_4BD7FCD & 1) == 0 )
  {
    sub_1C21E38(&AutoOrganizationManager_TypeInfo);
    sub_1C21E38(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
    sub_1C21E38(&System_Comparison_AutoOrganizationManager_ServantData__TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1C21E38(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C21E38(&ServantBonusFilterSelectMenu_TypeInfo);
    sub_1C21E38(&AutoOrganizationManager_ServantData_TypeInfo);
    sub_1C21E38(&Method_AutoOrganizationManager___c__AutoOrganizationEquip_b__21_0__);
    sub_1C21E38(&AutoOrganizationManager___c_TypeInfo);
    byte_4BD7FCD = 1;
  }
  entity = 0LL;
  v75 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_98;
  ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)Master_object, 0LL);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
  v72 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantMaster___);
  v9 = (System_Collections_Generic_HashSet_int__o *)sub_1C22084(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v9,
    (const MethodInfo_3502780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  v10 = (System_Collections_Generic_HashSet_int__o *)sub_1C22084(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v10,
    (const MethodInfo_3502780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( eventId )
  {
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    Master_object = (__int64)AutoOrganizationManager__GetEventBonusIds(eventId, v6);
    if ( !Master_object )
      goto LABEL_98;
    v71 = (System_Collections_Generic_HashSet_int__o *)Master_object;
    if ( *(int *)(Master_object + 32) >= 1 )
    {
      v11 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
        v11 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      }
      static_fields = v11->static_fields;
      SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID = static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID;
      SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v15 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
      if ( !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
      Master_object = ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0LL);
      v75 = 0;
      if ( (int)Master_object >= 1 )
      {
        v16 = Master_object;
        while ( 1 )
        {
          v17 = System_Int32__ToString((int32_t)&v75, 0LL);
          v18 = System_String__Concat_63115476(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v17, 0LL);
          if ( UnityEngine_PlayerPrefs__HasKey(v18, 0LL) )
          {
            v19 = System_Int32__ToString((int32_t)&v75, 0LL);
            v20 = System_String__Concat_63115476(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v19, 0LL);
            Master_object = UnityEngine_PlayerPrefs__GetInt_70827320(v20, 0LL);
            if ( !v10 )
              goto LABEL_98;
            System_Collections_Generic_HashSet_int___Add(
              v10,
              Master_object,
              (const MethodInfo_3503984 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
          v21 = System_Int32__ToString((int32_t)&v75, 0LL);
          v22 = System_String__Concat_63115476(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v21, 0LL);
          Master_object = UnityEngine_PlayerPrefs__HasKey(v22, 0LL);
          if ( (Master_object & 1) != 0 )
          {
            v23 = System_Int32__ToString((int32_t)&v75, 0LL);
            v24 = System_String__Concat_63115476(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v23, 0LL);
            Master_object = UnityEngine_PlayerPrefs__GetInt_70827320(v24, 0LL);
            if ( !v15 )
              goto LABEL_98;
            Master_object = (__int64)EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                                       (EventBonusFilterGroupMemberMaster_o *)v15,
                                       Master_object,
                                       0LL);
            if ( !Master_object )
              goto LABEL_98;
            v25 = *(_DWORD *)(Master_object + 24);
            v26 = Master_object;
            if ( v25 >= 1 )
              break;
          }
LABEL_31:
          if ( ++v75 >= v16 )
            goto LABEL_34;
        }
        v27 = 0;
        while ( 1 )
        {
          if ( v27 >= v25 )
LABEL_99:
            sub_1C2209C(Master_object, v6);
          v28 = *(_QWORD *)(v26 + 8LL * (int)v27 + 32);
          if ( !v28 || !v10 )
            break;
          Master_object = System_Collections_Generic_HashSet_int___Add(
                            v10,
                            *(_DWORD *)(v28 + 20),
                            (const MethodInfo_3503984 *)Method_System_Collections_Generic_HashSet_int__Add__);
          v25 = *(_DWORD *)(v26 + 24);
          if ( (int)++v27 >= v25 )
            goto LABEL_31;
        }
LABEL_98:
        sub_1C22094(Master_object, v6);
      }
    }
  }
  else
  {
    v71 = v9;
  }
LABEL_34:
  if ( !ServantEquipList )
    goto LABEL_98;
  v29 = *(_QWORD *)&ServantEquipList->max_length;
  if ( (int)v29 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v29; ++i )
    {
      if ( i >= (unsigned int)v29 )
        goto LABEL_99;
      v31 = ServantEquipList->m_Items[i];
      if ( !v31 )
        goto LABEL_89;
      if ( organizedEquipIdList )
      {
        v33 = *(_QWORD *)&v31->fields.svtId.fields.currentCryptoKey;
        v32 = *(_QWORD *)&v31->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v77.fields.currentCryptoKey = v33;
        *(_QWORD *)&v77.fields.fakeValue = v32;
        v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v77, 0LL);
        Master_object = System_Collections_Generic_List_int___Contains(
                          organizedEquipIdList,
                          v34,
                          (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( (Master_object & 1) != 0 )
          goto LABEL_89;
      }
      if ( !v10 )
        goto LABEL_98;
      if ( v10->fields._count >= 1 )
      {
        v36 = *(_QWORD *)&v31->fields.svtId.fields.currentCryptoKey;
        v35 = *(_QWORD *)&v31->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v78.fields.currentCryptoKey = v36;
        *(_QWORD *)&v78.fields.fakeValue = v35;
        v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v78, 0LL);
        Master_object = System_Collections_Generic_HashSet_int___Contains(
                          v10,
                          v37,
                          (const MethodInfo_3502E74 *)Method_System_Collections_Generic_HashSet_int__Contains__);
        if ( (Master_object & 1) != 0 )
          goto LABEL_89;
      }
      Master_object = UserServantEntity__IsFriendShipSvtEquip(v31, 0LL);
      if ( (Master_object & 1) != 0 )
        goto LABEL_89;
      v38 = sub_1C22084(AutoOrganizationManager_ServantData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v38, 0LL);
      *(_DWORD *)(v38 + 16) = 0;
      *(_QWORD *)(v38 + 32) = 0LL;
      *(_QWORD *)(v38 + 24) = 0LL;
      *(_QWORD *)(v38 + 44) = 0LL;
      *(_DWORD *)(v38 + 64) = 0;
      *(_BYTE *)(v38 + 68) = 0;
      *(_QWORD *)(v38 + 72) = 0LL;
      v39 = *(_OWORD *)&v31->fields.id.fields.fakeValue;
      *(_OWORD *)&v74.fields.currentCryptoKey = *(_OWORD *)&v31->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v74.fields.fakeValue = v39;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v73 = v74;
      *(_QWORD *)(v38 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v73, 0LL);
      v41 = *(_QWORD *)&v31->fields.svtId.fields.currentCryptoKey;
      v40 = *(_QWORD *)&v31->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v79.fields.currentCryptoKey = v41;
      *(_QWORD *)&v79.fields.fakeValue = v40;
      v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v79, 0LL);
      *(_DWORD *)(v38 + 16) = v42;
      v43 = v42;
      atk = v31->fields.atk;
      Master_object = (__int64)v72;
      *(_DWORD *)(v38 + 48) = 0;
      *(_DWORD *)(v38 + 36) = atk;
      if ( !v72 )
        goto LABEL_98;
      Master_object = DataMasterBase_object__object__int___TryGetEntity(
                        v72,
                        &entity,
                        v43,
                        (const MethodInfo_325BE14 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( (Master_object & 1) != 0 )
      {
        v45 = entity;
        if ( !entity )
          goto LABEL_98;
        *(_DWORD *)(v38 + 64) = entity[9].monitor;
        *(_DWORD *)(v38 + 44) = v45[13].klass;
      }
      Master_object = (__int64)v71;
      if ( !v71 )
        goto LABEL_98;
      if ( v71->fields._count >= 1
        && System_Collections_Generic_HashSet_int___Contains(
             v71,
             *(_DWORD *)(v38 + 16),
             (const MethodInfo_3502E74 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
      {
        v46 = *(float *)(v38 + 48) + 50000.0;
        *(float *)(v38 + 48) = v46;
        v47 = v46 + (float)((float)UserServantEntity__getRarity(v31, 0LL) * 100000.0);
        *(float *)(v38 + 48) = v47;
        v49 = *(_QWORD *)&v31->fields.limitCount.fields.currentCryptoKey;
        v48 = *(_QWORD *)&v31->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v80.fields.currentCryptoKey = v49;
        *(_QWORD *)&v80.fields.fakeValue = v48;
        Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v80, 0LL);
        v50 = v47 + (float)((float)(int)Master_object * 10000.0);
        goto LABEL_74;
      }
      Master_object = (__int64)UserServantEntity__GetEquipCategoryIdList(v31, 0, 0LL);
      if ( Master_object )
      {
        v51 = (System_Collections_Generic_IEnumerable_TSource__o *)Master_object;
        v52 = AutoOrganizationManager_TypeInfo;
        if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          v52 = AutoOrganizationManager_TypeInfo;
        }
        Master_object = System_Linq_Enumerable__Contains_int_(
                          v51,
                          v52->static_fields->CATEGORY_ID_NP_GAIN,
                          (const MethodInfo_2FC7E00 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (Master_object & 1) != 0 )
        {
          v53 = *(float *)(v38 + 48) + 40000.0;
        }
        else
        {
          v54 = AutoOrganizationManager_TypeInfo;
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
            v54 = AutoOrganizationManager_TypeInfo;
          }
          Master_object = System_Linq_Enumerable__Contains_int_(
                            v51,
                            v54->static_fields->CATEGORY_ID_NP_REGAIN,
                            (const MethodInfo_2FC7E00 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( (Master_object & 1) == 0 )
            goto LABEL_73;
          v53 = *(float *)(v38 + 48) + 30000.0;
        }
        *(float *)(v38 + 48) = v53;
      }
LABEL_73:
      v50 = *(float *)(v38 + 48) + (float)*(int *)(v38 + 36);
LABEL_74:
      *(float *)(v38 + 48) = v50;
      if ( !v8 )
        goto LABEL_98;
      items = v8->fields._items;
      v56 = Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__;
      ++v8->fields._version;
      if ( !items )
        goto LABEL_98;
      size = v8->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          (Il2CppObject *)v38,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
        if ( !organizedEquipIdList )
          goto LABEL_89;
      }
      else
      {
        v58 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v58[4] = (Il2CppClass *)v38;
        Master_object = sub_1C21DDC(v58 + 4, v38);
        if ( !organizedEquipIdList )
          goto LABEL_89;
      }
      v60 = *(_QWORD *)&v31->fields.svtId.fields.currentCryptoKey;
      v59 = *(_QWORD *)&v31->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v81.fields.currentCryptoKey = v60;
      *(_QWORD *)&v81.fields.fakeValue = v59;
      v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v81, 0LL);
      Master_object = System_Collections_Generic_List_int___Contains(
                        organizedEquipIdList,
                        v61,
                        (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( (Master_object & 1) == 0 )
      {
        v63 = *(_QWORD *)&v31->fields.svtId.fields.currentCryptoKey;
        v62 = *(_QWORD *)&v31->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v82.fields.currentCryptoKey = v63;
        *(_QWORD *)&v82.fields.fakeValue = v62;
        Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v82, 0LL);
        v64 = organizedEquipIdList->fields._items;
        v65 = Method_System_Collections_Generic_List_int__Add__;
        ++organizedEquipIdList->fields._version;
        if ( !v64 )
          goto LABEL_98;
        v66 = organizedEquipIdList->fields._size;
        v6 = (const MethodInfo *)(unsigned int)Master_object;
        if ( (unsigned int)v66 >= v64->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            organizedEquipIdList,
            Master_object,
            *(const MethodInfo_3632090 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
        }
        else
        {
          organizedEquipIdList->fields._size = v66 + 1;
          v64->m_Items[v66 + 1] = Master_object;
        }
      }
LABEL_89:
      LODWORD(v29) = ServantEquipList->max_length;
    }
  }
  Master_object = (__int64)AutoOrganizationManager___c_TypeInfo;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    Master_object = (__int64)AutoOrganizationManager___c_TypeInfo;
  }
  v67 = *(System_Comparison_T__o **)(*(_QWORD *)(Master_object + 184) + 56LL);
  if ( !v67 )
  {
    if ( !*(_DWORD *)(Master_object + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = (__int64)AutoOrganizationManager___c_TypeInfo;
    }
    v68 = **(Il2CppObject ***)(Master_object + 184);
    v67 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_AutoOrganizationManager_ServantData__TypeInfo);
    System_Comparison_object____ctor(v67, v68, Method_AutoOrganizationManager___c__AutoOrganizationEquip_b__21_0__, 0LL);
    v69 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v69->__9__21_0 = (struct System_Comparison_AutoOrganizationManager_ServantData__o *)v67;
    Master_object = sub_1C21DDC(&v69->__9__21_0, v67);
  }
  if ( !v8 )
    goto LABEL_98;
  System_Collections_Generic_List_object___Sort_56953720(
    v8,
    v67,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Sort__);
  return (AutoOrganizationManager_ServantData_array *)System_Collections_Generic_List_object___ToArray(
                                                        v8,
                                                        (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
}


AutoOrganizationManager_ServantData_array *__fastcall AutoOrganizationManager__AutoOrganizationServant(
        int32_t rarityBit,
        QuestRestrictionInfo_o *restrictionInfo,
        System_Int32_array *organizedServantIds,
        QuestAutoOrganizationAdjustEntity_array *questAutoOrganizationAdjustEntities,
        const MethodInfo *method)
{
  __int64 v6; // x23
  System_Collections_Generic_List_object__o *v7; // x20
  __int64 Master_object; // x0
  __int64 v9; // x1
  UserServantEntity_array *OrganizationList; // x25
  __int64 v11; // x8
  unsigned __int64 v12; // x19
  UserServantEntity_o *v13; // x28
  __int64 v14; // x27
  __int64 v15; // x29
  const MethodInfo *v16; // x2
  int32_t v17; // w29
  const MethodInfo *v18; // x2
  int32_t v19; // w27
  const MethodInfo *v20; // x2
  int32_t v21; // w27
  bool UniqueSvtRestriction; // w27
  System_Predicate_object__o *v23; // x29
  Il2CppObject *v24; // x0
  __int128 v25; // q0
  Il2CppObject *v26; // x29
  const MethodInfo *v27; // x2
  int64_t v28; // x27
  float AdjustTotalRate; // s8
  __int128 v30; // q0
  int32_t atk; // w8
  __int64 v32; // x29
  __int128 v33; // q0
  const MethodInfo *v34; // x2
  int64_t v35; // x27
  float v36; // s0
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  System_Predicate_object__o **v42; // [xsp+8h] [xbp-128h]
  DataMasterBase_TMaster__TEntity__PKType__o *v43; // [xsp+10h] [xbp-120h]
  UserServantEntity_o **m_Items; // [xsp+38h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+40h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+60h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+80h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+A0h] [xbp-90h]
  Il2CppObject *entity; // [xsp+C8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_4BD7FCA & 1) == 0 )
  {
    sub_1C21E38(&AutoOrganizationManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C21E38(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Find__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C21E38(&System_Predicate_AutoOrganizationManager_ServantData__TypeInfo);
    sub_1C21E38(&AutoOrganizationManager_ServantData_TypeInfo);
    sub_1C21E38(&Method_AutoOrganizationManager___c__DisplayClass18_0__AutoOrganizationServant_b__0__);
    sub_1C21E38(&AutoOrganizationManager___c__DisplayClass18_0_TypeInfo);
    byte_4BD7FCA = 1;
  }
  entity = 0LL;
  v6 = sub_1C22084(AutoOrganizationManager___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_65;
  OrganizationList = UserServantMaster__getOrganizationList((UserServantMaster_o *)Master_object, 0LL);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantMaster___);
  v43 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !OrganizationList )
    goto LABEL_65;
  v11 = *(_QWORD *)&OrganizationList->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0LL;
    v42 = (System_Predicate_object__o **)(v6 + 24);
    m_Items = OrganizationList->m_Items;
    do
    {
      if ( v12 >= (unsigned int)v11 )
        sub_1C2209C(Master_object, v9);
      v13 = m_Items[v12];
      if ( !v13 )
        goto LABEL_34;
      Master_object = UserServantEntity__getRarity(m_Items[v12], 0LL);
      if ( rarityBit != 31 && (_DWORD)Master_object == 0
        || (rarityBit & 1) == 0 && (_DWORD)Master_object == 1
        || (rarityBit & 2) == 0 && (_DWORD)Master_object == 2
        || (rarityBit & 4) == 0 && (_DWORD)Master_object == 3
        || (rarityBit & 8) == 0 && (_DWORD)Master_object == 4
        || (rarityBit & 0x10) == 0 && (_DWORD)Master_object == 5 )
      {
        goto LABEL_34;
      }
      v14 = *(_QWORD *)&v13->fields.svtId.fields.currentCryptoKey;
      v15 = *(_QWORD *)&v13->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v53.fields.currentCryptoKey = v14;
      *(_QWORD *)&v53.fields.fakeValue = v15;
      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v53, 0LL);
      if ( !v6 )
        goto LABEL_65;
      v17 = Master_object;
      *(_DWORD *)(v6 + 16) = Master_object;
      if ( organizedServantIds )
      {
        Master_object = System_Linq_Enumerable__Contains_int_(
                          (System_Collections_Generic_IEnumerable_TSource__o *)organizedServantIds,
                          Master_object,
                          (const MethodInfo_2FC7E00 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (Master_object & 1) != 0 )
          goto LABEL_34;
        v17 = *(_DWORD *)(v6 + 16);
      }
      if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      Master_object = AutoOrganizationManager__IsFatigue(restrictionInfo, v17, v16);
      if ( (Master_object & 1) == 0 )
      {
        v19 = *(_DWORD *)(v6 + 16);
        if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
        Master_object = AutoOrganizationManager__IsAllOutBattleAlreadyUsed(restrictionInfo, v19, v18);
        if ( (Master_object & 1) == 0 )
        {
          v21 = *(_DWORD *)(v6 + 16);
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          Master_object = AutoOrganizationManager__IsDataLost(restrictionInfo, v21, v20);
          if ( (Master_object & 1) == 0 )
          {
            Master_object = UserServantEntity__IsLeave(v13, 0LL);
            if ( (Master_object & 1) == 0 )
            {
              Master_object = UserServantEntity__getQuestRestriction(v13, restrictionInfo, 1, 0LL);
              if ( (Master_object & 1) == 0 )
              {
                UniqueSvtRestriction = UserServantEntity__getUniqueSvtRestriction(v13, restrictionInfo, 0LL);
                Master_object = UserServantEntity__IsUniqueIndividualityRestriction(v13, restrictionInfo, 0LL);
                if ( !UniqueSvtRestriction && (Master_object & 1) == 0 )
                {
                  v23 = *v42;
                  if ( !*v42 )
                  {
                    v23 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_AutoOrganizationManager_ServantData__TypeInfo);
                    System_Predicate_object____ctor(
                      v23,
                      (Il2CppObject *)v6,
                      Method_AutoOrganizationManager___c__DisplayClass18_0__AutoOrganizationServant_b__0__,
                      0LL);
                    *(_QWORD *)(v6 + 24) = v23;
                    Master_object = sub_1C21DDC(v42, v23);
                  }
                  if ( !v7 )
                    goto LABEL_65;
                  v24 = System_Collections_Generic_List_object___Find(
                          v7,
                          (System_Predicate_T__o *)v23,
                          (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Find__);
                  if ( v24 )
                  {
                    v25 = *(_OWORD *)&v13->fields.id.fields.fakeValue;
                    v26 = v24;
                    *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&v13->fields.id.fields.currentCryptoKey;
                    *(_OWORD *)&v51.fields.fakeValue = v25;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    v50 = v51;
                    v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v50, 0LL);
                    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
                    AdjustTotalRate = AutoOrganizationManager__GetAdjustTotalRate(
                                        (System_Collections_Generic_IEnumerable_QuestAutoOrganizationAdjustEntity__o *)questAutoOrganizationAdjustEntities,
                                        v28,
                                        v27);
                    if ( (float)(AdjustTotalRate * (float)v13->fields.atk) >= (float)(*(float *)&v26[4].monitor
                                                                                    * (float)SHIDWORD(v26[2].klass)) )
                    {
                      v30 = *(_OWORD *)&v13->fields.id.fields.fakeValue;
                      *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&v13->fields.id.fields.currentCryptoKey;
                      *(_OWORD *)&v51.fields.fakeValue = v30;
                      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                      v49 = v51;
                      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v49, 0LL);
                      v26[1].monitor = (void *)Master_object;
                      atk = v13->fields.atk;
                      *(float *)&v26[4].monitor = AdjustTotalRate;
                      HIDWORD(v26[2].klass) = atk;
                    }
                  }
                  else
                  {
                    v32 = sub_1C22084(AutoOrganizationManager_ServantData_TypeInfo);
                    System_Object___ctor((Il2CppObject *)v32, 0LL);
                    *(_DWORD *)(v32 + 16) = 0;
                    *(_QWORD *)(v32 + 44) = 0LL;
                    *(_DWORD *)(v32 + 64) = 0;
                    *(_BYTE *)(v32 + 68) = 0;
                    *(_QWORD *)(v32 + 72) = 0LL;
                    *(_QWORD *)(v32 + 24) = 0LL;
                    *(_QWORD *)(v32 + 32) = 0LL;
                    v33 = *(_OWORD *)&v13->fields.id.fields.fakeValue;
                    *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&v13->fields.id.fields.currentCryptoKey;
                    *(_OWORD *)&v51.fields.fakeValue = v33;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    v48 = v51;
                    *(_QWORD *)(v32 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(
                                              &v48,
                                              0LL);
                    *(_DWORD *)(v32 + 16) = *(_DWORD *)(v6 + 16);
                    *(_DWORD *)(v32 + 32) = UserServantEntity__getSvtClassId(v13, 0, 0LL);
                    *(_DWORD *)(v32 + 36) = v13->fields.atk;
                    v35 = *(_QWORD *)(v32 + 24);
                    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
                    v36 = AutoOrganizationManager__GetAdjustTotalRate(
                            (System_Collections_Generic_IEnumerable_QuestAutoOrganizationAdjustEntity__o *)questAutoOrganizationAdjustEntities,
                            v35,
                            v34);
                    Master_object = (__int64)v43;
                    *(float *)(v32 + 72) = v36;
                    if ( !v43 )
                      goto LABEL_65;
                    Master_object = DataMasterBase_object__object__int___TryGetEntity(
                                      v43,
                                      &entity,
                                      *(_DWORD *)(v32 + 16),
                                      (const MethodInfo_325BE14 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
                    if ( (Master_object & 1) != 0 )
                    {
                      Master_object = (__int64)entity;
                      if ( !entity )
                        goto LABEL_65;
                      *(_DWORD *)(v32 + 64) = entity[9].monitor;
                      Master_object = ServantEntity__GetNotSamePartyKey((ServantEntity_o *)Master_object, 0LL);
                      *(_DWORD *)(v32 + 76) = Master_object;
                    }
                    items = v7->fields._items;
                    v38 = Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__;
                    ++v7->fields._version;
                    if ( !items )
                      goto LABEL_65;
                    size = v7->fields._size;
                    if ( (unsigned int)size >= items->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v7,
                        (Il2CppObject *)v32,
                        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v40 = &items->obj.klass + size;
                      v7->fields._size = size + 1;
                      v40[4] = (Il2CppClass *)v32;
                      Master_object = sub_1C21DDC(v40 + 4, v32);
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_34:
      LODWORD(v11) = OrganizationList->max_length;
    }
    while ( (__int64)++v12 < (int)v11 );
  }
  Master_object = (__int64)v7;
  if ( !v7 )
LABEL_65:
    sub_1C22094(Master_object, v9);
  return (AutoOrganizationManager_ServantData_array *)System_Collections_Generic_List_object___ToArray(
                                                        v7,
                                                        (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
}


void __fastcall AutoOrganizationManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  AutoOrganizationManager_c *v2; // x0
  ListViewSort_o *autoOrganizationInfo; // x0

  if ( (byte_4BD7FC7 & 1) == 0 )
  {
    sub_1C21E38(&AutoOrganizationManager_TypeInfo);
    byte_4BD7FC7 = 1;
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
    sub_1C22094(autoOrganizationInfo, v1);
  }
  ListViewSort__DeleteContinueData(autoOrganizationInfo, 0LL);
}


float __fastcall AutoOrganizationManager__GetAdjustTotalRate(
        System_Collections_Generic_IEnumerable_QuestAutoOrganizationAdjustEntity__o *questAutoOrganizationAdjustEntities,
        int64_t userSvtId,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Func_T__TResult__o *v8; // x20
  System_Collections_Generic_IEnumerable_TResult__o *v9; // x0
  AutoOrganizationManager___c_c *v10; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x19
  System_Func_float__float__float__o *_9__26_1; // x20
  Il2CppObject *v13; // x21
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x0

  if ( (byte_4BD7FD2 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Aggregate_float__float___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___);
    sub_1C21E38(&System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo);
    sub_1C21E38(&System_Func_float__float__float__TypeInfo);
    sub_1C21E38(&Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__26_1__);
    sub_1C21E38(&Method_AutoOrganizationManager___c__DisplayClass26_0__GetAdjustTotalRate_b__0__);
    sub_1C21E38(&AutoOrganizationManager___c__DisplayClass26_0_TypeInfo);
    sub_1C21E38(&AutoOrganizationManager___c_TypeInfo);
    byte_4BD7FD2 = 1;
  }
  v5 = (Il2CppObject *)sub_1C22084(AutoOrganizationManager___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor(v5, 0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  v5[1].klass = (Il2CppClass *)userSvtId;
  v8 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo);
  System_Func_object__float____ctor(
    v8,
    v5,
    Method_AutoOrganizationManager___c__DisplayClass26_0__GetAdjustTotalRate_b__0__,
    0LL);
  v9 = System_Linq_Enumerable__Select_object__float_(
         (System_Collections_Generic_IEnumerable_TSource__o *)questAutoOrganizationAdjustEntities,
         (System_Func_TSource__TResult__o *)v8,
         (const MethodInfo_2FE191C *)Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___);
  v10 = AutoOrganizationManager___c_TypeInfo;
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)v9;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v10 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__26_1 = v10->static_fields->__9__26_1;
  if ( !_9__26_1 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = AutoOrganizationManager___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__26_1 = (System_Func_float__float__float__o *)sub_1C22084(System_Func_float__float__float__TypeInfo);
    System_Func_float__float__float____ctor(
      _9__26_1,
      v13,
      Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__26_1__,
      0LL);
    static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    static_fields->__9__26_1 = _9__26_1;
    sub_1C21DDC(&static_fields->__9__26_1, _9__26_1);
  }
  return System_Linq_Enumerable__Aggregate_float__float_(
           v11,
           1.0,
           (System_Func_TAccumulate__TSource__TAccumulate__o *)_9__26_1,
           (const MethodInfo_2FB8988 *)Method_System_Linq_Enumerable_Aggregate_float__float___);
}


float __fastcall AutoOrganizationManager__GetAdjustTotalRate_32777800(
        System_Collections_Generic_IEnumerable_QuestAutoOrganizationAdjustEntity__o *questAutoOrganizationAdjustEntities,
        System_Int32_array *individualities,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Func_T__TResult__o *v8; // x20
  System_Collections_Generic_IEnumerable_TResult__o *v9; // x0
  AutoOrganizationManager___c_c *v10; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x19
  System_Func_float__float__float__o *_9__27_1; // x20
  Il2CppObject *v13; // x21
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x0

  if ( (byte_4BD7FD3 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Aggregate_float__float___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___);
    sub_1C21E38(&System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo);
    sub_1C21E38(&System_Func_float__float__float__TypeInfo);
    sub_1C21E38(&Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__27_1__);
    sub_1C21E38(&Method_AutoOrganizationManager___c__DisplayClass27_0__GetAdjustTotalRate_b__0__);
    sub_1C21E38(&AutoOrganizationManager___c__DisplayClass27_0_TypeInfo);
    sub_1C21E38(&AutoOrganizationManager___c_TypeInfo);
    byte_4BD7FD3 = 1;
  }
  v5 = (Il2CppObject *)sub_1C22084(AutoOrganizationManager___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor(v5, 0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  v5[1].klass = (Il2CppClass *)individualities;
  sub_1C21DDC(&v5[1], individualities);
  v8 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo);
  System_Func_object__float____ctor(
    v8,
    v5,
    Method_AutoOrganizationManager___c__DisplayClass27_0__GetAdjustTotalRate_b__0__,
    0LL);
  v9 = System_Linq_Enumerable__Select_object__float_(
         (System_Collections_Generic_IEnumerable_TSource__o *)questAutoOrganizationAdjustEntities,
         (System_Func_TSource__TResult__o *)v8,
         (const MethodInfo_2FE191C *)Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___);
  v10 = AutoOrganizationManager___c_TypeInfo;
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)v9;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v10 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__27_1 = v10->static_fields->__9__27_1;
  if ( !_9__27_1 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = AutoOrganizationManager___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__27_1 = (System_Func_float__float__float__o *)sub_1C22084(System_Func_float__float__float__TypeInfo);
    System_Func_float__float__float____ctor(
      _9__27_1,
      v13,
      Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__27_1__,
      0LL);
    static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    static_fields->__9__27_1 = _9__27_1;
    sub_1C21DDC(&static_fields->__9__27_1, _9__27_1);
  }
  return System_Linq_Enumerable__Aggregate_float__float_(
           v11,
           1.0,
           (System_Func_TAccumulate__TSource__TAccumulate__o *)_9__27_1,
           (const MethodInfo_2FB8988 *)Method_System_Linq_Enumerable_Aggregate_float__float___);
}


System_Boolean_array *__fastcall AutoOrganizationManager__GetAutoOrganizationSetting(
        ListViewSort_o *sort,
        int32_t *settingUnitNum,
        const MethodInfo *method)
{
  __int64 Filter_42056680; // x0
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

  if ( (byte_4BD7FC8 & 1) == 0 )
  {
    sub_1C21E38(&bool___TypeInfo);
    byte_4BD7FC8 = 1;
  }
  Filter_42056680 = sub_1C21EE0(bool___TypeInfo, 13LL);
  if ( !sort )
LABEL_38:
    sub_1C22094(Filter_42056680, v6);
  v7 = (System_Boolean_array *)Filter_42056680;
  v8 = 0LL;
  v9 = Filter_42056680 + 32;
  do
  {
    Filter_42056680 = ListViewSort__GetFilter_42056680(sort, v8, 0LL);
    if ( !v7 )
      goto LABEL_38;
    max_length = v7->max_length;
    if ( v8 >= max_length )
      goto LABEL_37;
    *(_BYTE *)(v9 + v8++) = Filter_42056680 & 1;
  }
  while ( v8 != 13 );
  if ( (unsigned int)max_length < 2 )
LABEL_37:
    sub_1C2209C(Filter_42056680, v6);
  v11 = v7->m_Items[5];
  v12 = !v7->m_Items[4];
  v13 = !v11;
  v14 = v11;
  v15 = v13;
  v7->m_Items[4] |= v15;
  v7->m_Items[5] = v14 || v12;
  Filter_42056680 = sub_1C21EE0(bool___TypeInfo, 5LL);
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
    if ( !Filter_42056680 )
      goto LABEL_38;
    if ( v17 >= *(unsigned int *)(Filter_42056680 + 24) )
      goto LABEL_37;
    v21 = v7->m_Items[v17 + 6];
    *(_BYTE *)(Filter_42056680 + 32 + v17++) = v21;
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
  Filter_42056680 = sub_1C21EE0(bool___TypeInfo, 6LL);
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
    if ( !Filter_42056680 )
      goto LABEL_38;
    v28 = *(unsigned int *)(Filter_42056680 + 24);
    if ( v24 >= v28 )
      goto LABEL_37;
    v29 = v7->m_Items[v24 + 11];
    *(_BYTE *)(Filter_42056680 + 32 + v24++) = v29;
    if ( v29 )
      LODWORD(v25) = v24;
  }
  while ( v24 != 6 );
  if ( !(_DWORD)v25 )
  {
    v25 = 0LL;
    while ( v25 < v28 )
    {
      *(_BYTE *)(Filter_42056680 + 32 + v25++) = 1;
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
  System_Collections_Generic_HashSet_int__o *v3; // x19
  __int64 Master_object; // x0
  __int64 v5; // x1
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x20
  System_Int32_array *v8; // x21
  Il2CppObject *v9; // x23
  Il2CppObject *v10; // x25
  System_Collections_Generic_List_EventBonusFilterEntity__o *FilterList; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x24
  System_Collections_Generic_List_object__o *v13; // x26
  AutoOrganizationManager___c_c *v14; // x0
  System_Comparison_T__o *_9__22_0; // x25
  Il2CppObject *v16; // x21
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x0
  System_Collections_Generic_List_object__o *v18; // x0
  System_Collections_Generic_List_object__o *v19; // x0
  int32_t v20; // w25
  int v21; // w8
  __int64 v22; // x26
  __int64 v23; // x26
  __int64 v24; // x21
  __int64 v25; // x27
  int v26; // w8
  __int64 v27; // x27
  int v28; // w24
  char v29; // w20
  __int64 v30; // x21
  SkillLvEntity_o *v31; // x28
  __int64 v32; // x21
  __int64 v33; // x29
  int32_t v34; // w21
  EventUpValInfo_o *v35; // x29
  __int64 v36; // x21
  __int64 v37; // x27
  int v38; // w8
  __int64 v39; // x26
  unsigned int v40; // w20
  __int64 v41; // x8
  ServantSkillMaster_o *v43; // [xsp+8h] [xbp-88h]
  Il2CppObject *v44; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_object__o *v45; // [xsp+18h] [xbp-78h]
  EventUpValSetupInfo_o *setupInfo; // [xsp+20h] [xbp-70h]
  EventUpValInfo_o *eventUpVallInfo; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_4BD7FCE & 1) == 0 )
  {
    sub_1C21E38(&System_Comparison_EventBonusFilterEntity__TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventBonusFilterMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C21E38(&EventUpValInfo_TypeInfo);
    sub_1C21E38(&EventUpValSetupInfo_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1C21E38(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SkillInfo___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_EventUpValInfo__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_SkillInfo__TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_AutoOrganizationManager___c__GetEventBonusIds_b__22_0__);
    sub_1C21E38(&AutoOrganizationManager___c_TypeInfo);
    byte_4BD7FCE = 1;
  }
  eventUpVallInfo = 0LL;
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C22084(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_3502780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_61;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Master_object, 0, 0LL, 0LL);
  if ( !EventValUpEventIdHash )
    return v3;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash;
  if ( EventValUpEventIdHash->fields._count < 1
    || !System_Collections_Generic_HashSet_int___Contains(
          EventValUpEventIdHash,
          eventId,
          (const MethodInfo_3502E74 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
    return v3;
  }
  v8 = System_Linq_Enumerable__ToArray_int_(
         v7,
         (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
  setupInfo = (EventUpValSetupInfo_o *)sub_1C22084(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_40169720(setupInfo, v8, 0, 0, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v44 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantMaster___);
  v43 = (ServantSkillMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  v9 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v10 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  Master_object = sub_1C21EE0(int___TypeInfo, 1LL);
  if ( !Master_object )
    goto LABEL_61;
  v5 = Master_object;
  if ( !*(_DWORD *)(Master_object + 24) )
    goto LABEL_62;
  *(_DWORD *)(Master_object + 32) = eventId;
  if ( !v10 )
LABEL_61:
    sub_1C22094(Master_object, v5);
  FilterList = EventBonusFilterMaster__GetFilterList(
                 (EventBonusFilterMaster_o *)v10,
                 (System_Int32_array *)Master_object,
                 1,
                 1,
                 0LL);
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)v44;
  if ( FilterList )
  {
    v13 = (System_Collections_Generic_List_object__o *)FilterList;
    if ( FilterList->fields._size >= 1 )
    {
      v14 = AutoOrganizationManager___c_TypeInfo;
      if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
        v14 = AutoOrganizationManager___c_TypeInfo;
      }
      _9__22_0 = (System_Comparison_T__o *)v14->static_fields->__9__22_0;
      if ( !_9__22_0 )
      {
        if ( !v14->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v14);
          v14 = AutoOrganizationManager___c_TypeInfo;
        }
        v16 = (Il2CppObject *)v14->static_fields->__9;
        _9__22_0 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_EventBonusFilterEntity__TypeInfo);
        System_Comparison_object____ctor(
          _9__22_0,
          v16,
          Method_AutoOrganizationManager___c__GetEventBonusIds_b__22_0__,
          0LL);
        static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
        static_fields->__9__22_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__22_0;
        sub_1C21DDC(&static_fields->__9__22_0, _9__22_0);
      }
      System_Collections_Generic_List_object___Sort_56953720(
        v13,
        _9__22_0,
        (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
      v18 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventUpValInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v18,
        (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
      v19 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_SkillInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v19,
        (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
      if ( v13->fields._size >= 1 )
      {
        v20 = 0;
        v45 = v13;
        do
        {
          Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                     v13,
                                     v20,
                                     (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
          if ( !Master_object )
            goto LABEL_61;
          v21 = *(_DWORD *)(Master_object + 20);
          v22 = Master_object;
          if ( v21 == 2 )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
            if ( !Master_object )
              goto LABEL_61;
            Master_object = (__int64)EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                                       (EventBonusFilterGroupMemberMaster_o *)Master_object,
                                       *(_DWORD *)(v22 + 24),
                                       0LL);
            if ( !Master_object )
              goto LABEL_61;
            v38 = *(_DWORD *)(Master_object + 24);
            v39 = Master_object;
            if ( v38 >= 1 )
            {
              v40 = 0;
              while ( v40 < v38 )
              {
                v41 = *(_QWORD *)(v39 + 8LL * (int)v40 + 32);
                if ( !v41 || !v3 )
                  goto LABEL_61;
                Master_object = System_Collections_Generic_HashSet_int___Add(
                                  v3,
                                  *(_DWORD *)(v41 + 20),
                                  (const MethodInfo_3503984 *)Method_System_Collections_Generic_HashSet_int__Add__);
                v38 = *(_DWORD *)(v39 + 24);
                if ( (int)++v40 >= v38 )
                  goto LABEL_59;
              }
LABEL_62:
              sub_1C2209C(Master_object, v5);
            }
          }
          else if ( v21 == 1 )
          {
            if ( !v12 )
              goto LABEL_61;
            Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                       v12,
                                       *(_DWORD *)(Master_object + 24),
                                       (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Master_object )
              goto LABEL_61;
            v23 = Master_object;
            v25 = *(_QWORD *)(Master_object + 16);
            v24 = *(_QWORD *)(Master_object + 24);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v48.fields.currentCryptoKey = v25;
            *(_QWORD *)&v48.fields.fakeValue = v24;
            v5 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v48, 0LL);
            Master_object = (__int64)v43;
            if ( !v43 )
              goto LABEL_61;
            Master_object = (__int64)ServantSkillMaster__getServantSkillList(v43, v5, 0LL);
            if ( !Master_object )
              goto LABEL_61;
            v26 = *(_DWORD *)(Master_object + 24);
            v27 = Master_object;
            if ( v26 >= 1 )
            {
              v28 = 0;
              v29 = 0;
              do
              {
                if ( v28 >= (unsigned int)v26 )
                  goto LABEL_62;
                v30 = *(_QWORD *)(v27 + 8LL * v28 + 32);
                if ( !v30 || !v9 )
                  goto LABEL_61;
                Master_object = (__int64)SkillLvMaster__GetEntity((SkillLvMaster_o *)v9, *(_DWORD *)(v30 + 28), 1, 0LL);
                if ( Master_object && !*(_DWORD *)(v30 + 44) )
                {
                  v31 = (SkillLvEntity_o *)Master_object;
                  v32 = *(_QWORD *)(v23 + 16);
                  v33 = *(_QWORD *)(v23 + 24);
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v49.fields.currentCryptoKey = v32;
                  *(_QWORD *)&v49.fields.fakeValue = v33;
                  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v49, 0LL);
                  v35 = (EventUpValInfo_o *)sub_1C22084(EventUpValInfo_TypeInfo);
                  EventUpValInfo___ctor(v35, setupInfo, v34, 1, 1, 0, 0LL);
                  eventUpVallInfo = v35;
                  Master_object = SkillLvEntity__getEventUpVal_41223724(v31, &eventUpVallInfo, 1, 1, 0, 1, 0LL, 0LL);
                  v29 |= Master_object;
                }
                v26 = *(_DWORD *)(v27 + 24);
                ++v28;
              }
              while ( v28 < v26 );
              v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)v44;
              if ( (v29 & 1) != 0 )
              {
                v37 = *(_QWORD *)(v23 + 16);
                v36 = *(_QWORD *)(v23 + 24);
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v50.fields.currentCryptoKey = v37;
                *(_QWORD *)&v50.fields.fakeValue = v36;
                Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v50, 0LL);
                if ( !v3 )
                  goto LABEL_61;
                System_Collections_Generic_HashSet_int___Add(
                  v3,
                  Master_object,
                  (const MethodInfo_3503984 *)Method_System_Collections_Generic_HashSet_int__Add__);
              }
            }
          }
LABEL_59:
          v13 = v45;
          ++v20;
        }
        while ( v20 < v45->fields._size );
      }
    }
  }
  return v3;
}


int32_t __fastcall AutoOrganizationManager__GetRarityBit(System_Boolean_array *rarityFlag, const MethodInfo *method)
{
  unsigned __int64 max_length; // x10
  unsigned __int64 v4; // x9
  __int64 v5; // x0
  bool *v6; // x8

  if ( !rarityFlag )
    sub_1C22094(0LL, method);
  max_length = rarityFlag->max_length;
  v4 = 0LL;
  v5 = 0LL;
  v6 = &rarityFlag->m_Items[4];
  do
  {
    if ( (__int64)v4 <= (int)max_length )
    {
      if ( v4 >= max_length )
        sub_1C2209C(v5, method);
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
  __int64 Filter_42056728; // x0
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

  if ( (byte_4BD7FC9 & 1) == 0 )
  {
    sub_1C21E38(&bool___TypeInfo);
    byte_4BD7FC9 = 1;
  }
  Filter_42056728 = sub_1C21EE0(bool___TypeInfo, 7LL);
  if ( !sort )
LABEL_25:
    sub_1C22094(Filter_42056728, v4);
  v5 = (System_Boolean_array *)Filter_42056728;
  v6 = 0LL;
  v7 = Filter_42056728 + 32;
  do
  {
    Filter_42056728 = ListViewSort__GetFilter_42056728(sort, v6, 0LL);
    if ( !v5 )
      goto LABEL_25;
    max_length = v5->max_length;
    if ( v6 >= max_length )
      goto LABEL_24;
    *(_BYTE *)(v7 + v6++) = Filter_42056728 & 1;
  }
  while ( v6 != 7 );
  if ( (unsigned int)max_length < 2 )
LABEL_24:
    sub_1C2209C(Filter_42056728, v4);
  v9 = v5->m_Items[5];
  v10 = !v5->m_Items[4];
  v11 = !v9;
  v12 = v9;
  v13 = v11;
  v5->m_Items[4] |= v13;
  v5->m_Items[5] = v12 || v10;
  Filter_42056728 = sub_1C21EE0(bool___TypeInfo, 5LL);
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
    if ( !Filter_42056728 )
      goto LABEL_25;
    if ( v15 >= *(unsigned int *)(Filter_42056728 + 24) )
      goto LABEL_24;
    v19 = v5->m_Items[v15 + 6];
    *(_BYTE *)(Filter_42056728 + 32 + v15++) = v19;
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

  if ( (byte_4BD7FC6 & 1) == 0 )
  {
    sub_1C21E38(&AutoOrganizationManager_TypeInfo);
    byte_4BD7FC6 = 1;
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
    sub_1C22094(autoOrganizationInfo, v1);
  }
  ListViewSort__InitLoad(autoOrganizationInfo, 0LL);
}


bool __fastcall AutoOrganizationManager__IsAllOutBattleAlreadyUsed(
        QuestRestrictionInfo_o *restrictionInfo,
        int32_t svtId,
        const MethodInfo *method)
{
  int32_t allOutBattleGroupNo; // w21
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1

  if ( (byte_4BD7FD0 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    byte_4BD7FD0 = 1;
  }
  if ( !restrictionInfo || !restrictionInfo->fields.isAllOutBattle )
    return 0;
  allOutBattleGroupNo = restrictionInfo->fields.allOutBattleGroupNo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( !Master_object )
    sub_1C22094(0LL, v7);
  return UserEventAlloutBattleMaster__IsAlreadyUsedServant(
           (UserEventAlloutBattleMaster_o *)Master_object,
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
  __int64 v5; // x1
  Il2CppObject *Master_object; // x21
  void *IsRestart; // x0
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BD7FD1 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD7FD1 = 1;
  }
  entity = 0LL;
  if ( !restrictionInfo || !restrictionInfo->fields.isDataLostBattle )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
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
    sub_1C22094(IsRestart, v5);
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


bool __fastcall AutoOrganizationManager__IsFatigue(
        QuestRestrictionInfo_o *restrictionInfo,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  int64_t v7; // x19
  bool isRecover; // [xsp+4h] [xbp-2Ch] BYREF
  int64_t recoverAt; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BD7FCF & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_UserEventServantFatigueMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD7FCF = 1;
  }
  recoverAt = 0LL;
  isRecover = 0;
  if ( !restrictionInfo || !restrictionInfo->fields.isFatigure )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserEventServantFatigueMaster___);
  if ( !Master_object )
    sub_1C22094(0LL, v6);
  if ( !UserEventServantFatigueMaster__GetFatigueInfo(
          (UserEventServantFatigueMaster_o *)Master_object,
          &recoverAt,
          &isRecover,
          restrictionInfo->fields.eventId,
          svtId,
          0LL) )
    return 0;
  v7 = recoverAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return v7 > NetworkManager__getTime(0LL);
}


AutoOrganizationManager_ServantData_array *__fastcall AutoOrganizationManager__SortClassRelation(
        System_Collections_Generic_IReadOnlyList_AutoOrganizationManager_ServantData__o *dataList,
        int32_t enemyClassId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x29
  int32_t klass; // w22
  _BOOL8 v13; // x0
  __int64 v14; // x1
  float Rate; // s0
  AutoOrganizationManager___c_c *v16; // x0
  System_Func_T__TResult__o *_9__19_0; // x20
  Il2CppObject *v18; // x21
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4BD7FCB & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__get_Current__);
    sub_1C21E38(&System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___77595712);
    sub_1C21E38(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
    sub_1C21E38(&Method_AutoOrganizationManager___c__SortClassRelation_b__19_0__);
    sub_1C21E38(&AutoOrganizationManager___c_TypeInfo);
    byte_4BD7FCB = 1;
  }
  entity = 0LL;
  memset(&v23, 0, sizeof(v23));
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor_56945064(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)dataList,
    (const MethodInfo_364E9A8 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___77595712);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantClassMaster___);
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( enemyClassId )
  {
    if ( !Master_object )
      goto LABEL_32;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &entity,
                                      enemyClassId,
                                      (const MethodInfo_325BE14 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_32;
      enemyClassId = HIDWORD(entity[3].monitor);
    }
  }
  if ( !v5 )
LABEL_32:
    sub_1C22094(Master_object, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    v5,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__);
  v23 = v22;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v23,
           (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__);
    if ( !v9 )
      break;
    current = v23.fields._current;
    if ( !v23.fields._current )
      sub_1C22094(v9, v10);
    if ( !v8 )
      sub_1C22094(v9, v10);
    klass = (int32_t)v23.fields._current[2].klass;
    v13 = DataMasterBase_object__object__int___TryGetEntity(
            v8,
            &entity,
            klass,
            (const MethodInfo_325BE14 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( v13 )
    {
      if ( !entity )
        sub_1C22094(v13, v14);
      klass = HIDWORD(entity[3].monitor);
    }
    if ( enemyClassId )
      Rate = ClassRelationMaster__getRate(klass, enemyClassId, 0LL);
    else
      Rate = 1.0;
    *(float *)&current[3].klass = *(float *)&current[4].monitor * (float)(Rate * (float)SHIDWORD(current[2].klass));
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__);
  v16 = AutoOrganizationManager___c_TypeInfo;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v16 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__19_0 = (System_Func_T__TResult__o *)v16->static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = AutoOrganizationManager___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__19_0 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    System_Func_object__float____ctor(
      _9__19_0,
      v18,
      Method_AutoOrganizationManager___c__SortClassRelation_b__19_0__,
      0LL);
    static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = (struct System_Func_AutoOrganizationManager_ServantData__float__o *)_9__19_0;
    sub_1C21DDC(&static_fields->__9__19_0, _9__19_0);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__float_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v5,
                                                               (System_Func_TSource__TKey__o *)_9__19_0,
                                                               (const MethodInfo_2FD9550 *)Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___);
  return (AutoOrganizationManager_ServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                                        v20,
                                                        (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___);
}


AutoOrganizationManager_ServantData_array *__fastcall AutoOrganizationManager__SortServant(
        System_Collections_Generic_IReadOnlyList_AutoOrganizationManager_ServantData__o *dataList,
        int32_t enemyClassId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x27
  int32_t klass; // w22
  _BOOL8 v13; // x0
  __int64 v14; // x1
  float Rate; // s8
  float v16; // s0
  float v17; // s0
  AutoOrganizationManager___c_c *v18; // x0
  System_Func_T__TResult__o *_9__20_0; // x20
  Il2CppObject *v20; // x21
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v22; // x0
  AutoOrganizationManager___c_c *v23; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v24; // x19
  System_Func_object__int__o *_9__20_1; // x20
  Il2CppObject *v26; // x21
  struct AutoOrganizationManager___c_StaticFields *v27; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v28; // x0
  AutoOrganizationManager___c_c *v29; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v30; // x19
  System_Func_T__TResult__o *_9__20_2; // x20
  Il2CppObject *v32; // x21
  struct AutoOrganizationManager___c_StaticFields *v33; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v34; // x0
  AutoOrganizationManager___c_c *v35; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v36; // x19
  System_Func_object__int__o *_9__20_3; // x20
  Il2CppObject *v38; // x21
  struct AutoOrganizationManager___c_StaticFields *v39; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v40; // x0
  AutoOrganizationManager___c_c *v41; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v42; // x19
  System_Func_T__TResult__o *_9__20_4; // x20
  Il2CppObject *v44; // x21
  struct AutoOrganizationManager___c_StaticFields *v45; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+20h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4BD7FCC & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__long___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__float___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__get_Current__);
    sub_1C21E38(&System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    sub_1C21E38(&System_Func_AutoOrganizationManager_ServantData__long__TypeInfo);
    sub_1C21E38(&System_Func_AutoOrganizationManager_ServantData__int__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___77595712);
    sub_1C21E38(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
    sub_1C21E38(&Method_AutoOrganizationManager___c__SortServant_b__20_0__);
    sub_1C21E38(&Method_AutoOrganizationManager___c__SortServant_b__20_1__);
    sub_1C21E38(&Method_AutoOrganizationManager___c__SortServant_b__20_2__);
    sub_1C21E38(&Method_AutoOrganizationManager___c__SortServant_b__20_3__);
    sub_1C21E38(&Method_AutoOrganizationManager___c__SortServant_b__20_4__);
    sub_1C21E38(&AutoOrganizationManager___c_TypeInfo);
    byte_4BD7FCC = 1;
  }
  entity = 0LL;
  memset(&v49, 0, sizeof(v49));
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor_56945064(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)dataList,
    (const MethodInfo_364E9A8 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___77595712);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantClassMaster___);
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( enemyClassId )
  {
    if ( !Master_object )
      goto LABEL_56;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &entity,
                                      enemyClassId,
                                      (const MethodInfo_325BE14 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_56;
      enemyClassId = HIDWORD(entity[3].monitor);
    }
  }
  if ( !v5 )
LABEL_56:
    sub_1C22094(Master_object, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v48,
    v5,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__);
  v49 = v48;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v49,
           (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__);
    if ( !v9 )
      break;
    current = v49.fields._current;
    if ( !v49.fields._current )
      sub_1C22094(v9, v10);
    if ( !v8 )
      sub_1C22094(v9, v10);
    klass = (int32_t)v49.fields._current[2].klass;
    v13 = DataMasterBase_object__object__int___TryGetEntity(
            v8,
            &entity,
            klass,
            (const MethodInfo_325BE14 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( v13 )
    {
      if ( !entity )
        sub_1C22094(v13, v14);
      klass = HIDWORD(entity[3].monitor);
    }
    if ( enemyClassId )
    {
      Rate = ClassRelationMaster__getRate(klass, enemyClassId, 0LL);
      v16 = ClassRelationMaster__getRate(enemyClassId, klass, 0LL);
    }
    else
    {
      v16 = 1.0;
      Rate = 1.0;
    }
    v17 = (float)SLODWORD(current[2].monitor) / v16;
    *((float *)&current[3].klass + 1) = *(float *)&current[4].monitor
                                      * (float)(Rate * (float)SHIDWORD(current[2].klass));
    *(float *)&current[3].monitor = v17;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v49,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__);
  v18 = AutoOrganizationManager___c_TypeInfo;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v18 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__20_0 = (System_Func_T__TResult__o *)v18->static_fields->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = AutoOrganizationManager___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v18->static_fields->__9;
    _9__20_0 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    System_Func_object__float____ctor(_9__20_0, v20, Method_AutoOrganizationManager___c__SortServant_b__20_0__, 0LL);
    static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    static_fields->__9__20_0 = (struct System_Func_AutoOrganizationManager_ServantData__float__o *)_9__20_0;
    sub_1C21DDC(&static_fields->__9__20_0, _9__20_0);
  }
  v22 = System_Linq_Enumerable__OrderByDescending_object__float_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v5,
          (System_Func_TSource__TKey__o *)_9__20_0,
          (const MethodInfo_2FD9550 *)Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___);
  v23 = AutoOrganizationManager___c_TypeInfo;
  v24 = v22;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v23 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__20_1 = (System_Func_object__int__o *)v23->static_fields->__9__20_1;
  if ( !_9__20_1 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = AutoOrganizationManager___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v23->static_fields->__9;
    _9__20_1 = (System_Func_object__int__o *)sub_1C22084(System_Func_AutoOrganizationManager_ServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__20_1, v26, Method_AutoOrganizationManager___c__SortServant_b__20_1__, 0LL);
    v27 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v27->__9__20_1 = (struct System_Func_AutoOrganizationManager_ServantData__int__o *)_9__20_1;
    sub_1C21DDC(&v27->__9__20_1, _9__20_1);
  }
  v28 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v24,
          (System_Func_TSource__TKey__o *)_9__20_1,
          (const MethodInfo_2FE9074 *)Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__int___);
  v29 = AutoOrganizationManager___c_TypeInfo;
  v30 = v28;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v29 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__20_2 = (System_Func_T__TResult__o *)v29->static_fields->__9__20_2;
  if ( !_9__20_2 )
  {
    if ( !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v29 = AutoOrganizationManager___c_TypeInfo;
    }
    v32 = (Il2CppObject *)v29->static_fields->__9;
    _9__20_2 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    System_Func_object__float____ctor(_9__20_2, v32, Method_AutoOrganizationManager___c__SortServant_b__20_2__, 0LL);
    v33 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v33->__9__20_2 = (struct System_Func_AutoOrganizationManager_ServantData__float__o *)_9__20_2;
    sub_1C21DDC(&v33->__9__20_2, _9__20_2);
  }
  v34 = System_Linq_Enumerable__ThenByDescending_object__float_(
          v30,
          (System_Func_TSource__TKey__o *)_9__20_2,
          (const MethodInfo_2FE920C *)Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__float___);
  v35 = AutoOrganizationManager___c_TypeInfo;
  v36 = v34;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v35 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__20_3 = (System_Func_object__int__o *)v35->static_fields->__9__20_3;
  if ( !_9__20_3 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = AutoOrganizationManager___c_TypeInfo;
    }
    v38 = (Il2CppObject *)v35->static_fields->__9;
    _9__20_3 = (System_Func_object__int__o *)sub_1C22084(System_Func_AutoOrganizationManager_ServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__20_3, v38, Method_AutoOrganizationManager___c__SortServant_b__20_3__, 0LL);
    v39 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v39->__9__20_3 = (struct System_Func_AutoOrganizationManager_ServantData__int__o *)_9__20_3;
    sub_1C21DDC(&v39->__9__20_3, _9__20_3);
  }
  v40 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v36,
          (System_Func_TSource__TKey__o *)_9__20_3,
          (const MethodInfo_2FE9074 *)Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__int___);
  v41 = AutoOrganizationManager___c_TypeInfo;
  v42 = v40;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v41 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__20_4 = (System_Func_T__TResult__o *)v41->static_fields->__9__20_4;
  if ( !_9__20_4 )
  {
    if ( !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v41 = AutoOrganizationManager___c_TypeInfo;
    }
    v44 = (Il2CppObject *)v41->static_fields->__9;
    _9__20_4 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_AutoOrganizationManager_ServantData__long__TypeInfo);
    System_Func_object__long____ctor(_9__20_4, v44, Method_AutoOrganizationManager___c__SortServant_b__20_4__, 0LL);
    v45 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v45->__9__20_4 = (struct System_Func_AutoOrganizationManager_ServantData__long__o *)_9__20_4;
    sub_1C21DDC(&v45->__9__20_4, _9__20_4);
  }
  v46 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenByDescending_object__long_(
                                                               v42,
                                                               (System_Func_TSource__TKey__o *)_9__20_4,
                                                               (const MethodInfo_2FE9140 *)Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__long___);
  return (AutoOrganizationManager_ServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                                        v46,
                                                        (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___);
}


ListViewSort_o *__fastcall AutoOrganizationManager__get_SortInfo(const MethodInfo *method)
{
  AutoOrganizationManager_c *v1; // x0

  if ( (byte_4BD7FC4 & 1) == 0 )
  {
    sub_1C21E38(&AutoOrganizationManager_TypeInfo);
    byte_4BD7FC4 = 1;
  }
  v1 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v1 = AutoOrganizationManager_TypeInfo;
  }
  return v1->static_fields->autoOrganizationInfo;
}


ListViewSort_o *__fastcall AutoOrganizationManager__get_SortInfoWaveBattle(const MethodInfo *method)
{
  AutoOrganizationManager_c *v1; // x0

  if ( (byte_4BD7FC5 & 1) == 0 )
  {
    sub_1C21E38(&AutoOrganizationManager_TypeInfo);
    byte_4BD7FC5 = 1;
  }
  v1 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
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
  *(_QWORD *)&this->fields.collectionNo = 0LL;
  this->fields.cost = 0;
  this->fields.used = 0;
  *(_QWORD *)&this->fields.questAutoOrganizationAdjustRate = 0LL;
  this->fields.userSvtId = 0LL;
  *(_QWORD *)&this->fields.classId = 0LL;
}


void __fastcall AutoOrganizationManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4BD7FD5 & 1) == 0 )
  {
    sub_1C21E38(&AutoOrganizationManager___c_TypeInfo);
    byte_4BD7FD5 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(AutoOrganizationManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  AutoOrganizationManager___c_TypeInfo->static_fields->__9 = (struct AutoOrganizationManager___c_o *)v1;
  sub_1C21DDC(AutoOrganizationManager___c_TypeInfo->static_fields, v1);
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
    sub_1C22094(this, a);
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
    sub_1C22094(this, a);
  return b->fields.priority - a->fields.priority;
}


float __fastcall AutoOrganizationManager___c___SortClassRelation_b__19_0(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1C22094(this, 0LL);
  return d->fields.relationNum;
}


float __fastcall AutoOrganizationManager___c___SortServant_b__20_0(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1C22094(this, 0LL);
  return d->fields.relationAtk;
}


int32_t __fastcall AutoOrganizationManager___c___SortServant_b__20_1(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1C22094(this, 0LL);
  return d->fields.treasureDeviceLv;
}


float __fastcall AutoOrganizationManager___c___SortServant_b__20_2(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1C22094(this, 0LL);
  return d->fields.relationDef;
}


int32_t __fastcall AutoOrganizationManager___c___SortServant_b__20_3(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1C22094(this, 0LL);
  return d->fields.svtId;
}


int64_t __fastcall AutoOrganizationManager___c___SortServant_b__20_4(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1C22094(this, 0LL);
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
    sub_1C22094(this, 0LL);
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
    sub_1C22094(this, 0LL);
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
    sub_1C22094(this, 0LL);
  return QuestAutoOrganizationAdjustEntity__GetAdjustRate_40724356(entity, this->fields.individualities, 0LL);
}