void UpdateAllViewActionData__ExecAction(
        UpdateAllViewActionData_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  if ( !perf
    || (this = (UpdateAllViewActionData_o *)BattlePerformance__get_FieldEnvData(perf, 0)) == 0
    || (BattleFieldEnvironmentData__UpdateAllView((BattleFieldEnvironmentData_o *)this, 0),
        (this = (UpdateAllViewActionData_o *)perf->fields.logic) == 0) )
  {
    sub_1C942F0(this, perf);
  }
  BattleLogic__UpdateConditionBuffPlayerSubMember((BattleLogic_o *)this, 0, 0, 0);
}