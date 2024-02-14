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
  System_Collections_Generic_IEnumerable_T__o *AssumedEffectId; // x0
  __int64 v27; // x8
  unsigned __int64 v28; // x10
  int *v29; // x11
  __int64 v30; // x0

  if ( (byte_4216662 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__UnionWith__, toUpdate);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v5);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, v6);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, v7);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_4216662 = 1;
  }
  if ( battleInfo )
  {
    v9 = BattleInfoData__AllDeckServantEnumerable(battleInfo, 0LL);
    if ( !v9 )
      sub_B0D97C(0LL);
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
      p_method = sub_AA67A0(v9, System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, 0LL);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleDeckServantData__o *, _QWORD))p_method)(
            v11,
            *(_QWORD *)(p_method + 8));
    if ( !v15 )
      sub_B0D97C(0LL);
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
        v19 = sub_AA67A0(v15, System_Collections_IEnumerator_TypeInfo, 0LL);
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
        v23 = sub_AA67A0(v15, System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, 0LL);
      }
      v24 = (BattleDeckServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v15, *(_QWORD *)(v23 + 8));
      if ( !toUpdate )
        sub_B0D97C(v24);
      if ( !v24 )
        sub_B0D97C(0LL);
      EffectIdHashSet = toUpdate->fields.EffectIdHashSet;
      AssumedEffectId = (System_Collections_Generic_IEnumerable_T__o *)BattleDeckServantData__GetAssumedEffectId(
                                                                         v24,
                                                                         0LL);
      if ( !EffectIdHashSet )
        sub_B0D97C(AssumedEffectId);
      System_Collections_Generic_HashSet_int___UnionWith(
        EffectIdHashSet,
        AssumedEffectId,
        (const MethodInfo_2C761FC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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
      v30 = sub_AA67A0(v15, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v30)(v15, *(_QWORD *)(v30 + 8));
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
  if ( (byte_4216661 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Add__, toUpdate);
    questPhaseEntity = (QuestPhaseEntity_o *)sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v5);
    byte_4216661 = 1;
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
            (const MethodInfo_2C761FC *)Method_System_Collections_Generic_HashSet_int__UnionWith__),
          v7 = toUpdate->fields.EffectIdHashSet,
          questPhaseEntity = (QuestPhaseEntity_o *)QuestPhaseEntity__getSpecialShadowEffectId(v4, 0LL),
          !v7) )
    {
      sub_B0D97C(questPhaseEntity);
    }
    System_Collections_Generic_HashSet_int___Add(
      v7,
      (int32_t)questPhaseEntity,
      (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v29; // x22
  System_Collections_Generic_IEnumerable_T__o *v30; // x0
  System_Collections_Generic_IEnumerable_T__o *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x20
  AssumedEffectExtractLogic___c_c *v35; // x8
  struct AssumedEffectExtractLogic___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__2_1; // x21
  Il2CppObject *v38; // x22
  struct AssumedEffectExtractLogic___c_StaticFields *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Collections_Generic_IEnumerable_T__o *v46; // x1

  if ( (byte_421665F & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_ExcludeNull_ServantEntity___, toUpdate);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_SelectMany_ServantEntity__int___, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_BattleUserServantData__ServantEntity___, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_ServantEntity___, v9);
    sub_B0D8A4(&Method_System_Func_BattleUserServantData__ServantEntity___ctor__, v10);
    sub_B0D8A4(&Method_System_Func_ServantEntity__IEnumerable_int____ctor__, v11);
    sub_B0D8A4(&System_Func_ServantEntity__IEnumerable_int___TypeInfo, v12);
    sub_B0D8A4(&System_Func_BattleUserServantData__ServantEntity__TypeInfo, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v14);
    sub_B0D8A4(&Method_AssumedEffectExtractLogic___c__FromServant_b__2_1__, v15);
    sub_B0D8A4(&Method_AssumedEffectExtractLogic___c__DisplayClass2_0__FromServant_b__0__, v16);
    sub_B0D8A4(&AssumedEffectExtractLogic___c__DisplayClass2_0_TypeInfo, v17);
    sub_B0D8A4(&AssumedEffectExtractLogic___c_TypeInfo, v18);
    byte_421665F = 1;
  }
  v19 = sub_B0D974(AssumedEffectExtractLogic___c__DisplayClass2_0_TypeInfo, toUpdate, method);
  AssumedEffectExtractLogic___c__DisplayClass2_0___ctor((AssumedEffectExtractLogic___c__DisplayClass2_0_o *)v19, 0LL);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)servants, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !v19 )
      goto LABEL_19;
    *(_QWORD *)(v19 + 16) = Master_WarQuestSelectionMaster;
    sub_B0D840((BattleServantConfConponent_o *)(v19 + 16), Master_WarQuestSelectionMaster, v21, v22, v23, v24, v25, v26);
    v29 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                            System_Func_BattleUserServantData__ServantEntity__TypeInfo,
                                                                                            v27,
                                                                                            v28);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      v29,
      (Il2CppObject *)v19,
      Method_AssumedEffectExtractLogic___c__DisplayClass2_0__FromServant_b__0__,
      (const MethodInfo_261A104 *)Method_System_Func_BattleUserServantData__ServantEntity___ctor__);
    v30 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)servants,
                                                           (System_Func_TSource__TResult__o *)v29,
                                                           (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_BattleUserServantData__ServantEntity___);
    v31 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
            v30,
            (const MethodInfo_17074D0 *)Method_BasicHelper_ExcludeNull_ServantEntity___);
    v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v31,
                                                                 (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_ServantEntity___);
    v35 = AssumedEffectExtractLogic___c_TypeInfo;
    if ( (BYTE3(AssumedEffectExtractLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
      v35 = AssumedEffectExtractLogic___c_TypeInfo;
    }
    static_fields = v35->static_fields;
    _9__2_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__2_1;
    if ( !_9__2_1 )
    {
      if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35);
        static_fields = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
      }
      v38 = (Il2CppObject *)static_fields->__9;
      _9__2_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                  System_Func_ServantEntity__IEnumerable_int___TypeInfo,
                                                                                                  v32,
                                                                                                  v33);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__2_1,
        v38,
        Method_AssumedEffectExtractLogic___c__FromServant_b__2_1__,
        (const MethodInfo_261A104 *)Method_System_Func_ServantEntity__IEnumerable_int____ctor__);
      v39 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
      v39->__9__2_1 = (struct System_Func_ServantEntity__IEnumerable_int___o *)_9__2_1;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v39->__9__2_1,
        (System_Int32_array **)_9__2_1,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
    }
    Master_WarQuestSelectionMaster = (System_Int32_array **)System_Linq_Enumerable__SelectMany_BattleActionData_HealData__int_(
                                                              v34,
                                                              (System_Func_TSource__IEnumerable_TResult___o *)_9__2_1,
                                                              (const MethodInfo_1B533F8 *)Method_System_Linq_Enumerable_SelectMany_ServantEntity__int___);
    if ( !toUpdate
      || (v46 = (System_Collections_Generic_IEnumerable_T__o *)Master_WarQuestSelectionMaster,
          (Master_WarQuestSelectionMaster = (System_Int32_array **)toUpdate->fields.EffectIdHashSet) == 0LL) )
    {
LABEL_19:
      sub_B0D97C(Master_WarQuestSelectionMaster);
    }
    System_Collections_Generic_HashSet_int___UnionWith(
      (System_Collections_Generic_HashSet_int__o *)Master_WarQuestSelectionMaster,
      v46,
      (const MethodInfo_2C761FC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x2
  AssumedEffectExtractLogic___c_c *v33; // x0
  struct AssumedEffectExtractLogic___c_StaticFields *static_fields; // x8
  System_Func_SimpleSkillData__bool__o *_9__0_0; // x22
  Il2CppObject *v36; // x23
  struct AssumedEffectExtractLogic___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x20
  __int64 v45; // x1
  __int64 v46; // x2
  System_Func_SimpleSkillData__SkillEntity__o *v47; // x22
  System_Collections_Generic_IEnumerable_T__o *v48; // x0
  System_Collections_Generic_IEnumerable_T__o *v49; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v50; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  AssumedEffectExtractLogic___c_c *v53; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x20
  struct AssumedEffectExtractLogic___c_StaticFields *v55; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__0_2; // x21
  Il2CppObject *v57; // x22
  struct AssumedEffectExtractLogic___c_StaticFields *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Collections_Generic_IEnumerable_T__o *v65; // x1

  if ( (byte_421665D & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_ExcludeNull_SkillEntity___, toUpdate);
    sub_B0D8A4(&Method_DataManager_GetMaster_SkillMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_SelectMany_SkillEntity__int___, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_SimpleSkillData__SkillEntity___, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_SkillEntity___, v9);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_SimpleSkillData___, v10);
    sub_B0D8A4(&Method_System_Func_SkillEntity__IEnumerable_int____ctor__, v11);
    sub_B0D8A4(&Method_System_Func_SimpleSkillData__SkillEntity___ctor__, v12);
    sub_B0D8A4(&Method_System_Func_SimpleSkillData__bool___ctor__, v13);
    sub_B0D8A4(&System_Func_SkillEntity__IEnumerable_int___TypeInfo, v14);
    sub_B0D8A4(&System_Func_SimpleSkillData__bool__TypeInfo, v15);
    sub_B0D8A4(&System_Func_SimpleSkillData__SkillEntity__TypeInfo, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v17);
    sub_B0D8A4(&Method_AssumedEffectExtractLogic___c__FromSkill_b__0_0__, v18);
    sub_B0D8A4(&Method_AssumedEffectExtractLogic___c__FromSkill_b__0_2__, v19);
    sub_B0D8A4(&Method_AssumedEffectExtractLogic___c__DisplayClass0_0__FromSkill_b__1__, v20);
    sub_B0D8A4(&AssumedEffectExtractLogic___c__DisplayClass0_0_TypeInfo, v21);
    sub_B0D8A4(&AssumedEffectExtractLogic___c_TypeInfo, v22);
    byte_421665D = 1;
  }
  v23 = sub_B0D974(AssumedEffectExtractLogic___c__DisplayClass0_0_TypeInfo, toUpdate, method);
  AssumedEffectExtractLogic___c__DisplayClass0_0___ctor((AssumedEffectExtractLogic___c__DisplayClass0_0_o *)v23, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !v23 )
    goto LABEL_26;
  *(_QWORD *)(v23 + 16) = Master_WarQuestSelectionMaster;
  sub_B0D840((BattleServantConfConponent_o *)(v23 + 16), Master_WarQuestSelectionMaster, v25, v26, v27, v28, v29, v30);
  v33 = AssumedEffectExtractLogic___c_TypeInfo;
  if ( (BYTE3(AssumedEffectExtractLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
    v33 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  static_fields = v33->static_fields;
  _9__0_0 = static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      static_fields = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    }
    v36 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_SimpleSkillData__bool__o *)sub_B0D974(System_Func_SimpleSkillData__bool__TypeInfo, v31, v32);
    System_Func_SimpleSkillData__bool____ctor(
      _9__0_0,
      v36,
      Method_AssumedEffectExtractLogic___c__FromSkill_b__0_0__,
      (const MethodInfo_261C410 *)Method_System_Func_SimpleSkillData__bool___ctor__);
    v37 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    v37->__9__0_0 = _9__0_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v37->__9__0_0,
      (System_Int32_array **)_9__0_0,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  v44 = System_Linq_Enumerable__Where_SimpleSkillData_(
          (System_Collections_Generic_IEnumerable_TSource__o *)skillDataEnumerable,
          (System_Func_TSource__bool__o *)_9__0_0,
          (const MethodInfo_1B5A944 *)Method_System_Linq_Enumerable_Where_SimpleSkillData___);
  v47 = (System_Func_SimpleSkillData__SkillEntity__o *)sub_B0D974(
                                                         System_Func_SimpleSkillData__SkillEntity__TypeInfo,
                                                         v45,
                                                         v46);
  System_Func_SimpleSkillData__SkillEntity____ctor(
    v47,
    (Il2CppObject *)v23,
    Method_AssumedEffectExtractLogic___c__DisplayClass0_0__FromSkill_b__1__,
    (const MethodInfo_261D07C *)Method_System_Func_SimpleSkillData__SkillEntity___ctor__);
  v48 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_SimpleSkillData__SkillEntity_(
                                                         v44,
                                                         (System_Func_TSource__TResult__o *)v47,
                                                         (const MethodInfo_1B52810 *)Method_System_Linq_Enumerable_Select_SimpleSkillData__SkillEntity___);
  v49 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          v48,
          (const MethodInfo_17074D0 *)Method_BasicHelper_ExcludeNull_SkillEntity___);
  v50 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v49,
          (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_SkillEntity___);
  v53 = AssumedEffectExtractLogic___c_TypeInfo;
  v54 = (System_Collections_Generic_IEnumerable_TSource__o *)v50;
  if ( (BYTE3(AssumedEffectExtractLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
    v53 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  v55 = v53->static_fields;
  _9__0_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v55->__9__0_2;
  if ( !_9__0_2 )
  {
    if ( (BYTE3(v53->vtable._0_Equals.methodPtr) & 4) != 0 && !v53->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v53);
      v55 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    }
    v57 = (Il2CppObject *)v55->__9;
    _9__0_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                System_Func_SkillEntity__IEnumerable_int___TypeInfo,
                                                                                                v51,
                                                                                                v52);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__0_2,
      v57,
      Method_AssumedEffectExtractLogic___c__FromSkill_b__0_2__,
      (const MethodInfo_261A104 *)Method_System_Func_SkillEntity__IEnumerable_int____ctor__);
    v58 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    v58->__9__0_2 = (struct System_Func_SkillEntity__IEnumerable_int___o *)_9__0_2;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v58->__9__0_2,
      (System_Int32_array **)_9__0_2,
      v59,
      v60,
      v61,
      v62,
      v63,
      v64);
  }
  Master_WarQuestSelectionMaster = (System_Int32_array **)System_Linq_Enumerable__SelectMany_BattleActionData_HealData__int_(
                                                            v54,
                                                            (System_Func_TSource__IEnumerable_TResult___o *)_9__0_2,
                                                            (const MethodInfo_1B533F8 *)Method_System_Linq_Enumerable_SelectMany_SkillEntity__int___);
  if ( !toUpdate
    || (v65 = (System_Collections_Generic_IEnumerable_T__o *)Master_WarQuestSelectionMaster,
        (Master_WarQuestSelectionMaster = (System_Int32_array **)toUpdate->fields.EffectIdHashSet) == 0LL) )
  {
LABEL_26:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  System_Collections_Generic_HashSet_int___UnionWith(
    (System_Collections_Generic_HashSet_int__o *)Master_WarQuestSelectionMaster,
    v65,
    (const MethodInfo_2C761FC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
}


void __fastcall AssumedEffectExtractLogic__FromStage(
        StageEntity_o *stageEntity,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  StageEntity_o *v4; // x20
  System_Collections_Generic_HashSet_int__o *EffectIdHashSet; // x19

  v4 = stageEntity;
  if ( (byte_4216660 & 1) == 0 )
  {
    stageEntity = (StageEntity_o *)sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__UnionWith__, toUpdate);
    byte_4216660 = 1;
  }
  if ( v4 )
  {
    if ( !toUpdate
      || (EffectIdHashSet = toUpdate->fields.EffectIdHashSet,
          stageEntity = (StageEntity_o *)StageEntity__GetAssumedEffectId(v4, 0LL),
          !EffectIdHashSet) )
    {
      sub_B0D97C(stageEntity);
    }
    System_Collections_Generic_HashSet_int___UnionWith(
      EffectIdHashSet,
      (System_Collections_Generic_IEnumerable_T__o *)stageEntity,
      (const MethodInfo_2C761FC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x2
  AssumedEffectExtractLogic___c_c *v33; // x0
  struct AssumedEffectExtractLogic___c_StaticFields *static_fields; // x8
  System_Func_SimpleTreasureDeviceData__bool__o *_9__1_0; // x22
  Il2CppObject *v36; // x23
  struct AssumedEffectExtractLogic___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x20
  __int64 v45; // x1
  __int64 v46; // x2
  System_Func_SimpleTreasureDeviceData__TreasureDvcEntity__o *v47; // x22
  System_Collections_Generic_IEnumerable_T__o *v48; // x0
  System_Collections_Generic_IEnumerable_T__o *v49; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v50; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  AssumedEffectExtractLogic___c_c *v53; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x20
  struct AssumedEffectExtractLogic___c_StaticFields *v55; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__1_2; // x21
  Il2CppObject *v57; // x22
  struct AssumedEffectExtractLogic___c_StaticFields *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Collections_Generic_IEnumerable_T__o *v65; // x1

  if ( (byte_421665E & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_ExcludeNull_TreasureDvcEntity___, toUpdate);
    sub_B0D8A4(&Method_DataManager_GetMaster_TreasureDvcMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_SelectMany_TreasureDvcEntity__int___, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_SimpleTreasureDeviceData__TreasureDvcEntity___, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_TreasureDvcEntity___, v9);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_SimpleTreasureDeviceData___, v10);
    sub_B0D8A4(&Method_System_Func_SimpleTreasureDeviceData__TreasureDvcEntity___ctor__, v11);
    sub_B0D8A4(&Method_System_Func_TreasureDvcEntity__IEnumerable_int____ctor__, v12);
    sub_B0D8A4(&Method_System_Func_SimpleTreasureDeviceData__bool___ctor__, v13);
    sub_B0D8A4(&System_Func_TreasureDvcEntity__IEnumerable_int___TypeInfo, v14);
    sub_B0D8A4(&System_Func_SimpleTreasureDeviceData__bool__TypeInfo, v15);
    sub_B0D8A4(&System_Func_SimpleTreasureDeviceData__TreasureDvcEntity__TypeInfo, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v17);
    sub_B0D8A4(&Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_0__, v18);
    sub_B0D8A4(&Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_2__, v19);
    sub_B0D8A4(&Method_AssumedEffectExtractLogic___c__DisplayClass1_0__FromTreasureDevice_b__1__, v20);
    sub_B0D8A4(&AssumedEffectExtractLogic___c__DisplayClass1_0_TypeInfo, v21);
    sub_B0D8A4(&AssumedEffectExtractLogic___c_TypeInfo, v22);
    byte_421665E = 1;
  }
  v23 = sub_B0D974(AssumedEffectExtractLogic___c__DisplayClass1_0_TypeInfo, toUpdate, method);
  AssumedEffectExtractLogic___c__DisplayClass1_0___ctor((AssumedEffectExtractLogic___c__DisplayClass1_0_o *)v23, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !v23 )
    goto LABEL_26;
  *(_QWORD *)(v23 + 16) = Master_WarQuestSelectionMaster;
  sub_B0D840((BattleServantConfConponent_o *)(v23 + 16), Master_WarQuestSelectionMaster, v25, v26, v27, v28, v29, v30);
  v33 = AssumedEffectExtractLogic___c_TypeInfo;
  if ( (BYTE3(AssumedEffectExtractLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
    v33 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  static_fields = v33->static_fields;
  _9__1_0 = static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      static_fields = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    }
    v36 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_SimpleTreasureDeviceData__bool__o *)sub_B0D974(
                                                                 System_Func_SimpleTreasureDeviceData__bool__TypeInfo,
                                                                 v31,
                                                                 v32);
    System_Func_SimpleTreasureDeviceData__bool____ctor(
      _9__1_0,
      v36,
      Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_0__,
      (const MethodInfo_261D9A4 *)Method_System_Func_SimpleTreasureDeviceData__bool___ctor__);
    v37 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    v37->__9__1_0 = _9__1_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v37->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  v44 = System_Linq_Enumerable__Where_SimpleTreasureDeviceData_(
          (System_Collections_Generic_IEnumerable_TSource__o *)tdDataEnumerable,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_1B5ABD8 *)Method_System_Linq_Enumerable_Where_SimpleTreasureDeviceData___);
  v47 = (System_Func_SimpleTreasureDeviceData__TreasureDvcEntity__o *)sub_B0D974(
                                                                        System_Func_SimpleTreasureDeviceData__TreasureDvcEntity__TypeInfo,
                                                                        v45,
                                                                        v46);
  System_Func_SimpleTreasureDeviceData__TreasureDvcEntity____ctor(
    v47,
    (Il2CppObject *)v23,
    Method_AssumedEffectExtractLogic___c__DisplayClass1_0__FromTreasureDevice_b__1__,
    (const MethodInfo_261E610 *)Method_System_Func_SimpleTreasureDeviceData__TreasureDvcEntity___ctor__);
  v48 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_SimpleTreasureDeviceData__TreasureDvcEntity_(
                                                         v44,
                                                         (System_Func_TSource__TResult__o *)v47,
                                                         (const MethodInfo_1B52ABC *)Method_System_Linq_Enumerable_Select_SimpleTreasureDeviceData__TreasureDvcEntity___);
  v49 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          v48,
          (const MethodInfo_17074D0 *)Method_BasicHelper_ExcludeNull_TreasureDvcEntity___);
  v50 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v49,
          (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_TreasureDvcEntity___);
  v53 = AssumedEffectExtractLogic___c_TypeInfo;
  v54 = (System_Collections_Generic_IEnumerable_TSource__o *)v50;
  if ( (BYTE3(AssumedEffectExtractLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
    v53 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  v55 = v53->static_fields;
  _9__1_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v55->__9__1_2;
  if ( !_9__1_2 )
  {
    if ( (BYTE3(v53->vtable._0_Equals.methodPtr) & 4) != 0 && !v53->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v53);
      v55 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    }
    v57 = (Il2CppObject *)v55->__9;
    _9__1_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                System_Func_TreasureDvcEntity__IEnumerable_int___TypeInfo,
                                                                                                v51,
                                                                                                v52);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__1_2,
      v57,
      Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_2__,
      (const MethodInfo_261A104 *)Method_System_Func_TreasureDvcEntity__IEnumerable_int____ctor__);
    v58 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    v58->__9__1_2 = (struct System_Func_TreasureDvcEntity__IEnumerable_int___o *)_9__1_2;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v58->__9__1_2,
      (System_Int32_array **)_9__1_2,
      v59,
      v60,
      v61,
      v62,
      v63,
      v64);
  }
  Master_WarQuestSelectionMaster = (System_Int32_array **)System_Linq_Enumerable__SelectMany_BattleActionData_HealData__int_(
                                                            v54,
                                                            (System_Func_TSource__IEnumerable_TResult___o *)_9__1_2,
                                                            (const MethodInfo_1B533F8 *)Method_System_Linq_Enumerable_SelectMany_TreasureDvcEntity__int___);
  if ( !toUpdate
    || (v65 = (System_Collections_Generic_IEnumerable_T__o *)Master_WarQuestSelectionMaster,
        (Master_WarQuestSelectionMaster = (System_Int32_array **)toUpdate->fields.EffectIdHashSet) == 0LL) )
  {
LABEL_26:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  System_Collections_Generic_HashSet_int___UnionWith(
    (System_Collections_Generic_HashSet_int__o *)Master_WarQuestSelectionMaster,
    v65,
    (const MethodInfo_2C761FC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
}


void __fastcall AssumedEffectExtractLogic___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4213978 & 1) == 0 )
  {
    sub_B0D8A4(&AssumedEffectExtractLogic___c_TypeInfo, v1);
    byte_4213978 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(AssumedEffectExtractLogic___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)AssumedEffectExtractLogic___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  if ( (byte_4213979 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, x);
    byte_4213979 = 1;
  }
  skillMaster = this->fields.skillMaster;
  if ( !skillMaster )
    sub_B0D97C(0LL);
  return (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)skillMaster,
                            id,
                            (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
  if ( (byte_421397A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, x);
    byte_421397A = 1;
  }
  tdMaster = this->fields.tdMaster;
  if ( !tdMaster )
    sub_B0D97C(0LL);
  return (TreasureDvcEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)tdMaster,
                                  id,
                                  (const MethodInfo_2669BD4 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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
  if ( (byte_421397B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, x);
    this = (AssumedEffectExtractLogic___c__DisplayClass2_0_o *)sub_B0D8A4(
                                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                 v5);
    byte_421397B = 1;
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
  this = (AssumedEffectExtractLogic___c__DisplayClass2_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                               v10,
                                                               0LL);
  if ( !servantMaster )
LABEL_9:
    sub_B0D97C(this);
  return (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              servantMaster,
                              (int32_t)this,
                              (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
}