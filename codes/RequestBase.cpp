void __fastcall RequestBase___ctor(RequestBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_418AD9F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v4);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v5);
    byte_418AD9F = 1;
  }
  v6 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v6,
    (const MethodInfo_2DA96B0 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.paramInteger = (struct System_Collections_Generic_Dictionary_string__int__o *)v6;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.paramInteger,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v13,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)v13;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.paramString,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RequestBase__ClearField(RequestBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_UIPanel__int__o *paramInteger; // x0

  if ( (byte_418AD8A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__Clear__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__Clear__, v3);
    byte_418AD8A = 1;
  }
  paramInteger = (System_Collections_Generic_Dictionary_UIPanel__int__o *)this->fields.paramInteger;
  if ( !paramInteger
    || (System_Collections_Generic_Dictionary_UIPanel__int___Clear(
          paramInteger,
          (const MethodInfo_2DAA440 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__),
        (paramInteger = (System_Collections_Generic_Dictionary_UIPanel__int__o *)this->fields.paramString) == 0LL) )
  {
    sub_B2C434(paramInteger, method);
  }
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramInteger,
    (const MethodInfo_2DB1E9C *)Method_System_Collections_Generic_Dictionary_string__string__Clear__);
}


void __fastcall RequestBase__ClearParameter(RequestBase_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  System_String_o *v4; // x0
  System_String_o *v5; // x19

  if ( (byte_418AD9C & 1) == 0 )
  {
    sub_B2C35C(&ManagerConfig_TypeInfo, method);
    byte_418AD9C = 1;
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
  __int64 v9; // x1
  System_Byte_array *v10; // x21
  System_IO_MemoryStream_o *v11; // x19
  System_IO_Compression_GZipStream_o *v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x3
  System_IO_Compression_GZipStream_c *klass; // x8
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x0
  __int64 v23; // x3
  System_Byte_array *v24; // x21
  int v25; // w22
  System_IO_MemoryStream_c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  int v31[2]; // [xsp+0h] [xbp-30h]
  int v32; // [xsp+8h] [xbp-28h]

  if ( (byte_418AD9E & 1) == 0 )
  {
    sub_B2C35C(&System_IO_Compression_GZipStream_TypeInfo, json);
    sub_B2C35C(&System_IDisposable_TypeInfo, v4);
    sub_B2C35C(&System_IO_MemoryStream_TypeInfo, v5);
    sub_B2C35C(&MiniMessagePack_MiniMessagePacker_TypeInfo, v6);
    byte_418AD9E = 1;
  }
  v32 = 0;
  v7 = (MiniMessagePack_MiniMessagePacker_o *)sub_B2C42C(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v7, 0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  v10 = MiniMessagePack_MiniMessagePacker__PackClass(v7, json, 0LL);
  v11 = (System_IO_MemoryStream_o *)sub_B2C42C(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v11, 0LL);
  v12 = (System_IO_Compression_GZipStream_o *)sub_B2C42C(System_IO_Compression_GZipStream_TypeInfo);
  System_IO_Compression_GZipStream___ctor_37149164(v12, (System_IO_Stream_o *)v11, 0, 0LL);
  if ( !v10 )
    sub_B2C434(v13, v14);
  if ( !v12 )
    sub_B2C434(v13, v14);
  ((void (__fastcall *)(System_IO_Compression_GZipStream_o *, System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))v12->klass->vtable._32_Write.method)(
    v12,
    v10,
    0LL,
    v10->max_length,
    v12->klass->vtable._33_WriteByte.methodPtr);
  v31[0] = 49;
  v32 = 1;
  klass = v12->klass;
  if ( *(_WORD *)&v12->klass->_2.bitflags1 )
  {
    v17 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v17;
      p_offset += 4;
      if ( v17 >= *(unsigned __int16 *)&v12->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    v19 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v19 = sub_AC5258(v12, System_IDisposable_TypeInfo, 0LL, v15);
  }
  v20 = (*(__int64 (__fastcall **)(System_IO_Compression_GZipStream_o *, _QWORD))v19)(v12, *(_QWORD *)(v19 + 8));
  v32 = 0;
  if ( !v11 )
    sub_B2C434(v20, v21);
  v22 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v11->klass->vtable._37_ToArray.method)(
          v11,
          v11->klass[1]._1.image);
  v31[0] = 68;
  v24 = (System_Byte_array *)v22;
  v25 = ++v32;
  v26 = v11->klass;
  if ( *(_WORD *)&v11->klass->_2.bitflags1 )
  {
    v27 = 0LL;
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      ++v27;
      v28 += 4;
      if ( v27 >= *(unsigned __int16 *)&v11->klass->_2.bitflags1 )
        goto LABEL_19;
    }
    v29 = (__int64)(&v26->vtable._0_Equals.method + 2 * *v28);
  }
  else
  {
LABEL_19:
    v29 = sub_AC5258(v11, System_IDisposable_TypeInfo, 0LL, v23);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v29)(v11, *(_QWORD *)(v29 + 8));
  if ( v25 && v31[v25 - 1] == 68 )
    v32 = v25 - 1;
  return v24;
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
  System_IO_BinaryReader_o *v16; // x19
  const MethodInfo *v17; // x1
  __int64 v18; // x0
  __int64 v19; // x1
  int v20; // w23
  int v21; // w22
  int i; // w25
  System_Xml_XmlQualifiedName_o *v23; // x24
  __int64 v24; // x1
  System_Xml_Schema_XmlSchemaObject_o *v25; // x2
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0
  int j; // w24
  UIPanel_o *v28; // x23
  __int64 v29; // x1
  int32_t v30; // w2
  struct System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0
  __int64 v32; // x3
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v34; // x10
  int32_t *p_offset; // x11
  __int64 v36; // x0

  if ( (byte_418AD9A & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryReader_TypeInfo, isRefreshTime);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__Add__, v6);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&ManagerConfig_TypeInfo, v8);
    sub_B2C35C(&NetworkManager_TypeInfo, v9);
    byte_418AD9A = 1;
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
  v16 = (System_IO_BinaryReader_o *)sub_B2C42C(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v16, v15, 0LL);
  RequestBase__ClearField(this, v17);
  if ( !v16 )
    sub_B2C434(v18, v19);
  v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._15_ReadInt32.method)(
          v16,
          v16->klass->vtable._16_ReadUInt32.methodPtr);
  v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._15_ReadInt32.method)(
          v16,
          v16->klass->vtable._16_ReadUInt32.methodPtr);
  if ( v20 >= 1 )
  {
    for ( i = 0; i < v20; ++i )
    {
      v23 = (System_Xml_XmlQualifiedName_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._22_ReadString.method)(
                                               v16,
                                               v16->klass->vtable._23_ReadChars.methodPtr);
      v25 = (System_Xml_Schema_XmlSchemaObject_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._22_ReadString.method)(
                                                     v16,
                                                     v16->klass->vtable._23_ReadChars.methodPtr);
      paramString = this->fields.paramString;
      if ( !paramString )
        sub_B2C434(0LL, v24);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
        v23,
        v25,
        (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
    }
  }
  if ( v21 >= 1 )
  {
    for ( j = 0; j < v21; ++j )
    {
      v28 = (UIPanel_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._22_ReadString.method)(
                           v16,
                           v16->klass->vtable._23_ReadChars.methodPtr);
      v30 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._15_ReadInt32.method)(
              v16,
              v16->klass->vtable._16_ReadUInt32.methodPtr);
      paramInteger = this->fields.paramInteger;
      if ( !paramInteger )
        sub_B2C434(0LL, v29);
      System_Collections_Generic_Dictionary_UIPanel__int___Add(
        (System_Collections_Generic_Dictionary_UIPanel__int__o *)paramInteger,
        v28,
        v30,
        (const MethodInfo_2DAA264 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
    }
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__ReplaceBaseField(this, isRefreshTime, 0LL);
  v11 = 1;
  klass = v16->klass;
  if ( *(_WORD *)&v16->klass->_2.bitflags1 )
  {
    v34 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v34;
      p_offset += 4;
      if ( v34 >= *(unsigned __int16 *)&v16->klass->_2.bitflags1 )
        goto LABEL_27;
    }
    v36 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_27:
    v36 = sub_AC5258(v16, System_IDisposable_TypeInfo, 0LL, v32);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v36)(v16, *(_QWORD *)(v36 + 8));
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
  System_IO_MemoryStream_o *v11; // x22
  System_IO_Compression_GZipStream_o *v12; // x21
  System_IO_MemoryStream_o *v13; // x20
  __int64 v14; // x3
  MiniMessagePack_MiniMessagePacker_o *v15; // x19

  if ( (byte_418AD9D & 1) == 0 )
  {
    sub_B2C35C(&byte___TypeInfo, obj);
    sub_B2C35C(&System_Convert_TypeInfo, v4);
    sub_B2C35C(&System_IO_Compression_GZipStream_TypeInfo, v5);
    sub_B2C35C(&System_IO_MemoryStream_TypeInfo, v6);
    this = (RequestBase_o *)sub_B2C35C(&MiniMessagePack_MiniMessagePacker_TypeInfo, v7);
    byte_418AD9D = 1;
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
  v10 = sub_B2C374(byte___TypeInfo, 1024LL);
  v11 = (System_IO_MemoryStream_o *)sub_B2C42C(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_45022032(v11, v9, 0LL);
  v12 = (System_IO_Compression_GZipStream_o *)sub_B2C42C(System_IO_Compression_GZipStream_TypeInfo);
  System_IO_Compression_GZipStream___ctor(v12, (System_IO_Stream_o *)v11, 0, 0LL);
  v13 = (System_IO_MemoryStream_o *)sub_B2C42C(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v13, 0LL);
  if ( !v10 || !v12 )
    goto LABEL_16;
  this = (RequestBase_o *)((__int64 (__fastcall *)(System_IO_Compression_GZipStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v12->klass->vtable._30_Read.method)(
                            v12,
                            v10,
                            0LL,
                            *(unsigned int *)(v10 + 24),
                            v12->klass->vtable._31_ReadByte.methodPtr);
  if ( (int)this >= 1 )
  {
    v14 = (unsigned int)this;
    while ( v13 )
    {
      ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, __int64, Il2CppMethodPointer))v13->klass->vtable._32_Write.method)(
        v13,
        v10,
        0LL,
        v14,
        v13->klass->vtable._33_WriteByte.methodPtr);
      this = (RequestBase_o *)((__int64 (__fastcall *)(System_IO_Compression_GZipStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v12->klass->vtable._30_Read.method)(
                                v12,
                                v10,
                                0LL,
                                *(unsigned int *)(v10 + 24),
                                v12->klass->vtable._31_ReadByte.methodPtr);
      v14 = (unsigned int)this;
      if ( (int)this < 1 )
        goto LABEL_13;
    }
LABEL_16:
    sub_B2C434(this, obj);
  }
LABEL_13:
  v15 = (MiniMessagePack_MiniMessagePacker_o *)sub_B2C42C(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v15, 0LL);
  if ( !v13 )
    goto LABEL_16;
  this = (RequestBase_o *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v13->klass->vtable._37_ToArray.method)(
                            v13,
                            v13->klass[1]._1.image);
  if ( !v15 )
    goto LABEL_16;
  return MiniMessagePack_MiniMessagePacker__Unpack_25989864(v15, (System_Byte_array *)this, 0LL);
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
  System_IO_BinaryWriter_o *v22; // x19
  __int64 v23; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0
  __int64 Count; // x0
  __int64 v26; // x1
  System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0
  unsigned int v28; // w0
  __int64 v29; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v30; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  __int64 v32; // x1
  Il2CppObject *currentKey; // x21
  __int64 v34; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v35; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v37; // x1
  char v38; // w22
  System_Collections_Generic_Dictionary_string__int__o *v39; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v40; // x0
  __int64 v41; // x1
  Il2CppObject *v42; // x21
  __int64 v43; // x1
  System_Collections_Generic_Dictionary_string__int__o *v44; // x0
  unsigned int v45; // w0
  int v46; // w22
  __int64 v47; // x3
  int v48; // w8
  int v49; // w20
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v51; // x10
  int32_t *p_offset; // x11
  __int64 v53; // x0
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v54; // [xsp+10h] [xbp-A0h] BYREF
  int v55[4]; // [xsp+28h] [xbp-88h] BYREF
  int v56; // [xsp+38h] [xbp-78h]
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v57; // [xsp+40h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v58; // [xsp+60h] [xbp-50h] BYREF

  if ( (byte_418AD9B & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryWriter_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__get_Count__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__get_Keys__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__get_Keys__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__, v12);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__get_Current__,
      v13);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__get_Current__, v14);
    sub_B2C35C(&System_IDisposable_TypeInfo, v15);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__, v17);
    sub_B2C35C(&ManagerConfig_TypeInfo, v18);
    byte_418AD9B = 1;
  }
  memset(&v58, 0, sizeof(v58));
  memset(&v57, 0, sizeof(v57));
  v56 = 0;
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
      v22 = (System_IO_BinaryWriter_o *)sub_B2C42C(System_IO_BinaryWriter_TypeInfo);
      System_IO_BinaryWriter___ctor_39287252(v22, v21, 0LL);
      paramString = this->fields.paramString;
      if ( !paramString )
        sub_B2C434(0LL, v23);
      Count = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
                (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
                (const MethodInfo_2DB18BC *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
      if ( !v22 )
        sub_B2C434(Count, (unsigned int)Count);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v22->klass->vtable._17_Write.method)(
        v22,
        (unsigned int)Count,
        v22->klass->vtable._18_Write.methodPtr);
      paramInteger = this->fields.paramInteger;
      if ( !paramInteger )
        sub_B2C434(0LL, v26);
      v28 = System_Collections_Generic_Dictionary_string__int___get_Count(
              paramInteger,
              (const MethodInfo_2DA9E60 *)Method_System_Collections_Generic_Dictionary_string__int__get_Count__);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v22->klass->vtable._17_Write.method)(
        v22,
        v28,
        v22->klass->vtable._18_Write.methodPtr);
      v30 = this->fields.paramString;
      if ( !v30 )
        sub_B2C434(0LL, v29);
      Keys = System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element___get_Keys(
               (System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)v30,
               (const MethodInfo_2DB18CC *)Method_System_Collections_Generic_Dictionary_string__string__get_Keys__);
      if ( !Keys )
        sub_B2C434(0LL, v32);
      System_Collections_Generic_Dictionary_KeyCollection_string__AssetsInfo_dataInfo___GetEnumerator(
        &v54,
        Keys,
        (const MethodInfo_20F58D8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__);
      v58 = v54;
      while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__AssetsInfo_dataInfo___MoveNext(
                &v58,
                (const MethodInfo_2753F88 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__) )
      {
        currentKey = v58.fields.currentKey;
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppObject *, void *))v22->klass->vtable._22_Write.method)(
          v22,
          v58.fields.currentKey,
          v22->klass[1]._1.image);
        v35 = this->fields.paramString;
        if ( !v35 )
          sub_B2C434(0LL, v34);
        Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v35,
                 (System_Type_o *)currentKey,
                 (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, UnityEngine_Purchasing_IStoreExtension_o *, void *))v22->klass->vtable._22_Write.method)(
          v22,
          Item,
          v22->klass[1]._1.image);
      }
      v55[0] = 142;
      v56 = 1;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__AssetsInfo_dataInfo___Dispose(
        &v58,
        (const MethodInfo_2753F84 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__);
      if ( v55[0] == 142 )
      {
        v38 = 0;
        v56 = 0;
      }
      else
      {
        v38 = 1;
      }
      v39 = this->fields.paramInteger;
      if ( !v39 )
        sub_B2C434(0LL, v37);
      v40 = System_Collections_Generic_Dictionary_string__int___get_Keys(
              v39,
              (const MethodInfo_2DA9E70 *)Method_System_Collections_Generic_Dictionary_string__int__get_Keys__);
      if ( !v40 )
        sub_B2C434(0LL, v41);
      System_Collections_Generic_Dictionary_KeyCollection_string__int___GetEnumerator(
        &v54,
        v40,
        (const MethodInfo_20F4540 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__);
      v57 = v54;
      while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int___MoveNext(
                &v57,
                (const MethodInfo_278A924 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__) )
      {
        v42 = v57.fields.currentKey;
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppObject *, void *))v22->klass->vtable._22_Write.method)(
          v22,
          v57.fields.currentKey,
          v22->klass[1]._1.image);
        v44 = this->fields.paramInteger;
        if ( !v44 )
          sub_B2C434(0LL, v43);
        v45 = System_Collections_Generic_Dictionary_string__int___get_Item(
                v44,
                (System_String_o *)v42,
                (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v22->klass->vtable._17_Write.method)(
          v22,
          v45,
          v22->klass->vtable._18_Write.methodPtr);
      }
      *(_DWORD *)((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFFBLL | (4LL * (v38 & 1))) = 223;
      v46 = ++v56;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int___Dispose(
        &v57,
        (const MethodInfo_278A920 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__);
      if ( v46 )
      {
        v48 = v46 - 1;
        if ( v55[v46 - 1] == 223 )
        {
          --v46;
          v56 = v48;
        }
      }
      v55[v46] = 238;
      v49 = ++v56;
      klass = v22->klass;
      if ( *(_WORD *)&v22->klass->_2.bitflags1 )
      {
        v51 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          ++v51;
          p_offset += 4;
          if ( v51 >= *(unsigned __int16 *)&v22->klass->_2.bitflags1 )
            goto LABEL_34;
        }
        v53 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_34:
        v53 = sub_AC5258(v22, System_IDisposable_TypeInfo, 0LL, v47);
      }
      (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v53)(v22, *(_QWORD *)(v53 + 8));
      if ( v49 && v55[v49 - 1] == 238 )
        v56 = v49 - 1;
    }
  }
}


void __fastcall RequestBase__addBaseField(RequestBase_o *this, const MethodInfo *method)
{
  if ( (byte_418AD91 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_418AD91 = 1;
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
  if ( (byte_418AD92 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_418AD92 = 1;
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

  if ( (byte_418AD8B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__Add__, fieldName);
    byte_418AD8B = 1;
  }
  paramInteger = this->fields.paramInteger;
  if ( !paramInteger )
    sub_B2C434(0LL, fieldName);
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)paramInteger,
    (UIPanel_o *)fieldName,
    data,
    (const MethodInfo_2DAA264 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
}


void __fastcall RequestBase__addField_31051460(
        RequestBase_o *this,
        System_String_o *fieldName,
        int64_t data,
        const MethodInfo *method)
{
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v8; // x0
  __int64 v9; // x1
  System_Xml_Schema_XmlSchemaObject_o *v10; // x2
  int64_t v11; // [xsp+8h] [xbp-18h] BYREF

  v11 = data;
  if ( (byte_418AD8C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__Add__, fieldName);
    sub_B2C35C(&StringLiteral_1/*""*/, v6);
    byte_418AD8C = 1;
  }
  paramString = this->fields.paramString;
  v8 = System_Int64__ToString((int64_t)&v11, 0LL);
  if ( !paramString )
    sub_B2C434(v8, v9);
  if ( v8 )
    v10 = (System_Xml_Schema_XmlSchemaObject_o *)v8;
  else
    v10 = (System_Xml_Schema_XmlSchemaObject_o *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    v10,
    (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void __fastcall RequestBase__addField_31051616(
        RequestBase_o *this,
        System_String_o *fieldName,
        float data,
        const MethodInfo *method)
{
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v8; // x0
  __int64 v9; // x1
  System_Xml_Schema_XmlSchemaObject_o *v10; // x2
  float v11; // [xsp+Ch] [xbp-14h] BYREF

  v11 = data;
  if ( (byte_418AD8D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__Add__, fieldName);
    sub_B2C35C(&StringLiteral_1/*""*/, v6);
    byte_418AD8D = 1;
  }
  paramString = this->fields.paramString;
  v8 = System_Single__ToString(data, (const MethodInfo *)&v11);
  if ( !paramString )
    sub_B2C434(v8, v9);
  if ( v8 )
    v10 = (System_Xml_Schema_XmlSchemaObject_o *)v8;
  else
    v10 = (System_Xml_Schema_XmlSchemaObject_o *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    v10,
    (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void __fastcall RequestBase__addField_31051772(
        RequestBase_o *this,
        System_String_o *fieldName,
        double data,
        const MethodInfo *method)
{
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v8; // x0
  __int64 v9; // x1
  System_Xml_Schema_XmlSchemaObject_o *v10; // x2
  double v11; // [xsp+8h] [xbp-18h] BYREF

  v11 = data;
  if ( (byte_418AD8E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__Add__, fieldName);
    sub_B2C35C(&StringLiteral_1/*""*/, v6);
    byte_418AD8E = 1;
  }
  paramString = this->fields.paramString;
  v8 = System_Double__ToString(data, (const MethodInfo *)&v11);
  if ( !paramString )
    sub_B2C434(v8, v9);
  if ( v8 )
    v10 = (System_Xml_Schema_XmlSchemaObject_o *)v8;
  else
    v10 = (System_Xml_Schema_XmlSchemaObject_o *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    v10,
    (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void __fastcall RequestBase__addField_31051928(
        RequestBase_o *this,
        System_String_o *fieldName,
        System_String_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0

  if ( (byte_418AD8F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__Add__, fieldName);
    byte_418AD8F = 1;
  }
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_B2C434(0LL, fieldName);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    (System_Xml_Schema_XmlSchemaObject_o *)data,
    (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void __fastcall RequestBase__addField_31052036(
        RequestBase_o *this,
        System_String_o *fieldName,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *v8; // x0
  __int64 v9; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x8

  if ( (byte_418AD90 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__Add__, fieldName);
    sub_B2C35C(&JsonManager_TypeInfo, v7);
    byte_418AD90 = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v8 = JsonManager__toJson(data, 0, 0, 0LL);
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_B2C434(v8, v9);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    (System_Xml_Schema_XmlSchemaObject_o *)v8,
    (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


bool __fastcall RequestBase__backgroundErrorRequest(
        RequestBase_o *this,
        System_String_o *errorCode,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *CallBack; // x0

  if ( (byte_418AD86 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, errorCode);
    byte_418AD86 = 1;
  }
  CallBack = this->fields.CallBack;
  if ( CallBack )
    NetworkManager_ResultCallbackFunc__Invoke(CallBack, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL);
  return 1;
}


void __fastcall RequestBase__backgroundErrorRetry(RequestBase_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall RequestBase__beginRequest(RequestBase_o *this, const MethodInfo *method)
{
  if ( (byte_418AD88 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_418AD88 = 1;
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
  if ( (byte_418AD89 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, isRefreshTime);
    byte_418AD89 = 1;
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

  if ( (byte_418AD87 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, errorCode);
    byte_418AD87 = 1;
  }
  CallBack = this->fields.CallBack;
  if ( CallBack )
    NetworkManager_ResultCallbackFunc__Invoke(CallBack, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL);
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
  System_Collections_Generic_SortedDictionary_string__string__o *v22; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1
  System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *paramString; // x0
  __int64 v31; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v32; // x0
  Il2CppObject *currentKey; // x22
  System_String_o *Item; // x0
  __int64 v35; // x1
  __int64 v36; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v37; // x0
  System_Collections_Generic_SortedDictionary_string__string__o *v38; // x23
  System_String_o *v39; // x0
  __int64 v40; // x1
  __int64 v41; // x1
  System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0
  Il2CppObject *v43; // x22
  __int64 v44; // x0
  __int64 v45; // x1
  __int64 v46; // x1
  System_Collections_Generic_Dictionary_string__int__o *v47; // x0
  System_Collections_Generic_SortedDictionary_string__string__o *v48; // x23
  int32_t v49; // w24
  System_String_o *v50; // x0
  __int64 v51; // x1
  int v52; // w20
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v54; // [xsp+8h] [xbp-B8h] BYREF
  int v55[2]; // [xsp+20h] [xbp-A0h]
  int v56; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v57; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v58; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_418AD99 & 1) == 0 )
  {
    sub_B2C35C(&System_Convert_TypeInfo, authParams);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__get_Keys__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__get_Keys__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__, v12);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__get_Current__,
      v13);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__get_Current__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_SortedDictionary_string__string__Add__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_SortedDictionary_string__string___ctor__, v18);
    sub_B2C35C(&System_Collections_Generic_SortedDictionary_string__string__TypeInfo, v19);
    sub_B2C35C(&UnityEngine_WWWForm_TypeInfo, v20);
    byte_418AD99 = 1;
  }
  memset(&v58, 0, sizeof(v58));
  memset(&v57, 0, sizeof(v57));
  v56 = 0;
  v21 = (UnityEngine_WWWForm_o *)sub_B2C42C(UnityEngine_WWWForm_TypeInfo);
  UnityEngine_WWWForm___ctor(v21, 0LL);
  v22 = (System_Collections_Generic_SortedDictionary_string__string__o *)sub_B2C42C(System_Collections_Generic_SortedDictionary_string__string__TypeInfo);
  System_Collections_Generic_SortedDictionary_string__string____ctor(
    v22,
    (const MethodInfo_2841EB4 *)Method_System_Collections_Generic_SortedDictionary_string__string___ctor__);
  *authParams = v22;
  sub_B2C2F8((BattleServantConfConponent_o *)authParams, (System_Int32_array **)v22, v23, v24, v25, v26, v27, v28);
  paramString = (System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)this->fields.paramString;
  if ( !paramString )
    goto LABEL_36;
  paramString = (System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element___get_Keys(paramString, (const MethodInfo_2DB18CC *)Method_System_Collections_Generic_Dictionary_string__string__get_Keys__);
  if ( !paramString )
    goto LABEL_36;
  System_Collections_Generic_Dictionary_KeyCollection_string__AssetsInfo_dataInfo___GetEnumerator(
    &v54,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)paramString,
    (const MethodInfo_20F58D8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__);
  v58 = v54;
  while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__AssetsInfo_dataInfo___MoveNext(
            &v58,
            (const MethodInfo_2753F88 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__) )
  {
    v32 = this->fields.paramString;
    if ( !v32 )
      sub_B2C434(0LL, v31);
    currentKey = v58.fields.currentKey;
    Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v32,
                                (System_Type_o *)v58.fields.currentKey,
                                (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    if ( !v21 )
      sub_B2C434(Item, v35);
    UnityEngine_WWWForm__AddField(v21, (System_String_o *)currentKey, Item, 0LL);
    v37 = this->fields.paramString;
    if ( !v37 )
      sub_B2C434(0LL, v36);
    v38 = *authParams;
    v39 = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                               (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v37,
                               (System_Type_o *)currentKey,
                               (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    if ( !v38 )
      sub_B2C434(v39, v40);
    System_Collections_Generic_SortedDictionary_string__string___Add(
      v38,
      (System_String_o *)currentKey,
      v39,
      (const MethodInfo_28425A4 *)Method_System_Collections_Generic_SortedDictionary_string__string__Add__);
  }
  v55[0] = 104;
  v56 = 1;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__AssetsInfo_dataInfo___Dispose(
    &v58,
    (const MethodInfo_2753F84 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__);
  v56 = 0;
  paramString = (System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)this->fields.paramInteger;
  if ( !paramString
    || (paramString = (System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)System_Collections_Generic_Dictionary_string__int___get_Keys((System_Collections_Generic_Dictionary_string__int__o *)paramString, (const MethodInfo_2DA9E70 *)Method_System_Collections_Generic_Dictionary_string__int__get_Keys__)) == 0LL )
  {
LABEL_36:
    sub_B2C434(paramString, v29);
  }
  System_Collections_Generic_Dictionary_KeyCollection_string__int___GetEnumerator(
    &v54,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)paramString,
    (const MethodInfo_20F4540 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__);
  v57 = v54;
  while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int___MoveNext(
            &v57,
            (const MethodInfo_278A924 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__) )
  {
    paramInteger = this->fields.paramInteger;
    if ( !paramInteger )
      sub_B2C434(0LL, v41);
    v43 = v57.fields.currentKey;
    v44 = System_Collections_Generic_Dictionary_string__int___get_Item(
            paramInteger,
            (System_String_o *)v57.fields.currentKey,
            (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    if ( !v21 )
      sub_B2C434(v44, v45);
    UnityEngine_WWWForm__AddField_50175472(v21, (System_String_o *)v43, v44, 0LL);
    v47 = this->fields.paramInteger;
    if ( !v47 )
      sub_B2C434(0LL, v46);
    v48 = *authParams;
    v49 = System_Collections_Generic_Dictionary_string__int___get_Item(
            v47,
            (System_String_o *)v43,
            (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Convert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    }
    v50 = System_Convert__ToString_42142208(v49, 0LL);
    if ( !v48 )
      sub_B2C434(v50, v51);
    System_Collections_Generic_SortedDictionary_string__string___Add(
      v48,
      (System_String_o *)v43,
      v50,
      (const MethodInfo_28425A4 *)Method_System_Collections_Generic_SortedDictionary_string__string__Add__);
  }
  v55[0] = 205;
  v52 = ++v56;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int___Dispose(
    &v57,
    (const MethodInfo_278A920 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__);
  if ( v52 && v55[v52 - 1] == 205 )
    v56 = v52 - 1;
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

  if ( (byte_418AD93 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, fieldName);
    byte_418AD93 = 1;
  }
  paramInteger = this->fields.paramInteger;
  if ( !paramInteger )
    sub_B2C434(0LL, fieldName);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)paramInteger,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    data,
    (const MethodInfo_2DAA23C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
}


void __fastcall RequestBase__replaceField_31052420(
        RequestBase_o *this,
        System_String_o *fieldName,
        int64_t data,
        const MethodInfo *method)
{
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v8; // x0
  __int64 v9; // x1
  System_Xml_Schema_XmlSchemaObject_o *v10; // x2
  int64_t v11; // [xsp+8h] [xbp-18h] BYREF

  v11 = data;
  if ( (byte_418AD94 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, fieldName);
    sub_B2C35C(&StringLiteral_1/*""*/, v6);
    byte_418AD94 = 1;
  }
  paramString = this->fields.paramString;
  v8 = System_Int64__ToString((int64_t)&v11, 0LL);
  if ( !paramString )
    sub_B2C434(v8, v9);
  if ( v8 )
    v10 = (System_Xml_Schema_XmlSchemaObject_o *)v8;
  else
    v10 = (System_Xml_Schema_XmlSchemaObject_o *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    v10,
    (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall RequestBase__replaceField_31052576(
        RequestBase_o *this,
        System_String_o *fieldName,
        float data,
        const MethodInfo *method)
{
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v8; // x0
  __int64 v9; // x1
  System_Xml_Schema_XmlSchemaObject_o *v10; // x2
  float v11; // [xsp+Ch] [xbp-14h] BYREF

  v11 = data;
  if ( (byte_418AD95 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, fieldName);
    sub_B2C35C(&StringLiteral_1/*""*/, v6);
    byte_418AD95 = 1;
  }
  paramString = this->fields.paramString;
  v8 = System_Single__ToString(data, (const MethodInfo *)&v11);
  if ( !paramString )
    sub_B2C434(v8, v9);
  if ( v8 )
    v10 = (System_Xml_Schema_XmlSchemaObject_o *)v8;
  else
    v10 = (System_Xml_Schema_XmlSchemaObject_o *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    v10,
    (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall RequestBase__replaceField_31052732(
        RequestBase_o *this,
        System_String_o *fieldName,
        double data,
        const MethodInfo *method)
{
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v8; // x0
  __int64 v9; // x1
  System_Xml_Schema_XmlSchemaObject_o *v10; // x2
  double v11; // [xsp+8h] [xbp-18h] BYREF

  v11 = data;
  if ( (byte_418AD96 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, fieldName);
    sub_B2C35C(&StringLiteral_1/*""*/, v6);
    byte_418AD96 = 1;
  }
  paramString = this->fields.paramString;
  v8 = System_Double__ToString(data, (const MethodInfo *)&v11);
  if ( !paramString )
    sub_B2C434(v8, v9);
  if ( v8 )
    v10 = (System_Xml_Schema_XmlSchemaObject_o *)v8;
  else
    v10 = (System_Xml_Schema_XmlSchemaObject_o *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    v10,
    (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall RequestBase__replaceField_31052888(
        RequestBase_o *this,
        System_String_o *fieldName,
        System_String_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0

  if ( (byte_418AD97 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, fieldName);
    byte_418AD97 = 1;
  }
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_B2C434(0LL, fieldName);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    (System_Xml_Schema_XmlSchemaObject_o *)data,
    (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall RequestBase__replaceField_31052996(
        RequestBase_o *this,
        System_String_o *fieldName,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *v8; // x0
  __int64 v9; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x8

  if ( (byte_418AD98 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, fieldName);
    sub_B2C35C(&JsonManager_TypeInfo, v7);
    byte_418AD98 = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v8 = JsonManager__toJson(data, 0, 0, 0LL);
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_B2C434(v8, v9);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    (System_Xml_Schema_XmlSchemaObject_o *)v8,
    (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
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