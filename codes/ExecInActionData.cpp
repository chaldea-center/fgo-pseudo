void __fastcall ExecInActionData___ctor(ExecInActionData_o *this, const MethodInfo *method)
{
  if ( (byte_4389FC6 & 1) == 0 )
  {
    sub_B775C4(&BattleActionData_TypeInfo);
    byte_4389FC6 = 1;
  }
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
  }
  BattleActionData___ctor((BattleActionData_o *)this, 0LL);
  this->fields.state = 8;
}