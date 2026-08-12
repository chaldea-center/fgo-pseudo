void AssumedEffectExtractLogic__FromEnemyScript(
        BattleInfoData_o *battleInfo,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_BattleDeckServantData__o *v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_BattleDeckServantData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleDeckServantData__o *v8; // x20
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 i; // x20
  __int64 v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  BattleDeckServantData_o *v25; // x0
  __int64 v26; // x1
  BattleDeckServantData_o *v27; // x20
  System_Collections_Generic_HashSet_int__o *EffectIdHashSet; // x21
  System_Collections_Generic_IEnumerable_T__o *AssumedEffectId; // x0
  EnemyScriptParam_OverwriteShadowData_array *OverwriteShadowDataArray; // x0
  __int64 v31; // x1
  EnemyScriptParam_OverwriteShadowData_array *v32; // x20
  int max_length; // w8
  __int64 v34; // x21
  EnemyScriptParam_OverwriteShadowData_o *v35; // x8
  System_Collections_Generic_HashSet_int__o *v36; // x0
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  __int64 v41; // [xsp+18h] [xbp-48h]

  if ( (byte_5972E2B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_5972E2B = 1;
  }
  if ( battleInfo )
  {
    v5 = BattleInfoData__AllDeckServantEnumerable(battleInfo, 0);
    if ( !v5 )
      sub_2213CDC(0, v6);
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
      v11 = sub_224BC3C(v5, System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, 0);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleDeckServantData__o *, _QWORD))v11)(
            v8,
            *(_QWORD *)(v11 + 8));
    v41 = v12;
    if ( !v12 )
      sub_2213CDC(v12, v13);
    for ( i = v12; ; i = v41 )
    {
      v15 = *(_QWORD *)i;
      v16 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
      if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
      {
        v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v17 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v16;
          v17 += 4;
          if ( !v16 )
            goto LABEL_17;
        }
        v18 = v15 + 16LL * *v17 + 312;
      }
      else
      {
LABEL_17:
        v18 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
      }
      v19 = (*(__int64 (__fastcall **)(__int64, _QWORD))v18)(i, *(_QWORD *)(v18 + 8));
      if ( (v19 & 1) == 0 )
        break;
      if ( !v41 )
        sub_2213CDC(v19, v20);
      v21 = *(_QWORD *)v41;
      v22 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
      {
        v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BattleDeckServantData__c **)v23 - 1) != System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo )
        {
          --v22;
          v23 += 4;
          if ( !v22 )
            goto LABEL_25;
        }
        v24 = v21 + 16LL * *v23 + 312;
      }
      else
      {
LABEL_25:
        v24 = sub_224BC3C(v41, System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, 0);
      }
      v25 = (BattleDeckServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v41, *(_QWORD *)(v24 + 8));
      if ( !toUpdate )
        sub_2213CDC(v25, v26);
      v27 = v25;
      if ( !v25 )
        sub_2213CDC(0, v26);
      EffectIdHashSet = toUpdate->fields.EffectIdHashSet;
      AssumedEffectId = (System_Collections_Generic_IEnumerable_T__o *)BattleDeckServantData__GetAssumedEffectId(v25, 0);
      if ( !EffectIdHashSet )
        sub_2213CDC(AssumedEffectId, AssumedEffectId);
      System_Collections_Generic_HashSet_int___UnionWith(
        EffectIdHashSet,
        AssumedEffectId,
        (const MethodInfo_42B5040 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
      OverwriteShadowDataArray = BattleDeckServantData__GetOverwriteShadowDataArray(v27, 0);
      v32 = OverwriteShadowDataArray;
      if ( !OverwriteShadowDataArray )
        sub_2213CDC(0, v31);
      max_length = OverwriteShadowDataArray->max_length;
      if ( max_length >= 1 )
      {
        v34 = 0;
        do
        {
          if ( (unsigned int)v34 >= max_length )
            sub_2213CE4(OverwriteShadowDataArray);
          v35 = v32->m_Items[v34];
          if ( !v35 )
            sub_2213CDC(OverwriteShadowDataArray, v31);
          v36 = toUpdate->fields.EffectIdHashSet;
          if ( !v36 )
            sub_2213CDC(0, v31);
          OverwriteShadowDataArray = (EnemyScriptParam_OverwriteShadowData_array *)System_Collections_Generic_HashSet_int___Add(
                                                                                     v36,
                                                                                     v35->fields.specialShadowEffectId,
                                                                                     (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
          max_length = v32->max_length;
          ++v34;
        }
        while ( (int)v34 < max_length );
      }
    }
    if ( v41 )
    {
      v37 = *(_QWORD *)v41;
      v38 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
      {
        v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
        {
          --v38;
          v39 += 4;
          if ( !v38 )
            goto LABEL_44;
        }
        v40 = v37 + 16LL * *v39 + 312;
      }
      else
      {
LABEL_44:
        v40 = sub_224BC3C(v41, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v40)(v41, *(_QWORD *)(v40 + 8));
    }
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

  if ( (byte_5972E2C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5972E2C = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_17;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          id,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
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
                                  (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  if ( v8 < 1 )
    return;
  if ( !toUpdate || (Instance = (DataManager_o *)toUpdate->fields.EffectIdHashSet) == 0 )
LABEL_17:
    sub_2213CDC(Instance, v6);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)Instance,
    v8,
    (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void AssumedEffectExtractLogic__FromQuestPhase(
        QuestPhaseEntity_o *questPhaseEntity,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  QuestPhaseEntity_o *v4; // x20
  System_Collections_Generic_HashSet_int__o *EffectIdHashSet; // x21
  System_Collections_Generic_HashSet_int__o *v6; // x21
  System_Collections_Generic_HashSet_int__o *v7; // x21
  __int64 v8; // x1
  long double v9; // q0
  _QWORD *v10; // x22
  System_Collections_Generic_HashSet_int__o *cameraIdHashSet; // x21
  __int64 v12; // x8
  __int64 v13; // x0
  __int64 v14; // x0
  System_Collections_Generic_HashSet_int__o *v15; // x19

  v4 = questPhaseEntity;
  if ( (byte_5972E2A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_int___);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    questPhaseEntity = (QuestPhaseEntity_o *)sub_2213A60(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    byte_5972E2A = 1;
  }
  if ( v4 )
  {
    if ( !toUpdate )
      goto LABEL_20;
    EffectIdHashSet = toUpdate->fields.EffectIdHashSet;
    questPhaseEntity = (QuestPhaseEntity_o *)QuestPhaseEntity__GetAssumedEffectId(v4, 0);
    if ( !EffectIdHashSet )
      goto LABEL_20;
    System_Collections_Generic_HashSet_int___UnionWith(
      EffectIdHashSet,
      (System_Collections_Generic_IEnumerable_T__o *)questPhaseEntity,
      (const MethodInfo_42B5040 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    v6 = toUpdate->fields.EffectIdHashSet;
    questPhaseEntity = (QuestPhaseEntity_o *)QuestPhaseEntity__getSpecialShadowEffectId(v4, 0);
    if ( !v6 )
      goto LABEL_20;
    System_Collections_Generic_HashSet_int___Add(
      v6,
      (int32_t)questPhaseEntity,
      (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
    v7 = toUpdate->fields.EffectIdHashSet;
    questPhaseEntity = (QuestPhaseEntity_o *)QuestPhaseEntity__GetBattleSkillDropEffectIds(v4, 0);
    if ( !v7 )
      goto LABEL_20;
    System_Collections_Generic_HashSet_int___UnionWith(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)questPhaseEntity,
      (const MethodInfo_42B5040 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    v10 = Method_System_Array_Empty_int___;
    cameraIdHashSet = toUpdate->fields.cameraIdHashSet;
    v12 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v12 )
    {
      sub_224B964(Method_System_Array_Empty_int___);
      v12 = v10[7];
    }
    v13 = *(_QWORD *)(v12 + 16);
    if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
      v13 = sub_224B908(v9);
    if ( !*(_DWORD *)(v13 + 228) )
      *(__n128 *)&v9 = j_il2cpp_runtime_class_init_0(v13, v8);
    v14 = *(_QWORD *)(v10[7] + 16LL);
    if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
      v14 = sub_224B908(v9);
    questPhaseEntity = (QuestPhaseEntity_o *)QuestPhaseEntity__GetAddUniqueCameraIds(
                                               v4,
                                               **(System_Int32_array ***)(v14 + 184),
                                               0);
    if ( !cameraIdHashSet
      || (System_Collections_Generic_HashSet_int___UnionWith(
            cameraIdHashSet,
            (System_Collections_Generic_IEnumerable_T__o *)questPhaseEntity,
            (const MethodInfo_42B5040 *)Method_System_Collections_Generic_HashSet_int__UnionWith__),
          v15 = toUpdate->fields.EffectIdHashSet,
          questPhaseEntity = (QuestPhaseEntity_o *)QuestPhaseEntity__GetExBattleUiSkillEffectIds(v4, 0),
          !v15) )
    {
LABEL_20:
      sub_2213CDC(questPhaseEntity, toUpdate);
    }
    System_Collections_Generic_HashSet_int___UnionWith(
      v15,
      (System_Collections_Generic_IEnumerable_T__o *)questPhaseEntity,
      (const MethodInfo_42B5040 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
}


void AssumedEffectExtractLogic__FromServant(
        BattleUserServantData_array *servants,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x1
  System_Collections_Generic_HashSet_int__o *Master_object; // x0
  System_Collections_Generic_IEnumerable_T__o *v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Func_object__object__o *v15; // x22
  System_Collections_Generic_IEnumerable_T__o *v16; // x0
  System_Collections_Generic_IEnumerable_T__o *v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x20
  AssumedEffectExtractLogic___c_c *v20; // x8
  struct AssumedEffectExtractLogic___c_StaticFields *static_fields; // x9
  System_Func_object__object__o *_9__2_1; // x21
  Il2CppObject *v23; // x22
  struct AssumedEffectExtractLogic___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  if ( (byte_5972E28 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_ExcludeNull_ServantEntity___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_SelectMany_ServantEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_BattleUserServantData__ServantEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_ServantEntity___);
    sub_2213A60(&System_Func_BattleUserServantData__ServantEntity__TypeInfo);
    sub_2213A60(&System_Func_ServantEntity__IEnumerable_int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_2213A60(&Method_AssumedEffectExtractLogic___c__FromServant_b__2_1__);
    sub_2213A60(&Method_AssumedEffectExtractLogic___c__DisplayClass2_0__FromServant_b__0__);
    sub_2213A60(&AssumedEffectExtractLogic___c__DisplayClass2_0_TypeInfo);
    sub_2213A60(&AssumedEffectExtractLogic___c_TypeInfo);
    byte_5972E28 = 1;
  }
  v5 = sub_2213CCC(AssumedEffectExtractLogic___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)servants, 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
    Master_object = (System_Collections_Generic_HashSet_int__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !v5 )
      goto LABEL_16;
    *(_QWORD *)(v5 + 16) = Master_object;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)Master_object, v9, v10, v11, v12, v13, v14);
    v15 = (System_Func_object__object__o *)sub_2213CCC(System_Func_BattleUserServantData__ServantEntity__TypeInfo);
    System_Func_object__object____ctor(
      v15,
      (Il2CppObject *)v5,
      Method_AssumedEffectExtractLogic___c__DisplayClass2_0__FromServant_b__0__,
      0);
    v16 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)servants,
                                                           (System_Func_TSource__TResult__o *)v15,
                                                           (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_BattleUserServantData__ServantEntity___);
    v17 = BasicHelper__ExcludeNull_object_(
            v16,
            (const MethodInfo_381076C *)Method_BasicHelper_ExcludeNull_ServantEntity___);
    v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v17,
                                                                 (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_ServantEntity___);
    v20 = AssumedEffectExtractLogic___c_TypeInfo;
    if ( !*(&AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo, v18);
      v20 = AssumedEffectExtractLogic___c_TypeInfo;
    }
    static_fields = v20->static_fields;
    _9__2_1 = (System_Func_object__object__o *)static_fields->__9__2_1;
    if ( !_9__2_1 )
    {
      if ( !*(&v20->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v20, v18);
        static_fields = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
      }
      v23 = (Il2CppObject *)static_fields->__9;
      _9__2_1 = (System_Func_object__object__o *)sub_2213CCC(System_Func_ServantEntity__IEnumerable_int___TypeInfo);
      System_Func_object__object____ctor(_9__2_1, v23, Method_AssumedEffectExtractLogic___c__FromServant_b__2_1__, 0);
      v24 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
      v24->__9__2_1 = (struct System_Func_ServantEntity__IEnumerable_int___o *)_9__2_1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v24->__9__2_1, (int32_t)_9__2_1, v25, v26, v27, v28, v29, v30);
    }
    Master_object = (System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                   v19,
                                                                   (System_Func_TSource__IEnumerable_TResult___o *)_9__2_1,
                                                                   (const MethodInfo_3893C3C *)Method_System_Linq_Enumerable_SelectMany_ServantEntity__int___);
    if ( !toUpdate
      || (v8 = (System_Collections_Generic_IEnumerable_T__o *)Master_object,
          (Master_object = toUpdate->fields.EffectIdHashSet) == 0) )
    {
LABEL_16:
      sub_2213CDC(Master_object, v8);
    }
    System_Collections_Generic_HashSet_int___UnionWith(
      Master_object,
      v8,
      (const MethodInfo_42B5040 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
}


void AssumedEffectExtractLogic__FromSkill(
        System_Collections_Generic_IEnumerable_SimpleSkillData__o *skillDataEnumerable,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_T__o *Master_object; // x0
  System_Collections_Generic_IEnumerable_T__o *v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  AssumedEffectExtractLogic___c_c *v16; // x0
  struct AssumedEffectExtractLogic___c_StaticFields *static_fields; // x8
  System_Func_SimpleSkillData__bool__o *_9__0_0; // x22
  Il2CppObject *v19; // x23
  struct AssumedEffectExtractLogic___c_StaticFields *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x21
  System_Func_T__TResult__o *v28; // x22
  System_Collections_Generic_IEnumerable_T__o *v29; // x0
  System_Collections_Generic_IEnumerable_T__o *v30; // x0
  System_Collections_Generic_List_TSource__o *v31; // x0
  __int64 v32; // x1
  AssumedEffectExtractLogic___c_c *v33; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x21
  struct AssumedEffectExtractLogic___c_StaticFields *v35; // x9
  System_Func_object__int__o *_9__0_2; // x22
  Il2CppObject *v37; // x23
  struct AssumedEffectExtractLogic___c_StaticFields *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Collections_Generic_IEnumerable_TResult__o *v45; // x0
  __int64 v46; // x1
  AssumedEffectExtractLogic___c_c *v47; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x22
  struct AssumedEffectExtractLogic___c_StaticFields *v49; // x9
  System_Func_int__bool__o *_9__0_3; // x23
  Il2CppObject *v51; // x24
  struct AssumedEffectExtractLogic___c_StaticFields *v52; // x0
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x22
  System_Func_T__TResult__o *v60; // x23
  System_Collections_Generic_IEnumerable_T__o *v61; // x0
  System_Collections_Generic_IEnumerable_T__o *v62; // x0
  __int64 v63; // x1
  AssumedEffectExtractLogic___c_c *v64; // x0
  struct AssumedEffectExtractLogic___c_StaticFields *v65; // x8
  System_Func_object__object__o *_9__0_5; // x20
  Il2CppObject *v67; // x22
  struct AssumedEffectExtractLogic___c_StaticFields *v68; // x0
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  AssumedBattleAssetLoadManager_AnalyzedResultParam_o *v75; // [xsp+8h] [xbp-68h]

  if ( (byte_5972E26 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_ExcludeNull_SkillEntity___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_SelectMany_SkillEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_int__SkillEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_SimpleSkillData__SkillEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_SkillEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_SkillEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_SkillEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_SimpleSkillData___);
    sub_2213A60(&System_Func_SimpleSkillData__SkillEntity__TypeInfo);
    sub_2213A60(&System_Func_SimpleSkillData__bool__TypeInfo);
    sub_2213A60(&System_Func_SkillEntity__IEnumerable_int___TypeInfo);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&System_Func_int__SkillEntity__TypeInfo);
    sub_2213A60(&System_Func_SkillEntity__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_2213A60(&Method_System_Collections_Generic_List_SkillEntity__AddRange__);
    sub_2213A60(&Method_AssumedEffectExtractLogic___c__FromSkill_b__0_0__);
    sub_2213A60(&Method_AssumedEffectExtractLogic___c__FromSkill_b__0_2__);
    sub_2213A60(&Method_AssumedEffectExtractLogic___c__FromSkill_b__0_3__);
    sub_2213A60(&Method_AssumedEffectExtractLogic___c__FromSkill_b__0_5__);
    sub_2213A60(&Method_AssumedEffectExtractLogic___c__DisplayClass0_0__FromSkill_b__1__);
    sub_2213A60(&Method_AssumedEffectExtractLogic___c__DisplayClass0_0__FromSkill_b__4__);
    sub_2213A60(&AssumedEffectExtractLogic___c__DisplayClass0_0_TypeInfo);
    sub_2213A60(&AssumedEffectExtractLogic___c_TypeInfo);
    byte_5972E26 = 1;
  }
  v5 = sub_2213CCC(AssumedEffectExtractLogic___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
  Master_object = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !v5 )
    goto LABEL_34;
  *(_QWORD *)(v5 + 16) = Master_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)Master_object, v9, v10, v11, v12, v13, v14);
  v16 = AssumedEffectExtractLogic___c_TypeInfo;
  v75 = toUpdate;
  if ( !*(&AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo, v15);
    v16 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  static_fields = v16->static_fields;
  _9__0_0 = static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !*(&v16->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v16, v15);
      static_fields = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_SimpleSkillData__bool__o *)sub_2213CCC(System_Func_SimpleSkillData__bool__TypeInfo);
    System_Func_SimpleSkillData__bool____ctor(_9__0_0, v19, Method_AssumedEffectExtractLogic___c__FromSkill_b__0_0__, 0);
    v20 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    v20->__9__0_0 = _9__0_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v20->__9__0_0, (int32_t)_9__0_0, v21, v22, v23, v24, v25, v26);
  }
  v27 = System_Linq_Enumerable__Where_SimpleSkillData_(
          (System_Collections_Generic_IEnumerable_TSource__o *)skillDataEnumerable,
          (System_Func_TSource__bool__o *)_9__0_0,
          (const MethodInfo_38A3A80 *)Method_System_Linq_Enumerable_Where_SimpleSkillData___);
  v28 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_SimpleSkillData__SkillEntity__TypeInfo);
  System_Func_SimpleSkillData__object____ctor(
    v28,
    (Il2CppObject *)v5,
    Method_AssumedEffectExtractLogic___c__DisplayClass0_0__FromSkill_b__1__,
    0);
  v29 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_SimpleSkillData__object_(
                                                         v27,
                                                         (System_Func_TSource__TResult__o *)v28,
                                                         (const MethodInfo_3891EC8 *)Method_System_Linq_Enumerable_Select_SimpleSkillData__SkillEntity___);
  v30 = BasicHelper__ExcludeNull_object_(v29, (const MethodInfo_381076C *)Method_BasicHelper_ExcludeNull_SkillEntity___);
  v31 = System_Linq_Enumerable__ToList_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v30,
          (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_SkillEntity___);
  v33 = AssumedEffectExtractLogic___c_TypeInfo;
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)v31;
  if ( !*(&AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo, v32);
    v33 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  v35 = v33->static_fields;
  _9__0_2 = (System_Func_object__int__o *)v35->__9__0_2;
  if ( !_9__0_2 )
  {
    if ( !*(&v33->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v33, v32);
      v35 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    }
    v37 = (Il2CppObject *)v35->__9;
    _9__0_2 = (System_Func_object__int__o *)sub_2213CCC(System_Func_SkillEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_2, v37, Method_AssumedEffectExtractLogic___c__FromSkill_b__0_2__, 0);
    v38 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    v38->__9__0_2 = (struct System_Func_SkillEntity__int__o *)_9__0_2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v38->__9__0_2, (int32_t)_9__0_2, v39, v40, v41, v42, v43, v44);
  }
  v45 = System_Linq_Enumerable__Select_object__int_(
          v34,
          (System_Func_TSource__TResult__o *)_9__0_2,
          (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_SkillEntity__int___);
  v47 = AssumedEffectExtractLogic___c_TypeInfo;
  v48 = (System_Collections_Generic_IEnumerable_TSource__o *)v45;
  if ( !*(&AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo, v46);
    v47 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  v49 = v47->static_fields;
  _9__0_3 = v49->__9__0_3;
  if ( !_9__0_3 )
  {
    if ( !*(&v47->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v47, v46);
      v49 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    }
    v51 = (Il2CppObject *)v49->__9;
    _9__0_3 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__0_3, v51, Method_AssumedEffectExtractLogic___c__FromSkill_b__0_3__, 0);
    v52 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    v52->__9__0_3 = _9__0_3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v52->__9__0_3, (int32_t)_9__0_3, v53, v54, v55, v56, v57, v58);
  }
  v59 = System_Linq_Enumerable__Where_int_(
          v48,
          (System_Func_TSource__bool__o *)_9__0_3,
          (const MethodInfo_38A2E70 *)Method_System_Linq_Enumerable_Where_int___);
  v60 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_int__SkillEntity__TypeInfo);
  System_Func_int__object____ctor(
    v60,
    (Il2CppObject *)v5,
    Method_AssumedEffectExtractLogic___c__DisplayClass0_0__FromSkill_b__4__,
    0);
  v61 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                         v59,
                                                         (System_Func_TSource__TResult__o *)v60,
                                                         (const MethodInfo_388DEA8 *)Method_System_Linq_Enumerable_Select_int__SkillEntity___);
  v62 = BasicHelper__ExcludeNull_object_(v61, (const MethodInfo_381076C *)Method_BasicHelper_ExcludeNull_SkillEntity___);
  Master_object = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToArray_object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v62,
                                                                   (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_SkillEntity___);
  if ( !v34 )
    goto LABEL_34;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v34,
    Master_object,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_SkillEntity__AddRange__);
  v64 = AssumedEffectExtractLogic___c_TypeInfo;
  if ( !*(&AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo, v63);
    v64 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  v65 = v64->static_fields;
  _9__0_5 = (System_Func_object__object__o *)v65->__9__0_5;
  if ( !_9__0_5 )
  {
    if ( !*(&v64->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v64, v63);
      v65 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    }
    v67 = (Il2CppObject *)v65->__9;
    _9__0_5 = (System_Func_object__object__o *)sub_2213CCC(System_Func_SkillEntity__IEnumerable_int___TypeInfo);
    System_Func_object__object____ctor(_9__0_5, v67, Method_AssumedEffectExtractLogic___c__FromSkill_b__0_5__, 0);
    v68 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    v68->__9__0_5 = (struct System_Func_SkillEntity__IEnumerable_int___o *)_9__0_5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v68->__9__0_5, (int32_t)_9__0_5, v69, v70, v71, v72, v73, v74);
  }
  Master_object = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                   v34,
                                                                   (System_Func_TSource__IEnumerable_TResult___o *)_9__0_5,
                                                                   (const MethodInfo_3893C3C *)Method_System_Linq_Enumerable_SelectMany_SkillEntity__int___);
  if ( !v75
    || (v8 = Master_object,
        (Master_object = (System_Collections_Generic_IEnumerable_T__o *)v75->fields.EffectIdHashSet) == 0) )
  {
LABEL_34:
    sub_2213CDC(Master_object, v8);
  }
  System_Collections_Generic_HashSet_int___UnionWith(
    (System_Collections_Generic_HashSet_int__o *)Master_object,
    v8,
    (const MethodInfo_42B5040 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
}


void AssumedEffectExtractLogic__FromStage(
        StageEntity_o *stageEntity,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  StageEntity_o *v4; // x20
  System_Collections_Generic_HashSet_int__o *EffectIdHashSet; // x21
  System_Collections_Generic_HashSet_int__o *v6; // x21
  System_Collections_Generic_HashSet_int__o *v7; // x21
  struct System_Collections_Generic_HashSet_string__o *AudioAssetNameHashSet; // x21
  __int64 v9; // x1
  long double v10; // q0
  _QWORD *v11; // x22
  System_Collections_Generic_HashSet_int__o *cameraIdHashSet; // x21
  __int64 v13; // x8
  __int64 v14; // x0
  __int64 v15; // x0
  System_Collections_Generic_HashSet_int__o *v16; // x19

  v4 = stageEntity;
  if ( (byte_5972E29 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_int___);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_string__UnionWith__);
    stageEntity = (StageEntity_o *)sub_2213A60(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    byte_5972E29 = 1;
  }
  if ( v4 )
  {
    if ( !toUpdate )
      goto LABEL_21;
    EffectIdHashSet = toUpdate->fields.EffectIdHashSet;
    stageEntity = (StageEntity_o *)StageEntity__GetAssumedEffectId(v4, 0);
    if ( !EffectIdHashSet )
      goto LABEL_21;
    System_Collections_Generic_HashSet_int___UnionWith(
      EffectIdHashSet,
      (System_Collections_Generic_IEnumerable_T__o *)stageEntity,
      (const MethodInfo_42B5040 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    v6 = toUpdate->fields.EffectIdHashSet;
    stageEntity = (StageEntity_o *)StageEntity__GetSpecialShadowEffectId(v4, 1, 0);
    if ( !v6 )
      goto LABEL_21;
    System_Collections_Generic_HashSet_int___Add(
      v6,
      (int32_t)stageEntity,
      (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
    v7 = toUpdate->fields.EffectIdHashSet;
    stageEntity = (StageEntity_o *)StageEntity__GetSpecialShadowEffectId(v4, 0, 0);
    if ( !v7 )
      goto LABEL_21;
    System_Collections_Generic_HashSet_int___Add(
      v7,
      (int32_t)stageEntity,
      (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
    AudioAssetNameHashSet = toUpdate->fields.AudioAssetNameHashSet;
    stageEntity = (StageEntity_o *)StageEntity__GetAssumedVoiceAssetNames(v4, 0);
    if ( !AudioAssetNameHashSet )
      goto LABEL_21;
    System_Collections_Generic_HashSet_object___UnionWith(
      (System_Collections_Generic_HashSet_object__o *)AudioAssetNameHashSet,
      (System_Collections_Generic_IEnumerable_T__o *)stageEntity,
      (const MethodInfo_42BB4D0 *)Method_System_Collections_Generic_HashSet_string__UnionWith__);
    v11 = Method_System_Array_Empty_int___;
    cameraIdHashSet = toUpdate->fields.cameraIdHashSet;
    v13 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v13 )
    {
      sub_224B964(Method_System_Array_Empty_int___);
      v13 = v11[7];
    }
    v14 = *(_QWORD *)(v13 + 16);
    if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
      v14 = sub_224B908(v10);
    if ( !*(_DWORD *)(v14 + 228) )
      *(__n128 *)&v10 = j_il2cpp_runtime_class_init_0(v14, v9);
    v15 = *(_QWORD *)(v11[7] + 16LL);
    if ( (*(_WORD *)(v15 + 309) & 1) == 0 )
      v15 = sub_224B908(v10);
    stageEntity = (StageEntity_o *)StageEntity__GetAddUniqueCameraIds(v4, **(System_Int32_array ***)(v15 + 184), 0);
    if ( !cameraIdHashSet
      || (System_Collections_Generic_HashSet_int___UnionWith(
            cameraIdHashSet,
            (System_Collections_Generic_IEnumerable_T__o *)stageEntity,
            (const MethodInfo_42B5040 *)Method_System_Collections_Generic_HashSet_int__UnionWith__),
          v16 = toUpdate->fields.EffectIdHashSet,
          stageEntity = (StageEntity_o *)StageEntity__GetExBattleUiSkillEffectIds(v4, 0),
          !v16) )
    {
LABEL_21:
      sub_2213CDC(stageEntity, toUpdate);
    }
    System_Collections_Generic_HashSet_int___UnionWith(
      v16,
      (System_Collections_Generic_IEnumerable_T__o *)stageEntity,
      (const MethodInfo_42B5040 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
}


void AssumedEffectExtractLogic__FromTreasureDevice(
        System_Collections_Generic_IEnumerable_SimpleTreasureDeviceData__o *tdDataEnumerable,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x1
  System_Collections_Generic_HashSet_int__o *Master_object; // x0
  System_Collections_Generic_IEnumerable_T__o *v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  AssumedEffectExtractLogic___c_c *v16; // x0
  struct AssumedEffectExtractLogic___c_StaticFields *static_fields; // x8
  System_Func_SimpleTreasureDeviceData__bool__o *_9__1_0; // x22
  Il2CppObject *v19; // x23
  struct AssumedEffectExtractLogic___c_StaticFields *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x20
  System_Func_T__TResult__o *v28; // x22
  System_Collections_Generic_IEnumerable_T__o *v29; // x0
  System_Collections_Generic_IEnumerable_T__o *v30; // x0
  System_Object_array *v31; // x0
  __int64 v32; // x1
  AssumedEffectExtractLogic___c_c *v33; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x20
  struct AssumedEffectExtractLogic___c_StaticFields *v35; // x9
  System_Func_object__object__o *_9__1_2; // x21
  Il2CppObject *v37; // x22
  struct AssumedEffectExtractLogic___c_StaticFields *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7

  if ( (byte_5972E27 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_ExcludeNull_TreasureDvcEntity___);
    sub_2213A60(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_SelectMany_TreasureDvcEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_SimpleTreasureDeviceData__TreasureDvcEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_TreasureDvcEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_SimpleTreasureDeviceData___);
    sub_2213A60(&System_Func_TreasureDvcEntity__IEnumerable_int___TypeInfo);
    sub_2213A60(&System_Func_SimpleTreasureDeviceData__bool__TypeInfo);
    sub_2213A60(&System_Func_SimpleTreasureDeviceData__TreasureDvcEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_2213A60(&Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_0__);
    sub_2213A60(&Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_2__);
    sub_2213A60(&Method_AssumedEffectExtractLogic___c__DisplayClass1_0__FromTreasureDevice_b__1__);
    sub_2213A60(&AssumedEffectExtractLogic___c__DisplayClass1_0_TypeInfo);
    sub_2213A60(&AssumedEffectExtractLogic___c_TypeInfo);
    byte_5972E27 = 1;
  }
  v5 = sub_2213CCC(AssumedEffectExtractLogic___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
  Master_object = (System_Collections_Generic_HashSet_int__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !v5 )
    goto LABEL_21;
  *(_QWORD *)(v5 + 16) = Master_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)Master_object, v9, v10, v11, v12, v13, v14);
  v16 = AssumedEffectExtractLogic___c_TypeInfo;
  if ( !*(&AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo, v15);
    v16 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  static_fields = v16->static_fields;
  _9__1_0 = static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !*(&v16->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v16, v15);
      static_fields = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_SimpleTreasureDeviceData__bool__o *)sub_2213CCC(System_Func_SimpleTreasureDeviceData__bool__TypeInfo);
    System_Func_SimpleTreasureDeviceData__bool____ctor(
      _9__1_0,
      v19,
      Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_0__,
      0);
    v20 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    v20->__9__1_0 = _9__1_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v20->__9__1_0, (int32_t)_9__1_0, v21, v22, v23, v24, v25, v26);
  }
  v27 = System_Linq_Enumerable__Where_SimpleTreasureDeviceData_(
          (System_Collections_Generic_IEnumerable_TSource__o *)tdDataEnumerable,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_38A3D84 *)Method_System_Linq_Enumerable_Where_SimpleTreasureDeviceData___);
  v28 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_SimpleTreasureDeviceData__TreasureDvcEntity__TypeInfo);
  System_Func_SimpleTreasureDeviceData__object____ctor(
    v28,
    (Il2CppObject *)v5,
    Method_AssumedEffectExtractLogic___c__DisplayClass1_0__FromTreasureDevice_b__1__,
    0);
  v29 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_SimpleTreasureDeviceData__object_(
                                                         v27,
                                                         (System_Func_TSource__TResult__o *)v28,
                                                         (const MethodInfo_38921EC *)Method_System_Linq_Enumerable_Select_SimpleTreasureDeviceData__TreasureDvcEntity___);
  v30 = BasicHelper__ExcludeNull_object_(
          v29,
          (const MethodInfo_381076C *)Method_BasicHelper_ExcludeNull_TreasureDvcEntity___);
  v31 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v30,
          (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_TreasureDvcEntity___);
  v33 = AssumedEffectExtractLogic___c_TypeInfo;
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)v31;
  if ( !*(&AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo, v32);
    v33 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  v35 = v33->static_fields;
  _9__1_2 = (System_Func_object__object__o *)v35->__9__1_2;
  if ( !_9__1_2 )
  {
    if ( !*(&v33->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v33, v32);
      v35 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    }
    v37 = (Il2CppObject *)v35->__9;
    _9__1_2 = (System_Func_object__object__o *)sub_2213CCC(System_Func_TreasureDvcEntity__IEnumerable_int___TypeInfo);
    System_Func_object__object____ctor(
      _9__1_2,
      v37,
      Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_2__,
      0);
    v38 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    v38->__9__1_2 = (struct System_Func_TreasureDvcEntity__IEnumerable_int___o *)_9__1_2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v38->__9__1_2, (int32_t)_9__1_2, v39, v40, v41, v42, v43, v44);
  }
  Master_object = (System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                 v34,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__1_2,
                                                                 (const MethodInfo_3893C3C *)Method_System_Linq_Enumerable_SelectMany_TreasureDvcEntity__int___);
  if ( !toUpdate
    || (v8 = (System_Collections_Generic_IEnumerable_T__o *)Master_object,
        (Master_object = toUpdate->fields.EffectIdHashSet) == 0) )
  {
LABEL_21:
    sub_2213CDC(Master_object, v8);
  }
  System_Collections_Generic_HashSet_int___UnionWith(
    Master_object,
    v8,
    (const MethodInfo_42B5040 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
}


void AssumedEffectExtractLogic___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5972E2D & 1) == 0 )
  {
    sub_2213A60(&AssumedEffectExtractLogic___c_TypeInfo);
    byte_5972E2D = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(AssumedEffectExtractLogic___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AssumedEffectExtractLogic___c_TypeInfo->static_fields->__9 = (struct AssumedEffectExtractLogic___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)AssumedEffectExtractLogic___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, 0);
  return (System_Collections_Generic_IEnumerable_int__o *)ServantEntity__GetAssumedEffectId(x, 0);
}


bool AssumedEffectExtractLogic___c___FromSkill_b__0_0(
        AssumedEffectExtractLogic___c_o *this,
        SimpleSkillData_o x,
        const MethodInfo *method)
{
  return x.fields.id > 0;
}


int32_t AssumedEffectExtractLogic___c___FromSkill_b__0_2(
        AssumedEffectExtractLogic___c_o *this,
        SkillEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return SkillEntity__GetPlayerAttackPreselectExecuteSkillId(x, 0, 0);
}


bool AssumedEffectExtractLogic___c___FromSkill_b__0_3(
        AssumedEffectExtractLogic___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x > 0;
}


System_Collections_Generic_IEnumerable_int__o *AssumedEffectExtractLogic___c___FromSkill_b__0_5(
        AssumedEffectExtractLogic___c_o *this,
        SkillEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, 0);
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
  if ( (byte_5972E2E & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    byte_5972E2E = 1;
  }
  skillMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.skillMaster;
  if ( !skillMaster )
    sub_2213CDC(0, x);
  return (SkillEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            skillMaster,
                            id,
                            (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
SkillEntity_o *AssumedEffectExtractLogic___c__DisplayClass0_0___FromSkill_b__4(
        AssumedEffectExtractLogic___c__DisplayClass0_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *skillMaster; // x0

  if ( (byte_5972E2F & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    byte_5972E2F = 1;
  }
  skillMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.skillMaster;
  if ( !skillMaster )
    sub_2213CDC(0, *(_QWORD *)&x);
  return (SkillEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            skillMaster,
                            x,
                            (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
  if ( (byte_5972E30 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    byte_5972E30 = 1;
  }
  tdMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.tdMaster;
  if ( !tdMaster )
    sub_2213CDC(0, x);
  return (TreasureDvcEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                  tdMaster,
                                  id,
                                  (const MethodInfo_3F10B30 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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
  __int64 v5; // x19
  __int64 v6; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *servantMaster; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v4 = this;
  if ( (byte_5972E31 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this = (AssumedEffectExtractLogic___c__DisplayClass2_0_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5972E31 = 1;
  }
  if ( !x )
    goto LABEL_8;
  v6 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  servantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.servantMaster;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, x);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  this = (AssumedEffectExtractLogic___c__DisplayClass2_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                               v9,
                                                               0);
  if ( !servantMaster )
LABEL_8:
    sub_2213CDC(this, x);
  return (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              servantMaster,
                              (int32_t)this,
                              (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
}