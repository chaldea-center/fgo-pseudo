void __fastcall NoneTargetAggregator___ctor(NoneTargetAggregator_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Int32_array *__fastcall NoneTargetAggregator__GetCandidate(
        NoneTargetAggregator_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A0115E & 1) == 0 )
  {
    sub_1B64870(&int___TypeInfo, method);
    byte_4A0115E = 1;
  }
  return (System_Int32_array *)sub_1B64918(int___TypeInfo, 0LL);
}