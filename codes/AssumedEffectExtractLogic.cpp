void __fastcall AssumedEffectExtractLogic__FromEnemyScript(
        BattleInfoData_o *battleInfo,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_BattleDeckServantData__o *v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_BattleDeckServantData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleDeckServantData__o *v12; // x19
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v16; // x1
  __int64 v17; // x19
  __int64 v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  BattleDeckServantData_o *v26; // x0
  __int64 v27; // x1
  System_Collections_Generic_HashSet_int__o *EffectIdHashSet; // x21
  System_Collections_Generic_IEnumerable_T__o *AssumedEffectId; // x0
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0

  if ( (byte_4A0057B & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_HashSet_int__UnionWith__, toUpdate);
    sub_1B64870(&System_IDisposable_TypeInfo, v5);
    sub_1B64870(&System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, v6);
    sub_1B64870(&System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, v7);
    sub_1B64870(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_4A0057B = 1;
  }
  if ( battleInfo )
  {
    v9 = BattleInfoData__AllDeckServantEnumerable(battleInfo, 0LL);
    if ( !v9 )
      sub_1B64ACC(0LL, v10);
    klass = v9->klass;
    v12 = v9;
    v13 = *(unsigned __int16 *)(&v9->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v9->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleDeckServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BB6850(v9, System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, 0LL);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleDeckServantData__o *, _QWORD))p_method)(
            v12,
            *(_QWORD *)(p_method + 8));
    if ( !v17 )
      sub_1B64ACC(0LL, v16);
    while ( 1 )
    {
      v18 = *(_QWORD *)v17;
      v19 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
      {
        v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v20 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v19;
          v20 += 4;
          if ( !v19 )
            goto LABEL_16;
        }
        v21 = v18 + 16LL * *v20 + 312;
      }
      else
      {
LABEL_16:
        v21 = sub_1BB6850(v17, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v17, *(_QWORD *)(v21 + 8)) & 1) == 0 )
        break;
      v22 = *(_QWORD *)v17;
      v23 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
      {
        v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BattleDeckServantData__c **)v24 - 1) != System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo )
        {
          --v23;
          v24 += 4;
          if ( !v23 )
            goto LABEL_23;
        }
        v25 = v22 + 16LL * *v24 + 312;
      }
      else
      {
LABEL_23:
        v25 = sub_1BB6850(v17, System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, 0LL);
      }
      v26 = (BattleDeckServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v17, *(_QWORD *)(v25 + 8));
      if ( !toUpdate )
        sub_1B64ACC(v26, v27);
      if ( !v26 )
        sub_1B64ACC(0LL, v27);
      EffectIdHashSet = toUpdate->fields.EffectIdHashSet;
      AssumedEffectId = (System_Collections_Generic_IEnumerable_T__o *)BattleDeckServantData__GetAssumedEffectId(
                                                                         v26,
                                                                         0LL);
      if ( !EffectIdHashSet )
        sub_1B64ACC(AssumedEffectId, AssumedEffectId);
      System_Collections_Generic_HashSet_int___UnionWith(
        EffectIdHashSet,
        AssumedEffectId,
        (const MethodInfo_3366E9C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    v30 = *(_QWORD *)v17;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_33;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_33:
      v33 = sub_1BB6850(v17, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v33)(v17, *(_QWORD *)(v33 + 8));
  }
}


void __fastcall AssumedEffectExtractLogic__FromItem(
        int32_t id,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w21
  int32_t v11; // w20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A0057C & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_ItemMaster___, toUpdate);
    sub_1B64870(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v5);
    sub_1B64870(&Method_System_Collections_Generic_HashSet_int__Add__, v6);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A0057C = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_17;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          id,
          (const MethodInfo_30D61D4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    return;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_17;
  Instance = (DataManager_o *)ItemEntity__GetBattleAppearEffect((ItemEntity_o *)entity, 0LL);
  if ( !entity )
    goto LABEL_17;
  v10 = (int)Instance;
  Instance = (DataManager_o *)ItemEntity__GetBattleGetEffect((ItemEntity_o *)entity, 0LL);
  v11 = (int)Instance;
  if ( v10 >= 1 )
  {
    if ( !toUpdate )
      goto LABEL_17;
    Instance = (DataManager_o *)toUpdate->fields.EffectIdHashSet;
    if ( !Instance )
      goto LABEL_17;
    Instance = (DataManager_o *)System_Collections_Generic_HashSet_int___Add(
                                  (System_Collections_Generic_HashSet_int__o *)Instance,
                                  v10,
                                  (const MethodInfo_3366E8C *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  if ( v11 < 1 )
    return;
  if ( !toUpdate || (Instance = (DataManager_o *)toUpdate->fields.EffectIdHashSet) == 0LL )
LABEL_17:
    sub_1B64ACC(Instance, v9);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)Instance,
    v11,
    (const MethodInfo_3366E8C *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall AssumedEffectExtractLogic__FromQuestPhase(
        QuestPhaseEntity_o *questPhaseEntity,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  QuestPhaseEntity_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_HashSet_int__o *EffectIdHashSet; // x21
  System_Collections_Generic_HashSet_int__o *v8; // x21
  _QWORD *v9; // x21
  System_Collections_Generic_HashSet_int__o *cameraIdHashSet; // x20
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0

  v4 = questPhaseEntity;
  if ( (byte_4A0057A & 1) == 0 )
  {
    sub_1B64870(&Method_System_Array_Empty_int___, toUpdate);
    sub_1B64870(&Method_System_Collections_Generic_HashSet_int__Add__, v5);
    questPhaseEntity = (QuestPhaseEntity_o *)sub_1B64870(
                                               &Method_System_Collections_Generic_HashSet_int__UnionWith__,
                                               v6);
    byte_4A0057A = 1;
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
      (const MethodInfo_3366E9C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    v8 = toUpdate->fields.EffectIdHashSet;
    questPhaseEntity = (QuestPhaseEntity_o *)QuestPhaseEntity__getSpecialShadowEffectId(v4, 0LL);
    if ( !v8 )
      goto LABEL_18;
    System_Collections_Generic_HashSet_int___Add(
      v8,
      (int32_t)questPhaseEntity,
      (const MethodInfo_3366E8C *)Method_System_Collections_Generic_HashSet_int__Add__);
    v9 = Method_System_Array_Empty_int___;
    cameraIdHashSet = toUpdate->fields.cameraIdHashSet;
    v11 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v11 )
    {
      sub_1BB67A8(Method_System_Array_Empty_int___);
      v11 = v9[7];
    }
    v12 = *(_QWORD *)(v11 + 16);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1BB674C(v12);
    if ( !*(_DWORD *)(v12 + 224) )
      j_il2cpp_runtime_class_init_0(v12);
    v13 = *(_QWORD *)(v9[7] + 16LL);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1BB674C(v13);
    questPhaseEntity = (QuestPhaseEntity_o *)QuestPhaseEntity__GetAddUniqueCameraIds(
                                               v4,
                                               **(System_Int32_array ***)(v13 + 184),
                                               0LL);
    if ( !cameraIdHashSet )
LABEL_18:
      sub_1B64ACC(questPhaseEntity, toUpdate);
    System_Collections_Generic_HashSet_int___UnionWith(
      cameraIdHashSet,
      (System_Collections_Generic_IEnumerable_T__o *)questPhaseEntity,
      (const MethodInfo_3366E9C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
}


void __fastcall AssumedEffectExtractLogic__FromServant(
        BattleUserServantData_array *servants,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
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
  __int64 v17; // x21
  System_Collections_Generic_HashSet_int__o *Master_object; // x0
  System_Collections_Generic_IEnumerable_T__o *v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_Func_object__object__o *v22; // x22
  System_Collections_Generic_IEnumerable_T__o *v23; // x0
  System_Collections_Generic_IEnumerable_T__o *v24; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x20
  AssumedEffectExtractLogic___c_c *v26; // x8
  System_Func_object__object__o *_9__2_1; // x21
  Il2CppObject *v28; // x22
  struct AssumedEffectExtractLogic___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  int32_t v31; // w3

  if ( (byte_4A00578 & 1) == 0 )
  {
    sub_1B64870(&Method_BasicHelper_ExcludeNull_ServantEntity___, toUpdate);
    sub_1B64870(&Method_DataManager_GetMaster_ServantMaster___, v5);
    sub_1B64870(&DataManager_TypeInfo, v6);
    sub_1B64870(&Method_System_Linq_Enumerable_SelectMany_ServantEntity__int___, v7);
    sub_1B64870(&Method_System_Linq_Enumerable_Select_BattleUserServantData__ServantEntity___, v8);
    sub_1B64870(&Method_System_Linq_Enumerable_ToArray_ServantEntity___, v9);
    sub_1B64870(&System_Func_BattleUserServantData__ServantEntity__TypeInfo, v10);
    sub_1B64870(&System_Func_ServantEntity__IEnumerable_int___TypeInfo, v11);
    sub_1B64870(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v12);
    sub_1B64870(&Method_AssumedEffectExtractLogic___c__FromServant_b__2_1__, v13);
    sub_1B64870(&Method_AssumedEffectExtractLogic___c__DisplayClass2_0__FromServant_b__0__, v14);
    sub_1B64870(&AssumedEffectExtractLogic___c__DisplayClass2_0_TypeInfo, v15);
    sub_1B64870(&AssumedEffectExtractLogic___c_TypeInfo, v16);
    byte_4A00578 = 1;
  }
  v17 = sub_1B64ABC(AssumedEffectExtractLogic___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)servants, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (System_Collections_Generic_HashSet_int__o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !v17 )
      goto LABEL_16;
    *(_QWORD *)(v17 + 16) = Master_object;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)Master_object, v20, v21);
    v22 = (System_Func_object__object__o *)sub_1B64ABC(System_Func_BattleUserServantData__ServantEntity__TypeInfo);
    System_Func_object__object____ctor(
      v22,
      (Il2CppObject *)v17,
      Method_AssumedEffectExtractLogic___c__DisplayClass2_0__FromServant_b__0__,
      0LL);
    v23 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)servants,
                                                           (System_Func_TSource__TResult__o *)v22,
                                                           (const MethodInfo_2E6B688 *)Method_System_Linq_Enumerable_Select_BattleUserServantData__ServantEntity___);
    v24 = BasicHelper__ExcludeNull_object_(
            v23,
            (const MethodInfo_2E274A0 *)Method_BasicHelper_ExcludeNull_ServantEntity___);
    v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v24,
                                                                 (const MethodInfo_2E736A0 *)Method_System_Linq_Enumerable_ToArray_ServantEntity___);
    v26 = AssumedEffectExtractLogic___c_TypeInfo;
    if ( !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
      v26 = AssumedEffectExtractLogic___c_TypeInfo;
    }
    _9__2_1 = (System_Func_object__object__o *)v26->static_fields->__9__2_1;
    if ( !_9__2_1 )
    {
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        v26 = AssumedEffectExtractLogic___c_TypeInfo;
      }
      v28 = (Il2CppObject *)v26->static_fields->__9;
      _9__2_1 = (System_Func_object__object__o *)sub_1B64ABC(System_Func_ServantEntity__IEnumerable_int___TypeInfo);
      System_Func_object__object____ctor(_9__2_1, v28, Method_AssumedEffectExtractLogic___c__FromServant_b__2_1__, 0LL);
      static_fields = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
      static_fields->__9__2_1 = (struct System_Func_ServantEntity__IEnumerable_int___o *)_9__2_1;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_1, (int32_t)_9__2_1, v30, v31);
    }
    Master_object = (System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                   v25,
                                                                   (System_Func_TSource__IEnumerable_TResult___o *)_9__2_1,
                                                                   (const MethodInfo_2E6DB9C *)Method_System_Linq_Enumerable_SelectMany_ServantEntity__int___);
    if ( !toUpdate
      || (v19 = (System_Collections_Generic_IEnumerable_T__o *)Master_object,
          (Master_object = toUpdate->fields.EffectIdHashSet) == 0LL) )
    {
LABEL_16:
      sub_1B64ACC(Master_object, v19);
    }
    System_Collections_Generic_HashSet_int___UnionWith(
      Master_object,
      v19,
      (const MethodInfo_3366E9C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
}


void __fastcall AssumedEffectExtractLogic__FromSkill(
        System_Collections_Generic_IEnumerable_SimpleSkillData__o *skillDataEnumerable,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
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
  __int64 v20; // x21
  System_Collections_Generic_HashSet_int__o *Master_object; // x0
  System_Collections_Generic_IEnumerable_T__o *v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  AssumedEffectExtractLogic___c_c *v25; // x0
  System_Func_SimpleSkillData__bool__o *_9__0_0; // x22
  Il2CppObject *v27; // x23
  struct AssumedEffectExtractLogic___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x20
  System_Func_T__TResult__o *v32; // x22
  System_Collections_Generic_IEnumerable_T__o *v33; // x0
  System_Collections_Generic_IEnumerable_T__o *v34; // x0
  System_Object_array *v35; // x0
  AssumedEffectExtractLogic___c_c *v36; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x20
  System_Func_object__object__o *_9__0_2; // x21
  Il2CppObject *v39; // x22
  struct AssumedEffectExtractLogic___c_StaticFields *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3

  if ( (byte_4A00576 & 1) == 0 )
  {
    sub_1B64870(&Method_BasicHelper_ExcludeNull_SkillEntity___, toUpdate);
    sub_1B64870(&Method_DataManager_GetMaster_SkillMaster___, v5);
    sub_1B64870(&DataManager_TypeInfo, v6);
    sub_1B64870(&Method_System_Linq_Enumerable_SelectMany_SkillEntity__int___, v7);
    sub_1B64870(&Method_System_Linq_Enumerable_Select_SimpleSkillData__SkillEntity___, v8);
    sub_1B64870(&Method_System_Linq_Enumerable_ToArray_SkillEntity___, v9);
    sub_1B64870(&Method_System_Linq_Enumerable_Where_SimpleSkillData___, v10);
    sub_1B64870(&System_Func_SimpleSkillData__SkillEntity__TypeInfo, v11);
    sub_1B64870(&System_Func_SimpleSkillData__bool__TypeInfo, v12);
    sub_1B64870(&System_Func_SkillEntity__IEnumerable_int___TypeInfo, v13);
    sub_1B64870(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v14);
    sub_1B64870(&Method_AssumedEffectExtractLogic___c__FromSkill_b__0_0__, v15);
    sub_1B64870(&Method_AssumedEffectExtractLogic___c__FromSkill_b__0_2__, v16);
    sub_1B64870(&Method_AssumedEffectExtractLogic___c__DisplayClass0_0__FromSkill_b__1__, v17);
    sub_1B64870(&AssumedEffectExtractLogic___c__DisplayClass0_0_TypeInfo, v18);
    sub_1B64870(&AssumedEffectExtractLogic___c_TypeInfo, v19);
    byte_4A00576 = 1;
  }
  v20 = sub_1B64ABC(AssumedEffectExtractLogic___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Collections_Generic_HashSet_int__o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !v20 )
    goto LABEL_21;
  *(_QWORD *)(v20 + 16) = Master_object;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v20 + 16), (int32_t)Master_object, v23, v24);
  v25 = AssumedEffectExtractLogic___c_TypeInfo;
  if ( !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
    v25 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  _9__0_0 = v25->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = AssumedEffectExtractLogic___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v25->static_fields->__9;
    _9__0_0 = (System_Func_SimpleSkillData__bool__o *)sub_1B64ABC(System_Func_SimpleSkillData__bool__TypeInfo);
    System_Func_SimpleSkillData__bool____ctor(
      _9__0_0,
      v27,
      Method_AssumedEffectExtractLogic___c__FromSkill_b__0_0__,
      0LL);
    static_fields = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = _9__0_0;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v29, v30);
  }
  v31 = System_Linq_Enumerable__Where_SimpleSkillData_(
          (System_Collections_Generic_IEnumerable_TSource__o *)skillDataEnumerable,
          (System_Func_TSource__bool__o *)_9__0_0,
          (const MethodInfo_2E7964C *)Method_System_Linq_Enumerable_Where_SimpleSkillData___);
  v32 = (System_Func_T__TResult__o *)sub_1B64ABC(System_Func_SimpleSkillData__SkillEntity__TypeInfo);
  System_Func_SimpleSkillData__object____ctor(
    v32,
    (Il2CppObject *)v20,
    Method_AssumedEffectExtractLogic___c__DisplayClass0_0__FromSkill_b__1__,
    0LL);
  v33 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_SimpleSkillData__object_(
                                                         v31,
                                                         (System_Func_TSource__TResult__o *)v32,
                                                         (const MethodInfo_2E6BFD4 *)Method_System_Linq_Enumerable_Select_SimpleSkillData__SkillEntity___);
  v34 = BasicHelper__ExcludeNull_object_(v33, (const MethodInfo_2E274A0 *)Method_BasicHelper_ExcludeNull_SkillEntity___);
  v35 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v34,
          (const MethodInfo_2E736A0 *)Method_System_Linq_Enumerable_ToArray_SkillEntity___);
  v36 = AssumedEffectExtractLogic___c_TypeInfo;
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)v35;
  if ( !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
    v36 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  _9__0_2 = (System_Func_object__object__o *)v36->static_fields->__9__0_2;
  if ( !_9__0_2 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      v36 = AssumedEffectExtractLogic___c_TypeInfo;
    }
    v39 = (Il2CppObject *)v36->static_fields->__9;
    _9__0_2 = (System_Func_object__object__o *)sub_1B64ABC(System_Func_SkillEntity__IEnumerable_int___TypeInfo);
    System_Func_object__object____ctor(_9__0_2, v39, Method_AssumedEffectExtractLogic___c__FromSkill_b__0_2__, 0LL);
    v40 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    v40->__9__0_2 = (struct System_Func_SkillEntity__IEnumerable_int___o *)_9__0_2;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&v40->__9__0_2, (int32_t)_9__0_2, v41, v42);
  }
  Master_object = (System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                 v37,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__0_2,
                                                                 (const MethodInfo_2E6DB9C *)Method_System_Linq_Enumerable_SelectMany_SkillEntity__int___);
  if ( !toUpdate
    || (v22 = (System_Collections_Generic_IEnumerable_T__o *)Master_object,
        (Master_object = toUpdate->fields.EffectIdHashSet) == 0LL) )
  {
LABEL_21:
    sub_1B64ACC(Master_object, v22);
  }
  System_Collections_Generic_HashSet_int___UnionWith(
    Master_object,
    v22,
    (const MethodInfo_3366E9C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
}


void __fastcall AssumedEffectExtractLogic__FromStage(
        StageEntity_o *stageEntity,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  StageEntity_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_HashSet_int__o *EffectIdHashSet; // x21
  System_Collections_Generic_HashSet_T__o *AudioAssetNameHashSet; // x21
  _QWORD *v9; // x21
  System_Collections_Generic_HashSet_int__o *cameraIdHashSet; // x20
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0

  v4 = stageEntity;
  if ( (byte_4A00579 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Array_Empty_int___, toUpdate);
    sub_1B64870(&Method_System_Collections_Generic_HashSet_string__UnionWith__, v5);
    stageEntity = (StageEntity_o *)sub_1B64870(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v6);
    byte_4A00579 = 1;
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
      (const MethodInfo_3366E9C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    AudioAssetNameHashSet = (System_Collections_Generic_HashSet_T__o *)toUpdate->fields.AudioAssetNameHashSet;
    stageEntity = (StageEntity_o *)StageEntity__GetAssumedVoiceAssetNames(v4, 0LL);
    if ( !AudioAssetNameHashSet )
      goto LABEL_18;
    System_Collections_Generic_HashSet_object___UnionWith(
      AudioAssetNameHashSet,
      (System_Collections_Generic_IEnumerable_T__o *)stageEntity,
      (const MethodInfo_336D2A0 *)Method_System_Collections_Generic_HashSet_string__UnionWith__);
    v9 = Method_System_Array_Empty_int___;
    cameraIdHashSet = toUpdate->fields.cameraIdHashSet;
    v11 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v11 )
    {
      sub_1BB67A8(Method_System_Array_Empty_int___);
      v11 = v9[7];
    }
    v12 = *(_QWORD *)(v11 + 16);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1BB674C(v12);
    if ( !*(_DWORD *)(v12 + 224) )
      j_il2cpp_runtime_class_init_0(v12);
    v13 = *(_QWORD *)(v9[7] + 16LL);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1BB674C(v13);
    stageEntity = (StageEntity_o *)StageEntity__GetAddUniqueCameraIds(v4, **(System_Int32_array ***)(v13 + 184), 0LL);
    if ( !cameraIdHashSet )
LABEL_18:
      sub_1B64ACC(stageEntity, toUpdate);
    System_Collections_Generic_HashSet_int___UnionWith(
      cameraIdHashSet,
      (System_Collections_Generic_IEnumerable_T__o *)stageEntity,
      (const MethodInfo_3366E9C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
}


void __fastcall AssumedEffectExtractLogic__FromTreasureDevice(
        System_Collections_Generic_IEnumerable_SimpleTreasureDeviceData__o *tdDataEnumerable,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
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
  __int64 v20; // x21
  System_Collections_Generic_HashSet_int__o *Master_object; // x0
  System_Collections_Generic_IEnumerable_T__o *v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  AssumedEffectExtractLogic___c_c *v25; // x0
  System_Func_SimpleTreasureDeviceData__bool__o *_9__1_0; // x22
  Il2CppObject *v27; // x23
  struct AssumedEffectExtractLogic___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x20
  System_Func_T__TResult__o *v32; // x22
  System_Collections_Generic_IEnumerable_T__o *v33; // x0
  System_Collections_Generic_IEnumerable_T__o *v34; // x0
  System_Object_array *v35; // x0
  AssumedEffectExtractLogic___c_c *v36; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x20
  System_Func_object__object__o *_9__1_2; // x21
  Il2CppObject *v39; // x22
  struct AssumedEffectExtractLogic___c_StaticFields *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3

  if ( (byte_4A00577 & 1) == 0 )
  {
    sub_1B64870(&Method_BasicHelper_ExcludeNull_TreasureDvcEntity___, toUpdate);
    sub_1B64870(&Method_DataManager_GetMaster_TreasureDvcMaster___, v5);
    sub_1B64870(&DataManager_TypeInfo, v6);
    sub_1B64870(&Method_System_Linq_Enumerable_SelectMany_TreasureDvcEntity__int___, v7);
    sub_1B64870(&Method_System_Linq_Enumerable_Select_SimpleTreasureDeviceData__TreasureDvcEntity___, v8);
    sub_1B64870(&Method_System_Linq_Enumerable_ToArray_TreasureDvcEntity___, v9);
    sub_1B64870(&Method_System_Linq_Enumerable_Where_SimpleTreasureDeviceData___, v10);
    sub_1B64870(&System_Func_TreasureDvcEntity__IEnumerable_int___TypeInfo, v11);
    sub_1B64870(&System_Func_SimpleTreasureDeviceData__bool__TypeInfo, v12);
    sub_1B64870(&System_Func_SimpleTreasureDeviceData__TreasureDvcEntity__TypeInfo, v13);
    sub_1B64870(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v14);
    sub_1B64870(&Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_0__, v15);
    sub_1B64870(&Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_2__, v16);
    sub_1B64870(&Method_AssumedEffectExtractLogic___c__DisplayClass1_0__FromTreasureDevice_b__1__, v17);
    sub_1B64870(&AssumedEffectExtractLogic___c__DisplayClass1_0_TypeInfo, v18);
    sub_1B64870(&AssumedEffectExtractLogic___c_TypeInfo, v19);
    byte_4A00577 = 1;
  }
  v20 = sub_1B64ABC(AssumedEffectExtractLogic___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Collections_Generic_HashSet_int__o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !v20 )
    goto LABEL_21;
  *(_QWORD *)(v20 + 16) = Master_object;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v20 + 16), (int32_t)Master_object, v23, v24);
  v25 = AssumedEffectExtractLogic___c_TypeInfo;
  if ( !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
    v25 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  _9__1_0 = v25->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = AssumedEffectExtractLogic___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v25->static_fields->__9;
    _9__1_0 = (System_Func_SimpleTreasureDeviceData__bool__o *)sub_1B64ABC(System_Func_SimpleTreasureDeviceData__bool__TypeInfo);
    System_Func_SimpleTreasureDeviceData__bool____ctor(
      _9__1_0,
      v27,
      Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_0__,
      0LL);
    static_fields = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = _9__1_0;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v29, v30);
  }
  v31 = System_Linq_Enumerable__Where_SimpleTreasureDeviceData_(
          (System_Collections_Generic_IEnumerable_TSource__o *)tdDataEnumerable,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_2E79920 *)Method_System_Linq_Enumerable_Where_SimpleTreasureDeviceData___);
  v32 = (System_Func_T__TResult__o *)sub_1B64ABC(System_Func_SimpleTreasureDeviceData__TreasureDvcEntity__TypeInfo);
  System_Func_SimpleTreasureDeviceData__object____ctor(
    v32,
    (Il2CppObject *)v20,
    Method_AssumedEffectExtractLogic___c__DisplayClass1_0__FromTreasureDevice_b__1__,
    0LL);
  v33 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_SimpleTreasureDeviceData__object_(
                                                         v31,
                                                         (System_Func_TSource__TResult__o *)v32,
                                                         (const MethodInfo_2E6C2C8 *)Method_System_Linq_Enumerable_Select_SimpleTreasureDeviceData__TreasureDvcEntity___);
  v34 = BasicHelper__ExcludeNull_object_(
          v33,
          (const MethodInfo_2E274A0 *)Method_BasicHelper_ExcludeNull_TreasureDvcEntity___);
  v35 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v34,
          (const MethodInfo_2E736A0 *)Method_System_Linq_Enumerable_ToArray_TreasureDvcEntity___);
  v36 = AssumedEffectExtractLogic___c_TypeInfo;
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)v35;
  if ( !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
    v36 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  _9__1_2 = (System_Func_object__object__o *)v36->static_fields->__9__1_2;
  if ( !_9__1_2 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      v36 = AssumedEffectExtractLogic___c_TypeInfo;
    }
    v39 = (Il2CppObject *)v36->static_fields->__9;
    _9__1_2 = (System_Func_object__object__o *)sub_1B64ABC(System_Func_TreasureDvcEntity__IEnumerable_int___TypeInfo);
    System_Func_object__object____ctor(
      _9__1_2,
      v39,
      Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_2__,
      0LL);
    v40 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    v40->__9__1_2 = (struct System_Func_TreasureDvcEntity__IEnumerable_int___o *)_9__1_2;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&v40->__9__1_2, (int32_t)_9__1_2, v41, v42);
  }
  Master_object = (System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                 v37,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__1_2,
                                                                 (const MethodInfo_2E6DB9C *)Method_System_Linq_Enumerable_SelectMany_TreasureDvcEntity__int___);
  if ( !toUpdate
    || (v22 = (System_Collections_Generic_IEnumerable_T__o *)Master_object,
        (Master_object = toUpdate->fields.EffectIdHashSet) == 0LL) )
  {
LABEL_21:
    sub_1B64ACC(Master_object, v22);
  }
  System_Collections_Generic_HashSet_int___UnionWith(
    Master_object,
    v22,
    (const MethodInfo_3366E9C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
}


void __fastcall AssumedEffectExtractLogic___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A0057D & 1) == 0 )
  {
    sub_1B64870(&AssumedEffectExtractLogic___c_TypeInfo, v1);
    byte_4A0057D = 1;
  }
  v2 = (Il2CppObject *)sub_1B64ABC(AssumedEffectExtractLogic___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  AssumedEffectExtractLogic___c_TypeInfo->static_fields->__9 = (struct AssumedEffectExtractLogic___c_o *)v2;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)AssumedEffectExtractLogic___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B64ACC(this, 0LL);
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
    sub_1B64ACC(this, 0LL);
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
    sub_1B64ACC(this, 0LL);
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
  if ( (byte_4A0057E & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, x);
    byte_4A0057E = 1;
  }
  skillMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.skillMaster;
  if ( !skillMaster )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1B64ACC)(0LL, x);
  return (SkillEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            skillMaster,
                            id,
                            (const MethodInfo_30D6180 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
  if ( (byte_4A0057F & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, x);
    byte_4A0057F = 1;
  }
  tdMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.tdMaster;
  if ( !tdMaster )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1B64ACC)(0LL, x);
  return (TreasureDvcEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                  tdMaster,
                                  id,
                                  (const MethodInfo_30D6180 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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
  DataMasterBase_TMaster__TEntity__PKType__o *servantMaster; // x20
  __int64 v7; // x19
  __int64 v8; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v4 = this;
  if ( (byte_4A00580 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, x);
    this = (AssumedEffectExtractLogic___c__DisplayClass2_0_o *)sub_1B64870(
                                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                 v5);
    byte_4A00580 = 1;
  }
  if ( !x )
    goto LABEL_8;
  servantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.servantMaster;
  v8 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  this = (AssumedEffectExtractLogic___c__DisplayClass2_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                                               v10,
                                                               0LL);
  if ( !servantMaster )
LABEL_8:
    sub_1B64ACC(this, x);
  return (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              servantMaster,
                              (int32_t)this,
                              (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
}