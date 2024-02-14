__int64 __fastcall ReadZStream(__int64 *a1, __int64 a2, int a3)
{
  __int64 result; // x0
  __int64 v6; // x21
  int v7; // w0
  __int64 v8; // x8

  result = 4294967286LL;
  if ( a1 && a2 && (a3 & 0x80000000) == 0 )
  {
    if ( *((_BYTE *)a1 + 33) )
    {
      return 0LL;
    }
    else
    {
      v6 = *a1;
      *(_QWORD *)(v6 + 24) = a2;
      *(_DWORD *)(v6 + 32) = a3;
      if ( a3 )
      {
        while ( 1 )
        {
          if ( !*(_DWORD *)(v6 + 8) )
          {
            v7 = ((__int64 (__fastcall *)(__int64, __int64, __int64))a1[2])(a1[1], 4096LL, a1[3]);
            if ( v7 <= 0 )
              goto LABEL_14;
            v8 = a1[1];
            *(_DWORD *)(v6 + 8) = v7;
            *(_QWORD *)v6 = v8;
          }
          result = sub_A73978(*a1, 2LL);
          if ( (_DWORD)result )
            break;
          if ( !*(_DWORD *)(v6 + 32) )
            return (unsigned int)(a3 - *(_DWORD *)(v6 + 32));
        }
        if ( (_DWORD)result != 1 )
          return result;
LABEL_14:
        *((_BYTE *)a1 + 33) = 1;
      }
      return (unsigned int)(a3 - *(_DWORD *)(v6 + 32));
    }
  }
  return result;
}