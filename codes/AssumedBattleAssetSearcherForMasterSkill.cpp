AssumedBattleAssetSearcherForMasterSkill_o *__fastcall AssumedBattleAssetSearcherForMasterSkill__Create(
        const MethodInfo *method)
{
  AssumedBattleAssetSearcherBase_o *v1; // x19
  const MethodInfo *v2; // x1

  if ( (byte_438AA65 & 1) == 0 )
  {
    sub_B775C4(&AssumedBattleAssetSearcherForMasterSkill_TypeInfo);
    byte_438AA65 = 1;
  }
  v1 = (AssumedBattleAssetSearcherBase_o *)sub_B77694(AssumedBattleAssetSearcherForMasterSkill_TypeInfo);
  AssumedBattleAssetSearcherBase___ctor(v1, v2);
  return (AssumedBattleAssetSearcherForMasterSkill_o *)v1;
}


AssumedBattleAssetLoadManager_AnalyzedResultParam_o *__fastcall AssumedBattleAssetSearcherForMasterSkill__Search(
        AssumedBattleAssetSearcherForMasterSkill_o *this,
        const MethodInfo *method)
{
  AssumedBattleAssetLoadManager_AnalyzedResultParam_o *v3; // x19
  System_Collections_Generic_HashSet_SimpleSkillData__o *v4; // x21
  System_Collections_Generic_IEnumerable_T__o *v5; // x0
  const MethodInfo *v6; // x1
  struct AssumedBattleAssetLoadManager_o *manager; // x8
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  const MethodInfo *v9; // x2

  if ( (byte_438AA64 & 1) == 0 )
  {
    sub_B775C4(&AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_SimpleSkillData___ctor___69373848);
    sub_B775C4(&System_Collections_Generic_HashSet_SimpleSkillData__TypeInfo);
    byte_438AA64 = 1;
  }
  v3 = (AssumedBattleAssetLoadManager_AnalyzedResultParam_o *)sub_B77694(AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo);
  AssumedBattleAssetLoadManager_AnalyzedResultParam___ctor(v3, 0LL);
  v4 = (System_Collections_Generic_HashSet_SimpleSkillData__o *)sub_B77694(System_Collections_Generic_HashSet_SimpleSkillData__TypeInfo);
  System_Collections_Generic_HashSet_SimpleSkillData____ctor(
    v4,
    (const MethodInfo_2EE47F0 *)Method_System_Collections_Generic_HashSet_SimpleSkillData___ctor___69373848);
  manager = this->fields.manager;
  if ( !manager
    || (Perf_k__BackingField = manager->fields._Perf_k__BackingField) == 0LL
    || (v5 = (System_Collections_Generic_IEnumerable_T__o *)AssumedSkillExtractor__EnumerateMasterSkill(
                                                              Perf_k__BackingField->fields.data,
                                                              v6),
        !v4) )
  {
    sub_B7769C(v5, v6);
  }
  System_Collections_Generic_HashSet_SimpleSkillData___UnionWith(
    v4,
    v5,
    (const MethodInfo_2EE59B4 *)Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__);
  AssumedEffectExtractLogic__FromSkill((System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v4, v3, v9);
  return v3;
}