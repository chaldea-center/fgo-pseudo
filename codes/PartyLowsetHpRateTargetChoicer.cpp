void __fastcall PartyLowsetHpRateTargetChoicer___ctor(PartyLowsetHpRateTargetChoicer_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Int32_array *__fastcall PartyLowsetHpRateTargetChoicer__GetCandidate(
        PartyLowsetHpRateTargetChoicer_o *this,
        const MethodInfo *method)
{
  System_Int32_array *Candidate; // x20
  Il2CppObject *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4
  struct TargetAggregator_Args_o *args; // x8
  BattleServantData_o *MostMatchedServant; // x0
  const MethodInfo *v10; // x2

  if ( (byte_4B0508B & 1) == 0 )
  {
    sub_1BC3008(&TargetFilterLowestHpRate_TypeInfo, method);
    byte_4B0508B = 1;
  }
  Candidate = PartyAllFieldTargetAggregator__GetCandidate((PartyAllFieldTargetAggregator_o *)this, method);
  v4 = (Il2CppObject *)sub_1BC3254(TargetFilterLowestHpRate_TypeInfo);
  System_Object___ctor(v4, 0LL);
  args = this->fields.args;
  if ( !args )
    sub_1BC3264(v5, v6);
  MostMatchedServant = TargetAggregator__GetMostMatchedServant(
                         (TargetAggregator_o *)this,
                         Candidate,
                         (TargetFilterLogic_o *)v4,
                         args->fields._actorId_k__BackingField,
                         v7);
  return TargetAggregator__ToServantUniqueIdArray((TargetAggregator_o *)MostMatchedServant, MostMatchedServant, v10);
}