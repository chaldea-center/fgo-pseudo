// local variable allocation has failed, the output may be wrong!
uint32_t __fastcall FNV1a__Hash32(
        System_Byte_array *bytes,
        int32_t offset,
        int32_t len,
        uint32_t hash,
        const MethodInfo *method)
{
  uint8_t *v5; // x9
  __int64 v6; // x10
  int v7; // t1

  if ( offset < len )
  {
    if ( !bytes )
      sub_1C3B9C0(0LL, offset);
    v5 = &bytes->m_Items[offset + 4];
    v6 = len - (__int64)offset;
    do
    {
      if ( offset >= bytes->max_length )
        sub_1C3B9C8(bytes, *(_QWORD *)&offset);
      v7 = *v5++;
      --v6;
      *(_QWORD *)&offset = (unsigned int)(offset + 1);
      hash = 16777619 * (hash ^ v7);
    }
    while ( v6 );
  }
  return hash;
}


uint32_t __fastcall FNV1a__Hash32_39809948(System_String_o *str, const MethodInfo *method)
{
  System_Byte_array *UTF8; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x4

  UTF8 = (System_Byte_array *)System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8
    || (UTF8 = (System_Byte_array *)((__int64 (__fastcall *)(System_Byte_array *, System_String_o *, Il2CppMethodPointer))UTF8->obj.klass->vtable[19].method)(
                                      UTF8,
                                      str,
                                      UTF8->obj.klass->vtable[20].methodPtr)) == 0LL )
  {
    sub_1C3B9C0(UTF8, v4);
  }
  return FNV1a__Hash32(UTF8, 0, UTF8->max_length, 0x811C9DC5, v5);
}


// local variable allocation has failed, the output may be wrong!
uint64_t __fastcall FNV1a__Hash64(
        System_Byte_array *bytes,
        int32_t offset,
        int32_t len,
        uint64_t hash,
        const MethodInfo *method)
{
  uint8_t *v5; // x9
  __int64 v6; // x10
  unsigned int v7; // t1

  if ( offset < len )
  {
    if ( !bytes )
      sub_1C3B9C0(0LL, offset);
    v5 = &bytes->m_Items[offset + 4];
    v6 = len - (__int64)offset;
    do
    {
      if ( offset >= bytes->max_length )
        sub_1C3B9C8(bytes, *(_QWORD *)&offset);
      v7 = *v5++;
      --v6;
      *(_QWORD *)&offset = (unsigned int)(offset + 1);
      hash = 0x100000001B3LL * (hash ^ v7);
    }
    while ( v6 );
  }
  return hash;
}