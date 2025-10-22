void NoneTargetAggregator___ctor(NoneTargetAggregator_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Int32_array *NoneTargetAggregator__GetCandidate(NoneTargetAggregator_o *this, const MethodInfo *method)
{
  if ( (byte_4C5A074 & 1) == 0 )
  {
    sub_1C3E564(&int___TypeInfo);
    byte_4C5A074 = 1;
  }
  return (System_Int32_array *)sub_1C3E60C(int___TypeInfo, 0);
}