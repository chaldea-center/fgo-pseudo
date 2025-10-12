void MdcStr___ctor(MdcStr_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *MdcStr__Dc(
        System_String_o *str,
        uint32_t eorData,
        System_Nullable_uint__o crc,
        const MethodInfo *method)
{
  bool hasValue; // w20
  System_Byte_array *v7; // x0
  bool v8; // zf
  System_Byte_array *v9; // x20
  uint32_t v10; // w21
  System_Nullable_uint__o v11; // x0
  _DWORD *Mk; // x0
  unsigned int v13; // w8
  unsigned __int64 v14; // x8
  unsigned __int64 max_length; // x9
  System_Text_Encoding_o *UTF8; // x0
  System_Text_Encoding_o *v17; // x19
  __int64 v18; // x21
  System_Text_Encoding_o *v19; // x19
  __int64 v20; // x22
  System_Security_Cryptography_TripleDESCryptoServiceProvider_o *v21; // x23
  System_IO_MemoryStream_o *v22; // x19
  __int64 v23; // x0
  System_Security_Cryptography_ICryptoTransform_o *v24; // x22
  System_Security_Cryptography_CryptoStream_o *v25; // x21
  __int64 v26; // x0
  System_Security_Cryptography_CryptoStream_c *klass; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 v30; // x0
  __int64 v31; // x0
  System_Byte_array *v32; // x20
  System_IO_MemoryStream_c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0
  System_IO_MemoryStream_o *v37; // x19
  System_IO_MemoryStream_o *v38; // x22
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *v39; // x23
  __int64 v40; // x0
  __int64 v41; // x21
  __int64 v42; // x0
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_c *v43; // x8
  __int64 v44; // x9
  int32_t *v45; // x10
  __int64 v46; // x0
  __int64 v47; // x0
  System_IO_MemoryStream_c *v48; // x8
  __int64 v49; // x9
  int32_t *v50; // x10
  __int64 v51; // x0
  __int64 v52; // x0
  __int64 v53; // x22
  System_IO_MemoryStream_c *v54; // x8
  __int64 v55; // x9
  int32_t *v56; // x10
  __int64 v57; // x0
  __int64 v59; // x0
  System_IO_IOException_o *v60; // x19
  System_String_o *v61; // x0
  __int64 v62; // x0
  System_Nullable_uint__o v63; // [xsp+8h] [xbp-58h] BYREF

  v63 = crc;
  hasValue = crc.fields.hasValue;
  if ( (byte_4C37174 & 1) == 0 )
  {
    sub_1C32C20(&ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo);
    sub_1C32C20(&byte___TypeInfo);
    sub_1C32C20(&System_Convert_TypeInfo);
    sub_1C32C20(&Crc32_TypeInfo);
    sub_1C32C20(&System_Security_Cryptography_CryptoStream_TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_IO_MemoryStream_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_System_Nullable_uint__get_HasValue__);
    sub_1C32C20(&Method_System_Nullable_uint__get_Value__);
    sub_1C32C20(&System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
    byte_4C37174 = 1;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v7 = System_Convert__FromBase64String(str, 0);
  v8 = !hasValue;
  v9 = v7;
  if ( !v8 )
  {
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v10 = Crc32__Compute(v9, 0);
    v11 = (System_Nullable_uint__o)&v63;
    if ( v10 != System_Nullable_uint___get_Value(
                  v11,
                  (const MethodInfo_38C1B30 *)Method_System_Nullable_uint__get_Value__) )
    {
      v59 = sub_1C32C34(&System_IO_IOException_TypeInfo);
      v60 = (System_IO_IOException_o *)sub_1C32E6C(v59);
      v61 = (System_String_o *)sub_1C32C34(&StringLiteral_8982/*"MdcStr:Dc Crc Error"*/);
      System_IO_IOException___ctor_64337216(v60, v61, 0);
      v62 = sub_1C32C34(&Method_MdcStr_Dc__);
      sub_1C32D48(v60, v62);
    }
  }
  if ( eorData )
  {
    Mk = (_DWORD *)sub_1C32CC8(byte___TypeInfo, 4);
    if ( !Mk )
      goto LABEL_70;
    v13 = Mk[6];
    if ( !v13 )
      goto LABEL_68;
    *((_BYTE *)Mk + 32) = eorData;
    if ( v13 == 1 )
      goto LABEL_68;
    *((_BYTE *)Mk + 33) = BYTE1(eorData);
    if ( v13 <= 2 )
      goto LABEL_68;
    *((_BYTE *)Mk + 34) = BYTE2(eorData);
    if ( v13 == 3 )
      goto LABEL_68;
    *((_BYTE *)Mk + 35) = HIBYTE(eorData);
    if ( !v9 )
LABEL_70:
      sub_1C32E7C(Mk);
    if ( (int)v9->max_length >= 1 )
    {
      v14 = 0;
      max_length = (unsigned int)v9->max_length;
      while ( v14 < max_length && (v14 & 3) < Mk[6] )
      {
        v9->m_Items[v14] ^= *((_BYTE *)Mk + (v14 & 3) + 32);
        if ( max_length == ++v14 )
          goto LABEL_21;
      }
LABEL_68:
      sub_1C32E84(Mk);
    }
  }
LABEL_21:
  UTF8 = System_Text_Encoding__get_UTF8(0);
  v17 = UTF8;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Mk = NetworkManager__GetMk((const MethodInfo *)UTF8);
  if ( !v17 )
    goto LABEL_70;
  v18 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, _DWORD *, const MethodInfo *))v17->klass->vtable._18_GetBytes.methodPtr)(
          v17,
          Mk,
          v17->klass->vtable._18_GetBytes.method);
  v19 = System_Text_Encoding__get_UTF8(0);
  Mk = NetworkManager__GetCv((const MethodInfo *)v19);
  if ( !v19 )
    goto LABEL_70;
  v20 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, _DWORD *, const MethodInfo *))v19->klass->vtable._18_GetBytes.methodPtr)(
          v19,
          Mk,
          v19->klass->vtable._18_GetBytes.method);
  v21 = (System_Security_Cryptography_TripleDESCryptoServiceProvider_o *)sub_1C32E6C(System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_TripleDESCryptoServiceProvider___ctor(v21, 0);
  v22 = (System_IO_MemoryStream_o *)sub_1C32E6C(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v22, 0);
  if ( !v21 )
    sub_1C32E7C(v23);
  v24 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_TripleDESCryptoServiceProvider_o *, __int64, __int64, const MethodInfo *))v21->klass->vtable._23_CreateDecryptor.methodPtr)(
                                                             v21,
                                                             v18,
                                                             v20,
                                                             v21->klass->vtable._23_CreateDecryptor.method);
  v25 = (System_Security_Cryptography_CryptoStream_o *)sub_1C32E6C(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v25, (System_IO_Stream_o *)v22, v24, 1, 0);
  if ( !v9 )
    sub_1C32E7C(v26);
  if ( !v25 )
    sub_1C32E7C(v26);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, System_Byte_array *, _QWORD, _QWORD, const MethodInfo *))v25->klass->vtable._34_Write.methodPtr)(
    v25,
    v9,
    0,
    LODWORD(v9->max_length),
    v25->klass->vtable._34_Write.method);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, const MethodInfo *))v25->klass->vtable._18_Close.methodPtr)(
    v25,
    v25->klass->vtable._18_Close.method);
  klass = v25->klass;
  v28 = *(unsigned __int16 *)&v25->klass->_2.rank;
  if ( *(_WORD *)&v25->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      p_offset += 4;
      if ( !v28 )
        goto LABEL_32;
    }
    v30 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_32:
    v30 = sub_1C83438(v25, System_IDisposable_TypeInfo, 0);
  }
  v31 = (*(__int64 (__fastcall **)(System_Security_Cryptography_CryptoStream_o *, _QWORD))v30)(
          v25,
          *(_QWORD *)(v30 + 8));
  if ( !v22 )
    sub_1C32E7C(v31);
  v32 = (System_Byte_array *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v22->klass->vtable._40_ToArray.methodPtr)(
                               v22,
                               v22->klass->vtable._40_ToArray.method);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v22->klass->vtable._18_Close.methodPtr)(
    v22,
    v22->klass->vtable._18_Close.method);
  v33 = v22->klass;
  v34 = *(unsigned __int16 *)&v22->klass->_2.rank;
  if ( *(_WORD *)&v22->klass->_2.rank )
  {
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_39;
    }
    v36 = (__int64)&v33->vtable + 16 * *v35;
  }
  else
  {
LABEL_39:
    v36 = sub_1C83438(v22, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v36)(v22, *(_QWORD *)(v36 + 8));
  v37 = (System_IO_MemoryStream_o *)sub_1C32E6C(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v37, 0);
  v38 = (System_IO_MemoryStream_o *)sub_1C32E6C(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_64341020(v38, v32, 0);
  v39 = (ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *)sub_1C32E6C(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo);
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream___ctor(v39, (System_IO_Stream_o *)v38, 0);
  v40 = sub_1C32CC8(byte___TypeInfo, 0x4000);
  v41 = v40;
  if ( !v40 )
    sub_1C32E7C(0);
  if ( !v39 )
    sub_1C32E7C(v40);
  while ( 1 )
  {
    v42 = ((__int64 (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v39->klass->vtable._31_Read.methodPtr)(
            v39,
            v41,
            0,
            *(unsigned int *)(v41 + 24),
            v39->klass->vtable._31_Read.method);
    if ( (int)v42 <= 0 )
      break;
    if ( !v37 )
      sub_1C32E7C(v42);
    ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v37->klass->vtable._34_Write.methodPtr)(
      v37,
      v41,
      0,
      (unsigned int)v42,
      v37->klass->vtable._34_Write.method);
  }
  ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, const MethodInfo *))v39->klass->vtable._18_Close.methodPtr)(
    v39,
    v39->klass->vtable._18_Close.method);
  v43 = v39->klass;
  v44 = *(unsigned __int16 *)&v39->klass->_2.rank;
  if ( *(_WORD *)&v39->klass->_2.rank )
  {
    v45 = &v43->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
    {
      --v44;
      v45 += 4;
      if ( !v44 )
        goto LABEL_50;
    }
    v46 = (__int64)&v43->vtable + 16 * *v45;
  }
  else
  {
LABEL_50:
    v46 = sub_1C83438(v39, System_IDisposable_TypeInfo, 0);
  }
  v47 = (*(__int64 (__fastcall **)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, _QWORD))v46)(
          v39,
          *(_QWORD *)(v46 + 8));
  if ( !v38 )
    sub_1C32E7C(v47);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v38->klass->vtable._18_Close.methodPtr)(
    v38,
    v38->klass->vtable._18_Close.method);
  v48 = v38->klass;
  v49 = *(unsigned __int16 *)&v38->klass->_2.rank;
  if ( *(_WORD *)&v38->klass->_2.rank )
  {
    v50 = &v48->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
    {
      --v49;
      v50 += 4;
      if ( !v49 )
        goto LABEL_57;
    }
    v51 = (__int64)&v48->vtable + 16 * *v50;
  }
  else
  {
LABEL_57:
    v51 = sub_1C83438(v38, System_IDisposable_TypeInfo, 0);
  }
  v52 = (*(__int64 (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v51)(v38, *(_QWORD *)(v51 + 8));
  if ( !v37 )
    sub_1C32E7C(v52);
  v53 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v37->klass->vtable._40_ToArray.methodPtr)(
          v37,
          v37->klass->vtable._40_ToArray.method);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v37->klass->vtable._18_Close.methodPtr)(
    v37,
    v37->klass->vtable._18_Close.method);
  v54 = v37->klass;
  v55 = *(unsigned __int16 *)&v37->klass->_2.rank;
  if ( *(_WORD *)&v37->klass->_2.rank )
  {
    v56 = &v54->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
    {
      --v55;
      v56 += 4;
      if ( !v55 )
        goto LABEL_64;
    }
    v57 = (__int64)&v54->vtable + 16 * *v56;
  }
  else
  {
LABEL_64:
    v57 = sub_1C83438(v37, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v57)(v37, *(_QWORD *)(v57 + 8));
  Mk = System_Text_Encoding__get_UTF8(0);
  if ( !Mk )
    goto LABEL_70;
  return (System_String_o *)(*(__int64 (__fastcall **)(_DWORD *, __int64, _QWORD))(*(_QWORD *)Mk + 872LL))(
                              Mk,
                              v53,
                              *(_QWORD *)(*(_QWORD *)Mk + 880LL));
}


System_String_o *MdcStr__Ec(
        System_Nullable_uint__o *crc,
        System_String_o *str,
        uint32_t eorData,
        const MethodInfo *method)
{
  unsigned int *UTF8; // x0
  __int64 v8; // x23
  System_Text_Encoding_o *v9; // x0
  System_Text_Encoding_o *v10; // x21
  __int64 v11; // x22
  System_Text_Encoding_o *v12; // x21
  __int64 v13; // x24
  System_Security_Cryptography_TripleDESCryptoServiceProvider_o *v14; // x25
  System_IO_MemoryStream_o *v15; // x21
  __int64 v16; // x0
  System_Security_Cryptography_ICryptoTransform_o *v17; // x24
  System_Security_Cryptography_CryptoStream_o *v18; // x22
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *v19; // x25
  __int64 v20; // x0
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  System_Security_Cryptography_CryptoStream_c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x0
  System_Byte_array *v31; // x22
  System_IO_MemoryStream_c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  unsigned int v36; // w8
  unsigned __int64 v37; // x8
  unsigned __int64 max_length; // x9
  uint32_t v39; // w1
  System_Nullable_uint__o v40; // x0
  System_Nullable_uint__o v42; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C37173 & 1) == 0 )
  {
    sub_1C32C20(&ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo);
    sub_1C32C20(&byte___TypeInfo);
    sub_1C32C20(&System_Convert_TypeInfo);
    sub_1C32C20(&Crc32_TypeInfo);
    sub_1C32C20(&System_Security_Cryptography_CryptoStream_TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_IO_MemoryStream_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_System_Nullable_uint___ctor__);
    sub_1C32C20(&Method_System_Nullable_uint__get_HasValue__);
    sub_1C32C20(&System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
    byte_4C37173 = 1;
  }
  UTF8 = (unsigned int *)System_Text_Encoding__get_UTF8(0);
  if ( !UTF8 )
    goto LABEL_51;
  v8 = (*(__int64 (__fastcall **)(unsigned int *, System_String_o *, _QWORD))(*(_QWORD *)UTF8 + 600LL))(
         UTF8,
         str,
         *(_QWORD *)(*(_QWORD *)UTF8 + 608LL));
  v9 = System_Text_Encoding__get_UTF8(0);
  v10 = v9;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UTF8 = (unsigned int *)NetworkManager__GetMk((const MethodInfo *)v9);
  if ( !v10 )
    goto LABEL_51;
  v11 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, unsigned int *, const MethodInfo *))v10->klass->vtable._18_GetBytes.methodPtr)(
          v10,
          UTF8,
          v10->klass->vtable._18_GetBytes.method);
  v12 = System_Text_Encoding__get_UTF8(0);
  UTF8 = (unsigned int *)NetworkManager__GetCv((const MethodInfo *)v12);
  if ( !v12 )
    goto LABEL_51;
  v13 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, unsigned int *, const MethodInfo *))v12->klass->vtable._18_GetBytes.methodPtr)(
          v12,
          UTF8,
          v12->klass->vtable._18_GetBytes.method);
  v14 = (System_Security_Cryptography_TripleDESCryptoServiceProvider_o *)sub_1C32E6C(System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_TripleDESCryptoServiceProvider___ctor(v14, 0);
  v15 = (System_IO_MemoryStream_o *)sub_1C32E6C(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v15, 0);
  if ( !v14 )
    sub_1C32E7C(v16);
  v17 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_TripleDESCryptoServiceProvider_o *, __int64, __int64, const MethodInfo *))v14->klass->vtable._21_CreateEncryptor.methodPtr)(
                                                             v14,
                                                             v11,
                                                             v13,
                                                             v14->klass->vtable._21_CreateEncryptor.method);
  v18 = (System_Security_Cryptography_CryptoStream_o *)sub_1C32E6C(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v18, (System_IO_Stream_o *)v15, v17, 1, 0);
  v19 = (ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *)sub_1C32E6C(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo);
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream___ctor(v19, (System_IO_Stream_o *)v18, 0);
  if ( !v8 )
    sub_1C32E7C(v20);
  if ( !v19 )
    sub_1C32E7C(v20);
  ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v19->klass->vtable._34_Write.methodPtr)(
    v19,
    v8,
    0,
    *(unsigned int *)(v8 + 24),
    v19->klass->vtable._34_Write.method);
  ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, const MethodInfo *))v19->klass->vtable._18_Close.methodPtr)(
    v19,
    v19->klass->vtable._18_Close.method);
  klass = v19->klass;
  v22 = *(unsigned __int16 *)&v19->klass->_2.rank;
  if ( *(_WORD *)&v19->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      p_offset += 4;
      if ( !v22 )
        goto LABEL_15;
    }
    v24 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_15:
    v24 = sub_1C83438(v19, System_IDisposable_TypeInfo, 0);
  }
  v25 = (*(__int64 (__fastcall **)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, _QWORD))v24)(
          v19,
          *(_QWORD *)(v24 + 8));
  if ( !v18 )
    sub_1C32E7C(v25);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, const MethodInfo *))v18->klass->vtable._18_Close.methodPtr)(
    v18,
    v18->klass->vtable._18_Close.method);
  v26 = v18->klass;
  v27 = *(unsigned __int16 *)&v18->klass->_2.rank;
  if ( *(_WORD *)&v18->klass->_2.rank )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_22;
    }
    v29 = (__int64)&v26->vtable + 16 * *v28;
  }
  else
  {
LABEL_22:
    v29 = sub_1C83438(v18, System_IDisposable_TypeInfo, 0);
  }
  v30 = (*(__int64 (__fastcall **)(System_Security_Cryptography_CryptoStream_o *, _QWORD))v29)(
          v18,
          *(_QWORD *)(v29 + 8));
  if ( !v15 )
    sub_1C32E7C(v30);
  v31 = (System_Byte_array *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v15->klass->vtable._40_ToArray.methodPtr)(
                               v15,
                               v15->klass->vtable._40_ToArray.method);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v15->klass->vtable._18_Close.methodPtr)(
    v15,
    v15->klass->vtable._18_Close.method);
  v32 = v15->klass;
  v33 = *(unsigned __int16 *)&v15->klass->_2.rank;
  if ( *(_WORD *)&v15->klass->_2.rank )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_29;
    }
    v35 = (__int64)&v32->vtable + 16 * *v34;
  }
  else
  {
LABEL_29:
    v35 = sub_1C83438(v15, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v35)(v15, *(_QWORD *)(v35 + 8));
  if ( !eorData )
    goto LABEL_43;
  UTF8 = (unsigned int *)sub_1C32CC8(byte___TypeInfo, 4);
  if ( !UTF8 )
    goto LABEL_51;
  v36 = UTF8[6];
  if ( !v36 )
    goto LABEL_50;
  *((_BYTE *)UTF8 + 32) = eorData;
  if ( v36 == 1 )
    goto LABEL_50;
  *((_BYTE *)UTF8 + 33) = BYTE1(eorData);
  if ( v36 <= 2 )
    goto LABEL_50;
  *((_BYTE *)UTF8 + 34) = BYTE2(eorData);
  if ( v36 == 3 )
    goto LABEL_50;
  *((_BYTE *)UTF8 + 35) = HIBYTE(eorData);
  if ( !v31 )
LABEL_51:
    sub_1C32E7C(UTF8);
  if ( (int)v31->max_length >= 1 )
  {
    v37 = 0;
    max_length = (unsigned int)v31->max_length;
    while ( v37 < max_length && (v37 & 3) < UTF8[6] )
    {
      v31->m_Items[v37] ^= *((_BYTE *)UTF8 + (v37 & 3) + 32);
      if ( max_length == ++v37 )
        goto LABEL_43;
    }
LABEL_50:
    sub_1C32E84(UTF8);
  }
LABEL_43:
  if ( crc->fields.hasValue )
  {
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v39 = Crc32__Compute(v31, 0);
    v40 = (System_Nullable_uint__o)&v42;
    v42 = 0;
    System_Nullable_uint____ctor(v40, v39, (const MethodInfo_38C1B18 *)Method_System_Nullable_uint___ctor__);
    *crc = v42;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToBase64String(v31, 0);
}