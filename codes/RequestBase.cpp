void RequestBase___ctor(RequestBase_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_Dictionary_object__object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CC8FEC & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    byte_4CC8FEC = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C715FC(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v3,
    (const MethodInfo_34C1FFC *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.paramInteger = (struct System_Collections_Generic_Dictionary_string__int__o *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.paramInteger, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C715FC(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v10,
    (const MethodInfo_34CAD30 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)v10;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.paramString, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RequestBase__AddSignatureField(RequestBase_o *this, const MethodInfo *method)
{
  if ( (byte_4CC8FEB & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&SignedData_TypeInfo);
    byte_4CC8FEB = 1;
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

  if ( (byte_4CC8FD5 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__int__Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__string__Clear__);
    byte_4CC8FD5 = 1;
  }
  paramInteger = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.paramInteger;
  if ( !paramInteger
    || (System_Collections_Generic_Dictionary_object__int___Clear(
          paramInteger,
          (const MethodInfo_34C2B38 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__),
        (paramInteger = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.paramString) == 0) )
  {
    sub_1C71608(paramInteger, method);
  }
  System_Collections_Generic_Dictionary_object__object___Clear(
    (System_Collections_Generic_Dictionary_object__object__o *)paramInteger,
    (const MethodInfo_34CB868 *)Method_System_Collections_Generic_Dictionary_string__string__Clear__);
}


void RequestBase__ClearParameter(RequestBase_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  System_String_o *v4; // x0
  System_String_o *v5; // x19

  if ( (byte_4CC8FE7 & 1) == 0 )
  {
    sub_1C713B0(&ManagerConfig_TypeInfo);
    byte_4CC8FE7 = 1;
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


void RequestBase__DeleteParameterFile(System_String_o *filePath, const MethodInfo *method)
{
  if ( !System_String__IsNullOrEmpty(filePath, 0) && System_IO_File__Exists(filePath, 0) )
    System_IO_File__Delete(filePath, 0);
}


void RequestBase__DeleteSaveData(int32_t fileNameKey, const MethodInfo *method)
{
  System_String_o *FileName; // x19
  System_String_o *DatFileSavePath; // x20
  System_String_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4CC8FE8 & 1) == 0 )
  {
    sub_1C713B0(&AndroidUtil_TypeInfo);
    sub_1C713B0(&DatFileName_TypeInfo);
    sub_1C713B0(&System_IO_Path_TypeInfo);
    byte_4CC8FE8 = 1;
  }
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(fileNameKey, 0);
  if ( !System_String__IsNullOrEmpty(FileName, 0) )
  {
    if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
    DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
    if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
    v5 = System_IO_Path__Combine(DatFileSavePath, FileName, 0);
    RequestBase__DeleteParameterFile(v5, v6);
  }
}


System_Byte_array *RequestBase__PackToMessagePack(RequestBase_o *this, Il2CppObject *json, const MethodInfo *method)
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

  if ( (byte_4CC8FEA & 1) == 0 )
  {
    sub_1C713B0(&System_IO_Compression_GZipStream_TypeInfo);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_IO_MemoryStream_TypeInfo);
    sub_1C713B0(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    byte_4CC8FEA = 1;
  }
  v4 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C715FC(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v4, 0);
  if ( !v4 )
    sub_1C71608(v5, v6);
  v7 = MiniMessagePack_MiniMessagePacker__PackClass(v4, json, 0);
  v8 = (System_IO_MemoryStream_o *)sub_1C715FC(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v8, 0);
  v9 = (System_IO_Compression_GZipStream_o *)sub_1C715FC(System_IO_Compression_GZipStream_TypeInfo);
  System_IO_Compression_GZipStream___ctor_70974392(v9, (System_IO_Stream_o *)v8, 0, 0);
  if ( !v7 )
    sub_1C71608(v10, v11);
  if ( !v9 )
    sub_1C71608(v10, v11);
  ((void (__fastcall *)(System_IO_Compression_GZipStream_o *, System_Byte_array *, _QWORD, _QWORD, const MethodInfo *))v9->klass->vtable._34_Write.methodPtr)(
    v9,
    v7,
    0,
    LODWORD(v7->max_length),
    v9->klass->vtable._34_Write.method);
  klass = v9->klass;
  v13 = *(unsigned __int16 *)&v9->klass->_2.rank;
  if ( *(_WORD *)&v9->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v13;
      p_offset += 4;
      if ( !v13 )
        goto LABEL_10;
    }
    v15 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_10:
    v15 = sub_1C47738(v9, System_IDisposable_TypeInfo, 0);
  }
  v16 = (*(__int64 (__fastcall **)(System_IO_Compression_GZipStream_o *, _QWORD))v15)(v9, *(_QWORD *)(v15 + 8));
  if ( !v8 )
    sub_1C71608(v16, v17);
  v18 = (System_Byte_array *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v8->klass->vtable._40_ToArray.methodPtr)(
                               v8,
                               v8->klass->vtable._40_ToArray.method);
  v19 = v8->klass;
  v20 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    v21 = &v19->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v21 - 1) != System_IDisposable_TypeInfo )
    {
      --v20;
      v21 += 4;
      if ( !v20 )
        goto LABEL_17;
    }
    v22 = (__int64)&v19->vtable + 16 * *v21;
  }
  else
  {
LABEL_17:
    v22 = sub_1C47738(v8, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v22)(v8, *(_QWORD *)(v22 + 8));
  return v18;
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

  if ( (byte_4CC8FE5 & 1) == 0 )
  {
    sub_1C713B0(&System_IO_BinaryReader_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&ManagerConfig_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC8FE5 = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( v5->static_fields->UseMock )
    return 0;
  v8 = (System_String_o *)((__int64 (__fastcall *)(RequestBase_o *, const MethodInfo *))this->klass->vtable._16_getParameterFileName.methodPtr)(
                            this,
                            this->klass->vtable._16_getParameterFileName.method);
  if ( !v8 )
    return 0;
  v9 = v8;
  if ( !System_IO_File__Exists(v8, 0) )
    return 0;
  v10 = (System_IO_Stream_o *)System_IO_File__OpenRead(v9, 0);
  v11 = (System_IO_BinaryReader_o *)sub_1C715FC(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v11, v10, 0);
  RequestBase__ClearField(this, v12);
  if ( !v11 )
    sub_1C71608(v13, v14);
  v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v11->klass->vtable._15_ReadInt32.methodPtr)(
          v11,
          v11->klass->vtable._15_ReadInt32.method);
  v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v11->klass->vtable._15_ReadInt32.methodPtr)(
          v11,
          v11->klass->vtable._15_ReadInt32.method);
  if ( v15 >= 1 )
  {
    do
    {
      v17 = (Il2CppObject *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v11->klass->vtable._22_ReadString.methodPtr)(
                              v11,
                              v11->klass->vtable._22_ReadString.method);
      v19 = (Il2CppObject *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v11->klass->vtable._22_ReadString.methodPtr)(
                              v11,
                              v11->klass->vtable._22_ReadString.method);
      paramString = this->fields.paramString;
      if ( !paramString )
        sub_1C71608(0, v18);
      System_Collections_Generic_Dictionary_object__object___Add(
        (System_Collections_Generic_Dictionary_object__object__o *)paramString,
        v17,
        v19,
        (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
      --v15;
    }
    while ( v15 );
  }
  if ( v16 >= 1 )
  {
    do
    {
      v21 = (Il2CppObject *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v11->klass->vtable._22_ReadString.methodPtr)(
                              v11,
                              v11->klass->vtable._22_ReadString.method);
      v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v11->klass->vtable._15_ReadInt32.methodPtr)(
              v11,
              v11->klass->vtable._15_ReadInt32.method);
      paramInteger = this->fields.paramInteger;
      if ( !paramInteger )
        sub_1C71608(0, v22);
      System_Collections_Generic_Dictionary_object__int___Add(
        (System_Collections_Generic_Dictionary_object__int__o *)paramInteger,
        v21,
        v23,
        (const MethodInfo_34C29B0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
      --v16;
    }
    while ( v16 );
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__ReplaceBaseField(this, isRefreshTime, 0);
  v6 = 1;
  klass = v11->klass;
  v26 = *(unsigned __int16 *)&v11->klass->_2.rank;
  if ( *(_WORD *)&v11->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      p_offset += 4;
      if ( !v26 )
        goto LABEL_23;
    }
    v28 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_23:
    v28 = sub_1C47738(v11, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v28)(v11, *(_QWORD *)(v28 + 8));
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

  if ( (byte_4CC8FE9 & 1) == 0 )
  {
    sub_1C713B0(&byte___TypeInfo);
    sub_1C713B0(&System_Convert_TypeInfo);
    sub_1C713B0(&System_IO_Compression_GZipStream_TypeInfo);
    sub_1C713B0(&System_IO_MemoryStream_TypeInfo);
    this = (RequestBase_o *)sub_1C713B0(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    byte_4CC8FE9 = 1;
  }
  if ( !obj )
    goto LABEL_15;
  v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *))obj->klass->vtable[3].methodPtr)(obj);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v5 = System_Convert__FromBase64String(v4, 0);
  v6 = sub_1C71458(byte___TypeInfo, 1024);
  v7 = (System_IO_MemoryStream_o *)sub_1C715FC(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_64852648(v7, v5, 0);
  v8 = (System_IO_Compression_GZipStream_o *)sub_1C715FC(System_IO_Compression_GZipStream_TypeInfo);
  System_IO_Compression_GZipStream___ctor(v8, (System_IO_Stream_o *)v7, 0, 0);
  v9 = (System_IO_MemoryStream_o *)sub_1C715FC(System_IO_MemoryStream_TypeInfo);
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
    sub_1C71608(this, obj);
  }
LABEL_12:
  v11 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C715FC(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v11, 0);
  if ( !v9 )
    goto LABEL_15;
  this = (RequestBase_o *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v9->klass->vtable._40_ToArray.methodPtr)(
                            v9,
                            v9->klass->vtable._40_ToArray.method);
  if ( !v11 )
    goto LABEL_15;
  return MiniMessagePack_MiniMessagePacker__Unpack_39988268(v11, (System_Byte_array *)this, 0);
}


void RequestBase__WriteParameter(RequestBase_o *this, const MethodInfo *method)
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

  if ( (byte_4CC8FE6 & 1) == 0 )
  {
    sub_1C713B0(&System_IO_BinaryWriter_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__int__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__string__get_Keys__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__int__get_Keys__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__get_Current__);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__);
    sub_1C713B0(&ManagerConfig_TypeInfo);
    byte_4CC8FE6 = 1;
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
    v4 = (System_String_o *)((__int64 (__fastcall *)(RequestBase_o *, const MethodInfo *))this->klass->vtable._16_getParameterFileName.methodPtr)(
                              this,
                              this->klass->vtable._16_getParameterFileName.method);
    if ( v4 )
    {
      v5 = (System_IO_Stream_o *)System_IO_File__OpenWrite(v4, 0);
      v6 = (System_IO_BinaryWriter_o *)sub_1C715FC(System_IO_BinaryWriter_TypeInfo);
      System_IO_BinaryWriter___ctor_64941052(v6, v5, 0);
      paramString = this->fields.paramString;
      if ( !paramString )
        sub_1C71608(0, v7);
      Count = System_Collections_Generic_Dictionary_object__object___get_Count(
                (System_Collections_Generic_Dictionary_object__object__o *)paramString,
                (const MethodInfo_34CB3B0 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
      if ( !v6 )
        sub_1C71608(Count, (unsigned int)Count);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v6->klass->vtable._17_Write.methodPtr)(
        v6,
        (unsigned int)Count,
        v6->klass->vtable._17_Write.method);
      paramInteger = this->fields.paramInteger;
      if ( !paramInteger )
        sub_1C71608(0, v10);
      v12 = System_Collections_Generic_Dictionary_object__int___get_Count(
              (System_Collections_Generic_Dictionary_object__int__o *)paramInteger,
              (const MethodInfo_34C2680 *)Method_System_Collections_Generic_Dictionary_string__int__get_Count__);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v6->klass->vtable._17_Write.methodPtr)(
        v6,
        v12,
        v6->klass->vtable._17_Write.method);
      v14 = this->fields.paramString;
      if ( !v14 )
        sub_1C71608(0, v13);
      Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
               (System_Collections_Generic_Dictionary_object__object__o *)v14,
               (const MethodInfo_34CB3C0 *)Method_System_Collections_Generic_Dictionary_string__string__get_Keys__);
      if ( !Keys )
        sub_1C71608(0, v16);
      System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator(
        &v33,
        Keys,
        (const MethodInfo_3735D18 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__);
      v35 = v33;
      while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext(
                &v35,
                (const MethodInfo_35C993C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__) )
      {
        currentKey = v35.fields._currentKey;
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppObject *, const MethodInfo *))v6->klass->vtable._22_Write.methodPtr)(
          v6,
          v35.fields._currentKey,
          v6->klass->vtable._22_Write.method);
        v19 = this->fields.paramString;
        if ( !v19 )
          sub_1C71608(0, v18);
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)v19,
                 currentKey,
                 (const MethodInfo_34CB660 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppObject *, const MethodInfo *))v6->klass->vtable._22_Write.methodPtr)(
          v6,
          Item,
          v6->klass->vtable._22_Write.method);
      }
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose(
        &v35,
        (const MethodInfo_35C9938 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__);
      v22 = this->fields.paramInteger;
      if ( !v22 )
        sub_1C71608(0, v21);
      v23 = System_Collections_Generic_Dictionary_object__int___get_Keys(
              (System_Collections_Generic_Dictionary_object__int__o *)v22,
              (const MethodInfo_34C2690 *)Method_System_Collections_Generic_Dictionary_string__int__get_Keys__);
      if ( !v23 )
        sub_1C71608(0, v24);
      System_Collections_Generic_Dictionary_KeyCollection_object__int___GetEnumerator(
        &v33,
        v23,
        (const MethodInfo_3734AF4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__);
      v34 = v33;
      while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___MoveNext(
                &v34,
                (const MethodInfo_35C76BC *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__) )
      {
        v25 = v34.fields._currentKey;
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppObject *, const MethodInfo *))v6->klass->vtable._22_Write.methodPtr)(
          v6,
          v34.fields._currentKey,
          v6->klass->vtable._22_Write.method);
        v27 = this->fields.paramInteger;
        if ( !v27 )
          sub_1C71608(0, v26);
        v28 = System_Collections_Generic_Dictionary_object__int___get_Item(
                (System_Collections_Generic_Dictionary_object__int__o *)v27,
                v25,
                (const MethodInfo_34C2930 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v6->klass->vtable._17_Write.methodPtr)(
          v6,
          v28,
          v6->klass->vtable._17_Write.method);
      }
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___Dispose(
        &v34,
        (const MethodInfo_35C76B8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__);
      klass = v6->klass;
      v30 = *(unsigned __int16 *)&v6->klass->_2.rank;
      if ( *(_WORD *)&v6->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v30;
          p_offset += 4;
          if ( !v30 )
            goto LABEL_26;
        }
        v32 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_26:
        v32 = sub_1C47738(v6, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v32)(v6, *(_QWORD *)(v32 + 8));
    }
  }
}


void RequestBase__addBaseField(RequestBase_o *this, const MethodInfo *method)
{
  if ( (byte_4CC8FDC & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC8FDC = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__SetBaseField(this, 0);
}


void RequestBase__addDeviceInfoField(RequestBase_o *this, const MethodInfo *method)
{
  if ( (byte_4CC8FDD & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC8FDD = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__SetDeviceInfoField(this, 0);
}


void RequestBase__addField(RequestBase_o *this, System_String_o *fieldName, int32_t data, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0

  if ( (byte_4CC8FD6 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    byte_4CC8FD6 = 1;
  }
  paramInteger = this->fields.paramInteger;
  if ( !paramInteger )
    sub_1C71608(0, fieldName);
  System_Collections_Generic_Dictionary_object__int___Add(
    (System_Collections_Generic_Dictionary_object__int__o *)paramInteger,
    (Il2CppObject *)fieldName,
    data,
    (const MethodInfo_34C29B0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
}


void RequestBase__addField_44514616(
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
  if ( (byte_4CC8FD7 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC8FD7 = 1;
  }
  paramString = this->fields.paramString;
  v7 = System_Int64__ToString((int64_t)&v10, 0);
  if ( !paramString )
    sub_1C71608(v7, v8);
  if ( v7 )
    v9 = (Il2CppObject *)v7;
  else
    v9 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v9,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void RequestBase__addField_44516316(
        RequestBase_o *this,
        System_String_o *fieldName,
        Il2CppObject *data,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x8

  if ( (byte_4CC8FDB & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_1C713B0(&JsonManager_TypeInfo);
    byte_4CC8FDB = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v7 = (Il2CppObject *)JsonManager__toJson(data, 0, 0, 0);
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_1C71608(v7, v8);
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v7,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void RequestBase__addField_44518324(
        RequestBase_o *this,
        System_String_o *fieldName,
        System_String_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0

  if ( (byte_4CC8FDA & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    byte_4CC8FDA = 1;
  }
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_1C71608(0, fieldName);
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    (Il2CppObject *)data,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void RequestBase__addField_44545128(
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
  if ( (byte_4CC8FD8 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC8FD8 = 1;
  }
  paramString = this->fields.paramString;
  v7 = System_Single__ToString(data, (const MethodInfo *)&v10);
  if ( !paramString )
    sub_1C71608(v7, v8);
  if ( v7 )
    v9 = (Il2CppObject *)v7;
  else
    v9 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v9,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void RequestBase__addField_44545280(
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
  if ( (byte_4CC8FD9 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC8FD9 = 1;
  }
  paramString = this->fields.paramString;
  v7 = System_Double__ToString(data, (const MethodInfo *)&v10);
  if ( !paramString )
    sub_1C71608(v7, v8);
  if ( v7 )
    v9 = (Il2CppObject *)v7;
  else
    v9 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v9,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


bool RequestBase__backgroundErrorRequest(RequestBase_o *this, System_String_o *errorCode, const MethodInfo *method)
{
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8

  if ( (byte_4CC8FD1 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_22316/*"ng"*/);
    byte_4CC8FD1 = 1;
  }
  CallBack = this->fields.CallBack;
  if ( CallBack )
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
      CallBack->fields.method_code,
      StringLiteral_22316/*"ng"*/,
      CallBack->fields.method);
  return 1;
}


void RequestBase__backgroundErrorRetry(RequestBase_o *this, const MethodInfo *method)
{
  ;
}


void RequestBase__beginRequest(RequestBase_o *this, const MethodInfo *method)
{
  if ( (byte_4CC8FD3 & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC8FD3 = 1;
  }
  RequestBase__addBaseField(this, method);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart(this, 0);
}


bool RequestBase__beginRetryRequest(RequestBase_o *this, bool isRefreshTime, const MethodInfo *method)
{
  bool Parameter; // w20

  if ( (byte_4CC8FD4 & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC8FD4 = 1;
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

  if ( (byte_4CC8FD2 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_22316/*"ng"*/);
    byte_4CC8FD2 = 1;
  }
  CallBack = this->fields.CallBack;
  if ( CallBack )
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
      CallBack->fields.method_code,
      StringLiteral_22316/*"ng"*/,
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // x1
  System_Collections_Generic_Dictionary_object__object__o *paramString; // x0
  __int64 v15; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v16; // x0
  Il2CppObject *currentKey; // x22
  Il2CppObject *Item; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v21; // x0
  System_Collections_Generic_SortedDictionary_TKey__TValue__o *v22; // x23
  Il2CppObject *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0
  Il2CppObject *v27; // x22
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *v31; // x0
  System_Collections_Generic_SortedDictionary_TKey__TValue__o *v32; // x23
  int32_t v33; // w24
  Il2CppObject *v34; // x0
  __int64 v35; // x1
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v37; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v38; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v39; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4CC8FE4 & 1) == 0 )
  {
    sub_1C713B0(&System_Convert_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__string__get_Keys__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__int__get_Keys__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_SortedDictionary_string__string__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_SortedDictionary_string__string___ctor__);
    sub_1C713B0(&System_Collections_Generic_SortedDictionary_string__string__TypeInfo);
    sub_1C713B0(&UnityEngine_WWWForm_TypeInfo);
    byte_4CC8FE4 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  memset(&v38, 0, sizeof(v38));
  v5 = (UnityEngine_WWWForm_o *)sub_1C715FC(UnityEngine_WWWForm_TypeInfo);
  UnityEngine_WWWForm___ctor(v5, 0);
  v6 = (System_Collections_Generic_SortedDictionary_TKey__TValue__o *)sub_1C715FC(System_Collections_Generic_SortedDictionary_string__string__TypeInfo);
  System_Collections_Generic_SortedDictionary_object__object____ctor(
    v6,
    (const MethodInfo_3A5F7B8 *)Method_System_Collections_Generic_SortedDictionary_string__string___ctor__);
  *authParams = (System_Collections_Generic_SortedDictionary_string__string__o *)v6;
  sub_1C71354((GrandQuestFolderBoardItem_o *)authParams, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  paramString = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.paramString;
  if ( !paramString )
    goto LABEL_32;
  paramString = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Keys(
                                                                             paramString,
                                                                             (const MethodInfo_34CB3C0 *)Method_System_Collections_Generic_Dictionary_string__string__get_Keys__);
  if ( !paramString )
    goto LABEL_32;
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator(
    &v37,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)paramString,
    (const MethodInfo_3735D18 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__);
  v39 = v37;
  while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext(
            &v39,
            (const MethodInfo_35C993C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__) )
  {
    v16 = this->fields.paramString;
    if ( !v16 )
      sub_1C71608(0, v15);
    currentKey = v39.fields._currentKey;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)v16,
             v39.fields._currentKey,
             (const MethodInfo_34CB660 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    if ( !v5 )
      sub_1C71608(Item, v19);
    UnityEngine_WWWForm__AddField(v5, (System_String_o *)currentKey, (System_String_o *)Item, 0);
    v21 = this->fields.paramString;
    if ( !v21 )
      sub_1C71608(0, v20);
    v22 = (System_Collections_Generic_SortedDictionary_TKey__TValue__o *)*authParams;
    v23 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)v21,
            currentKey,
            (const MethodInfo_34CB660 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    if ( !v22 )
      sub_1C71608(v23, v24);
    System_Collections_Generic_SortedDictionary_object__object___Add(
      v22,
      currentKey,
      v23,
      (const MethodInfo_3A5FD68 *)Method_System_Collections_Generic_SortedDictionary_string__string__Add__);
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose(
    &v39,
    (const MethodInfo_35C9938 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__);
  paramString = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.paramInteger;
  if ( !paramString
    || (paramString = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__int___get_Keys(
                                                                                   (System_Collections_Generic_Dictionary_object__int__o *)paramString,
                                                                                   (const MethodInfo_34C2690 *)Method_System_Collections_Generic_Dictionary_string__int__get_Keys__)) == 0 )
  {
LABEL_32:
    sub_1C71608(paramString, v13);
  }
  System_Collections_Generic_Dictionary_KeyCollection_object__int___GetEnumerator(
    &v37,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)paramString,
    (const MethodInfo_3734AF4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__);
  v38 = v37;
  while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___MoveNext(
            &v38,
            (const MethodInfo_35C76BC *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__) )
  {
    paramInteger = this->fields.paramInteger;
    if ( !paramInteger )
      sub_1C71608(0, v25);
    v27 = v38.fields._currentKey;
    v28 = System_Collections_Generic_Dictionary_object__int___get_Item(
            (System_Collections_Generic_Dictionary_object__int__o *)paramInteger,
            v38.fields._currentKey,
            (const MethodInfo_34C2930 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    if ( !v5 )
      sub_1C71608(v28, v29);
    UnityEngine_WWWForm__AddField_74238916(v5, (System_String_o *)v27, v28, 0);
    v31 = this->fields.paramInteger;
    if ( !v31 )
      sub_1C71608(0, v30);
    v32 = (System_Collections_Generic_SortedDictionary_TKey__TValue__o *)*authParams;
    v33 = System_Collections_Generic_Dictionary_object__int___get_Item(
            (System_Collections_Generic_Dictionary_object__int__o *)v31,
            v27,
            (const MethodInfo_34C2930 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    v34 = (Il2CppObject *)System_Convert__ToString_65125688(v33, 0);
    if ( !v32 )
      sub_1C71608(v34, v35);
    System_Collections_Generic_SortedDictionary_object__object___Add(
      v32,
      v27,
      v34,
      (const MethodInfo_3A5FD68 *)Method_System_Collections_Generic_SortedDictionary_string__string__Add__);
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___Dispose(
    &v38,
    (const MethodInfo_35C76B8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__);
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

  if ( (byte_4CC8FDE & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    byte_4CC8FDE = 1;
  }
  paramInteger = this->fields.paramInteger;
  if ( !paramInteger )
    sub_1C71608(0, fieldName);
  System_Collections_Generic_Dictionary_object__int___set_Item(
    (System_Collections_Generic_Dictionary_object__int__o *)paramInteger,
    (Il2CppObject *)fieldName,
    data,
    (const MethodInfo_34C299C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
}


void RequestBase__replaceField_44545624(
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
  if ( (byte_4CC8FDF & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC8FDF = 1;
  }
  paramString = this->fields.paramString;
  v7 = System_Int64__ToString((int64_t)&v10, 0);
  if ( !paramString )
    sub_1C71608(v7, v8);
  if ( v7 )
    v9 = (Il2CppObject *)v7;
  else
    v9 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v9,
    (const MethodInfo_34CB6CC *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void RequestBase__replaceField_44545776(
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
  if ( (byte_4CC8FE0 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC8FE0 = 1;
  }
  paramString = this->fields.paramString;
  v7 = System_Single__ToString(data, (const MethodInfo *)&v10);
  if ( !paramString )
    sub_1C71608(v7, v8);
  if ( v7 )
    v9 = (Il2CppObject *)v7;
  else
    v9 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v9,
    (const MethodInfo_34CB6CC *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void RequestBase__replaceField_44545928(
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
  if ( (byte_4CC8FE1 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC8FE1 = 1;
  }
  paramString = this->fields.paramString;
  v7 = System_Double__ToString(data, (const MethodInfo *)&v10);
  if ( !paramString )
    sub_1C71608(v7, v8);
  if ( v7 )
    v9 = (Il2CppObject *)v7;
  else
    v9 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v9,
    (const MethodInfo_34CB6CC *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void RequestBase__replaceField_44546080(
        RequestBase_o *this,
        System_String_o *fieldName,
        System_String_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0

  if ( (byte_4CC8FE2 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    byte_4CC8FE2 = 1;
  }
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_1C71608(0, fieldName);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    (Il2CppObject *)data,
    (const MethodInfo_34CB6CC *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void RequestBase__replaceField_44546184(
        RequestBase_o *this,
        System_String_o *fieldName,
        Il2CppObject *data,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x8

  if ( (byte_4CC8FE3 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_1C713B0(&JsonManager_TypeInfo);
    byte_4CC8FE3 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v7 = (Il2CppObject *)JsonManager__toJson(data, 0, 0, 0);
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_1C71608(v7, v8);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v7,
    (const MethodInfo_34CB6CC *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
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