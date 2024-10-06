void __fastcall UpdateFieldViewActionData___ctor(UpdateFieldViewActionData_o *this, const MethodInfo *method)
{
  if ( (byte_4A720EE & 1) == 0 )
  {
    sub_1B90010(&BattleActionData_TypeInfo, method);
    byte_4A720EE = 1;
  }
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)this, method);
  this->fields.state = 7;
}


void __fastcall UpdateFieldViewActionData__ExecAction(
        UpdateFieldViewActionData_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  if ( !perf )
    sub_1B9026C(this, 0LL);
  BattlePerformance__UpdateFieldView(perf, 0LL);
}