void __fastcall PartyOtherFullTargetAggregator___ctor(PartyOtherFullTargetAggregator_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Int32_array *__fastcall PartyOtherFullTargetAggregator__GetCandidate(
        PartyOtherFullTargetAggregator_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Candidate; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  System_Func_int__bool__o *v9; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_49FF060 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_int___, v3);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v4);
    sub_1B640C8(&Method_PartyOtherFullTargetAggregator__GetCandidate_b__0_0__, v5);
    byte_49FF060 = 1;
  }
  Candidate = (System_Collections_Generic_IEnumerable_TSource__o *)PartyFullTargetAggregator__GetCandidate(
                                                                     (PartyFullTargetAggregator_o *)this,
                                                                     method);
  v9 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v7, v8);
  System_Func_int__bool____ctor(
    v9,
    (Il2CppObject *)this,
    Method_PartyOtherFullTargetAggregator__GetCandidate_b__0_0__,
    0LL);
  v10 = System_Linq_Enumerable__Where_int_(
          Candidate,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_2E76DC8 *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v10,
           (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
}


bool __fastcall PartyOtherFullTargetAggregator___GetCandidate_b__0_0(
        PartyOtherFullTargetAggregator_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1B64324(this);
  return args->fields._actorId_k__BackingField != x;
}