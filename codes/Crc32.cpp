void Crc32___cctor(const MethodInfo *method)
{
  Il2CppClass *v1; // x0
  System_Array_o *v2; // x0
  System_RuntimeFieldHandle_o v3; // x1
  System_Array_o *v4; // x19
  struct Crc32_StaticFields *static_fields; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5937D0A & 1) == 0 )
  {
    sub_21FFC50(&Crc32_TypeInfo);
    sub_21FFC50(&Field__PrivateImplementationDetails__12F3E0576D447EB37B36D82BA0C1C5481B8F0D12FDC70347CE4A076B229D4C86);
    sub_21FFC50(&uint___TypeInfo);
    byte_5937D0A = 1;
  }
  v1 = uint___TypeInfo;
  Crc32_TypeInfo->static_fields->CRC_UNIT = 256;
  v2 = (System_Array_o *)sub_21FFD10(v1, 256);
  v3.fields.value = Field__PrivateImplementationDetails__12F3E0576D447EB37B36D82BA0C1C5481B8F0D12FDC70347CE4A076B229D4C86;
  v4 = v2;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v2, v3, 0);
  static_fields = Crc32_TypeInfo->static_fields;
  static_fields->CrcTable = (struct System_UInt32_array *)v4;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->CrcTable, (int32_t)v4, v6, v7, v8, v9, v10, v11);
}


uint32_t Crc32__Compute(System_Byte_array *buffer, const MethodInfo *method)
{
  System_Byte_array *v2; // x19
  il2cpp_array_size_t max_length; // x20
  unsigned int v4; // w21
  unsigned int v5; // w23
  il2cpp_array_size_t v6; // x8
  __int64 v7; // x9
  unsigned __int8 v8; // w10

  v2 = buffer;
  if ( (byte_5937D07 & 1) == 0 )
  {
    buffer = (System_Byte_array *)sub_21FFC50(&Crc32_TypeInfo);
    byte_5937D07 = 1;
  }
  if ( !v2 )
LABEL_15:
    sub_21FFECC(buffer, method);
  max_length = v2->max_length;
  if ( (int)max_length - 1 < 0 )
    return 0;
  v4 = 0;
  v5 = -1;
  v6 = v2->max_length;
  buffer = (System_Byte_array *)Crc32_TypeInfo;
  do
  {
    if ( !*(_DWORD *)&buffer->m_Items[196] )
    {
      j_il2cpp_runtime_class_init_0(buffer, method);
      buffer = (System_Byte_array *)Crc32_TypeInfo;
      v6 = v2->max_length;
    }
    if ( v4 >= (unsigned int)v6 )
      goto LABEL_14;
    v7 = *(_QWORD *)(*(_QWORD *)&buffer->m_Items[152] + 8LL);
    if ( !v7 )
      goto LABEL_15;
    v8 = v2->m_Items[v4] ^ v5;
    if ( *(_DWORD *)(v7 + 24) <= (unsigned int)v8 )
LABEL_14:
      sub_21FFED4(buffer);
    ++v4;
    v5 = *(_DWORD *)(v7 + 4LL * v8 + 32) ^ (v5 >> 8);
  }
  while ( (_DWORD)max_length != v4 );
  return ~v5;
}


// local variable allocation has failed, the output may be wrong!
uint32_t Crc32__Compute_48182432(System_Byte_array *buffer, int32_t length, const MethodInfo *method)
{
  int32_t v3; // w20
  System_Byte_array *v4; // x19
  il2cpp_array_size_t max_length; // x8
  unsigned int v6; // w21
  unsigned int v7; // w23
  __int64 v8; // x9
  unsigned __int8 v9; // w10

  v3 = length;
  v4 = buffer;
  if ( (byte_5937D08 & 1) == 0 )
  {
    buffer = (System_Byte_array *)sub_21FFC50(&Crc32_TypeInfo);
    byte_5937D08 = 1;
  }
  if ( !v4 )
LABEL_17:
    sub_21FFECC(buffer, *(_QWORD *)&length);
  max_length = v4->max_length;
  if ( (int)max_length < v3 )
    v3 = v4->max_length;
  if ( v3 - 1 < 0 )
    return 0;
  v6 = 0;
  v7 = -1;
  buffer = (System_Byte_array *)Crc32_TypeInfo;
  do
  {
    if ( !*(_DWORD *)&buffer->m_Items[196] )
    {
      j_il2cpp_runtime_class_init_0(buffer, *(_QWORD *)&length);
      buffer = (System_Byte_array *)Crc32_TypeInfo;
      max_length = v4->max_length;
    }
    if ( v6 >= (unsigned int)max_length )
      goto LABEL_16;
    v8 = *(_QWORD *)(*(_QWORD *)&buffer->m_Items[152] + 8LL);
    if ( !v8 )
      goto LABEL_17;
    v9 = v4->m_Items[v6] ^ v7;
    if ( *(_DWORD *)(v8 + 24) <= (unsigned int)v9 )
LABEL_16:
      sub_21FFED4(buffer);
    ++v6;
    v7 = *(_DWORD *)(v8 + 4LL * v9 + 32) ^ (v7 >> 8);
  }
  while ( v3 != v6 );
  return ~v7;
}


// local variable allocation has failed, the output may be wrong!
uint32_t Crc32__Compute_48182652(System_Byte_array *buffer, int32_t length, uint32_t crc, const MethodInfo *method)
{
  int32_t v5; // w21
  System_Byte_array *v6; // x19
  il2cpp_array_size_t max_length; // x8
  unsigned int v8; // w22
  uint32_t v9; // w20
  __int64 v10; // x9
  unsigned __int8 v11; // w10

  v5 = length;
  v6 = buffer;
  if ( (byte_5937D09 & 1) == 0 )
  {
    buffer = (System_Byte_array *)sub_21FFC50(&Crc32_TypeInfo);
    byte_5937D09 = 1;
  }
  if ( !v6 )
LABEL_17:
    sub_21FFECC(buffer, *(_QWORD *)&length);
  max_length = v6->max_length;
  if ( (int)max_length < v5 )
    v5 = v6->max_length;
  if ( v5 - 1 >= 0 )
  {
    v8 = 0;
    v9 = ~crc;
    buffer = (System_Byte_array *)Crc32_TypeInfo;
    do
    {
      if ( !*(_DWORD *)&buffer->m_Items[196] )
      {
        j_il2cpp_runtime_class_init_0(buffer, *(_QWORD *)&length);
        buffer = (System_Byte_array *)Crc32_TypeInfo;
        max_length = v6->max_length;
      }
      if ( v8 >= (unsigned int)max_length )
        goto LABEL_16;
      v10 = *(_QWORD *)(*(_QWORD *)&buffer->m_Items[152] + 8LL);
      if ( !v10 )
        goto LABEL_17;
      v11 = v6->m_Items[v8] ^ v9;
      if ( *(_DWORD *)(v10 + 24) <= (unsigned int)v11 )
LABEL_16:
        sub_21FFED4(buffer);
      ++v8;
      v9 = *(_DWORD *)(v10 + 4LL * v11 + 32) ^ (v9 >> 8);
    }
    while ( v5 != v8 );
    return ~v9;
  }
  return crc;
}