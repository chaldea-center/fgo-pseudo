void __fastcall Crc32___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  System_Array_o *v7; // x0
  int64_t v8; // x19
  struct Crc32_StaticFields *static_fields; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_RuntimeFieldHandle_o v16; // 0:w1.4

  if ( (byte_4B15883 & 1) == 0 )
  {
    sub_1BCA7E0(&Crc32_TypeInfo, v1, v2);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__12F3E0576D447EB37B36D82BA0C1C5481B8F0D12FDC70347CE4A076B229D4C86,
      v3,
      v4);
    sub_1BCA7E0(&uint___TypeInfo, v5, v6);
    byte_4B15883 = 1;
  }
  Crc32_TypeInfo->static_fields->CRC_UNIT = 256;
  v7 = (System_Array_o *)sub_1BCA888(uint___TypeInfo, 256LL);
  v16.fields.value = Field__PrivateImplementationDetails__12F3E0576D447EB37B36D82BA0C1C5481B8F0D12FDC70347CE4A076B229D4C86;
  v8 = (int64_t)v7;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v7, v16, 0LL);
  static_fields = Crc32_TypeInfo->static_fields;
  static_fields->CrcTable = (struct System_UInt32_array *)v8;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->CrcTable, v8, v10, v11, v12, v13, v14, v15);
}


uint32_t __fastcall Crc32__Compute(System_Byte_array *buffer, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Byte_array *v3; // x19
  __int64 v4; // x20
  unsigned int v5; // w21
  unsigned int v6; // w23
  __int64 v7; // x8
  __int64 v8; // x9
  unsigned int v9; // w10

  v3 = buffer;
  if ( (byte_4B15880 & 1) == 0 )
  {
    buffer = (System_Byte_array *)sub_1BCA7E0(&Crc32_TypeInfo, method, v2);
    byte_4B15880 = 1;
  }
  if ( !v3 )
LABEL_15:
    sub_1BCAA3C(buffer, method);
  v4 = *(_QWORD *)&v3->max_length;
  if ( (int)v4 - 1 < 0 )
    return 0;
  v5 = 0;
  v6 = -1;
  v7 = *(_QWORD *)&v3->max_length;
  buffer = (System_Byte_array *)Crc32_TypeInfo;
  do
  {
    if ( !*(_DWORD *)&buffer->m_Items[196] )
    {
      j_il2cpp_runtime_class_init_0(buffer, method);
      buffer = (System_Byte_array *)Crc32_TypeInfo;
      v7 = *(_QWORD *)&v3->max_length;
    }
    if ( v5 >= (unsigned int)v7 )
      goto LABEL_14;
    v8 = *(_QWORD *)(*(_QWORD *)&buffer->m_Items[156] + 8LL);
    if ( !v8 )
      goto LABEL_15;
    v9 = (unsigned __int8)v6 ^ v3->m_Items[v5 + 4];
    if ( v9 >= *(_DWORD *)(v8 + 24) )
LABEL_14:
      sub_1BCAA44(buffer, method);
    ++v5;
    v6 = *(_DWORD *)(v8 + 4LL * v9 + 32) ^ (v6 >> 8);
  }
  while ( (_DWORD)v4 != v5 );
  return ~v6;
}


// local variable allocation has failed, the output may be wrong!
uint32_t __fastcall Crc32__Compute_39080772(System_Byte_array *buffer, int32_t length, const MethodInfo *method)
{
  int32_t v3; // w20
  System_Byte_array *v4; // x19
  __int64 v5; // x8
  unsigned int v6; // w21
  unsigned int v7; // w23
  __int64 v8; // x9
  unsigned int v9; // w10

  v3 = length;
  v4 = buffer;
  if ( (byte_4B15881 & 1) == 0 )
  {
    buffer = (System_Byte_array *)sub_1BCA7E0(&Crc32_TypeInfo, *(_QWORD *)&length, method);
    byte_4B15881 = 1;
  }
  if ( !v4 )
LABEL_17:
    sub_1BCAA3C(buffer, *(_QWORD *)&length);
  v5 = *(_QWORD *)&v4->max_length;
  if ( (int)v5 < v3 )
    v3 = *(_QWORD *)&v4->max_length;
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
      v5 = *(_QWORD *)&v4->max_length;
    }
    if ( v6 >= (unsigned int)v5 )
      goto LABEL_16;
    v8 = *(_QWORD *)(*(_QWORD *)&buffer->m_Items[156] + 8LL);
    if ( !v8 )
      goto LABEL_17;
    v9 = (unsigned __int8)v7 ^ v4->m_Items[v6 + 4];
    if ( v9 >= *(_DWORD *)(v8 + 24) )
LABEL_16:
      sub_1BCAA44(buffer, *(_QWORD *)&length);
    ++v6;
    v7 = *(_DWORD *)(v8 + 4LL * v9 + 32) ^ (v7 >> 8);
  }
  while ( v3 != v6 );
  return ~v7;
}


// local variable allocation has failed, the output may be wrong!
uint32_t __fastcall Crc32__Compute_39080996(
        System_Byte_array *buffer,
        int32_t length,
        uint32_t crc,
        const MethodInfo *method)
{
  int32_t v5; // w21
  System_Byte_array *v6; // x19
  __int64 v7; // x8
  uint32_t v8; // w20
  unsigned int v9; // w23
  __int64 v10; // x9
  unsigned int v11; // w10

  v5 = length;
  v6 = buffer;
  if ( (byte_4B15882 & 1) == 0 )
  {
    buffer = (System_Byte_array *)sub_1BCA7E0(&Crc32_TypeInfo, *(_QWORD *)&length, *(_QWORD *)&crc);
    byte_4B15882 = 1;
  }
  if ( !v6 )
LABEL_16:
    sub_1BCAA3C(buffer, *(_QWORD *)&length);
  v7 = *(_QWORD *)&v6->max_length;
  v8 = ~crc;
  if ( (int)v7 < v5 )
    v5 = *(_QWORD *)&v6->max_length;
  if ( v5 - 1 >= 0 )
  {
    v9 = 0;
    buffer = (System_Byte_array *)Crc32_TypeInfo;
    do
    {
      if ( !*(_DWORD *)&buffer->m_Items[196] )
      {
        j_il2cpp_runtime_class_init_0(buffer, *(_QWORD *)&length);
        buffer = (System_Byte_array *)Crc32_TypeInfo;
        v7 = *(_QWORD *)&v6->max_length;
      }
      if ( v9 >= (unsigned int)v7 )
        goto LABEL_15;
      v10 = *(_QWORD *)(*(_QWORD *)&buffer->m_Items[156] + 8LL);
      if ( !v10 )
        goto LABEL_16;
      v11 = (unsigned __int8)v8 ^ v6->m_Items[v9 + 4];
      if ( v11 >= *(_DWORD *)(v10 + 24) )
LABEL_15:
        sub_1BCAA44(buffer, *(_QWORD *)&length);
      ++v9;
      v8 = *(_DWORD *)(v10 + 4LL * v11 + 32) ^ (v8 >> 8);
    }
    while ( v5 != v9 );
  }
  return ~v8;
}