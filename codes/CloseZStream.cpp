__int64 __fastcall CloseZStream(void **a1)
{
  int v2; // w8
  _QWORD *v3; // x0
  unsigned int v4; // w20
  unsigned int v5; // w0

  if ( a1 )
  {
    v2 = *((unsigned __int8 *)a1 + 32);
    v3 = *a1;
    if ( v2 )
    {
      if ( v3[2] )
      {
        do
        {
          while ( 1 )
          {
            v4 = sub_A6DB00();
            if ( !*((_BYTE *)a1 + 32) )
              break;
            v5 = sub_B03524(a1);
            if ( v4 )
              goto LABEL_11;
          }
          v5 = 0;
        }
        while ( !v4 );
LABEL_11:
        if ( v4 == 1 )
          v4 = v5;
      }
      else
      {
        v4 = 0;
      }
      sub_A6D66C(*a1);
    }
    else
    {
      sub_A75370(v3);
      v4 = 0;
    }
    free(a1[1]);
    free(*a1);
    free(a1);
  }
  else
  {
    return (unsigned int)-10;
  }
  return v4;
}