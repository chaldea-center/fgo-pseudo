void __fastcall VaildGachaInfo___ctor(VaildGachaInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int64_t __fastcall VaildGachaInfo__CloseAt(VaildGachaInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 136LL;
  if ( this->fields.isPrivilege )
    v2 = 152LL;
  return *(int64_t *)((char *)&this->klass + v2);
}


bool __fastcall VaildGachaInfo__HasFlag(VaildGachaInfo_o *this, int32_t check, const MethodInfo *method)
{
  return (this->fields.flag & check) != 0;
}