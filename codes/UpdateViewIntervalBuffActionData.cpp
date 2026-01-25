void UpdateViewIntervalBuffActionData___ctor(
        UpdateViewIntervalBuffActionData_o *this,
        BattleActionData_o *actData,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4CF0C3F & 1) == 0 )
  {
    sub_1C7BAE8(&BattleActionData_TypeInfo);
    byte_4CF0C3F = 1;
  }
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)this, (const MethodInfo *)actData);
  this->fields.state = 7;
  this->fields.targetActionData = actData;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.targetActionData, (int32_t)actData, v5, v6, v7, v8, v9, v10);
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