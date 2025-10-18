void AutoOrganizationManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  struct AutoOrganizationManager_StaticFields *static_fields; // x0
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  ListViewSort_o *v5; // x19
  struct AutoOrganizationManager_StaticFields *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C3E7B2 & 1) == 0 )
  {
    sub_1C37058(&AutoOrganizationManager_TypeInfo);
    sub_1C37058(&ListViewSort_TypeInfo);
    sub_1C37058(&StringLiteral_2494/*"AutoOrganization"*/);
    sub_1C37058(&StringLiteral_2500/*"AutoOrganizationWaveBattle"*/);
    byte_4C3E7B2 = 1;
  }
  *(_QWORD *)AutoOrganizationManager_TypeInfo->static_fields = 0x296B0000296ALL;
  v1 = (ListViewSort_o *)sub_1C372A4(ListViewSort_TypeInfo);
  ListViewSort___ctor_43838564(v1, (System_String_o *)StringLiteral_2494/*"AutoOrganization"*/, 3, 0, 0);
  static_fields = AutoOrganizationManager_TypeInfo->static_fields;
  static_fields->autoOrganizationInfo = v1;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->autoOrganizationInfo, (int32_t)v1, v3, v4);
  v5 = (ListViewSort_o *)sub_1C372A4(ListViewSort_TypeInfo);
  ListViewSort___ctor_43838564(v5, (System_String_o *)StringLiteral_2500/*"AutoOrganizationWaveBattle"*/, 3, 0, 0);
  v6 = AutoOrganizationManager_TypeInfo->static_fields;
  v6->waveBattleAutoOrganizationInfo = v5;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6->waveBattleAutoOrganizationInfo, (int32_t)v5, v7, v8);
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
  void *Master_object; // x0
  UserServantEntity_array *ServantEquipList; // x21
  System_Collections_Generic_List_object__o *v7; // x20
  System_Collections_Generic_HashSet_int__o *v8; // x24
  System_Collections_Generic_HashSet_int__o *v9; // x23
  const MethodInfo *v10; // x1
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
  il2cpp_array_size_t max_length; // x8
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
  const MethodInfo *v51; // x3
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
  const MethodInfo *v73; // x3
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

  if ( (byte_4C3E7AB & 1) == 0 )
  {
    sub_1C37058(&AutoOrganizationManager_TypeInfo);
    sub_1C37058(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
    sub_1C37058(&System_Comparison_AutoOrganizationManager_ServantData__TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1C37058(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
    sub_1C37058(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&ServantBonusFilterSelectMenu_TypeInfo);
    sub_1C37058(&AutoOrganizationManager_ServantData_TypeInfo);
    sub_1C37058(&Method_AutoOrganizationManager___c__AutoOrganizationEquip_b__21_0__);
    sub_1C37058(&AutoOrganizationManager___c_TypeInfo);
    byte_4C3E7AB = 1;
  }
  entity = 0;
  v79 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_98;
  ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)Master_object, 0);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
  v76 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantMaster___);
  v8 = (System_Collections_Generic_HashSet_int__o *)sub_1C372A4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v8,
    (const MethodInfo_3653A88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  v9 = (System_Collections_Generic_HashSet_int__o *)sub_1C372A4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v9,
    (const MethodInfo_3653A88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( eventId )
  {
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    Master_object = AutoOrganizationManager__GetEventBonusIds(eventId, v10);
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
      v15 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
      if ( !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
      Master_object = (void *)ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0);
      v79 = 0;
      if ( (int)Master_object >= 1 )
      {
        v16 = (int)Master_object;
        while ( 1 )
        {
          v17 = System_Int32__ToString((int32_t)&v79, 0);
          v18 = System_String__Concat_63561656(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v17, 0);
          if ( UnityEngine_PlayerPrefs__HasKey(v18, 0) )
          {
            v19 = System_Int32__ToString((int32_t)&v79, 0);
            v20 = System_String__Concat_63561656(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v19, 0);
            Master_object = (void *)UnityEngine_PlayerPrefs__GetInt_71224996(v20, 0);
            if ( !v9 )
              goto LABEL_98;
            System_Collections_Generic_HashSet_int___Add(
              v9,
              (int32_t)Master_object,
              (const MethodInfo_3654C8C *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
          v21 = System_Int32__ToString((int32_t)&v79, 0);
          v22 = System_String__Concat_63561656(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v21, 0);
          Master_object = (void *)UnityEngine_PlayerPrefs__HasKey(v22, 0);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            v23 = System_Int32__ToString((int32_t)&v79, 0);
            v24 = System_String__Concat_63561656(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v23, 0);
            Master_object = (void *)UnityEngine_PlayerPrefs__GetInt_71224996(v24, 0);
            if ( !v15 )
              goto LABEL_98;
            Master_object = EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                              (EventBonusFilterGroupMemberMaster_o *)v15,
                              (int32_t)Master_object,
                              0);
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
            sub_1C372BC(Master_object);
          v28 = *((_QWORD *)v26 + (int)v27 + 4);
          if ( !v28 || !v9 )
            break;
          Master_object = (void *)System_Collections_Generic_HashSet_int___Add(
                                    v9,
                                    *(_DWORD *)(v28 + 20),
                                    (const MethodInfo_3654C8C *)Method_System_Collections_Generic_HashSet_int__Add__);
          v25 = *((_DWORD *)v26 + 6);
          if ( (int)++v27 >= v25 )
            goto LABEL_31;
        }
LABEL_98:
        sub_1C372B4(Master_object);
      }
    }
  }
  else
  {
    v75 = v8;
  }
LABEL_34:
  if ( !ServantEquipList )
    goto LABEL_98;
  max_length = ServantEquipList->max_length;
  if ( (int)max_length >= 1 )
  {
    for ( i = 0; (__int64)i < (int)max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
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
        v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v81, 0);
        Master_object = (void *)System_Collections_Generic_List_int___Contains(
                                  organizedEquipIdList,
                                  v34,
                                  (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
          goto LABEL_89;
      }
      if ( !v9 )
        goto LABEL_98;
      if ( v9->fields._count >= 1 )
      {
        v36 = *(_QWORD *)&v31->fields.svtId.fields.currentCryptoKey;
        v35 = *(_QWORD *)&v31->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v82.fields.currentCryptoKey = v36;
        *(_QWORD *)&v82.fields.fakeValue = v35;
        v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v82, 0);
        Master_object = (void *)System_Collections_Generic_HashSet_int___Contains(
                                  v9,
                                  v37,
                                  (const MethodInfo_365417C *)Method_System_Collections_Generic_HashSet_int__Contains__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
          goto LABEL_89;
      }
      Master_object = (void *)UserServantEntity__IsFriendShipSvtEquip(v31, 0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
        goto LABEL_89;
      v38 = sub_1C372A4(AutoOrganizationManager_ServantData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v38, 0);
      *(_DWORD *)(v38 + 16) = 0;
      *(_QWORD *)(v38 + 32) = 0;
      *(_QWORD *)(v38 + 24) = 0;
      *(_QWORD *)(v38 + 44) = 0;
      *(_DWORD *)(v38 + 64) = 0;
      *(_BYTE *)(v38 + 68) = 0;
      *(_QWORD *)(v38 + 72) = 0;
      v39 = *(_OWORD *)&v31->fields.id.fields.fakeValue;
      *(_OWORD *)&v78.fields.currentCryptoKey = *(_OWORD *)&v31->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v78.fields.fakeValue = v39;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v77 = v78;
      *(_QWORD *)(v38 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v77, 0);
      v41 = *(_QWORD *)&v31->fields.svtId.fields.currentCryptoKey;
      v40 = *(_QWORD *)&v31->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v83.fields.currentCryptoKey = v41;
      *(_QWORD *)&v83.fields.fakeValue = v40;
      v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v83, 0);
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
                                (const MethodInfo_33A10EC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
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
             (const MethodInfo_365417C *)Method_System_Collections_Generic_HashSet_int__Contains__) )
      {
        v46 = *(float *)(v38 + 48) + 50000.0;
        *(float *)(v38 + 48) = v46;
        v47 = v46 + (float)((float)UserServantEntity__getRarity(v31, 0) * 100000.0);
        *(float *)(v38 + 48) = v47;
        v49 = *(_QWORD *)&v31->fields.limitCount.fields.currentCryptoKey;
        v48 = *(_QWORD *)&v31->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v84.fields.currentCryptoKey = v49;
        *(_QWORD *)&v84.fields.fakeValue = v48;
        Master_object = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v84, 0);
        v52 = v47 + (float)((float)(int)Master_object * 10000.0);
        goto LABEL_74;
      }
      Master_object = UserServantEntity__GetEquipCategoryIdList(v31, 0, 0);
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
                                  (const MethodInfo_3104C08 *)Method_System_Linq_Enumerable_Contains_int___);
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
                                    (const MethodInfo_3104C08 *)Method_System_Linq_Enumerable_Contains_int___);
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
      if ( !v7 )
        goto LABEL_98;
      items = v7->fields._items;
      v58 = Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__;
      ++v7->fields._version;
      if ( !items )
        goto LABEL_98;
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v38,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
        if ( !organizedEquipIdList )
          goto LABEL_89;
      }
      else
      {
        v60 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v60[4] = (Il2CppClass *)v38;
        sub_1C36FFC((CGThumbnailListItem_o *)(v60 + 4), v38, v50, v51);
        if ( !organizedEquipIdList )
          goto LABEL_89;
      }
      v62 = *(_QWORD *)&v31->fields.svtId.fields.currentCryptoKey;
      v61 = *(_QWORD *)&v31->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v85.fields.currentCryptoKey = v62;
      *(_QWORD *)&v85.fields.fakeValue = v61;
      v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v85, 0);
      Master_object = (void *)System_Collections_Generic_List_int___Contains(
                                organizedEquipIdList,
                                v63,
                                (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)Master_object & 1) == 0 )
      {
        v65 = *(_QWORD *)&v31->fields.svtId.fields.currentCryptoKey;
        v64 = *(_QWORD *)&v31->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v86.fields.currentCryptoKey = v65;
        *(_QWORD *)&v86.fields.fakeValue = v64;
        Master_object = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v86, 0);
        v66 = organizedEquipIdList->fields._items;
        v67 = Method_System_Collections_Generic_List_int__Add__;
        ++organizedEquipIdList->fields._version;
        if ( !v66 )
          goto LABEL_98;
        v68 = organizedEquipIdList->fields._size;
        if ( (unsigned int)v68 >= LODWORD(v66->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            organizedEquipIdList,
            (int32_t)Master_object,
            *(const MethodInfo_3786000 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
        }
        else
        {
          organizedEquipIdList->fields._size = v68 + 1;
          v66->m_Items[v68] = (int)Master_object;
        }
      }
LABEL_89:
      LODWORD(max_length) = ServantEquipList->max_length;
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
    v69 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_AutoOrganizationManager_ServantData__TypeInfo);
    System_Comparison_object____ctor(v69, v70, Method_AutoOrganizationManager___c__AutoOrganizationEquip_b__21_0__, 0);
    v71 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v71->__9__21_0 = (struct System_Comparison_AutoOrganizationManager_ServantData__o *)v69;
    sub_1C36FFC((CGThumbnailListItem_o *)&v71->__9__21_0, (int32_t)v69, v72, v73);
  }
  if ( !v7 )
    goto LABEL_98;
  System_Collections_Generic_List_object___Sort_58346216(
    v7,
    v69,
    (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Sort__);
  return (AutoOrganizationManager_ServantData_array *)System_Collections_Generic_List_object___ToArray(
                                                        v7,
                                                        (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
}


AutoOrganizationManager_ServantData_array *AutoOrganizationManager__AutoOrganizationServant(
        int32_t rarityBit,
        QuestRestrictionInfo_o *restrictionInfo,
        System_Int32_array *organizedServantIds,
        QuestAutoOrganizationAdjustEntity_array *questAutoOrganizationAdjustEntities,
        const MethodInfo *method)
{
  int64_t Master_object; // x0
  UserServantEntity_array *OrganizationList; // x25
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v11; // x24
  UserServantEntity_o *v12; // x29
  int32_t v13; // w27
  int64_t v14; // x28
  QuestRestrictionInfo_o *v15; // x23
  System_Int32_array *v16; // x21
  __int64 v17; // x19
  __int64 v18; // x26
  const MethodInfo *v19; // x2
  int32_t klass; // w19
  const MethodInfo *v21; // x2
  int32_t v22; // w19
  const MethodInfo *v23; // x2
  int32_t v24; // w19
  bool UniqueSvtRestriction; // w19
  System_Predicate_object__o *v26; // x19
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  Il2CppObject *v29; // x0
  __int128 v30; // q0
  Il2CppObject *v31; // x27
  const MethodInfo *v32; // x2
  int64_t v33; // x19
  float AdjustTotalRate; // s8
  __int128 v35; // q0
  int v36; // w8
  __int64 v37; // x27
  __int128 v38; // q0
  const MethodInfo *v39; // x2
  int64_t v40; // x19
  float v41; // s0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  CGThumbnailListItem_o *p_monitor; // [xsp+8h] [xbp-118h]
  DataMasterBase_TMaster__TEntity__PKType__o *v50; // [xsp+10h] [xbp-110h]
  System_Collections_Generic_List_object__o *v52; // [xsp+20h] [xbp-100h]
  Il2CppObject *object; // [xsp+28h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+30h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+50h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+70h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+90h] [xbp-90h]
  Il2CppObject *entity; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  if ( (byte_4C3E7A8 & 1) == 0 )
  {
    sub_1C37058(&AutoOrganizationManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C37058(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Find__);
    sub_1C37058(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
    sub_1C37058(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&System_Predicate_AutoOrganizationManager_ServantData__TypeInfo);
    sub_1C37058(&AutoOrganizationManager_ServantData_TypeInfo);
    sub_1C37058(&Method_AutoOrganizationManager___c__DisplayClass18_0__AutoOrganizationServant_b__0__);
    sub_1C37058(&AutoOrganizationManager___c__DisplayClass18_0_TypeInfo);
    byte_4C3E7A8 = 1;
  }
  entity = 0;
  object = (Il2CppObject *)sub_1C372A4(AutoOrganizationManager___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor(object, 0);
  v52 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v52,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_67;
  OrganizationList = UserServantMaster__getOrganizationList((UserServantMaster_o *)Master_object, 0);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantMaster___);
  v50 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !OrganizationList )
    goto LABEL_67;
  max_length = OrganizationList->max_length;
  if ( (int)max_length >= 1 )
  {
    v11 = 0;
    p_monitor = (CGThumbnailListItem_o *)&object[1].monitor;
    do
    {
      if ( v11 >= (unsigned int)max_length )
        sub_1C372BC(Master_object);
      v12 = OrganizationList->m_Items[v11];
      if ( !v12 )
        goto LABEL_36;
      Master_object = (int64_t)UserServantEntity__GetOverwriteStatus(OrganizationList->m_Items[v11], restrictionInfo, 0);
      if ( !Master_object )
        goto LABEL_67;
      v13 = *(_DWORD *)(Master_object + 24);
      v14 = Master_object;
      Master_object = (rarityBit != 31) & (unsigned __int8)(v13 == 0);
      if ( rarityBit != 31 && v13 == 0
        || (rarityBit & 1) == 0 && v13 == 1
        || (rarityBit & 2) == 0 && v13 == 2
        || (rarityBit & 4) == 0 && v13 == 3
        || (rarityBit & 8) == 0 && v13 == 4
        || (rarityBit & 0x10) == 0 && v13 == 5 )
      {
        goto LABEL_36;
      }
      v15 = restrictionInfo;
      v16 = organizedServantIds;
      v18 = *(_QWORD *)&v12->fields.svtId.fields.currentCryptoKey;
      v17 = *(_QWORD *)&v12->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v59.fields.currentCryptoKey = v18;
      *(_QWORD *)&v59.fields.fakeValue = v17;
      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v59, 0);
      if ( !object )
        goto LABEL_67;
      klass = Master_object;
      organizedServantIds = v16;
      LODWORD(object[1].klass) = Master_object;
      if ( v16 )
      {
        Master_object = System_Linq_Enumerable__Contains_int_(
                          (System_Collections_Generic_IEnumerable_TSource__o *)v16,
                          Master_object,
                          (const MethodInfo_3104C08 *)Method_System_Linq_Enumerable_Contains_int___);
        restrictionInfo = v15;
        if ( (Master_object & 1) != 0 )
          goto LABEL_36;
        klass = (int32_t)object[1].klass;
      }
      else
      {
        restrictionInfo = v15;
      }
      if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      Master_object = AutoOrganizationManager__IsFatigue(restrictionInfo, klass, v19);
      if ( (Master_object & 1) == 0 )
      {
        v22 = (int32_t)object[1].klass;
        if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
        Master_object = AutoOrganizationManager__IsAllOutBattleAlreadyUsed(restrictionInfo, v22, v21);
        if ( (Master_object & 1) == 0 )
        {
          v24 = (int32_t)object[1].klass;
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          Master_object = AutoOrganizationManager__IsDataLost(restrictionInfo, v24, v23);
          if ( (Master_object & 1) == 0 )
          {
            Master_object = UserServantEntity__IsLeave(v12, 0);
            if ( (Master_object & 1) == 0 )
            {
              Master_object = UserServantEntity__getQuestRestriction(v12, restrictionInfo, v13, 1, 0);
              if ( (Master_object & 1) == 0 )
              {
                UniqueSvtRestriction = UserServantEntity__getUniqueSvtRestriction(v12, restrictionInfo, 0);
                Master_object = UserServantEntity__IsUniqueIndividualityRestriction(v12, restrictionInfo, 0);
                if ( !UniqueSvtRestriction && (Master_object & 1) == 0 )
                {
                  v26 = (System_Predicate_object__o *)p_monitor->klass;
                  if ( !p_monitor->klass )
                  {
                    v26 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_AutoOrganizationManager_ServantData__TypeInfo);
                    System_Predicate_object____ctor(
                      v26,
                      object,
                      Method_AutoOrganizationManager___c__DisplayClass18_0__AutoOrganizationServant_b__0__,
                      0);
                    object[1].monitor = v26;
                    sub_1C36FFC(p_monitor, (int32_t)v26, v27, v28);
                  }
                  Master_object = (int64_t)v52;
                  if ( !v52 )
                    goto LABEL_67;
                  v29 = System_Collections_Generic_List_object___Find(
                          v52,
                          (System_Predicate_T__o *)v26,
                          (const MethodInfo_37A368C *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Find__);
                  if ( v29 )
                  {
                    v30 = *(_OWORD *)&v12->fields.id.fields.fakeValue;
                    v31 = v29;
                    *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)&v12->fields.id.fields.currentCryptoKey;
                    *(_OWORD *)&v57.fields.fakeValue = v30;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    v56 = v57;
                    v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v56, 0);
                    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
                    AdjustTotalRate = AutoOrganizationManager__GetAdjustTotalRate(
                                        (System_Collections_Generic_IEnumerable_QuestAutoOrganizationAdjustEntity__o *)questAutoOrganizationAdjustEntities,
                                        v33,
                                        v32);
                    if ( (float)(AdjustTotalRate * (float)*(int *)(v14 + 20)) >= (float)(*(float *)&v31[4].monitor
                                                                                       * (float)*(int *)(v14 + 20)) )
                    {
                      v35 = *(_OWORD *)&v12->fields.id.fields.fakeValue;
                      *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)&v12->fields.id.fields.currentCryptoKey;
                      *(_OWORD *)&v57.fields.fakeValue = v35;
                      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                      v55 = v57;
                      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v55, 0);
                      v31[1].monitor = (void *)Master_object;
                      HIDWORD(v31[2].klass) = *(_DWORD *)(v14 + 20);
                      v36 = *(_DWORD *)(v14 + 28);
                      *(float *)&v31[4].monitor = AdjustTotalRate;
                      LODWORD(v31[4].klass) = v36;
                    }
                  }
                  else
                  {
                    v37 = sub_1C372A4(AutoOrganizationManager_ServantData_TypeInfo);
                    System_Object___ctor((Il2CppObject *)v37, 0);
                    *(_DWORD *)(v37 + 16) = 0;
                    *(_QWORD *)(v37 + 44) = 0;
                    *(_DWORD *)(v37 + 64) = 0;
                    *(_BYTE *)(v37 + 68) = 0;
                    *(_QWORD *)(v37 + 72) = 0;
                    *(_QWORD *)(v37 + 24) = 0;
                    *(_QWORD *)(v37 + 32) = 0;
                    v38 = *(_OWORD *)&v12->fields.id.fields.fakeValue;
                    *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)&v12->fields.id.fields.currentCryptoKey;
                    *(_OWORD *)&v57.fields.fakeValue = v38;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    v54 = v57;
                    *(_QWORD *)(v37 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(
                                              &v54,
                                              0);
                    *(_DWORD *)(v37 + 16) = object[1].klass;
                    *(_DWORD *)(v37 + 32) = UserServantEntity__getSvtClassId(v12, 0, 0, 0);
                    *(_DWORD *)(v37 + 36) = *(_DWORD *)(v14 + 20);
                    v40 = *(_QWORD *)(v37 + 24);
                    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
                    v41 = AutoOrganizationManager__GetAdjustTotalRate(
                            (System_Collections_Generic_IEnumerable_QuestAutoOrganizationAdjustEntity__o *)questAutoOrganizationAdjustEntities,
                            v40,
                            v39);
                    Master_object = (int64_t)v50;
                    *(float *)(v37 + 72) = v41;
                    if ( !v50 )
                      goto LABEL_67;
                    Master_object = DataMasterBase_object__object__int___TryGetEntity(
                                      v50,
                                      &entity,
                                      *(_DWORD *)(v37 + 16),
                                      (const MethodInfo_33A10EC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
                    if ( (Master_object & 1) != 0 )
                    {
                      *(_DWORD *)(v37 + 64) = *(_DWORD *)(v14 + 28);
                      Master_object = (int64_t)entity;
                      if ( !entity )
                        goto LABEL_67;
                      Master_object = ServantEntity__GetNotSamePartyKey((ServantEntity_o *)entity, 0);
                      *(_DWORD *)(v37 + 76) = Master_object;
                    }
                    items = v52->fields._items;
                    v45 = Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__;
                    ++v52->fields._version;
                    if ( !items )
                      goto LABEL_67;
                    size = v52->fields._size;
                    if ( (unsigned int)size >= LODWORD(items->max_length) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v52,
                        (Il2CppObject *)v37,
                        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v47 = &items->obj.klass + size;
                      v52->fields._size = size + 1;
                      v47[4] = (Il2CppClass *)v37;
                      sub_1C36FFC((CGThumbnailListItem_o *)(v47 + 4), v37, v42, v43);
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_36:
      LODWORD(max_length) = OrganizationList->max_length;
    }
    while ( (__int64)++v11 < (int)max_length );
  }
  Master_object = (int64_t)v52;
  if ( !v52 )
LABEL_67:
    sub_1C372B4(Master_object);
  return (AutoOrganizationManager_ServantData_array *)System_Collections_Generic_List_object___ToArray(
                                                        v52,
                                                        (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
}


void AutoOrganizationManager__DeleteContinueData(const MethodInfo *method)
{
  AutoOrganizationManager_c *v1; // x0
  ListViewSort_o *autoOrganizationInfo; // x0

  if ( (byte_4C3E7A5 & 1) == 0 )
  {
    sub_1C37058(&AutoOrganizationManager_TypeInfo);
    byte_4C3E7A5 = 1;
  }
  v1 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v1 = AutoOrganizationManager_TypeInfo;
  }
  autoOrganizationInfo = v1->static_fields->autoOrganizationInfo;
  if ( !autoOrganizationInfo
    || (ListViewSort__DeleteContinueData(autoOrganizationInfo, 0),
        (autoOrganizationInfo = AutoOrganizationManager_TypeInfo->static_fields->waveBattleAutoOrganizationInfo) == 0) )
  {
    sub_1C372B4(autoOrganizationInfo);
  }
  ListViewSort__DeleteContinueData(autoOrganizationInfo, 0);
}


float AutoOrganizationManager__GetAdjustTotalRate(
        System_Collections_Generic_IEnumerable_QuestAutoOrganizationAdjustEntity__o *questAutoOrganizationAdjustEntities,
        int64_t userSvtId,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  System_Func_T__TResult__o *v7; // x20
  System_Collections_Generic_IEnumerable_TResult__o *v8; // x0
  AutoOrganizationManager___c_c *v9; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x19
  System_Func_float__float__float__o *_9__26_1; // x20
  Il2CppObject *v12; // x21
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C3E7B0 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Aggregate_float__float___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___);
    sub_1C37058(&System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo);
    sub_1C37058(&System_Func_float__float__float__TypeInfo);
    sub_1C37058(&Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__26_1__);
    sub_1C37058(&Method_AutoOrganizationManager___c__DisplayClass26_0__GetAdjustTotalRate_b__0__);
    sub_1C37058(&AutoOrganizationManager___c__DisplayClass26_0_TypeInfo);
    sub_1C37058(&AutoOrganizationManager___c_TypeInfo);
    byte_4C3E7B0 = 1;
  }
  v5 = (Il2CppObject *)sub_1C372A4(AutoOrganizationManager___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_1C372B4(v6);
  v5[1].klass = (Il2CppClass *)userSvtId;
  v7 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo);
  System_Func_object__float____ctor(
    v7,
    v5,
    Method_AutoOrganizationManager___c__DisplayClass26_0__GetAdjustTotalRate_b__0__,
    0);
  v8 = System_Linq_Enumerable__Select_object__float_(
         (System_Collections_Generic_IEnumerable_TSource__o *)questAutoOrganizationAdjustEntities,
         (System_Func_TSource__TResult__o *)v7,
         (const MethodInfo_311EC70 *)Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___);
  v9 = AutoOrganizationManager___c_TypeInfo;
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)v8;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v9 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__26_1 = v9->static_fields->__9__26_1;
  if ( !_9__26_1 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = AutoOrganizationManager___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__26_1 = (System_Func_float__float__float__o *)sub_1C372A4(System_Func_float__float__float__TypeInfo);
    System_Func_float__float__float____ctor(
      _9__26_1,
      v12,
      Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__26_1__,
      0);
    static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    static_fields->__9__26_1 = _9__26_1;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__26_1, (int32_t)_9__26_1, v14, v15);
  }
  return System_Linq_Enumerable__Aggregate_float__float_(
           v10,
           1.0,
           (System_Func_TAccumulate__TSource__TAccumulate__o *)_9__26_1,
           (const MethodInfo_30F08E4 *)Method_System_Linq_Enumerable_Aggregate_float__float___);
}


float AutoOrganizationManager__GetAdjustTotalRate_33974964(
        System_Collections_Generic_IEnumerable_QuestAutoOrganizationAdjustEntity__o *questAutoOrganizationAdjustEntities,
        System_Int32_array *individualities,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Func_T__TResult__o *v9; // x20
  System_Collections_Generic_IEnumerable_TResult__o *v10; // x0
  AutoOrganizationManager___c_c *v11; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x19
  System_Func_float__float__float__o *_9__27_1; // x20
  Il2CppObject *v14; // x21
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4C3E7B1 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Aggregate_float__float___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___);
    sub_1C37058(&System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo);
    sub_1C37058(&System_Func_float__float__float__TypeInfo);
    sub_1C37058(&Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__27_1__);
    sub_1C37058(&Method_AutoOrganizationManager___c__DisplayClass27_0__GetAdjustTotalRate_b__0__);
    sub_1C37058(&AutoOrganizationManager___c__DisplayClass27_0_TypeInfo);
    sub_1C37058(&AutoOrganizationManager___c_TypeInfo);
    byte_4C3E7B1 = 1;
  }
  v5 = sub_1C372A4(AutoOrganizationManager___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_QWORD *)(v5 + 16) = individualities;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)individualities, v7, v8);
  v9 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo);
  System_Func_object__float____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_AutoOrganizationManager___c__DisplayClass27_0__GetAdjustTotalRate_b__0__,
    0);
  v10 = System_Linq_Enumerable__Select_object__float_(
          (System_Collections_Generic_IEnumerable_TSource__o *)questAutoOrganizationAdjustEntities,
          (System_Func_TSource__TResult__o *)v9,
          (const MethodInfo_311EC70 *)Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___);
  v11 = AutoOrganizationManager___c_TypeInfo;
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)v10;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v11 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__27_1 = v11->static_fields->__9__27_1;
  if ( !_9__27_1 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = AutoOrganizationManager___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__27_1 = (System_Func_float__float__float__o *)sub_1C372A4(System_Func_float__float__float__TypeInfo);
    System_Func_float__float__float____ctor(
      _9__27_1,
      v14,
      Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__27_1__,
      0);
    static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    static_fields->__9__27_1 = _9__27_1;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__27_1, (int32_t)_9__27_1, v16, v17);
  }
  return System_Linq_Enumerable__Aggregate_float__float_(
           v12,
           1.0,
           (System_Func_TAccumulate__TSource__TAccumulate__o *)_9__27_1,
           (const MethodInfo_30F08E4 *)Method_System_Linq_Enumerable_Aggregate_float__float___);
}


System_Boolean_array *AutoOrganizationManager__GetAutoOrganizationSetting(
        ListViewSort_o *sort,
        int32_t *settingUnitNum,
        const MethodInfo *method)
{
  __int64 Filter_43866584; // x0
  __int64 v6; // x20
  unsigned __int64 v7; // x22
  __int64 v8; // x24
  unsigned __int64 v9; // x8
  int v10; // w9
  bool v11; // w8
  bool v12; // zf
  bool v13; // w9
  char v14; // w11
  unsigned int v15; // w8
  unsigned __int64 v16; // x9
  bool v17; // cf
  __int64 v18; // x8
  int v19; // w11
  int v20; // w13
  __int64 v21; // x9
  unsigned int v22; // w10
  unsigned __int64 v23; // x9
  unsigned __int64 v24; // x8
  __int64 v25; // x10
  __int64 v26; // x12
  unsigned __int64 v27; // x10
  int v28; // w14

  if ( (byte_4C3E7A6 & 1) == 0 )
  {
    sub_1C37058(&bool___TypeInfo);
    byte_4C3E7A6 = 1;
  }
  Filter_43866584 = sub_1C37100(bool___TypeInfo, 13);
  if ( !sort )
LABEL_38:
    sub_1C372B4(Filter_43866584);
  v6 = Filter_43866584;
  v7 = 0;
  v8 = Filter_43866584 + 32;
  do
  {
    Filter_43866584 = ListViewSort__GetFilter_43866584(sort, v7, 0);
    if ( !v6 )
      goto LABEL_38;
    v9 = *(unsigned int *)(v6 + 24);
    if ( v7 >= v9 )
      goto LABEL_37;
    *(_BYTE *)(v8 + v7++) = Filter_43866584 & 1;
  }
  while ( v7 != 13 );
  if ( (unsigned int)v9 < 2 )
LABEL_37:
    sub_1C372BC(Filter_43866584);
  v10 = *(unsigned __int8 *)(v6 + 33);
  v11 = *(_BYTE *)(v6 + 32) == 0;
  v12 = v10 == 0;
  v13 = v10 != 0;
  v14 = v12;
  *(_BYTE *)(v6 + 32) = (*(_BYTE *)(v6 + 32) != 0) | v14;
  *(_BYTE *)(v6 + 33) = v13 || v11;
  Filter_43866584 = sub_1C37100(bool___TypeInfo, 5);
  v15 = *(_DWORD *)(v6 + 24);
  v16 = 0;
  v17 = v15 >= 2;
  v18 = v15 - 2;
  if ( (_DWORD)v18 == 0 || !v17 )
    v18 = 0;
  LOBYTE(v19) = 1;
  do
  {
    if ( v18 == v16 )
      goto LABEL_37;
    if ( !Filter_43866584 )
      goto LABEL_38;
    if ( v16 >= *(unsigned int *)(Filter_43866584 + 24) )
      goto LABEL_37;
    v20 = *(unsigned __int8 *)(v6 + 34 + v16);
    *(_BYTE *)(Filter_43866584 + 32 + v16++) = v20;
    v19 = (unsigned __int8)v19 & (v20 == 0);
  }
  while ( v16 != 5 );
  if ( v19 )
  {
    v21 = 0;
    while ( v18 != v21 )
    {
      *(_BYTE *)(v6 + 34 + v21++) = 1;
      if ( v21 == 5 )
        goto LABEL_23;
    }
    goto LABEL_37;
  }
LABEL_23:
  Filter_43866584 = sub_1C37100(bool___TypeInfo, 6);
  v22 = *(_DWORD *)(v6 + 24);
  v23 = 0;
  LODWORD(v24) = 0;
  v17 = v22 >= 7;
  v25 = v22 - 7;
  if ( (_DWORD)v25 != 0 && v17 )
    v26 = v25;
  else
    v26 = 0;
  do
  {
    if ( v26 == v23 )
      goto LABEL_37;
    if ( !Filter_43866584 )
      goto LABEL_38;
    v27 = *(unsigned int *)(Filter_43866584 + 24);
    if ( v23 >= v27 )
      goto LABEL_37;
    v28 = *(unsigned __int8 *)(v6 + 39 + v23);
    *(_BYTE *)(Filter_43866584 + 32 + v23++) = v28;
    if ( v28 )
      LODWORD(v24) = v23;
  }
  while ( v23 != 6 );
  if ( !(_DWORD)v24 )
  {
    v24 = 0;
    while ( v24 < v27 )
    {
      *(_BYTE *)(Filter_43866584 + 32 + v24++) = 1;
      if ( v24 == 6 )
        goto LABEL_36;
    }
    goto LABEL_37;
  }
LABEL_36:
  *settingUnitNum = v24;
  return (System_Boolean_array *)v6;
}


System_Collections_Generic_HashSet_int__o *AutoOrganizationManager__GetEventBonusIds(
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x19
  __int64 Master_object; // x0
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x20
  System_Int32_array *v7; // x21
  Il2CppObject *v8; // x23
  Il2CppObject *v9; // x25
  System_Collections_Generic_List_EventBonusFilterEntity__o *FilterList; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x24
  System_Collections_Generic_List_object__o *v12; // x26
  AutoOrganizationManager___c_c *v13; // x0
  System_Comparison_T__o *_9__22_0; // x25
  Il2CppObject *v15; // x21
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_object__o *v19; // x0
  System_Collections_Generic_List_object__o *v20; // x0
  int32_t v21; // w25
  int v22; // w8
  __int64 v23; // x26
  __int64 v24; // x26
  __int64 v25; // x21
  __int64 v26; // x27
  int32_t v27; // w1
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

  if ( (byte_4C3E7AC & 1) == 0 )
  {
    sub_1C37058(&System_Comparison_EventBonusFilterEntity__TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_EventBonusFilterMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C37058(&EventUpValInfo_TypeInfo);
    sub_1C37058(&EventUpValSetupInfo_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1C37058(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_SkillInfo___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_EventUpValInfo__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_SkillInfo__TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_AutoOrganizationManager___c__GetEventBonusIds_b__22_0__);
    sub_1C37058(&AutoOrganizationManager___c_TypeInfo);
    byte_4C3E7AC = 1;
  }
  eventUpVallInfo = 0;
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C372A4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_3653A88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_61;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Master_object, 0, 0, 0);
  if ( !EventValUpEventIdHash )
    return v3;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash;
  if ( EventValUpEventIdHash->fields._count < 1
    || !System_Collections_Generic_HashSet_int___Contains(
          EventValUpEventIdHash,
          eventId,
          (const MethodInfo_365417C *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
    return v3;
  }
  v7 = System_Linq_Enumerable__ToArray_int_(
         v6,
         (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
  setupInfo = (EventUpValSetupInfo_o *)sub_1C372A4(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_41737996(setupInfo, v7, 0, 0, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v46 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantMaster___);
  v45 = (ServantSkillMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  v8 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v9 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  Master_object = sub_1C37100(int___TypeInfo, 1);
  if ( !Master_object )
    goto LABEL_61;
  if ( !*(_DWORD *)(Master_object + 24) )
    goto LABEL_62;
  *(_DWORD *)(Master_object + 32) = eventId;
  if ( !v9 )
LABEL_61:
    sub_1C372B4(Master_object);
  FilterList = EventBonusFilterMaster__GetFilterList(
                 (EventBonusFilterMaster_o *)v9,
                 (System_Int32_array *)Master_object,
                 1,
                 1,
                 0);
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)v46;
  if ( FilterList )
  {
    v12 = (System_Collections_Generic_List_object__o *)FilterList;
    if ( FilterList->fields._size >= 1 )
    {
      v13 = AutoOrganizationManager___c_TypeInfo;
      if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
        v13 = AutoOrganizationManager___c_TypeInfo;
      }
      _9__22_0 = (System_Comparison_T__o *)v13->static_fields->__9__22_0;
      if ( !_9__22_0 )
      {
        if ( !v13->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v13);
          v13 = AutoOrganizationManager___c_TypeInfo;
        }
        v15 = (Il2CppObject *)v13->static_fields->__9;
        _9__22_0 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_EventBonusFilterEntity__TypeInfo);
        System_Comparison_object____ctor(
          _9__22_0,
          v15,
          Method_AutoOrganizationManager___c__GetEventBonusIds_b__22_0__,
          0);
        static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
        static_fields->__9__22_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__22_0;
        sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__22_0, (int32_t)_9__22_0, v17, v18);
      }
      System_Collections_Generic_List_object___Sort_58346216(
        v12,
        _9__22_0,
        (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
      v19 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventUpValInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v19,
        (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
      v20 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_SkillInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v20,
        (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
      if ( v12->fields._size >= 1 )
      {
        v21 = 0;
        v47 = v12;
        do
        {
          Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                     v12,
                                     v21,
                                     (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
          if ( !Master_object )
            goto LABEL_61;
          v22 = *(_DWORD *)(Master_object + 20);
          v23 = Master_object;
          if ( v22 == 2 )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
            if ( !Master_object )
              goto LABEL_61;
            Master_object = (__int64)EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                                       (EventBonusFilterGroupMemberMaster_o *)Master_object,
                                       *(_DWORD *)(v23 + 24),
                                       0);
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
                                  (const MethodInfo_3654C8C *)Method_System_Collections_Generic_HashSet_int__Add__);
                v40 = *(_DWORD *)(v41 + 24);
                if ( (int)++v42 >= v40 )
                  goto LABEL_59;
              }
LABEL_62:
              sub_1C372BC(Master_object);
            }
          }
          else if ( v22 == 1 )
          {
            if ( !v11 )
              goto LABEL_61;
            Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                       v11,
                                       *(_DWORD *)(Master_object + 24),
                                       (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Master_object )
              goto LABEL_61;
            v24 = Master_object;
            v26 = *(_QWORD *)(Master_object + 16);
            v25 = *(_QWORD *)(Master_object + 24);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v50.fields.currentCryptoKey = v26;
            *(_QWORD *)&v50.fields.fakeValue = v25;
            v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v50, 0);
            Master_object = (__int64)v45;
            if ( !v45 )
              goto LABEL_61;
            Master_object = (__int64)ServantSkillMaster__getServantSkillList(v45, v27, 0);
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
                if ( !v32 || !v8 )
                  goto LABEL_61;
                Master_object = (__int64)SkillLvMaster__GetEntity((SkillLvMaster_o *)v8, *(_DWORD *)(v32 + 28), 1, 0);
                if ( Master_object && !*(_DWORD *)(v32 + 44) )
                {
                  v33 = (SkillLvEntity_o *)Master_object;
                  v34 = *(_QWORD *)(v24 + 16);
                  v35 = *(_QWORD *)(v24 + 24);
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v51.fields.currentCryptoKey = v34;
                  *(_QWORD *)&v51.fields.fakeValue = v35;
                  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v51, 0);
                  v37 = (EventUpValInfo_o *)sub_1C372A4(EventUpValInfo_TypeInfo);
                  EventUpValInfo___ctor(v37, setupInfo, v36, 1, 1, 0, 0);
                  eventUpVallInfo = v37;
                  Master_object = SkillLvEntity__getEventUpVal_42900292(v33, &eventUpVallInfo, 1, 1, 0, 1, 0, 0);
                  v31 |= Master_object;
                }
                v28 = *(_DWORD *)(v29 + 24);
                ++v30;
              }
              while ( v30 < v28 );
              v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)v46;
              if ( (v31 & 1) != 0 )
              {
                v39 = *(_QWORD *)(v24 + 16);
                v38 = *(_QWORD *)(v24 + 24);
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v52.fields.currentCryptoKey = v39;
                *(_QWORD *)&v52.fields.fakeValue = v38;
                Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v52, 0);
                if ( !v3 )
                  goto LABEL_61;
                System_Collections_Generic_HashSet_int___Add(
                  v3,
                  Master_object,
                  (const MethodInfo_3654C8C *)Method_System_Collections_Generic_HashSet_int__Add__);
              }
            }
          }
LABEL_59:
          v12 = v47;
          ++v21;
        }
        while ( v21 < v47->fields._size );
      }
    }
  }
  return v3;
}


int32_t AutoOrganizationManager__GetRarityBit(System_Boolean_array *rarityFlag, const MethodInfo *method)
{
  unsigned __int64 max_length_low; // x10
  unsigned __int64 v4; // x9
  __int64 v5; // x0
  bool *m_Items; // x8

  if ( !rarityFlag )
    sub_1C372B4(0);
  max_length_low = LODWORD(rarityFlag->max_length);
  v4 = 0;
  v5 = 0;
  m_Items = rarityFlag->m_Items;
  do
  {
    if ( (__int64)v4 <= (int)max_length_low )
    {
      if ( v4 >= max_length_low )
        sub_1C372BC(v5);
      if ( m_Items[v4] )
        v5 = (1 << v4) | (unsigned int)v5;
    }
    ++v4;
  }
  while ( v4 != 5 );
  return v5;
}


System_Boolean_array *AutoOrganizationManager__GetWaveBattleAutoOrganizationSetting(
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 Filter_43866632; // x0
  __int64 v4; // x19
  unsigned __int64 v5; // x21
  __int64 v6; // x23
  unsigned __int64 v7; // x8
  int v8; // w9
  bool v9; // w8
  bool v10; // zf
  bool v11; // w9
  char v12; // w11
  unsigned int v13; // w8
  unsigned __int64 v14; // x9
  bool v15; // cf
  __int64 v16; // x8
  int v17; // w11
  int v18; // w13
  __int64 v19; // x9

  if ( (byte_4C3E7A7 & 1) == 0 )
  {
    sub_1C37058(&bool___TypeInfo);
    byte_4C3E7A7 = 1;
  }
  Filter_43866632 = sub_1C37100(bool___TypeInfo, 7);
  if ( !sort )
LABEL_25:
    sub_1C372B4(Filter_43866632);
  v4 = Filter_43866632;
  v5 = 0;
  v6 = Filter_43866632 + 32;
  do
  {
    Filter_43866632 = ListViewSort__GetFilter_43866632(sort, v5, 0);
    if ( !v4 )
      goto LABEL_25;
    v7 = *(unsigned int *)(v4 + 24);
    if ( v5 >= v7 )
      goto LABEL_24;
    *(_BYTE *)(v6 + v5++) = Filter_43866632 & 1;
  }
  while ( v5 != 7 );
  if ( (unsigned int)v7 < 2 )
LABEL_24:
    sub_1C372BC(Filter_43866632);
  v8 = *(unsigned __int8 *)(v4 + 33);
  v9 = *(_BYTE *)(v4 + 32) == 0;
  v10 = v8 == 0;
  v11 = v8 != 0;
  v12 = v10;
  *(_BYTE *)(v4 + 32) = (*(_BYTE *)(v4 + 32) != 0) | v12;
  *(_BYTE *)(v4 + 33) = v11 || v9;
  Filter_43866632 = sub_1C37100(bool___TypeInfo, 5);
  v13 = *(_DWORD *)(v4 + 24);
  v14 = 0;
  v15 = v13 >= 2;
  v16 = v13 - 2;
  if ( (_DWORD)v16 == 0 || !v15 )
    v16 = 0;
  LOBYTE(v17) = 1;
  do
  {
    if ( v16 == v14 )
      goto LABEL_24;
    if ( !Filter_43866632 )
      goto LABEL_25;
    if ( v14 >= *(unsigned int *)(Filter_43866632 + 24) )
      goto LABEL_24;
    v18 = *(unsigned __int8 *)(v4 + 34 + v14);
    *(_BYTE *)(Filter_43866632 + 32 + v14++) = v18;
    v17 = (unsigned __int8)v17 & (v18 == 0);
  }
  while ( v14 != 5 );
  if ( v17 )
  {
    v19 = 0;
    while ( v16 != v19 )
    {
      *(_BYTE *)(v4 + 34 + v19++) = 1;
      if ( v19 == 5 )
        return (System_Boolean_array *)v4;
    }
    goto LABEL_24;
  }
  return (System_Boolean_array *)v4;
}


void AutoOrganizationManager__InitLoad(const MethodInfo *method)
{
  AutoOrganizationManager_c *v1; // x0
  ListViewSort_o *autoOrganizationInfo; // x0

  if ( (byte_4C3E7A4 & 1) == 0 )
  {
    sub_1C37058(&AutoOrganizationManager_TypeInfo);
    byte_4C3E7A4 = 1;
  }
  v1 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v1 = AutoOrganizationManager_TypeInfo;
  }
  autoOrganizationInfo = v1->static_fields->autoOrganizationInfo;
  if ( !autoOrganizationInfo
    || (ListViewSort__InitLoad(autoOrganizationInfo, 0),
        (autoOrganizationInfo = AutoOrganizationManager_TypeInfo->static_fields->waveBattleAutoOrganizationInfo) == 0) )
  {
    sub_1C372B4(autoOrganizationInfo);
  }
  ListViewSort__InitLoad(autoOrganizationInfo, 0);
}


bool AutoOrganizationManager__IsAllOutBattleAlreadyUsed(
        QuestRestrictionInfo_o *restrictionInfo,
        int32_t svtId,
        const MethodInfo *method)
{
  int32_t allOutBattleGroupNo; // w21
  Il2CppObject *Master_object; // x0

  if ( (byte_4C3E7AE & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    byte_4C3E7AE = 1;
  }
  if ( !restrictionInfo || !restrictionInfo->fields.isAllOutBattle )
    return 0;
  allOutBattleGroupNo = restrictionInfo->fields.allOutBattleGroupNo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( !Master_object )
    sub_1C372B4(0);
  return UserEventAlloutBattleMaster__IsAlreadyUsedServant(
           (UserEventAlloutBattleMaster_o *)Master_object,
           svtId,
           restrictionInfo->fields.eventId,
           allOutBattleGroupNo,
           0);
}


bool AutoOrganizationManager__IsDataLost(
        QuestRestrictionInfo_o *restrictionInfo,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  void *IsRestart; // x0
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3E7AF & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3E7AF = 1;
  }
  entity = 0;
  if ( !restrictionInfo || !restrictionInfo->fields.isDataLostBattle )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
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
          0) )
    return 0;
  IsRestart = entity;
  if ( !entity || (IsRestart = (void *)UserEventDataLostEntity__IsRestart(entity, svtId, 0), !entity) )
LABEL_23:
    sub_1C372B4(IsRestart);
  if ( ((unsigned __int8)IsRestart & 1) != 0 )
  {
    if ( UserEventDataLostEntity__GetTimesToRestart(entity, svtId, 0) >= 1 )
      return 1;
  }
  else if ( UserEventDataLostEntity__IsDataLost(entity, svtId, 0) )
  {
    return 1;
  }
  return 0;
}


bool AutoOrganizationManager__IsFatigue(
        QuestRestrictionInfo_o *restrictionInfo,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  int64_t v6; // x19
  bool isRecover; // [xsp+4h] [xbp-2Ch] BYREF
  int64_t recoverAt; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3E7AD & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_UserEventServantFatigueMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3E7AD = 1;
  }
  recoverAt = 0;
  isRecover = 0;
  if ( !restrictionInfo || !restrictionInfo->fields.isFatigure )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserEventServantFatigueMaster___);
  if ( !Master_object )
    sub_1C372B4(0);
  if ( !UserEventServantFatigueMaster__GetFatigueInfo(
          (UserEventServantFatigueMaster_o *)Master_object,
          &recoverAt,
          &isRecover,
          restrictionInfo->fields.eventId,
          svtId,
          0) )
    return 0;
  v6 = recoverAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return v6 > NetworkManager__getTime(0);
}


AutoOrganizationManager_ServantData_array *AutoOrganizationManager__SortClassRelation(
        System_Collections_Generic_IReadOnlyList_AutoOrganizationManager_ServantData__o *dataList,
        int32_t enemyClassId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  Il2CppObject *Master_object; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x21
  _BOOL8 v8; // x0
  Il2CppObject *current; // x29
  int32_t klass; // w22
  _BOOL8 v11; // x0
  float Rate; // s0
  AutoOrganizationManager___c_c *v13; // x0
  System_Func_T__TResult__o *_9__19_0; // x20
  Il2CppObject *v15; // x21
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4C3E7A9 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__get_Current__);
    sub_1C37058(&System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___78075720);
    sub_1C37058(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
    sub_1C37058(&Method_AutoOrganizationManager___c__SortClassRelation_b__19_0__);
    sub_1C37058(&AutoOrganizationManager___c_TypeInfo);
    byte_4C3E7A9 = 1;
  }
  entity = 0;
  memset(&v22, 0, sizeof(v22));
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor_58337560(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)dataList,
    (const MethodInfo_37A2918 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___78075720);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantClassMaster___);
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( enemyClassId )
  {
    if ( !Master_object )
      goto LABEL_32;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &entity,
                                      enemyClassId,
                                      (const MethodInfo_33A10EC *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_32;
      enemyClassId = HIDWORD(entity[3].monitor);
    }
  }
  if ( !v5 )
LABEL_32:
    sub_1C372B4(Master_object);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    v5,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__);
  v22 = v21;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v22,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__);
    if ( !v8 )
      break;
    current = v22.fields._current;
    if ( !v22.fields._current )
      sub_1C372B4(v8);
    if ( !v7 )
      sub_1C372B4(v8);
    klass = (int32_t)v22.fields._current[2].klass;
    v11 = DataMasterBase_object__object__int___TryGetEntity(
            v7,
            &entity,
            klass,
            (const MethodInfo_33A10EC *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( v11 )
    {
      if ( !entity )
        sub_1C372B4(v11);
      klass = HIDWORD(entity[3].monitor);
    }
    if ( enemyClassId )
      Rate = ClassRelationMaster__getRate(klass, enemyClassId, 0);
    else
      Rate = 1.0;
    *(float *)&current[3].klass = *(float *)&current[4].monitor * (float)(Rate * (float)SHIDWORD(current[2].klass));
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__);
  v13 = AutoOrganizationManager___c_TypeInfo;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v13 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__19_0 = (System_Func_T__TResult__o *)v13->static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = AutoOrganizationManager___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__19_0 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    System_Func_object__float____ctor(_9__19_0, v15, Method_AutoOrganizationManager___c__SortClassRelation_b__19_0__, 0);
    static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = (struct System_Func_AutoOrganizationManager_ServantData__float__o *)_9__19_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__19_0, (int32_t)_9__19_0, v17, v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__float_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v5,
                                                               (System_Func_TSource__TKey__o *)_9__19_0,
                                                               (const MethodInfo_3117A70 *)Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___);
  return (AutoOrganizationManager_ServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                                        v19,
                                                        (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___);
}


AutoOrganizationManager_ServantData_array *AutoOrganizationManager__SortServant(
        System_Collections_Generic_IReadOnlyList_AutoOrganizationManager_ServantData__o *dataList,
        int32_t enemyClassId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  Il2CppObject *Master_object; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x21
  _BOOL8 v8; // x0
  Il2CppObject *current; // x27
  int32_t klass; // w22
  _BOOL8 v11; // x0
  float Rate; // s8
  float v13; // s0
  float v14; // s0
  AutoOrganizationManager___c_c *v15; // x0
  System_Func_T__TResult__o *_9__20_0; // x20
  Il2CppObject *v17; // x21
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v21; // x0
  AutoOrganizationManager___c_c *v22; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v23; // x19
  System_Func_object__int__o *_9__20_1; // x20
  Il2CppObject *v25; // x21
  struct AutoOrganizationManager___c_StaticFields *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v29; // x0
  AutoOrganizationManager___c_c *v30; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v31; // x19
  System_Func_T__TResult__o *_9__20_2; // x20
  Il2CppObject *v33; // x21
  struct AutoOrganizationManager___c_StaticFields *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v37; // x0
  AutoOrganizationManager___c_c *v38; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v39; // x19
  System_Func_object__int__o *_9__20_3; // x20
  Il2CppObject *v41; // x21
  struct AutoOrganizationManager___c_StaticFields *v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v45; // x0
  AutoOrganizationManager___c_c *v46; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v47; // x19
  System_Func_object__long__o *_9__20_4; // x20
  Il2CppObject *v49; // x21
  struct AutoOrganizationManager___c_StaticFields *v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+20h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4C3E7AA & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___);
    sub_1C37058(&Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__long___);
    sub_1C37058(&Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__float___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__get_Current__);
    sub_1C37058(&System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    sub_1C37058(&System_Func_AutoOrganizationManager_ServantData__long__TypeInfo);
    sub_1C37058(&System_Func_AutoOrganizationManager_ServantData__int__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___78075720);
    sub_1C37058(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
    sub_1C37058(&Method_AutoOrganizationManager___c__SortServant_b__20_0__);
    sub_1C37058(&Method_AutoOrganizationManager___c__SortServant_b__20_1__);
    sub_1C37058(&Method_AutoOrganizationManager___c__SortServant_b__20_2__);
    sub_1C37058(&Method_AutoOrganizationManager___c__SortServant_b__20_3__);
    sub_1C37058(&Method_AutoOrganizationManager___c__SortServant_b__20_4__);
    sub_1C37058(&AutoOrganizationManager___c_TypeInfo);
    byte_4C3E7AA = 1;
  }
  entity = 0;
  memset(&v56, 0, sizeof(v56));
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor_58337560(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)dataList,
    (const MethodInfo_37A2918 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___78075720);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantClassMaster___);
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( enemyClassId )
  {
    if ( !Master_object )
      goto LABEL_56;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &entity,
                                      enemyClassId,
                                      (const MethodInfo_33A10EC *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_56;
      enemyClassId = HIDWORD(entity[3].monitor);
    }
  }
  if ( !v5 )
LABEL_56:
    sub_1C372B4(Master_object);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v55,
    v5,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__);
  v56 = v55;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v56,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__);
    if ( !v8 )
      break;
    current = v56.fields._current;
    if ( !v56.fields._current )
      sub_1C372B4(v8);
    if ( !v7 )
      sub_1C372B4(v8);
    klass = (int32_t)v56.fields._current[2].klass;
    v11 = DataMasterBase_object__object__int___TryGetEntity(
            v7,
            &entity,
            klass,
            (const MethodInfo_33A10EC *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( v11 )
    {
      if ( !entity )
        sub_1C372B4(v11);
      klass = HIDWORD(entity[3].monitor);
    }
    if ( enemyClassId )
    {
      Rate = ClassRelationMaster__getRate(klass, enemyClassId, 0);
      v13 = ClassRelationMaster__getRate(enemyClassId, klass, 0);
    }
    else
    {
      v13 = 1.0;
      Rate = 1.0;
    }
    v14 = (float)SLODWORD(current[2].monitor) / v13;
    *((float *)&current[3].klass + 1) = *(float *)&current[4].monitor
                                      * (float)(Rate * (float)SHIDWORD(current[2].klass));
    *(float *)&current[3].monitor = v14;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v56,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__);
  v15 = AutoOrganizationManager___c_TypeInfo;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v15 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__20_0 = (System_Func_T__TResult__o *)v15->static_fields->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = AutoOrganizationManager___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v15->static_fields->__9;
    _9__20_0 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    System_Func_object__float____ctor(_9__20_0, v17, Method_AutoOrganizationManager___c__SortServant_b__20_0__, 0);
    static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    static_fields->__9__20_0 = (struct System_Func_AutoOrganizationManager_ServantData__float__o *)_9__20_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__20_0, (int32_t)_9__20_0, v19, v20);
  }
  v21 = System_Linq_Enumerable__OrderByDescending_object__float_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v5,
          (System_Func_TSource__TKey__o *)_9__20_0,
          (const MethodInfo_3117A70 *)Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___);
  v22 = AutoOrganizationManager___c_TypeInfo;
  v23 = v21;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v22 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__20_1 = (System_Func_object__int__o *)v22->static_fields->__9__20_1;
  if ( !_9__20_1 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = AutoOrganizationManager___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v22->static_fields->__9;
    _9__20_1 = (System_Func_object__int__o *)sub_1C372A4(System_Func_AutoOrganizationManager_ServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__20_1, v25, Method_AutoOrganizationManager___c__SortServant_b__20_1__, 0);
    v26 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v26->__9__20_1 = (struct System_Func_AutoOrganizationManager_ServantData__int__o *)_9__20_1;
    sub_1C36FFC((CGThumbnailListItem_o *)&v26->__9__20_1, (int32_t)_9__20_1, v27, v28);
  }
  v29 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v23,
          (System_Func_TSource__TKey__o *)_9__20_1,
          (const MethodInfo_3126B84 *)Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__int___);
  v30 = AutoOrganizationManager___c_TypeInfo;
  v31 = v29;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v30 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__20_2 = (System_Func_T__TResult__o *)v30->static_fields->__9__20_2;
  if ( !_9__20_2 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = AutoOrganizationManager___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v30->static_fields->__9;
    _9__20_2 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    System_Func_object__float____ctor(_9__20_2, v33, Method_AutoOrganizationManager___c__SortServant_b__20_2__, 0);
    v34 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v34->__9__20_2 = (struct System_Func_AutoOrganizationManager_ServantData__float__o *)_9__20_2;
    sub_1C36FFC((CGThumbnailListItem_o *)&v34->__9__20_2, (int32_t)_9__20_2, v35, v36);
  }
  v37 = System_Linq_Enumerable__ThenByDescending_object__float_(
          v31,
          (System_Func_TSource__TKey__o *)_9__20_2,
          (const MethodInfo_3126D1C *)Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__float___);
  v38 = AutoOrganizationManager___c_TypeInfo;
  v39 = v37;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v38 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__20_3 = (System_Func_object__int__o *)v38->static_fields->__9__20_3;
  if ( !_9__20_3 )
  {
    if ( !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38);
      v38 = AutoOrganizationManager___c_TypeInfo;
    }
    v41 = (Il2CppObject *)v38->static_fields->__9;
    _9__20_3 = (System_Func_object__int__o *)sub_1C372A4(System_Func_AutoOrganizationManager_ServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__20_3, v41, Method_AutoOrganizationManager___c__SortServant_b__20_3__, 0);
    v42 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v42->__9__20_3 = (struct System_Func_AutoOrganizationManager_ServantData__int__o *)_9__20_3;
    sub_1C36FFC((CGThumbnailListItem_o *)&v42->__9__20_3, (int32_t)_9__20_3, v43, v44);
  }
  v45 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v39,
          (System_Func_TSource__TKey__o *)_9__20_3,
          (const MethodInfo_3126B84 *)Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__int___);
  v46 = AutoOrganizationManager___c_TypeInfo;
  v47 = v45;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v46 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__20_4 = (System_Func_object__long__o *)v46->static_fields->__9__20_4;
  if ( !_9__20_4 )
  {
    if ( !v46->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v46);
      v46 = AutoOrganizationManager___c_TypeInfo;
    }
    v49 = (Il2CppObject *)v46->static_fields->__9;
    _9__20_4 = (System_Func_object__long__o *)sub_1C372A4(System_Func_AutoOrganizationManager_ServantData__long__TypeInfo);
    System_Func_object__long____ctor(_9__20_4, v49, Method_AutoOrganizationManager___c__SortServant_b__20_4__, 0);
    v50 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v50->__9__20_4 = (struct System_Func_AutoOrganizationManager_ServantData__long__o *)_9__20_4;
    sub_1C36FFC((CGThumbnailListItem_o *)&v50->__9__20_4, (int32_t)_9__20_4, v51, v52);
  }
  v53 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenByDescending_object__long_(
                                                               v47,
                                                               (System_Func_TSource__TKey__o *)_9__20_4,
                                                               (const MethodInfo_3126C50 *)Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__long___);
  return (AutoOrganizationManager_ServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                                        v53,
                                                        (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___);
}


ListViewSort_o *AutoOrganizationManager__get_SortInfo(const MethodInfo *method)
{
  AutoOrganizationManager_c *v1; // x0

  if ( (byte_4C3E7A2 & 1) == 0 )
  {
    sub_1C37058(&AutoOrganizationManager_TypeInfo);
    byte_4C3E7A2 = 1;
  }
  v1 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v1 = AutoOrganizationManager_TypeInfo;
  }
  return v1->static_fields->autoOrganizationInfo;
}


ListViewSort_o *AutoOrganizationManager__get_SortInfoWaveBattle(const MethodInfo *method)
{
  AutoOrganizationManager_c *v1; // x0

  if ( (byte_4C3E7A3 & 1) == 0 )
  {
    sub_1C37058(&AutoOrganizationManager_TypeInfo);
    byte_4C3E7A3 = 1;
  }
  v1 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v1 = AutoOrganizationManager_TypeInfo;
  }
  return v1->static_fields->waveBattleAutoOrganizationInfo;
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
  *(_QWORD *)&this->fields.collectionNo = 0;
  this->fields.cost = 0;
  this->fields.used = 0;
  *(_QWORD *)&this->fields.questAutoOrganizationAdjustRate = 0;
  this->fields.userSvtId = 0;
  *(_QWORD *)&this->fields.classId = 0;
}


void AutoOrganizationManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3E7B3 & 1) == 0 )
  {
    sub_1C37058(&AutoOrganizationManager___c_TypeInfo);
    byte_4C3E7B3 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(AutoOrganizationManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AutoOrganizationManager___c_TypeInfo->static_fields->__9 = (struct AutoOrganizationManager___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)AutoOrganizationManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
  return b->fields.priority - a->fields.priority;
}


float AutoOrganizationManager___c___SortClassRelation_b__19_0(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1C372B4(this);
  return d->fields.relationNum;
}


float AutoOrganizationManager___c___SortServant_b__20_0(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1C372B4(this);
  return d->fields.relationAtk;
}


int32_t AutoOrganizationManager___c___SortServant_b__20_1(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1C372B4(this);
  return d->fields.treasureDeviceLv;
}


float AutoOrganizationManager___c___SortServant_b__20_2(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1C372B4(this);
  return d->fields.relationDef;
}


int32_t AutoOrganizationManager___c___SortServant_b__20_3(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1C372B4(this);
  return d->fields.svtId;
}


int64_t AutoOrganizationManager___c___SortServant_b__20_4(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1C372B4(this);
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
  if ( !x )
    sub_1C372B4(this);
  return x->fields.svtId == this->fields.svtId;
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
    sub_1C372B4(this);
  return QuestAutoOrganizationAdjustEntity__GetAdjustRate(entity, this->fields.userSvtId, 0);
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
    sub_1C372B4(this);
  return QuestAutoOrganizationAdjustEntity__GetAdjustRate_42452248(entity, this->fields.individualities, 0);
}