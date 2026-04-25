void NoneTargetAggregator___ctor(NoneTargetAggregator_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Int32_array *NoneTargetAggregator__GetCandidate(NoneTargetAggregator_o *this, const MethodInfo *method)
{
  if ( (byte_4E07EE7 & 1) == 0 )
  {
    sub_1CE6700(&int___TypeInfo);
    byte_4E07EE7 = 1;
  }
  return (System_Int32_array *)sub_1CE67A8(int___TypeInfo, 0);
}