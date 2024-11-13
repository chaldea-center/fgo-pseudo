void __fastcall PartyLowsetHpRateTargetChoicer___ctor(PartyLowsetHpRateTargetChoicer_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Int32_array *__fastcall PartyLowsetHpRateTargetChoicer__GetCandidate(
        PartyLowsetHpRateTargetChoicer_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Int32_array *Candidate; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  Il2CppObject *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4
  struct TargetAggregator_Args_o *args; // x8
  BattleServantData_o *MostMatchedServant; // x0
  const MethodInfo *v14; // x2

  if ( (byte_4B18F47 & 1) == 0 )
  {
    sub_1BCA7E0(&TargetFilterLowestHpRate_TypeInfo, method, v2);
    byte_4B18F47 = 1;
  }
  Candidate = PartyAllFieldTargetAggregator__GetCandidate((PartyAllFieldTargetAggregator_o *)this, method);
  v8 = (Il2CppObject *)sub_1BCAA2C(TargetFilterLowestHpRate_TypeInfo, v5, v6, v7);
  System_Object___ctor(v8, 0LL);
  args = this->fields.args;
  if ( !args )
    sub_1BCAA3C(v9, v10);
  MostMatchedServant = TargetAggregator__GetMostMatchedServant(
                         (TargetAggregator_o *)this,
                         Candidate,
                         (TargetFilterLogic_o *)v8,
                         args->fields._actorId_k__BackingField,
                         v11);
  return TargetAggregator__ToServantUniqueIdArray((TargetAggregator_o *)MostMatchedServant, MostMatchedServant, v14);
}