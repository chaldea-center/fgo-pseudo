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
  System_Collections_Generic_IEnumerable_BattleDeckServantData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleDeckServantData__o *v11; // x19
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v15; // x19
  __int64 v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  BattleDeckServantData_o *v24; // x0
  System_Collections_Generic_HashSet_int__o *EffectIdHashSet; // x21
  System_Collections_Generic_IEnumerable_T__o *AssumedEffectId; // x0
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0

  if ( (byte_49FE480 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__UnionWith__, toUpdate);
    sub_1B640C8(&System_IDisposable_TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, v7);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_49FE480 = 1;
  }
  if ( battleInfo )
  {
    v9 = BattleInfoData__AllDeckServantEnumerable(battleInfo, 0LL);
    if ( !v9 )
      sub_1B64324(0LL);
    klass = v9->klass;
    v11 = v9;
    v12 = *(unsigned __int16 *)(&v9->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v9->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleDeckServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BB60A8(v9, System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, 0LL);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleDeckServantData__o *, _QWORD))p_method)(
            v11,
            *(_QWORD *)(p_method + 8));
    if ( !v15 )
      sub_1B64324(0LL);
    while ( 1 )
    {
      v16 = *(_QWORD *)v15;
      v17 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
      {
        v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v18 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v17;
          v18 += 4;
          if ( !v17 )
            goto LABEL_16;
        }
        v19 = v16 + 16LL * *v18 + 312;
      }
      else
      {
LABEL_16:
        v19 = sub_1BB60A8(v15, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v19)(v15, *(_QWORD *)(v19 + 8)) & 1) == 0 )
        break;
      v20 = *(_QWORD *)v15;
      v21 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
      {
        v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BattleDeckServantData__c **)v22 - 1) != System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo )
        {
          --v21;
          v22 += 4;
          if ( !v21 )
            goto LABEL_23;
        }
        v23 = v20 + 16LL * *v22 + 312;
      }
      else
      {
LABEL_23:
        v23 = sub_1BB60A8(v15, System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, 0LL);
      }
      v24 = (BattleDeckServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v15, *(_QWORD *)(v23 + 8));
      if ( !toUpdate )
        sub_1B64324(v24);
      if ( !v24 )
        sub_1B64324(0LL);
      EffectIdHashSet = toUpdate->fields.EffectIdHashSet;
      AssumedEffectId = (System_Collections_Generic_IEnumerable_T__o *)BattleDeckServantData__GetAssumedEffectId(
                                                                         v24,
                                                                         0LL);
      if ( !EffectIdHashSet )
        sub_1B64324(AssumedEffectId);
      System_Collections_Generic_HashSet_int___UnionWith(
        EffectIdHashSet,
        AssumedEffectId,
        (const MethodInfo_3364BC0 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    v27 = *(_QWORD *)v15;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_33;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_33:
      v30 = sub_1BB60A8(v15, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v30)(v15, *(_QWORD *)(v30 + 8));
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
  int32_t v9; // w21
  int32_t v10; // w20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FE481 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, toUpdate);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Add__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FE481 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_17;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          id,
          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    return;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_17;
  Instance = (DataManager_o *)ItemEntity__GetBattleAppearEffect((ItemEntity_o *)entity, 0LL);
  if ( !entity )
    goto LABEL_17;
  v9 = (int)Instance;
  Instance = (DataManager_o *)ItemEntity__GetBattleGetEffect((ItemEntity_o *)entity, 0LL);
  v10 = (int)Instance;
  if ( v9 >= 1 )
  {
    if ( !toUpdate )
      goto LABEL_17;
    Instance = (DataManager_o *)toUpdate->fields.EffectIdHashSet;
    if ( !Instance )
      goto LABEL_17;
    Instance = (DataManager_o *)System_Collections_Generic_HashSet_int___Add(
                                  (System_Collections_Generic_HashSet_int__o *)Instance,
                                  v9,
                                  (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  if ( v10 < 1 )
    return;
  if ( !toUpdate || (Instance = (DataManager_o *)toUpdate->fields.EffectIdHashSet) == 0LL )
LABEL_17:
    sub_1B64324(Instance);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)Instance,
    v10,
    (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
  if ( (byte_49FE47F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_int___, toUpdate);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Add__, v5);
    questPhaseEntity = (QuestPhaseEntity_o *)sub_1B640C8(
                                               &Method_System_Collections_Generic_HashSet_int__UnionWith__,
                                               v6);
    byte_49FE47F = 1;
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
      (const MethodInfo_3364BC0 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    v8 = toUpdate->fields.EffectIdHashSet;
    questPhaseEntity = (QuestPhaseEntity_o *)QuestPhaseEntity__getSpecialShadowEffectId(v4, 0LL);
    if ( !v8 )
      goto LABEL_18;
    System_Collections_Generic_HashSet_int___Add(
      v8,
      (int32_t)questPhaseEntity,
      (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
    v9 = Method_System_Array_Empty_int___;
    cameraIdHashSet = toUpdate->fields.cameraIdHashSet;
    v11 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v11 )
    {
      sub_1BB6000(Method_System_Array_Empty_int___);
      v11 = v9[7];
    }
    v12 = *(_QWORD *)(v11 + 16);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1BB5FA4(v12);
    if ( !*(_DWORD *)(v12 + 224) )
      j_il2cpp_runtime_class_init_0(v12);
    v13 = *(_QWORD *)(v9[7] + 16LL);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1BB5FA4(v13);
    questPhaseEntity = (QuestPhaseEntity_o *)QuestPhaseEntity__GetAddUniqueCameraIds(
                                               v4,
                                               **(System_Int32_array ***)(v13 + 184),
                                               0LL);
    if ( !cameraIdHashSet )
LABEL_18:
      sub_1B64324(questPhaseEntity);
    System_Collections_Generic_HashSet_int___UnionWith(
      cameraIdHashSet,
      (System_Collections_Generic_IEnumerable_T__o *)questPhaseEntity,
      (const MethodInfo_3364BC0 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x1
  __int64 v22; // x2
  System_Func_object__object__o *v23; // x22
  System_Collections_Generic_IEnumerable_T__o *v24; // x0
  System_Collections_Generic_IEnumerable_T__o *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x20
  AssumedEffectExtractLogic___c_c *v29; // x8
  System_Func_object__object__o *_9__2_1; // x21
  Il2CppObject *v31; // x22
  struct AssumedEffectExtractLogic___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_Collections_Generic_IEnumerable_T__o *v35; // x1

  if ( (byte_49FE47D & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_ExcludeNull_ServantEntity___, toUpdate);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_SelectMany_ServantEntity__int___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_BattleUserServantData__ServantEntity___, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_ServantEntity___, v9);
    sub_1B640C8(&System_Func_BattleUserServantData__ServantEntity__TypeInfo, v10);
    sub_1B640C8(&System_Func_ServantEntity__IEnumerable_int___TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v12);
    sub_1B640C8(&Method_AssumedEffectExtractLogic___c__FromServant_b__2_1__, v13);
    sub_1B640C8(&Method_AssumedEffectExtractLogic___c__DisplayClass2_0__FromServant_b__0__, v14);
    sub_1B640C8(&AssumedEffectExtractLogic___c__DisplayClass2_0_TypeInfo, v15);
    sub_1B640C8(&AssumedEffectExtractLogic___c_TypeInfo, v16);
    byte_49FE47D = 1;
  }
  v17 = sub_1B64314(AssumedEffectExtractLogic___c__DisplayClass2_0_TypeInfo, toUpdate, method);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)servants, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (System_Collections_Generic_HashSet_int__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !v17 )
      goto LABEL_16;
    *(_QWORD *)(v17 + 16) = Master_object;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)Master_object, v19, v20);
    v23 = (System_Func_object__object__o *)sub_1B64314(
                                             System_Func_BattleUserServantData__ServantEntity__TypeInfo,
                                             v21,
                                             v22);
    System_Func_object__object____ctor(
      v23,
      (Il2CppObject *)v17,
      Method_AssumedEffectExtractLogic___c__DisplayClass2_0__FromServant_b__0__,
      0LL);
    v24 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)servants,
                                                           (System_Func_TSource__TResult__o *)v23,
                                                           (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_BattleUserServantData__ServantEntity___);
    v25 = BasicHelper__ExcludeNull_object_(
            v24,
            (const MethodInfo_2E251C4 *)Method_BasicHelper_ExcludeNull_ServantEntity___);
    v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v25,
                                                                 (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_ServantEntity___);
    v29 = AssumedEffectExtractLogic___c_TypeInfo;
    if ( !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
      v29 = AssumedEffectExtractLogic___c_TypeInfo;
    }
    _9__2_1 = (System_Func_object__object__o *)v29->static_fields->__9__2_1;
    if ( !_9__2_1 )
    {
      if ( !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        v29 = AssumedEffectExtractLogic___c_TypeInfo;
      }
      v31 = (Il2CppObject *)v29->static_fields->__9;
      _9__2_1 = (System_Func_object__object__o *)sub_1B64314(
                                                   System_Func_ServantEntity__IEnumerable_int___TypeInfo,
                                                   v26,
                                                   v27);
      System_Func_object__object____ctor(_9__2_1, v31, Method_AssumedEffectExtractLogic___c__FromServant_b__2_1__, 0LL);
      static_fields = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
      static_fields->__9__2_1 = (struct System_Func_ServantEntity__IEnumerable_int___o *)_9__2_1;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_1, (int32_t)_9__2_1, v33, v34);
    }
    Master_object = (System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                   v28,
                                                                   (System_Func_TSource__IEnumerable_TResult___o *)_9__2_1,
                                                                   (const MethodInfo_2E6B8C0 *)Method_System_Linq_Enumerable_SelectMany_ServantEntity__int___);
    if ( !toUpdate
      || (v35 = (System_Collections_Generic_IEnumerable_T__o *)Master_object,
          (Master_object = toUpdate->fields.EffectIdHashSet) == 0LL) )
    {
LABEL_16:
      sub_1B64324(Master_object);
    }
    System_Collections_Generic_HashSet_int___UnionWith(
      Master_object,
      v35,
      (const MethodInfo_3364BC0 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x1
  __int64 v25; // x2
  AssumedEffectExtractLogic___c_c *v26; // x0
  System_Func_SimpleSkillData__bool__o *_9__0_0; // x22
  Il2CppObject *v28; // x23
  struct AssumedEffectExtractLogic___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x20
  __int64 v33; // x1
  __int64 v34; // x2
  System_Func_T__TResult__o *v35; // x22
  System_Collections_Generic_IEnumerable_T__o *v36; // x0
  System_Collections_Generic_IEnumerable_T__o *v37; // x0
  System_Object_array *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  AssumedEffectExtractLogic___c_c *v41; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x20
  System_Func_object__object__o *_9__0_2; // x21
  Il2CppObject *v44; // x22
  struct AssumedEffectExtractLogic___c_StaticFields *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_Collections_Generic_IEnumerable_T__o *v48; // x1

  if ( (byte_49FE47B & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_ExcludeNull_SkillEntity___, toUpdate);
    sub_1B640C8(&Method_DataManager_GetMaster_SkillMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_SelectMany_SkillEntity__int___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_SimpleSkillData__SkillEntity___, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_SkillEntity___, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_SimpleSkillData___, v10);
    sub_1B640C8(&System_Func_SimpleSkillData__SkillEntity__TypeInfo, v11);
    sub_1B640C8(&System_Func_SimpleSkillData__bool__TypeInfo, v12);
    sub_1B640C8(&System_Func_SkillEntity__IEnumerable_int___TypeInfo, v13);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v14);
    sub_1B640C8(&Method_AssumedEffectExtractLogic___c__FromSkill_b__0_0__, v15);
    sub_1B640C8(&Method_AssumedEffectExtractLogic___c__FromSkill_b__0_2__, v16);
    sub_1B640C8(&Method_AssumedEffectExtractLogic___c__DisplayClass0_0__FromSkill_b__1__, v17);
    sub_1B640C8(&AssumedEffectExtractLogic___c__DisplayClass0_0_TypeInfo, v18);
    sub_1B640C8(&AssumedEffectExtractLogic___c_TypeInfo, v19);
    byte_49FE47B = 1;
  }
  v20 = sub_1B64314(AssumedEffectExtractLogic___c__DisplayClass0_0_TypeInfo, toUpdate, method);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Collections_Generic_HashSet_int__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !v20 )
    goto LABEL_21;
  *(_QWORD *)(v20 + 16) = Master_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 16), (int32_t)Master_object, v22, v23);
  v26 = AssumedEffectExtractLogic___c_TypeInfo;
  if ( !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
    v26 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  _9__0_0 = v26->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = AssumedEffectExtractLogic___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v26->static_fields->__9;
    _9__0_0 = (System_Func_SimpleSkillData__bool__o *)sub_1B64314(System_Func_SimpleSkillData__bool__TypeInfo, v24, v25);
    System_Func_SimpleSkillData__bool____ctor(
      _9__0_0,
      v28,
      Method_AssumedEffectExtractLogic___c__FromSkill_b__0_0__,
      0LL);
    static_fields = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = _9__0_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v30, v31);
  }
  v32 = System_Linq_Enumerable__Where_SimpleSkillData_(
          (System_Collections_Generic_IEnumerable_TSource__o *)skillDataEnumerable,
          (System_Func_TSource__bool__o *)_9__0_0,
          (const MethodInfo_2E77370 *)Method_System_Linq_Enumerable_Where_SimpleSkillData___);
  v35 = (System_Func_T__TResult__o *)sub_1B64314(System_Func_SimpleSkillData__SkillEntity__TypeInfo, v33, v34);
  System_Func_SimpleSkillData__object____ctor(
    v35,
    (Il2CppObject *)v20,
    Method_AssumedEffectExtractLogic___c__DisplayClass0_0__FromSkill_b__1__,
    0LL);
  v36 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_SimpleSkillData__object_(
                                                         v32,
                                                         (System_Func_TSource__TResult__o *)v35,
                                                         (const MethodInfo_2E69CF8 *)Method_System_Linq_Enumerable_Select_SimpleSkillData__SkillEntity___);
  v37 = BasicHelper__ExcludeNull_object_(v36, (const MethodInfo_2E251C4 *)Method_BasicHelper_ExcludeNull_SkillEntity___);
  v38 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v37,
          (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_SkillEntity___);
  v41 = AssumedEffectExtractLogic___c_TypeInfo;
  v42 = (System_Collections_Generic_IEnumerable_TSource__o *)v38;
  if ( !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
    v41 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  _9__0_2 = (System_Func_object__object__o *)v41->static_fields->__9__0_2;
  if ( !_9__0_2 )
  {
    if ( !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v41 = AssumedEffectExtractLogic___c_TypeInfo;
    }
    v44 = (Il2CppObject *)v41->static_fields->__9;
    _9__0_2 = (System_Func_object__object__o *)sub_1B64314(
                                                 System_Func_SkillEntity__IEnumerable_int___TypeInfo,
                                                 v39,
                                                 v40);
    System_Func_object__object____ctor(_9__0_2, v44, Method_AssumedEffectExtractLogic___c__FromSkill_b__0_2__, 0LL);
    v45 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    v45->__9__0_2 = (struct System_Func_SkillEntity__IEnumerable_int___o *)_9__0_2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v45->__9__0_2, (int32_t)_9__0_2, v46, v47);
  }
  Master_object = (System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                 v42,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__0_2,
                                                                 (const MethodInfo_2E6B8C0 *)Method_System_Linq_Enumerable_SelectMany_SkillEntity__int___);
  if ( !toUpdate
    || (v48 = (System_Collections_Generic_IEnumerable_T__o *)Master_object,
        (Master_object = toUpdate->fields.EffectIdHashSet) == 0LL) )
  {
LABEL_21:
    sub_1B64324(Master_object);
  }
  System_Collections_Generic_HashSet_int___UnionWith(
    Master_object,
    v48,
    (const MethodInfo_3364BC0 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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
  if ( (byte_49FE47E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_int___, toUpdate);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_string__UnionWith__, v5);
    stageEntity = (StageEntity_o *)sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v6);
    byte_49FE47E = 1;
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
      (const MethodInfo_3364BC0 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    AudioAssetNameHashSet = (System_Collections_Generic_HashSet_T__o *)toUpdate->fields.AudioAssetNameHashSet;
    stageEntity = (StageEntity_o *)StageEntity__GetAssumedVoiceAssetNames(v4, 0LL);
    if ( !AudioAssetNameHashSet )
      goto LABEL_18;
    System_Collections_Generic_HashSet_object___UnionWith(
      AudioAssetNameHashSet,
      (System_Collections_Generic_IEnumerable_T__o *)stageEntity,
      (const MethodInfo_336AFC4 *)Method_System_Collections_Generic_HashSet_string__UnionWith__);
    v9 = Method_System_Array_Empty_int___;
    cameraIdHashSet = toUpdate->fields.cameraIdHashSet;
    v11 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v11 )
    {
      sub_1BB6000(Method_System_Array_Empty_int___);
      v11 = v9[7];
    }
    v12 = *(_QWORD *)(v11 + 16);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1BB5FA4(v12);
    if ( !*(_DWORD *)(v12 + 224) )
      j_il2cpp_runtime_class_init_0(v12);
    v13 = *(_QWORD *)(v9[7] + 16LL);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1BB5FA4(v13);
    stageEntity = (StageEntity_o *)StageEntity__GetAddUniqueCameraIds(v4, **(System_Int32_array ***)(v13 + 184), 0LL);
    if ( !cameraIdHashSet )
LABEL_18:
      sub_1B64324(stageEntity);
    System_Collections_Generic_HashSet_int___UnionWith(
      cameraIdHashSet,
      (System_Collections_Generic_IEnumerable_T__o *)stageEntity,
      (const MethodInfo_3364BC0 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x1
  __int64 v25; // x2
  AssumedEffectExtractLogic___c_c *v26; // x0
  System_Func_SimpleTreasureDeviceData__bool__o *_9__1_0; // x22
  Il2CppObject *v28; // x23
  struct AssumedEffectExtractLogic___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x20
  __int64 v33; // x1
  __int64 v34; // x2
  System_Func_T__TResult__o *v35; // x22
  System_Collections_Generic_IEnumerable_T__o *v36; // x0
  System_Collections_Generic_IEnumerable_T__o *v37; // x0
  System_Object_array *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  AssumedEffectExtractLogic___c_c *v41; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x20
  System_Func_object__object__o *_9__1_2; // x21
  Il2CppObject *v44; // x22
  struct AssumedEffectExtractLogic___c_StaticFields *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_Collections_Generic_IEnumerable_T__o *v48; // x1

  if ( (byte_49FE47C & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_ExcludeNull_TreasureDvcEntity___, toUpdate);
    sub_1B640C8(&Method_DataManager_GetMaster_TreasureDvcMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_SelectMany_TreasureDvcEntity__int___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_SimpleTreasureDeviceData__TreasureDvcEntity___, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_TreasureDvcEntity___, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_SimpleTreasureDeviceData___, v10);
    sub_1B640C8(&System_Func_TreasureDvcEntity__IEnumerable_int___TypeInfo, v11);
    sub_1B640C8(&System_Func_SimpleTreasureDeviceData__bool__TypeInfo, v12);
    sub_1B640C8(&System_Func_SimpleTreasureDeviceData__TreasureDvcEntity__TypeInfo, v13);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v14);
    sub_1B640C8(&Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_0__, v15);
    sub_1B640C8(&Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_2__, v16);
    sub_1B640C8(&Method_AssumedEffectExtractLogic___c__DisplayClass1_0__FromTreasureDevice_b__1__, v17);
    sub_1B640C8(&AssumedEffectExtractLogic___c__DisplayClass1_0_TypeInfo, v18);
    sub_1B640C8(&AssumedEffectExtractLogic___c_TypeInfo, v19);
    byte_49FE47C = 1;
  }
  v20 = sub_1B64314(AssumedEffectExtractLogic___c__DisplayClass1_0_TypeInfo, toUpdate, method);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Collections_Generic_HashSet_int__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !v20 )
    goto LABEL_21;
  *(_QWORD *)(v20 + 16) = Master_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 16), (int32_t)Master_object, v22, v23);
  v26 = AssumedEffectExtractLogic___c_TypeInfo;
  if ( !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
    v26 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  _9__1_0 = v26->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = AssumedEffectExtractLogic___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v26->static_fields->__9;
    _9__1_0 = (System_Func_SimpleTreasureDeviceData__bool__o *)sub_1B64314(
                                                                 System_Func_SimpleTreasureDeviceData__bool__TypeInfo,
                                                                 v24,
                                                                 v25);
    System_Func_SimpleTreasureDeviceData__bool____ctor(
      _9__1_0,
      v28,
      Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_0__,
      0LL);
    static_fields = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = _9__1_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v30, v31);
  }
  v32 = System_Linq_Enumerable__Where_SimpleTreasureDeviceData_(
          (System_Collections_Generic_IEnumerable_TSource__o *)tdDataEnumerable,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_2E77644 *)Method_System_Linq_Enumerable_Where_SimpleTreasureDeviceData___);
  v35 = (System_Func_T__TResult__o *)sub_1B64314(
                                       System_Func_SimpleTreasureDeviceData__TreasureDvcEntity__TypeInfo,
                                       v33,
                                       v34);
  System_Func_SimpleTreasureDeviceData__object____ctor(
    v35,
    (Il2CppObject *)v20,
    Method_AssumedEffectExtractLogic___c__DisplayClass1_0__FromTreasureDevice_b__1__,
    0LL);
  v36 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_SimpleTreasureDeviceData__object_(
                                                         v32,
                                                         (System_Func_TSource__TResult__o *)v35,
                                                         (const MethodInfo_2E69FEC *)Method_System_Linq_Enumerable_Select_SimpleTreasureDeviceData__TreasureDvcEntity___);
  v37 = BasicHelper__ExcludeNull_object_(
          v36,
          (const MethodInfo_2E251C4 *)Method_BasicHelper_ExcludeNull_TreasureDvcEntity___);
  v38 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v37,
          (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_TreasureDvcEntity___);
  v41 = AssumedEffectExtractLogic___c_TypeInfo;
  v42 = (System_Collections_Generic_IEnumerable_TSource__o *)v38;
  if ( !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
    v41 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  _9__1_2 = (System_Func_object__object__o *)v41->static_fields->__9__1_2;
  if ( !_9__1_2 )
  {
    if ( !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v41 = AssumedEffectExtractLogic___c_TypeInfo;
    }
    v44 = (Il2CppObject *)v41->static_fields->__9;
    _9__1_2 = (System_Func_object__object__o *)sub_1B64314(
                                                 System_Func_TreasureDvcEntity__IEnumerable_int___TypeInfo,
                                                 v39,
                                                 v40);
    System_Func_object__object____ctor(
      _9__1_2,
      v44,
      Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_2__,
      0LL);
    v45 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    v45->__9__1_2 = (struct System_Func_TreasureDvcEntity__IEnumerable_int___o *)_9__1_2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v45->__9__1_2, (int32_t)_9__1_2, v46, v47);
  }
  Master_object = (System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                 v42,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__1_2,
                                                                 (const MethodInfo_2E6B8C0 *)Method_System_Linq_Enumerable_SelectMany_TreasureDvcEntity__int___);
  if ( !toUpdate
    || (v48 = (System_Collections_Generic_IEnumerable_T__o *)Master_object,
        (Master_object = toUpdate->fields.EffectIdHashSet) == 0LL) )
  {
LABEL_21:
    sub_1B64324(Master_object);
  }
  System_Collections_Generic_HashSet_int___UnionWith(
    Master_object,
    v48,
    (const MethodInfo_3364BC0 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
}


void __fastcall AssumedEffectExtractLogic___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FE482 & 1) == 0 )
  {
    sub_1B640C8(&AssumedEffectExtractLogic___c_TypeInfo, v1);
    byte_49FE482 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(AssumedEffectExtractLogic___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  AssumedEffectExtractLogic___c_TypeInfo->static_fields->__9 = (struct AssumedEffectExtractLogic___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)AssumedEffectExtractLogic___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  if ( (byte_49FE483 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, x);
    byte_49FE483 = 1;
  }
  skillMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.skillMaster;
  if ( !skillMaster )
    sub_1B64324(0LL);
  return (SkillEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            skillMaster,
                            id,
                            (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
  if ( (byte_49FE484 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, x);
    byte_49FE484 = 1;
  }
  tdMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.tdMaster;
  if ( !tdMaster )
    sub_1B64324(0LL);
  return (TreasureDvcEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                  tdMaster,
                                  id,
                                  (const MethodInfo_30D3EA4 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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
  if ( (byte_49FE485 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, x);
    this = (AssumedEffectExtractLogic___c__DisplayClass2_0_o *)sub_1B640C8(
                                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                 v5);
    byte_49FE485 = 1;
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
  this = (AssumedEffectExtractLogic___c__DisplayClass2_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                               v10,
                                                               0LL);
  if ( !servantMaster )
LABEL_8:
    sub_1B64324(this);
  return (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              servantMaster,
                              (int32_t)this,
                              (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
}