void __fastcall UpdateFieldViewActionData___ctor(UpdateFieldViewActionData_o *this, const MethodInfo *method)
{
  if ( (byte_4B1EA42 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleActionData_TypeInfo, method);
    byte_4B1EA42 = 1;
  }
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)this, 0LL);
  this->fields.state = 7;
}


void __fastcall UpdateFieldViewActionData__ExecAction(
        UpdateFieldViewActionData_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  if ( !perf )
    sub_1BCB254(this, 0LL);
  BattlePerformance__UpdateFieldView(perf, 0LL);
}