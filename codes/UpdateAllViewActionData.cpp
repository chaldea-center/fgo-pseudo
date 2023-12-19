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
  BattleFieldEnvironmentData_o *FieldEnvData; // x0

  if ( !perf || (FieldEnvData = BattlePerformance__get_FieldEnvData(perf, 0LL)) == 0LL )
    sub_B170D4();
  BattleFieldEnvironmentData__UpdateAllView(FieldEnvData, 0LL);
}