void RequestBase___ctor(RequestBase_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_Dictionary_object__object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C44B7B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    byte_4C44B7B = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C372A4(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v3,
    (const MethodInfo_3459F4C *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.paramInteger = (struct System_Collections_Generic_Dictionary_string__int__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.paramInteger, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v6,
    (const MethodInfo_3462C80 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.paramString, (int32_t)v6, v7, v8);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RequestBase__AddSignatureField(RequestBase_o *this, const MethodInfo *method)
{
  if ( (byte_4C44B7A & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&SignedData_TypeInfo);
    byte_4C44B7A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__SetSignatureField(this, 0);
  if ( !SignedData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo);
  SignedData__RefillSigningData(3, 0);
}


void RequestBase__ClearField(RequestBase_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *paramInteger; // x0

  if ( (byte_4C44B65 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__Clear__);
    byte_4C44B65 = 1;
  }
  paramInteger = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.paramInteger;
  if ( !paramInteger
    || (System_Collections_Generic_Dictionary_object__int___Clear(
          paramInteger,
          (const MethodInfo_345AA88 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__),
        (paramInteger = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.paramString) == 0) )
  {
    sub_1C372B4(paramInteger);
  }
  System_Collections_Generic_Dictionary_object__object___Clear(
    (System_Collections_Generic_Dictionary_object__object__o *)paramInteger,
    (const MethodInfo_34637B8 *)Method_System_Collections_Generic_Dictionary_string__string__Clear__);
}


void RequestBase__ClearParameter(RequestBase_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  System_String_o *v4; // x0
  System_String_o *v5; // x19

  if ( (byte_4C44B77 & 1) == 0 )
  {
    sub_1C37058(&ManagerConfig_TypeInfo);
    byte_4C44B77 = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( !v3->static_fields->UseMock )
  {
    v4 = (System_String_o *)((__int64 (__fastcall *)(RequestBase_o *, const MethodInfo *))this->klass->vtable._16_getParameterFileName.methodPtr)(
                              this,
                              this->klass->vtable._16_getParameterFileName.method);
    if ( v4 )
    {
      v5 = v4;
      if ( System_IO_File__Exists(v4, 0) )
        System_IO_File__Delete(v5, 0);
    }
  }
}


System_Byte_array *RequestBase__PackToMessagePack(RequestBase_o *this, Il2CppObject *json, const MethodInfo *method)
{
  MiniMessagePack_MiniMessagePacker_o *v4; // x20
  __int64 v5; // x0
  System_Byte_array *v6; // x21
  System_IO_MemoryStream_o *v7; // x19
  System_IO_Compression_GZipStream_o *v8; // x20
  __int64 v9; // x0
  System_IO_Compression_GZipStream_c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  System_Byte_array *v15; // x21
  System_IO_MemoryStream_c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0

  if ( (byte_4C44B79 & 1) == 0 )
  {
    sub_1C37058(&System_IO_Compression_GZipStream_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_IO_MemoryStream_TypeInfo);
    sub_1C37058(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    byte_4C44B79 = 1;
  }
  v4 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C372A4(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v4, 0);
  if ( !v4 )
    sub_1C372B4(v5);
  v6 = MiniMessagePack_MiniMessagePacker__PackClass(v4, json, 0);
  v7 = (System_IO_MemoryStream_o *)sub_1C372A4(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v7, 0);
  v8 = (System_IO_Compression_GZipStream_o *)sub_1C372A4(System_IO_Compression_GZipStream_TypeInfo);
  System_IO_Compression_GZipStream___ctor_70542008(v8, (System_IO_Stream_o *)v7, 0, 0);
  if ( !v6 )
    sub_1C372B4(v9);
  if ( !v8 )
    sub_1C372B4(v9);
  ((void (__fastcall *)(System_IO_Compression_GZipStream_o *, System_Byte_array *, _QWORD, _QWORD, const MethodInfo *))v8->klass->vtable._34_Write.methodPtr)(
    v8,
    v6,
    0,
    LODWORD(v6->max_length),
    v8->klass->vtable._34_Write.method);
  klass = v8->klass;
  v11 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v11;
      p_offset += 4;
      if ( !v11 )
        goto LABEL_10;
    }
    v13 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_10:
    v13 = sub_1C87870(v8, System_IDisposable_TypeInfo, 0);
  }
  v14 = (*(__int64 (__fastcall **)(System_IO_Compression_GZipStream_o *, _QWORD))v13)(v8, *(_QWORD *)(v13 + 8));
  if ( !v7 )
    sub_1C372B4(v14);
  v15 = (System_Byte_array *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v7->klass->vtable._40_ToArray.methodPtr)(
                               v7,
                               v7->klass->vtable._40_ToArray.method);
  v16 = v7->klass;
  v17 = *(unsigned __int16 *)&v7->klass->_2.rank;
  if ( *(_WORD *)&v7->klass->_2.rank )
  {
    v18 = &v16->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v18 - 1) != System_IDisposable_TypeInfo )
    {
      --v17;
      v18 += 4;
      if ( !v17 )
        goto LABEL_17;
    }
    v19 = (__int64)&v16->vtable + 16 * *v18;
  }
  else
  {
LABEL_17:
    v19 = sub_1C87870(v7, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v19)(v7, *(_QWORD *)(v19 + 8));
  return v15;
}


bool RequestBase__ReadParameter(RequestBase_o *this, bool isRefreshTime, const MethodInfo *method)
{
  ManagerConfig_c *v5; // x0
  bool v6; // w20
  System_String_o *v8; // x0
  System_String_o *v9; // x19
  System_IO_Stream_o *v10; // x22
  System_IO_BinaryReader_o *v11; // x19
  const MethodInfo *v12; // x1
  __int64 v13; // x0
  int v14; // w23
  int v15; // w22
  Il2CppObject *v16; // x24
  Il2CppObject *v17; // x2
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0
  Il2CppObject *v19; // x23
  int32_t v20; // w2
  struct System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0
  System_IO_BinaryReader_c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 v25; // x0

  if ( (byte_4C44B75 & 1) == 0 )
  {
    sub_1C37058(&System_IO_BinaryReader_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C44B75 = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( v5->static_fields->UseMock )
    return 0;
  v8 = (System_String_o *)((__int64 (__fastcall *)(RequestBase_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._16_getParameterFileName.methodPtr)(
                            this,
                            this->klass->vtable._16_getParameterFileName.method,
                            method);
  if ( !v8 )
    return 0;
  v9 = v8;
  if ( !System_IO_File__Exists(v8, 0) )
    return 0;
  v10 = (System_IO_Stream_o *)System_IO_File__OpenRead(v9, 0);
  v11 = (System_IO_BinaryReader_o *)sub_1C372A4(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v11, v10, 0);
  RequestBase__ClearField(this, v12);
  if ( !v11 )
    sub_1C372B4(v13);
  v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v11->klass->vtable._15_ReadInt32.methodPtr)(
          v11,
          v11->klass->vtable._15_ReadInt32.method);
  v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v11->klass->vtable._15_ReadInt32.methodPtr)(
          v11,
          v11->klass->vtable._15_ReadInt32.method);
  if ( v14 >= 1 )
  {
    do
    {
      v16 = (Il2CppObject *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v11->klass->vtable._22_ReadString.methodPtr)(
                              v11,
                              v11->klass->vtable._22_ReadString.method);
      v17 = (Il2CppObject *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v11->klass->vtable._22_ReadString.methodPtr)(
                              v11,
                              v11->klass->vtable._22_ReadString.method);
      paramString = this->fields.paramString;
      if ( !paramString )
        sub_1C372B4(0);
      System_Collections_Generic_Dictionary_object__object___Add(
        (System_Collections_Generic_Dictionary_object__object__o *)paramString,
        v16,
        v17,
        (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
      --v14;
    }
    while ( v14 );
  }
  if ( v15 >= 1 )
  {
    do
    {
      v19 = (Il2CppObject *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v11->klass->vtable._22_ReadString.methodPtr)(
                              v11,
                              v11->klass->vtable._22_ReadString.method);
      v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v11->klass->vtable._15_ReadInt32.methodPtr)(
              v11,
              v11->klass->vtable._15_ReadInt32.method);
      paramInteger = this->fields.paramInteger;
      if ( !paramInteger )
        sub_1C372B4(0);
      System_Collections_Generic_Dictionary_object__int___Add(
        (System_Collections_Generic_Dictionary_object__int__o *)paramInteger,
        v19,
        v20,
        (const MethodInfo_345A900 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
      --v15;
    }
    while ( v15 );
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__ReplaceBaseField(this, isRefreshTime, 0);
  v6 = 1;
  klass = v11->klass;
  v23 = *(unsigned __int16 *)&v11->klass->_2.rank;
  if ( *(_WORD *)&v11->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v23;
      p_offset += 4;
      if ( !v23 )
        goto LABEL_23;
    }
    v25 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_23:
    v25 = sub_1C87870(v11, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v25)(v11, *(_QWORD *)(v25 + 8));
  return v6;
}


Il2CppObject *RequestBase__UnpackToMessagePack(RequestBase_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  System_String_o *v4; // x19
  System_Byte_array *v5; // x20
  __int64 v6; // x19
  System_IO_MemoryStream_o *v7; // x22
  System_IO_Compression_GZipStream_o *v8; // x21
  System_IO_MemoryStream_o *v9; // x20
  __int64 v10; // x3
  MiniMessagePack_MiniMessagePacker_o *v11; // x19

  if ( (byte_4C44B78 & 1) == 0 )
  {
    sub_1C37058(&byte___TypeInfo);
    sub_1C37058(&System_Convert_TypeInfo);
    sub_1C37058(&System_IO_Compression_GZipStream_TypeInfo);
    sub_1C37058(&System_IO_MemoryStream_TypeInfo);
    this = (RequestBase_o *)sub_1C37058(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    byte_4C44B78 = 1;
  }
  if ( !obj )
    goto LABEL_15;
  v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *, const MethodInfo *))obj->klass->vtable[3].methodPtr)(
                            obj,
                            obj->klass->vtable[3].method,
                            method);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v5 = System_Convert__FromBase64String(v4, 0);
  v6 = sub_1C37100(byte___TypeInfo, 1024);
  v7 = (System_IO_MemoryStream_o *)sub_1C372A4(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_64384132(v7, v5, 0);
  v8 = (System_IO_Compression_GZipStream_o *)sub_1C372A4(System_IO_Compression_GZipStream_TypeInfo);
  System_IO_Compression_GZipStream___ctor(v8, (System_IO_Stream_o *)v7, 0, 0);
  v9 = (System_IO_MemoryStream_o *)sub_1C372A4(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v9, 0);
  if ( !v6 || !v8 )
    goto LABEL_15;
  this = (RequestBase_o *)((__int64 (__fastcall *)(System_IO_Compression_GZipStream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v8->klass->vtable._31_Read.methodPtr)(
                            v8,
                            v6,
                            0,
                            *(unsigned int *)(v6 + 24),
                            v8->klass->vtable._31_Read.method);
  if ( (int)this >= 1 )
  {
    v10 = (unsigned int)this;
    while ( v9 )
    {
      ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, __int64, const MethodInfo *))v9->klass->vtable._34_Write.methodPtr)(
        v9,
        v6,
        0,
        v10,
        v9->klass->vtable._34_Write.method);
      this = (RequestBase_o *)((__int64 (__fastcall *)(System_IO_Compression_GZipStream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v8->klass->vtable._31_Read.methodPtr)(
                                v8,
                                v6,
                                0,
                                *(unsigned int *)(v6 + 24),
                                v8->klass->vtable._31_Read.method);
      v10 = (unsigned int)this;
      if ( (int)this <= 0 )
        goto LABEL_12;
    }
LABEL_15:
    sub_1C372B4(this);
  }
LABEL_12:
  v11 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C372A4(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v11, 0);
  if ( !v9 )
    goto LABEL_15;
  this = (RequestBase_o *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v9->klass->vtable._40_ToArray.methodPtr)(
                            v9,
                            v9->klass->vtable._40_ToArray.method);
  if ( !v11 )
    goto LABEL_15;
  return MiniMessagePack_MiniMessagePacker__Unpack_39721084(v11, (System_Byte_array *)this, 0);
}


void RequestBase__WriteParameter(RequestBase_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  System_String_o *v4; // x0
  System_IO_Stream_o *v5; // x21
  System_IO_BinaryWriter_o *v6; // x19
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0
  __int64 Count; // x0
  struct System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0
  unsigned int v10; // w0
  struct System_Collections_Generic_Dictionary_string__string__o *v11; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  Il2CppObject *currentKey; // x21
  struct System_Collections_Generic_Dictionary_string__string__o *v14; // x0
  Il2CppObject *Item; // x0
  struct System_Collections_Generic_Dictionary_string__int__o *v16; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v17; // x0
  Il2CppObject *v18; // x21
  struct System_Collections_Generic_Dictionary_string__int__o *v19; // x0
  unsigned int v20; // w0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v25; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v26; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v27; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_4C44B76 & 1) == 0 )
  {
    sub_1C37058(&System_IO_BinaryWriter_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__get_Keys__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int__get_Keys__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__get_Current__);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__);
    sub_1C37058(&ManagerConfig_TypeInfo);
    byte_4C44B76 = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  memset(&v27, 0, sizeof(v27));
  memset(&v26, 0, sizeof(v26));
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( !v3->static_fields->UseMock )
  {
    v4 = (System_String_o *)((__int64 (__fastcall *)(RequestBase_o *, const MethodInfo *))this->klass->vtable._16_getParameterFileName.methodPtr)(
                              this,
                              this->klass->vtable._16_getParameterFileName.method);
    if ( v4 )
    {
      v5 = (System_IO_Stream_o *)System_IO_File__OpenWrite(v4, 0);
      v6 = (System_IO_BinaryWriter_o *)sub_1C372A4(System_IO_BinaryWriter_TypeInfo);
      System_IO_BinaryWriter___ctor_64472960(v6, v5, 0);
      paramString = this->fields.paramString;
      if ( !paramString )
        sub_1C372B4(0);
      Count = System_Collections_Generic_Dictionary_object__object___get_Count(
                (System_Collections_Generic_Dictionary_object__object__o *)paramString,
                (const MethodInfo_3463300 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
      if ( !v6 )
        sub_1C372B4(Count);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v6->klass->vtable._17_Write.methodPtr)(
        v6,
        (unsigned int)Count,
        v6->klass->vtable._17_Write.method);
      paramInteger = this->fields.paramInteger;
      if ( !paramInteger )
        sub_1C372B4(0);
      v10 = System_Collections_Generic_Dictionary_object__int___get_Count(
              (System_Collections_Generic_Dictionary_object__int__o *)paramInteger,
              (const MethodInfo_345A5D0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Count__);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v6->klass->vtable._17_Write.methodPtr)(
        v6,
        v10,
        v6->klass->vtable._17_Write.method);
      v11 = this->fields.paramString;
      if ( !v11 )
        sub_1C372B4(0);
      Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
               (System_Collections_Generic_Dictionary_object__object__o *)v11,
               (const MethodInfo_3463310 *)Method_System_Collections_Generic_Dictionary_string__string__get_Keys__);
      if ( !Keys )
        sub_1C372B4(0);
      System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator(
        &v25,
        Keys,
        (const MethodInfo_36C85B4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__);
      v27 = v25;
      while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext(
                &v27,
                (const MethodInfo_3560C80 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__) )
      {
        currentKey = v27.fields._currentKey;
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppObject *, const MethodInfo *))v6->klass->vtable._22_Write.methodPtr)(
          v6,
          v27.fields._currentKey,
          v6->klass->vtable._22_Write.method);
        v14 = this->fields.paramString;
        if ( !v14 )
          sub_1C372B4(0);
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)v14,
                 currentKey,
                 (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppObject *, const MethodInfo *))v6->klass->vtable._22_Write.methodPtr)(
          v6,
          Item,
          v6->klass->vtable._22_Write.method);
      }
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose(
        &v27,
        (const MethodInfo_3560C7C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__);
      v16 = this->fields.paramInteger;
      if ( !v16 )
        sub_1C372B4(0);
      v17 = System_Collections_Generic_Dictionary_object__int___get_Keys(
              (System_Collections_Generic_Dictionary_object__int__o *)v16,
              (const MethodInfo_345A5E0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Keys__);
      if ( !v17 )
        sub_1C372B4(0);
      System_Collections_Generic_Dictionary_KeyCollection_object__int___GetEnumerator(
        &v25,
        v17,
        (const MethodInfo_36C7390 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__);
      v26 = v25;
      while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___MoveNext(
                &v26,
                (const MethodInfo_355EA00 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__) )
      {
        v18 = v26.fields._currentKey;
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppObject *, const MethodInfo *))v6->klass->vtable._22_Write.methodPtr)(
          v6,
          v26.fields._currentKey,
          v6->klass->vtable._22_Write.method);
        v19 = this->fields.paramInteger;
        if ( !v19 )
          sub_1C372B4(0);
        v20 = System_Collections_Generic_Dictionary_object__int___get_Item(
                (System_Collections_Generic_Dictionary_object__int__o *)v19,
                v18,
                (const MethodInfo_345A880 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v6->klass->vtable._17_Write.methodPtr)(
          v6,
          v20,
          v6->klass->vtable._17_Write.method);
      }
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___Dispose(
        &v26,
        (const MethodInfo_355E9FC *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__);
      klass = v6->klass;
      v22 = *(unsigned __int16 *)&v6->klass->_2.rank;
      if ( *(_WORD *)&v6->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v22;
          p_offset += 4;
          if ( !v22 )
            goto LABEL_26;
        }
        v24 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_26:
        v24 = sub_1C87870(v6, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v24)(v6, *(_QWORD *)(v24 + 8));
    }
  }
}


void RequestBase__addBaseField(RequestBase_o *this, const MethodInfo *method)
{
  if ( (byte_4C44B6C & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C44B6C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__SetBaseField(this, 0);
}


void RequestBase__addDeviceInfoField(RequestBase_o *this, const MethodInfo *method)
{
  if ( (byte_4C44B6D & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C44B6D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__SetDeviceInfoField(this, 0);
}


void RequestBase__addField(RequestBase_o *this, System_String_o *fieldName, int32_t data, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0

  if ( (byte_4C44B66 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    byte_4C44B66 = 1;
  }
  paramInteger = this->fields.paramInteger;
  if ( !paramInteger )
    sub_1C372B4(0);
  System_Collections_Generic_Dictionary_object__int___Add(
    (System_Collections_Generic_Dictionary_object__int__o *)paramInteger,
    (Il2CppObject *)fieldName,
    data,
    (const MethodInfo_345A900 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
}


void RequestBase__addField_44246844(
        RequestBase_o *this,
        System_String_o *fieldName,
        int64_t data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v7; // x0
  Il2CppObject *v8; // x2
  int64_t v9; // [xsp+8h] [xbp-28h] BYREF

  v9 = data;
  if ( (byte_4C44B67 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C44B67 = 1;
  }
  paramString = this->fields.paramString;
  v7 = System_Int64__ToString((int64_t)&v9, 0);
  if ( !paramString )
    sub_1C372B4(v7);
  if ( v7 )
    v8 = (Il2CppObject *)v7;
  else
    v8 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v8,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void RequestBase__addField_44246996(
        RequestBase_o *this,
        System_String_o *fieldName,
        float data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v7; // x0
  Il2CppObject *v8; // x2
  float v9; // [xsp+Ch] [xbp-24h] BYREF

  v9 = data;
  if ( (byte_4C44B68 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C44B68 = 1;
  }
  paramString = this->fields.paramString;
  v7 = System_Single__ToString(data, (const MethodInfo *)&v9);
  if ( !paramString )
    sub_1C372B4(v7);
  if ( v7 )
    v8 = (Il2CppObject *)v7;
  else
    v8 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v8,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void RequestBase__addField_44247148(
        RequestBase_o *this,
        System_String_o *fieldName,
        double data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v7; // x0
  Il2CppObject *v8; // x2
  double v9; // [xsp+8h] [xbp-28h] BYREF

  v9 = data;
  if ( (byte_4C44B69 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C44B69 = 1;
  }
  paramString = this->fields.paramString;
  v7 = System_Double__ToString(data, (const MethodInfo *)&v9);
  if ( !paramString )
    sub_1C372B4(v7);
  if ( v7 )
    v8 = (Il2CppObject *)v7;
  else
    v8 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v8,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void RequestBase__addField_44247300(
        RequestBase_o *this,
        System_String_o *fieldName,
        System_String_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0

  if ( (byte_4C44B6A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    byte_4C44B6A = 1;
  }
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_1C372B4(0);
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    (Il2CppObject *)data,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void RequestBase__addField_44247404(
        RequestBase_o *this,
        System_String_o *fieldName,
        Il2CppObject *data,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x8

  if ( (byte_4C44B6B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_1C37058(&JsonManager_TypeInfo);
    byte_4C44B6B = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v7 = (Il2CppObject *)JsonManager__toJson(data, 0, 0, 0);
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_1C372B4(v7);
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v7,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


bool RequestBase__backgroundErrorRequest(RequestBase_o *this, System_String_o *errorCode, const MethodInfo *method)
{
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8

  if ( (byte_4C44B61 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_22215/*"ng"*/);
    byte_4C44B61 = 1;
  }
  CallBack = this->fields.CallBack;
  if ( CallBack )
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
      CallBack->fields.method_code,
      StringLiteral_22215/*"ng"*/,
      CallBack->fields.method);
  return 1;
}


void RequestBase__backgroundErrorRetry(RequestBase_o *this, const MethodInfo *method)
{
  ;
}


void RequestBase__beginRequest(RequestBase_o *this, const MethodInfo *method)
{
  if ( (byte_4C44B63 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C44B63 = 1;
  }
  RequestBase__addBaseField(this, method);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart(this, 0);
}


bool RequestBase__beginRetryRequest(RequestBase_o *this, bool isRefreshTime, const MethodInfo *method)
{
  bool Parameter; // w20

  if ( (byte_4C44B64 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C44B64 = 1;
  }
  Parameter = RequestBase__ReadParameter(this, isRefreshTime, method);
  if ( Parameter )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    NetworkManager__RequestStart(this, 0);
  }
  return Parameter;
}


bool RequestBase__checkExpirationDate(RequestBase_o *this, const MethodInfo *method)
{
  return 0;
}


void RequestBase__completed(RequestBase_o *this, System_String_o *result, const MethodInfo *method)
{
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8

  CallBack = this->fields.CallBack;
  if ( CallBack )
    ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))CallBack->fields.invoke_impl)(
      CallBack->fields.method_code,
      result,
      CallBack->fields.method);
}


bool RequestBase__errorRequest(RequestBase_o *this, System_String_o *errorCode, const MethodInfo *method)
{
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8

  if ( (byte_4C44B62 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_22215/*"ng"*/);
    byte_4C44B62 = 1;
  }
  CallBack = this->fields.CallBack;
  if ( CallBack )
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
      CallBack->fields.method_code,
      StringLiteral_22215/*"ng"*/,
      CallBack->fields.method);
  return 1;
}


void RequestBase__errorRetry(RequestBase_o *this, const MethodInfo *method)
{
  ;
}


System_String_o *RequestBase__getMockData(RequestBase_o *this, const MethodInfo *method)
{
  return 0;
}


System_String_o *RequestBase__getMockURL(RequestBase_o *this, const MethodInfo *method)
{
  return 0;
}


System_String_o *RequestBase__getParameterFileName(RequestBase_o *this, const MethodInfo *method)
{
  return 0;
}


System_String_o *RequestBase__getURL(RequestBase_o *this, const MethodInfo *method)
{
  return 0;
}


UnityEngine_WWWForm_o *RequestBase__getWWWForm(
        RequestBase_o *this,
        System_Collections_Generic_SortedDictionary_string__string__o **authParams,
        const MethodInfo *method)
{
  UnityEngine_WWWForm_o *v5; // x19
  System_Collections_Generic_SortedDictionary_TKey__TValue__o *v6; // x22
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_Dictionary_object__object__o *paramString; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *v10; // x0
  Il2CppObject *currentKey; // x22
  Il2CppObject *Item; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *v13; // x0
  System_Collections_Generic_SortedDictionary_TKey__TValue__o *v14; // x23
  Il2CppObject *v15; // x0
  struct System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0
  Il2CppObject *v17; // x22
  __int64 v18; // x0
  struct System_Collections_Generic_Dictionary_string__int__o *v19; // x0
  System_Collections_Generic_SortedDictionary_TKey__TValue__o *v20; // x23
  int32_t v21; // w24
  Il2CppObject *v22; // x0
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v24; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v25; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v26; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4C44B74 & 1) == 0 )
  {
    sub_1C37058(&System_Convert_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__get_Keys__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int__get_Keys__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_SortedDictionary_string__string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_SortedDictionary_string__string___ctor__);
    sub_1C37058(&System_Collections_Generic_SortedDictionary_string__string__TypeInfo);
    sub_1C37058(&UnityEngine_WWWForm_TypeInfo);
    byte_4C44B74 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  memset(&v25, 0, sizeof(v25));
  v5 = (UnityEngine_WWWForm_o *)sub_1C372A4(UnityEngine_WWWForm_TypeInfo);
  UnityEngine_WWWForm___ctor(v5, 0);
  v6 = (System_Collections_Generic_SortedDictionary_TKey__TValue__o *)sub_1C372A4(System_Collections_Generic_SortedDictionary_string__string__TypeInfo);
  System_Collections_Generic_SortedDictionary_object__object____ctor(
    v6,
    (const MethodInfo_39ED7CC *)Method_System_Collections_Generic_SortedDictionary_string__string___ctor__);
  *authParams = (System_Collections_Generic_SortedDictionary_string__string__o *)v6;
  sub_1C36FFC((CGThumbnailListItem_o *)authParams, (int32_t)v6, v7, v8);
  paramString = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.paramString;
  if ( !paramString )
    goto LABEL_32;
  paramString = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Keys(
                                                                             paramString,
                                                                             (const MethodInfo_3463310 *)Method_System_Collections_Generic_Dictionary_string__string__get_Keys__);
  if ( !paramString )
    goto LABEL_32;
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator(
    &v24,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)paramString,
    (const MethodInfo_36C85B4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__);
  v26 = v24;
  while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext(
            &v26,
            (const MethodInfo_3560C80 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__) )
  {
    v10 = this->fields.paramString;
    if ( !v10 )
      sub_1C372B4(0);
    currentKey = v26.fields._currentKey;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)v10,
             v26.fields._currentKey,
             (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    if ( !v5 )
      sub_1C372B4(Item);
    UnityEngine_WWWForm__AddField(v5, (System_String_o *)currentKey, (System_String_o *)Item, 0);
    v13 = this->fields.paramString;
    if ( !v13 )
      sub_1C372B4(0);
    v14 = (System_Collections_Generic_SortedDictionary_TKey__TValue__o *)*authParams;
    v15 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)v13,
            currentKey,
            (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    if ( !v14 )
      sub_1C372B4(v15);
    System_Collections_Generic_SortedDictionary_object__object___Add(
      v14,
      currentKey,
      v15,
      (const MethodInfo_39EDD7C *)Method_System_Collections_Generic_SortedDictionary_string__string__Add__);
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose(
    &v26,
    (const MethodInfo_3560C7C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__);
  paramString = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.paramInteger;
  if ( !paramString
    || (paramString = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__int___get_Keys(
                                                                                   (System_Collections_Generic_Dictionary_object__int__o *)paramString,
                                                                                   (const MethodInfo_345A5E0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Keys__)) == 0 )
  {
LABEL_32:
    sub_1C372B4(paramString);
  }
  System_Collections_Generic_Dictionary_KeyCollection_object__int___GetEnumerator(
    &v24,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)paramString,
    (const MethodInfo_36C7390 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__);
  v25 = v24;
  while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___MoveNext(
            &v25,
            (const MethodInfo_355EA00 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__) )
  {
    paramInteger = this->fields.paramInteger;
    if ( !paramInteger )
      sub_1C372B4(0);
    v17 = v25.fields._currentKey;
    v18 = System_Collections_Generic_Dictionary_object__int___get_Item(
            (System_Collections_Generic_Dictionary_object__int__o *)paramInteger,
            v25.fields._currentKey,
            (const MethodInfo_345A880 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    if ( !v5 )
      sub_1C372B4(v18);
    UnityEngine_WWWForm__AddField_73765776(v5, (System_String_o *)v17, v18, 0);
    v19 = this->fields.paramInteger;
    if ( !v19 )
      sub_1C372B4(0);
    v20 = (System_Collections_Generic_SortedDictionary_TKey__TValue__o *)*authParams;
    v21 = System_Collections_Generic_Dictionary_object__int___get_Item(
            (System_Collections_Generic_Dictionary_object__int__o *)v19,
            v17,
            (const MethodInfo_345A880 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    v22 = (Il2CppObject *)System_Convert__ToString_64657564(v21, 0);
    if ( !v20 )
      sub_1C372B4(v22);
    System_Collections_Generic_SortedDictionary_object__object___Add(
      v20,
      v17,
      v22,
      (const MethodInfo_39EDD7C *)Method_System_Collections_Generic_SortedDictionary_string__string__Add__);
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___Dispose(
    &v25,
    (const MethodInfo_355E9FC *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__);
  return v5;
}


bool RequestBase__isAutoRetryRequest(RequestBase_o *this, const MethodInfo *method)
{
  return 0;
}


bool RequestBase__isBackgroundRequest(RequestBase_o *this, const MethodInfo *method)
{
  return 0;
}


bool RequestBase__isShowConnect(RequestBase_o *this, const MethodInfo *method)
{
  return 1;
}


void RequestBase__replaceField(RequestBase_o *this, System_String_o *fieldName, int32_t data, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0

  if ( (byte_4C44B6E & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    byte_4C44B6E = 1;
  }
  paramInteger = this->fields.paramInteger;
  if ( !paramInteger )
    sub_1C372B4(0);
  System_Collections_Generic_Dictionary_object__int___set_Item(
    (System_Collections_Generic_Dictionary_object__int__o *)paramInteger,
    (Il2CppObject *)fieldName,
    data,
    (const MethodInfo_345A8EC *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
}


void RequestBase__replaceField_44247760(
        RequestBase_o *this,
        System_String_o *fieldName,
        int64_t data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v7; // x0
  Il2CppObject *v8; // x2
  int64_t v9; // [xsp+8h] [xbp-28h] BYREF

  v9 = data;
  if ( (byte_4C44B6F & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C44B6F = 1;
  }
  paramString = this->fields.paramString;
  v7 = System_Int64__ToString((int64_t)&v9, 0);
  if ( !paramString )
    sub_1C372B4(v7);
  if ( v7 )
    v8 = (Il2CppObject *)v7;
  else
    v8 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v8,
    (const MethodInfo_346361C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void RequestBase__replaceField_44247912(
        RequestBase_o *this,
        System_String_o *fieldName,
        float data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v7; // x0
  Il2CppObject *v8; // x2
  float v9; // [xsp+Ch] [xbp-24h] BYREF

  v9 = data;
  if ( (byte_4C44B70 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C44B70 = 1;
  }
  paramString = this->fields.paramString;
  v7 = System_Single__ToString(data, (const MethodInfo *)&v9);
  if ( !paramString )
    sub_1C372B4(v7);
  if ( v7 )
    v8 = (Il2CppObject *)v7;
  else
    v8 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v8,
    (const MethodInfo_346361C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void RequestBase__replaceField_44248064(
        RequestBase_o *this,
        System_String_o *fieldName,
        double data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v7; // x0
  Il2CppObject *v8; // x2
  double v9; // [xsp+8h] [xbp-28h] BYREF

  v9 = data;
  if ( (byte_4C44B71 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C44B71 = 1;
  }
  paramString = this->fields.paramString;
  v7 = System_Double__ToString(data, (const MethodInfo *)&v9);
  if ( !paramString )
    sub_1C372B4(v7);
  if ( v7 )
    v8 = (Il2CppObject *)v7;
  else
    v8 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v8,
    (const MethodInfo_346361C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void RequestBase__replaceField_44248216(
        RequestBase_o *this,
        System_String_o *fieldName,
        System_String_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0

  if ( (byte_4C44B72 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    byte_4C44B72 = 1;
  }
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_1C372B4(0);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    (Il2CppObject *)data,
    (const MethodInfo_346361C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void RequestBase__replaceField_44248320(
        RequestBase_o *this,
        System_String_o *fieldName,
        Il2CppObject *data,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x8

  if ( (byte_4C44B73 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_1C37058(&JsonManager_TypeInfo);
    byte_4C44B73 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v7 = (Il2CppObject *)JsonManager__toJson(data, 0, 0, 0);
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_1C372B4(v7);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v7,
    (const MethodInfo_346361C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void RequestBase__requestCompleted(RequestBase_o *this, ResponseData_array *responseList, const MethodInfo *method)
{
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8

  CallBack = this->fields.CallBack;
  if ( CallBack )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))CallBack->fields.invoke_impl)(
      CallBack->fields.method_code,
      0,
      CallBack->fields.method);
}