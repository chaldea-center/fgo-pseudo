__int64 __fastcall mono_type_get_name_full(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        char a10,
        int a11,
        void *a12)
{
  _BYTE *v12; // x0
  __int64 v13; // x19
  char v15; // [xsp+8h] [xbp-28h]
  _BYTE v16[7]; // [xsp+9h] [xbp-27h] BYREF
  void *v17; // [xsp+18h] [xbp-18h]

  sub_1C6346C(a1, a2);
  if ( (v15 & 1) != 0 )
    v12 = v17;
  else
    v12 = v16;
  v13 = sub_1C0AA40(v12);
  if ( (v15 & 1) != 0 )
    operator delete(v17);
  return v13;
}