void UpdateViewIntervalBuffActionData___ctor(
        UpdateViewIntervalBuffActionData_o *this,
        BattleActionData_o *actData,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C59427 & 1) == 0 )
  {
    sub_1C3E564(&BattleActionData_TypeInfo);
    byte_4C59427 = 1;
  }
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)this, (const MethodInfo *)actData);
  this->fields.state = 7;
  this->fields.targetActionData = actData;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.targetActionData, (int32_t)actData, v5, v6);
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