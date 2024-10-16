void __fastcall PartyAllFieldTargetAggregator___ctor(PartyAllFieldTargetAggregator_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Int32_array *__fastcall PartyAllFieldTargetAggregator__GetCandidate(
        PartyAllFieldTargetAggregator_o *this,
        const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8
  PartyAllFieldTargetAggregator_o *v3; // x19
  struct TargetAggregator_Args_o *v4; // x9
  char v5; // w8

  args = this->fields.args;
  if ( !args
    || (v3 = this, (this = (PartyAllFieldTargetAggregator_o *)args->fields._battleData_k__BackingField) == 0LL)
    || (this = (PartyAllFieldTargetAggregator_o *)BattleData__isEnemyID(
                                                    (BattleData_o *)this,
                                                    args->fields._actorId_k__BackingField,
                                                    0LL),
        (v4 = v3->fields.args) == 0LL)
    || (v5 = (char)this, (this = (PartyAllFieldTargetAggregator_o *)v4->fields._battleData_k__BackingField) == 0LL) )
  {
    sub_1BAB678(this, method);
  }
  if ( (v5 & 1) != 0 )
    return BattleData__getFieldEnemyServantIDList((BattleData_o *)this, 0, 0LL);
  else
    return BattleData__getFieldPlayerServantIDList((BattleData_o *)this, 0LL, 0LL);
}