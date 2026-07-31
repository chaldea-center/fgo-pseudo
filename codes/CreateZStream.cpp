_QWORD *__fastcall CreateZStream(int a1, char a2, __int64 a3, __int64 a4)
{
  _QWORD *v8; // x0
  _QWORD *v9; // x19
  __int64 v10; // x3
  _QWORD *v11; // x23
  void *v12; // x0

  if ( !a3 )
    return 0;
  v8 = calloc(1u, 0x70u);
  v9 = v8;
  if ( a2 )
    v10 = 31;
  else
    v10 = 4294967281LL;
  if ( !a1 )
  {
    if ( (unsigned int)sub_2279C18(v8, (unsigned int)v10, "1.3.1-unity", 112) )
      goto LABEL_7;
LABEL_10:
    v9[8] = sub_2221FF4;
    v9[9] = sub_2222000;
    v11 = calloc(1u, 0x28u);
    *v11 = v9;
    v11[2] = a3;
    v11[3] = a4;
    *((_BYTE *)v11 + 32) = a1;
    v12 = malloc(0x1000u);
    *((_DWORD *)v9 + 8) = 4096;
    v11[1] = v12;
    v9[2] = 0;
    v9[3] = v12;
    return v11;
  }
  if ( !(unsigned int)sub_227BE6C(v8, 0xFFFFFFFFLL, 8, v10, 8, 0, "1.3.1-unity", 112) )
    goto LABEL_10;
LABEL_7:
  free(v9);
  return 0;
}