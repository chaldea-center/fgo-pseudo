void NoneTargetAggregator___ctor(NoneTargetAggregator_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Int32_array *NoneTargetAggregator__GetCandidate(NoneTargetAggregator_o *this, const MethodInfo *method)
{
  if ( (byte_593BC3A & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    byte_593BC3A = 1;
  }
  return (System_Int32_array *)sub_21FFD10(int___TypeInfo, 0);
}