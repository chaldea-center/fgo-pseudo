void __fastcall BattleEndNotRelatedSurvivalStatusInstantlyData__ExecAction(
        BattleEndNotRelatedSurvivalStatusInstantlyData_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  if ( !perf || (data = perf->fields.data) == 0LL )
    sub_1C3B9C0(this, perf);
  data->fields.endbattleFlg = 1;
  data->fields.winBattleNotRelatedSurvivalStatus = 1;
  data->fields.IsEndBattleInstantly = 1;
}