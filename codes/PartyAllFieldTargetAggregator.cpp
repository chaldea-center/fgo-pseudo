void PartyAllFieldTargetAggregator___ctor(PartyAllFieldTargetAggregator_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Int32_array *PartyAllFieldTargetAggregator__GetCandidate(
        PartyAllFieldTargetAggregator_o *this,
        const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8
  PartyAllFieldTargetAggregator_o *v3; // x19
  struct TargetAggregator_Args_o *v4; // x9
  char v5; // w8

  args = this->fields.args;
  if ( !args
    || (v3 = this, (this = (PartyAllFieldTargetAggregator_o *)args->fields._battleData_k__BackingField) == 0)
    || (this = (PartyAllFieldTargetAggregator_o *)BattleData__isEnemyID(
                                                    (BattleData_o *)this,
                                                    args->fields._actorId_k__BackingField,
                                                    0),
        (v4 = v3->fields.args) == 0)
    || (v5 = (char)this, (this = (PartyAllFieldTargetAggregator_o *)v4->fields._battleData_k__BackingField) == 0) )
  {
    sub_1C32E7C(this);
  }
  if ( (v5 & 1) != 0 )
    return BattleData__getFieldEnemyServantIDList((BattleData_o *)this, 0, 0);
  else
    return BattleData__getFieldPlayerServantIDList((BattleData_o *)this, 0, 0);
}