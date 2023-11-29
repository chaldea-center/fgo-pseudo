// local variable allocation has failed, the output may be wrong!
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

  if ( offset < len )
  {
    if ( !bytes )
      sub_B170D4();
    v5 = offset + 32LL;
    do
    {
      if ( offset >= bytes->max_length )
      {
        sub_B17100(bytes, *(_QWORD *)&offset, *(_QWORD *)&len);
        sub_B170A0();
      }
      v6 = *((unsigned __int8 *)&bytes->obj.klass + v5);
      v7 = v5 - 31;
      ++v5;
      hash = 16777619 * (hash ^ v6);
      *(_QWORD *)&offset = (unsigned int)(offset + 1);
    }
    while ( v7 < len );
  }
  return hash;
}


uint32_t __fastcall FNV1a__Hash32_25147676(System_String_o *str, const MethodInfo *method)
{
  System_Text_Encoding_o *UTF8; // x0
  System_Byte_array *v4; // x0
  const MethodInfo *v5; // x4

  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8
    || (v4 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                                    UTF8,
                                    str,
                                    UTF8->klass->vtable._19_GetBytes.methodPtr)) == 0LL )
  {
    sub_B170D4();
  }
  return FNV1a__Hash32(v4, 0, v4->max_length, 0x811C9DC5, v5);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( offset < len )
  {
    if ( !bytes )
      sub_B170D4();
    v5 = offset + 32LL;
    do
    {
      if ( offset >= bytes->max_length )
      {
        sub_B17100(bytes, *(_QWORD *)&offset, *(_QWORD *)&len);
        sub_B170A0();
      }
      v6 = *((unsigned __int8 *)&bytes->obj.klass + v5);
      v7 = v5 - 31;
      ++v5;
      hash = 0x100000001B3LL * (hash ^ v6);
      *(_QWORD *)&offset = (unsigned int)(offset + 1);
    }
    while ( v7 < len );
  }
  return hash;
}