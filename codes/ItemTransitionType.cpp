void __fastcall ItemTransitionType___ctor(ItemTransitionType_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ItemTransitionType__GetSortPriority(int32_t type, const MethodInfo *method)
{
  if ( (unsigned int)(type - 1) > 0x11 )
    return 0x7FFFFFFF;
  else
    return dword_C1C898[type - 1];
}