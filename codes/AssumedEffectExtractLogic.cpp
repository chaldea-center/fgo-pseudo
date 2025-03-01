void __fastcall AssumedEffectExtractLogic__FromEnemyScript(
        BattleInfoData_o *battleInfo,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_IEnumerable_BattleDeckServantData__o *v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_BattleDeckServantData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleDeckServantData__o *v13; // x19
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v17; // x1
  __int64 v18; // x19
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  BattleDeckServantData_o *v27; // x0
  __int64 v28; // x1
  BattleDeckServantData_o *v29; // x21
  System_Collections_Generic_HashSet_int__o *EffectIdHashSet; // x22
  System_Collections_Generic_IEnumerable_T__o *AssumedEffectId; // x0
  EnemyScriptParam_OverwriteShadowData_array *OverwriteShadowDataArray; // x0
  __int64 v33; // x1
  EnemyScriptParam_OverwriteShadowData_array *v34; // x21
  int max_length; // w8
  int i; // w22
  EnemyScriptParam_OverwriteShadowData_o *v37; // x8
  System_Collections_Generic_HashSet_int__o *v38; // x0
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0

  if ( (byte_4BFFA33 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_HashSet_int__Add__, toUpdate);
    sub_1C2E12C(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v5);
    sub_1C2E12C(&System_IDisposable_TypeInfo, v6);
    sub_1C2E12C(&System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, v7);
    sub_1C2E12C(&System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, v8);
    sub_1C2E12C(&System_Collections_IEnumerator_TypeInfo, v9);
    byte_4BFFA33 = 1;
  }
  if ( battleInfo )
  {
    v10 = BattleInfoData__AllDeckServantEnumerable(battleInfo, 0LL);
    if ( !v10 )
      sub_1C2E388(0LL, v11);
    klass = v10->klass;
    v13 = v10;
    v14 = *(unsigned __int16 *)(&v10->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v10->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleDeckServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C8010C(v10, System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, 0LL);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleDeckServantData__o *, _QWORD))p_method)(
            v13,
            *(_QWORD *)(p_method + 8));
    if ( !v18 )
      sub_1C2E388(0LL, v17);
    while ( 1 )
    {
      v19 = *(_QWORD *)v18;
      v20 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
      {
        v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v21 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v20;
          v21 += 4;
          if ( !v20 )
            goto LABEL_16;
        }
        v22 = v19 + 16LL * *v21 + 312;
      }
      else
      {
LABEL_16:
        v22 = sub_1C8010C(v18, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v18, *(_QWORD *)(v22 + 8)) & 1) == 0 )
        break;
      v23 = *(_QWORD *)v18;
      v24 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
      {
        v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BattleDeckServantData__c **)v25 - 1) != System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo )
        {
          --v24;
          v25 += 4;
          if ( !v24 )
            goto LABEL_23;
        }
        v26 = v23 + 16LL * *v25 + 312;
      }
      else
      {
LABEL_23:
        v26 = sub_1C8010C(v18, System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, 0LL);
      }
      v27 = (BattleDeckServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v18, *(_QWORD *)(v26 + 8));
      if ( !toUpdate )
        sub_1C2E388(v27, v28);
      v29 = v27;
      if ( !v27 )
        sub_1C2E388(0LL, v28);
      EffectIdHashSet = toUpdate->fields.EffectIdHashSet;
      AssumedEffectId = (System_Collections_Generic_IEnumerable_T__o *)BattleDeckServantData__GetAssumedEffectId(
                                                                         v27,
                                                                         0LL);
      if ( !EffectIdHashSet )
        sub_1C2E388(AssumedEffectId, AssumedEffectId);
      System_Collections_Generic_HashSet_int___UnionWith(
        EffectIdHashSet,
        AssumedEffectId,
        (const MethodInfo_3522610 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
      OverwriteShadowDataArray = BattleDeckServantData__GetOverwriteShadowDataArray(v29, 0LL);
      v34 = OverwriteShadowDataArray;
      if ( !OverwriteShadowDataArray )
        sub_1C2E388(0LL, v33);
      max_length = OverwriteShadowDataArray->max_length;
      if ( max_length >= 1 )
      {
        for ( i = 0; i < max_length; ++i )
        {
          if ( i >= (unsigned int)max_length )
            sub_1C2E390(OverwriteShadowDataArray, v33);
          v37 = v34->m_Items[i];
          if ( !v37 )
            sub_1C2E388(OverwriteShadowDataArray, v33);
          v38 = toUpdate->fields.EffectIdHashSet;
          if ( !v38 )
            sub_1C2E388(0LL, v33);
          OverwriteShadowDataArray = (EnemyScriptParam_OverwriteShadowData_array *)System_Collections_Generic_HashSet_int___Add(
                                                                                     v38,
                                                                                     v37->fields.specialShadowEffectId,
                                                                                     (const MethodInfo_3522600 *)Method_System_Collections_Generic_HashSet_int__Add__);
          max_length = v34->max_length;
        }
      }
    }
    v39 = *(_QWORD *)v18;
    v40 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
    {
      v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_40;
      }
      v42 = v39 + 16LL * *v41 + 312;
    }
    else
    {
LABEL_40:
      v42 = sub_1C8010C(v18, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v42)(v18, *(_QWORD *)(v42 + 8));
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

  if ( (byte_4BFFA34 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_ItemMaster___, toUpdate);
    sub_1C2E12C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_HashSet_int__Add__, v6);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4BFFA34 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_17;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          id,
          (const MethodInfo_327B1CC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
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
                                  (const MethodInfo_3522600 *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  if ( v11 < 1 )
    return;
  if ( !toUpdate || (Instance = (DataManager_o *)toUpdate->fields.EffectIdHashSet) == 0LL )
LABEL_17:
    sub_1C2E388(Instance, v9);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)Instance,
    v11,
    (const MethodInfo_3522600 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
  System_Collections_Generic_HashSet_int__o *v9; // x21
  long double inited; // q0
  _QWORD *v11; // x21
  System_Collections_Generic_HashSet_int__o *cameraIdHashSet; // x20
  __int64 v13; // x8
  __int64 v14; // x0
  __int64 v15; // x0

  v4 = questPhaseEntity;
  if ( (byte_4BFFA32 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Array_Empty_int___, toUpdate);
    sub_1C2E12C(&Method_System_Collections_Generic_HashSet_int__Add__, v5);
    questPhaseEntity = (QuestPhaseEntity_o *)sub_1C2E12C(
                                               &Method_System_Collections_Generic_HashSet_int__UnionWith__,
                                               v6);
    byte_4BFFA32 = 1;
  }
  if ( v4 )
  {
    if ( !toUpdate )
      goto LABEL_19;
    EffectIdHashSet = toUpdate->fields.EffectIdHashSet;
    questPhaseEntity = (QuestPhaseEntity_o *)QuestPhaseEntity__GetAssumedEffectId(v4, 0LL);
    if ( !EffectIdHashSet )
      goto LABEL_19;
    System_Collections_Generic_HashSet_int___UnionWith(
      EffectIdHashSet,
      (System_Collections_Generic_IEnumerable_T__o *)questPhaseEntity,
      (const MethodInfo_3522610 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    v8 = toUpdate->fields.EffectIdHashSet;
    questPhaseEntity = (QuestPhaseEntity_o *)QuestPhaseEntity__getSpecialShadowEffectId(v4, 0LL);
    if ( !v8 )
      goto LABEL_19;
    System_Collections_Generic_HashSet_int___Add(
      v8,
      (int32_t)questPhaseEntity,
      (const MethodInfo_3522600 *)Method_System_Collections_Generic_HashSet_int__Add__);
    v9 = toUpdate->fields.EffectIdHashSet;
    questPhaseEntity = (QuestPhaseEntity_o *)QuestPhaseEntity__GetBattleSkillDropEffectIds(v4, 0LL);
    if ( !v9 )
      goto LABEL_19;
    System_Collections_Generic_HashSet_int___UnionWith(
      v9,
      (System_Collections_Generic_IEnumerable_T__o *)questPhaseEntity,
      (const MethodInfo_3522610 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    v11 = Method_System_Array_Empty_int___;
    cameraIdHashSet = toUpdate->fields.cameraIdHashSet;
    v13 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v13 )
    {
      sub_1C80064(Method_System_Array_Empty_int___);
      v13 = v11[7];
    }
    v14 = *(_QWORD *)(v13 + 16);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1C80008(inited);
    if ( !*(_DWORD *)(v14 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v14);
    v15 = *(_QWORD *)(v11[7] + 16LL);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1C80008(inited);
    questPhaseEntity = (QuestPhaseEntity_o *)QuestPhaseEntity__GetAddUniqueCameraIds(
                                               v4,
                                               **(System_Int32_array ***)(v15 + 184),
                                               0LL);
    if ( !cameraIdHashSet )
LABEL_19:
      sub_1C2E388(questPhaseEntity, toUpdate);
    System_Collections_Generic_HashSet_int___UnionWith(
      cameraIdHashSet,
      (System_Collections_Generic_IEnumerable_T__o *)questPhaseEntity,
      (const MethodInfo_3522610 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Func_object__object__o *v26; // x22
  System_Collections_Generic_IEnumerable_T__o *v27; // x0
  System_Collections_Generic_IEnumerable_T__o *v28; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x20
  AssumedEffectExtractLogic___c_c *v30; // x8
  System_Func_object__object__o *_9__2_1; // x21
  Il2CppObject *v32; // x22
  struct AssumedEffectExtractLogic___c_StaticFields *static_fields; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7

  if ( (byte_4BFFA30 & 1) == 0 )
  {
    sub_1C2E12C(&Method_BasicHelper_ExcludeNull_ServantEntity___, toUpdate);
    sub_1C2E12C(&Method_DataManager_GetMaster_ServantMaster___, v5);
    sub_1C2E12C(&DataManager_TypeInfo, v6);
    sub_1C2E12C(&Method_System_Linq_Enumerable_SelectMany_ServantEntity__int___, v7);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Select_BattleUserServantData__ServantEntity___, v8);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToArray_ServantEntity___, v9);
    sub_1C2E12C(&System_Func_BattleUserServantData__ServantEntity__TypeInfo, v10);
    sub_1C2E12C(&System_Func_ServantEntity__IEnumerable_int___TypeInfo, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v12);
    sub_1C2E12C(&Method_AssumedEffectExtractLogic___c__FromServant_b__2_1__, v13);
    sub_1C2E12C(&Method_AssumedEffectExtractLogic___c__DisplayClass2_0__FromServant_b__0__, v14);
    sub_1C2E12C(&AssumedEffectExtractLogic___c__DisplayClass2_0_TypeInfo, v15);
    sub_1C2E12C(&AssumedEffectExtractLogic___c_TypeInfo, v16);
    byte_4BFFA30 = 1;
  }
  v17 = sub_1C2E378(AssumedEffectExtractLogic___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)servants, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (System_Collections_Generic_HashSet_int__o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !v17 )
      goto LABEL_16;
    *(_QWORD *)(v17 + 16) = Master_object;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)Master_object, v20, v21, v22, v23, v24, v25);
    v26 = (System_Func_object__object__o *)sub_1C2E378(System_Func_BattleUserServantData__ServantEntity__TypeInfo);
    System_Func_object__object____ctor(
      v26,
      (Il2CppObject *)v17,
      Method_AssumedEffectExtractLogic___c__DisplayClass2_0__FromServant_b__0__,
      0LL);
    v27 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)servants,
                                                           (System_Func_TSource__TResult__o *)v26,
                                                           (const MethodInfo_3003B90 *)Method_System_Linq_Enumerable_Select_BattleUserServantData__ServantEntity___);
    v28 = BasicHelper__ExcludeNull_object_(
            v27,
            (const MethodInfo_2FBCB90 *)Method_BasicHelper_ExcludeNull_ServantEntity___);
    v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v28,
                                                                 (const MethodInfo_300BDBC *)Method_System_Linq_Enumerable_ToArray_ServantEntity___);
    v30 = AssumedEffectExtractLogic___c_TypeInfo;
    if ( !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
      v30 = AssumedEffectExtractLogic___c_TypeInfo;
    }
    _9__2_1 = (System_Func_object__object__o *)v30->static_fields->__9__2_1;
    if ( !_9__2_1 )
    {
      if ( !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30);
        v30 = AssumedEffectExtractLogic___c_TypeInfo;
      }
      v32 = (Il2CppObject *)v30->static_fields->__9;
      _9__2_1 = (System_Func_object__object__o *)sub_1C2E378(System_Func_ServantEntity__IEnumerable_int___TypeInfo);
      System_Func_object__object____ctor(_9__2_1, v32, Method_AssumedEffectExtractLogic___c__FromServant_b__2_1__, 0LL);
      static_fields = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
      static_fields->__9__2_1 = (struct System_Func_ServantEntity__IEnumerable_int___o *)_9__2_1;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&static_fields->__9__2_1,
        (int64_t)_9__2_1,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
    }
    Master_object = (System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                   v29,
                                                                   (System_Func_TSource__IEnumerable_TResult___o *)_9__2_1,
                                                                   (const MethodInfo_30060A4 *)Method_System_Linq_Enumerable_SelectMany_ServantEntity__int___);
    if ( !toUpdate
      || (v19 = (System_Collections_Generic_IEnumerable_T__o *)Master_object,
          (Master_object = toUpdate->fields.EffectIdHashSet) == 0LL) )
    {
LABEL_16:
      sub_1C2E388(Master_object, v19);
    }
    System_Collections_Generic_HashSet_int___UnionWith(
      Master_object,
      v19,
      (const MethodInfo_3522610 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  AssumedEffectExtractLogic___c_c *v29; // x0
  System_Func_SimpleSkillData__bool__o *_9__0_0; // x22
  Il2CppObject *v31; // x23
  struct AssumedEffectExtractLogic___c_StaticFields *static_fields; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x20
  System_Func_T__TResult__o *v40; // x22
  System_Collections_Generic_IEnumerable_T__o *v41; // x0
  System_Collections_Generic_IEnumerable_T__o *v42; // x0
  System_Object_array *v43; // x0
  AssumedEffectExtractLogic___c_c *v44; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x20
  System_Func_object__object__o *_9__0_2; // x21
  Il2CppObject *v47; // x22
  struct AssumedEffectExtractLogic___c_StaticFields *v48; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7

  if ( (byte_4BFFA2E & 1) == 0 )
  {
    sub_1C2E12C(&Method_BasicHelper_ExcludeNull_SkillEntity___, toUpdate);
    sub_1C2E12C(&Method_DataManager_GetMaster_SkillMaster___, v5);
    sub_1C2E12C(&DataManager_TypeInfo, v6);
    sub_1C2E12C(&Method_System_Linq_Enumerable_SelectMany_SkillEntity__int___, v7);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Select_SimpleSkillData__SkillEntity___, v8);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToArray_SkillEntity___, v9);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Where_SimpleSkillData___, v10);
    sub_1C2E12C(&System_Func_SimpleSkillData__SkillEntity__TypeInfo, v11);
    sub_1C2E12C(&System_Func_SimpleSkillData__bool__TypeInfo, v12);
    sub_1C2E12C(&System_Func_SkillEntity__IEnumerable_int___TypeInfo, v13);
    sub_1C2E12C(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v14);
    sub_1C2E12C(&Method_AssumedEffectExtractLogic___c__FromSkill_b__0_0__, v15);
    sub_1C2E12C(&Method_AssumedEffectExtractLogic___c__FromSkill_b__0_2__, v16);
    sub_1C2E12C(&Method_AssumedEffectExtractLogic___c__DisplayClass0_0__FromSkill_b__1__, v17);
    sub_1C2E12C(&AssumedEffectExtractLogic___c__DisplayClass0_0_TypeInfo, v18);
    sub_1C2E12C(&AssumedEffectExtractLogic___c_TypeInfo, v19);
    byte_4BFFA2E = 1;
  }
  v20 = sub_1C2E378(AssumedEffectExtractLogic___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Collections_Generic_HashSet_int__o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !v20 )
    goto LABEL_21;
  *(_QWORD *)(v20 + 16) = Master_object;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v20 + 16), (int64_t)Master_object, v23, v24, v25, v26, v27, v28);
  v29 = AssumedEffectExtractLogic___c_TypeInfo;
  if ( !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
    v29 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  _9__0_0 = v29->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v29 = AssumedEffectExtractLogic___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v29->static_fields->__9;
    _9__0_0 = (System_Func_SimpleSkillData__bool__o *)sub_1C2E378(System_Func_SimpleSkillData__bool__TypeInfo);
    System_Func_SimpleSkillData__bool____ctor(
      _9__0_0,
      v31,
      Method_AssumedEffectExtractLogic___c__FromSkill_b__0_0__,
      0LL);
    static_fields = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = _9__0_0;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)_9__0_0, v33, v34, v35, v36, v37, v38);
  }
  v39 = System_Linq_Enumerable__Where_SimpleSkillData_(
          (System_Collections_Generic_IEnumerable_TSource__o *)skillDataEnumerable,
          (System_Func_TSource__bool__o *)_9__0_0,
          (const MethodInfo_3011FA4 *)Method_System_Linq_Enumerable_Where_SimpleSkillData___);
  v40 = (System_Func_T__TResult__o *)sub_1C2E378(System_Func_SimpleSkillData__SkillEntity__TypeInfo);
  System_Func_SimpleSkillData__object____ctor(
    v40,
    (Il2CppObject *)v20,
    Method_AssumedEffectExtractLogic___c__DisplayClass0_0__FromSkill_b__1__,
    0LL);
  v41 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_SimpleSkillData__object_(
                                                         v39,
                                                         (System_Func_TSource__TResult__o *)v40,
                                                         (const MethodInfo_30044DC *)Method_System_Linq_Enumerable_Select_SimpleSkillData__SkillEntity___);
  v42 = BasicHelper__ExcludeNull_object_(v41, (const MethodInfo_2FBCB90 *)Method_BasicHelper_ExcludeNull_SkillEntity___);
  v43 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v42,
          (const MethodInfo_300BDBC *)Method_System_Linq_Enumerable_ToArray_SkillEntity___);
  v44 = AssumedEffectExtractLogic___c_TypeInfo;
  v45 = (System_Collections_Generic_IEnumerable_TSource__o *)v43;
  if ( !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
    v44 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  _9__0_2 = (System_Func_object__object__o *)v44->static_fields->__9__0_2;
  if ( !_9__0_2 )
  {
    if ( !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      v44 = AssumedEffectExtractLogic___c_TypeInfo;
    }
    v47 = (Il2CppObject *)v44->static_fields->__9;
    _9__0_2 = (System_Func_object__object__o *)sub_1C2E378(System_Func_SkillEntity__IEnumerable_int___TypeInfo);
    System_Func_object__object____ctor(_9__0_2, v47, Method_AssumedEffectExtractLogic___c__FromSkill_b__0_2__, 0LL);
    v48 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    v48->__9__0_2 = (struct System_Func_SkillEntity__IEnumerable_int___o *)_9__0_2;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v48->__9__0_2, (int64_t)_9__0_2, v49, v50, v51, v52, v53, v54);
  }
  Master_object = (System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                 v45,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__0_2,
                                                                 (const MethodInfo_30060A4 *)Method_System_Linq_Enumerable_SelectMany_SkillEntity__int___);
  if ( !toUpdate
    || (v22 = (System_Collections_Generic_IEnumerable_T__o *)Master_object,
        (Master_object = toUpdate->fields.EffectIdHashSet) == 0LL) )
  {
LABEL_21:
    sub_1C2E388(Master_object, v22);
  }
  System_Collections_Generic_HashSet_int___UnionWith(
    Master_object,
    v22,
    (const MethodInfo_3522610 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
}


void __fastcall AssumedEffectExtractLogic__FromStage(
        StageEntity_o *stageEntity,
        AssumedBattleAssetLoadManager_AnalyzedResultParam_o *toUpdate,
        const MethodInfo *method)
{
  StageEntity_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_HashSet_int__o *EffectIdHashSet; // x21
  System_Collections_Generic_HashSet_int__o *v9; // x21
  System_Collections_Generic_HashSet_int__o *v10; // x21
  System_Collections_Generic_HashSet_T__o *AudioAssetNameHashSet; // x21
  long double inited; // q0
  _QWORD *v13; // x21
  System_Collections_Generic_HashSet_int__o *cameraIdHashSet; // x20
  __int64 v15; // x8
  __int64 v16; // x0
  __int64 v17; // x0

  v4 = stageEntity;
  if ( (byte_4BFFA31 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Array_Empty_int___, toUpdate);
    sub_1C2E12C(&Method_System_Collections_Generic_HashSet_int__Add__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_HashSet_string__UnionWith__, v6);
    stageEntity = (StageEntity_o *)sub_1C2E12C(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v7);
    byte_4BFFA31 = 1;
  }
  if ( v4 )
  {
    if ( !toUpdate )
      goto LABEL_20;
    EffectIdHashSet = toUpdate->fields.EffectIdHashSet;
    stageEntity = (StageEntity_o *)StageEntity__GetAssumedEffectId(v4, 0LL);
    if ( !EffectIdHashSet )
      goto LABEL_20;
    System_Collections_Generic_HashSet_int___UnionWith(
      EffectIdHashSet,
      (System_Collections_Generic_IEnumerable_T__o *)stageEntity,
      (const MethodInfo_3522610 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    v9 = toUpdate->fields.EffectIdHashSet;
    stageEntity = (StageEntity_o *)StageEntity__GetSpecialShadowEffectId(v4, 1, 0LL);
    if ( !v9 )
      goto LABEL_20;
    System_Collections_Generic_HashSet_int___Add(
      v9,
      (int32_t)stageEntity,
      (const MethodInfo_3522600 *)Method_System_Collections_Generic_HashSet_int__Add__);
    v10 = toUpdate->fields.EffectIdHashSet;
    stageEntity = (StageEntity_o *)StageEntity__GetSpecialShadowEffectId(v4, 0, 0LL);
    if ( !v10 )
      goto LABEL_20;
    System_Collections_Generic_HashSet_int___Add(
      v10,
      (int32_t)stageEntity,
      (const MethodInfo_3522600 *)Method_System_Collections_Generic_HashSet_int__Add__);
    AudioAssetNameHashSet = (System_Collections_Generic_HashSet_T__o *)toUpdate->fields.AudioAssetNameHashSet;
    stageEntity = (StageEntity_o *)StageEntity__GetAssumedVoiceAssetNames(v4, 0LL);
    if ( !AudioAssetNameHashSet )
      goto LABEL_20;
    System_Collections_Generic_HashSet_object___UnionWith(
      AudioAssetNameHashSet,
      (System_Collections_Generic_IEnumerable_T__o *)stageEntity,
      (const MethodInfo_3528A14 *)Method_System_Collections_Generic_HashSet_string__UnionWith__);
    v13 = Method_System_Array_Empty_int___;
    cameraIdHashSet = toUpdate->fields.cameraIdHashSet;
    v15 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v15 )
    {
      sub_1C80064(Method_System_Array_Empty_int___);
      v15 = v13[7];
    }
    v16 = *(_QWORD *)(v15 + 16);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1C80008(inited);
    if ( !*(_DWORD *)(v16 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v16);
    v17 = *(_QWORD *)(v13[7] + 16LL);
    if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
      v17 = sub_1C80008(inited);
    stageEntity = (StageEntity_o *)StageEntity__GetAddUniqueCameraIds(v4, **(System_Int32_array ***)(v17 + 184), 0LL);
    if ( !cameraIdHashSet )
LABEL_20:
      sub_1C2E388(stageEntity, toUpdate);
    System_Collections_Generic_HashSet_int___UnionWith(
      cameraIdHashSet,
      (System_Collections_Generic_IEnumerable_T__o *)stageEntity,
      (const MethodInfo_3522610 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  AssumedEffectExtractLogic___c_c *v29; // x0
  System_Func_SimpleTreasureDeviceData__bool__o *_9__1_0; // x22
  Il2CppObject *v31; // x23
  struct AssumedEffectExtractLogic___c_StaticFields *static_fields; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x20
  System_Func_T__TResult__o *v40; // x22
  System_Collections_Generic_IEnumerable_T__o *v41; // x0
  System_Collections_Generic_IEnumerable_T__o *v42; // x0
  System_Object_array *v43; // x0
  AssumedEffectExtractLogic___c_c *v44; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x20
  System_Func_object__object__o *_9__1_2; // x21
  Il2CppObject *v47; // x22
  struct AssumedEffectExtractLogic___c_StaticFields *v48; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7

  if ( (byte_4BFFA2F & 1) == 0 )
  {
    sub_1C2E12C(&Method_BasicHelper_ExcludeNull_TreasureDvcEntity___, toUpdate);
    sub_1C2E12C(&Method_DataManager_GetMaster_TreasureDvcMaster___, v5);
    sub_1C2E12C(&DataManager_TypeInfo, v6);
    sub_1C2E12C(&Method_System_Linq_Enumerable_SelectMany_TreasureDvcEntity__int___, v7);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Select_SimpleTreasureDeviceData__TreasureDvcEntity___, v8);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToArray_TreasureDvcEntity___, v9);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Where_SimpleTreasureDeviceData___, v10);
    sub_1C2E12C(&System_Func_TreasureDvcEntity__IEnumerable_int___TypeInfo, v11);
    sub_1C2E12C(&System_Func_SimpleTreasureDeviceData__bool__TypeInfo, v12);
    sub_1C2E12C(&System_Func_SimpleTreasureDeviceData__TreasureDvcEntity__TypeInfo, v13);
    sub_1C2E12C(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v14);
    sub_1C2E12C(&Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_0__, v15);
    sub_1C2E12C(&Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_2__, v16);
    sub_1C2E12C(&Method_AssumedEffectExtractLogic___c__DisplayClass1_0__FromTreasureDevice_b__1__, v17);
    sub_1C2E12C(&AssumedEffectExtractLogic___c__DisplayClass1_0_TypeInfo, v18);
    sub_1C2E12C(&AssumedEffectExtractLogic___c_TypeInfo, v19);
    byte_4BFFA2F = 1;
  }
  v20 = sub_1C2E378(AssumedEffectExtractLogic___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Collections_Generic_HashSet_int__o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !v20 )
    goto LABEL_21;
  *(_QWORD *)(v20 + 16) = Master_object;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v20 + 16), (int64_t)Master_object, v23, v24, v25, v26, v27, v28);
  v29 = AssumedEffectExtractLogic___c_TypeInfo;
  if ( !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
    v29 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  _9__1_0 = v29->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v29 = AssumedEffectExtractLogic___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v29->static_fields->__9;
    _9__1_0 = (System_Func_SimpleTreasureDeviceData__bool__o *)sub_1C2E378(System_Func_SimpleTreasureDeviceData__bool__TypeInfo);
    System_Func_SimpleTreasureDeviceData__bool____ctor(
      _9__1_0,
      v31,
      Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_0__,
      0LL);
    static_fields = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = _9__1_0;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)_9__1_0, v33, v34, v35, v36, v37, v38);
  }
  v39 = System_Linq_Enumerable__Where_SimpleTreasureDeviceData_(
          (System_Collections_Generic_IEnumerable_TSource__o *)tdDataEnumerable,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_3012278 *)Method_System_Linq_Enumerable_Where_SimpleTreasureDeviceData___);
  v40 = (System_Func_T__TResult__o *)sub_1C2E378(System_Func_SimpleTreasureDeviceData__TreasureDvcEntity__TypeInfo);
  System_Func_SimpleTreasureDeviceData__object____ctor(
    v40,
    (Il2CppObject *)v20,
    Method_AssumedEffectExtractLogic___c__DisplayClass1_0__FromTreasureDevice_b__1__,
    0LL);
  v41 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_SimpleTreasureDeviceData__object_(
                                                         v39,
                                                         (System_Func_TSource__TResult__o *)v40,
                                                         (const MethodInfo_30047D0 *)Method_System_Linq_Enumerable_Select_SimpleTreasureDeviceData__TreasureDvcEntity___);
  v42 = BasicHelper__ExcludeNull_object_(
          v41,
          (const MethodInfo_2FBCB90 *)Method_BasicHelper_ExcludeNull_TreasureDvcEntity___);
  v43 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v42,
          (const MethodInfo_300BDBC *)Method_System_Linq_Enumerable_ToArray_TreasureDvcEntity___);
  v44 = AssumedEffectExtractLogic___c_TypeInfo;
  v45 = (System_Collections_Generic_IEnumerable_TSource__o *)v43;
  if ( !AssumedEffectExtractLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssumedEffectExtractLogic___c_TypeInfo);
    v44 = AssumedEffectExtractLogic___c_TypeInfo;
  }
  _9__1_2 = (System_Func_object__object__o *)v44->static_fields->__9__1_2;
  if ( !_9__1_2 )
  {
    if ( !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      v44 = AssumedEffectExtractLogic___c_TypeInfo;
    }
    v47 = (Il2CppObject *)v44->static_fields->__9;
    _9__1_2 = (System_Func_object__object__o *)sub_1C2E378(System_Func_TreasureDvcEntity__IEnumerable_int___TypeInfo);
    System_Func_object__object____ctor(
      _9__1_2,
      v47,
      Method_AssumedEffectExtractLogic___c__FromTreasureDevice_b__1_2__,
      0LL);
    v48 = AssumedEffectExtractLogic___c_TypeInfo->static_fields;
    v48->__9__1_2 = (struct System_Func_TreasureDvcEntity__IEnumerable_int___o *)_9__1_2;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v48->__9__1_2, (int64_t)_9__1_2, v49, v50, v51, v52, v53, v54);
  }
  Master_object = (System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                 v45,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__1_2,
                                                                 (const MethodInfo_30060A4 *)Method_System_Linq_Enumerable_SelectMany_TreasureDvcEntity__int___);
  if ( !toUpdate
    || (v22 = (System_Collections_Generic_IEnumerable_T__o *)Master_object,
        (Master_object = toUpdate->fields.EffectIdHashSet) == 0LL) )
  {
LABEL_21:
    sub_1C2E388(Master_object, v22);
  }
  System_Collections_Generic_HashSet_int___UnionWith(
    Master_object,
    v22,
    (const MethodInfo_3522610 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
}


void __fastcall AssumedEffectExtractLogic___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BFFA35 & 1) == 0 )
  {
    sub_1C2E12C(&AssumedEffectExtractLogic___c_TypeInfo, v1);
    byte_4BFFA35 = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(AssumedEffectExtractLogic___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  AssumedEffectExtractLogic___c_TypeInfo->static_fields->__9 = (struct AssumedEffectExtractLogic___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)AssumedEffectExtractLogic___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C2E388(this, 0LL);
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
    sub_1C2E388(this, 0LL);
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
    sub_1C2E388(this, 0LL);
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
  if ( (byte_4BFFA36 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, x);
    byte_4BFFA36 = 1;
  }
  skillMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.skillMaster;
  if ( !skillMaster )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C2E388)(0LL, x);
  return (SkillEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            skillMaster,
                            id,
                            (const MethodInfo_327B180 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
  if ( (byte_4BFFA37 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, x);
    byte_4BFFA37 = 1;
  }
  tdMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.tdMaster;
  if ( !tdMaster )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C2E388)(0LL, x);
  return (TreasureDvcEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                  tdMaster,
                                  id,
                                  (const MethodInfo_327B180 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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
  if ( (byte_4BFFA38 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, x);
    this = (AssumedEffectExtractLogic___c__DisplayClass2_0_o *)sub_1C2E12C(
                                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                 v5);
    byte_4BFFA38 = 1;
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
  this = (AssumedEffectExtractLogic___c__DisplayClass2_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(
                                                               v10,
                                                               0LL);
  if ( !servantMaster )
LABEL_8:
    sub_1C2E388(this, x);
  return (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              servantMaster,
                              (int32_t)this,
                              (const MethodInfo_327B180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
}