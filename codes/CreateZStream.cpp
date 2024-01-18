_QWORD *__fastcall CreateZStream(int a1, char a2, __int64 a3, __int64 a4)
{
  _QWORD *v8; // x0
  _QWORD *v9; // x22
  unsigned int v10; // w8
  _QWORD *v11; // x23

  if ( !a3 )
    return 0LL;
  v8 = calloc(1u, 0x70u);
  v9 = v8;
  if ( a2 )
    v10 = 31;
  else
    v10 = -15;
  if ( !a1 )
  {
    if ( (unsigned int)sub_A90888(v8, v10, "1.2.11f-unity", 112LL) )
      goto LABEL_7;
LABEL_10:
    v9[8] = sub_B21D64;
    v9[9] = sub_B21D70;
    v11 = calloc(1u, 0x28u);
    *v11 = v9;
    v11[2] = a3;
    v11[3] = a4;
    *((_BYTE *)v11 + 32) = a1;
    v11[1] = malloc(0x1000u);
    return v11;
  }
  if ( !(unsigned int)sub_A89414(v8, 0xFFFFFFFFLL, 8LL, v10, 8LL, 0LL, "1.2.11f-unity", 112LL) )
    goto LABEL_10;
LABEL_7:
  free(v9);
  return 0LL;
}