void PartyLowsetHpValueTargetChoicer___ctor(PartyLowsetHpValueTargetChoicer_o *this, const MethodInfo *method)
{
  TargetAggregator___ctor((TargetAggregator_o *)this, 0);
}


System_Int32_array *PartyLowsetHpValueTargetChoicer__GetCandidate(
        PartyLowsetHpValueTargetChoicer_o *this,
        const MethodInfo *method)
{
  System_Int32_array *Candidate; // x20
  Il2CppObject *v4; // x21
  int32_t actorId; // w0
  BattleServantData_o *MostMatchedServant; // x1

  if ( (byte_4CCA859 & 1) == 0 )
  {
    sub_1C713B0(&TargetFilterLowestHpValue_TypeInfo);
    byte_4CCA859 = 1;
  }
  Candidate = PartyAllFieldTargetAggregator__GetCandidate((PartyAllFieldTargetAggregator_o *)this, method);
  v4 = (Il2CppObject *)sub_1C715FC(TargetFilterLowestHpValue_TypeInfo);
  System_Object___ctor(v4, 0);
  actorId = TargetAggregator__get_actorId((TargetAggregator_o *)this, 0);
  MostMatchedServant = TargetAggregator__GetMostMatchedServant(
                         (TargetAggregator_o *)this,
                         Candidate,
                         (TargetFilterLogic_o *)v4,
                         actorId,
                         0);
  return TargetAggregator__ToServantUniqueIdArray((TargetAggregator_o *)this, MostMatchedServant, 0);
}