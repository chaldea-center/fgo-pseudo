AssumedBattleAssetSearcherForWave_o *__fastcall AssumedBattleAssetSearcherForWave__Create(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  AssumedBattleAssetSearcherBase_o *v4; // x19
  const MethodInfo *v5; // x1

  if ( (byte_4B183C4 & 1) == 0 )
  {
    sub_1BCA7E0(&AssumedBattleAssetSearcherForWave_TypeInfo, v1, v2);
    byte_4B183C4 = 1;
  }
  v4 = (AssumedBattleAssetSearcherBase_o *)sub_1BCAA2C(AssumedBattleAssetSearcherForWave_TypeInfo, v1, v2, v3);
  AssumedBattleAssetSearcherBase___ctor(v4, v5);
  return (AssumedBattleAssetSearcherForWave_o *)v4;
}


AssumedBattleAssetLoadManager_AnalyzedResultParam_o *__fastcall AssumedBattleAssetSearcherForWave__Search(
        AssumedBattleAssetSearcherForWave_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  AssumedBattleAssetSearcherForWave_o *v3; // x19
  struct AssumedBattleAssetLoadManager_o *manager; // x8
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  StageEntity_o *StageEntity; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  AssumedBattleAssetLoadManager_AnalyzedResultParam_o *v10; // x20
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2

  v3 = this;
  if ( (byte_4B183C3 & 1) == 0 )
  {
    this = (AssumedBattleAssetSearcherForWave_o *)sub_1BCA7E0(
                                                    &AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo,
                                                    method,
                                                    v2);
    byte_4B183C3 = 1;
  }
  manager = v3->fields.manager;
  if ( !manager
    || (Perf_k__BackingField = manager->fields._Perf_k__BackingField) == 0LL
    || (this = (AssumedBattleAssetSearcherForWave_o *)Perf_k__BackingField->fields.data) == 0LL )
  {
    sub_1BCAA3C(this, method);
  }
  StageEntity = BattleData__getStageEntity((BattleData_o *)this, 0LL);
  v10 = (AssumedBattleAssetLoadManager_AnalyzedResultParam_o *)sub_1BCAA2C(
                                                                 AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo,
                                                                 v7,
                                                                 v8,
                                                                 v9);
  AssumedBattleAssetLoadManager_AnalyzedResultParam___ctor(v10, v11);
  AssumedEffectExtractLogic__FromStage(StageEntity, v10, v12);
  return v10;
}