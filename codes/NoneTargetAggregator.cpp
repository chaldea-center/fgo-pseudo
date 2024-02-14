void __fastcall NoneTargetAggregator___ctor(NoneTargetAggregator_o *this, const MethodInfo *method)
{
  TargetAggregator___ctor((TargetAggregator_o *)this, 0LL);
}


System_Int32_array *__fastcall NoneTargetAggregator__GetCandidate(
        NoneTargetAggregator_o *this,
        const MethodInfo *method)
{
  if ( (byte_4215013 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, method);
    byte_4215013 = 1;
  }
  return (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
}