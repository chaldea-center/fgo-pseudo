void ByteCompressor___ctor(ByteCompressor_o *this, System_Byte_array *inputBytes, const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Bytes_k__BackingField = inputBytes;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)inputBytes, v5, v6, v7, v8, v9, v10);
}


void ByteCompressor___ctor_39159600(ByteCompressor_o *this, System_String_o *inputStr, const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Str_k__BackingField = inputStr;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._Str_k__BackingField,
    (int32_t)inputStr,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


ByteCompressor_o *ByteCompressor__AsBase64StrToBytes(ByteCompressor_o *this, const MethodInfo *method)
{
  System_String_o *Str_k__BackingField; // x20
  struct System_Byte_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4D2A622 & 1) == 0 )
  {
    sub_1C94098(&System_Convert_TypeInfo);
    byte_4D2A622 = 1;
  }
  Str_k__BackingField = this->fields._Str_k__BackingField;
  if ( Str_k__BackingField )
  {
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    v4 = System_Convert__FromBase64String(Str_k__BackingField, 0);
    this->fields._Bytes_k__BackingField = v4;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  }
  return this;
}


ByteCompressor_o *ByteCompressor__AsGzipToBytes(ByteCompressor_o *this, const MethodInfo *method)
{
  System_Byte_array *Bytes_k__BackingField; // x21
  System_IO_MemoryStream_o *v4; // x22
  System_IO_Compression_GZipStream_o *v5; // x21
  System_IO_MemoryStream_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x23
  int i; // w3
  System_IO_MemoryStream_c *klass; // x8
  struct System_Byte_array *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4D2A624 & 1) == 0 )
  {
    sub_1C94098(&byte___TypeInfo);
    sub_1C94098(&System_IO_Compression_GZipStream_TypeInfo);
    sub_1C94098(&System_IO_MemoryStream_TypeInfo);
    byte_4D2A624 = 1;
  }
  Bytes_k__BackingField = this->fields._Bytes_k__BackingField;
  if ( Bytes_k__BackingField )
  {
    v4 = (System_IO_MemoryStream_o *)sub_1C942E4(System_IO_MemoryStream_TypeInfo);
    System_IO_MemoryStream___ctor_65238668(v4, Bytes_k__BackingField, 0);
    v5 = (System_IO_Compression_GZipStream_o *)sub_1C942E4(System_IO_Compression_GZipStream_TypeInfo);
    System_IO_Compression_GZipStream___ctor(v5, (System_IO_Stream_o *)v4, 0, 0);
    v6 = (System_IO_MemoryStream_o *)sub_1C942E4(System_IO_MemoryStream_TypeInfo);
    System_IO_MemoryStream___ctor(v6, 0);
    v7 = sub_1C94140(byte___TypeInfo, 1024);
    if ( !v7
      || !v5
      || (v9 = v7,
          v7 = ((__int64 (__fastcall *)(System_IO_Compression_GZipStream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v5->klass->vtable._31_Read.methodPtr)(
                 v5,
                 v7,
                 0,
                 *(unsigned int *)(v7 + 24),
                 v5->klass->vtable._31_Read.method),
          !v6) )
    {
      sub_1C942F0(v7, v8);
    }
    for ( i = v7;
          ;
          i = ((__int64 (__fastcall *)(System_IO_Compression_GZipStream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v5->klass->vtable._31_Read.methodPtr)(
                v5,
                v9,
                0,
                *(unsigned int *)(v9 + 24),
                v5->klass->vtable._31_Read.method) )
    {
      klass = v6->klass;
      if ( i <= 0 )
        break;
      ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD))klass->vtable._34_Write.methodPtr)(v6, v9, 0);
    }
    v12 = (struct System_Byte_array *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))klass->vtable._40_ToArray.methodPtr)(
                                        v6,
                                        klass->vtable._40_ToArray.method);
    this->fields._Bytes_k__BackingField = v12;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  }
  return this;
}


ByteCompressor_o *ByteCompressor__ImportMiniMessagePack___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o miniMessagePackData,
        const MethodInfo_318E784 *method)
{
  _QWORD *monitor; // x20
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x19
  __int64 v4; // x8
  size_t v5; // x22
  MiniMessagePack_MiniMessagePacker_o *v6; // x21
  _QWORD *v7; // x20
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v8; // x1
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  System_Byte_array *v11; // x20
  ByteCompressor_o *v12; // x19
  _QWORD v14[2]; // [xsp+0h] [xbp-10h] BYREF

  monitor = miniMessagePackData.monitor;
  klass = miniMessagePackData.klass;
  v14[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v14[0] = miniMessagePackData.klass;
  v4 = *((_QWORD *)miniMessagePackData.monitor + 7);
  if ( !v4 )
  {
    sub_1C94098(&ByteCompressor_TypeInfo);
    sub_1C94098(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    v4 = monitor[7];
    if ( !v4 )
    {
      sub_1C6A188(monitor);
      v4 = monitor[7];
    }
  }
  v5 = *(unsigned int *)(*(_QWORD *)v4 + 252LL);
  v6 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C942E4(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v6, 0);
  v7 = (_QWORD *)monitor[7];
  if ( *(int *)(*v7 + 40LL) >= 0 )
    v8 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)v14;
  else
    v8 = klass;
  memcpy((char *)v14 - ((v5 + 15) & 0x1FFFFFFF0LL), v8, v5);
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(*v7, (char *)v14 - ((v5 + 15) & 0x1FFFFFFF0LL));
  if ( !v6 )
    sub_1C942F0(v9, v10);
  v11 = MiniMessagePack_MiniMessagePacker__PackClass(v6, v9, 0);
  v12 = (ByteCompressor_o *)sub_1C942E4(ByteCompressor_TypeInfo);
  ByteCompressor___ctor(v12, v11, 0);
  return v12;
}


ByteCompressor_o *ByteCompressor__ImportMiniMessagePack_object_(
        Il2CppObject *miniMessagePackData,
        const MethodInfo_318E6E0 *method)
{
  MiniMessagePack_MiniMessagePacker_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_Byte_array *v6; // x19
  ByteCompressor_o *v7; // x20

  if ( (byte_4D31F82 & 1) == 0 )
  {
    sub_1C94098(&ByteCompressor_TypeInfo);
    sub_1C94098(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    byte_4D31F82 = 1;
  }
  v3 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C942E4(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v3, 0);
  if ( !v3 )
    sub_1C942F0(v4, v5);
  v6 = MiniMessagePack_MiniMessagePacker__PackClass(v3, miniMessagePackData, 0);
  v7 = (ByteCompressor_o *)sub_1C942E4(ByteCompressor_TypeInfo);
  ByteCompressor___ctor(v7, v6, 0);
  return v7;
}


ByteCompressor_o *ByteCompressor__ToBase64Str(ByteCompressor_o *this, const MethodInfo *method)
{
  System_Byte_array *Bytes_k__BackingField; // x20
  struct System_String_o *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4D2A621 & 1) == 0 )
  {
    sub_1C94098(&System_Convert_TypeInfo);
    byte_4D2A621 = 1;
  }
  Bytes_k__BackingField = this->fields._Bytes_k__BackingField;
  if ( Bytes_k__BackingField )
  {
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    v4 = System_Convert__ToBase64String(Bytes_k__BackingField, 0);
    this->fields._Str_k__BackingField = v4;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields._Str_k__BackingField, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  }
  return this;
}


ByteCompressor_o *ByteCompressor__ToGzip(ByteCompressor_o *this, const MethodInfo *method)
{
  ByteCompressor_Fields *p_fields; // x22
  System_IO_MemoryStream_o *v4; // x19
  System_IO_Compression_GZipStream_o *v5; // x21
  __int64 v6; // x0
  struct System_Byte_array *Bytes_k__BackingField; // x1
  System_IO_Compression_GZipStream_c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  System_IO_MemoryStream_c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0

  if ( (byte_4D2A623 & 1) == 0 )
  {
    sub_1C94098(&System_IO_Compression_GZipStream_TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_IO_MemoryStream_TypeInfo);
    byte_4D2A623 = 1;
  }
  p_fields = &this->fields;
  if ( this->fields._Bytes_k__BackingField )
  {
    v4 = (System_IO_MemoryStream_o *)sub_1C942E4(System_IO_MemoryStream_TypeInfo);
    System_IO_MemoryStream___ctor(v4, 0);
    v5 = (System_IO_Compression_GZipStream_o *)sub_1C942E4(System_IO_Compression_GZipStream_TypeInfo);
    System_IO_Compression_GZipStream___ctor_71360756(v5, (System_IO_Stream_o *)v4, 0, 0);
    Bytes_k__BackingField = p_fields->_Bytes_k__BackingField;
    if ( !p_fields->_Bytes_k__BackingField )
      sub_1C942F0(v6, 0);
    if ( !v5 )
      sub_1C942F0(v6, Bytes_k__BackingField);
    ((void (__fastcall *)(System_IO_Compression_GZipStream_o *, struct System_Byte_array *, _QWORD, _QWORD, const MethodInfo *))v5->klass->vtable._34_Write.methodPtr)(
      v5,
      Bytes_k__BackingField,
      0,
      LODWORD(Bytes_k__BackingField->max_length),
      v5->klass->vtable._34_Write.method);
    klass = v5->klass;
    v9 = *(unsigned __int16 *)&v5->klass->_2.rank;
    if ( *(_WORD *)&v5->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_10;
      }
      v11 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_10:
      v11 = sub_1C6A420(v5, System_IDisposable_TypeInfo, 0);
    }
    v12 = (*(__int64 (__fastcall **)(System_IO_Compression_GZipStream_o *, _QWORD))v11)(v5, *(_QWORD *)(v11 + 8));
    if ( !v4 )
      sub_1C942F0(v12, v13);
    v14 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v4->klass->vtable._40_ToArray.methodPtr)(
            v4,
            v4->klass->vtable._40_ToArray.method);
    p_fields->_Bytes_k__BackingField = (struct System_Byte_array *)v14;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, v14, v15, v16, v17, v18, v19, v20);
    v21 = v4->klass;
    v22 = *(unsigned __int16 *)&v4->klass->_2.rank;
    if ( *(_WORD *)&v4->klass->_2.rank )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_17;
      }
      v24 = (__int64)&v21->vtable + 16 * *v23;
    }
    else
    {
LABEL_17:
      v24 = sub_1C6A420(v4, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v24)(v4, *(_QWORD *)(v24 + 8));
  }
  return this;
}


Il2CppObject *ByteCompressor__UnpackMiniMessagePack_object_(ByteCompressor_o *this, const MethodInfo_318E8C0 *method)
{
  MiniMessagePack_MiniMessagePacker_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( !method->rgctx_data )
  {
    sub_1C94098(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C6A188(method);
  }
  v4 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C942E4(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v4, 0);
  if ( !v4 )
    sub_1C942F0(v5, v6);
  return MiniMessagePack_MiniMessagePacker__UnpackClass_object_(
           v4,
           this->fields._Bytes_k__BackingField,
           (const MethodInfo_3223C58 *)method->rgctx_data->_0_MiniMessagePack_MiniMessagePacker_UnpackClass_T_);
}


System_Byte_array *ByteCompressor__get_Bytes(ByteCompressor_o *this, const MethodInfo *method)
{
  return this->fields._Bytes_k__BackingField;
}


System_String_o *ByteCompressor__get_Str(ByteCompressor_o *this, const MethodInfo *method)
{
  return this->fields._Str_k__BackingField;
}


void ByteCompressor__set_Bytes(ByteCompressor_o *this, System_Byte_array *value, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._Bytes_k__BackingField = value;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3, v4, v5, v6, v7);
}


void ByteCompressor__set_Str(ByteCompressor_o *this, System_String_o *value, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._Str_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._Str_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}