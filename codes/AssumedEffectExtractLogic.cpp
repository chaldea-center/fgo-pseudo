void AssumedEffectExtractLogic__FromEnemyScript(
        BattleInfoData_o *battleInfo,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_BattleDeckServantData__o *v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_BattleDeckServantData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleDeckServantData__o *v8; // x19
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x19
  __int64 v14; // x8
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  BattleDeckServantData_o *v22; // x0
  __int64 v23; // x1
  BattleDeckServantData_o *v24; // x21
  System_Collections_Generic_HashSet_int__o *EffectIdHashSet; // x22
  System_Collections_Generic_IEnumerable_T__o *AssumedEffectId; // x0
  EnemyScriptParam_OverwriteShadowData_array *OverwriteShadowDataArray; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  EnemyScriptParam_OverwriteShadowData_array *v30; // x21
  int max_length; // w8
  int i; // w22
  EnemyScriptParam_OverwriteShadowData_o *v33; // x8
  System_Collections_Generic_HashSet_int__o *v34; // x0
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0

  if ( (byte_4C29790 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    byte_4C29790 = 1;
  }
  if ( battleInfo )
  {
    v5 = BattleInfoData__AllDeckServantEnumerable(battleInfo, 0);
    if ( !v5 )
      sub_1C2D6EC(0, v6);
    klass = v5->klass;
    v8 = v5;
    v9 = *(unsigned __int16 *)&v5->klass->_2.rank;
    if ( *(_WORD *)&v5->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleDeckServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v11 = sub_1C7DCA8(v5, System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, 0);
    }
    v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleDeckServantData__o *, _QWORD))v11)(
            v8,
            *(_QWORD *)(v11 + 8));
    if ( !v13 )
      sub_1C2D6EC(0, v12);
    while ( 1 )
    {
      v14 = *(_QWORD *)v13;
      v15 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
      {
        v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v16 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v15;
          v16 += 4;
          if ( !v15 )
            goto LABEL_16;
        }
        v17 = v14 + 16LL * *v16 + 312;
      }
      else
      {
LABEL_16:
        v17 = sub_1C7DCA8(v13, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v17)(v13, *(_QWORD *)(v17 + 8)) & 1) == 0 )
        break;
      v18 = *(_QWORD *)v13;
      v19 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
      {
        v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BattleDeckServantData__c **)v20 - 1) != System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo )
        {
          --v19;
          v20 += 4;
          if ( !v19 )
            goto LABEL_23;
        }
        v21 = v18 + 16LL * *v20 + 312;
      }
      else
      {
LABEL_23:
        v21 = sub_1C7DCA8(v13, System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, 0);
      }
      v22 = (BattleDeckServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v13, *(_QWORD *)(v21 + 8));
      if ( !toUpdate )
        sub_1C2D6EC(v22, v23);
      v24 = v22;
      if ( !v22 )
        sub_1C2D6EC(0, v23);
      EffectIdHashSet = toUpdate->fields.EffectIdHashSet;
      AssumedEffectId = (System_Collections_Generic_IEnumerable_T__o *)BattleDeckServantData__GetAssumedEffectId(v22, 0);
      if ( !EffectIdHashSet )
        sub_1C2D6EC(AssumedEffectId, AssumedEffectId);
      System_Collections_Generic_HashSet_int___UnionWith(
        EffectIdHashSet,
        AssumedEffectId,
        (const MethodInfo_363B994 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
      OverwriteShadowDataArray = BattleDeckServantData__GetOverwriteShadowDataArray(v24, 0);
      v30 = OverwriteShadowDataArray;
      if ( !OverwriteShadowDataArray )
        sub_1C2D6EC(0, v28);
      max_length = OverwriteShadowDataArray->max_length;
      if ( max_length >= 1 )
      {
        for ( i = 0; i < max_length; ++i )
        {
          if ( i >= (unsigned int)max_length )
            sub_1C2D6F4(OverwriteShadowDataArray, v28, v29);
          v33 = v30->m_Items[i];
          if ( !v33 )
            sub_1C2D6EC(OverwriteShadowDataArray, v28);
          v34 = toUpdate->fields.EffectIdHashSet;
          if ( !v34 )
            sub_1C2D6EC(0, v28);
          OverwriteShadowDataArray = (EnemyScriptParam_OverwriteShadowData_array *)System_Collections_Generic_HashSet_int___Add(
                                                                                     v34,
                                                                                     v33->fields.specialShadowEffectId,
                                                                                     (const MethodInfo_363B984 *)Method_System_Collections_Generic_HashSet_int__Add__);
          max_length = v30->max_length;
        }
      }
    }
    v35 = *(_QWORD *)v13;
    v36 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
    {
      v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_40;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_40:
      v38 = sub_1C7DCA8(v13, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v38)(v13, *(_QWORD *)(v38 + 8));
  }
}


void AssumedEffectExtractLogic__FromItem(
        int32_t id,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w21
  int32_t v8; // w20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C29791 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C29791 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_17;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          id,
          (const MethodInfo_3387DE4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    return;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_17;
  Instance = (DataManager_o *)ItemEntity__GetBattleAppearEffect((ItemEntity_o *)entity, 0);
  if ( !entity )
    goto LABEL_17;
  v7 = (int)Instance;
  Instance = (DataManager_o *)ItemEntity__GetBattleGetEffect((ItemEntity_o *)entity, 0);
  v8 = (int)Instance;
  if ( v7 >= 1 )
  {
    if ( !toUpdate )
      goto LABEL_17;
    Instance = (DataManager_o *)toUpdate->fields.EffectIdHashSet;
    if ( !Instance )
      goto LABEL_17;
    Instance = (DataManager_o *)System_Collections_Generic_HashSet_int___Add(
                                  (System_Collections_Generic_HashSet_int__o *)Instance,
                                  v7,
                                  (const MethodInfo_363B984 *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  if ( v8 < 1 )
    return;
  if ( !toUpdate || (Instance = (DataManager_o *)toUpdate->fields.EffectIdHashSet) == 0 )
LABEL_17:
    sub_1C2D6EC(Instance, v6);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)Instance,
    v8,
    (const MethodInfo_363B984 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
  if ( (byte_4C2978F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Empty_int___);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__Add__);
    questPhaseEntity = (QuestPhaseEntity_o *)sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    byte_4C2978F = 1;
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
      (const MethodInfo_363B994 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    v6 = toUpdate->fields.EffectIdHashSet;
    questPhaseEntity = (QuestPhaseEntity_o *)QuestPhaseEntity__getSpecialShadowEffectId(v4, 0);
    if ( !v6 )
      goto LABEL_19;
    System_Collections_Generic_HashSet_int___Add(
      v6,
      (int32_t)questPhaseEntity,
      (const MethodInfo_363B984 *)Method_System_Collections_Generic_HashSet_int__Add__);
    v7 = toUpdate->fields.EffectIdHashSet;
    questPhaseEntity = (QuestPhaseEntity_o *)QuestPhaseEntity__GetBattleSkillDropEffectIds(v4, 0);
    if ( !v7 )
      goto LABEL_19;
    System_Collections_Generic_HashSet_int___UnionWith(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)questPhaseEntity,
      (const MethodInfo_363B994 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    v9 = Method_System_Array_Empty_int___;
    cameraIdHashSet = toUpdate->fields.cameraIdHashSet;
    v11 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v11 )
    {
      sub_1C7DC00(Method_System_Array_Empty_int___);
      v11 = v9[7];
    }
    v12 = *(_QWORD *)(v11 + 16);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1C7DBA4(inited);
    if ( !*(_DWORD *)(v12 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v12);
    v13 = *(_QWORD *)(v9[7] + 16LL);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1C7DBA4(inited);
    questPhaseEntity = (QuestPhaseEntity_o *)QuestPhaseEntity__GetAddUniqueCameraIds(
                                               v4,
                                               **(System_Int32_array ***)(v13 + 184),
                                               0);
    if ( !cameraIdHashSet )
LABEL_19:
      sub_1C2D6EC(questPhaseEntity, toUpdate);
    System_Collections_Generic_HashSet_int___UnionWith(
      cameraIdHashSet,
      (System_Collections_Generic_IEnumerable_T__o *)questPhaseEntity,
      (const MethodInfo_363B994 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
}


void AssumedEffectExtractLogic__FromServant(
        BattleUserServantData_array *servants,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_HashSet_int__o *Master_object; // x0
  System_Collections_Generic_IEnumerable_T__o *v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Func_object__object__o *v10; // x22
  System_Collections_Generic_IEnumerable_T__o *v11; // x0
  System_Collections_Generic_IEnumerable_T__o *v12; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x20
  AssumedEffectExtractLogic___c_c *v14; // x8
  System_Func_object__object__o *_9__2_1; // x21
  Il2CppObject *v16; // x22
  struct AssumedEffectExtractLogic___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4C2978D & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_ExcludeNull_ServantEntity___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_SelectMany_ServantEntity__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_BattleUserServantData__ServantEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_ServantEntity___);
    sub_1C2D490(&System_Func_BattleUserServantData__ServantEntity__TypeInfo);
    sub_1C2D490(&System_Func_ServantEntity__IEnumerable_int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1C2D490(&Method_AssumedEffectExtractLogic___c__FromServant_b__2_1__);
    sub_1C2D490(&Method_AssumedEffectExtractLogic___c__DisplayClass2_0__FromServant_b__0__);
    sub_1C2D490(&AssumedEffectExtractLogic___c__DisplayClass2_0_TypeInfo);
    sub_1C2D490(&AssumedEffectExtractLogic___c_TypeInfo);
    byte_4C2978D = 1;
  }
  v5 = sub_1C2D6DC(AssumedEffectExtractLogic___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)servants, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (System_Collections_Generic_HashSet_int__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !v5 )
      goto LABEL_16;
    *(_QWORD *)(v5 + 16) = Master_object;
    sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)Master_object, v8, v9);
    v10 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_BattleUserServantData__ServantEntity__TypeInfo);
    System_Func_object__object____ctor(
      v10,
      (Il2CppObject *)v5,
      Method_AssumedEffectExtractLogic___c__DisplayClass2_0__FromServant_b__0__,
      0);
    v11 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)servants,
                                                           (System_Func_TSource__TResult__o *)v10,
                                                           (const MethodInfo_310501C *)Method_System_Linq_Enumerable_Select_BattleUserServantData__ServantEntity___);
    v12 = BasicHelper__ExcludeNull_object_(
            v11,
            (const MethodInfo_30B8644 *)Method_BasicHelper_ExcludeNull_ServantEntity___);
    v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v12,
                                                                 (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_ServantEntity___);
    v14 = AssumedEffectExtractLogic___c_TypeInfo;
    if ( !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
      v14 = AssumedEffectExtractLogic___c_TypeInfo;
    }
    _9__2_1 = (System_Func_object__object__o *)v14->static_fields->__9__2_1;
    if ( !_9__2_1 )
    {
      if ( !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        v14 = AssumedEffectExtractLogic___c_TypeInfo;
      }
      v16 = (Il2CppObject *)v14->static_fields->__9;
      _9__2_1 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_ServantEntity__IEnumerable_int___TypeInfo);
      System_Func_object__object____ctor(_9__2_1, v16, Method_AssumedEffectExtractLogic___c__FromServant_b__2_1__, 0);
      static_fields = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
      static_fields->__9__2_1 = (struct System_Func_ServantEntity__IEnumerable_int___o *)_9__2_1;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__2_1, (int32_t)_9__2_1, v18, v19);
    }
    Master_object = (System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                   v13,
                                                                   (System_Func_TSource__IEnumerable_TResult___o *)_9__2_1,
                                                                   (const MethodInfo_3107D9C *)Method_System_Linq_Enumerable_SelectMany_ServantEntity__int___);
    if ( !toUpdate
      || (v7 = (System_Collections_Generic_IEnumerable_T__o *)Master_object,
          (Master_object = toUpdate->fields.EffectIdHashSet) == 0) )
    {
LABEL_16:
      sub_1C2D6EC(Master_object, v7);
    }
    System_Collections_Generic_HashSet_int___UnionWith(
      Master_object,
      v7,
      (const MethodInfo_363B994 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
}


void AssumedEffectExtractLogic__FromSkill(
        System_Collections_Generic_IEnumerable_SimpleSkillData__o *skillDataEnumerable,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_HashSet_int__o *Master_object; // x0
  System_Collections_Generic_IEnumerable_T__o *v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  AssumedEffectExtractLogic___c_c *v10; // x0
  System_Func_SimpleSkillData__bool__o *_9__0_0; // x22
  Il2CppObject *v12; // x23
  struct AssumedEffectExtractLogic___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x20
  System_Func_T__TResult__o *v17; // x22
  System_Collections_Generic_IEnumerable_T__o *v18; // x0
  System_Collections_Generic_IEnumerable_T__o *v19; // x0
  System_Object_array *v20; // x0
  AssumedEffectExtractLogic___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x20
  System_Func_object__object__o *_9__0_2; // x21
  Il2CppObject *v24; // x22
  struct AssumedEffectExtractLogic___c_StaticFields *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3

  if ( (byte_4C2978B & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_ExcludeNull_SkillEntity___);
    sub_1C2D490(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_SelectMany_SkillEntity__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_SimpleSkillData__SkillEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_SkillEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_SimpleSkillData___);
    sub_1C2D490(&System_Func_SimpleSkillData__SkillEntity__TypeInfo);
    sub_1C2D490(&System_Func_SimpleSkillData__bool__TypeInfo);
    sub_1C2D490(&System_Func_SkillEntity__IEnumerable_int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1C2D490(&Method_AssumedEffectExtractLogic___c__FromSkill_b__0_0__);
    sub_1C2D490(&Method_AssumedEffectExtractLogic___c__FromSkill_b__0_2__);
    sub_1C2D490(&Method_AssumedEffectExtractLogic___c__DisplayClass0_0__FromSkill_b__1__);
    sub_1C2D490(&AssumedEffectExtractLogic___c__DisplayClass0_0_TypeInfo);
    sub_1C2D490(&AssumedEffectExtractLogic___c_TypeInfo);
    byte_4C2978B = 1;
  }
  v5 = sub_1C2D6DC(AssumedEffectExtractLogic___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Collections_Generic_HashSet_int__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !v5 )
    goto LABEL_21;
  *(_QWORD *)(v5 + 16) = Master_object;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)Master_object, v8, v9);
  v10 = AssumedEffectExtractLogic___c_TypeInfo;
  if ( !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
    v10 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  _9__0_0 = v10->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = AssumedEffectExtractLogic___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__0_0 = (System_Func_SimpleSkillData__bool__o *)sub_1C2D6DC(System_Func_SimpleSkillData__bool__TypeInfo);
    System_Func_SimpleSkillData__bool____ctor(_9__0_0, v12, Method_AssumedEffectExtractLogic___c__FromSkill_b__0_0__, 0);
    static_fields = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = _9__0_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v14, v15);
  }
  v16 = System_Linq_Enumerable__Where_SimpleSkillData_(
          (System_Collections_Generic_IEnumerable_TSource__o *)skillDataEnumerable,
          (System_Func_TSource__bool__o *)_9__0_0,
          (const MethodInfo_31153DC *)Method_System_Linq_Enumerable_Where_SimpleSkillData___);
  v17 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_SimpleSkillData__SkillEntity__TypeInfo);
  System_Func_SimpleSkillData__object____ctor(
    v17,
    (Il2CppObject *)v5,
    Method_AssumedEffectExtractLogic___c__DisplayClass0_0__FromSkill_b__1__,
    0);
  v18 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_SimpleSkillData__object_(
                                                         v16,
                                                         (System_Func_TSource__TResult__o *)v17,
                                                         (const MethodInfo_3106244 *)Method_System_Linq_Enumerable_Select_SimpleSkillData__SkillEntity___);
  v19 = BasicHelper__ExcludeNull_object_(v18, (const MethodInfo_30B8644 *)Method_BasicHelper_ExcludeNull_SkillEntity___);
  v20 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v19,
          (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_SkillEntity___);
  v21 = AssumedEffectExtractLogic___c_TypeInfo;
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)v20;
  if ( !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
    v21 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  _9__0_2 = (System_Func_object__object__o *)v21->static_fields->__9__0_2;
  if ( !_9__0_2 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = AssumedEffectExtractLogic___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v21->static_fields->__9;
    _9__0_2 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_SkillEntity__IEnumerable_int___TypeInfo);
    System_Func_object__object____ctor(_9__0_2, v24, Method_AssumedEffectExtractLogic___c__FromSkill_b__0_2__, 0);
    v25 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    v25->__9__0_2 = (struct System_Func_SkillEntity__IEnumerable_int___o *)_9__0_2;
    sub_1C2D434((CGThumbnailListItem_o *)&v25->__9__0_2, (int32_t)_9__0_2, v26, v27);
  }
  Master_object = (System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                 v22,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__0_2,
                                                                 (const MethodInfo_3107D9C *)Method_System_Linq_Enumerable_SelectMany_SkillEntity__int___);
  if ( !toUpdate
    || (v7 = (System_Collections_Generic_IEnumerable_T__o *)Master_object,
        (Master_object = toUpdate->fields.EffectIdHashSet) == 0) )
  {
LABEL_21:
    sub_1C2D6EC(Master_object, v7);
  }
  System_Collections_Generic_HashSet_int___UnionWith(
    Master_object,
    v7,
    (const MethodInfo_363B994 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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
  if ( (byte_4C2978E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Empty_int___);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_string__UnionWith__);
    stageEntity = (StageEntity_o *)sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    byte_4C2978E = 1;
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
      (const MethodInfo_363B994 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    v6 = toUpdate->fields.EffectIdHashSet;
    stageEntity = (StageEntity_o *)StageEntity__GetSpecialShadowEffectId(v4, 1, 0);
    if ( !v6 )
      goto LABEL_20;
    System_Collections_Generic_HashSet_int___Add(
      v6,
      (int32_t)stageEntity,
      (const MethodInfo_363B984 *)Method_System_Collections_Generic_HashSet_int__Add__);
    v7 = toUpdate->fields.EffectIdHashSet;
    stageEntity = (StageEntity_o *)StageEntity__GetSpecialShadowEffectId(v4, 0, 0);
    if ( !v7 )
      goto LABEL_20;
    System_Collections_Generic_HashSet_int___Add(
      v7,
      (int32_t)stageEntity,
      (const MethodInfo_363B984 *)Method_System_Collections_Generic_HashSet_int__Add__);
    AudioAssetNameHashSet = (System_Collections_Generic_HashSet_T__o *)toUpdate->fields.AudioAssetNameHashSet;
    stageEntity = (StageEntity_o *)StageEntity__GetAssumedVoiceAssetNames(v4, 0);
    if ( !AudioAssetNameHashSet )
      goto LABEL_20;
    System_Collections_Generic_HashSet_object___UnionWith(
      AudioAssetNameHashSet,
      (System_Collections_Generic_IEnumerable_T__o *)stageEntity,
      (const MethodInfo_3641F7C *)Method_System_Collections_Generic_HashSet_string__UnionWith__);
    v10 = Method_System_Array_Empty_int___;
    cameraIdHashSet = toUpdate->fields.cameraIdHashSet;
    v12 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v12 )
    {
      sub_1C7DC00(Method_System_Array_Empty_int___);
      v12 = v10[7];
    }
    v13 = *(_QWORD *)(v12 + 16);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1C7DBA4(inited);
    if ( !*(_DWORD *)(v13 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v13);
    v14 = *(_QWORD *)(v10[7] + 16LL);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1C7DBA4(inited);
    stageEntity = (StageEntity_o *)StageEntity__GetAddUniqueCameraIds(v4, **(System_Int32_array ***)(v14 + 184), 0);
    if ( !cameraIdHashSet )
LABEL_20:
      sub_1C2D6EC(stageEntity, toUpdate);
    System_Collections_Generic_HashSet_int___UnionWith(
      cameraIdHashSet,
      (System_Collections_Generic_IEnumerable_T__o *)stageEntity,
      (const MethodInfo_363B994 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
}


void AssumedEffectExtractLogic__FromTreasureDevice(
        System_Collections_Generic_IEnumerable_SimpleTreasureDeviceData__o *tdDataEnumerable,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_HashSet_int__o *Master_object; // x0
  System_Collections_Generic_IEnumerable_T__o *v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  AssumedEffectExtractLogic___c_c *v10; // x0
  System_Func_SimpleTreasureDeviceData__bool__o *_9__1_0; // x22
  Il2CppObject *v12; // x23
  struct AssumedEffectExtractLogic___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x20
  System_Func_T__TResult__o *v17; // x22
  System_Collections_Generic_IEnumerable_T__o *v18; // x0
  System_Collections_Generic_IEnumerable_T__o *v19; // x0
  System_Object_array *v20; // x0
  AssumedEffectExtractLogic___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x20
  System_Func_object__object__o *_9__1_2; // x21
  Il2CppObject *v24; // x22
  struct AssumedEffectExtractLogic___c_StaticFields *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3

  if ( (byte_4C2978C & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_ExcludeNull_TreasureDvcEntity___);
    sub_1C2D490(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_SelectMany_TreasureDvcEntity__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_SimpleTreasureDeviceData__TreasureDvcEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_TreasureDvcEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_SimpleTreasureDeviceData___);
    sub_1C2D490(&System_Func_TreasureDvcEntity__IEnumerable_int___TypeInfo);
    sub_1C2D490(&System_Func_SimpleTreasureDeviceData__bool__TypeInfo);
    sub_1C2D490(&System_Func_SimpleTreasureDeviceData__TreasureDvcEntity__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1C2D490(&Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_0__);
    sub_1C2D490(&Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_2__);
    sub_1C2D490(&Method_AssumedEffectExtractLogic___c__DisplayClass1_0__FromTreasureDevice_b__1__);
    sub_1C2D490(&AssumedEffectExtractLogic___c__DisplayClass1_0_TypeInfo);
    sub_1C2D490(&AssumedEffectExtractLogic___c_TypeInfo);
    byte_4C2978C = 1;
  }
  v5 = sub_1C2D6DC(AssumedEffectExtractLogic___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Collections_Generic_HashSet_int__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !v5 )
    goto LABEL_21;
  *(_QWORD *)(v5 + 16) = Master_object;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)Master_object, v8, v9);
  v10 = AssumedEffectExtractLogic___c_TypeInfo;
  if ( !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
    v10 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  _9__1_0 = v10->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = AssumedEffectExtractLogic___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__1_0 = (System_Func_SimpleTreasureDeviceData__bool__o *)sub_1C2D6DC(System_Func_SimpleTreasureDeviceData__bool__TypeInfo);
    System_Func_SimpleTreasureDeviceData__bool____ctor(
      _9__1_0,
      v12,
      Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_0__,
      0);
    static_fields = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = _9__1_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v14, v15);
  }
  v16 = System_Linq_Enumerable__Where_SimpleTreasureDeviceData_(
          (System_Collections_Generic_IEnumerable_TSource__o *)tdDataEnumerable,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_31156B0 *)Method_System_Linq_Enumerable_Where_SimpleTreasureDeviceData___);
  v17 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_SimpleTreasureDeviceData__TreasureDvcEntity__TypeInfo);
  System_Func_SimpleTreasureDeviceData__object____ctor(
    v17,
    (Il2CppObject *)v5,
    Method_AssumedEffectExtractLogic___c__DisplayClass1_0__FromTreasureDevice_b__1__,
    0);
  v18 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_SimpleTreasureDeviceData__object_(
                                                         v16,
                                                         (System_Func_TSource__TResult__o *)v17,
                                                         (const MethodInfo_3106538 *)Method_System_Linq_Enumerable_Select_SimpleTreasureDeviceData__TreasureDvcEntity___);
  v19 = BasicHelper__ExcludeNull_object_(
          v18,
          (const MethodInfo_30B8644 *)Method_BasicHelper_ExcludeNull_TreasureDvcEntity___);
  v20 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v19,
          (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_TreasureDvcEntity___);
  v21 = AssumedEffectExtractLogic___c_TypeInfo;
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)v20;
  if ( !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
    v21 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  _9__1_2 = (System_Func_object__object__o *)v21->static_fields->__9__1_2;
  if ( !_9__1_2 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = AssumedEffectExtractLogic___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v21->static_fields->__9;
    _9__1_2 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_TreasureDvcEntity__IEnumerable_int___TypeInfo);
    System_Func_object__object____ctor(
      _9__1_2,
      v24,
      Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_2__,
      0);
    v25 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    v25->__9__1_2 = (struct System_Func_TreasureDvcEntity__IEnumerable_int___o *)_9__1_2;
    sub_1C2D434((CGThumbnailListItem_o *)&v25->__9__1_2, (int32_t)_9__1_2, v26, v27);
  }
  Master_object = (System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                 v22,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__1_2,
                                                                 (const MethodInfo_3107D9C *)Method_System_Linq_Enumerable_SelectMany_TreasureDvcEntity__int___);
  if ( !toUpdate
    || (v7 = (System_Collections_Generic_IEnumerable_T__o *)Master_object,
        (Master_object = toUpdate->fields.EffectIdHashSet) == 0) )
  {
LABEL_21:
    sub_1C2D6EC(Master_object, v7);
  }
  System_Collections_Generic_HashSet_int___UnionWith(
    Master_object,
    v7,
    (const MethodInfo_363B994 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
}


void AssumedEffectExtractLogic___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C29792 & 1) == 0 )
  {
    sub_1C2D490(&AssumedEffectExtractLogic___c_TypeInfo);
    byte_4C29792 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(AssumedEffectExtractLogic___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AssumedEffectExtractLogic___c_TypeInfo->static_fields->__9 = (struct AssumedEffectExtractLogic___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)AssumedEffectExtractLogic___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
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
  if ( (byte_4C29793 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    byte_4C29793 = 1;
  }
  skillMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.skillMaster;
  if ( !skillMaster )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C2D6EC)(0, x);
  return (SkillEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            skillMaster,
                            id,
                            (const MethodInfo_3387D98 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
  if ( (byte_4C29794 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    byte_4C29794 = 1;
  }
  tdMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.tdMaster;
  if ( !tdMaster )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C2D6EC)(0, x);
  return (TreasureDvcEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                  tdMaster,
                                  id,
                                  (const MethodInfo_3387D98 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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
  if ( (byte_4C29795 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this = (AssumedEffectExtractLogic___c__DisplayClass2_0_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C29795 = 1;
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
  this = (AssumedEffectExtractLogic___c__DisplayClass2_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                               v9,
                                                               0);
  if ( !servantMaster )
LABEL_8:
    sub_1C2D6EC(this, x);
  return (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              servantMaster,
                              (int32_t)this,
                              (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
}