__int64 __fastcall mono_metadata_generic_class_is_valuetype(__int64 a1)
{
  return *(_DWORD *)(*(_QWORD *)a1 + 8LL) >> 31;
}