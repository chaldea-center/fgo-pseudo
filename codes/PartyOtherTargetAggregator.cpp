void __fastcall PartyOtherTargetAggregator___ctor(PartyOtherTargetAggregator_o *this, const MethodInfo *method)
{
  PartyAllFieldTargetAggregator___ctor((PartyAllFieldTargetAggregator_o *)this, 0LL);
}


System_Int32_array *__fastcall PartyOtherTargetAggregator__GetCandidate(
        PartyOtherTargetAggregator_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Candidate; // x20
  System_Func_int__bool__o *v8; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0

  if ( (byte_418B7F8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_int___, v3);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v4);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v5);
    sub_B2C35C(&Method_PartyOtherTargetAggregator__GetCandidate_b__0_0__, v6);
    byte_418B7F8 = 1;
  }
  Candidate = (System_Collections_Generic_IEnumerable_TSource__o *)PartyAllFieldTargetAggregator__GetCandidate(
                                                                     (PartyAllFieldTargetAggregator_o *)this,
                                                                     0LL);
  v8 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v8,
    (Il2CppObject *)this,
    Method_PartyOtherTargetAggregator__GetCandidate_b__0_0__,
    (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
  v9 = System_Linq_Enumerable__Where_int_(
         Candidate,
         (System_Func_TSource__bool__o *)v8,
         (const MethodInfo_1A9F150 *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v9,
           (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
}


bool __fastcall PartyOtherTargetAggregator___GetCandidate_b__0_0(
        PartyOtherTargetAggregator_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return TargetAggregator__get_actorId((TargetAggregator_o *)this, 0LL) != x;
}