void __fastcall RequestBase___ctor(RequestBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_object__int__o *v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  System_Collections_Generic_Dictionary_object__object__o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4C239AE & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, method);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v3);
    sub_1C3B764(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v4);
    sub_1C3B764(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v5);
    byte_4C239AE = 1;
  }
  v6 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v6,
    (const MethodInfo_334BECC *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.paramInteger = (struct System_Collections_Generic_Dictionary_string__int__o *)v6;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.paramInteger, (int64_t)v6, v7, v8, v9, v10, v11, v12);
  v13 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v13,
    (const MethodInfo_3354DB8 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)v13;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.paramString, (int64_t)v13, v14, v15, v16, v17, v18, v19);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RequestBase__AddSignatureField(RequestBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4C239AD & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    sub_1C3B764(&SignedData_TypeInfo, v3);
    byte_4C239AD = 1;
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

  if ( (byte_4C23998 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__int__Clear__, method);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__string__Clear__, v3);
    byte_4C23998 = 1;
  }
  paramInteger = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.paramInteger;
  if ( !paramInteger
    || (System_Collections_Generic_Dictionary_object__int___Clear(
          paramInteger,
          (const MethodInfo_334CA08 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__),
        (paramInteger = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.paramString) == 0LL) )
  {
    sub_1C3B9C0(paramInteger, method);
  }
  System_Collections_Generic_Dictionary_object__object___Clear(
    (System_Collections_Generic_Dictionary_object__object__o *)paramInteger,
    (const MethodInfo_33558F0 *)Method_System_Collections_Generic_Dictionary_string__string__Clear__);
}


void __fastcall RequestBase__ClearParameter(RequestBase_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  System_String_o *v4; // x0
  System_String_o *v5; // x19

  if ( (byte_4C239AA & 1) == 0 )
  {
    sub_1C3B764(&ManagerConfig_TypeInfo, method);
    byte_4C239AA = 1;
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
  __int64 v9; // x1
  System_Byte_array *v10; // x21
  System_IO_MemoryStream_o *v11; // x19
  System_IO_Compression_GZipStream_o *v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  System_IO_Compression_GZipStream_c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  System_Byte_array *v21; // x21
  System_IO_MemoryStream_c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0

  if ( (byte_4C239AC & 1) == 0 )
  {
    sub_1C3B764(&System_IO_Compression_GZipStream_TypeInfo, json);
    sub_1C3B764(&System_IDisposable_TypeInfo, v4);
    sub_1C3B764(&System_IO_MemoryStream_TypeInfo, v5);
    sub_1C3B764(&MiniMessagePack_MiniMessagePacker_TypeInfo, v6);
    byte_4C239AC = 1;
  }
  v7 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C3B9B0(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v7, 0LL);
  if ( !v7 )
    sub_1C3B9C0(v8, v9);
  v10 = MiniMessagePack_MiniMessagePacker__PackClass(v7, json, 0LL);
  v11 = (System_IO_MemoryStream_o *)sub_1C3B9B0(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v11, 0LL);
  v12 = (System_IO_Compression_GZipStream_o *)sub_1C3B9B0(System_IO_Compression_GZipStream_TypeInfo);
  System_IO_Compression_GZipStream___ctor_70570424(v12, (System_IO_Stream_o *)v11, 0, 0LL);
  if ( !v10 )
    sub_1C3B9C0(v13, v14);
  if ( !v12 )
    sub_1C3B9C0(v13, v14);
  ((void (__fastcall *)(System_IO_Compression_GZipStream_o *, System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))v12->klass->vtable._36_Write.method)(
    v12,
    v10,
    0LL,
    v10->max_length,
    v12->klass->vtable._37_Write.methodPtr);
  klass = v12->klass;
  v16 = *(unsigned __int16 *)(&v12->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v12->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v16;
      p_offset += 4;
      if ( !v16 )
        goto LABEL_10;
    }
    v18 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v18 = sub_1C8D744(v12, System_IDisposable_TypeInfo, 0LL);
  }
  v19 = (*(__int64 (__fastcall **)(System_IO_Compression_GZipStream_o *, _QWORD))v18)(v12, *(_QWORD *)(v18 + 8));
  if ( !v11 )
    sub_1C3B9C0(v19, v20);
  v21 = (System_Byte_array *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v11->klass->vtable._42_ToArray.method)(
                               v11,
                               v11->klass[1]._1.image);
  v22 = v11->klass;
  v23 = *(unsigned __int16 *)(&v11->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v11->klass->_2.bitflags2 + 3) )
  {
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_17;
    }
    v25 = (__int64)(&v22->vtable._0_Equals.method + 2 * *v24);
  }
  else
  {
LABEL_17:
    v25 = sub_1C8D744(v11, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v25)(v11, *(_QWORD *)(v25 + 8));
  return v21;
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
  System_IO_BinaryReader_o *v16; // x19
  const MethodInfo *v17; // x1
  __int64 v18; // x0
  __int64 v19; // x1
  int v20; // w23
  int v21; // w22
  Il2CppObject *v22; // x24
  __int64 v23; // x1
  Il2CppObject *v24; // x2
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0
  Il2CppObject *v26; // x23
  __int64 v27; // x1
  int32_t v28; // w2
  struct System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0
  System_IO_BinaryReader_c *klass; // x8
  __int64 v31; // x9
  int32_t *p_offset; // x10
  __int64 v33; // x0

  if ( (byte_4C239A8 & 1) == 0 )
  {
    sub_1C3B764(&System_IO_BinaryReader_TypeInfo, isRefreshTime);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__string__Add__, v6);
    sub_1C3B764(&System_IDisposable_TypeInfo, v7);
    sub_1C3B764(&ManagerConfig_TypeInfo, v8);
    sub_1C3B764(&NetworkManager_TypeInfo, v9);
    byte_4C239A8 = 1;
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
  v16 = (System_IO_BinaryReader_o *)sub_1C3B9B0(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v16, v15, 0LL);
  RequestBase__ClearField(this, v17);
  if ( !v16 )
    sub_1C3B9C0(v18, v19);
  v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._15_ReadInt32.method)(
          v16,
          v16->klass->vtable._16_ReadUInt32.methodPtr);
  v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._15_ReadInt32.method)(
          v16,
          v16->klass->vtable._16_ReadUInt32.methodPtr);
  if ( v20 >= 1 )
  {
    do
    {
      v22 = (Il2CppObject *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._22_ReadString.method)(
                              v16,
                              v16->klass->vtable._23_ReadChars.methodPtr);
      v24 = (Il2CppObject *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._22_ReadString.method)(
                              v16,
                              v16->klass->vtable._23_ReadChars.methodPtr);
      paramString = this->fields.paramString;
      if ( !paramString )
        sub_1C3B9C0(0LL, v23);
      System_Collections_Generic_Dictionary_object__object___Add(
        (System_Collections_Generic_Dictionary_object__object__o *)paramString,
        v22,
        v24,
        (const MethodInfo_3355768 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
      --v20;
    }
    while ( v20 );
  }
  if ( v21 >= 1 )
  {
    do
    {
      v26 = (Il2CppObject *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._22_ReadString.method)(
                              v16,
                              v16->klass->vtable._23_ReadChars.methodPtr);
      v28 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._15_ReadInt32.method)(
              v16,
              v16->klass->vtable._16_ReadUInt32.methodPtr);
      paramInteger = this->fields.paramInteger;
      if ( !paramInteger )
        sub_1C3B9C0(0LL, v27);
      System_Collections_Generic_Dictionary_object__int___Add(
        (System_Collections_Generic_Dictionary_object__int__o *)paramInteger,
        v26,
        v28,
        (const MethodInfo_334C880 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
      --v21;
    }
    while ( v21 );
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__ReplaceBaseField(this, isRefreshTime, 0LL);
  v11 = 1;
  klass = v16->klass;
  v31 = *(unsigned __int16 *)(&v16->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v16->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      p_offset += 4;
      if ( !v31 )
        goto LABEL_23;
    }
    v33 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_23:
    v33 = sub_1C8D744(v16, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v33)(v16, *(_QWORD *)(v33 + 8));
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

  if ( (byte_4C239AB & 1) == 0 )
  {
    sub_1C3B764(&byte___TypeInfo, obj);
    sub_1C3B764(&System_Convert_TypeInfo, v4);
    sub_1C3B764(&System_IO_Compression_GZipStream_TypeInfo, v5);
    sub_1C3B764(&System_IO_MemoryStream_TypeInfo, v6);
    this = (RequestBase_o *)sub_1C3B764(&MiniMessagePack_MiniMessagePacker_TypeInfo, v7);
    byte_4C239AB = 1;
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
  v10 = sub_1C3B80C(byte___TypeInfo, 1024LL);
  v11 = (System_IO_MemoryStream_o *)sub_1C3B9B0(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_63512624(v11, v9, 0LL);
  v12 = (System_IO_Compression_GZipStream_o *)sub_1C3B9B0(System_IO_Compression_GZipStream_TypeInfo);
  System_IO_Compression_GZipStream___ctor(v12, (System_IO_Stream_o *)v11, 0, 0LL);
  v13 = (System_IO_MemoryStream_o *)sub_1C3B9B0(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v13, 0LL);
  if ( !v10 || !v12 )
    goto LABEL_15;
  this = (RequestBase_o *)((__int64 (__fastcall *)(System_IO_Compression_GZipStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v12->klass->vtable._33_Read.method)(
                            v12,
                            v10,
                            0LL,
                            *(unsigned int *)(v10 + 24),
                            v12->klass->vtable._34_Read.methodPtr);
  if ( (int)this >= 1 )
  {
    v14 = (unsigned int)this;
    while ( v13 )
    {
      ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, __int64, Il2CppMethodPointer))v13->klass->vtable._36_Write.method)(
        v13,
        v10,
        0LL,
        v14,
        v13->klass->vtable._37_Write.methodPtr);
      this = (RequestBase_o *)((__int64 (__fastcall *)(System_IO_Compression_GZipStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v12->klass->vtable._33_Read.method)(
                                v12,
                                v10,
                                0LL,
                                *(unsigned int *)(v10 + 24),
                                v12->klass->vtable._34_Read.methodPtr);
      v14 = (unsigned int)this;
      if ( (int)this <= 0 )
        goto LABEL_12;
    }
LABEL_15:
    sub_1C3B9C0(this, obj);
  }
LABEL_12:
  v15 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C3B9B0(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v15, 0LL);
  if ( !v13 )
    goto LABEL_15;
  this = (RequestBase_o *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v13->klass->vtable._42_ToArray.method)(
                            v13,
                            v13->klass[1]._1.image);
  if ( !v15 )
    goto LABEL_15;
  return MiniMessagePack_MiniMessagePacker__Unpack_38437708(v15, (System_Byte_array *)this, 0LL);
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
  struct System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0
  unsigned int v28; // w0
  __int64 v29; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v30; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  __int64 v32; // x1
  Il2CppObject *currentKey; // x21
  __int64 v34; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v35; // x0
  Il2CppObject *Item; // x0
  __int64 v37; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *v38; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v39; // x0
  __int64 v40; // x1
  Il2CppObject *v41; // x21
  __int64 v42; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *v43; // x0
  unsigned int v44; // w0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v46; // x9
  int32_t *p_offset; // x10
  __int64 v48; // x0
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v49; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v50; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v51; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_4C239A9 & 1) == 0 )
  {
    sub_1C3B764(&System_IO_BinaryWriter_TypeInfo, method);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__int__get_Count__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__string__get_Keys__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__int__get_Keys__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__, v12);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__get_Current__,
      v13);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__get_Current__, v14);
    sub_1C3B764(&System_IDisposable_TypeInfo, v15);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__, v16);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__, v17);
    sub_1C3B764(&ManagerConfig_TypeInfo, v18);
    byte_4C239A9 = 1;
  }
  v19 = ManagerConfig_TypeInfo;
  memset(&v51, 0, sizeof(v51));
  memset(&v50, 0, sizeof(v50));
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
      v22 = (System_IO_BinaryWriter_o *)sub_1C3B9B0(System_IO_BinaryWriter_TypeInfo);
      System_IO_BinaryWriter___ctor_63607104(v22, v21, 0LL);
      paramString = this->fields.paramString;
      if ( !paramString )
        sub_1C3B9C0(0LL, v23);
      Count = System_Collections_Generic_Dictionary_object__object___get_Count(
                (System_Collections_Generic_Dictionary_object__object__o *)paramString,
                (const MethodInfo_3355438 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
      if ( !v22 )
        sub_1C3B9C0(Count, (unsigned int)Count);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v22->klass->vtable._17_Write.method)(
        v22,
        (unsigned int)Count,
        v22->klass->vtable._18_Write.methodPtr);
      paramInteger = this->fields.paramInteger;
      if ( !paramInteger )
        sub_1C3B9C0(0LL, v26);
      v28 = System_Collections_Generic_Dictionary_object__int___get_Count(
              (System_Collections_Generic_Dictionary_object__int__o *)paramInteger,
              (const MethodInfo_334C550 *)Method_System_Collections_Generic_Dictionary_string__int__get_Count__);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v22->klass->vtable._17_Write.method)(
        v22,
        v28,
        v22->klass->vtable._18_Write.methodPtr);
      v30 = this->fields.paramString;
      if ( !v30 )
        sub_1C3B9C0(0LL, v29);
      Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
               (System_Collections_Generic_Dictionary_object__object__o *)v30,
               (const MethodInfo_3355448 *)Method_System_Collections_Generic_Dictionary_string__string__get_Keys__);
      if ( !Keys )
        sub_1C3B9C0(0LL, v32);
      System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator(
        &v49,
        Keys,
        (const MethodInfo_35B397C *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__);
      v51 = v49;
      while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext(
                &v51,
                (const MethodInfo_3452708 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__) )
      {
        currentKey = v51.fields._currentKey;
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppObject *, void *))v22->klass->vtable._22_Write.method)(
          v22,
          v51.fields._currentKey,
          v22->klass[1]._1.image);
        v35 = this->fields.paramString;
        if ( !v35 )
          sub_1C3B9C0(0LL, v34);
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)v35,
                 currentKey,
                 (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppObject *, void *))v22->klass->vtable._22_Write.method)(
          v22,
          Item,
          v22->klass[1]._1.image);
      }
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose(
        &v51,
        (const MethodInfo_3452704 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__);
      v38 = this->fields.paramInteger;
      if ( !v38 )
        sub_1C3B9C0(0LL, v37);
      v39 = System_Collections_Generic_Dictionary_object__int___get_Keys(
              (System_Collections_Generic_Dictionary_object__int__o *)v38,
              (const MethodInfo_334C560 *)Method_System_Collections_Generic_Dictionary_string__int__get_Keys__);
      if ( !v39 )
        sub_1C3B9C0(0LL, v40);
      System_Collections_Generic_Dictionary_KeyCollection_object__int___GetEnumerator(
        &v49,
        v39,
        (const MethodInfo_35B2758 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__);
      v50 = v49;
      while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___MoveNext(
                &v50,
                (const MethodInfo_344FEF0 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__) )
      {
        v41 = v50.fields._currentKey;
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppObject *, void *))v22->klass->vtable._22_Write.method)(
          v22,
          v50.fields._currentKey,
          v22->klass[1]._1.image);
        v43 = this->fields.paramInteger;
        if ( !v43 )
          sub_1C3B9C0(0LL, v42);
        v44 = System_Collections_Generic_Dictionary_object__int___get_Item(
                (System_Collections_Generic_Dictionary_object__int__o *)v43,
                v41,
                (const MethodInfo_334C800 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v22->klass->vtable._17_Write.method)(
          v22,
          v44,
          v22->klass->vtable._18_Write.methodPtr);
      }
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___Dispose(
        &v50,
        (const MethodInfo_344FEEC *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__);
      klass = v22->klass;
      v46 = *(unsigned __int16 *)(&v22->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v22->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v46;
          p_offset += 4;
          if ( !v46 )
            goto LABEL_26;
        }
        v48 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_26:
        v48 = sub_1C8D744(v22, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v48)(v22, *(_QWORD *)(v48 + 8));
    }
  }
}


void __fastcall RequestBase__addBaseField(RequestBase_o *this, const MethodInfo *method)
{
  if ( (byte_4C2399F & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    byte_4C2399F = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__SetBaseField(this, 0LL);
}


void __fastcall RequestBase__addDeviceInfoField(RequestBase_o *this, const MethodInfo *method)
{
  if ( (byte_4C239A0 & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    byte_4C239A0 = 1;
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

  if ( (byte_4C23999 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__int__Add__, fieldName);
    byte_4C23999 = 1;
  }
  paramInteger = this->fields.paramInteger;
  if ( !paramInteger )
    sub_1C3B9C0(0LL, fieldName);
  System_Collections_Generic_Dictionary_object__int___Add(
    (System_Collections_Generic_Dictionary_object__int__o *)paramInteger,
    (Il2CppObject *)fieldName,
    data,
    (const MethodInfo_334C880 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
}


void __fastcall RequestBase__addField_42621852(
        RequestBase_o *this,
        System_String_o *fieldName,
        System_String_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0

  if ( (byte_4C2399D & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__string__Add__, fieldName);
    byte_4C2399D = 1;
  }
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_1C3B9C0(0LL, fieldName);
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    (Il2CppObject *)data,
    (const MethodInfo_3355768 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void __fastcall RequestBase__addField_42628192(
        RequestBase_o *this,
        System_String_o *fieldName,
        int64_t data,
        const MethodInfo *method)
{
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v8; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x2
  int64_t v11; // [xsp+8h] [xbp-28h] BYREF

  v11 = data;
  if ( (byte_4C2399A & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__string__Add__, fieldName);
    sub_1C3B764(&StringLiteral_1/*""*/, v6);
    byte_4C2399A = 1;
  }
  paramString = this->fields.paramString;
  v8 = System_Int64__ToString((int64_t)&v11, 0LL);
  if ( !paramString )
    sub_1C3B9C0(v8, v9);
  if ( v8 )
    v10 = (Il2CppObject *)v8;
  else
    v10 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v10,
    (const MethodInfo_3355768 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void __fastcall RequestBase__addField_42630344(
        RequestBase_o *this,
        System_String_o *fieldName,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x8

  if ( (byte_4C2399E & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__string__Add__, fieldName);
    sub_1C3B764(&JsonManager_TypeInfo, v7);
    byte_4C2399E = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v8 = (Il2CppObject *)JsonManager__toJson(data, 0, 0, 0LL);
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_1C3B9C0(v8, v9);
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v8,
    (const MethodInfo_3355768 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void __fastcall RequestBase__addField_42673664(
        RequestBase_o *this,
        System_String_o *fieldName,
        float data,
        const MethodInfo *method)
{
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v8; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x2
  float v11; // [xsp+Ch] [xbp-24h] BYREF

  v11 = data;
  if ( (byte_4C2399B & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__string__Add__, fieldName);
    sub_1C3B764(&StringLiteral_1/*""*/, v6);
    byte_4C2399B = 1;
  }
  paramString = this->fields.paramString;
  v8 = System_Single__ToString(data, (const MethodInfo *)&v11);
  if ( !paramString )
    sub_1C3B9C0(v8, v9);
  if ( v8 )
    v10 = (Il2CppObject *)v8;
  else
    v10 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v10,
    (const MethodInfo_3355768 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void __fastcall RequestBase__addField_42673816(
        RequestBase_o *this,
        System_String_o *fieldName,
        double data,
        const MethodInfo *method)
{
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v8; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x2
  double v11; // [xsp+8h] [xbp-28h] BYREF

  v11 = data;
  if ( (byte_4C2399C & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__string__Add__, fieldName);
    sub_1C3B764(&StringLiteral_1/*""*/, v6);
    byte_4C2399C = 1;
  }
  paramString = this->fields.paramString;
  v8 = System_Double__ToString(data, (const MethodInfo *)&v11);
  if ( !paramString )
    sub_1C3B9C0(v8, v9);
  if ( v8 )
    v10 = (Il2CppObject *)v8;
  else
    v10 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v10,
    (const MethodInfo_3355768 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


bool __fastcall RequestBase__backgroundErrorRequest(
        RequestBase_o *this,
        System_String_o *errorCode,
        const MethodInfo *method)
{
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8

  if ( (byte_4C23994 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_22507/*"referrerMapId"*/, errorCode);
    byte_4C23994 = 1;
  }
  CallBack = this->fields.CallBack;
  if ( CallBack )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
      CallBack->fields.original_method_info,
      StringLiteral_22507/*"referrerMapId"*/,
      *(_QWORD *)&CallBack->fields.extra_arg);
  return 1;
}


void __fastcall RequestBase__backgroundErrorRetry(RequestBase_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall RequestBase__beginRequest(RequestBase_o *this, const MethodInfo *method)
{
  if ( (byte_4C23996 & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    byte_4C23996 = 1;
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

  if ( (byte_4C23997 & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, isRefreshTime);
    byte_4C23997 = 1;
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

  if ( (byte_4C23995 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_22507/*"referrerMapId"*/, errorCode);
    byte_4C23995 = 1;
  }
  CallBack = this->fields.CallBack;
  if ( CallBack )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
      CallBack->fields.original_method_info,
      StringLiteral_22507/*"referrerMapId"*/,
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
  System_Collections_Generic_SortedDictionary_TKey__TValue__o *v22; // x22
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x1
  System_Collections_Generic_Dictionary_object__object__o *paramString; // x0
  __int64 v31; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v32; // x0
  Il2CppObject *currentKey; // x22
  Il2CppObject *Item; // x0
  __int64 v35; // x1
  __int64 v36; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v37; // x0
  System_Collections_Generic_SortedDictionary_TKey__TValue__o *v38; // x23
  Il2CppObject *v39; // x0
  __int64 v40; // x1
  __int64 v41; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0
  Il2CppObject *v43; // x22
  __int64 v44; // x0
  __int64 v45; // x1
  __int64 v46; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *v47; // x0
  System_Collections_Generic_SortedDictionary_TKey__TValue__o *v48; // x23
  int32_t v49; // w24
  Il2CppObject *v50; // x0
  __int64 v51; // x1
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v53; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v54; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v55; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4C239A7 & 1) == 0 )
  {
    sub_1C3B764(&System_Convert_TypeInfo, authParams);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__string__get_Keys__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__int__get_Keys__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__, v12);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__get_Current__,
      v13);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__get_Current__, v14);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__, v15);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__, v16);
    sub_1C3B764(&Method_System_Collections_Generic_SortedDictionary_string__string__Add__, v17);
    sub_1C3B764(&Method_System_Collections_Generic_SortedDictionary_string__string___ctor__, v18);
    sub_1C3B764(&System_Collections_Generic_SortedDictionary_string__string__TypeInfo, v19);
    sub_1C3B764(&UnityEngine_WWWForm_TypeInfo, v20);
    byte_4C239A7 = 1;
  }
  memset(&v55, 0, sizeof(v55));
  memset(&v54, 0, sizeof(v54));
  v21 = (UnityEngine_WWWForm_o *)sub_1C3B9B0(UnityEngine_WWWForm_TypeInfo);
  UnityEngine_WWWForm___ctor(v21, 0LL);
  v22 = (System_Collections_Generic_SortedDictionary_TKey__TValue__o *)sub_1C3B9B0(System_Collections_Generic_SortedDictionary_string__string__TypeInfo);
  System_Collections_Generic_SortedDictionary_object__object____ctor(
    v22,
    (const MethodInfo_38C8CC4 *)Method_System_Collections_Generic_SortedDictionary_string__string___ctor__);
  *authParams = (System_Collections_Generic_SortedDictionary_string__string__o *)v22;
  sub_1C3B708((PartyOrganizationUtility_o *)authParams, (int64_t)v22, v23, v24, v25, v26, v27, v28);
  paramString = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.paramString;
  if ( !paramString )
    goto LABEL_32;
  paramString = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Keys(
                                                                             paramString,
                                                                             (const MethodInfo_3355448 *)Method_System_Collections_Generic_Dictionary_string__string__get_Keys__);
  if ( !paramString )
    goto LABEL_32;
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator(
    &v53,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)paramString,
    (const MethodInfo_35B397C *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__);
  v55 = v53;
  while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext(
            &v55,
            (const MethodInfo_3452708 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__) )
  {
    v32 = this->fields.paramString;
    if ( !v32 )
      sub_1C3B9C0(0LL, v31);
    currentKey = v55.fields._currentKey;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)v32,
             v55.fields._currentKey,
             (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    if ( !v21 )
      sub_1C3B9C0(Item, v35);
    UnityEngine_WWWForm__AddField(v21, (System_String_o *)currentKey, (System_String_o *)Item, 0LL);
    v37 = this->fields.paramString;
    if ( !v37 )
      sub_1C3B9C0(0LL, v36);
    v38 = (System_Collections_Generic_SortedDictionary_TKey__TValue__o *)*authParams;
    v39 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)v37,
            currentKey,
            (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    if ( !v38 )
      sub_1C3B9C0(v39, v40);
    System_Collections_Generic_SortedDictionary_object__object___Add(
      v38,
      currentKey,
      v39,
      (const MethodInfo_38C926C *)Method_System_Collections_Generic_SortedDictionary_string__string__Add__);
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose(
    &v55,
    (const MethodInfo_3452704 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__);
  paramString = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.paramInteger;
  if ( !paramString
    || (paramString = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__int___get_Keys(
                                                                                   (System_Collections_Generic_Dictionary_object__int__o *)paramString,
                                                                                   (const MethodInfo_334C560 *)Method_System_Collections_Generic_Dictionary_string__int__get_Keys__)) == 0LL )
  {
LABEL_32:
    sub_1C3B9C0(paramString, v29);
  }
  System_Collections_Generic_Dictionary_KeyCollection_object__int___GetEnumerator(
    &v53,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)paramString,
    (const MethodInfo_35B2758 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__);
  v54 = v53;
  while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___MoveNext(
            &v54,
            (const MethodInfo_344FEF0 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__) )
  {
    paramInteger = this->fields.paramInteger;
    if ( !paramInteger )
      sub_1C3B9C0(0LL, v41);
    v43 = v54.fields._currentKey;
    v44 = System_Collections_Generic_Dictionary_object__int___get_Item(
            (System_Collections_Generic_Dictionary_object__int__o *)paramInteger,
            v54.fields._currentKey,
            (const MethodInfo_334C800 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    if ( !v21 )
      sub_1C3B9C0(v44, v45);
    UnityEngine_WWWForm__AddField_73618528(v21, (System_String_o *)v43, v44, 0LL);
    v47 = this->fields.paramInteger;
    if ( !v47 )
      sub_1C3B9C0(0LL, v46);
    v48 = (System_Collections_Generic_SortedDictionary_TKey__TValue__o *)*authParams;
    v49 = System_Collections_Generic_Dictionary_object__int___get_Item(
            (System_Collections_Generic_Dictionary_object__int__o *)v47,
            v43,
            (const MethodInfo_334C800 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    v50 = (Il2CppObject *)System_Convert__ToString_64034520(v49, 0LL);
    if ( !v48 )
      sub_1C3B9C0(v50, v51);
    System_Collections_Generic_SortedDictionary_object__object___Add(
      v48,
      v43,
      v50,
      (const MethodInfo_38C926C *)Method_System_Collections_Generic_SortedDictionary_string__string__Add__);
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___Dispose(
    &v54,
    (const MethodInfo_344FEEC *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__);
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

  if ( (byte_4C239A1 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, fieldName);
    byte_4C239A1 = 1;
  }
  paramInteger = this->fields.paramInteger;
  if ( !paramInteger )
    sub_1C3B9C0(0LL, fieldName);
  System_Collections_Generic_Dictionary_object__int___set_Item(
    (System_Collections_Generic_Dictionary_object__int__o *)paramInteger,
    (Il2CppObject *)fieldName,
    data,
    (const MethodInfo_334C86C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
}


void __fastcall RequestBase__replaceField_42708324(
        RequestBase_o *this,
        System_String_o *fieldName,
        int64_t data,
        const MethodInfo *method)
{
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v8; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x2
  int64_t v11; // [xsp+8h] [xbp-28h] BYREF

  v11 = data;
  if ( (byte_4C239A2 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, fieldName);
    sub_1C3B764(&StringLiteral_1/*""*/, v6);
    byte_4C239A2 = 1;
  }
  paramString = this->fields.paramString;
  v8 = System_Int64__ToString((int64_t)&v11, 0LL);
  if ( !paramString )
    sub_1C3B9C0(v8, v9);
  if ( v8 )
    v10 = (Il2CppObject *)v8;
  else
    v10 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v10,
    (const MethodInfo_3355754 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall RequestBase__replaceField_42708476(
        RequestBase_o *this,
        System_String_o *fieldName,
        float data,
        const MethodInfo *method)
{
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v8; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x2
  float v11; // [xsp+Ch] [xbp-24h] BYREF

  v11 = data;
  if ( (byte_4C239A3 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, fieldName);
    sub_1C3B764(&StringLiteral_1/*""*/, v6);
    byte_4C239A3 = 1;
  }
  paramString = this->fields.paramString;
  v8 = System_Single__ToString(data, (const MethodInfo *)&v11);
  if ( !paramString )
    sub_1C3B9C0(v8, v9);
  if ( v8 )
    v10 = (Il2CppObject *)v8;
  else
    v10 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v10,
    (const MethodInfo_3355754 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall RequestBase__replaceField_42708628(
        RequestBase_o *this,
        System_String_o *fieldName,
        double data,
        const MethodInfo *method)
{
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v8; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x2
  double v11; // [xsp+8h] [xbp-28h] BYREF

  v11 = data;
  if ( (byte_4C239A4 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, fieldName);
    sub_1C3B764(&StringLiteral_1/*""*/, v6);
    byte_4C239A4 = 1;
  }
  paramString = this->fields.paramString;
  v8 = System_Double__ToString(data, (const MethodInfo *)&v11);
  if ( !paramString )
    sub_1C3B9C0(v8, v9);
  if ( v8 )
    v10 = (Il2CppObject *)v8;
  else
    v10 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v10,
    (const MethodInfo_3355754 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall RequestBase__replaceField_42708780(
        RequestBase_o *this,
        System_String_o *fieldName,
        System_String_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0

  if ( (byte_4C239A5 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, fieldName);
    byte_4C239A5 = 1;
  }
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_1C3B9C0(0LL, fieldName);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    (Il2CppObject *)data,
    (const MethodInfo_3355754 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall RequestBase__replaceField_42708884(
        RequestBase_o *this,
        System_String_o *fieldName,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x8

  if ( (byte_4C239A6 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, fieldName);
    sub_1C3B764(&JsonManager_TypeInfo, v7);
    byte_4C239A6 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v8 = (Il2CppObject *)JsonManager__toJson(data, 0, 0, 0LL);
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_1C3B9C0(v8, v9);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v8,
    (const MethodInfo_3355754 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
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