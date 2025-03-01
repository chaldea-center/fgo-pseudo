AssumedBattleAssetSearcherForWave_o *__fastcall AssumedBattleAssetSearcherForWave__Create(const MethodInfo *method)
{
  __int64 v1; // x1
  AssumedBattleAssetSearcherBase_o *v2; // x19
  const MethodInfo *v3; // x1

  if ( (byte_4BFFA1D & 1) == 0 )
  {
    sub_1C2E12C(&AssumedBattleAssetSearcherForWave_TypeInfo, v1);
    byte_4BFFA1D = 1;
  }
  v2 = (AssumedBattleAssetSearcherBase_o *)sub_1C2E378(AssumedBattleAssetSearcherForWave_TypeInfo);
  AssumedBattleAssetSearcherBase___ctor(v2, v3);
  return (AssumedBattleAssetSearcherForWave_o *)v2;
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
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2

  v2 = this;
  if ( (byte_4BFFA1C & 1) == 0 )
  {
    this = (AssumedBattleAssetSearcherForWave_o *)sub_1C2E12C(
                                                    &AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo,
                                                    method);
    byte_4BFFA1C = 1;
  }
  manager = v2->fields.manager;
  if ( !manager
    || (Perf_k__BackingField = manager->fields._Perf_k__BackingField) == 0LL
    || (this = (AssumedBattleAssetSearcherForWave_o *)Perf_k__BackingField->fields.data) == 0LL )
  {
    sub_1C2E388(this, method);
  }
  StageEntity = BattleData__getStageEntity((BattleData_o *)this, 0LL);
  v6 = (AssumedBattleAssetLoadManager_AnalyzedResultParam_o *)sub_1C2E378(AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo);
  AssumedBattleAssetLoadManager_AnalyzedResultParam___ctor(v6, v7);
  AssumedEffectExtractLogic__FromStage(StageEntity, v6, v8);
  return v6;
}