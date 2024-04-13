void __fastcall RequestBase___ctor(RequestBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42EC581 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v11, v12, v13);
    byte_42EC581 = 1;
  }
  v14 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v14,
    (const MethodInfo_2F1A890 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.paramInteger = (struct System_Collections_Generic_Dictionary_string__int__o *)v14;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.paramInteger,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v21,
    (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)v21;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.paramString,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RequestBase__AddSignatureField(RequestBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3

  if ( (byte_42EC580 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SignedData_TypeInfo, v5, v6, v7);
    byte_42EC580 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_Dictionary_UIPanel__int__o *paramInteger; // x0

  if ( (byte_42EC56B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__Clear__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__string__Clear__, v5, v6, v7);
    byte_42EC56B = 1;
  }
  paramInteger = (System_Collections_Generic_Dictionary_UIPanel__int__o *)this->fields.paramInteger;
  if ( !paramInteger
    || (System_Collections_Generic_Dictionary_UIPanel__int___Clear(
          paramInteger,
          (const MethodInfo_2F1B620 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__),
        (paramInteger = (System_Collections_Generic_Dictionary_UIPanel__int__o *)this->fields.paramString) == 0LL) )
  {
    sub_B5D69C(paramInteger, method);
  }
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramInteger,
    (const MethodInfo_2F26D98 *)Method_System_Collections_Generic_Dictionary_string__string__Clear__);
}


void __fastcall RequestBase__ClearParameter(RequestBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ManagerConfig_c *v5; // x0
  System_String_o *v6; // x0
  System_String_o *v7; // x19

  if ( (byte_42EC57D & 1) == 0 )
  {
    sub_B5D5C4(&ManagerConfig_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC57D = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( !v5->static_fields->UseMock )
  {
    v6 = (System_String_o *)((__int64 (__fastcall *)(RequestBase_o *, void *))this->klass->vtable._16_getParameterFileName.method)(
                              this,
                              this->klass[1]._1.image);
    if ( v6 )
    {
      v7 = v6;
      if ( System_IO_File__Exists(v6, 0LL) )
        System_IO_File__Delete(v7, 0LL);
    }
  }
}


System_Byte_array *__fastcall RequestBase__PackToMessagePack(
        RequestBase_o *this,
        Il2CppObject *json,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  MiniMessagePack_MiniMessagePacker_o *v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  System_Byte_array *v17; // x21
  System_IO_MemoryStream_o *v18; // x19
  System_IO_Compression_GZipStream_o *v19; // x20
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x3
  System_IO_Compression_GZipStream_c *klass; // x8
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x0
  __int64 v30; // x3
  System_Byte_array *v31; // x21
  int v32; // w22
  System_IO_MemoryStream_c *v33; // x8
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0
  int v38[2]; // [xsp+0h] [xbp-30h]
  int v39; // [xsp+8h] [xbp-28h]

  if ( (byte_42EC57F & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_Compression_GZipStream_TypeInfo, (_DWORD)json, (_DWORD)method, v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_IO_MemoryStream_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&MiniMessagePack_MiniMessagePacker_TypeInfo, v11, v12, v13);
    byte_42EC57F = 1;
  }
  v39 = 0;
  v14 = (MiniMessagePack_MiniMessagePacker_o *)sub_B5D694(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v14, 0LL);
  if ( !v14 )
    sub_B5D69C(v15, v16);
  v17 = MiniMessagePack_MiniMessagePacker__PackClass(v14, json, 0LL);
  v18 = (System_IO_MemoryStream_o *)sub_B5D694(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v18, 0LL);
  v19 = (System_IO_Compression_GZipStream_o *)sub_B5D694(System_IO_Compression_GZipStream_TypeInfo);
  System_IO_Compression_GZipStream___ctor_38127800(v19, (System_IO_Stream_o *)v18, 0, 0LL);
  if ( !v17 )
    sub_B5D69C(v20, v21);
  if ( !v19 )
    sub_B5D69C(v20, v21);
  ((void (__fastcall *)(System_IO_Compression_GZipStream_o *, System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))v19->klass->vtable._32_Write.method)(
    v19,
    v17,
    0LL,
    v17->max_length,
    v19->klass->vtable._33_WriteByte.methodPtr);
  v38[0] = 49;
  v39 = 1;
  klass = v19->klass;
  if ( *(_WORD *)&v19->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v24;
      p_offset += 4;
      if ( v24 >= *(unsigned __int16 *)&v19->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v26 = sub_AF54C0(v19, System_IDisposable_TypeInfo, 0LL, v22);
  }
  v27 = (*(__int64 (__fastcall **)(System_IO_Compression_GZipStream_o *, _QWORD))v26)(v19, *(_QWORD *)(v26 + 8));
  v39 = 0;
  if ( !v18 )
    sub_B5D69C(v27, v28);
  v29 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v18->klass->vtable._37_ToArray.method)(
          v18,
          v18->klass[1]._1.image);
  v38[0] = 68;
  v31 = (System_Byte_array *)v29;
  v32 = ++v39;
  v33 = v18->klass;
  if ( *(_WORD *)&v18->klass->_2.bitflags1 )
  {
    v34 = 0LL;
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      ++v34;
      v35 += 4;
      if ( v34 >= *(unsigned __int16 *)&v18->klass->_2.bitflags1 )
        goto LABEL_19;
    }
    v36 = (__int64)(&v33->vtable._0_Equals.method + 2 * *v35);
  }
  else
  {
LABEL_19:
    v36 = sub_AF54C0(v18, System_IDisposable_TypeInfo, 0LL, v30);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v36)(v18, *(_QWORD *)(v36 + 8));
  if ( v32 && v38[v32 - 1] == 68 )
    v39 = v32 - 1;
  return v31;
}


bool __fastcall RequestBase__ReadParameter(RequestBase_o *this, bool isRefreshTime, const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  ManagerConfig_c *v21; // x0
  bool v22; // w21
  System_String_o *v24; // x0
  System_String_o *v25; // x19
  System_IO_Stream_o *v26; // x22
  System_IO_BinaryReader_o *v27; // x19
  const MethodInfo *v28; // x1
  __int64 v29; // x0
  __int64 v30; // x1
  int v31; // w23
  int v32; // w22
  int i; // w25
  System_Xml_XmlQualifiedName_o *v34; // x24
  __int64 v35; // x1
  System_Xml_Schema_XmlSchemaObject_o *v36; // x2
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0
  int j; // w24
  UIPanel_o *v39; // x23
  __int64 v40; // x1
  int32_t v41; // w2
  struct System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0
  __int64 v43; // x3
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v45; // x10
  int32_t *p_offset; // x11
  __int64 v47; // x0

  if ( (byte_42EC57B & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryReader_TypeInfo, isRefreshTime, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__string__Add__, v9, v10, v11);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&NetworkManager_TypeInfo, v18, v19, v20);
    byte_42EC57B = 1;
  }
  v21 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v21 = ManagerConfig_TypeInfo;
  }
  if ( v21->static_fields->UseMock )
    return 0;
  v24 = (System_String_o *)((__int64 (__fastcall *)(RequestBase_o *, void *, const MethodInfo *))this->klass->vtable._16_getParameterFileName.method)(
                             this,
                             this->klass[1]._1.image,
                             method);
  if ( !v24 )
    return 0;
  v25 = v24;
  if ( !System_IO_File__Exists(v24, 0LL) )
    return 0;
  v26 = (System_IO_Stream_o *)System_IO_File__OpenRead(v25, 0LL);
  v27 = (System_IO_BinaryReader_o *)sub_B5D694(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v27, v26, 0LL);
  RequestBase__ClearField(this, v28);
  if ( !v27 )
    sub_B5D69C(v29, v30);
  v31 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v27->klass->vtable._15_ReadInt32.method)(
          v27,
          v27->klass->vtable._16_ReadUInt32.methodPtr);
  v32 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v27->klass->vtable._15_ReadInt32.method)(
          v27,
          v27->klass->vtable._16_ReadUInt32.methodPtr);
  if ( v31 >= 1 )
  {
    for ( i = 0; i < v31; ++i )
    {
      v34 = (System_Xml_XmlQualifiedName_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v27->klass->vtable._22_ReadString.method)(
                                               v27,
                                               v27->klass->vtable._23_ReadChars.methodPtr);
      v36 = (System_Xml_Schema_XmlSchemaObject_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v27->klass->vtable._22_ReadString.method)(
                                                     v27,
                                                     v27->klass->vtable._23_ReadChars.methodPtr);
      paramString = this->fields.paramString;
      if ( !paramString )
        sub_B5D69C(0LL, v35);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
        v34,
        v36,
        (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
    }
  }
  if ( v32 >= 1 )
  {
    for ( j = 0; j < v32; ++j )
    {
      v39 = (UIPanel_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v27->klass->vtable._22_ReadString.method)(
                           v27,
                           v27->klass->vtable._23_ReadChars.methodPtr);
      v41 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v27->klass->vtable._15_ReadInt32.method)(
              v27,
              v27->klass->vtable._16_ReadUInt32.methodPtr);
      paramInteger = this->fields.paramInteger;
      if ( !paramInteger )
        sub_B5D69C(0LL, v40);
      System_Collections_Generic_Dictionary_UIPanel__int___Add(
        (System_Collections_Generic_Dictionary_UIPanel__int__o *)paramInteger,
        v39,
        v41,
        (const MethodInfo_2F1B444 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
    }
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__ReplaceBaseField(this, isRefreshTime, 0LL);
  v22 = 1;
  klass = v27->klass;
  if ( *(_WORD *)&v27->klass->_2.bitflags1 )
  {
    v45 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v45;
      p_offset += 4;
      if ( v45 >= *(unsigned __int16 *)&v27->klass->_2.bitflags1 )
        goto LABEL_27;
    }
    v47 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_27:
    v47 = sub_AF54C0(v27, System_IDisposable_TypeInfo, 0LL, v43);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v47)(v27, *(_QWORD *)(v47 + 8));
  return v22;
}


Il2CppObject *__fastcall RequestBase__UnpackToMessagePack(
        RequestBase_o *this,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_String_o *v17; // x19
  System_Byte_array *v18; // x20
  __int64 v19; // x19
  System_IO_MemoryStream_o *v20; // x22
  System_IO_Compression_GZipStream_o *v21; // x21
  System_IO_MemoryStream_o *v22; // x20
  __int64 v23; // x3
  MiniMessagePack_MiniMessagePacker_o *v24; // x19

  if ( (byte_42EC57E & 1) == 0 )
  {
    sub_B5D5C4(&byte___TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&System_Convert_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_IO_Compression_GZipStream_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_IO_MemoryStream_TypeInfo, v11, v12, v13);
    this = (RequestBase_o *)sub_B5D5C4(&MiniMessagePack_MiniMessagePacker_TypeInfo, v14, v15, v16);
    byte_42EC57E = 1;
  }
  if ( !obj )
    goto LABEL_16;
  v17 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo *))obj->klass->vtable[3].method)(
                             obj,
                             obj->klass->vtable[4].methodPtr,
                             method);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v18 = System_Convert__FromBase64String(v17, 0LL);
  v19 = sub_B5D5DC(byte___TypeInfo, 1024LL);
  v20 = (System_IO_MemoryStream_o *)sub_B5D694(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_45159160(v20, v18, 0LL);
  v21 = (System_IO_Compression_GZipStream_o *)sub_B5D694(System_IO_Compression_GZipStream_TypeInfo);
  System_IO_Compression_GZipStream___ctor(v21, (System_IO_Stream_o *)v20, 0, 0LL);
  v22 = (System_IO_MemoryStream_o *)sub_B5D694(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v22, 0LL);
  if ( !v19 || !v21 )
    goto LABEL_16;
  this = (RequestBase_o *)((__int64 (__fastcall *)(System_IO_Compression_GZipStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v21->klass->vtable._30_Read.method)(
                            v21,
                            v19,
                            0LL,
                            *(unsigned int *)(v19 + 24),
                            v21->klass->vtable._31_ReadByte.methodPtr);
  if ( (int)this >= 1 )
  {
    v23 = (unsigned int)this;
    while ( v22 )
    {
      ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, __int64, Il2CppMethodPointer))v22->klass->vtable._32_Write.method)(
        v22,
        v19,
        0LL,
        v23,
        v22->klass->vtable._33_WriteByte.methodPtr);
      this = (RequestBase_o *)((__int64 (__fastcall *)(System_IO_Compression_GZipStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v21->klass->vtable._30_Read.method)(
                                v21,
                                v19,
                                0LL,
                                *(unsigned int *)(v19 + 24),
                                v21->klass->vtable._31_ReadByte.methodPtr);
      v23 = (unsigned int)this;
      if ( (int)this < 1 )
        goto LABEL_13;
    }
LABEL_16:
    sub_B5D69C(this, obj);
  }
LABEL_13:
  v24 = (MiniMessagePack_MiniMessagePacker_o *)sub_B5D694(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v24, 0LL);
  if ( !v22 )
    goto LABEL_16;
  this = (RequestBase_o *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v22->klass->vtable._37_ToArray.method)(
                            v22,
                            v22->klass[1]._1.image);
  if ( !v24 )
    goto LABEL_16;
  return MiniMessagePack_MiniMessagePacker__Unpack_25000720(v24, (System_Byte_array *)this, 0LL);
}


void __fastcall RequestBase__WriteParameter(RequestBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  ManagerConfig_c *v53; // x0
  System_String_o *v54; // x0
  System_IO_Stream_o *v55; // x21
  System_IO_BinaryWriter_o *v56; // x19
  __int64 v57; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0
  __int64 Count; // x0
  __int64 v60; // x1
  System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0
  unsigned int v62; // w0
  __int64 v63; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v64; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  __int64 v66; // x1
  Il2CppObject *currentKey; // x21
  __int64 v68; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v69; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v71; // x1
  char v72; // w22
  System_Collections_Generic_Dictionary_string__int__o *v73; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v74; // x0
  __int64 v75; // x1
  Il2CppObject *v76; // x21
  __int64 v77; // x1
  System_Collections_Generic_Dictionary_string__int__o *v78; // x0
  unsigned int v79; // w0
  int v80; // w22
  __int64 v81; // x3
  int v82; // w8
  int v83; // w20
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v85; // x10
  int32_t *p_offset; // x11
  __int64 v87; // x0
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v88; // [xsp+10h] [xbp-A0h] BYREF
  int v89[4]; // [xsp+28h] [xbp-88h] BYREF
  int v90; // [xsp+38h] [xbp-78h]
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v91; // [xsp+40h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v92; // [xsp+60h] [xbp-50h] BYREF

  if ( (byte_42EC57C & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryWriter_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__get_Count__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__get_Keys__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__string__get_Keys__, v20, v21, v22);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__,
      v23,
      v24,
      v25);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__,
      v26,
      v27,
      v28);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__,
      v29,
      v30,
      v31);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__,
      v32,
      v33,
      v34);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__get_Current__,
      v35,
      v36,
      v37);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__get_Current__,
      v38,
      v39,
      v40);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__, v44, v45, v46);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__,
      v47,
      v48,
      v49);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v50, v51, v52);
    byte_42EC57C = 1;
  }
  memset(&v92, 0, sizeof(v92));
  memset(&v91, 0, sizeof(v91));
  v90 = 0;
  v53 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v53 = ManagerConfig_TypeInfo;
  }
  if ( !v53->static_fields->UseMock )
  {
    v54 = (System_String_o *)((__int64 (__fastcall *)(RequestBase_o *, void *))this->klass->vtable._16_getParameterFileName.method)(
                               this,
                               this->klass[1]._1.image);
    if ( v54 )
    {
      v55 = (System_IO_Stream_o *)System_IO_File__OpenWrite(v54, 0LL);
      v56 = (System_IO_BinaryWriter_o *)sub_B5D694(System_IO_BinaryWriter_TypeInfo);
      System_IO_BinaryWriter___ctor_40360312(v56, v55, 0LL);
      paramString = this->fields.paramString;
      if ( !paramString )
        sub_B5D69C(0LL, v57);
      Count = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
                (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
                (const MethodInfo_2F267B8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
      if ( !v56 )
        sub_B5D69C(Count, (unsigned int)Count);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v56->klass->vtable._17_Write.method)(
        v56,
        (unsigned int)Count,
        v56->klass->vtable._18_Write.methodPtr);
      paramInteger = this->fields.paramInteger;
      if ( !paramInteger )
        sub_B5D69C(0LL, v60);
      v62 = System_Collections_Generic_Dictionary_string__int___get_Count(
              paramInteger,
              (const MethodInfo_2F1B040 *)Method_System_Collections_Generic_Dictionary_string__int__get_Count__);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v56->klass->vtable._17_Write.method)(
        v56,
        v62,
        v56->klass->vtable._18_Write.methodPtr);
      v64 = this->fields.paramString;
      if ( !v64 )
        sub_B5D69C(0LL, v63);
      Keys = System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element___get_Keys(
               (System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)v64,
               (const MethodInfo_2F267C8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Keys__);
      if ( !Keys )
        sub_B5D69C(0LL, v66);
      System_Collections_Generic_Dictionary_KeyCollection_string__AssetsInfo_dataInfo___GetEnumerator(
        &v88,
        Keys,
        (const MethodInfo_2440BA8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__);
      v92 = v88;
      while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__AssetsInfo_dataInfo___MoveNext(
                &v92,
                (const MethodInfo_2769150 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__) )
      {
        currentKey = v92.fields.currentKey;
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppObject *, void *))v56->klass->vtable._22_Write.method)(
          v56,
          v92.fields.currentKey,
          v56->klass[1]._1.image);
        v69 = this->fields.paramString;
        if ( !v69 )
          sub_B5D69C(0LL, v68);
        Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v69,
                 (System_Type_o *)currentKey,
                 (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, UnityEngine_Purchasing_IStoreExtension_o *, void *))v56->klass->vtable._22_Write.method)(
          v56,
          Item,
          v56->klass[1]._1.image);
      }
      v89[0] = 142;
      v90 = 1;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__AssetsInfo_dataInfo___Dispose(
        &v92,
        (const MethodInfo_276914C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__);
      if ( v89[0] == 142 )
      {
        v72 = 0;
        v90 = 0;
      }
      else
      {
        v72 = 1;
      }
      v73 = this->fields.paramInteger;
      if ( !v73 )
        sub_B5D69C(0LL, v71);
      v74 = System_Collections_Generic_Dictionary_string__int___get_Keys(
              v73,
              (const MethodInfo_2F1B050 *)Method_System_Collections_Generic_Dictionary_string__int__get_Keys__);
      if ( !v74 )
        sub_B5D69C(0LL, v75);
      System_Collections_Generic_Dictionary_KeyCollection_string__int___GetEnumerator(
        &v88,
        v74,
        (const MethodInfo_243EE44 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__);
      v91 = v88;
      while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int___MoveNext(
                &v91,
                (const MethodInfo_2766080 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__) )
      {
        v76 = v91.fields.currentKey;
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppObject *, void *))v56->klass->vtable._22_Write.method)(
          v56,
          v91.fields.currentKey,
          v56->klass[1]._1.image);
        v78 = this->fields.paramInteger;
        if ( !v78 )
          sub_B5D69C(0LL, v77);
        v79 = System_Collections_Generic_Dictionary_string__int___get_Item(
                v78,
                (System_String_o *)v76,
                (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v56->klass->vtable._17_Write.method)(
          v56,
          v79,
          v56->klass->vtable._18_Write.methodPtr);
      }
      *(_DWORD *)((unsigned __int64)v89 & 0xFFFFFFFFFFFFFFFBLL | (4LL * (v72 & 1))) = 223;
      v80 = ++v90;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int___Dispose(
        &v91,
        (const MethodInfo_276607C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__);
      if ( v80 )
      {
        v82 = v80 - 1;
        if ( v89[v80 - 1] == 223 )
        {
          --v80;
          v90 = v82;
        }
      }
      v89[v80] = 238;
      v83 = ++v90;
      klass = v56->klass;
      if ( *(_WORD *)&v56->klass->_2.bitflags1 )
      {
        v85 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          ++v85;
          p_offset += 4;
          if ( v85 >= *(unsigned __int16 *)&v56->klass->_2.bitflags1 )
            goto LABEL_34;
        }
        v87 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_34:
        v87 = sub_AF54C0(v56, System_IDisposable_TypeInfo, 0LL, v81);
      }
      (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v87)(v56, *(_QWORD *)(v87 + 8));
      if ( v83 && v89[v83 - 1] == 238 )
        v90 = v83 - 1;
    }
  }
}


void __fastcall RequestBase__addBaseField(RequestBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC572 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC572 = 1;
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC573 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC573 = 1;
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

  if ( (byte_42EC56C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__Add__, (_DWORD)fieldName, data, method);
    byte_42EC56C = 1;
  }
  paramInteger = this->fields.paramInteger;
  if ( !paramInteger )
    sub_B5D69C(0LL, fieldName);
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)paramInteger,
    (UIPanel_o *)fieldName,
    data,
    (const MethodInfo_2F1B444 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
}


void __fastcall RequestBase__addField_32361792(
        RequestBase_o *this,
        System_String_o *fieldName,
        int64_t data,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v10; // x0
  __int64 v11; // x1
  System_Xml_Schema_XmlSchemaObject_o *v12; // x2
  int64_t v13; // [xsp+8h] [xbp-18h] BYREF

  v13 = data;
  if ( (byte_42EC56D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__string__Add__, (_DWORD)fieldName, data, method);
    sub_B5D5C4(&StringLiteral_1/*""*/, v6, v7, v8);
    byte_42EC56D = 1;
  }
  paramString = this->fields.paramString;
  v10 = System_Int64__ToString((int64_t)&v13, 0LL);
  if ( !paramString )
    sub_B5D69C(v10, v11);
  if ( v10 )
    v12 = (System_Xml_Schema_XmlSchemaObject_o *)v10;
  else
    v12 = (System_Xml_Schema_XmlSchemaObject_o *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    v12,
    (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void __fastcall RequestBase__addField_32361948(
        RequestBase_o *this,
        System_String_o *fieldName,
        float data,
        const MethodInfo *method)
{
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v11; // x0
  __int64 v12; // x1
  System_Xml_Schema_XmlSchemaObject_o *v13; // x2
  float v14; // [xsp+Ch] [xbp-14h] BYREF

  v14 = data;
  if ( (byte_42EC56E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__string__Add__,
      (_DWORD)fieldName,
      (_DWORD)method,
      v4);
    sub_B5D5C4(&StringLiteral_1/*""*/, v7, v8, v9);
    byte_42EC56E = 1;
  }
  paramString = this->fields.paramString;
  v11 = System_Single__ToString(data, (const MethodInfo *)&v14);
  if ( !paramString )
    sub_B5D69C(v11, v12);
  if ( v11 )
    v13 = (System_Xml_Schema_XmlSchemaObject_o *)v11;
  else
    v13 = (System_Xml_Schema_XmlSchemaObject_o *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    v13,
    (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void __fastcall RequestBase__addField_32362104(
        RequestBase_o *this,
        System_String_o *fieldName,
        double data,
        const MethodInfo *method)
{
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v11; // x0
  __int64 v12; // x1
  System_Xml_Schema_XmlSchemaObject_o *v13; // x2
  double v14; // [xsp+8h] [xbp-18h] BYREF

  v14 = data;
  if ( (byte_42EC56F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__string__Add__,
      (_DWORD)fieldName,
      (_DWORD)method,
      v4);
    sub_B5D5C4(&StringLiteral_1/*""*/, v7, v8, v9);
    byte_42EC56F = 1;
  }
  paramString = this->fields.paramString;
  v11 = System_Double__ToString(data, (const MethodInfo *)&v14);
  if ( !paramString )
    sub_B5D69C(v11, v12);
  if ( v11 )
    v13 = (System_Xml_Schema_XmlSchemaObject_o *)v11;
  else
    v13 = (System_Xml_Schema_XmlSchemaObject_o *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    v13,
    (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void __fastcall RequestBase__addField_32362260(
        RequestBase_o *this,
        System_String_o *fieldName,
        System_String_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0

  if ( (byte_42EC570 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__string__Add__,
      (_DWORD)fieldName,
      (_DWORD)data,
      method);
    byte_42EC570 = 1;
  }
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_B5D69C(0LL, fieldName);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    (System_Xml_Schema_XmlSchemaObject_o *)data,
    (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void __fastcall RequestBase__addField_32362368(
        RequestBase_o *this,
        System_String_o *fieldName,
        Il2CppObject *data,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_String_o *v10; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x8

  if ( (byte_42EC571 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__string__Add__,
      (_DWORD)fieldName,
      (_DWORD)data,
      method);
    sub_B5D5C4(&JsonManager_TypeInfo, v7, v8, v9);
    byte_42EC571 = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v10 = JsonManager__toJson(data, 0, 0, 0LL);
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_B5D69C(v10, v11);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    (System_Xml_Schema_XmlSchemaObject_o *)v10,
    (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


bool __fastcall RequestBase__backgroundErrorRequest(
        RequestBase_o *this,
        System_String_o *errorCode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  NetworkManager_ResultCallbackFunc_o *CallBack; // x0

  if ( (byte_42EC567 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, (_DWORD)errorCode, (_DWORD)method, v3);
    byte_42EC567 = 1;
  }
  CallBack = this->fields.CallBack;
  if ( CallBack )
    NetworkManager_ResultCallbackFunc__Invoke(CallBack, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL);
  return 1;
}


void __fastcall RequestBase__backgroundErrorRetry(RequestBase_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall RequestBase__beginRequest(RequestBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC569 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC569 = 1;
  }
  RequestBase__addBaseField(this, method);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__RequestStart(this, 0LL);
}


bool __fastcall RequestBase__beginRetryRequest(RequestBase_o *this, bool isRefreshTime, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42EC56A & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, isRefreshTime, (_DWORD)method, v3);
    byte_42EC56A = 1;
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
  __int64 v3; // x3
  NetworkManager_ResultCallbackFunc_o *CallBack; // x0

  if ( (byte_42EC568 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, (_DWORD)errorCode, (_DWORD)method, v3);
    byte_42EC568 = 1;
  }
  CallBack = this->fields.CallBack;
  if ( CallBack )
    NetworkManager_ResultCallbackFunc__Invoke(CallBack, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  UnityEngine_WWWForm_o *v54; // x19
  System_Collections_Generic_SortedDictionary_string__string__o *v55; // x22
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  __int64 v62; // x1
  System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *paramString; // x0
  __int64 v64; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v65; // x0
  Il2CppObject *currentKey; // x22
  System_String_o *Item; // x0
  __int64 v68; // x1
  __int64 v69; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v70; // x0
  System_Collections_Generic_SortedDictionary_string__string__o *v71; // x23
  System_String_o *v72; // x0
  __int64 v73; // x1
  __int64 v74; // x1
  System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0
  Il2CppObject *v76; // x22
  __int64 v77; // x0
  __int64 v78; // x1
  __int64 v79; // x1
  System_Collections_Generic_Dictionary_string__int__o *v80; // x0
  System_Collections_Generic_SortedDictionary_string__string__o *v81; // x23
  int32_t v82; // w24
  System_String_o *v83; // x0
  __int64 v84; // x1
  int v85; // w20
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v87; // [xsp+8h] [xbp-B8h] BYREF
  int v88[2]; // [xsp+20h] [xbp-A0h]
  int v89; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v90; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v91; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_42EC57A & 1) == 0 )
  {
    sub_B5D5C4(&System_Convert_TypeInfo, (_DWORD)authParams, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__get_Keys__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__string__get_Keys__, v15, v16, v17);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__,
      v18,
      v19,
      v20);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__,
      v21,
      v22,
      v23);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__,
      v24,
      v25,
      v26);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__,
      v27,
      v28,
      v29);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__get_Current__,
      v30,
      v31,
      v32);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__get_Current__,
      v33,
      v34,
      v35);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__, v36, v37, v38);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__,
      v39,
      v40,
      v41);
    sub_B5D5C4(&Method_System_Collections_Generic_SortedDictionary_string__string__Add__, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_SortedDictionary_string__string___ctor__, v45, v46, v47);
    sub_B5D5C4(&System_Collections_Generic_SortedDictionary_string__string__TypeInfo, v48, v49, v50);
    sub_B5D5C4(&UnityEngine_WWWForm_TypeInfo, v51, v52, v53);
    byte_42EC57A = 1;
  }
  memset(&v91, 0, sizeof(v91));
  memset(&v90, 0, sizeof(v90));
  v89 = 0;
  v54 = (UnityEngine_WWWForm_o *)sub_B5D694(UnityEngine_WWWForm_TypeInfo);
  UnityEngine_WWWForm___ctor(v54, 0LL);
  v55 = (System_Collections_Generic_SortedDictionary_string__string__o *)sub_B5D694(System_Collections_Generic_SortedDictionary_string__string__TypeInfo);
  System_Collections_Generic_SortedDictionary_string__string____ctor(
    v55,
    (const MethodInfo_2A306AC *)Method_System_Collections_Generic_SortedDictionary_string__string___ctor__);
  *authParams = v55;
  sub_B5D560((BattleServantConfConponent_o *)authParams, (System_Int32_array **)v55, v56, v57, v58, v59, v60, v61);
  paramString = (System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)this->fields.paramString;
  if ( !paramString )
    goto LABEL_36;
  paramString = (System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element___get_Keys(paramString, (const MethodInfo_2F267C8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Keys__);
  if ( !paramString )
    goto LABEL_36;
  System_Collections_Generic_Dictionary_KeyCollection_string__AssetsInfo_dataInfo___GetEnumerator(
    &v87,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)paramString,
    (const MethodInfo_2440BA8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__);
  v91 = v87;
  while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__AssetsInfo_dataInfo___MoveNext(
            &v91,
            (const MethodInfo_2769150 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__) )
  {
    v65 = this->fields.paramString;
    if ( !v65 )
      sub_B5D69C(0LL, v64);
    currentKey = v91.fields.currentKey;
    Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v65,
                                (System_Type_o *)v91.fields.currentKey,
                                (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    if ( !v54 )
      sub_B5D69C(Item, v68);
    UnityEngine_WWWForm__AddField(v54, (System_String_o *)currentKey, Item, 0LL);
    v70 = this->fields.paramString;
    if ( !v70 )
      sub_B5D69C(0LL, v69);
    v71 = *authParams;
    v72 = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                               (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v70,
                               (System_Type_o *)currentKey,
                               (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    if ( !v71 )
      sub_B5D69C(v72, v73);
    System_Collections_Generic_SortedDictionary_string__string___Add(
      v71,
      (System_String_o *)currentKey,
      v72,
      (const MethodInfo_2A30D9C *)Method_System_Collections_Generic_SortedDictionary_string__string__Add__);
  }
  v88[0] = 104;
  v89 = 1;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__AssetsInfo_dataInfo___Dispose(
    &v91,
    (const MethodInfo_276914C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__);
  v89 = 0;
  paramString = (System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)this->fields.paramInteger;
  if ( !paramString
    || (paramString = (System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)System_Collections_Generic_Dictionary_string__int___get_Keys((System_Collections_Generic_Dictionary_string__int__o *)paramString, (const MethodInfo_2F1B050 *)Method_System_Collections_Generic_Dictionary_string__int__get_Keys__)) == 0LL )
  {
LABEL_36:
    sub_B5D69C(paramString, v62);
  }
  System_Collections_Generic_Dictionary_KeyCollection_string__int___GetEnumerator(
    &v87,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)paramString,
    (const MethodInfo_243EE44 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__);
  v90 = v87;
  while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int___MoveNext(
            &v90,
            (const MethodInfo_2766080 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__) )
  {
    paramInteger = this->fields.paramInteger;
    if ( !paramInteger )
      sub_B5D69C(0LL, v74);
    v76 = v90.fields.currentKey;
    v77 = System_Collections_Generic_Dictionary_string__int___get_Item(
            paramInteger,
            (System_String_o *)v90.fields.currentKey,
            (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    if ( !v54 )
      sub_B5D69C(v77, v78);
    UnityEngine_WWWForm__AddField_51223016(v54, (System_String_o *)v76, v77, 0LL);
    v80 = this->fields.paramInteger;
    if ( !v80 )
      sub_B5D69C(0LL, v79);
    v81 = *authParams;
    v82 = System_Collections_Generic_Dictionary_string__int___get_Item(
            v80,
            (System_String_o *)v76,
            (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Convert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    }
    v83 = System_Convert__ToString_42796160(v82, 0LL);
    if ( !v81 )
      sub_B5D69C(v83, v84);
    System_Collections_Generic_SortedDictionary_string__string___Add(
      v81,
      (System_String_o *)v76,
      v83,
      (const MethodInfo_2A30D9C *)Method_System_Collections_Generic_SortedDictionary_string__string__Add__);
  }
  v88[0] = 205;
  v85 = ++v89;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int___Dispose(
    &v90,
    (const MethodInfo_276607C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__);
  if ( v85 && v88[v85 - 1] == 205 )
    v89 = v85 - 1;
  return v54;
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

  if ( (byte_42EC574 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, (_DWORD)fieldName, data, method);
    byte_42EC574 = 1;
  }
  paramInteger = this->fields.paramInteger;
  if ( !paramInteger )
    sub_B5D69C(0LL, fieldName);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)paramInteger,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    data,
    (const MethodInfo_2F1B41C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
}


void __fastcall RequestBase__replaceField_32362752(
        RequestBase_o *this,
        System_String_o *fieldName,
        int64_t data,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v10; // x0
  __int64 v11; // x1
  System_Xml_Schema_XmlSchemaObject_o *v12; // x2
  int64_t v13; // [xsp+8h] [xbp-18h] BYREF

  v13 = data;
  if ( (byte_42EC575 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__string__set_Item__,
      (_DWORD)fieldName,
      data,
      method);
    sub_B5D5C4(&StringLiteral_1/*""*/, v6, v7, v8);
    byte_42EC575 = 1;
  }
  paramString = this->fields.paramString;
  v10 = System_Int64__ToString((int64_t)&v13, 0LL);
  if ( !paramString )
    sub_B5D69C(v10, v11);
  if ( v10 )
    v12 = (System_Xml_Schema_XmlSchemaObject_o *)v10;
  else
    v12 = (System_Xml_Schema_XmlSchemaObject_o *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    v12,
    (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall RequestBase__replaceField_32362908(
        RequestBase_o *this,
        System_String_o *fieldName,
        float data,
        const MethodInfo *method)
{
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v11; // x0
  __int64 v12; // x1
  System_Xml_Schema_XmlSchemaObject_o *v13; // x2
  float v14; // [xsp+Ch] [xbp-14h] BYREF

  v14 = data;
  if ( (byte_42EC576 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__string__set_Item__,
      (_DWORD)fieldName,
      (_DWORD)method,
      v4);
    sub_B5D5C4(&StringLiteral_1/*""*/, v7, v8, v9);
    byte_42EC576 = 1;
  }
  paramString = this->fields.paramString;
  v11 = System_Single__ToString(data, (const MethodInfo *)&v14);
  if ( !paramString )
    sub_B5D69C(v11, v12);
  if ( v11 )
    v13 = (System_Xml_Schema_XmlSchemaObject_o *)v11;
  else
    v13 = (System_Xml_Schema_XmlSchemaObject_o *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    v13,
    (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall RequestBase__replaceField_32363064(
        RequestBase_o *this,
        System_String_o *fieldName,
        double data,
        const MethodInfo *method)
{
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v11; // x0
  __int64 v12; // x1
  System_Xml_Schema_XmlSchemaObject_o *v13; // x2
  double v14; // [xsp+8h] [xbp-18h] BYREF

  v14 = data;
  if ( (byte_42EC577 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__string__set_Item__,
      (_DWORD)fieldName,
      (_DWORD)method,
      v4);
    sub_B5D5C4(&StringLiteral_1/*""*/, v7, v8, v9);
    byte_42EC577 = 1;
  }
  paramString = this->fields.paramString;
  v11 = System_Double__ToString(data, (const MethodInfo *)&v14);
  if ( !paramString )
    sub_B5D69C(v11, v12);
  if ( v11 )
    v13 = (System_Xml_Schema_XmlSchemaObject_o *)v11;
  else
    v13 = (System_Xml_Schema_XmlSchemaObject_o *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    v13,
    (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall RequestBase__replaceField_32363220(
        RequestBase_o *this,
        System_String_o *fieldName,
        System_String_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0

  if ( (byte_42EC578 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__string__set_Item__,
      (_DWORD)fieldName,
      (_DWORD)data,
      method);
    byte_42EC578 = 1;
  }
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_B5D69C(0LL, fieldName);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    (System_Xml_Schema_XmlSchemaObject_o *)data,
    (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall RequestBase__replaceField_32363328(
        RequestBase_o *this,
        System_String_o *fieldName,
        Il2CppObject *data,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_String_o *v10; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x8

  if ( (byte_42EC579 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__string__set_Item__,
      (_DWORD)fieldName,
      (_DWORD)data,
      method);
    sub_B5D5C4(&JsonManager_TypeInfo, v7, v8, v9);
    byte_42EC579 = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v10 = JsonManager__toJson(data, 0, 0, 0LL);
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_B5D69C(v10, v11);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    (System_Xml_Schema_XmlSchemaObject_o *)v10,
    (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
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