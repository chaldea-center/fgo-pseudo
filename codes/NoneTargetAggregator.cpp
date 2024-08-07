void __fastcall NoneTargetAggregator___ctor(NoneTargetAggregator_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Int32_array *__fastcall NoneTargetAggregator__GetCandidate(
        NoneTargetAggregator_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A0177F & 1) == 0 )
  {
    sub_1B64A00(&int___TypeInfo, method);
    byte_4A0177F = 1;
  }
  return (System_Int32_array *)sub_1B64AA8(int___TypeInfo, 0LL);
}