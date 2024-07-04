void __fastcall RangeValue___ctor(RangeValue_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall RangeValue__IsInRange(RangeValue_o *this, int32_t value, const MethodInfo *method)
{
  return this->fields.min <= value && this->fields.max >= value;
}