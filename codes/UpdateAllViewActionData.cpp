// attributes: thunk
void __fastcall UpdateAllViewActionData___ctor(UpdateAllViewActionData_o *this, const MethodInfo *method)
{
  UpdateFieldViewActionData___ctor((UpdateFieldViewActionData_o *)this, method);
}


void __fastcall UpdateAllViewActionData__ExecAction(
        UpdateAllViewActionData_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  if ( !perf || (this = (UpdateAllViewActionData_o *)BattlePerformance__get_FieldEnvData(perf, 0LL)) == 0LL )
    sub_B2C434(this, perf);
  BattleFieldEnvironmentData__UpdateAllView((BattleFieldEnvironmentData_o *)this, 0LL);
}