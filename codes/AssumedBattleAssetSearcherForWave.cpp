AssumedBattleAssetSearcherForWave_o *__fastcall AssumedBattleAssetSearcherForWave__Create(const MethodInfo *method)
{
  AssumedBattleAssetSearcherBase_o *v1; // x19
  const MethodInfo *v2; // x1

  if ( (byte_4355238 & 1) == 0 )
  {
    sub_B70694(&AssumedBattleAssetSearcherForWave_TypeInfo);
    byte_4355238 = 1;
  }
  v1 = (AssumedBattleAssetSearcherBase_o *)sub_B70764(AssumedBattleAssetSearcherForWave_TypeInfo);
  AssumedBattleAssetSearcherBase___ctor(v1, v2);
  return (AssumedBattleAssetSearcherForWave_o *)v1;
}


AssumedBattleAssetLoadManager_AnalyzedResultParam_o *__fastcall AssumedBattleAssetSearcherForWave__Search(
        AssumedBattleAssetSearcherForWave_o *this,
        const MethodInfo *method)
{
  AssumedBattleAssetSearcherForWave_o *v2; // x19
  struct AssumedBattleAssetLoadManager_o *manager; // x8
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  StageEntity_o *StageEntity; // x19
  AssumedBattleAssetLoadManager_AnalyzedResultParam_o *v6; // x20
  const MethodInfo *v7; // x2

  v2 = this;
  if ( (byte_4355237 & 1) == 0 )
  {
    this = (AssumedBattleAssetSearcherForWave_o *)sub_B70694(&AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo);
    byte_4355237 = 1;
  }
  manager = v2->fields.manager;
  if ( !manager
    || (Perf_k__BackingField = manager->fields._Perf_k__BackingField) == 0LL
    || (this = (AssumedBattleAssetSearcherForWave_o *)Perf_k__BackingField->fields.data) == 0LL )
  {
    sub_B7076C(this, method);
  }
  StageEntity = BattleData__getStageEntity((BattleData_o *)this, 0LL);
  v6 = (AssumedBattleAssetLoadManager_AnalyzedResultParam_o *)sub_B70764(AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo);
  AssumedBattleAssetLoadManager_AnalyzedResultParam___ctor(v6, 0LL);
  AssumedEffectExtractLogic__FromStage(StageEntity, v6, v7);
  return v6;
}