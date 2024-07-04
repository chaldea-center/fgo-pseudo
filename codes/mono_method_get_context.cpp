__int64 __fastcall mono_method_get_context(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 83) & 3) == 2 )
    return *(_QWORD *)(a1 + 64) + 8LL;
  else
    return 0LL;
}