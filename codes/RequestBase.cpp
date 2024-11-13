void __fastcall RequestBase___ctor(RequestBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_Dictionary_object__int__o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Collections_Generic_Dictionary_object__object__o *v21; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4B17B5D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v9, v10);
    byte_4B17B5D = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                  method,
                                                                  v2,
                                                                  v3);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v11,
    (const MethodInfo_325BB64 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.paramInteger = (struct System_Collections_Generic_Dictionary_string__int__o *)v11;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.paramInteger, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  v21 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_Dictionary_string__string__TypeInfo,
                                                                     v18,
                                                                     v19,
                                                                     v20);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v21,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)v21;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.paramString, (int64_t)v21, v22, v23, v24, v25, v26, v27);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RequestBase__AddSignatureField(RequestBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1

  if ( (byte_4B17B5C & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&SignedData_TypeInfo, v4, v5);
    byte_4B17B5C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  NetworkManager__SetSignatureField(this, 0LL);
  if ( !SignedData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo, v6);
  SignedData__RefillSigningData(3, 0LL);
}


void __fastcall RequestBase__ClearField(RequestBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_Dictionary_object__int__o *paramInteger; // x0

  if ( (byte_4B17B47 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__Clear__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__Clear__, v4, v5);
    byte_4B17B47 = 1;
  }
  paramInteger = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.paramInteger;
  if ( !paramInteger
    || (System_Collections_Generic_Dictionary_object__int___Clear(
          paramInteger,
          (const MethodInfo_325C6A0 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__),
        (paramInteger = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.paramString) == 0LL) )
  {
    sub_1BCAA3C(paramInteger, method);
  }
  System_Collections_Generic_Dictionary_object__object___Clear(
    (System_Collections_Generic_Dictionary_object__object__o *)paramInteger,
    (const MethodInfo_32653E8 *)Method_System_Collections_Generic_Dictionary_string__string__Clear__);
}


void __fastcall RequestBase__ClearParameter(RequestBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ManagerConfig_c *v4; // x0
  System_String_o *v5; // x0
  System_String_o *v6; // x19

  if ( (byte_4B17B59 & 1) == 0 )
  {
    sub_1BCA7E0(&ManagerConfig_TypeInfo, method, v2);
    byte_4B17B59 = 1;
  }
  v4 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( !v4->static_fields->UseMock )
  {
    v5 = (System_String_o *)((__int64 (__fastcall *)(RequestBase_o *, void *))this->klass->vtable._16_getParameterFileName.method)(
                              this,
                              this->klass[1]._1.image);
    if ( v5 )
    {
      v6 = v5;
      if ( System_IO_File__Exists(v5, 0LL) )
        System_IO_File__Delete(v6, 0LL);
    }
  }
}


System_Byte_array *__fastcall RequestBase__PackToMessagePack(
        RequestBase_o *this,
        Il2CppObject *json,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  MiniMessagePack_MiniMessagePacker_o *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  System_Byte_array *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_IO_MemoryStream_o *v18; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_IO_Compression_GZipStream_o *v22; // x20
  __int64 v23; // x0
  __int64 v24; // x1
  System_IO_Compression_GZipStream_c *klass; // x8
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 v30; // x1
  System_Byte_array *v31; // x21
  System_IO_MemoryStream_c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0

  if ( (byte_4B17B5B & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_Compression_GZipStream_TypeInfo, json, method);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_IO_MemoryStream_TypeInfo, v7, v8);
    sub_1BCA7E0(&MiniMessagePack_MiniMessagePacker_TypeInfo, v9, v10);
    byte_4B17B5B = 1;
  }
  v11 = (MiniMessagePack_MiniMessagePacker_o *)sub_1BCAA2C(MiniMessagePack_MiniMessagePacker_TypeInfo, json, method, v3);
  MiniMessagePack_MiniMessagePacker___ctor(v11, 0LL);
  if ( !v11 )
    sub_1BCAA3C(v12, v13);
  v14 = MiniMessagePack_MiniMessagePacker__PackClass(v11, json, 0LL);
  v18 = (System_IO_MemoryStream_o *)sub_1BCAA2C(System_IO_MemoryStream_TypeInfo, v15, v16, v17);
  System_IO_MemoryStream___ctor(v18, 0LL);
  v22 = (System_IO_Compression_GZipStream_o *)sub_1BCAA2C(System_IO_Compression_GZipStream_TypeInfo, v19, v20, v21);
  System_IO_Compression_GZipStream___ctor_69602516(v22, (System_IO_Stream_o *)v18, 0, 0LL);
  if ( !v14 )
    sub_1BCAA3C(v23, v24);
  if ( !v22 )
    sub_1BCAA3C(v23, v24);
  ((void (__fastcall *)(System_IO_Compression_GZipStream_o *, System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))v22->klass->vtable._36_Write.method)(
    v22,
    v14,
    0LL,
    v14->max_length,
    v22->klass->vtable._37_Write.methodPtr);
  klass = v22->klass;
  v26 = *(unsigned __int16 *)(&v22->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v22->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      p_offset += 4;
      if ( !v26 )
        goto LABEL_10;
    }
    v28 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v28 = sub_1C1C7C0(v22, System_IDisposable_TypeInfo, 0LL);
  }
  v29 = (*(__int64 (__fastcall **)(System_IO_Compression_GZipStream_o *, _QWORD))v28)(v22, *(_QWORD *)(v28 + 8));
  if ( !v18 )
    sub_1BCAA3C(v29, v30);
  v31 = (System_Byte_array *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v18->klass->vtable._42_ToArray.method)(
                               v18,
                               v18->klass[1]._1.image);
  v32 = v18->klass;
  v33 = *(unsigned __int16 *)(&v18->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v18->klass->_2.bitflags2 + 3) )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_17;
    }
    v35 = (__int64)(&v32->vtable._0_Equals.method + 2 * *v34);
  }
  else
  {
LABEL_17:
    v35 = sub_1C1C7C0(v18, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v35)(v18, *(_QWORD *)(v35 + 8));
  return v31;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall RequestBase__ReadParameter(RequestBase_o *this, bool isRefreshTime, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  ManagerConfig_c *v15; // x0
  bool v16; // w20
  System_String_o *v18; // x0
  System_String_o *v19; // x19
  System_IO_Stream_o *v20; // x22
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_IO_BinaryReader_o *v24; // x19
  const MethodInfo *v25; // x1
  __int64 v26; // x0
  __int64 v27; // x1
  int v28; // w23
  __int64 v29; // x1
  int v30; // w22
  Il2CppObject *v31; // x24
  __int64 v32; // x1
  Il2CppObject *v33; // x2
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0
  Il2CppObject *v35; // x23
  __int64 v36; // x1
  int32_t v37; // w2
  struct System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0
  System_IO_BinaryReader_c *klass; // x8
  __int64 v40; // x9
  int32_t *p_offset; // x10
  __int64 v42; // x0

  if ( (byte_4B17B57 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryReader_TypeInfo, isRefreshTime, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__Add__, v7, v8);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v9, v10);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v11, v12);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v13, v14);
    byte_4B17B57 = 1;
  }
  v15 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, isRefreshTime);
    v15 = ManagerConfig_TypeInfo;
  }
  if ( v15->static_fields->UseMock )
    return 0;
  v18 = (System_String_o *)((__int64 (__fastcall *)(RequestBase_o *, void *, const MethodInfo *))this->klass->vtable._16_getParameterFileName.method)(
                             this,
                             this->klass[1]._1.image,
                             method);
  if ( !v18 )
    return 0;
  v19 = v18;
  if ( !System_IO_File__Exists(v18, 0LL) )
    return 0;
  v20 = (System_IO_Stream_o *)System_IO_File__OpenRead(v19, 0LL);
  v24 = (System_IO_BinaryReader_o *)sub_1BCAA2C(System_IO_BinaryReader_TypeInfo, v21, v22, v23);
  System_IO_BinaryReader___ctor(v24, v20, 0LL);
  RequestBase__ClearField(this, v25);
  if ( !v24 )
    sub_1BCAA3C(v26, v27);
  v28 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v24->klass->vtable._15_ReadInt32.method)(
          v24,
          v24->klass->vtable._16_ReadUInt32.methodPtr);
  v30 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v24->klass->vtable._15_ReadInt32.method)(
          v24,
          v24->klass->vtable._16_ReadUInt32.methodPtr);
  if ( v28 >= 1 )
  {
    do
    {
      v31 = (Il2CppObject *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v24->klass->vtable._22_ReadString.method)(
                              v24,
                              v24->klass->vtable._23_ReadChars.methodPtr);
      v33 = (Il2CppObject *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v24->klass->vtable._22_ReadString.method)(
                              v24,
                              v24->klass->vtable._23_ReadChars.methodPtr);
      paramString = this->fields.paramString;
      if ( !paramString )
        sub_1BCAA3C(0LL, v32);
      System_Collections_Generic_Dictionary_object__object___Add(
        (System_Collections_Generic_Dictionary_object__object__o *)paramString,
        v31,
        v33,
        (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
      --v28;
    }
    while ( v28 );
  }
  if ( v30 >= 1 )
  {
    do
    {
      v35 = (Il2CppObject *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v24->klass->vtable._22_ReadString.method)(
                              v24,
                              v24->klass->vtable._23_ReadChars.methodPtr);
      v37 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v24->klass->vtable._15_ReadInt32.method)(
              v24,
              v24->klass->vtable._16_ReadUInt32.methodPtr);
      paramInteger = this->fields.paramInteger;
      if ( !paramInteger )
        sub_1BCAA3C(0LL, v36);
      System_Collections_Generic_Dictionary_object__int___Add(
        (System_Collections_Generic_Dictionary_object__int__o *)paramInteger,
        v35,
        v37,
        (const MethodInfo_325C518 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
      --v30;
    }
    while ( v30 );
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v29);
  NetworkManager__ReplaceBaseField(this, isRefreshTime, 0LL);
  v16 = 1;
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
        goto LABEL_23;
    }
    v42 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_23:
    v42 = sub_1C1C7C0(v24, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v42)(v24, *(_QWORD *)(v42 + 8));
  return v16;
}


Il2CppObject *__fastcall RequestBase__UnpackToMessagePack(
        RequestBase_o *this,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  System_String_o *v13; // x19
  System_Byte_array *v14; // x20
  __int64 v15; // x19
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_IO_MemoryStream_o *v19; // x22
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_IO_Compression_GZipStream_o *v23; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_IO_MemoryStream_o *v27; // x20
  __int64 v28; // x2
  __int64 v29; // x3
  MiniMessagePack_MiniMessagePacker_o *v30; // x19

  if ( (byte_4B17B5A & 1) == 0 )
  {
    sub_1BCA7E0(&byte___TypeInfo, obj, method);
    sub_1BCA7E0(&System_Convert_TypeInfo, v4, v5);
    sub_1BCA7E0(&System_IO_Compression_GZipStream_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_IO_MemoryStream_TypeInfo, v8, v9);
    this = (RequestBase_o *)sub_1BCA7E0(&MiniMessagePack_MiniMessagePacker_TypeInfo, v10, v11);
    byte_4B17B5A = 1;
  }
  if ( !obj )
    goto LABEL_15;
  v13 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo *))obj->klass->vtable[3].method)(
                             obj,
                             obj->klass->vtable[4].methodPtr,
                             method);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v12);
  v14 = System_Convert__FromBase64String(v13, 0LL);
  v15 = sub_1BCA888(byte___TypeInfo, 1024LL);
  v19 = (System_IO_MemoryStream_o *)sub_1BCAA2C(System_IO_MemoryStream_TypeInfo, v16, v17, v18);
  System_IO_MemoryStream___ctor_62545232(v19, v14, 0LL);
  v23 = (System_IO_Compression_GZipStream_o *)sub_1BCAA2C(System_IO_Compression_GZipStream_TypeInfo, v20, v21, v22);
  System_IO_Compression_GZipStream___ctor(v23, (System_IO_Stream_o *)v19, 0, 0LL);
  v27 = (System_IO_MemoryStream_o *)sub_1BCAA2C(System_IO_MemoryStream_TypeInfo, v24, v25, v26);
  System_IO_MemoryStream___ctor(v27, 0LL);
  if ( !v15 || !v23 )
    goto LABEL_15;
  this = (RequestBase_o *)((__int64 (__fastcall *)(System_IO_Compression_GZipStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v23->klass->vtable._33_Read.method)(
                            v23,
                            v15,
                            0LL,
                            *(unsigned int *)(v15 + 24),
                            v23->klass->vtable._34_Read.methodPtr);
  if ( (int)this >= 1 )
  {
    v29 = (unsigned int)this;
    while ( v27 )
    {
      ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, __int64, Il2CppMethodPointer))v27->klass->vtable._36_Write.method)(
        v27,
        v15,
        0LL,
        v29,
        v27->klass->vtable._37_Write.methodPtr);
      this = (RequestBase_o *)((__int64 (__fastcall *)(System_IO_Compression_GZipStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v23->klass->vtable._33_Read.method)(
                                v23,
                                v15,
                                0LL,
                                *(unsigned int *)(v15 + 24),
                                v23->klass->vtable._34_Read.methodPtr);
      v29 = (unsigned int)this;
      if ( (int)this <= 0 )
        goto LABEL_12;
    }
LABEL_15:
    sub_1BCAA3C(this, obj);
  }
LABEL_12:
  v30 = (MiniMessagePack_MiniMessagePacker_o *)sub_1BCAA2C(MiniMessagePack_MiniMessagePacker_TypeInfo, obj, v28, v29);
  MiniMessagePack_MiniMessagePacker___ctor(v30, 0LL);
  if ( !v27 )
    goto LABEL_15;
  this = (RequestBase_o *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v27->klass->vtable._42_ToArray.method)(
                            v27,
                            v27->klass[1]._1.image);
  if ( !v30 )
    goto LABEL_15;
  return MiniMessagePack_MiniMessagePacker__Unpack_37762320(v30, (System_Byte_array *)this, 0LL);
}


void __fastcall RequestBase__WriteParameter(RequestBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  ManagerConfig_c *v36; // x0
  System_String_o *v37; // x0
  System_IO_Stream_o *v38; // x21
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_IO_BinaryWriter_o *v42; // x19
  __int64 v43; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0
  __int64 Count; // x0
  __int64 v46; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0
  unsigned int v48; // w0
  __int64 v49; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v50; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  __int64 v52; // x1
  Il2CppObject *currentKey; // x21
  __int64 v54; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v55; // x0
  Il2CppObject *Item; // x0
  __int64 v57; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *v58; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v59; // x0
  __int64 v60; // x1
  Il2CppObject *v61; // x21
  __int64 v62; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *v63; // x0
  unsigned int v64; // w0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v66; // x9
  int32_t *p_offset; // x10
  __int64 v68; // x0
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v69; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v70; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v71; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_4B17B58 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryWriter_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__get_Keys__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__get_Keys__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__, v16, v17);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__,
      v18,
      v19);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__,
      v20,
      v21);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__,
      v22,
      v23);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__get_Current__,
      v24,
      v25);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__get_Current__,
      v26,
      v27);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__, v32, v33);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v34, v35);
    byte_4B17B58 = 1;
  }
  v36 = ManagerConfig_TypeInfo;
  memset(&v71, 0, sizeof(v71));
  memset(&v70, 0, sizeof(v70));
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
    v36 = ManagerConfig_TypeInfo;
  }
  if ( !v36->static_fields->UseMock )
  {
    v37 = (System_String_o *)((__int64 (__fastcall *)(RequestBase_o *, void *))this->klass->vtable._16_getParameterFileName.method)(
                               this,
                               this->klass[1]._1.image);
    if ( v37 )
    {
      v38 = (System_IO_Stream_o *)System_IO_File__OpenWrite(v37, 0LL);
      v42 = (System_IO_BinaryWriter_o *)sub_1BCAA2C(System_IO_BinaryWriter_TypeInfo, v39, v40, v41);
      System_IO_BinaryWriter___ctor_62639712(v42, v38, 0LL);
      paramString = this->fields.paramString;
      if ( !paramString )
        sub_1BCAA3C(0LL, v43);
      Count = System_Collections_Generic_Dictionary_object__object___get_Count(
                (System_Collections_Generic_Dictionary_object__object__o *)paramString,
                (const MethodInfo_3264F30 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
      if ( !v42 )
        sub_1BCAA3C(Count, (unsigned int)Count);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v42->klass->vtable._17_Write.method)(
        v42,
        (unsigned int)Count,
        v42->klass->vtable._18_Write.methodPtr);
      paramInteger = this->fields.paramInteger;
      if ( !paramInteger )
        sub_1BCAA3C(0LL, v46);
      v48 = System_Collections_Generic_Dictionary_object__int___get_Count(
              (System_Collections_Generic_Dictionary_object__int__o *)paramInteger,
              (const MethodInfo_325C1E8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Count__);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v42->klass->vtable._17_Write.method)(
        v42,
        v48,
        v42->klass->vtable._18_Write.methodPtr);
      v50 = this->fields.paramString;
      if ( !v50 )
        sub_1BCAA3C(0LL, v49);
      Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
               (System_Collections_Generic_Dictionary_object__object__o *)v50,
               (const MethodInfo_3264F40 *)Method_System_Collections_Generic_Dictionary_string__string__get_Keys__);
      if ( !Keys )
        sub_1BCAA3C(0LL, v52);
      System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator(
        &v69,
        Keys,
        (const MethodInfo_34C6D64 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__);
      v71 = v69;
      while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext(
                &v71,
                (const MethodInfo_33654BC *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__) )
      {
        currentKey = v71.fields._currentKey;
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppObject *, void *))v42->klass->vtable._22_Write.method)(
          v42,
          v71.fields._currentKey,
          v42->klass[1]._1.image);
        v55 = this->fields.paramString;
        if ( !v55 )
          sub_1BCAA3C(0LL, v54);
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)v55,
                 currentKey,
                 (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppObject *, void *))v42->klass->vtable._22_Write.method)(
          v42,
          Item,
          v42->klass[1]._1.image);
      }
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose(
        &v71,
        (const MethodInfo_33654B8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__);
      v58 = this->fields.paramInteger;
      if ( !v58 )
        sub_1BCAA3C(0LL, v57);
      v59 = System_Collections_Generic_Dictionary_object__int___get_Keys(
              (System_Collections_Generic_Dictionary_object__int__o *)v58,
              (const MethodInfo_325C1F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Keys__);
      if ( !v59 )
        sub_1BCAA3C(0LL, v60);
      System_Collections_Generic_Dictionary_KeyCollection_object__int___GetEnumerator(
        &v69,
        v59,
        (const MethodInfo_34C5B40 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__);
      v70 = v69;
      while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___MoveNext(
                &v70,
                (const MethodInfo_3362CA4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__) )
      {
        v61 = v70.fields._currentKey;
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppObject *, void *))v42->klass->vtable._22_Write.method)(
          v42,
          v70.fields._currentKey,
          v42->klass[1]._1.image);
        v63 = this->fields.paramInteger;
        if ( !v63 )
          sub_1BCAA3C(0LL, v62);
        v64 = System_Collections_Generic_Dictionary_object__int___get_Item(
                (System_Collections_Generic_Dictionary_object__int__o *)v63,
                v61,
                (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v42->klass->vtable._17_Write.method)(
          v42,
          v64,
          v42->klass->vtable._18_Write.methodPtr);
      }
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___Dispose(
        &v70,
        (const MethodInfo_3362CA0 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__);
      klass = v42->klass;
      v66 = *(unsigned __int16 *)(&v42->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v42->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v66;
          p_offset += 4;
          if ( !v66 )
            goto LABEL_26;
        }
        v68 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_26:
        v68 = sub_1C1C7C0(v42, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v68)(v42, *(_QWORD *)(v68 + 8));
    }
  }
}


void __fastcall RequestBase__addBaseField(RequestBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B17B4E & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    byte_4B17B4E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  NetworkManager__SetBaseField(this, 0LL);
}


void __fastcall RequestBase__addDeviceInfoField(RequestBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B17B4F & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    byte_4B17B4F = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  NetworkManager__SetDeviceInfoField(this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RequestBase__addField(
        RequestBase_o *this,
        System_String_o *fieldName,
        int32_t data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0

  if ( (byte_4B17B48 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__Add__, fieldName, *(_QWORD *)&data);
    byte_4B17B48 = 1;
  }
  paramInteger = this->fields.paramInteger;
  if ( !paramInteger )
    sub_1BCAA3C(0LL, fieldName);
  System_Collections_Generic_Dictionary_object__int___Add(
    (System_Collections_Generic_Dictionary_object__int__o *)paramInteger,
    (Il2CppObject *)fieldName,
    data,
    (const MethodInfo_325C518 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
}


void __fastcall RequestBase__addField_41862348(
        RequestBase_o *this,
        System_String_o *fieldName,
        System_String_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0

  if ( (byte_4B17B4C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__Add__, fieldName, data);
    byte_4B17B4C = 1;
  }
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_1BCAA3C(0LL, fieldName);
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    (Il2CppObject *)data,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void __fastcall RequestBase__addField_41868688(
        RequestBase_o *this,
        System_String_o *fieldName,
        int64_t data,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v9; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x2
  int64_t v12; // [xsp+8h] [xbp-28h] BYREF

  v12 = data;
  if ( (byte_4B17B49 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__Add__, fieldName, data);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B17B49 = 1;
  }
  paramString = this->fields.paramString;
  v9 = System_Int64__ToString((int64_t)&v12, 0LL);
  if ( !paramString )
    sub_1BCAA3C(v9, v10);
  if ( v9 )
    v11 = (Il2CppObject *)v9;
  else
    v11 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v11,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void __fastcall RequestBase__addField_41870840(
        RequestBase_o *this,
        System_String_o *fieldName,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x8

  if ( (byte_4B17B4D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__Add__, fieldName, data);
    sub_1BCA7E0(&JsonManager_TypeInfo, v7, v8);
    byte_4B17B4D = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, fieldName);
  v9 = (Il2CppObject *)JsonManager__toJson(data, 0, 0, 0LL);
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_1BCAA3C(v9, v10);
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v9,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void __fastcall RequestBase__addField_41913476(
        RequestBase_o *this,
        System_String_o *fieldName,
        float data,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v9; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x2
  float v12; // [xsp+Ch] [xbp-24h] BYREF

  v12 = data;
  if ( (byte_4B17B4A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__Add__, fieldName, method);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B17B4A = 1;
  }
  paramString = this->fields.paramString;
  v9 = System_Single__ToString(data, (const MethodInfo *)&v12);
  if ( !paramString )
    sub_1BCAA3C(v9, v10);
  if ( v9 )
    v11 = (Il2CppObject *)v9;
  else
    v11 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v11,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void __fastcall RequestBase__addField_41913628(
        RequestBase_o *this,
        System_String_o *fieldName,
        double data,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v9; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x2
  double v12; // [xsp+8h] [xbp-28h] BYREF

  v12 = data;
  if ( (byte_4B17B4B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__Add__, fieldName, method);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B17B4B = 1;
  }
  paramString = this->fields.paramString;
  v9 = System_Double__ToString(data, (const MethodInfo *)&v12);
  if ( !paramString )
    sub_1BCAA3C(v9, v10);
  if ( v9 )
    v11 = (Il2CppObject *)v9;
  else
    v11 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v11,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


bool __fastcall RequestBase__backgroundErrorRequest(
        RequestBase_o *this,
        System_String_o *errorCode,
        const MethodInfo *method)
{
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8

  if ( (byte_4B17B43 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, errorCode, method);
    byte_4B17B43 = 1;
  }
  CallBack = this->fields.CallBack;
  if ( CallBack )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
      CallBack->fields.original_method_info,
      StringLiteral_22292/*"ng"*/,
      *(_QWORD *)&CallBack->fields.extra_arg);
  return 1;
}


void __fastcall RequestBase__backgroundErrorRetry(RequestBase_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall RequestBase__beginRequest(RequestBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1

  if ( (byte_4B17B45 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    byte_4B17B45 = 1;
  }
  RequestBase__addBaseField(this, method);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  NetworkManager__RequestStart(this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall RequestBase__beginRetryRequest(RequestBase_o *this, bool isRefreshTime, const MethodInfo *method)
{
  __int64 v5; // x1
  bool Parameter; // w20

  if ( (byte_4B17B46 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, isRefreshTime, method);
    byte_4B17B46 = 1;
  }
  Parameter = RequestBase__ReadParameter(this, isRefreshTime, method);
  if ( Parameter )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
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

  if ( (byte_4B17B44 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, errorCode, method);
    byte_4B17B44 = 1;
  }
  CallBack = this->fields.CallBack;
  if ( CallBack )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
      CallBack->fields.original_method_info,
      StringLiteral_22292/*"ng"*/,
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  UnityEngine_WWWForm_o *v38; // x19
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Collections_Generic_SortedDictionary_TKey__TValue__o *v42; // x22
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  __int64 v49; // x1
  System_Collections_Generic_Dictionary_object__object__o *paramString; // x0
  __int64 v51; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v52; // x0
  Il2CppObject *currentKey; // x22
  Il2CppObject *Item; // x0
  __int64 v55; // x1
  __int64 v56; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v57; // x0
  System_Collections_Generic_SortedDictionary_TKey__TValue__o *v58; // x23
  Il2CppObject *v59; // x0
  __int64 v60; // x1
  __int64 v61; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0
  Il2CppObject *v63; // x22
  __int64 v64; // x0
  __int64 v65; // x1
  __int64 v66; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *v67; // x0
  System_Collections_Generic_SortedDictionary_TKey__TValue__o *v68; // x23
  __int64 v69; // x1
  int32_t v70; // w24
  Il2CppObject *v71; // x0
  __int64 v72; // x1
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v74; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v75; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v76; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4B17B56 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, authParams, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__get_Keys__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__get_Keys__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__, v14, v15);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__,
      v16,
      v17);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__,
      v18,
      v19);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__,
      v20,
      v21);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__get_Current__,
      v22,
      v23);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__get_Current__,
      v24,
      v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_SortedDictionary_string__string__Add__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_SortedDictionary_string__string___ctor__, v32, v33);
    sub_1BCA7E0(&System_Collections_Generic_SortedDictionary_string__string__TypeInfo, v34, v35);
    sub_1BCA7E0(&UnityEngine_WWWForm_TypeInfo, v36, v37);
    byte_4B17B56 = 1;
  }
  memset(&v76, 0, sizeof(v76));
  memset(&v75, 0, sizeof(v75));
  v38 = (UnityEngine_WWWForm_o *)sub_1BCAA2C(UnityEngine_WWWForm_TypeInfo, authParams, method, v3);
  UnityEngine_WWWForm___ctor(v38, 0LL);
  v42 = (System_Collections_Generic_SortedDictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                         System_Collections_Generic_SortedDictionary_string__string__TypeInfo,
                                                                         v39,
                                                                         v40,
                                                                         v41);
  System_Collections_Generic_SortedDictionary_object__object____ctor(
    v42,
    (const MethodInfo_37DF0A4 *)Method_System_Collections_Generic_SortedDictionary_string__string___ctor__);
  *authParams = (System_Collections_Generic_SortedDictionary_string__string__o *)v42;
  sub_1BCA784((PartyOrganizationUtility_o *)authParams, (int64_t)v42, v43, v44, v45, v46, v47, v48);
  paramString = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.paramString;
  if ( !paramString )
    goto LABEL_32;
  paramString = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Keys(
                                                                             paramString,
                                                                             (const MethodInfo_3264F40 *)Method_System_Collections_Generic_Dictionary_string__string__get_Keys__);
  if ( !paramString )
    goto LABEL_32;
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator(
    &v74,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)paramString,
    (const MethodInfo_34C6D64 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__);
  v76 = v74;
  while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext(
            &v76,
            (const MethodInfo_33654BC *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__) )
  {
    v52 = this->fields.paramString;
    if ( !v52 )
      sub_1BCAA3C(0LL, v51);
    currentKey = v76.fields._currentKey;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)v52,
             v76.fields._currentKey,
             (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    if ( !v38 )
      sub_1BCAA3C(Item, v55);
    UnityEngine_WWWForm__AddField(v38, (System_String_o *)currentKey, (System_String_o *)Item, 0LL);
    v57 = this->fields.paramString;
    if ( !v57 )
      sub_1BCAA3C(0LL, v56);
    v58 = (System_Collections_Generic_SortedDictionary_TKey__TValue__o *)*authParams;
    v59 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)v57,
            currentKey,
            (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    if ( !v58 )
      sub_1BCAA3C(v59, v60);
    System_Collections_Generic_SortedDictionary_object__object___Add(
      v58,
      currentKey,
      v59,
      (const MethodInfo_37DF654 *)Method_System_Collections_Generic_SortedDictionary_string__string__Add__);
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose(
    &v76,
    (const MethodInfo_33654B8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__);
  paramString = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.paramInteger;
  if ( !paramString
    || (paramString = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__int___get_Keys(
                                                                                   (System_Collections_Generic_Dictionary_object__int__o *)paramString,
                                                                                   (const MethodInfo_325C1F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Keys__)) == 0LL )
  {
LABEL_32:
    sub_1BCAA3C(paramString, v49);
  }
  System_Collections_Generic_Dictionary_KeyCollection_object__int___GetEnumerator(
    &v74,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)paramString,
    (const MethodInfo_34C5B40 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__);
  v75 = v74;
  while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___MoveNext(
            &v75,
            (const MethodInfo_3362CA4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__) )
  {
    paramInteger = this->fields.paramInteger;
    if ( !paramInteger )
      sub_1BCAA3C(0LL, v61);
    v63 = v75.fields._currentKey;
    v64 = System_Collections_Generic_Dictionary_object__int___get_Item(
            (System_Collections_Generic_Dictionary_object__int__o *)paramInteger,
            v75.fields._currentKey,
            (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    if ( !v38 )
      sub_1BCAA3C(v64, v65);
    UnityEngine_WWWForm__AddField_72649856(v38, (System_String_o *)v63, v64, 0LL);
    v67 = this->fields.paramInteger;
    if ( !v67 )
      sub_1BCAA3C(0LL, v66);
    v68 = (System_Collections_Generic_SortedDictionary_TKey__TValue__o *)*authParams;
    v70 = System_Collections_Generic_Dictionary_object__int___get_Item(
            (System_Collections_Generic_Dictionary_object__int__o *)v67,
            v63,
            (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v69);
    v71 = (Il2CppObject *)System_Convert__ToString_63067128(v70, 0LL);
    if ( !v68 )
      sub_1BCAA3C(v71, v72);
    System_Collections_Generic_SortedDictionary_object__object___Add(
      v68,
      v63,
      v71,
      (const MethodInfo_37DF654 *)Method_System_Collections_Generic_SortedDictionary_string__string__Add__);
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___Dispose(
    &v75,
    (const MethodInfo_3362CA0 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__);
  return v38;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall RequestBase__replaceField(
        RequestBase_o *this,
        System_String_o *fieldName,
        int32_t data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0

  if ( (byte_4B17B50 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, fieldName, *(_QWORD *)&data);
    byte_4B17B50 = 1;
  }
  paramInteger = this->fields.paramInteger;
  if ( !paramInteger )
    sub_1BCAA3C(0LL, fieldName);
  System_Collections_Generic_Dictionary_object__int___set_Item(
    (System_Collections_Generic_Dictionary_object__int__o *)paramInteger,
    (Il2CppObject *)fieldName,
    data,
    (const MethodInfo_325C504 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
}


void __fastcall RequestBase__replaceField_41948088(
        RequestBase_o *this,
        System_String_o *fieldName,
        int64_t data,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v9; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x2
  int64_t v12; // [xsp+8h] [xbp-28h] BYREF

  v12 = data;
  if ( (byte_4B17B51 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, fieldName, data);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B17B51 = 1;
  }
  paramString = this->fields.paramString;
  v9 = System_Int64__ToString((int64_t)&v12, 0LL);
  if ( !paramString )
    sub_1BCAA3C(v9, v10);
  if ( v9 )
    v11 = (Il2CppObject *)v9;
  else
    v11 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v11,
    (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall RequestBase__replaceField_41948240(
        RequestBase_o *this,
        System_String_o *fieldName,
        float data,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v9; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x2
  float v12; // [xsp+Ch] [xbp-24h] BYREF

  v12 = data;
  if ( (byte_4B17B52 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, fieldName, method);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B17B52 = 1;
  }
  paramString = this->fields.paramString;
  v9 = System_Single__ToString(data, (const MethodInfo *)&v12);
  if ( !paramString )
    sub_1BCAA3C(v9, v10);
  if ( v9 )
    v11 = (Il2CppObject *)v9;
  else
    v11 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v11,
    (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall RequestBase__replaceField_41948392(
        RequestBase_o *this,
        System_String_o *fieldName,
        double data,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x20
  System_String_o *v9; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x2
  double v12; // [xsp+8h] [xbp-28h] BYREF

  v12 = data;
  if ( (byte_4B17B53 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, fieldName, method);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B17B53 = 1;
  }
  paramString = this->fields.paramString;
  v9 = System_Double__ToString(data, (const MethodInfo *)&v12);
  if ( !paramString )
    sub_1BCAA3C(v9, v10);
  if ( v9 )
    v11 = (Il2CppObject *)v9;
  else
    v11 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v11,
    (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall RequestBase__replaceField_41948544(
        RequestBase_o *this,
        System_String_o *fieldName,
        System_String_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0

  if ( (byte_4B17B54 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, fieldName, data);
    byte_4B17B54 = 1;
  }
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_1BCAA3C(0LL, fieldName);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    (Il2CppObject *)data,
    (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall RequestBase__replaceField_41948648(
        RequestBase_o *this,
        System_String_o *fieldName,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x8

  if ( (byte_4B17B55 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, fieldName, data);
    sub_1BCA7E0(&JsonManager_TypeInfo, v7, v8);
    byte_4B17B55 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, fieldName);
  v9 = (Il2CppObject *)JsonManager__toJson(data, 0, 0, 0LL);
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_1BCAA3C(v9, v10);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v9,
    (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
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