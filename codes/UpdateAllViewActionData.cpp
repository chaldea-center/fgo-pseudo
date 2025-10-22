void UpdateAllViewActionData__ExecAction(
        UpdateAllViewActionData_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  if ( !perf || (this = (UpdateAllViewActionData_o *)BattlePerformance__get_FieldEnvData(perf, 0)) == 0 )
    sub_1C3E7C0(this, perf);
  BattleFieldEnvironmentData__UpdateAllView((BattleFieldEnvironmentData_o *)this, 0);
}