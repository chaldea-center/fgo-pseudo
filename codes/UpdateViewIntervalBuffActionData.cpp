void __fastcall UpdateViewIntervalBuffActionData___ctor(
        UpdateViewIntervalBuffActionData_o *this,
        BattleActionData_o *actData,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4AB7FE3 & 1) == 0 )
  {
    sub_1BAB41C(&BattleActionData_TypeInfo, actData);
    byte_4AB7FE3 = 1;
  }
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)this, (const MethodInfo *)actData);
  this->fields.state = 7;
  this->fields.targetActionData = actData;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.targetActionData, (int32_t)actData, v5, v6);
}


void __fastcall UpdateViewIntervalBuffActionData__ExecAction(
        UpdateViewIntervalBuffActionData_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  struct BattleActionData_o *targetActionData; // x0

  targetActionData = this->fields.targetActionData;
  if ( targetActionData )
    ((void (__fastcall *)(struct BattleActionData_o *, Il2CppMethodPointer))targetActionData->klass->vtable._6_UpdateIntervalBuff.method)(
      targetActionData,
      targetActionData->klass->vtable._7_UpdateIntervalBuffData.methodPtr);
}