void __fastcall AssumedEffectExtractLogic__FromEnemyScript(
        BattleInfoData_o *battleInfo,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Collections_Generic_IEnumerable_BattleDeckServantData__o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x3
  System_Collections_Generic_IEnumerable_BattleDeckServantData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleDeckServantData__o *v22; // x19
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v26; // x1
  __int64 v27; // x3
  __int64 v28; // x19
  __int64 v29; // x8
  unsigned __int64 v30; // x10
  int *v31; // x11
  __int64 v32; // x0
  __int64 v33; // x3
  __int64 v34; // x8
  unsigned __int64 v35; // x10
  int *v36; // x11
  __int64 v37; // x0
  BattleDeckServantData_o *v38; // x0
  __int64 v39; // x1
  System_Collections_Generic_HashSet_int__o *EffectIdHashSet; // x21
  System_Collections_Generic_IEnumerable_T__o *AssumedEffectId; // x0
  __int64 v42; // x8
  unsigned __int64 v43; // x10
  int *v44; // x11
  __int64 v45; // x0

  if ( (byte_42EBC87 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__UnionWith__, (_DWORD)toUpdate, (_DWORD)method, v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v15, v16, v17);
    byte_42EBC87 = 1;
  }
  if ( battleInfo )
  {
    v18 = BattleInfoData__AllDeckServantEnumerable(battleInfo, 0LL);
    if ( !v18 )
      sub_B5D69C(0LL, v19);
    klass = v18->klass;
    v22 = v18;
    if ( *(_WORD *)&v18->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleDeckServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo )
      {
        ++v23;
        p_offset += 4;
        if ( v23 >= *(unsigned __int16 *)&v18->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(v18, System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, 0LL, v20);
    }
    v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleDeckServantData__o *, _QWORD))p_method)(
            v22,
            *(_QWORD *)(p_method + 8));
    if ( !v28 )
      sub_B5D69C(0LL, v26);
    while ( 1 )
    {
      v29 = *(_QWORD *)v28;
      if ( *(_WORD *)(*(_QWORD *)v28 + 298LL) )
      {
        v30 = 0LL;
        v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v31 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v30;
          v31 += 4;
          if ( v30 >= *(unsigned __int16 *)(*(_QWORD *)v28 + 298LL) )
            goto LABEL_16;
        }
        v32 = v29 + 16LL * *v31 + 312;
      }
      else
      {
LABEL_16:
        v32 = sub_AF54C0(v28, System_Collections_IEnumerator_TypeInfo, 0LL, v27);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v28, *(_QWORD *)(v32 + 8)) & 1) == 0 )
        break;
      v34 = *(_QWORD *)v28;
      if ( *(_WORD *)(*(_QWORD *)v28 + 298LL) )
      {
        v35 = 0LL;
        v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BattleDeckServantData__c **)v36 - 1) != System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo )
        {
          ++v35;
          v36 += 4;
          if ( v35 >= *(unsigned __int16 *)(*(_QWORD *)v28 + 298LL) )
            goto LABEL_23;
        }
        v37 = v34 + 16LL * *v36 + 312;
      }
      else
      {
LABEL_23:
        v37 = sub_AF54C0(v28, System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, 0LL, v33);
      }
      v38 = (BattleDeckServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v28, *(_QWORD *)(v37 + 8));
      if ( !toUpdate )
        sub_B5D69C(v38, v39);
      if ( !v38 )
        sub_B5D69C(0LL, v39);
      EffectIdHashSet = toUpdate->fields.EffectIdHashSet;
      AssumedEffectId = (System_Collections_Generic_IEnumerable_T__o *)BattleDeckServantData__GetAssumedEffectId(
                                                                         v38,
                                                                         0LL);
      if ( !EffectIdHashSet )
        sub_B5D69C(AssumedEffectId, AssumedEffectId);
      System_Collections_Generic_HashSet_int___UnionWith(
        EffectIdHashSet,
        AssumedEffectId,
        (const MethodInfo_2500678 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    v42 = *(_QWORD *)v28;
    if ( *(_WORD *)(*(_QWORD *)v28 + 298LL) )
    {
      v43 = 0LL;
      v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
      {
        ++v43;
        v44 += 4;
        if ( v43 >= *(unsigned __int16 *)(*(_QWORD *)v28 + 298LL) )
          goto LABEL_33;
      }
      v45 = v42 + 16LL * *v44 + 312;
    }
    else
    {
LABEL_33:
      v45 = sub_AF54C0(v28, System_IDisposable_TypeInfo, 0LL, v33);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v45)(v28, *(_QWORD *)(v45 + 8));
  }
}


void __fastcall AssumedEffectExtractLogic__FromItem(
        int32_t id,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  int32_t v17; // w21
  int32_t v18; // w20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EBC88 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, (_DWORD)toUpdate, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42EBC88 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_17;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          id,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    return;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_17;
  Instance = (DataManager_o *)ItemEntity__GetBattleAppearEffect((ItemEntity_o *)entity, 0LL);
  if ( !entity )
    goto LABEL_17;
  v17 = (int)Instance;
  Instance = (DataManager_o *)ItemEntity__GetBattleGetEffect((ItemEntity_o *)entity, 0LL);
  v18 = (int)Instance;
  if ( v17 >= 1 )
  {
    if ( !toUpdate )
      goto LABEL_17;
    Instance = (DataManager_o *)toUpdate->fields.EffectIdHashSet;
    if ( !Instance )
      goto LABEL_17;
    Instance = (DataManager_o *)System_Collections_Generic_HashSet_int___Add(
                                  (System_Collections_Generic_HashSet_int__o *)Instance,
                                  v17,
                                  (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  if ( v18 < 1 )
    return;
  if ( !toUpdate || (Instance = (DataManager_o *)toUpdate->fields.EffectIdHashSet) == 0LL )
LABEL_17:
    sub_B5D69C(Instance, v16);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)Instance,
    v18,
    (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall AssumedEffectExtractLogic__FromQuestPhase(
        QuestPhaseEntity_o *questPhaseEntity,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  __int64 v3; // x3
  QuestPhaseEntity_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_Generic_HashSet_int__o *EffectIdHashSet; // x21
  System_Collections_Generic_HashSet_int__o *v13; // x21
  System_Collections_Generic_HashSet_int__o *cameraIdHashSet; // x20
  _QWORD **v15; // x23
  __int64 v16; // x21
  __int16 v17; // w8
  __int64 v18; // x21
  __int64 v19; // x21
  __int64 v20; // x21

  v5 = questPhaseEntity;
  if ( (byte_42EBC86 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_int___, (_DWORD)toUpdate, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, v6, v7, v8);
    questPhaseEntity = (QuestPhaseEntity_o *)sub_B5D5C4(
                                               &Method_System_Collections_Generic_HashSet_int__UnionWith__,
                                               v9,
                                               v10,
                                               v11);
    byte_42EBC86 = 1;
  }
  if ( v5 )
  {
    if ( !toUpdate )
      goto LABEL_21;
    EffectIdHashSet = toUpdate->fields.EffectIdHashSet;
    questPhaseEntity = (QuestPhaseEntity_o *)QuestPhaseEntity__GetAssumedEffectId(v5, 0LL);
    if ( !EffectIdHashSet )
      goto LABEL_21;
    System_Collections_Generic_HashSet_int___UnionWith(
      EffectIdHashSet,
      (System_Collections_Generic_IEnumerable_T__o *)questPhaseEntity,
      (const MethodInfo_2500678 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    v13 = toUpdate->fields.EffectIdHashSet;
    questPhaseEntity = (QuestPhaseEntity_o *)QuestPhaseEntity__getSpecialShadowEffectId(v5, 0LL);
    if ( !v13 )
      goto LABEL_21;
    System_Collections_Generic_HashSet_int___Add(
      v13,
      (int32_t)questPhaseEntity,
      (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
    cameraIdHashSet = toUpdate->fields.cameraIdHashSet;
    v15 = (_QWORD **)Method_System_Array_Empty_int___;
    v16 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
    v17 = *(_WORD *)(v16 + 306);
    if ( (v17 & 1) == 0 )
    {
      sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
      v17 = *(_WORD *)(v16 + 306);
    }
    if ( (v17 & 0x400) != 0 )
    {
      v18 = *v15[6];
      if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
        sub_AF52C4(*v15[6]);
      if ( !*(_DWORD *)(v18 + 224) )
      {
        v19 = *v15[6];
        if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
          sub_AF52C4(*v15[6]);
        j_il2cpp_runtime_class_init_0(v19);
      }
    }
    v20 = *v15[6];
    if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
      sub_AF52C4(*v15[6]);
    questPhaseEntity = (QuestPhaseEntity_o *)QuestPhaseEntity__GetAddUniqueCameraIds(
                                               v5,
                                               **(System_Int32_array ***)(v20 + 184),
                                               0LL);
    if ( !cameraIdHashSet )
LABEL_21:
      sub_B5D69C(questPhaseEntity, toUpdate);
    System_Collections_Generic_HashSet_int___UnionWith(
      cameraIdHashSet,
      (System_Collections_Generic_IEnumerable_T__o *)questPhaseEntity,
      (const MethodInfo_2500678 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
}


void __fastcall AssumedEffectExtractLogic__FromServant(
        BattleUserServantData_array *servants,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  __int64 v48; // x21
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_Collections_Generic_IEnumerable_T__o *v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v57; // x22
  System_Collections_Generic_IEnumerable_T__o *v58; // x0
  System_Collections_Generic_IEnumerable_T__o *v59; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x20
  AssumedEffectExtractLogic___c_c *v61; // x8
  struct AssumedEffectExtractLogic___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__2_1; // x21
  Il2CppObject *v64; // x22
  struct AssumedEffectExtractLogic___c_StaticFields *v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7

  if ( (byte_42EBC84 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_ExcludeNull_ServantEntity___, (_DWORD)toUpdate, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_SelectMany_ServantEntity__int___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_BattleUserServantData__ServantEntity___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_ServantEntity___, v18, v19, v20);
    sub_B5D5C4(&Method_System_Func_BattleUserServantData__ServantEntity___ctor__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Func_ServantEntity__IEnumerable_int____ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Func_ServantEntity__IEnumerable_int___TypeInfo, v27, v28, v29);
    sub_B5D5C4(&System_Func_BattleUserServantData__ServantEntity__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v33, v34, v35);
    sub_B5D5C4(&Method_AssumedEffectExtractLogic___c__FromServant_b__2_1__, v36, v37, v38);
    sub_B5D5C4(&Method_AssumedEffectExtractLogic___c__DisplayClass2_0__FromServant_b__0__, v39, v40, v41);
    sub_B5D5C4(&AssumedEffectExtractLogic___c__DisplayClass2_0_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&AssumedEffectExtractLogic___c_TypeInfo, v45, v46, v47);
    byte_42EBC84 = 1;
  }
  v48 = sub_B5D694(AssumedEffectExtractLogic___c__DisplayClass2_0_TypeInfo);
  AssumedEffectExtractLogic___c__DisplayClass2_0___ctor((AssumedEffectExtractLogic___c__DisplayClass2_0_o *)v48, 0LL);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)servants, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !v48 )
      goto LABEL_19;
    *(_QWORD *)(v48 + 16) = Master_WarQuestSelectionMaster;
    sub_B5D560((BattleServantConfConponent_o *)(v48 + 16), Master_WarQuestSelectionMaster, v51, v52, v53, v54, v55, v56);
    v57 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_BattleUserServantData__ServantEntity__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      v57,
      (Il2CppObject *)v48,
      Method_AssumedEffectExtractLogic___c__DisplayClass2_0__FromServant_b__0__,
      (const MethodInfo_2C3041C *)Method_System_Func_BattleUserServantData__ServantEntity___ctor__);
    v58 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)servants,
                                                           (System_Func_TSource__TResult__o *)v57,
                                                           (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_BattleUserServantData__ServantEntity___);
    v59 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
            v58,
            (const MethodInfo_1AD70CC *)Method_BasicHelper_ExcludeNull_ServantEntity___);
    v60 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v59,
                                                                 (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_ServantEntity___);
    v61 = AssumedEffectExtractLogic___c_TypeInfo;
    if ( (BYTE3(AssumedEffectExtractLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
      v61 = AssumedEffectExtractLogic___c_TypeInfo;
    }
    static_fields = v61->static_fields;
    _9__2_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__2_1;
    if ( !_9__2_1 )
    {
      if ( (BYTE3(v61->vtable._0_Equals.methodPtr) & 4) != 0 && !v61->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v61);
        static_fields = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
      }
      v64 = (Il2CppObject *)static_fields->__9;
      _9__2_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_ServantEntity__IEnumerable_int___TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__2_1,
        v64,
        Method_AssumedEffectExtractLogic___c__FromServant_b__2_1__,
        (const MethodInfo_2C3041C *)Method_System_Func_ServantEntity__IEnumerable_int____ctor__);
      v65 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
      v65->__9__2_1 = (struct System_Func_ServantEntity__IEnumerable_int___o *)_9__2_1;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v65->__9__2_1,
        (System_Int32_array **)_9__2_1,
        v66,
        v67,
        v68,
        v69,
        v70,
        v71);
    }
    Master_WarQuestSelectionMaster = (System_Int32_array **)System_Linq_Enumerable__SelectMany_ServantPhotoEntity_FaceData__int_(
                                                              v60,
                                                              (System_Func_TSource__IEnumerable_TResult___o *)_9__2_1,
                                                              (const MethodInfo_1CB4938 *)Method_System_Linq_Enumerable_SelectMany_ServantEntity__int___);
    if ( !toUpdate
      || (v50 = (System_Collections_Generic_IEnumerable_T__o *)Master_WarQuestSelectionMaster,
          (Master_WarQuestSelectionMaster = (System_Int32_array **)toUpdate->fields.EffectIdHashSet) == 0LL) )
    {
LABEL_19:
      sub_B5D69C(Master_WarQuestSelectionMaster, v50);
    }
    System_Collections_Generic_HashSet_int___UnionWith(
      (System_Collections_Generic_HashSet_int__o *)Master_WarQuestSelectionMaster,
      v50,
      (const MethodInfo_2500678 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
}


void __fastcall AssumedEffectExtractLogic__FromSkill(
        System_Collections_Generic_IEnumerable_SimpleSkillData__o *skillDataEnumerable,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  __int64 v60; // x21
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_Collections_Generic_IEnumerable_T__o *v62; // x1
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  AssumedEffectExtractLogic___c_c *v69; // x0
  struct AssumedEffectExtractLogic___c_StaticFields *static_fields; // x8
  System_Func_SimpleSkillData__bool__o *_9__0_0; // x22
  Il2CppObject *v72; // x23
  struct AssumedEffectExtractLogic___c_StaticFields *v73; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v80; // x20
  System_Func_SimpleSkillData__SkillEntity__o *v81; // x22
  System_Collections_Generic_IEnumerable_T__o *v82; // x0
  System_Collections_Generic_IEnumerable_T__o *v83; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v84; // x0
  AssumedEffectExtractLogic___c_c *v85; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v86; // x20
  struct AssumedEffectExtractLogic___c_StaticFields *v87; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__0_2; // x21
  Il2CppObject *v89; // x22
  struct AssumedEffectExtractLogic___c_StaticFields *v90; // x0
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7

  if ( (byte_42EBC82 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_ExcludeNull_SkillEntity___, (_DWORD)toUpdate, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_SelectMany_SkillEntity__int___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_SimpleSkillData__SkillEntity___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_SkillEntity___, v18, v19, v20);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_SimpleSkillData___, v21, v22, v23);
    sub_B5D5C4(&Method_System_Func_SkillEntity__IEnumerable_int____ctor__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Func_SimpleSkillData__SkillEntity___ctor__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Func_SimpleSkillData__bool___ctor__, v30, v31, v32);
    sub_B5D5C4(&System_Func_SkillEntity__IEnumerable_int___TypeInfo, v33, v34, v35);
    sub_B5D5C4(&System_Func_SimpleSkillData__bool__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&System_Func_SimpleSkillData__SkillEntity__TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v42, v43, v44);
    sub_B5D5C4(&Method_AssumedEffectExtractLogic___c__FromSkill_b__0_0__, v45, v46, v47);
    sub_B5D5C4(&Method_AssumedEffectExtractLogic___c__FromSkill_b__0_2__, v48, v49, v50);
    sub_B5D5C4(&Method_AssumedEffectExtractLogic___c__DisplayClass0_0__FromSkill_b__1__, v51, v52, v53);
    sub_B5D5C4(&AssumedEffectExtractLogic___c__DisplayClass0_0_TypeInfo, v54, v55, v56);
    sub_B5D5C4(&AssumedEffectExtractLogic___c_TypeInfo, v57, v58, v59);
    byte_42EBC82 = 1;
  }
  v60 = sub_B5D694(AssumedEffectExtractLogic___c__DisplayClass0_0_TypeInfo);
  AssumedEffectExtractLogic___c__DisplayClass0_0___ctor((AssumedEffectExtractLogic___c__DisplayClass0_0_o *)v60, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !v60 )
    goto LABEL_26;
  *(_QWORD *)(v60 + 16) = Master_WarQuestSelectionMaster;
  sub_B5D560((BattleServantConfConponent_o *)(v60 + 16), Master_WarQuestSelectionMaster, v63, v64, v65, v66, v67, v68);
  v69 = AssumedEffectExtractLogic___c_TypeInfo;
  if ( (BYTE3(AssumedEffectExtractLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
    v69 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  static_fields = v69->static_fields;
  _9__0_0 = static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v69->vtable._0_Equals.methodPtr) & 4) != 0 && !v69->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v69);
      static_fields = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    }
    v72 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_SimpleSkillData__bool__o *)sub_B5D694(System_Func_SimpleSkillData__bool__TypeInfo);
    System_Func_SimpleSkillData__bool____ctor(
      _9__0_0,
      v72,
      Method_AssumedEffectExtractLogic___c__FromSkill_b__0_0__,
      (const MethodInfo_2C32728 *)Method_System_Func_SimpleSkillData__bool___ctor__);
    v73 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    v73->__9__0_0 = _9__0_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v73->__9__0_0,
      (System_Int32_array **)_9__0_0,
      v74,
      v75,
      v76,
      v77,
      v78,
      v79);
  }
  v80 = System_Linq_Enumerable__Where_SimpleSkillData_(
          (System_Collections_Generic_IEnumerable_TSource__o *)skillDataEnumerable,
          (System_Func_TSource__bool__o *)_9__0_0,
          (const MethodInfo_1CBC1A4 *)Method_System_Linq_Enumerable_Where_SimpleSkillData___);
  v81 = (System_Func_SimpleSkillData__SkillEntity__o *)sub_B5D694(System_Func_SimpleSkillData__SkillEntity__TypeInfo);
  System_Func_SimpleSkillData__SkillEntity____ctor(
    v81,
    (Il2CppObject *)v60,
    Method_AssumedEffectExtractLogic___c__DisplayClass0_0__FromSkill_b__1__,
    (const MethodInfo_2C33394 *)Method_System_Func_SimpleSkillData__SkillEntity___ctor__);
  v82 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_SimpleSkillData__SkillEntity_(
                                                         v80,
                                                         (System_Func_TSource__TResult__o *)v81,
                                                         (const MethodInfo_1CB3D50 *)Method_System_Linq_Enumerable_Select_SimpleSkillData__SkillEntity___);
  v83 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          v82,
          (const MethodInfo_1AD70CC *)Method_BasicHelper_ExcludeNull_SkillEntity___);
  v84 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v83,
          (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_SkillEntity___);
  v85 = AssumedEffectExtractLogic___c_TypeInfo;
  v86 = (System_Collections_Generic_IEnumerable_TSource__o *)v84;
  if ( (BYTE3(AssumedEffectExtractLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
    v85 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  v87 = v85->static_fields;
  _9__0_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v87->__9__0_2;
  if ( !_9__0_2 )
  {
    if ( (BYTE3(v85->vtable._0_Equals.methodPtr) & 4) != 0 && !v85->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v85);
      v87 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    }
    v89 = (Il2CppObject *)v87->__9;
    _9__0_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_SkillEntity__IEnumerable_int___TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__0_2,
      v89,
      Method_AssumedEffectExtractLogic___c__FromSkill_b__0_2__,
      (const MethodInfo_2C3041C *)Method_System_Func_SkillEntity__IEnumerable_int____ctor__);
    v90 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    v90->__9__0_2 = (struct System_Func_SkillEntity__IEnumerable_int___o *)_9__0_2;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v90->__9__0_2,
      (System_Int32_array **)_9__0_2,
      v91,
      v92,
      v93,
      v94,
      v95,
      v96);
  }
  Master_WarQuestSelectionMaster = (System_Int32_array **)System_Linq_Enumerable__SelectMany_ServantPhotoEntity_FaceData__int_(
                                                            v86,
                                                            (System_Func_TSource__IEnumerable_TResult___o *)_9__0_2,
                                                            (const MethodInfo_1CB4938 *)Method_System_Linq_Enumerable_SelectMany_SkillEntity__int___);
  if ( !toUpdate
    || (v62 = (System_Collections_Generic_IEnumerable_T__o *)Master_WarQuestSelectionMaster,
        (Master_WarQuestSelectionMaster = (System_Int32_array **)toUpdate->fields.EffectIdHashSet) == 0LL) )
  {
LABEL_26:
    sub_B5D69C(Master_WarQuestSelectionMaster, v62);
  }
  System_Collections_Generic_HashSet_int___UnionWith(
    (System_Collections_Generic_HashSet_int__o *)Master_WarQuestSelectionMaster,
    v62,
    (const MethodInfo_2500678 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
}


void __fastcall AssumedEffectExtractLogic__FromStage(
        StageEntity_o *stageEntity,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  __int64 v3; // x3
  StageEntity_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_Generic_HashSet_int__o *EffectIdHashSet; // x21
  System_Collections_Generic_HashSet_string__o *AudioAssetNameHashSet; // x21
  System_Collections_Generic_HashSet_int__o *cameraIdHashSet; // x20
  _QWORD **v15; // x23
  __int64 v16; // x21
  __int16 v17; // w8
  __int64 v18; // x21
  __int64 v19; // x21
  __int64 v20; // x21

  v5 = stageEntity;
  if ( (byte_42EBC85 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_int___, (_DWORD)toUpdate, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v6, v7, v8);
    stageEntity = (StageEntity_o *)sub_B5D5C4(
                                     &Method_System_Collections_Generic_HashSet_string__UnionWith__,
                                     v9,
                                     v10,
                                     v11);
    byte_42EBC85 = 1;
  }
  if ( v5 )
  {
    if ( !toUpdate )
      goto LABEL_21;
    EffectIdHashSet = toUpdate->fields.EffectIdHashSet;
    stageEntity = (StageEntity_o *)StageEntity__GetAssumedEffectId(v5, 0LL);
    if ( !EffectIdHashSet )
      goto LABEL_21;
    System_Collections_Generic_HashSet_int___UnionWith(
      EffectIdHashSet,
      (System_Collections_Generic_IEnumerable_T__o *)stageEntity,
      (const MethodInfo_2500678 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    AudioAssetNameHashSet = toUpdate->fields.AudioAssetNameHashSet;
    stageEntity = (StageEntity_o *)StageEntity__GetAssumedVoiceAssetNames(v5, 0LL);
    if ( !AudioAssetNameHashSet )
      goto LABEL_21;
    System_Collections_Generic_HashSet_string___UnionWith(
      AudioAssetNameHashSet,
      (System_Collections_Generic_IEnumerable_T__o *)stageEntity,
      (const MethodInfo_2507034 *)Method_System_Collections_Generic_HashSet_string__UnionWith__);
    cameraIdHashSet = toUpdate->fields.cameraIdHashSet;
    v15 = (_QWORD **)Method_System_Array_Empty_int___;
    v16 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
    v17 = *(_WORD *)(v16 + 306);
    if ( (v17 & 1) == 0 )
    {
      sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
      v17 = *(_WORD *)(v16 + 306);
    }
    if ( (v17 & 0x400) != 0 )
    {
      v18 = *v15[6];
      if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
        sub_AF52C4(*v15[6]);
      if ( !*(_DWORD *)(v18 + 224) )
      {
        v19 = *v15[6];
        if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
          sub_AF52C4(*v15[6]);
        j_il2cpp_runtime_class_init_0(v19);
      }
    }
    v20 = *v15[6];
    if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
      sub_AF52C4(*v15[6]);
    stageEntity = (StageEntity_o *)StageEntity__GetAddUniqueCameraIds(v5, **(System_Int32_array ***)(v20 + 184), 0LL);
    if ( !cameraIdHashSet )
LABEL_21:
      sub_B5D69C(stageEntity, toUpdate);
    System_Collections_Generic_HashSet_int___UnionWith(
      cameraIdHashSet,
      (System_Collections_Generic_IEnumerable_T__o *)stageEntity,
      (const MethodInfo_2500678 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
}


void __fastcall AssumedEffectExtractLogic__FromTreasureDevice(
        System_Collections_Generic_IEnumerable_SimpleTreasureDeviceData__o *tdDataEnumerable,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  __int64 v60; // x21
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_Collections_Generic_IEnumerable_T__o *v62; // x1
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  AssumedEffectExtractLogic___c_c *v69; // x0
  struct AssumedEffectExtractLogic___c_StaticFields *static_fields; // x8
  System_Func_SimpleTreasureDeviceData__bool__o *_9__1_0; // x22
  Il2CppObject *v72; // x23
  struct AssumedEffectExtractLogic___c_StaticFields *v73; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v80; // x20
  System_Func_SimpleTreasureDeviceData__TreasureDvcEntity__o *v81; // x22
  System_Collections_Generic_IEnumerable_T__o *v82; // x0
  System_Collections_Generic_IEnumerable_T__o *v83; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v84; // x0
  AssumedEffectExtractLogic___c_c *v85; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v86; // x20
  struct AssumedEffectExtractLogic___c_StaticFields *v87; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__1_2; // x21
  Il2CppObject *v89; // x22
  struct AssumedEffectExtractLogic___c_StaticFields *v90; // x0
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7

  if ( (byte_42EBC83 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_ExcludeNull_TreasureDvcEntity___, (_DWORD)toUpdate, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_TreasureDvcMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_SelectMany_TreasureDvcEntity__int___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_SimpleTreasureDeviceData__TreasureDvcEntity___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_TreasureDvcEntity___, v18, v19, v20);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_SimpleTreasureDeviceData___, v21, v22, v23);
    sub_B5D5C4(&Method_System_Func_SimpleTreasureDeviceData__TreasureDvcEntity___ctor__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Func_TreasureDvcEntity__IEnumerable_int____ctor__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Func_SimpleTreasureDeviceData__bool___ctor__, v30, v31, v32);
    sub_B5D5C4(&System_Func_TreasureDvcEntity__IEnumerable_int___TypeInfo, v33, v34, v35);
    sub_B5D5C4(&System_Func_SimpleTreasureDeviceData__bool__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&System_Func_SimpleTreasureDeviceData__TreasureDvcEntity__TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v42, v43, v44);
    sub_B5D5C4(&Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_0__, v45, v46, v47);
    sub_B5D5C4(&Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_2__, v48, v49, v50);
    sub_B5D5C4(&Method_AssumedEffectExtractLogic___c__DisplayClass1_0__FromTreasureDevice_b__1__, v51, v52, v53);
    sub_B5D5C4(&AssumedEffectExtractLogic___c__DisplayClass1_0_TypeInfo, v54, v55, v56);
    sub_B5D5C4(&AssumedEffectExtractLogic___c_TypeInfo, v57, v58, v59);
    byte_42EBC83 = 1;
  }
  v60 = sub_B5D694(AssumedEffectExtractLogic___c__DisplayClass1_0_TypeInfo);
  AssumedEffectExtractLogic___c__DisplayClass1_0___ctor((AssumedEffectExtractLogic___c__DisplayClass1_0_o *)v60, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !v60 )
    goto LABEL_26;
  *(_QWORD *)(v60 + 16) = Master_WarQuestSelectionMaster;
  sub_B5D560((BattleServantConfConponent_o *)(v60 + 16), Master_WarQuestSelectionMaster, v63, v64, v65, v66, v67, v68);
  v69 = AssumedEffectExtractLogic___c_TypeInfo;
  if ( (BYTE3(AssumedEffectExtractLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
    v69 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  static_fields = v69->static_fields;
  _9__1_0 = static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v69->vtable._0_Equals.methodPtr) & 4) != 0 && !v69->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v69);
      static_fields = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    }
    v72 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_SimpleTreasureDeviceData__bool__o *)sub_B5D694(System_Func_SimpleTreasureDeviceData__bool__TypeInfo);
    System_Func_SimpleTreasureDeviceData__bool____ctor(
      _9__1_0,
      v72,
      Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_0__,
      (const MethodInfo_2C33CBC *)Method_System_Func_SimpleTreasureDeviceData__bool___ctor__);
    v73 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    v73->__9__1_0 = _9__1_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v73->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v74,
      v75,
      v76,
      v77,
      v78,
      v79);
  }
  v80 = System_Linq_Enumerable__Where_SimpleTreasureDeviceData_(
          (System_Collections_Generic_IEnumerable_TSource__o *)tdDataEnumerable,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_1CBC438 *)Method_System_Linq_Enumerable_Where_SimpleTreasureDeviceData___);
  v81 = (System_Func_SimpleTreasureDeviceData__TreasureDvcEntity__o *)sub_B5D694(System_Func_SimpleTreasureDeviceData__TreasureDvcEntity__TypeInfo);
  System_Func_SimpleTreasureDeviceData__TreasureDvcEntity____ctor(
    v81,
    (Il2CppObject *)v60,
    Method_AssumedEffectExtractLogic___c__DisplayClass1_0__FromTreasureDevice_b__1__,
    (const MethodInfo_2C34928 *)Method_System_Func_SimpleTreasureDeviceData__TreasureDvcEntity___ctor__);
  v82 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_SimpleTreasureDeviceData__TreasureDvcEntity_(
                                                         v80,
                                                         (System_Func_TSource__TResult__o *)v81,
                                                         (const MethodInfo_1CB3FFC *)Method_System_Linq_Enumerable_Select_SimpleTreasureDeviceData__TreasureDvcEntity___);
  v83 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          v82,
          (const MethodInfo_1AD70CC *)Method_BasicHelper_ExcludeNull_TreasureDvcEntity___);
  v84 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v83,
          (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_TreasureDvcEntity___);
  v85 = AssumedEffectExtractLogic___c_TypeInfo;
  v86 = (System_Collections_Generic_IEnumerable_TSource__o *)v84;
  if ( (BYTE3(AssumedEffectExtractLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
    v85 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  v87 = v85->static_fields;
  _9__1_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v87->__9__1_2;
  if ( !_9__1_2 )
  {
    if ( (BYTE3(v85->vtable._0_Equals.methodPtr) & 4) != 0 && !v85->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v85);
      v87 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    }
    v89 = (Il2CppObject *)v87->__9;
    _9__1_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_TreasureDvcEntity__IEnumerable_int___TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__1_2,
      v89,
      Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_2__,
      (const MethodInfo_2C3041C *)Method_System_Func_TreasureDvcEntity__IEnumerable_int____ctor__);
    v90 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    v90->__9__1_2 = (struct System_Func_TreasureDvcEntity__IEnumerable_int___o *)_9__1_2;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v90->__9__1_2,
      (System_Int32_array **)_9__1_2,
      v91,
      v92,
      v93,
      v94,
      v95,
      v96);
  }
  Master_WarQuestSelectionMaster = (System_Int32_array **)System_Linq_Enumerable__SelectMany_ServantPhotoEntity_FaceData__int_(
                                                            v86,
                                                            (System_Func_TSource__IEnumerable_TResult___o *)_9__1_2,
                                                            (const MethodInfo_1CB4938 *)Method_System_Linq_Enumerable_SelectMany_TreasureDvcEntity__int___);
  if ( !toUpdate
    || (v62 = (System_Collections_Generic_IEnumerable_T__o *)Master_WarQuestSelectionMaster,
        (Master_WarQuestSelectionMaster = (System_Int32_array **)toUpdate->fields.EffectIdHashSet) == 0LL) )
  {
LABEL_26:
    sub_B5D69C(Master_WarQuestSelectionMaster, v62);
  }
  System_Collections_Generic_HashSet_int___UnionWith(
    (System_Collections_Generic_HashSet_int__o *)Master_WarQuestSelectionMaster,
    v62,
    (const MethodInfo_2500678 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
}


void __fastcall AssumedEffectExtractLogic___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E752E & 1) == 0 )
  {
    sub_B5D5C4(&AssumedEffectExtractLogic___c_TypeInfo, v1, v2, v3);
    byte_42E752E = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(AssumedEffectExtractLogic___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)AssumedEffectExtractLogic___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
  __int64 v3; // x3
  int32_t id; // w19
  struct SkillMaster_o *skillMaster; // x0

  id = x.fields.id;
  if ( (byte_42E752F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, x.fields.id, (_DWORD)method, v3);
    byte_42E752F = 1;
  }
  skillMaster = this->fields.skillMaster;
  if ( !skillMaster )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B5D69C)(0LL, x);
  return (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)skillMaster,
                            id,
                            (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
  __int64 v3; // x3
  int32_t id; // w19
  struct TreasureDvcMaster_o *tdMaster; // x0

  id = x.fields.id;
  if ( (byte_42E7530 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__,
      x.fields.id,
      (_DWORD)method,
      v3);
    byte_42E7530 = 1;
  }
  tdMaster = this->fields.tdMaster;
  if ( !tdMaster )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B5D69C)(0LL, x);
  return (TreasureDvcEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)tdMaster,
                                  id,
                                  (const MethodInfo_23FAE10 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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
  __int64 v3; // x3
  AssumedEffectExtractLogic___c__DisplayClass2_0_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *servantMaster; // x20
  __int64 v10; // x19
  __int64 v11; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  v5 = this;
  if ( (byte_42E7531 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, (_DWORD)x, (_DWORD)method, v3);
    this = (AssumedEffectExtractLogic___c__DisplayClass2_0_o *)sub_B5D5C4(
                                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                 v6,
                                                                 v7,
                                                                 v8);
    byte_42E7531 = 1;
  }
  if ( !x )
    goto LABEL_9;
  servantMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)v5->fields.servantMaster;
  v11 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v11;
  *(_QWORD *)&v13.fields.fakeValue = v10;
  this = (AssumedEffectExtractLogic___c__DisplayClass2_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                               v13,
                                                               0LL);
  if ( !servantMaster )
LABEL_9:
    sub_B5D69C(this, x);
  return (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              servantMaster,
                              (int32_t)this,
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
}