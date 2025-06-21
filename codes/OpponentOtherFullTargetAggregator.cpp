void __fastcall OpponentOtherFullTargetAggregator___ctor(
        OpponentOtherFullTargetAggregator_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Int32_array *__fastcall OpponentOtherFullTargetAggregator__GetCandidate(
        OpponentOtherFullTargetAggregator_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Candidate; // x20
  System_Func_int__bool__o *v7; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0

  if ( (byte_4B1F5C7 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_int___, method);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_int___, v3);
    sub_1BCAFF8(&System_Func_int__bool__TypeInfo, v4);
    sub_1BCAFF8(&Method_OpponentOtherFullTargetAggregator__GetCandidate_b__0_0__, v5);
    byte_4B1F5C7 = 1;
  }
  Candidate = (System_Collections_Generic_IEnumerable_TSource__o *)OpponentFullTargetAggregator__GetCandidate(
                                                                     (OpponentFullTargetAggregator_o *)this,
                                                                     method);
  v7 = (System_Func_int__bool__o *)sub_1BCB244(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v7,
    (Il2CppObject *)this,
    Method_OpponentOtherFullTargetAggregator__GetCandidate_b__0_0__,
    0LL);
  v8 = System_Linq_Enumerable__Where_int_(
         Candidate,
         (System_Func_TSource__bool__o *)v7,
         (const MethodInfo_305D9B4 *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v8,
           (const MethodInfo_305712C *)Method_System_Linq_Enumerable_ToArray_int___);
}


bool __fastcall OpponentOtherFullTargetAggregator___GetCandidate_b__0_0(
        OpponentOtherFullTargetAggregator_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1BCB254(this, x);
  return args->fields._targetId_k__BackingField != x;
}