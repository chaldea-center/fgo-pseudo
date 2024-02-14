AssumedBattleAssetSearcherForWave_o *__fastcall AssumedBattleAssetSearcherForWave__Create(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AssumedBattleAssetSearcherBase_o *v3; // x19
  const MethodInfo *v4; // x1

  if ( (byte_421665C & 1) == 0 )
  {
    sub_B0D8A4(&AssumedBattleAssetSearcherForWave_TypeInfo, v1);
    byte_421665C = 1;
  }
  v3 = (AssumedBattleAssetSearcherBase_o *)sub_B0D974(AssumedBattleAssetSearcherForWave_TypeInfo, v1, v2);
  AssumedBattleAssetSearcherBase___ctor(v3, v4);
  return (AssumedBattleAssetSearcherForWave_o *)v3;
}


AssumedBattleAssetLoadManager_AnalyzedResultParam_o *__fastcall AssumedBattleAssetSearcherForWave__Search(
        AssumedBattleAssetSearcherForWave_o *this,
        const MethodInfo *method)
{
  AssumedBattleAssetSearcherForWave_o *v2; // x19
  struct AssumedBattleAssetLoadManager_o *manager; // x8
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  StageEntity_o *StageEntity; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  AssumedBattleAssetLoadManager_AnalyzedResultParam_o *v8; // x20
  const MethodInfo *v9; // x2

  v2 = this;
  if ( (byte_421665B & 1) == 0 )
  {
    this = (AssumedBattleAssetSearcherForWave_o *)sub_B0D8A4(
                                                    &AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo,
                                                    method);
    byte_421665B = 1;
  }
  manager = v2->fields.manager;
  if ( !manager
    || (Perf_k__BackingField = manager->fields._Perf_k__BackingField) == 0LL
    || (this = (AssumedBattleAssetSearcherForWave_o *)Perf_k__BackingField->fields.data) == 0LL )
  {
    sub_B0D97C(this);
  }
  StageEntity = BattleData__getStageEntity((BattleData_o *)this, 0LL);
  v8 = (AssumedBattleAssetLoadManager_AnalyzedResultParam_o *)sub_B0D974(
                                                                AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo,
                                                                v6,
                                                                v7);
  AssumedBattleAssetLoadManager_AnalyzedResultParam___ctor(v8, 0LL);
  AssumedEffectExtractLogic__FromStage(StageEntity, v8, v9);
  return v8;
}