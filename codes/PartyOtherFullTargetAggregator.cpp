void __fastcall PartyOtherFullTargetAggregator___ctor(PartyOtherFullTargetAggregator_o *this, const MethodInfo *method)
{
  PartyFullTargetAggregator___ctor((PartyFullTargetAggregator_o *)this, 0LL);
}


System_Int32_array *__fastcall PartyOtherFullTargetAggregator__GetCandidate(
        PartyOtherFullTargetAggregator_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Candidate; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  System_Func_int__bool__o *v10; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0

  if ( (byte_4217F9B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_int___, v3);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v4);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v5);
    sub_B0D8A4(&Method_PartyOtherFullTargetAggregator__GetCandidate_b__0_0__, v6);
    byte_4217F9B = 1;
  }
  Candidate = (System_Collections_Generic_IEnumerable_TSource__o *)PartyFullTargetAggregator__GetCandidate(
                                                                     (PartyFullTargetAggregator_o *)this,
                                                                     0LL);
  v10 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v8, v9);
  System_Func_int__bool____ctor(
    v10,
    (Il2CppObject *)this,
    Method_PartyOtherFullTargetAggregator__GetCandidate_b__0_0__,
    (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
  v11 = System_Linq_Enumerable__Where_int_(
          Candidate,
          (System_Func_TSource__bool__o *)v10,
          (const MethodInfo_1B5A41C *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v11,
           (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
}


bool __fastcall PartyOtherFullTargetAggregator___GetCandidate_b__0_0(
        PartyOtherFullTargetAggregator_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return TargetAggregator__get_actorId((TargetAggregator_o *)this, 0LL) != x;
}