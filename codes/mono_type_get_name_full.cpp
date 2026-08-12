__int64 __fastcall mono_type_get_name_full(
        int a1,
        int a2,
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
  char *v12; // x0
  __int64 v13; // x19
  __int64 v15[2]; // [xsp+8h] [xbp-28h] BYREF
  void *v16; // [xsp+18h] [xbp-18h]

  sub_226CC6C(v15, a1, a2);
  if ( (v15[0] & 1) != 0 )
    v12 = (char *)v16;
  else
    v12 = (char *)v15 + 1;
  v13 = sub_22488F4(v12);
  if ( (v15[0] & 1) != 0 )
    operator delete(v16);
  return v13;
}