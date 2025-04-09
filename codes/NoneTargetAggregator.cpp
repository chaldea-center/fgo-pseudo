void __fastcall NoneTargetAggregator___ctor(NoneTargetAggregator_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Int32_array *__fastcall NoneTargetAggregator__GetCandidate(
        NoneTargetAggregator_o *this,
        const MethodInfo *method)
{
  if ( (byte_49BDE18 & 1) == 0 )
  {
    sub_1B4CF90(&int___TypeInfo, method);
    byte_49BDE18 = 1;
  }
  return (System_Int32_array *)sub_1B4D038(int___TypeInfo, 0LL);
}