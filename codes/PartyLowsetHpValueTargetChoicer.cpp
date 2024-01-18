void __fastcall PartyLowsetHpValueTargetChoicer___ctor(
        PartyLowsetHpValueTargetChoicer_o *this,
        const MethodInfo *method)
{
  PartyAllFieldTargetAggregator___ctor((PartyAllFieldTargetAggregator_o *)this, 0LL);
}


System_Int32_array *__fastcall PartyLowsetHpValueTargetChoicer__GetCandidate(
        PartyLowsetHpValueTargetChoicer_o *this,
        const MethodInfo *method)
{
  System_Int32_array *Candidate; // x20
  TargetFilterLowestHpValue_o *v4; // x21
  int32_t actorId; // w0
  BattleServantData_o *MostMatchedServant; // x1

  if ( (byte_418B556 & 1) == 0 )
  {
    sub_B2C35C(&TargetFilterLowestHpValue_TypeInfo, method);
    byte_418B556 = 1;
  }
  Candidate = PartyAllFieldTargetAggregator__GetCandidate((PartyAllFieldTargetAggregator_o *)this, 0LL);
  v4 = (TargetFilterLowestHpValue_o *)sub_B2C42C(TargetFilterLowestHpValue_TypeInfo);
  TargetFilterLowestHpValue___ctor(v4, 0LL);
  actorId = TargetAggregator__get_actorId((TargetAggregator_o *)this, 0LL);
  MostMatchedServant = TargetAggregator__GetMostMatchedServant(
                         (TargetAggregator_o *)this,
                         Candidate,
                         (TargetFilterLogic_o *)v4,
                         actorId,
                         0LL);
  return TargetAggregator__ToServantUniqueIdArray((TargetAggregator_o *)this, MostMatchedServant, 0LL);
}