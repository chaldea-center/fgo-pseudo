void __fastcall MdcStr___ctor(MdcStr_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall MdcStr__Dc(
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
  _DWORD *Mk; // x0
  __int64 v12; // x1
  unsigned int v13; // w8
  unsigned __int64 v14; // x8
  unsigned __int64 v15; // x9
  System_Text_Encoding_o *UTF8; // x0
  System_Text_Encoding_o *v17; // x19
  __int64 v18; // x21
  System_Text_Encoding_o *v19; // x19
  __int64 v20; // x22
  System_Security_Cryptography_TripleDESCryptoServiceProvider_o *v21; // x23
  System_IO_MemoryStream_o *v22; // x19
  __int64 v23; // x0
  __int64 v24; // x1
  System_Security_Cryptography_ICryptoTransform_o *v25; // x22
  System_Security_Cryptography_CryptoStream_o *v26; // x21
  __int64 v27; // x0
  __int64 v28; // x1
  System_Security_Cryptography_CryptoStream_c *klass; // x8
  __int64 v30; // x9
  int32_t *p_offset; // x10
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  System_Byte_array *v35; // x20
  System_IO_MemoryStream_c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0
  System_IO_MemoryStream_o *v40; // x19
  System_IO_MemoryStream_o *v41; // x22
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *v42; // x23
  __int64 v43; // x0
  __int64 v44; // x1
  __int64 v45; // x21
  __int64 v46; // x0
  __int64 v47; // x1
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_c *v48; // x8
  __int64 v49; // x9
  int32_t *v50; // x10
  __int64 v51; // x0
  __int64 v52; // x0
  __int64 v53; // x1
  System_IO_MemoryStream_c *v54; // x8
  __int64 v55; // x9
  int32_t *v56; // x10
  __int64 v57; // x0
  __int64 v58; // x0
  __int64 v59; // x1
  __int64 v60; // x22
  System_IO_MemoryStream_c *v61; // x8
  __int64 v62; // x9
  int32_t *v63; // x10
  __int64 v64; // x0
  __int64 v66; // x0
  System_IO_IOException_o *v67; // x19
  System_String_o *v68; // x0
  __int64 v69; // x0
  System_Nullable_uint__o v70; // [xsp+8h] [xbp-58h] BYREF
  System_Nullable_uint__o v71; // 0:x0.8

  v70 = crc;
  hasValue = crc.fields.hasValue;
  if ( (byte_4BDBD67 & 1) == 0 )
  {
    sub_1C21E38(&ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo);
    sub_1C21E38(&byte___TypeInfo);
    sub_1C21E38(&System_Convert_TypeInfo);
    sub_1C21E38(&Crc32_TypeInfo);
    sub_1C21E38(&System_Security_Cryptography_CryptoStream_TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_IO_MemoryStream_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_System_Nullable_uint__get_HasValue__);
    sub_1C21E38(&Method_System_Nullable_uint__get_Value__);
    sub_1C21E38(&System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
    byte_4BDBD67 = 1;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v7 = System_Convert__FromBase64String(str, 0LL);
  v8 = !hasValue;
  v9 = v7;
  if ( !v8 )
  {
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v10 = Crc32__Compute(v9, 0LL);
    v71 = (System_Nullable_uint__o)&v70;
    if ( v10 != System_Nullable_uint___get_Value(
                  v71,
                  (const MethodInfo_376EEB8 *)Method_System_Nullable_uint__get_Value__) )
    {
      v66 = sub_1C21E4C(&System_IO_IOException_TypeInfo);
      v67 = (System_IO_IOException_o *)sub_1C22084(v66);
      v68 = (System_String_o *)sub_1C21E4C(&StringLiteral_9134/*"MdcStr:Dc Crc Error"*/);
      System_IO_IOException___ctor_63255720(v67, v68, 0LL);
      v69 = sub_1C21E4C(&Method_MdcStr_Dc__);
      sub_1C21F60(v67, v69);
    }
  }
  if ( eorData )
  {
    Mk = (_DWORD *)sub_1C21EE0(byte___TypeInfo, 4LL);
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
      sub_1C22094(Mk, v12);
    if ( (int)*(_QWORD *)&v9->max_length >= 1 )
    {
      v14 = 0LL;
      v15 = (unsigned int)*(_QWORD *)&v9->max_length;
      while ( v14 < v15 && (v14 & 3) < Mk[6] )
      {
        v9->m_Items[v14 + 4] ^= *((_BYTE *)Mk + (v14 & 3) + 32);
        if ( v15 == ++v14 )
          goto LABEL_21;
      }
LABEL_68:
      sub_1C2209C(Mk, v12);
    }
  }
LABEL_21:
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  v17 = UTF8;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Mk = NetworkManager__GetMk((const MethodInfo *)UTF8);
  if ( !v17 )
    goto LABEL_70;
  v18 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, _DWORD *, Il2CppMethodPointer))v17->klass->vtable._19_GetBytes.method)(
          v17,
          Mk,
          v17->klass->vtable._20_GetBytes.methodPtr);
  v19 = System_Text_Encoding__get_UTF8(0LL);
  Mk = NetworkManager__GetCv((const MethodInfo *)v19);
  if ( !v19 )
    goto LABEL_70;
  v20 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, _DWORD *, Il2CppMethodPointer))v19->klass->vtable._19_GetBytes.method)(
          v19,
          Mk,
          v19->klass->vtable._20_GetBytes.methodPtr);
  v21 = (System_Security_Cryptography_TripleDESCryptoServiceProvider_o *)sub_1C22084(System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_TripleDESCryptoServiceProvider___ctor(v21, 0LL);
  v22 = (System_IO_MemoryStream_o *)sub_1C22084(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v22, 0LL);
  if ( !v21 )
    sub_1C22094(v23, v24);
  v25 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_TripleDESCryptoServiceProvider_o *, __int64, __int64, Il2CppMethodPointer))v21->klass->vtable._25_CreateDecryptor.method)(
                                                             v21,
                                                             v18,
                                                             v20,
                                                             v21->klass->vtable._26_GenerateKey.methodPtr);
  v26 = (System_Security_Cryptography_CryptoStream_o *)sub_1C22084(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v26, (System_IO_Stream_o *)v22, v25, 1, 0LL);
  if ( !v9 )
    sub_1C22094(v27, v28);
  if ( !v26 )
    sub_1C22094(v27, v28);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))v26->klass->vtable._36_Write.method)(
    v26,
    v9,
    0LL,
    v9->max_length,
    v26->klass->vtable._37_Write.methodPtr);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, Il2CppMethodPointer))v26->klass->vtable._19_Close.method)(
    v26,
    v26->klass->vtable._20_Dispose.methodPtr);
  klass = v26->klass;
  v30 = *(unsigned __int16 *)(&v26->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v26->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v30;
      p_offset += 4;
      if ( !v30 )
        goto LABEL_32;
    }
    v32 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_32:
    v32 = sub_1C73E18(v26, System_IDisposable_TypeInfo, 0LL);
  }
  v33 = (*(__int64 (__fastcall **)(System_Security_Cryptography_CryptoStream_o *, _QWORD))v32)(
          v26,
          *(_QWORD *)(v32 + 8));
  if ( !v22 )
    sub_1C22094(v33, v34);
  v35 = (System_Byte_array *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v22->klass->vtable._42_ToArray.method)(
                               v22,
                               v22->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v22->klass->vtable._19_Close.method)(
    v22,
    v22->klass->vtable._20_Dispose.methodPtr);
  v36 = v22->klass;
  v37 = *(unsigned __int16 *)(&v22->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v22->klass->_2.bitflags2 + 3) )
  {
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_39;
    }
    v39 = (__int64)(&v36->vtable._0_Equals.method + 2 * *v38);
  }
  else
  {
LABEL_39:
    v39 = sub_1C73E18(v22, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v39)(v22, *(_QWORD *)(v39 + 8));
  v40 = (System_IO_MemoryStream_o *)sub_1C22084(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v40, 0LL);
  v41 = (System_IO_MemoryStream_o *)sub_1C22084(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_63259488(v41, v35, 0LL);
  v42 = (ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *)sub_1C22084(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo);
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream___ctor(v42, (System_IO_Stream_o *)v41, 0LL);
  v43 = sub_1C21EE0(byte___TypeInfo, 0x4000LL);
  v45 = v43;
  if ( !v43 )
    sub_1C22094(0LL, v44);
  if ( !v42 )
    sub_1C22094(v43, v44);
  while ( 1 )
  {
    v46 = ((__int64 (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v42->klass->vtable._33_Read.method)(
            v42,
            v45,
            0LL,
            *(unsigned int *)(v45 + 24),
            v42->klass->vtable._34_Read.methodPtr);
    if ( (int)v46 <= 0 )
      break;
    if ( !v40 )
      sub_1C22094(v46, v47);
    ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v40->klass->vtable._36_Write.method)(
      v40,
      v45,
      0LL,
      (unsigned int)v46,
      v40->klass->vtable._37_Write.methodPtr);
  }
  ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, Il2CppMethodPointer))v42->klass->vtable._19_Close.method)(
    v42,
    v42->klass->vtable._20_Dispose.methodPtr);
  v48 = v42->klass;
  v49 = *(unsigned __int16 *)(&v42->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v42->klass->_2.bitflags2 + 3) )
  {
    v50 = &v48->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
    {
      --v49;
      v50 += 4;
      if ( !v49 )
        goto LABEL_50;
    }
    v51 = (__int64)(&v48->vtable._0_Equals.method + 2 * *v50);
  }
  else
  {
LABEL_50:
    v51 = sub_1C73E18(v42, System_IDisposable_TypeInfo, 0LL);
  }
  v52 = (*(__int64 (__fastcall **)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, _QWORD))v51)(
          v42,
          *(_QWORD *)(v51 + 8));
  if ( !v41 )
    sub_1C22094(v52, v53);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v41->klass->vtable._19_Close.method)(
    v41,
    v41->klass->vtable._20_Dispose.methodPtr);
  v54 = v41->klass;
  v55 = *(unsigned __int16 *)(&v41->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v41->klass->_2.bitflags2 + 3) )
  {
    v56 = &v54->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
    {
      --v55;
      v56 += 4;
      if ( !v55 )
        goto LABEL_57;
    }
    v57 = (__int64)(&v54->vtable._0_Equals.method + 2 * *v56);
  }
  else
  {
LABEL_57:
    v57 = sub_1C73E18(v41, System_IDisposable_TypeInfo, 0LL);
  }
  v58 = (*(__int64 (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v57)(v41, *(_QWORD *)(v57 + 8));
  if ( !v40 )
    sub_1C22094(v58, v59);
  v60 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v40->klass->vtable._42_ToArray.method)(
          v40,
          v40->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v40->klass->vtable._19_Close.method)(
    v40,
    v40->klass->vtable._20_Dispose.methodPtr);
  v61 = v40->klass;
  v62 = *(unsigned __int16 *)(&v40->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v40->klass->_2.bitflags2 + 3) )
  {
    v63 = &v61->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
    {
      --v62;
      v63 += 4;
      if ( !v62 )
        goto LABEL_64;
    }
    v64 = (__int64)(&v61->vtable._0_Equals.method + 2 * *v63);
  }
  else
  {
LABEL_64:
    v64 = sub_1C73E18(v40, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v64)(v40, *(_QWORD *)(v64 + 8));
  Mk = System_Text_Encoding__get_UTF8(0LL);
  if ( !Mk )
    goto LABEL_70;
  return (System_String_o *)(*(__int64 (__fastcall **)(_DWORD *, __int64, _QWORD))(*(_QWORD *)Mk + 888LL))(
                              Mk,
                              v60,
                              *(_QWORD *)(*(_QWORD *)Mk + 896LL));
}


System_String_o *__fastcall MdcStr__Ec(
        System_Nullable_uint__o *crc,
        System_String_o *str,
        uint32_t eorData,
        const MethodInfo *method)
{
  unsigned int *UTF8; // x0
  __int64 v8; // x1
  __int64 v9; // x23
  System_Text_Encoding_o *v10; // x0
  System_Text_Encoding_o *v11; // x21
  __int64 v12; // x22
  System_Text_Encoding_o *v13; // x21
  __int64 v14; // x24
  System_Security_Cryptography_TripleDESCryptoServiceProvider_o *v15; // x25
  System_IO_MemoryStream_o *v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  System_Security_Cryptography_ICryptoTransform_o *v19; // x24
  System_Security_Cryptography_CryptoStream_o *v20; // x22
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *v21; // x25
  __int64 v22; // x0
  __int64 v23; // x1
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_c *klass; // x8
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x1
  System_Security_Cryptography_CryptoStream_c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x1
  __int64 v36; // x22
  System_IO_MemoryStream_c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  unsigned int v41; // w8
  unsigned __int64 v42; // x8
  unsigned __int64 v43; // x9
  uint32_t v44; // w1
  System_Nullable_uint__o v46; // [xsp+8h] [xbp-58h] BYREF
  System_Nullable_uint__o v47; // 0:x0.8

  if ( (byte_4BDBD66 & 1) == 0 )
  {
    sub_1C21E38(&ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo);
    sub_1C21E38(&byte___TypeInfo);
    sub_1C21E38(&System_Convert_TypeInfo);
    sub_1C21E38(&Crc32_TypeInfo);
    sub_1C21E38(&System_Security_Cryptography_CryptoStream_TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_IO_MemoryStream_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_System_Nullable_uint___ctor__);
    sub_1C21E38(&Method_System_Nullable_uint__get_HasValue__);
    sub_1C21E38(&System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
    byte_4BDBD66 = 1;
  }
  UTF8 = (unsigned int *)System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    goto LABEL_51;
  v9 = (*(__int64 (__fastcall **)(unsigned int *, System_String_o *, _QWORD))(*(_QWORD *)UTF8 + 616LL))(
         UTF8,
         str,
         *(_QWORD *)(*(_QWORD *)UTF8 + 624LL));
  v10 = System_Text_Encoding__get_UTF8(0LL);
  v11 = v10;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UTF8 = (unsigned int *)NetworkManager__GetMk((const MethodInfo *)v10);
  if ( !v11 )
    goto LABEL_51;
  v12 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, unsigned int *, Il2CppMethodPointer))v11->klass->vtable._19_GetBytes.method)(
          v11,
          UTF8,
          v11->klass->vtable._20_GetBytes.methodPtr);
  v13 = System_Text_Encoding__get_UTF8(0LL);
  UTF8 = (unsigned int *)NetworkManager__GetCv((const MethodInfo *)v13);
  if ( !v13 )
    goto LABEL_51;
  v14 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, unsigned int *, Il2CppMethodPointer))v13->klass->vtable._19_GetBytes.method)(
          v13,
          UTF8,
          v13->klass->vtable._20_GetBytes.methodPtr);
  v15 = (System_Security_Cryptography_TripleDESCryptoServiceProvider_o *)sub_1C22084(System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_TripleDESCryptoServiceProvider___ctor(v15, 0LL);
  v16 = (System_IO_MemoryStream_o *)sub_1C22084(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v16, 0LL);
  if ( !v15 )
    sub_1C22094(v17, v18);
  v19 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_TripleDESCryptoServiceProvider_o *, __int64, __int64, Il2CppMethodPointer))v15->klass->vtable._23_CreateEncryptor.method)(
                                                             v15,
                                                             v12,
                                                             v14,
                                                             v15->klass->vtable._24_CreateDecryptor.methodPtr);
  v20 = (System_Security_Cryptography_CryptoStream_o *)sub_1C22084(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v20, (System_IO_Stream_o *)v16, v19, 1, 0LL);
  v21 = (ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *)sub_1C22084(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo);
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream___ctor(v21, (System_IO_Stream_o *)v20, 0LL);
  if ( !v9 )
    sub_1C22094(v22, v23);
  if ( !v21 )
    sub_1C22094(v22, v23);
  ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v21->klass->vtable._36_Write.method)(
    v21,
    v9,
    0LL,
    *(unsigned int *)(v9 + 24),
    v21->klass->vtable._37_Write.methodPtr);
  ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, Il2CppMethodPointer))v21->klass->vtable._19_Close.method)(
    v21,
    v21->klass->vtable._20_Dispose.methodPtr);
  klass = v21->klass;
  v25 = *(unsigned __int16 *)(&v21->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v21->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v25;
      p_offset += 4;
      if ( !v25 )
        goto LABEL_15;
    }
    v27 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_15:
    v27 = sub_1C73E18(v21, System_IDisposable_TypeInfo, 0LL);
  }
  v28 = (*(__int64 (__fastcall **)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, _QWORD))v27)(
          v21,
          *(_QWORD *)(v27 + 8));
  if ( !v20 )
    sub_1C22094(v28, v29);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, Il2CppMethodPointer))v20->klass->vtable._19_Close.method)(
    v20,
    v20->klass->vtable._20_Dispose.methodPtr);
  v30 = v20->klass;
  v31 = *(unsigned __int16 *)(&v20->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v20->klass->_2.bitflags2 + 3) )
  {
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_22;
    }
    v33 = (__int64)(&v30->vtable._0_Equals.method + 2 * *v32);
  }
  else
  {
LABEL_22:
    v33 = sub_1C73E18(v20, System_IDisposable_TypeInfo, 0LL);
  }
  v34 = (*(__int64 (__fastcall **)(System_Security_Cryptography_CryptoStream_o *, _QWORD))v33)(
          v20,
          *(_QWORD *)(v33 + 8));
  if ( !v16 )
    sub_1C22094(v34, v35);
  v36 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v16->klass->vtable._42_ToArray.method)(
          v16,
          v16->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v16->klass->vtable._19_Close.method)(
    v16,
    v16->klass->vtable._20_Dispose.methodPtr);
  v37 = v16->klass;
  v38 = *(unsigned __int16 *)(&v16->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v16->klass->_2.bitflags2 + 3) )
  {
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_29;
    }
    v40 = (__int64)(&v37->vtable._0_Equals.method + 2 * *v39);
  }
  else
  {
LABEL_29:
    v40 = sub_1C73E18(v16, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v40)(v16, *(_QWORD *)(v40 + 8));
  if ( !eorData )
    goto LABEL_43;
  UTF8 = (unsigned int *)sub_1C21EE0(byte___TypeInfo, 4LL);
  if ( !UTF8 )
    goto LABEL_51;
  v41 = UTF8[6];
  if ( !v41 )
    goto LABEL_50;
  *((_BYTE *)UTF8 + 32) = eorData;
  if ( v41 == 1 )
    goto LABEL_50;
  *((_BYTE *)UTF8 + 33) = BYTE1(eorData);
  if ( v41 <= 2 )
    goto LABEL_50;
  *((_BYTE *)UTF8 + 34) = BYTE2(eorData);
  if ( v41 == 3 )
    goto LABEL_50;
  *((_BYTE *)UTF8 + 35) = HIBYTE(eorData);
  if ( !v36 )
LABEL_51:
    sub_1C22094(UTF8, v8);
  if ( (int)*(_QWORD *)(v36 + 24) >= 1 )
  {
    v42 = 0LL;
    v43 = (unsigned int)*(_QWORD *)(v36 + 24);
    while ( v42 < v43 && (v42 & 3) < UTF8[6] )
    {
      *(_BYTE *)(v36 + 32 + v42) ^= *((_BYTE *)UTF8 + (v42 & 3) + 32);
      if ( v43 == ++v42 )
        goto LABEL_43;
    }
LABEL_50:
    sub_1C2209C(UTF8, v8);
  }
LABEL_43:
  if ( crc->fields.hasValue )
  {
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v44 = Crc32__Compute((System_Byte_array *)v36, 0LL);
    v47 = (System_Nullable_uint__o)&v46;
    v46 = 0LL;
    System_Nullable_uint____ctor(v47, v44, (const MethodInfo_376EEA0 *)Method_System_Nullable_uint___ctor__);
    *crc = v46;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToBase64String((System_Byte_array *)v36, 0LL);
}