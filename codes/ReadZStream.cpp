__int64 __fastcall ReadZStream(__int64 *a1, __int64 a2, int a3)
{
  __int64 result; // x0
  __int64 v6; // x21
  int v7; // w0
  int v8; // w10
  int v9; // w8

  result = 4294967286LL;
  if ( a1 && a2 && (a3 & 0x80000000) == 0 )
  {
    if ( *((_BYTE *)a1 + 33) )
      return 0;
    v6 = *a1;
    *(_QWORD *)(v6 + 24) = a2;
    *(_DWORD *)(v6 + 32) = a3;
    if ( a3 )
    {
      while ( 1 )
      {
        if ( !*(_DWORD *)(v6 + 8) )
        {
          v7 = ((__int64 (__fastcall *)(__int64, __int64, __int64))a1[2])(a1[1], 4096, a1[3]);
          v8 = v7 & ~(v7 >> 31);
          v9 = *((_DWORD *)a1 + 9) + v8;
          *(_QWORD *)v6 = a1[1];
          *((_DWORD *)a1 + 9) = v9;
          *(_DWORD *)(v6 + 8) = v8;
        }
        result = sub_2279CF8(*a1, 2);
        if ( (_DWORD)result )
          break;
        if ( !*(_DWORD *)(v6 + 32) )
          return (unsigned int)(a3 - *(_DWORD *)(v6 + 32));
      }
      if ( (_DWORD)result == 1 )
        goto LABEL_16;
      if ( (_DWORD)result != -5 )
        return result;
      if ( *(_QWORD *)(v6 + 16) != *((_DWORD *)a1 + 9) )
        return 4294967291LL;
      if ( *(_DWORD *)(v6 + 8) )
LABEL_16:
        *((_BYTE *)a1 + 33) = 1;
    }
    return (unsigned int)(a3 - *(_DWORD *)(v6 + 32));
  }
  return result;
}