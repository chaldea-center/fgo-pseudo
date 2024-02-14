__int64 __fastcall Flush(__int64 a1)
{
  __int64 result; // x0

  if ( !*(_BYTE *)(a1 + 32) )
    return 0LL;
  result = sub_A6DB00(*(_QWORD *)a1, 1LL);
  if ( (unsigned int)result <= 1 )
    return sub_B03524(a1);
  return result;
}