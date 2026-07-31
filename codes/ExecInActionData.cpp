void ExecInActionData___ctor(ExecInActionData_o *this, const MethodInfo *method)
{
  if ( (byte_593AF19 & 1) == 0 )
  {
    sub_21FFC50(&BattleActionData_TypeInfo);
    byte_593AF19 = 1;
  }
  if ( !*(&BattleActionData_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, method);
  BattleActionData___ctor((BattleActionData_o *)this, 0);
  this->fields.state = 8;
}