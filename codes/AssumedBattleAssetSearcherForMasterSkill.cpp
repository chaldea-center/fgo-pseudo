AssumedBattleAssetSearcherForMasterSkill_o *__fastcall AssumedBattleAssetSearcherForMasterSkill__Create(
        const MethodInfo *method)
{
  __int64 v1; // x1
  AssumedBattleAssetSearcherBase_o *v2; // x19
  const MethodInfo *v3; // x1

  if ( (byte_4AB7EF8 & 1) == 0 )
  {
    sub_1BAB41C(&AssumedBattleAssetSearcherForMasterSkill_TypeInfo, v1);
    byte_4AB7EF8 = 1;
  }
  v2 = (AssumedBattleAssetSearcherBase_o *)sub_1BAB668(AssumedBattleAssetSearcherForMasterSkill_TypeInfo);
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
  AssumedBattleAssetLoadManager_AnalyzedResultParam_o *v6; // x20
  const MethodInfo *v7; // x1
  System_Collections_Generic_HashSet_SimpleSkillData__o *v8; // x21
  System_Collections_Generic_IEnumerable_T__o *v9; // x0
  const MethodInfo *v10; // x1
  struct AssumedBattleAssetLoadManager_o *manager; // x8
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  const MethodInfo *v13; // x2

  if ( (byte_4AB7EF7 & 1) == 0 )
  {
    sub_1BAB41C(&AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo, method);
    sub_1BAB41C(&Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_HashSet_SimpleSkillData___ctor__, v4);
    sub_1BAB41C(&System_Collections_Generic_HashSet_SimpleSkillData__TypeInfo, v5);
    byte_4AB7EF7 = 1;
  }
  v6 = (AssumedBattleAssetLoadManager_AnalyzedResultParam_o *)sub_1BAB668(AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo);
  AssumedBattleAssetLoadManager_AnalyzedResultParam___ctor(v6, v7);
  v8 = (System_Collections_Generic_HashSet_SimpleSkillData__o *)sub_1BAB668(System_Collections_Generic_HashSet_SimpleSkillData__TypeInfo);
  System_Collections_Generic_HashSet_SimpleSkillData____ctor(
    v8,
    (const MethodInfo_3409C28 *)Method_System_Collections_Generic_HashSet_SimpleSkillData___ctor__);
  manager = this->fields.manager;
  if ( !manager
    || (Perf_k__BackingField = manager->fields._Perf_k__BackingField) == 0LL
    || (v9 = (System_Collections_Generic_IEnumerable_T__o *)AssumedSkillExtractor__EnumerateMasterSkill(
                                                              Perf_k__BackingField->fields.data,
                                                              v10),
        !v8) )
  {
    sub_1BAB678(v9, v10);
  }
  System_Collections_Generic_HashSet_SimpleSkillData___UnionWith(
    v8,
    v9,
    (const MethodInfo_340AE18 *)Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__);
  AssumedEffectExtractLogic__FromSkill((System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v8, v6, v13);
  return v6;
}