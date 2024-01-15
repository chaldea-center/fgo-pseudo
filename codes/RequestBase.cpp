void __fastcall RequestBase___ctor(RequestBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_40FD341 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v8);
    byte_40FD341 = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B170CC(
                                                                           System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                           method,
                                                                           v2,
                                                                           v3,
                                                                           v4);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v9,
    (const MethodInfo_2D9B608 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.paramInteger = (struct System_Collections_Generic_Dictionary_string__int__o *)v9;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.paramInteger,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v20 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                        System_Collections_Generic_Dictionary_string__string__TypeInfo,
                                                                                        v16,
                                                                                        v17,
                                                                                        v18,
                                                                                        v19);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v20,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)v20;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.paramString,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RequestBase__ClearField(RequestBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0

  if ( (byte_40FD32C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__Clear__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__Clear__, v3);
    byte_40FD32C = 1;
  }
  paramInteger = this->fields.paramInteger;
  if ( !paramInteger
    || (System_Collections_Generic_Dictionary_UIPanel__int___Clear(
          (System_Collections_Generic_Dictionary_UIPanel__int__o *)paramInteger,
          (const MethodInfo_2D9C398 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__),
        (paramString = this->fields.paramString) == 0LL) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (const MethodInfo_2DA3DF4 *)Method_System_Collections_Generic_Dictionary_string__string__Clear__);
}


void __fastcall RequestBase__ClearParameter(RequestBase_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  System_String_o *v4; // x0
  System_String_o *v5; // x19

  if ( (byte_40FD33E & 1) == 0 )
  {
    sub_B16FFC(&ManagerConfig_TypeInfo, method);
    byte_40FD33E = 1;
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  MiniMessagePack_MiniMessagePacker_o *v9; // x20
  System_Byte_array *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_IO_MemoryStream_o *v15; // x19
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_IO_Compression_GZipStream_o *v20; // x20
  System_IO_Compression_GZipStream_c *klass; // x8
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 v24; // x0
  __int64 v25; // x0
  System_Byte_array *v26; // x21
  int v27; // w22
  System_IO_MemoryStream_c *v28; // x8
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0
  int v33[2]; // [xsp+0h] [xbp-30h]
  int v34; // [xsp+8h] [xbp-28h]

  if ( (byte_40FD340 & 1) == 0 )
  {
    sub_B16FFC(&System_IO_Compression_GZipStream_TypeInfo, json);
    sub_B16FFC(&System_IDisposable_TypeInfo, v6);
    sub_B16FFC(&System_IO_MemoryStream_TypeInfo, v7);
    sub_B16FFC(&MiniMessagePack_MiniMessagePacker_TypeInfo, v8);
    byte_40FD340 = 1;
  }
  v34 = 0;
  v9 = (MiniMessagePack_MiniMessagePacker_o *)sub_B170CC(
                                                MiniMessagePack_MiniMessagePacker_TypeInfo,
                                                json,
                                                method,
                                                v3,
                                                v4);
  MiniMessagePack_MiniMessagePacker___ctor(v9, 0LL);
  if ( !v9 )
    sub_B170D4();
  v10 = MiniMessagePack_MiniMessagePacker__PackClass(v9, json, 0LL);
  v15 = (System_IO_MemoryStream_o *)sub_B170CC(System_IO_MemoryStream_TypeInfo, v11, v12, v13, v14);
  System_IO_MemoryStream___ctor(v15, 0LL);
  v20 = (System_IO_Compression_GZipStream_o *)sub_B170CC(System_IO_Compression_GZipStream_TypeInfo, v16, v17, v18, v19);
  System_IO_Compression_GZipStream___ctor_36900256(v20, (System_IO_Stream_o *)v15, 0, 0LL);
  if ( !v10 )
    sub_B170D4();
  if ( !v20 )
    sub_B170D4();
  ((void (__fastcall *)(System_IO_Compression_GZipStream_o *, System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))v20->klass->vtable._32_Write.method)(
    v20,
    v10,
    0LL,
    v10->max_length,
    v20->klass->vtable._33_WriteByte.methodPtr);
  v33[0] = 49;
  v34 = 1;
  klass = v20->klass;
  if ( *(_WORD *)&v20->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v22;
      p_offset += 4;
      if ( v22 >= *(unsigned __int16 *)&v20->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    v24 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v24 = sub_AAFEF8(v20, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_Compression_GZipStream_o *, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8));
  v34 = 0;
  if ( !v15 )
    sub_B170D4();
  v25 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v15->klass->vtable._37_ToArray.method)(
          v15,
          v15->klass[1]._1.image);
  v33[0] = 68;
  v26 = (System_Byte_array *)v25;
  v27 = ++v34;
  v28 = v15->klass;
  if ( *(_WORD *)&v15->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      ++v29;
      v30 += 4;
      if ( v29 >= *(unsigned __int16 *)&v15->klass->_2.bitflags1 )
        goto LABEL_19;
    }
    v31 = (__int64)(&v28->vtable._0_Equals.method + 2 * *v30);
  }
  else
  {
LABEL_19:
    v31 = sub_AAFEF8(v15, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v31)(v15, *(_QWORD *)(v31 + 8));
  if ( v27 && v33[v27 - 1] == 68 )
    v34 = v27 - 1;
  return v26;
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
  __int64 v18; // x3
  __int64 v19; // x4
  System_IO_BinaryReader_o *v20; // x19
  const MethodInfo *v21; // x1
  int v22; // w23
  int v23; // w22
  int i; // w25
  System_Xml_XmlQualifiedName_o *v25; // x24
  System_Xml_Schema_XmlSchemaObject_o *v26; // x2
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0
  int j; // w24
  UIPanel_o *v29; // x23
  int32_t v30; // w2
  struct System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v33; // x10
  int32_t *p_offset; // x11
  __int64 v35; // x0

  if ( (byte_40FD33C & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryReader_TypeInfo, isRefreshTime);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__Add__, v6);
    sub_B16FFC(&System_IDisposable_TypeInfo, v7);
    sub_B16FFC(&ManagerConfig_TypeInfo, v8);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    byte_40FD33C = 1;
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
  v20 = (System_IO_BinaryReader_o *)sub_B170CC(System_IO_BinaryReader_TypeInfo, v16, v17, v18, v19);
  System_IO_BinaryReader___ctor(v20, v15, 0LL);
  RequestBase__ClearField(this, v21);
  if ( !v20 )
    sub_B170D4();
  v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v20->klass->vtable._15_ReadInt32.method)(
          v20,
          v20->klass->vtable._16_ReadUInt32.methodPtr);
  v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v20->klass->vtable._15_ReadInt32.method)(
          v20,
          v20->klass->vtable._16_ReadUInt32.methodPtr);
  if ( v22 >= 1 )
  {
    for ( i = 0; i < v22; ++i )
    {
      v25 = (System_Xml_XmlQualifiedName_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v20->klass->vtable._22_ReadString.method)(
                                               v20,
                                               v20->klass->vtable._23_ReadChars.methodPtr);
      v26 = (System_Xml_Schema_XmlSchemaObject_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v20->klass->vtable._22_ReadString.method)(
                                                     v20,
                                                     v20->klass->vtable._23_ReadChars.methodPtr);
      paramString = this->fields.paramString;
      if ( !paramString )
        sub_B170D4();
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
        v25,
        v26,
        (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
    }
  }
  if ( v23 >= 1 )
  {
    for ( j = 0; j < v23; ++j )
    {
      v29 = (UIPanel_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v20->klass->vtable._22_ReadString.method)(
                           v20,
                           v20->klass->vtable._23_ReadChars.methodPtr);
      v30 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v20->klass->vtable._15_ReadInt32.method)(
              v20,
              v20->klass->vtable._16_ReadUInt32.methodPtr);
      paramInteger = this->fields.paramInteger;
      if ( !paramInteger )
        sub_B170D4();
      System_Collections_Generic_Dictionary_UIPanel__int___Add(
        (System_Collections_Generic_Dictionary_UIPanel__int__o *)paramInteger,
        v29,
        v30,
        (const MethodInfo_2D9C1BC *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
    }
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__ReplaceBaseField(this, isRefreshTime, 0LL);
  v11 = 1;
  klass = v20->klass;
  if ( *(_WORD *)&v20->klass->_2.bitflags1 )
  {
    v33 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v33;
      p_offset += 4;
      if ( v33 >= *(unsigned __int16 *)&v20->klass->_2.bitflags1 )
        goto LABEL_27;
    }
    v35 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_27:
    v35 = sub_AAFEF8(v20, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v35)(v20, *(_QWORD *)(v35 + 8));
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
  __int64 v10; // x2
  __int64 v11; // x19
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_IO_MemoryStream_o *v16; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_IO_Compression_GZipStream_o *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_IO_MemoryStream_o *v26; // x20
  int v27; // w0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  int v32; // w0
  MiniMessagePack_MiniMessagePacker_o *v33; // x19
  System_Byte_array *v34; // x0

  if ( (byte_40FD33F & 1) == 0 )
  {
    sub_B16FFC(&byte___TypeInfo, obj);
    sub_B16FFC(&System_Convert_TypeInfo, v4);
    sub_B16FFC(&System_IO_Compression_GZipStream_TypeInfo, v5);
    sub_B16FFC(&System_IO_MemoryStream_TypeInfo, v6);
    sub_B16FFC(&MiniMessagePack_MiniMessagePacker_TypeInfo, v7);
    byte_40FD33F = 1;
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
  v11 = sub_B17014(byte___TypeInfo, 1024LL, v10);
  v16 = (System_IO_MemoryStream_o *)sub_B170CC(System_IO_MemoryStream_TypeInfo, v12, v13, v14, v15);
  System_IO_MemoryStream___ctor_44473456(v16, v9, 0LL);
  v21 = (System_IO_Compression_GZipStream_o *)sub_B170CC(System_IO_Compression_GZipStream_TypeInfo, v17, v18, v19, v20);
  System_IO_Compression_GZipStream___ctor(v21, (System_IO_Stream_o *)v16, 0, 0LL);
  v26 = (System_IO_MemoryStream_o *)sub_B170CC(System_IO_MemoryStream_TypeInfo, v22, v23, v24, v25);
  System_IO_MemoryStream___ctor(v26, 0LL);
  if ( !v11 || !v21 )
    goto LABEL_16;
  v27 = ((__int64 (__fastcall *)(System_IO_Compression_GZipStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v21->klass->vtable._30_Read.method)(
          v21,
          v11,
          0LL,
          *(unsigned int *)(v11 + 24),
          v21->klass->vtable._31_ReadByte.methodPtr);
  if ( v27 >= 1 )
  {
    v30 = (unsigned int)v27;
    while ( v26 )
    {
      ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, __int64, Il2CppMethodPointer))v26->klass->vtable._32_Write.method)(
        v26,
        v11,
        0LL,
        v30,
        v26->klass->vtable._33_WriteByte.methodPtr);
      v32 = ((__int64 (__fastcall *)(System_IO_Compression_GZipStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v21->klass->vtable._30_Read.method)(
              v21,
              v11,
              0LL,
              *(unsigned int *)(v11 + 24),
              v21->klass->vtable._31_ReadByte.methodPtr);
      v30 = (unsigned int)v32;
      if ( v32 < 1 )
        goto LABEL_13;
    }
LABEL_16:
    sub_B170D4();
  }
LABEL_13:
  v33 = (MiniMessagePack_MiniMessagePacker_o *)sub_B170CC(
                                                 MiniMessagePack_MiniMessagePacker_TypeInfo,
                                                 v28,
                                                 v29,
                                                 v30,
                                                 v31);
  MiniMessagePack_MiniMessagePacker___ctor(v33, 0LL);
  if ( !v26 )
    goto LABEL_16;
  v34 = (System_Byte_array *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v26->klass->vtable._37_ToArray.method)(
                               v26,
                               v26->klass[1]._1.image);
  if ( !v33 )
    goto LABEL_16;
  return MiniMessagePack_MiniMessagePacker__Unpack_20852360(v33, v34, 0LL);
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
  __int64 v24; // x3
  __int64 v25; // x4
  System_IO_BinaryWriter_o *v26; // x19
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0
  __int64 Count; // x1
  System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0
  unsigned int v30; // w0
  struct System_Collections_Generic_Dictionary_string__string__o *v31; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  Il2CppObject *currentKey; // x21
  struct System_Collections_Generic_Dictionary_string__string__o *v34; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  char v36; // w22
  System_Collections_Generic_Dictionary_string__int__o *v37; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v38; // x0
  Il2CppObject *v39; // x21
  System_Collections_Generic_Dictionary_string__int__o *v40; // x0
  unsigned int v41; // w0
  int v42; // w22
  int v43; // w8
  int v44; // w20
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v46; // x10
  int32_t *p_offset; // x11
  __int64 v48; // x0
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v49; // [xsp+10h] [xbp-A0h] BYREF
  int v50[4]; // [xsp+28h] [xbp-88h] BYREF
  int v51; // [xsp+38h] [xbp-78h]
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v52; // [xsp+40h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v53; // [xsp+60h] [xbp-50h] BYREF

  if ( (byte_40FD33D & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryWriter_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__get_Count__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__get_Keys__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__get_Keys__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__, v12);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__get_Current__,
      v13);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__get_Current__, v14);
    sub_B16FFC(&System_IDisposable_TypeInfo, v15);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__, v17);
    sub_B16FFC(&ManagerConfig_TypeInfo, v18);
    byte_40FD33D = 1;
  }
  memset(&v53, 0, sizeof(v53));
  memset(&v52, 0, sizeof(v52));
  v51 = 0;
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
      v26 = (System_IO_BinaryWriter_o *)sub_B170CC(System_IO_BinaryWriter_TypeInfo, v22, v23, v24, v25);
      System_IO_BinaryWriter___ctor_39195976(v26, v21, 0LL);
      paramString = this->fields.paramString;
      if ( !paramString )
        sub_B170D4();
      Count = (unsigned int)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
                              (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
                              (const MethodInfo_2DA3814 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
      if ( !v26 )
        sub_B170D4();
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, __int64, Il2CppMethodPointer))v26->klass->vtable._17_Write.method)(
        v26,
        Count,
        v26->klass->vtable._18_Write.methodPtr);
      paramInteger = this->fields.paramInteger;
      if ( !paramInteger )
        sub_B170D4();
      v30 = System_Collections_Generic_Dictionary_string__int___get_Count(
              paramInteger,
              (const MethodInfo_2D9BDB8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Count__);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v26->klass->vtable._17_Write.method)(
        v26,
        v30,
        v26->klass->vtable._18_Write.methodPtr);
      v31 = this->fields.paramString;
      if ( !v31 )
        sub_B170D4();
      Keys = System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element___get_Keys(
               (System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)v31,
               (const MethodInfo_2DA3824 *)Method_System_Collections_Generic_Dictionary_string__string__get_Keys__);
      if ( !Keys )
        sub_B170D4();
      System_Collections_Generic_Dictionary_KeyCollection_string__AssetsInfo_dataInfo___GetEnumerator(
        &v49,
        Keys,
        (const MethodInfo_22C7174 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__);
      v53 = v49;
      while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__AssetsInfo_dataInfo___MoveNext(
                &v53,
                (const MethodInfo_26BE3A8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__) )
      {
        currentKey = v53.fields.currentKey;
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppObject *, void *))v26->klass->vtable._22_Write.method)(
          v26,
          v53.fields.currentKey,
          v26->klass[1]._1.image);
        v34 = this->fields.paramString;
        if ( !v34 )
          sub_B170D4();
        Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v34,
                 (System_Type_o *)currentKey,
                 (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, UnityEngine_Purchasing_IStoreExtension_o *, void *))v26->klass->vtable._22_Write.method)(
          v26,
          Item,
          v26->klass[1]._1.image);
      }
      v50[0] = 142;
      v51 = 1;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__AssetsInfo_dataInfo___Dispose(
        &v53,
        (const MethodInfo_26BE3A4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__);
      if ( v50[0] == 142 )
      {
        v36 = 0;
        v51 = 0;
      }
      else
      {
        v36 = 1;
      }
      v37 = this->fields.paramInteger;
      if ( !v37 )
        sub_B170D4();
      v38 = System_Collections_Generic_Dictionary_string__int___get_Keys(
              v37,
              (const MethodInfo_2D9BDC8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Keys__);
      if ( !v38 )
        sub_B170D4();
      System_Collections_Generic_Dictionary_KeyCollection_string__int___GetEnumerator(
        &v49,
        v38,
        (const MethodInfo_22C5DDC *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__);
      v52 = v49;
      while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int___MoveNext(
                &v52,
                (const MethodInfo_26BBE90 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__) )
      {
        v39 = v52.fields.currentKey;
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppObject *, void *))v26->klass->vtable._22_Write.method)(
          v26,
          v52.fields.currentKey,
          v26->klass[1]._1.image);
        v40 = this->fields.paramInteger;
        if ( !v40 )
          sub_B170D4();
        v41 = System_Collections_Generic_Dictionary_string__int___get_Item(
                v40,
                (System_String_o *)v39,
                (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v26->klass->vtable._17_Write.method)(
          v26,
          v41,
          v26->klass->vtable._18_Write.methodPtr);
      }
      *(_DWORD *)((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFFBLL | (4LL * (v36 & 1))) = 223;
      v42 = ++v51;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int___Dispose(
        &v52,
        (const MethodInfo_26BBE8C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__);
      if ( v42 )
      {
        v43 = v42 - 1;
        if ( v50[v42 - 1] == 223 )
        {
          --v42;
          v51 = v43;
        }
      }
      v50[v42] = 238;
      v44 = ++v51;
      klass = v26->klass;
      if ( *(_WORD *)&v26->klass->_2.bitflags1 )
      {
        v46 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          ++v46;
          p_offset += 4;
          if ( v46 >= *(unsigned __int16 *)&v26->klass->_2.bitflags1 )
            goto LABEL_34;
        }
        v48 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_34:
        v48 = sub_AAFEF8(v26, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v48)(v26, *(_QWORD *)(v48 + 8));
      if ( v44 && v50[v44 - 1] == 238 )
        v51 = v44 - 1;
    }
  }
}


void __fastcall RequestBase__addBaseField(RequestBase_o *this, const MethodInfo *method)
{
  if ( (byte_40FD333 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40FD333 = 1;
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
  if ( (byte_40FD334 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40FD334 = 1;
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

  if ( (byte_40FD32D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__Add__, fieldName);
    byte_40FD32D = 1;
  }
  paramInteger = this->fields.paramInteger;
  if ( !paramInteger )
    sub_B170D4();
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)paramInteger,
    (UIPanel_o *)fieldName,
    data,
    (const MethodInfo_2D9C1BC *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
}


void __fastcall RequestBase__addField_30956696(
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
  if ( (byte_40FD32E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__Add__, fieldName);
    sub_B16FFC(&StringLiteral_1/*""*/, v6);
    byte_40FD32E = 1;
  }
  paramString = this->fields.paramString;
  v8 = System_Int64__ToString((int64_t)&v10, 0LL);
  if ( !paramString )
    sub_B170D4();
  if ( v8 )
    v9 = (System_Xml_Schema_XmlSchemaObject_o *)v8;
  else
    v9 = (System_Xml_Schema_XmlSchemaObject_o *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    v9,
    (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void __fastcall RequestBase__addField_30956852(
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
  if ( (byte_40FD32F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__Add__, fieldName);
    sub_B16FFC(&StringLiteral_1/*""*/, v6);
    byte_40FD32F = 1;
  }
  paramString = this->fields.paramString;
  v8 = System_Single__ToString(data, (const MethodInfo *)&v10);
  if ( !paramString )
    sub_B170D4();
  if ( v8 )
    v9 = (System_Xml_Schema_XmlSchemaObject_o *)v8;
  else
    v9 = (System_Xml_Schema_XmlSchemaObject_o *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    v9,
    (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void __fastcall RequestBase__addField_30957008(
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
  if ( (byte_40FD330 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__Add__, fieldName);
    sub_B16FFC(&StringLiteral_1/*""*/, v6);
    byte_40FD330 = 1;
  }
  paramString = this->fields.paramString;
  v8 = System_Double__ToString(data, (const MethodInfo *)&v10);
  if ( !paramString )
    sub_B170D4();
  if ( v8 )
    v9 = (System_Xml_Schema_XmlSchemaObject_o *)v8;
  else
    v9 = (System_Xml_Schema_XmlSchemaObject_o *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    v9,
    (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void __fastcall RequestBase__addField_30957164(
        RequestBase_o *this,
        System_String_o *fieldName,
        System_String_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0

  if ( (byte_40FD331 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__Add__, fieldName);
    byte_40FD331 = 1;
  }
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_B170D4();
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    (System_Xml_Schema_XmlSchemaObject_o *)data,
    (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void __fastcall RequestBase__addField_30957272(
        RequestBase_o *this,
        System_String_o *fieldName,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *v8; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x8

  if ( (byte_40FD332 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__Add__, fieldName);
    sub_B16FFC(&JsonManager_TypeInfo, v7);
    byte_40FD332 = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v8 = JsonManager__toJson(data, 0, 0, 0LL);
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_B170D4();
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    (System_Xml_Schema_XmlSchemaObject_o *)v8,
    (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


bool __fastcall RequestBase__backgroundErrorRequest(
        RequestBase_o *this,
        System_String_o *errorCode,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *CallBack; // x0

  if ( (byte_40FD328 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_20980/*"ng"*/, errorCode);
    byte_40FD328 = 1;
  }
  CallBack = this->fields.CallBack;
  if ( CallBack )
    NetworkManager_ResultCallbackFunc__Invoke(CallBack, (System_String_o *)StringLiteral_20980/*"ng"*/, 0LL);
  return 1;
}


void __fastcall RequestBase__backgroundErrorRetry(RequestBase_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall RequestBase__beginRequest(RequestBase_o *this, const MethodInfo *method)
{
  if ( (byte_40FD32A & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40FD32A = 1;
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
  if ( (byte_40FD32B & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, isRefreshTime);
    byte_40FD32B = 1;
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

  if ( (byte_40FD329 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_20980/*"ng"*/, errorCode);
    byte_40FD329 = 1;
  }
  CallBack = this->fields.CallBack;
  if ( CallBack )
    NetworkManager_ResultCallbackFunc__Invoke(CallBack, (System_String_o *)StringLiteral_20980/*"ng"*/, 0LL);
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
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v21; // x1
  __int64 v22; // x1
  UnityEngine_WWWForm_o *v23; // x19
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Collections_Generic_SortedDictionary_string__string__o *v28; // x22
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *v37; // x0
  Il2CppObject *currentKey; // x22
  System_String_o *Item; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *v40; // x0
  System_Collections_Generic_SortedDictionary_string__string__o *v41; // x23
  System_String_o *v42; // x0
  System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v44; // x0
  System_Collections_Generic_Dictionary_string__int__o *v45; // x0
  Il2CppObject *v46; // x22
  int32_t v47; // w0
  System_Collections_Generic_Dictionary_string__int__o *v48; // x0
  System_Collections_Generic_SortedDictionary_string__string__o *v49; // x23
  int32_t v50; // w24
  System_String_o *v51; // x0
  int v52; // w20
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v54; // [xsp+8h] [xbp-B8h] BYREF
  int v55[2]; // [xsp+20h] [xbp-A0h]
  int v56; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v57; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v58; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_40FD33B & 1) == 0 )
  {
    sub_B16FFC(&System_Convert_TypeInfo, authParams);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__get_Keys__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__get_Keys__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__, v14);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__get_Current__,
      v15);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__get_Current__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_SortedDictionary_string__string__Add__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_SortedDictionary_string__string___ctor__, v20);
    sub_B16FFC(&System_Collections_Generic_SortedDictionary_string__string__TypeInfo, v21);
    sub_B16FFC(&UnityEngine_WWWForm_TypeInfo, v22);
    byte_40FD33B = 1;
  }
  memset(&v58, 0, sizeof(v58));
  memset(&v57, 0, sizeof(v57));
  v56 = 0;
  v23 = (UnityEngine_WWWForm_o *)sub_B170CC(UnityEngine_WWWForm_TypeInfo, authParams, method, v3, v4);
  UnityEngine_WWWForm___ctor(v23, 0LL);
  v28 = (System_Collections_Generic_SortedDictionary_string__string__o *)sub_B170CC(
                                                                           System_Collections_Generic_SortedDictionary_string__string__TypeInfo,
                                                                           v24,
                                                                           v25,
                                                                           v26,
                                                                           v27);
  System_Collections_Generic_SortedDictionary_string__string____ctor(
    v28,
    (const MethodInfo_2A55784 *)Method_System_Collections_Generic_SortedDictionary_string__string___ctor__);
  *authParams = v28;
  sub_B16F98((BattleServantConfConponent_o *)authParams, (System_Int32_array **)v28, v29, v30, v31, v32, v33, v34);
  paramString = this->fields.paramString;
  if ( !paramString )
    goto LABEL_36;
  Keys = System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element___get_Keys(
           (System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)paramString,
           (const MethodInfo_2DA3824 *)Method_System_Collections_Generic_Dictionary_string__string__get_Keys__);
  if ( !Keys )
    goto LABEL_36;
  System_Collections_Generic_Dictionary_KeyCollection_string__AssetsInfo_dataInfo___GetEnumerator(
    &v54,
    Keys,
    (const MethodInfo_22C7174 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__);
  v58 = v54;
  while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__AssetsInfo_dataInfo___MoveNext(
            &v58,
            (const MethodInfo_26BE3A8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__) )
  {
    v37 = this->fields.paramString;
    if ( !v37 )
      sub_B170D4();
    currentKey = v58.fields.currentKey;
    Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v37,
                                (System_Type_o *)v58.fields.currentKey,
                                (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    if ( !v23 )
      sub_B170D4();
    UnityEngine_WWWForm__AddField(v23, (System_String_o *)currentKey, Item, 0LL);
    v40 = this->fields.paramString;
    if ( !v40 )
      sub_B170D4();
    v41 = *authParams;
    v42 = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                               (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v40,
                               (System_Type_o *)currentKey,
                               (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    if ( !v41 )
      sub_B170D4();
    System_Collections_Generic_SortedDictionary_string__string___Add(
      v41,
      (System_String_o *)currentKey,
      v42,
      (const MethodInfo_2A55E74 *)Method_System_Collections_Generic_SortedDictionary_string__string__Add__);
  }
  v55[0] = 104;
  v56 = 1;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__AssetsInfo_dataInfo___Dispose(
    &v58,
    (const MethodInfo_26BE3A4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__);
  v56 = 0;
  paramInteger = this->fields.paramInteger;
  if ( !paramInteger
    || (v44 = System_Collections_Generic_Dictionary_string__int___get_Keys(
                paramInteger,
                (const MethodInfo_2D9BDC8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Keys__)) == 0LL )
  {
LABEL_36:
    sub_B170D4();
  }
  System_Collections_Generic_Dictionary_KeyCollection_string__int___GetEnumerator(
    &v54,
    v44,
    (const MethodInfo_22C5DDC *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__);
  v57 = v54;
  while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int___MoveNext(
            &v57,
            (const MethodInfo_26BBE90 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__) )
  {
    v45 = this->fields.paramInteger;
    if ( !v45 )
      sub_B170D4();
    v46 = v57.fields.currentKey;
    v47 = System_Collections_Generic_Dictionary_string__int___get_Item(
            v45,
            (System_String_o *)v57.fields.currentKey,
            (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    if ( !v23 )
      sub_B170D4();
    UnityEngine_WWWForm__AddField_49722224(v23, (System_String_o *)v46, v47, 0LL);
    v48 = this->fields.paramInteger;
    if ( !v48 )
      sub_B170D4();
    v49 = *authParams;
    v50 = System_Collections_Generic_Dictionary_string__int___get_Item(
            v48,
            (System_String_o *)v46,
            (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Convert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    }
    v51 = System_Convert__ToString_41756656(v50, 0LL);
    if ( !v49 )
      sub_B170D4();
    System_Collections_Generic_SortedDictionary_string__string___Add(
      v49,
      (System_String_o *)v46,
      v51,
      (const MethodInfo_2A55E74 *)Method_System_Collections_Generic_SortedDictionary_string__string__Add__);
  }
  v55[0] = 205;
  v52 = ++v56;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int___Dispose(
    &v57,
    (const MethodInfo_26BBE8C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__);
  if ( v52 && v55[v52 - 1] == 205 )
    v56 = v52 - 1;
  return v23;
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

  if ( (byte_40FD335 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, fieldName);
    byte_40FD335 = 1;
  }
  paramInteger = this->fields.paramInteger;
  if ( !paramInteger )
    sub_B170D4();
  System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)paramInteger,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    data,
    (const MethodInfo_2D9C194 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
}


void __fastcall RequestBase__replaceField_30957656(
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
  if ( (byte_40FD336 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, fieldName);
    sub_B16FFC(&StringLiteral_1/*""*/, v6);
    byte_40FD336 = 1;
  }
  paramString = this->fields.paramString;
  v8 = System_Int64__ToString((int64_t)&v10, 0LL);
  if ( !paramString )
    sub_B170D4();
  if ( v8 )
    v9 = (System_Xml_Schema_XmlSchemaObject_o *)v8;
  else
    v9 = (System_Xml_Schema_XmlSchemaObject_o *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    v9,
    (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall RequestBase__replaceField_30957812(
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
  if ( (byte_40FD337 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, fieldName);
    sub_B16FFC(&StringLiteral_1/*""*/, v6);
    byte_40FD337 = 1;
  }
  paramString = this->fields.paramString;
  v8 = System_Single__ToString(data, (const MethodInfo *)&v10);
  if ( !paramString )
    sub_B170D4();
  if ( v8 )
    v9 = (System_Xml_Schema_XmlSchemaObject_o *)v8;
  else
    v9 = (System_Xml_Schema_XmlSchemaObject_o *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    v9,
    (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall RequestBase__replaceField_30957968(
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
  if ( (byte_40FD338 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, fieldName);
    sub_B16FFC(&StringLiteral_1/*""*/, v6);
    byte_40FD338 = 1;
  }
  paramString = this->fields.paramString;
  v8 = System_Double__ToString(data, (const MethodInfo *)&v10);
  if ( !paramString )
    sub_B170D4();
  if ( v8 )
    v9 = (System_Xml_Schema_XmlSchemaObject_o *)v8;
  else
    v9 = (System_Xml_Schema_XmlSchemaObject_o *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    v9,
    (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall RequestBase__replaceField_30958124(
        RequestBase_o *this,
        System_String_o *fieldName,
        System_String_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0

  if ( (byte_40FD339 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, fieldName);
    byte_40FD339 = 1;
  }
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_B170D4();
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    (System_Xml_Schema_XmlSchemaObject_o *)data,
    (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall RequestBase__replaceField_30958232(
        RequestBase_o *this,
        System_String_o *fieldName,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *v8; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x8

  if ( (byte_40FD33A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, fieldName);
    sub_B16FFC(&JsonManager_TypeInfo, v7);
    byte_40FD33A = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v8 = JsonManager__toJson(data, 0, 0, 0LL);
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_B170D4();
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    (System_Xml_Schema_XmlSchemaObject_o *)v8,
    (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
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