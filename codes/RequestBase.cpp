void __fastcall RequestBase___ctor(RequestBase_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_4355906 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_B70694(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    byte_4355906 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B70764(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v3,
    (const MethodInfo_2FAEE04 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.paramInteger = (struct System_Collections_Generic_Dictionary_string__int__o *)v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.paramInteger,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B70764(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v10,
    (const MethodInfo_2F4EE38 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)v10;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.paramString,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RequestBase__AddSignatureField(RequestBase_o *this, const MethodInfo *method)
{
  if ( (byte_4355905 & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&SignedData_TypeInfo);
    byte_4355905 = 1;
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
  System_Collections_Generic_Dictionary_UIPanel__int__o *paramInteger; // x0

  if ( (byte_43558F0 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__int__Clear__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__string__Clear__);
    byte_43558F0 = 1;
  }
  paramInteger = (System_Collections_Generic_Dictionary_UIPanel__int__o *)this->fields.paramInteger;
  if ( !paramInteger
    || (System_Collections_Generic_Dictionary_UIPanel__int___Clear(
          paramInteger,
          (const MethodInfo_2FAFB94 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__),
        (paramInteger = (System_Collections_Generic_Dictionary_UIPanel__int__o *)this->fields.paramString) == 0LL) )
  {
    sub_B7076C(paramInteger, method);
  }
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramInteger,
    (const MethodInfo_2F4FBC4 *)Method_System_Collections_Generic_Dictionary_string__string__Clear__);
}


void __fastcall RequestBase__ClearParameter(RequestBase_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  System_String_o *v4; // x0
  System_String_o *v5; // x19

  if ( (byte_4355902 & 1) == 0 )
  {
    sub_B70694(&ManagerConfig_TypeInfo);
    byte_4355902 = 1;
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
  MiniMessagePack_MiniMessagePacker_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  System_Byte_array *v7; // x21
  System_IO_MemoryStream_o *v8; // x19
  System_IO_Compression_GZipStream_o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  System_IO_Compression_GZipStream_c *klass; // x8
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x0
  System_Byte_array *v19; // x21
  int v20; // w22
  System_IO_MemoryStream_c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  int v26[2]; // [xsp+0h] [xbp-30h]
  int v27; // [xsp+8h] [xbp-28h]

  if ( (byte_4355904 & 1) == 0 )
  {
    sub_B70694(&System_IO_Compression_GZipStream_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_IO_MemoryStream_TypeInfo);
    sub_B70694(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    byte_4355904 = 1;
  }
  v27 = 0;
  v4 = (MiniMessagePack_MiniMessagePacker_o *)sub_B70764(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v4, 0LL);
  if ( !v4 )
    sub_B7076C(v5, v6);
  v7 = MiniMessagePack_MiniMessagePacker__PackClass(v4, json, 0LL);
  v8 = (System_IO_MemoryStream_o *)sub_B70764(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v8, 0LL);
  v9 = (System_IO_Compression_GZipStream_o *)sub_B70764(System_IO_Compression_GZipStream_TypeInfo);
  System_IO_Compression_GZipStream___ctor_38175044(v9, (System_IO_Stream_o *)v8, 0, 0LL);
  if ( !v7 )
    sub_B7076C(v10, v11);
  if ( !v9 )
    sub_B7076C(v10, v11);
  ((void (__fastcall *)(System_IO_Compression_GZipStream_o *, System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))v9->klass->vtable._32_Write.method)(
    v9,
    v7,
    0LL,
    v7->max_length,
    v9->klass->vtable._33_WriteByte.methodPtr);
  v26[0] = 49;
  v27 = 1;
  klass = v9->klass;
  if ( *(_WORD *)&v9->klass->_2.bitflags1 )
  {
    v13 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v13;
      p_offset += 4;
      if ( v13 >= *(unsigned __int16 *)&v9->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    v15 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v15 = sub_B08590(v9, System_IDisposable_TypeInfo, 0LL);
  }
  v16 = (*(__int64 (__fastcall **)(System_IO_Compression_GZipStream_o *, _QWORD))v15)(v9, *(_QWORD *)(v15 + 8));
  v27 = 0;
  if ( !v8 )
    sub_B7076C(v16, v17);
  v18 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v8->klass->vtable._37_ToArray.method)(
          v8,
          v8->klass[1]._1.image);
  v26[0] = 68;
  v19 = (System_Byte_array *)v18;
  v20 = ++v27;
  v21 = v8->klass;
  if ( *(_WORD *)&v8->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      ++v22;
      v23 += 4;
      if ( v22 >= *(unsigned __int16 *)&v8->klass->_2.bitflags1 )
        goto LABEL_19;
    }
    v24 = (__int64)(&v21->vtable._0_Equals.method + 2 * *v23);
  }
  else
  {
LABEL_19:
    v24 = sub_B08590(v8, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v24)(v8, *(_QWORD *)(v24 + 8));
  if ( v20 && v26[v20 - 1] == 68 )
    v27 = v20 - 1;
  return v19;
}


bool __fastcall RequestBase__ReadParameter(RequestBase_o *this, bool isRefreshTime, const MethodInfo *method)
{
  ManagerConfig_c *v5; // x0
  bool v6; // w21
  System_String_o *v8; // x0
  System_String_o *v9; // x19
  System_IO_Stream_o *v10; // x22
  System_IO_BinaryReader_o *v11; // x19
  const MethodInfo *v12; // x1
  __int64 v13; // x0
  __int64 v14; // x1
  int v15; // w23
  int v16; // w22
  int i; // w25
  System_Xml_XmlQualifiedName_o *v18; // x24
  __int64 v19; // x1
  System_Xml_Schema_XmlSchemaObject_o *v20; // x2
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0
  int j; // w24
  UIPanel_o *v23; // x23
  __int64 v24; // x1
  int32_t v25; // w2
  struct System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 v30; // x0

  if ( (byte_4355900 & 1) == 0 )
  {
    sub_B70694(&System_IO_BinaryReader_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&ManagerConfig_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    byte_4355900 = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( v5->static_fields->UseMock )
    return 0;
  v8 = (System_String_o *)((__int64 (__fastcall *)(RequestBase_o *, void *, const MethodInfo *))this->klass->vtable._16_getParameterFileName.method)(
                            this,
                            this->klass[1]._1.image,
                            method);
  if ( !v8 )
    return 0;
  v9 = v8;
  if ( !System_IO_File__Exists(v8, 0LL) )
    return 0;
  v10 = (System_IO_Stream_o *)System_IO_File__OpenRead(v9, 0LL);
  v11 = (System_IO_BinaryReader_o *)sub_B70764(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v11, v10, 0LL);
  RequestBase__ClearField(this, v12);
  if ( !v11 )
    sub_B7076C(v13, v14);
  v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v11->klass->vtable._15_ReadInt32.method)(
          v11,
          v11->klass->vtable._16_ReadUInt32.methodPtr);
  v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v11->klass->vtable._15_ReadInt32.method)(
          v11,
          v11->klass->vtable._16_ReadUInt32.methodPtr);
  if ( v15 >= 1 )
  {
    for ( i = 0; i < v15; ++i )
    {
      v18 = (System_Xml_XmlQualifiedName_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v11->klass->vtable._22_ReadString.method)(
                                               v11,
                                               v11->klass->vtable._23_ReadChars.methodPtr);
      v20 = (System_Xml_Schema_XmlSchemaObject_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v11->klass->vtable._22_ReadString.method)(
                                                     v11,
                                                     v11->klass->vtable._23_ReadChars.methodPtr);
      paramString = this->fields.paramString;
      if ( !paramString )
        sub_B7076C(0LL, v19);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
        v18,
        v20,
        (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
    }
  }
  if ( v16 >= 1 )
  {
    for ( j = 0; j < v16; ++j )
    {
      v23 = (UIPanel_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v11->klass->vtable._22_ReadString.method)(
                           v11,
                           v11->klass->vtable._23_ReadChars.methodPtr);
      v25 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v11->klass->vtable._15_ReadInt32.method)(
              v11,
              v11->klass->vtable._16_ReadUInt32.methodPtr);
      paramInteger = this->fields.paramInteger;
      if ( !paramInteger )
        sub_B7076C(0LL, v24);
      System_Collections_Generic_Dictionary_UIPanel__int___Add(
        (System_Collections_Generic_Dictionary_UIPanel__int__o *)paramInteger,
        v23,
        v25,
        (const MethodInfo_2FAF9B8 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
    }
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__ReplaceBaseField(this, isRefreshTime, 0LL);
  v6 = 1;
  klass = v11->klass;
  if ( *(_WORD *)&v11->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v28;
      p_offset += 4;
      if ( v28 >= *(unsigned __int16 *)&v11->klass->_2.bitflags1 )
        goto LABEL_27;
    }
    v30 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_27:
    v30 = sub_B08590(v11, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v30)(v11, *(_QWORD *)(v30 + 8));
  return v6;
}


Il2CppObject *__fastcall RequestBase__UnpackToMessagePack(
        RequestBase_o *this,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  System_Byte_array *v5; // x20
  __int64 v6; // x19
  System_IO_MemoryStream_o *v7; // x22
  System_IO_Compression_GZipStream_o *v8; // x21
  System_IO_MemoryStream_o *v9; // x20
  __int64 v10; // x3
  MiniMessagePack_MiniMessagePacker_o *v11; // x19

  if ( (byte_4355903 & 1) == 0 )
  {
    sub_B70694(&byte___TypeInfo);
    sub_B70694(&System_Convert_TypeInfo);
    sub_B70694(&System_IO_Compression_GZipStream_TypeInfo);
    sub_B70694(&System_IO_MemoryStream_TypeInfo);
    this = (RequestBase_o *)sub_B70694(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    byte_4355903 = 1;
  }
  if ( !obj )
    goto LABEL_16;
  v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo *))obj->klass->vtable[3].method)(
                            obj,
                            obj->klass->vtable[4].methodPtr,
                            method);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v5 = System_Convert__FromBase64String(v4, 0LL);
  v6 = sub_B706AC(byte___TypeInfo, 1024LL);
  v7 = (System_IO_MemoryStream_o *)sub_B70764(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_45610760(v7, v5, 0LL);
  v8 = (System_IO_Compression_GZipStream_o *)sub_B70764(System_IO_Compression_GZipStream_TypeInfo);
  System_IO_Compression_GZipStream___ctor(v8, (System_IO_Stream_o *)v7, 0, 0LL);
  v9 = (System_IO_MemoryStream_o *)sub_B70764(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v9, 0LL);
  if ( !v6 || !v8 )
    goto LABEL_16;
  this = (RequestBase_o *)((__int64 (__fastcall *)(System_IO_Compression_GZipStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v8->klass->vtable._30_Read.method)(
                            v8,
                            v6,
                            0LL,
                            *(unsigned int *)(v6 + 24),
                            v8->klass->vtable._31_ReadByte.methodPtr);
  if ( (int)this >= 1 )
  {
    v10 = (unsigned int)this;
    while ( v9 )
    {
      ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, __int64, Il2CppMethodPointer))v9->klass->vtable._32_Write.method)(
        v9,
        v6,
        0LL,
        v10,
        v9->klass->vtable._33_WriteByte.methodPtr);
      this = (RequestBase_o *)((__int64 (__fastcall *)(System_IO_Compression_GZipStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v8->klass->vtable._30_Read.method)(
                                v8,
                                v6,
                                0LL,
                                *(unsigned int *)(v6 + 24),
                                v8->klass->vtable._31_ReadByte.methodPtr);
      v10 = (unsigned int)this;
      if ( (int)this < 1 )
        goto LABEL_13;
    }
LABEL_16:
    sub_B7076C(this, obj);
  }
LABEL_13:
  v11 = (MiniMessagePack_MiniMessagePacker_o *)sub_B70764(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v11, 0LL);
  if ( !v9 )
    goto LABEL_16;
  this = (RequestBase_o *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v9->klass->vtable._37_ToArray.method)(
                            v9,
                            v9->klass[1]._1.image);
  if ( !v11 )
    goto LABEL_16;
  return MiniMessagePack_MiniMessagePacker__Unpack_22577800(v11, (System_Byte_array *)this, 0LL);
}


void __fastcall RequestBase__WriteParameter(RequestBase_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  System_String_o *v4; // x0
  System_IO_Stream_o *v5; // x21
  System_IO_BinaryWriter_o *v6; // x19
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0
  __int64 Count; // x0
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0
  unsigned int v12; // w0
  __int64 v13; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v14; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  __int64 v16; // x1
  Il2CppObject *currentKey; // x21
  __int64 v18; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v19; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v21; // x1
  char v22; // w22
  System_Collections_Generic_Dictionary_string__int__o *v23; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v24; // x0
  __int64 v25; // x1
  Il2CppObject *v26; // x21
  __int64 v27; // x1
  System_Collections_Generic_Dictionary_string__int__o *v28; // x0
  unsigned int v29; // w0
  int v30; // w22
  int v31; // w8
  int v32; // w20
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v34; // x10
  int32_t *p_offset; // x11
  __int64 v36; // x0
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v37; // [xsp+10h] [xbp-A0h] BYREF
  int v38[4]; // [xsp+28h] [xbp-88h] BYREF
  int v39; // [xsp+38h] [xbp-78h]
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v40; // [xsp+40h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v41; // [xsp+60h] [xbp-50h] BYREF

  if ( (byte_4355901 & 1) == 0 )
  {
    sub_B70694(&System_IO_BinaryWriter_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__int__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__int__get_Keys__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__string__get_Keys__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__get_Current__);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__);
    sub_B70694(&ManagerConfig_TypeInfo);
    byte_4355901 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  memset(&v40, 0, sizeof(v40));
  v39 = 0;
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
      v5 = (System_IO_Stream_o *)System_IO_File__OpenWrite(v4, 0LL);
      v6 = (System_IO_BinaryWriter_o *)sub_B70764(System_IO_BinaryWriter_TypeInfo);
      System_IO_BinaryWriter___ctor_39879612(v6, v5, 0LL);
      paramString = this->fields.paramString;
      if ( !paramString )
        sub_B7076C(0LL, v7);
      Count = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
                (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
                (const MethodInfo_2F4F5E4 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
      if ( !v6 )
        sub_B7076C(Count, (unsigned int)Count);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v6->klass->vtable._17_Write.method)(
        v6,
        (unsigned int)Count,
        v6->klass->vtable._18_Write.methodPtr);
      paramInteger = this->fields.paramInteger;
      if ( !paramInteger )
        sub_B7076C(0LL, v10);
      v12 = System_Collections_Generic_Dictionary_string__int___get_Count(
              paramInteger,
              (const MethodInfo_2FAF5B4 *)Method_System_Collections_Generic_Dictionary_string__int__get_Count__);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v6->klass->vtable._17_Write.method)(
        v6,
        v12,
        v6->klass->vtable._18_Write.methodPtr);
      v14 = this->fields.paramString;
      if ( !v14 )
        sub_B7076C(0LL, v13);
      Keys = System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element___get_Keys(
               (System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)v14,
               (const MethodInfo_2F4F5F4 *)Method_System_Collections_Generic_Dictionary_string__string__get_Keys__);
      if ( !Keys )
        sub_B7076C(0LL, v16);
      System_Collections_Generic_Dictionary_KeyCollection_string__AssetsInfo_dataInfo___GetEnumerator(
        &v37,
        Keys,
        (const MethodInfo_2154A24 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__);
      v41 = v37;
      while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__AssetsInfo_dataInfo___MoveNext(
                &v41,
                (const MethodInfo_277C8F0 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__) )
      {
        currentKey = v41.fields.currentKey;
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppObject *, void *))v6->klass->vtable._22_Write.method)(
          v6,
          v41.fields.currentKey,
          v6->klass[1]._1.image);
        v19 = this->fields.paramString;
        if ( !v19 )
          sub_B7076C(0LL, v18);
        Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v19,
                 (System_Type_o *)currentKey,
                 (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, UnityEngine_Purchasing_IStoreExtension_o *, void *))v6->klass->vtable._22_Write.method)(
          v6,
          Item,
          v6->klass[1]._1.image);
      }
      v38[0] = 142;
      v39 = 1;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__AssetsInfo_dataInfo___Dispose(
        &v41,
        (const MethodInfo_277C8EC *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__);
      if ( v38[0] == 142 )
      {
        v22 = 0;
        v39 = 0;
      }
      else
      {
        v22 = 1;
      }
      v23 = this->fields.paramInteger;
      if ( !v23 )
        sub_B7076C(0LL, v21);
      v24 = System_Collections_Generic_Dictionary_string__int___get_Keys(
              v23,
              (const MethodInfo_2FAF5C4 *)Method_System_Collections_Generic_Dictionary_string__int__get_Keys__);
      if ( !v24 )
        sub_B7076C(0LL, v25);
      System_Collections_Generic_Dictionary_KeyCollection_string__int___GetEnumerator(
        &v37,
        v24,
        (const MethodInfo_2152CC0 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__);
      v40 = v37;
      while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int___MoveNext(
                &v40,
                (const MethodInfo_2779820 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__) )
      {
        v26 = v40.fields.currentKey;
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppObject *, void *))v6->klass->vtable._22_Write.method)(
          v6,
          v40.fields.currentKey,
          v6->klass[1]._1.image);
        v28 = this->fields.paramInteger;
        if ( !v28 )
          sub_B7076C(0LL, v27);
        v29 = System_Collections_Generic_Dictionary_string__int___get_Item(
                v28,
                (System_String_o *)v26,
                (const MethodInfo_2FAF8F4 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v6->klass->vtable._17_Write.method)(
          v6,
          v29,
          v6->klass->vtable._18_Write.methodPtr);
      }
      *(_DWORD *)((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFFBLL | (4LL * (v22 & 1))) = 223;
      v30 = ++v39;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int___Dispose(
        &v40,
        (const MethodInfo_277981C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__);
      if ( v30 )
      {
        v31 = v30 - 1;
        if ( v38[v30 - 1] == 223 )
        {
          --v30;
          v39 = v31;
        }
      }
      v38[v30] = 238;
      v32 = ++v39;
      klass = v6->klass;
      if ( *(_WORD *)&v6->klass->_2.bitflags1 )
      {
        v34 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          ++v34;
          p_offset += 4;
          if ( v34 >= *(unsigned __int16 *)&v6->klass->_2.bitflags1 )
            goto LABEL_34;
        }
        v36 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_34:
        v36 = sub_B08590(v6, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v36)(v6, *(_QWORD *)(v36 + 8));
      if ( v32 && v38[v32 - 1] == 238 )
        v39 = v32 - 1;
    }
  }
}


void __fastcall RequestBase__addBaseField(RequestBase_o *this, const MethodInfo *method)
{
  if ( (byte_43558F7 & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    byte_43558F7 = 1;
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
  if ( (byte_43558F8 & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    byte_43558F8 = 1;
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

  if ( (byte_43558F1 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    byte_43558F1 = 1;
  }
  paramInteger = this->fields.paramInteger;
  if ( !paramInteger )
    sub_B7076C(0LL, fieldName);
  System_Collections_Generic_Dictionary_UIPanel__int___Add(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)paramInteger,
    (UIPanel_o *)fieldName,
    data,
    (const MethodInfo_2FAF9B8 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
}


void __fastcall RequestBase__addField_32336108(
        RequestBase_o *this,
        System_String_o *fieldName,
        int64_t data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1
  System_Xml_Schema_XmlSchemaObject_o *v9; // x2
  int64_t v10; // [xsp+8h] [xbp-18h] BYREF

  v10 = data;
  if ( (byte_43558F2 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43558F2 = 1;
  }
  paramString = this->fields.paramString;
  v7 = System_Int64__ToString((int64_t)&v10, 0LL);
  if ( !paramString )
    sub_B7076C(v7, v8);
  if ( v7 )
    v9 = (System_Xml_Schema_XmlSchemaObject_o *)v7;
  else
    v9 = (System_Xml_Schema_XmlSchemaObject_o *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    v9,
    (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void __fastcall RequestBase__addField_32336264(
        RequestBase_o *this,
        System_String_o *fieldName,
        float data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1
  System_Xml_Schema_XmlSchemaObject_o *v9; // x2
  float v10; // [xsp+Ch] [xbp-14h] BYREF

  v10 = data;
  if ( (byte_43558F3 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43558F3 = 1;
  }
  paramString = this->fields.paramString;
  v7 = System_Single__ToString(data, (const MethodInfo *)&v10);
  if ( !paramString )
    sub_B7076C(v7, v8);
  if ( v7 )
    v9 = (System_Xml_Schema_XmlSchemaObject_o *)v7;
  else
    v9 = (System_Xml_Schema_XmlSchemaObject_o *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    v9,
    (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void __fastcall RequestBase__addField_32336420(
        RequestBase_o *this,
        System_String_o *fieldName,
        double data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1
  System_Xml_Schema_XmlSchemaObject_o *v9; // x2
  double v10; // [xsp+8h] [xbp-18h] BYREF

  v10 = data;
  if ( (byte_43558F4 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43558F4 = 1;
  }
  paramString = this->fields.paramString;
  v7 = System_Double__ToString(data, (const MethodInfo *)&v10);
  if ( !paramString )
    sub_B7076C(v7, v8);
  if ( v7 )
    v9 = (System_Xml_Schema_XmlSchemaObject_o *)v7;
  else
    v9 = (System_Xml_Schema_XmlSchemaObject_o *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    v9,
    (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void __fastcall RequestBase__addField_32336576(
        RequestBase_o *this,
        System_String_o *fieldName,
        System_String_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0

  if ( (byte_43558F5 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    byte_43558F5 = 1;
  }
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_B7076C(0LL, fieldName);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    (System_Xml_Schema_XmlSchemaObject_o *)data,
    (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void __fastcall RequestBase__addField_32336684(
        RequestBase_o *this,
        System_String_o *fieldName,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_o *v7; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x8

  if ( (byte_43558F6 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_B70694(&JsonManager_TypeInfo);
    byte_43558F6 = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v7 = JsonManager__toJson(data, 0, 0, 0LL);
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_B7076C(v7, v8);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    (System_Xml_Schema_XmlSchemaObject_o *)v7,
    (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


bool __fastcall RequestBase__backgroundErrorRequest(
        RequestBase_o *this,
        System_String_o *errorCode,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *CallBack; // x0

  if ( (byte_43558EC & 1) == 0 )
  {
    sub_B70694(&StringLiteral_21408/*"ng"*/);
    byte_43558EC = 1;
  }
  CallBack = this->fields.CallBack;
  if ( CallBack )
    NetworkManager_ResultCallbackFunc__Invoke(CallBack, (System_String_o *)StringLiteral_21408/*"ng"*/, 0LL);
  return 1;
}


void __fastcall RequestBase__backgroundErrorRetry(RequestBase_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall RequestBase__beginRequest(RequestBase_o *this, const MethodInfo *method)
{
  if ( (byte_43558EE & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    byte_43558EE = 1;
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
  if ( (byte_43558EF & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    byte_43558EF = 1;
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

  if ( (byte_43558ED & 1) == 0 )
  {
    sub_B70694(&StringLiteral_21408/*"ng"*/);
    byte_43558ED = 1;
  }
  CallBack = this->fields.CallBack;
  if ( CallBack )
    NetworkManager_ResultCallbackFunc__Invoke(CallBack, (System_String_o *)StringLiteral_21408/*"ng"*/, 0LL);
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
  UnityEngine_WWWForm_o *v5; // x19
  System_Collections_Generic_SortedDictionary_string__string__o *v6; // x22
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x1
  System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *paramString; // x0
  __int64 v15; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v16; // x0
  Il2CppObject *currentKey; // x22
  System_String_o *Item; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v21; // x0
  System_Collections_Generic_SortedDictionary_string__string__o *v22; // x23
  System_String_o *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x1
  System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0
  Il2CppObject *v27; // x22
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x1
  System_Collections_Generic_Dictionary_string__int__o *v31; // x0
  System_Collections_Generic_SortedDictionary_string__string__o *v32; // x23
  int32_t v33; // w24
  System_String_o *v34; // x0
  __int64 v35; // x1
  int v36; // w20
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v38; // [xsp+8h] [xbp-B8h] BYREF
  int v39[2]; // [xsp+20h] [xbp-A0h]
  int v40; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v41; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v42; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_43558FF & 1) == 0 )
  {
    sub_B70694(&System_Convert_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__int__get_Keys__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__string__get_Keys__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_SortedDictionary_string__string__Add__);
    sub_B70694(&Method_System_Collections_Generic_SortedDictionary_string__string___ctor__);
    sub_B70694(&System_Collections_Generic_SortedDictionary_string__string__TypeInfo);
    sub_B70694(&UnityEngine_WWWForm_TypeInfo);
    byte_43558FF = 1;
  }
  memset(&v42, 0, sizeof(v42));
  memset(&v41, 0, sizeof(v41));
  v40 = 0;
  v5 = (UnityEngine_WWWForm_o *)sub_B70764(UnityEngine_WWWForm_TypeInfo);
  UnityEngine_WWWForm___ctor(v5, 0LL);
  v6 = (System_Collections_Generic_SortedDictionary_string__string__o *)sub_B70764(System_Collections_Generic_SortedDictionary_string__string__TypeInfo);
  System_Collections_Generic_SortedDictionary_string__string____ctor(
    v6,
    (const MethodInfo_2CEA178 *)Method_System_Collections_Generic_SortedDictionary_string__string___ctor__);
  *authParams = v6;
  sub_B70630((BattleServantConfConponent_o *)authParams, (System_Int32_array **)v6, v7, v8, v9, v10, v11, v12);
  paramString = (System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)this->fields.paramString;
  if ( !paramString )
    goto LABEL_36;
  paramString = (System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element___get_Keys(paramString, (const MethodInfo_2F4F5F4 *)Method_System_Collections_Generic_Dictionary_string__string__get_Keys__);
  if ( !paramString )
    goto LABEL_36;
  System_Collections_Generic_Dictionary_KeyCollection_string__AssetsInfo_dataInfo___GetEnumerator(
    &v38,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)paramString,
    (const MethodInfo_2154A24 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__);
  v42 = v38;
  while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__AssetsInfo_dataInfo___MoveNext(
            &v42,
            (const MethodInfo_277C8F0 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__) )
  {
    v16 = this->fields.paramString;
    if ( !v16 )
      sub_B7076C(0LL, v15);
    currentKey = v42.fields.currentKey;
    Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v16,
                                (System_Type_o *)v42.fields.currentKey,
                                (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    if ( !v5 )
      sub_B7076C(Item, v19);
    UnityEngine_WWWForm__AddField(v5, (System_String_o *)currentKey, Item, 0LL);
    v21 = this->fields.paramString;
    if ( !v21 )
      sub_B7076C(0LL, v20);
    v22 = *authParams;
    v23 = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                               (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v21,
                               (System_Type_o *)currentKey,
                               (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    if ( !v22 )
      sub_B7076C(v23, v24);
    System_Collections_Generic_SortedDictionary_string__string___Add(
      v22,
      (System_String_o *)currentKey,
      v23,
      (const MethodInfo_2CEA868 *)Method_System_Collections_Generic_SortedDictionary_string__string__Add__);
  }
  v39[0] = 104;
  v40 = 1;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__AssetsInfo_dataInfo___Dispose(
    &v42,
    (const MethodInfo_277C8EC *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__);
  v40 = 0;
  paramString = (System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)this->fields.paramInteger;
  if ( !paramString
    || (paramString = (System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)System_Collections_Generic_Dictionary_string__int___get_Keys((System_Collections_Generic_Dictionary_string__int__o *)paramString, (const MethodInfo_2FAF5C4 *)Method_System_Collections_Generic_Dictionary_string__int__get_Keys__)) == 0LL )
  {
LABEL_36:
    sub_B7076C(paramString, v13);
  }
  System_Collections_Generic_Dictionary_KeyCollection_string__int___GetEnumerator(
    &v38,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)paramString,
    (const MethodInfo_2152CC0 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__);
  v41 = v38;
  while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int___MoveNext(
            &v41,
            (const MethodInfo_2779820 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__) )
  {
    paramInteger = this->fields.paramInteger;
    if ( !paramInteger )
      sub_B7076C(0LL, v25);
    v27 = v41.fields.currentKey;
    v28 = System_Collections_Generic_Dictionary_string__int___get_Item(
            paramInteger,
            (System_String_o *)v41.fields.currentKey,
            (const MethodInfo_2FAF8F4 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    if ( !v5 )
      sub_B7076C(v28, v29);
    UnityEngine_WWWForm__AddField_51520172(v5, (System_String_o *)v27, v28, 0LL);
    v31 = this->fields.paramInteger;
    if ( !v31 )
      sub_B7076C(0LL, v30);
    v32 = *authParams;
    v33 = System_Collections_Generic_Dictionary_string__int___get_Item(
            v31,
            (System_String_o *)v27,
            (const MethodInfo_2FAF8F4 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Convert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    }
    v34 = System_Convert__ToString_42444396(v33, 0LL);
    if ( !v32 )
      sub_B7076C(v34, v35);
    System_Collections_Generic_SortedDictionary_string__string___Add(
      v32,
      (System_String_o *)v27,
      v34,
      (const MethodInfo_2CEA868 *)Method_System_Collections_Generic_SortedDictionary_string__string__Add__);
  }
  v39[0] = 205;
  v36 = ++v40;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int___Dispose(
    &v41,
    (const MethodInfo_277981C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__);
  if ( v36 && v39[v36 - 1] == 205 )
    v40 = v36 - 1;
  return v5;
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

  if ( (byte_43558F9 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    byte_43558F9 = 1;
  }
  paramInteger = this->fields.paramInteger;
  if ( !paramInteger )
    sub_B7076C(0LL, fieldName);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)paramInteger,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    data,
    (const MethodInfo_2FAF990 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
}


void __fastcall RequestBase__replaceField_32337068(
        RequestBase_o *this,
        System_String_o *fieldName,
        int64_t data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1
  System_Xml_Schema_XmlSchemaObject_o *v9; // x2
  int64_t v10; // [xsp+8h] [xbp-18h] BYREF

  v10 = data;
  if ( (byte_43558FA & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43558FA = 1;
  }
  paramString = this->fields.paramString;
  v7 = System_Int64__ToString((int64_t)&v10, 0LL);
  if ( !paramString )
    sub_B7076C(v7, v8);
  if ( v7 )
    v9 = (System_Xml_Schema_XmlSchemaObject_o *)v7;
  else
    v9 = (System_Xml_Schema_XmlSchemaObject_o *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    v9,
    (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall RequestBase__replaceField_32337224(
        RequestBase_o *this,
        System_String_o *fieldName,
        float data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1
  System_Xml_Schema_XmlSchemaObject_o *v9; // x2
  float v10; // [xsp+Ch] [xbp-14h] BYREF

  v10 = data;
  if ( (byte_43558FB & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43558FB = 1;
  }
  paramString = this->fields.paramString;
  v7 = System_Single__ToString(data, (const MethodInfo *)&v10);
  if ( !paramString )
    sub_B7076C(v7, v8);
  if ( v7 )
    v9 = (System_Xml_Schema_XmlSchemaObject_o *)v7;
  else
    v9 = (System_Xml_Schema_XmlSchemaObject_o *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    v9,
    (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall RequestBase__replaceField_32337380(
        RequestBase_o *this,
        System_String_o *fieldName,
        double data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1
  System_Xml_Schema_XmlSchemaObject_o *v9; // x2
  double v10; // [xsp+8h] [xbp-18h] BYREF

  v10 = data;
  if ( (byte_43558FC & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43558FC = 1;
  }
  paramString = this->fields.paramString;
  v7 = System_Double__ToString(data, (const MethodInfo *)&v10);
  if ( !paramString )
    sub_B7076C(v7, v8);
  if ( v7 )
    v9 = (System_Xml_Schema_XmlSchemaObject_o *)v7;
  else
    v9 = (System_Xml_Schema_XmlSchemaObject_o *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    v9,
    (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall RequestBase__replaceField_32337536(
        RequestBase_o *this,
        System_String_o *fieldName,
        System_String_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0

  if ( (byte_43558FD & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    byte_43558FD = 1;
  }
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_B7076C(0LL, fieldName);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    (System_Xml_Schema_XmlSchemaObject_o *)data,
    (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall RequestBase__replaceField_32337644(
        RequestBase_o *this,
        System_String_o *fieldName,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_o *v7; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x8

  if ( (byte_43558FE & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_B70694(&JsonManager_TypeInfo);
    byte_43558FE = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v7 = JsonManager__toJson(data, 0, 0, 0LL);
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_B7076C(v7, v8);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)paramString,
    (System_Xml_XmlQualifiedName_o *)fieldName,
    (System_Xml_Schema_XmlSchemaObject_o *)v7,
    (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
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