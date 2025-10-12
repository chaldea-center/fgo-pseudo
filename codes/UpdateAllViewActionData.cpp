void UpdateAllViewActionData__ExecAction(
        UpdateAllViewActionData_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  if ( !perf || (this = (UpdateAllViewActionData_o *)BattlePerformance__get_FieldEnvData(perf, 0)) == 0 )
    sub_1C32E7C(this);
  BattleFieldEnvironmentData__UpdateAllView((BattleFieldEnvironmentData_o *)this, 0);
}