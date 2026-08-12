__int64 __fastcall DllGetActivationFactory(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // w20
  __int64 v4; // x0
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
  __int128 v23; // [xsp+28h] [xbp-88h] BYREF
  void *v24; // [xsp+38h] [xbp-78h]
  int v25; // [xsp+40h] [xbp-70h]
  __int64 v26; // [xsp+48h] [xbp-68h] BYREF
  int v27; // [xsp+50h] [xbp-60h]
  __int128 v28; // [xsp+58h] [xbp-58h]
  void *v29; // [xsp+68h] [xbp-48h]
  int v30; // [xsp+70h] [xbp-40h]
  unsigned int v31; // [xsp+7Ch] [xbp-34h] BYREF
  _BYTE v32[8]; // [xsp+80h] [xbp-30h] BYREF
  int v33[2]; // [xsp+88h] [xbp-28h] BYREF

  *(_QWORD *)v33 = a1;
  v2 = -2147024809;
  if ( a1 && a2 )
  {
    sub_221500C(v32, &dword_5983FD8);
    if ( (byte_5984028 & 1) == 0 )
    {
      if ( (sub_22708DC("IL2CPP Root Domain") & 1) == 0 )
      {
        v2 = -2146233082;
LABEL_26:
        sub_2215098(v32);
        return v2;
      }
      byte_5984028 = 1;
    }
    v4 = sub_225EB88(&qword_5983FC0, v33);
    if ( (_UNKNOWN **)v4 == &off_5983FC8 )
    {
      sub_223F838(&v26, v33[0], (int)&v31, v5, v6, v7, v8, v9, v10, v18, v19, v20, v21, v22);
      LODWORD(v22) = v27;
      if ( (v28 & 1) != 0 )
      {
        sub_221481C((int)&v23, v29);
      }
      else
      {
        v23 = v28;
        v24 = v29;
      }
      v25 = v30;
      if ( (unsigned int)sub_2247744(&v22) )
      {
        v17 = sub_225B5A8(&v22);
        if ( ((unsigned __int8)v22 & 1) != 0 )
          operator delete(*((void **)&v23 + 1));
        if ( (v28 & 1) != 0 )
          operator delete(v29);
        sub_2215098(v32);
        sub_230112C(v17);
      }
      if ( (v23 & 1) != 0 )
        operator delete(v24);
      sub_22485BC(&v22, v26, v31);
      if ( ((unsigned __int8)v22 & 1) != 0 )
        v12 = (char *)*((_QWORD *)&v23 + 1);
      else
        v12 = (char *)&v22 + 1;
      v13 = (__int64 (*)(void))sub_2277AC8(v12);
      if ( v13 )
      {
        v2 = sub_223F82C(*(_QWORD *)v33, &v21);
        if ( (v2 & 0x80000000) == 0 )
        {
          v14 = v13();
          v18 = v21;
          v19 = v14;
          v20 = v21;
          v15 = *(_QWORD *)(sub_225EDC4(&qword_5983FC0, &v18, &v18) + 40);
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
        operator delete(*((void **)&v23 + 1));
      if ( (v28 & 1) != 0 )
        operator delete(v29);
    }
    else
    {
      v11 = *(_QWORD *)(v4 + 40);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      v2 = 0;
      *a2 = v11;
    }
    goto LABEL_26;
  }
  return v2;
}