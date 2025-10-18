void AssumedEffectExtractLogic__FromEnemyScript(
        BattleInfoData_o *battleInfo,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_BattleDeckServantData__o *v5; // x0
  System_Collections_Generic_IEnumerable_BattleDeckServantData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleDeckServantData__o *v7; // x19
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  __int64 v11; // x19
  __int64 v12; // x8
  __int64 v13; // x9
  int *v14; // x10
  __int64 v15; // x0
  __int64 v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  BattleDeckServantData_o *v20; // x0
  BattleDeckServantData_o *v21; // x21
  System_Collections_Generic_HashSet_int__o *EffectIdHashSet; // x22
  System_Collections_Generic_IEnumerable_T__o *AssumedEffectId; // x0
  EnemyScriptParam_OverwriteShadowData_array *OverwriteShadowDataArray; // x0
  EnemyScriptParam_OverwriteShadowData_array *v25; // x21
  int max_length; // w8
  int i; // w22
  EnemyScriptParam_OverwriteShadowData_o *v28; // x8
  System_Collections_Generic_HashSet_int__o *v29; // x0
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0

  if ( (byte_4C45498 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    byte_4C45498 = 1;
  }
  if ( battleInfo )
  {
    v5 = BattleInfoData__AllDeckServantEnumerable(battleInfo, 0);
    if ( !v5 )
      sub_1C372B4(0);
    klass = v5->klass;
    v7 = v5;
    v8 = *(unsigned __int16 *)&v5->klass->_2.rank;
    if ( *(_WORD *)&v5->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleDeckServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_9;
      }
      v10 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v10 = sub_1C87870(v5, System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, 0);
    }
    v11 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleDeckServantData__o *, _QWORD))v10)(
            v7,
            *(_QWORD *)(v10 + 8));
    if ( !v11 )
      sub_1C372B4(0);
    while ( 1 )
    {
      v12 = *(_QWORD *)v11;
      v13 = *(unsigned __int16 *)(*(_QWORD *)v11 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v11 + 302LL) )
      {
        v14 = (int *)(*(_QWORD *)(v12 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v14 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v13;
          v14 += 4;
          if ( !v13 )
            goto LABEL_16;
        }
        v15 = v12 + 16LL * *v14 + 312;
      }
      else
      {
LABEL_16:
        v15 = sub_1C87870(v11, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v15)(v11, *(_QWORD *)(v15 + 8)) & 1) == 0 )
        break;
      v16 = *(_QWORD *)v11;
      v17 = *(unsigned __int16 *)(*(_QWORD *)v11 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v11 + 302LL) )
      {
        v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BattleDeckServantData__c **)v18 - 1) != System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo )
        {
          --v17;
          v18 += 4;
          if ( !v17 )
            goto LABEL_23;
        }
        v19 = v16 + 16LL * *v18 + 312;
      }
      else
      {
LABEL_23:
        v19 = sub_1C87870(v11, System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, 0);
      }
      v20 = (BattleDeckServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v19)(v11, *(_QWORD *)(v19 + 8));
      if ( !toUpdate )
        sub_1C372B4(v20);
      v21 = v20;
      if ( !v20 )
        sub_1C372B4(0);
      EffectIdHashSet = toUpdate->fields.EffectIdHashSet;
      AssumedEffectId = (System_Collections_Generic_IEnumerable_T__o *)BattleDeckServantData__GetAssumedEffectId(v20, 0);
      if ( !EffectIdHashSet )
        sub_1C372B4(AssumedEffectId);
      System_Collections_Generic_HashSet_int___UnionWith(
        EffectIdHashSet,
        AssumedEffectId,
        (const MethodInfo_3654C9C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
      OverwriteShadowDataArray = BattleDeckServantData__GetOverwriteShadowDataArray(v21, 0);
      v25 = OverwriteShadowDataArray;
      if ( !OverwriteShadowDataArray )
        sub_1C372B4(0);
      max_length = OverwriteShadowDataArray->max_length;
      if ( max_length >= 1 )
      {
        for ( i = 0; i < max_length; ++i )
        {
          if ( i >= (unsigned int)max_length )
            sub_1C372BC(OverwriteShadowDataArray);
          v28 = v25->m_Items[i];
          if ( !v28 )
            sub_1C372B4(OverwriteShadowDataArray);
          v29 = toUpdate->fields.EffectIdHashSet;
          if ( !v29 )
            sub_1C372B4(0);
          OverwriteShadowDataArray = (EnemyScriptParam_OverwriteShadowData_array *)System_Collections_Generic_HashSet_int___Add(
                                                                                     v29,
                                                                                     v28->fields.specialShadowEffectId,
                                                                                     (const MethodInfo_3654C8C *)Method_System_Collections_Generic_HashSet_int__Add__);
          max_length = v25->max_length;
        }
      }
    }
    v30 = *(_QWORD *)v11;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v11 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v11 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_40;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_40:
      v33 = sub_1C87870(v11, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v33)(v11, *(_QWORD *)(v33 + 8));
  }
}


void AssumedEffectExtractLogic__FromItem(
        int32_t id,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  int32_t v6; // w21
  int32_t v7; // w20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C45499 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C37058(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C45499 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_17;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          id,
          (const MethodInfo_33A10EC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    return;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_17;
  Instance = (DataManager_o *)ItemEntity__GetBattleAppearEffect((ItemEntity_o *)entity, 0);
  if ( !entity )
    goto LABEL_17;
  v6 = (int)Instance;
  Instance = (DataManager_o *)ItemEntity__GetBattleGetEffect((ItemEntity_o *)entity, 0);
  v7 = (int)Instance;
  if ( v6 >= 1 )
  {
    if ( !toUpdate )
      goto LABEL_17;
    Instance = (DataManager_o *)toUpdate->fields.EffectIdHashSet;
    if ( !Instance )
      goto LABEL_17;
    Instance = (DataManager_o *)System_Collections_Generic_HashSet_int___Add(
                                  (System_Collections_Generic_HashSet_int__o *)Instance,
                                  v6,
                                  (const MethodInfo_3654C8C *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  if ( v7 < 1 )
    return;
  if ( !toUpdate || (Instance = (DataManager_o *)toUpdate->fields.EffectIdHashSet) == 0 )
LABEL_17:
    sub_1C372B4(Instance);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)Instance,
    v7,
    (const MethodInfo_3654C8C *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void AssumedEffectExtractLogic__FromQuestPhase(
        QuestPhaseEntity_o *questPhaseEntity,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  QuestPhaseEntity_o *v4; // x19
  System_Collections_Generic_HashSet_int__o *EffectIdHashSet; // x21
  System_Collections_Generic_HashSet_int__o *v6; // x21
  System_Collections_Generic_HashSet_int__o *v7; // x21
  long double inited; // q0
  _QWORD *v9; // x21
  System_Collections_Generic_HashSet_int__o *cameraIdHashSet; // x20
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0

  v4 = questPhaseEntity;
  if ( (byte_4C45497 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Empty_int___);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Add__);
    questPhaseEntity = (QuestPhaseEntity_o *)sub_1C37058(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    byte_4C45497 = 1;
  }
  if ( v4 )
  {
    if ( !toUpdate )
      goto LABEL_19;
    EffectIdHashSet = toUpdate->fields.EffectIdHashSet;
    questPhaseEntity = (QuestPhaseEntity_o *)QuestPhaseEntity__GetAssumedEffectId(v4, 0);
    if ( !EffectIdHashSet )
      goto LABEL_19;
    System_Collections_Generic_HashSet_int___UnionWith(
      EffectIdHashSet,
      (System_Collections_Generic_IEnumerable_T__o *)questPhaseEntity,
      (const MethodInfo_3654C9C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    v6 = toUpdate->fields.EffectIdHashSet;
    questPhaseEntity = (QuestPhaseEntity_o *)QuestPhaseEntity__getSpecialShadowEffectId(v4, 0);
    if ( !v6 )
      goto LABEL_19;
    System_Collections_Generic_HashSet_int___Add(
      v6,
      (int32_t)questPhaseEntity,
      (const MethodInfo_3654C8C *)Method_System_Collections_Generic_HashSet_int__Add__);
    v7 = toUpdate->fields.EffectIdHashSet;
    questPhaseEntity = (QuestPhaseEntity_o *)QuestPhaseEntity__GetBattleSkillDropEffectIds(v4, 0);
    if ( !v7 )
      goto LABEL_19;
    System_Collections_Generic_HashSet_int___UnionWith(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)questPhaseEntity,
      (const MethodInfo_3654C9C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    v9 = Method_System_Array_Empty_int___;
    cameraIdHashSet = toUpdate->fields.cameraIdHashSet;
    v11 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v11 )
    {
      sub_1C877C8(Method_System_Array_Empty_int___);
      v11 = v9[7];
    }
    v12 = *(_QWORD *)(v11 + 16);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1C8776C(inited);
    if ( !*(_DWORD *)(v12 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v12);
    v13 = *(_QWORD *)(v9[7] + 16LL);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1C8776C(inited);
    questPhaseEntity = (QuestPhaseEntity_o *)QuestPhaseEntity__GetAddUniqueCameraIds(
                                               v4,
                                               **(System_Int32_array ***)(v13 + 184),
                                               0);
    if ( !cameraIdHashSet )
LABEL_19:
      sub_1C372B4(questPhaseEntity);
    System_Collections_Generic_HashSet_int___UnionWith(
      cameraIdHashSet,
      (System_Collections_Generic_IEnumerable_T__o *)questPhaseEntity,
      (const MethodInfo_3654C9C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
}


void AssumedEffectExtractLogic__FromServant(
        BattleUserServantData_array *servants,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_HashSet_int__o *Master_object; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Func_object__object__o *v9; // x22
  System_Collections_Generic_IEnumerable_T__o *v10; // x0
  System_Collections_Generic_IEnumerable_T__o *v11; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x20
  AssumedEffectExtractLogic___c_c *v13; // x8
  System_Func_object__object__o *_9__2_1; // x21
  Il2CppObject *v15; // x22
  struct AssumedEffectExtractLogic___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_IEnumerable_T__o *v19; // x1

  if ( (byte_4C45495 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_ExcludeNull_ServantEntity___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_SelectMany_ServantEntity__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_BattleUserServantData__ServantEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_ServantEntity___);
    sub_1C37058(&System_Func_BattleUserServantData__ServantEntity__TypeInfo);
    sub_1C37058(&System_Func_ServantEntity__IEnumerable_int___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1C37058(&Method_AssumedEffectExtractLogic___c__FromServant_b__2_1__);
    sub_1C37058(&Method_AssumedEffectExtractLogic___c__DisplayClass2_0__FromServant_b__0__);
    sub_1C37058(&AssumedEffectExtractLogic___c__DisplayClass2_0_TypeInfo);
    sub_1C37058(&AssumedEffectExtractLogic___c_TypeInfo);
    byte_4C45495 = 1;
  }
  v5 = sub_1C372A4(AssumedEffectExtractLogic___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)servants, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (System_Collections_Generic_HashSet_int__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !v5 )
      goto LABEL_16;
    *(_QWORD *)(v5 + 16) = Master_object;
    sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)Master_object, v7, v8);
    v9 = (System_Func_object__object__o *)sub_1C372A4(System_Func_BattleUserServantData__ServantEntity__TypeInfo);
    System_Func_object__object____ctor(
      v9,
      (Il2CppObject *)v5,
      Method_AssumedEffectExtractLogic___c__DisplayClass2_0__FromServant_b__0__,
      0);
    v10 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)servants,
                                                           (System_Func_TSource__TResult__o *)v9,
                                                           (const MethodInfo_311E324 *)Method_System_Linq_Enumerable_Select_BattleUserServantData__ServantEntity___);
    v11 = BasicHelper__ExcludeNull_object_(
            v10,
            (const MethodInfo_30D194C *)Method_BasicHelper_ExcludeNull_ServantEntity___);
    v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v11,
                                                                 (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_ServantEntity___);
    v13 = AssumedEffectExtractLogic___c_TypeInfo;
    if ( !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
      v13 = AssumedEffectExtractLogic___c_TypeInfo;
    }
    _9__2_1 = (System_Func_object__object__o *)v13->static_fields->__9__2_1;
    if ( !_9__2_1 )
    {
      if ( !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = AssumedEffectExtractLogic___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v13->static_fields->__9;
      _9__2_1 = (System_Func_object__object__o *)sub_1C372A4(System_Func_ServantEntity__IEnumerable_int___TypeInfo);
      System_Func_object__object____ctor(_9__2_1, v15, Method_AssumedEffectExtractLogic___c__FromServant_b__2_1__, 0);
      static_fields = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
      static_fields->__9__2_1 = (struct System_Func_ServantEntity__IEnumerable_int___o *)_9__2_1;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__2_1, (int32_t)_9__2_1, v17, v18);
    }
    Master_object = (System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                   v12,
                                                                   (System_Func_TSource__IEnumerable_TResult___o *)_9__2_1,
                                                                   (const MethodInfo_31210A4 *)Method_System_Linq_Enumerable_SelectMany_ServantEntity__int___);
    if ( !toUpdate
      || (v19 = (System_Collections_Generic_IEnumerable_T__o *)Master_object,
          (Master_object = toUpdate->fields.EffectIdHashSet) == 0) )
    {
LABEL_16:
      sub_1C372B4(Master_object);
    }
    System_Collections_Generic_HashSet_int___UnionWith(
      Master_object,
      v19,
      (const MethodInfo_3654C9C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
}


void AssumedEffectExtractLogic__FromSkill(
        System_Collections_Generic_IEnumerable_SimpleSkillData__o *skillDataEnumerable,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_HashSet_int__o *Master_object; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  AssumedEffectExtractLogic___c_c *v9; // x0
  System_Func_SimpleSkillData__bool__o *_9__0_0; // x22
  Il2CppObject *v11; // x23
  struct AssumedEffectExtractLogic___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x20
  System_Func_T__TResult__o *v16; // x22
  System_Collections_Generic_IEnumerable_T__o *v17; // x0
  System_Collections_Generic_IEnumerable_T__o *v18; // x0
  System_Object_array *v19; // x0
  AssumedEffectExtractLogic___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x20
  System_Func_object__object__o *_9__0_2; // x21
  Il2CppObject *v23; // x22
  struct AssumedEffectExtractLogic___c_StaticFields *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_IEnumerable_T__o *v27; // x1

  if ( (byte_4C45493 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_ExcludeNull_SkillEntity___);
    sub_1C37058(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_SelectMany_SkillEntity__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_SimpleSkillData__SkillEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_SkillEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_SimpleSkillData___);
    sub_1C37058(&System_Func_SimpleSkillData__SkillEntity__TypeInfo);
    sub_1C37058(&System_Func_SimpleSkillData__bool__TypeInfo);
    sub_1C37058(&System_Func_SkillEntity__IEnumerable_int___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1C37058(&Method_AssumedEffectExtractLogic___c__FromSkill_b__0_0__);
    sub_1C37058(&Method_AssumedEffectExtractLogic___c__FromSkill_b__0_2__);
    sub_1C37058(&Method_AssumedEffectExtractLogic___c__DisplayClass0_0__FromSkill_b__1__);
    sub_1C37058(&AssumedEffectExtractLogic___c__DisplayClass0_0_TypeInfo);
    sub_1C37058(&AssumedEffectExtractLogic___c_TypeInfo);
    byte_4C45493 = 1;
  }
  v5 = sub_1C372A4(AssumedEffectExtractLogic___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Collections_Generic_HashSet_int__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !v5 )
    goto LABEL_21;
  *(_QWORD *)(v5 + 16) = Master_object;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)Master_object, v7, v8);
  v9 = AssumedEffectExtractLogic___c_TypeInfo;
  if ( !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
    v9 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  _9__0_0 = v9->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = AssumedEffectExtractLogic___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__0_0 = (System_Func_SimpleSkillData__bool__o *)sub_1C372A4(System_Func_SimpleSkillData__bool__TypeInfo);
    System_Func_SimpleSkillData__bool____ctor(_9__0_0, v11, Method_AssumedEffectExtractLogic___c__FromSkill_b__0_0__, 0);
    static_fields = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = _9__0_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v13, v14);
  }
  v15 = System_Linq_Enumerable__Where_SimpleSkillData_(
          (System_Collections_Generic_IEnumerable_TSource__o *)skillDataEnumerable,
          (System_Func_TSource__bool__o *)_9__0_0,
          (const MethodInfo_312E6E4 *)Method_System_Linq_Enumerable_Where_SimpleSkillData___);
  v16 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_SimpleSkillData__SkillEntity__TypeInfo);
  System_Func_SimpleSkillData__object____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_AssumedEffectExtractLogic___c__DisplayClass0_0__FromSkill_b__1__,
    0);
  v17 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_SimpleSkillData__object_(
                                                         v15,
                                                         (System_Func_TSource__TResult__o *)v16,
                                                         (const MethodInfo_311F54C *)Method_System_Linq_Enumerable_Select_SimpleSkillData__SkillEntity___);
  v18 = BasicHelper__ExcludeNull_object_(v17, (const MethodInfo_30D194C *)Method_BasicHelper_ExcludeNull_SkillEntity___);
  v19 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v18,
          (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_SkillEntity___);
  v20 = AssumedEffectExtractLogic___c_TypeInfo;
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)v19;
  if ( !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
    v20 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  _9__0_2 = (System_Func_object__object__o *)v20->static_fields->__9__0_2;
  if ( !_9__0_2 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = AssumedEffectExtractLogic___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__0_2 = (System_Func_object__object__o *)sub_1C372A4(System_Func_SkillEntity__IEnumerable_int___TypeInfo);
    System_Func_object__object____ctor(_9__0_2, v23, Method_AssumedEffectExtractLogic___c__FromSkill_b__0_2__, 0);
    v24 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    v24->__9__0_2 = (struct System_Func_SkillEntity__IEnumerable_int___o *)_9__0_2;
    sub_1C36FFC((CGThumbnailListItem_o *)&v24->__9__0_2, (int32_t)_9__0_2, v25, v26);
  }
  Master_object = (System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                 v21,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__0_2,
                                                                 (const MethodInfo_31210A4 *)Method_System_Linq_Enumerable_SelectMany_SkillEntity__int___);
  if ( !toUpdate
    || (v27 = (System_Collections_Generic_IEnumerable_T__o *)Master_object,
        (Master_object = toUpdate->fields.EffectIdHashSet) == 0) )
  {
LABEL_21:
    sub_1C372B4(Master_object);
  }
  System_Collections_Generic_HashSet_int___UnionWith(
    Master_object,
    v27,
    (const MethodInfo_3654C9C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
}


void AssumedEffectExtractLogic__FromStage(
        StageEntity_o *stageEntity,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  StageEntity_o *v4; // x19
  System_Collections_Generic_HashSet_int__o *EffectIdHashSet; // x21
  System_Collections_Generic_HashSet_int__o *v6; // x21
  System_Collections_Generic_HashSet_int__o *v7; // x21
  System_Collections_Generic_HashSet_T__o *AudioAssetNameHashSet; // x21
  long double inited; // q0
  _QWORD *v10; // x21
  System_Collections_Generic_HashSet_int__o *cameraIdHashSet; // x20
  __int64 v12; // x8
  __int64 v13; // x0
  __int64 v14; // x0

  v4 = stageEntity;
  if ( (byte_4C45496 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Empty_int___);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_string__UnionWith__);
    stageEntity = (StageEntity_o *)sub_1C37058(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    byte_4C45496 = 1;
  }
  if ( v4 )
  {
    if ( !toUpdate )
      goto LABEL_20;
    EffectIdHashSet = toUpdate->fields.EffectIdHashSet;
    stageEntity = (StageEntity_o *)StageEntity__GetAssumedEffectId(v4, 0);
    if ( !EffectIdHashSet )
      goto LABEL_20;
    System_Collections_Generic_HashSet_int___UnionWith(
      EffectIdHashSet,
      (System_Collections_Generic_IEnumerable_T__o *)stageEntity,
      (const MethodInfo_3654C9C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    v6 = toUpdate->fields.EffectIdHashSet;
    stageEntity = (StageEntity_o *)StageEntity__GetSpecialShadowEffectId(v4, 1, 0);
    if ( !v6 )
      goto LABEL_20;
    System_Collections_Generic_HashSet_int___Add(
      v6,
      (int32_t)stageEntity,
      (const MethodInfo_3654C8C *)Method_System_Collections_Generic_HashSet_int__Add__);
    v7 = toUpdate->fields.EffectIdHashSet;
    stageEntity = (StageEntity_o *)StageEntity__GetSpecialShadowEffectId(v4, 0, 0);
    if ( !v7 )
      goto LABEL_20;
    System_Collections_Generic_HashSet_int___Add(
      v7,
      (int32_t)stageEntity,
      (const MethodInfo_3654C8C *)Method_System_Collections_Generic_HashSet_int__Add__);
    AudioAssetNameHashSet = (System_Collections_Generic_HashSet_T__o *)toUpdate->fields.AudioAssetNameHashSet;
    stageEntity = (StageEntity_o *)StageEntity__GetAssumedVoiceAssetNames(v4, 0);
    if ( !AudioAssetNameHashSet )
      goto LABEL_20;
    System_Collections_Generic_HashSet_object___UnionWith(
      AudioAssetNameHashSet,
      (System_Collections_Generic_IEnumerable_T__o *)stageEntity,
      (const MethodInfo_365B284 *)Method_System_Collections_Generic_HashSet_string__UnionWith__);
    v10 = Method_System_Array_Empty_int___;
    cameraIdHashSet = toUpdate->fields.cameraIdHashSet;
    v12 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v12 )
    {
      sub_1C877C8(Method_System_Array_Empty_int___);
      v12 = v10[7];
    }
    v13 = *(_QWORD *)(v12 + 16);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1C8776C(inited);
    if ( !*(_DWORD *)(v13 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v13);
    v14 = *(_QWORD *)(v10[7] + 16LL);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1C8776C(inited);
    stageEntity = (StageEntity_o *)StageEntity__GetAddUniqueCameraIds(v4, **(System_Int32_array ***)(v14 + 184), 0);
    if ( !cameraIdHashSet )
LABEL_20:
      sub_1C372B4(stageEntity);
    System_Collections_Generic_HashSet_int___UnionWith(
      cameraIdHashSet,
      (System_Collections_Generic_IEnumerable_T__o *)stageEntity,
      (const MethodInfo_3654C9C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
}


void AssumedEffectExtractLogic__FromTreasureDevice(
        System_Collections_Generic_IEnumerable_SimpleTreasureDeviceData__o *tdDataEnumerable,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_HashSet_int__o *Master_object; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  AssumedEffectExtractLogic___c_c *v9; // x0
  System_Func_SimpleTreasureDeviceData__bool__o *_9__1_0; // x22
  Il2CppObject *v11; // x23
  struct AssumedEffectExtractLogic___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x20
  System_Func_T__TResult__o *v16; // x22
  System_Collections_Generic_IEnumerable_T__o *v17; // x0
  System_Collections_Generic_IEnumerable_T__o *v18; // x0
  System_Object_array *v19; // x0
  AssumedEffectExtractLogic___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x20
  System_Func_object__object__o *_9__1_2; // x21
  Il2CppObject *v23; // x22
  struct AssumedEffectExtractLogic___c_StaticFields *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_IEnumerable_T__o *v27; // x1

  if ( (byte_4C45494 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_ExcludeNull_TreasureDvcEntity___);
    sub_1C37058(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_SelectMany_TreasureDvcEntity__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_SimpleTreasureDeviceData__TreasureDvcEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_TreasureDvcEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_SimpleTreasureDeviceData___);
    sub_1C37058(&System_Func_TreasureDvcEntity__IEnumerable_int___TypeInfo);
    sub_1C37058(&System_Func_SimpleTreasureDeviceData__bool__TypeInfo);
    sub_1C37058(&System_Func_SimpleTreasureDeviceData__TreasureDvcEntity__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1C37058(&Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_0__);
    sub_1C37058(&Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_2__);
    sub_1C37058(&Method_AssumedEffectExtractLogic___c__DisplayClass1_0__FromTreasureDevice_b__1__);
    sub_1C37058(&AssumedEffectExtractLogic___c__DisplayClass1_0_TypeInfo);
    sub_1C37058(&AssumedEffectExtractLogic___c_TypeInfo);
    byte_4C45494 = 1;
  }
  v5 = sub_1C372A4(AssumedEffectExtractLogic___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Collections_Generic_HashSet_int__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !v5 )
    goto LABEL_21;
  *(_QWORD *)(v5 + 16) = Master_object;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)Master_object, v7, v8);
  v9 = AssumedEffectExtractLogic___c_TypeInfo;
  if ( !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
    v9 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  _9__1_0 = v9->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = AssumedEffectExtractLogic___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__1_0 = (System_Func_SimpleTreasureDeviceData__bool__o *)sub_1C372A4(System_Func_SimpleTreasureDeviceData__bool__TypeInfo);
    System_Func_SimpleTreasureDeviceData__bool____ctor(
      _9__1_0,
      v11,
      Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_0__,
      0);
    static_fields = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = _9__1_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v13, v14);
  }
  v15 = System_Linq_Enumerable__Where_SimpleTreasureDeviceData_(
          (System_Collections_Generic_IEnumerable_TSource__o *)tdDataEnumerable,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_312E9B8 *)Method_System_Linq_Enumerable_Where_SimpleTreasureDeviceData___);
  v16 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_SimpleTreasureDeviceData__TreasureDvcEntity__TypeInfo);
  System_Func_SimpleTreasureDeviceData__object____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_AssumedEffectExtractLogic___c__DisplayClass1_0__FromTreasureDevice_b__1__,
    0);
  v17 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_SimpleTreasureDeviceData__object_(
                                                         v15,
                                                         (System_Func_TSource__TResult__o *)v16,
                                                         (const MethodInfo_311F840 *)Method_System_Linq_Enumerable_Select_SimpleTreasureDeviceData__TreasureDvcEntity___);
  v18 = BasicHelper__ExcludeNull_object_(
          v17,
          (const MethodInfo_30D194C *)Method_BasicHelper_ExcludeNull_TreasureDvcEntity___);
  v19 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v18,
          (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_TreasureDvcEntity___);
  v20 = AssumedEffectExtractLogic___c_TypeInfo;
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)v19;
  if ( !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
    v20 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  _9__1_2 = (System_Func_object__object__o *)v20->static_fields->__9__1_2;
  if ( !_9__1_2 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = AssumedEffectExtractLogic___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__1_2 = (System_Func_object__object__o *)sub_1C372A4(System_Func_TreasureDvcEntity__IEnumerable_int___TypeInfo);
    System_Func_object__object____ctor(
      _9__1_2,
      v23,
      Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_2__,
      0);
    v24 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    v24->__9__1_2 = (struct System_Func_TreasureDvcEntity__IEnumerable_int___o *)_9__1_2;
    sub_1C36FFC((CGThumbnailListItem_o *)&v24->__9__1_2, (int32_t)_9__1_2, v25, v26);
  }
  Master_object = (System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                 v21,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__1_2,
                                                                 (const MethodInfo_31210A4 *)Method_System_Linq_Enumerable_SelectMany_TreasureDvcEntity__int___);
  if ( !toUpdate
    || (v27 = (System_Collections_Generic_IEnumerable_T__o *)Master_object,
        (Master_object = toUpdate->fields.EffectIdHashSet) == 0) )
  {
LABEL_21:
    sub_1C372B4(Master_object);
  }
  System_Collections_Generic_HashSet_int___UnionWith(
    Master_object,
    v27,
    (const MethodInfo_3654C9C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
}


void AssumedEffectExtractLogic___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C4549A & 1) == 0 )
  {
    sub_1C37058(&AssumedEffectExtractLogic___c_TypeInfo);
    byte_4C4549A = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(AssumedEffectExtractLogic___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AssumedEffectExtractLogic___c_TypeInfo->static_fields->__9 = (struct AssumedEffectExtractLogic___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)AssumedEffectExtractLogic___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void AssumedEffectExtractLogic___c___ctor(AssumedEffectExtractLogic___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_IEnumerable_int__o *AssumedEffectExtractLogic___c___FromServant_b__2_1(
        AssumedEffectExtractLogic___c_o *this,
        ServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return (System_Collections_Generic_IEnumerable_int__o *)ServantEntity__GetAssumedEffectId(x, 0);
}


bool AssumedEffectExtractLogic___c___FromSkill_b__0_0(
        AssumedEffectExtractLogic___c_o *this,
        SimpleSkillData_o x,
        const MethodInfo *method)
{
  return x.fields.id > 0;
}


System_Collections_Generic_IEnumerable_int__o *AssumedEffectExtractLogic___c___FromSkill_b__0_2(
        AssumedEffectExtractLogic___c_o *this,
        SkillEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return (System_Collections_Generic_IEnumerable_int__o *)SkillEntity__GetAssumedEffectId(x, 0);
}


bool AssumedEffectExtractLogic___c___FromTreasureDevice_b__1_0(
        AssumedEffectExtractLogic___c_o *this,
        SimpleTreasureDeviceData_o x,
        const MethodInfo *method)
{
  return x.fields.id > 0;
}


System_Collections_Generic_IEnumerable_int__o *AssumedEffectExtractLogic___c___FromTreasureDevice_b__1_2(
        AssumedEffectExtractLogic___c_o *this,
        TreasureDvcEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return (System_Collections_Generic_IEnumerable_int__o *)TreasureDvcEntity__GetAssumedEffectId(x, 0);
}


void AssumedEffectExtractLogic___c__DisplayClass0_0___ctor(
        AssumedEffectExtractLogic___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


SkillEntity_o *AssumedEffectExtractLogic___c__DisplayClass0_0___FromSkill_b__1(
        AssumedEffectExtractLogic___c__DisplayClass0_0_o *this,
        SimpleSkillData_o x,
        const MethodInfo *method)
{
  int32_t id; // w19
  DataMasterBase_TMaster__TEntity__PKType__o *skillMaster; // x0

  id = x.fields.id;
  if ( (byte_4C4549B & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    byte_4C4549B = 1;
  }
  skillMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.skillMaster;
  if ( !skillMaster )
    sub_1C372B4(0);
  return (SkillEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            skillMaster,
                            id,
                            (const MethodInfo_33A10A0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
}


void AssumedEffectExtractLogic___c__DisplayClass1_0___ctor(
        AssumedEffectExtractLogic___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


TreasureDvcEntity_o *AssumedEffectExtractLogic___c__DisplayClass1_0___FromTreasureDevice_b__1(
        AssumedEffectExtractLogic___c__DisplayClass1_0_o *this,
        SimpleTreasureDeviceData_o x,
        const MethodInfo *method)
{
  int32_t id; // w19
  DataMasterBase_TMaster__TEntity__PKType__o *tdMaster; // x0

  id = x.fields.id;
  if ( (byte_4C4549C & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    byte_4C4549C = 1;
  }
  tdMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.tdMaster;
  if ( !tdMaster )
    sub_1C372B4(0);
  return (TreasureDvcEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                  tdMaster,
                                  id,
                                  (const MethodInfo_33A10A0 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
}


void AssumedEffectExtractLogic___c__DisplayClass2_0___ctor(
        AssumedEffectExtractLogic___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


ServantEntity_o *AssumedEffectExtractLogic___c__DisplayClass2_0___FromServant_b__0(
        AssumedEffectExtractLogic___c__DisplayClass2_0_o *this,
        BattleUserServantData_o *x,
        const MethodInfo *method)
{
  AssumedEffectExtractLogic___c__DisplayClass2_0_o *v4; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *servantMaster; // x20
  __int64 v6; // x19
  __int64 v7; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v4 = this;
  if ( (byte_4C4549D & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this = (AssumedEffectExtractLogic___c__DisplayClass2_0_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C4549D = 1;
  }
  if ( !x )
    goto LABEL_8;
  servantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.servantMaster;
  v7 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  this = (AssumedEffectExtractLogic___c__DisplayClass2_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                               v9,
                                                               0);
  if ( !servantMaster )
LABEL_8:
    sub_1C372B4(this);
  return (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              servantMaster,
                              (int32_t)this,
                              (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
}