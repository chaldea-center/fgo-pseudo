void __fastcall RequestBase___ctor(RequestBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_object__int__o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_Dictionary_object__object__o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FDD14 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v6);
    byte_49FDD14 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B64314(
                                                                 System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                 method,
                                                                 v2);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v7,
    (const MethodInfo_316FCFC *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.paramInteger = (struct System_Collections_Generic_Dictionary_string__int__o *)v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.paramInteger, (int32_t)v7, v8, v9);
  v12 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                     System_Collections_Generic_Dictionary_string__string__TypeInfo,
                                                                     v10,
                                                                     v11);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v12,
    (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.paramString, (int32_t)v12, v13, v14);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RequestBase__AddSignatureField(RequestBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_49FDD13 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    sub_1B640C8(&SignedData_TypeInfo, v3);
    byte_49FDD13 = 1;
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
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_object__int__o *paramInteger; // x0

  if ( (byte_49FDCFE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__Clear__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__Clear__, v3);
    byte_49FDCFE = 1;
  }
  paramInteger = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.paramInteger;
  if ( !paramInteger
    || (System_Collections_Generic_Dictionary_object__int___Clear(
          paramInteger,
          (const MethodInfo_3170838 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__),
        (paramInteger = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.paramString) == 0LL) )
  {
    sub_1B64324(paramInteger);
  }
  System_Collections_Generic_Dictionary_object__object___Clear(
    (System_Collections_Generic_Dictionary_object__object__o *)paramInteger,
    (const MethodInfo_3179580 *)Method_System_Collections_Generic_Dictionary_string__string__Clear__);
}


void __fastcall RequestBase__ClearParameter(RequestBase_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  System_String_o *v4; // x0
  System_String_o *v5; // x19

  if ( (byte_49FDD10 & 1) == 0 )
  {
    sub_1B640C8(&ManagerConfig_TypeInfo, method);
    byte_49FDD10 = 1;
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
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  System_Byte_array *v22; // x21
  System_IO_MemoryStream_c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0

  if ( (byte_49FDD12 & 1) == 0 )
  {
    sub_1B640C8(&System_IO_Compression_GZipStream_TypeInfo, json);
    sub_1B640C8(&System_IDisposable_TypeInfo, v4);
    sub_1B640C8(&System_IO_MemoryStream_TypeInfo, v5);
    sub_1B640C8(&MiniMessagePack_MiniMessagePacker_TypeInfo, v6);
    byte_49FDD12 = 1;
  }
  v7 = (MiniMessagePack_MiniMessagePacker_o *)sub_1B64314(MiniMessagePack_MiniMessagePacker_TypeInfo, json, method);
  MiniMessagePack_MiniMessagePacker___ctor(v7, 0LL);
  if ( !v7 )
    sub_1B64324(v8);
  v9 = MiniMessagePack_MiniMessagePacker__PackClass(v7, json, 0LL);
  v12 = (System_IO_MemoryStream_o *)sub_1B64314(System_IO_MemoryStream_TypeInfo, v10, v11);
  System_IO_MemoryStream___ctor(v12, 0LL);
  v15 = (System_IO_Compression_GZipStream_o *)sub_1B64314(System_IO_Compression_GZipStream_TypeInfo, v13, v14);
  System_IO_Compression_GZipStream___ctor_68576240(v15, (System_IO_Stream_o *)v12, 0, 0LL);
  if ( !v9 )
    sub_1B64324(v16);
  if ( !v15 )
    sub_1B64324(v16);
  ((void (__fastcall *)(System_IO_Compression_GZipStream_o *, System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))v15->klass->vtable._36_Write.method)(
    v15,
    v9,
    0LL,
    v9->max_length,
    v15->klass->vtable._37_Write.methodPtr);
  klass = v15->klass;
  v18 = *(unsigned __int16 *)(&v15->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v15->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v18;
      p_offset += 4;
      if ( !v18 )
        goto LABEL_10;
    }
    v20 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v20 = sub_1BB60A8(v15, System_IDisposable_TypeInfo, 0LL);
  }
  v21 = (*(__int64 (__fastcall **)(System_IO_Compression_GZipStream_o *, _QWORD))v20)(v15, *(_QWORD *)(v20 + 8));
  if ( !v12 )
    sub_1B64324(v21);
  v22 = (System_Byte_array *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v12->klass->vtable._42_ToArray.method)(
                               v12,
                               v12->klass[1]._1.image);
  v23 = v12->klass;
  v24 = *(unsigned __int16 *)(&v12->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v12->klass->_2.bitflags2 + 3) )
  {
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_17;
    }
    v26 = (__int64)(&v23->vtable._0_Equals.method + 2 * *v25);
  }
  else
  {
LABEL_17:
    v26 = sub_1BB60A8(v12, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v26)(v12, *(_QWORD *)(v26 + 8));
  return v22;
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
  bool v11; // w20
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
  Il2CppObject *v23; // x24
  Il2CppObject *v24; // x2
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0
  Il2CppObject *v26; // x23
  int32_t v27; // w2
  struct System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0
  System_IO_BinaryReader_c *klass; // x8
  __int64 v30; // x9
  int32_t *p_offset; // x10
  __int64 v32; // x0

  if ( (byte_49FDD0E & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryReader_TypeInfo, isRefreshTime);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__Add__, v6);
    sub_1B640C8(&System_IDisposable_TypeInfo, v7);
    sub_1B640C8(&ManagerConfig_TypeInfo, v8);
    sub_1B640C8(&NetworkManager_TypeInfo, v9);
    byte_49FDD0E = 1;
  }
  v10 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
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
  v18 = (System_IO_BinaryReader_o *)sub_1B64314(System_IO_BinaryReader_TypeInfo, v16, v17);
  System_IO_BinaryReader___ctor(v18, v15, 0LL);
  RequestBase__ClearField(this, v19);
  if ( !v18 )
    sub_1B64324(v20);
  v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._15_ReadInt32.method)(
          v18,
          v18->klass->vtable._16_ReadUInt32.methodPtr);
  v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._15_ReadInt32.method)(
          v18,
          v18->klass->vtable._16_ReadUInt32.methodPtr);
  if ( v21 >= 1 )
  {
    do
    {
      v23 = (Il2CppObject *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._22_ReadString.method)(
                              v18,
                              v18->klass->vtable._23_ReadChars.methodPtr);
      v24 = (Il2CppObject *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._22_ReadString.method)(
                              v18,
                              v18->klass->vtable._23_ReadChars.methodPtr);
      paramString = this->fields.paramString;
      if ( !paramString )
        sub_1B64324(0LL);
      System_Collections_Generic_Dictionary_object__object___Add(
        (System_Collections_Generic_Dictionary_object__object__o *)paramString,
        v23,
        v24,
        (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
      --v21;
    }
    while ( v21 );
  }
  if ( v22 >= 1 )
  {
    do
    {
      v26 = (Il2CppObject *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._22_ReadString.method)(
                              v18,
                              v18->klass->vtable._23_ReadChars.methodPtr);
      v27 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._15_ReadInt32.method)(
              v18,
              v18->klass->vtable._16_ReadUInt32.methodPtr);
      paramInteger = this->fields.paramInteger;
      if ( !paramInteger )
        sub_1B64324(0LL);
      System_Collections_Generic_Dictionary_object__int___Add(
        (System_Collections_Generic_Dictionary_object__int__o *)paramInteger,
        v26,
        v27,
        (const MethodInfo_31706B0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
      --v22;
    }
    while ( v22 );
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__ReplaceBaseField(this, isRefreshTime, 0LL);
  v11 = 1;
  klass = v18->klass;
  v30 = *(unsigned __int16 *)(&v18->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v18->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v30;
      p_offset += 4;
      if ( !v30 )
        goto LABEL_23;
    }
    v32 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_23:
    v32 = sub_1BB60A8(v18, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v32)(v18, *(_QWORD *)(v32 + 8));
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

  if ( (byte_49FDD11 & 1) == 0 )
  {
    sub_1B640C8(&byte___TypeInfo, obj);
    sub_1B640C8(&System_Convert_TypeInfo, v4);
    sub_1B640C8(&System_IO_Compression_GZipStream_TypeInfo, v5);
    sub_1B640C8(&System_IO_MemoryStream_TypeInfo, v6);
    this = (RequestBase_o *)sub_1B640C8(&MiniMessagePack_MiniMessagePacker_TypeInfo, v7);
    byte_49FDD11 = 1;
  }
  if ( !obj )
    goto LABEL_15;
  v8 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo *))obj->klass->vtable[3].method)(
                            obj,
                            obj->klass->vtable[4].methodPtr,
                            method);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v9 = System_Convert__FromBase64String(v8, 0LL);
  v10 = sub_1B64170(byte___TypeInfo, 1024LL);
  v13 = (System_IO_MemoryStream_o *)sub_1B64314(System_IO_MemoryStream_TypeInfo, v11, v12);
  System_IO_MemoryStream___ctor_61519400(v13, v9, 0LL);
  v16 = (System_IO_Compression_GZipStream_o *)sub_1B64314(System_IO_Compression_GZipStream_TypeInfo, v14, v15);
  System_IO_Compression_GZipStream___ctor(v16, (System_IO_Stream_o *)v13, 0, 0LL);
  v19 = (System_IO_MemoryStream_o *)sub_1B64314(System_IO_MemoryStream_TypeInfo, v17, v18);
  System_IO_MemoryStream___ctor(v19, 0LL);
  if ( !v10 || !v16 )
    goto LABEL_15;
  this = (RequestBase_o *)((__int64 (__fastcall *)(System_IO_Compression_GZipStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v16->klass->vtable._33_Read.method)(
                            v16,
                            v10,
                            0LL,
                            *(unsigned int *)(v10 + 24),
                            v16->klass->vtable._34_Read.methodPtr);
  if ( (int)this >= 1 )
  {
    v22 = (unsigned int)this;
    while ( v19 )
    {
      ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, __int64, Il2CppMethodPointer))v19->klass->vtable._36_Write.method)(
        v19,
        v10,
        0LL,
        v22,
        v19->klass->vtable._37_Write.methodPtr);
      this = (RequestBase_o *)((__int64 (__fastcall *)(System_IO_Compression_GZipStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v16->klass->vtable._33_Read.method)(
                                v16,
                                v10,
                                0LL,
                                *(unsigned int *)(v10 + 24),
                                v16->klass->vtable._34_Read.methodPtr);
      v22 = (unsigned int)this;
      if ( (int)this <= 0 )
        goto LABEL_12;
    }
LABEL_15:
    sub_1B64324(this);
  }
LABEL_12:
  v23 = (MiniMessagePack_MiniMessagePacker_o *)sub_1B64314(MiniMessagePack_MiniMessagePacker_TypeInfo, v20, v21);
  MiniMessagePack_MiniMessagePacker___ctor(v23, 0LL);
  if ( !v19 )
    goto LABEL_15;
  this = (RequestBase_o *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v19->klass->vtable._42_ToArray.method)(
                            v19,
                            v19->klass[1]._1.image);
  if ( !v23 )
    goto LABEL_15;
  return MiniMessagePack_MiniMessagePacker__Unpack_36750700(v23, (System_Byte_array *)this, 0LL);
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
  struct System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0
  unsigned int v28; // w0
  struct System_Collections_Generic_Dictionary_string__string__o *v29; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  Il2CppObject *currentKey; // x21
  struct System_Collections_Generic_Dictionary_string__string__o *v32; // x0
  Il2CppObject *Item; // x0
  struct System_Collections_Generic_Dictionary_string__int__o *v34; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v35; // x0
  Il2CppObject *v36; // x21
  struct System_Collections_Generic_Dictionary_string__int__o *v37; // x0
  unsigned int v38; // w0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v40; // x9
  int32_t *p_offset; // x10
  __int64 v42; // x0
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v43; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v44; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v45; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_49FDD0F & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryWriter_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__get_Count__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__get_Keys__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__get_Keys__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__, v12);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__get_Current__,
      v13);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__get_Current__, v14);
    sub_1B640C8(&System_IDisposable_TypeInfo, v15);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__, v17);
    sub_1B640C8(&ManagerConfig_TypeInfo, v18);
    byte_49FDD0F = 1;
  }
  v19 = ManagerConfig_TypeInfo;
  memset(&v45, 0, sizeof(v45));
  memset(&v44, 0, sizeof(v44));
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
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
      v24 = (System_IO_BinaryWriter_o *)sub_1B64314(System_IO_BinaryWriter_TypeInfo, v22, v23);
      System_IO_BinaryWriter___ctor_61613552(v24, v21, 0LL);
      paramString = this->fields.paramString;
      if ( !paramString )
        sub_1B64324(0LL);
      Count = System_Collections_Generic_Dictionary_object__object___get_Count(
                (System_Collections_Generic_Dictionary_object__object__o *)paramString,
                (const MethodInfo_31790C8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
      if ( !v24 )
        sub_1B64324(Count);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v24->klass->vtable._17_Write.method)(
        v24,
        (unsigned int)Count,
        v24->klass->vtable._18_Write.methodPtr);
      paramInteger = this->fields.paramInteger;
      if ( !paramInteger )
        sub_1B64324(0LL);
      v28 = System_Collections_Generic_Dictionary_object__int___get_Count(
              (System_Collections_Generic_Dictionary_object__int__o *)paramInteger,
              (const MethodInfo_3170380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Count__);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v24->klass->vtable._17_Write.method)(
        v24,
        v28,
        v24->klass->vtable._18_Write.methodPtr);
      v29 = this->fields.paramString;
      if ( !v29 )
        sub_1B64324(0LL);
      Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
               (System_Collections_Generic_Dictionary_object__object__o *)v29,
               (const MethodInfo_31790D8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Keys__);
      if ( !Keys )
        sub_1B64324(0LL);
      System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator(
        &v43,
        Keys,
        (const MethodInfo_33D2D0C *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__);
      v45 = v43;
      while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext(
                &v45,
                (const MethodInfo_32770EC *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__) )
      {
        currentKey = v45.fields._currentKey;
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppObject *, void *))v24->klass->vtable._22_Write.method)(
          v24,
          v45.fields._currentKey,
          v24->klass[1]._1.image);
        v32 = this->fields.paramString;
        if ( !v32 )
          sub_1B64324(0LL);
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)v32,
                 currentKey,
                 (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppObject *, void *))v24->klass->vtable._22_Write.method)(
          v24,
          Item,
          v24->klass[1]._1.image);
      }
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose(
        &v45,
        (const MethodInfo_32770E8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__);
      v34 = this->fields.paramInteger;
      if ( !v34 )
        sub_1B64324(0LL);
      v35 = System_Collections_Generic_Dictionary_object__int___get_Keys(
              (System_Collections_Generic_Dictionary_object__int__o *)v34,
              (const MethodInfo_3170390 *)Method_System_Collections_Generic_Dictionary_string__int__get_Keys__);
      if ( !v35 )
        sub_1B64324(0LL);
      System_Collections_Generic_Dictionary_KeyCollection_object__int___GetEnumerator(
        &v43,
        v35,
        (const MethodInfo_33D1AE8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__);
      v44 = v43;
      while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___MoveNext(
                &v44,
                (const MethodInfo_32748D4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__) )
      {
        v36 = v44.fields._currentKey;
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppObject *, void *))v24->klass->vtable._22_Write.method)(
          v24,
          v44.fields._currentKey,
          v24->klass[1]._1.image);
        v37 = this->fields.paramInteger;
        if ( !v37 )
          sub_1B64324(0LL);
        v38 = System_Collections_Generic_Dictionary_object__int___get_Item(
                (System_Collections_Generic_Dictionary_object__int__o *)v37,
                v36,
                (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v24->klass->vtable._17_Write.method)(
          v24,
          v38,
          v24->klass->vtable._18_Write.methodPtr);
      }
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___Dispose(
        &v44,
        (const MethodInfo_32748D0 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__);
      klass = v24->klass;
      v40 = *(unsigned __int16 *)(&v24->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v24->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v40;
          p_offset += 4;
          if ( !v40 )
            goto LABEL_26;
        }
        v42 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_26:
        v42 = sub_1BB60A8(v24, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v42)(v24, *(_QWORD *)(v42 + 8));
    }
  }
}


void __fastcall RequestBase__addBaseField(RequestBase_o *this, const MethodInfo *method)
{
  if ( (byte_49FDD05 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    byte_49FDD05 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__SetBaseField(this, 0LL);
}


void __fastcall RequestBase__addDeviceInfoField(RequestBase_o *this, const MethodInfo *method)
{
  if ( (byte_49FDD06 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    byte_49FDD06 = 1;
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

  if ( (byte_49FDCFF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__Add__, fieldName);
    byte_49FDCFF = 1;
  }
  paramInteger = this->fields.paramInteger;
  if ( !paramInteger )
    sub_1B64324(0LL);
  System_Collections_Generic_Dictionary_object__int___Add(
    (System_Collections_Generic_Dictionary_object__int__o *)paramInteger,
    (Il2CppObject *)fieldName,
    data,
    (const MethodInfo_31706B0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
}


void __fastcall RequestBase__addField_40848776(
        RequestBase_o *this,
        System_String_o *fieldName,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *v8; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x8

  if ( (byte_49FDD04 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__Add__, fieldName);
    sub_1B640C8(&JsonManager_TypeInfo, v7);
    byte_49FDD04 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v8 = (Il2CppObject *)JsonManager__toJson(data, 0, 0, 0LL);
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_1B64324(v8);
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v8,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void __fastcall RequestBase__addField_40849372(
        RequestBase_o *this,
        System_String_o *fieldName,
        int64_t data,
        const MethodInfo *method)
{
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v8; // x0
  Il2CppObject *v9; // x2
  int64_t v10; // [xsp+8h] [xbp-28h] BYREF

  v10 = data;
  if ( (byte_49FDD00 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__Add__, fieldName);
    sub_1B640C8(&StringLiteral_1/*""*/, v6);
    byte_49FDD00 = 1;
  }
  paramString = this->fields.paramString;
  v8 = System_Int64__ToString((int64_t)&v10, 0LL);
  if ( !paramString )
    sub_1B64324(v8);
  if ( v8 )
    v9 = (Il2CppObject *)v8;
  else
    v9 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v9,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void __fastcall RequestBase__addField_40850936(
        RequestBase_o *this,
        System_String_o *fieldName,
        System_String_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0

  if ( (byte_49FDD03 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__Add__, fieldName);
    byte_49FDD03 = 1;
  }
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_1B64324(0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    (Il2CppObject *)data,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void __fastcall RequestBase__addField_40877276(
        RequestBase_o *this,
        System_String_o *fieldName,
        float data,
        const MethodInfo *method)
{
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v8; // x0
  Il2CppObject *v9; // x2
  float v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = data;
  if ( (byte_49FDD01 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__Add__, fieldName);
    sub_1B640C8(&StringLiteral_1/*""*/, v6);
    byte_49FDD01 = 1;
  }
  paramString = this->fields.paramString;
  v8 = System_Single__ToString(data, (const MethodInfo *)&v10);
  if ( !paramString )
    sub_1B64324(v8);
  if ( v8 )
    v9 = (Il2CppObject *)v8;
  else
    v9 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v9,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void __fastcall RequestBase__addField_40877428(
        RequestBase_o *this,
        System_String_o *fieldName,
        double data,
        const MethodInfo *method)
{
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v8; // x0
  Il2CppObject *v9; // x2
  double v10; // [xsp+8h] [xbp-28h] BYREF

  v10 = data;
  if ( (byte_49FDD02 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__Add__, fieldName);
    sub_1B640C8(&StringLiteral_1/*""*/, v6);
    byte_49FDD02 = 1;
  }
  paramString = this->fields.paramString;
  v8 = System_Double__ToString(data, (const MethodInfo *)&v10);
  if ( !paramString )
    sub_1B64324(v8);
  if ( v8 )
    v9 = (Il2CppObject *)v8;
  else
    v9 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v9,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


bool __fastcall RequestBase__backgroundErrorRequest(
        RequestBase_o *this,
        System_String_o *errorCode,
        const MethodInfo *method)
{
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8

  if ( (byte_49FDCFA & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, errorCode);
    byte_49FDCFA = 1;
  }
  CallBack = this->fields.CallBack;
  if ( CallBack )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
      CallBack->fields.original_method_info,
      StringLiteral_21968/*"ng"*/,
      *(_QWORD *)&CallBack->fields.extra_arg);
  return 1;
}


void __fastcall RequestBase__backgroundErrorRetry(RequestBase_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall RequestBase__beginRequest(RequestBase_o *this, const MethodInfo *method)
{
  if ( (byte_49FDCFC & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    byte_49FDCFC = 1;
  }
  RequestBase__addBaseField(this, method);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart(this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall RequestBase__beginRetryRequest(RequestBase_o *this, bool isRefreshTime, const MethodInfo *method)
{
  bool Parameter; // w20

  if ( (byte_49FDCFD & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, isRefreshTime);
    byte_49FDCFD = 1;
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

  if ( (byte_49FDCFB & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, errorCode);
    byte_49FDCFB = 1;
  }
  CallBack = this->fields.CallBack;
  if ( CallBack )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
      CallBack->fields.original_method_info,
      StringLiteral_21968/*"ng"*/,
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
  System_Collections_Generic_SortedDictionary_TKey__TValue__o *v24; // x22
  int32_t v25; // w2
  int32_t v26; // w3
  System_Collections_Generic_Dictionary_object__object__o *paramString; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *v28; // x0
  Il2CppObject *currentKey; // x22
  Il2CppObject *Item; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *v31; // x0
  System_Collections_Generic_SortedDictionary_TKey__TValue__o *v32; // x23
  Il2CppObject *v33; // x0
  struct System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0
  Il2CppObject *v35; // x22
  __int64 v36; // x0
  struct System_Collections_Generic_Dictionary_string__int__o *v37; // x0
  System_Collections_Generic_SortedDictionary_TKey__TValue__o *v38; // x23
  int32_t v39; // w24
  Il2CppObject *v40; // x0
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v42; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v43; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v44; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_49FDD0D & 1) == 0 )
  {
    sub_1B640C8(&System_Convert_TypeInfo, authParams);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__get_Keys__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__get_Keys__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__, v12);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__get_Current__,
      v13);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__get_Current__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_SortedDictionary_string__string__Add__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_SortedDictionary_string__string___ctor__, v18);
    sub_1B640C8(&System_Collections_Generic_SortedDictionary_string__string__TypeInfo, v19);
    sub_1B640C8(&UnityEngine_WWWForm_TypeInfo, v20);
    byte_49FDD0D = 1;
  }
  memset(&v44, 0, sizeof(v44));
  memset(&v43, 0, sizeof(v43));
  v21 = (UnityEngine_WWWForm_o *)sub_1B64314(UnityEngine_WWWForm_TypeInfo, authParams, method);
  UnityEngine_WWWForm___ctor(v21, 0LL);
  v24 = (System_Collections_Generic_SortedDictionary_TKey__TValue__o *)sub_1B64314(
                                                                         System_Collections_Generic_SortedDictionary_string__string__TypeInfo,
                                                                         v22,
                                                                         v23);
  System_Collections_Generic_SortedDictionary_object__object____ctor(
    v24,
    (const MethodInfo_36EC5CC *)Method_System_Collections_Generic_SortedDictionary_string__string___ctor__);
  *authParams = (System_Collections_Generic_SortedDictionary_string__string__o *)v24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)authParams, (int32_t)v24, v25, v26);
  paramString = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.paramString;
  if ( !paramString )
    goto LABEL_32;
  paramString = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Keys(
                                                                             paramString,
                                                                             (const MethodInfo_31790D8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Keys__);
  if ( !paramString )
    goto LABEL_32;
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator(
    &v42,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)paramString,
    (const MethodInfo_33D2D0C *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__);
  v44 = v42;
  while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext(
            &v44,
            (const MethodInfo_32770EC *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__) )
  {
    v28 = this->fields.paramString;
    if ( !v28 )
      sub_1B64324(0LL);
    currentKey = v44.fields._currentKey;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)v28,
             v44.fields._currentKey,
             (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    if ( !v21 )
      sub_1B64324(Item);
    UnityEngine_WWWForm__AddField(v21, (System_String_o *)currentKey, (System_String_o *)Item, 0LL);
    v31 = this->fields.paramString;
    if ( !v31 )
      sub_1B64324(0LL);
    v32 = (System_Collections_Generic_SortedDictionary_TKey__TValue__o *)*authParams;
    v33 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)v31,
            currentKey,
            (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    if ( !v32 )
      sub_1B64324(v33);
    System_Collections_Generic_SortedDictionary_object__object___Add(
      v32,
      currentKey,
      v33,
      (const MethodInfo_36ECB7C *)Method_System_Collections_Generic_SortedDictionary_string__string__Add__);
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose(
    &v44,
    (const MethodInfo_32770E8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__);
  paramString = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.paramInteger;
  if ( !paramString
    || (paramString = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__int___get_Keys(
                                                                                   (System_Collections_Generic_Dictionary_object__int__o *)paramString,
                                                                                   (const MethodInfo_3170390 *)Method_System_Collections_Generic_Dictionary_string__int__get_Keys__)) == 0LL )
  {
LABEL_32:
    sub_1B64324(paramString);
  }
  System_Collections_Generic_Dictionary_KeyCollection_object__int___GetEnumerator(
    &v42,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)paramString,
    (const MethodInfo_33D1AE8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__);
  v43 = v42;
  while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___MoveNext(
            &v43,
            (const MethodInfo_32748D4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__) )
  {
    paramInteger = this->fields.paramInteger;
    if ( !paramInteger )
      sub_1B64324(0LL);
    v35 = v43.fields._currentKey;
    v36 = System_Collections_Generic_Dictionary_object__int___get_Item(
            (System_Collections_Generic_Dictionary_object__int__o *)paramInteger,
            v43.fields._currentKey,
            (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    if ( !v21 )
      sub_1B64324(v36);
    UnityEngine_WWWForm__AddField_71589824(v21, (System_String_o *)v35, v36, 0LL);
    v37 = this->fields.paramInteger;
    if ( !v37 )
      sub_1B64324(0LL);
    v38 = (System_Collections_Generic_SortedDictionary_TKey__TValue__o *)*authParams;
    v39 = System_Collections_Generic_Dictionary_object__int___get_Item(
            (System_Collections_Generic_Dictionary_object__int__o *)v37,
            v35,
            (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    v40 = (Il2CppObject *)System_Convert__ToString_62040968(v39, 0LL);
    if ( !v38 )
      sub_1B64324(v40);
    System_Collections_Generic_SortedDictionary_object__object___Add(
      v38,
      v35,
      v40,
      (const MethodInfo_36ECB7C *)Method_System_Collections_Generic_SortedDictionary_string__string__Add__);
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___Dispose(
    &v43,
    (const MethodInfo_32748D0 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__);
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

  if ( (byte_49FDD07 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, fieldName);
    byte_49FDD07 = 1;
  }
  paramInteger = this->fields.paramInteger;
  if ( !paramInteger )
    sub_1B64324(0LL);
  System_Collections_Generic_Dictionary_object__int___set_Item(
    (System_Collections_Generic_Dictionary_object__int__o *)paramInteger,
    (Il2CppObject *)fieldName,
    data,
    (const MethodInfo_317069C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
}


void __fastcall RequestBase__replaceField_40877772(
        RequestBase_o *this,
        System_String_o *fieldName,
        int64_t data,
        const MethodInfo *method)
{
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v8; // x0
  Il2CppObject *v9; // x2
  int64_t v10; // [xsp+8h] [xbp-28h] BYREF

  v10 = data;
  if ( (byte_49FDD08 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, fieldName);
    sub_1B640C8(&StringLiteral_1/*""*/, v6);
    byte_49FDD08 = 1;
  }
  paramString = this->fields.paramString;
  v8 = System_Int64__ToString((int64_t)&v10, 0LL);
  if ( !paramString )
    sub_1B64324(v8);
  if ( v8 )
    v9 = (Il2CppObject *)v8;
  else
    v9 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v9,
    (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall RequestBase__replaceField_40877924(
        RequestBase_o *this,
        System_String_o *fieldName,
        float data,
        const MethodInfo *method)
{
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v8; // x0
  Il2CppObject *v9; // x2
  float v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = data;
  if ( (byte_49FDD09 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, fieldName);
    sub_1B640C8(&StringLiteral_1/*""*/, v6);
    byte_49FDD09 = 1;
  }
  paramString = this->fields.paramString;
  v8 = System_Single__ToString(data, (const MethodInfo *)&v10);
  if ( !paramString )
    sub_1B64324(v8);
  if ( v8 )
    v9 = (Il2CppObject *)v8;
  else
    v9 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v9,
    (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall RequestBase__replaceField_40878076(
        RequestBase_o *this,
        System_String_o *fieldName,
        double data,
        const MethodInfo *method)
{
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v8; // x0
  Il2CppObject *v9; // x2
  double v10; // [xsp+8h] [xbp-28h] BYREF

  v10 = data;
  if ( (byte_49FDD0A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, fieldName);
    sub_1B640C8(&StringLiteral_1/*""*/, v6);
    byte_49FDD0A = 1;
  }
  paramString = this->fields.paramString;
  v8 = System_Double__ToString(data, (const MethodInfo *)&v10);
  if ( !paramString )
    sub_1B64324(v8);
  if ( v8 )
    v9 = (Il2CppObject *)v8;
  else
    v9 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v9,
    (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall RequestBase__replaceField_40878228(
        RequestBase_o *this,
        System_String_o *fieldName,
        System_String_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0

  if ( (byte_49FDD0B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, fieldName);
    byte_49FDD0B = 1;
  }
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_1B64324(0LL);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    (Il2CppObject *)data,
    (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall RequestBase__replaceField_40878332(
        RequestBase_o *this,
        System_String_o *fieldName,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *v8; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x8

  if ( (byte_49FDD0C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, fieldName);
    sub_1B640C8(&JsonManager_TypeInfo, v7);
    byte_49FDD0C = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v8 = (Il2CppObject *)JsonManager__toJson(data, 0, 0, 0LL);
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_1B64324(v8);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v8,
    (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
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