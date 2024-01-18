__int64 __fastcall WriteZStream(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 result; // x0
  __int64 v6; // x21
  __int64 v7; // x8

  result = 4294967286LL;
  if ( a1 && a2 && (a3 & 0x80000000) == 0 )
  {
    if ( *((_BYTE *)a1 + 33) )
    {
      return 4294967285LL;
    }
    else
    {
      v6 = *a1;
      *(_QWORD *)v6 = a2;
      *(_DWORD *)(v6 + 8) = a3;
      if ( a3 )
      {
        while ( 1 )
        {
          if ( !*(_DWORD *)(v6 + 32) )
          {
            v7 = a1[1];
            *(_DWORD *)(v6 + 32) = 4096;
            *(_QWORD *)(v6 + 24) = v7;
          }
          result = sub_A89B24(*a1, 0LL);
          if ( (unsigned int)result > 1 )
            break;
          if ( !*(_DWORD *)(v6 + 32) )
          {
            result = sub_B21FDC(a1);
            if ( (result & 0x80000000) != 0 )
              break;
          }
          if ( !*(_DWORD *)(v6 + 8) )
            return a3;
        }
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}