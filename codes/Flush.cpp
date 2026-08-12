__int64 __fastcall Flush(__int64 *a1)
{
  __int64 v2; // x0
  __int64 result; // x0

  if ( !*((_BYTE *)a1 + 32) )
    return 0;
  v2 = *a1;
  if ( !*(_DWORD *)(v2 + 8) )
    return sub_2236098(a1);
  result = sub_22903B8(v2, 1);
  if ( (unsigned int)result <= 1 )
    return sub_2236098(a1);
  return result;
}