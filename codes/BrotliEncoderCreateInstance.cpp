char *__fastcall BrotliEncoderCreateInstance(__int64 (__fastcall *a1)(__int64, __int64), __int64 a2, __int64 a3)
{
  char *v6; // x0
  char *v7; // x19
  __int128 v8; // q0

  if ( a1 || a2 )
  {
    v7 = 0LL;
    if ( !a1 || !a2 )
      return v7;
    v6 = (char *)a1(a3, 6560LL);
  }
  else
  {
    v6 = (char *)malloc(0x19A0u);
  }
  v7 = v6;
  if ( v6 )
  {
    sub_1BE987C(v6 + 144, a1, a2, a3);
    *((_DWORD *)v7 + 9) = 0;
    *(_QWORD *)(v7 + 12) = 0LL;
    *((_DWORD *)v7 + 2) = 22;
    *(_QWORD *)v7 = 0xB00000000LL;
    *(_OWORD *)(v7 + 20) = 0u;
    sub_1C4F688(v7 + 88);
    *((_QWORD *)v7 + 10) = 67108860LL;
    *((_OWORD *)v7 + 4) = xmmword_BEAC40;
    *((_QWORD *)v7 + 21) = 0LL;
    *((_WORD *)v7 + 178) = 0;
    *(_QWORD *)(v7 + 6548) = 0LL;
    *((_DWORD *)v7 + 1639) = 0;
    *((_OWORD *)v7 + 12) = 0u;
    *((_OWORD *)v7 + 13) = 0u;
    *((_OWORD *)v7 + 16) = 0u;
    *((_OWORD *)v7 + 17) = xmmword_BEA8F0;
    v8 = *((_OWORD *)v7 + 17);
    *((_OWORD *)v7 + 14) = 0u;
    *((_OWORD *)v7 + 15) = 0u;
    *((_QWORD *)v7 + 45) = 0LL;
    *((_OWORD *)v7 + 23) = 0u;
    *((_OWORD *)v7 + 348) = 0u;
    *((_OWORD *)v7 + 407) = 0u;
    *((_OWORD *)v7 + 406) = 0u;
    *((_OWORD *)v7 + 405) = 0u;
    *((_OWORD *)v7 + 21) = v8;
  }
  return v7;
}