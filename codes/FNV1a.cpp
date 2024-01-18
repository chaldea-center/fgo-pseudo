uint32_t __fastcall FNV1a__Hash32(
        System_Byte_array *bytes,
        int32_t offset,
        int32_t len,
        uint32_t hash,
        const MethodInfo *method)
{
  __int64 v5; // x11
  int v6; // w12
  __int64 v7; // x13
  __int64 v9; // x0

  if ( offset < len )
  {
    if ( !bytes )
      sub_B2C434(0LL, offset);
    v5 = offset + 32LL;
    do
    {
      if ( offset >= bytes->max_length )
      {
        v9 = sub_B2C460(bytes);
        sub_B2C400(v9, 0LL);
      }
      v6 = *((unsigned __int8 *)&bytes->obj.klass + v5);
      v7 = v5 - 31;
      ++v5;
      hash = 16777619 * (hash ^ v6);
      ++offset;
    }
    while ( v7 < len );
  }
  return hash;
}


uint32_t __fastcall FNV1a__Hash32_26485052(System_String_o *str, const MethodInfo *method)
{
  System_Byte_array *UTF8; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x4

  UTF8 = (System_Byte_array *)System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8
    || (UTF8 = (System_Byte_array *)((__int64 (__fastcall *)(System_Byte_array *, System_String_o *, Il2CppMethodPointer))UTF8->obj.klass->vtable[18].method)(
                                      UTF8,
                                      str,
                                      UTF8->obj.klass->vtable[19].methodPtr)) == 0LL )
  {
    sub_B2C434(UTF8, v4);
  }
  return FNV1a__Hash32(UTF8, 0, UTF8->max_length, 0x811C9DC5, v5);
}


uint64_t __fastcall FNV1a__Hash64(
        System_Byte_array *bytes,
        int32_t offset,
        int32_t len,
        uint64_t hash,
        const MethodInfo *method)
{
  __int64 v5; // x11
  __int64 v6; // x12
  __int64 v7; // x13
  __int64 v9; // x0

  if ( offset < len )
  {
    if ( !bytes )
      sub_B2C434(0LL, offset);
    v5 = offset + 32LL;
    do
    {
      if ( offset >= bytes->max_length )
      {
        v9 = sub_B2C460(bytes);
        sub_B2C400(v9, 0LL);
      }
      v6 = *((unsigned __int8 *)&bytes->obj.klass + v5);
      v7 = v5 - 31;
      ++v5;
      hash = 0x100000001B3LL * (hash ^ v6);
      ++offset;
    }
    while ( v7 < len );
  }
  return hash;
}