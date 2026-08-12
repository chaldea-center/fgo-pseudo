void UpdateFieldViewActionData___ctor(UpdateFieldViewActionData_o *this, const MethodInfo *method)
{
  if ( (byte_59730F6 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    byte_59730F6 = 1;
  }
  if ( !*(&BattleActionData_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, method);
  BattleActionData___ctor((BattleActionData_o *)this, 0);
  this->fields.state = 7;
}


void UpdateFieldViewActionData__ExecAction(
        UpdateFieldViewActionData_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  if ( !perf )
    sub_2213CDC(this, 0);
  BattlePerformance__UpdateFieldView(perf, 0);
}