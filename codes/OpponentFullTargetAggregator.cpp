void OpponentFullTargetAggregator___ctor(OpponentFullTargetAggregator_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Int32_array *OpponentFullTargetAggregator__GetCandidate(
        OpponentFullTargetAggregator_o *this,
        const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8
  TargetAggregator_o *v3; // x19
  struct TargetAggregator_Args_o *v4; // x8
  BattleData_o *battleData_k__BackingField; // x20

  args = this->fields.args;
  if ( !args )
    goto LABEL_9;
  v3 = (TargetAggregator_o *)this;
  this = (OpponentFullTargetAggregator_o *)args->fields._battleData_k__BackingField;
  if ( !this )
    goto LABEL_9;
  this = (OpponentFullTargetAggregator_o *)BattleData__isEnemyID(
                                             (BattleData_o *)this,
                                             args->fields._actorId_k__BackingField,
                                             0);
  v4 = v3->fields.args;
  if ( !v4 )
    goto LABEL_9;
  battleData_k__BackingField = v4->fields._battleData_k__BackingField;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( battleData_k__BackingField )
      return BattleData__getPlayerServantIDList(v4->fields._battleData_k__BackingField, 1, 0, 0);
LABEL_9:
    sub_1C7BD40(this, method);
  }
  this = (OpponentFullTargetAggregator_o *)TargetAggregator__get_IsOpponentTargetOnly(v3, method);
  if ( !battleData_k__BackingField )
    goto LABEL_9;
  return BattleData__getEnemyServantIDList(battleData_k__BackingField, 1, (unsigned __int8)this & 1, 0);
}