void PartyLowsetHpRateTargetChoicer___ctor(PartyLowsetHpRateTargetChoicer_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Int32_array *PartyLowsetHpRateTargetChoicer__GetCandidate(
        PartyLowsetHpRateTargetChoicer_o *this,
        const MethodInfo *method)
{
  System_Int32_array *Candidate; // x20
  Il2CppObject *v4; // x21
  __int64 v5; // x0
  const MethodInfo *v6; // x4
  struct TargetAggregator_Args_o *args; // x8
  BattleServantData_o *MostMatchedServant; // x0
  const MethodInfo *v9; // x2

  if ( (byte_4C3AB8E & 1) == 0 )
  {
    sub_1C32C20(&TargetFilterLowestHpRate_TypeInfo);
    byte_4C3AB8E = 1;
  }
  Candidate = PartyAllFieldTargetAggregator__GetCandidate((PartyAllFieldTargetAggregator_o *)this, method);
  v4 = (Il2CppObject *)sub_1C32E6C(TargetFilterLowestHpRate_TypeInfo);
  System_Object___ctor(v4, 0);
  args = this->fields.args;
  if ( !args )
    sub_1C32E7C(v5);
  MostMatchedServant = TargetAggregator__GetMostMatchedServant(
                         (TargetAggregator_o *)this,
                         Candidate,
                         (TargetFilterLogic_o *)v4,
                         args->fields._actorId_k__BackingField,
                         v6);
  return TargetAggregator__ToServantUniqueIdArray((TargetAggregator_o *)MostMatchedServant, MostMatchedServant, v9);
}