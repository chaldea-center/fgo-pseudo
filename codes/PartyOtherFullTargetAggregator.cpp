void __fastcall PartyOtherFullTargetAggregator___ctor(PartyOtherFullTargetAggregator_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Int32_array *__fastcall PartyOtherFullTargetAggregator__GetCandidate(
        PartyOtherFullTargetAggregator_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_IEnumerable_TSource__o *Candidate; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Func_int__bool__o *v14; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_4B18F44 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_int___, v4, v5);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_PartyOtherFullTargetAggregator__GetCandidate_b__0_0__, v8, v9);
    byte_4B18F44 = 1;
  }
  Candidate = (System_Collections_Generic_IEnumerable_TSource__o *)PartyFullTargetAggregator__GetCandidate(
                                                                     (PartyFullTargetAggregator_o *)this,
                                                                     method);
  v14 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v11, v12, v13);
  System_Func_int__bool____ctor(
    v14,
    (Il2CppObject *)this,
    Method_PartyOtherFullTargetAggregator__GetCandidate_b__0_0__,
    0LL);
  v15 = System_Linq_Enumerable__Where_int_(
          Candidate,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_2F515C0 *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v15,
           (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PartyOtherFullTargetAggregator___GetCandidate_b__0_0(
        PartyOtherFullTargetAggregator_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct TargetAggregator_Args_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1BCAA3C(this, *(_QWORD *)&x);
  return args->fields._actorId_k__BackingField != x;
}