void Crc32___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x0
  System_RuntimeFieldHandle_o v2; // x1
  System_Array_o *v3; // x19
  struct Crc32_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C26994 & 1) == 0 )
  {
    sub_1C2D490(&Crc32_TypeInfo);
    sub_1C2D490(&Field__PrivateImplementationDetails__12F3E0576D447EB37B36D82BA0C1C5481B8F0D12FDC70347CE4A076B229D4C86);
    sub_1C2D490(&uint___TypeInfo);
    byte_4C26994 = 1;
  }
  Crc32_TypeInfo->static_fields->CRC_UNIT = 256;
  v1 = (System_Array_o *)sub_1C2D538(uint___TypeInfo, 256);
  v2.fields.value = Field__PrivateImplementationDetails__12F3E0576D447EB37B36D82BA0C1C5481B8F0D12FDC70347CE4A076B229D4C86;
  v3 = v1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64158640(v1, v2, 0);
  static_fields = Crc32_TypeInfo->static_fields;
  static_fields->CrcTable = (struct System_UInt32_array *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->CrcTable, (int32_t)v3, v5, v6);
}


uint32_t Crc32__Compute(System_Byte_array *buffer, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Byte_array *v3; // x19
  il2cpp_array_size_t max_length; // x20
  unsigned int v5; // w21
  unsigned int v6; // w23
  il2cpp_array_size_t v7; // x8
  __int64 v8; // x9
  unsigned int v9; // w10

  v3 = buffer;
  if ( (byte_4C26991 & 1) == 0 )
  {
    buffer = (System_Byte_array *)sub_1C2D490(&Crc32_TypeInfo);
    byte_4C26991 = 1;
  }
  if ( !v3 )
LABEL_15:
    sub_1C2D6EC(buffer, method);
  max_length = v3->max_length;
  if ( (int)max_length - 1 < 0 )
    return 0;
  v5 = 0;
  v6 = -1;
  v7 = v3->max_length;
  buffer = (System_Byte_array *)Crc32_TypeInfo;
  do
  {
    if ( !*(_DWORD *)&buffer->m_Items[192] )
    {
      j_il2cpp_runtime_class_init_0(buffer);
      buffer = (System_Byte_array *)Crc32_TypeInfo;
      v7 = v3->max_length;
    }
    if ( v5 >= (unsigned int)v7 )
      goto LABEL_14;
    v8 = *(_QWORD *)(*(_QWORD *)&buffer->m_Items[152] + 8LL);
    if ( !v8 )
      goto LABEL_15;
    v9 = (unsigned __int8)v6 ^ v3->m_Items[v5];
    if ( v9 >= *(_DWORD *)(v8 + 24) )
LABEL_14:
      sub_1C2D6F4(buffer, method, v2);
    ++v5;
    v6 = *(_DWORD *)(v8 + 4LL * v9 + 32) ^ (v6 >> 8);
  }
  while ( (_DWORD)max_length != v5 );
  return ~v6;
}


// local variable allocation has failed, the output may be wrong!
uint32_t Crc32__Compute_41024564(System_Byte_array *buffer, int32_t length, const MethodInfo *method)
{
  int32_t v3; // w20
  System_Byte_array *v4; // x19
  il2cpp_array_size_t max_length; // x8
  unsigned int v6; // w21
  unsigned int v7; // w23
  __int64 v8; // x9
  unsigned int v9; // w10

  v3 = length;
  v4 = buffer;
  if ( (byte_4C26992 & 1) == 0 )
  {
    buffer = (System_Byte_array *)sub_1C2D490(&Crc32_TypeInfo);
    byte_4C26992 = 1;
  }
  if ( !v4 )
LABEL_17:
    sub_1C2D6EC(buffer, *(_QWORD *)&length);
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
    if ( !*(_DWORD *)&buffer->m_Items[192] )
    {
      j_il2cpp_runtime_class_init_0(buffer);
      buffer = (System_Byte_array *)Crc32_TypeInfo;
      max_length = v4->max_length;
    }
    if ( v6 >= (unsigned int)max_length )
      goto LABEL_16;
    v8 = *(_QWORD *)(*(_QWORD *)&buffer->m_Items[152] + 8LL);
    if ( !v8 )
      goto LABEL_17;
    v9 = (unsigned __int8)v7 ^ v4->m_Items[v6];
    if ( v9 >= *(_DWORD *)(v8 + 24) )
LABEL_16:
      sub_1C2D6F4(buffer, *(_QWORD *)&length, method);
    ++v6;
    v7 = *(_DWORD *)(v8 + 4LL * v9 + 32) ^ (v7 >> 8);
  }
  while ( v3 != v6 );
  return ~v7;
}


// local variable allocation has failed, the output may be wrong!
uint32_t Crc32__Compute_41024788(System_Byte_array *buffer, int32_t length, uint32_t crc, const MethodInfo *method)
{
  int32_t v5; // w21
  System_Byte_array *v6; // x19
  il2cpp_array_size_t max_length; // x8
  uint32_t v8; // w20
  unsigned int v9; // w23
  __int64 v10; // x9
  unsigned int v11; // w10

  v5 = length;
  v6 = buffer;
  if ( (byte_4C26993 & 1) == 0 )
  {
    buffer = (System_Byte_array *)sub_1C2D490(&Crc32_TypeInfo);
    byte_4C26993 = 1;
  }
  if ( !v6 )
LABEL_16:
    sub_1C2D6EC(buffer, *(_QWORD *)&length);
  max_length = v6->max_length;
  v8 = ~crc;
  if ( (int)max_length < v5 )
    v5 = v6->max_length;
  if ( v5 - 1 >= 0 )
  {
    v9 = 0;
    buffer = (System_Byte_array *)Crc32_TypeInfo;
    do
    {
      if ( !*(_DWORD *)&buffer->m_Items[192] )
      {
        j_il2cpp_runtime_class_init_0(buffer);
        buffer = (System_Byte_array *)Crc32_TypeInfo;
        max_length = v6->max_length;
      }
      if ( v9 >= (unsigned int)max_length )
        goto LABEL_15;
      v10 = *(_QWORD *)(*(_QWORD *)&buffer->m_Items[152] + 8LL);
      if ( !v10 )
        goto LABEL_16;
      v11 = (unsigned __int8)v8 ^ v6->m_Items[v9];
      if ( v11 >= *(_DWORD *)(v10 + 24) )
LABEL_15:
        sub_1C2D6F4(buffer, *(_QWORD *)&length, *(_QWORD *)&crc);
      ++v9;
      v8 = *(_DWORD *)(v10 + 4LL * v11 + 32) ^ (v8 >> 8);
    }
    while ( v5 != v9 );
  }
  return ~v8;
}