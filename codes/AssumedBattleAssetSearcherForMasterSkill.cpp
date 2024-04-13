AssumedBattleAssetSearcherForMasterSkill_o *__fastcall AssumedBattleAssetSearcherForMasterSkill__Create(
        const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  AssumedBattleAssetSearcherBase_o *v4; // x19
  const MethodInfo *v5; // x1

  if ( (byte_42EBC7F & 1) == 0 )
  {
    sub_B5D5C4(&AssumedBattleAssetSearcherForMasterSkill_TypeInfo, v1, v2, v3);
    byte_42EBC7F = 1;
  }
  v4 = (AssumedBattleAssetSearcherBase_o *)sub_B5D694(AssumedBattleAssetSearcherForMasterSkill_TypeInfo);
  AssumedBattleAssetSearcherBase___ctor(v4, v5);
  return (AssumedBattleAssetSearcherForMasterSkill_o *)v4;
}


AssumedBattleAssetLoadManager_AnalyzedResultParam_o *__fastcall AssumedBattleAssetSearcherForMasterSkill__Search(
        AssumedBattleAssetSearcherForMasterSkill_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  AssumedBattleAssetLoadManager_AnalyzedResultParam_o *v14; // x19
  System_Collections_Generic_HashSet_SimpleSkillData__o *v15; // x21
  System_Collections_Generic_IEnumerable_T__o *v16; // x0
  const MethodInfo *v17; // x1
  struct AssumedBattleAssetLoadManager_o *manager; // x8
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  const MethodInfo *v20; // x2

  if ( (byte_42EBC7E & 1) == 0 )
  {
    sub_B5D5C4(&AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_SimpleSkillData___ctor___68716784, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_HashSet_SimpleSkillData__TypeInfo, v11, v12, v13);
    byte_42EBC7E = 1;
  }
  v14 = (AssumedBattleAssetLoadManager_AnalyzedResultParam_o *)sub_B5D694(AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo);
  AssumedBattleAssetLoadManager_AnalyzedResultParam___ctor(v14, 0LL);
  v15 = (System_Collections_Generic_HashSet_SimpleSkillData__o *)sub_B5D694(System_Collections_Generic_HashSet_SimpleSkillData__TypeInfo);
  System_Collections_Generic_HashSet_SimpleSkillData____ctor(
    v15,
    (const MethodInfo_25081E4 *)Method_System_Collections_Generic_HashSet_SimpleSkillData___ctor___68716784);
  manager = this->fields.manager;
  if ( !manager
    || (Perf_k__BackingField = manager->fields._Perf_k__BackingField) == 0LL
    || (v16 = (System_Collections_Generic_IEnumerable_T__o *)AssumedSkillExtractor__EnumerateMasterSkill(
                                                               Perf_k__BackingField->fields.data,
                                                               v17),
        !v15) )
  {
    sub_B5D69C(v16, v17);
  }
  System_Collections_Generic_HashSet_SimpleSkillData___UnionWith(
    v15,
    v16,
    (const MethodInfo_25093A8 *)Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__);
  AssumedEffectExtractLogic__FromSkill((System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v15, v14, v20);
  return v14;
}