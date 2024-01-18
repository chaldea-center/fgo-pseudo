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
  __int64 v11; // x3
  System_Collections_Generic_IEnumerable_BattleDeckServantData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleDeckServantData__o *v13; // x19
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v17; // x1
  __int64 v18; // x3
  __int64 v19; // x19
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  int *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x3
  __int64 v25; // x8
  unsigned __int64 v26; // x10
  int *v27; // x11
  __int64 v28; // x0
  BattleDeckServantData_o *v29; // x0
  __int64 v30; // x1
  System_Collections_Generic_HashSet_int__o *EffectIdHashSet; // x21
  System_Collections_Generic_IEnumerable_T__o *AssumedEffectId; // x0
  __int64 v33; // x8
  unsigned __int64 v34; // x10
  int *v35; // x11
  __int64 v36; // x0

  if ( (byte_41897F8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__UnionWith__, toUpdate);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, v7);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_41897F8 = 1;
  }
  if ( battleInfo )
  {
    v9 = BattleInfoData__AllDeckServantEnumerable(battleInfo, 0LL);
    if ( !v9 )
      sub_B2C434(0LL, v10);
    klass = v9->klass;
    v13 = v9;
    if ( *(_WORD *)&v9->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleDeckServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&v9->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(v9, System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, 0LL, v11);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleDeckServantData__o *, _QWORD))p_method)(
            v13,
            *(_QWORD *)(p_method + 8));
    if ( !v19 )
      sub_B2C434(0LL, v17);
    while ( 1 )
    {
      v20 = *(_QWORD *)v19;
      if ( *(_WORD *)(*(_QWORD *)v19 + 298LL) )
      {
        v21 = 0LL;
        v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v22 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v21;
          v22 += 4;
          if ( v21 >= *(unsigned __int16 *)(*(_QWORD *)v19 + 298LL) )
            goto LABEL_16;
        }
        v23 = v20 + 16LL * *v22 + 312;
      }
      else
      {
LABEL_16:
        v23 = sub_AC5258(v19, System_Collections_IEnumerator_TypeInfo, 0LL, v18);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8)) & 1) == 0 )
        break;
      v25 = *(_QWORD *)v19;
      if ( *(_WORD *)(*(_QWORD *)v19 + 298LL) )
      {
        v26 = 0LL;
        v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BattleDeckServantData__c **)v27 - 1) != System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo )
        {
          ++v26;
          v27 += 4;
          if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)v19 + 298LL) )
            goto LABEL_23;
        }
        v28 = v25 + 16LL * *v27 + 312;
      }
      else
      {
LABEL_23:
        v28 = sub_AC5258(v19, System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, 0LL, v24);
      }
      v29 = (BattleDeckServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v19, *(_QWORD *)(v28 + 8));
      if ( !toUpdate )
        sub_B2C434(v29, v30);
      if ( !v29 )
        sub_B2C434(0LL, v30);
      EffectIdHashSet = toUpdate->fields.EffectIdHashSet;
      AssumedEffectId = (System_Collections_Generic_IEnumerable_T__o *)BattleDeckServantData__GetAssumedEffectId(
                                                                         v29,
                                                                         0LL);
      if ( !EffectIdHashSet )
        sub_B2C434(AssumedEffectId, AssumedEffectId);
      System_Collections_Generic_HashSet_int___UnionWith(
        EffectIdHashSet,
        AssumedEffectId,
        (const MethodInfo_2D86280 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    v33 = *(_QWORD *)v19;
    if ( *(_WORD *)(*(_QWORD *)v19 + 298LL) )
    {
      v34 = 0LL;
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
      {
        ++v34;
        v35 += 4;
        if ( v34 >= *(unsigned __int16 *)(*(_QWORD *)v19 + 298LL) )
          goto LABEL_33;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_33:
      v36 = sub_AC5258(v19, System_IDisposable_TypeInfo, 0LL, v24);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v36)(v19, *(_QWORD *)(v36 + 8));
  }
}


void __fastcall AssumedEffectExtractLogic__FromQuestPhase(
        QuestPhaseEntity_o *questPhaseEntity,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  QuestPhaseEntity_o *v4; // x20
  __int64 v5; // x1
  System_Collections_Generic_HashSet_int__o *EffectIdHashSet; // x21
  System_Collections_Generic_HashSet_int__o *v7; // x19

  v4 = questPhaseEntity;
  if ( (byte_41897F7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Add__, toUpdate);
    questPhaseEntity = (QuestPhaseEntity_o *)sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v5);
    byte_41897F7 = 1;
  }
  if ( v4 )
  {
    if ( !toUpdate
      || (EffectIdHashSet = toUpdate->fields.EffectIdHashSet,
          questPhaseEntity = (QuestPhaseEntity_o *)QuestPhaseEntity__GetAssumedEffectId(v4, 0LL),
          !EffectIdHashSet)
      || (System_Collections_Generic_HashSet_int___UnionWith(
            EffectIdHashSet,
            (System_Collections_Generic_IEnumerable_T__o *)questPhaseEntity,
            (const MethodInfo_2D86280 *)Method_System_Collections_Generic_HashSet_int__UnionWith__),
          v7 = toUpdate->fields.EffectIdHashSet,
          questPhaseEntity = (QuestPhaseEntity_o *)QuestPhaseEntity__getSpecialShadowEffectId(v4, 0LL),
          !v7) )
    {
      sub_B2C434(questPhaseEntity, toUpdate);
    }
    System_Collections_Generic_HashSet_int___Add(
      v7,
      (int32_t)questPhaseEntity,
      (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x21
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_Collections_Generic_IEnumerable_T__o *v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v28; // x22
  System_Collections_Generic_IEnumerable_T__o *v29; // x0
  System_Collections_Generic_IEnumerable_T__o *v30; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x20
  AssumedEffectExtractLogic___c_c *v32; // x8
  struct AssumedEffectExtractLogic___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__2_1; // x21
  Il2CppObject *v35; // x22
  struct AssumedEffectExtractLogic___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7

  if ( (byte_41897F5 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_ExcludeNull_ServantEntity___, toUpdate);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v5);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_SelectMany_ServantEntity__int___, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_BattleUserServantData__ServantEntity___, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_ServantEntity___, v9);
    sub_B2C35C(&Method_System_Func_BattleUserServantData__ServantEntity___ctor__, v10);
    sub_B2C35C(&Method_System_Func_ServantEntity__IEnumerable_int____ctor__, v11);
    sub_B2C35C(&System_Func_ServantEntity__IEnumerable_int___TypeInfo, v12);
    sub_B2C35C(&System_Func_BattleUserServantData__ServantEntity__TypeInfo, v13);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v14);
    sub_B2C35C(&Method_AssumedEffectExtractLogic___c__FromServant_b__2_1__, v15);
    sub_B2C35C(&Method_AssumedEffectExtractLogic___c__DisplayClass2_0__FromServant_b__0__, v16);
    sub_B2C35C(&AssumedEffectExtractLogic___c__DisplayClass2_0_TypeInfo, v17);
    sub_B2C35C(&AssumedEffectExtractLogic___c_TypeInfo, v18);
    byte_41897F5 = 1;
  }
  v19 = sub_B2C42C(AssumedEffectExtractLogic___c__DisplayClass2_0_TypeInfo);
  AssumedEffectExtractLogic___c__DisplayClass2_0___ctor((AssumedEffectExtractLogic___c__DisplayClass2_0_o *)v19, 0LL);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)servants, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !v19 )
      goto LABEL_19;
    *(_QWORD *)(v19 + 16) = Master_WarQuestSelectionMaster;
    sub_B2C2F8((BattleServantConfConponent_o *)(v19 + 16), Master_WarQuestSelectionMaster, v22, v23, v24, v25, v26, v27);
    v28 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_BattleUserServantData__ServantEntity__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      v28,
      (Il2CppObject *)v19,
      Method_AssumedEffectExtractLogic___c__DisplayClass2_0__FromServant_b__0__,
      (const MethodInfo_2713350 *)Method_System_Func_BattleUserServantData__ServantEntity___ctor__);
    v29 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)servants,
                                                           (System_Func_TSource__TResult__o *)v28,
                                                           (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_BattleUserServantData__ServantEntity___);
    v30 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
            v29,
            (const MethodInfo_1726A44 *)Method_BasicHelper_ExcludeNull_ServantEntity___);
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v30,
                                                                 (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_ServantEntity___);
    v32 = AssumedEffectExtractLogic___c_TypeInfo;
    if ( (BYTE3(AssumedEffectExtractLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
      v32 = AssumedEffectExtractLogic___c_TypeInfo;
    }
    static_fields = v32->static_fields;
    _9__2_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__2_1;
    if ( !_9__2_1 )
    {
      if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32);
        static_fields = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
      }
      v35 = (Il2CppObject *)static_fields->__9;
      _9__2_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_ServantEntity__IEnumerable_int___TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__2_1,
        v35,
        Method_AssumedEffectExtractLogic___c__FromServant_b__2_1__,
        (const MethodInfo_2713350 *)Method_System_Func_ServantEntity__IEnumerable_int____ctor__);
      v36 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
      v36->__9__2_1 = (struct System_Func_ServantEntity__IEnumerable_int___o *)_9__2_1;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v36->__9__2_1,
        (System_Int32_array **)_9__2_1,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
    }
    Master_WarQuestSelectionMaster = (System_Int32_array **)System_Linq_Enumerable__SelectMany_BattleActionData_HealData__int_(
                                                              v31,
                                                              (System_Func_TSource__IEnumerable_TResult___o *)_9__2_1,
                                                              (const MethodInfo_1A9812C *)Method_System_Linq_Enumerable_SelectMany_ServantEntity__int___);
    if ( !toUpdate
      || (v21 = (System_Collections_Generic_IEnumerable_T__o *)Master_WarQuestSelectionMaster,
          (Master_WarQuestSelectionMaster = (System_Int32_array **)toUpdate->fields.EffectIdHashSet) == 0LL) )
    {
LABEL_19:
      sub_B2C434(Master_WarQuestSelectionMaster, v21);
    }
    System_Collections_Generic_HashSet_int___UnionWith(
      (System_Collections_Generic_HashSet_int__o *)Master_WarQuestSelectionMaster,
      v21,
      (const MethodInfo_2D86280 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x21
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_Collections_Generic_IEnumerable_T__o *v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  AssumedEffectExtractLogic___c_c *v32; // x0
  struct AssumedEffectExtractLogic___c_StaticFields *static_fields; // x8
  System_Func_SimpleSkillData__bool__o *_9__0_0; // x22
  Il2CppObject *v35; // x23
  struct AssumedEffectExtractLogic___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x20
  System_Func_SimpleSkillData__SkillEntity__o *v44; // x22
  System_Collections_Generic_IEnumerable_T__o *v45; // x0
  System_Collections_Generic_IEnumerable_T__o *v46; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v47; // x0
  AssumedEffectExtractLogic___c_c *v48; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x20
  struct AssumedEffectExtractLogic___c_StaticFields *v50; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__0_2; // x21
  Il2CppObject *v52; // x22
  struct AssumedEffectExtractLogic___c_StaticFields *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7

  if ( (byte_41897F3 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_ExcludeNull_SkillEntity___, toUpdate);
    sub_B2C35C(&Method_DataManager_GetMaster_SkillMaster___, v5);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_SelectMany_SkillEntity__int___, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_SimpleSkillData__SkillEntity___, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_SkillEntity___, v9);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_SimpleSkillData___, v10);
    sub_B2C35C(&Method_System_Func_SkillEntity__IEnumerable_int____ctor__, v11);
    sub_B2C35C(&Method_System_Func_SimpleSkillData__SkillEntity___ctor__, v12);
    sub_B2C35C(&Method_System_Func_SimpleSkillData__bool___ctor__, v13);
    sub_B2C35C(&System_Func_SkillEntity__IEnumerable_int___TypeInfo, v14);
    sub_B2C35C(&System_Func_SimpleSkillData__bool__TypeInfo, v15);
    sub_B2C35C(&System_Func_SimpleSkillData__SkillEntity__TypeInfo, v16);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v17);
    sub_B2C35C(&Method_AssumedEffectExtractLogic___c__FromSkill_b__0_0__, v18);
    sub_B2C35C(&Method_AssumedEffectExtractLogic___c__FromSkill_b__0_2__, v19);
    sub_B2C35C(&Method_AssumedEffectExtractLogic___c__DisplayClass0_0__FromSkill_b__1__, v20);
    sub_B2C35C(&AssumedEffectExtractLogic___c__DisplayClass0_0_TypeInfo, v21);
    sub_B2C35C(&AssumedEffectExtractLogic___c_TypeInfo, v22);
    byte_41897F3 = 1;
  }
  v23 = sub_B2C42C(AssumedEffectExtractLogic___c__DisplayClass0_0_TypeInfo);
  AssumedEffectExtractLogic___c__DisplayClass0_0___ctor((AssumedEffectExtractLogic___c__DisplayClass0_0_o *)v23, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !v23 )
    goto LABEL_26;
  *(_QWORD *)(v23 + 16) = Master_WarQuestSelectionMaster;
  sub_B2C2F8((BattleServantConfConponent_o *)(v23 + 16), Master_WarQuestSelectionMaster, v26, v27, v28, v29, v30, v31);
  v32 = AssumedEffectExtractLogic___c_TypeInfo;
  if ( (BYTE3(AssumedEffectExtractLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
    v32 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  static_fields = v32->static_fields;
  _9__0_0 = static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      static_fields = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    }
    v35 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_SimpleSkillData__bool__o *)sub_B2C42C(System_Func_SimpleSkillData__bool__TypeInfo);
    System_Func_SimpleSkillData__bool____ctor(
      _9__0_0,
      v35,
      Method_AssumedEffectExtractLogic___c__FromSkill_b__0_0__,
      (const MethodInfo_271565C *)Method_System_Func_SimpleSkillData__bool___ctor__);
    v36 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    v36->__9__0_0 = _9__0_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v36->__9__0_0,
      (System_Int32_array **)_9__0_0,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
  v43 = System_Linq_Enumerable__Where_SimpleSkillData_(
          (System_Collections_Generic_IEnumerable_TSource__o *)skillDataEnumerable,
          (System_Func_TSource__bool__o *)_9__0_0,
          (const MethodInfo_1A9F678 *)Method_System_Linq_Enumerable_Where_SimpleSkillData___);
  v44 = (System_Func_SimpleSkillData__SkillEntity__o *)sub_B2C42C(System_Func_SimpleSkillData__SkillEntity__TypeInfo);
  System_Func_SimpleSkillData__SkillEntity____ctor(
    v44,
    (Il2CppObject *)v23,
    Method_AssumedEffectExtractLogic___c__DisplayClass0_0__FromSkill_b__1__,
    (const MethodInfo_27162C8 *)Method_System_Func_SimpleSkillData__SkillEntity___ctor__);
  v45 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_SimpleSkillData__SkillEntity_(
                                                         v43,
                                                         (System_Func_TSource__TResult__o *)v44,
                                                         (const MethodInfo_1A97544 *)Method_System_Linq_Enumerable_Select_SimpleSkillData__SkillEntity___);
  v46 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          v45,
          (const MethodInfo_1726A44 *)Method_BasicHelper_ExcludeNull_SkillEntity___);
  v47 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v46,
          (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_SkillEntity___);
  v48 = AssumedEffectExtractLogic___c_TypeInfo;
  v49 = (System_Collections_Generic_IEnumerable_TSource__o *)v47;
  if ( (BYTE3(AssumedEffectExtractLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
    v48 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  v50 = v48->static_fields;
  _9__0_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v50->__9__0_2;
  if ( !_9__0_2 )
  {
    if ( (BYTE3(v48->vtable._0_Equals.methodPtr) & 4) != 0 && !v48->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v48);
      v50 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    }
    v52 = (Il2CppObject *)v50->__9;
    _9__0_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_SkillEntity__IEnumerable_int___TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__0_2,
      v52,
      Method_AssumedEffectExtractLogic___c__FromSkill_b__0_2__,
      (const MethodInfo_2713350 *)Method_System_Func_SkillEntity__IEnumerable_int____ctor__);
    v53 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    v53->__9__0_2 = (struct System_Func_SkillEntity__IEnumerable_int___o *)_9__0_2;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v53->__9__0_2,
      (System_Int32_array **)_9__0_2,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
  }
  Master_WarQuestSelectionMaster = (System_Int32_array **)System_Linq_Enumerable__SelectMany_BattleActionData_HealData__int_(
                                                            v49,
                                                            (System_Func_TSource__IEnumerable_TResult___o *)_9__0_2,
                                                            (const MethodInfo_1A9812C *)Method_System_Linq_Enumerable_SelectMany_SkillEntity__int___);
  if ( !toUpdate
    || (v25 = (System_Collections_Generic_IEnumerable_T__o *)Master_WarQuestSelectionMaster,
        (Master_WarQuestSelectionMaster = (System_Int32_array **)toUpdate->fields.EffectIdHashSet) == 0LL) )
  {
LABEL_26:
    sub_B2C434(Master_WarQuestSelectionMaster, v25);
  }
  System_Collections_Generic_HashSet_int___UnionWith(
    (System_Collections_Generic_HashSet_int__o *)Master_WarQuestSelectionMaster,
    v25,
    (const MethodInfo_2D86280 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
}


void __fastcall AssumedEffectExtractLogic__FromStage(
        StageEntity_o *stageEntity,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  StageEntity_o *v4; // x20
  System_Collections_Generic_HashSet_int__o *EffectIdHashSet; // x19

  v4 = stageEntity;
  if ( (byte_41897F6 & 1) == 0 )
  {
    stageEntity = (StageEntity_o *)sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__UnionWith__, toUpdate);
    byte_41897F6 = 1;
  }
  if ( v4 )
  {
    if ( !toUpdate
      || (EffectIdHashSet = toUpdate->fields.EffectIdHashSet,
          stageEntity = (StageEntity_o *)StageEntity__GetAssumedEffectId(v4, 0LL),
          !EffectIdHashSet) )
    {
      sub_B2C434(stageEntity, toUpdate);
    }
    System_Collections_Generic_HashSet_int___UnionWith(
      EffectIdHashSet,
      (System_Collections_Generic_IEnumerable_T__o *)stageEntity,
      (const MethodInfo_2D86280 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x21
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_Collections_Generic_IEnumerable_T__o *v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  AssumedEffectExtractLogic___c_c *v32; // x0
  struct AssumedEffectExtractLogic___c_StaticFields *static_fields; // x8
  System_Func_SimpleTreasureDeviceData__bool__o *_9__1_0; // x22
  Il2CppObject *v35; // x23
  struct AssumedEffectExtractLogic___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x20
  System_Func_SimpleTreasureDeviceData__TreasureDvcEntity__o *v44; // x22
  System_Collections_Generic_IEnumerable_T__o *v45; // x0
  System_Collections_Generic_IEnumerable_T__o *v46; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v47; // x0
  AssumedEffectExtractLogic___c_c *v48; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x20
  struct AssumedEffectExtractLogic___c_StaticFields *v50; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__1_2; // x21
  Il2CppObject *v52; // x22
  struct AssumedEffectExtractLogic___c_StaticFields *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7

  if ( (byte_41897F4 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_ExcludeNull_TreasureDvcEntity___, toUpdate);
    sub_B2C35C(&Method_DataManager_GetMaster_TreasureDvcMaster___, v5);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_SelectMany_TreasureDvcEntity__int___, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_SimpleTreasureDeviceData__TreasureDvcEntity___, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_TreasureDvcEntity___, v9);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_SimpleTreasureDeviceData___, v10);
    sub_B2C35C(&Method_System_Func_SimpleTreasureDeviceData__TreasureDvcEntity___ctor__, v11);
    sub_B2C35C(&Method_System_Func_TreasureDvcEntity__IEnumerable_int____ctor__, v12);
    sub_B2C35C(&Method_System_Func_SimpleTreasureDeviceData__bool___ctor__, v13);
    sub_B2C35C(&System_Func_TreasureDvcEntity__IEnumerable_int___TypeInfo, v14);
    sub_B2C35C(&System_Func_SimpleTreasureDeviceData__bool__TypeInfo, v15);
    sub_B2C35C(&System_Func_SimpleTreasureDeviceData__TreasureDvcEntity__TypeInfo, v16);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v17);
    sub_B2C35C(&Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_0__, v18);
    sub_B2C35C(&Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_2__, v19);
    sub_B2C35C(&Method_AssumedEffectExtractLogic___c__DisplayClass1_0__FromTreasureDevice_b__1__, v20);
    sub_B2C35C(&AssumedEffectExtractLogic___c__DisplayClass1_0_TypeInfo, v21);
    sub_B2C35C(&AssumedEffectExtractLogic___c_TypeInfo, v22);
    byte_41897F4 = 1;
  }
  v23 = sub_B2C42C(AssumedEffectExtractLogic___c__DisplayClass1_0_TypeInfo);
  AssumedEffectExtractLogic___c__DisplayClass1_0___ctor((AssumedEffectExtractLogic___c__DisplayClass1_0_o *)v23, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !v23 )
    goto LABEL_26;
  *(_QWORD *)(v23 + 16) = Master_WarQuestSelectionMaster;
  sub_B2C2F8((BattleServantConfConponent_o *)(v23 + 16), Master_WarQuestSelectionMaster, v26, v27, v28, v29, v30, v31);
  v32 = AssumedEffectExtractLogic___c_TypeInfo;
  if ( (BYTE3(AssumedEffectExtractLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
    v32 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  static_fields = v32->static_fields;
  _9__1_0 = static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      static_fields = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    }
    v35 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_SimpleTreasureDeviceData__bool__o *)sub_B2C42C(System_Func_SimpleTreasureDeviceData__bool__TypeInfo);
    System_Func_SimpleTreasureDeviceData__bool____ctor(
      _9__1_0,
      v35,
      Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_0__,
      (const MethodInfo_2716BF0 *)Method_System_Func_SimpleTreasureDeviceData__bool___ctor__);
    v36 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    v36->__9__1_0 = _9__1_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v36->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
  v43 = System_Linq_Enumerable__Where_SimpleTreasureDeviceData_(
          (System_Collections_Generic_IEnumerable_TSource__o *)tdDataEnumerable,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_1A9F90C *)Method_System_Linq_Enumerable_Where_SimpleTreasureDeviceData___);
  v44 = (System_Func_SimpleTreasureDeviceData__TreasureDvcEntity__o *)sub_B2C42C(System_Func_SimpleTreasureDeviceData__TreasureDvcEntity__TypeInfo);
  System_Func_SimpleTreasureDeviceData__TreasureDvcEntity____ctor(
    v44,
    (Il2CppObject *)v23,
    Method_AssumedEffectExtractLogic___c__DisplayClass1_0__FromTreasureDevice_b__1__,
    (const MethodInfo_271785C *)Method_System_Func_SimpleTreasureDeviceData__TreasureDvcEntity___ctor__);
  v45 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_SimpleTreasureDeviceData__TreasureDvcEntity_(
                                                         v43,
                                                         (System_Func_TSource__TResult__o *)v44,
                                                         (const MethodInfo_1A977F0 *)Method_System_Linq_Enumerable_Select_SimpleTreasureDeviceData__TreasureDvcEntity___);
  v46 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          v45,
          (const MethodInfo_1726A44 *)Method_BasicHelper_ExcludeNull_TreasureDvcEntity___);
  v47 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v46,
          (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_TreasureDvcEntity___);
  v48 = AssumedEffectExtractLogic___c_TypeInfo;
  v49 = (System_Collections_Generic_IEnumerable_TSource__o *)v47;
  if ( (BYTE3(AssumedEffectExtractLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
    v48 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  v50 = v48->static_fields;
  _9__1_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v50->__9__1_2;
  if ( !_9__1_2 )
  {
    if ( (BYTE3(v48->vtable._0_Equals.methodPtr) & 4) != 0 && !v48->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v48);
      v50 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    }
    v52 = (Il2CppObject *)v50->__9;
    _9__1_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_TreasureDvcEntity__IEnumerable_int___TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__1_2,
      v52,
      Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_2__,
      (const MethodInfo_2713350 *)Method_System_Func_TreasureDvcEntity__IEnumerable_int____ctor__);
    v53 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    v53->__9__1_2 = (struct System_Func_TreasureDvcEntity__IEnumerable_int___o *)_9__1_2;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v53->__9__1_2,
      (System_Int32_array **)_9__1_2,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
  }
  Master_WarQuestSelectionMaster = (System_Int32_array **)System_Linq_Enumerable__SelectMany_BattleActionData_HealData__int_(
                                                            v49,
                                                            (System_Func_TSource__IEnumerable_TResult___o *)_9__1_2,
                                                            (const MethodInfo_1A9812C *)Method_System_Linq_Enumerable_SelectMany_TreasureDvcEntity__int___);
  if ( !toUpdate
    || (v25 = (System_Collections_Generic_IEnumerable_T__o *)Master_WarQuestSelectionMaster,
        (Master_WarQuestSelectionMaster = (System_Int32_array **)toUpdate->fields.EffectIdHashSet) == 0LL) )
  {
LABEL_26:
    sub_B2C434(Master_WarQuestSelectionMaster, v25);
  }
  System_Collections_Generic_HashSet_int___UnionWith(
    (System_Collections_Generic_HashSet_int__o *)Master_WarQuestSelectionMaster,
    v25,
    (const MethodInfo_2D86280 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
}


void __fastcall AssumedEffectExtractLogic___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4186BC2 & 1) == 0 )
  {
    sub_B2C35C(&AssumedEffectExtractLogic___c_TypeInfo, v1);
    byte_4186BC2 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(AssumedEffectExtractLogic___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)AssumedEffectExtractLogic___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
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
  struct SkillMaster_o *skillMaster; // x0

  id = x.fields.id;
  if ( (byte_4186BC3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, x);
    byte_4186BC3 = 1;
  }
  skillMaster = this->fields.skillMaster;
  if ( !skillMaster )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B2C434)(0LL, x);
  return (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)skillMaster,
                            id,
                            (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
  struct TreasureDvcMaster_o *tdMaster; // x0

  id = x.fields.id;
  if ( (byte_4186BC4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, x);
    byte_4186BC4 = 1;
  }
  tdMaster = this->fields.tdMaster;
  if ( !tdMaster )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B2C434)(0LL, x);
  return (TreasureDvcEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)tdMaster,
                                  id,
                                  (const MethodInfo_24E40D0 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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
  DataMasterBase_WarMaster__WarEntity__int__o *servantMaster; // x20
  __int64 v7; // x19
  __int64 v8; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v4 = this;
  if ( (byte_4186BC5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, x);
    this = (AssumedEffectExtractLogic___c__DisplayClass2_0_o *)sub_B2C35C(
                                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                 v5);
    byte_4186BC5 = 1;
  }
  if ( !x )
    goto LABEL_9;
  servantMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)v4->fields.servantMaster;
  v8 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  this = (AssumedEffectExtractLogic___c__DisplayClass2_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                               v10,
                                                               0LL);
  if ( !servantMaster )
LABEL_9:
    sub_B2C434(this, x);
  return (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              servantMaster,
                              (int32_t)this,
                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
}