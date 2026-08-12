__int64 __fastcall CloseZStream(__int64 *a1)
{
  int v2; // w8
  __int64 v3; // x0
  unsigned int v4; // w20
  unsigned int v5; // w0

  if ( a1 )
  {
    v2 = *((unsigned __int8 *)a1 + 32);
    v3 = *a1;
    if ( v2 )
    {
      if ( *(_QWORD *)(v3 + 16) )
      {
        do
        {
          while ( 1 )
          {
            v4 = sub_22903B8(*a1, 4);
            if ( !*((_BYTE *)a1 + 32) )
              break;
            v5 = sub_2236098(a1);
            if ( v4 )
              goto LABEL_8;
          }
          v5 = 0;
        }
        while ( !v4 );
LABEL_8:
        if ( v4 == 1 )
          v4 = v5;
      }
      else
      {
        v4 = 0;
      }
      sub_228FF14(*a1);
    }
    else
    {
      sub_228F4FC(v3);
      v4 = 0;
    }
    free((void *)a1[1]);
    free((void *)*a1);
    a1[4] = 0;
    *(_OWORD *)a1 = 0u;
    *((_OWORD *)a1 + 1) = 0u;
    free(a1);
  }
  else
  {
    return (unsigned int)-10;
  }
  return v4;
}