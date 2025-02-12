void __fastcall UpdateViewIntervalBuffActionData___ctor(
        UpdateViewIntervalBuffActionData_o *this,
        BattleActionData_o *actData,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BB6A2B & 1) == 0 )
  {
    sub_1C13D24(&BattleActionData_TypeInfo, actData);
    byte_4BB6A2B = 1;
  }
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)this, (const MethodInfo *)actData);
  this->fields.state = 7;
  this->fields.targetActionData = actData;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.targetActionData, (int64_t)actData, v5, v6, v7, v8, v9, v10);
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