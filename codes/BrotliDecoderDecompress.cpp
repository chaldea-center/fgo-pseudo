__int64 __fastcall BrotliDecoderDecompress(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v5; // x8
  __int64 result; // x0
  int v7; // w20
  __int64 v8; // [xsp+0h] [xbp-1480h] BYREF
  __int64 v9; // [xsp+8h] [xbp-1478h] BYREF
  __int64 v10; // [xsp+10h] [xbp-1470h] BYREF
  __int64 v11; // [xsp+18h] [xbp-1468h] BYREF
  __int64 v12; // [xsp+20h] [xbp-1460h] BYREF
  char v13[5152]; // [xsp+28h] [xbp-1458h] BYREF
  __int64 v14; // [xsp+1448h] [xbp-38h]

  v14 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v11 = a1;
  v12 = 0LL;
  v5 = *a3;
  v8 = a4;
  v9 = v5;
  v10 = a2;
  result = sub_1C148EC(v13, 0LL, 0LL, 0LL);
  if ( (_DWORD)result )
  {
    v7 = BrotliDecoderDecompressStream(v13, &v11, &v10, &v9, &v8, &v12);
    *a3 = v12;
    sub_1C14A7C(v13);
    return v7 == 1;
  }
  return result;
}