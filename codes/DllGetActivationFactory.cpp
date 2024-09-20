__int64 __fastcall DllGetActivationFactory(__int64 a1, __int64 *a2)
{
  unsigned int v2; // w20
  __int64 *v4; // x0
  int v5; // w2
  int v6; // w3
  int v7; // w4
  int v8; // w5
  int v9; // w6
  int v10; // w7
  __int64 v11; // x21
  char *v12; // x0
  __int64 (*v13)(void); // x21
  __int64 v14; // x0
  __int64 v15; // x21
  __int64 v17; // x19
  __int64 v18; // [xsp+0h] [xbp-B0h] BYREF
  __int64 v19; // [xsp+8h] [xbp-A8h]
  __int64 v20; // [xsp+10h] [xbp-A0h]
  __int64 v21; // [xsp+18h] [xbp-98h] BYREF
  void *v22; // [xsp+20h] [xbp-90h] BYREF
  char v23[8]; // [xsp+28h] [xbp-88h] BYREF
  void *v24; // [xsp+30h] [xbp-80h]
  void *v25; // [xsp+38h] [xbp-78h]
  int v26; // [xsp+40h] [xbp-70h]
  __int64 v27; // [xsp+48h] [xbp-68h]
  int v28; // [xsp+50h] [xbp-60h]
  char v29[16]; // [xsp+58h] [xbp-58h] BYREF
  void *v30; // [xsp+68h] [xbp-48h]
  int v31; // [xsp+70h] [xbp-40h]
  unsigned int v32; // [xsp+7Ch] [xbp-34h] BYREF
  char v33[8]; // [xsp+80h] [xbp-30h] BYREF
  int v34[2]; // [xsp+88h] [xbp-28h] BYREF

  v2 = -2147024809;
  *(_QWORD *)v34 = a1;
  if ( a1 && a2 )
  {
    sub_1B6D448(v33, &dword_4A6D318);
    if ( (byte_4A6D368 & 1) == 0 )
    {
      if ( (sub_1BC4B00("IL2CPP Root Domain") & 1) == 0 )
      {
        v2 = -2146233082;
LABEL_23:
        sub_1B6D4F8(v33);
        return v2;
      }
      byte_4A6D368 = 1;
    }
    v4 = (__int64 *)sub_1B9B8FC(&qword_4A6D300, v34);
    if ( v4 == &qword_4A6D308 )
    {
      sub_1BF4684(v34[0], (int)&v32, v5, v6, v7, v8, v9, v10, v18, v19, v20, v21, v22);
      LODWORD(v22) = v28;
      std::string::basic_string(v23, v29);
      v26 = v31;
      if ( (unsigned int)sub_1BF901C(&v22) )
      {
        v17 = sub_1B98498(&v22);
        if ( ((unsigned __int8)v22 & 1) != 0 )
          operator delete(v24);
        if ( (v29[0] & 1) != 0 )
          operator delete(v30);
        sub_1B6D4F8(v33);
        sub_1C73040(v17);
      }
      if ( (v23[0] & 1) != 0 )
        operator delete(v25);
      sub_1B64A74(v27, v32);
      if ( ((unsigned __int8)v22 & 1) != 0 )
        v12 = (char *)v24;
      else
        v12 = (char *)&v22 + 1;
      v13 = (__int64 (*)(void))sub_1B714B0(v12);
      if ( v13 )
      {
        v2 = sub_1B9EDC0(*(_QWORD *)v34, &v21);
        if ( (v2 & 0x80000000) == 0 )
        {
          v14 = v13();
          v18 = v21;
          v19 = v14;
          v20 = v21;
          v15 = *(_QWORD *)(sub_1B9BB08(&qword_4A6D300, &v18, &v18) + 40);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
          v2 = 0;
          *a2 = v15;
        }
      }
      else
      {
        v2 = -2147221164;
      }
      if ( ((unsigned __int8)v22 & 1) != 0 )
        operator delete(v24);
      if ( (v29[0] & 1) != 0 )
        operator delete(v30);
    }
    else
    {
      v11 = v4[5];
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      v2 = 0;
      *a2 = v11;
    }
    goto LABEL_23;
  }
  return v2;
}