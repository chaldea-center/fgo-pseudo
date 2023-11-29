AssumedBattleAssetSearcherForWave_o *__fastcall AssumedBattleAssetSearcherForWave__Create(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  AssumedBattleAssetSearcherBase_o *v5; // x19
  const MethodInfo *v6; // x1

  if ( (byte_40FBE36 & 1) == 0 )
  {
    sub_B16FFC(&AssumedBattleAssetSearcherForWave_TypeInfo, v1);
    byte_40FBE36 = 1;
  }
  v5 = (AssumedBattleAssetSearcherBase_o *)sub_B170CC(AssumedBattleAssetSearcherForWave_TypeInfo, v1, v2, v3, v4);
  AssumedBattleAssetSearcherBase___ctor(v5, v6);
  return (AssumedBattleAssetSearcherForWave_o *)v5;
}


AssumedBattleAssetLoadManager_AnalyzedResultParam_o *__fastcall AssumedBattleAssetSearcherForWave__Search(
        AssumedBattleAssetSearcherForWave_o *this,
        const MethodInfo *method)
{
  struct AssumedBattleAssetLoadManager_o *manager; // x8
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  BattleData_o *data; // x0
  StageEntity_o *StageEntity; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  AssumedBattleAssetLoadManager_AnalyzedResultParam_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_40FBE35 & 1) == 0 )
  {
    sub_B16FFC(&AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo, method);
    byte_40FBE35 = 1;
  }
  manager = this->fields.manager;
  if ( !manager
    || (Perf_k__BackingField = manager->fields._Perf_k__BackingField) == 0LL
    || (data = Perf_k__BackingField->fields.data) == 0LL )
  {
    sub_B170D4();
  }
  StageEntity = BattleData__getStageEntity(data, 0LL);
  v11 = (AssumedBattleAssetLoadManager_AnalyzedResultParam_o *)sub_B170CC(
                                                                 AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo,
                                                                 v7,
                                                                 v8,
                                                                 v9,
                                                                 v10);
  AssumedBattleAssetLoadManager_AnalyzedResultParam___ctor(v11, 0LL);
  AssumedEffectExtractLogic__FromStage(StageEntity, v11, v12);
  return v11;
}