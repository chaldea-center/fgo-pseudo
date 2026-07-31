__int64 __fastcall mono_domain_get_assemblies_iter(__int64 a1, __int64 **a2)
{
  __int64 v3; // x0
  __int64 *v4; // x8
  __int64 *v5; // x20
  __int64 v6; // x10
  __int64 v7; // x9
  __int64 result; // x0
  __int64 *v9; // x0
  __int64 v10; // x8

  if ( !a2 )
    return 0;
  v3 = sub_223A71C();
  v4 = *a2;
  v5 = (__int64 *)v3;
  if ( *a2 )
  {
    v6 = *(_QWORD *)(v3 + 8);
    v7 = *v4 + 8;
    *v4 = v7;
    if ( v7 == v6 )
    {
      operator delete(v4);
      result = 0;
      *a2 = 0;
    }
    else
    {
      return *(_QWORD *)v7;
    }
  }
  else
  {
    v9 = (__int64 *)operator new(8u);
    v10 = *v5;
    *v9 = 0;
    *a2 = v9;
    *v9 = v10;
    return *(_QWORD *)v10;
  }
  return result;
}