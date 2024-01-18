void __fastcall UpdateViewIntervalBuffActionData___ctor(
        UpdateViewIntervalBuffActionData_o *this,
        BattleActionData_o *actData,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4188A80 & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, actData);
    byte_4188A80 = 1;
  }
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
  }
  BattleActionData___ctor((BattleActionData_o *)this, 0LL);
  this->fields.state = 7;
  this->fields.targetActionData = actData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.targetActionData,
    (System_Int32_array **)actData,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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