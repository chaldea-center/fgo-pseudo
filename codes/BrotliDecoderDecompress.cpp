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
  _BYTE v13[5152]; // [xsp+28h] [xbp-1458h] BYREF
  __int64 v14; // [xsp+1448h] [xbp-38h]

  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v11 = a1;
  v12 = 0;
  v5 = *a3;
  v8 = a4;
  v9 = v5;
  v10 = a2;
  result = sub_1CDB1E8(v13, 0, 0, 0);
  if ( (_DWORD)result )
  {
    v7 = BrotliDecoderDecompressStream(v13, &v11, &v10, &v9, &v8, &v12);
    *a3 = v12;
    sub_1CDB378(v13);
    return v7 == 1;
  }
  return result;
}