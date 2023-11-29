AssumedBattleAssetSearcherForMasterSkill_o *__fastcall AssumedBattleAssetSearcherForMasterSkill__Create(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  AssumedBattleAssetSearcherBase_o *v5; // x19
  const MethodInfo *v6; // x1

  if ( (byte_40FBE34 & 1) == 0 )
  {
    sub_B16FFC(&AssumedBattleAssetSearcherForMasterSkill_TypeInfo, v1);
    byte_40FBE34 = 1;
  }
  v5 = (AssumedBattleAssetSearcherBase_o *)sub_B170CC(AssumedBattleAssetSearcherForMasterSkill_TypeInfo, v1, v2, v3, v4);
  AssumedBattleAssetSearcherBase___ctor(v5, v6);
  return (AssumedBattleAssetSearcherForMasterSkill_o *)v5;
}


AssumedBattleAssetLoadManager_AnalyzedResultParam_o *__fastcall AssumedBattleAssetSearcherForMasterSkill__Search(
        AssumedBattleAssetSearcherForMasterSkill_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  AssumedBattleAssetLoadManager_AnalyzedResultParam_o *v9; // x19
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_Collections_Generic_HashSet_SimpleSkillData__o *v14; // x21
  const MethodInfo *v15; // x1
  struct AssumedBattleAssetLoadManager_o *manager; // x8
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_T__o *v18; // x0
  const MethodInfo *v19; // x2

  if ( (byte_40FBE33 & 1) == 0 )
  {
    sub_B16FFC(&AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_SimpleSkillData___ctor___66714504, v7);
    sub_B16FFC(&System_Collections_Generic_HashSet_SimpleSkillData__TypeInfo, v8);
    byte_40FBE33 = 1;
  }
  v9 = (AssumedBattleAssetLoadManager_AnalyzedResultParam_o *)sub_B170CC(
                                                                AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo,
                                                                method,
                                                                v2,
                                                                v3,
                                                                v4);
  AssumedBattleAssetLoadManager_AnalyzedResultParam___ctor(v9, 0LL);
  v14 = (System_Collections_Generic_HashSet_SimpleSkillData__o *)sub_B170CC(
                                                                   System_Collections_Generic_HashSet_SimpleSkillData__TypeInfo,
                                                                   v10,
                                                                   v11,
                                                                   v12,
                                                                   v13);
  System_Collections_Generic_HashSet_SimpleSkillData____ctor(
    v14,
    (const MethodInfo_21E0CEC *)Method_System_Collections_Generic_HashSet_SimpleSkillData___ctor___66714504);
  manager = this->fields.manager;
  if ( !manager
    || (Perf_k__BackingField = manager->fields._Perf_k__BackingField) == 0LL
    || (v18 = (System_Collections_Generic_IEnumerable_T__o *)AssumedSkillExtractor__EnumerateMasterSkill(
                                                               Perf_k__BackingField->fields.data,
                                                               v15),
        !v14) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_HashSet_SimpleSkillData___UnionWith(
    v14,
    v18,
    (const MethodInfo_21E1EB0 *)Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__);
  AssumedEffectExtractLogic__FromSkill((System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v14, v9, v19);
  return v9;
}