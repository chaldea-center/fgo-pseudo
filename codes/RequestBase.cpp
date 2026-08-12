void RequestBase___ctor(RequestBase_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_Dictionary_object__object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_59724AD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    byte_59724AD = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v3,
    (const MethodInfo_3FF3708 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.paramInteger = (struct System_Collections_Generic_Dictionary_string__int__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.paramInteger, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v10,
    (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.paramString = (struct System_Collections_Generic_Dictionary_string__string__o *)v10;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.paramString, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  this->fields.shouldShowConnect = 1;
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RequestBase__AddSignatureField(RequestBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_59724AC & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&SignedData_TypeInfo);
    byte_59724AC = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  NetworkManager__SetSignatureField(this, 0);
  if ( !*(&SignedData_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SignedData_TypeInfo, v3);
  SignedData__RefillSigningData(3, 0);
}


void RequestBase__ClearField(RequestBase_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *paramInteger; // x0

  if ( (byte_5972496 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__Clear__);
    byte_5972496 = 1;
  }
  paramInteger = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.paramInteger;
  if ( !paramInteger
    || (System_Collections_Generic_Dictionary_object__int___Clear(
          paramInteger,
          (const MethodInfo_3FF4224 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__),
        (paramInteger = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.paramString) == 0) )
  {
    sub_2213CDC(paramInteger, method);
  }
  System_Collections_Generic_Dictionary_object__object___Clear(
    (System_Collections_Generic_Dictionary_object__object__o *)paramInteger,
    (const MethodInfo_3FFDD98 *)Method_System_Collections_Generic_Dictionary_string__string__Clear__);
}


void RequestBase__ClearParameter(RequestBase_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  System_String_o *v4; // x0
  System_String_o *v5; // x19

  if ( (byte_59724A8 & 1) == 0 )
  {
    sub_2213A60(&ManagerConfig_TypeInfo);
    byte_59724A8 = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( !v3->static_fields->UseMock )
  {
    v4 = (System_String_o *)((__int64 (__fastcall *)(RequestBase_o *, const MethodInfo *))this->klass->vtable._17_getParameterFileName.methodPtr)(
                              this,
                              this->klass->vtable._17_getParameterFileName.method);
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
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *DatFileSavePath; // x20
  System_String_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_59724A9 & 1) == 0 )
  {
    sub_2213A60(&AndroidUtil_TypeInfo);
    sub_2213A60(&DatFileName_TypeInfo);
    sub_2213A60(&System_IO_Path_TypeInfo);
    byte_59724A9 = 1;
  }
  if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, method);
  FileName = DatFileName__getFileName(fileNameKey, 0);
  if ( !System_String__IsNullOrEmpty(FileName, 0) )
  {
    if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v4);
    DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
    if ( !*(&System_IO_Path_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo, v5);
    v7 = System_IO_Path__Combine(DatFileSavePath, FileName, 0);
    RequestBase__DeleteParameterFile(v7, v8);
  }
}


System_Byte_array *RequestBase__PackToMessagePack(RequestBase_o *this, Il2CppObject *json, const MethodInfo *method)
{
  MiniMessagePack_MiniMessagePacker_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  System_Byte_array *v7; // x19
  System_IO_MemoryStream_o *v8; // x21
  System_IO_Compression_GZipStream_o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  System_IO_Compression_GZipStream_c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0
  __int64 v16; // x1
  System_Byte_array *v17; // x19
  System_IO_MemoryStream_c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0

  if ( (byte_59724AB & 1) == 0 )
  {
    sub_2213A60(&System_IO_Compression_GZipStream_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_IO_MemoryStream_TypeInfo);
    sub_2213A60(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    byte_59724AB = 1;
  }
  v4 = (MiniMessagePack_MiniMessagePacker_o *)sub_2213CCC(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v4, 0);
  if ( !v4 )
    sub_2213CDC(v5, v6);
  v7 = MiniMessagePack_MiniMessagePacker__PackClass(v4, json, 0);
  v8 = (System_IO_MemoryStream_o *)sub_2213CCC(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v8, 0);
  v9 = (System_IO_Compression_GZipStream_o *)sub_2213CCC(System_IO_Compression_GZipStream_TypeInfo);
  System_IO_Compression_GZipStream___ctor_82470116(v9, (System_IO_Stream_o *)v8, 0, 0);
  if ( !v7 || !v9 )
    sub_2213CDC(v10, v11);
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
    v15 = sub_224BC3C(v9, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_Compression_GZipStream_o *, _QWORD))v15)(v9, *(_QWORD *)(v15 + 8));
  if ( !v8 )
    sub_2213CDC(0, v16);
  v17 = (System_Byte_array *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v8->klass->vtable._40_ToArray.methodPtr)(
                               v8,
                               v8->klass->vtable._40_ToArray.method);
  v18 = v8->klass;
  v19 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    v20 = &v18->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v20 - 1) != System_IDisposable_TypeInfo )
    {
      --v19;
      v20 += 4;
      if ( !v19 )
        goto LABEL_17;
    }
    v21 = (__int64)&v18->vtable + 16 * *v20;
  }
  else
  {
LABEL_17:
    v21 = sub_224BC3C(v8, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v21)(v8, *(_QWORD *)(v21 + 8));
  return v17;
}


// local variable allocation has failed, the output may be wrong!
bool RequestBase__ReadParameter(RequestBase_o *this, bool isRefreshTime, const MethodInfo *method)
{
  ManagerConfig_c *v5; // x0
  bool v6; // w19
  System_String_o *v8; // x0
  System_String_o *v9; // x21
  System_IO_Stream_o *v10; // x21
  System_IO_BinaryReader_o *v11; // x22
  const MethodInfo *v12; // x1
  __int64 v13; // x1
  int v14; // w22
  __int64 v15; // x1
  int v16; // w21
  Il2CppObject *v17; // x23
  __int64 v18; // x1
  Il2CppObject *v19; // x2
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0
  Il2CppObject *v21; // x22
  __int64 v22; // x1
  int32_t v23; // w2
  struct System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0
  System_IO_BinaryReader_c *klass; // x8
  __int64 v26; // x9
  int *p_offset; // x10
  __int64 v28; // x0
  System_IO_BinaryReader_o *v29; // [xsp+28h] [xbp-38h]

  if ( (byte_59724A6 & 1) == 0 )
  {
    sub_2213A60(&System_IO_BinaryReader_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_59724A6 = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, isRefreshTime);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( v5->static_fields->UseMock )
    return 0;
  v8 = (System_String_o *)((__int64 (__fastcall *)(RequestBase_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._17_getParameterFileName.methodPtr)(
                            this,
                            this->klass->vtable._17_getParameterFileName.method,
                            method);
  if ( !v8 )
    return 0;
  v9 = v8;
  if ( !System_IO_File__Exists(v8, 0) )
    return 0;
  v10 = (System_IO_Stream_o *)System_IO_File__OpenRead(v9, 0);
  v11 = (System_IO_BinaryReader_o *)sub_2213CCC(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v11, v10, 0);
  v29 = v11;
  RequestBase__ClearField(this, v12);
  if ( !v11 )
    sub_2213CDC(0, v13);
  v14 = ((__int64 (*)(void))v11->klass->vtable._15_ReadInt32.methodPtr)();
  v16 = ((__int64 (*)(void))v29->klass->vtable._15_ReadInt32.methodPtr)();
  if ( v14 >= 1 )
  {
    do
    {
      if ( !v29 )
        sub_2213CDC(0, v15);
      v17 = (Il2CppObject *)((__int64 (*)(void))v29->klass->vtable._22_ReadString.methodPtr)();
      v19 = (Il2CppObject *)((__int64 (*)(void))v29->klass->vtable._22_ReadString.methodPtr)();
      paramString = this->fields.paramString;
      if ( !paramString )
        sub_2213CDC(0, v18);
      System_Collections_Generic_Dictionary_object__object___Add(
        (System_Collections_Generic_Dictionary_object__object__o *)paramString,
        v17,
        v19,
        (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
      --v14;
    }
    while ( v14 );
  }
  if ( v16 >= 1 )
  {
    do
    {
      if ( !v29 )
        sub_2213CDC(0, v15);
      v21 = (Il2CppObject *)((__int64 (*)(void))v29->klass->vtable._22_ReadString.methodPtr)();
      v23 = ((__int64 (*)(void))v29->klass->vtable._15_ReadInt32.methodPtr)();
      paramInteger = this->fields.paramInteger;
      if ( !paramInteger )
        sub_2213CDC(0, v22);
      System_Collections_Generic_Dictionary_object__int___Add(
        (System_Collections_Generic_Dictionary_object__int__o *)paramInteger,
        v21,
        v23,
        (const MethodInfo_3FF409C *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
      --v16;
    }
    while ( v16 );
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15);
  NetworkManager__ReplaceBaseField(this, isRefreshTime, 0);
  v6 = 1;
  if ( v29 )
  {
    klass = v29->klass;
    v26 = *(unsigned __int16 *)&v29->klass->_2.rank;
    if ( *(_WORD *)&v29->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v26;
        p_offset += 4;
        if ( !v26 )
          goto LABEL_26;
      }
      v28 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_26:
      v28 = sub_224BC3C(v29, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v28)(v29, *(_QWORD *)(v28 + 8));
  }
  return v6;
}


void RequestBase__SetShowConnect(RequestBase_o *this, bool isShow, const MethodInfo *method)
{
  this->fields.shouldShowConnect = isShow;
}


Il2CppObject *RequestBase__UnpackToMessagePack(RequestBase_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  __int64 v4; // x1
  System_String_o *v5; // x19
  System_Byte_array *v6; // x20
  __int64 v7; // x19
  System_IO_MemoryStream_o *v8; // x22
  System_IO_Compression_GZipStream_o *v9; // x21
  System_IO_MemoryStream_o *v10; // x20
  __int64 v11; // x3
  MiniMessagePack_MiniMessagePacker_o *v12; // x19

  if ( (byte_59724AA & 1) == 0 )
  {
    sub_2213A60(&byte___TypeInfo);
    sub_2213A60(&System_Convert_TypeInfo);
    sub_2213A60(&System_IO_Compression_GZipStream_TypeInfo);
    sub_2213A60(&System_IO_MemoryStream_TypeInfo);
    this = (RequestBase_o *)sub_2213A60(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    byte_59724AA = 1;
  }
  if ( !obj )
    goto LABEL_15;
  v5 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *, const MethodInfo *))obj->klass->vtable[3].methodPtr)(
                            obj,
                            obj->klass->vtable[3].method,
                            method);
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v4);
  v6 = System_Convert__FromBase64String(v5, 0);
  v7 = sub_2213B20(byte___TypeInfo, 1024);
  v8 = (System_IO_MemoryStream_o *)sub_2213CCC(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_76876544(v8, v6, 0);
  v9 = (System_IO_Compression_GZipStream_o *)sub_2213CCC(System_IO_Compression_GZipStream_TypeInfo);
  System_IO_Compression_GZipStream___ctor(v9, (System_IO_Stream_o *)v8, 0, 0);
  v10 = (System_IO_MemoryStream_o *)sub_2213CCC(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v10, 0);
  if ( !v7 || !v9 )
    goto LABEL_15;
  this = (RequestBase_o *)((__int64 (__fastcall *)(System_IO_Compression_GZipStream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v9->klass->vtable._31_Read.methodPtr)(
                            v9,
                            v7,
                            0,
                            *(unsigned int *)(v7 + 24),
                            v9->klass->vtable._31_Read.method);
  if ( (int)this >= 1 )
  {
    v11 = (unsigned int)this;
    while ( v10 )
    {
      ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, __int64, const MethodInfo *))v10->klass->vtable._34_Write.methodPtr)(
        v10,
        v7,
        0,
        v11,
        v10->klass->vtable._34_Write.method);
      this = (RequestBase_o *)((__int64 (__fastcall *)(System_IO_Compression_GZipStream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v9->klass->vtable._31_Read.methodPtr)(
                                v9,
                                v7,
                                0,
                                *(unsigned int *)(v7 + 24),
                                v9->klass->vtable._31_Read.method);
      v11 = (unsigned int)this;
      if ( (int)this <= 0 )
        goto LABEL_12;
    }
LABEL_15:
    sub_2213CDC(this, obj);
  }
LABEL_12:
  v12 = (MiniMessagePack_MiniMessagePacker_o *)sub_2213CCC(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v12, 0);
  if ( !v10 )
    goto LABEL_15;
  this = (RequestBase_o *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v10->klass->vtable._40_ToArray.methodPtr)(
                            v10,
                            v10->klass->vtable._40_ToArray.method);
  if ( !v12 )
    goto LABEL_15;
  return MiniMessagePack_MiniMessagePacker__Unpack_46651700(v12, (System_Byte_array *)this, 0);
}


void RequestBase__WriteParameter(RequestBase_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  int v4; // w8
  System_String_o *v5; // x0
  System_IO_Stream_o *v6; // x21
  System_IO_BinaryWriter_o *v7; // x20
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0
  __int64 Count; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0
  System_IO_BinaryWriter_o *v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v16; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  __int64 v18; // x1
  __int64 v19; // x1
  Il2CppObject *currentKey; // x21
  __int64 v21; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v22; // x0
  System_IO_BinaryWriter_o *v23; // x20
  Il2CppObject *Item; // x0
  __int64 v25; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *v26; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x1
  Il2CppObject *v30; // x21
  __int64 v31; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *v32; // x0
  System_IO_BinaryWriter_o *v33; // x20
  __int64 v34; // x0
  System_IO_BinaryWriter_o *v35; // x19
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v37; // x9
  int *p_offset; // x10
  __int64 v39; // x0
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v40; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v41; // [xsp+20h] [xbp-90h]
  System_IO_BinaryWriter_o **v42; // [xsp+28h] [xbp-88h]
  int v43; // [xsp+38h] [xbp-78h]
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v44; // [xsp+40h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v45; // [xsp+60h] [xbp-50h] BYREF
  System_IO_BinaryWriter_o *v46; // [xsp+78h] [xbp-38h] BYREF

  if ( (byte_59724A7 & 1) == 0 )
  {
    sub_2213A60(&System_IO_BinaryWriter_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__get_Keys__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__get_Keys__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__get_Current__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__);
    sub_2213A60(&ManagerConfig_TypeInfo);
    byte_59724A7 = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  v46 = 0;
  memset(&v45, 0, sizeof(v45));
  v4 = *(&ManagerConfig_TypeInfo->_2.cctor_finished + 1);
  memset(&v44, 0, sizeof(v44));
  v43 = 0;
  if ( !v4 )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( !v3->static_fields->UseMock )
  {
    v5 = (System_String_o *)((__int64 (__fastcall *)(RequestBase_o *, const MethodInfo *))this->klass->vtable._17_getParameterFileName.methodPtr)(
                              this,
                              this->klass->vtable._17_getParameterFileName.method);
    if ( v5 )
    {
      v6 = (System_IO_Stream_o *)System_IO_File__OpenWrite(v5, 0);
      v7 = (System_IO_BinaryWriter_o *)sub_2213CCC(System_IO_BinaryWriter_TypeInfo);
      System_IO_BinaryWriter___ctor_76953012(v7, v6, 0);
      paramString = this->fields.paramString;
      v46 = v7;
      v41 = 0;
      v42 = &v46;
      if ( !paramString )
        sub_2213CDC(0, v8);
      Count = System_Collections_Generic_Dictionary_object__object___get_Count(
                (System_Collections_Generic_Dictionary_object__object__o *)paramString,
                (const MethodInfo_3FFD8C8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
      if ( !v7 )
        sub_2213CDC(Count, (unsigned int)Count);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v7->klass->vtable._17_Write.methodPtr)(
        v7,
        (unsigned int)Count,
        v7->klass->vtable._17_Write.method);
      paramInteger = this->fields.paramInteger;
      if ( !paramInteger )
        sub_2213CDC(0, v11);
      v13 = v46;
      v14 = System_Collections_Generic_Dictionary_object__int___get_Count(
              (System_Collections_Generic_Dictionary_object__int__o *)paramInteger,
              (const MethodInfo_3FF3D54 *)Method_System_Collections_Generic_Dictionary_string__int__get_Count__);
      if ( !v13 )
        sub_2213CDC(v14, (unsigned int)v14);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v13->klass->vtable._17_Write.methodPtr)(
        v13,
        (unsigned int)v14,
        v13->klass->vtable._17_Write.method);
      v16 = this->fields.paramString;
      if ( !v16 )
        sub_2213CDC(0, v15);
      Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
               (System_Collections_Generic_Dictionary_object__object__o *)v16,
               (const MethodInfo_3FFD8D8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Keys__);
      if ( !Keys )
        sub_2213CDC(0, v18);
      System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator(
        &v40,
        Keys,
        (const MethodInfo_43896F0 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__);
      v45 = v40;
      v40.fields._dictionary = 0;
      *(_QWORD *)&v40.fields._index = &v45;
      while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext(
                &v45,
                (const MethodInfo_4169D50 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__) )
      {
        if ( !v46 )
          sub_2213CDC(0, v19);
        currentKey = v45.fields._currentKey;
        v46->klass->vtable._22_Write.methodPtr();
        v22 = this->fields.paramString;
        if ( !v22 )
          sub_2213CDC(0, v21);
        v23 = v46;
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)v22,
                 currentKey,
                 (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
        if ( !v23 )
          sub_2213CDC(Item, Item);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppObject *, const MethodInfo *))v23->klass->vtable._22_Write.methodPtr)(
          v23,
          Item,
          v23->klass->vtable._22_Write.method);
      }
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose(
        &v45,
        (const MethodInfo_4169D4C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__);
      v26 = this->fields.paramInteger;
      if ( !v26 )
        sub_2213CDC(0, v25);
      v27 = System_Collections_Generic_Dictionary_object__int___get_Keys(
              (System_Collections_Generic_Dictionary_object__int__o *)v26,
              (const MethodInfo_3FF3D64 *)Method_System_Collections_Generic_Dictionary_string__int__get_Keys__);
      if ( !v27 )
        sub_2213CDC(0, v28);
      System_Collections_Generic_Dictionary_KeyCollection_object__int___GetEnumerator(
        &v40,
        v27,
        (const MethodInfo_4388490 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__);
      v44 = v40;
      v40.fields._dictionary = 0;
      *(_QWORD *)&v40.fields._index = &v44;
      while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___MoveNext(
                &v44,
                (const MethodInfo_4167930 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__) )
      {
        if ( !v46 )
          sub_2213CDC(0, v29);
        v30 = v44.fields._currentKey;
        v46->klass->vtable._22_Write.methodPtr();
        v32 = this->fields.paramInteger;
        if ( !v32 )
          sub_2213CDC(0, v31);
        v33 = v46;
        v34 = System_Collections_Generic_Dictionary_object__int___get_Item(
                (System_Collections_Generic_Dictionary_object__int__o *)v32,
                v30,
                (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
        if ( !v33 )
          sub_2213CDC(v34, (unsigned int)v34);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v33->klass->vtable._17_Write.methodPtr)(
          v33,
          (unsigned int)v34,
          v33->klass->vtable._17_Write.method);
      }
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___Dispose(
        &v44,
        (const MethodInfo_416792C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__);
      v35 = *v42;
      if ( *v42 )
      {
        klass = v35->klass;
        v37 = *(unsigned __int16 *)&v35->klass->_2.rank;
        if ( *(_WORD *)&v35->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
          {
            --v37;
            p_offset += 4;
            if ( !v37 )
              goto LABEL_32;
          }
          v39 = (__int64)&klass->vtable + 16 * *p_offset;
        }
        else
        {
LABEL_32:
          v39 = sub_224BC3C(*v42, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v39)(v35, *(_QWORD *)(v39 + 8));
      }
      if ( v41 )
        sub_2213CD4(v41);
    }
  }
}


void RequestBase__addBaseField(RequestBase_o *this, const MethodInfo *method)
{
  if ( (byte_597249D & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_597249D = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  NetworkManager__SetBaseField(this, 0);
}


void RequestBase__addDeviceInfoField(RequestBase_o *this, const MethodInfo *method)
{
  if ( (byte_597249E & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_597249E = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  NetworkManager__SetDeviceInfoField(this, 0);
}


void RequestBase__addField(RequestBase_o *this, System_String_o *fieldName, int32_t data, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0

  if ( (byte_5972497 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    byte_5972497 = 1;
  }
  paramInteger = this->fields.paramInteger;
  if ( !paramInteger )
    sub_2213CDC(0, fieldName);
  System_Collections_Generic_Dictionary_object__int___Add(
    (System_Collections_Generic_Dictionary_object__int__o *)paramInteger,
    (Il2CppObject *)fieldName,
    data,
    (const MethodInfo_3FF409C *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
}


void RequestBase__addField_51256716(
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
  if ( (byte_5972498 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5972498 = 1;
  }
  paramString = this->fields.paramString;
  v7 = System_Int64__ToString((int64_t)&v10, 0);
  if ( !paramString )
    sub_2213CDC(v7, v8);
  if ( v7 )
    v9 = (Il2CppObject *)v7;
  else
    v9 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v9,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void RequestBase__addField_51259092(
        RequestBase_o *this,
        System_String_o *fieldName,
        Il2CppObject *data,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x8

  if ( (byte_597249C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_2213A60(&JsonManager_TypeInfo);
    byte_597249C = 1;
  }
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, fieldName);
  v7 = (Il2CppObject *)JsonManager__toJson(data, 0, 0, 0);
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_2213CDC(v7, v8);
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v7,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void RequestBase__addField_51259256(
        RequestBase_o *this,
        System_String_o *fieldName,
        System_String_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0

  if ( (byte_597249B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    byte_597249B = 1;
  }
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_2213CDC(0, fieldName);
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    (Il2CppObject *)data,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void RequestBase__addField_51274628(
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
  if ( (byte_5972499 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5972499 = 1;
  }
  paramString = this->fields.paramString;
  v7 = System_Single__ToString(data, (const MethodInfo *)&v10);
  if ( !paramString )
    sub_2213CDC(v7, v8);
  if ( v7 )
    v9 = (Il2CppObject *)v7;
  else
    v9 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v9,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


void RequestBase__addField_51274780(
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
  if ( (byte_597249A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_597249A = 1;
  }
  paramString = this->fields.paramString;
  v7 = System_Double__ToString(data, (const MethodInfo *)&v10);
  if ( !paramString )
    sub_2213CDC(v7, v8);
  if ( v7 )
    v9 = (Il2CppObject *)v7;
  else
    v9 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v9,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


bool RequestBase__backgroundErrorRequest(RequestBase_o *this, System_String_o *errorCode, const MethodInfo *method)
{
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8

  if ( (byte_5972492 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_5972492 = 1;
  }
  CallBack = this->fields.CallBack;
  if ( CallBack )
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
      CallBack->fields.method_code,
      StringLiteral_23336/*"ng"*/,
      CallBack->fields.method);
  return 1;
}


void RequestBase__backgroundErrorRetry(RequestBase_o *this, const MethodInfo *method)
{
  ;
}


void RequestBase__beginRequest(RequestBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_5972494 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5972494 = 1;
  }
  RequestBase__addBaseField(this, method);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v3);
  NetworkManager__RequestStart(this, 0);
}


bool RequestBase__beginRetryRequest(RequestBase_o *this, bool isRefreshTime, const MethodInfo *method)
{
  __int64 v5; // x1
  bool Parameter; // w20

  if ( (byte_5972495 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5972495 = 1;
  }
  Parameter = RequestBase__ReadParameter(this, isRefreshTime, method);
  if ( Parameter )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
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

  if ( (byte_5972493 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_5972493 = 1;
  }
  CallBack = this->fields.CallBack;
  if ( CallBack )
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
      CallBack->fields.method_code,
      StringLiteral_23336/*"ng"*/,
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
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
  __int64 v33; // x1
  int32_t v34; // w24
  Il2CppObject *v35; // x0
  __int64 v36; // x1
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v38; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v39; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v40; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_59724A5 & 1) == 0 )
  {
    sub_2213A60(&System_Convert_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__get_Keys__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__get_Keys__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_SortedDictionary_string__string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_SortedDictionary_string__string___ctor__);
    sub_2213A60(&System_Collections_Generic_SortedDictionary_string__string__TypeInfo);
    sub_2213A60(&UnityEngine_WWWForm_TypeInfo);
    byte_59724A5 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  memset(&v39, 0, sizeof(v39));
  v5 = (UnityEngine_WWWForm_o *)sub_2213CCC(UnityEngine_WWWForm_TypeInfo);
  UnityEngine_WWWForm___ctor(v5, 0);
  v6 = (System_Collections_Generic_SortedDictionary_TKey__TValue__o *)sub_2213CCC(System_Collections_Generic_SortedDictionary_string__string__TypeInfo);
  System_Collections_Generic_SortedDictionary_object__object____ctor(
    v6,
    (const MethodInfo_47A30D4 *)Method_System_Collections_Generic_SortedDictionary_string__string___ctor__);
  *authParams = (System_Collections_Generic_SortedDictionary_string__string__o *)v6;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)authParams, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  paramString = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.paramString;
  if ( !paramString )
    goto LABEL_32;
  paramString = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Keys(
                                                                             paramString,
                                                                             (const MethodInfo_3FFD8D8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Keys__);
  if ( !paramString )
    goto LABEL_32;
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator(
    &v38,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)paramString,
    (const MethodInfo_43896F0 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__string__GetEnumerator__);
  v40 = v38;
  v38.fields._dictionary = 0;
  *(_QWORD *)&v38.fields._index = &v40;
  while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext(
            &v40,
            (const MethodInfo_4169D50 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__MoveNext__) )
  {
    v16 = this->fields.paramString;
    if ( !v16 )
      sub_2213CDC(0, v15);
    currentKey = v40.fields._currentKey;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)v16,
             v40.fields._currentKey,
             (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    if ( !v5 )
      sub_2213CDC(Item, v19);
    UnityEngine_WWWForm__AddField(v5, (System_String_o *)currentKey, (System_String_o *)Item, 0);
    v21 = this->fields.paramString;
    if ( !v21 )
      sub_2213CDC(0, v20);
    v22 = (System_Collections_Generic_SortedDictionary_TKey__TValue__o *)*authParams;
    v23 = System_Collections_Generic_Dictionary_object__object___get_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)v21,
            currentKey,
            (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    if ( !v22 )
      sub_2213CDC(v23, v24);
    System_Collections_Generic_SortedDictionary_object__object___Add(
      v22,
      currentKey,
      v23,
      (const MethodInfo_47A3684 *)Method_System_Collections_Generic_SortedDictionary_string__string__Add__);
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose(
    &v40,
    (const MethodInfo_4169D4C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__string__Dispose__);
  paramString = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.paramInteger;
  if ( !paramString
    || (paramString = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__int___get_Keys(
                                                                                   (System_Collections_Generic_Dictionary_object__int__o *)paramString,
                                                                                   (const MethodInfo_3FF3D64 *)Method_System_Collections_Generic_Dictionary_string__int__get_Keys__)) == 0 )
  {
LABEL_32:
    sub_2213CDC(paramString, v13);
  }
  System_Collections_Generic_Dictionary_KeyCollection_object__int___GetEnumerator(
    &v38,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)paramString,
    (const MethodInfo_4388490 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__int__GetEnumerator__);
  v39 = v38;
  v38.fields._dictionary = 0;
  *(_QWORD *)&v38.fields._index = &v39;
  while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___MoveNext(
            &v39,
            (const MethodInfo_4167930 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__MoveNext__) )
  {
    paramInteger = this->fields.paramInteger;
    if ( !paramInteger )
      sub_2213CDC(0, v25);
    v27 = v39.fields._currentKey;
    v28 = System_Collections_Generic_Dictionary_object__int___get_Item(
            (System_Collections_Generic_Dictionary_object__int__o *)paramInteger,
            v39.fields._currentKey,
            (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    if ( !v5 )
      sub_2213CDC(v28, v29);
    UnityEngine_WWWForm__AddField_86722836(v5, (System_String_o *)v27, v28, 0);
    v31 = this->fields.paramInteger;
    if ( !v31 )
      sub_2213CDC(0, v30);
    v32 = (System_Collections_Generic_SortedDictionary_TKey__TValue__o *)*authParams;
    v34 = System_Collections_Generic_Dictionary_object__int___get_Item(
            (System_Collections_Generic_Dictionary_object__int__o *)v31,
            v27,
            (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v33);
    v35 = (Il2CppObject *)System_Convert__ToString_76695160(v34, 0);
    if ( !v32 )
      sub_2213CDC(v35, v36);
    System_Collections_Generic_SortedDictionary_object__object___Add(
      v32,
      v27,
      v35,
      (const MethodInfo_47A3684 *)Method_System_Collections_Generic_SortedDictionary_string__string__Add__);
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___Dispose(
    &v39,
    (const MethodInfo_416792C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__int__Dispose__);
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
  return this->fields.shouldShowConnect;
}


void RequestBase__replaceField(RequestBase_o *this, System_String_o *fieldName, int32_t data, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *paramInteger; // x0

  if ( (byte_597249F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    byte_597249F = 1;
  }
  paramInteger = this->fields.paramInteger;
  if ( !paramInteger )
    sub_2213CDC(0, fieldName);
  System_Collections_Generic_Dictionary_object__int___set_Item(
    (System_Collections_Generic_Dictionary_object__int__o *)paramInteger,
    (Il2CppObject *)fieldName,
    data,
    (const MethodInfo_3FF4088 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
}


void RequestBase__replaceField_51275124(
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
  if ( (byte_59724A0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59724A0 = 1;
  }
  paramString = this->fields.paramString;
  v7 = System_Int64__ToString((int64_t)&v10, 0);
  if ( !paramString )
    sub_2213CDC(v7, v8);
  if ( v7 )
    v9 = (Il2CppObject *)v7;
  else
    v9 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v9,
    (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void RequestBase__replaceField_51275276(
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
  if ( (byte_59724A1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59724A1 = 1;
  }
  paramString = this->fields.paramString;
  v7 = System_Single__ToString(data, (const MethodInfo *)&v10);
  if ( !paramString )
    sub_2213CDC(v7, v8);
  if ( v7 )
    v9 = (Il2CppObject *)v7;
  else
    v9 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v9,
    (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void RequestBase__replaceField_51275428(
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
  if ( (byte_59724A2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59724A2 = 1;
  }
  paramString = this->fields.paramString;
  v7 = System_Double__ToString(data, (const MethodInfo *)&v10);
  if ( !paramString )
    sub_2213CDC(v7, v8);
  if ( v7 )
    v9 = (Il2CppObject *)v7;
  else
    v9 = (Il2CppObject *)StringLiteral_1/*""*/;
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v9,
    (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void RequestBase__replaceField_51275580(
        RequestBase_o *this,
        System_String_o *fieldName,
        System_String_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0

  if ( (byte_59724A3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    byte_59724A3 = 1;
  }
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_2213CDC(0, fieldName);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    (Il2CppObject *)data,
    (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void RequestBase__replaceField_51275684(
        RequestBase_o *this,
        System_String_o *fieldName,
        Il2CppObject *data,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x8

  if ( (byte_59724A4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_2213A60(&JsonManager_TypeInfo);
    byte_59724A4 = 1;
  }
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, fieldName);
  v7 = (Il2CppObject *)JsonManager__toJson(data, 0, 0, 0);
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_2213CDC(v7, v8);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (Il2CppObject *)fieldName,
    v7,
    (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
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