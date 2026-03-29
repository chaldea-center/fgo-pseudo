void AssumedBattleAssetSearcherForMasterSkill___ctor(
        AssumedBattleAssetSearcherForMasterSkill_o *this,
        const MethodInfo *method)
{
  AssumedBattleAssetSearcherBase___ctor((AssumedBattleAssetSearcherBase_o *)this, 0);
}


AssumedBattleAssetSearcherForMasterSkill_o *AssumedBattleAssetSearcherForMasterSkill__Create(const MethodInfo *method)
{
  AssumedBattleAssetSearcherBase_o *v1; // x19

  if ( (byte_4D32EDE & 1) == 0 )
  {
    sub_1C93AD4(&AssumedBattleAssetSearcherForMasterSkill_TypeInfo);
    byte_4D32EDE = 1;
  }
  v1 = (AssumedBattleAssetSearcherBase_o *)sub_1C93D20(AssumedBattleAssetSearcherForMasterSkill_TypeInfo);
  AssumedBattleAssetSearcherBase___ctor(v1, 0);
  return (AssumedBattleAssetSearcherForMasterSkill_o *)v1;
}


AssumedBattleAssetLoadManager_AnalyzedResultParam_o *AssumedBattleAssetSearcherForMasterSkill__Search(
        AssumedBattleAssetSearcherForMasterSkill_o *this,
        const MethodInfo *method)
{
  AssumedBattleAssetLoadManager_AnalyzedResultParam_o *v3; // x20
  System_Collections_Generic_HashSet_SimpleSkillData__o *v4; // x21
  System_Collections_Generic_IEnumerable_T__o *v5; // x0
  const MethodInfo *v6; // x1
  struct AssumedBattleAssetLoadManager_o *manager; // x8
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  const MethodInfo *v9; // x2

  if ( (byte_4D32EDD & 1) == 0 )
  {
    sub_1C93AD4(&AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_SimpleSkillData___ctor__);
    sub_1C93AD4(&System_Collections_Generic_HashSet_SimpleSkillData__TypeInfo);
    byte_4D32EDD = 1;
  }
  v3 = (AssumedBattleAssetLoadManager_AnalyzedResultParam_o *)sub_1C93D20(AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo);
  AssumedBattleAssetLoadManager_AnalyzedResultParam___ctor(v3, 0);
  v4 = (System_Collections_Generic_HashSet_SimpleSkillData__o *)sub_1C93D20(System_Collections_Generic_HashSet_SimpleSkillData__TypeInfo);
  System_Collections_Generic_HashSet_SimpleSkillData____ctor(
    v4,
    (const MethodInfo_372DC4C *)Method_System_Collections_Generic_HashSet_SimpleSkillData___ctor__);
  manager = this->fields.manager;
  if ( !manager
    || (Perf_k__BackingField = manager->fields._Perf_k__BackingField) == 0
    || (v5 = (System_Collections_Generic_IEnumerable_T__o *)AssumedSkillExtractor__EnumerateMasterSkill(
                                                              Perf_k__BackingField->fields.data,
                                                              v6),
        !v4) )
  {
    sub_1C93D2C(v5, v6);
  }
  System_Collections_Generic_HashSet_SimpleSkillData___UnionWith(
    v4,
    v5,
    (const MethodInfo_372EE3C *)Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__);
  AssumedEffectExtractLogic__FromSkill((System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v4, v3, v9);
  return v3;
}