void BattleEndNotRelatedSurvivalStatusInstantlyTask___ctor(
        BattleEndNotRelatedSurvivalStatusInstantlyTask_o *this,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  bool v7; // w8
  int32_t FromProcState_k__BackingField; // w9
  bool v9; // w8

  BaseAiActBattleLogicTask___ctor((BaseAiActBattleLogicTask_o *)this, 72, 0);
  if ( !arg
    || (arg->fields._FromProcState_k__BackingField != 2
      ? (v7 = 0)
      : (v5 = ((__int64 (__fastcall *)(BaseAiActArgument_o *, const MethodInfo *))arg->klass->vtable._4_get_UniqueId.methodPtr)(
                arg,
                arg->klass->vtable._4_get_UniqueId.method),
         v7 = (_DWORD)v5 != -1),
        !this) )
  {
    sub_2213CDC(v5, v6);
  }
  FromProcState_k__BackingField = arg->fields._FromProcState_k__BackingField;
  *(&this->fields.gimmickFixedReelOrder + 1) = v7;
  v9 = FromProcState_k__BackingField == 2
    && ((unsigned int (__fastcall *)(BaseAiActArgument_o *, const MethodInfo *))arg->klass->vtable._4_get_UniqueId.methodPtr)(
         arg,
         arg->klass->vtable._4_get_UniqueId.method) == -1;
  *(&this->fields.gimmickFixedReelOrder + 2) = v9;
}


bool BattleEndNotRelatedSurvivalStatusInstantlyTask__IsAddAfterDeadTask(
        BattleEndNotRelatedSurvivalStatusInstantlyTask_o *this,
        const MethodInfo *method)
{
  return *(&this->fields.gimmickFixedReelOrder + 1);
}


bool BattleEndNotRelatedSurvivalStatusInstantlyTask__IsAddLastDeadTask(
        BattleEndNotRelatedSurvivalStatusInstantlyTask_o *this,
        const MethodInfo *method)
{
  return *(&this->fields.gimmickFixedReelOrder + 2);
}


BattleActionData_o *BattleEndNotRelatedSurvivalStatusInstantlyTask__MakeActionData(
        BattleEndNotRelatedSurvivalStatusInstantlyTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  BattleEndNotRelatedSurvivalStatusInstantlyData_o *v3; // x19

  if ( (byte_5973E27 & 1) == 0 )
  {
    sub_2213A60(&BattleEndNotRelatedSurvivalStatusInstantlyData_TypeInfo);
    byte_5973E27 = 1;
  }
  v3 = (BattleEndNotRelatedSurvivalStatusInstantlyData_o *)sub_2213CCC(BattleEndNotRelatedSurvivalStatusInstantlyData_TypeInfo);
  BattleEndNotRelatedSurvivalStatusInstantlyData___ctor(v3, 0);
  return (BattleActionData_o *)v3;
}