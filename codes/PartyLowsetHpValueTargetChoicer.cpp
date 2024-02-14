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
  __int64 v4; // x1
  __int64 v5; // x2
  TargetFilterLowestHpValue_o *v6; // x21
  int32_t actorId; // w0
  BattleServantData_o *MostMatchedServant; // x1

  if ( (byte_421822E & 1) == 0 )
  {
    sub_B0D8A4(&TargetFilterLowestHpValue_TypeInfo, method);
    byte_421822E = 1;
  }
  Candidate = PartyAllFieldTargetAggregator__GetCandidate((PartyAllFieldTargetAggregator_o *)this, 0LL);
  v6 = (TargetFilterLowestHpValue_o *)sub_B0D974(TargetFilterLowestHpValue_TypeInfo, v4, v5);
  TargetFilterLowestHpValue___ctor(v6, 0LL);
  actorId = TargetAggregator__get_actorId((TargetAggregator_o *)this, 0LL);
  MostMatchedServant = TargetAggregator__GetMostMatchedServant(
                         (TargetAggregator_o *)this,
                         Candidate,
                         (TargetFilterLogic_o *)v6,
                         actorId,
                         0LL);
  return TargetAggregator__ToServantUniqueIdArray((TargetAggregator_o *)this, MostMatchedServant, 0LL);
}