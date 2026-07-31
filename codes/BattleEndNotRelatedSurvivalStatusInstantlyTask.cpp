void BattleEndNotRelatedSurvivalStatusInstantlyTask___ctor(
        BattleEndNotRelatedSurvivalStatusInstantlyTask_o *this,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int v7; // w0
  int32_t FromProcState_k__BackingField; // w8
  bool v9; // w8

  BattleLogicTask___ctor((BattleLogicTask_o *)this, (const MethodInfo *)arg);
  this->fields.actiontype = 72;
  if ( !arg )
    sub_21FFECC(v5, v6);
  if ( arg->fields._FromProcState_k__BackingField == 2 )
  {
    v7 = ((__int64 (__fastcall *)(BaseAiActArgument_o *, const MethodInfo *))arg->klass->vtable._4_get_UniqueId.methodPtr)(
           arg,
           arg->klass->vtable._4_get_UniqueId.method);
    FromProcState_k__BackingField = arg->fields._FromProcState_k__BackingField;
    *(&this->fields.gimmickFixedReelOrder + 1) = v7 != -1;
    v9 = FromProcState_k__BackingField == 2
      && ((unsigned int (__fastcall *)(BaseAiActArgument_o *, const MethodInfo *))arg->klass->vtable._4_get_UniqueId.methodPtr)(
           arg,
           arg->klass->vtable._4_get_UniqueId.method) == -1;
  }
  else
  {
    v9 = 0;
    *(&this->fields.gimmickFixedReelOrder + 1) = 0;
  }
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

  if ( (byte_593BB43 & 1) == 0 )
  {
    sub_21FFC50(&BattleEndNotRelatedSurvivalStatusInstantlyData_TypeInfo);
    byte_593BB43 = 1;
  }
  v3 = (BattleEndNotRelatedSurvivalStatusInstantlyData_o *)sub_21FFEBC(BattleEndNotRelatedSurvivalStatusInstantlyData_TypeInfo);
  BattleEndNotRelatedSurvivalStatusInstantlyData___ctor(v3, 0);
  return (BattleActionData_o *)v3;
}