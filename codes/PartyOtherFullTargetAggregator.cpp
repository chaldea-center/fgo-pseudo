void __fastcall PartyOtherFullTargetAggregator___ctor(PartyOtherFullTargetAggregator_o *this, const MethodInfo *method)
{
  PartyFullTargetAggregator___ctor((PartyFullTargetAggregator_o *)this, 0LL);
}


System_Int32_array *__fastcall PartyOtherFullTargetAggregator__GetCandidate(
        PartyOtherFullTargetAggregator_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *Candidate; // x20
  System_Func_int__bool__o *v18; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  if ( (byte_42EC3A7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_int___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_PartyOtherFullTargetAggregator__GetCandidate_b__0_0__, v14, v15, v16);
    byte_42EC3A7 = 1;
  }
  Candidate = (System_Collections_Generic_IEnumerable_TSource__o *)PartyFullTargetAggregator__GetCandidate(
                                                                     (PartyFullTargetAggregator_o *)this,
                                                                     0LL);
  v18 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v18,
    (Il2CppObject *)this,
    Method_PartyOtherFullTargetAggregator__GetCandidate_b__0_0__,
    (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
  v19 = System_Linq_Enumerable__Where_int_(
          Candidate,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_1CBBC7C *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v19,
           (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
}


bool __fastcall PartyOtherFullTargetAggregator___GetCandidate_b__0_0(
        PartyOtherFullTargetAggregator_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return TargetAggregator__get_actorId((TargetAggregator_o *)this, 0LL) != x;
}