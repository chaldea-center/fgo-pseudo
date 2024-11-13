void __fastcall AssumedEffectExtractLogic__FromEnemyScript(
        BattleInfoData_o *battleInfo,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_IEnumerable_BattleDeckServantData__o *v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerable_BattleDeckServantData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleDeckServantData__o *v16; // x19
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v20; // x1
  __int64 v21; // x19
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  BattleDeckServantData_o *v30; // x0
  __int64 v31; // x1
  System_Collections_Generic_HashSet_int__o *EffectIdHashSet; // x21
  System_Collections_Generic_IEnumerable_T__o *AssumedEffectId; // x0
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0

  if ( (byte_4B183DA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__UnionWith__, toUpdate, method);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v11, v12);
    byte_4B183DA = 1;
  }
  if ( battleInfo )
  {
    v13 = BattleInfoData__AllDeckServantEnumerable(battleInfo, 0LL);
    if ( !v13 )
      sub_1BCAA3C(0LL, v14);
    klass = v13->klass;
    v16 = v13;
    v17 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleDeckServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(v13, System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, 0LL);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleDeckServantData__o *, _QWORD))p_method)(
            v16,
            *(_QWORD *)(p_method + 8));
    if ( !v21 )
      sub_1BCAA3C(0LL, v20);
    while ( 1 )
    {
      v22 = *(_QWORD *)v21;
      v23 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
      {
        v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v24 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v23;
          v24 += 4;
          if ( !v23 )
            goto LABEL_16;
        }
        v25 = v22 + 16LL * *v24 + 312;
      }
      else
      {
LABEL_16:
        v25 = sub_1C1C7C0(v21, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v21, *(_QWORD *)(v25 + 8)) & 1) == 0 )
        break;
      v26 = *(_QWORD *)v21;
      v27 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
      {
        v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BattleDeckServantData__c **)v28 - 1) != System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo )
        {
          --v27;
          v28 += 4;
          if ( !v27 )
            goto LABEL_23;
        }
        v29 = v26 + 16LL * *v28 + 312;
      }
      else
      {
LABEL_23:
        v29 = sub_1C1C7C0(v21, System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, 0LL);
      }
      v30 = (BattleDeckServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v21, *(_QWORD *)(v29 + 8));
      if ( !toUpdate )
        sub_1BCAA3C(v30, v31);
      if ( !v30 )
        sub_1BCAA3C(0LL, v31);
      EffectIdHashSet = toUpdate->fields.EffectIdHashSet;
      AssumedEffectId = (System_Collections_Generic_IEnumerable_T__o *)BattleDeckServantData__GetAssumedEffectId(
                                                                         v30,
                                                                         0LL);
      if ( !EffectIdHashSet )
        sub_1BCAA3C(AssumedEffectId, AssumedEffectId);
      System_Collections_Generic_HashSet_int___UnionWith(
        EffectIdHashSet,
        AssumedEffectId,
        (const MethodInfo_3455DB8 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    v34 = *(_QWORD *)v21;
    v35 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_33;
      }
      v37 = v34 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_33:
      v37 = sub_1C1C7C0(v21, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v37)(v21, *(_QWORD *)(v37 + 8));
  }
}


void __fastcall AssumedEffectExtractLogic__FromItem(
        int32_t id,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  int32_t v13; // w21
  int32_t v14; // w20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B183DB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, toUpdate, method);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B183DB = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_17;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          id,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    return;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_17;
  Instance = (DataManager_o *)ItemEntity__GetBattleAppearEffect((ItemEntity_o *)entity, 0LL);
  if ( !entity )
    goto LABEL_17;
  v13 = (int)Instance;
  Instance = (DataManager_o *)ItemEntity__GetBattleGetEffect((ItemEntity_o *)entity, 0LL);
  v14 = (int)Instance;
  if ( v13 >= 1 )
  {
    if ( !toUpdate )
      goto LABEL_17;
    Instance = (DataManager_o *)toUpdate->fields.EffectIdHashSet;
    if ( !Instance )
      goto LABEL_17;
    Instance = (DataManager_o *)System_Collections_Generic_HashSet_int___Add(
                                  (System_Collections_Generic_HashSet_int__o *)Instance,
                                  v13,
                                  (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  if ( v14 < 1 )
    return;
  if ( !toUpdate || (Instance = (DataManager_o *)toUpdate->fields.EffectIdHashSet) == 0LL )
LABEL_17:
    sub_1BCAA3C(Instance, v12);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)Instance,
    v14,
    (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall AssumedEffectExtractLogic__FromQuestPhase(
        QuestPhaseEntity_o *questPhaseEntity,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  QuestPhaseEntity_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_HashSet_int__o *EffectIdHashSet; // x21
  System_Collections_Generic_HashSet_int__o *v10; // x21
  __int64 v11; // x1
  long double inited; // q0
  _QWORD *v13; // x21
  System_Collections_Generic_HashSet_int__o *cameraIdHashSet; // x20
  __int64 v15; // x8
  __int64 v16; // x0
  __int64 v17; // x0

  v4 = questPhaseEntity;
  if ( (byte_4B183D9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_int___, toUpdate, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, v5, v6);
    questPhaseEntity = (QuestPhaseEntity_o *)sub_1BCA7E0(
                                               &Method_System_Collections_Generic_HashSet_int__UnionWith__,
                                               v7,
                                               v8);
    byte_4B183D9 = 1;
  }
  if ( v4 )
  {
    if ( !toUpdate )
      goto LABEL_18;
    EffectIdHashSet = toUpdate->fields.EffectIdHashSet;
    questPhaseEntity = (QuestPhaseEntity_o *)QuestPhaseEntity__GetAssumedEffectId(v4, 0LL);
    if ( !EffectIdHashSet )
      goto LABEL_18;
    System_Collections_Generic_HashSet_int___UnionWith(
      EffectIdHashSet,
      (System_Collections_Generic_IEnumerable_T__o *)questPhaseEntity,
      (const MethodInfo_3455DB8 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    v10 = toUpdate->fields.EffectIdHashSet;
    questPhaseEntity = (QuestPhaseEntity_o *)QuestPhaseEntity__getSpecialShadowEffectId(v4, 0LL);
    if ( !v10 )
      goto LABEL_18;
    System_Collections_Generic_HashSet_int___Add(
      v10,
      (int32_t)questPhaseEntity,
      (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
    v13 = Method_System_Array_Empty_int___;
    cameraIdHashSet = toUpdate->fields.cameraIdHashSet;
    v15 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v15 )
    {
      sub_1C1C718(Method_System_Array_Empty_int___, v11);
      v15 = v13[7];
    }
    v16 = *(_QWORD *)(v15 + 16);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1C1C6BC(inited);
    if ( !*(_DWORD *)(v16 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v16, v11);
    v17 = *(_QWORD *)(v13[7] + 16LL);
    if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
      v17 = sub_1C1C6BC(inited);
    questPhaseEntity = (QuestPhaseEntity_o *)QuestPhaseEntity__GetAddUniqueCameraIds(
                                               v4,
                                               **(System_Int32_array ***)(v17 + 184),
                                               0LL);
    if ( !cameraIdHashSet )
LABEL_18:
      sub_1BCAA3C(questPhaseEntity, toUpdate);
    System_Collections_Generic_HashSet_int___UnionWith(
      cameraIdHashSet,
      (System_Collections_Generic_IEnumerable_T__o *)questPhaseEntity,
      (const MethodInfo_3455DB8 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
}


void __fastcall AssumedEffectExtractLogic__FromServant(
        BattleUserServantData_array *servants,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x21
  __int64 v31; // x1
  System_Collections_Generic_HashSet_int__o *Master_object; // x0
  System_Collections_Generic_IEnumerable_T__o *v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_Func_object__object__o *v43; // x22
  System_Collections_Generic_IEnumerable_T__o *v44; // x0
  System_Collections_Generic_IEnumerable_T__o *v45; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x20
  AssumedEffectExtractLogic___c_c *v50; // x8
  System_Func_object__object__o *_9__2_1; // x21
  Il2CppObject *v52; // x22
  struct AssumedEffectExtractLogic___c_StaticFields *static_fields; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7

  if ( (byte_4B183D7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_ExcludeNull_ServantEntity___, toUpdate, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_SelectMany_ServantEntity__int___, v10, v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_BattleUserServantData__ServantEntity___, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_ServantEntity___, v14, v15);
    sub_1BCA7E0(&System_Func_BattleUserServantData__ServantEntity__TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Func_ServantEntity__IEnumerable_int___TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v20, v21);
    sub_1BCA7E0(&Method_AssumedEffectExtractLogic___c__FromServant_b__2_1__, v22, v23);
    sub_1BCA7E0(&Method_AssumedEffectExtractLogic___c__DisplayClass2_0__FromServant_b__0__, v24, v25);
    sub_1BCA7E0(&AssumedEffectExtractLogic___c__DisplayClass2_0_TypeInfo, v26, v27);
    sub_1BCA7E0(&AssumedEffectExtractLogic___c_TypeInfo, v28, v29);
    byte_4B183D7 = 1;
  }
  v30 = sub_1BCAA2C(AssumedEffectExtractLogic___c__DisplayClass2_0_TypeInfo, toUpdate, method, v3);
  System_Object___ctor((Il2CppObject *)v30, 0LL);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)servants, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v31);
    Master_object = (System_Collections_Generic_HashSet_int__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !v30 )
      goto LABEL_16;
    *(_QWORD *)(v30 + 16) = Master_object;
    sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 16), (int64_t)Master_object, v34, v35, v36, v37, v38, v39);
    v43 = (System_Func_object__object__o *)sub_1BCAA2C(
                                             System_Func_BattleUserServantData__ServantEntity__TypeInfo,
                                             v40,
                                             v41,
                                             v42);
    System_Func_object__object____ctor(
      v43,
      (Il2CppObject *)v30,
      Method_AssumedEffectExtractLogic___c__DisplayClass2_0__FromServant_b__0__,
      0LL);
    v44 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)servants,
                                                           (System_Func_TSource__TResult__o *)v43,
                                                           (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_BattleUserServantData__ServantEntity___);
    v45 = BasicHelper__ExcludeNull_object_(
            v44,
            (const MethodInfo_2EFE5E8 *)Method_BasicHelper_ExcludeNull_ServantEntity___);
    v49 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v45,
                                                                 (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_ServantEntity___);
    v50 = AssumedEffectExtractLogic___c_TypeInfo;
    if ( !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo, v46);
      v50 = AssumedEffectExtractLogic___c_TypeInfo;
    }
    _9__2_1 = (System_Func_object__object__o *)v50->static_fields->__9__2_1;
    if ( !_9__2_1 )
    {
      if ( !v50->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v50, v46);
        v50 = AssumedEffectExtractLogic___c_TypeInfo;
      }
      v52 = (Il2CppObject *)v50->static_fields->__9;
      _9__2_1 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                   System_Func_ServantEntity__IEnumerable_int___TypeInfo,
                                                   v46,
                                                   v47,
                                                   v48);
      System_Func_object__object____ctor(_9__2_1, v52, Method_AssumedEffectExtractLogic___c__FromServant_b__2_1__, 0LL);
      static_fields = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
      static_fields->__9__2_1 = (struct System_Func_ServantEntity__IEnumerable_int___o *)_9__2_1;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__2_1,
        (int64_t)_9__2_1,
        v54,
        v55,
        v56,
        v57,
        v58,
        v59);
    }
    Master_object = (System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                   v49,
                                                                   (System_Func_TSource__IEnumerable_TResult___o *)_9__2_1,
                                                                   (const MethodInfo_2F45F84 *)Method_System_Linq_Enumerable_SelectMany_ServantEntity__int___);
    if ( !toUpdate
      || (v33 = (System_Collections_Generic_IEnumerable_T__o *)Master_object,
          (Master_object = toUpdate->fields.EffectIdHashSet) == 0LL) )
    {
LABEL_16:
      sub_1BCAA3C(Master_object, v33);
    }
    System_Collections_Generic_HashSet_int___UnionWith(
      Master_object,
      v33,
      (const MethodInfo_3455DB8 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
}


void __fastcall AssumedEffectExtractLogic__FromSkill(
        System_Collections_Generic_IEnumerable_SimpleSkillData__o *skillDataEnumerable,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x21
  __int64 v37; // x1
  System_Collections_Generic_HashSet_int__o *Master_object; // x0
  System_Collections_Generic_IEnumerable_T__o *v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  AssumedEffectExtractLogic___c_c *v49; // x0
  System_Func_SimpleSkillData__bool__o *_9__0_0; // x22
  Il2CppObject *v51; // x23
  struct AssumedEffectExtractLogic___c_StaticFields *static_fields; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x20
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  System_Func_T__TResult__o *v63; // x22
  System_Collections_Generic_IEnumerable_T__o *v64; // x0
  System_Collections_Generic_IEnumerable_T__o *v65; // x0
  System_Object_array *v66; // x0
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  AssumedEffectExtractLogic___c_c *v70; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x20
  System_Func_object__object__o *_9__0_2; // x21
  Il2CppObject *v73; // x22
  struct AssumedEffectExtractLogic___c_StaticFields *v74; // x0
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7

  if ( (byte_4B183D5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_ExcludeNull_SkillEntity___, toUpdate, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_SelectMany_SkillEntity__int___, v10, v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_SimpleSkillData__SkillEntity___, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_SkillEntity___, v14, v15);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_SimpleSkillData___, v16, v17);
    sub_1BCA7E0(&System_Func_SimpleSkillData__SkillEntity__TypeInfo, v18, v19);
    sub_1BCA7E0(&System_Func_SimpleSkillData__bool__TypeInfo, v20, v21);
    sub_1BCA7E0(&System_Func_SkillEntity__IEnumerable_int___TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v24, v25);
    sub_1BCA7E0(&Method_AssumedEffectExtractLogic___c__FromSkill_b__0_0__, v26, v27);
    sub_1BCA7E0(&Method_AssumedEffectExtractLogic___c__FromSkill_b__0_2__, v28, v29);
    sub_1BCA7E0(&Method_AssumedEffectExtractLogic___c__DisplayClass0_0__FromSkill_b__1__, v30, v31);
    sub_1BCA7E0(&AssumedEffectExtractLogic___c__DisplayClass0_0_TypeInfo, v32, v33);
    sub_1BCA7E0(&AssumedEffectExtractLogic___c_TypeInfo, v34, v35);
    byte_4B183D5 = 1;
  }
  v36 = sub_1BCAA2C(AssumedEffectExtractLogic___c__DisplayClass0_0_TypeInfo, toUpdate, method, v3);
  System_Object___ctor((Il2CppObject *)v36, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v37);
  Master_object = (System_Collections_Generic_HashSet_int__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !v36 )
    goto LABEL_21;
  *(_QWORD *)(v36 + 16) = Master_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 16), (int64_t)Master_object, v40, v41, v42, v43, v44, v45);
  v49 = AssumedEffectExtractLogic___c_TypeInfo;
  if ( !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo, v46);
    v49 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  _9__0_0 = v49->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v49->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v49, v46);
      v49 = AssumedEffectExtractLogic___c_TypeInfo;
    }
    v51 = (Il2CppObject *)v49->static_fields->__9;
    _9__0_0 = (System_Func_SimpleSkillData__bool__o *)sub_1BCAA2C(
                                                        System_Func_SimpleSkillData__bool__TypeInfo,
                                                        v46,
                                                        v47,
                                                        v48);
    System_Func_SimpleSkillData__bool____ctor(
      _9__0_0,
      v51,
      Method_AssumedEffectExtractLogic___c__FromSkill_b__0_0__,
      0LL);
    static_fields = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = _9__0_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)_9__0_0, v53, v54, v55, v56, v57, v58);
  }
  v59 = System_Linq_Enumerable__Where_SimpleSkillData_(
          (System_Collections_Generic_IEnumerable_TSource__o *)skillDataEnumerable,
          (System_Func_TSource__bool__o *)_9__0_0,
          (const MethodInfo_2F51B68 *)Method_System_Linq_Enumerable_Where_SimpleSkillData___);
  v63 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_SimpleSkillData__SkillEntity__TypeInfo, v60, v61, v62);
  System_Func_SimpleSkillData__object____ctor(
    v63,
    (Il2CppObject *)v36,
    Method_AssumedEffectExtractLogic___c__DisplayClass0_0__FromSkill_b__1__,
    0LL);
  v64 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_SimpleSkillData__object_(
                                                         v59,
                                                         (System_Func_TSource__TResult__o *)v63,
                                                         (const MethodInfo_2F443BC *)Method_System_Linq_Enumerable_Select_SimpleSkillData__SkillEntity___);
  v65 = BasicHelper__ExcludeNull_object_(v64, (const MethodInfo_2EFE5E8 *)Method_BasicHelper_ExcludeNull_SkillEntity___);
  v66 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v65,
          (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_SkillEntity___);
  v70 = AssumedEffectExtractLogic___c_TypeInfo;
  v71 = (System_Collections_Generic_IEnumerable_TSource__o *)v66;
  if ( !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo, v67);
    v70 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  _9__0_2 = (System_Func_object__object__o *)v70->static_fields->__9__0_2;
  if ( !_9__0_2 )
  {
    if ( !v70->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v70, v67);
      v70 = AssumedEffectExtractLogic___c_TypeInfo;
    }
    v73 = (Il2CppObject *)v70->static_fields->__9;
    _9__0_2 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                 System_Func_SkillEntity__IEnumerable_int___TypeInfo,
                                                 v67,
                                                 v68,
                                                 v69);
    System_Func_object__object____ctor(_9__0_2, v73, Method_AssumedEffectExtractLogic___c__FromSkill_b__0_2__, 0LL);
    v74 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    v74->__9__0_2 = (struct System_Func_SkillEntity__IEnumerable_int___o *)_9__0_2;
    sub_1BCA784((PartyOrganizationUtility_o *)&v74->__9__0_2, (int64_t)_9__0_2, v75, v76, v77, v78, v79, v80);
  }
  Master_object = (System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                 v71,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__0_2,
                                                                 (const MethodInfo_2F45F84 *)Method_System_Linq_Enumerable_SelectMany_SkillEntity__int___);
  if ( !toUpdate
    || (v39 = (System_Collections_Generic_IEnumerable_T__o *)Master_object,
        (Master_object = toUpdate->fields.EffectIdHashSet) == 0LL) )
  {
LABEL_21:
    sub_1BCAA3C(Master_object, v39);
  }
  System_Collections_Generic_HashSet_int___UnionWith(
    Master_object,
    v39,
    (const MethodInfo_3455DB8 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
}


void __fastcall AssumedEffectExtractLogic__FromStage(
        StageEntity_o *stageEntity,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  StageEntity_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_HashSet_int__o *EffectIdHashSet; // x21
  System_Collections_Generic_HashSet_T__o *AudioAssetNameHashSet; // x21
  __int64 v11; // x1
  long double inited; // q0
  _QWORD *v13; // x21
  System_Collections_Generic_HashSet_int__o *cameraIdHashSet; // x20
  __int64 v15; // x8
  __int64 v16; // x0
  __int64 v17; // x0

  v4 = stageEntity;
  if ( (byte_4B183D8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_int___, toUpdate, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_string__UnionWith__, v5, v6);
    stageEntity = (StageEntity_o *)sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v7, v8);
    byte_4B183D8 = 1;
  }
  if ( v4 )
  {
    if ( !toUpdate )
      goto LABEL_18;
    EffectIdHashSet = toUpdate->fields.EffectIdHashSet;
    stageEntity = (StageEntity_o *)StageEntity__GetAssumedEffectId(v4, 0LL);
    if ( !EffectIdHashSet )
      goto LABEL_18;
    System_Collections_Generic_HashSet_int___UnionWith(
      EffectIdHashSet,
      (System_Collections_Generic_IEnumerable_T__o *)stageEntity,
      (const MethodInfo_3455DB8 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    AudioAssetNameHashSet = (System_Collections_Generic_HashSet_T__o *)toUpdate->fields.AudioAssetNameHashSet;
    stageEntity = (StageEntity_o *)StageEntity__GetAssumedVoiceAssetNames(v4, 0LL);
    if ( !AudioAssetNameHashSet )
      goto LABEL_18;
    System_Collections_Generic_HashSet_object___UnionWith(
      AudioAssetNameHashSet,
      (System_Collections_Generic_IEnumerable_T__o *)stageEntity,
      (const MethodInfo_345C1BC *)Method_System_Collections_Generic_HashSet_string__UnionWith__);
    v13 = Method_System_Array_Empty_int___;
    cameraIdHashSet = toUpdate->fields.cameraIdHashSet;
    v15 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v15 )
    {
      sub_1C1C718(Method_System_Array_Empty_int___, v11);
      v15 = v13[7];
    }
    v16 = *(_QWORD *)(v15 + 16);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1C1C6BC(inited);
    if ( !*(_DWORD *)(v16 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v16, v11);
    v17 = *(_QWORD *)(v13[7] + 16LL);
    if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
      v17 = sub_1C1C6BC(inited);
    stageEntity = (StageEntity_o *)StageEntity__GetAddUniqueCameraIds(v4, **(System_Int32_array ***)(v17 + 184), 0LL);
    if ( !cameraIdHashSet )
LABEL_18:
      sub_1BCAA3C(stageEntity, toUpdate);
    System_Collections_Generic_HashSet_int___UnionWith(
      cameraIdHashSet,
      (System_Collections_Generic_IEnumerable_T__o *)stageEntity,
      (const MethodInfo_3455DB8 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
}


void __fastcall AssumedEffectExtractLogic__FromTreasureDevice(
        System_Collections_Generic_IEnumerable_SimpleTreasureDeviceData__o *tdDataEnumerable,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x21
  __int64 v37; // x1
  System_Collections_Generic_HashSet_int__o *Master_object; // x0
  System_Collections_Generic_IEnumerable_T__o *v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  AssumedEffectExtractLogic___c_c *v49; // x0
  System_Func_SimpleTreasureDeviceData__bool__o *_9__1_0; // x22
  Il2CppObject *v51; // x23
  struct AssumedEffectExtractLogic___c_StaticFields *static_fields; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x20
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  System_Func_T__TResult__o *v63; // x22
  System_Collections_Generic_IEnumerable_T__o *v64; // x0
  System_Collections_Generic_IEnumerable_T__o *v65; // x0
  System_Object_array *v66; // x0
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  AssumedEffectExtractLogic___c_c *v70; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x20
  System_Func_object__object__o *_9__1_2; // x21
  Il2CppObject *v73; // x22
  struct AssumedEffectExtractLogic___c_StaticFields *v74; // x0
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7

  if ( (byte_4B183D6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_ExcludeNull_TreasureDvcEntity___, toUpdate, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_TreasureDvcMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_SelectMany_TreasureDvcEntity__int___, v10, v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_SimpleTreasureDeviceData__TreasureDvcEntity___, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_TreasureDvcEntity___, v14, v15);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_SimpleTreasureDeviceData___, v16, v17);
    sub_1BCA7E0(&System_Func_TreasureDvcEntity__IEnumerable_int___TypeInfo, v18, v19);
    sub_1BCA7E0(&System_Func_SimpleTreasureDeviceData__bool__TypeInfo, v20, v21);
    sub_1BCA7E0(&System_Func_SimpleTreasureDeviceData__TreasureDvcEntity__TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v24, v25);
    sub_1BCA7E0(&Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_0__, v26, v27);
    sub_1BCA7E0(&Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_2__, v28, v29);
    sub_1BCA7E0(&Method_AssumedEffectExtractLogic___c__DisplayClass1_0__FromTreasureDevice_b__1__, v30, v31);
    sub_1BCA7E0(&AssumedEffectExtractLogic___c__DisplayClass1_0_TypeInfo, v32, v33);
    sub_1BCA7E0(&AssumedEffectExtractLogic___c_TypeInfo, v34, v35);
    byte_4B183D6 = 1;
  }
  v36 = sub_1BCAA2C(AssumedEffectExtractLogic___c__DisplayClass1_0_TypeInfo, toUpdate, method, v3);
  System_Object___ctor((Il2CppObject *)v36, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v37);
  Master_object = (System_Collections_Generic_HashSet_int__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !v36 )
    goto LABEL_21;
  *(_QWORD *)(v36 + 16) = Master_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 16), (int64_t)Master_object, v40, v41, v42, v43, v44, v45);
  v49 = AssumedEffectExtractLogic___c_TypeInfo;
  if ( !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo, v46);
    v49 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  _9__1_0 = v49->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v49->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v49, v46);
      v49 = AssumedEffectExtractLogic___c_TypeInfo;
    }
    v51 = (Il2CppObject *)v49->static_fields->__9;
    _9__1_0 = (System_Func_SimpleTreasureDeviceData__bool__o *)sub_1BCAA2C(
                                                                 System_Func_SimpleTreasureDeviceData__bool__TypeInfo,
                                                                 v46,
                                                                 v47,
                                                                 v48);
    System_Func_SimpleTreasureDeviceData__bool____ctor(
      _9__1_0,
      v51,
      Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_0__,
      0LL);
    static_fields = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = _9__1_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)_9__1_0, v53, v54, v55, v56, v57, v58);
  }
  v59 = System_Linq_Enumerable__Where_SimpleTreasureDeviceData_(
          (System_Collections_Generic_IEnumerable_TSource__o *)tdDataEnumerable,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_2F51E3C *)Method_System_Linq_Enumerable_Where_SimpleTreasureDeviceData___);
  v63 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                       System_Func_SimpleTreasureDeviceData__TreasureDvcEntity__TypeInfo,
                                       v60,
                                       v61,
                                       v62);
  System_Func_SimpleTreasureDeviceData__object____ctor(
    v63,
    (Il2CppObject *)v36,
    Method_AssumedEffectExtractLogic___c__DisplayClass1_0__FromTreasureDevice_b__1__,
    0LL);
  v64 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_SimpleTreasureDeviceData__object_(
                                                         v59,
                                                         (System_Func_TSource__TResult__o *)v63,
                                                         (const MethodInfo_2F446B0 *)Method_System_Linq_Enumerable_Select_SimpleTreasureDeviceData__TreasureDvcEntity___);
  v65 = BasicHelper__ExcludeNull_object_(
          v64,
          (const MethodInfo_2EFE5E8 *)Method_BasicHelper_ExcludeNull_TreasureDvcEntity___);
  v66 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v65,
          (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_TreasureDvcEntity___);
  v70 = AssumedEffectExtractLogic___c_TypeInfo;
  v71 = (System_Collections_Generic_IEnumerable_TSource__o *)v66;
  if ( !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo, v67);
    v70 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  _9__1_2 = (System_Func_object__object__o *)v70->static_fields->__9__1_2;
  if ( !_9__1_2 )
  {
    if ( !v70->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v70, v67);
      v70 = AssumedEffectExtractLogic___c_TypeInfo;
    }
    v73 = (Il2CppObject *)v70->static_fields->__9;
    _9__1_2 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                 System_Func_TreasureDvcEntity__IEnumerable_int___TypeInfo,
                                                 v67,
                                                 v68,
                                                 v69);
    System_Func_object__object____ctor(
      _9__1_2,
      v73,
      Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_2__,
      0LL);
    v74 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    v74->__9__1_2 = (struct System_Func_TreasureDvcEntity__IEnumerable_int___o *)_9__1_2;
    sub_1BCA784((PartyOrganizationUtility_o *)&v74->__9__1_2, (int64_t)_9__1_2, v75, v76, v77, v78, v79, v80);
  }
  Master_object = (System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                 v71,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__1_2,
                                                                 (const MethodInfo_2F45F84 *)Method_System_Linq_Enumerable_SelectMany_TreasureDvcEntity__int___);
  if ( !toUpdate
    || (v39 = (System_Collections_Generic_IEnumerable_T__o *)Master_object,
        (Master_object = toUpdate->fields.EffectIdHashSet) == 0LL) )
  {
LABEL_21:
    sub_1BCAA3C(Master_object, v39);
  }
  System_Collections_Generic_HashSet_int___UnionWith(
    Master_object,
    v39,
    (const MethodInfo_3455DB8 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
}


void __fastcall AssumedEffectExtractLogic___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B183DC & 1) == 0 )
  {
    sub_1BCA7E0(&AssumedEffectExtractLogic___c_TypeInfo, v1, v2);
    byte_4B183DC = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(AssumedEffectExtractLogic___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  AssumedEffectExtractLogic___c_TypeInfo->static_fields->__9 = (struct AssumedEffectExtractLogic___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)AssumedEffectExtractLogic___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall AssumedEffectExtractLogic___c___ctor(AssumedEffectExtractLogic___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_int__o *__fastcall AssumedEffectExtractLogic___c___FromServant_b__2_1(
        AssumedEffectExtractLogic___c_o *this,
        ServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return (System_Collections_Generic_IEnumerable_int__o *)ServantEntity__GetAssumedEffectId(x, 0LL);
}


bool __fastcall AssumedEffectExtractLogic___c___FromSkill_b__0_0(
        AssumedEffectExtractLogic___c_o *this,
        SimpleSkillData_o x,
        const MethodInfo *method)
{
  return x.fields.id > 0;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall AssumedEffectExtractLogic___c___FromSkill_b__0_2(
        AssumedEffectExtractLogic___c_o *this,
        SkillEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return (System_Collections_Generic_IEnumerable_int__o *)SkillEntity__GetAssumedEffectId(x, 0LL);
}


bool __fastcall AssumedEffectExtractLogic___c___FromTreasureDevice_b__1_0(
        AssumedEffectExtractLogic___c_o *this,
        SimpleTreasureDeviceData_o x,
        const MethodInfo *method)
{
  return x.fields.id > 0;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall AssumedEffectExtractLogic___c___FromTreasureDevice_b__1_2(
        AssumedEffectExtractLogic___c_o *this,
        TreasureDvcEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return (System_Collections_Generic_IEnumerable_int__o *)TreasureDvcEntity__GetAssumedEffectId(x, 0LL);
}


void __fastcall AssumedEffectExtractLogic___c__DisplayClass0_0___ctor(
        AssumedEffectExtractLogic___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


SkillEntity_o *__fastcall AssumedEffectExtractLogic___c__DisplayClass0_0___FromSkill_b__1(
        AssumedEffectExtractLogic___c__DisplayClass0_0_o *this,
        SimpleSkillData_o x,
        const MethodInfo *method)
{
  int32_t id; // w19
  DataMasterBase_TMaster__TEntity__PKType__o *skillMaster; // x0

  id = x.fields.id;
  if ( (byte_4B183DD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, x, method);
    byte_4B183DD = 1;
  }
  skillMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.skillMaster;
  if ( !skillMaster )
    sub_1BCAA3C(0LL, x);
  return (SkillEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            skillMaster,
                            id,
                            (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
}


void __fastcall AssumedEffectExtractLogic___c__DisplayClass1_0___ctor(
        AssumedEffectExtractLogic___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


TreasureDvcEntity_o *__fastcall AssumedEffectExtractLogic___c__DisplayClass1_0___FromTreasureDevice_b__1(
        AssumedEffectExtractLogic___c__DisplayClass1_0_o *this,
        SimpleTreasureDeviceData_o x,
        const MethodInfo *method)
{
  int32_t id; // w19
  DataMasterBase_TMaster__TEntity__PKType__o *tdMaster; // x0

  id = x.fields.id;
  if ( (byte_4B183DE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, x, method);
    byte_4B183DE = 1;
  }
  tdMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.tdMaster;
  if ( !tdMaster )
    sub_1BCAA3C(0LL, x);
  return (TreasureDvcEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                  tdMaster,
                                  id,
                                  (const MethodInfo_31B2E40 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
}


void __fastcall AssumedEffectExtractLogic___c__DisplayClass2_0___ctor(
        AssumedEffectExtractLogic___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


ServantEntity_o *__fastcall AssumedEffectExtractLogic___c__DisplayClass2_0___FromServant_b__0(
        AssumedEffectExtractLogic___c__DisplayClass2_0_o *this,
        BattleUserServantData_o *x,
        const MethodInfo *method)
{
  AssumedEffectExtractLogic___c__DisplayClass2_0_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *servantMaster; // x20
  __int64 v8; // x19
  __int64 v9; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  v4 = this;
  if ( (byte_4B183DF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, x, method);
    this = (AssumedEffectExtractLogic___c__DisplayClass2_0_o *)sub_1BCA7E0(
                                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                 v5,
                                                                 v6);
    byte_4B183DF = 1;
  }
  if ( !x )
    goto LABEL_8;
  servantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.servantMaster;
  v9 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, x);
  *(_QWORD *)&v11.fields.currentCryptoKey = v9;
  *(_QWORD *)&v11.fields.fakeValue = v8;
  this = (AssumedEffectExtractLogic___c__DisplayClass2_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                               v11,
                                                               0LL);
  if ( !servantMaster )
LABEL_8:
    sub_1BCAA3C(this, x);
  return (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              servantMaster,
                              (int32_t)this,
                              (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
}