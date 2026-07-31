void FuncSideEffectChangeEffectIntervalProcess___ctor(
        FuncSideEffectChangeEffectIntervalProcess_o *this,
        float interval,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Interval_k__BackingField = interval;
}


bool FuncSideEffectChangeEffectIntervalProcess__IsMatchCond(
        FuncSideEffectChangeEffectIntervalProcess_o *this,
        BattleActionData_BaseData_array *actBaseDataArray,
        const MethodInfo *method)
{
  if ( (byte_593B151 & 1) == 0 )
  {
    sub_21FFC50(&BattleActionData_TypeInfo);
    byte_593B151 = 1;
  }
  if ( !*(&BattleActionData_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, actBaseDataArray);
  return BattleActionData__ExistFuncSideEffectTrigger(actBaseDataArray, 0);
}