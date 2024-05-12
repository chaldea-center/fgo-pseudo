void __fastcall AssumedEffectExtractLogic__FromEnemyScript(
        BattleInfoData_o *battleInfo,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_BattleDeckServantData__o *v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_BattleDeckServantData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleDeckServantData__o *v8; // x19
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v12; // x1
  __int64 v13; // x19
  __int64 v14; // x8
  unsigned __int64 v15; // x10
  int *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x8
  unsigned __int64 v19; // x10
  int *v20; // x11
  __int64 v21; // x0
  BattleDeckServantData_o *v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_HashSet_int__o *EffectIdHashSet; // x21
  System_Collections_Generic_IEnumerable_T__o *AssumedEffectId; // x0
  __int64 v26; // x8
  unsigned __int64 v27; // x10
  int *v28; // x11
  __int64 v29; // x0

  if ( (byte_438AA6D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    byte_438AA6D = 1;
  }
  if ( battleInfo )
  {
    v5 = BattleInfoData__AllDeckServantEnumerable(battleInfo, 0LL);
    if ( !v5 )
      sub_B7769C(0LL, v6);
    klass = v5->klass;
    v8 = v5;
    if ( *(_WORD *)&v5->klass->_2.bitflags1 )
    {
      v9 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleDeckServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo )
      {
        ++v9;
        p_offset += 4;
        if ( v9 >= *(unsigned __int16 *)&v5->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B0F4C0(v5, System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, 0LL);
    }
    v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleDeckServantData__o *, _QWORD))p_method)(
            v8,
            *(_QWORD *)(p_method + 8));
    if ( !v13 )
      sub_B7769C(0LL, v12);
    while ( 1 )
    {
      v14 = *(_QWORD *)v13;
      if ( *(_WORD *)(*(_QWORD *)v13 + 298LL) )
      {
        v15 = 0LL;
        v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v16 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v15;
          v16 += 4;
          if ( v15 >= *(unsigned __int16 *)(*(_QWORD *)v13 + 298LL) )
            goto LABEL_16;
        }
        v17 = v14 + 16LL * *v16 + 312;
      }
      else
      {
LABEL_16:
        v17 = sub_B0F4C0(v13, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v17)(v13, *(_QWORD *)(v17 + 8)) & 1) == 0 )
        break;
      v18 = *(_QWORD *)v13;
      if ( *(_WORD *)(*(_QWORD *)v13 + 298LL) )
      {
        v19 = 0LL;
        v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BattleDeckServantData__c **)v20 - 1) != System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo )
        {
          ++v19;
          v20 += 4;
          if ( v19 >= *(unsigned __int16 *)(*(_QWORD *)v13 + 298LL) )
            goto LABEL_23;
        }
        v21 = v18 + 16LL * *v20 + 312;
      }
      else
      {
LABEL_23:
        v21 = sub_B0F4C0(v13, System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, 0LL);
      }
      v22 = (BattleDeckServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v13, *(_QWORD *)(v21 + 8));
      if ( !toUpdate )
        sub_B7769C(v22, v23);
      if ( !v22 )
        sub_B7769C(0LL, v23);
      EffectIdHashSet = toUpdate->fields.EffectIdHashSet;
      AssumedEffectId = (System_Collections_Generic_IEnumerable_T__o *)BattleDeckServantData__GetAssumedEffectId(
                                                                         v22,
                                                                         0LL);
      if ( !EffectIdHashSet )
        sub_B7769C(AssumedEffectId, AssumedEffectId);
      System_Collections_Generic_HashSet_int___UnionWith(
        EffectIdHashSet,
        AssumedEffectId,
        (const MethodInfo_2EDCC84 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    v26 = *(_QWORD *)v13;
    if ( *(_WORD *)(*(_QWORD *)v13 + 298LL) )
    {
      v27 = 0LL;
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
      {
        ++v27;
        v28 += 4;
        if ( v27 >= *(unsigned __int16 *)(*(_QWORD *)v13 + 298LL) )
          goto LABEL_33;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_33:
      v29 = sub_B0F4C0(v13, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v29)(v13, *(_QWORD *)(v29 + 8));
  }
}


void __fastcall AssumedEffectExtractLogic__FromItem(
        int32_t id,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w21
  int32_t v8; // w20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438AA6E & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B775C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438AA6E = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_17;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          id,
          (const MethodInfo_21FB8F0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    return;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_17;
  Instance = (DataManager_o *)ItemEntity__GetBattleAppearEffect((ItemEntity_o *)entity, 0LL);
  if ( !entity )
    goto LABEL_17;
  v7 = (int)Instance;
  Instance = (DataManager_o *)ItemEntity__GetBattleGetEffect((ItemEntity_o *)entity, 0LL);
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
                                  (const MethodInfo_2EDCC60 *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  if ( v8 < 1 )
    return;
  if ( !toUpdate || (Instance = (DataManager_o *)toUpdate->fields.EffectIdHashSet) == 0LL )
LABEL_17:
    sub_B7769C(Instance, v6);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)Instance,
    v8,
    (const MethodInfo_2EDCC60 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall AssumedEffectExtractLogic__FromQuestPhase(
        QuestPhaseEntity_o *questPhaseEntity,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  QuestPhaseEntity_o *v4; // x19
  System_Collections_Generic_HashSet_int__o *EffectIdHashSet; // x21
  System_Collections_Generic_HashSet_int__o *v6; // x21
  System_Collections_Generic_HashSet_int__o *cameraIdHashSet; // x20
  _QWORD **v8; // x23
  __int64 v9; // x21
  __int16 v10; // w8
  __int64 v11; // x21
  __int64 v12; // x21
  __int64 v13; // x21

  v4 = questPhaseEntity;
  if ( (byte_438AA6C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_Empty_int___);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__Add__);
    questPhaseEntity = (QuestPhaseEntity_o *)sub_B775C4(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    byte_438AA6C = 1;
  }
  if ( v4 )
  {
    if ( !toUpdate )
      goto LABEL_21;
    EffectIdHashSet = toUpdate->fields.EffectIdHashSet;
    questPhaseEntity = (QuestPhaseEntity_o *)QuestPhaseEntity__GetAssumedEffectId(v4, 0LL);
    if ( !EffectIdHashSet )
      goto LABEL_21;
    System_Collections_Generic_HashSet_int___UnionWith(
      EffectIdHashSet,
      (System_Collections_Generic_IEnumerable_T__o *)questPhaseEntity,
      (const MethodInfo_2EDCC84 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    v6 = toUpdate->fields.EffectIdHashSet;
    questPhaseEntity = (QuestPhaseEntity_o *)QuestPhaseEntity__getSpecialShadowEffectId(v4, 0LL);
    if ( !v6 )
      goto LABEL_21;
    System_Collections_Generic_HashSet_int___Add(
      v6,
      (int32_t)questPhaseEntity,
      (const MethodInfo_2EDCC60 *)Method_System_Collections_Generic_HashSet_int__Add__);
    cameraIdHashSet = toUpdate->fields.cameraIdHashSet;
    v8 = (_QWORD **)Method_System_Array_Empty_int___;
    v9 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
    v10 = *(_WORD *)(v9 + 306);
    if ( (v10 & 1) == 0 )
    {
      sub_B0F2C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
      v10 = *(_WORD *)(v9 + 306);
    }
    if ( (v10 & 0x400) != 0 )
    {
      v11 = *v8[6];
      if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
        sub_B0F2C4(*v8[6]);
      if ( !*(_DWORD *)(v11 + 224) )
      {
        v12 = *v8[6];
        if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
          sub_B0F2C4(*v8[6]);
        j_il2cpp_runtime_class_init_0(v12);
      }
    }
    v13 = *v8[6];
    if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
      sub_B0F2C4(*v8[6]);
    questPhaseEntity = (QuestPhaseEntity_o *)QuestPhaseEntity__GetAddUniqueCameraIds(
                                               v4,
                                               **(System_Int32_array ***)(v13 + 184),
                                               0LL);
    if ( !cameraIdHashSet )
LABEL_21:
      sub_B7769C(questPhaseEntity, toUpdate);
    System_Collections_Generic_HashSet_int___UnionWith(
      cameraIdHashSet,
      (System_Collections_Generic_IEnumerable_T__o *)questPhaseEntity,
      (const MethodInfo_2EDCC84 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
}


void __fastcall AssumedEffectExtractLogic__FromServant(
        BattleUserServantData_array *servants,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_Collections_Generic_IEnumerable_T__o *v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v14; // x22
  System_Collections_Generic_IEnumerable_T__o *v15; // x0
  System_Collections_Generic_IEnumerable_T__o *v16; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x20
  AssumedEffectExtractLogic___c_c *v18; // x8
  struct AssumedEffectExtractLogic___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__2_1; // x21
  Il2CppObject *v21; // x22
  struct AssumedEffectExtractLogic___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_438AA6A & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_ExcludeNull_ServantEntity___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_SelectMany_ServantEntity__int___);
    sub_B775C4(&Method_System_Linq_Enumerable_Select_BattleUserServantData__ServantEntity___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_ServantEntity___);
    sub_B775C4(&Method_System_Func_BattleUserServantData__ServantEntity___ctor__);
    sub_B775C4(&Method_System_Func_ServantEntity__IEnumerable_int____ctor__);
    sub_B775C4(&System_Func_ServantEntity__IEnumerable_int___TypeInfo);
    sub_B775C4(&System_Func_BattleUserServantData__ServantEntity__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_B775C4(&Method_AssumedEffectExtractLogic___c__FromServant_b__2_1__);
    sub_B775C4(&Method_AssumedEffectExtractLogic___c__DisplayClass2_0__FromServant_b__0__);
    sub_B775C4(&AssumedEffectExtractLogic___c__DisplayClass2_0_TypeInfo);
    sub_B775C4(&AssumedEffectExtractLogic___c_TypeInfo);
    byte_438AA6A = 1;
  }
  v5 = sub_B77694(AssumedEffectExtractLogic___c__DisplayClass2_0_TypeInfo);
  AssumedEffectExtractLogic___c__DisplayClass2_0___ctor((AssumedEffectExtractLogic___c__DisplayClass2_0_o *)v5, 0LL);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)servants, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !v5 )
      goto LABEL_19;
    *(_QWORD *)(v5 + 16) = Master_WarQuestSelectionMaster;
    sub_B77560((BattleServantConfConponent_o *)(v5 + 16), Master_WarQuestSelectionMaster, v8, v9, v10, v11, v12, v13);
    v14 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B77694(System_Func_BattleUserServantData__ServantEntity__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      v14,
      (Il2CppObject *)v5,
      Method_AssumedEffectExtractLogic___c__DisplayClass2_0__FromServant_b__0__,
      (const MethodInfo_29EAA10 *)Method_System_Func_BattleUserServantData__ServantEntity___ctor__);
    v15 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)servants,
                                                           (System_Func_TSource__TResult__o *)v14,
                                                           (const MethodInfo_1D39068 *)Method_System_Linq_Enumerable_Select_BattleUserServantData__ServantEntity___);
    v16 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
            v15,
            (const MethodInfo_1C664DC *)Method_BasicHelper_ExcludeNull_ServantEntity___);
    v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v16,
                                                                 (const MethodInfo_1D3D5E4 *)Method_System_Linq_Enumerable_ToArray_ServantEntity___);
    v18 = AssumedEffectExtractLogic___c_TypeInfo;
    if ( (BYTE3(AssumedEffectExtractLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
      v18 = AssumedEffectExtractLogic___c_TypeInfo;
    }
    static_fields = v18->static_fields;
    _9__2_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__2_1;
    if ( !_9__2_1 )
    {
      if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        static_fields = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
      }
      v21 = (Il2CppObject *)static_fields->__9;
      _9__2_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B77694(System_Func_ServantEntity__IEnumerable_int___TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__2_1,
        v21,
        Method_AssumedEffectExtractLogic___c__FromServant_b__2_1__,
        (const MethodInfo_29EAA10 *)Method_System_Func_ServantEntity__IEnumerable_int____ctor__);
      v22 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
      v22->__9__2_1 = (struct System_Func_ServantEntity__IEnumerable_int___o *)_9__2_1;
      sub_B77560(
        (BattleServantConfConponent_o *)&v22->__9__2_1,
        (System_Int32_array **)_9__2_1,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
    }
    Master_WarQuestSelectionMaster = (System_Int32_array **)System_Linq_Enumerable__SelectMany_ServantPhotoEntity_FaceData__int_(
                                                              v17,
                                                              (System_Func_TSource__IEnumerable_TResult___o *)_9__2_1,
                                                              (const MethodInfo_1D3A5DC *)Method_System_Linq_Enumerable_SelectMany_ServantEntity__int___);
    if ( !toUpdate
      || (v7 = (System_Collections_Generic_IEnumerable_T__o *)Master_WarQuestSelectionMaster,
          (Master_WarQuestSelectionMaster = (System_Int32_array **)toUpdate->fields.EffectIdHashSet) == 0LL) )
    {
LABEL_19:
      sub_B7769C(Master_WarQuestSelectionMaster, v7);
    }
    System_Collections_Generic_HashSet_int___UnionWith(
      (System_Collections_Generic_HashSet_int__o *)Master_WarQuestSelectionMaster,
      v7,
      (const MethodInfo_2EDCC84 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
}


void __fastcall AssumedEffectExtractLogic__FromSkill(
        System_Collections_Generic_IEnumerable_SimpleSkillData__o *skillDataEnumerable,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_Collections_Generic_IEnumerable_T__o *v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  AssumedEffectExtractLogic___c_c *v14; // x0
  struct AssumedEffectExtractLogic___c_StaticFields *static_fields; // x8
  System_Func_SimpleSkillData__bool__o *_9__0_0; // x22
  Il2CppObject *v17; // x23
  struct AssumedEffectExtractLogic___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x20
  System_Func_SimpleSkillData__SkillEntity__o *v26; // x22
  System_Collections_Generic_IEnumerable_T__o *v27; // x0
  System_Collections_Generic_IEnumerable_T__o *v28; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v29; // x0
  AssumedEffectExtractLogic___c_c *v30; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x20
  struct AssumedEffectExtractLogic___c_StaticFields *v32; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__0_2; // x21
  Il2CppObject *v34; // x22
  struct AssumedEffectExtractLogic___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7

  if ( (byte_438AA68 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_ExcludeNull_SkillEntity___);
    sub_B775C4(&Method_DataManager_GetMaster_SkillMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_SelectMany_SkillEntity__int___);
    sub_B775C4(&Method_System_Linq_Enumerable_Select_SimpleSkillData__SkillEntity___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_SkillEntity___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_SimpleSkillData___);
    sub_B775C4(&Method_System_Func_SkillEntity__IEnumerable_int____ctor__);
    sub_B775C4(&Method_System_Func_SimpleSkillData__SkillEntity___ctor__);
    sub_B775C4(&Method_System_Func_SimpleSkillData__bool___ctor__);
    sub_B775C4(&System_Func_SkillEntity__IEnumerable_int___TypeInfo);
    sub_B775C4(&System_Func_SimpleSkillData__bool__TypeInfo);
    sub_B775C4(&System_Func_SimpleSkillData__SkillEntity__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_B775C4(&Method_AssumedEffectExtractLogic___c__FromSkill_b__0_0__);
    sub_B775C4(&Method_AssumedEffectExtractLogic___c__FromSkill_b__0_2__);
    sub_B775C4(&Method_AssumedEffectExtractLogic___c__DisplayClass0_0__FromSkill_b__1__);
    sub_B775C4(&AssumedEffectExtractLogic___c__DisplayClass0_0_TypeInfo);
    sub_B775C4(&AssumedEffectExtractLogic___c_TypeInfo);
    byte_438AA68 = 1;
  }
  v5 = sub_B77694(AssumedEffectExtractLogic___c__DisplayClass0_0_TypeInfo);
  AssumedEffectExtractLogic___c__DisplayClass0_0___ctor((AssumedEffectExtractLogic___c__DisplayClass0_0_o *)v5, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !v5 )
    goto LABEL_26;
  *(_QWORD *)(v5 + 16) = Master_WarQuestSelectionMaster;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), Master_WarQuestSelectionMaster, v8, v9, v10, v11, v12, v13);
  v14 = AssumedEffectExtractLogic___c_TypeInfo;
  if ( (BYTE3(AssumedEffectExtractLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
    v14 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__0_0 = static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_SimpleSkillData__bool__o *)sub_B77694(System_Func_SimpleSkillData__bool__TypeInfo);
    System_Func_SimpleSkillData__bool____ctor(
      _9__0_0,
      v17,
      Method_AssumedEffectExtractLogic___c__FromSkill_b__0_0__,
      (const MethodInfo_29ECD1C *)Method_System_Func_SimpleSkillData__bool___ctor__);
    v18 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    v18->__9__0_0 = _9__0_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v18->__9__0_0,
      (System_Int32_array **)_9__0_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  v25 = System_Linq_Enumerable__Where_SimpleSkillData_(
          (System_Collections_Generic_IEnumerable_TSource__o *)skillDataEnumerable,
          (System_Func_TSource__bool__o *)_9__0_0,
          (const MethodInfo_1D41F28 *)Method_System_Linq_Enumerable_Where_SimpleSkillData___);
  v26 = (System_Func_SimpleSkillData__SkillEntity__o *)sub_B77694(System_Func_SimpleSkillData__SkillEntity__TypeInfo);
  System_Func_SimpleSkillData__SkillEntity____ctor(
    v26,
    (Il2CppObject *)v5,
    Method_AssumedEffectExtractLogic___c__DisplayClass0_0__FromSkill_b__1__,
    (const MethodInfo_29ED988 *)Method_System_Func_SimpleSkillData__SkillEntity___ctor__);
  v27 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_SimpleSkillData__SkillEntity_(
                                                         v25,
                                                         (System_Func_TSource__TResult__o *)v26,
                                                         (const MethodInfo_1D398D4 *)Method_System_Linq_Enumerable_Select_SimpleSkillData__SkillEntity___);
  v28 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          v27,
          (const MethodInfo_1C664DC *)Method_BasicHelper_ExcludeNull_SkillEntity___);
  v29 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v28,
          (const MethodInfo_1D3D5E4 *)Method_System_Linq_Enumerable_ToArray_SkillEntity___);
  v30 = AssumedEffectExtractLogic___c_TypeInfo;
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)v29;
  if ( (BYTE3(AssumedEffectExtractLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
    v30 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  v32 = v30->static_fields;
  _9__0_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v32->__9__0_2;
  if ( !_9__0_2 )
  {
    if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v32 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)v32->__9;
    _9__0_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B77694(System_Func_SkillEntity__IEnumerable_int___TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__0_2,
      v34,
      Method_AssumedEffectExtractLogic___c__FromSkill_b__0_2__,
      (const MethodInfo_29EAA10 *)Method_System_Func_SkillEntity__IEnumerable_int____ctor__);
    v35 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    v35->__9__0_2 = (struct System_Func_SkillEntity__IEnumerable_int___o *)_9__0_2;
    sub_B77560(
      (BattleServantConfConponent_o *)&v35->__9__0_2,
      (System_Int32_array **)_9__0_2,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  Master_WarQuestSelectionMaster = (System_Int32_array **)System_Linq_Enumerable__SelectMany_ServantPhotoEntity_FaceData__int_(
                                                            v31,
                                                            (System_Func_TSource__IEnumerable_TResult___o *)_9__0_2,
                                                            (const MethodInfo_1D3A5DC *)Method_System_Linq_Enumerable_SelectMany_SkillEntity__int___);
  if ( !toUpdate
    || (v7 = (System_Collections_Generic_IEnumerable_T__o *)Master_WarQuestSelectionMaster,
        (Master_WarQuestSelectionMaster = (System_Int32_array **)toUpdate->fields.EffectIdHashSet) == 0LL) )
  {
LABEL_26:
    sub_B7769C(Master_WarQuestSelectionMaster, v7);
  }
  System_Collections_Generic_HashSet_int___UnionWith(
    (System_Collections_Generic_HashSet_int__o *)Master_WarQuestSelectionMaster,
    v7,
    (const MethodInfo_2EDCC84 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
}


void __fastcall AssumedEffectExtractLogic__FromStage(
        StageEntity_o *stageEntity,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  StageEntity_o *v4; // x19
  System_Collections_Generic_HashSet_int__o *EffectIdHashSet; // x21
  System_Collections_Generic_HashSet_string__o *AudioAssetNameHashSet; // x21
  System_Collections_Generic_HashSet_int__o *cameraIdHashSet; // x20
  _QWORD **v8; // x23
  __int64 v9; // x21
  __int16 v10; // w8
  __int64 v11; // x21
  __int64 v12; // x21
  __int64 v13; // x21

  v4 = stageEntity;
  if ( (byte_438AA6B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_Empty_int___);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    stageEntity = (StageEntity_o *)sub_B775C4(&Method_System_Collections_Generic_HashSet_string__UnionWith__);
    byte_438AA6B = 1;
  }
  if ( v4 )
  {
    if ( !toUpdate )
      goto LABEL_21;
    EffectIdHashSet = toUpdate->fields.EffectIdHashSet;
    stageEntity = (StageEntity_o *)StageEntity__GetAssumedEffectId(v4, 0LL);
    if ( !EffectIdHashSet )
      goto LABEL_21;
    System_Collections_Generic_HashSet_int___UnionWith(
      EffectIdHashSet,
      (System_Collections_Generic_IEnumerable_T__o *)stageEntity,
      (const MethodInfo_2EDCC84 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    AudioAssetNameHashSet = toUpdate->fields.AudioAssetNameHashSet;
    stageEntity = (StageEntity_o *)StageEntity__GetAssumedVoiceAssetNames(v4, 0LL);
    if ( !AudioAssetNameHashSet )
      goto LABEL_21;
    System_Collections_Generic_HashSet_string___UnionWith(
      AudioAssetNameHashSet,
      (System_Collections_Generic_IEnumerable_T__o *)stageEntity,
      (const MethodInfo_2EE3640 *)Method_System_Collections_Generic_HashSet_string__UnionWith__);
    cameraIdHashSet = toUpdate->fields.cameraIdHashSet;
    v8 = (_QWORD **)Method_System_Array_Empty_int___;
    v9 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
    v10 = *(_WORD *)(v9 + 306);
    if ( (v10 & 1) == 0 )
    {
      sub_B0F2C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
      v10 = *(_WORD *)(v9 + 306);
    }
    if ( (v10 & 0x400) != 0 )
    {
      v11 = *v8[6];
      if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
        sub_B0F2C4(*v8[6]);
      if ( !*(_DWORD *)(v11 + 224) )
      {
        v12 = *v8[6];
        if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
          sub_B0F2C4(*v8[6]);
        j_il2cpp_runtime_class_init_0(v12);
      }
    }
    v13 = *v8[6];
    if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
      sub_B0F2C4(*v8[6]);
    stageEntity = (StageEntity_o *)StageEntity__GetAddUniqueCameraIds(v4, **(System_Int32_array ***)(v13 + 184), 0LL);
    if ( !cameraIdHashSet )
LABEL_21:
      sub_B7769C(stageEntity, toUpdate);
    System_Collections_Generic_HashSet_int___UnionWith(
      cameraIdHashSet,
      (System_Collections_Generic_IEnumerable_T__o *)stageEntity,
      (const MethodInfo_2EDCC84 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
}


void __fastcall AssumedEffectExtractLogic__FromTreasureDevice(
        System_Collections_Generic_IEnumerable_SimpleTreasureDeviceData__o *tdDataEnumerable,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_Collections_Generic_IEnumerable_T__o *v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  AssumedEffectExtractLogic___c_c *v14; // x0
  struct AssumedEffectExtractLogic___c_StaticFields *static_fields; // x8
  System_Func_SimpleTreasureDeviceData__bool__o *_9__1_0; // x22
  Il2CppObject *v17; // x23
  struct AssumedEffectExtractLogic___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x20
  System_Func_SimpleTreasureDeviceData__TreasureDvcEntity__o *v26; // x22
  System_Collections_Generic_IEnumerable_T__o *v27; // x0
  System_Collections_Generic_IEnumerable_T__o *v28; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v29; // x0
  AssumedEffectExtractLogic___c_c *v30; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x20
  struct AssumedEffectExtractLogic___c_StaticFields *v32; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__1_2; // x21
  Il2CppObject *v34; // x22
  struct AssumedEffectExtractLogic___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7

  if ( (byte_438AA69 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_ExcludeNull_TreasureDvcEntity___);
    sub_B775C4(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_SelectMany_TreasureDvcEntity__int___);
    sub_B775C4(&Method_System_Linq_Enumerable_Select_SimpleTreasureDeviceData__TreasureDvcEntity___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_TreasureDvcEntity___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_SimpleTreasureDeviceData___);
    sub_B775C4(&Method_System_Func_SimpleTreasureDeviceData__TreasureDvcEntity___ctor__);
    sub_B775C4(&Method_System_Func_TreasureDvcEntity__IEnumerable_int____ctor__);
    sub_B775C4(&Method_System_Func_SimpleTreasureDeviceData__bool___ctor__);
    sub_B775C4(&System_Func_TreasureDvcEntity__IEnumerable_int___TypeInfo);
    sub_B775C4(&System_Func_SimpleTreasureDeviceData__bool__TypeInfo);
    sub_B775C4(&System_Func_SimpleTreasureDeviceData__TreasureDvcEntity__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_B775C4(&Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_0__);
    sub_B775C4(&Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_2__);
    sub_B775C4(&Method_AssumedEffectExtractLogic___c__DisplayClass1_0__FromTreasureDevice_b__1__);
    sub_B775C4(&AssumedEffectExtractLogic___c__DisplayClass1_0_TypeInfo);
    sub_B775C4(&AssumedEffectExtractLogic___c_TypeInfo);
    byte_438AA69 = 1;
  }
  v5 = sub_B77694(AssumedEffectExtractLogic___c__DisplayClass1_0_TypeInfo);
  AssumedEffectExtractLogic___c__DisplayClass1_0___ctor((AssumedEffectExtractLogic___c__DisplayClass1_0_o *)v5, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !v5 )
    goto LABEL_26;
  *(_QWORD *)(v5 + 16) = Master_WarQuestSelectionMaster;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), Master_WarQuestSelectionMaster, v8, v9, v10, v11, v12, v13);
  v14 = AssumedEffectExtractLogic___c_TypeInfo;
  if ( (BYTE3(AssumedEffectExtractLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
    v14 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__1_0 = static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_SimpleTreasureDeviceData__bool__o *)sub_B77694(System_Func_SimpleTreasureDeviceData__bool__TypeInfo);
    System_Func_SimpleTreasureDeviceData__bool____ctor(
      _9__1_0,
      v17,
      Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_0__,
      (const MethodInfo_29EE2B0 *)Method_System_Func_SimpleTreasureDeviceData__bool___ctor__);
    v18 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    v18->__9__1_0 = _9__1_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v18->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  v25 = System_Linq_Enumerable__Where_SimpleTreasureDeviceData_(
          (System_Collections_Generic_IEnumerable_TSource__o *)tdDataEnumerable,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_1D421BC *)Method_System_Linq_Enumerable_Where_SimpleTreasureDeviceData___);
  v26 = (System_Func_SimpleTreasureDeviceData__TreasureDvcEntity__o *)sub_B77694(System_Func_SimpleTreasureDeviceData__TreasureDvcEntity__TypeInfo);
  System_Func_SimpleTreasureDeviceData__TreasureDvcEntity____ctor(
    v26,
    (Il2CppObject *)v5,
    Method_AssumedEffectExtractLogic___c__DisplayClass1_0__FromTreasureDevice_b__1__,
    (const MethodInfo_29EEF1C *)Method_System_Func_SimpleTreasureDeviceData__TreasureDvcEntity___ctor__);
  v27 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_SimpleTreasureDeviceData__TreasureDvcEntity_(
                                                         v25,
                                                         (System_Func_TSource__TResult__o *)v26,
                                                         (const MethodInfo_1D39B80 *)Method_System_Linq_Enumerable_Select_SimpleTreasureDeviceData__TreasureDvcEntity___);
  v28 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          v27,
          (const MethodInfo_1C664DC *)Method_BasicHelper_ExcludeNull_TreasureDvcEntity___);
  v29 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v28,
          (const MethodInfo_1D3D5E4 *)Method_System_Linq_Enumerable_ToArray_TreasureDvcEntity___);
  v30 = AssumedEffectExtractLogic___c_TypeInfo;
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)v29;
  if ( (BYTE3(AssumedEffectExtractLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
    v30 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  v32 = v30->static_fields;
  _9__1_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v32->__9__1_2;
  if ( !_9__1_2 )
  {
    if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v32 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)v32->__9;
    _9__1_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B77694(System_Func_TreasureDvcEntity__IEnumerable_int___TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__1_2,
      v34,
      Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_2__,
      (const MethodInfo_29EAA10 *)Method_System_Func_TreasureDvcEntity__IEnumerable_int____ctor__);
    v35 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    v35->__9__1_2 = (struct System_Func_TreasureDvcEntity__IEnumerable_int___o *)_9__1_2;
    sub_B77560(
      (BattleServantConfConponent_o *)&v35->__9__1_2,
      (System_Int32_array **)_9__1_2,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  Master_WarQuestSelectionMaster = (System_Int32_array **)System_Linq_Enumerable__SelectMany_ServantPhotoEntity_FaceData__int_(
                                                            v31,
                                                            (System_Func_TSource__IEnumerable_TResult___o *)_9__1_2,
                                                            (const MethodInfo_1D3A5DC *)Method_System_Linq_Enumerable_SelectMany_TreasureDvcEntity__int___);
  if ( !toUpdate
    || (v7 = (System_Collections_Generic_IEnumerable_T__o *)Master_WarQuestSelectionMaster,
        (Master_WarQuestSelectionMaster = (System_Int32_array **)toUpdate->fields.EffectIdHashSet) == 0LL) )
  {
LABEL_26:
    sub_B7769C(Master_WarQuestSelectionMaster, v7);
  }
  System_Collections_Generic_HashSet_int___UnionWith(
    (System_Collections_Generic_HashSet_int__o *)Master_WarQuestSelectionMaster,
    v7,
    (const MethodInfo_2EDCC84 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
}


void __fastcall AssumedEffectExtractLogic___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4389F4C & 1) == 0 )
  {
    sub_B775C4(&AssumedEffectExtractLogic___c_TypeInfo);
    byte_4389F4C = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(AssumedEffectExtractLogic___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)AssumedEffectExtractLogic___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B7769C(this, 0LL);
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
    sub_B7769C(this, 0LL);
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
    sub_B7769C(this, 0LL);
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
  if ( (byte_4389F4D & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    byte_4389F4D = 1;
  }
  skillMaster = this->fields.skillMaster;
  if ( !skillMaster )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B7769C)(0LL, x);
  return (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)skillMaster,
                            id,
                            (const MethodInfo_21FB894 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
  if ( (byte_4389F4E & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    byte_4389F4E = 1;
  }
  tdMaster = this->fields.tdMaster;
  if ( !tdMaster )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B7769C)(0LL, x);
  return (TreasureDvcEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)tdMaster,
                                  id,
                                  (const MethodInfo_21FB894 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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
  DataMasterBase_WarMaster__WarEntity__int__o *servantMaster; // x20
  __int64 v6; // x19
  __int64 v7; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v4 = this;
  if ( (byte_4389F4F & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this = (AssumedEffectExtractLogic___c__DisplayClass2_0_o *)sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4389F4F = 1;
  }
  if ( !x )
    goto LABEL_9;
  servantMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)v4->fields.servantMaster;
  v7 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  this = (AssumedEffectExtractLogic___c__DisplayClass2_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                               v9,
                                                               0LL);
  if ( !servantMaster )
LABEL_9:
    sub_B7769C(this, x);
  return (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              servantMaster,
                              (int32_t)this,
                              (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
}