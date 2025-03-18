__int64 __fastcall mono_thread_set_name(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  __int64 v8; // x0
  __int64 result; // x0

  v8 = il2cpp_string_new_0(a2);
  result = sub_1C59DBC(a1, v8);
  if ( a6 )
    *a6 = 0;
  return result;
}