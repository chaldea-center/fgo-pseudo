__int64 __fastcall mono_method_get_param_names(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  __int64 v5; // x21
  __int64 v6; // x22

  result = il2cpp_method_get_param_count_0();
  if ( (_DWORD)result )
  {
    v5 = 0LL;
    v6 = (unsigned int)result;
    do
    {
      result = il2cpp_method_get_param_name_0(a1, (unsigned int)v5);
      *(_QWORD *)(a2 + 8 * v5++) = result;
    }
    while ( v6 != v5 );
  }
  return result;
}