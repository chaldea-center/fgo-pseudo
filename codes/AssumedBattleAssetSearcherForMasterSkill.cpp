AssumedBattleAssetSearcherForMasterSkill_o *AssumedBattleAssetSearcherForMasterSkill__Create(const MethodInfo *method)
{
  AssumedBattleAssetSearcherBase_o *v1; // x19
  const MethodInfo *v2; // x1

  if ( (byte_4C39E84 & 1) == 0 )
  {
    sub_1C32C20(&AssumedBattleAssetSearcherForMasterSkill_TypeInfo);
    byte_4C39E84 = 1;
  }
  v1 = (AssumedBattleAssetSearcherBase_o *)sub_1C32E6C(AssumedBattleAssetSearcherForMasterSkill_TypeInfo);
  AssumedBattleAssetSearcherBase___ctor(v1, v2);
  return (AssumedBattleAssetSearcherForMasterSkill_o *)v1;
}


AssumedBattleAssetLoadManager_AnalyzedResultParam_o *AssumedBattleAssetSearcherForMasterSkill__Search(
        AssumedBattleAssetSearcherForMasterSkill_o *this,
        const MethodInfo *method)
{
  AssumedBattleAssetLoadManager_AnalyzedResultParam_o *v3; // x20
  const MethodInfo *v4; // x1
  System_Collections_Generic_HashSet_SimpleSkillData__o *v5; // x21
  System_Collections_Generic_IEnumerable_T__o *v6; // x0
  const MethodInfo *v7; // x1
  struct AssumedBattleAssetLoadManager_o *manager; // x8
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  const MethodInfo *v10; // x2

  if ( (byte_4C39E83 & 1) == 0 )
  {
    sub_1C32C20(&AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_SimpleSkillData___ctor__);
    sub_1C32C20(&System_Collections_Generic_HashSet_SimpleSkillData__TypeInfo);
    byte_4C39E83 = 1;
  }
  v3 = (AssumedBattleAssetLoadManager_AnalyzedResultParam_o *)sub_1C32E6C(AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo);
  AssumedBattleAssetLoadManager_AnalyzedResultParam___ctor(v3, v4);
  v5 = (System_Collections_Generic_HashSet_SimpleSkillData__o *)sub_1C32E6C(System_Collections_Generic_HashSet_SimpleSkillData__TypeInfo);
  System_Collections_Generic_HashSet_SimpleSkillData____ctor(
    v5,
    (const MethodInfo_36519F4 *)Method_System_Collections_Generic_HashSet_SimpleSkillData___ctor__);
  manager = this->fields.manager;
  if ( !manager
    || (Perf_k__BackingField = manager->fields._Perf_k__BackingField) == 0
    || (v6 = (System_Collections_Generic_IEnumerable_T__o *)AssumedSkillExtractor__EnumerateMasterSkill(
                                                              Perf_k__BackingField->fields.data,
                                                              v7),
        !v5) )
  {
    sub_1C32E7C(v6);
  }
  System_Collections_Generic_HashSet_SimpleSkillData___UnionWith(
    v5,
    v6,
    (const MethodInfo_3652BE4 *)Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__);
  AssumedEffectExtractLogic__FromSkill((System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v5, v3, v10);
  return v3;
}