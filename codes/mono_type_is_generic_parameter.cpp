bool __fastcall mono_type_is_generic_parameter(__int64 a1)
{
  int v1; // w8
  int v2; // w8

  v1 = *(_DWORD *)(a1 + 8);
  if ( (v1 & 0x20000000) != 0 )
    return 0;
  v2 = BYTE2(v1);
  return v2 == 19 || v2 == 30;
}