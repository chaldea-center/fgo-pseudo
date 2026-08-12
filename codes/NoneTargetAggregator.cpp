void NoneTargetAggregator___ctor(NoneTargetAggregator_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Int32_array *NoneTargetAggregator__GetCandidate(NoneTargetAggregator_o *this, const MethodInfo *method)
{
  if ( (byte_5973E46 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    byte_5973E46 = 1;
  }
  return (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
}