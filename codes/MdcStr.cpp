void __fastcall MdcStr___ctor(MdcStr_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall MdcStr__Dc(
        System_String_o *str,
        uint32_t eorData,
        System_Nullable_uint__o crc,
        const MethodInfo *method)
{
  bool hasValue; // w20
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
  System_Byte_array *v17; // x0
  const MethodInfo *v18; // x1
  bool v19; // zf
  System_Byte_array *v20; // x20
  uint32_t v21; // w21
  _DWORD *Mk; // x0
  __int64 v23; // x1
  unsigned int v24; // w8
  unsigned __int64 v25; // x8
  unsigned __int64 v26; // x9
  System_Text_Encoding_o *UTF8; // x0
  System_Text_Encoding_o *v28; // x19
  __int64 v29; // x21
  System_Text_Encoding_o *v30; // x19
  __int64 v31; // x22
  System_Security_Cryptography_TripleDESCryptoServiceProvider_o *v32; // x23
  System_IO_MemoryStream_o *v33; // x19
  __int64 v34; // x0
  __int64 v35; // x1
  System_Security_Cryptography_ICryptoTransform_o *v36; // x22
  System_Security_Cryptography_CryptoStream_o *v37; // x21
  __int64 v38; // x0
  __int64 v39; // x1
  System_Security_Cryptography_CryptoStream_c *klass; // x8
  __int64 v41; // x9
  int32_t *p_offset; // x10
  __int64 v43; // x0
  __int64 v44; // x0
  __int64 v45; // x1
  System_Byte_array *v46; // x20
  System_IO_MemoryStream_c *v47; // x8
  __int64 v48; // x9
  int32_t *v49; // x10
  __int64 v50; // x0
  System_IO_MemoryStream_o *v51; // x19
  System_IO_MemoryStream_o *v52; // x22
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *v53; // x23
  __int64 v54; // x0
  __int64 v55; // x1
  __int64 v56; // x21
  __int64 v57; // x0
  __int64 v58; // x1
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_c *v59; // x8
  __int64 v60; // x9
  int32_t *v61; // x10
  __int64 v62; // x0
  __int64 v63; // x0
  __int64 v64; // x1
  System_IO_MemoryStream_c *v65; // x8
  __int64 v66; // x9
  int32_t *v67; // x10
  __int64 v68; // x0
  __int64 v69; // x0
  __int64 v70; // x1
  __int64 v71; // x22
  System_IO_MemoryStream_c *v72; // x8
  __int64 v73; // x9
  int32_t *v74; // x10
  __int64 v75; // x0
  __int64 v77; // x0
  System_IO_IOException_o *v78; // x19
  System_String_o *v79; // x0
  __int64 v80; // x0
  System_Nullable_uint__o v81; // [xsp+8h] [xbp-58h] BYREF
  System_Nullable_uint__o v82; // 0:x0.8

  v81 = crc;
  hasValue = crc.fields.hasValue;
  if ( (byte_4A08408 & 1) == 0 )
  {
    sub_1B686D4(&ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo, *(_QWORD *)&eorData);
    sub_1B686D4(&byte___TypeInfo, v7);
    sub_1B686D4(&System_Convert_TypeInfo, v8);
    sub_1B686D4(&Crc32_TypeInfo, v9);
    sub_1B686D4(&System_Security_Cryptography_CryptoStream_TypeInfo, v10);
    sub_1B686D4(&System_IDisposable_TypeInfo, v11);
    sub_1B686D4(&System_IO_MemoryStream_TypeInfo, v12);
    sub_1B686D4(&NetworkManager_TypeInfo, v13);
    sub_1B686D4(&Method_System_Nullable_uint__get_HasValue__, v14);
    sub_1B686D4(&Method_System_Nullable_uint__get_Value__, v15);
    sub_1B686D4(&System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo, v16);
    byte_4A08408 = 1;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v17 = System_Convert__FromBase64String(str, 0LL);
  v19 = !hasValue;
  v20 = v17;
  if ( !v19 )
  {
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v21 = Crc32__Compute(v20, v18);
    v82 = (System_Nullable_uint__o)&v81;
    if ( v21 != System_Nullable_uint___get_Value(
                  v82,
                  (const MethodInfo_35DC864 *)Method_System_Nullable_uint__get_Value__) )
    {
      v77 = sub_1B686E8(&System_IO_IOException_TypeInfo);
      v78 = (System_IO_IOException_o *)sub_1B68920(v77);
      v79 = (System_String_o *)sub_1B686E8(&StringLiteral_8907/*"MdcStr:Dc Crc Error"*/);
      System_IO_IOException___ctor_61559712(v78, v79, 0LL);
      v80 = sub_1B686E8(&Method_MdcStr_Dc__);
      sub_1B687FC(v78, v80);
    }
  }
  if ( eorData )
  {
    Mk = (_DWORD *)sub_1B6877C(byte___TypeInfo, 4LL);
    if ( !Mk )
      goto LABEL_70;
    v24 = Mk[6];
    if ( !v24 )
      goto LABEL_68;
    *((_BYTE *)Mk + 32) = eorData;
    if ( v24 == 1 )
      goto LABEL_68;
    *((_BYTE *)Mk + 33) = BYTE1(eorData);
    if ( v24 <= 2 )
      goto LABEL_68;
    *((_BYTE *)Mk + 34) = BYTE2(eorData);
    if ( v24 == 3 )
      goto LABEL_68;
    *((_BYTE *)Mk + 35) = HIBYTE(eorData);
    if ( !v20 )
LABEL_70:
      sub_1B68930(Mk, v23);
    if ( (int)*(_QWORD *)&v20->max_length >= 1 )
    {
      v25 = 0LL;
      v26 = (unsigned int)*(_QWORD *)&v20->max_length;
      while ( v25 < v26 && (v25 & 3) < Mk[6] )
      {
        v20->m_Items[v25 + 4] ^= *((_BYTE *)Mk + (v25 & 3) + 32);
        if ( v26 == ++v25 )
          goto LABEL_21;
      }
LABEL_68:
      sub_1B68938(Mk, v23);
    }
  }
LABEL_21:
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  v28 = UTF8;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Mk = NetworkManager__GetMk((const MethodInfo *)UTF8);
  if ( !v28 )
    goto LABEL_70;
  v29 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, _DWORD *, Il2CppMethodPointer))v28->klass->vtable._19_GetBytes.method)(
          v28,
          Mk,
          v28->klass->vtable._20_GetBytes.methodPtr);
  v30 = System_Text_Encoding__get_UTF8(0LL);
  Mk = NetworkManager__GetCv((const MethodInfo *)v30);
  if ( !v30 )
    goto LABEL_70;
  v31 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, _DWORD *, Il2CppMethodPointer))v30->klass->vtable._19_GetBytes.method)(
          v30,
          Mk,
          v30->klass->vtable._20_GetBytes.methodPtr);
  v32 = (System_Security_Cryptography_TripleDESCryptoServiceProvider_o *)sub_1B68920(System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_TripleDESCryptoServiceProvider___ctor(v32, 0LL);
  v33 = (System_IO_MemoryStream_o *)sub_1B68920(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v33, 0LL);
  if ( !v32 )
    sub_1B68930(v34, v35);
  v36 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_TripleDESCryptoServiceProvider_o *, __int64, __int64, Il2CppMethodPointer))v32->klass->vtable._25_CreateDecryptor.method)(
                                                             v32,
                                                             v29,
                                                             v31,
                                                             v32->klass->vtable._26_GenerateKey.methodPtr);
  v37 = (System_Security_Cryptography_CryptoStream_o *)sub_1B68920(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v37, (System_IO_Stream_o *)v33, v36, 1, 0LL);
  if ( !v20 )
    sub_1B68930(v38, v39);
  if ( !v37 )
    sub_1B68930(v38, v39);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))v37->klass->vtable._36_Write.method)(
    v37,
    v20,
    0LL,
    v20->max_length,
    v37->klass->vtable._37_Write.methodPtr);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, Il2CppMethodPointer))v37->klass->vtable._19_Close.method)(
    v37,
    v37->klass->vtable._20_Dispose.methodPtr);
  klass = v37->klass;
  v41 = *(unsigned __int16 *)(&v37->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v37->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      p_offset += 4;
      if ( !v41 )
        goto LABEL_32;
    }
    v43 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_32:
    v43 = sub_1BBA6B4(v37, System_IDisposable_TypeInfo, 0LL);
  }
  v44 = (*(__int64 (__fastcall **)(System_Security_Cryptography_CryptoStream_o *, _QWORD))v43)(
          v37,
          *(_QWORD *)(v43 + 8));
  if ( !v33 )
    sub_1B68930(v44, v45);
  v46 = (System_Byte_array *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v33->klass->vtable._42_ToArray.method)(
                               v33,
                               v33->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v33->klass->vtable._19_Close.method)(
    v33,
    v33->klass->vtable._20_Dispose.methodPtr);
  v47 = v33->klass;
  v48 = *(unsigned __int16 *)(&v33->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v33->klass->_2.bitflags2 + 3) )
  {
    v49 = &v47->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
    {
      --v48;
      v49 += 4;
      if ( !v48 )
        goto LABEL_39;
    }
    v50 = (__int64)(&v47->vtable._0_Equals.method + 2 * *v49);
  }
  else
  {
LABEL_39:
    v50 = sub_1BBA6B4(v33, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v50)(v33, *(_QWORD *)(v50 + 8));
  v51 = (System_IO_MemoryStream_o *)sub_1B68920(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v51, 0LL);
  v52 = (System_IO_MemoryStream_o *)sub_1B68920(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_61563480(v52, v46, 0LL);
  v53 = (ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *)sub_1B68920(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo);
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream___ctor(v53, (System_IO_Stream_o *)v52, 0LL);
  v54 = sub_1B6877C(byte___TypeInfo, 0x4000LL);
  v56 = v54;
  if ( !v54 )
    sub_1B68930(0LL, v55);
  if ( !v53 )
    sub_1B68930(v54, v55);
  while ( 1 )
  {
    v57 = ((__int64 (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v53->klass->vtable._33_Read.method)(
            v53,
            v56,
            0LL,
            *(unsigned int *)(v56 + 24),
            v53->klass->vtable._34_Read.methodPtr);
    if ( (int)v57 <= 0 )
      break;
    if ( !v51 )
      sub_1B68930(v57, v58);
    ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v51->klass->vtable._36_Write.method)(
      v51,
      v56,
      0LL,
      (unsigned int)v57,
      v51->klass->vtable._37_Write.methodPtr);
  }
  ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, Il2CppMethodPointer))v53->klass->vtable._19_Close.method)(
    v53,
    v53->klass->vtable._20_Dispose.methodPtr);
  v59 = v53->klass;
  v60 = *(unsigned __int16 *)(&v53->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v53->klass->_2.bitflags2 + 3) )
  {
    v61 = &v59->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v61 - 1) != System_IDisposable_TypeInfo )
    {
      --v60;
      v61 += 4;
      if ( !v60 )
        goto LABEL_50;
    }
    v62 = (__int64)(&v59->vtable._0_Equals.method + 2 * *v61);
  }
  else
  {
LABEL_50:
    v62 = sub_1BBA6B4(v53, System_IDisposable_TypeInfo, 0LL);
  }
  v63 = (*(__int64 (__fastcall **)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, _QWORD))v62)(
          v53,
          *(_QWORD *)(v62 + 8));
  if ( !v52 )
    sub_1B68930(v63, v64);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v52->klass->vtable._19_Close.method)(
    v52,
    v52->klass->vtable._20_Dispose.methodPtr);
  v65 = v52->klass;
  v66 = *(unsigned __int16 *)(&v52->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v52->klass->_2.bitflags2 + 3) )
  {
    v67 = &v65->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
    {
      --v66;
      v67 += 4;
      if ( !v66 )
        goto LABEL_57;
    }
    v68 = (__int64)(&v65->vtable._0_Equals.method + 2 * *v67);
  }
  else
  {
LABEL_57:
    v68 = sub_1BBA6B4(v52, System_IDisposable_TypeInfo, 0LL);
  }
  v69 = (*(__int64 (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v68)(v52, *(_QWORD *)(v68 + 8));
  if ( !v51 )
    sub_1B68930(v69, v70);
  v71 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v51->klass->vtable._42_ToArray.method)(
          v51,
          v51->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v51->klass->vtable._19_Close.method)(
    v51,
    v51->klass->vtable._20_Dispose.methodPtr);
  v72 = v51->klass;
  v73 = *(unsigned __int16 *)(&v51->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v51->klass->_2.bitflags2 + 3) )
  {
    v74 = &v72->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v74 - 1) != System_IDisposable_TypeInfo )
    {
      --v73;
      v74 += 4;
      if ( !v73 )
        goto LABEL_64;
    }
    v75 = (__int64)(&v72->vtable._0_Equals.method + 2 * *v74);
  }
  else
  {
LABEL_64:
    v75 = sub_1BBA6B4(v51, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v75)(v51, *(_QWORD *)(v75 + 8));
  Mk = System_Text_Encoding__get_UTF8(0LL);
  if ( !Mk )
    goto LABEL_70;
  return (System_String_o *)(*(__int64 (__fastcall **)(_DWORD *, __int64, _QWORD))(*(_QWORD *)Mk + 888LL))(
                              Mk,
                              v71,
                              *(_QWORD *)(*(_QWORD *)Mk + 896LL));
}


System_String_o *__fastcall MdcStr__Ec(
        System_Nullable_uint__o *crc,
        System_String_o *str,
        uint32_t eorData,
        const MethodInfo *method)
{
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
  unsigned int *UTF8; // x0
  const MethodInfo *v18; // x1
  __int64 v19; // x23
  System_Text_Encoding_o *v20; // x0
  System_Text_Encoding_o *v21; // x21
  __int64 v22; // x22
  System_Text_Encoding_o *v23; // x21
  __int64 v24; // x24
  System_Security_Cryptography_TripleDESCryptoServiceProvider_o *v25; // x25
  System_IO_MemoryStream_o *v26; // x21
  __int64 v27; // x0
  __int64 v28; // x1
  System_Security_Cryptography_ICryptoTransform_o *v29; // x24
  System_Security_Cryptography_CryptoStream_o *v30; // x22
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *v31; // x25
  __int64 v32; // x0
  __int64 v33; // x1
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_c *klass; // x8
  __int64 v35; // x9
  int32_t *p_offset; // x10
  __int64 v37; // x0
  __int64 v38; // x0
  __int64 v39; // x1
  System_Security_Cryptography_CryptoStream_c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0
  __int64 v44; // x0
  __int64 v45; // x1
  __int64 v46; // x22
  System_IO_MemoryStream_c *v47; // x8
  __int64 v48; // x9
  int32_t *v49; // x10
  __int64 v50; // x0
  unsigned int v51; // w8
  unsigned __int64 v52; // x8
  unsigned __int64 v53; // x9
  uint32_t v54; // w1
  System_Nullable_uint__o v56; // [xsp+8h] [xbp-58h] BYREF
  System_Nullable_uint__o v57; // 0:x0.8

  if ( (byte_4A08407 & 1) == 0 )
  {
    sub_1B686D4(&ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo, str);
    sub_1B686D4(&byte___TypeInfo, v7);
    sub_1B686D4(&System_Convert_TypeInfo, v8);
    sub_1B686D4(&Crc32_TypeInfo, v9);
    sub_1B686D4(&System_Security_Cryptography_CryptoStream_TypeInfo, v10);
    sub_1B686D4(&System_IDisposable_TypeInfo, v11);
    sub_1B686D4(&System_IO_MemoryStream_TypeInfo, v12);
    sub_1B686D4(&NetworkManager_TypeInfo, v13);
    sub_1B686D4(&Method_System_Nullable_uint___ctor__, v14);
    sub_1B686D4(&Method_System_Nullable_uint__get_HasValue__, v15);
    sub_1B686D4(&System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo, v16);
    byte_4A08407 = 1;
  }
  UTF8 = (unsigned int *)System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    goto LABEL_51;
  v19 = (*(__int64 (__fastcall **)(unsigned int *, System_String_o *, _QWORD))(*(_QWORD *)UTF8 + 616LL))(
          UTF8,
          str,
          *(_QWORD *)(*(_QWORD *)UTF8 + 624LL));
  v20 = System_Text_Encoding__get_UTF8(0LL);
  v21 = v20;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UTF8 = (unsigned int *)NetworkManager__GetMk((const MethodInfo *)v20);
  if ( !v21 )
    goto LABEL_51;
  v22 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, unsigned int *, Il2CppMethodPointer))v21->klass->vtable._19_GetBytes.method)(
          v21,
          UTF8,
          v21->klass->vtable._20_GetBytes.methodPtr);
  v23 = System_Text_Encoding__get_UTF8(0LL);
  UTF8 = (unsigned int *)NetworkManager__GetCv((const MethodInfo *)v23);
  if ( !v23 )
    goto LABEL_51;
  v24 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, unsigned int *, Il2CppMethodPointer))v23->klass->vtable._19_GetBytes.method)(
          v23,
          UTF8,
          v23->klass->vtable._20_GetBytes.methodPtr);
  v25 = (System_Security_Cryptography_TripleDESCryptoServiceProvider_o *)sub_1B68920(System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_TripleDESCryptoServiceProvider___ctor(v25, 0LL);
  v26 = (System_IO_MemoryStream_o *)sub_1B68920(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v26, 0LL);
  if ( !v25 )
    sub_1B68930(v27, v28);
  v29 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_TripleDESCryptoServiceProvider_o *, __int64, __int64, Il2CppMethodPointer))v25->klass->vtable._23_CreateEncryptor.method)(
                                                             v25,
                                                             v22,
                                                             v24,
                                                             v25->klass->vtable._24_CreateDecryptor.methodPtr);
  v30 = (System_Security_Cryptography_CryptoStream_o *)sub_1B68920(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v30, (System_IO_Stream_o *)v26, v29, 1, 0LL);
  v31 = (ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *)sub_1B68920(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo);
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream___ctor(v31, (System_IO_Stream_o *)v30, 0LL);
  if ( !v19 )
    sub_1B68930(v32, v33);
  if ( !v31 )
    sub_1B68930(v32, v33);
  ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v31->klass->vtable._36_Write.method)(
    v31,
    v19,
    0LL,
    *(unsigned int *)(v19 + 24),
    v31->klass->vtable._37_Write.methodPtr);
  ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, Il2CppMethodPointer))v31->klass->vtable._19_Close.method)(
    v31,
    v31->klass->vtable._20_Dispose.methodPtr);
  klass = v31->klass;
  v35 = *(unsigned __int16 *)(&v31->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v31->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v35;
      p_offset += 4;
      if ( !v35 )
        goto LABEL_15;
    }
    v37 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_15:
    v37 = sub_1BBA6B4(v31, System_IDisposable_TypeInfo, 0LL);
  }
  v38 = (*(__int64 (__fastcall **)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, _QWORD))v37)(
          v31,
          *(_QWORD *)(v37 + 8));
  if ( !v30 )
    sub_1B68930(v38, v39);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, Il2CppMethodPointer))v30->klass->vtable._19_Close.method)(
    v30,
    v30->klass->vtable._20_Dispose.methodPtr);
  v40 = v30->klass;
  v41 = *(unsigned __int16 *)(&v30->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v30->klass->_2.bitflags2 + 3) )
  {
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_22;
    }
    v43 = (__int64)(&v40->vtable._0_Equals.method + 2 * *v42);
  }
  else
  {
LABEL_22:
    v43 = sub_1BBA6B4(v30, System_IDisposable_TypeInfo, 0LL);
  }
  v44 = (*(__int64 (__fastcall **)(System_Security_Cryptography_CryptoStream_o *, _QWORD))v43)(
          v30,
          *(_QWORD *)(v43 + 8));
  if ( !v26 )
    sub_1B68930(v44, v45);
  v46 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v26->klass->vtable._42_ToArray.method)(
          v26,
          v26->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v26->klass->vtable._19_Close.method)(
    v26,
    v26->klass->vtable._20_Dispose.methodPtr);
  v47 = v26->klass;
  v48 = *(unsigned __int16 *)(&v26->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v26->klass->_2.bitflags2 + 3) )
  {
    v49 = &v47->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
    {
      --v48;
      v49 += 4;
      if ( !v48 )
        goto LABEL_29;
    }
    v50 = (__int64)(&v47->vtable._0_Equals.method + 2 * *v49);
  }
  else
  {
LABEL_29:
    v50 = sub_1BBA6B4(v26, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v50)(v26, *(_QWORD *)(v50 + 8));
  if ( !eorData )
    goto LABEL_43;
  UTF8 = (unsigned int *)sub_1B6877C(byte___TypeInfo, 4LL);
  if ( !UTF8 )
    goto LABEL_51;
  v51 = UTF8[6];
  if ( !v51 )
    goto LABEL_50;
  *((_BYTE *)UTF8 + 32) = eorData;
  if ( v51 == 1 )
    goto LABEL_50;
  *((_BYTE *)UTF8 + 33) = BYTE1(eorData);
  if ( v51 <= 2 )
    goto LABEL_50;
  *((_BYTE *)UTF8 + 34) = BYTE2(eorData);
  if ( v51 == 3 )
    goto LABEL_50;
  *((_BYTE *)UTF8 + 35) = HIBYTE(eorData);
  if ( !v46 )
LABEL_51:
    sub_1B68930(UTF8, v18);
  if ( (int)*(_QWORD *)(v46 + 24) >= 1 )
  {
    v52 = 0LL;
    v53 = (unsigned int)*(_QWORD *)(v46 + 24);
    while ( v52 < v53 && (v52 & 3) < UTF8[6] )
    {
      *(_BYTE *)(v46 + 32 + v52) ^= *((_BYTE *)UTF8 + (v52 & 3) + 32);
      if ( v53 == ++v52 )
        goto LABEL_43;
    }
LABEL_50:
    sub_1B68938(UTF8, v18);
  }
LABEL_43:
  if ( crc->fields.hasValue )
  {
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v54 = Crc32__Compute((System_Byte_array *)v46, v18);
    v57 = (System_Nullable_uint__o)&v56;
    v56 = 0LL;
    System_Nullable_uint____ctor(v57, v54, (const MethodInfo_35DC84C *)Method_System_Nullable_uint___ctor__);
    *crc = v56;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToBase64String((System_Byte_array *)v46, 0LL);
}