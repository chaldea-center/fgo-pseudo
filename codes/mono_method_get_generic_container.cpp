__int64 __fastcall mono_method_get_generic_container(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 83) & 3) == 1 )
    return *(_QWORD *)(a1 + 64);
  else
    return 0LL;
}