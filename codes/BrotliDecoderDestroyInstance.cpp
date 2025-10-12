__int64 __fastcall BrotliDecoderDestroyInstance(__int64 result)
{
  __int64 v1; // x19
  __int64 v2; // x20
  __int64 (__fastcall *v3)(__int64, __int64); // [xsp+8h] [xbp-18h]

  if ( result )
  {
    v1 = result;
    v2 = *(_QWORD *)(result + 56);
    v3 = *(__int64 (__fastcall **)(__int64, __int64))(result + 48);
    sub_1C33978(result);
    return v3(v2, v1);
  }
  return result;
}