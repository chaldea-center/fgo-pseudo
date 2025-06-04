void __fastcall ByteCompressor___ctor(ByteCompressor_o *this, System_Byte_array *inputBytes, const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Bytes_k__BackingField = inputBytes;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)inputBytes, v5, v6);
}


void __fastcall ByteCompressor___ctor_37507188(
        ByteCompressor_o *this,
        System_String_o *inputStr,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Str_k__BackingField = inputStr;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._Str_k__BackingField, (int32_t)inputStr, v5, v6);
}


ByteCompressor_o *__fastcall ByteCompressor__AsBase64StrToBytes(ByteCompressor_o *this, const MethodInfo *method)
{
  System_String_o *Str_k__BackingField; // x20
  struct System_Byte_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4AFFED2 & 1) == 0 )
  {
    sub_1BC3008(&System_Convert_TypeInfo, method);
    byte_4AFFED2 = 1;
  }
  Str_k__BackingField = this->fields._Str_k__BackingField;
  if ( Str_k__BackingField )
  {
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    v4 = System_Convert__FromBase64String(Str_k__BackingField, 0LL);
    this->fields._Bytes_k__BackingField = v4;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)v4, v5, v6);
  }
  return this;
}


ByteCompressor_o *__fastcall ByteCompressor__AsGzipToBytes(ByteCompressor_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Byte_array *Bytes_k__BackingField; // x21
  System_IO_MemoryStream_o *v6; // x22
  System_IO_Compression_GZipStream_o *v7; // x21
  System_IO_MemoryStream_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x23
  int i; // w3
  System_IO_MemoryStream_c *klass; // x8
  struct System_Byte_array *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4AFFED4 & 1) == 0 )
  {
    sub_1BC3008(&byte___TypeInfo, method);
    sub_1BC3008(&System_IO_Compression_GZipStream_TypeInfo, v3);
    sub_1BC3008(&System_IO_MemoryStream_TypeInfo, v4);
    byte_4AFFED4 = 1;
  }
  Bytes_k__BackingField = this->fields._Bytes_k__BackingField;
  if ( Bytes_k__BackingField )
  {
    v6 = (System_IO_MemoryStream_o *)sub_1BC3254(System_IO_MemoryStream_TypeInfo);
    System_IO_MemoryStream___ctor_63170168(v6, Bytes_k__BackingField, 0LL);
    v7 = (System_IO_Compression_GZipStream_o *)sub_1BC3254(System_IO_Compression_GZipStream_TypeInfo);
    System_IO_Compression_GZipStream___ctor(v7, (System_IO_Stream_o *)v6, 0, 0LL);
    v8 = (System_IO_MemoryStream_o *)sub_1BC3254(System_IO_MemoryStream_TypeInfo);
    System_IO_MemoryStream___ctor(v8, 0LL);
    v9 = sub_1BC30B0(byte___TypeInfo, 1024LL);
    if ( !v9
      || !v7
      || (v11 = v9,
          v9 = ((__int64 (__fastcall *)(System_IO_Compression_GZipStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v7->klass->vtable._31_Read.method)(
                 v7,
                 v9,
                 0LL,
                 *(unsigned int *)(v9 + 24),
                 v7->klass->vtable._32_Read.methodPtr),
          !v8) )
    {
      sub_1BC3264(v9, v10);
    }
    for ( i = v9;
          ;
          i = ((__int64 (__fastcall *)(System_IO_Compression_GZipStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v7->klass->vtable._31_Read.method)(
                v7,
                v11,
                0LL,
                *(unsigned int *)(v11 + 24),
                v7->klass->vtable._32_Read.methodPtr) )
    {
      klass = v8->klass;
      if ( i <= 0 )
        break;
      ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD))klass->vtable._34_Write.method)(v8, v11, 0LL);
    }
    v14 = (struct System_Byte_array *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))klass->vtable._40_ToArray.method)(
                                        v8,
                                        klass[1]._1.image);
    this->fields._Bytes_k__BackingField = v14;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)v14, v15, v16);
  }
  return this;
}


ByteCompressor_o *__fastcall ByteCompressor__ImportMiniMessagePack___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o miniMessagePackData,
        const MethodInfo_2FF45BC *method)
{
  _QWORD *monitor; // x20
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x19
  __int64 v4; // x8
  __int64 v5; // x1
  __int64 v6; // x22
  MiniMessagePack_MiniMessagePacker_o *v7; // x21
  _QWORD *v8; // x20
  __int64 *v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  System_Byte_array *v15; // x20
  ByteCompressor_o *v16; // x19
  __int64 v18[2]; // [xsp+0h] [xbp-10h] BYREF

  monitor = miniMessagePackData.monitor;
  klass = miniMessagePackData.klass;
  v18[1] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v18[0] = (__int64)miniMessagePackData.klass;
  v4 = *((_QWORD *)miniMessagePackData.monitor + 7);
  if ( !v4 )
  {
    sub_1BC3008(&ByteCompressor_TypeInfo, miniMessagePackData.monitor);
    sub_1BC3008(&MiniMessagePack_MiniMessagePacker_TypeInfo, v5);
    v4 = monitor[7];
    if ( !v4 )
    {
      sub_1C134C8(monitor);
      v4 = monitor[7];
    }
  }
  v6 = *(unsigned int *)(*(_QWORD *)v4 + 252LL);
  v7 = (MiniMessagePack_MiniMessagePacker_o *)sub_1BC3254(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v7, 0LL);
  v8 = (_QWORD *)monitor[7];
  if ( *(int *)(*v8 + 40LL) >= 0 )
    v9 = v18;
  else
    v9 = (__int64 *)klass;
  memcpy((char *)v18 - ((v6 + 15) & 0x1FFFFFFF0LL), v9, v6);
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(*v8, (char *)v18 - ((v6 + 15) & 0x1FFFFFFF0LL), v10, v11, v12);
  if ( !v7 )
    sub_1BC3264(v13, v14);
  v15 = MiniMessagePack_MiniMessagePacker__PackClass(v7, v13, 0LL);
  v16 = (ByteCompressor_o *)sub_1BC3254(ByteCompressor_TypeInfo);
  ByteCompressor___ctor(v16, v15, 0LL);
  return v16;
}


ByteCompressor_o *__fastcall ByteCompressor__ImportMiniMessagePack_object_(
        Il2CppObject *miniMessagePackData,
        const MethodInfo_2FF4518 *method)
{
  __int64 v3; // x1
  MiniMessagePack_MiniMessagePacker_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  System_Byte_array *v7; // x19
  ByteCompressor_o *v8; // x20

  if ( (byte_4B0765E & 1) == 0 )
  {
    sub_1BC3008(&ByteCompressor_TypeInfo, method);
    sub_1BC3008(&MiniMessagePack_MiniMessagePacker_TypeInfo, v3);
    byte_4B0765E = 1;
  }
  v4 = (MiniMessagePack_MiniMessagePacker_o *)sub_1BC3254(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v4, 0LL);
  if ( !v4 )
    sub_1BC3264(v5, v6);
  v7 = MiniMessagePack_MiniMessagePacker__PackClass(v4, miniMessagePackData, 0LL);
  v8 = (ByteCompressor_o *)sub_1BC3254(ByteCompressor_TypeInfo);
  ByteCompressor___ctor(v8, v7, 0LL);
  return v8;
}


ByteCompressor_o *__fastcall ByteCompressor__ToBase64Str(ByteCompressor_o *this, const MethodInfo *method)
{
  System_Byte_array *Bytes_k__BackingField; // x20
  struct System_String_o *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4AFFED1 & 1) == 0 )
  {
    sub_1BC3008(&System_Convert_TypeInfo, method);
    byte_4AFFED1 = 1;
  }
  Bytes_k__BackingField = this->fields._Bytes_k__BackingField;
  if ( Bytes_k__BackingField )
  {
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    v4 = System_Convert__ToBase64String(Bytes_k__BackingField, 0LL);
    this->fields._Str_k__BackingField = v4;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._Str_k__BackingField, (int32_t)v4, v5, v6);
  }
  return this;
}


ByteCompressor_o *__fastcall ByteCompressor__ToGzip(ByteCompressor_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ByteCompressor_Fields *p_fields; // x22
  System_IO_MemoryStream_o *v6; // x19
  System_IO_Compression_GZipStream_o *v7; // x21
  __int64 v8; // x0
  struct System_Byte_array *Bytes_k__BackingField; // x1
  System_IO_Compression_GZipStream_c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_IO_MemoryStream_c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0

  if ( (byte_4AFFED3 & 1) == 0 )
  {
    sub_1BC3008(&System_IO_Compression_GZipStream_TypeInfo, method);
    sub_1BC3008(&System_IDisposable_TypeInfo, v3);
    sub_1BC3008(&System_IO_MemoryStream_TypeInfo, v4);
    byte_4AFFED3 = 1;
  }
  p_fields = &this->fields;
  if ( this->fields._Bytes_k__BackingField )
  {
    v6 = (System_IO_MemoryStream_o *)sub_1BC3254(System_IO_MemoryStream_TypeInfo);
    System_IO_MemoryStream___ctor(v6, 0LL);
    v7 = (System_IO_Compression_GZipStream_o *)sub_1BC3254(System_IO_Compression_GZipStream_TypeInfo);
    System_IO_Compression_GZipStream___ctor_69287660(v7, (System_IO_Stream_o *)v6, 0, 0LL);
    Bytes_k__BackingField = p_fields->_Bytes_k__BackingField;
    if ( !p_fields->_Bytes_k__BackingField )
      sub_1BC3264(v8, 0LL);
    if ( !v7 )
      sub_1BC3264(v8, Bytes_k__BackingField);
    ((void (__fastcall *)(System_IO_Compression_GZipStream_o *, struct System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))v7->klass->vtable._34_Write.method)(
      v7,
      Bytes_k__BackingField,
      0LL,
      Bytes_k__BackingField->max_length,
      v7->klass->vtable._35_Write.methodPtr);
    klass = v7->klass;
    v11 = *(unsigned __int16 *)(&v7->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v7->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_10;
      }
      v13 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_10:
      v13 = sub_1C13570(v7, System_IDisposable_TypeInfo, 0LL);
    }
    v14 = (*(__int64 (__fastcall **)(System_IO_Compression_GZipStream_o *, _QWORD))v13)(v7, *(_QWORD *)(v13 + 8));
    if ( !v6 )
      sub_1BC3264(v14, v15);
    v16 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v6->klass->vtable._40_ToArray.method)(
            v6,
            v6->klass[1]._1.image);
    p_fields->_Bytes_k__BackingField = (struct System_Byte_array *)v16;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, v16, v17, v18);
    v19 = v6->klass;
    v20 = *(unsigned __int16 *)(&v6->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v6->klass->_2.bitflags2 + 3) )
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
      v22 = sub_1C13570(v6, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v22)(v6, *(_QWORD *)(v22 + 8));
  }
  return this;
}


Il2CppObject *__fastcall ByteCompressor__UnpackMiniMessagePack_object_(
        ByteCompressor_o *this,
        const MethodInfo_2FF46F8 *method)
{
  MiniMessagePack_MiniMessagePacker_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( !method->rgctx_data )
  {
    sub_1BC3008(&MiniMessagePack_MiniMessagePacker_TypeInfo, method);
    if ( !method->rgctx_data )
      sub_1C134C8(method);
  }
  v4 = (MiniMessagePack_MiniMessagePacker_o *)sub_1BC3254(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v4, 0LL);
  if ( !v4 )
    sub_1BC3264(v5, v6);
  return MiniMessagePack_MiniMessagePacker__UnpackClass_object_(
           v4,
           this->fields._Bytes_k__BackingField,
           (const MethodInfo_3085504 *)method->rgctx_data->_0_MiniMessagePack_MiniMessagePacker_UnpackClass_T_);
}


System_Byte_array *__fastcall ByteCompressor__get_Bytes(ByteCompressor_o *this, const MethodInfo *method)
{
  return this->fields._Bytes_k__BackingField;
}


System_String_o *__fastcall ByteCompressor__get_Str(ByteCompressor_o *this, const MethodInfo *method)
{
  return this->fields._Str_k__BackingField;
}


void __fastcall ByteCompressor__set_Bytes(ByteCompressor_o *this, System_Byte_array *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Bytes_k__BackingField = value;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall ByteCompressor__set_Str(ByteCompressor_o *this, System_String_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Str_k__BackingField = value;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._Str_k__BackingField, (int32_t)value, (int32_t)method, v3);
}