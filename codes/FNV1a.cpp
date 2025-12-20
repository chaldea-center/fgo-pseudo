uint32_t FNV1a__Hash32(System_Byte_array *bytes, int32_t offset, int32_t len, uint32_t hash, const MethodInfo *method)
{
  uint8_t *v5; // x9
  __int64 v6; // x10
  int v7; // t1

  if ( offset < len )
  {
    if ( !bytes )
      sub_1C942F0(0, offset);
    v5 = &bytes->m_Items[offset];
    v6 = len - (__int64)offset;
    do
    {
      if ( (unsigned int)offset >= LODWORD(bytes->max_length) )
        sub_1C942F8(bytes);
      v7 = *v5++;
      --v6;
      ++offset;
      hash = 16777619 * (hash ^ v7);
    }
    while ( v6 );
  }
  return hash;
}


uint32_t FNV1a__Hash32_42019788(System_String_o *str, const MethodInfo *method)
{
  System_Text_Encoding_o *UTF8; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x4

  UTF8 = System_Text_Encoding__get_UTF8(0);
  if ( !UTF8
    || (UTF8 = (System_Text_Encoding_o *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
                                           UTF8,
                                           str,
                                           UTF8->klass->vtable._18_GetBytes.method)) == 0 )
  {
    sub_1C942F0(UTF8, v4);
  }
  return FNV1a__Hash32((System_Byte_array *)UTF8, 0, (int32_t)UTF8->fields.dataItem, 0x811C9DC5, v5);
}


uint64_t FNV1a__Hash64(System_Byte_array *bytes, int32_t offset, int32_t len, uint64_t hash, const MethodInfo *method)
{
  uint8_t *v5; // x9
  __int64 v6; // x10
  unsigned int v7; // t1

  if ( offset < len )
  {
    if ( !bytes )
      sub_1C942F0(0, offset);
    v5 = &bytes->m_Items[offset];
    v6 = len - (__int64)offset;
    do
    {
      if ( (unsigned int)offset >= LODWORD(bytes->max_length) )
        sub_1C942F8(bytes);
      v7 = *v5++;
      --v6;
      ++offset;
      hash = 0x100000001B3LL * (hash ^ v7);
    }
    while ( v6 );
  }
  return hash;
}