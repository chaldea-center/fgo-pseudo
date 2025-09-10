__int64 __fastcall Flush(_BYTE *a1)
{
  __int64 result; // x0

  if ( !a1[32] )
    return 0;
  if ( !*(_DWORD *)(*(_QWORD *)a1 + 8LL) )
    return sub_1C78280(a1);
  result = sub_1CB41CC();
  if ( (unsigned int)result <= 1 )
    return sub_1C78280(a1);
  return result;
}