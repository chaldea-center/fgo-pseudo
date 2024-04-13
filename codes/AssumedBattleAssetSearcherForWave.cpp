AssumedBattleAssetSearcherForWave_o *__fastcall AssumedBattleAssetSearcherForWave__Create(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  AssumedBattleAssetSearcherBase_o *v4; // x19
  const MethodInfo *v5; // x1

  if ( (byte_42EBC81 & 1) == 0 )
  {
    sub_B5D5C4(&AssumedBattleAssetSearcherForWave_TypeInfo, v1, v2, v3);
    byte_42EBC81 = 1;
  }
  v4 = (AssumedBattleAssetSearcherBase_o *)sub_B5D694(AssumedBattleAssetSearcherForWave_TypeInfo);
  AssumedBattleAssetSearcherBase___ctor(v4, v5);
  return (AssumedBattleAssetSearcherForWave_o *)v4;
}


AssumedBattleAssetLoadManager_AnalyzedResultParam_o *__fastcall AssumedBattleAssetSearcherForWave__Search(
        AssumedBattleAssetSearcherForWave_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  AssumedBattleAssetSearcherForWave_o *v4; // x19
  struct AssumedBattleAssetLoadManager_o *manager; // x8
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  StageEntity_o *StageEntity; // x19
  AssumedBattleAssetLoadManager_AnalyzedResultParam_o *v8; // x20
  const MethodInfo *v9; // x2

  v4 = this;
  if ( (byte_42EBC80 & 1) == 0 )
  {
    this = (AssumedBattleAssetSearcherForWave_o *)sub_B5D5C4(
                                                    &AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo,
                                                    (_DWORD)method,
                                                    v2,
                                                    v3);
    byte_42EBC80 = 1;
  }
  manager = v4->fields.manager;
  if ( !manager
    || (Perf_k__BackingField = manager->fields._Perf_k__BackingField) == 0LL
    || (this = (AssumedBattleAssetSearcherForWave_o *)Perf_k__BackingField->fields.data) == 0LL )
  {
    sub_B5D69C(this, method);
  }
  StageEntity = BattleData__getStageEntity((BattleData_o *)this, 0LL);
  v8 = (AssumedBattleAssetLoadManager_AnalyzedResultParam_o *)sub_B5D694(AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo);
  AssumedBattleAssetLoadManager_AnalyzedResultParam___ctor(v8, 0LL);
  AssumedEffectExtractLogic__FromStage(StageEntity, v8, v9);
  return v8;
}