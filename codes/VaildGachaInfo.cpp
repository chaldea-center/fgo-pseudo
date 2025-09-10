void VaildGachaInfo___ctor(VaildGachaInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int64_t VaildGachaInfo__CloseAt(VaildGachaInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 136;
  if ( this->fields.isPrivilege )
    v2 = 152;
  return *(int64_t *)((char *)&this->klass + v2);
}


bool VaildGachaInfo__HasFlag(VaildGachaInfo_o *this, int32_t check, const MethodInfo *method)
{
  return (this->fields.flag & check) != 0;
}