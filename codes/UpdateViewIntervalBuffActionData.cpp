void UpdateViewIntervalBuffActionData___ctor(
        UpdateViewIntervalBuffActionData_o *this,
        BattleActionData_o *actData,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_59730F7 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    byte_59730F7 = 1;
  }
  if ( !*(&BattleActionData_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, actData);
  BattleActionData___ctor((BattleActionData_o *)this, 0);
  this->fields.state = 7;
  this->fields.targetActionData = actData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetActionData,
    (int32_t)actData,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void UpdateViewIntervalBuffActionData__ExecAction(
        UpdateViewIntervalBuffActionData_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  struct BattleActionData_o *targetActionData; // x0

  targetActionData = this->fields.targetActionData;
  if ( targetActionData )
    ((void (__fastcall *)(struct BattleActionData_o *, const MethodInfo *))targetActionData->klass->vtable._6_UpdateIntervalBuff.methodPtr)(
      targetActionData,
      targetActionData->klass->vtable._6_UpdateIntervalBuff.method);
}