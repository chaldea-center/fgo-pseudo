void __fastcall SvtAttri___ctor(SvtAttri_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


float __fastcall SvtAttri__getMagnification(int32_t attack, int32_t defense, const MethodInfo *method)
{
  return AttriRelationMaster__getRate(attack, defense, 0LL);
}