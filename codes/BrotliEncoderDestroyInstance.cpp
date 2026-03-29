_QWORD *__fastcall BrotliEncoderDestroyInstance(_QWORD *result)
{
  _QWORD *v1; // x19
  __int64 v2; // x20
  _QWORD *v3; // x21
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 (__fastcall *v9)(__int64, _QWORD *); // [xsp+8h] [xbp-28h]

  if ( result )
  {
    v1 = result;
    v2 = result[20];
    v3 = result + 18;
    v9 = (__int64 (__fastcall *)(__int64, _QWORD *))result[19];
    sub_1C8ECE8(result + 18, result[46]);
    v4 = v1[28];
    v1[46] = 0;
    sub_1C8ECE8(v3, v4);
    v5 = v1[25];
    v1[28] = 0;
    sub_1C8ECE8(v3, v5);
    v6 = v1[47];
    v1[25] = 0;
    if ( v6 )
    {
      sub_1C8ECE8(v3, v6);
      v1[47] = 0;
    }
    sub_1C8ECE8(v3, v1[696]);
    v7 = v1[811];
    v1[696] = 0;
    sub_1C8ECE8(v3, v7);
    v8 = v1[812];
    v1[811] = 0;
    sub_1C8ECE8(v3, v8);
    v1[812] = 0;
    return (_QWORD *)v9(v2, v1);
  }
  return result;
}