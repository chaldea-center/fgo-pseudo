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

  if ( (byte_4C52538 & 1) == 0 )
  {
    sub_1C3E564(&AutoOrganizationManager_TypeInfo);
    sub_1C3E564(&ListViewSort_TypeInfo);
    sub_1C3E564(&StringLiteral_2494/*"AutoOrganization"*/);
    sub_1C3E564(&StringLiteral_2500/*"AutoOrganizationWaveBattle"*/);
    byte_4C52538 = 1;
  }
  *(_QWORD *)AutoOrganizationManager_TypeInfo->static_fields = 0x296B0000296ALL;
  v1 = (ListViewSort_o *)sub_1C3E7B0(ListViewSort_TypeInfo);
  ListViewSort___ctor_43894048(v1, (System_String_o *)StringLiteral_2494/*"AutoOrganization"*/, 3, 0, 0);
  static_fields = AutoOrganizationManager_TypeInfo->static_fields;
  static_fields->autoOrganizationInfo = v1;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->autoOrganizationInfo, (int32_t)v1, v3, v4);
  v5 = (ListViewSort_o *)sub_1C3E7B0(ListViewSort_TypeInfo);
  ListViewSort___ctor_43894048(v5, (System_String_o *)StringLiteral_2500/*"AutoOrganizationWaveBattle"*/, 3, 0, 0);
  v6 = AutoOrganizationManager_TypeInfo->static_fields;
  v6->waveBattleAutoOrganizationInfo = v5;
  sub_1C3E508((CGThumbnailListItem_o *)&v6->waveBattleAutoOrganizationInfo, (int32_t)v5, v7, v8);
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

  if ( (byte_4C52531 & 1) == 0 )
  {
    sub_1C3E564(&AutoOrganizationManager_TypeInfo);
    sub_1C3E564(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
    sub_1C3E564(&System_Comparison_AutoOrganizationManager_ServantData__TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1C3E564(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C3E564(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Sort__);
    sub_1C3E564(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C3E564(&ServantBonusFilterSelectMenu_TypeInfo);
    sub_1C3E564(&AutoOrganizationManager_ServantData_TypeInfo);
    sub_1C3E564(&Method_AutoOrganizationManager___c__AutoOrganizationEquip_b__21_0__);
    sub_1C3E564(&AutoOrganizationManager___c_TypeInfo);
    byte_4C52531 = 1;
  }
  entity = 0;
  v79 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_98;
  ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)Master_object, 0);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
  v76 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantMaster___);
  v9 = (System_Collections_Generic_HashSet_int__o *)sub_1C3E7B0(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v9,
    (const MethodInfo_3665EC4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  v10 = (System_Collections_Generic_HashSet_int__o *)sub_1C3E7B0(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v10,
    (const MethodInfo_3665EC4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
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
      v15 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
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
          v18 = System_String__Concat_63636468(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v17, 0);
          if ( UnityEngine_PlayerPrefs__HasKey(v18, 0) )
          {
            v19 = System_Int32__ToString((int32_t)&v79, 0);
            v20 = System_String__Concat_63636468(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v19, 0);
            Master_object = (void *)UnityEngine_PlayerPrefs__GetInt_71299808(v20, 0);
            if ( !v10 )
              goto LABEL_98;
            System_Collections_Generic_HashSet_int___Add(
              v10,
              (int32_t)Master_object,
              (const MethodInfo_36670C8 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
          v21 = System_Int32__ToString((int32_t)&v79, 0);
          v22 = System_String__Concat_63636468(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v21, 0);
          Master_object = (void *)UnityEngine_PlayerPrefs__HasKey(v22, 0);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            v23 = System_Int32__ToString((int32_t)&v79, 0);
            v24 = System_String__Concat_63636468(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v23, 0);
            Master_object = (void *)UnityEngine_PlayerPrefs__GetInt_71299808(v24, 0);
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
            sub_1C3E7C8(Master_object, v6);
          v28 = *((_QWORD *)v26 + (int)v27 + 4);
          if ( !v28 || !v10 )
            break;
          Master_object = (void *)System_Collections_Generic_HashSet_int___Add(
                                    v10,
                                    *(_DWORD *)(v28 + 20),
                                    (const MethodInfo_36670C8 *)Method_System_Collections_Generic_HashSet_int__Add__);
          v25 = *((_DWORD *)v26 + 6);
          if ( (int)++v27 >= v25 )
            goto LABEL_31;
        }
LABEL_98:
        sub_1C3E7C0(Master_object, v6);
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
        v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v81, 0);
        Master_object = (void *)System_Collections_Generic_List_int___Contains(
                                  organizedEquipIdList,
                                  v34,
                                  (const MethodInfo_37987B4 *)Method_System_Collections_Generic_List_int__Contains__);
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
        v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v82, 0);
        Master_object = (void *)System_Collections_Generic_HashSet_int___Contains(
                                  v10,
                                  v37,
                                  (const MethodInfo_36665B8 *)Method_System_Collections_Generic_HashSet_int__Contains__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
          goto LABEL_89;
      }
      Master_object = (void *)UserServantEntity__IsFriendShipSvtEquip(v31, 0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
        goto LABEL_89;
      v38 = sub_1C3E7B0(AutoOrganizationManager_ServantData_TypeInfo);
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
      *(_QWORD *)(v38 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v77, 0);
      v41 = *(_QWORD *)&v31->fields.svtId.fields.currentCryptoKey;
      v40 = *(_QWORD *)&v31->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v83.fields.currentCryptoKey = v41;
      *(_QWORD *)&v83.fields.fakeValue = v40;
      v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v83, 0);
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
                                (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
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
             (const MethodInfo_36665B8 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
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
        Master_object = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v84, 0);
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
                                  (const MethodInfo_3116AFC *)Method_System_Linq_Enumerable_Contains_int___);
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
                                    (const MethodInfo_3116AFC *)Method_System_Linq_Enumerable_Contains_int___);
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
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          (Il2CppObject *)v38,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
        if ( !organizedEquipIdList )
          goto LABEL_89;
      }
      else
      {
        v60 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v60[4] = (Il2CppClass *)v38;
        sub_1C3E508((CGThumbnailListItem_o *)(v60 + 4), v38, v50, v51);
        if ( !organizedEquipIdList )
          goto LABEL_89;
      }
      v62 = *(_QWORD *)&v31->fields.svtId.fields.currentCryptoKey;
      v61 = *(_QWORD *)&v31->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v85.fields.currentCryptoKey = v62;
      *(_QWORD *)&v85.fields.fakeValue = v61;
      v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v85, 0);
      Master_object = (void *)System_Collections_Generic_List_int___Contains(
                                organizedEquipIdList,
                                v63,
                                (const MethodInfo_37987B4 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)Master_object & 1) == 0 )
      {
        v65 = *(_QWORD *)&v31->fields.svtId.fields.currentCryptoKey;
        v64 = *(_QWORD *)&v31->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v86.fields.currentCryptoKey = v65;
        *(_QWORD *)&v86.fields.fakeValue = v64;
        Master_object = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v86, 0);
        v66 = organizedEquipIdList->fields._items;
        v67 = Method_System_Collections_Generic_List_int__Add__;
        ++organizedEquipIdList->fields._version;
        if ( !v66 )
          goto LABEL_98;
        v68 = organizedEquipIdList->fields._size;
        v6 = (const MethodInfo *)(unsigned int)Master_object;
        if ( (unsigned int)v68 >= LODWORD(v66->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            organizedEquipIdList,
            (int32_t)Master_object,
            *(const MethodInfo_379843C **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
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
    v69 = (System_Comparison_T__o *)sub_1C3E7B0(System_Comparison_AutoOrganizationManager_ServantData__TypeInfo);
    System_Comparison_object____ctor(v69, v70, Method_AutoOrganizationManager___c__AutoOrganizationEquip_b__21_0__, 0);
    v71 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v71->__9__21_0 = (struct System_Comparison_AutoOrganizationManager_ServantData__o *)v69;
    sub_1C3E508((CGThumbnailListItem_o *)&v71->__9__21_0, (int32_t)v69, v72, v73);
  }
  if ( !v8 )
    goto LABEL_98;
  System_Collections_Generic_List_object___Sort_58421028(
    v8,
    v69,
    (const MethodInfo_37B6F24 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Sort__);
  return (AutoOrganizationManager_ServantData_array *)System_Collections_Generic_List_object___ToArray(
                                                        v8,
                                                        (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
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
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v12; // x24
  UserServantEntity_o *v13; // x29
  int32_t v14; // w27
  int64_t v15; // x28
  QuestRestrictionInfo_o *v16; // x23
  System_Int32_array *v17; // x21
  __int64 v18; // x19
  __int64 v19; // x26
  const MethodInfo *v20; // x2
  int32_t klass; // w19
  const MethodInfo *v22; // x2
  int32_t v23; // w19
  const MethodInfo *v24; // x2
  int32_t v25; // w19
  bool UniqueSvtRestriction; // w19
  System_Predicate_object__o *v27; // x19
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  Il2CppObject *v30; // x0
  __int128 v31; // q0
  Il2CppObject *v32; // x27
  const MethodInfo *v33; // x2
  int64_t v34; // x19
  float AdjustTotalRate; // s8
  __int128 v36; // q0
  int v37; // w8
  __int64 v38; // x27
  __int128 v39; // q0
  const MethodInfo *v40; // x2
  int64_t v41; // x19
  float v42; // s0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  CGThumbnailListItem_o *p_monitor; // [xsp+8h] [xbp-118h]
  DataMasterBase_TMaster__TEntity__PKType__o *v51; // [xsp+10h] [xbp-110h]
  System_Collections_Generic_List_object__o *v53; // [xsp+20h] [xbp-100h]
  Il2CppObject *object; // [xsp+28h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+30h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+50h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+70h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+90h] [xbp-90h]
  Il2CppObject *entity; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_4C5252E & 1) == 0 )
  {
    sub_1C3E564(&AutoOrganizationManager_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C3E564(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Find__);
    sub_1C3E564(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C3E564(&System_Predicate_AutoOrganizationManager_ServantData__TypeInfo);
    sub_1C3E564(&AutoOrganizationManager_ServantData_TypeInfo);
    sub_1C3E564(&Method_AutoOrganizationManager___c__DisplayClass18_0__AutoOrganizationServant_b__0__);
    sub_1C3E564(&AutoOrganizationManager___c__DisplayClass18_0_TypeInfo);
    byte_4C5252E = 1;
  }
  entity = 0;
  object = (Il2CppObject *)sub_1C3E7B0(AutoOrganizationManager___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor(object, 0);
  v53 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v53,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_67;
  OrganizationList = UserServantMaster__getOrganizationList((UserServantMaster_o *)Master_object, 0);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantMaster___);
  v51 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !OrganizationList )
    goto LABEL_67;
  max_length = OrganizationList->max_length;
  if ( (int)max_length >= 1 )
  {
    v12 = 0;
    p_monitor = (CGThumbnailListItem_o *)&object[1].monitor;
    do
    {
      if ( v12 >= (unsigned int)max_length )
        sub_1C3E7C8(Master_object, v9);
      v13 = OrganizationList->m_Items[v12];
      if ( !v13 )
        goto LABEL_36;
      Master_object = (int64_t)UserServantEntity__GetOverwriteStatus(OrganizationList->m_Items[v12], restrictionInfo, 0);
      if ( !Master_object )
        goto LABEL_67;
      v14 = *(_DWORD *)(Master_object + 24);
      v15 = Master_object;
      Master_object = (rarityBit != 31) & (unsigned __int8)(v14 == 0);
      if ( rarityBit != 31 && v14 == 0
        || (rarityBit & 1) == 0 && v14 == 1
        || (rarityBit & 2) == 0 && v14 == 2
        || (rarityBit & 4) == 0 && v14 == 3
        || (rarityBit & 8) == 0 && v14 == 4
        || (rarityBit & 0x10) == 0 && v14 == 5 )
      {
        goto LABEL_36;
      }
      v16 = restrictionInfo;
      v17 = organizedServantIds;
      v19 = *(_QWORD *)&v13->fields.svtId.fields.currentCryptoKey;
      v18 = *(_QWORD *)&v13->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v60.fields.currentCryptoKey = v19;
      *(_QWORD *)&v60.fields.fakeValue = v18;
      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v60, 0);
      if ( !object )
        goto LABEL_67;
      klass = Master_object;
      organizedServantIds = v17;
      LODWORD(object[1].klass) = Master_object;
      if ( v17 )
      {
        Master_object = System_Linq_Enumerable__Contains_int_(
                          (System_Collections_Generic_IEnumerable_TSource__o *)v17,
                          Master_object,
                          (const MethodInfo_3116AFC *)Method_System_Linq_Enumerable_Contains_int___);
        restrictionInfo = v16;
        if ( (Master_object & 1) != 0 )
          goto LABEL_36;
        klass = (int32_t)object[1].klass;
      }
      else
      {
        restrictionInfo = v16;
      }
      if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      Master_object = AutoOrganizationManager__IsFatigue(restrictionInfo, klass, v20);
      if ( (Master_object & 1) == 0 )
      {
        v23 = (int32_t)object[1].klass;
        if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
        Master_object = AutoOrganizationManager__IsAllOutBattleAlreadyUsed(restrictionInfo, v23, v22);
        if ( (Master_object & 1) == 0 )
        {
          v25 = (int32_t)object[1].klass;
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          Master_object = AutoOrganizationManager__IsDataLost(restrictionInfo, v25, v24);
          if ( (Master_object & 1) == 0 )
          {
            Master_object = UserServantEntity__IsLeave(v13, 0);
            if ( (Master_object & 1) == 0 )
            {
              Master_object = UserServantEntity__getQuestRestriction(v13, restrictionInfo, v14, 1, 0);
              if ( (Master_object & 1) == 0 )
              {
                UniqueSvtRestriction = UserServantEntity__getUniqueSvtRestriction(v13, restrictionInfo, 0);
                Master_object = UserServantEntity__IsUniqueIndividualityRestriction(v13, restrictionInfo, 0);
                if ( !UniqueSvtRestriction && (Master_object & 1) == 0 )
                {
                  v27 = (System_Predicate_object__o *)p_monitor->klass;
                  if ( !p_monitor->klass )
                  {
                    v27 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_AutoOrganizationManager_ServantData__TypeInfo);
                    System_Predicate_object____ctor(
                      v27,
                      object,
                      Method_AutoOrganizationManager___c__DisplayClass18_0__AutoOrganizationServant_b__0__,
                      0);
                    object[1].monitor = v27;
                    sub_1C3E508(p_monitor, (int32_t)v27, v28, v29);
                  }
                  Master_object = (int64_t)v53;
                  if ( !v53 )
                    goto LABEL_67;
                  v30 = System_Collections_Generic_List_object___Find(
                          v53,
                          (System_Predicate_T__o *)v27,
                          (const MethodInfo_37B5AC8 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Find__);
                  if ( v30 )
                  {
                    v31 = *(_OWORD *)&v13->fields.id.fields.fakeValue;
                    v32 = v30;
                    *(_OWORD *)&v58.fields.currentCryptoKey = *(_OWORD *)&v13->fields.id.fields.currentCryptoKey;
                    *(_OWORD *)&v58.fields.fakeValue = v31;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    v57 = v58;
                    v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v57, 0);
                    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
                    AdjustTotalRate = AutoOrganizationManager__GetAdjustTotalRate(
                                        (System_Collections_Generic_IEnumerable_QuestAutoOrganizationAdjustEntity__o *)questAutoOrganizationAdjustEntities,
                                        v34,
                                        v33);
                    if ( (float)(AdjustTotalRate * (float)*(int *)(v15 + 20)) >= (float)(*(float *)&v32[4].monitor
                                                                                       * (float)*(int *)(v15 + 20)) )
                    {
                      v36 = *(_OWORD *)&v13->fields.id.fields.fakeValue;
                      *(_OWORD *)&v58.fields.currentCryptoKey = *(_OWORD *)&v13->fields.id.fields.currentCryptoKey;
                      *(_OWORD *)&v58.fields.fakeValue = v36;
                      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                      v56 = v58;
                      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v56, 0);
                      v32[1].monitor = (void *)Master_object;
                      HIDWORD(v32[2].klass) = *(_DWORD *)(v15 + 20);
                      v37 = *(_DWORD *)(v15 + 28);
                      *(float *)&v32[4].monitor = AdjustTotalRate;
                      LODWORD(v32[4].klass) = v37;
                    }
                  }
                  else
                  {
                    v38 = sub_1C3E7B0(AutoOrganizationManager_ServantData_TypeInfo);
                    System_Object___ctor((Il2CppObject *)v38, 0);
                    *(_DWORD *)(v38 + 16) = 0;
                    *(_QWORD *)(v38 + 44) = 0;
                    *(_DWORD *)(v38 + 64) = 0;
                    *(_BYTE *)(v38 + 68) = 0;
                    *(_QWORD *)(v38 + 72) = 0;
                    *(_QWORD *)(v38 + 24) = 0;
                    *(_QWORD *)(v38 + 32) = 0;
                    v39 = *(_OWORD *)&v13->fields.id.fields.fakeValue;
                    *(_OWORD *)&v58.fields.currentCryptoKey = *(_OWORD *)&v13->fields.id.fields.currentCryptoKey;
                    *(_OWORD *)&v58.fields.fakeValue = v39;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    v55 = v58;
                    *(_QWORD *)(v38 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(
                                              &v55,
                                              0);
                    *(_DWORD *)(v38 + 16) = object[1].klass;
                    *(_DWORD *)(v38 + 32) = UserServantEntity__getSvtClassId(v13, 0, 0, 0);
                    *(_DWORD *)(v38 + 36) = *(_DWORD *)(v15 + 20);
                    v41 = *(_QWORD *)(v38 + 24);
                    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
                    v42 = AutoOrganizationManager__GetAdjustTotalRate(
                            (System_Collections_Generic_IEnumerable_QuestAutoOrganizationAdjustEntity__o *)questAutoOrganizationAdjustEntities,
                            v41,
                            v40);
                    Master_object = (int64_t)v51;
                    *(float *)(v38 + 72) = v42;
                    if ( !v51 )
                      goto LABEL_67;
                    Master_object = DataMasterBase_object__object__int___TryGetEntity(
                                      v51,
                                      &entity,
                                      *(_DWORD *)(v38 + 16),
                                      (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
                    if ( (Master_object & 1) != 0 )
                    {
                      *(_DWORD *)(v38 + 64) = *(_DWORD *)(v15 + 28);
                      Master_object = (int64_t)entity;
                      if ( !entity )
                        goto LABEL_67;
                      Master_object = ServantEntity__GetNotSamePartyKey((ServantEntity_o *)entity, 0);
                      *(_DWORD *)(v38 + 76) = Master_object;
                    }
                    items = v53->fields._items;
                    v46 = Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__;
                    ++v53->fields._version;
                    if ( !items )
                      goto LABEL_67;
                    size = v53->fields._size;
                    if ( (unsigned int)size >= LODWORD(items->max_length) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v53,
                        (Il2CppObject *)v38,
                        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v48 = &items->obj.klass + size;
                      v53->fields._size = size + 1;
                      v48[4] = (Il2CppClass *)v38;
                      sub_1C3E508((CGThumbnailListItem_o *)(v48 + 4), v38, v43, v44);
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
    while ( (__int64)++v12 < (int)max_length );
  }
  Master_object = (int64_t)v53;
  if ( !v53 )
LABEL_67:
    sub_1C3E7C0(Master_object, v9);
  return (AutoOrganizationManager_ServantData_array *)System_Collections_Generic_List_object___ToArray(
                                                        v53,
                                                        (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
}


void AutoOrganizationManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  AutoOrganizationManager_c *v2; // x0
  ListViewSort_o *autoOrganizationInfo; // x0

  if ( (byte_4C5252B & 1) == 0 )
  {
    sub_1C3E564(&AutoOrganizationManager_TypeInfo);
    byte_4C5252B = 1;
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
    sub_1C3E7C0(autoOrganizationInfo, v1);
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

  if ( (byte_4C52536 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Aggregate_float__float___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___);
    sub_1C3E564(&System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo);
    sub_1C3E564(&System_Func_float__float__float__TypeInfo);
    sub_1C3E564(&Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__26_1__);
    sub_1C3E564(&Method_AutoOrganizationManager___c__DisplayClass26_0__GetAdjustTotalRate_b__0__);
    sub_1C3E564(&AutoOrganizationManager___c__DisplayClass26_0_TypeInfo);
    sub_1C3E564(&AutoOrganizationManager___c_TypeInfo);
    byte_4C52536 = 1;
  }
  v5 = (Il2CppObject *)sub_1C3E7B0(AutoOrganizationManager___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  v5[1].klass = (Il2CppClass *)userSvtId;
  v8 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo);
  System_Func_object__float____ctor(
    v8,
    v5,
    Method_AutoOrganizationManager___c__DisplayClass26_0__GetAdjustTotalRate_b__0__,
    0);
  v9 = System_Linq_Enumerable__Select_object__float_(
         (System_Collections_Generic_IEnumerable_TSource__o *)questAutoOrganizationAdjustEntities,
         (System_Func_TSource__TResult__o *)v8,
         (const MethodInfo_3130B64 *)Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___);
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
    _9__26_1 = (System_Func_float__float__float__o *)sub_1C3E7B0(System_Func_float__float__float__TypeInfo);
    System_Func_float__float__float____ctor(
      _9__26_1,
      v13,
      Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__26_1__,
      0);
    static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    static_fields->__9__26_1 = _9__26_1;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__26_1, (int32_t)_9__26_1, v15, v16);
  }
  return System_Linq_Enumerable__Aggregate_float__float_(
           v11,
           1.0,
           (System_Func_TAccumulate__TSource__TAccumulate__o *)_9__26_1,
           (const MethodInfo_31026FC *)Method_System_Linq_Enumerable_Aggregate_float__float___);
}


float AutoOrganizationManager__GetAdjustTotalRate_34008096(
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

  if ( (byte_4C52537 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Aggregate_float__float___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___);
    sub_1C3E564(&System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo);
    sub_1C3E564(&System_Func_float__float__float__TypeInfo);
    sub_1C3E564(&Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__27_1__);
    sub_1C3E564(&Method_AutoOrganizationManager___c__DisplayClass27_0__GetAdjustTotalRate_b__0__);
    sub_1C3E564(&AutoOrganizationManager___c__DisplayClass27_0_TypeInfo);
    sub_1C3E564(&AutoOrganizationManager___c_TypeInfo);
    byte_4C52537 = 1;
  }
  v5 = sub_1C3E7B0(AutoOrganizationManager___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  *(_QWORD *)(v5 + 16) = individualities;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)individualities, v8, v9);
  v10 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo);
  System_Func_object__float____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_AutoOrganizationManager___c__DisplayClass27_0__GetAdjustTotalRate_b__0__,
    0);
  v11 = System_Linq_Enumerable__Select_object__float_(
          (System_Collections_Generic_IEnumerable_TSource__o *)questAutoOrganizationAdjustEntities,
          (System_Func_TSource__TResult__o *)v10,
          (const MethodInfo_3130B64 *)Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___);
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
    _9__27_1 = (System_Func_float__float__float__o *)sub_1C3E7B0(System_Func_float__float__float__TypeInfo);
    System_Func_float__float__float____ctor(
      _9__27_1,
      v15,
      Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__27_1__,
      0);
    static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    static_fields->__9__27_1 = _9__27_1;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__27_1, (int32_t)_9__27_1, v17, v18);
  }
  return System_Linq_Enumerable__Aggregate_float__float_(
           v13,
           1.0,
           (System_Func_TAccumulate__TSource__TAccumulate__o *)_9__27_1,
           (const MethodInfo_31026FC *)Method_System_Linq_Enumerable_Aggregate_float__float___);
}


System_Boolean_array *AutoOrganizationManager__GetAutoOrganizationSetting(
        ListViewSort_o *sort,
        int32_t *settingUnitNum,
        const MethodInfo *method)
{
  __int64 Filter_43922068; // x0
  __int64 v6; // x1
  __int64 v7; // x20
  unsigned __int64 v8; // x22
  __int64 v9; // x24
  unsigned __int64 v10; // x8
  int v11; // w9
  bool v12; // w8
  bool v13; // zf
  bool v14; // w9
  char v15; // w11
  unsigned int v16; // w8
  unsigned __int64 v17; // x9
  bool v18; // cf
  __int64 v19; // x8
  int v20; // w11
  int v21; // w13
  __int64 v22; // x9
  unsigned int v23; // w10
  unsigned __int64 v24; // x9
  unsigned __int64 v25; // x8
  __int64 v26; // x10
  __int64 v27; // x12
  unsigned __int64 v28; // x10
  int v29; // w14

  if ( (byte_4C5252C & 1) == 0 )
  {
    sub_1C3E564(&bool___TypeInfo);
    byte_4C5252C = 1;
  }
  Filter_43922068 = sub_1C3E60C(bool___TypeInfo, 13);
  if ( !sort )
LABEL_38:
    sub_1C3E7C0(Filter_43922068, v6);
  v7 = Filter_43922068;
  v8 = 0;
  v9 = Filter_43922068 + 32;
  do
  {
    Filter_43922068 = ListViewSort__GetFilter_43922068(sort, v8, 0);
    if ( !v7 )
      goto LABEL_38;
    v10 = *(unsigned int *)(v7 + 24);
    if ( v8 >= v10 )
      goto LABEL_37;
    *(_BYTE *)(v9 + v8++) = Filter_43922068 & 1;
  }
  while ( v8 != 13 );
  if ( (unsigned int)v10 < 2 )
LABEL_37:
    sub_1C3E7C8(Filter_43922068, v6);
  v11 = *(unsigned __int8 *)(v7 + 33);
  v12 = *(_BYTE *)(v7 + 32) == 0;
  v13 = v11 == 0;
  v14 = v11 != 0;
  v15 = v13;
  *(_BYTE *)(v7 + 32) = (*(_BYTE *)(v7 + 32) != 0) | v15;
  *(_BYTE *)(v7 + 33) = v14 || v12;
  Filter_43922068 = sub_1C3E60C(bool___TypeInfo, 5);
  v16 = *(_DWORD *)(v7 + 24);
  v17 = 0;
  v18 = v16 >= 2;
  v19 = v16 - 2;
  if ( (_DWORD)v19 == 0 || !v18 )
    v19 = 0;
  LOBYTE(v20) = 1;
  do
  {
    if ( v19 == v17 )
      goto LABEL_37;
    if ( !Filter_43922068 )
      goto LABEL_38;
    if ( v17 >= *(unsigned int *)(Filter_43922068 + 24) )
      goto LABEL_37;
    v21 = *(unsigned __int8 *)(v7 + 34 + v17);
    *(_BYTE *)(Filter_43922068 + 32 + v17++) = v21;
    v20 = (unsigned __int8)v20 & (v21 == 0);
  }
  while ( v17 != 5 );
  if ( v20 )
  {
    v22 = 0;
    while ( v19 != v22 )
    {
      *(_BYTE *)(v7 + 34 + v22++) = 1;
      if ( v22 == 5 )
        goto LABEL_23;
    }
    goto LABEL_37;
  }
LABEL_23:
  Filter_43922068 = sub_1C3E60C(bool___TypeInfo, 6);
  v23 = *(_DWORD *)(v7 + 24);
  v24 = 0;
  LODWORD(v25) = 0;
  v18 = v23 >= 7;
  v26 = v23 - 7;
  if ( (_DWORD)v26 != 0 && v18 )
    v27 = v26;
  else
    v27 = 0;
  do
  {
    if ( v27 == v24 )
      goto LABEL_37;
    if ( !Filter_43922068 )
      goto LABEL_38;
    v28 = *(unsigned int *)(Filter_43922068 + 24);
    if ( v24 >= v28 )
      goto LABEL_37;
    v29 = *(unsigned __int8 *)(v7 + 39 + v24);
    *(_BYTE *)(Filter_43922068 + 32 + v24++) = v29;
    if ( v29 )
      LODWORD(v25) = v24;
  }
  while ( v24 != 6 );
  if ( !(_DWORD)v25 )
  {
    v25 = 0;
    while ( v25 < v28 )
    {
      *(_BYTE *)(Filter_43922068 + 32 + v25++) = 1;
      if ( v25 == 6 )
        goto LABEL_36;
    }
    goto LABEL_37;
  }
LABEL_36:
  *settingUnitNum = v25;
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
  System_Collections_Generic_List_EventBonusFilterEntity__o *FilterList; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x24
  System_Collections_Generic_List_object__o *v13; // x26
  AutoOrganizationManager___c_c *v14; // x0
  System_Comparison_T__o *_9__22_0; // x25
  Il2CppObject *v16; // x21
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
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

  if ( (byte_4C52532 & 1) == 0 )
  {
    sub_1C3E564(&System_Comparison_EventBonusFilterEntity__TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_EventBonusFilterMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C3E564(&EventUpValInfo_TypeInfo);
    sub_1C3E564(&EventUpValSetupInfo_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1C3E564(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C3E564(&int___TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SkillInfo___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_EventUpValInfo__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_SkillInfo__TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&Method_AutoOrganizationManager___c__GetEventBonusIds_b__22_0__);
    sub_1C3E564(&AutoOrganizationManager___c_TypeInfo);
    byte_4C52532 = 1;
  }
  eventUpVallInfo = 0;
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C3E7B0(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_3665EC4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventMaster___);
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
          (const MethodInfo_36665B8 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
    return v3;
  }
  v8 = System_Linq_Enumerable__ToArray_int_(
         v7,
         (const MethodInfo_3139050 *)Method_System_Linq_Enumerable_ToArray_int___);
  setupInfo = (EventUpValSetupInfo_o *)sub_1C3E7B0(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_41786760(setupInfo, v8, 0, 0, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v46 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantMaster___);
  v45 = (ServantSkillMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantSkillMaster___);
  v9 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_SkillLvMaster___);
  v10 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  Master_object = sub_1C3E60C(int___TypeInfo, 1);
  if ( !Master_object )
    goto LABEL_61;
  v5 = Master_object;
  if ( !*(_DWORD *)(Master_object + 24) )
    goto LABEL_62;
  *(_DWORD *)(Master_object + 32) = eventId;
  if ( !v10 )
LABEL_61:
    sub_1C3E7C0(Master_object, v5);
  FilterList = EventBonusFilterMaster__GetFilterList(
                 (EventBonusFilterMaster_o *)v10,
                 (System_Int32_array *)Master_object,
                 1,
                 1,
                 0);
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
        _9__22_0 = (System_Comparison_T__o *)sub_1C3E7B0(System_Comparison_EventBonusFilterEntity__TypeInfo);
        System_Comparison_object____ctor(
          _9__22_0,
          v16,
          Method_AutoOrganizationManager___c__GetEventBonusIds_b__22_0__,
          0);
        static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
        static_fields->__9__22_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__22_0;
        sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__22_0, (int32_t)_9__22_0, v18, v19);
      }
      System_Collections_Generic_List_object___Sort_58421028(
        v13,
        _9__22_0,
        (const MethodInfo_37B6F24 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
      v20 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_EventUpValInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v20,
        (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
      v21 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_SkillInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v21,
        (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
      if ( v13->fields._size >= 1 )
      {
        v22 = 0;
        v47 = v13;
        do
        {
          Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                     v13,
                                     v22,
                                     (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
          if ( !Master_object )
            goto LABEL_61;
          v23 = *(_DWORD *)(Master_object + 20);
          v24 = Master_object;
          if ( v23 == 2 )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
            if ( !Master_object )
              goto LABEL_61;
            Master_object = (__int64)EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                                       (EventBonusFilterGroupMemberMaster_o *)Master_object,
                                       *(_DWORD *)(v24 + 24),
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
                                  (const MethodInfo_36670C8 *)Method_System_Collections_Generic_HashSet_int__Add__);
                v40 = *(_DWORD *)(v41 + 24);
                if ( (int)++v42 >= v40 )
                  goto LABEL_59;
              }
LABEL_62:
              sub_1C3E7C8(Master_object, v5);
            }
          }
          else if ( v23 == 1 )
          {
            if ( !v12 )
              goto LABEL_61;
            Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                       v12,
                                       *(_DWORD *)(Master_object + 24),
                                       (const MethodInfo_33B2F58 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Master_object )
              goto LABEL_61;
            v25 = Master_object;
            v27 = *(_QWORD *)(Master_object + 16);
            v26 = *(_QWORD *)(Master_object + 24);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v50.fields.currentCryptoKey = v27;
            *(_QWORD *)&v50.fields.fakeValue = v26;
            v5 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v50, 0);
            Master_object = (__int64)v45;
            if ( !v45 )
              goto LABEL_61;
            Master_object = (__int64)ServantSkillMaster__getServantSkillList(v45, v5, 0);
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
                Master_object = (__int64)SkillLvMaster__GetEntity((SkillLvMaster_o *)v9, *(_DWORD *)(v32 + 28), 1, 0);
                if ( Master_object && !*(_DWORD *)(v32 + 44) )
                {
                  v33 = (SkillLvEntity_o *)Master_object;
                  v34 = *(_QWORD *)(v25 + 16);
                  v35 = *(_QWORD *)(v25 + 24);
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v51.fields.currentCryptoKey = v34;
                  *(_QWORD *)&v51.fields.fakeValue = v35;
                  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v51, 0);
                  v37 = (EventUpValInfo_o *)sub_1C3E7B0(EventUpValInfo_TypeInfo);
                  EventUpValInfo___ctor(v37, setupInfo, v36, 1, 1, 0, 0);
                  eventUpVallInfo = v37;
                  Master_object = SkillLvEntity__getEventUpVal_42952308(v33, &eventUpVallInfo, 1, 1, 0, 1, 0, 0);
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
                Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v52, 0);
                if ( !v3 )
                  goto LABEL_61;
                System_Collections_Generic_HashSet_int___Add(
                  v3,
                  Master_object,
                  (const MethodInfo_36670C8 *)Method_System_Collections_Generic_HashSet_int__Add__);
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


int32_t AutoOrganizationManager__GetRarityBit(System_Boolean_array *rarityFlag, const MethodInfo *method)
{
  unsigned __int64 max_length_low; // x10
  unsigned __int64 v4; // x9
  __int64 v5; // x0
  bool *m_Items; // x8

  if ( !rarityFlag )
    sub_1C3E7C0(0, method);
  max_length_low = LODWORD(rarityFlag->max_length);
  v4 = 0;
  v5 = 0;
  m_Items = rarityFlag->m_Items;
  do
  {
    if ( (__int64)v4 <= (int)max_length_low )
    {
      if ( v4 >= max_length_low )
        sub_1C3E7C8(v5, method);
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
  __int64 Filter_43922116; // x0
  __int64 v4; // x1
  __int64 v5; // x19
  unsigned __int64 v6; // x21
  __int64 v7; // x23
  unsigned __int64 v8; // x8
  int v9; // w9
  bool v10; // w8
  bool v11; // zf
  bool v12; // w9
  char v13; // w11
  unsigned int v14; // w8
  unsigned __int64 v15; // x9
  bool v16; // cf
  __int64 v17; // x8
  int v18; // w11
  int v19; // w13
  __int64 v20; // x9

  if ( (byte_4C5252D & 1) == 0 )
  {
    sub_1C3E564(&bool___TypeInfo);
    byte_4C5252D = 1;
  }
  Filter_43922116 = sub_1C3E60C(bool___TypeInfo, 7);
  if ( !sort )
LABEL_25:
    sub_1C3E7C0(Filter_43922116, v4);
  v5 = Filter_43922116;
  v6 = 0;
  v7 = Filter_43922116 + 32;
  do
  {
    Filter_43922116 = ListViewSort__GetFilter_43922116(sort, v6, 0);
    if ( !v5 )
      goto LABEL_25;
    v8 = *(unsigned int *)(v5 + 24);
    if ( v6 >= v8 )
      goto LABEL_24;
    *(_BYTE *)(v7 + v6++) = Filter_43922116 & 1;
  }
  while ( v6 != 7 );
  if ( (unsigned int)v8 < 2 )
LABEL_24:
    sub_1C3E7C8(Filter_43922116, v4);
  v9 = *(unsigned __int8 *)(v5 + 33);
  v10 = *(_BYTE *)(v5 + 32) == 0;
  v11 = v9 == 0;
  v12 = v9 != 0;
  v13 = v11;
  *(_BYTE *)(v5 + 32) = (*(_BYTE *)(v5 + 32) != 0) | v13;
  *(_BYTE *)(v5 + 33) = v12 || v10;
  Filter_43922116 = sub_1C3E60C(bool___TypeInfo, 5);
  v14 = *(_DWORD *)(v5 + 24);
  v15 = 0;
  v16 = v14 >= 2;
  v17 = v14 - 2;
  if ( (_DWORD)v17 == 0 || !v16 )
    v17 = 0;
  LOBYTE(v18) = 1;
  do
  {
    if ( v17 == v15 )
      goto LABEL_24;
    if ( !Filter_43922116 )
      goto LABEL_25;
    if ( v15 >= *(unsigned int *)(Filter_43922116 + 24) )
      goto LABEL_24;
    v19 = *(unsigned __int8 *)(v5 + 34 + v15);
    *(_BYTE *)(Filter_43922116 + 32 + v15++) = v19;
    v18 = (unsigned __int8)v18 & (v19 == 0);
  }
  while ( v15 != 5 );
  if ( v18 )
  {
    v20 = 0;
    while ( v17 != v20 )
    {
      *(_BYTE *)(v5 + 34 + v20++) = 1;
      if ( v20 == 5 )
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

  if ( (byte_4C5252A & 1) == 0 )
  {
    sub_1C3E564(&AutoOrganizationManager_TypeInfo);
    byte_4C5252A = 1;
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
    sub_1C3E7C0(autoOrganizationInfo, v1);
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

  if ( (byte_4C52534 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    byte_4C52534 = 1;
  }
  if ( !restrictionInfo || !restrictionInfo->fields.isAllOutBattle )
    return 0;
  allOutBattleGroupNo = restrictionInfo->fields.allOutBattleGroupNo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( !Master_object )
    sub_1C3E7C0(0, v7);
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

  if ( (byte_4C52535 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C52535 = 1;
  }
  entity = 0;
  if ( !restrictionInfo || !restrictionInfo->fields.isDataLostBattle )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
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
    sub_1C3E7C0(IsRestart, v5);
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

  if ( (byte_4C52533 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_UserEventServantFatigueMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C52533 = 1;
  }
  recoverAt = 0;
  isRecover = 0;
  if ( !restrictionInfo || !restrictionInfo->fields.isFatigure )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserEventServantFatigueMaster___);
  if ( !Master_object )
    sub_1C3E7C0(0, v6);
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

  if ( (byte_4C5252F & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__get_Current__);
    sub_1C3E564(&System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___78155680);
    sub_1C3E564(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
    sub_1C3E564(&Method_AutoOrganizationManager___c__SortClassRelation_b__19_0__);
    sub_1C3E564(&AutoOrganizationManager___c_TypeInfo);
    byte_4C5252F = 1;
  }
  entity = 0;
  memset(&v25, 0, sizeof(v25));
  v5 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor_58412372(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)dataList,
    (const MethodInfo_37B4D54 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___78155680);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantClassMaster___);
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( enemyClassId )
  {
    if ( !Master_object )
      goto LABEL_32;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &entity,
                                      enemyClassId,
                                      (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_32;
      enemyClassId = HIDWORD(entity[3].monitor);
    }
  }
  if ( !v5 )
LABEL_32:
    sub_1C3E7C0(Master_object, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    v5,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v25,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__);
    if ( !v9 )
      break;
    current = v25.fields._current;
    if ( !v25.fields._current )
      sub_1C3E7C0(v9, v10);
    if ( !v8 )
      sub_1C3E7C0(v9, v10);
    klass = (int32_t)v25.fields._current[2].klass;
    v13 = DataMasterBase_object__object__int___TryGetEntity(
            v8,
            &entity,
            klass,
            (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( v13 )
    {
      if ( !entity )
        sub_1C3E7C0(v13, v14);
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
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__);
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
    _9__19_0 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    System_Func_object__float____ctor(_9__19_0, v18, Method_AutoOrganizationManager___c__SortClassRelation_b__19_0__, 0);
    static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = (struct System_Func_AutoOrganizationManager_ServantData__float__o *)_9__19_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__19_0, (int32_t)_9__19_0, v20, v21);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__float_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v5,
                                                               (System_Func_TSource__TKey__o *)_9__19_0,
                                                               (const MethodInfo_3129964 *)Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___);
  return (AutoOrganizationManager_ServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                                        v22,
                                                        (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___);
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

  if ( (byte_4C52530 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__long___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__float___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__get_Current__);
    sub_1C3E564(&System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    sub_1C3E564(&System_Func_AutoOrganizationManager_ServantData__long__TypeInfo);
    sub_1C3E564(&System_Func_AutoOrganizationManager_ServantData__int__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___78155680);
    sub_1C3E564(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
    sub_1C3E564(&Method_AutoOrganizationManager___c__SortServant_b__20_0__);
    sub_1C3E564(&Method_AutoOrganizationManager___c__SortServant_b__20_1__);
    sub_1C3E564(&Method_AutoOrganizationManager___c__SortServant_b__20_2__);
    sub_1C3E564(&Method_AutoOrganizationManager___c__SortServant_b__20_3__);
    sub_1C3E564(&Method_AutoOrganizationManager___c__SortServant_b__20_4__);
    sub_1C3E564(&AutoOrganizationManager___c_TypeInfo);
    byte_4C52530 = 1;
  }
  entity = 0;
  memset(&v59, 0, sizeof(v59));
  v5 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor_58412372(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)dataList,
    (const MethodInfo_37B4D54 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___78155680);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantClassMaster___);
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( enemyClassId )
  {
    if ( !Master_object )
      goto LABEL_56;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &entity,
                                      enemyClassId,
                                      (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_56;
      enemyClassId = HIDWORD(entity[3].monitor);
    }
  }
  if ( !v5 )
LABEL_56:
    sub_1C3E7C0(Master_object, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v58,
    v5,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__);
  v59 = v58;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v59,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__);
    if ( !v9 )
      break;
    current = v59.fields._current;
    if ( !v59.fields._current )
      sub_1C3E7C0(v9, v10);
    if ( !v8 )
      sub_1C3E7C0(v9, v10);
    klass = (int32_t)v59.fields._current[2].klass;
    v13 = DataMasterBase_object__object__int___TryGetEntity(
            v8,
            &entity,
            klass,
            (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( v13 )
    {
      if ( !entity )
        sub_1C3E7C0(v13, v14);
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
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__);
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
    _9__20_0 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    System_Func_object__float____ctor(_9__20_0, v20, Method_AutoOrganizationManager___c__SortServant_b__20_0__, 0);
    static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    static_fields->__9__20_0 = (struct System_Func_AutoOrganizationManager_ServantData__float__o *)_9__20_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__20_0, (int32_t)_9__20_0, v22, v23);
  }
  v24 = System_Linq_Enumerable__OrderByDescending_object__float_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v5,
          (System_Func_TSource__TKey__o *)_9__20_0,
          (const MethodInfo_3129964 *)Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___);
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
    _9__20_1 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_AutoOrganizationManager_ServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__20_1, v28, Method_AutoOrganizationManager___c__SortServant_b__20_1__, 0);
    v29 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v29->__9__20_1 = (struct System_Func_AutoOrganizationManager_ServantData__int__o *)_9__20_1;
    sub_1C3E508((CGThumbnailListItem_o *)&v29->__9__20_1, (int32_t)_9__20_1, v30, v31);
  }
  v32 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v26,
          (System_Func_TSource__TKey__o *)_9__20_1,
          (const MethodInfo_3138A78 *)Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__int___);
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
    _9__20_2 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    System_Func_object__float____ctor(_9__20_2, v36, Method_AutoOrganizationManager___c__SortServant_b__20_2__, 0);
    v37 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v37->__9__20_2 = (struct System_Func_AutoOrganizationManager_ServantData__float__o *)_9__20_2;
    sub_1C3E508((CGThumbnailListItem_o *)&v37->__9__20_2, (int32_t)_9__20_2, v38, v39);
  }
  v40 = System_Linq_Enumerable__ThenByDescending_object__float_(
          v34,
          (System_Func_TSource__TKey__o *)_9__20_2,
          (const MethodInfo_3138C10 *)Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__float___);
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
    _9__20_3 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_AutoOrganizationManager_ServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__20_3, v44, Method_AutoOrganizationManager___c__SortServant_b__20_3__, 0);
    v45 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v45->__9__20_3 = (struct System_Func_AutoOrganizationManager_ServantData__int__o *)_9__20_3;
    sub_1C3E508((CGThumbnailListItem_o *)&v45->__9__20_3, (int32_t)_9__20_3, v46, v47);
  }
  v48 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v42,
          (System_Func_TSource__TKey__o *)_9__20_3,
          (const MethodInfo_3138A78 *)Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__int___);
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
    _9__20_4 = (System_Func_object__long__o *)sub_1C3E7B0(System_Func_AutoOrganizationManager_ServantData__long__TypeInfo);
    System_Func_object__long____ctor(_9__20_4, v52, Method_AutoOrganizationManager___c__SortServant_b__20_4__, 0);
    v53 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v53->__9__20_4 = (struct System_Func_AutoOrganizationManager_ServantData__long__o *)_9__20_4;
    sub_1C3E508((CGThumbnailListItem_o *)&v53->__9__20_4, (int32_t)_9__20_4, v54, v55);
  }
  v56 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenByDescending_object__long_(
                                                               v50,
                                                               (System_Func_TSource__TKey__o *)_9__20_4,
                                                               (const MethodInfo_3138B44 *)Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__long___);
  return (AutoOrganizationManager_ServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                                        v56,
                                                        (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___);
}


ListViewSort_o *AutoOrganizationManager__get_SortInfo(const MethodInfo *method)
{
  AutoOrganizationManager_c *v1; // x0

  if ( (byte_4C52528 & 1) == 0 )
  {
    sub_1C3E564(&AutoOrganizationManager_TypeInfo);
    byte_4C52528 = 1;
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

  if ( (byte_4C52529 & 1) == 0 )
  {
    sub_1C3E564(&AutoOrganizationManager_TypeInfo);
    byte_4C52529 = 1;
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

  if ( (byte_4C52539 & 1) == 0 )
  {
    sub_1C3E564(&AutoOrganizationManager___c_TypeInfo);
    byte_4C52539 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(AutoOrganizationManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AutoOrganizationManager___c_TypeInfo->static_fields->__9 = (struct AutoOrganizationManager___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)AutoOrganizationManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C3E7C0(this, a);
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
    sub_1C3E7C0(this, a);
  return b->fields.priority - a->fields.priority;
}


float AutoOrganizationManager___c___SortClassRelation_b__19_0(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1C3E7C0(this, 0);
  return d->fields.relationNum;
}


float AutoOrganizationManager___c___SortServant_b__20_0(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1C3E7C0(this, 0);
  return d->fields.relationAtk;
}


int32_t AutoOrganizationManager___c___SortServant_b__20_1(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1C3E7C0(this, 0);
  return d->fields.treasureDeviceLv;
}


float AutoOrganizationManager___c___SortServant_b__20_2(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1C3E7C0(this, 0);
  return d->fields.relationDef;
}


int32_t AutoOrganizationManager___c___SortServant_b__20_3(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1C3E7C0(this, 0);
  return d->fields.svtId;
}


int64_t AutoOrganizationManager___c___SortServant_b__20_4(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
  return QuestAutoOrganizationAdjustEntity__GetAdjustRate_42504032(entity, this->fields.individualities, 0);
}