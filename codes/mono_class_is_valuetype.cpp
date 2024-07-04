__int64 __fastcall mono_class_is_valuetype(__int64 a1)
{
  return *(_DWORD *)(a1 + 40) >> 31;
}