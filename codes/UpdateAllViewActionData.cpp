void __fastcall UpdateAllViewActionData__ExecAction(
        UpdateAllViewActionData_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  if ( !perf || (this = (UpdateAllViewActionData_o *)BattlePerformance__get_FieldEnvData(perf, 0LL)) == 0LL )
    sub_1B64C5C(this, perf);
  BattleFieldEnvironmentData__UpdateAllView((BattleFieldEnvironmentData_o *)this, 0LL);
}