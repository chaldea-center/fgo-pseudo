void __fastcall Crc32___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_Array_o *v10; // x19
  struct Crc32_StaticFields *static_fields; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_RuntimeFieldHandle_o v18; // 0:w1.4

  if ( (byte_42EA7E1 & 1) == 0 )
  {
    sub_B5D5C4(&Crc32_TypeInfo, v1, v2, v3);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__12F3E0576D447EB37B36D82BA0C1C5481B8F0D12FDC70347CE4A076B229D4C86,
      v4,
      v5,
      v6);
    sub_B5D5C4(&uint___TypeInfo, v7, v8, v9);
    byte_42EA7E1 = 1;
  }
  Crc32_TypeInfo->static_fields->CRC_UNIT = 256;
  v10 = (System_Array_o *)sub_B5D5DC(uint___TypeInfo, 256LL);
  v18.fields.value = Field__PrivateImplementationDetails__12F3E0576D447EB37B36D82BA0C1C5481B8F0D12FDC70347CE4A076B229D4C86;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v10, v18, 0LL);
  static_fields = Crc32_TypeInfo->static_fields;
  static_fields->CrcTable = (struct System_UInt32_array *)v10;
  sub_B5D560(
    (BattleServantConfConponent_o *)&static_fields->CrcTable,
    (System_Int32_array **)v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


uint32_t __fastcall Crc32__Compute(System_Byte_array *buffer, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Byte_array *v4; // x19
  __int64 v5; // x8
  int v6; // w20
  unsigned int v7; // w21
  unsigned int v8; // w23
  __int64 v9; // x9
  unsigned int v10; // w10
  __int64 v12; // x0

  v4 = buffer;
  if ( (byte_42EA7DE & 1) == 0 )
  {
    buffer = (System_Byte_array *)sub_B5D5C4(&Crc32_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA7DE = 1;
  }
  if ( !v4 )
LABEL_16:
    sub_B5D69C(buffer, method);
  v5 = *(_QWORD *)&v4->max_length;
  v6 = v5 - 1;
  if ( (int)v5 - 1 < 0 )
    return 0;
  v7 = 0;
  v8 = -1;
  buffer = (System_Byte_array *)Crc32_TypeInfo;
  do
  {
    if ( (buffer->m_Items[279] & 4) != 0 && !*(_DWORD *)&buffer->m_Items[196] )
    {
      j_il2cpp_runtime_class_init_0(buffer);
      buffer = (System_Byte_array *)Crc32_TypeInfo;
      v5 = *(_QWORD *)&v4->max_length;
    }
    if ( v7 >= (unsigned int)v5 )
      goto LABEL_15;
    v9 = *(_QWORD *)(*(_QWORD *)&buffer->m_Items[156] + 8LL);
    if ( !v9 )
      goto LABEL_16;
    v10 = (unsigned __int8)v8 ^ v4->m_Items[v7 + 4];
    if ( v10 >= *(_DWORD *)(v9 + 24) )
    {
LABEL_15:
      v12 = sub_B5D6C8(buffer);
      sub_B5D668(v12, 0LL);
    }
    ++v7;
    --v6;
    v8 = *(_DWORD *)(v9 + 4LL * v10 + 32) ^ (v8 >> 8);
  }
  while ( v6 >= 0 );
  return ~v8;
}


// local variable allocation has failed, the output may be wrong!
uint32_t __fastcall Crc32__Compute_28777968(System_Byte_array *buffer, int32_t length, const MethodInfo *method)
{
  __int64 v3; // x3
  System_Byte_array *v5; // x19
  __int64 v6; // x8
  int32_t v7; // w9
  int v8; // w20
  unsigned int v9; // w21
  unsigned int v10; // w23
  __int64 v11; // x9
  unsigned int v12; // w10
  __int64 v14; // x0

  v5 = buffer;
  if ( (byte_42EA7DF & 1) == 0 )
  {
    buffer = (System_Byte_array *)sub_B5D5C4(&Crc32_TypeInfo, length, (_DWORD)method, v3);
    byte_42EA7DF = 1;
  }
  if ( !v5 )
LABEL_19:
    sub_B5D69C(buffer, *(_QWORD *)&length);
  v6 = *(_QWORD *)&v5->max_length;
  if ( (int)v6 >= length )
    v7 = length;
  else
    v7 = *(_QWORD *)&v5->max_length;
  v8 = v7 - 1;
  if ( v7 - 1 < 0 )
    return 0;
  v9 = 0;
  v10 = -1;
  buffer = (System_Byte_array *)Crc32_TypeInfo;
  do
  {
    if ( (buffer->m_Items[279] & 4) != 0 && !*(_DWORD *)&buffer->m_Items[196] )
    {
      j_il2cpp_runtime_class_init_0(buffer);
      buffer = (System_Byte_array *)Crc32_TypeInfo;
      v6 = *(_QWORD *)&v5->max_length;
    }
    if ( v9 >= (unsigned int)v6 )
      goto LABEL_18;
    v11 = *(_QWORD *)(*(_QWORD *)&buffer->m_Items[156] + 8LL);
    if ( !v11 )
      goto LABEL_19;
    v12 = (unsigned __int8)v10 ^ v5->m_Items[v9 + 4];
    if ( v12 >= *(_DWORD *)(v11 + 24) )
    {
LABEL_18:
      v14 = sub_B5D6C8(buffer);
      sub_B5D668(v14, 0LL);
    }
    ++v9;
    --v8;
    v10 = *(_DWORD *)(v11 + 4LL * v12 + 32) ^ (v10 >> 8);
  }
  while ( v8 >= 0 );
  return ~v10;
}


// local variable allocation has failed, the output may be wrong!
uint32_t __fastcall Crc32__Compute_28778220(
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
  if ( (byte_42EA7E0 & 1) == 0 )
  {
    buffer = (System_Byte_array *)sub_B5D5C4(&Crc32_TypeInfo, length, crc, method);
    byte_42EA7E0 = 1;
  }
  if ( !v6 )
LABEL_18:
    sub_B5D69C(buffer, *(_QWORD *)&length);
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
        v15 = sub_B5D6C8(buffer);
        sub_B5D668(v15, 0LL);
      }
      ++v11;
      --v10;
      v8 = *(_DWORD *)(v12 + 4LL * v13 + 32) ^ (v8 >> 8);
    }
    while ( v10 >= 0 );
  }
  return ~v8;
}