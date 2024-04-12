void __fastcall OpponentOtherTargetAggregator___ctor(OpponentOtherTargetAggregator_o *this, const MethodInfo *method)
{
  TargetAggregator___ctor((TargetAggregator_o *)this, 0LL);
}


System_Int32_array *__fastcall OpponentOtherTargetAggregator__GetCandidate(
        OpponentOtherTargetAggregator_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *Candidate; // x20
  System_Func_int__bool__o *v4; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0

  if ( (byte_42ADB36 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_int___);
    sub_B52984(&Method_System_Func_int__bool___ctor__);
    sub_B52984(&System_Func_int__bool__TypeInfo);
    sub_B52984(&Method_OpponentOtherTargetAggregator__GetCandidate_b__0_0__);
    byte_42ADB36 = 1;
  }
  Candidate = (System_Collections_Generic_IEnumerable_TSource__o *)OpponentAllFieldTargetAggregator__GetCandidate(
                                                                     (OpponentAllFieldTargetAggregator_o *)this,
                                                                     method);
  v4 = (System_Func_int__bool__o *)sub_B52A54(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v4,
    (Il2CppObject *)this,
    Method_OpponentOtherTargetAggregator__GetCandidate_b__0_0__,
    (const MethodInfo_2BC3AC4 *)Method_System_Func_int__bool___ctor__);
  v5 = System_Linq_Enumerable__Where_int_(
         Candidate,
         (System_Func_TSource__bool__o *)v4,
         (const MethodInfo_1B72A2C *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v5,
           (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
}


bool __fastcall OpponentOtherTargetAggregator___GetCandidate_b__0_0(
        OpponentOtherTargetAggregator_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return TargetAggregator__get_targetId((TargetAggregator_o *)this, 0LL) != x;
}