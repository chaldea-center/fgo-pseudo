void PartyFullTargetAggregator___ctor(PartyFullTargetAggregator_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Int32_array *PartyFullTargetAggregator__GetCandidate(
        PartyFullTargetAggregator_o *this,
        const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8
  PartyFullTargetAggregator_o *v3; // x19
  struct TargetAggregator_Args_o *v4; // x8

  args = this->fields.args;
  if ( !args )
    goto LABEL_10;
  v3 = this;
  this = (PartyFullTargetAggregator_o *)args->fields._battleData_k__BackingField;
  if ( !this )
    goto LABEL_10;
  this = (PartyFullTargetAggregator_o *)BattleData__isEnemyID(
                                          (BattleData_o *)this,
                                          args->fields._actorId_k__BackingField,
                                          0);
  v4 = v3->fields.args;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v4 )
    {
      this = (PartyFullTargetAggregator_o *)v4->fields._battleData_k__BackingField;
      if ( this )
        return BattleData__getEnemyServantIDList((BattleData_o *)this, 1, 0, 0);
    }
LABEL_10:
    sub_21FFECC(this, method);
  }
  if ( !v4 )
    goto LABEL_10;
  this = (PartyFullTargetAggregator_o *)v4->fields._battleData_k__BackingField;
  if ( !this )
    goto LABEL_10;
  return BattleData__getPlayerServantIDList((BattleData_o *)this, 1, 0, 0);
}