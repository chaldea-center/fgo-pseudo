void __fastcall NoneTargetAggregator___ctor(NoneTargetAggregator_o *this, const MethodInfo *method)
{
  TargetAggregator___ctor((TargetAggregator_o *)this, 0LL);
}


System_Int32_array *__fastcall NoneTargetAggregator__GetCandidate(
        NoneTargetAggregator_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B067A & 1) == 0 )
  {
    sub_B52984(&int___TypeInfo);
    byte_42B067A = 1;
  }
  return (System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
}