void __fastcall PartyOneOtherTargetAggregator___ctor(PartyOneOtherTargetAggregator_o *this, const MethodInfo *method)
{
  PartyAllFieldTargetAggregator___ctor((PartyAllFieldTargetAggregator_o *)this, 0LL);
}


System_Int32_array *__fastcall PartyOneOtherTargetAggregator__GetCandidate(
        PartyOneOtherTargetAggregator_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Candidate; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Func_int__bool__o *v12; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0

  if ( (byte_40FDDD0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_int___, v3);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v4);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v5);
    sub_B16FFC(&Method_PartyOneOtherTargetAggregator__GetCandidate_b__0_0__, v6);
    byte_40FDDD0 = 1;
  }
  Candidate = (System_Collections_Generic_IEnumerable_TSource__o *)PartyAllFieldTargetAggregator__GetCandidate(
                                                                     (PartyAllFieldTargetAggregator_o *)this,
                                                                     0LL);
  v12 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v8, v9, v10, v11);
  System_Func_int__bool____ctor(
    v12,
    (Il2CppObject *)this,
    Method_PartyOneOtherTargetAggregator__GetCandidate_b__0_0__,
    (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
  v13 = System_Linq_Enumerable__Where_int_(
          Candidate,
          (System_Func_TSource__bool__o *)v12,
          (const MethodInfo_19C8D54 *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v13,
           (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
}


bool __fastcall PartyOneOtherTargetAggregator___GetCandidate_b__0_0(
        PartyOneOtherTargetAggregator_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return TargetAggregator__get_ptTargetId((TargetAggregator_o *)this, 0LL) != x;
}