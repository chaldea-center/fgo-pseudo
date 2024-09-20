void __fastcall AutoOrganizationManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  struct AutoOrganizationManager_StaticFields *static_fields; // x0
  int32_t v3; // w2
  int32_t v4; // w3
  ListViewSort_o *v5; // x19
  struct AutoOrganizationManager_StaticFields *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A56E8D & 1) == 0 )
  {
    sub_1B885B0(&AutoOrganizationManager_TypeInfo);
    sub_1B885B0(&ListViewSort_TypeInfo);
    sub_1B885B0(&StringLiteral_2615/*"AutoOrganization"*/);
    sub_1B885B0(&StringLiteral_2621/*"AutoOrganizationWaveBattle"*/);
    byte_4A56E8D = 1;
  }
  *(_QWORD *)AutoOrganizationManager_TypeInfo->static_fields = 0x296B0000296ALL;
  v1 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40759068(v1, (System_String_o *)StringLiteral_2615/*"AutoOrganization"*/, 3, 0, 0LL);
  static_fields = AutoOrganizationManager_TypeInfo->static_fields;
  static_fields->autoOrganizationInfo = v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->autoOrganizationInfo, (int32_t)v1, v3, v4);
  v5 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40759068(v5, (System_String_o *)StringLiteral_2621/*"AutoOrganizationWaveBattle"*/, 3, 0, 0LL);
  v6 = AutoOrganizationManager_TypeInfo->static_fields;
  v6->waveBattleAutoOrganizationInfo = v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->waveBattleAutoOrganizationInfo, (int32_t)v5, v7, v8);
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
  void *Master_object; // x0
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
  void *v26; // x29
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
  int32_t v50; // w2
  int32_t v51; // w3
  float v52; // s0
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x27
  AutoOrganizationManager_c *v54; // x0
  float v55; // s0
  AutoOrganizationManager_c *v56; // x0
  struct System_Object_array *items; // x8
  _QWORD *v58; // x9
  __int64 size; // x10
  Il2CppClass **v60; // x0
  __int64 v61; // x26
  __int64 v62; // x27
  int32_t v63; // w0
  __int64 v64; // x25
  __int64 v65; // x26
  struct System_Int32_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  System_Comparison_T__o *v69; // x19
  Il2CppObject *v70; // x21
  struct AutoOrganizationManager___c_StaticFields *v71; // x0
  int32_t v72; // w2
  int32_t v73; // w3
  System_Collections_Generic_HashSet_int__o *v75; // [xsp+0h] [xbp-F0h]
  DataMasterBase_TMaster__TEntity__PKType__o *v76; // [xsp+8h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+30h] [xbp-C0h]
  int v79; // [xsp+54h] [xbp-9Ch] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-98h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16

  if ( (byte_4A56E86 & 1) == 0 )
  {
    sub_1B885B0(&AutoOrganizationManager_TypeInfo);
    sub_1B885B0(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
    sub_1B885B0(&System_Comparison_AutoOrganizationManager_ServantData__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&ServantBonusFilterSelectMenu_TypeInfo);
    sub_1B885B0(&AutoOrganizationManager_ServantData_TypeInfo);
    sub_1B885B0(&Method_AutoOrganizationManager___c__AutoOrganizationEquip_b__21_0__);
    sub_1B885B0(&AutoOrganizationManager___c_TypeInfo);
    byte_4A56E86 = 1;
  }
  entity = 0LL;
  v79 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_98;
  ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)Master_object, 0LL);
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
  v76 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
  v9 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v9,
    (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  v10 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v10,
    (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( eventId )
  {
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    Master_object = AutoOrganizationManager__GetEventBonusIds(eventId, v6);
    if ( !Master_object )
      goto LABEL_98;
    v75 = (System_Collections_Generic_HashSet_int__o *)Master_object;
    if ( *((int *)Master_object + 8) >= 1 )
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
      v15 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
      if ( !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
      Master_object = (void *)ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0LL);
      v79 = 0;
      if ( (int)Master_object >= 1 )
      {
        v16 = (int)Master_object;
        while ( 1 )
        {
          v17 = System_Int32__ToString((int32_t)&v79, 0LL);
          v18 = System_String__Concat_61707032(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v17, 0LL);
          if ( UnityEngine_PlayerPrefs__HasKey(v18, 0LL) )
          {
            v19 = System_Int32__ToString((int32_t)&v79, 0LL);
            v20 = System_String__Concat_61707032(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v19, 0LL);
            Master_object = (void *)UnityEngine_PlayerPrefs__GetInt_69417088(v20, 0LL);
            if ( !v10 )
              goto LABEL_98;
            System_Collections_Generic_HashSet_int___Add(
              v10,
              (int32_t)Master_object,
              (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
          v21 = System_Int32__ToString((int32_t)&v79, 0LL);
          v22 = System_String__Concat_61707032(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v21, 0LL);
          Master_object = (void *)UnityEngine_PlayerPrefs__HasKey(v22, 0LL);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            v23 = System_Int32__ToString((int32_t)&v79, 0LL);
            v24 = System_String__Concat_61707032(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v23, 0LL);
            Master_object = (void *)UnityEngine_PlayerPrefs__GetInt_69417088(v24, 0LL);
            if ( !v15 )
              goto LABEL_98;
            Master_object = EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                              (EventBonusFilterGroupMemberMaster_o *)v15,
                              (int32_t)Master_object,
                              0LL);
            if ( !Master_object )
              goto LABEL_98;
            v25 = *((_DWORD *)Master_object + 6);
            v26 = Master_object;
            if ( v25 >= 1 )
              break;
          }
LABEL_31:
          if ( ++v79 >= v16 )
            goto LABEL_34;
        }
        v27 = 0;
        while ( 1 )
        {
          if ( v27 >= v25 )
LABEL_99:
            sub_1B88814(Master_object, v6);
          v28 = *((_QWORD *)v26 + (int)v27 + 4);
          if ( !v28 || !v10 )
            break;
          Master_object = (void *)System_Collections_Generic_HashSet_int___Add(
                                    v10,
                                    *(_DWORD *)(v28 + 20),
                                    (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
          v25 = *((_DWORD *)v26 + 6);
          if ( (int)++v27 >= v25 )
            goto LABEL_31;
        }
LABEL_98:
        sub_1B8880C(Master_object, v6);
      }
    }
  }
  else
  {
    v75 = v9;
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
        *(_QWORD *)&v81.fields.currentCryptoKey = v33;
        *(_QWORD *)&v81.fields.fakeValue = v32;
        v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v81, 0LL);
        Master_object = (void *)System_Collections_Generic_List_int___Contains(
                                  organizedEquipIdList,
                                  v34,
                                  (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
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
        *(_QWORD *)&v82.fields.currentCryptoKey = v36;
        *(_QWORD *)&v82.fields.fakeValue = v35;
        v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v82, 0LL);
        Master_object = (void *)System_Collections_Generic_HashSet_int___Contains(
                                  v10,
                                  v37,
                                  (const MethodInfo_33B3270 *)Method_System_Collections_Generic_HashSet_int__Contains__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
          goto LABEL_89;
      }
      Master_object = (void *)UserServantEntity__IsFriendShipSvtEquip(v31, 0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
        goto LABEL_89;
      v38 = sub_1B887FC(AutoOrganizationManager_ServantData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v38, 0LL);
      *(_DWORD *)(v38 + 16) = 0;
      *(_QWORD *)(v38 + 32) = 0LL;
      *(_QWORD *)(v38 + 24) = 0LL;
      *(_QWORD *)(v38 + 44) = 0LL;
      *(_DWORD *)(v38 + 64) = 0;
      *(_BYTE *)(v38 + 68) = 0;
      *(_DWORD *)(v38 + 72) = 0;
      v39 = *(_OWORD *)&v31->fields.id.fields.fakeValue;
      *(_OWORD *)&v78.fields.currentCryptoKey = *(_OWORD *)&v31->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v78.fields.fakeValue = v39;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v77 = v78;
      *(_QWORD *)(v38 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v77, 0LL);
      v41 = *(_QWORD *)&v31->fields.svtId.fields.currentCryptoKey;
      v40 = *(_QWORD *)&v31->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v83.fields.currentCryptoKey = v41;
      *(_QWORD *)&v83.fields.fakeValue = v40;
      v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v83, 0LL);
      *(_DWORD *)(v38 + 16) = v42;
      v43 = v42;
      atk = v31->fields.atk;
      Master_object = v76;
      *(_DWORD *)(v38 + 48) = 0;
      *(_DWORD *)(v38 + 36) = atk;
      if ( !v76 )
        goto LABEL_98;
      Master_object = (void *)DataMasterBase_object__object__int___TryGetEntity(
                                v76,
                                &entity,
                                v43,
                                (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v45 = entity;
        if ( !entity )
          goto LABEL_98;
        *(_DWORD *)(v38 + 64) = entity[9].monitor;
        *(_DWORD *)(v38 + 44) = v45[13].klass;
      }
      Master_object = v75;
      if ( !v75 )
        goto LABEL_98;
      if ( v75->fields._count >= 1
        && System_Collections_Generic_HashSet_int___Contains(
             v75,
             *(_DWORD *)(v38 + 16),
             (const MethodInfo_33B3270 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
      {
        v46 = *(float *)(v38 + 48) + 50000.0;
        *(float *)(v38 + 48) = v46;
        v47 = v46 + (float)((float)UserServantEntity__getRarity(v31, 0LL) * 100000.0);
        *(float *)(v38 + 48) = v47;
        v49 = *(_QWORD *)&v31->fields.limitCount.fields.currentCryptoKey;
        v48 = *(_QWORD *)&v31->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v84.fields.currentCryptoKey = v49;
        *(_QWORD *)&v84.fields.fakeValue = v48;
        Master_object = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v84, 0LL);
        v52 = v47 + (float)((float)(int)Master_object * 10000.0);
        goto LABEL_74;
      }
      Master_object = UserServantEntity__GetEquipCategoryIdList(v31, 0, 0LL);
      if ( Master_object )
      {
        v53 = (System_Collections_Generic_IEnumerable_TSource__o *)Master_object;
        v54 = AutoOrganizationManager_TypeInfo;
        if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          v54 = AutoOrganizationManager_TypeInfo;
        }
        Master_object = (void *)System_Linq_Enumerable__Contains_int_(
                                  v53,
                                  v54->static_fields->CATEGORY_ID_NP_GAIN,
                                  (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          v55 = *(float *)(v38 + 48) + 40000.0;
        }
        else
        {
          v56 = AutoOrganizationManager_TypeInfo;
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
            v56 = AutoOrganizationManager_TypeInfo;
          }
          Master_object = (void *)System_Linq_Enumerable__Contains_int_(
                                    v53,
                                    v56->static_fields->CATEGORY_ID_NP_REGAIN,
                                    (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( ((unsigned __int8)Master_object & 1) == 0 )
            goto LABEL_73;
          v55 = *(float *)(v38 + 48) + 30000.0;
        }
        *(float *)(v38 + 48) = v55;
      }
LABEL_73:
      v52 = *(float *)(v38 + 48) + (float)*(int *)(v38 + 36);
LABEL_74:
      *(float *)(v38 + 48) = v52;
      if ( !v8 )
        goto LABEL_98;
      items = v8->fields._items;
      v58 = Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__;
      ++v8->fields._version;
      if ( !items )
        goto LABEL_98;
      size = v8->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          (Il2CppObject *)v38,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
        if ( !organizedEquipIdList )
          goto LABEL_89;
      }
      else
      {
        v60 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v60[4] = (Il2CppClass *)v38;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v60 + 4), v38, v50, v51);
        if ( !organizedEquipIdList )
          goto LABEL_89;
      }
      v62 = *(_QWORD *)&v31->fields.svtId.fields.currentCryptoKey;
      v61 = *(_QWORD *)&v31->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v85.fields.currentCryptoKey = v62;
      *(_QWORD *)&v85.fields.fakeValue = v61;
      v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v85, 0LL);
      Master_object = (void *)System_Collections_Generic_List_int___Contains(
                                organizedEquipIdList,
                                v63,
                                (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)Master_object & 1) == 0 )
      {
        v65 = *(_QWORD *)&v31->fields.svtId.fields.currentCryptoKey;
        v64 = *(_QWORD *)&v31->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v86.fields.currentCryptoKey = v65;
        *(_QWORD *)&v86.fields.fakeValue = v64;
        Master_object = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v86, 0LL);
        v66 = organizedEquipIdList->fields._items;
        v67 = Method_System_Collections_Generic_List_int__Add__;
        ++organizedEquipIdList->fields._version;
        if ( !v66 )
          goto LABEL_98;
        v68 = organizedEquipIdList->fields._size;
        v6 = (const MethodInfo *)(unsigned int)Master_object;
        if ( (unsigned int)v68 >= v66->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            organizedEquipIdList,
            (int32_t)Master_object,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
        }
        else
        {
          organizedEquipIdList->fields._size = v68 + 1;
          v66->m_Items[v68 + 1] = (int)Master_object;
        }
      }
LABEL_89:
      LODWORD(v29) = ServantEquipList->max_length;
    }
  }
  Master_object = AutoOrganizationManager___c_TypeInfo;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    Master_object = AutoOrganizationManager___c_TypeInfo;
  }
  v69 = *(System_Comparison_T__o **)(*((_QWORD *)Master_object + 23) + 56LL);
  if ( !v69 )
  {
    if ( !*((_DWORD *)Master_object + 56) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = AutoOrganizationManager___c_TypeInfo;
    }
    v70 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
    v69 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_AutoOrganizationManager_ServantData__TypeInfo);
    System_Comparison_object____ctor(v69, v70, Method_AutoOrganizationManager___c__AutoOrganizationEquip_b__21_0__, 0LL);
    v71 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v71->__9__21_0 = (struct System_Comparison_AutoOrganizationManager_ServantData__o *)v69;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v71->__9__21_0, (int32_t)v69, v72, v73);
  }
  if ( !v8 )
    goto LABEL_98;
  System_Collections_Generic_List_object___Sort_55571192(
    v8,
    v69,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Sort__);
  return (AutoOrganizationManager_ServantData_array *)System_Collections_Generic_List_object___ToArray(
                                                        v8,
                                                        (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
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
  int64_t Master_object; // x0
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
  System_Predicate_object__o *klass; // x29
  int32_t v24; // w2
  int32_t v25; // w3
  Il2CppObject *v26; // x0
  __int128 v27; // q0
  Il2CppObject *v28; // x29
  const MethodInfo *v29; // x2
  int64_t v30; // x27
  float AdjustTotalRate; // s8
  __int128 v32; // q0
  int32_t atk; // w8
  __int64 v34; // x29
  __int128 v35; // q0
  const MethodInfo *v36; // x2
  int64_t v37; // x27
  float v38; // s0
  int32_t v39; // w2
  int32_t v40; // w3
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  ServantStatusBattleListViewItem_o *v46; // [xsp+8h] [xbp-128h]
  DataMasterBase_TMaster__TEntity__PKType__o *v47; // [xsp+10h] [xbp-120h]
  UserServantEntity_o **m_Items; // [xsp+38h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+40h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+60h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+80h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+A0h] [xbp-90h]
  Il2CppObject *entity; // [xsp+C8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  if ( (byte_4A56E83 & 1) == 0 )
  {
    sub_1B885B0(&AutoOrganizationManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Find__);
    sub_1B885B0(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&System_Predicate_AutoOrganizationManager_ServantData__TypeInfo);
    sub_1B885B0(&AutoOrganizationManager_ServantData_TypeInfo);
    sub_1B885B0(&Method_AutoOrganizationManager___c__DisplayClass18_0__AutoOrganizationServant_b__0__);
    sub_1B885B0(&AutoOrganizationManager___c__DisplayClass18_0_TypeInfo);
    byte_4A56E83 = 1;
  }
  entity = 0LL;
  v6 = sub_1B887FC(AutoOrganizationManager___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_65;
  OrganizationList = UserServantMaster__getOrganizationList((UserServantMaster_o *)Master_object, 0LL);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
  v47 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !OrganizationList )
    goto LABEL_65;
  v11 = *(_QWORD *)&OrganizationList->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0LL;
    v46 = (ServantStatusBattleListViewItem_o *)(v6 + 24);
    m_Items = OrganizationList->m_Items;
    do
    {
      if ( v12 >= (unsigned int)v11 )
        sub_1B88814(Master_object, v9);
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
      *(_QWORD *)&v57.fields.currentCryptoKey = v14;
      *(_QWORD *)&v57.fields.fakeValue = v15;
      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v57, 0LL);
      if ( !v6 )
        goto LABEL_65;
      v17 = Master_object;
      *(_DWORD *)(v6 + 16) = Master_object;
      if ( organizedServantIds )
      {
        Master_object = System_Linq_Enumerable__Contains_int_(
                          (System_Collections_Generic_IEnumerable_TSource__o *)organizedServantIds,
                          Master_object,
                          (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
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
                  klass = (System_Predicate_object__o *)v46->klass;
                  if ( !v46->klass )
                  {
                    klass = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_AutoOrganizationManager_ServantData__TypeInfo);
                    System_Predicate_object____ctor(
                      klass,
                      (Il2CppObject *)v6,
                      Method_AutoOrganizationManager___c__DisplayClass18_0__AutoOrganizationServant_b__0__,
                      0LL);
                    *(_QWORD *)(v6 + 24) = klass;
                    sub_1B88554(v46, (int32_t)klass, v24, v25);
                  }
                  if ( !v7 )
                    goto LABEL_65;
                  v26 = System_Collections_Generic_List_object___Find(
                          v7,
                          (System_Predicate_T__o *)klass,
                          (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Find__);
                  if ( v26 )
                  {
                    v27 = *(_OWORD *)&v13->fields.id.fields.fakeValue;
                    v28 = v26;
                    *(_OWORD *)&v55.fields.currentCryptoKey = *(_OWORD *)&v13->fields.id.fields.currentCryptoKey;
                    *(_OWORD *)&v55.fields.fakeValue = v27;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    v54 = v55;
                    v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v54, 0LL);
                    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
                    AdjustTotalRate = AutoOrganizationManager__GetAdjustTotalRate(
                                        (System_Collections_Generic_IEnumerable_QuestAutoOrganizationAdjustEntity__o *)questAutoOrganizationAdjustEntities,
                                        v30,
                                        v29);
                    if ( (float)(AdjustTotalRate * (float)v13->fields.atk) >= (float)(*(float *)&v28[4].monitor
                                                                                    * (float)SHIDWORD(v28[2].klass)) )
                    {
                      v32 = *(_OWORD *)&v13->fields.id.fields.fakeValue;
                      *(_OWORD *)&v55.fields.currentCryptoKey = *(_OWORD *)&v13->fields.id.fields.currentCryptoKey;
                      *(_OWORD *)&v55.fields.fakeValue = v32;
                      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                      v53 = v55;
                      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v53, 0LL);
                      v28[1].monitor = (void *)Master_object;
                      atk = v13->fields.atk;
                      *(float *)&v28[4].monitor = AdjustTotalRate;
                      HIDWORD(v28[2].klass) = atk;
                    }
                  }
                  else
                  {
                    v34 = sub_1B887FC(AutoOrganizationManager_ServantData_TypeInfo);
                    System_Object___ctor((Il2CppObject *)v34, 0LL);
                    *(_DWORD *)(v34 + 16) = 0;
                    *(_QWORD *)(v34 + 44) = 0LL;
                    *(_DWORD *)(v34 + 64) = 0;
                    *(_BYTE *)(v34 + 68) = 0;
                    *(_DWORD *)(v34 + 72) = 0;
                    *(_QWORD *)(v34 + 24) = 0LL;
                    *(_QWORD *)(v34 + 32) = 0LL;
                    v35 = *(_OWORD *)&v13->fields.id.fields.fakeValue;
                    *(_OWORD *)&v55.fields.currentCryptoKey = *(_OWORD *)&v13->fields.id.fields.currentCryptoKey;
                    *(_OWORD *)&v55.fields.fakeValue = v35;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    v52 = v55;
                    *(_QWORD *)(v34 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                              &v52,
                                              0LL);
                    *(_DWORD *)(v34 + 16) = *(_DWORD *)(v6 + 16);
                    *(_DWORD *)(v34 + 32) = UserServantEntity__getSvtClassId(v13, 0, 0LL);
                    *(_DWORD *)(v34 + 36) = v13->fields.atk;
                    v37 = *(_QWORD *)(v34 + 24);
                    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
                    v38 = AutoOrganizationManager__GetAdjustTotalRate(
                            (System_Collections_Generic_IEnumerable_QuestAutoOrganizationAdjustEntity__o *)questAutoOrganizationAdjustEntities,
                            v37,
                            v36);
                    Master_object = (int64_t)v47;
                    *(float *)(v34 + 72) = v38;
                    if ( !v47 )
                      goto LABEL_65;
                    Master_object = DataMasterBase_object__object__int___TryGetEntity(
                                      v47,
                                      &entity,
                                      *(_DWORD *)(v34 + 16),
                                      (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
                    if ( (Master_object & 1) != 0 )
                    {
                      if ( !entity )
                        goto LABEL_65;
                      *(_DWORD *)(v34 + 64) = entity[9].monitor;
                    }
                    items = v7->fields._items;
                    v42 = Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__;
                    ++v7->fields._version;
                    if ( !items )
                      goto LABEL_65;
                    size = v7->fields._size;
                    if ( (unsigned int)size >= items->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v7,
                        (Il2CppObject *)v34,
                        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v44 = &items->obj.klass + size;
                      v7->fields._size = size + 1;
                      v44[4] = (Il2CppClass *)v34;
                      sub_1B88554((ServantStatusBattleListViewItem_o *)(v44 + 4), v34, v39, v40);
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
  Master_object = (int64_t)v7;
  if ( !v7 )
LABEL_65:
    sub_1B8880C(Master_object, v9);
  return (AutoOrganizationManager_ServantData_array *)System_Collections_Generic_List_object___ToArray(
                                                        v7,
                                                        (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
}


void __fastcall AutoOrganizationManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  AutoOrganizationManager_c *v2; // x0
  ListViewSort_o *autoOrganizationInfo; // x0

  if ( (byte_4A56E80 & 1) == 0 )
  {
    sub_1B885B0(&AutoOrganizationManager_TypeInfo);
    byte_4A56E80 = 1;
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
    sub_1B8880C(autoOrganizationInfo, v1);
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
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_4A56E8B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Aggregate_float__float___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___);
    sub_1B885B0(&System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo);
    sub_1B885B0(&System_Func_float__float__float__TypeInfo);
    sub_1B885B0(&Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__26_1__);
    sub_1B885B0(&Method_AutoOrganizationManager___c__DisplayClass26_0__GetAdjustTotalRate_b__0__);
    sub_1B885B0(&AutoOrganizationManager___c__DisplayClass26_0_TypeInfo);
    sub_1B885B0(&AutoOrganizationManager___c_TypeInfo);
    byte_4A56E8B = 1;
  }
  v5 = (Il2CppObject *)sub_1B887FC(AutoOrganizationManager___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor(v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  v5[1].klass = (Il2CppClass *)userSvtId;
  v8 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo);
  System_Func_object__float____ctor(
    v8,
    v5,
    Method_AutoOrganizationManager___c__DisplayClass26_0__GetAdjustTotalRate_b__0__,
    0LL);
  v9 = System_Linq_Enumerable__Select_object__float_(
         (System_Collections_Generic_IEnumerable_TSource__o *)questAutoOrganizationAdjustEntities,
         (System_Func_TSource__TResult__o *)v8,
         (const MethodInfo_2EB0770 *)Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___);
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
    _9__26_1 = (System_Func_float__float__float__o *)sub_1B887FC(System_Func_float__float__float__TypeInfo);
    System_Func_float__float__float____ctor(
      _9__26_1,
      v13,
      Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__26_1__,
      0LL);
    static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    static_fields->__9__26_1 = _9__26_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__26_1, (int32_t)_9__26_1, v15, v16);
  }
  return System_Linq_Enumerable__Aggregate_float__float_(
           v11,
           1.0,
           (System_Func_TAccumulate__TSource__TAccumulate__o *)_9__26_1,
           (const MethodInfo_2E8A9C0 *)Method_System_Linq_Enumerable_Aggregate_float__float___);
}


float __fastcall AutoOrganizationManager__GetAdjustTotalRate_31831248(
        System_Collections_Generic_IEnumerable_QuestAutoOrganizationAdjustEntity__o *questAutoOrganizationAdjustEntities,
        System_Int32_array *individualities,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_Func_T__TResult__o *v10; // x20
  System_Collections_Generic_IEnumerable_TResult__o *v11; // x0
  AutoOrganizationManager___c_c *v12; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  System_Func_float__float__float__o *_9__27_1; // x20
  Il2CppObject *v15; // x21
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_4A56E8C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Aggregate_float__float___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___);
    sub_1B885B0(&System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo);
    sub_1B885B0(&System_Func_float__float__float__TypeInfo);
    sub_1B885B0(&Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__27_1__);
    sub_1B885B0(&Method_AutoOrganizationManager___c__DisplayClass27_0__GetAdjustTotalRate_b__0__);
    sub_1B885B0(&AutoOrganizationManager___c__DisplayClass27_0_TypeInfo);
    sub_1B885B0(&AutoOrganizationManager___c_TypeInfo);
    byte_4A56E8C = 1;
  }
  v5 = sub_1B887FC(AutoOrganizationManager___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 16) = individualities;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)individualities, v8, v9);
  v10 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo);
  System_Func_object__float____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_AutoOrganizationManager___c__DisplayClass27_0__GetAdjustTotalRate_b__0__,
    0LL);
  v11 = System_Linq_Enumerable__Select_object__float_(
          (System_Collections_Generic_IEnumerable_TSource__o *)questAutoOrganizationAdjustEntities,
          (System_Func_TSource__TResult__o *)v10,
          (const MethodInfo_2EB0770 *)Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___);
  v12 = AutoOrganizationManager___c_TypeInfo;
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)v11;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v12 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__27_1 = v12->static_fields->__9__27_1;
  if ( !_9__27_1 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = AutoOrganizationManager___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__27_1 = (System_Func_float__float__float__o *)sub_1B887FC(System_Func_float__float__float__TypeInfo);
    System_Func_float__float__float____ctor(
      _9__27_1,
      v15,
      Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__27_1__,
      0LL);
    static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    static_fields->__9__27_1 = _9__27_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__27_1, (int32_t)_9__27_1, v17, v18);
  }
  return System_Linq_Enumerable__Aggregate_float__float_(
           v13,
           1.0,
           (System_Func_TAccumulate__TSource__TAccumulate__o *)_9__27_1,
           (const MethodInfo_2E8A9C0 *)Method_System_Linq_Enumerable_Aggregate_float__float___);
}


System_Boolean_array *__fastcall AutoOrganizationManager__GetAutoOrganizationSetting(
        ListViewSort_o *sort,
        int32_t *settingUnitNum,
        const MethodInfo *method)
{
  __int64 Filter_40785692; // x0
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

  if ( (byte_4A56E81 & 1) == 0 )
  {
    sub_1B885B0(&bool___TypeInfo);
    byte_4A56E81 = 1;
  }
  Filter_40785692 = sub_1B88658(bool___TypeInfo, 13LL);
  if ( !sort )
LABEL_38:
    sub_1B8880C(Filter_40785692, v6);
  v7 = (System_Boolean_array *)Filter_40785692;
  v8 = 0LL;
  v9 = Filter_40785692 + 32;
  do
  {
    Filter_40785692 = ListViewSort__GetFilter_40785692(sort, v8, 0LL);
    if ( !v7 )
      goto LABEL_38;
    max_length = v7->max_length;
    if ( v8 >= max_length )
      goto LABEL_37;
    *(_BYTE *)(v9 + v8++) = Filter_40785692 & 1;
  }
  while ( v8 != 13 );
  if ( (unsigned int)max_length < 2 )
LABEL_37:
    sub_1B88814(Filter_40785692, v6);
  v11 = v7->m_Items[5];
  v12 = !v7->m_Items[4];
  v13 = !v11;
  v14 = v11;
  v15 = v13;
  v7->m_Items[4] |= v15;
  v7->m_Items[5] = v14 || v12;
  Filter_40785692 = sub_1B88658(bool___TypeInfo, 5LL);
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
    if ( !Filter_40785692 )
      goto LABEL_38;
    if ( v17 >= *(unsigned int *)(Filter_40785692 + 24) )
      goto LABEL_37;
    v21 = v7->m_Items[v17 + 6];
    *(_BYTE *)(Filter_40785692 + 32 + v17++) = v21;
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
  Filter_40785692 = sub_1B88658(bool___TypeInfo, 6LL);
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
    if ( !Filter_40785692 )
      goto LABEL_38;
    v28 = *(unsigned int *)(Filter_40785692 + 24);
    if ( v24 >= v28 )
      goto LABEL_37;
    v29 = v7->m_Items[v24 + 11];
    *(_BYTE *)(Filter_40785692 + 32 + v24++) = v29;
    if ( v29 )
      LODWORD(v25) = v24;
  }
  while ( v24 != 6 );
  if ( !(_DWORD)v25 )
  {
    v25 = 0LL;
    while ( v25 < v28 )
    {
      *(_BYTE *)(Filter_40785692 + 32 + v25++) = 1;
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
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_List_object__o *v20; // x0
  System_Collections_Generic_List_object__o *v21; // x0
  int32_t v22; // w25
  int v23; // w8
  __int64 v24; // x26
  __int64 v25; // x26
  __int64 v26; // x21
  __int64 v27; // x27
  int v28; // w8
  __int64 v29; // x27
  int v30; // w24
  char v31; // w20
  __int64 v32; // x21
  SkillLvEntity_o *v33; // x28
  __int64 v34; // x21
  __int64 v35; // x29
  int32_t v36; // w21
  EventUpValInfo_o *v37; // x29
  __int64 v38; // x21
  __int64 v39; // x27
  int v40; // w8
  __int64 v41; // x26
  unsigned int v42; // w20
  __int64 v43; // x8
  ServantSkillMaster_o *v45; // [xsp+8h] [xbp-88h]
  Il2CppObject *v46; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_object__o *v47; // [xsp+18h] [xbp-78h]
  EventUpValSetupInfo_o *setupInfo; // [xsp+20h] [xbp-70h]
  EventUpValInfo_o *eventUpVallInfo; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_4A56E87 & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_EventBonusFilterEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventBonusFilterMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&EventUpValInfo_TypeInfo);
    sub_1B885B0(&EventUpValSetupInfo_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SkillInfo___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_EventUpValInfo__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_SkillInfo__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_AutoOrganizationManager___c__GetEventBonusIds_b__22_0__);
    sub_1B885B0(&AutoOrganizationManager___c_TypeInfo);
    byte_4A56E87 = 1;
  }
  eventUpVallInfo = 0LL;
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventMaster___);
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
          (const MethodInfo_33B3270 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
    return v3;
  }
  v8 = System_Linq_Enumerable__ToArray_int_(
         v7,
         (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
  setupInfo = (EventUpValSetupInfo_o *)sub_1B887FC(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_38910068(setupInfo, v8, 0, 0, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v46 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
  v45 = (ServantSkillMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  v9 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v10 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  Master_object = sub_1B88658(int___TypeInfo, 1LL);
  if ( !Master_object )
    goto LABEL_61;
  v5 = Master_object;
  if ( !*(_DWORD *)(Master_object + 24) )
    goto LABEL_62;
  *(_DWORD *)(Master_object + 32) = eventId;
  if ( !v10 )
LABEL_61:
    sub_1B8880C(Master_object, v5);
  FilterList = EventBonusFilterMaster__GetFilterList(
                 (EventBonusFilterMaster_o *)v10,
                 (System_Int32_array *)Master_object,
                 1,
                 0LL);
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)v46;
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
        _9__22_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventBonusFilterEntity__TypeInfo);
        System_Comparison_object____ctor(
          _9__22_0,
          v16,
          Method_AutoOrganizationManager___c__GetEventBonusIds_b__22_0__,
          0LL);
        static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
        static_fields->__9__22_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__22_0;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__22_0, (int32_t)_9__22_0, v18, v19);
      }
      System_Collections_Generic_List_object___Sort_55571192(
        v13,
        _9__22_0,
        (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
      v20 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventUpValInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v20,
        (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
      v21 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SkillInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v21,
        (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
      if ( v13->fields._size >= 1 )
      {
        v22 = 0;
        v47 = v13;
        do
        {
          Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                     v13,
                                     v22,
                                     (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
          if ( !Master_object )
            goto LABEL_61;
          v23 = *(_DWORD *)(Master_object + 20);
          v24 = Master_object;
          if ( v23 == 2 )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
            if ( !Master_object )
              goto LABEL_61;
            Master_object = (__int64)EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                                       (EventBonusFilterGroupMemberMaster_o *)Master_object,
                                       *(_DWORD *)(v24 + 24),
                                       0LL);
            if ( !Master_object )
              goto LABEL_61;
            v40 = *(_DWORD *)(Master_object + 24);
            v41 = Master_object;
            if ( v40 >= 1 )
            {
              v42 = 0;
              while ( v42 < v40 )
              {
                v43 = *(_QWORD *)(v41 + 8LL * (int)v42 + 32);
                if ( !v43 || !v3 )
                  goto LABEL_61;
                Master_object = System_Collections_Generic_HashSet_int___Add(
                                  v3,
                                  *(_DWORD *)(v43 + 20),
                                  (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
                v40 = *(_DWORD *)(v41 + 24);
                if ( (int)++v42 >= v40 )
                  goto LABEL_59;
              }
LABEL_62:
              sub_1B88814(Master_object, v5);
            }
          }
          else if ( v23 == 1 )
          {
            if ( !v12 )
              goto LABEL_61;
            Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                       v12,
                                       *(_DWORD *)(Master_object + 24),
                                       (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Master_object )
              goto LABEL_61;
            v25 = Master_object;
            v27 = *(_QWORD *)(Master_object + 16);
            v26 = *(_QWORD *)(Master_object + 24);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v50.fields.currentCryptoKey = v27;
            *(_QWORD *)&v50.fields.fakeValue = v26;
            v5 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v50, 0LL);
            Master_object = (__int64)v45;
            if ( !v45 )
              goto LABEL_61;
            Master_object = (__int64)ServantSkillMaster__getServantSkillList(v45, v5, 0LL);
            if ( !Master_object )
              goto LABEL_61;
            v28 = *(_DWORD *)(Master_object + 24);
            v29 = Master_object;
            if ( v28 >= 1 )
            {
              v30 = 0;
              v31 = 0;
              do
              {
                if ( v30 >= (unsigned int)v28 )
                  goto LABEL_62;
                v32 = *(_QWORD *)(v29 + 8LL * v30 + 32);
                if ( !v32 || !v9 )
                  goto LABEL_61;
                Master_object = (__int64)SkillLvMaster__GetEntity((SkillLvMaster_o *)v9, *(_DWORD *)(v32 + 28), 1, 0LL);
                if ( Master_object && !*(_DWORD *)(v32 + 44) )
                {
                  v33 = (SkillLvEntity_o *)Master_object;
                  v34 = *(_QWORD *)(v25 + 16);
                  v35 = *(_QWORD *)(v25 + 24);
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v51.fields.currentCryptoKey = v34;
                  *(_QWORD *)&v51.fields.fakeValue = v35;
                  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v51, 0LL);
                  v37 = (EventUpValInfo_o *)sub_1B887FC(EventUpValInfo_TypeInfo);
                  EventUpValInfo___ctor(v37, setupInfo, v36, 1, 1, 0, 0LL);
                  eventUpVallInfo = v37;
                  Master_object = SkillLvEntity__getEventUpVal_39954432(v33, &eventUpVallInfo, 1, 1, 0, 1, 0LL, 0LL);
                  v31 |= Master_object;
                }
                v28 = *(_DWORD *)(v29 + 24);
                ++v30;
              }
              while ( v30 < v28 );
              v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)v46;
              if ( (v31 & 1) != 0 )
              {
                v39 = *(_QWORD *)(v25 + 16);
                v38 = *(_QWORD *)(v25 + 24);
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v52.fields.currentCryptoKey = v39;
                *(_QWORD *)&v52.fields.fakeValue = v38;
                Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v52, 0LL);
                if ( !v3 )
                  goto LABEL_61;
                System_Collections_Generic_HashSet_int___Add(
                  v3,
                  Master_object,
                  (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
              }
            }
          }
LABEL_59:
          v13 = v47;
          ++v22;
        }
        while ( v22 < v47->fields._size );
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
    sub_1B8880C(0LL, method);
  max_length = rarityFlag->max_length;
  v4 = 0LL;
  v5 = 0LL;
  v6 = &rarityFlag->m_Items[4];
  do
  {
    if ( (__int64)v4 <= (int)max_length )
    {
      if ( v4 >= max_length )
        sub_1B88814(v5, method);
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
  __int64 Filter_40785740; // x0
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

  if ( (byte_4A56E82 & 1) == 0 )
  {
    sub_1B885B0(&bool___TypeInfo);
    byte_4A56E82 = 1;
  }
  Filter_40785740 = sub_1B88658(bool___TypeInfo, 7LL);
  if ( !sort )
LABEL_25:
    sub_1B8880C(Filter_40785740, v4);
  v5 = (System_Boolean_array *)Filter_40785740;
  v6 = 0LL;
  v7 = Filter_40785740 + 32;
  do
  {
    Filter_40785740 = ListViewSort__GetFilter_40785740(sort, v6, 0LL);
    if ( !v5 )
      goto LABEL_25;
    max_length = v5->max_length;
    if ( v6 >= max_length )
      goto LABEL_24;
    *(_BYTE *)(v7 + v6++) = Filter_40785740 & 1;
  }
  while ( v6 != 7 );
  if ( (unsigned int)max_length < 2 )
LABEL_24:
    sub_1B88814(Filter_40785740, v4);
  v9 = v5->m_Items[5];
  v10 = !v5->m_Items[4];
  v11 = !v9;
  v12 = v9;
  v13 = v11;
  v5->m_Items[4] |= v13;
  v5->m_Items[5] = v12 || v10;
  Filter_40785740 = sub_1B88658(bool___TypeInfo, 5LL);
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
    if ( !Filter_40785740 )
      goto LABEL_25;
    if ( v15 >= *(unsigned int *)(Filter_40785740 + 24) )
      goto LABEL_24;
    v19 = v5->m_Items[v15 + 6];
    *(_BYTE *)(Filter_40785740 + 32 + v15++) = v19;
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

  if ( (byte_4A56E7F & 1) == 0 )
  {
    sub_1B885B0(&AutoOrganizationManager_TypeInfo);
    byte_4A56E7F = 1;
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
    sub_1B8880C(autoOrganizationInfo, v1);
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

  if ( (byte_4A56E89 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A56E89 = 1;
  }
  if ( !restrictionInfo || !restrictionInfo->fields.isAllOutBattle )
    return 0;
  allOutBattleGroupNo = restrictionInfo->fields.allOutBattleGroupNo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v7);
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
  Il2CppObject *Master_object; // x21
  int64_t UserId; // x0
  __int64 v7; // x1
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A56E8A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A56E8A = 1;
  }
  entity = 0LL;
  if ( !restrictionInfo || !restrictionInfo->fields.isDataLostBattle )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
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
    sub_1B8880C(UserId, v7);
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
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  int64_t v7; // x19
  bool isRecover; // [xsp+4h] [xbp-2Ch] BYREF
  int64_t recoverAt; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A56E88 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventServantFatigueMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A56E88 = 1;
  }
  recoverAt = 0LL;
  isRecover = 0;
  if ( !restrictionInfo || !restrictionInfo->fields.isFatigure )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventServantFatigueMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v6);
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
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4A56E84 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__get_Current__);
    sub_1B885B0(&System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___76055344);
    sub_1B885B0(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
    sub_1B885B0(&Method_AutoOrganizationManager___c__SortClassRelation_b__19_0__);
    sub_1B885B0(&AutoOrganizationManager___c_TypeInfo);
    byte_4A56E84 = 1;
  }
  entity = 0LL;
  memset(&v25, 0, sizeof(v25));
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor_55562536(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)dataList,
    (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___76055344);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantClassMaster___);
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( enemyClassId )
  {
    if ( !Master_object )
      goto LABEL_32;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &entity,
                                      enemyClassId,
                                      (const MethodInfo_311D988 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_32;
      enemyClassId = HIDWORD(entity[3].monitor);
    }
  }
  if ( !v5 )
LABEL_32:
    sub_1B8880C(Master_object, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    v5,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v25,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__);
    if ( !v9 )
      break;
    current = v25.fields._current;
    if ( !v25.fields._current )
      sub_1B8880C(v9, v10);
    if ( !v8 )
      sub_1B8880C(v9, v10);
    klass = (int32_t)v25.fields._current[2].klass;
    v13 = DataMasterBase_object__object__int___TryGetEntity(
            v8,
            &entity,
            klass,
            (const MethodInfo_311D988 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( v13 )
    {
      if ( !entity )
        sub_1B8880C(v13, v14);
      klass = HIDWORD(entity[3].monitor);
    }
    if ( enemyClassId )
      Rate = ClassRelationMaster__getRate(klass, enemyClassId, 0LL);
    else
      Rate = 1.0;
    *(float *)&current[3].klass = *(float *)&current[4].monitor * (float)(Rate * (float)SHIDWORD(current[2].klass));
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__);
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
    _9__19_0 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    System_Func_object__float____ctor(
      _9__19_0,
      v18,
      Method_AutoOrganizationManager___c__SortClassRelation_b__19_0__,
      0LL);
    static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = (struct System_Func_AutoOrganizationManager_ServantData__float__o *)_9__19_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__19_0, (int32_t)_9__19_0, v20, v21);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__float_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v5,
                                                               (System_Func_TSource__TKey__o *)_9__19_0,
                                                               (const MethodInfo_2EAA434 *)Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___);
  return (AutoOrganizationManager_ServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                                        v22,
                                                        (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___);
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
  int32_t v22; // w2
  int32_t v23; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v24; // x0
  AutoOrganizationManager___c_c *v25; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v26; // x19
  System_Func_object__int__o *_9__20_1; // x20
  Il2CppObject *v28; // x21
  struct AutoOrganizationManager___c_StaticFields *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v32; // x0
  AutoOrganizationManager___c_c *v33; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v34; // x19
  System_Func_T__TResult__o *_9__20_2; // x20
  Il2CppObject *v36; // x21
  struct AutoOrganizationManager___c_StaticFields *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v40; // x0
  AutoOrganizationManager___c_c *v41; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v42; // x19
  System_Func_object__int__o *_9__20_3; // x20
  Il2CppObject *v44; // x21
  struct AutoOrganizationManager___c_StaticFields *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v48; // x0
  AutoOrganizationManager___c_c *v49; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v50; // x19
  System_Func_T__TResult__o *_9__20_4; // x20
  Il2CppObject *v52; // x21
  struct AutoOrganizationManager___c_StaticFields *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+20h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4A56E85 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__long___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__float___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__get_Current__);
    sub_1B885B0(&System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    sub_1B885B0(&System_Func_AutoOrganizationManager_ServantData__long__TypeInfo);
    sub_1B885B0(&System_Func_AutoOrganizationManager_ServantData__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___76055344);
    sub_1B885B0(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
    sub_1B885B0(&Method_AutoOrganizationManager___c__SortServant_b__20_0__);
    sub_1B885B0(&Method_AutoOrganizationManager___c__SortServant_b__20_1__);
    sub_1B885B0(&Method_AutoOrganizationManager___c__SortServant_b__20_2__);
    sub_1B885B0(&Method_AutoOrganizationManager___c__SortServant_b__20_3__);
    sub_1B885B0(&Method_AutoOrganizationManager___c__SortServant_b__20_4__);
    sub_1B885B0(&AutoOrganizationManager___c_TypeInfo);
    byte_4A56E85 = 1;
  }
  entity = 0LL;
  memset(&v59, 0, sizeof(v59));
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor_55562536(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)dataList,
    (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___76055344);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantClassMaster___);
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( enemyClassId )
  {
    if ( !Master_object )
      goto LABEL_56;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &entity,
                                      enemyClassId,
                                      (const MethodInfo_311D988 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_56;
      enemyClassId = HIDWORD(entity[3].monitor);
    }
  }
  if ( !v5 )
LABEL_56:
    sub_1B8880C(Master_object, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v58,
    v5,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__);
  v59 = v58;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v59,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__);
    if ( !v9 )
      break;
    current = v59.fields._current;
    if ( !v59.fields._current )
      sub_1B8880C(v9, v10);
    if ( !v8 )
      sub_1B8880C(v9, v10);
    klass = (int32_t)v59.fields._current[2].klass;
    v13 = DataMasterBase_object__object__int___TryGetEntity(
            v8,
            &entity,
            klass,
            (const MethodInfo_311D988 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( v13 )
    {
      if ( !entity )
        sub_1B8880C(v13, v14);
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
    &v59,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__);
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
    _9__20_0 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    System_Func_object__float____ctor(_9__20_0, v20, Method_AutoOrganizationManager___c__SortServant_b__20_0__, 0LL);
    static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    static_fields->__9__20_0 = (struct System_Func_AutoOrganizationManager_ServantData__float__o *)_9__20_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__20_0, (int32_t)_9__20_0, v22, v23);
  }
  v24 = System_Linq_Enumerable__OrderByDescending_object__float_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v5,
          (System_Func_TSource__TKey__o *)_9__20_0,
          (const MethodInfo_2EAA434 *)Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___);
  v25 = AutoOrganizationManager___c_TypeInfo;
  v26 = v24;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v25 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__20_1 = (System_Func_object__int__o *)v25->static_fields->__9__20_1;
  if ( !_9__20_1 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = AutoOrganizationManager___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v25->static_fields->__9;
    _9__20_1 = (System_Func_object__int__o *)sub_1B887FC(System_Func_AutoOrganizationManager_ServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__20_1, v28, Method_AutoOrganizationManager___c__SortServant_b__20_1__, 0LL);
    v29 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v29->__9__20_1 = (struct System_Func_AutoOrganizationManager_ServantData__int__o *)_9__20_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v29->__9__20_1, (int32_t)_9__20_1, v30, v31);
  }
  v32 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v26,
          (System_Func_TSource__TKey__o *)_9__20_1,
          (const MethodInfo_2EB7F74 *)Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__int___);
  v33 = AutoOrganizationManager___c_TypeInfo;
  v34 = v32;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v33 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__20_2 = (System_Func_T__TResult__o *)v33->static_fields->__9__20_2;
  if ( !_9__20_2 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      v33 = AutoOrganizationManager___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v33->static_fields->__9;
    _9__20_2 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    System_Func_object__float____ctor(_9__20_2, v36, Method_AutoOrganizationManager___c__SortServant_b__20_2__, 0LL);
    v37 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v37->__9__20_2 = (struct System_Func_AutoOrganizationManager_ServantData__float__o *)_9__20_2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v37->__9__20_2, (int32_t)_9__20_2, v38, v39);
  }
  v40 = System_Linq_Enumerable__ThenByDescending_object__float_(
          v34,
          (System_Func_TSource__TKey__o *)_9__20_2,
          (const MethodInfo_2EB810C *)Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__float___);
  v41 = AutoOrganizationManager___c_TypeInfo;
  v42 = v40;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v41 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__20_3 = (System_Func_object__int__o *)v41->static_fields->__9__20_3;
  if ( !_9__20_3 )
  {
    if ( !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v41 = AutoOrganizationManager___c_TypeInfo;
    }
    v44 = (Il2CppObject *)v41->static_fields->__9;
    _9__20_3 = (System_Func_object__int__o *)sub_1B887FC(System_Func_AutoOrganizationManager_ServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__20_3, v44, Method_AutoOrganizationManager___c__SortServant_b__20_3__, 0LL);
    v45 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v45->__9__20_3 = (struct System_Func_AutoOrganizationManager_ServantData__int__o *)_9__20_3;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v45->__9__20_3, (int32_t)_9__20_3, v46, v47);
  }
  v48 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v42,
          (System_Func_TSource__TKey__o *)_9__20_3,
          (const MethodInfo_2EB7F74 *)Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__int___);
  v49 = AutoOrganizationManager___c_TypeInfo;
  v50 = v48;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v49 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__20_4 = (System_Func_T__TResult__o *)v49->static_fields->__9__20_4;
  if ( !_9__20_4 )
  {
    if ( !v49->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v49);
      v49 = AutoOrganizationManager___c_TypeInfo;
    }
    v52 = (Il2CppObject *)v49->static_fields->__9;
    _9__20_4 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_AutoOrganizationManager_ServantData__long__TypeInfo);
    System_Func_object__long____ctor(_9__20_4, v52, Method_AutoOrganizationManager___c__SortServant_b__20_4__, 0LL);
    v53 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v53->__9__20_4 = (struct System_Func_AutoOrganizationManager_ServantData__long__o *)_9__20_4;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v53->__9__20_4, (int32_t)_9__20_4, v54, v55);
  }
  v56 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenByDescending_object__long_(
                                                               v50,
                                                               (System_Func_TSource__TKey__o *)_9__20_4,
                                                               (const MethodInfo_2EB8040 *)Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__long___);
  return (AutoOrganizationManager_ServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                                        v56,
                                                        (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___);
}


ListViewSort_o *__fastcall AutoOrganizationManager__get_SortInfo(const MethodInfo *method)
{
  AutoOrganizationManager_c *v1; // x0

  if ( (byte_4A56E7D & 1) == 0 )
  {
    sub_1B885B0(&AutoOrganizationManager_TypeInfo);
    byte_4A56E7D = 1;
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

  if ( (byte_4A56E7E & 1) == 0 )
  {
    sub_1B885B0(&AutoOrganizationManager_TypeInfo);
    byte_4A56E7E = 1;
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
  this->fields.questAutoOrganizationAdjustRate = 0.0;
  this->fields.userSvtId = 0LL;
  *(_QWORD *)&this->fields.classId = 0LL;
}


void __fastcall AutoOrganizationManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A56E8E & 1) == 0 )
  {
    sub_1B885B0(&AutoOrganizationManager___c_TypeInfo);
    byte_4A56E8E = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(AutoOrganizationManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  AutoOrganizationManager___c_TypeInfo->static_fields->__9 = (struct AutoOrganizationManager___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)AutoOrganizationManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, a);
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
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}


float __fastcall AutoOrganizationManager___c___SortClassRelation_b__19_0(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1B8880C(this, 0LL);
  return d->fields.relationNum;
}


float __fastcall AutoOrganizationManager___c___SortServant_b__20_0(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1B8880C(this, 0LL);
  return d->fields.relationAtk;
}


int32_t __fastcall AutoOrganizationManager___c___SortServant_b__20_1(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1B8880C(this, 0LL);
  return d->fields.treasureDeviceLv;
}


float __fastcall AutoOrganizationManager___c___SortServant_b__20_2(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1B8880C(this, 0LL);
  return d->fields.relationDef;
}


int32_t __fastcall AutoOrganizationManager___c___SortServant_b__20_3(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1B8880C(this, 0LL);
  return d->fields.svtId;
}


int64_t __fastcall AutoOrganizationManager___c___SortServant_b__20_4(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
  return QuestAutoOrganizationAdjustEntity__GetAdjustRate_39457036(entity, this->fields.individualities, 0LL);
}