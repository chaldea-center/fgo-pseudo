void __fastcall Crc32___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Array_o *v4; // x19
  struct Crc32_StaticFields *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_RuntimeFieldHandle_o v12; // 0:w1.4

  if ( (byte_42164FE & 1) == 0 )
  {
    sub_B0D8A4(&Crc32_TypeInfo, v1);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__12F3E0576D447EB37B36D82BA0C1C5481B8F0D12FDC70347CE4A076B229D4C86,
      v2);
    sub_B0D8A4(&uint___TypeInfo, v3);
    byte_42164FE = 1;
  }
  Crc32_TypeInfo->static_fields->CRC_UNIT = 256;
  v4 = (System_Array_o *)sub_B0D8BC(uint___TypeInfo, 256LL);
  v12.fields.value = Field__PrivateImplementationDetails__12F3E0576D447EB37B36D82BA0C1C5481B8F0D12FDC70347CE4A076B229D4C86;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v4, v12, 0LL);
  static_fields = Crc32_TypeInfo->static_fields;
  static_fields->CrcTable = (struct System_UInt32_array *)v4;
  sub_B0D840(
    (BattleServantConfConponent_o *)&static_fields->CrcTable,
    (System_Int32_array **)v4,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


uint32_t __fastcall Crc32__Compute(System_Byte_array *buffer, const MethodInfo *method)
{
  System_Byte_array *v2; // x19
  __int64 v3; // x8
  int v4; // w20
  unsigned int v5; // w21
  unsigned int v6; // w23
  __int64 v7; // x9
  unsigned int v8; // w10
  __int64 v10; // x0

  v2 = buffer;
  if ( (byte_42164FB & 1) == 0 )
  {
    buffer = (System_Byte_array *)sub_B0D8A4(&Crc32_TypeInfo, method);
    byte_42164FB = 1;
  }
  if ( !v2 )
LABEL_16:
    sub_B0D97C(buffer);
  v3 = *(_QWORD *)&v2->max_length;
  v4 = v3 - 1;
  if ( (int)v3 - 1 < 0 )
    return 0;
  v5 = 0;
  v6 = -1;
  buffer = (System_Byte_array *)Crc32_TypeInfo;
  do
  {
    if ( (buffer->m_Items[279] & 4) != 0 && !*(_DWORD *)&buffer->m_Items[196] )
    {
      j_il2cpp_runtime_class_init_0(buffer);
      buffer = (System_Byte_array *)Crc32_TypeInfo;
      v3 = *(_QWORD *)&v2->max_length;
    }
    if ( v5 >= (unsigned int)v3 )
      goto LABEL_15;
    v7 = *(_QWORD *)(*(_QWORD *)&buffer->m_Items[156] + 8LL);
    if ( !v7 )
      goto LABEL_16;
    v8 = (unsigned __int8)v6 ^ v2->m_Items[v5 + 4];
    if ( v8 >= *(_DWORD *)(v7 + 24) )
    {
LABEL_15:
      v10 = sub_B0D9A8(buffer);
      sub_B0D948(v10, 0LL);
    }
    ++v5;
    --v4;
    v6 = *(_DWORD *)(v7 + 4LL * v8 + 32) ^ (v6 >> 8);
  }
  while ( v4 >= 0 );
  return ~v6;
}


// local variable allocation has failed, the output may be wrong!
uint32_t __fastcall Crc32__Compute_27767876(System_Byte_array *buffer, int32_t length, const MethodInfo *method)
{
  System_Byte_array *v4; // x19
  __int64 v5; // x8
  int32_t v6; // w9
  int v7; // w20
  unsigned int v8; // w21
  unsigned int v9; // w23
  __int64 v10; // x9
  unsigned int v11; // w10
  __int64 v13; // x0

  v4 = buffer;
  if ( (byte_42164FC & 1) == 0 )
  {
    buffer = (System_Byte_array *)sub_B0D8A4(&Crc32_TypeInfo, *(_QWORD *)&length);
    byte_42164FC = 1;
  }
  if ( !v4 )
LABEL_19:
    sub_B0D97C(buffer);
  v5 = *(_QWORD *)&v4->max_length;
  if ( (int)v5 >= length )
    v6 = length;
  else
    v6 = *(_QWORD *)&v4->max_length;
  v7 = v6 - 1;
  if ( v6 - 1 < 0 )
    return 0;
  v8 = 0;
  v9 = -1;
  buffer = (System_Byte_array *)Crc32_TypeInfo;
  do
  {
    if ( (buffer->m_Items[279] & 4) != 0 && !*(_DWORD *)&buffer->m_Items[196] )
    {
      j_il2cpp_runtime_class_init_0(buffer);
      buffer = (System_Byte_array *)Crc32_TypeInfo;
      v5 = *(_QWORD *)&v4->max_length;
    }
    if ( v8 >= (unsigned int)v5 )
      goto LABEL_18;
    v10 = *(_QWORD *)(*(_QWORD *)&buffer->m_Items[156] + 8LL);
    if ( !v10 )
      goto LABEL_19;
    v11 = (unsigned __int8)v9 ^ v4->m_Items[v8 + 4];
    if ( v11 >= *(_DWORD *)(v10 + 24) )
    {
LABEL_18:
      v13 = sub_B0D9A8(buffer);
      sub_B0D948(v13, 0LL);
    }
    ++v8;
    --v7;
    v9 = *(_DWORD *)(v10 + 4LL * v11 + 32) ^ (v9 >> 8);
  }
  while ( v7 >= 0 );
  return ~v9;
}


// local variable allocation has failed, the output may be wrong!
uint32_t __fastcall Crc32__Compute_27768128(
        System_Byte_array *buffer,
        int32_t length,
        uint32_t crc,
        const MethodInfo *method)
{
  System_Byte_array *v6; // x19
  __int64 v7; // x8
  uint32_t v8; // w20
  int32_t v9; // w9
  int v10; // w21
  unsigned int v11; // w23
  __int64 v12; // x9
  unsigned int v13; // w10
  __int64 v15; // x0

  v6 = buffer;
  if ( (byte_42164FD & 1) == 0 )
  {
    buffer = (System_Byte_array *)sub_B0D8A4(&Crc32_TypeInfo, *(_QWORD *)&length);
    byte_42164FD = 1;
  }
  if ( !v6 )
LABEL_18:
    sub_B0D97C(buffer);
  v7 = *(_QWORD *)&v6->max_length;
  v8 = ~crc;
  if ( (int)v7 >= length )
    v9 = length;
  else
    v9 = *(_QWORD *)&v6->max_length;
  v10 = v9 - 1;
  if ( v9 - 1 >= 0 )
  {
    v11 = 0;
    buffer = (System_Byte_array *)Crc32_TypeInfo;
    do
    {
      if ( (buffer->m_Items[279] & 4) != 0 && !*(_DWORD *)&buffer->m_Items[196] )
      {
        j_il2cpp_runtime_class_init_0(buffer);
        buffer = (System_Byte_array *)Crc32_TypeInfo;
        v7 = *(_QWORD *)&v6->max_length;
      }
      if ( v11 >= (unsigned int)v7 )
        goto LABEL_17;
      v12 = *(_QWORD *)(*(_QWORD *)&buffer->m_Items[156] + 8LL);
      if ( !v12 )
        goto LABEL_18;
      v13 = (unsigned __int8)v8 ^ v6->m_Items[v11 + 4];
      if ( v13 >= *(_DWORD *)(v12 + 24) )
      {
LABEL_17:
        v15 = sub_B0D9A8(buffer);
        sub_B0D948(v15, 0LL);
      }
      ++v11;
      --v10;
      v8 = *(_DWORD *)(v12 + 4LL * v13 + 32) ^ (v8 >> 8);
    }
    while ( v10 >= 0 );
  }
  return ~v8;
}