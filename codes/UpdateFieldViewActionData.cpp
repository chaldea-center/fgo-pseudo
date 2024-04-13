void __fastcall UpdateFieldViewActionData___ctor(UpdateFieldViewActionData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA13E & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA13E = 1;
  }
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
  }
  BattleActionData___ctor((BattleActionData_o *)this, 0LL);
  this->fields.state = 7;
}


void __fastcall UpdateFieldViewActionData__ExecAction(
        UpdateFieldViewActionData_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  if ( !perf )
    sub_B5D69C(this, 0LL);
  BattlePerformance__UpdateFieldView(perf, 0LL);
}