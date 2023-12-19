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
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x19
  __int64 v16; // x8
  unsigned __int64 v17; // x10
  int *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  int *v22; // x11
  __int64 v23; // x0
  BattleDeckServantData_o *v24; // x0
  System_Collections_Generic_HashSet_int__o *EffectIdHashSet; // x21
  System_Collections_Generic_IEnumerable_T__o *AssumedEffectId; // x1
  __int64 v27; // x8
  unsigned __int64 v28; // x10
  int *v29; // x11
  __int64 v30; // x0

  if ( (byte_40FBE3C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__UnionWith__, toUpdate);
    sub_B16FFC(&System_IDisposable_TypeInfo, v5);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, v6);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, v7);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_40FBE3C = 1;
  }
  if ( battleInfo )
  {
    v9 = BattleInfoData__AllDeckServantEnumerable(battleInfo, 0LL);
    if ( !v9 )
      sub_B170D4();
    klass = v9->klass;
    v11 = v9;
    if ( *(_WORD *)&v9->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleDeckServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&v9->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AAFEF8(v9, System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, 0LL);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleDeckServantData__o *, _QWORD))p_method)(
            v11,
            *(_QWORD *)(p_method + 8));
    if ( !v15 )
      sub_B170D4();
    while ( 1 )
    {
      v16 = *(_QWORD *)v15;
      if ( *(_WORD *)(*(_QWORD *)v15 + 298LL) )
      {
        v17 = 0LL;
        v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v18 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v17;
          v18 += 4;
          if ( v17 >= *(unsigned __int16 *)(*(_QWORD *)v15 + 298LL) )
            goto LABEL_16;
        }
        v19 = v16 + 16LL * *v18 + 312;
      }
      else
      {
LABEL_16:
        v19 = sub_AAFEF8(v15, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v19)(v15, *(_QWORD *)(v19 + 8)) & 1) == 0 )
        break;
      v20 = *(_QWORD *)v15;
      if ( *(_WORD *)(*(_QWORD *)v15 + 298LL) )
      {
        v21 = 0LL;
        v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BattleDeckServantData__c **)v22 - 1) != System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo )
        {
          ++v21;
          v22 += 4;
          if ( v21 >= *(unsigned __int16 *)(*(_QWORD *)v15 + 298LL) )
            goto LABEL_23;
        }
        v23 = v20 + 16LL * *v22 + 312;
      }
      else
      {
LABEL_23:
        v23 = sub_AAFEF8(v15, System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, 0LL);
      }
      v24 = (BattleDeckServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v15, *(_QWORD *)(v23 + 8));
      if ( !toUpdate )
        sub_B170D4();
      if ( !v24 )
        sub_B170D4();
      EffectIdHashSet = toUpdate->fields.EffectIdHashSet;
      AssumedEffectId = (System_Collections_Generic_IEnumerable_T__o *)BattleDeckServantData__GetAssumedEffectId(
                                                                         v24,
                                                                         0LL);
      if ( !EffectIdHashSet )
        sub_B170D4();
      System_Collections_Generic_HashSet_int___UnionWith(
        EffectIdHashSet,
        AssumedEffectId,
        (const MethodInfo_21D9180 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    v27 = *(_QWORD *)v15;
    if ( *(_WORD *)(*(_QWORD *)v15 + 298LL) )
    {
      v28 = 0LL;
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
      {
        ++v28;
        v29 += 4;
        if ( v28 >= *(unsigned __int16 *)(*(_QWORD *)v15 + 298LL) )
          goto LABEL_33;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_33:
      v30 = sub_AAFEF8(v15, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v30)(v15, *(_QWORD *)(v30 + 8));
  }
}


void __fastcall AssumedEffectExtractLogic__FromQuestPhase(
        QuestPhaseEntity_o *questPhaseEntity,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_HashSet_int__o *EffectIdHashSet; // x21
  System_Collections_Generic_IEnumerable_T__o *AssumedEffectId; // x0
  System_Collections_Generic_HashSet_int__o *v8; // x19
  int32_t SpecialShadowEffectId; // w0

  if ( (byte_40FBE3B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Add__, toUpdate);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v5);
    byte_40FBE3B = 1;
  }
  if ( questPhaseEntity )
  {
    if ( !toUpdate
      || (EffectIdHashSet = toUpdate->fields.EffectIdHashSet,
          AssumedEffectId = (System_Collections_Generic_IEnumerable_T__o *)QuestPhaseEntity__GetAssumedEffectId(
                                                                             questPhaseEntity,
                                                                             0LL),
          !EffectIdHashSet)
      || (System_Collections_Generic_HashSet_int___UnionWith(
            EffectIdHashSet,
            AssumedEffectId,
            (const MethodInfo_21D9180 *)Method_System_Collections_Generic_HashSet_int__UnionWith__),
          v8 = toUpdate->fields.EffectIdHashSet,
          SpecialShadowEffectId = QuestPhaseEntity__getSpecialShadowEffectId(questPhaseEntity, 0LL),
          !v8) )
    {
      sub_B170D4();
    }
    System_Collections_Generic_HashSet_int___Add(
      v8,
      SpecialShadowEffectId,
      (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
}


void __fastcall AssumedEffectExtractLogic__FromServant(
        BattleUserServantData_array *servants,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v21; // x21
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v33; // x22
  System_Collections_Generic_IEnumerable_T__o *v34; // x0
  System_Collections_Generic_IEnumerable_T__o *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x20
  AssumedEffectExtractLogic___c_c *v41; // x8
  struct AssumedEffectExtractLogic___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__2_1; // x21
  Il2CppObject *v44; // x22
  struct AssumedEffectExtractLogic___c_StaticFields *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v52; // x0
  System_Collections_Generic_IEnumerable_T__o *v53; // x1
  System_Collections_Generic_HashSet_int__o *EffectIdHashSet; // x0

  if ( (byte_40FBE39 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_ExcludeNull_ServantEntity___, toUpdate);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_SelectMany_ServantEntity__int___, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_BattleUserServantData__ServantEntity___, v10);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_ServantEntity___, v11);
    sub_B16FFC(&Method_System_Func_BattleUserServantData__ServantEntity___ctor__, v12);
    sub_B16FFC(&Method_System_Func_ServantEntity__IEnumerable_int____ctor__, v13);
    sub_B16FFC(&System_Func_ServantEntity__IEnumerable_int___TypeInfo, v14);
    sub_B16FFC(&System_Func_BattleUserServantData__ServantEntity__TypeInfo, v15);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v16);
    sub_B16FFC(&Method_AssumedEffectExtractLogic___c__FromServant_b__2_1__, v17);
    sub_B16FFC(&Method_AssumedEffectExtractLogic___c__DisplayClass2_0__FromServant_b__0__, v18);
    sub_B16FFC(&AssumedEffectExtractLogic___c__DisplayClass2_0_TypeInfo, v19);
    sub_B16FFC(&AssumedEffectExtractLogic___c_TypeInfo, v20);
    byte_40FBE39 = 1;
  }
  v21 = sub_B170CC(AssumedEffectExtractLogic___c__DisplayClass2_0_TypeInfo, toUpdate, method, v3, v4);
  AssumedEffectExtractLogic___c__DisplayClass2_0___ctor((AssumedEffectExtractLogic___c__DisplayClass2_0_o *)v21, 0LL);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)servants, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !v21 )
      goto LABEL_19;
    *(_QWORD *)(v21 + 16) = Master_WarQuestSelectionMaster;
    sub_B16F98((BattleServantConfConponent_o *)(v21 + 16), Master_WarQuestSelectionMaster, v23, v24, v25, v26, v27, v28);
    v33 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                            System_Func_BattleUserServantData__ServantEntity__TypeInfo,
                                                                                            v29,
                                                                                            v30,
                                                                                            v31,
                                                                                            v32);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      v33,
      (Il2CppObject *)v21,
      Method_AssumedEffectExtractLogic___c__DisplayClass2_0__FromServant_b__0__,
      (const MethodInfo_2B6C28C *)Method_System_Func_BattleUserServantData__ServantEntity___ctor__);
    v34 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)servants,
                                                           (System_Func_TSource__TResult__o *)v33,
                                                           (const MethodInfo_19C0B1C *)Method_System_Linq_Enumerable_Select_BattleUserServantData__ServantEntity___);
    v35 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
            v34,
            (const MethodInfo_18B6360 *)Method_BasicHelper_ExcludeNull_ServantEntity___);
    v40 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v35,
                                                                 (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_ServantEntity___);
    v41 = AssumedEffectExtractLogic___c_TypeInfo;
    if ( (BYTE3(AssumedEffectExtractLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
      v41 = AssumedEffectExtractLogic___c_TypeInfo;
    }
    static_fields = v41->static_fields;
    _9__2_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__2_1;
    if ( !_9__2_1 )
    {
      if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v41);
        static_fields = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
      }
      v44 = (Il2CppObject *)static_fields->__9;
      _9__2_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                  System_Func_ServantEntity__IEnumerable_int___TypeInfo,
                                                                                                  v36,
                                                                                                  v37,
                                                                                                  v38,
                                                                                                  v39);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__2_1,
        v44,
        Method_AssumedEffectExtractLogic___c__FromServant_b__2_1__,
        (const MethodInfo_2B6C28C *)Method_System_Func_ServantEntity__IEnumerable_int____ctor__);
      v45 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
      v45->__9__2_1 = (struct System_Func_ServantEntity__IEnumerable_int___o *)_9__2_1;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v45->__9__2_1,
        (System_Int32_array **)_9__2_1,
        v46,
        v47,
        v48,
        v49,
        v50,
        v51);
    }
    v52 = System_Linq_Enumerable__SelectMany_BattleActionData_HealData__int_(
            v40,
            (System_Func_TSource__IEnumerable_TResult___o *)_9__2_1,
            (const MethodInfo_19C1EA0 *)Method_System_Linq_Enumerable_SelectMany_ServantEntity__int___);
    if ( !toUpdate
      || (v53 = (System_Collections_Generic_IEnumerable_T__o *)v52,
          (EffectIdHashSet = toUpdate->fields.EffectIdHashSet) == 0LL) )
    {
LABEL_19:
      sub_B170D4();
    }
    System_Collections_Generic_HashSet_int___UnionWith(
      EffectIdHashSet,
      v53,
      (const MethodInfo_21D9180 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
}


void __fastcall AssumedEffectExtractLogic__FromSkill(
        System_Collections_Generic_IEnumerable_SimpleSkillData__o *skillDataEnumerable,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x21
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  AssumedEffectExtractLogic___c_c *v37; // x0
  struct AssumedEffectExtractLogic___c_StaticFields *static_fields; // x8
  System_Func_SimpleSkillData__bool__o *_9__0_0; // x22
  Il2CppObject *v40; // x23
  struct AssumedEffectExtractLogic___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x20
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  System_Func_SimpleSkillData__SkillEntity__o *v53; // x22
  System_Collections_Generic_IEnumerable_T__o *v54; // x0
  System_Collections_Generic_IEnumerable_T__o *v55; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  AssumedEffectExtractLogic___c_c *v61; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x20
  struct AssumedEffectExtractLogic___c_StaticFields *v63; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__0_2; // x21
  Il2CppObject *v65; // x22
  struct AssumedEffectExtractLogic___c_StaticFields *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v73; // x0
  System_Collections_Generic_IEnumerable_T__o *v74; // x1
  System_Collections_Generic_HashSet_int__o *EffectIdHashSet; // x0

  if ( (byte_40FBE37 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_ExcludeNull_SkillEntity___, toUpdate);
    sub_B16FFC(&Method_DataManager_GetMaster_SkillMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_SelectMany_SkillEntity__int___, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_SimpleSkillData__SkillEntity___, v10);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_SkillEntity___, v11);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_SimpleSkillData___, v12);
    sub_B16FFC(&Method_System_Func_SkillEntity__IEnumerable_int____ctor__, v13);
    sub_B16FFC(&Method_System_Func_SimpleSkillData__SkillEntity___ctor__, v14);
    sub_B16FFC(&Method_System_Func_SimpleSkillData__bool___ctor__, v15);
    sub_B16FFC(&System_Func_SkillEntity__IEnumerable_int___TypeInfo, v16);
    sub_B16FFC(&System_Func_SimpleSkillData__bool__TypeInfo, v17);
    sub_B16FFC(&System_Func_SimpleSkillData__SkillEntity__TypeInfo, v18);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v19);
    sub_B16FFC(&Method_AssumedEffectExtractLogic___c__FromSkill_b__0_0__, v20);
    sub_B16FFC(&Method_AssumedEffectExtractLogic___c__FromSkill_b__0_2__, v21);
    sub_B16FFC(&Method_AssumedEffectExtractLogic___c__DisplayClass0_0__FromSkill_b__1__, v22);
    sub_B16FFC(&AssumedEffectExtractLogic___c__DisplayClass0_0_TypeInfo, v23);
    sub_B16FFC(&AssumedEffectExtractLogic___c_TypeInfo, v24);
    byte_40FBE37 = 1;
  }
  v25 = sub_B170CC(AssumedEffectExtractLogic___c__DisplayClass0_0_TypeInfo, toUpdate, method, v3, v4);
  AssumedEffectExtractLogic___c__DisplayClass0_0___ctor((AssumedEffectExtractLogic___c__DisplayClass0_0_o *)v25, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !v25 )
    goto LABEL_26;
  *(_QWORD *)(v25 + 16) = Master_WarQuestSelectionMaster;
  sub_B16F98((BattleServantConfConponent_o *)(v25 + 16), Master_WarQuestSelectionMaster, v27, v28, v29, v30, v31, v32);
  v37 = AssumedEffectExtractLogic___c_TypeInfo;
  if ( (BYTE3(AssumedEffectExtractLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
    v37 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  static_fields = v37->static_fields;
  _9__0_0 = static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      static_fields = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    }
    v40 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_SimpleSkillData__bool__o *)sub_B170CC(
                                                        System_Func_SimpleSkillData__bool__TypeInfo,
                                                        v33,
                                                        v34,
                                                        v35,
                                                        v36);
    System_Func_SimpleSkillData__bool____ctor(
      _9__0_0,
      v40,
      Method_AssumedEffectExtractLogic___c__FromSkill_b__0_0__,
      (const MethodInfo_2B6E598 *)Method_System_Func_SimpleSkillData__bool___ctor__);
    v41 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    v41->__9__0_0 = _9__0_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v41->__9__0_0,
      (System_Int32_array **)_9__0_0,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
  v48 = System_Linq_Enumerable__Where_SimpleSkillData_(
          (System_Collections_Generic_IEnumerable_TSource__o *)skillDataEnumerable,
          (System_Func_TSource__bool__o *)_9__0_0,
          (const MethodInfo_19C927C *)Method_System_Linq_Enumerable_Where_SimpleSkillData___);
  v53 = (System_Func_SimpleSkillData__SkillEntity__o *)sub_B170CC(
                                                         System_Func_SimpleSkillData__SkillEntity__TypeInfo,
                                                         v49,
                                                         v50,
                                                         v51,
                                                         v52);
  System_Func_SimpleSkillData__SkillEntity____ctor(
    v53,
    (Il2CppObject *)v25,
    Method_AssumedEffectExtractLogic___c__DisplayClass0_0__FromSkill_b__1__,
    (const MethodInfo_2B6F204 *)Method_System_Func_SimpleSkillData__SkillEntity___ctor__);
  v54 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_SimpleSkillData__SkillEntity_(
                                                         v48,
                                                         (System_Func_TSource__TResult__o *)v53,
                                                         (const MethodInfo_19C1320 *)Method_System_Linq_Enumerable_Select_SimpleSkillData__SkillEntity___);
  v55 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          v54,
          (const MethodInfo_18B6360 *)Method_BasicHelper_ExcludeNull_SkillEntity___);
  v56 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v55,
          (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_SkillEntity___);
  v61 = AssumedEffectExtractLogic___c_TypeInfo;
  v62 = (System_Collections_Generic_IEnumerable_TSource__o *)v56;
  if ( (BYTE3(AssumedEffectExtractLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
    v61 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  v63 = v61->static_fields;
  _9__0_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v63->__9__0_2;
  if ( !_9__0_2 )
  {
    if ( (BYTE3(v61->vtable._0_Equals.methodPtr) & 4) != 0 && !v61->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v61);
      v63 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    }
    v65 = (Il2CppObject *)v63->__9;
    _9__0_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                System_Func_SkillEntity__IEnumerable_int___TypeInfo,
                                                                                                v57,
                                                                                                v58,
                                                                                                v59,
                                                                                                v60);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__0_2,
      v65,
      Method_AssumedEffectExtractLogic___c__FromSkill_b__0_2__,
      (const MethodInfo_2B6C28C *)Method_System_Func_SkillEntity__IEnumerable_int____ctor__);
    v66 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    v66->__9__0_2 = (struct System_Func_SkillEntity__IEnumerable_int___o *)_9__0_2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v66->__9__0_2,
      (System_Int32_array **)_9__0_2,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72);
  }
  v73 = System_Linq_Enumerable__SelectMany_BattleActionData_HealData__int_(
          v62,
          (System_Func_TSource__IEnumerable_TResult___o *)_9__0_2,
          (const MethodInfo_19C1EA0 *)Method_System_Linq_Enumerable_SelectMany_SkillEntity__int___);
  if ( !toUpdate
    || (v74 = (System_Collections_Generic_IEnumerable_T__o *)v73,
        (EffectIdHashSet = toUpdate->fields.EffectIdHashSet) == 0LL) )
  {
LABEL_26:
    sub_B170D4();
  }
  System_Collections_Generic_HashSet_int___UnionWith(
    EffectIdHashSet,
    v74,
    (const MethodInfo_21D9180 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
}


void __fastcall AssumedEffectExtractLogic__FromStage(
        StageEntity_o *stageEntity,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *EffectIdHashSet; // x19
  System_Collections_Generic_IEnumerable_T__o *AssumedEffectId; // x0

  if ( (byte_40FBE3A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__UnionWith__, toUpdate);
    byte_40FBE3A = 1;
  }
  if ( stageEntity )
  {
    if ( !toUpdate
      || (EffectIdHashSet = toUpdate->fields.EffectIdHashSet,
          AssumedEffectId = (System_Collections_Generic_IEnumerable_T__o *)StageEntity__GetAssumedEffectId(
                                                                             stageEntity,
                                                                             0LL),
          !EffectIdHashSet) )
    {
      sub_B170D4();
    }
    System_Collections_Generic_HashSet_int___UnionWith(
      EffectIdHashSet,
      AssumedEffectId,
      (const MethodInfo_21D9180 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
}


void __fastcall AssumedEffectExtractLogic__FromTreasureDevice(
        System_Collections_Generic_IEnumerable_SimpleTreasureDeviceData__o *tdDataEnumerable,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x21
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  AssumedEffectExtractLogic___c_c *v37; // x0
  struct AssumedEffectExtractLogic___c_StaticFields *static_fields; // x8
  System_Func_SimpleTreasureDeviceData__bool__o *_9__1_0; // x22
  Il2CppObject *v40; // x23
  struct AssumedEffectExtractLogic___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x20
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  System_Func_SimpleTreasureDeviceData__TreasureDvcEntity__o *v53; // x22
  System_Collections_Generic_IEnumerable_T__o *v54; // x0
  System_Collections_Generic_IEnumerable_T__o *v55; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  AssumedEffectExtractLogic___c_c *v61; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x20
  struct AssumedEffectExtractLogic___c_StaticFields *v63; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__1_2; // x21
  Il2CppObject *v65; // x22
  struct AssumedEffectExtractLogic___c_StaticFields *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v73; // x0
  System_Collections_Generic_IEnumerable_T__o *v74; // x1
  System_Collections_Generic_HashSet_int__o *EffectIdHashSet; // x0

  if ( (byte_40FBE38 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_ExcludeNull_TreasureDvcEntity___, toUpdate);
    sub_B16FFC(&Method_DataManager_GetMaster_TreasureDvcMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_SelectMany_TreasureDvcEntity__int___, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_SimpleTreasureDeviceData__TreasureDvcEntity___, v10);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_TreasureDvcEntity___, v11);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_SimpleTreasureDeviceData___, v12);
    sub_B16FFC(&Method_System_Func_SimpleTreasureDeviceData__TreasureDvcEntity___ctor__, v13);
    sub_B16FFC(&Method_System_Func_TreasureDvcEntity__IEnumerable_int____ctor__, v14);
    sub_B16FFC(&Method_System_Func_SimpleTreasureDeviceData__bool___ctor__, v15);
    sub_B16FFC(&System_Func_TreasureDvcEntity__IEnumerable_int___TypeInfo, v16);
    sub_B16FFC(&System_Func_SimpleTreasureDeviceData__bool__TypeInfo, v17);
    sub_B16FFC(&System_Func_SimpleTreasureDeviceData__TreasureDvcEntity__TypeInfo, v18);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v19);
    sub_B16FFC(&Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_0__, v20);
    sub_B16FFC(&Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_2__, v21);
    sub_B16FFC(&Method_AssumedEffectExtractLogic___c__DisplayClass1_0__FromTreasureDevice_b__1__, v22);
    sub_B16FFC(&AssumedEffectExtractLogic___c__DisplayClass1_0_TypeInfo, v23);
    sub_B16FFC(&AssumedEffectExtractLogic___c_TypeInfo, v24);
    byte_40FBE38 = 1;
  }
  v25 = sub_B170CC(AssumedEffectExtractLogic___c__DisplayClass1_0_TypeInfo, toUpdate, method, v3, v4);
  AssumedEffectExtractLogic___c__DisplayClass1_0___ctor((AssumedEffectExtractLogic___c__DisplayClass1_0_o *)v25, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !v25 )
    goto LABEL_26;
  *(_QWORD *)(v25 + 16) = Master_WarQuestSelectionMaster;
  sub_B16F98((BattleServantConfConponent_o *)(v25 + 16), Master_WarQuestSelectionMaster, v27, v28, v29, v30, v31, v32);
  v37 = AssumedEffectExtractLogic___c_TypeInfo;
  if ( (BYTE3(AssumedEffectExtractLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
    v37 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  static_fields = v37->static_fields;
  _9__1_0 = static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      static_fields = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    }
    v40 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_SimpleTreasureDeviceData__bool__o *)sub_B170CC(
                                                                 System_Func_SimpleTreasureDeviceData__bool__TypeInfo,
                                                                 v33,
                                                                 v34,
                                                                 v35,
                                                                 v36);
    System_Func_SimpleTreasureDeviceData__bool____ctor(
      _9__1_0,
      v40,
      Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_0__,
      (const MethodInfo_2B6FB2C *)Method_System_Func_SimpleTreasureDeviceData__bool___ctor__);
    v41 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    v41->__9__1_0 = _9__1_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v41->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
  v48 = System_Linq_Enumerable__Where_SimpleTreasureDeviceData_(
          (System_Collections_Generic_IEnumerable_TSource__o *)tdDataEnumerable,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_19C9510 *)Method_System_Linq_Enumerable_Where_SimpleTreasureDeviceData___);
  v53 = (System_Func_SimpleTreasureDeviceData__TreasureDvcEntity__o *)sub_B170CC(
                                                                        System_Func_SimpleTreasureDeviceData__TreasureDvcEntity__TypeInfo,
                                                                        v49,
                                                                        v50,
                                                                        v51,
                                                                        v52);
  System_Func_SimpleTreasureDeviceData__TreasureDvcEntity____ctor(
    v53,
    (Il2CppObject *)v25,
    Method_AssumedEffectExtractLogic___c__DisplayClass1_0__FromTreasureDevice_b__1__,
    (const MethodInfo_2B70798 *)Method_System_Func_SimpleTreasureDeviceData__TreasureDvcEntity___ctor__);
  v54 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_SimpleTreasureDeviceData__TreasureDvcEntity_(
                                                         v48,
                                                         (System_Func_TSource__TResult__o *)v53,
                                                         (const MethodInfo_19C15CC *)Method_System_Linq_Enumerable_Select_SimpleTreasureDeviceData__TreasureDvcEntity___);
  v55 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          v54,
          (const MethodInfo_18B6360 *)Method_BasicHelper_ExcludeNull_TreasureDvcEntity___);
  v56 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v55,
          (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_TreasureDvcEntity___);
  v61 = AssumedEffectExtractLogic___c_TypeInfo;
  v62 = (System_Collections_Generic_IEnumerable_TSource__o *)v56;
  if ( (BYTE3(AssumedEffectExtractLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
    v61 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  v63 = v61->static_fields;
  _9__1_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v63->__9__1_2;
  if ( !_9__1_2 )
  {
    if ( (BYTE3(v61->vtable._0_Equals.methodPtr) & 4) != 0 && !v61->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v61);
      v63 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    }
    v65 = (Il2CppObject *)v63->__9;
    _9__1_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                System_Func_TreasureDvcEntity__IEnumerable_int___TypeInfo,
                                                                                                v57,
                                                                                                v58,
                                                                                                v59,
                                                                                                v60);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__1_2,
      v65,
      Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_2__,
      (const MethodInfo_2B6C28C *)Method_System_Func_TreasureDvcEntity__IEnumerable_int____ctor__);
    v66 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    v66->__9__1_2 = (struct System_Func_TreasureDvcEntity__IEnumerable_int___o *)_9__1_2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v66->__9__1_2,
      (System_Int32_array **)_9__1_2,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72);
  }
  v73 = System_Linq_Enumerable__SelectMany_BattleActionData_HealData__int_(
          v62,
          (System_Func_TSource__IEnumerable_TResult___o *)_9__1_2,
          (const MethodInfo_19C1EA0 *)Method_System_Linq_Enumerable_SelectMany_TreasureDvcEntity__int___);
  if ( !toUpdate
    || (v74 = (System_Collections_Generic_IEnumerable_T__o *)v73,
        (EffectIdHashSet = toUpdate->fields.EffectIdHashSet) == 0LL) )
  {
LABEL_26:
    sub_B170D4();
  }
  System_Collections_Generic_HashSet_int___UnionWith(
    EffectIdHashSet,
    v74,
    (const MethodInfo_21D9180 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
}


void __fastcall AssumedEffectExtractLogic___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F9138 & 1) == 0 )
  {
    sub_B16FFC(&AssumedEffectExtractLogic___c_TypeInfo, v1);
    byte_40F9138 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(AssumedEffectExtractLogic___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)AssumedEffectExtractLogic___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
  if ( (byte_40F9139 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, x);
    byte_40F9139 = 1;
  }
  skillMaster = this->fields.skillMaster;
  if ( !skillMaster )
    sub_B170D4();
  return (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)skillMaster,
                            id,
                            (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
  if ( (byte_40F913A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, x);
    byte_40F913A = 1;
  }
  tdMaster = this->fields.tdMaster;
  if ( !tdMaster )
    sub_B170D4();
  return (TreasureDvcEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)tdMaster,
                                  id,
                                  (const MethodInfo_266F388 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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
  __int64 v5; // x1
  struct ServantMaster_o *servantMaster; // x20
  __int64 v7; // x19
  __int64 v8; // x21
  int32_t v9; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_40F913B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, x);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_40F913B = 1;
  }
  if ( !x )
    goto LABEL_9;
  servantMaster = this->fields.servantMaster;
  v8 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v11.fields.currentCryptoKey = v8;
  *(_QWORD *)&v11.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v11, 0LL);
  if ( !servantMaster )
LABEL_9:
    sub_B170D4();
  return (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)servantMaster,
                              v9,
                              (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
}