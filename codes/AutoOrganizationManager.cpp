void AutoOrganizationManager___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  struct AutoOrganizationManager_StaticFields *static_fields; // x0
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  ListViewSort_o *v9; // x19
  struct AutoOrganizationManager_StaticFields *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D27EF1 & 1) == 0 )
  {
    sub_1C94098(&AutoOrganizationManager_TypeInfo);
    sub_1C94098(&ListViewSort_TypeInfo);
    sub_1C94098(&StringLiteral_2490/*"AutoOrganization"*/);
    sub_1C94098(&StringLiteral_2496/*"AutoOrganizationWaveBattle"*/);
    byte_4D27EF1 = 1;
  }
  *(_QWORD *)AutoOrganizationManager_TypeInfo->static_fields = 0x296B0000296ALL;
  v1 = (ListViewSort_o *)sub_1C942E4(ListViewSort_TypeInfo);
  ListViewSort___ctor_44628284(v1, (System_String_o *)StringLiteral_2490/*"AutoOrganization"*/, 3, 0, 0);
  static_fields = AutoOrganizationManager_TypeInfo->static_fields;
  static_fields->autoOrganizationInfo = v1;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->autoOrganizationInfo, (int32_t)v1, v3, v4, v5, v6, v7, v8);
  v9 = (ListViewSort_o *)sub_1C942E4(ListViewSort_TypeInfo);
  ListViewSort___ctor_44628284(v9, (System_String_o *)StringLiteral_2496/*"AutoOrganizationWaveBattle"*/, 3, 0, 0);
  v10 = AutoOrganizationManager_TypeInfo->static_fields;
  v10->waveBattleAutoOrganizationInfo = v9;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v10->waveBattleAutoOrganizationInfo,
    (int32_t)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
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
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  float v56; // s0
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x27
  AutoOrganizationManager_c *v58; // x0
  float v59; // s0
  AutoOrganizationManager_c *v60; // x0
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  Il2CppClass **v64; // x0
  __int64 v65; // x26
  __int64 v66; // x27
  int32_t v67; // w0
  __int64 v68; // x25
  __int64 v69; // x26
  struct System_Int32_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  System_Comparison_T__o *v73; // x19
  Il2CppObject *v74; // x21
  struct AutoOrganizationManager___c_StaticFields *v75; // x0
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  System_Collections_Generic_HashSet_int__o *v83; // [xsp+0h] [xbp-F0h]
  DataMasterBase_TMaster__TEntity__PKType__o *v84; // [xsp+8h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v85; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+30h] [xbp-C0h]
  int v87; // [xsp+54h] [xbp-9Ch] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-98h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v89; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16

  if ( (byte_4D27EEA & 1) == 0 )
  {
    sub_1C94098(&AutoOrganizationManager_TypeInfo);
    sub_1C94098(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
    sub_1C94098(&System_Comparison_AutoOrganizationManager_ServantData__TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C94098(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1C94098(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Sort__);
    sub_1C94098(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
    sub_1C94098(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&ServantBonusFilterSelectMenu_TypeInfo);
    sub_1C94098(&AutoOrganizationManager_ServantData_TypeInfo);
    sub_1C94098(&Method_AutoOrganizationManager___c__AutoOrganizationEquip_b__21_0__);
    sub_1C94098(&AutoOrganizationManager___c_TypeInfo);
    byte_4D27EEA = 1;
  }
  entity = 0;
  v87 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_98;
  ServantEquipList = UserServantMaster__getServantEquipList((UserServantMaster_o *)Master_object, 0);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
  v84 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantMaster___);
  v9 = (System_Collections_Generic_HashSet_int__o *)sub_1C942E4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v9,
    (const MethodInfo_3718384 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  v10 = (System_Collections_Generic_HashSet_int__o *)sub_1C942E4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v10,
    (const MethodInfo_3718384 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( eventId )
  {
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    Master_object = AutoOrganizationManager__GetEventBonusIds(eventId, v6);
    if ( !Master_object )
      goto LABEL_98;
    v83 = (System_Collections_Generic_HashSet_int__o *)Master_object;
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
      v15 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
      if ( !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
      Master_object = (void *)ServantBonusFilterSelectMenu__GetMaxIndividualFilter(0);
      v87 = 0;
      if ( (int)Master_object >= 1 )
      {
        v16 = (int)Master_object;
        while ( 1 )
        {
          v17 = System_Int32__ToString((int32_t)&v87, 0);
          v18 = System_String__Concat_64417744(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v17, 0);
          if ( UnityEngine_PlayerPrefs__HasKey(v18, 0) )
          {
            v19 = System_Int32__ToString((int32_t)&v87, 0);
            v20 = System_String__Concat_64417744(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_EQUIP_ID, v19, 0);
            Master_object = (void *)UnityEngine_PlayerPrefs__GetInt_72068708(v20, 0);
            if ( !v10 )
              goto LABEL_98;
            System_Collections_Generic_HashSet_int___Add(
              v10,
              (int32_t)Master_object,
              (const MethodInfo_3719588 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
          v21 = System_Int32__ToString((int32_t)&v87, 0);
          v22 = System_String__Concat_64417744(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v21, 0);
          Master_object = (void *)UnityEngine_PlayerPrefs__HasKey(v22, 0);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            v23 = System_Int32__ToString((int32_t)&v87, 0);
            v24 = System_String__Concat_64417744(SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID, v23, 0);
            Master_object = (void *)UnityEngine_PlayerPrefs__GetInt_72068708(v24, 0);
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
          if ( ++v87 >= v16 )
            goto LABEL_34;
        }
        v27 = 0;
        while ( 1 )
        {
          if ( v27 >= v25 )
LABEL_99:
            sub_1C942F8(Master_object);
          v28 = *((_QWORD *)v26 + (int)v27 + 4);
          if ( !v28 || !v10 )
            break;
          Master_object = (void *)System_Collections_Generic_HashSet_int___Add(
                                    v10,
                                    *(_DWORD *)(v28 + 20),
                                    (const MethodInfo_3719588 *)Method_System_Collections_Generic_HashSet_int__Add__);
          v25 = *((_DWORD *)v26 + 6);
          if ( (int)++v27 >= v25 )
            goto LABEL_31;
        }
LABEL_98:
        sub_1C942F0(Master_object, v6);
      }
    }
  }
  else
  {
    v83 = v9;
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
        *(_QWORD *)&v89.fields.currentCryptoKey = v33;
        *(_QWORD *)&v89.fields.fakeValue = v32;
        v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v89, 0);
        Master_object = (void *)System_Collections_Generic_List_int___Contains(
                                  organizedEquipIdList,
                                  v34,
                                  (const MethodInfo_384E188 *)Method_System_Collections_Generic_List_int__Contains__);
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
        *(_QWORD *)&v90.fields.currentCryptoKey = v36;
        *(_QWORD *)&v90.fields.fakeValue = v35;
        v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v90, 0);
        Master_object = (void *)System_Collections_Generic_HashSet_int___Contains(
                                  v10,
                                  v37,
                                  (const MethodInfo_3718A78 *)Method_System_Collections_Generic_HashSet_int__Contains__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
          goto LABEL_89;
      }
      Master_object = (void *)UserServantEntity__IsFriendShipSvtEquip(v31, 0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
        goto LABEL_89;
      v38 = sub_1C942E4(AutoOrganizationManager_ServantData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v38, 0);
      *(_DWORD *)(v38 + 16) = 0;
      *(_QWORD *)(v38 + 32) = 0;
      *(_QWORD *)(v38 + 24) = 0;
      *(_QWORD *)(v38 + 44) = 0;
      *(_DWORD *)(v38 + 64) = 0;
      *(_BYTE *)(v38 + 68) = 0;
      *(_QWORD *)(v38 + 72) = 0;
      v39 = *(_OWORD *)&v31->fields.id.fields.fakeValue;
      *(_OWORD *)&v86.fields.currentCryptoKey = *(_OWORD *)&v31->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v86.fields.fakeValue = v39;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v85 = v86;
      *(_QWORD *)(v38 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v85, 0);
      v41 = *(_QWORD *)&v31->fields.svtId.fields.currentCryptoKey;
      v40 = *(_QWORD *)&v31->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v91.fields.currentCryptoKey = v41;
      *(_QWORD *)&v91.fields.fakeValue = v40;
      v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v91, 0);
      *(_DWORD *)(v38 + 16) = v42;
      v43 = v42;
      atk = v31->fields.atk;
      Master_object = v84;
      *(_DWORD *)(v38 + 48) = 0;
      *(_DWORD *)(v38 + 36) = atk;
      if ( !v84 )
        goto LABEL_98;
      Master_object = (void *)DataMasterBase_object__object__int___TryGetEntity(
                                v84,
                                &entity,
                                v43,
                                (const MethodInfo_345B50C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v45 = entity;
        if ( !entity )
          goto LABEL_98;
        *(_DWORD *)(v38 + 64) = entity[9].monitor;
        *(_DWORD *)(v38 + 44) = v45[13].klass;
      }
      Master_object = v83;
      if ( !v83 )
        goto LABEL_98;
      if ( v83->fields._count >= 1
        && System_Collections_Generic_HashSet_int___Contains(
             v83,
             *(_DWORD *)(v38 + 16),
             (const MethodInfo_3718A78 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
      {
        v46 = *(float *)(v38 + 48) + 50000.0;
        *(float *)(v38 + 48) = v46;
        v47 = v46 + (float)((float)UserServantEntity__getRarity(v31, 0) * 100000.0);
        *(float *)(v38 + 48) = v47;
        v49 = *(_QWORD *)&v31->fields.limitCount.fields.currentCryptoKey;
        v48 = *(_QWORD *)&v31->fields.limitCount.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v92.fields.currentCryptoKey = v49;
        *(_QWORD *)&v92.fields.fakeValue = v48;
        Master_object = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v92, 0);
        v56 = v47 + (float)((float)(int)Master_object * 10000.0);
        goto LABEL_74;
      }
      Master_object = UserServantEntity__GetEquipCategoryIdList(v31, 0, 0);
      if ( Master_object )
      {
        v57 = (System_Collections_Generic_IEnumerable_TSource__o *)Master_object;
        v58 = AutoOrganizationManager_TypeInfo;
        if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          v58 = AutoOrganizationManager_TypeInfo;
        }
        Master_object = (void *)System_Linq_Enumerable__Contains_int_(
                                  v57,
                                  v58->static_fields->CATEGORY_ID_NP_GAIN,
                                  (const MethodInfo_31B9458 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          v59 = *(float *)(v38 + 48) + 40000.0;
        }
        else
        {
          v60 = AutoOrganizationManager_TypeInfo;
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
            v60 = AutoOrganizationManager_TypeInfo;
          }
          Master_object = (void *)System_Linq_Enumerable__Contains_int_(
                                    v57,
                                    v60->static_fields->CATEGORY_ID_NP_REGAIN,
                                    (const MethodInfo_31B9458 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( ((unsigned __int8)Master_object & 1) == 0 )
            goto LABEL_73;
          v59 = *(float *)(v38 + 48) + 30000.0;
        }
        *(float *)(v38 + 48) = v59;
      }
LABEL_73:
      v56 = *(float *)(v38 + 48) + (float)*(int *)(v38 + 36);
LABEL_74:
      *(float *)(v38 + 48) = v56;
      if ( !v8 )
        goto LABEL_98;
      items = v8->fields._items;
      v62 = Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__;
      ++v8->fields._version;
      if ( !items )
        goto LABEL_98;
      size = v8->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          (Il2CppObject *)v38,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
        if ( !organizedEquipIdList )
          goto LABEL_89;
      }
      else
      {
        v64 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v64[4] = (Il2CppClass *)v38;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v64 + 4), v38, v50, v51, v52, v53, v54, v55);
        if ( !organizedEquipIdList )
          goto LABEL_89;
      }
      v66 = *(_QWORD *)&v31->fields.svtId.fields.currentCryptoKey;
      v65 = *(_QWORD *)&v31->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v93.fields.currentCryptoKey = v66;
      *(_QWORD *)&v93.fields.fakeValue = v65;
      v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v93, 0);
      Master_object = (void *)System_Collections_Generic_List_int___Contains(
                                organizedEquipIdList,
                                v67,
                                (const MethodInfo_384E188 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)Master_object & 1) == 0 )
      {
        v69 = *(_QWORD *)&v31->fields.svtId.fields.currentCryptoKey;
        v68 = *(_QWORD *)&v31->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v94.fields.currentCryptoKey = v69;
        *(_QWORD *)&v94.fields.fakeValue = v68;
        Master_object = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v94, 0);
        v70 = organizedEquipIdList->fields._items;
        v71 = Method_System_Collections_Generic_List_int__Add__;
        ++organizedEquipIdList->fields._version;
        if ( !v70 )
          goto LABEL_98;
        v72 = organizedEquipIdList->fields._size;
        v6 = (const MethodInfo *)(unsigned int)Master_object;
        if ( (unsigned int)v72 >= LODWORD(v70->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            organizedEquipIdList,
            (int32_t)Master_object,
            *(const MethodInfo_384DE10 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
        }
        else
        {
          organizedEquipIdList->fields._size = v72 + 1;
          v70->m_Items[v72] = (int)Master_object;
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
  v73 = *(System_Comparison_T__o **)(*((_QWORD *)Master_object + 23) + 56LL);
  if ( !v73 )
  {
    if ( !*((_DWORD *)Master_object + 56) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = AutoOrganizationManager___c_TypeInfo;
    }
    v74 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
    v73 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_AutoOrganizationManager_ServantData__TypeInfo);
    System_Comparison_object____ctor(v73, v74, Method_AutoOrganizationManager___c__AutoOrganizationEquip_b__21_0__, 0);
    v75 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v75->__9__21_0 = (struct System_Comparison_AutoOrganizationManager_ServantData__o *)v73;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v75->__9__21_0, (int32_t)v73, v76, v77, v78, v79, v80, v81);
  }
  if ( !v8 )
    goto LABEL_98;
  System_Collections_Generic_List_object___Sort_59164920(
    v8,
    v73,
    (const MethodInfo_386C8F8 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Sort__);
  return (AutoOrganizationManager_ServantData_array *)System_Collections_Generic_List_object___ToArray(
                                                        v8,
                                                        (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
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
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  Il2CppObject *v34; // x0
  __int128 v35; // q0
  Il2CppObject *v36; // x27
  const MethodInfo *v37; // x2
  int64_t v38; // x19
  float AdjustTotalRate; // s8
  __int128 v40; // q0
  int v41; // w8
  __int64 v42; // x27
  __int128 v43; // q0
  const MethodInfo *v44; // x2
  int64_t v45; // x19
  float v46; // s0
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  struct System_Object_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  Il2CppClass **v56; // x0
  GrandQuestFolderBoardItem_o *p_monitor; // [xsp+8h] [xbp-118h]
  DataMasterBase_TMaster__TEntity__PKType__o *v59; // [xsp+10h] [xbp-110h]
  System_Collections_Generic_List_object__o *v61; // [xsp+20h] [xbp-100h]
  Il2CppObject *object; // [xsp+28h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+30h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+50h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+70h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+90h] [xbp-90h]
  Il2CppObject *entity; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  if ( (byte_4D27EE7 & 1) == 0 )
  {
    sub_1C94098(&AutoOrganizationManager_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C94098(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C94098(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Find__);
    sub_1C94098(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
    sub_1C94098(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&System_Predicate_AutoOrganizationManager_ServantData__TypeInfo);
    sub_1C94098(&AutoOrganizationManager_ServantData_TypeInfo);
    sub_1C94098(&Method_AutoOrganizationManager___c__DisplayClass18_0__AutoOrganizationServant_b__0__);
    sub_1C94098(&AutoOrganizationManager___c__DisplayClass18_0_TypeInfo);
    byte_4D27EE7 = 1;
  }
  entity = 0;
  object = (Il2CppObject *)sub_1C942E4(AutoOrganizationManager___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor(object, 0);
  v61 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v61,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_67;
  OrganizationList = UserServantMaster__getOrganizationList((UserServantMaster_o *)Master_object, 0);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantMaster___);
  v59 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !OrganizationList )
    goto LABEL_67;
  max_length = OrganizationList->max_length;
  if ( (int)max_length >= 1 )
  {
    v12 = 0;
    p_monitor = (GrandQuestFolderBoardItem_o *)&object[1].monitor;
    do
    {
      if ( v12 >= (unsigned int)max_length )
        sub_1C942F8(Master_object);
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
      *(_QWORD *)&v68.fields.currentCryptoKey = v19;
      *(_QWORD *)&v68.fields.fakeValue = v18;
      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v68, 0);
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
                          (const MethodInfo_31B9458 *)Method_System_Linq_Enumerable_Contains_int___);
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
                    v27 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_AutoOrganizationManager_ServantData__TypeInfo);
                    System_Predicate_object____ctor(
                      v27,
                      object,
                      Method_AutoOrganizationManager___c__DisplayClass18_0__AutoOrganizationServant_b__0__,
                      0);
                    object[1].monitor = v27;
                    sub_1C9403C(p_monitor, (int32_t)v27, v28, v29, v30, v31, v32, v33);
                  }
                  Master_object = (int64_t)v61;
                  if ( !v61 )
                    goto LABEL_67;
                  v34 = System_Collections_Generic_List_object___Find(
                          v61,
                          (System_Predicate_T__o *)v27,
                          (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Find__);
                  if ( v34 )
                  {
                    v35 = *(_OWORD *)&v13->fields.id.fields.fakeValue;
                    v36 = v34;
                    *(_OWORD *)&v66.fields.currentCryptoKey = *(_OWORD *)&v13->fields.id.fields.currentCryptoKey;
                    *(_OWORD *)&v66.fields.fakeValue = v35;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    v65 = v66;
                    v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v65, 0);
                    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
                    AdjustTotalRate = AutoOrganizationManager__GetAdjustTotalRate(
                                        (System_Collections_Generic_IEnumerable_QuestAutoOrganizationAdjustEntity__o *)questAutoOrganizationAdjustEntities,
                                        v38,
                                        v37);
                    if ( (float)(AdjustTotalRate * (float)*(int *)(v15 + 20)) >= (float)(*(float *)&v36[4].monitor
                                                                                       * (float)*(int *)(v15 + 20)) )
                    {
                      v40 = *(_OWORD *)&v13->fields.id.fields.fakeValue;
                      *(_OWORD *)&v66.fields.currentCryptoKey = *(_OWORD *)&v13->fields.id.fields.currentCryptoKey;
                      *(_OWORD *)&v66.fields.fakeValue = v40;
                      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                      v64 = v66;
                      Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v64, 0);
                      v36[1].monitor = (void *)Master_object;
                      HIDWORD(v36[2].klass) = *(_DWORD *)(v15 + 20);
                      v41 = *(_DWORD *)(v15 + 28);
                      *(float *)&v36[4].monitor = AdjustTotalRate;
                      LODWORD(v36[4].klass) = v41;
                    }
                  }
                  else
                  {
                    v42 = sub_1C942E4(AutoOrganizationManager_ServantData_TypeInfo);
                    System_Object___ctor((Il2CppObject *)v42, 0);
                    *(_DWORD *)(v42 + 16) = 0;
                    *(_QWORD *)(v42 + 44) = 0;
                    *(_DWORD *)(v42 + 64) = 0;
                    *(_BYTE *)(v42 + 68) = 0;
                    *(_QWORD *)(v42 + 72) = 0;
                    *(_QWORD *)(v42 + 24) = 0;
                    *(_QWORD *)(v42 + 32) = 0;
                    v43 = *(_OWORD *)&v13->fields.id.fields.fakeValue;
                    *(_OWORD *)&v66.fields.currentCryptoKey = *(_OWORD *)&v13->fields.id.fields.currentCryptoKey;
                    *(_OWORD *)&v66.fields.fakeValue = v43;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    v63 = v66;
                    *(_QWORD *)(v42 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(
                                              &v63,
                                              0);
                    *(_DWORD *)(v42 + 16) = object[1].klass;
                    *(_DWORD *)(v42 + 32) = UserServantEntity__getSvtClassId(v13, 0, 0, 0);
                    *(_DWORD *)(v42 + 36) = *(_DWORD *)(v15 + 20);
                    v45 = *(_QWORD *)(v42 + 24);
                    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
                    v46 = AutoOrganizationManager__GetAdjustTotalRate(
                            (System_Collections_Generic_IEnumerable_QuestAutoOrganizationAdjustEntity__o *)questAutoOrganizationAdjustEntities,
                            v45,
                            v44);
                    Master_object = (int64_t)v59;
                    *(float *)(v42 + 72) = v46;
                    if ( !v59 )
                      goto LABEL_67;
                    Master_object = DataMasterBase_object__object__int___TryGetEntity(
                                      v59,
                                      &entity,
                                      *(_DWORD *)(v42 + 16),
                                      (const MethodInfo_345B50C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
                    if ( (Master_object & 1) != 0 )
                    {
                      *(_DWORD *)(v42 + 64) = *(_DWORD *)(v15 + 28);
                      Master_object = (int64_t)entity;
                      if ( !entity )
                        goto LABEL_67;
                      Master_object = ServantEntity__GetNotSamePartyKey((ServantEntity_o *)entity, 0);
                      *(_DWORD *)(v42 + 76) = Master_object;
                    }
                    items = v61->fields._items;
                    v54 = Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__Add__;
                    ++v61->fields._version;
                    if ( !items )
                      goto LABEL_67;
                    size = v61->fields._size;
                    if ( (unsigned int)size >= LODWORD(items->max_length) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v61,
                        (Il2CppObject *)v42,
                        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v56 = &items->obj.klass + size;
                      v61->fields._size = size + 1;
                      v56[4] = (Il2CppClass *)v42;
                      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v56 + 4), v42, v47, v48, v49, v50, v51, v52);
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
  Master_object = (int64_t)v61;
  if ( !v61 )
LABEL_67:
    sub_1C942F0(Master_object, v9);
  return (AutoOrganizationManager_ServantData_array *)System_Collections_Generic_List_object___ToArray(
                                                        v61,
                                                        (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__ToArray__);
}


void AutoOrganizationManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  AutoOrganizationManager_c *v2; // x0
  ListViewSort_o *autoOrganizationInfo; // x0

  if ( (byte_4D27EE4 & 1) == 0 )
  {
    sub_1C94098(&AutoOrganizationManager_TypeInfo);
    byte_4D27EE4 = 1;
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
    sub_1C942F0(autoOrganizationInfo, v1);
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
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  if ( (byte_4D27EEF & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Aggregate_float__float___);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___);
    sub_1C94098(&System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo);
    sub_1C94098(&System_Func_float__float__float__TypeInfo);
    sub_1C94098(&Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__26_1__);
    sub_1C94098(&Method_AutoOrganizationManager___c__DisplayClass26_0__GetAdjustTotalRate_b__0__);
    sub_1C94098(&AutoOrganizationManager___c__DisplayClass26_0_TypeInfo);
    sub_1C94098(&AutoOrganizationManager___c_TypeInfo);
    byte_4D27EEF = 1;
  }
  v5 = (Il2CppObject *)sub_1C942E4(AutoOrganizationManager___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  v5[1].klass = (Il2CppClass *)userSvtId;
  v8 = (System_Func_T__TResult__o *)sub_1C942E4(System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo);
  System_Func_object__float____ctor(
    v8,
    v5,
    Method_AutoOrganizationManager___c__DisplayClass26_0__GetAdjustTotalRate_b__0__,
    0);
  v9 = System_Linq_Enumerable__Select_object__float_(
         (System_Collections_Generic_IEnumerable_TSource__o *)questAutoOrganizationAdjustEntities,
         (System_Func_TSource__TResult__o *)v8,
         (const MethodInfo_31D3A38 *)Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___);
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
    _9__26_1 = (System_Func_float__float__float__o *)sub_1C942E4(System_Func_float__float__float__TypeInfo);
    System_Func_float__float__float____ctor(
      _9__26_1,
      v13,
      Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__26_1__,
      0);
    static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    static_fields->__9__26_1 = _9__26_1;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__26_1,
      (int32_t)_9__26_1,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  return System_Linq_Enumerable__Aggregate_float__float_(
           v11,
           1.0,
           (System_Func_TAccumulate__TSource__TAccumulate__o *)_9__26_1,
           (const MethodInfo_31A4DC0 *)Method_System_Linq_Enumerable_Aggregate_float__float___);
}


float AutoOrganizationManager__GetAdjustTotalRate_34571884(
        System_Collections_Generic_IEnumerable_QuestAutoOrganizationAdjustEntity__o *questAutoOrganizationAdjustEntities,
        System_Int32_array *individualities,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Func_T__TResult__o *v14; // x20
  System_Collections_Generic_IEnumerable_TResult__o *v15; // x0
  AutoOrganizationManager___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  System_Func_float__float__float__o *_9__27_1; // x20
  Il2CppObject *v19; // x21
  struct AutoOrganizationManager___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7

  if ( (byte_4D27EF0 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Aggregate_float__float___);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___);
    sub_1C94098(&System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo);
    sub_1C94098(&System_Func_float__float__float__TypeInfo);
    sub_1C94098(&Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__27_1__);
    sub_1C94098(&Method_AutoOrganizationManager___c__DisplayClass27_0__GetAdjustTotalRate_b__0__);
    sub_1C94098(&AutoOrganizationManager___c__DisplayClass27_0_TypeInfo);
    sub_1C94098(&AutoOrganizationManager___c_TypeInfo);
    byte_4D27EF0 = 1;
  }
  v5 = sub_1C942E4(AutoOrganizationManager___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  *(_QWORD *)(v5 + 16) = individualities;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)individualities, v8, v9, v10, v11, v12, v13);
  v14 = (System_Func_T__TResult__o *)sub_1C942E4(System_Func_QuestAutoOrganizationAdjustEntity__float__TypeInfo);
  System_Func_object__float____ctor(
    v14,
    (Il2CppObject *)v5,
    Method_AutoOrganizationManager___c__DisplayClass27_0__GetAdjustTotalRate_b__0__,
    0);
  v15 = System_Linq_Enumerable__Select_object__float_(
          (System_Collections_Generic_IEnumerable_TSource__o *)questAutoOrganizationAdjustEntities,
          (System_Func_TSource__TResult__o *)v14,
          (const MethodInfo_31D3A38 *)Method_System_Linq_Enumerable_Select_QuestAutoOrganizationAdjustEntity__float___);
  v16 = AutoOrganizationManager___c_TypeInfo;
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)v15;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v16 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__27_1 = v16->static_fields->__9__27_1;
  if ( !_9__27_1 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = AutoOrganizationManager___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__27_1 = (System_Func_float__float__float__o *)sub_1C942E4(System_Func_float__float__float__TypeInfo);
    System_Func_float__float__float____ctor(
      _9__27_1,
      v19,
      Method_AutoOrganizationManager___c__GetAdjustTotalRate_b__27_1__,
      0);
    static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    static_fields->__9__27_1 = _9__27_1;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__27_1,
      (int32_t)_9__27_1,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  return System_Linq_Enumerable__Aggregate_float__float_(
           v17,
           1.0,
           (System_Func_TAccumulate__TSource__TAccumulate__o *)_9__27_1,
           (const MethodInfo_31A4DC0 *)Method_System_Linq_Enumerable_Aggregate_float__float___);
}


System_Boolean_array *AutoOrganizationManager__GetAutoOrganizationSetting(
        ListViewSort_o *sort,
        int32_t *settingUnitNum,
        const MethodInfo *method)
{
  __int64 Filter_44656304; // x0
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

  if ( (byte_4D27EE5 & 1) == 0 )
  {
    sub_1C94098(&bool___TypeInfo);
    byte_4D27EE5 = 1;
  }
  Filter_44656304 = sub_1C94140(bool___TypeInfo, 13);
  if ( !sort )
LABEL_38:
    sub_1C942F0(Filter_44656304, v6);
  v7 = Filter_44656304;
  v8 = 0;
  v9 = Filter_44656304 + 32;
  do
  {
    Filter_44656304 = ListViewSort__GetFilter_44656304(sort, v8, 0);
    if ( !v7 )
      goto LABEL_38;
    v10 = *(unsigned int *)(v7 + 24);
    if ( v8 >= v10 )
      goto LABEL_37;
    *(_BYTE *)(v9 + v8++) = Filter_44656304 & 1;
  }
  while ( v8 != 13 );
  if ( (unsigned int)v10 < 2 )
LABEL_37:
    sub_1C942F8(Filter_44656304);
  v11 = *(unsigned __int8 *)(v7 + 33);
  v12 = *(_BYTE *)(v7 + 32) == 0;
  v13 = v11 == 0;
  v14 = v11 != 0;
  v15 = v13;
  *(_BYTE *)(v7 + 32) = (*(_BYTE *)(v7 + 32) != 0) | v15;
  *(_BYTE *)(v7 + 33) = v14 || v12;
  Filter_44656304 = sub_1C94140(bool___TypeInfo, 5);
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
    if ( !Filter_44656304 )
      goto LABEL_38;
    if ( v17 >= *(unsigned int *)(Filter_44656304 + 24) )
      goto LABEL_37;
    v21 = *(unsigned __int8 *)(v7 + 34 + v17);
    *(_BYTE *)(Filter_44656304 + 32 + v17++) = v21;
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
  Filter_44656304 = sub_1C94140(bool___TypeInfo, 6);
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
    if ( !Filter_44656304 )
      goto LABEL_38;
    v28 = *(unsigned int *)(Filter_44656304 + 24);
    if ( v24 >= v28 )
      goto LABEL_37;
    v29 = *(unsigned __int8 *)(v7 + 39 + v24);
    *(_BYTE *)(Filter_44656304 + 32 + v24++) = v29;
    if ( v29 )
      LODWORD(v25) = v24;
  }
  while ( v24 != 6 );
  if ( !(_DWORD)v25 )
  {
    v25 = 0;
    while ( v25 < v28 )
    {
      *(_BYTE *)(Filter_44656304 + 32 + v25++) = 1;
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
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_List_object__o *v24; // x0
  System_Collections_Generic_List_object__o *v25; // x0
  int32_t v26; // w25
  int v27; // w8
  __int64 v28; // x26
  __int64 v29; // x26
  __int64 v30; // x21
  __int64 v31; // x27
  int v32; // w8
  __int64 v33; // x27
  int v34; // w24
  char v35; // w20
  __int64 v36; // x21
  SkillLvEntity_o *v37; // x28
  __int64 v38; // x21
  __int64 v39; // x29
  int32_t v40; // w21
  EventUpValInfo_o *v41; // x29
  __int64 v42; // x21
  __int64 v43; // x27
  int v44; // w8
  __int64 v45; // x26
  unsigned int v46; // w20
  __int64 v47; // x8
  ServantSkillMaster_o *v49; // [xsp+8h] [xbp-88h]
  Il2CppObject *v50; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_object__o *v51; // [xsp+18h] [xbp-78h]
  EventUpValSetupInfo_o *setupInfo; // [xsp+20h] [xbp-70h]
  EventUpValInfo_o *eventUpVallInfo; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_4D27EEB & 1) == 0 )
  {
    sub_1C94098(&System_Comparison_EventBonusFilterEntity__TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_EventBonusFilterMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C94098(&EventUpValInfo_TypeInfo);
    sub_1C94098(&EventUpValSetupInfo_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1C94098(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_SkillInfo___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_EventUpValInfo__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_SkillInfo__TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&Method_AutoOrganizationManager___c__GetEventBonusIds_b__22_0__);
    sub_1C94098(&AutoOrganizationManager___c_TypeInfo);
    byte_4D27EEB = 1;
  }
  eventUpVallInfo = 0;
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C942E4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_3718384 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventMaster___);
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
          (const MethodInfo_3718A78 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
    return v3;
  }
  v8 = System_Linq_Enumerable__ToArray_int_(
         v7,
         (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
  setupInfo = (EventUpValSetupInfo_o *)sub_1C942E4(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_42501600(setupInfo, v8, 0, 0, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v50 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantMaster___);
  v49 = (ServantSkillMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  v9 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v10 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
  Master_object = sub_1C94140(int___TypeInfo, 1);
  if ( !Master_object )
    goto LABEL_61;
  v5 = Master_object;
  if ( !*(_DWORD *)(Master_object + 24) )
    goto LABEL_62;
  *(_DWORD *)(Master_object + 32) = eventId;
  if ( !v10 )
LABEL_61:
    sub_1C942F0(Master_object, v5);
  FilterList = EventBonusFilterMaster__GetFilterList(
                 (EventBonusFilterMaster_o *)v10,
                 (System_Int32_array *)Master_object,
                 1,
                 1,
                 0);
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)v50;
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
        _9__22_0 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_EventBonusFilterEntity__TypeInfo);
        System_Comparison_object____ctor(
          _9__22_0,
          v16,
          Method_AutoOrganizationManager___c__GetEventBonusIds_b__22_0__,
          0);
        static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
        static_fields->__9__22_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__22_0;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__22_0,
          (int32_t)_9__22_0,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23);
      }
      System_Collections_Generic_List_object___Sort_59164920(
        v13,
        _9__22_0,
        (const MethodInfo_386C8F8 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
      v24 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_EventUpValInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v24,
        (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
      v25 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_SkillInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v25,
        (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
      if ( v13->fields._size >= 1 )
      {
        v26 = 0;
        v51 = v13;
        do
        {
          Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                     v13,
                                     v26,
                                     (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
          if ( !Master_object )
            goto LABEL_61;
          v27 = *(_DWORD *)(Master_object + 20);
          v28 = Master_object;
          if ( v27 == 2 )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventBonusFilterGroupMemberMaster___);
            if ( !Master_object )
              goto LABEL_61;
            Master_object = (__int64)EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                                       (EventBonusFilterGroupMemberMaster_o *)Master_object,
                                       *(_DWORD *)(v28 + 24),
                                       0);
            if ( !Master_object )
              goto LABEL_61;
            v44 = *(_DWORD *)(Master_object + 24);
            v45 = Master_object;
            if ( v44 >= 1 )
            {
              v46 = 0;
              while ( v46 < v44 )
              {
                v47 = *(_QWORD *)(v45 + 8LL * (int)v46 + 32);
                if ( !v47 || !v3 )
                  goto LABEL_61;
                Master_object = System_Collections_Generic_HashSet_int___Add(
                                  v3,
                                  *(_DWORD *)(v47 + 20),
                                  (const MethodInfo_3719588 *)Method_System_Collections_Generic_HashSet_int__Add__);
                v44 = *(_DWORD *)(v45 + 24);
                if ( (int)++v46 >= v44 )
                  goto LABEL_59;
              }
LABEL_62:
              sub_1C942F8(Master_object);
            }
          }
          else if ( v27 == 1 )
          {
            if ( !v12 )
              goto LABEL_61;
            Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                       v12,
                                       *(_DWORD *)(Master_object + 24),
                                       (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Master_object )
              goto LABEL_61;
            v29 = Master_object;
            v31 = *(_QWORD *)(Master_object + 16);
            v30 = *(_QWORD *)(Master_object + 24);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v54.fields.currentCryptoKey = v31;
            *(_QWORD *)&v54.fields.fakeValue = v30;
            v5 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v54, 0);
            Master_object = (__int64)v49;
            if ( !v49 )
              goto LABEL_61;
            Master_object = (__int64)ServantSkillMaster__getServantSkillList(v49, v5, 0);
            if ( !Master_object )
              goto LABEL_61;
            v32 = *(_DWORD *)(Master_object + 24);
            v33 = Master_object;
            if ( v32 >= 1 )
            {
              v34 = 0;
              v35 = 0;
              do
              {
                if ( v34 >= (unsigned int)v32 )
                  goto LABEL_62;
                v36 = *(_QWORD *)(v33 + 8LL * v34 + 32);
                if ( !v36 || !v9 )
                  goto LABEL_61;
                Master_object = (__int64)SkillLvMaster__GetEntity((SkillLvMaster_o *)v9, *(_DWORD *)(v36 + 28), 1, 0);
                if ( Master_object && !*(_DWORD *)(v36 + 44) )
                {
                  v37 = (SkillLvEntity_o *)Master_object;
                  v38 = *(_QWORD *)(v29 + 16);
                  v39 = *(_QWORD *)(v29 + 24);
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v55.fields.currentCryptoKey = v38;
                  *(_QWORD *)&v55.fields.fakeValue = v39;
                  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v55, 0);
                  v41 = (EventUpValInfo_o *)sub_1C942E4(EventUpValInfo_TypeInfo);
                  EventUpValInfo___ctor(v41, setupInfo, v40, 1, 1, 0, 0);
                  eventUpVallInfo = v41;
                  Master_object = SkillLvEntity__getEventUpVal_43680700(v37, &eventUpVallInfo, 1, 1, 0, 1, 0, -1, 0);
                  v35 |= Master_object;
                }
                v32 = *(_DWORD *)(v33 + 24);
                ++v34;
              }
              while ( v34 < v32 );
              v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)v50;
              if ( (v35 & 1) != 0 )
              {
                v43 = *(_QWORD *)(v29 + 16);
                v42 = *(_QWORD *)(v29 + 24);
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v56.fields.currentCryptoKey = v43;
                *(_QWORD *)&v56.fields.fakeValue = v42;
                Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v56, 0);
                if ( !v3 )
                  goto LABEL_61;
                System_Collections_Generic_HashSet_int___Add(
                  v3,
                  Master_object,
                  (const MethodInfo_3719588 *)Method_System_Collections_Generic_HashSet_int__Add__);
              }
            }
          }
LABEL_59:
          v13 = v51;
          ++v26;
        }
        while ( v26 < v51->fields._size );
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
    sub_1C942F0(0, method);
  max_length_low = LODWORD(rarityFlag->max_length);
  v4 = 0;
  v5 = 0;
  m_Items = rarityFlag->m_Items;
  do
  {
    if ( (__int64)v4 <= (int)max_length_low )
    {
      if ( v4 >= max_length_low )
        sub_1C942F8(v5);
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
  __int64 Filter_44656352; // x0
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

  if ( (byte_4D27EE6 & 1) == 0 )
  {
    sub_1C94098(&bool___TypeInfo);
    byte_4D27EE6 = 1;
  }
  Filter_44656352 = sub_1C94140(bool___TypeInfo, 7);
  if ( !sort )
LABEL_25:
    sub_1C942F0(Filter_44656352, v4);
  v5 = Filter_44656352;
  v6 = 0;
  v7 = Filter_44656352 + 32;
  do
  {
    Filter_44656352 = ListViewSort__GetFilter_44656352(sort, v6, 0);
    if ( !v5 )
      goto LABEL_25;
    v8 = *(unsigned int *)(v5 + 24);
    if ( v6 >= v8 )
      goto LABEL_24;
    *(_BYTE *)(v7 + v6++) = Filter_44656352 & 1;
  }
  while ( v6 != 7 );
  if ( (unsigned int)v8 < 2 )
LABEL_24:
    sub_1C942F8(Filter_44656352);
  v9 = *(unsigned __int8 *)(v5 + 33);
  v10 = *(_BYTE *)(v5 + 32) == 0;
  v11 = v9 == 0;
  v12 = v9 != 0;
  v13 = v11;
  *(_BYTE *)(v5 + 32) = (*(_BYTE *)(v5 + 32) != 0) | v13;
  *(_BYTE *)(v5 + 33) = v12 || v10;
  Filter_44656352 = sub_1C94140(bool___TypeInfo, 5);
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
    if ( !Filter_44656352 )
      goto LABEL_25;
    if ( v15 >= *(unsigned int *)(Filter_44656352 + 24) )
      goto LABEL_24;
    v19 = *(unsigned __int8 *)(v5 + 34 + v15);
    *(_BYTE *)(Filter_44656352 + 32 + v15++) = v19;
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

  if ( (byte_4D27EE3 & 1) == 0 )
  {
    sub_1C94098(&AutoOrganizationManager_TypeInfo);
    byte_4D27EE3 = 1;
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
    sub_1C942F0(autoOrganizationInfo, v1);
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

  if ( (byte_4D27EED & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    byte_4D27EED = 1;
  }
  if ( !restrictionInfo || !restrictionInfo->fields.isAllOutBattle )
    return 0;
  allOutBattleGroupNo = restrictionInfo->fields.allOutBattleGroupNo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( !Master_object )
    sub_1C942F0(0, v7);
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

  if ( (byte_4D27EEE & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D27EEE = 1;
  }
  entity = 0;
  if ( !restrictionInfo || !restrictionInfo->fields.isDataLostBattle )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2633A )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2633A = 1;
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
    sub_1C942F0(IsRestart, v5);
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

  if ( (byte_4D27EEC & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_UserEventServantFatigueMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D27EEC = 1;
  }
  recoverAt = 0;
  isRecover = 0;
  if ( !restrictionInfo || !restrictionInfo->fields.isFatigure )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserEventServantFatigueMaster___);
  if ( !Master_object )
    sub_1C942F0(0, v6);
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
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4D27EE8 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_1C94098(&Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__get_Current__);
    sub_1C94098(&System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___79015152);
    sub_1C94098(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
    sub_1C94098(&Method_AutoOrganizationManager___c__SortClassRelation_b__19_0__);
    sub_1C94098(&AutoOrganizationManager___c_TypeInfo);
    byte_4D27EE8 = 1;
  }
  entity = 0;
  memset(&v29, 0, sizeof(v29));
  v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor_59156264(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)dataList,
    (const MethodInfo_386A728 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___79015152);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantClassMaster___);
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( enemyClassId )
  {
    if ( !Master_object )
      goto LABEL_32;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &entity,
                                      enemyClassId,
                                      (const MethodInfo_345B50C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_32;
      enemyClassId = HIDWORD(entity[3].monitor);
    }
  }
  if ( !v5 )
LABEL_32:
    sub_1C942F0(Master_object, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    v5,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v29,
           (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__);
    if ( !v9 )
      break;
    current = v29.fields._current;
    if ( !v29.fields._current )
      sub_1C942F0(v9, v10);
    if ( !v8 )
      sub_1C942F0(v9, v10);
    klass = (int32_t)v29.fields._current[2].klass;
    v13 = DataMasterBase_object__object__int___TryGetEntity(
            v8,
            &entity,
            klass,
            (const MethodInfo_345B50C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( v13 )
    {
      if ( !entity )
        sub_1C942F0(v13, v14);
      klass = HIDWORD(entity[3].monitor);
    }
    if ( enemyClassId )
      Rate = ClassRelationMaster__getRate(klass, enemyClassId, 0);
    else
      Rate = 1.0;
    *(float *)&current[3].klass = *(float *)&current[4].monitor * (float)(Rate * (float)SHIDWORD(current[2].klass));
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__);
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
    _9__19_0 = (System_Func_T__TResult__o *)sub_1C942E4(System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    System_Func_object__float____ctor(_9__19_0, v18, Method_AutoOrganizationManager___c__SortClassRelation_b__19_0__, 0);
    static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = (struct System_Func_AutoOrganizationManager_ServantData__float__o *)_9__19_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__19_0,
      (int32_t)_9__19_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__float_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v5,
                                                               (System_Func_TSource__TKey__o *)_9__19_0,
                                                               (const MethodInfo_31CC7C8 *)Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___);
  return (AutoOrganizationManager_ServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                                        v26,
                                                        (const MethodInfo_31DC8AC *)Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___);
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
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v28; // x0
  AutoOrganizationManager___c_c *v29; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v30; // x19
  System_Func_object__int__o *_9__20_1; // x20
  Il2CppObject *v32; // x21
  struct AutoOrganizationManager___c_StaticFields *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v40; // x0
  AutoOrganizationManager___c_c *v41; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v42; // x19
  System_Func_T__TResult__o *_9__20_2; // x20
  Il2CppObject *v44; // x21
  struct AutoOrganizationManager___c_StaticFields *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v52; // x0
  AutoOrganizationManager___c_c *v53; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v54; // x19
  System_Func_object__int__o *_9__20_3; // x20
  Il2CppObject *v56; // x21
  struct AutoOrganizationManager___c_StaticFields *v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v64; // x0
  AutoOrganizationManager___c_c *v65; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v66; // x19
  System_Func_object__long__o *_9__20_4; // x20
  Il2CppObject *v68; // x21
  struct AutoOrganizationManager___c_StaticFields *v69; // x0
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x0
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v79; // [xsp+20h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4D27EE9 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_1C94098(&Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___);
    sub_1C94098(&Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__int___);
    sub_1C94098(&Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__long___);
    sub_1C94098(&Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__float___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__get_Current__);
    sub_1C94098(&System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    sub_1C94098(&System_Func_AutoOrganizationManager_ServantData__long__TypeInfo);
    sub_1C94098(&System_Func_AutoOrganizationManager_ServantData__int__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___79015152);
    sub_1C94098(&System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
    sub_1C94098(&Method_AutoOrganizationManager___c__SortServant_b__20_0__);
    sub_1C94098(&Method_AutoOrganizationManager___c__SortServant_b__20_1__);
    sub_1C94098(&Method_AutoOrganizationManager___c__SortServant_b__20_2__);
    sub_1C94098(&Method_AutoOrganizationManager___c__SortServant_b__20_3__);
    sub_1C94098(&Method_AutoOrganizationManager___c__SortServant_b__20_4__);
    sub_1C94098(&AutoOrganizationManager___c_TypeInfo);
    byte_4D27EE9 = 1;
  }
  entity = 0;
  memset(&v79, 0, sizeof(v79));
  v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_AutoOrganizationManager_ServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor_59156264(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)dataList,
    (const MethodInfo_386A728 *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData___ctor___79015152);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantClassMaster___);
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( enemyClassId )
  {
    if ( !Master_object )
      goto LABEL_56;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &entity,
                                      enemyClassId,
                                      (const MethodInfo_345B50C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_56;
      enemyClassId = HIDWORD(entity[3].monitor);
    }
  }
  if ( !v5 )
LABEL_56:
    sub_1C942F0(Master_object, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v78,
    v5,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_AutoOrganizationManager_ServantData__GetEnumerator__);
  v79 = v78;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v79,
           (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__MoveNext__);
    if ( !v9 )
      break;
    current = v79.fields._current;
    if ( !v79.fields._current )
      sub_1C942F0(v9, v10);
    if ( !v8 )
      sub_1C942F0(v9, v10);
    klass = (int32_t)v79.fields._current[2].klass;
    v13 = DataMasterBase_object__object__int___TryGetEntity(
            v8,
            &entity,
            klass,
            (const MethodInfo_345B50C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( v13 )
    {
      if ( !entity )
        sub_1C942F0(v13, v14);
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
    &v79,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_AutoOrganizationManager_ServantData__Dispose__);
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
    _9__20_0 = (System_Func_T__TResult__o *)sub_1C942E4(System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    System_Func_object__float____ctor(_9__20_0, v20, Method_AutoOrganizationManager___c__SortServant_b__20_0__, 0);
    static_fields = AutoOrganizationManager___c_TypeInfo->static_fields;
    static_fields->__9__20_0 = (struct System_Func_AutoOrganizationManager_ServantData__float__o *)_9__20_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__20_0,
      (int32_t)_9__20_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v28 = System_Linq_Enumerable__OrderByDescending_object__float_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v5,
          (System_Func_TSource__TKey__o *)_9__20_0,
          (const MethodInfo_31CC7C8 *)Method_System_Linq_Enumerable_OrderByDescending_AutoOrganizationManager_ServantData__float___);
  v29 = AutoOrganizationManager___c_TypeInfo;
  v30 = v28;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v29 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__20_1 = (System_Func_object__int__o *)v29->static_fields->__9__20_1;
  if ( !_9__20_1 )
  {
    if ( !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v29 = AutoOrganizationManager___c_TypeInfo;
    }
    v32 = (Il2CppObject *)v29->static_fields->__9;
    _9__20_1 = (System_Func_object__int__o *)sub_1C942E4(System_Func_AutoOrganizationManager_ServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__20_1, v32, Method_AutoOrganizationManager___c__SortServant_b__20_1__, 0);
    v33 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v33->__9__20_1 = (struct System_Func_AutoOrganizationManager_ServantData__int__o *)_9__20_1;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v33->__9__20_1, (int32_t)_9__20_1, v34, v35, v36, v37, v38, v39);
  }
  v40 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v30,
          (System_Func_TSource__TKey__o *)_9__20_1,
          (const MethodInfo_31DC13C *)Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__int___);
  v41 = AutoOrganizationManager___c_TypeInfo;
  v42 = v40;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v41 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__20_2 = (System_Func_T__TResult__o *)v41->static_fields->__9__20_2;
  if ( !_9__20_2 )
  {
    if ( !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v41 = AutoOrganizationManager___c_TypeInfo;
    }
    v44 = (Il2CppObject *)v41->static_fields->__9;
    _9__20_2 = (System_Func_T__TResult__o *)sub_1C942E4(System_Func_AutoOrganizationManager_ServantData__float__TypeInfo);
    System_Func_object__float____ctor(_9__20_2, v44, Method_AutoOrganizationManager___c__SortServant_b__20_2__, 0);
    v45 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v45->__9__20_2 = (struct System_Func_AutoOrganizationManager_ServantData__float__o *)_9__20_2;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v45->__9__20_2, (int32_t)_9__20_2, v46, v47, v48, v49, v50, v51);
  }
  v52 = System_Linq_Enumerable__ThenByDescending_object__float_(
          v42,
          (System_Func_TSource__TKey__o *)_9__20_2,
          (const MethodInfo_31DC2D4 *)Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__float___);
  v53 = AutoOrganizationManager___c_TypeInfo;
  v54 = v52;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v53 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__20_3 = (System_Func_object__int__o *)v53->static_fields->__9__20_3;
  if ( !_9__20_3 )
  {
    if ( !v53->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v53);
      v53 = AutoOrganizationManager___c_TypeInfo;
    }
    v56 = (Il2CppObject *)v53->static_fields->__9;
    _9__20_3 = (System_Func_object__int__o *)sub_1C942E4(System_Func_AutoOrganizationManager_ServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__20_3, v56, Method_AutoOrganizationManager___c__SortServant_b__20_3__, 0);
    v57 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v57->__9__20_3 = (struct System_Func_AutoOrganizationManager_ServantData__int__o *)_9__20_3;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v57->__9__20_3, (int32_t)_9__20_3, v58, v59, v60, v61, v62, v63);
  }
  v64 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v54,
          (System_Func_TSource__TKey__o *)_9__20_3,
          (const MethodInfo_31DC13C *)Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__int___);
  v65 = AutoOrganizationManager___c_TypeInfo;
  v66 = v64;
  if ( !AutoOrganizationManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager___c_TypeInfo);
    v65 = AutoOrganizationManager___c_TypeInfo;
  }
  _9__20_4 = (System_Func_object__long__o *)v65->static_fields->__9__20_4;
  if ( !_9__20_4 )
  {
    if ( !v65->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v65);
      v65 = AutoOrganizationManager___c_TypeInfo;
    }
    v68 = (Il2CppObject *)v65->static_fields->__9;
    _9__20_4 = (System_Func_object__long__o *)sub_1C942E4(System_Func_AutoOrganizationManager_ServantData__long__TypeInfo);
    System_Func_object__long____ctor(_9__20_4, v68, Method_AutoOrganizationManager___c__SortServant_b__20_4__, 0);
    v69 = AutoOrganizationManager___c_TypeInfo->static_fields;
    v69->__9__20_4 = (struct System_Func_AutoOrganizationManager_ServantData__long__o *)_9__20_4;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v69->__9__20_4, (int32_t)_9__20_4, v70, v71, v72, v73, v74, v75);
  }
  v76 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenByDescending_object__long_(
                                                               v66,
                                                               (System_Func_TSource__TKey__o *)_9__20_4,
                                                               (const MethodInfo_31DC208 *)Method_System_Linq_Enumerable_ThenByDescending_AutoOrganizationManager_ServantData__long___);
  return (AutoOrganizationManager_ServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                                        v76,
                                                        (const MethodInfo_31DC8AC *)Method_System_Linq_Enumerable_ToArray_AutoOrganizationManager_ServantData___);
}


ListViewSort_o *AutoOrganizationManager__get_SortInfo(const MethodInfo *method)
{
  AutoOrganizationManager_c *v1; // x0

  if ( (byte_4D27EE1 & 1) == 0 )
  {
    sub_1C94098(&AutoOrganizationManager_TypeInfo);
    byte_4D27EE1 = 1;
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

  if ( (byte_4D27EE2 & 1) == 0 )
  {
    sub_1C94098(&AutoOrganizationManager_TypeInfo);
    byte_4D27EE2 = 1;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D27EF2 & 1) == 0 )
  {
    sub_1C94098(&AutoOrganizationManager___c_TypeInfo);
    byte_4D27EF2 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(AutoOrganizationManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AutoOrganizationManager___c_TypeInfo->static_fields->__9 = (struct AutoOrganizationManager___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)AutoOrganizationManager___c_TypeInfo->static_fields,
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
    sub_1C942F0(this, a);
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
    sub_1C942F0(this, a);
  return b->fields.priority - a->fields.priority;
}


float AutoOrganizationManager___c___SortClassRelation_b__19_0(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1C942F0(this, 0);
  return d->fields.relationNum;
}


float AutoOrganizationManager___c___SortServant_b__20_0(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1C942F0(this, 0);
  return d->fields.relationAtk;
}


int32_t AutoOrganizationManager___c___SortServant_b__20_1(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1C942F0(this, 0);
  return d->fields.treasureDeviceLv;
}


float AutoOrganizationManager___c___SortServant_b__20_2(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1C942F0(this, 0);
  return d->fields.relationDef;
}


int32_t AutoOrganizationManager___c___SortServant_b__20_3(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1C942F0(this, 0);
  return d->fields.svtId;
}


int64_t AutoOrganizationManager___c___SortServant_b__20_4(
        AutoOrganizationManager___c_o *this,
        AutoOrganizationManager_ServantData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1C942F0(this, 0);
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
    sub_1C942F0(this, 0);
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
    sub_1C942F0(this, 0);
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
    sub_1C942F0(this, 0);
  return QuestAutoOrganizationAdjustEntity__GetAdjustRate_43222776(entity, this->fields.individualities, 0);
}