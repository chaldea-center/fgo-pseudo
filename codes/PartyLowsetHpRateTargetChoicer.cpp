void __fastcall PartyLowsetHpRateTargetChoicer___ctor(PartyLowsetHpRateTargetChoicer_o *this, const MethodInfo *method)
{
  PartyAllFieldTargetAggregator___ctor((PartyAllFieldTargetAggregator_o *)this, 0LL);
}


System_Int32_array *__fastcall PartyLowsetHpRateTargetChoicer__GetCandidate(
        PartyLowsetHpRateTargetChoicer_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Int32_array *Candidate; // x20
  TargetFilterLowestHpRate_o *v6; // x21
  int32_t actorId; // w0
  BattleServantData_o *MostMatchedServant; // x1

  if ( (byte_42ECEAF & 1) == 0 )
  {
    sub_B5D5C4(&TargetFilterLowestHpRate_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECEAF = 1;
  }
  Candidate = PartyAllFieldTargetAggregator__GetCandidate((PartyAllFieldTargetAggregator_o *)this, 0LL);
  v6 = (TargetFilterLowestHpRate_o *)sub_B5D694(TargetFilterLowestHpRate_TypeInfo);
  TargetFilterLowestHpRate___ctor(v6, 0LL);
  actorId = TargetAggregator__get_actorId((TargetAggregator_o *)this, 0LL);
  MostMatchedServant = TargetAggregator__GetMostMatchedServant(
                         (TargetAggregator_o *)this,
                         Candidate,
                         (TargetFilterLogic_o *)v6,
                         actorId,
                         0LL);
  return TargetAggregator__ToServantUniqueIdArray((TargetAggregator_o *)this, MostMatchedServant, 0LL);
}