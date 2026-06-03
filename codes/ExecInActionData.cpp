void ExecInActionData___ctor(ExecInActionData_o *this, const MethodInfo *method)
{
  if ( (byte_4E7A019 & 1) == 0 )
  {
    sub_1D0F0B4(&BattleActionData_TypeInfo);
    byte_4E7A019 = 1;
  }
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)this, 0);
  this->fields.state = 8;
}