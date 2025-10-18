void OpponentAllFieldTargetAggregator___ctor(OpponentAllFieldTargetAggregator_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Int32_array *OpponentAllFieldTargetAggregator__GetCandidate(
        OpponentAllFieldTargetAggregator_o *this,
        const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8
  TargetAggregator_o *v3; // x19
  const MethodInfo *v4; // x1
  struct TargetAggregator_Args_o *v5; // x8
  BattleData_o *battleData_k__BackingField; // x20

  args = this->fields.args;
  if ( !args )
    goto LABEL_9;
  v3 = (TargetAggregator_o *)this;
  this = (OpponentAllFieldTargetAggregator_o *)args->fields._battleData_k__BackingField;
  if ( !this )
    goto LABEL_9;
  this = (OpponentAllFieldTargetAggregator_o *)BattleData__isEnemyID(
                                                 (BattleData_o *)this,
                                                 args->fields._actorId_k__BackingField,
                                                 0);
  v5 = v3->fields.args;
  if ( !v5 )
    goto LABEL_9;
  battleData_k__BackingField = v5->fields._battleData_k__BackingField;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( battleData_k__BackingField )
      return BattleData__getFieldPlayerServantIDList(v5->fields._battleData_k__BackingField, 0, 0);
LABEL_9:
    sub_1C372B4(this);
  }
  this = (OpponentAllFieldTargetAggregator_o *)TargetAggregator__get_IsOpponentTargetOnly(v3, v4);
  if ( !battleData_k__BackingField )
    goto LABEL_9;
  return BattleData__getFieldEnemyServantIDList(battleData_k__BackingField, (unsigned __int8)this & 1, 0);
}