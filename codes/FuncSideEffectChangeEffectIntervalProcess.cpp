void __fastcall FuncSideEffectChangeEffectIntervalProcess___ctor(
        FuncSideEffectChangeEffectIntervalProcess_o *this,
        float interval,
        const MethodInfo *method)
{
  ChangeEffectIntervalProcess___ctor((ChangeEffectIntervalProcess_o *)this, interval, 0LL);
}


bool __fastcall FuncSideEffectChangeEffectIntervalProcess__IsMatchCond(
        FuncSideEffectChangeEffectIntervalProcess_o *this,
        BattleActionData_BaseData_array *actBaseDataArray,
        const MethodInfo *method)
{
  if ( (byte_4217211 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, actBaseDataArray);
    byte_4217211 = 1;
  }
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
  }
  return BattleActionData__ExistFuncSideEffectTrigger(actBaseDataArray, 0LL);
}