void __fastcall ExecInActionData___ctor(ExecInActionData_o *this, const MethodInfo *method)
{
  if ( (byte_43508E2 & 1) == 0 )
  {
    sub_B70694(&BattleActionData_TypeInfo);
    byte_43508E2 = 1;
  }
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
  }
  BattleActionData___ctor((BattleActionData_o *)this, 0LL);
  this->fields.state = 8;
}