void __fastcall Crc32___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  System_Array_o *v5; // x19
  struct Crc32_StaticFields *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_RuntimeFieldHandle_o v13; // 0:w1.4

  if ( (byte_40FBDEE & 1) == 0 )
  {
    sub_B16FFC(&Crc32_TypeInfo, v1);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__12F3E0576D447EB37B36D82BA0C1C5481B8F0D12FDC70347CE4A076B229D4C86,
      v3);
    sub_B16FFC(&uint___TypeInfo, v4);
    byte_40FBDEE = 1;
  }
  Crc32_TypeInfo->static_fields->CRC_UNIT = 256;
  v5 = (System_Array_o *)sub_B17014(uint___TypeInfo, 256LL, v2);
  v13.fields.value = Field__PrivateImplementationDetails__12F3E0576D447EB37B36D82BA0C1C5481B8F0D12FDC70347CE4A076B229D4C86;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v5, v13, 0LL);
  static_fields = Crc32_TypeInfo->static_fields;
  static_fields->CrcTable = (struct System_UInt32_array *)v5;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->CrcTable,
    (System_Int32_array **)v5,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


uint32_t __fastcall Crc32__Compute(System_Byte_array *buffer, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x8
  int v5; // w20
  unsigned int v6; // w21
  unsigned int v7; // w23
  Crc32_c *v8; // x0
  struct System_UInt32_array *CrcTable; // x9
  unsigned int v10; // w10

  if ( (byte_40FBDEB & 1) == 0 )
  {
    sub_B16FFC(&Crc32_TypeInfo, method);
    byte_40FBDEB = 1;
  }
  if ( !buffer )
LABEL_16:
    sub_B170D4();
  v4 = *(_QWORD *)&buffer->max_length;
  v5 = v4 - 1;
  if ( (int)v4 - 1 < 0 )
    return 0;
  v6 = 0;
  v7 = -1;
  v8 = Crc32_TypeInfo;
  do
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = Crc32_TypeInfo;
      v4 = *(_QWORD *)&buffer->max_length;
    }
    if ( v6 >= (unsigned int)v4 )
      goto LABEL_15;
    CrcTable = v8->static_fields->CrcTable;
    if ( !CrcTable )
      goto LABEL_16;
    v10 = (unsigned __int8)v7 ^ buffer->m_Items[v6 + 4];
    if ( v10 >= CrcTable->max_length )
    {
LABEL_15:
      sub_B17100(v8, method, v2);
      sub_B170A0();
    }
    ++v6;
    --v5;
    v7 = CrcTable->m_Items[v10 + 1] ^ (v7 >> 8);
  }
  while ( v5 >= 0 );
  return ~v7;
}


// local variable allocation has failed, the output may be wrong!
uint32_t __fastcall Crc32__Compute_28516132(System_Byte_array *buffer, int32_t length, const MethodInfo *method)
{
  __int64 v5; // x8
  int32_t v6; // w9
  int v7; // w20
  unsigned int v8; // w21
  unsigned int v9; // w23
  Crc32_c *v10; // x0
  struct System_UInt32_array *CrcTable; // x9
  unsigned int v12; // w10

  if ( (byte_40FBDEC & 1) == 0 )
  {
    sub_B16FFC(&Crc32_TypeInfo, *(_QWORD *)&length);
    byte_40FBDEC = 1;
  }
  if ( !buffer )
LABEL_19:
    sub_B170D4();
  v5 = *(_QWORD *)&buffer->max_length;
  if ( (int)v5 >= length )
    v6 = length;
  else
    v6 = *(_QWORD *)&buffer->max_length;
  v7 = v6 - 1;
  if ( v6 - 1 < 0 )
    return 0;
  v8 = 0;
  v9 = -1;
  v10 = Crc32_TypeInfo;
  do
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = Crc32_TypeInfo;
      v5 = *(_QWORD *)&buffer->max_length;
    }
    if ( v8 >= (unsigned int)v5 )
      goto LABEL_18;
    CrcTable = v10->static_fields->CrcTable;
    if ( !CrcTable )
      goto LABEL_19;
    v12 = (unsigned __int8)v9 ^ buffer->m_Items[v8 + 4];
    if ( v12 >= CrcTable->max_length )
    {
LABEL_18:
      sub_B17100(v10, *(_QWORD *)&length, method);
      sub_B170A0();
    }
    ++v8;
    --v7;
    v9 = CrcTable->m_Items[v12 + 1] ^ (v9 >> 8);
  }
  while ( v7 >= 0 );
  return ~v9;
}


// local variable allocation has failed, the output may be wrong!
uint32_t __fastcall Crc32__Compute_28516384(
        System_Byte_array *buffer,
        int32_t length,
        uint32_t crc,
        const MethodInfo *method)
{
  __int64 v7; // x8
  uint32_t v8; // w20
  int32_t v9; // w9
  int v10; // w21
  unsigned int v11; // w23
  Crc32_c *v12; // x0
  struct System_UInt32_array *CrcTable; // x9
  unsigned int v14; // w10

  if ( (byte_40FBDED & 1) == 0 )
  {
    sub_B16FFC(&Crc32_TypeInfo, *(_QWORD *)&length);
    byte_40FBDED = 1;
  }
  if ( !buffer )
LABEL_18:
    sub_B170D4();
  v7 = *(_QWORD *)&buffer->max_length;
  v8 = ~crc;
  if ( (int)v7 >= length )
    v9 = length;
  else
    v9 = *(_QWORD *)&buffer->max_length;
  v10 = v9 - 1;
  if ( v9 - 1 >= 0 )
  {
    v11 = 0;
    v12 = Crc32_TypeInfo;
    do
    {
      if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = Crc32_TypeInfo;
        v7 = *(_QWORD *)&buffer->max_length;
      }
      if ( v11 >= (unsigned int)v7 )
        goto LABEL_17;
      CrcTable = v12->static_fields->CrcTable;
      if ( !CrcTable )
        goto LABEL_18;
      v14 = (unsigned __int8)v8 ^ buffer->m_Items[v11 + 4];
      if ( v14 >= CrcTable->max_length )
      {
LABEL_17:
        sub_B17100(v12, *(_QWORD *)&length, *(_QWORD *)&crc);
        sub_B170A0();
      }
      ++v11;
      --v10;
      v8 = CrcTable->m_Items[v14 + 1] ^ (v8 >> 8);
    }
    while ( v10 >= 0 );
  }
  return ~v8;
}