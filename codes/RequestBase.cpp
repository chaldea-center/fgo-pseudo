void __fastcall RequestBase___ctor(RequestBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_4217BDB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v5);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v6);
    byte_4217BDB = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B0D974(
                                                                           System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                           method,
                                                                           v2);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v7,
    (const MethodInfo_2E42658 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.paramInteger = (struct System_Collections_Generic_Dictionary_string__int__o *)v7;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.paramInteger,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v16 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B0D974(
                                                                                        System_Collections_Generic_Dictionary_string__string__TypeInfo,
                                                                                        v14,
                                                                                        v15);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v16,
    (const MethodInfo_2E4A0B8 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)v16;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.paramString,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RequestBase__AddSignatureField(RequestBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4217BDA & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    sub_B0D8A4(&SignedData_TypeInfo, v3);
    byte_4217BDA = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__SetSignatureField(this, 0LL);
  if ( (BYTE3(SignedData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SignedData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
  SignedData__RefillSigningData(3, 0LL);
}


void __fastcall RequestBase__ClearField(RequestBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_UIPanel__int__o *paramInteger; // x0

  if ( (byte_4217BC5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__Clear__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__string__Clear__, v3);
    byte_4217BC5 = 1;
  }
  paramInteger = (System_Collections_Generic_Dictionary_UIPanel__int__o *)this->fields.paramInteger;
  if ( !paramInteger
    || (System_Collections_Generic_Dictionary_UIPanel__int___Clear(
          paramInteger,
          (const MethodInfo_2E433E8 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__),
        (paramInteger = (System_Collections_Generic_Dictionary_UIPanel__int__o *)this->fields.paramString) == 0LL) )
  {
    sub_B0D97C(paramInteger);
  }
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramInteger,
    (const MethodInfo_2E4AE44 *)Method_System_Collections_Generic_Dictionary_string__string__Clear__);
}


void __fastcall RequestBase__ClearParameter(RequestBase_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  System_String_o *v4; // x0
  System_String_o *v5; // x19

  if ( (byte_4217BD7 & 1) == 0 )
  {
    sub_B0D8A4(&ManagerConfig_TypeInfo, method);
    byte_4217BD7 = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( !v3->static_fields->UseMock )
  {
    v4 = (System_String_o *)((__int64 (__fastcall *)(RequestBase_o *, void *))this->klass->vtable._16_getParameterFileName.method)(
                              this,
                              this->klass[1]._1.image);
    if ( v4 )
    {
      v5 = v4;
      if ( System_IO_File__Exists(v4, 0LL) )
        System_IO_File__Delete(v5, 0LL);
    }
  }
}


System_Byte_array *__fastcall RequestBase__PackToMessagePack(
        RequestBase_o *this,
        Il2CppObject *json,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  MiniMessagePack_MiniMessagePacker_o *v7; // x20
  __int64 v8; // x0
  System_Byte_array *v9; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  System_IO_MemoryStream_o *v12; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  System_IO_Compression_GZipStream_o *v15; // x20
  __int64 v16; // x0
  System_IO_Compression_GZipStream_c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x0
  System_Byte_array *v23; // x21
  int v24; // w22
  System_IO_MemoryStream_c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0
  int v30[2]; // [xsp+0h] [xbp-30h]
  int v31; // [xsp+8h] [xbp-28h]

  if ( (byte_4217BD9 & 1) == 0 )
  {
    sub_B0D8A4(&System_IO_Compression_GZipStream_TypeInfo, json);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v4);
    sub_B0D8A4(&System_IO_MemoryStream_TypeInfo, v5);
    sub_B0D8A4(&MiniMessagePack_MiniMessagePacker_TypeInfo, v6);
    byte_4217BD9 = 1;
  }
  v31 = 0;
  v7 = (MiniMessagePack_MiniMessagePacker_o *)sub_B0D974(MiniMessagePack_MiniMessagePacker_TypeInfo, json, method);
  MiniMessagePack_MiniMessagePacker___ctor(v7, 0LL);
  if ( !v7 )
    sub_B0D97C(v8);
  v9 = MiniMessagePack_MiniMessagePacker__PackClass(v7, json, 0LL);
  v12 = (System_IO_MemoryStream_o *)sub_B0D974(System_IO_MemoryStream_TypeInfo, v10, v11);
  System_IO_MemoryStream___ctor(v12, 0LL);
  v15 = (System_IO_Compression_GZipStream_o *)sub_B0D974(System_IO_Compression_GZipStream_TypeInfo, v13, v14);
  System_IO_Compression_GZipStream___ctor_37050176(v15, (System_IO_Stream_o *)v12, 0, 0LL);
  if ( !v9 )
    sub_B0D97C(v16);
  if ( !v15 )
    sub_B0D97C(v16);
  ((void (__fastcall *)(System_IO_Compression_GZipStream_o *, System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))v15->klass->vtable._32_Write.method)(
    v15,
    v9,
    0LL,
    v9->max_length,
    v15->klass->vtable._33_WriteByte.methodPtr);
  v30[0] = 49;
  v31 = 1;
  klass = v15->klass;
  if ( *(_WORD *)&v15->klass->_2.bitflags1 )
  {
    v18 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v18;
      p_offset += 4;
      if ( v18 >= *(unsigned __int16 *)&v15->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    v20 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v20 = sub_AA67A0(v15, System_IDisposable_TypeInfo, 0LL);
  }
  v21 = (*(__int64 (__fastcall **)(System_IO_Compression_GZipStream_o *, _QWORD))v20)(v15, *(_QWORD *)(v20 + 8));
  v31 = 0;
  if ( !v12 )
    sub_B0D97C(v21);
  v22 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v12->klass->vtable._37_ToArray.method)(
          v12,
          v12->klass[1]._1.image);
  v30[0] = 68;
  v23 = (System_Byte_array *)v22;
  v24 = ++v31;
  v25 = v12->klass;
  if ( *(_WORD *)&v12->klass->_2.bitflags1 )
  {
    v26 = 0LL;
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      ++v26;
      v27 += 4;
      if ( v26 >= *(unsigned __int16 *)&v12->klass->_2.bitflags1 )
        goto LABEL_19;
    }
    v28 = (__int64)(&v25->vtable._0_Equals.method + 2 * *v27);
  }
  else
  {
LABEL_19:
    v28 = sub_AA67A0(v12, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v28)(v12, *(_QWORD *)(v28 + 8));
  if ( v24 && v30[v24 - 1] == 68 )
    v31 = v24 - 1;
  return v23;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall RequestBase__ReadParameter(RequestBase_o *this, bool isRefreshTime, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  ManagerConfig_c *v10; // x0
  bool v11; // w21
  System_String_o *v13; // x0
  System_String_o *v14; // x19
  System_IO_Stream_o *v15; // x22
  __int64 v16; // x1
  __int64 v17; // x2
  System_IO_BinaryReader_o *v18; // x19
  const MethodInfo *v19; // x1
  __int64 v20; // x0
  int v21; // w23
  int v22; // w22
  int i; // w25
  System_Xml_XmlQualifiedName_o *v24; // x24
  System_Xml_Schema_XmlSchemaObject_o *v25; // x2
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0
  int j; // w24
  UIPanel_o *v28; // x23
  int32_t v29; // w2
  struct System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v32; // x10
  int32_t *p_offset; // x11
  __int64 v34; // x0

  if ( (byte_4217BD5 & 1) == 0 )
  {
    sub_B0D8A4(&System_IO_BinaryReader_TypeInfo, isRefreshTime);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__string__Add__, v6);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v7);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v8);
    sub_B0D8A4(&NetworkManager_TypeInfo, v9);
    byte_4217BD5 = 1;
  }
  v10 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v10 = ManagerConfig_TypeInfo;
  }
  if ( v10->static_fields->UseMock )
    return 0;
  v13 = (System_String_o *)((__int64 (__fastcall *)(RequestBase_o *, void *, const MethodInfo *))this->klass->vtable._16_getParameterFileName.method)(
                             this,
                             this->klass[1]._1.image,
                             method);
  if ( !v13 )
    return 0;
  v14 = v13;
  if ( !System_IO_File__Exists(v13, 0LL) )
    return 0;
  v15 = (System_IO_Stream_o *)System_IO_File__OpenRead(v14, 0LL);
  v18 = (System_IO_BinaryReader_o *)sub_B0D974(System_IO_BinaryReader_TypeInfo, v16, v17);
  System_IO_BinaryReader___ctor(v18, v15, 0LL);
  RequestBase__ClearField(this, v19);
  if ( !v18 )
    sub_B0D97C(v20);
  v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._15_ReadInt32.method)(
          v18,
          v18->klass->vtable._16_ReadUInt32.methodPtr);
  v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._15_ReadInt32.method)(
          v18,
          v18->klass->vtable._16_ReadUInt32.methodPtr);
  if ( v21 >= 1 )
  {
    for ( i = 0; i < v21; ++i )
    {
      v24 = (System_Xml_XmlQualifiedName_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._22_ReadString.method)(
                                               v18,
                                               v18->klass->vtable._23_ReadChars.methodPtr);
      v25 = (System_Xml_Schema_XmlSchemaObject_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._22_ReadString.method)(
                                                     v18,
                                                     v18->klass->vtable._23_ReadChars.methodPtr);
      paramString = this->fields.paramString;
      if ( !paramString )
        sub_B0D97C(0LL);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
        v24,
        v25,
        (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
    }
  }
  if ( v22 >= 1 )
  {
    for ( j = 0; j < v22; ++j )
    {
      v28 = (UIPanel_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._22_ReadString.method)(
                           v18,
                           v18->klass->vtable._23_ReadChars.methodPtr);
      v29 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._15_ReadInt32.method)(
              v18,
              v18->klass->vtable._16_ReadUInt32.methodPtr);
      paramInteger = this->fields.paramInteger;
      if ( !paramInteger )
        sub_B0D97C(0LL);
      System_Collections_Generic_Dictionary_UIPanel__int___Add(
        (System_Collections_Generic_Dictionary_UIPanel__int__o *)paramInteger,
        v28,
        v29,
        (const MethodInfo_2E4320C *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
    }
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__ReplaceBaseField(this, isRefreshTime, 0LL);
  v11 = 1;
  klass = v18->klass;
  if ( *(_WORD *)&v18->klass->_2.bitflags1 )
  {
    v32 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v32;
      p_offset += 4;
      if ( v32 >= *(unsigned __int16 *)&v18->klass->_2.bitflags1 )
        goto LABEL_27;
    }
    v34 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_27:
    v34 = sub_AA67A0(v18, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v34)(v18, *(_QWORD *)(v34 + 8));
  return v11;
}


Il2CppObject *__fastcall RequestBase__UnpackToMessagePack(
        RequestBase_o *this,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *v8; // x19
  System_Byte_array *v9; // x20
  __int64 v10; // x19
  __int64 v11; // x1
  __int64 v12; // x2
  System_IO_MemoryStream_o *v13; // x22
  __int64 v14; // x1
  __int64 v15; // x2
  System_IO_Compression_GZipStream_o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  System_IO_MemoryStream_o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  MiniMessagePack_MiniMessagePacker_o *v23; // x19

  if ( (byte_4217BD8 & 1) == 0 )
  {
    sub_B0D8A4(&byte___TypeInfo, obj);
    sub_B0D8A4(&System_Convert_TypeInfo, v4);
    sub_B0D8A4(&System_IO_Compression_GZipStream_TypeInfo, v5);
    sub_B0D8A4(&System_IO_MemoryStream_TypeInfo, v6);
    this = (RequestBase_o *)sub_B0D8A4(&MiniMessagePack_MiniMessagePacker_TypeInfo, v7);
    byte_4217BD8 = 1;
  }
  if ( !obj )
    goto LABEL_16;
  v8 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo *))obj->klass->vtable[3].method)(
                            obj,
                            obj->klass->vtable[4].methodPtr,
                            method);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v9 = System_Convert__FromBase64String(v8, 0LL);
  v10 = sub_B0D8BC(byte___TypeInfo, 1024LL);
  v13 = (System_IO_MemoryStream_o *)sub_B0D974(System_IO_MemoryStream_TypeInfo, v11, v12);
  System_IO_MemoryStream___ctor_44569216(v13, v9, 0LL);
  v16 = (System_IO_Compression_GZipStream_o *)sub_B0D974(System_IO_Compression_GZipStream_TypeInfo, v14, v15);
  System_IO_Compression_GZipStream___ctor(v16, (System_IO_Stream_o *)v13, 0, 0LL);
  v19 = (System_IO_MemoryStream_o *)sub_B0D974(System_IO_MemoryStream_TypeInfo, v17, v18);
  System_IO_MemoryStream___ctor(v19, 0LL);
  if ( !v10 || !v16 )
    goto LABEL_16;
  this = (RequestBase_o *)((__int64 (__fastcall *)(System_IO_Compression_GZipStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v16->klass->vtable._30_Read.method)(
                            v16,
                            v10,
                            0LL,
                            *(unsigned int *)(v10 + 24),
                            v16->klass->vtable._31_ReadByte.methodPtr);
  if ( (int)this >= 1 )
  {
    v22 = (unsigned int)this;
    while ( v19 )
    {
      ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, __int64, Il2CppMethodPointer))v19->klass->vtable._32_Write.method)(
        v19,
        v10,
        0LL,
        v22,
        v19->klass->vtable._33_WriteByte.methodPtr);
      this = (RequestBase_o *)((__int64 (__fastcall *)(System_IO_Compression_GZipStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v16->klass->vtable._30_Read.method)(
                                v16,
                                v10,
                                0LL,
                                *(unsigned int *)(v10 + 24),
                                v16->klass->vtable._31_ReadByte.methodPtr);
      v22 = (unsigned int)this;
      if ( (int)this < 1 )
        goto LABEL_13;
    }
LABEL_16:
    sub_B0D97C(this);
  }
LABEL_13:
  v23 = (MiniMessagePack_MiniMessagePacker_o *)sub_B0D974(MiniMessagePack_MiniMessagePacker_TypeInfo, v20, v21);
  MiniMessagePack_MiniMessagePacker___ctor(v23, 0LL);
  if ( !v19 )
    goto LABEL_16;
  this = (RequestBase_o *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v19->klass->vtable._37_ToArray.method)(
                            v19,
                            v19->klass[1]._1.image);
  if ( !v23 )
    goto LABEL_16;
  return MiniMessagePack_MiniMessagePacker__Unpack_25337572(v23, (System_Byte_array *)this, 0LL);
}


void __fastcall RequestBase__WriteParameter(RequestBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  ManagerConfig_c *v19; // x0
  System_String_o *v20; // x0
  System_IO_Stream_o *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  System_IO_BinaryWriter_o *v24; // x19
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0
  __int64 Count; // x0
  System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0
  unsigned int v28; // w0
  struct System_Collections_Generic_Dictionary_string__string__o *v29; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  Il2CppObject *currentKey; // x21
  struct System_Collections_Generic_Dictionary_string__string__o *v32; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  char v34; // w22
  System_Collections_Generic_Dictionary_string__int__o *v35; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v36; // x0
  Il2CppObject *v37; // x21
  System_Collections_Generic_Dictionary_string__int__o *v38; // x0
  unsigned int v39; // w0
  int v40; // w22
  int v41; // w8
  int v42; // w20
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v44; // x10
  int32_t *p_offset; // x11
  __int64 v46; // x0
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v47; // [xsp+10h] [xbp-A0h] BYREF
  int v48[4]; // [xsp+28h] [xbp-88h] BYREF
  int v49; // [xsp+38h] [xbp-78h]
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v50; // [xsp+40h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v51; // [xsp+60h] [xbp-50h] BYREF

  if ( (byte_4217BD6 & 1) == 0 )
  {
    sub_B0D8A4(&System_IO_BinaryWriter_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__get_Count__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__get_Keys__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__string__get_Keys__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__, v12);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__get_Current__,
      v13);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__get_Current__, v14);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__, v17);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v18);
    byte_4217BD6 = 1;
  }
  memset(&v51, 0, sizeof(v51));
  memset(&v50, 0, sizeof(v50));
  v49 = 0;
  v19 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v19 = ManagerConfig_TypeInfo;
  }
  if ( !v19->static_fields->UseMock )
  {
    v20 = (System_String_o *)((__int64 (__fastcall *)(RequestBase_o *, void *))this->klass->vtable._16_getParameterFileName.method)(
                               this,
                               this->klass[1]._1.image);
    if ( v20 )
    {
      v21 = (System_IO_Stream_o *)System_IO_File__OpenWrite(v20, 0LL);
      v24 = (System_IO_BinaryWriter_o *)sub_B0D974(System_IO_BinaryWriter_TypeInfo, v22, v23);
      System_IO_BinaryWriter___ctor_39036700(v24, v21, 0LL);
      paramString = this->fields.paramString;
      if ( !paramString )
        sub_B0D97C(0LL);
      Count = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
                (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
                (const MethodInfo_2E4A864 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
      if ( !v24 )
        sub_B0D97C(Count);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v24->klass->vtable._17_Write.method)(
        v24,
        (unsigned int)Count,
        v24->klass->vtable._18_Write.methodPtr);
      paramInteger = this->fields.paramInteger;
      if ( !paramInteger )
        sub_B0D97C(0LL);
      v28 = System_Collections_Generic_Dictionary_string__int___get_Count(
              paramInteger,
              (const MethodInfo_2E42E08 *)Method_System_Collections_Generic_Dictionary_string__int__get_Count__);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v24->klass->vtable._17_Write.method)(
        v24,
        v28,
        v24->klass->vtable._18_Write.methodPtr);
      v29 = this->fields.paramString;
      if ( !v29 )
        sub_B0D97C(0LL);
      Keys = System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element___get_Keys(
               (System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)v29,
               (const MethodInfo_2E4A874 *)Method_System_Collections_Generic_Dictionary_string__string__get_Keys__);
      if ( !Keys )
        sub_B0D97C(0LL);
      System_Collections_Generic_Dictionary_KeyCollection_string__AssetsInfo_dataInfo___GetEnumerator(
        &v47,
        Keys,
        (const MethodInfo_201B210 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__);
      v51 = v47;
      while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__AssetsInfo_dataInfo___MoveNext(
                &v51,
                (const MethodInfo_26CA6D8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__) )
      {
        currentKey = v51.fields.currentKey;
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppObject *, void *))v24->klass->vtable._22_Write.method)(
          v24,
          v51.fields.currentKey,
          v24->klass[1]._1.image);
        v32 = this->fields.paramString;
        if ( !v32 )
          sub_B0D97C(0LL);
        Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v32,
                 (System_Type_o *)currentKey,
                 (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, UnityEngine_Purchasing_IStoreExtension_o *, void *))v24->klass->vtable._22_Write.method)(
          v24,
          Item,
          v24->klass[1]._1.image);
      }
      v48[0] = 142;
      v49 = 1;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__AssetsInfo_dataInfo___Dispose(
        &v51,
        (const MethodInfo_26CA6D4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__);
      if ( v48[0] == 142 )
      {
        v34 = 0;
        v49 = 0;
      }
      else
      {
        v34 = 1;
      }
      v35 = this->fields.paramInteger;
      if ( !v35 )
        sub_B0D97C(0LL);
      v36 = System_Collections_Generic_Dictionary_string__int___get_Keys(
              v35,
              (const MethodInfo_2E42E18 *)Method_System_Collections_Generic_Dictionary_string__int__get_Keys__);
      if ( !v36 )
        sub_B0D97C(0LL);
      System_Collections_Generic_Dictionary_KeyCollection_string__int___GetEnumerator(
        &v47,
        v36,
        (const MethodInfo_2019E78 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__);
      v50 = v47;
      while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int___MoveNext(
                &v50,
                (const MethodInfo_26C81C0 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__) )
      {
        v37 = v50.fields.currentKey;
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppObject *, void *))v24->klass->vtable._22_Write.method)(
          v24,
          v50.fields.currentKey,
          v24->klass[1]._1.image);
        v38 = this->fields.paramInteger;
        if ( !v38 )
          sub_B0D97C(0LL);
        v39 = System_Collections_Generic_Dictionary_string__int___get_Item(
                v38,
                (System_String_o *)v37,
                (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v24->klass->vtable._17_Write.method)(
          v24,
          v39,
          v24->klass->vtable._18_Write.methodPtr);
      }
      *(_DWORD *)((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFFBLL | (4LL * (v34 & 1))) = 223;
      v40 = ++v49;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int___Dispose(
        &v50,
        (const MethodInfo_26C81BC *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__);
      if ( v40 )
      {
        v41 = v40 - 1;
        if ( v48[v40 - 1] == 223 )
        {
          --v40;
          v49 = v41;
        }
      }
      v48[v40] = 238;
      v42 = ++v49;
      klass = v24->klass;
      if ( *(_WORD *)&v24->klass->_2.bitflags1 )
      {
        v44 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          ++v44;
          p_offset += 4;
          if ( v44 >= *(unsigned __int16 *)&v24->klass->_2.bitflags1 )
            goto LABEL_34;
        }
        v46 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_34:
        v46 = sub_AA67A0(v24, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v46)(v24, *(_QWORD *)(v46 + 8));
      if ( v42 && v48[v42 - 1] == 238 )
        v49 = v42 - 1;
    }
  }
}


void __fastcall RequestBase__addBaseField(RequestBase_o *this, const MethodInfo *method)
{
  if ( (byte_4217BCC & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    byte_4217BCC = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__SetBaseField(this, 0LL);
}


void __fastcall RequestBase__addDeviceInfoField(RequestBase_o *this, const MethodInfo *method)
{
  if ( (byte_4217BCD & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    byte_4217BCD = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__SetDeviceInfoField(this, 0LL);
}


void __fastcall RequestBase__addField(
        RequestBase_o *this,
        System_String_o *fieldName,
        int32_t data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0

  if ( (byte_4217BC6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__Add__, fieldName);
    byte_4217BC6 = 1;
  }
  paramInteger = this->fields.paramInteger;
  if ( !paramInteger )
    sub_B0D97C(0LL);
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)paramInteger,
    (UIPanel_o *)fieldName,
    data,
    (const MethodInfo_2E4320C *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
}


void __fastcall RequestBase__addField_30435180(
        RequestBase_o *this,
        System_String_o *fieldName,
        int64_t data,
        const MethodInfo *method)
{
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v8; // x0
  System_Xml_Schema_XmlSchemaObject_o *v9; // x2
  int64_t v10; // [xsp+8h] [xbp-18h] BYREF

  v10 = data;
  if ( (byte_4217BC7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__string__Add__, fieldName);
    sub_B0D8A4(&StringLiteral_1/*""*/, v6);
    byte_4217BC7 = 1;
  }
  paramString = this->fields.paramString;
  v8 = System_Int64__ToString((int64_t)&v10, 0LL);
  if ( !paramString )
    sub_B0D97C(v8);
  if ( v8 )
    v9 = (System_Xml_Schema_XmlSchemaObject_o *)v8;
  else
    v9 = (System_Xml_Schema_XmlSchemaObject_o *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    v9,
    (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void __fastcall RequestBase__addField_30435336(
        RequestBase_o *this,
        System_String_o *fieldName,
        float data,
        const MethodInfo *method)
{
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v8; // x0
  System_Xml_Schema_XmlSchemaObject_o *v9; // x2
  float v10; // [xsp+Ch] [xbp-14h] BYREF

  v10 = data;
  if ( (byte_4217BC8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__string__Add__, fieldName);
    sub_B0D8A4(&StringLiteral_1/*""*/, v6);
    byte_4217BC8 = 1;
  }
  paramString = this->fields.paramString;
  v8 = System_Single__ToString(data, (const MethodInfo *)&v10);
  if ( !paramString )
    sub_B0D97C(v8);
  if ( v8 )
    v9 = (System_Xml_Schema_XmlSchemaObject_o *)v8;
  else
    v9 = (System_Xml_Schema_XmlSchemaObject_o *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    v9,
    (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void __fastcall RequestBase__addField_30435492(
        RequestBase_o *this,
        System_String_o *fieldName,
        double data,
        const MethodInfo *method)
{
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v8; // x0
  System_Xml_Schema_XmlSchemaObject_o *v9; // x2
  double v10; // [xsp+8h] [xbp-18h] BYREF

  v10 = data;
  if ( (byte_4217BC9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__string__Add__, fieldName);
    sub_B0D8A4(&StringLiteral_1/*""*/, v6);
    byte_4217BC9 = 1;
  }
  paramString = this->fields.paramString;
  v8 = System_Double__ToString(data, (const MethodInfo *)&v10);
  if ( !paramString )
    sub_B0D97C(v8);
  if ( v8 )
    v9 = (System_Xml_Schema_XmlSchemaObject_o *)v8;
  else
    v9 = (System_Xml_Schema_XmlSchemaObject_o *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    v9,
    (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void __fastcall RequestBase__addField_30435648(
        RequestBase_o *this,
        System_String_o *fieldName,
        System_String_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0

  if ( (byte_4217BCA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__string__Add__, fieldName);
    byte_4217BCA = 1;
  }
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_B0D97C(0LL);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    (System_Xml_Schema_XmlSchemaObject_o *)data,
    (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void __fastcall RequestBase__addField_30435756(
        RequestBase_o *this,
        System_String_o *fieldName,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *v8; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x8

  if ( (byte_4217BCB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__string__Add__, fieldName);
    sub_B0D8A4(&JsonManager_TypeInfo, v7);
    byte_4217BCB = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v8 = JsonManager__toJson(data, 0, 0, 0LL);
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_B0D97C(v8);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    (System_Xml_Schema_XmlSchemaObject_o *)v8,
    (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


bool __fastcall RequestBase__backgroundErrorRequest(
        RequestBase_o *this,
        System_String_o *errorCode,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *CallBack; // x0

  if ( (byte_4217BC1 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21137/*"ng"*/, errorCode);
    byte_4217BC1 = 1;
  }
  CallBack = this->fields.CallBack;
  if ( CallBack )
    NetworkManager_ResultCallbackFunc__Invoke(CallBack, (System_String_o *)StringLiteral_21137/*"ng"*/, 0LL);
  return 1;
}


void __fastcall RequestBase__backgroundErrorRetry(RequestBase_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall RequestBase__beginRequest(RequestBase_o *this, const MethodInfo *method)
{
  if ( (byte_4217BC3 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    byte_4217BC3 = 1;
  }
  RequestBase__addBaseField(this, method);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__RequestStart(this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall RequestBase__beginRetryRequest(RequestBase_o *this, bool isRefreshTime, const MethodInfo *method)
{
  if ( (byte_4217BC4 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, isRefreshTime);
    byte_4217BC4 = 1;
  }
  if ( !RequestBase__ReadParameter(this, isRefreshTime, method) )
    return 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__RequestStart(this, 0LL);
  return 1;
}


bool __fastcall RequestBase__checkExpirationDate(RequestBase_o *this, const MethodInfo *method)
{
  return 0;
}


void __fastcall RequestBase__completed(RequestBase_o *this, System_String_o *result, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *CallBack; // x0

  CallBack = this->fields.CallBack;
  if ( CallBack )
    NetworkManager_ResultCallbackFunc__Invoke(CallBack, result, 0LL);
}


bool __fastcall RequestBase__errorRequest(RequestBase_o *this, System_String_o *errorCode, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *CallBack; // x0

  if ( (byte_4217BC2 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21137/*"ng"*/, errorCode);
    byte_4217BC2 = 1;
  }
  CallBack = this->fields.CallBack;
  if ( CallBack )
    NetworkManager_ResultCallbackFunc__Invoke(CallBack, (System_String_o *)StringLiteral_21137/*"ng"*/, 0LL);
  return 1;
}


void __fastcall RequestBase__errorRetry(RequestBase_o *this, const MethodInfo *method)
{
  ;
}


System_String_o *__fastcall RequestBase__getMockData(RequestBase_o *this, const MethodInfo *method)
{
  return 0LL;
}


System_String_o *__fastcall RequestBase__getMockURL(RequestBase_o *this, const MethodInfo *method)
{
  return 0LL;
}


System_String_o *__fastcall RequestBase__getParameterFileName(RequestBase_o *this, const MethodInfo *method)
{
  return 0LL;
}


System_String_o *__fastcall RequestBase__getURL(RequestBase_o *this, const MethodInfo *method)
{
  return 0LL;
}


UnityEngine_WWWForm_o *__fastcall RequestBase__getWWWForm(
        RequestBase_o *this,
        System_Collections_Generic_SortedDictionary_string__string__o **authParams,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  UnityEngine_WWWForm_o *v21; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_SortedDictionary_string__string__o *v24; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *paramString; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *v32; // x0
  Il2CppObject *currentKey; // x22
  System_String_o *Item; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *v35; // x0
  System_Collections_Generic_SortedDictionary_string__string__o *v36; // x23
  System_String_o *v37; // x0
  System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0
  Il2CppObject *v39; // x22
  __int64 v40; // x0
  System_Collections_Generic_Dictionary_string__int__o *v41; // x0
  System_Collections_Generic_SortedDictionary_string__string__o *v42; // x23
  int32_t v43; // w24
  System_String_o *v44; // x0
  int v45; // w20
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v47; // [xsp+8h] [xbp-B8h] BYREF
  int v48[2]; // [xsp+20h] [xbp-A0h]
  int v49; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v50; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v51; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_4217BD4 & 1) == 0 )
  {
    sub_B0D8A4(&System_Convert_TypeInfo, authParams);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__get_Keys__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__string__get_Keys__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__, v12);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__get_Current__,
      v13);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__get_Current__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_SortedDictionary_string__string__Add__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_SortedDictionary_string__string___ctor__, v18);
    sub_B0D8A4(&System_Collections_Generic_SortedDictionary_string__string__TypeInfo, v19);
    sub_B0D8A4(&UnityEngine_WWWForm_TypeInfo, v20);
    byte_4217BD4 = 1;
  }
  memset(&v51, 0, sizeof(v51));
  memset(&v50, 0, sizeof(v50));
  v49 = 0;
  v21 = (UnityEngine_WWWForm_o *)sub_B0D974(UnityEngine_WWWForm_TypeInfo, authParams, method);
  UnityEngine_WWWForm___ctor(v21, 0LL);
  v24 = (System_Collections_Generic_SortedDictionary_string__string__o *)sub_B0D974(
                                                                           System_Collections_Generic_SortedDictionary_string__string__TypeInfo,
                                                                           v22,
                                                                           v23);
  System_Collections_Generic_SortedDictionary_string__string____ctor(
    v24,
    (const MethodInfo_2A718B0 *)Method_System_Collections_Generic_SortedDictionary_string__string___ctor__);
  *authParams = v24;
  sub_B0D840((BattleServantConfConponent_o *)authParams, (System_Int32_array **)v24, v25, v26, v27, v28, v29, v30);
  paramString = (System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)this->fields.paramString;
  if ( !paramString )
    goto LABEL_36;
  paramString = (System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element___get_Keys(paramString, (const MethodInfo_2E4A874 *)Method_System_Collections_Generic_Dictionary_string__string__get_Keys__);
  if ( !paramString )
    goto LABEL_36;
  System_Collections_Generic_Dictionary_KeyCollection_string__AssetsInfo_dataInfo___GetEnumerator(
    &v47,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)paramString,
    (const MethodInfo_201B210 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__);
  v51 = v47;
  while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__AssetsInfo_dataInfo___MoveNext(
            &v51,
            (const MethodInfo_26CA6D8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__) )
  {
    v32 = this->fields.paramString;
    if ( !v32 )
      sub_B0D97C(0LL);
    currentKey = v51.fields.currentKey;
    Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v32,
                                (System_Type_o *)v51.fields.currentKey,
                                (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    if ( !v21 )
      sub_B0D97C(Item);
    UnityEngine_WWWForm__AddField(v21, (System_String_o *)currentKey, Item, 0LL);
    v35 = this->fields.paramString;
    if ( !v35 )
      sub_B0D97C(0LL);
    v36 = *authParams;
    v37 = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                               (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v35,
                               (System_Type_o *)currentKey,
                               (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    if ( !v36 )
      sub_B0D97C(v37);
    System_Collections_Generic_SortedDictionary_string__string___Add(
      v36,
      (System_String_o *)currentKey,
      v37,
      (const MethodInfo_2A71FA0 *)Method_System_Collections_Generic_SortedDictionary_string__string__Add__);
  }
  v48[0] = 104;
  v49 = 1;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__AssetsInfo_dataInfo___Dispose(
    &v51,
    (const MethodInfo_26CA6D4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__);
  v49 = 0;
  paramString = (System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)this->fields.paramInteger;
  if ( !paramString
    || (paramString = (System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)System_Collections_Generic_Dictionary_string__int___get_Keys((System_Collections_Generic_Dictionary_string__int__o *)paramString, (const MethodInfo_2E42E18 *)Method_System_Collections_Generic_Dictionary_string__int__get_Keys__)) == 0LL )
  {
LABEL_36:
    sub_B0D97C(paramString);
  }
  System_Collections_Generic_Dictionary_KeyCollection_string__int___GetEnumerator(
    &v47,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)paramString,
    (const MethodInfo_2019E78 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__);
  v50 = v47;
  while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int___MoveNext(
            &v50,
            (const MethodInfo_26C81C0 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__) )
  {
    paramInteger = this->fields.paramInteger;
    if ( !paramInteger )
      sub_B0D97C(0LL);
    v39 = v50.fields.currentKey;
    v40 = System_Collections_Generic_Dictionary_string__int___get_Item(
            paramInteger,
            (System_String_o *)v50.fields.currentKey,
            (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    if ( !v21 )
      sub_B0D97C(v40);
    UnityEngine_WWWForm__AddField_50538732(v21, (System_String_o *)v39, v40, 0LL);
    v41 = this->fields.paramInteger;
    if ( !v41 )
      sub_B0D97C(0LL);
    v42 = *authParams;
    v43 = System_Collections_Generic_Dictionary_string__int___get_Item(
            v41,
            (System_String_o *)v39,
            (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Convert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    }
    v44 = System_Convert__ToString_41931572(v43, 0LL);
    if ( !v42 )
      sub_B0D97C(v44);
    System_Collections_Generic_SortedDictionary_string__string___Add(
      v42,
      (System_String_o *)v39,
      v44,
      (const MethodInfo_2A71FA0 *)Method_System_Collections_Generic_SortedDictionary_string__string__Add__);
  }
  v48[0] = 205;
  v45 = ++v49;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int___Dispose(
    &v50,
    (const MethodInfo_26C81BC *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__);
  if ( v45 && v48[v45 - 1] == 205 )
    v49 = v45 - 1;
  return v21;
}


bool __fastcall RequestBase__isAutoRetryRequest(RequestBase_o *this, const MethodInfo *method)
{
  return 0;
}


bool __fastcall RequestBase__isBackgroundRequest(RequestBase_o *this, const MethodInfo *method)
{
  return 0;
}


bool __fastcall RequestBase__isShowConnect(RequestBase_o *this, const MethodInfo *method)
{
  return 1;
}


void __fastcall RequestBase__replaceField(
        RequestBase_o *this,
        System_String_o *fieldName,
        int32_t data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0

  if ( (byte_4217BCE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, fieldName);
    byte_4217BCE = 1;
  }
  paramInteger = this->fields.paramInteger;
  if ( !paramInteger )
    sub_B0D97C(0LL);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)paramInteger,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    data,
    (const MethodInfo_2E431E4 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
}


void __fastcall RequestBase__replaceField_30436140(
        RequestBase_o *this,
        System_String_o *fieldName,
        int64_t data,
        const MethodInfo *method)
{
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v8; // x0
  System_Xml_Schema_XmlSchemaObject_o *v9; // x2
  int64_t v10; // [xsp+8h] [xbp-18h] BYREF

  v10 = data;
  if ( (byte_4217BCF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, fieldName);
    sub_B0D8A4(&StringLiteral_1/*""*/, v6);
    byte_4217BCF = 1;
  }
  paramString = this->fields.paramString;
  v8 = System_Int64__ToString((int64_t)&v10, 0LL);
  if ( !paramString )
    sub_B0D97C(v8);
  if ( v8 )
    v9 = (System_Xml_Schema_XmlSchemaObject_o *)v8;
  else
    v9 = (System_Xml_Schema_XmlSchemaObject_o *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    v9,
    (const MethodInfo_2E4AC40 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall RequestBase__replaceField_30436296(
        RequestBase_o *this,
        System_String_o *fieldName,
        float data,
        const MethodInfo *method)
{
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v8; // x0
  System_Xml_Schema_XmlSchemaObject_o *v9; // x2
  float v10; // [xsp+Ch] [xbp-14h] BYREF

  v10 = data;
  if ( (byte_4217BD0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, fieldName);
    sub_B0D8A4(&StringLiteral_1/*""*/, v6);
    byte_4217BD0 = 1;
  }
  paramString = this->fields.paramString;
  v8 = System_Single__ToString(data, (const MethodInfo *)&v10);
  if ( !paramString )
    sub_B0D97C(v8);
  if ( v8 )
    v9 = (System_Xml_Schema_XmlSchemaObject_o *)v8;
  else
    v9 = (System_Xml_Schema_XmlSchemaObject_o *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    v9,
    (const MethodInfo_2E4AC40 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall RequestBase__replaceField_30436452(
        RequestBase_o *this,
        System_String_o *fieldName,
        double data,
        const MethodInfo *method)
{
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v8; // x0
  System_Xml_Schema_XmlSchemaObject_o *v9; // x2
  double v10; // [xsp+8h] [xbp-18h] BYREF

  v10 = data;
  if ( (byte_4217BD1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, fieldName);
    sub_B0D8A4(&StringLiteral_1/*""*/, v6);
    byte_4217BD1 = 1;
  }
  paramString = this->fields.paramString;
  v8 = System_Double__ToString(data, (const MethodInfo *)&v10);
  if ( !paramString )
    sub_B0D97C(v8);
  if ( v8 )
    v9 = (System_Xml_Schema_XmlSchemaObject_o *)v8;
  else
    v9 = (System_Xml_Schema_XmlSchemaObject_o *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    v9,
    (const MethodInfo_2E4AC40 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall RequestBase__replaceField_30436608(
        RequestBase_o *this,
        System_String_o *fieldName,
        System_String_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0

  if ( (byte_4217BD2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, fieldName);
    byte_4217BD2 = 1;
  }
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_B0D97C(0LL);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    (System_Xml_Schema_XmlSchemaObject_o *)data,
    (const MethodInfo_2E4AC40 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall RequestBase__replaceField_30436716(
        RequestBase_o *this,
        System_String_o *fieldName,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *v8; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x8

  if ( (byte_4217BD3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, fieldName);
    sub_B0D8A4(&JsonManager_TypeInfo, v7);
    byte_4217BD3 = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v8 = JsonManager__toJson(data, 0, 0, 0LL);
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_B0D97C(v8);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    (System_Xml_Schema_XmlSchemaObject_o *)v8,
    (const MethodInfo_2E4AC40 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall RequestBase__requestCompleted(
        RequestBase_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *CallBack; // x0

  CallBack = this->fields.CallBack;
  if ( CallBack )
    NetworkManager_ResultCallbackFunc__Invoke(CallBack, 0LL, 0LL);
}