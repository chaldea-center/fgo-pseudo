__int64 __fastcall Flush(_BYTE *a1)
{
  __int64 result; // x0

  if ( !a1[32] )
    return 0LL;
  if ( !*(_DWORD *)(*(_QWORD *)a1 + 8LL) )
    return sub_1BB4C8C(a1);
  result = sub_1BF0D6C();
  if ( (unsigned int)result <= 1 )
    return sub_1BB4C8C(a1);
  return result;
}