void ItemTransitionType___ctor(ItemTransitionType_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ItemTransitionType__GetSortPriority(int32_t type, const MethodInfo *method)
{
  if ( (unsigned int)(type - 1) > 0x12 )
    return 0x7FFFFFFF;
  else
    return dword_C46AF0[type - 1];
}