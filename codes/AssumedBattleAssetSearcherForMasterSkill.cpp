AssumedBattleAssetSearcherForMasterSkill_o *__fastcall AssumedBattleAssetSearcherForMasterSkill__Create(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AssumedBattleAssetSearcherBase_o *v3; // x19
  const MethodInfo *v4; // x1

  if ( (byte_49FE468 & 1) == 0 )
  {
    sub_1B640C8(&AssumedBattleAssetSearcherForMasterSkill_TypeInfo, v1);
    byte_49FE468 = 1;
  }
  v3 = (AssumedBattleAssetSearcherBase_o *)sub_1B64314(AssumedBattleAssetSearcherForMasterSkill_TypeInfo, v1, v2);
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
  AssumedBattleAssetLoadManager_AnalyzedResultParam_o *v7; // x20
  const MethodInfo *v8; // x1
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_HashSet_SimpleSkillData__o *v11; // x21
  System_Collections_Generic_IEnumerable_T__o *v12; // x0
  const MethodInfo *v13; // x1
  struct AssumedBattleAssetLoadManager_o *manager; // x8
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  const MethodInfo *v16; // x2

  if ( (byte_49FE467 & 1) == 0 )
  {
    sub_1B640C8(&AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_SimpleSkillData___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_HashSet_SimpleSkillData__TypeInfo, v6);
    byte_49FE467 = 1;
  }
  v7 = (AssumedBattleAssetLoadManager_AnalyzedResultParam_o *)sub_1B64314(
                                                                AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo,
                                                                method,
                                                                v2);
  AssumedBattleAssetLoadManager_AnalyzedResultParam___ctor(v7, v8);
  v11 = (System_Collections_Generic_HashSet_SimpleSkillData__o *)sub_1B64314(
                                                                   System_Collections_Generic_HashSet_SimpleSkillData__TypeInfo,
                                                                   v9,
                                                                   v10);
  System_Collections_Generic_HashSet_SimpleSkillData____ctor(
    v11,
    (const MethodInfo_336BF9C *)Method_System_Collections_Generic_HashSet_SimpleSkillData___ctor__);
  manager = this->fields.manager;
  if ( !manager
    || (Perf_k__BackingField = manager->fields._Perf_k__BackingField) == 0LL
    || (v12 = (System_Collections_Generic_IEnumerable_T__o *)AssumedSkillExtractor__EnumerateMasterSkill(
                                                               Perf_k__BackingField->fields.data,
                                                               v13),
        !v11) )
  {
    sub_1B64324(v12);
  }
  System_Collections_Generic_HashSet_SimpleSkillData___UnionWith(
    v11,
    v12,
    (const MethodInfo_336D18C *)Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__);
  AssumedEffectExtractLogic__FromSkill((System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v11, v7, v16);
  return v7;
}