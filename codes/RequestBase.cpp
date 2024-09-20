void __fastcall RequestBase___ctor(RequestBase_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_Dictionary_object__object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5CA9C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    byte_4A5CA9C = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v3,
    (const MethodInfo_31BD92C *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.paramInteger = (struct System_Collections_Generic_Dictionary_string__int__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.paramInteger, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v6,
    (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.paramString, (int32_t)v6, v7, v8);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RequestBase__AddSignatureField(RequestBase_o *this, const MethodInfo *method)
{
  if ( (byte_4A5CA9B & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&SignedData_TypeInfo);
    byte_4A5CA9B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__SetSignatureField(this, 0LL);
  if ( !SignedData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
  SignedData__RefillSigningData(3, 0LL);
}


void __fastcall RequestBase__ClearField(RequestBase_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *paramInteger; // x0

  if ( (byte_4A5CA86 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__Clear__);
    byte_4A5CA86 = 1;
  }
  paramInteger = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.paramInteger;
  if ( !paramInteger
    || (System_Collections_Generic_Dictionary_object__int___Clear(
          paramInteger,
          (const MethodInfo_31BE468 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__),
        (paramInteger = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.paramString) == 0LL) )
  {
    sub_1B8880C(paramInteger, method);
  }
  System_Collections_Generic_Dictionary_object__object___Clear(
    (System_Collections_Generic_Dictionary_object__object__o *)paramInteger,
    (const MethodInfo_31C7350 *)Method_System_Collections_Generic_Dictionary_string__string__Clear__);
}


void __fastcall RequestBase__ClearParameter(RequestBase_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  System_String_o *v4; // x0
  System_String_o *v5; // x19

  if ( (byte_4A5CA98 & 1) == 0 )
  {
    sub_1B885B0(&ManagerConfig_TypeInfo);
    byte_4A5CA98 = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
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
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  System_Byte_array *v18; // x21
  System_IO_MemoryStream_c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0

  if ( (byte_4A5CA9A & 1) == 0 )
  {
    sub_1B885B0(&System_IO_Compression_GZipStream_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_IO_MemoryStream_TypeInfo);
    sub_1B885B0(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    byte_4A5CA9A = 1;
  }
  v4 = (MiniMessagePack_MiniMessagePacker_o *)sub_1B887FC(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v4, 0LL);
  if ( !v4 )
    sub_1B8880C(v5, v6);
  v7 = MiniMessagePack_MiniMessagePacker__PackClass(v4, json, 0LL);
  v8 = (System_IO_MemoryStream_o *)sub_1B887FC(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v8, 0LL);
  v9 = (System_IO_Compression_GZipStream_o *)sub_1B887FC(System_IO_Compression_GZipStream_TypeInfo);
  System_IO_Compression_GZipStream___ctor_68907884(v9, (System_IO_Stream_o *)v8, 0, 0LL);
  if ( !v7 )
    sub_1B8880C(v10, v11);
  if ( !v9 )
    sub_1B8880C(v10, v11);
  ((void (__fastcall *)(System_IO_Compression_GZipStream_o *, System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))v9->klass->vtable._36_Write.method)(
    v9,
    v7,
    0LL,
    v7->max_length,
    v9->klass->vtable._37_Write.methodPtr);
  klass = v9->klass;
  v13 = *(unsigned __int16 *)(&v9->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v9->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v13;
      p_offset += 4;
      if ( !v13 )
        goto LABEL_10;
    }
    v15 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v15 = sub_1BDA590(v9, System_IDisposable_TypeInfo, 0LL);
  }
  v16 = (*(__int64 (__fastcall **)(System_IO_Compression_GZipStream_o *, _QWORD))v15)(v9, *(_QWORD *)(v15 + 8));
  if ( !v8 )
    sub_1B8880C(v16, v17);
  v18 = (System_Byte_array *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v8->klass->vtable._42_ToArray.method)(
                               v8,
                               v8->klass[1]._1.image);
  v19 = v8->klass;
  v20 = *(unsigned __int16 *)(&v8->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v8->klass->_2.bitflags2 + 3) )
  {
    v21 = &v19->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v21 - 1) != System_IDisposable_TypeInfo )
    {
      --v20;
      v21 += 4;
      if ( !v20 )
        goto LABEL_17;
    }
    v22 = (__int64)(&v19->vtable._0_Equals.method + 2 * *v21);
  }
  else
  {
LABEL_17:
    v22 = sub_1BDA590(v8, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v22)(v8, *(_QWORD *)(v22 + 8));
  return v18;
}


bool __fastcall RequestBase__ReadParameter(RequestBase_o *this, bool isRefreshTime, const MethodInfo *method)
{
  ManagerConfig_c *v5; // x0
  bool v6; // w20
  System_String_o *v8; // x0
  System_String_o *v9; // x19
  System_IO_Stream_o *v10; // x22
  System_IO_BinaryReader_o *v11; // x19
  const MethodInfo *v12; // x1
  __int64 v13; // x0
  __int64 v14; // x1
  int v15; // w23
  int v16; // w22
  Il2CppObject *v17; // x24
  __int64 v18; // x1
  Il2CppObject *v19; // x2
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0
  Il2CppObject *v21; // x23
  __int64 v22; // x1
  int32_t v23; // w2
  struct System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0
  System_IO_BinaryReader_c *klass; // x8
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 v28; // x0

  if ( (byte_4A5CA96 & 1) == 0 )
  {
    sub_1B885B0(&System_IO_BinaryReader_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5CA96 = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
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
  v11 = (System_IO_BinaryReader_o *)sub_1B887FC(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v11, v10, 0LL);
  RequestBase__ClearField(this, v12);
  if ( !v11 )
    sub_1B8880C(v13, v14);
  v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v11->klass->vtable._15_ReadInt32.method)(
          v11,
          v11->klass->vtable._16_ReadUInt32.methodPtr);
  v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v11->klass->vtable._15_ReadInt32.method)(
          v11,
          v11->klass->vtable._16_ReadUInt32.methodPtr);
  if ( v15 >= 1 )
  {
    do
    {
      v17 = (Il2CppObject *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v11->klass->vtable._22_ReadString.method)(
                              v11,
                              v11->klass->vtable._23_ReadChars.methodPtr);
      v19 = (Il2CppObject *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v11->klass->vtable._22_ReadString.method)(
                              v11,
                              v11->klass->vtable._23_ReadChars.methodPtr);
      paramString = this->fields.paramString;
      if ( !paramString )
        sub_1B8880C(0LL, v18);
      System_Collections_Generic_Dictionary_object__object___Add(
        (System_Collections_Generic_Dictionary_object__object__o *)paramString,
        v17,
        v19,
        (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
      --v15;
    }
    while ( v15 );
  }
  if ( v16 >= 1 )
  {
    do
    {
      v21 = (Il2CppObject *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v11->klass->vtable._22_ReadString.method)(
                              v11,
                              v11->klass->vtable._23_ReadChars.methodPtr);
      v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v11->klass->vtable._15_ReadInt32.method)(
              v11,
              v11->klass->vtable._16_ReadUInt32.methodPtr);
      paramInteger = this->fields.paramInteger;
      if ( !paramInteger )
        sub_1B8880C(0LL, v22);
      System_Collections_Generic_Dictionary_object__int___Add(
        (System_Collections_Generic_Dictionary_object__int__o *)paramInteger,
        v21,
        v23,
        (const MethodInfo_31BE2E0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
      --v16;
    }
    while ( v16 );
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__ReplaceBaseField(this, isRefreshTime, 0LL);
  v6 = 1;
  klass = v11->klass;
  v26 = *(unsigned __int16 *)(&v11->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v11->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      p_offset += 4;
      if ( !v26 )
        goto LABEL_23;
    }
    v28 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_23:
    v28 = sub_1BDA590(v11, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v28)(v11, *(_QWORD *)(v28 + 8));
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

  if ( (byte_4A5CA99 & 1) == 0 )
  {
    sub_1B885B0(&byte___TypeInfo);
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&System_IO_Compression_GZipStream_TypeInfo);
    sub_1B885B0(&System_IO_MemoryStream_TypeInfo);
    this = (RequestBase_o *)sub_1B885B0(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    byte_4A5CA99 = 1;
  }
  if ( !obj )
    goto LABEL_15;
  v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo *))obj->klass->vtable[3].method)(
                            obj,
                            obj->klass->vtable[4].methodPtr,
                            method);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v5 = System_Convert__FromBase64String(v4, 0LL);
  v6 = sub_1B88658(byte___TypeInfo, 1024LL);
  v7 = (System_IO_MemoryStream_o *)sub_1B887FC(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_61851044(v7, v5, 0LL);
  v8 = (System_IO_Compression_GZipStream_o *)sub_1B887FC(System_IO_Compression_GZipStream_TypeInfo);
  System_IO_Compression_GZipStream___ctor(v8, (System_IO_Stream_o *)v7, 0, 0LL);
  v9 = (System_IO_MemoryStream_o *)sub_1B887FC(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v9, 0LL);
  if ( !v6 || !v8 )
    goto LABEL_15;
  this = (RequestBase_o *)((__int64 (__fastcall *)(System_IO_Compression_GZipStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v8->klass->vtable._33_Read.method)(
                            v8,
                            v6,
                            0LL,
                            *(unsigned int *)(v6 + 24),
                            v8->klass->vtable._34_Read.methodPtr);
  if ( (int)this >= 1 )
  {
    v10 = (unsigned int)this;
    while ( v9 )
    {
      ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, __int64, Il2CppMethodPointer))v9->klass->vtable._36_Write.method)(
        v9,
        v6,
        0LL,
        v10,
        v9->klass->vtable._37_Write.methodPtr);
      this = (RequestBase_o *)((__int64 (__fastcall *)(System_IO_Compression_GZipStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v8->klass->vtable._33_Read.method)(
                                v8,
                                v6,
                                0LL,
                                *(unsigned int *)(v6 + 24),
                                v8->klass->vtable._34_Read.methodPtr);
      v10 = (unsigned int)this;
      if ( (int)this <= 0 )
        goto LABEL_12;
    }
LABEL_15:
    sub_1B8880C(this, obj);
  }
LABEL_12:
  v11 = (MiniMessagePack_MiniMessagePacker_o *)sub_1B887FC(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v11, 0LL);
  if ( !v9 )
    goto LABEL_15;
  this = (RequestBase_o *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v9->klass->vtable._42_ToArray.method)(
                            v9,
                            v9->klass[1]._1.image);
  if ( !v11 )
    goto LABEL_15;
  return MiniMessagePack_MiniMessagePacker__Unpack_37060128(v11, (System_Byte_array *)this, 0LL);
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
  struct System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0
  unsigned int v12; // w0
  __int64 v13; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v14; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  __int64 v16; // x1
  Il2CppObject *currentKey; // x21
  __int64 v18; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v19; // x0
  Il2CppObject *Item; // x0
  __int64 v21; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *v22; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v23; // x0
  __int64 v24; // x1
  Il2CppObject *v25; // x21
  __int64 v26; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *v27; // x0
  unsigned int v28; // w0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v30; // x9
  int32_t *p_offset; // x10
  __int64 v32; // x0
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v33; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v34; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v35; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_4A5CA97 & 1) == 0 )
  {
    sub_1B885B0(&System_IO_BinaryWriter_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__get_Keys__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__get_Keys__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__get_Current__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    byte_4A5CA97 = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  memset(&v35, 0, sizeof(v35));
  memset(&v34, 0, sizeof(v34));
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
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
      v6 = (System_IO_BinaryWriter_o *)sub_1B887FC(System_IO_BinaryWriter_TypeInfo);
      System_IO_BinaryWriter___ctor_61945196(v6, v5, 0LL);
      paramString = this->fields.paramString;
      if ( !paramString )
        sub_1B8880C(0LL, v7);
      Count = System_Collections_Generic_Dictionary_object__object___get_Count(
                (System_Collections_Generic_Dictionary_object__object__o *)paramString,
                (const MethodInfo_31C6E98 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
      if ( !v6 )
        sub_1B8880C(Count, (unsigned int)Count);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v6->klass->vtable._17_Write.method)(
        v6,
        (unsigned int)Count,
        v6->klass->vtable._18_Write.methodPtr);
      paramInteger = this->fields.paramInteger;
      if ( !paramInteger )
        sub_1B8880C(0LL, v10);
      v12 = System_Collections_Generic_Dictionary_object__int___get_Count(
              (System_Collections_Generic_Dictionary_object__int__o *)paramInteger,
              (const MethodInfo_31BDFB0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Count__);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v6->klass->vtable._17_Write.method)(
        v6,
        v12,
        v6->klass->vtable._18_Write.methodPtr);
      v14 = this->fields.paramString;
      if ( !v14 )
        sub_1B8880C(0LL, v13);
      Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
               (System_Collections_Generic_Dictionary_object__object__o *)v14,
               (const MethodInfo_31C6EA8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Keys__);
      if ( !Keys )
        sub_1B8880C(0LL, v16);
      System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator(
        &v33,
        Keys,
        (const MethodInfo_3422D74 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__);
      v35 = v33;
      while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext(
                &v35,
                (const MethodInfo_32C510C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__) )
      {
        currentKey = v35.fields._currentKey;
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppObject *, void *))v6->klass->vtable._22_Write.method)(
          v6,
          v35.fields._currentKey,
          v6->klass[1]._1.image);
        v19 = this->fields.paramString;
        if ( !v19 )
          sub_1B8880C(0LL, v18);
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)v19,
                 currentKey,
                 (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppObject *, void *))v6->klass->vtable._22_Write.method)(
          v6,
          Item,
          v6->klass[1]._1.image);
      }
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose(
        &v35,
        (const MethodInfo_32C5108 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__);
      v22 = this->fields.paramInteger;
      if ( !v22 )
        sub_1B8880C(0LL, v21);
      v23 = System_Collections_Generic_Dictionary_object__int___get_Keys(
              (System_Collections_Generic_Dictionary_object__int__o *)v22,
              (const MethodInfo_31BDFC0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Keys__);
      if ( !v23 )
        sub_1B8880C(0LL, v24);
      System_Collections_Generic_Dictionary_KeyCollection_object__int___GetEnumerator(
        &v33,
        v23,
        (const MethodInfo_3421B50 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__);
      v34 = v33;
      while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___MoveNext(
                &v34,
                (const MethodInfo_32C28F4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__) )
      {
        v25 = v34.fields._currentKey;
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppObject *, void *))v6->klass->vtable._22_Write.method)(
          v6,
          v34.fields._currentKey,
          v6->klass[1]._1.image);
        v27 = this->fields.paramInteger;
        if ( !v27 )
          sub_1B8880C(0LL, v26);
        v28 = System_Collections_Generic_Dictionary_object__int___get_Item(
                (System_Collections_Generic_Dictionary_object__int__o *)v27,
                v25,
                (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v6->klass->vtable._17_Write.method)(
          v6,
          v28,
          v6->klass->vtable._18_Write.methodPtr);
      }
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___Dispose(
        &v34,
        (const MethodInfo_32C28F0 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__);
      klass = v6->klass;
      v30 = *(unsigned __int16 *)(&v6->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v6->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v30;
          p_offset += 4;
          if ( !v30 )
            goto LABEL_26;
        }
        v32 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_26:
        v32 = sub_1BDA590(v6, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v32)(v6, *(_QWORD *)(v32 + 8));
    }
  }
}


void __fastcall RequestBase__addBaseField(RequestBase_o *this, const MethodInfo *method)
{
  if ( (byte_4A5CA8D & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5CA8D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__SetBaseField(this, 0LL);
}


void __fastcall RequestBase__addDeviceInfoField(RequestBase_o *this, const MethodInfo *method)
{
  if ( (byte_4A5CA8E & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5CA8E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__SetDeviceInfoField(this, 0LL);
}


void __fastcall RequestBase__addField(
        RequestBase_o *this,
        System_String_o *fieldName,
        int32_t data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0

  if ( (byte_4A5CA87 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    byte_4A5CA87 = 1;
  }
  paramInteger = this->fields.paramInteger;
  if ( !paramInteger )
    sub_1B8880C(0LL, fieldName);
  System_Collections_Generic_Dictionary_object__int___Add(
    (System_Collections_Generic_Dictionary_object__int__o *)paramInteger,
    (Il2CppObject *)fieldName,
    data,
    (const MethodInfo_31BE2E0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
}


void __fastcall RequestBase__addField_41126952(
        RequestBase_o *this,
        System_String_o *fieldName,
        System_String_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0

  if ( (byte_4A5CA8B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    byte_4A5CA8B = 1;
  }
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_1B8880C(0LL, fieldName);
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    (Il2CppObject *)data,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void __fastcall RequestBase__addField_41133280(
        RequestBase_o *this,
        System_String_o *fieldName,
        int64_t data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x2
  int64_t v10; // [xsp+8h] [xbp-28h] BYREF

  v10 = data;
  if ( (byte_4A5CA88 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5CA88 = 1;
  }
  paramString = this->fields.paramString;
  v7 = System_Int64__ToString((int64_t)&v10, 0LL);
  if ( !paramString )
    sub_1B8880C(v7, v8);
  if ( v7 )
    v9 = (Il2CppObject *)v7;
  else
    v9 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v9,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void __fastcall RequestBase__addField_41136012(
        RequestBase_o *this,
        System_String_o *fieldName,
        Il2CppObject *data,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x8

  if ( (byte_4A5CA8C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_1B885B0(&JsonManager_TypeInfo);
    byte_4A5CA8C = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v7 = (Il2CppObject *)JsonManager__toJson(data, 0, 0, 0LL);
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_1B8880C(v7, v8);
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v7,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void __fastcall RequestBase__addField_41178648(
        RequestBase_o *this,
        System_String_o *fieldName,
        float data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x2
  float v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = data;
  if ( (byte_4A5CA89 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5CA89 = 1;
  }
  paramString = this->fields.paramString;
  v7 = System_Single__ToString(data, (const MethodInfo *)&v10);
  if ( !paramString )
    sub_1B8880C(v7, v8);
  if ( v7 )
    v9 = (Il2CppObject *)v7;
  else
    v9 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v9,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void __fastcall RequestBase__addField_41178800(
        RequestBase_o *this,
        System_String_o *fieldName,
        double data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x2
  double v10; // [xsp+8h] [xbp-28h] BYREF

  v10 = data;
  if ( (byte_4A5CA8A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5CA8A = 1;
  }
  paramString = this->fields.paramString;
  v7 = System_Double__ToString(data, (const MethodInfo *)&v10);
  if ( !paramString )
    sub_1B8880C(v7, v8);
  if ( v7 )
    v9 = (Il2CppObject *)v7;
  else
    v9 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v9,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


bool __fastcall RequestBase__backgroundErrorRequest(
        RequestBase_o *this,
        System_String_o *errorCode,
        const MethodInfo *method)
{
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8

  if ( (byte_4A5CA82 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5CA82 = 1;
  }
  CallBack = this->fields.CallBack;
  if ( CallBack )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
      CallBack->fields.original_method_info,
      StringLiteral_22055/*"ng"*/,
      *(_QWORD *)&CallBack->fields.extra_arg);
  return 1;
}


void __fastcall RequestBase__backgroundErrorRetry(RequestBase_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall RequestBase__beginRequest(RequestBase_o *this, const MethodInfo *method)
{
  if ( (byte_4A5CA84 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5CA84 = 1;
  }
  RequestBase__addBaseField(this, method);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart(this, 0LL);
}


bool __fastcall RequestBase__beginRetryRequest(RequestBase_o *this, bool isRefreshTime, const MethodInfo *method)
{
  bool Parameter; // w20

  if ( (byte_4A5CA85 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5CA85 = 1;
  }
  Parameter = RequestBase__ReadParameter(this, isRefreshTime, method);
  if ( Parameter )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    NetworkManager__RequestStart(this, 0LL);
  }
  return Parameter;
}


bool __fastcall RequestBase__checkExpirationDate(RequestBase_o *this, const MethodInfo *method)
{
  return 0;
}


void __fastcall RequestBase__completed(RequestBase_o *this, System_String_o *result, const MethodInfo *method)
{
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8

  CallBack = this->fields.CallBack;
  if ( CallBack )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
      CallBack->fields.original_method_info,
      result,
      *(_QWORD *)&CallBack->fields.extra_arg);
}


bool __fastcall RequestBase__errorRequest(RequestBase_o *this, System_String_o *errorCode, const MethodInfo *method)
{
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8

  if ( (byte_4A5CA83 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5CA83 = 1;
  }
  CallBack = this->fields.CallBack;
  if ( CallBack )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
      CallBack->fields.original_method_info,
      StringLiteral_22055/*"ng"*/,
      *(_QWORD *)&CallBack->fields.extra_arg);
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
  System_Collections_Generic_SortedDictionary_TKey__TValue__o *v6; // x22
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_object__object__o *paramString; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v12; // x0
  Il2CppObject *currentKey; // x22
  Il2CppObject *Item; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v17; // x0
  System_Collections_Generic_SortedDictionary_TKey__TValue__o *v18; // x23
  Il2CppObject *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0
  Il2CppObject *v23; // x22
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *v27; // x0
  System_Collections_Generic_SortedDictionary_TKey__TValue__o *v28; // x23
  int32_t v29; // w24
  Il2CppObject *v30; // x0
  __int64 v31; // x1
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v33; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v34; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v35; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4A5CA95 & 1) == 0 )
  {
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__get_Keys__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__get_Keys__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_SortedDictionary_string__string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_SortedDictionary_string__string___ctor__);
    sub_1B885B0(&System_Collections_Generic_SortedDictionary_string__string__TypeInfo);
    sub_1B885B0(&UnityEngine_WWWForm_TypeInfo);
    byte_4A5CA95 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  memset(&v34, 0, sizeof(v34));
  v5 = (UnityEngine_WWWForm_o *)sub_1B887FC(UnityEngine_WWWForm_TypeInfo);
  UnityEngine_WWWForm___ctor(v5, 0LL);
  v6 = (System_Collections_Generic_SortedDictionary_TKey__TValue__o *)sub_1B887FC(System_Collections_Generic_SortedDictionary_string__string__TypeInfo);
  System_Collections_Generic_SortedDictionary_object__object____ctor(
    v6,
    (const MethodInfo_3739CA8 *)Method_System_Collections_Generic_SortedDictionary_string__string___ctor__);
  *authParams = (System_Collections_Generic_SortedDictionary_string__string__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)authParams, (int32_t)v6, v7, v8);
  paramString = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.paramString;
  if ( !paramString )
    goto LABEL_32;
  paramString = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Keys(
                                                                             paramString,
                                                                             (const MethodInfo_31C6EA8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Keys__);
  if ( !paramString )
    goto LABEL_32;
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator(
    &v33,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)paramString,
    (const MethodInfo_3422D74 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__);
  v35 = v33;
  while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext(
            &v35,
            (const MethodInfo_32C510C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__) )
  {
    v12 = this->fields.paramString;
    if ( !v12 )
      sub_1B8880C(0LL, v11);
    currentKey = v35.fields._currentKey;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)v12,
             v35.fields._currentKey,
             (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    if ( !v5 )
      sub_1B8880C(Item, v15);
    UnityEngine_WWWForm__AddField(v5, (System_String_o *)currentKey, (System_String_o *)Item, 0LL);
    v17 = this->fields.paramString;
    if ( !v17 )
      sub_1B8880C(0LL, v16);
    v18 = (System_Collections_Generic_SortedDictionary_TKey__TValue__o *)*authParams;
    v19 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)v17,
            currentKey,
            (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    if ( !v18 )
      sub_1B8880C(v19, v20);
    System_Collections_Generic_SortedDictionary_object__object___Add(
      v18,
      currentKey,
      v19,
      (const MethodInfo_373A250 *)Method_System_Collections_Generic_SortedDictionary_string__string__Add__);
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose(
    &v35,
    (const MethodInfo_32C5108 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__);
  paramString = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.paramInteger;
  if ( !paramString
    || (paramString = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__int___get_Keys(
                                                                                   (System_Collections_Generic_Dictionary_object__int__o *)paramString,
                                                                                   (const MethodInfo_31BDFC0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Keys__)) == 0LL )
  {
LABEL_32:
    sub_1B8880C(paramString, v9);
  }
  System_Collections_Generic_Dictionary_KeyCollection_object__int___GetEnumerator(
    &v33,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)paramString,
    (const MethodInfo_3421B50 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__);
  v34 = v33;
  while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___MoveNext(
            &v34,
            (const MethodInfo_32C28F4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__) )
  {
    paramInteger = this->fields.paramInteger;
    if ( !paramInteger )
      sub_1B8880C(0LL, v21);
    v23 = v34.fields._currentKey;
    v24 = System_Collections_Generic_Dictionary_object__int___get_Item(
            (System_Collections_Generic_Dictionary_object__int__o *)paramInteger,
            v34.fields._currentKey,
            (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    if ( !v5 )
      sub_1B8880C(v24, v25);
    UnityEngine_WWWForm__AddField_71944328(v5, (System_String_o *)v23, v24, 0LL);
    v27 = this->fields.paramInteger;
    if ( !v27 )
      sub_1B8880C(0LL, v26);
    v28 = (System_Collections_Generic_SortedDictionary_TKey__TValue__o *)*authParams;
    v29 = System_Collections_Generic_Dictionary_object__int___get_Item(
            (System_Collections_Generic_Dictionary_object__int__o *)v27,
            v23,
            (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    v30 = (Il2CppObject *)System_Convert__ToString_62372612(v29, 0LL);
    if ( !v28 )
      sub_1B8880C(v30, v31);
    System_Collections_Generic_SortedDictionary_object__object___Add(
      v28,
      v23,
      v30,
      (const MethodInfo_373A250 *)Method_System_Collections_Generic_SortedDictionary_string__string__Add__);
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___Dispose(
    &v34,
    (const MethodInfo_32C28F0 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__);
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

  if ( (byte_4A5CA8F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    byte_4A5CA8F = 1;
  }
  paramInteger = this->fields.paramInteger;
  if ( !paramInteger )
    sub_1B8880C(0LL, fieldName);
  System_Collections_Generic_Dictionary_object__int___set_Item(
    (System_Collections_Generic_Dictionary_object__int__o *)paramInteger,
    (Il2CppObject *)fieldName,
    data,
    (const MethodInfo_31BE2CC *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
}


void __fastcall RequestBase__replaceField_41212656(
        RequestBase_o *this,
        System_String_o *fieldName,
        int64_t data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x2
  int64_t v10; // [xsp+8h] [xbp-28h] BYREF

  v10 = data;
  if ( (byte_4A5CA90 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5CA90 = 1;
  }
  paramString = this->fields.paramString;
  v7 = System_Int64__ToString((int64_t)&v10, 0LL);
  if ( !paramString )
    sub_1B8880C(v7, v8);
  if ( v7 )
    v9 = (Il2CppObject *)v7;
  else
    v9 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v9,
    (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall RequestBase__replaceField_41212808(
        RequestBase_o *this,
        System_String_o *fieldName,
        float data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x2
  float v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = data;
  if ( (byte_4A5CA91 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5CA91 = 1;
  }
  paramString = this->fields.paramString;
  v7 = System_Single__ToString(data, (const MethodInfo *)&v10);
  if ( !paramString )
    sub_1B8880C(v7, v8);
  if ( v7 )
    v9 = (Il2CppObject *)v7;
  else
    v9 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v9,
    (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall RequestBase__replaceField_41212960(
        RequestBase_o *this,
        System_String_o *fieldName,
        double data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x2
  double v10; // [xsp+8h] [xbp-28h] BYREF

  v10 = data;
  if ( (byte_4A5CA92 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5CA92 = 1;
  }
  paramString = this->fields.paramString;
  v7 = System_Double__ToString(data, (const MethodInfo *)&v10);
  if ( !paramString )
    sub_1B8880C(v7, v8);
  if ( v7 )
    v9 = (Il2CppObject *)v7;
  else
    v9 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v9,
    (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall RequestBase__replaceField_41213112(
        RequestBase_o *this,
        System_String_o *fieldName,
        System_String_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0

  if ( (byte_4A5CA93 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    byte_4A5CA93 = 1;
  }
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_1B8880C(0LL, fieldName);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    (Il2CppObject *)data,
    (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall RequestBase__replaceField_41213216(
        RequestBase_o *this,
        System_String_o *fieldName,
        Il2CppObject *data,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x8

  if ( (byte_4A5CA94 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_1B885B0(&JsonManager_TypeInfo);
    byte_4A5CA94 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v7 = (Il2CppObject *)JsonManager__toJson(data, 0, 0, 0LL);
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_1B8880C(v7, v8);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v7,
    (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall RequestBase__requestCompleted(
        RequestBase_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8

  CallBack = this->fields.CallBack;
  if ( CallBack )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))CallBack->fields.m_target)(
      CallBack->fields.original_method_info,
      0LL,
      *(_QWORD *)&CallBack->fields.extra_arg);
}