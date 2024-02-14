AssumedBattleAssetSearcherForMasterSkill_o *__fastcall AssumedBattleAssetSearcherForMasterSkill__Create(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AssumedBattleAssetSearcherBase_o *v3; // x19
  const MethodInfo *v4; // x1

  if ( (byte_421665A & 1) == 0 )
  {
    sub_B0D8A4(&AssumedBattleAssetSearcherForMasterSkill_TypeInfo, v1);
    byte_421665A = 1;
  }
  v3 = (AssumedBattleAssetSearcherBase_o *)sub_B0D974(AssumedBattleAssetSearcherForMasterSkill_TypeInfo, v1, v2);
  AssumedBattleAssetSearcherBase___ctor(v3, v4);
  return (AssumedBattleAssetSearcherForMasterSkill_o *)v3;
}


AssumedBattleAssetLoadManager_AnalyzedResultParam_o *__fastcall AssumedBattleAssetSearcherForMasterSkill__Search(
        AssumedBattleAssetSearcherForMasterSkill_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  AssumedBattleAssetLoadManager_AnalyzedResultParam_o *v7; // x19
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_HashSet_SimpleSkillData__o *v10; // x21
  System_Collections_Generic_IEnumerable_T__o *v11; // x0
  const MethodInfo *v12; // x1
  struct AssumedBattleAssetLoadManager_o *manager; // x8
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  const MethodInfo *v15; // x2

  if ( (byte_4216659 & 1) == 0 )
  {
    sub_B0D8A4(&AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_SimpleSkillData___ctor___67861856, v5);
    sub_B0D8A4(&System_Collections_Generic_HashSet_SimpleSkillData__TypeInfo, v6);
    byte_4216659 = 1;
  }
  v7 = (AssumedBattleAssetLoadManager_AnalyzedResultParam_o *)sub_B0D974(
                                                                AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo,
                                                                method,
                                                                v2);
  AssumedBattleAssetLoadManager_AnalyzedResultParam___ctor(v7, 0LL);
  v10 = (System_Collections_Generic_HashSet_SimpleSkillData__o *)sub_B0D974(
                                                                   System_Collections_Generic_HashSet_SimpleSkillData__TypeInfo,
                                                                   v8,
                                                                   v9);
  System_Collections_Generic_HashSet_SimpleSkillData____ctor(
    v10,
    (const MethodInfo_1D700F4 *)Method_System_Collections_Generic_HashSet_SimpleSkillData___ctor___67861856);
  manager = this->fields.manager;
  if ( !manager
    || (Perf_k__BackingField = manager->fields._Perf_k__BackingField) == 0LL
    || (v11 = (System_Collections_Generic_IEnumerable_T__o *)AssumedSkillExtractor__EnumerateMasterSkill(
                                                               Perf_k__BackingField->fields.data,
                                                               v12),
        !v10) )
  {
    sub_B0D97C(v11);
  }
  System_Collections_Generic_HashSet_SimpleSkillData___UnionWith(
    v10,
    v11,
    (const MethodInfo_1D712B8 *)Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__);
  AssumedEffectExtractLogic__FromSkill((System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v10, v7, v15);
  return v7;
}