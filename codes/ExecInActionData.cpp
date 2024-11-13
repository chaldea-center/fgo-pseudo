void __fastcall ExecInActionData___ctor(ExecInActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B184B4 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, method, v2);
    byte_4B184B4 = 1;
  }
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, method);
  BattleActionData___ctor((BattleActionData_o *)this, method);
  this->fields.state = 8;
}