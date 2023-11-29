void __fastcall NoneTargetAggregator___ctor(NoneTargetAggregator_o *this, const MethodInfo *method)
{
  TargetAggregator___ctor((TargetAggregator_o *)this, 0LL);
}


System_Int32_array *__fastcall NoneTargetAggregator__GetCandidate(
        NoneTargetAggregator_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_40F9342 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    byte_40F9342 = 1;
  }
  return (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v2);
}