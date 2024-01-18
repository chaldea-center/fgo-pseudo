AssumedBattleAssetSearcherForMasterSkill_o *__fastcall AssumedBattleAssetSearcherForMasterSkill__Create(
        const MethodInfo *method)
{
  __int64 v1; // x1
  AssumedBattleAssetSearcherBase_o *v2; // x19
  const MethodInfo *v3; // x1

  if ( (byte_41897F0 & 1) == 0 )
  {
    sub_B2C35C(&AssumedBattleAssetSearcherForMasterSkill_TypeInfo, v1);
    byte_41897F0 = 1;
  }
  v2 = (AssumedBattleAssetSearcherBase_o *)sub_B2C42C(AssumedBattleAssetSearcherForMasterSkill_TypeInfo);
  AssumedBattleAssetSearcherBase___ctor(v2, v3);
  return (AssumedBattleAssetSearcherForMasterSkill_o *)v2;
}


AssumedBattleAssetLoadManager_AnalyzedResultParam_o *__fastcall AssumedBattleAssetSearcherForMasterSkill__Search(
        AssumedBattleAssetSearcherForMasterSkill_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  AssumedBattleAssetLoadManager_AnalyzedResultParam_o *v6; // x19
  System_Collections_Generic_HashSet_SimpleSkillData__o *v7; // x21
  System_Collections_Generic_IEnumerable_T__o *v8; // x0
  const MethodInfo *v9; // x1
  struct AssumedBattleAssetLoadManager_o *manager; // x8
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  const MethodInfo *v12; // x2

  if ( (byte_41897EF & 1) == 0 )
  {
    sub_B2C35C(&AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_SimpleSkillData___ctor___67288384, v4);
    sub_B2C35C(&System_Collections_Generic_HashSet_SimpleSkillData__TypeInfo, v5);
    byte_41897EF = 1;
  }
  v6 = (AssumedBattleAssetLoadManager_AnalyzedResultParam_o *)sub_B2C42C(AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo);
  AssumedBattleAssetLoadManager_AnalyzedResultParam___ctor(v6, 0LL);
  v7 = (System_Collections_Generic_HashSet_SimpleSkillData__o *)sub_B2C42C(System_Collections_Generic_HashSet_SimpleSkillData__TypeInfo);
  System_Collections_Generic_HashSet_SimpleSkillData____ctor(
    v7,
    (const MethodInfo_2D8DDEC *)Method_System_Collections_Generic_HashSet_SimpleSkillData___ctor___67288384);
  manager = this->fields.manager;
  if ( !manager
    || (Perf_k__BackingField = manager->fields._Perf_k__BackingField) == 0LL
    || (v8 = (System_Collections_Generic_IEnumerable_T__o *)AssumedSkillExtractor__EnumerateMasterSkill(
                                                              Perf_k__BackingField->fields.data,
                                                              v9),
        !v7) )
  {
    sub_B2C434(v8, v9);
  }
  System_Collections_Generic_HashSet_SimpleSkillData___UnionWith(
    v7,
    v8,
    (const MethodInfo_2D8EFB0 *)Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__);
  AssumedEffectExtractLogic__FromSkill((System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v7, v6, v12);
  return v6;
}