// local variable allocation has failed, the output may be wrong!
uint32_t FNV1a__Hash32(System_Byte_array *bytes, int32_t offset, int32_t len, uint32_t hash, const MethodInfo *method)
{
  unsigned int max_length; // w8
  bool v6; // cf
  unsigned int v7; // w10
  __int64 v8; // x8
  uint8_t *v9; // x11
  unsigned int v10; // w9
  int v11; // t1

  if ( offset < len )
  {
    if ( !bytes )
      sub_21FFECC(0, *(_QWORD *)&offset);
    max_length = bytes->max_length;
    v6 = max_length >= offset;
    v7 = max_length - offset;
    v8 = len - (__int64)offset;
    v9 = &bytes->m_Items[offset];
    if ( v6 )
      v10 = v7;
    else
      v10 = 0;
    do
    {
      if ( v10 <= ~offset + len )
        sub_21FFED4(bytes);
      v11 = *v9++;
      --v8;
      hash = 16777619 * (hash ^ v11);
    }
    while ( v8 );
  }
  return hash;
}


uint32_t FNV1a__Hash32_48198728(System_String_o *str, const MethodInfo *method)
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
    sub_21FFECC(UTF8, v4);
  }
  return FNV1a__Hash32((System_Byte_array *)UTF8, 0, (int32_t)UTF8->fields.dataItem, 0x811C9DC5, v5);
}


// local variable allocation has failed, the output may be wrong!
uint64_t FNV1a__Hash64(System_Byte_array *bytes, int32_t offset, int32_t len, uint64_t hash, const MethodInfo *method)
{
  unsigned int max_length; // w8
  bool v6; // cf
  unsigned int v7; // w10
  __int64 v8; // x8
  uint8_t *v9; // x11
  unsigned int v10; // w9
  unsigned int v11; // t1

  if ( offset < len )
  {
    if ( !bytes )
      sub_21FFECC(0, *(_QWORD *)&offset);
    max_length = bytes->max_length;
    v6 = max_length >= offset;
    v7 = max_length - offset;
    v8 = len - (__int64)offset;
    v9 = &bytes->m_Items[offset];
    if ( v6 )
      v10 = v7;
    else
      v10 = 0;
    do
    {
      if ( v10 <= ~offset + len )
        sub_21FFED4(bytes);
      v11 = *v9++;
      --v8;
      hash = 0x100000001B3LL * (hash ^ v11);
    }
    while ( v8 );
  }
  return hash;
}