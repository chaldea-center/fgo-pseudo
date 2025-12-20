void OpponentOtherFullTargetAggregator___ctor(OpponentOtherFullTargetAggregator_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Int32_array *OpponentOtherFullTargetAggregator__GetCandidate(
        OpponentOtherFullTargetAggregator_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *Candidate; // x20
  System_Func_int__bool__o *v4; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0

  if ( (byte_4D2FD09 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C94098(&System_Func_int__bool__TypeInfo);
    sub_1C94098(&Method_OpponentOtherFullTargetAggregator__GetCandidate_b__0_0__);
    byte_4D2FD09 = 1;
  }
  Candidate = (System_Collections_Generic_IEnumerable_TSource__o *)OpponentFullTargetAggregator__GetCandidate(
                                                                     (OpponentFullTargetAggregator_o *)this,
                                                                     method);
  v4 = (System_Func_int__bool__o *)sub_1C942E4(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v4,
    (Il2CppObject *)this,
    Method_OpponentOtherFullTargetAggregator__GetCandidate_b__0_0__,
    0);
  v5 = System_Linq_Enumerable__Where_int_(
         Candidate,
         (System_Func_TSource__bool__o *)v4,
         (const MethodInfo_31E3420 *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v5,
           (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
}


bool OpponentOtherFullTargetAggregator___GetCandidate_b__0_0(
        OpponentOtherFullTargetAggregator_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1C942F0(this, x);
  return args->fields._targetId_k__BackingField != x;
}