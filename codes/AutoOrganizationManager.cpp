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

  if ( (byte_4C22AF9 & 1) == 0 )
  {
    sub_1C2D490(&AutoOrganizationManager_TypeInfo);
    sub_1C2D490(&ListViewSort_TypeInfo);
    sub_1C2D490(&StringLiteral_2491/*"AutoOrganization"*/);
    sub_1C2D490(&StringLiteral_2497/*"AutoOrganizationWaveBattle"*/);
    byte_4C22AF9 = 1;
  }
  *(_QWORD *)AutoOrganizationManager_TypeInfo->static_fields = 0x296B0000296ALL;
  v1 = (ListViewSort_o *)sub_1C2D6DC(ListViewSort_TypeInfo);
  ListViewSort___ctor_43600724(v1, (System_String_o *)StringLiteral_2491/*"AutoOrganization"*/, 3, 0, 0);
  static_fields = AutoOrganizationManager_TypeInfo->static_fields;
  static_fields->autoOrganizationInfo = v1;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->autoOrganizationInfo, (int32_t)v1, v3, v4);
  v5 = (ListViewSort_o *)sub_1C2D6DC(ListViewSort_TypeInfo);
  ListViewSort___ctor_43600724(v5, (System_String_o *)StringLiteral_2497/*"AutoOrganizationWaveBattle"*/, 3, 0, 0);
  v6 = AutoOrganizationManager_TypeInfo->static_fields;
  v6->waveBattleAutoOrganizationInfo = v5;
  sub_1C2D434((CGThumbnailListItem_o *)&v6->waveBattleAutoOrganizationInfo, (int32_t)v5, v7, v8);
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
  const MethodInfo *v6; // x1
  UserServantEntity_array *ServantEquipList; // x21
  System_Collections_Generic_List_object__o *v8; // x20
  System_Collections_Generic_HashSet_int__o *v9; // x24
  System_Collections_Generic_HashSet_int__o *v10; // x23
  __int64 v11; // x2
  AutoOrganizationServantBonusFilterEquipComponent_c *v12; // x0
  struct AutoOrganizationServantBonusFilterEquipComponent_StaticFields *static_fields; // x9
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID; // x25
  System_String_o *SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID; // x26
  Il2CppObject *v16; // x27
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
  void *v27; // x29
  unsigned int v28; // w24
  __int64 v29; // x8
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 i; // x29
  UserServantEntity_o *v32; // x25
  __int64 v33; // x26
  __int64 v34; // x27
  int32_t v35; // w0
  __int64 v36; // x26
  __int64 v37; // x27
  int32_t v38; // w0
  __int64 v39; // x26
  __int128 v40; // q0
  __int64 v41; // x27
  __int64 v42; // x28
  int32_t v43; // w0
  int32_t v44; // w2
  int32_t atk; // w8
  Il2CppObject *v46; // x8
  float v47; // s13
  float v48; // s13
  __int64 v49; // x27
  __int64 v50; // x28
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  float v53; // s0
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x27
  AutoOrganizationManager_c *v55; // x0
  float v56; // s0
  AutoOrganizationManager_c *v57; // x0
  struct System_Object_array *items; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  Il2CppClass **v61; // x0
  __int64 v62; // x26
  __int64 v63; // x27
  int32_t v64; // w0
  __int64 v65; // x25
  __int64 v66; // x26
  struct System_Int32_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  System_Comparison_T__o *v70; // x19
  Il2CppObject *v71; // x21
  struct AutoOrganizationManager___c_StaticFields *v72; // x0
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  System_Collections_Generic_HashSet_int__o *v76; // [xsp+0h] [xbp-F0h]
  DataMasterBase_TMaster__TEntity__PKType__o *v77; // [xsp+8h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+30h] [xbp-C0h]
  int v80; // [xsp+54h] [xbp-9Ch] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-98h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16

  if ( (byte_4C22AF2 & 1) == 0 )
  {
    sub_1C2D490(&AutoOrganizationManager_TypeInfo);
    sub_1C2D490(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
    sub_1C2D490(&System_Comparison_AutoOrganizationManager_ServantData__TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1C2D490(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&ServantBonusFilterSelectMenu_TypeInfo);
    sub_1C2D490(&AutoOrganizationManager_ServantData_TypeInfo);
    sub_1C2D490(&Method_AutoOrganizationManager___c__AutoOrganizationEquip_b__21_0__);
    sub_1C2D490(&AutoOrganizationManager___c_TypeInfo);
    byte_4C22AF2 = 1;
  }
  entity = 0;
  v80 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_98;
  ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)Master_object, 0);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
  v77 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
  v9 = (System_Collections_Generic_HashSet_int__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v9,
    (const MethodInfo_363A780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  v10 = (System_Collections_Generic_HashSet_int__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v10,
    (const MethodInfo_363A780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( eventId )
  {
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    Master_object = AutoOrganizationManager__GetEventBonusIds(eventId, v6);
    if ( !Master_object )
      goto LABEL_98;
    v76 = (System_Collections_Generic_HashSet_int__o *)Master_object;
    if ( *((int *)Master_object + 8) >= 1 )
    {
      v12 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
        v12 = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
      }
      static_fields = v12->static_fields;
      SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID = static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID;
      SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID = static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v16 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
      if ( !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
      Master_object = (void *)ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0);
      v80 = 0;
      if ( (int)Master_object >= 1 )
      {
        v17 = (int)Master_object;
        while ( 1 )
        {
          v18 = System_Int32__ToString((int32_t)&v80, 0);
          v19 = System_String__Concat_63457864(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v18, 0);
          if ( UnityEngine_PlayerPrefs__HasKey(v19, 0) )
          {
            v20 = System_Int32__ToString((int32_t)&v80, 0);
            v21 = System_String__Concat_63457864(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v20, 0);
            Master_object = (void *)UnityEngine_PlayerPrefs__GetInt_71121948(v21, 0);
            if ( !v10 )
              goto LABEL_98;
            System_Collections_Generic_HashSet_int___Add(
              v10,
              (int32_t)Master_object,
              (const MethodInfo_363B984 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
          v22 = System_Int32__ToString((int32_t)&v80, 0);
          v23 = System_String__Concat_63457864(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v22, 0);
          Master_object = (void *)UnityEngine_PlayerPrefs__HasKey(v23, 0);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            v24 = System_Int32__ToString((int32_t)&v80, 0);
            v25 = System_String__Concat_63457864(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v24, 0);
            Master_object = (void *)UnityEngine_PlayerPrefs__GetInt_71121948(v25, 0);
            if ( !v16 )
              goto LABEL_98;
            Master_object = EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                              (EventBonusFilterGroupMemberMaster_o *)v16,
                              (int32_t)Master_object,
                              0);
            if ( !Master_object )
              goto LABEL_98;
            v26 = *((_DWORD *)Master_object + 6);
            v27 = Master_object;
            if ( v26 >= 1 )
              break;
          }
LABEL_31:
          if ( ++v80 >= v17 )
            goto LABEL_34;
        }
        v28 = 0;
        while ( 1 )
        {
          if ( v28 >= v26 )
LABEL_99:
            sub_1C2D6F4(Master_object, v6, v11);
          v29 = *((_QWORD *)v27 + (int)v28 + 4);
          if ( !v29 || !v10 )
            break;
          Master_object = (void *)System_Collections_Generic_HashSet_int___Add(
                                    v10,
                                    *(_DWORD *)(v29 + 20),
                                    (const MethodInfo_363B984 *)Method_System_Collections_Generic_HashSet_int__Add__);
          v26 = *((_DWORD *)v27 + 6);
          if ( (int)++v28 >= v26 )
            goto LABEL_31;
        }
LABEL_98:
        sub_1C2D6EC(Master_object, v6);
      }
    }
  }
  else
  {
    v76 = v9;
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
      v32 = ServantEquipList->m_Items[i];
      if ( !v32 )
        goto LABEL_89;
      if ( organizedEquipIdList )
      {
        v34 = *(_QWORD *)&v32->fields.svtId.fields.currentCryptoKey;
        v33 = *(_QWORD *)&v32->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v82.fields.currentCryptoKey = v34;
        *(_QWORD *)&v82.fields.fakeValue = v33;
        v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v82, 0);
        Master_object = (void *)System_Collections_Generic_List_int___Contains(
                                  organizedEquipIdList,
                                  v35,
                                  (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
          goto LABEL_89;
      }
      if ( !v10 )
        goto LABEL_98;
      if ( v10->fields._count >= 1 )
      {
        v37 = *(_QWORD *)&v32->fields.svtId.fields.currentCryptoKey;
        v36 = *(_QWORD *)&v32->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v83.fields.currentCryptoKey = v37;
        *(_QWORD *)&v83.fields.fakeValue = v36;
        v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v83, 0);
        Master_object = (void *)System_Collections_Generic_HashSet_int___Contains(
                                  v10,
                                  v38,
                                  (const MethodInfo_363AE74 *)Method_System_Collections_Generic_HashSet_int__Contains__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
          goto LABEL_89;
      }
      Master_object = (void *)UserServantEntity__IsFriendShipSvtEquip(v32, 0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
        goto LABEL_89;
      v39 = sub_1C2D6DC(AutoOrganizationManager_ServantData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v39, 0);
      *(_DWORD *)(v39 + 16) = 0;
      *(_QWORD *)(v39 + 32) = 0;
      *(_QWORD *)(v39 + 24) = 0;
      *(_QWORD *)(v39 + 44) = 0;
      *(_DWORD *)(v39 + 64) = 0;
      *(_BYTE *)(v39 + 68) = 0;
      *(_QWORD *)(v39 + 72) = 0;
      v40 = *(_OWORD *)&v32->fields.id.fields.fakeValue;
      *(_OWORD *)&v79.fields.currentCryptoKey = *(_OWORD *)&v32->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v79.fields.fakeValue = v40;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v78 = v79;
      *(_QWORD *)(v39 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v78, 0);
      v42 = *(_QWORD *)&v32->fields.svtId.fields.currentCryptoKey;
      v41 = *(_QWORD *)&v32->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v84.fields.currentCryptoKey = v42;
      *(_QWORD *)&v84.fields.fakeValue = v41;
      v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v84, 0);
      *(_DWORD *)(v39 + 16) = v43;
      v44 = v43;
      atk = v32->fields.atk;
      Master_object = v77;
      *(_DWORD *)(v39 + 48) = 0;
      *(_DWORD *)(v39 + 36) = atk;
      if ( !v77 )
        goto LABEL_98;
      Master_object = (void *)DataMasterBase_object__object__int___TryGetEntity(
                                v77,
                                &entity,
                                v44,
                                (const MethodInfo_3387DE4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v46 = entity;
        if ( !entity )
          goto LABEL_98;
        *(_DWORD *)(v39 + 64) = entity[9].monitor;
        *(_DWORD *)(v39 + 44) = v46[13].klass;
      }
      Master_object = v76;
      if ( !v76 )
        goto LABEL_98;
      if ( v76->fields._count >= 1
        && System_Collections_Generic_HashSet_int___Contains(
             v76,
             *(_DWORD *)(v39 + 16),
             (const MethodInfo_363AE74 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
      {
        v47 = *(float *)(v39 + 48) + 50000.0;
        *(float *)(v39 + 48) = v47;
        v48 = v47 + (float)((float)UserServantEntity__getRarity(v32, 0) * 100000.0);
        *(float *)(v39 + 48) = v48;
        v50 = *(_QWORD *)&v32->fields.limitCount.fields.currentCryptoKey;
        v49 = *(_QWORD *)&v32->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v85.fields.currentCryptoKey = v50;
        *(_QWORD *)&v85.fields.fakeValue = v49;
        Master_object = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v85, 0);
        v53 = v48 + (float)((float)(int)Master_object * 10000.0);
        goto LABEL_74;
      }
      Master_object = UserServantEntity__GetEquipCategoryIdList(v32, 0, 0);
      if ( Master_object )
      {
        v54 = (System_Collections_Generic_IEnumerable_TSource__o *)Master_object;
        v55 = AutoOrganizationManager_TypeInfo;
        if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          v55 = AutoOrganizationManager_TypeInfo;
        }
        Master_object = (void *)System_Linq_Enumerable__Contains_int_(
                                  v54,
                                  v55->static_fields->CATEGORY_ID_NP_GAIN,
                                  (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          v56 = *(float *)(v39 + 48) + 40000.0;
        }
        else
        {
          v57 = AutoOrganizationManager_TypeInfo;
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
            v57 = AutoOrganizationManager_TypeInfo;
          }
          Master_object = (void *)System_Linq_Enumerable__Contains_int_(
                                    v54,
                                    v57->static_fields->CATEGORY_ID_NP_REGAIN,
                                    (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( ((unsigned __int8)Master_object & 1) == 0 )
            goto LABEL_73;
          v56 = *(float *)(v39 + 48) + 30000.0;
        }
        *(float *)(v39 + 48) = v56;
      }
LABEL_73:
      v53 = *(float *)(v39 + 48) + (float)*(int *)(v39 + 36);
LABEL_74:
      *(float *)(v39 + 48) = v53;
      if ( !v8 )
        goto LABEL_98;
      items = v8->fields._items;
      v59 = Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__;
      ++v8->fields._version;
      if ( !items )
        goto LABEL_98;
      size = v8->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          (Il2CppObject *)v39,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
        if ( !organizedEquipIdList )
          goto LABEL_89;
      }
      else
      {
        v61 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v61[4] = (Il2CppClass *)v39;
        sub_1C2D434((CGThumbnailListItem_o *)(v61 + 4), v39, v51, v52);
        if ( !organizedEquipIdList )
          goto LABEL_89;
      }
      v63 = *(_QWORD *)&v32->fields.svtId.fields.currentCryptoKey;
      v62 = *(_QWORD *)&v32->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v86.fields.currentCryptoKey = v63;
      *(_QWORD *)&v86.fields.fakeValue = v62;
      v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v86, 0);
      Master_object = (void *)System_Collections_Generic_List_int___Contains(
                                organizedEquipIdList,
                                v64,
                                (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)Master_object & 1) == 0 )
      {
        v66 = *(_QWORD *)&v32->fields.svtId.fields.currentCryptoKey;
        v65 = *(_QWORD *)&v32->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v87.fields.currentCryptoKey = v66;
        *(_QWORD *)&v87.fields.fakeValue = v65;
        Master_object = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v87, 0);
        v67 = organizedEquipIdList->fields._items;
        v68 = Method_System_Collections_Generic_List_int__Add__;
        ++organizedEquipIdList->fields._version;
        if ( !v67 )
          goto LABEL_98;
        v69 = organizedEquipIdList->fields._size;
        v6 = (const MethodInfo *)(unsigned int)Master_object;
        if ( (unsigned int)v69 >= LODWORD(v67->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            organizedEquipIdList,
            (int32_t)Master_object,
            *(const MethodInfo_376CB60 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
        }
        else
        {
          organizedEquipIdList->fields._size = v69 + 1;
          v67->m_Items[v69] = (int)Master_object;
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
  v70 = *(System_Comparison_T__o **)(*((_QWORD *)Master_object + 23) + 56LL);
  if ( !v70 )
  {
    if ( !*((_DWORD *)Master_object + 56) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = AutoOrganizationManager___c_TypeInfo;
    }
    v71 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
    v70 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_AutoOrganizationManager_ServantData__TypeInfo);
    System_Comparison_object____ctor(v70, v71, Method_AutoOrganizationManager___c__AutoOrganizationEquip_b__21_0__, 0);
    v72 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v72->__9__21_0 = (struct System_Comparison_AutoOrganizationManager_ServantData__o *)v70;
    sub_1C2D434((CGThumbnailListItem_o *)&v72->__9__21_0, (int32_t)v70, v73, v74);
  }
  if ( !v8 )
    goto LABEL_98;
  System_Collections_Generic_List_object___Sort_58242632(
    v8,
    v70,
    (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Sort__);
  return (AutoOrganizationManager_ServantData_array *)System_Collections_Generic_List_object___ToArray(
                                                        v8,
                                                        (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
}


AutoOrganizationManager_ServantData_array *AutoOrganizationManager__AutoOrganizationServant(
        int32_t rarityBit,
        QuestRestrictionInfo_o *restrictionInfo,
        System_Int32_array *organizedServantIds,
        QuestAutoOrganizationAdjustEntity_array *questAutoOrganizationAdjustEntities,
        const MethodInfo *method)
{
  int64_t Master_object; // x0
  __int64 v9; // x1
  UserServantEntity_array *OrganizationList; // x25
  const MethodInfo *v11; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v13; // x24
  UserServantEntity_o *v14; // x29
  int32_t v15; // w27
  int64_t v16; // x28
  QuestRestrictionInfo_o *v17; // x23
  System_Int32_array *v18; // x21
  __int64 v19; // x19
  __int64 v20; // x26
  int32_t klass; // w19
  int32_t v22; // w19
  int32_t v23; // w19
  bool UniqueSvtRestriction; // w19
  System_Predicate_object__o *v25; // x19
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  Il2CppObject *v28; // x0
  __int128 v29; // q0
  Il2CppObject *v30; // x27
  const MethodInfo *v31; // x2
  int64_t v32; // x19
  float AdjustTotalRate; // s8
  __int128 v34; // q0
  int v35; // w8
  __int64 v36; // x27
  __int128 v37; // q0
  const MethodInfo *v38; // x2
  int64_t v39; // x19
  float v40; // s0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  CGThumbnailListItem_o *p_monitor; // [xsp+8h] [xbp-118h]
  DataMasterBase_TMaster__TEntity__PKType__o *v49; // [xsp+10h] [xbp-110h]
  System_Collections_Generic_List_object__o *v51; // [xsp+20h] [xbp-100h]
  Il2CppObject *object; // [xsp+28h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+30h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+50h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+70h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+90h] [xbp-90h]
  Il2CppObject *entity; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_4C22AEF & 1) == 0 )
  {
    sub_1C2D490(&AutoOrganizationManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Find__);
    sub_1C2D490(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&System_Predicate_AutoOrganizationManager_ServantData__TypeInfo);
    sub_1C2D490(&AutoOrganizationManager_ServantData_TypeInfo);
    sub_1C2D490(&Method_AutoOrganizationManager___c__DisplayClass18_0__AutoOrganizationServant_b__0__);
    sub_1C2D490(&AutoOrganizationManager___c__DisplayClass18_0_TypeInfo);
    byte_4C22AEF = 1;
  }
  entity = 0;
  object = (Il2CppObject *)sub_1C2D6DC(AutoOrganizationManager___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor(object, 0);
  v51 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v51,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_67;
  OrganizationList = UserServantMaster__getOrganizationList((UserServantMaster_o *)Master_object, 0);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
  v49 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !OrganizationList )
    goto LABEL_67;
  max_length = OrganizationList->max_length;
  if ( (int)max_length >= 1 )
  {
    v13 = 0;
    p_monitor = (CGThumbnailListItem_o *)&object[1].monitor;
    do
    {
      if ( v13 >= (unsigned int)max_length )
        sub_1C2D6F4(Master_object, v9, v11);
      v14 = OrganizationList->m_Items[v13];
      if ( !v14 )
        goto LABEL_36;
      Master_object = (int64_t)UserServantEntity__GetOverwriteStatus(OrganizationList->m_Items[v13], restrictionInfo, 0);
      if ( !Master_object )
        goto LABEL_67;
      v15 = *(_DWORD *)(Master_object + 24);
      v16 = Master_object;
      Master_object = (rarityBit != 31) & (unsigned __int8)(v15 == 0);
      if ( rarityBit != 31 && v15 == 0
        || (rarityBit & 1) == 0 && v15 == 1
        || (rarityBit & 2) == 0 && v15 == 2
        || (rarityBit & 4) == 0 && v15 == 3
        || (rarityBit & 8) == 0 && v15 == 4
        || (rarityBit & 0x10) == 0 && v15 == 5 )
      {
        goto LABEL_36;
      }
      v17 = restrictionInfo;
      v18 = organizedServantIds;
      v20 = *(_QWORD *)&v14->fields.svtId.fields.currentCryptoKey;
      v19 = *(_QWORD *)&v14->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v58.fields.currentCryptoKey = v20;
      *(_QWORD *)&v58.fields.fakeValue = v19;
      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v58, 0);
      if ( !object )
        goto LABEL_67;
      klass = Master_object;
      organizedServantIds = v18;
      LODWORD(object[1].klass) = Master_object;
      if ( v18 )
      {
        Master_object = System_Linq_Enumerable__Contains_int_(
                          (System_Collections_Generic_IEnumerable_TSource__o *)v18,
                          Master_object,
                          (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___);
        restrictionInfo = v17;
        if ( (Master_object & 1) != 0 )
          goto LABEL_36;
        klass = (int32_t)object[1].klass;
      }
      else
      {
        restrictionInfo = v17;
      }
      if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      Master_object = AutoOrganizationManager__IsFatigue(restrictionInfo, klass, v11);
      if ( (Master_object & 1) == 0 )
      {
        v22 = (int32_t)object[1].klass;
        if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
        Master_object = AutoOrganizationManager__IsAllOutBattleAlreadyUsed(restrictionInfo, v22, v11);
        if ( (Master_object & 1) == 0 )
        {
          v23 = (int32_t)object[1].klass;
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          Master_object = AutoOrganizationManager__IsDataLost(restrictionInfo, v23, v11);
          if ( (Master_object & 1) == 0 )
          {
            Master_object = UserServantEntity__IsLeave(v14, 0);
            if ( (Master_object & 1) == 0 )
            {
              Master_object = UserServantEntity__getQuestRestriction(v14, restrictionInfo, v15, 1, 0);
              if ( (Master_object & 1) == 0 )
              {
                UniqueSvtRestriction = UserServantEntity__getUniqueSvtRestriction(v14, restrictionInfo, 0);
                Master_object = UserServantEntity__IsUniqueIndividualityRestriction(v14, restrictionInfo, 0);
                if ( !UniqueSvtRestriction && (Master_object & 1) == 0 )
                {
                  v25 = (System_Predicate_object__o *)p_monitor->klass;
                  if ( !p_monitor->klass )
                  {
                    v25 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_AutoOrganizationManager_ServantData__TypeInfo);
                    System_Predicate_object____ctor(
                      v25,
                      object,
                      Method_AutoOrganizationManager___c__DisplayClass18_0__AutoOrganizationServant_b__0__,
                      0);
                    object[1].monitor = v25;
                    sub_1C2D434(p_monitor, (int32_t)v25, v26, v27);
                  }
                  Master_object = (int64_t)v51;
                  if ( !v51 )
                    goto LABEL_67;
                  v28 = System_Collections_Generic_List_object___Find(
                          v51,
                          (System_Predicate_T__o *)v25,
                          (const MethodInfo_378A1EC *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Find__);
                  if ( v28 )
                  {
                    v29 = *(_OWORD *)&v14->fields.id.fields.fakeValue;
                    v30 = v28;
                    *(_OWORD *)&v56.fields.currentCryptoKey = *(_OWORD *)&v14->fields.id.fields.currentCryptoKey;
                    *(_OWORD *)&v56.fields.fakeValue = v29;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    v55 = v56;
                    v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v55, 0);
                    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
                    AdjustTotalRate = AutoOrganizationManager__GetAdjustTotalRate(
                                        (System_Collections_Generic_IEnumerable_QuestAutoOrganizationAdjustEntity__o *)questAutoOrganizationAdjustEntities,
                                        v32,
                                        v31);
                    if ( (float)(AdjustTotalRate * (float)*(int *)(v16 + 20)) >= (float)(*(float *)&v30[4].monitor
                                                                                       * (float)*(int *)(v16 + 20)) )
                    {
                      v34 = *(_OWORD *)&v14->fields.id.fields.fakeValue;
                      *(_OWORD *)&v56.fields.currentCryptoKey = *(_OWORD *)&v14->fields.id.fields.currentCryptoKey;
                      *(_OWORD *)&v56.fields.fakeValue = v34;
                      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                      v54 = v56;
                      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v54, 0);
                      v30[1].monitor = (void *)Master_object;
                      HIDWORD(v30[2].klass) = *(_DWORD *)(v16 + 20);
                      v35 = *(_DWORD *)(v16 + 28);
                      *(float *)&v30[4].monitor = AdjustTotalRate;
                      LODWORD(v30[4].klass) = v35;
                    }
                  }
                  else
                  {
                    v36 = sub_1C2D6DC(AutoOrganizationManager_ServantData_TypeInfo);
                    System_Object___ctor((Il2CppObject *)v36, 0);
                    *(_DWORD *)(v36 + 16) = 0;
                    *(_QWORD *)(v36 + 44) = 0;
                    *(_DWORD *)(v36 + 64) = 0;
                    *(_BYTE *)(v36 + 68) = 0;
                    *(_QWORD *)(v36 + 72) = 0;
                    *(_QWORD *)(v36 + 24) = 0;
                    *(_QWORD *)(v36 + 32) = 0;
                    v37 = *(_OWORD *)&v14->fields.id.fields.fakeValue;
                    *(_OWORD *)&v56.fields.currentCryptoKey = *(_OWORD *)&v14->fields.id.fields.currentCryptoKey;
                    *(_OWORD *)&v56.fields.fakeValue = v37;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    v53 = v56;
                    *(_QWORD *)(v36 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(
                                              &v53,
                                              0);
                    *(_DWORD *)(v36 + 16) = object[1].klass;
                    *(_DWORD *)(v36 + 32) = UserServantEntity__getSvtClassId(v14, 0, 0, 0);
                    *(_DWORD *)(v36 + 36) = *(_DWORD *)(v16 + 20);
                    v39 = *(_QWORD *)(v36 + 24);
                    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
                    v40 = AutoOrganizationManager__GetAdjustTotalRate(
                            (System_Collections_Generic_IEnumerable_QuestAutoOrganizationAdjustEntity__o *)questAutoOrganizationAdjustEntities,
                            v39,
                            v38);
                    Master_object = (int64_t)v49;
                    *(float *)(v36 + 72) = v40;
                    if ( !v49 )
                      goto LABEL_67;
                    Master_object = DataMasterBase_object__object__int___TryGetEntity(
                                      v49,
                                      &entity,
                                      *(_DWORD *)(v36 + 16),
                                      (const MethodInfo_3387DE4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
                    if ( (Master_object & 1) != 0 )
                    {
                      *(_DWORD *)(v36 + 64) = *(_DWORD *)(v16 + 28);
                      Master_object = (int64_t)entity;
                      if ( !entity )
                        goto LABEL_67;
                      Master_object = ServantEntity__GetNotSamePartyKey((ServantEntity_o *)entity, 0);
                      *(_DWORD *)(v36 + 76) = Master_object;
                    }
                    items = v51->fields._items;
                    v44 = Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__;
                    ++v51->fields._version;
                    if ( !items )
                      goto LABEL_67;
                    size = v51->fields._size;
                    if ( (unsigned int)size >= LODWORD(items->max_length) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v51,
                        (Il2CppObject *)v36,
                        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v46 = &items->obj.klass + size;
                      v51->fields._size = size + 1;
                      v46[4] = (Il2CppClass *)v36;
                      sub_1C2D434((CGThumbnailListItem_o *)(v46 + 4), v36, v41, v42);
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
    while ( (__int64)++v13 < (int)max_length );
  }
  Master_object = (int64_t)v51;
  if ( !v51 )
LABEL_67:
    sub_1C2D6EC(Master_object, v9);
  return (AutoOrganizationManager_ServantData_array *)System_Collections_Generic_List_object___ToArray(
                                                        v51,
                                                        (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
}


void AutoOrganizationManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  AutoOrganizationManager_c *v2; // x0
  ListViewSort_o *autoOrganizationInfo; // x0

  if ( (byte_4C22AEC & 1) == 0 )
  {
    sub_1C2D490(&AutoOrganizationManager_TypeInfo);
    byte_4C22AEC = 1;
  }
  v2 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v2 = AutoOrganizationManager_TypeInfo;
  }
  autoOrganizationInfo = v2->static_fields->autoOrganizationInfo;
  if ( !autoOrganizationInfo
    || (ListViewSort__DeleteContinueData(autoOrganizationInfo, 0),
        (autoOrganizationInfo = AutoOrganizationManager_TypeInfo->static_fields->waveBattleAutoOrganizationInfo) == 0) )
  {
    sub_1C2D6EC(autoOrganizationInfo, v1);
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
  __int64 v7; // x1
  System_Func_T__TResult__o *v8; // x20
  System_Collections_Generic_IEnumerable_TResult__o *v9; // x0
  AutoOrganizationManager___c_c *v10; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x19
  System_Func_float__float__float__o *_9__26_1; // x20
  Il2CppObject *v13; // x21
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C22AF7 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Aggregate_float__float___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___);
    sub_1C2D490(&System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo);
    sub_1C2D490(&System_Func_float__float__float__TypeInfo);
    sub_1C2D490(&Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__26_1__);
    sub_1C2D490(&Method_AutoOrganizationManager___c__DisplayClass26_0__GetAdjustTotalRate_b__0__);
    sub_1C2D490(&AutoOrganizationManager___c__DisplayClass26_0_TypeInfo);
    sub_1C2D490(&AutoOrganizationManager___c_TypeInfo);
    byte_4C22AF7 = 1;
  }
  v5 = (Il2CppObject *)sub_1C2D6DC(AutoOrganizationManager___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  v5[1].klass = (Il2CppClass *)userSvtId;
  v8 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo);
  System_Func_object__float____ctor(
    v8,
    v5,
    Method_AutoOrganizationManager___c__DisplayClass26_0__GetAdjustTotalRate_b__0__,
    0);
  v9 = System_Linq_Enumerable__Select_object__float_(
         (System_Collections_Generic_IEnumerable_TSource__o *)questAutoOrganizationAdjustEntities,
         (System_Func_TSource__TResult__o *)v8,
         (const MethodInfo_3105968 *)Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___);
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
    _9__26_1 = (System_Func_float__float__float__o *)sub_1C2D6DC(System_Func_float__float__float__TypeInfo);
    System_Func_float__float__float____ctor(
      _9__26_1,
      v13,
      Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__26_1__,
      0);
    static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    static_fields->__9__26_1 = _9__26_1;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__26_1, (int32_t)_9__26_1, v15, v16);
  }
  return System_Linq_Enumerable__Aggregate_float__float_(
           v11,
           1.0,
           (System_Func_TAccumulate__TSource__TAccumulate__o *)_9__26_1,
           (const MethodInfo_30D75DC *)Method_System_Linq_Enumerable_Aggregate_float__float___);
}


float AutoOrganizationManager__GetAdjustTotalRate_33765704(
        System_Collections_Generic_IEnumerable_QuestAutoOrganizationAdjustEntity__o *questAutoOrganizationAdjustEntities,
        System_Int32_array *individualities,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Func_T__TResult__o *v10; // x20
  System_Collections_Generic_IEnumerable_TResult__o *v11; // x0
  AutoOrganizationManager___c_c *v12; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  System_Func_float__float__float__o *_9__27_1; // x20
  Il2CppObject *v15; // x21
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C22AF8 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Aggregate_float__float___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___);
    sub_1C2D490(&System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo);
    sub_1C2D490(&System_Func_float__float__float__TypeInfo);
    sub_1C2D490(&Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__27_1__);
    sub_1C2D490(&Method_AutoOrganizationManager___c__DisplayClass27_0__GetAdjustTotalRate_b__0__);
    sub_1C2D490(&AutoOrganizationManager___c__DisplayClass27_0_TypeInfo);
    sub_1C2D490(&AutoOrganizationManager___c_TypeInfo);
    byte_4C22AF8 = 1;
  }
  v5 = sub_1C2D6DC(AutoOrganizationManager___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_QWORD *)(v5 + 16) = individualities;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)individualities, v8, v9);
  v10 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo);
  System_Func_object__float____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_AutoOrganizationManager___c__DisplayClass27_0__GetAdjustTotalRate_b__0__,
    0);
  v11 = System_Linq_Enumerable__Select_object__float_(
          (System_Collections_Generic_IEnumerable_TSource__o *)questAutoOrganizationAdjustEntities,
          (System_Func_TSource__TResult__o *)v10,
          (const MethodInfo_3105968 *)Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___);
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
    _9__27_1 = (System_Func_float__float__float__o *)sub_1C2D6DC(System_Func_float__float__float__TypeInfo);
    System_Func_float__float__float____ctor(
      _9__27_1,
      v15,
      Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__27_1__,
      0);
    static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    static_fields->__9__27_1 = _9__27_1;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__27_1, (int32_t)_9__27_1, v17, v18);
  }
  return System_Linq_Enumerable__Aggregate_float__float_(
           v13,
           1.0,
           (System_Func_TAccumulate__TSource__TAccumulate__o *)_9__27_1,
           (const MethodInfo_30D75DC *)Method_System_Linq_Enumerable_Aggregate_float__float___);
}


System_Boolean_array *AutoOrganizationManager__GetAutoOrganizationSetting(
        ListViewSort_o *sort,
        int32_t *settingUnitNum,
        const MethodInfo *method)
{
  __int64 Filter_43628744; // x0
  __int64 v6; // x1
  __int64 v7; // x20
  unsigned __int64 v8; // x22
  __int64 v9; // x24
  __int64 v10; // x2
  unsigned __int64 v11; // x8
  int v12; // w9
  bool v13; // w8
  bool v14; // zf
  bool v15; // w9
  char v16; // w11
  unsigned int v17; // w8
  unsigned __int64 v18; // x9
  bool v19; // cf
  __int64 v20; // x8
  int v21; // w11
  int v22; // w13
  __int64 v23; // x9
  unsigned int v24; // w10
  unsigned __int64 v25; // x9
  unsigned __int64 v26; // x8
  __int64 v27; // x10
  __int64 v28; // x12
  unsigned __int64 v29; // x10
  int v30; // w14

  if ( (byte_4C22AED & 1) == 0 )
  {
    sub_1C2D490(&bool___TypeInfo);
    byte_4C22AED = 1;
  }
  Filter_43628744 = sub_1C2D538(bool___TypeInfo, 13);
  if ( !sort )
LABEL_38:
    sub_1C2D6EC(Filter_43628744, v6);
  v7 = Filter_43628744;
  v8 = 0;
  v9 = Filter_43628744 + 32;
  do
  {
    Filter_43628744 = ListViewSort__GetFilter_43628744(sort, v8, 0);
    if ( !v7 )
      goto LABEL_38;
    v11 = *(unsigned int *)(v7 + 24);
    if ( v8 >= v11 )
      goto LABEL_37;
    *(_BYTE *)(v9 + v8++) = Filter_43628744 & 1;
  }
  while ( v8 != 13 );
  if ( (unsigned int)v11 < 2 )
LABEL_37:
    sub_1C2D6F4(Filter_43628744, v6, v10);
  v12 = *(unsigned __int8 *)(v7 + 33);
  v13 = *(_BYTE *)(v7 + 32) == 0;
  v14 = v12 == 0;
  v15 = v12 != 0;
  v16 = v14;
  *(_BYTE *)(v7 + 32) = (*(_BYTE *)(v7 + 32) != 0) | v16;
  *(_BYTE *)(v7 + 33) = v15 || v13;
  Filter_43628744 = sub_1C2D538(bool___TypeInfo, 5);
  v17 = *(_DWORD *)(v7 + 24);
  v18 = 0;
  v19 = v17 >= 2;
  v20 = v17 - 2;
  if ( (_DWORD)v20 == 0 || !v19 )
    v20 = 0;
  LOBYTE(v21) = 1;
  do
  {
    if ( v20 == v18 )
      goto LABEL_37;
    if ( !Filter_43628744 )
      goto LABEL_38;
    if ( v18 >= *(unsigned int *)(Filter_43628744 + 24) )
      goto LABEL_37;
    v22 = *(unsigned __int8 *)(v7 + 34 + v18);
    *(_BYTE *)(Filter_43628744 + 32 + v18++) = v22;
    v21 = (unsigned __int8)v21 & (v22 == 0);
  }
  while ( v18 != 5 );
  if ( v21 )
  {
    v23 = 0;
    while ( v20 != v23 )
    {
      *(_BYTE *)(v7 + 34 + v23++) = 1;
      if ( v23 == 5 )
        goto LABEL_23;
    }
    goto LABEL_37;
  }
LABEL_23:
  Filter_43628744 = sub_1C2D538(bool___TypeInfo, 6);
  v24 = *(_DWORD *)(v7 + 24);
  v25 = 0;
  LODWORD(v26) = 0;
  v19 = v24 >= 7;
  v27 = v24 - 7;
  if ( (_DWORD)v27 != 0 && v19 )
    v28 = v27;
  else
    v28 = 0;
  do
  {
    if ( v28 == v25 )
      goto LABEL_37;
    if ( !Filter_43628744 )
      goto LABEL_38;
    v29 = *(unsigned int *)(Filter_43628744 + 24);
    if ( v25 >= v29 )
      goto LABEL_37;
    v30 = *(unsigned __int8 *)(v7 + 39 + v25);
    *(_BYTE *)(Filter_43628744 + 32 + v25++) = v30;
    if ( v30 )
      LODWORD(v26) = v25;
  }
  while ( v25 != 6 );
  if ( !(_DWORD)v26 )
  {
    v26 = 0;
    while ( v26 < v29 )
    {
      *(_BYTE *)(Filter_43628744 + 32 + v26++) = 1;
      if ( v26 == 6 )
        goto LABEL_36;
    }
    goto LABEL_37;
  }
LABEL_36:
  *settingUnitNum = v26;
  return (System_Boolean_array *)v7;
}


System_Collections_Generic_HashSet_int__o *AutoOrganizationManager__GetEventBonusIds(
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
  __int64 v11; // x2
  System_Collections_Generic_List_EventBonusFilterEntity__o *FilterList; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x24
  System_Collections_Generic_List_object__o *v14; // x26
  AutoOrganizationManager___c_c *v15; // x0
  System_Comparison_T__o *_9__22_0; // x25
  Il2CppObject *v17; // x21
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_object__o *v21; // x0
  System_Collections_Generic_List_object__o *v22; // x0
  int32_t v23; // w25
  int v24; // w8
  __int64 v25; // x26
  __int64 v26; // x26
  __int64 v27; // x21
  __int64 v28; // x27
  int v29; // w8
  __int64 v30; // x27
  int v31; // w24
  char v32; // w20
  __int64 v33; // x21
  SkillLvEntity_o *v34; // x28
  __int64 v35; // x21
  __int64 v36; // x29
  int32_t v37; // w21
  EventUpValInfo_o *v38; // x29
  __int64 v39; // x21
  __int64 v40; // x27
  int v41; // w8
  __int64 v42; // x26
  unsigned int v43; // w20
  __int64 v44; // x8
  ServantSkillMaster_o *v46; // [xsp+8h] [xbp-88h]
  Il2CppObject *v47; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_object__o *v48; // [xsp+18h] [xbp-78h]
  EventUpValSetupInfo_o *setupInfo; // [xsp+20h] [xbp-70h]
  EventUpValInfo_o *eventUpVallInfo; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_4C22AF3 & 1) == 0 )
  {
    sub_1C2D490(&System_Comparison_EventBonusFilterEntity__TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventBonusFilterMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C2D490(&EventUpValInfo_TypeInfo);
    sub_1C2D490(&EventUpValSetupInfo_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1C2D490(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SkillInfo___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_EventUpValInfo__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_SkillInfo__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_AutoOrganizationManager___c__GetEventBonusIds_b__22_0__);
    sub_1C2D490(&AutoOrganizationManager___c_TypeInfo);
    byte_4C22AF3 = 1;
  }
  eventUpVallInfo = 0;
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_363A780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_61;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Master_object, 0, 0, 0);
  if ( !EventValUpEventIdHash )
    return v3;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash;
  if ( EventValUpEventIdHash->fields._count < 1
    || !System_Collections_Generic_HashSet_int___Contains(
          EventValUpEventIdHash,
          eventId,
          (const MethodInfo_363AE74 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
    return v3;
  }
  v8 = System_Linq_Enumerable__ToArray_int_(
         v7,
         (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
  setupInfo = (EventUpValSetupInfo_o *)sub_1C2D6DC(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_41515380(setupInfo, v8, 0, 0, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v47 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
  v46 = (ServantSkillMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantSkillMaster___);
  v9 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SkillLvMaster___);
  v10 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  Master_object = sub_1C2D538(int___TypeInfo, 1);
  if ( !Master_object )
    goto LABEL_61;
  v5 = Master_object;
  if ( !*(_DWORD *)(Master_object + 24) )
    goto LABEL_62;
  *(_DWORD *)(Master_object + 32) = eventId;
  if ( !v10 )
LABEL_61:
    sub_1C2D6EC(Master_object, v5);
  FilterList = EventBonusFilterMaster__GetFilterList(
                 (EventBonusFilterMaster_o *)v10,
                 (System_Int32_array *)Master_object,
                 1,
                 1,
                 0);
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)v47;
  if ( FilterList )
  {
    v14 = (System_Collections_Generic_List_object__o *)FilterList;
    if ( FilterList->fields._size >= 1 )
    {
      v15 = AutoOrganizationManager___c_TypeInfo;
      if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
        v15 = AutoOrganizationManager___c_TypeInfo;
      }
      _9__22_0 = (System_Comparison_T__o *)v15->static_fields->__9__22_0;
      if ( !_9__22_0 )
      {
        if ( !v15->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v15);
          v15 = AutoOrganizationManager___c_TypeInfo;
        }
        v17 = (Il2CppObject *)v15->static_fields->__9;
        _9__22_0 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_EventBonusFilterEntity__TypeInfo);
        System_Comparison_object____ctor(
          _9__22_0,
          v17,
          Method_AutoOrganizationManager___c__GetEventBonusIds_b__22_0__,
          0);
        static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
        static_fields->__9__22_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__22_0;
        sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__22_0, (int32_t)_9__22_0, v19, v20);
      }
      System_Collections_Generic_List_object___Sort_58242632(
        v14,
        _9__22_0,
        (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
      v21 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventUpValInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v21,
        (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
      v22 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_SkillInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v22,
        (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
      if ( v14->fields._size >= 1 )
      {
        v23 = 0;
        v48 = v14;
        do
        {
          Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                     v14,
                                     v23,
                                     (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
          if ( !Master_object )
            goto LABEL_61;
          v24 = *(_DWORD *)(Master_object + 20);
          v25 = Master_object;
          if ( v24 == 2 )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
            if ( !Master_object )
              goto LABEL_61;
            Master_object = (__int64)EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                                       (EventBonusFilterGroupMemberMaster_o *)Master_object,
                                       *(_DWORD *)(v25 + 24),
                                       0);
            if ( !Master_object )
              goto LABEL_61;
            v41 = *(_DWORD *)(Master_object + 24);
            v42 = Master_object;
            if ( v41 >= 1 )
            {
              v43 = 0;
              while ( v43 < v41 )
              {
                v44 = *(_QWORD *)(v42 + 8LL * (int)v43 + 32);
                if ( !v44 || !v3 )
                  goto LABEL_61;
                Master_object = System_Collections_Generic_HashSet_int___Add(
                                  v3,
                                  *(_DWORD *)(v44 + 20),
                                  (const MethodInfo_363B984 *)Method_System_Collections_Generic_HashSet_int__Add__);
                v41 = *(_DWORD *)(v42 + 24);
                if ( (int)++v43 >= v41 )
                  goto LABEL_59;
              }
LABEL_62:
              sub_1C2D6F4(Master_object, v5, v11);
            }
          }
          else if ( v24 == 1 )
          {
            if ( !v13 )
              goto LABEL_61;
            Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                       v13,
                                       *(_DWORD *)(Master_object + 24),
                                       (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Master_object )
              goto LABEL_61;
            v26 = Master_object;
            v28 = *(_QWORD *)(Master_object + 16);
            v27 = *(_QWORD *)(Master_object + 24);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v51.fields.currentCryptoKey = v28;
            *(_QWORD *)&v51.fields.fakeValue = v27;
            v5 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v51, 0);
            Master_object = (__int64)v46;
            if ( !v46 )
              goto LABEL_61;
            Master_object = (__int64)ServantSkillMaster__getServantSkillList(v46, v5, 0);
            if ( !Master_object )
              goto LABEL_61;
            v29 = *(_DWORD *)(Master_object + 24);
            v30 = Master_object;
            if ( v29 >= 1 )
            {
              v31 = 0;
              v32 = 0;
              do
              {
                if ( v31 >= (unsigned int)v29 )
                  goto LABEL_62;
                v33 = *(_QWORD *)(v30 + 8LL * v31 + 32);
                if ( !v33 || !v9 )
                  goto LABEL_61;
                Master_object = (__int64)SkillLvMaster__GetEntity((SkillLvMaster_o *)v9, *(_DWORD *)(v33 + 28), 1, 0);
                if ( Master_object && !*(_DWORD *)(v33 + 44) )
                {
                  v34 = (SkillLvEntity_o *)Master_object;
                  v35 = *(_QWORD *)(v26 + 16);
                  v36 = *(_QWORD *)(v26 + 24);
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v52.fields.currentCryptoKey = v35;
                  *(_QWORD *)&v52.fields.fakeValue = v36;
                  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v52, 0);
                  v38 = (EventUpValInfo_o *)sub_1C2D6DC(EventUpValInfo_TypeInfo);
                  EventUpValInfo___ctor(v38, setupInfo, v37, 1, 1, 0, 0);
                  eventUpVallInfo = v38;
                  Master_object = SkillLvEntity__getEventUpVal_42665704(v34, &eventUpVallInfo, 1, 1, 0, 1, 0, 0);
                  v32 |= Master_object;
                }
                v29 = *(_DWORD *)(v30 + 24);
                ++v31;
              }
              while ( v31 < v29 );
              v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)v47;
              if ( (v32 & 1) != 0 )
              {
                v40 = *(_QWORD *)(v26 + 16);
                v39 = *(_QWORD *)(v26 + 24);
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v53.fields.currentCryptoKey = v40;
                *(_QWORD *)&v53.fields.fakeValue = v39;
                Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v53, 0);
                if ( !v3 )
                  goto LABEL_61;
                System_Collections_Generic_HashSet_int___Add(
                  v3,
                  Master_object,
                  (const MethodInfo_363B984 *)Method_System_Collections_Generic_HashSet_int__Add__);
              }
            }
          }
LABEL_59:
          v14 = v48;
          ++v23;
        }
        while ( v23 < v48->fields._size );
      }
    }
  }
  return v3;
}


int32_t AutoOrganizationManager__GetRarityBit(System_Boolean_array *rarityFlag, const MethodInfo *method)
{
  __int64 v2; // x2
  unsigned __int64 max_length_low; // x10
  unsigned __int64 v5; // x9
  __int64 v6; // x0
  bool *m_Items; // x8

  if ( !rarityFlag )
    sub_1C2D6EC(0, method);
  max_length_low = LODWORD(rarityFlag->max_length);
  v5 = 0;
  v6 = 0;
  m_Items = rarityFlag->m_Items;
  do
  {
    if ( (__int64)v5 <= (int)max_length_low )
    {
      if ( v5 >= max_length_low )
        sub_1C2D6F4(v6, method, v2);
      if ( m_Items[v5] )
        v6 = (1 << v5) | (unsigned int)v6;
    }
    ++v5;
  }
  while ( v5 != 5 );
  return v6;
}


System_Boolean_array *AutoOrganizationManager__GetWaveBattleAutoOrganizationSetting(
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 Filter_43628792; // x0
  __int64 v4; // x1
  __int64 v5; // x19
  unsigned __int64 v6; // x21
  __int64 v7; // x23
  __int64 v8; // x2
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

  if ( (byte_4C22AEE & 1) == 0 )
  {
    sub_1C2D490(&bool___TypeInfo);
    byte_4C22AEE = 1;
  }
  Filter_43628792 = sub_1C2D538(bool___TypeInfo, 7);
  if ( !sort )
LABEL_25:
    sub_1C2D6EC(Filter_43628792, v4);
  v5 = Filter_43628792;
  v6 = 0;
  v7 = Filter_43628792 + 32;
  do
  {
    Filter_43628792 = ListViewSort__GetFilter_43628792(sort, v6, 0);
    if ( !v5 )
      goto LABEL_25;
    v9 = *(unsigned int *)(v5 + 24);
    if ( v6 >= v9 )
      goto LABEL_24;
    *(_BYTE *)(v7 + v6++) = Filter_43628792 & 1;
  }
  while ( v6 != 7 );
  if ( (unsigned int)v9 < 2 )
LABEL_24:
    sub_1C2D6F4(Filter_43628792, v4, v8);
  v10 = *(unsigned __int8 *)(v5 + 33);
  v11 = *(_BYTE *)(v5 + 32) == 0;
  v12 = v10 == 0;
  v13 = v10 != 0;
  v14 = v12;
  *(_BYTE *)(v5 + 32) = (*(_BYTE *)(v5 + 32) != 0) | v14;
  *(_BYTE *)(v5 + 33) = v13 || v11;
  Filter_43628792 = sub_1C2D538(bool___TypeInfo, 5);
  v15 = *(_DWORD *)(v5 + 24);
  v16 = 0;
  v17 = v15 >= 2;
  v18 = v15 - 2;
  if ( (_DWORD)v18 == 0 || !v17 )
    v18 = 0;
  LOBYTE(v19) = 1;
  do
  {
    if ( v18 == v16 )
      goto LABEL_24;
    if ( !Filter_43628792 )
      goto LABEL_25;
    if ( v16 >= *(unsigned int *)(Filter_43628792 + 24) )
      goto LABEL_24;
    v20 = *(unsigned __int8 *)(v5 + 34 + v16);
    *(_BYTE *)(Filter_43628792 + 32 + v16++) = v20;
    v19 = (unsigned __int8)v19 & (v20 == 0);
  }
  while ( v16 != 5 );
  if ( v19 )
  {
    v21 = 0;
    while ( v18 != v21 )
    {
      *(_BYTE *)(v5 + 34 + v21++) = 1;
      if ( v21 == 5 )
        return (System_Boolean_array *)v5;
    }
    goto LABEL_24;
  }
  return (System_Boolean_array *)v5;
}


void AutoOrganizationManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  AutoOrganizationManager_c *v2; // x0
  ListViewSort_o *autoOrganizationInfo; // x0

  if ( (byte_4C22AEB & 1) == 0 )
  {
    sub_1C2D490(&AutoOrganizationManager_TypeInfo);
    byte_4C22AEB = 1;
  }
  v2 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v2 = AutoOrganizationManager_TypeInfo;
  }
  autoOrganizationInfo = v2->static_fields->autoOrganizationInfo;
  if ( !autoOrganizationInfo
    || (ListViewSort__InitLoad(autoOrganizationInfo, 0),
        (autoOrganizationInfo = AutoOrganizationManager_TypeInfo->static_fields->waveBattleAutoOrganizationInfo) == 0) )
  {
    sub_1C2D6EC(autoOrganizationInfo, v1);
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
  __int64 v7; // x1

  if ( (byte_4C22AF5 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C22AF5 = 1;
  }
  if ( !restrictionInfo || !restrictionInfo->fields.isAllOutBattle )
    return 0;
  allOutBattleGroupNo = restrictionInfo->fields.allOutBattleGroupNo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( !Master_object )
    sub_1C2D6EC(0, v7);
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
  __int64 v5; // x1
  Il2CppObject *Master_object; // x21
  void *IsRestart; // x0
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C22AF6 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C22AF6 = 1;
  }
  entity = 0;
  if ( !restrictionInfo || !restrictionInfo->fields.isDataLostBattle )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
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
    sub_1C2D6EC(IsRestart, v5);
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
  __int64 v6; // x1
  int64_t v7; // x19
  bool isRecover; // [xsp+4h] [xbp-2Ch] BYREF
  int64_t recoverAt; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C22AF4 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_UserEventServantFatigueMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C22AF4 = 1;
  }
  recoverAt = 0;
  isRecover = 0;
  if ( !restrictionInfo || !restrictionInfo->fields.isFatigure )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserEventServantFatigueMaster___);
  if ( !Master_object )
    sub_1C2D6EC(0, v6);
  if ( !UserEventServantFatigueMaster__GetFatigueInfo(
          (UserEventServantFatigueMaster_o *)Master_object,
          &recoverAt,
          &isRecover,
          restrictionInfo->fields.eventId,
          svtId,
          0) )
    return 0;
  v7 = recoverAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return v7 > NetworkManager__getTime(0);
}


AutoOrganizationManager_ServantData_array *AutoOrganizationManager__SortClassRelation(
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
  const MethodInfo *v21; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4C22AF0 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__get_Current__);
    sub_1C2D490(&System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___77964680);
    sub_1C2D490(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
    sub_1C2D490(&Method_AutoOrganizationManager___c__SortClassRelation_b__19_0__);
    sub_1C2D490(&AutoOrganizationManager___c_TypeInfo);
    byte_4C22AF0 = 1;
  }
  entity = 0;
  memset(&v25, 0, sizeof(v25));
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor_58233976(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)dataList,
    (const MethodInfo_3789478 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___77964680);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantClassMaster___);
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( enemyClassId )
  {
    if ( !Master_object )
      goto LABEL_32;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &entity,
                                      enemyClassId,
                                      (const MethodInfo_3387DE4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_32;
      enemyClassId = HIDWORD(entity[3].monitor);
    }
  }
  if ( !v5 )
LABEL_32:
    sub_1C2D6EC(Master_object, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    v5,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v25,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__);
    if ( !v9 )
      break;
    current = v25.fields._current;
    if ( !v25.fields._current )
      sub_1C2D6EC(v9, v10);
    if ( !v8 )
      sub_1C2D6EC(v9, v10);
    klass = (int32_t)v25.fields._current[2].klass;
    v13 = DataMasterBase_object__object__int___TryGetEntity(
            v8,
            &entity,
            klass,
            (const MethodInfo_3387DE4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( v13 )
    {
      if ( !entity )
        sub_1C2D6EC(v13, v14);
      klass = HIDWORD(entity[3].monitor);
    }
    if ( enemyClassId )
      Rate = ClassRelationMaster__getRate(klass, enemyClassId, 0);
    else
      Rate = 1.0;
    *(float *)&current[3].klass = *(float *)&current[4].monitor * (float)(Rate * (float)SHIDWORD(current[2].klass));
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__);
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
    _9__19_0 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    System_Func_object__float____ctor(_9__19_0, v18, Method_AutoOrganizationManager___c__SortClassRelation_b__19_0__, 0);
    static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = (struct System_Func_AutoOrganizationManager_ServantData__float__o *)_9__19_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__19_0, (int32_t)_9__19_0, v20, v21);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__float_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v5,
                                                               (System_Func_TSource__TKey__o *)_9__19_0,
                                                               (const MethodInfo_30FE768 *)Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___);
  return (AutoOrganizationManager_ServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                                        v22,
                                                        (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___);
}


AutoOrganizationManager_ServantData_array *AutoOrganizationManager__SortServant(
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
  const MethodInfo *v23; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v24; // x0
  AutoOrganizationManager___c_c *v25; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v26; // x19
  System_Func_object__int__o *_9__20_1; // x20
  Il2CppObject *v28; // x21
  struct AutoOrganizationManager___c_StaticFields *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v32; // x0
  AutoOrganizationManager___c_c *v33; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v34; // x19
  System_Func_T__TResult__o *_9__20_2; // x20
  Il2CppObject *v36; // x21
  struct AutoOrganizationManager___c_StaticFields *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v40; // x0
  AutoOrganizationManager___c_c *v41; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v42; // x19
  System_Func_object__int__o *_9__20_3; // x20
  Il2CppObject *v44; // x21
  struct AutoOrganizationManager___c_StaticFields *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v48; // x0
  AutoOrganizationManager___c_c *v49; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v50; // x19
  System_Func_object__long__o *_9__20_4; // x20
  Il2CppObject *v52; // x21
  struct AutoOrganizationManager___c_StaticFields *v53; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+20h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4C22AF1 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__long___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__float___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__get_Current__);
    sub_1C2D490(&System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    sub_1C2D490(&System_Func_AutoOrganizationManager_ServantData__long__TypeInfo);
    sub_1C2D490(&System_Func_AutoOrganizationManager_ServantData__int__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___77964680);
    sub_1C2D490(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
    sub_1C2D490(&Method_AutoOrganizationManager___c__SortServant_b__20_0__);
    sub_1C2D490(&Method_AutoOrganizationManager___c__SortServant_b__20_1__);
    sub_1C2D490(&Method_AutoOrganizationManager___c__SortServant_b__20_2__);
    sub_1C2D490(&Method_AutoOrganizationManager___c__SortServant_b__20_3__);
    sub_1C2D490(&Method_AutoOrganizationManager___c__SortServant_b__20_4__);
    sub_1C2D490(&AutoOrganizationManager___c_TypeInfo);
    byte_4C22AF1 = 1;
  }
  entity = 0;
  memset(&v59, 0, sizeof(v59));
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor_58233976(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)dataList,
    (const MethodInfo_3789478 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___77964680);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantClassMaster___);
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( enemyClassId )
  {
    if ( !Master_object )
      goto LABEL_56;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &entity,
                                      enemyClassId,
                                      (const MethodInfo_3387DE4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_56;
      enemyClassId = HIDWORD(entity[3].monitor);
    }
  }
  if ( !v5 )
LABEL_56:
    sub_1C2D6EC(Master_object, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v58,
    v5,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__);
  v59 = v58;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v59,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__);
    if ( !v9 )
      break;
    current = v59.fields._current;
    if ( !v59.fields._current )
      sub_1C2D6EC(v9, v10);
    if ( !v8 )
      sub_1C2D6EC(v9, v10);
    klass = (int32_t)v59.fields._current[2].klass;
    v13 = DataMasterBase_object__object__int___TryGetEntity(
            v8,
            &entity,
            klass,
            (const MethodInfo_3387DE4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( v13 )
    {
      if ( !entity )
        sub_1C2D6EC(v13, v14);
      klass = HIDWORD(entity[3].monitor);
    }
    if ( enemyClassId )
    {
      Rate = ClassRelationMaster__getRate(klass, enemyClassId, 0);
      v16 = ClassRelationMaster__getRate(enemyClassId, klass, 0);
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
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__);
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
    _9__20_0 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    System_Func_object__float____ctor(_9__20_0, v20, Method_AutoOrganizationManager___c__SortServant_b__20_0__, 0);
    static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    static_fields->__9__20_0 = (struct System_Func_AutoOrganizationManager_ServantData__float__o *)_9__20_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__20_0, (int32_t)_9__20_0, v22, v23);
  }
  v24 = System_Linq_Enumerable__OrderByDescending_object__float_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v5,
          (System_Func_TSource__TKey__o *)_9__20_0,
          (const MethodInfo_30FE768 *)Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___);
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
    _9__20_1 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_AutoOrganizationManager_ServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__20_1, v28, Method_AutoOrganizationManager___c__SortServant_b__20_1__, 0);
    v29 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v29->__9__20_1 = (struct System_Func_AutoOrganizationManager_ServantData__int__o *)_9__20_1;
    sub_1C2D434((CGThumbnailListItem_o *)&v29->__9__20_1, (int32_t)_9__20_1, v30, v31);
  }
  v32 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v26,
          (System_Func_TSource__TKey__o *)_9__20_1,
          (const MethodInfo_310D87C *)Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__int___);
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
    _9__20_2 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    System_Func_object__float____ctor(_9__20_2, v36, Method_AutoOrganizationManager___c__SortServant_b__20_2__, 0);
    v37 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v37->__9__20_2 = (struct System_Func_AutoOrganizationManager_ServantData__float__o *)_9__20_2;
    sub_1C2D434((CGThumbnailListItem_o *)&v37->__9__20_2, (int32_t)_9__20_2, v38, v39);
  }
  v40 = System_Linq_Enumerable__ThenByDescending_object__float_(
          v34,
          (System_Func_TSource__TKey__o *)_9__20_2,
          (const MethodInfo_310DA14 *)Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__float___);
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
    _9__20_3 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_AutoOrganizationManager_ServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__20_3, v44, Method_AutoOrganizationManager___c__SortServant_b__20_3__, 0);
    v45 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v45->__9__20_3 = (struct System_Func_AutoOrganizationManager_ServantData__int__o *)_9__20_3;
    sub_1C2D434((CGThumbnailListItem_o *)&v45->__9__20_3, (int32_t)_9__20_3, v46, v47);
  }
  v48 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v42,
          (System_Func_TSource__TKey__o *)_9__20_3,
          (const MethodInfo_310D87C *)Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__int___);
  v49 = AutoOrganizationManager___c_TypeInfo;
  v50 = v48;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v49 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__20_4 = (System_Func_object__long__o *)v49->static_fields->__9__20_4;
  if ( !_9__20_4 )
  {
    if ( !v49->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v49);
      v49 = AutoOrganizationManager___c_TypeInfo;
    }
    v52 = (Il2CppObject *)v49->static_fields->__9;
    _9__20_4 = (System_Func_object__long__o *)sub_1C2D6DC(System_Func_AutoOrganizationManager_ServantData__long__TypeInfo);
    System_Func_object__long____ctor(_9__20_4, v52, Method_AutoOrganizationManager___c__SortServant_b__20_4__, 0);
    v53 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v53->__9__20_4 = (struct System_Func_AutoOrganizationManager_ServantData__long__o *)_9__20_4;
    sub_1C2D434((CGThumbnailListItem_o *)&v53->__9__20_4, (int32_t)_9__20_4, v54, v55);
  }
  v56 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenByDescending_object__long_(
                                                               v50,
                                                               (System_Func_TSource__TKey__o *)_9__20_4,
                                                               (const MethodInfo_310D948 *)Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__long___);
  return (AutoOrganizationManager_ServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                                        v56,
                                                        (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___);
}


ListViewSort_o *AutoOrganizationManager__get_SortInfo(const MethodInfo *method)
{
  AutoOrganizationManager_c *v1; // x0

  if ( (byte_4C22AE9 & 1) == 0 )
  {
    sub_1C2D490(&AutoOrganizationManager_TypeInfo);
    byte_4C22AE9 = 1;
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

  if ( (byte_4C22AEA & 1) == 0 )
  {
    sub_1C2D490(&AutoOrganizationManager_TypeInfo);
    byte_4C22AEA = 1;
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

  if ( (byte_4C22AFA & 1) == 0 )
  {
    sub_1C2D490(&AutoOrganizationManager___c_TypeInfo);
    byte_4C22AFA = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(AutoOrganizationManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AutoOrganizationManager___c_TypeInfo->static_fields->__9 = (struct AutoOrganizationManager___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)AutoOrganizationManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C2D6EC(this, a);
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
    sub_1C2D6EC(this, a);
  return b->fields.priority - a->fields.priority;
}


float AutoOrganizationManager___c___SortClassRelation_b__19_0(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1C2D6EC(this, 0);
  return d->fields.relationNum;
}


float AutoOrganizationManager___c___SortServant_b__20_0(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1C2D6EC(this, 0);
  return d->fields.relationAtk;
}


int32_t AutoOrganizationManager___c___SortServant_b__20_1(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1C2D6EC(this, 0);
  return d->fields.treasureDeviceLv;
}


float AutoOrganizationManager___c___SortServant_b__20_2(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1C2D6EC(this, 0);
  return d->fields.relationDef;
}


int32_t AutoOrganizationManager___c___SortServant_b__20_3(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1C2D6EC(this, 0);
  return d->fields.svtId;
}


int64_t AutoOrganizationManager___c___SortServant_b__20_4(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
  return QuestAutoOrganizationAdjustEntity__GetAdjustRate_42218752(entity, this->fields.individualities, 0);
}