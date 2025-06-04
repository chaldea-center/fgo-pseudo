void __fastcall FuncSideEffectChangeEffectIntervalProcess___ctor(
        FuncSideEffectChangeEffectIntervalProcess_o *this,
        float interval,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Interval_k__BackingField = interval;
}


bool __fastcall FuncSideEffectChangeEffectIntervalProcess__IsMatchCond(
        FuncSideEffectChangeEffectIntervalProcess_o *this,
        BattleActionData_BaseData_array *actBaseDataArray,
        const MethodInfo *method)
{
  if ( (byte_4B04792 & 1) == 0 )
  {
    sub_1BC3008(&BattleActionData_TypeInfo, actBaseDataArray);
    byte_4B04792 = 1;
  }
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
  return BattleActionData__ExistFuncSideEffectTrigger(actBaseDataArray, 0LL);
}