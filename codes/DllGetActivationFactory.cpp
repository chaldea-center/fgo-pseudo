__int64 __fastcall DllGetActivationFactory(__int64 a1, __int64 *a2)
{
  unsigned int v2; // w20
  pthread_t v4; // x0
  __int64 v5; // x21
  unsigned int v6; // w9
  unsigned int v7; // w8
  int v8; // w10
  unsigned int v9; // w8
  int v10; // w8
  __int64 *v11; // x0
  __int64 v12; // x21
  int v14; // [xsp+3Ch] [xbp-34h] BYREF
  unsigned int *v15; // [xsp+40h] [xbp-30h] BYREF
  __int64 v16; // [xsp+48h] [xbp-28h] BYREF

  v2 = -2147024809;
  v16 = a1;
  if ( !a1 || !a2 )
    return v2;
  v15 = dword_4180CA8;
  v4 = j__pthread_self_0();
  if ( v4 == qword_4180CE8 )
  {
    v10 = dword_4180CF0 + 1;
    goto LABEL_17;
  }
  v5 = v4;
  v6 = 0;
  do
  {
    v7 = __ldaxr(dword_4180CA8);
    if ( v7 != v6 )
    {
      __clrex();
LABEL_9:
      v8 = 0;
      goto LABEL_10;
    }
    if ( __stxr(v6 + 1, dword_4180CA8) )
      goto LABEL_9;
    v8 = 1;
LABEL_10:
    if ( v7 == 2 )
      break;
    v6 = v7;
  }
  while ( !v8 );
  if ( v7 )
  {
    do
    {
      sub_D2444C(dword_4180CA8, 2LL, 0xFFFFFFFFLL);
      do
        v9 = __ldxr(dword_4180CA8);
      while ( __stxr(2u, dword_4180CA8) );
    }
    while ( v9 );
  }
  qword_4180CE8 = v5;
  v10 = 1;
LABEL_17:
  dword_4180CF0 = v10;
  if ( (byte_4180CF8 & 1) != 0 )
  {
LABEL_20:
    v11 = (__int64 *)sub_AE73F4(&qword_4180C90, &v16);
    if ( v11 == &qword_4180C98 )
      sub_A9A95C(v16, &v14);
    v12 = v11[5];
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    v2 = 0;
    *a2 = v12;
  }
  else
  {
    if ( (sub_ABEF14("IL2CPP Root Domain") & 1) != 0 )
    {
      byte_4180CF8 = 1;
      goto LABEL_20;
    }
    v2 = -2146233082;
  }
  sub_A9DD04(&v15);
  return v2;
}