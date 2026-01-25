__int64 __fastcall mono_domain_get_assemblies_iter(__int64 a1, __int64 **a2)
{
  __int64 v3; // x0
  __int64 *v4; // x8
  __int64 *v5; // x20
  __int64 v6; // x9
  __int64 result; // x0
  __int64 *v8; // x0
  __int64 v9; // x8

  if ( !a2 )
    return 0;
  v3 = sub_1CAA56C();
  v4 = *a2;
  v5 = (__int64 *)v3;
  if ( *a2 )
  {
    v6 = *v4 + 8;
    *v4 = v6;
    if ( v6 == *(_QWORD *)(v3 + 8) )
    {
      operator delete(v4);
      result = 0;
      *a2 = 0;
    }
    else
    {
      return *(_QWORD *)v6;
    }
  }
  else
  {
    v8 = (__int64 *)operator new(8u);
    v9 = *v5;
    *v8 = *v5;
    *a2 = v8;
    return *(_QWORD *)v9;
  }
  return result;
}