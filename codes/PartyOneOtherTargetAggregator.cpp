void __fastcall PartyOneOtherTargetAggregator___ctor(PartyOneOtherTargetAggregator_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Int32_array *__fastcall PartyOneOtherTargetAggregator__GetCandidate(
        PartyOneOtherTargetAggregator_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *Candidate; // x20
  System_Func_int__bool__o *v4; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0

  if ( (byte_4A5DE24 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_int___);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&Method_PartyOneOtherTargetAggregator__GetCandidate_b__0_0__);
    byte_4A5DE24 = 1;
  }
  Candidate = (System_Collections_Generic_IEnumerable_TSource__o *)PartyAllFieldTargetAggregator__GetCandidate(
                                                                     (PartyAllFieldTargetAggregator_o *)this,
                                                                     method);
  v4 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v4,
    (Il2CppObject *)this,
    Method_PartyOneOtherTargetAggregator__GetCandidate_b__0_0__,
    0LL);
  v5 = System_Linq_Enumerable__Where_int_(
         Candidate,
         (System_Func_TSource__bool__o *)v4,
         (const MethodInfo_2EBDDA8 *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v5,
           (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
}


bool __fastcall PartyOneOtherTargetAggregator___GetCandidate_b__0_0(
        PartyOneOtherTargetAggregator_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1B8880C(this, x);
  return args->fields._ptTargetId_k__BackingField != x;
}