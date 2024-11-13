void __fastcall UpdateFieldViewActionData___ctor(UpdateFieldViewActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B184AC & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, method, v2);
    byte_4B184AC = 1;
  }
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, method);
  BattleActionData___ctor((BattleActionData_o *)this, method);
  this->fields.state = 7;
}


void __fastcall UpdateFieldViewActionData__ExecAction(
        UpdateFieldViewActionData_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  if ( !perf )
    sub_1BCAA3C(this, 0LL);
  BattlePerformance__UpdateFieldView(perf, 0LL);
}