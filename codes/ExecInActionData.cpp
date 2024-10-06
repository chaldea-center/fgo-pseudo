void __fastcall ExecInActionData___ctor(ExecInActionData_o *this, const MethodInfo *method)
{
  if ( (byte_4A720F6 & 1) == 0 )
  {
    sub_1B90010(&BattleActionData_TypeInfo, method);
    byte_4A720F6 = 1;
  }
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)this, method);
  this->fields.state = 8;
}