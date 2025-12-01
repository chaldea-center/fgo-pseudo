void OpponentOtherTargetAggregator___ctor(OpponentOtherTargetAggregator_o *this, const MethodInfo *method)
{
  TargetAggregator___ctor((TargetAggregator_o *)this, 0);
}


System_Int32_array *OpponentOtherTargetAggregator__GetCandidate(
        OpponentOtherTargetAggregator_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *Candidate; // x20
  System_Func_int__bool__o *v4; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0

  if ( (byte_4CCA855 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C713B0(&System_Func_int__bool__TypeInfo);
    sub_1C713B0(&Method_OpponentOtherTargetAggregator__GetCandidate_b__0_0__);
    byte_4CCA855 = 1;
  }
  Candidate = (System_Collections_Generic_IEnumerable_TSource__o *)OpponentAllFieldTargetAggregator__GetCandidate(
                                                                     (OpponentAllFieldTargetAggregator_o *)this,
                                                                     method);
  v4 = (System_Func_int__bool__o *)sub_1C715FC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v4,
    (Il2CppObject *)this,
    Method_OpponentOtherTargetAggregator__GetCandidate_b__0_0__,
    0);
  v5 = System_Linq_Enumerable__Where_int_(
         Candidate,
         (System_Func_TSource__bool__o *)v4,
         (const MethodInfo_3191B60 *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v5,
           (const MethodInfo_318AE54 *)Method_System_Linq_Enumerable_ToArray_int___);
}


bool OpponentOtherTargetAggregator___GetCandidate_b__0_0(
        OpponentOtherTargetAggregator_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return TargetAggregator__get_targetId((TargetAggregator_o *)this, 0) != x;
}