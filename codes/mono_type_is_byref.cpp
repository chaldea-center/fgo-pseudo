__int64 __fastcall mono_type_is_byref(__int64 a1)
{
  return (*(_DWORD *)(a1 + 8) >> 29) & 1;
}