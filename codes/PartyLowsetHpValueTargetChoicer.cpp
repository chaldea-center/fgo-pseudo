void __fastcall PartyLowsetHpValueTargetChoicer___ctor(
        PartyLowsetHpValueTargetChoicer_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Int32_array *__fastcall PartyLowsetHpValueTargetChoicer__GetCandidate(
        PartyLowsetHpValueTargetChoicer_o *this,
        const MethodInfo *method)
{
  System_Int32_array *Candidate; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *v6; // x21
  __int64 v7; // x0
  const MethodInfo *v8; // x4
  struct TargetAggregator_Args_o *args; // x8
  BattleServantData_o *MostMatchedServant; // x0
  const MethodInfo *v11; // x2

  if ( (byte_49FF062 & 1) == 0 )
  {
    sub_1B640C8(&TargetFilterLowestHpValue_TypeInfo, method);
    byte_49FF062 = 1;
  }
  Candidate = PartyAllFieldTargetAggregator__GetCandidate((PartyAllFieldTargetAggregator_o *)this, method);
  v6 = (Il2CppObject *)sub_1B64314(TargetFilterLowestHpValue_TypeInfo, v4, v5);
  System_Object___ctor(v6, 0LL);
  args = this->fields.args;
  if ( !args )
    sub_1B64324(v7);
  MostMatchedServant = TargetAggregator__GetMostMatchedServant(
                         (TargetAggregator_o *)this,
                         Candidate,
                         (TargetFilterLogic_o *)v6,
                         args->fields._actorId_k__BackingField,
                         v8);
  return TargetAggregator__ToServantUniqueIdArray((TargetAggregator_o *)MostMatchedServant, MostMatchedServant, v11);
}