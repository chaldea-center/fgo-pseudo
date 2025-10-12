void PartyOtherTargetAggregator___ctor(PartyOtherTargetAggregator_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Int32_array *PartyOtherTargetAggregator__GetCandidate(
        PartyOtherTargetAggregator_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *Candidate; // x20
  System_Func_int__bool__o *v4; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0

  if ( (byte_4C3AB88 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C32C20(&System_Func_int__bool__TypeInfo);
    sub_1C32C20(&Method_PartyOtherTargetAggregator__GetCandidate_b__0_0__);
    byte_4C3AB88 = 1;
  }
  Candidate = (System_Collections_Generic_IEnumerable_TSource__o *)PartyAllFieldTargetAggregator__GetCandidate(
                                                                     (PartyAllFieldTargetAggregator_o *)this,
                                                                     method);
  v4 = (System_Func_int__bool__o *)sub_1C32E6C(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(v4, (Il2CppObject *)this, Method_PartyOtherTargetAggregator__GetCandidate_b__0_0__, 0);
  v5 = System_Linq_Enumerable__Where_int_(
         Candidate,
         (System_Func_TSource__bool__o *)v4,
         (const MethodInfo_3123600 *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v5,
           (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
}


bool PartyOtherTargetAggregator___GetCandidate_b__0_0(
        PartyOtherTargetAggregator_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1C32E7C(this);
  return args->fields._actorId_k__BackingField != x;
}