void BattleEndNotRelatedSurvivalStatusInstantlyTask___ctor(
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
    sub_1C3E7C0(v5, v6);
  v7 = arg->fields._FromProcState_k__BackingField == 2
    && ((unsigned int (__fastcall *)(BaseAiActArgument_o *, const MethodInfo *))arg->klass->vtable._4_get_UniqueId.methodPtr)(
         arg,
         arg->klass->vtable._4_get_UniqueId.method) != -1;
  this->fields.isAddAfterDeadTask = v7;
  v8 = arg->fields._FromProcState_k__BackingField == 2
    && ((unsigned int (__fastcall *)(BaseAiActArgument_o *, const MethodInfo *))arg->klass->vtable._4_get_UniqueId.methodPtr)(
         arg,
         arg->klass->vtable._4_get_UniqueId.method) == -1;
  this->fields.isAddLastDeadTask = v8;
}


bool BattleEndNotRelatedSurvivalStatusInstantlyTask__IsAddAfterDeadTask(
        BattleEndNotRelatedSurvivalStatusInstantlyTask_o *this,
        const MethodInfo *method)
{
  return this->fields.isAddAfterDeadTask;
}


bool BattleEndNotRelatedSurvivalStatusInstantlyTask__IsAddLastDeadTask(
        BattleEndNotRelatedSurvivalStatusInstantlyTask_o *this,
        const MethodInfo *method)
{
  return this->fields.isAddLastDeadTask;
}


BattleActionData_o *BattleEndNotRelatedSurvivalStatusInstantlyTask__MakeActionData(
        BattleEndNotRelatedSurvivalStatusInstantlyTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  BattleEndNotRelatedSurvivalStatusInstantlyData_o *v3; // x19

  if ( (byte_4C5A05B & 1) == 0 )
  {
    sub_1C3E564(&BattleEndNotRelatedSurvivalStatusInstantlyData_TypeInfo);
    byte_4C5A05B = 1;
  }
  v3 = (BattleEndNotRelatedSurvivalStatusInstantlyData_o *)sub_1C3E7B0(BattleEndNotRelatedSurvivalStatusInstantlyData_TypeInfo);
  BattleEndNotRelatedSurvivalStatusInstantlyData___ctor(v3, 0);
  return (BattleActionData_o *)v3;
}