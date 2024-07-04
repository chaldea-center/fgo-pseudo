__int64 __fastcall mono_domain_foreach(__int64 (__fastcall *a1)(__int64, __int64), __int64 a2)
{
  __int64 v3; // x0

  v3 = il2cpp_domain_get_0();
  return a1(v3, a2);
}