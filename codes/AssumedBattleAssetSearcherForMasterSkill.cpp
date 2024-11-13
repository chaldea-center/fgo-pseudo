AssumedBattleAssetSearcherForMasterSkill_o *__fastcall AssumedBattleAssetSearcherForMasterSkill__Create(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  AssumedBattleAssetSearcherBase_o *v4; // x19
  const MethodInfo *v5; // x1

  if ( (byte_4B183C2 & 1) == 0 )
  {
    sub_1BCA7E0(&AssumedBattleAssetSearcherForMasterSkill_TypeInfo, v1, v2);
    byte_4B183C2 = 1;
  }
  v4 = (AssumedBattleAssetSearcherBase_o *)sub_1BCAA2C(AssumedBattleAssetSearcherForMasterSkill_TypeInfo, v1, v2, v3);
  AssumedBattleAssetSearcherBase___ctor(v4, v5);
  return (AssumedBattleAssetSearcherForMasterSkill_o *)v4;
}


AssumedBattleAssetLoadManager_AnalyzedResultParam_o *__fastcall AssumedBattleAssetSearcherForMasterSkill__Search(
        AssumedBattleAssetSearcherForMasterSkill_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  AssumedBattleAssetLoadManager_AnalyzedResultParam_o *v11; // x20
  const MethodInfo *v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Collections_Generic_HashSet_SimpleSkillData__o *v16; // x21
  System_Collections_Generic_IEnumerable_T__o *v17; // x0
  const MethodInfo *v18; // x1
  struct AssumedBattleAssetLoadManager_o *manager; // x8
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  const MethodInfo *v21; // x2

  if ( (byte_4B183C1 & 1) == 0 )
  {
    sub_1BCA7E0(&AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_SimpleSkillData___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_SimpleSkillData__TypeInfo, v9, v10);
    byte_4B183C1 = 1;
  }
  v11 = (AssumedBattleAssetLoadManager_AnalyzedResultParam_o *)sub_1BCAA2C(
                                                                 AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo,
                                                                 method,
                                                                 v2,
                                                                 v3);
  AssumedBattleAssetLoadManager_AnalyzedResultParam___ctor(v11, v12);
  v16 = (System_Collections_Generic_HashSet_SimpleSkillData__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_HashSet_SimpleSkillData__TypeInfo,
                                                                   v13,
                                                                   v14,
                                                                   v15);
  System_Collections_Generic_HashSet_SimpleSkillData____ctor(
    v16,
    (const MethodInfo_345D194 *)Method_System_Collections_Generic_HashSet_SimpleSkillData___ctor__);
  manager = this->fields.manager;
  if ( !manager
    || (Perf_k__BackingField = manager->fields._Perf_k__BackingField) == 0LL
    || (v17 = (System_Collections_Generic_IEnumerable_T__o *)AssumedSkillExtractor__EnumerateMasterSkill(
                                                               Perf_k__BackingField->fields.data,
                                                               v18),
        !v16) )
  {
    sub_1BCAA3C(v17, v18);
  }
  System_Collections_Generic_HashSet_SimpleSkillData___UnionWith(
    v16,
    v17,
    (const MethodInfo_345E384 *)Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__);
  AssumedEffectExtractLogic__FromSkill((System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v16, v11, v21);
  return v11;
}