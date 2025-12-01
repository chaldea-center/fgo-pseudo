void NoneTargetAggregator___ctor(NoneTargetAggregator_o *this, const MethodInfo *method)
{
  TargetAggregator___ctor((TargetAggregator_o *)this, 0);
}


System_Int32_array *NoneTargetAggregator__GetCandidate(NoneTargetAggregator_o *this, const MethodInfo *method)
{
  if ( (byte_4CCA852 & 1) == 0 )
  {
    sub_1C713B0(&int___TypeInfo);
    byte_4CCA852 = 1;
  }
  return (System_Int32_array *)sub_1C71458(int___TypeInfo, 0);
}