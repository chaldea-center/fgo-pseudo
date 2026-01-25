void UpdateFieldViewActionData___ctor(UpdateFieldViewActionData_o *this, const MethodInfo *method)
{
  if ( (byte_4CF0C3E & 1) == 0 )
  {
    sub_1C7BAE8(&BattleActionData_TypeInfo);
    byte_4CF0C3E = 1;
  }
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)this, method);
  this->fields.state = 7;
}


void UpdateFieldViewActionData__ExecAction(
        UpdateFieldViewActionData_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  if ( !perf )
    sub_1C7BD40(this, 0);
  BattlePerformance__UpdateFieldView(perf, 0);
}