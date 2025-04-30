void __fastcall BattleEndNotRelatedSurvivalStatusInstantlyTask___ctor(
        BattleEndNotRelatedSurvivalStatusInstantlyTask_o *this,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  bool v7; // w8
  bool v8; // w8

  BattleLogicTask___ctor((BattleLogicTask_o *)this, (const MethodInfo *)arg);
  this->fields.actiontype = 72;
  if ( !arg )
    sub_1B86614(v5, v6);
  v7 = arg->fields._FromProcState_k__BackingField == 2
    && ((__int64 (__fastcall *)(BaseAiActArgument_o *, Il2CppMethodPointer))arg->klass->vtable._4_get_UniqueId.method)(
         arg,
         arg->klass->vtable._5_InitCommonTask.methodPtr) != -1;
  this->fields.isAddAfterDeadTask = v7;
  v8 = arg->fields._FromProcState_k__BackingField == 2
    && ((__int64 (__fastcall *)(BaseAiActArgument_o *, Il2CppMethodPointer))arg->klass->vtable._4_get_UniqueId.method)(
         arg,
         arg->klass->vtable._5_InitCommonTask.methodPtr) == -1;
  this->fields.isAddLastDeadTask = v8;
}


bool __fastcall BattleEndNotRelatedSurvivalStatusInstantlyTask__IsAddAfterDeadTask(
        BattleEndNotRelatedSurvivalStatusInstantlyTask_o *this,
        const MethodInfo *method)
{
  return this->fields.isAddAfterDeadTask;
}


bool __fastcall BattleEndNotRelatedSurvivalStatusInstantlyTask__IsAddLastDeadTask(
        BattleEndNotRelatedSurvivalStatusInstantlyTask_o *this,
        const MethodInfo *method)
{
  return this->fields.isAddLastDeadTask;
}


BattleActionData_o *__fastcall BattleEndNotRelatedSurvivalStatusInstantlyTask__MakeActionData(
        BattleEndNotRelatedSurvivalStatusInstantlyTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  BattleEndNotRelatedSurvivalStatusInstantlyData_o *v3; // x19

  if ( (byte_4A514FA & 1) == 0 )
  {
    sub_1B863B8(&BattleEndNotRelatedSurvivalStatusInstantlyData_TypeInfo, logic);
    byte_4A514FA = 1;
  }
  v3 = (BattleEndNotRelatedSurvivalStatusInstantlyData_o *)sub_1B86604(BattleEndNotRelatedSurvivalStatusInstantlyData_TypeInfo);
  BattleEndNotRelatedSurvivalStatusInstantlyData___ctor(v3, 0LL);
  return (BattleActionData_o *)v3;
}