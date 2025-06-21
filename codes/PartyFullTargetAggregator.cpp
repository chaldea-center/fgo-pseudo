void __fastcall PartyFullTargetAggregator___ctor(PartyFullTargetAggregator_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Int32_array *__fastcall PartyFullTargetAggregator__GetCandidate(
        PartyFullTargetAggregator_o *this,
        const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8
  PartyFullTargetAggregator_o *v3; // x19
  struct TargetAggregator_Args_o *v4; // x9
  char v5; // w8

  args = this->fields.args;
  if ( !args
    || (v3 = this, (this = (PartyFullTargetAggregator_o *)args->fields._battleData_k__BackingField) == 0LL)
    || (this = (PartyFullTargetAggregator_o *)BattleData__isEnemyID(
                                                (BattleData_o *)this,
                                                args->fields._actorId_k__BackingField,
                                                0LL),
        (v4 = v3->fields.args) == 0LL)
    || (v5 = (char)this, (this = (PartyFullTargetAggregator_o *)v4->fields._battleData_k__BackingField) == 0LL) )
  {
    sub_1BCB254(this, method);
  }
  if ( (v5 & 1) != 0 )
    return BattleData__getEnemyServantIDList((BattleData_o *)this, 1, 0, 0LL);
  else
    return BattleData__getPlayerServantIDList((BattleData_o *)this, 1, 0LL, 0LL);
}