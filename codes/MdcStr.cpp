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
  __int64 v32; // x1
  __int64 v33; // x2
  System_Security_Cryptography_TripleDESCryptoServiceProvider_o *v34; // x23
  __int64 v35; // x1
  __int64 v36; // x2
  System_IO_MemoryStream_o *v37; // x19
  __int64 v38; // x0
  System_Security_Cryptography_ICryptoTransform_o *v39; // x22
  __int64 v40; // x1
  __int64 v41; // x2
  System_Security_Cryptography_CryptoStream_o *v42; // x21
  __int64 v43; // x0
  System_Security_Cryptography_CryptoStream_c *klass; // x8
  __int64 v45; // x9
  int32_t *p_offset; // x10
  __int64 v47; // x0
  __int64 v48; // x0
  System_Byte_array *v49; // x20
  System_IO_MemoryStream_c *v50; // x8
  __int64 v51; // x9
  int32_t *v52; // x10
  __int64 v53; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  System_IO_MemoryStream_o *v56; // x19
  __int64 v57; // x1
  __int64 v58; // x2
  System_IO_MemoryStream_o *v59; // x22
  __int64 v60; // x1
  __int64 v61; // x2
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *v62; // x23
  __int64 v63; // x0
  __int64 v64; // x21
  __int64 v65; // x0
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_c *v66; // x8
  __int64 v67; // x9
  int32_t *v68; // x10
  __int64 v69; // x0
  __int64 v70; // x0
  System_IO_MemoryStream_c *v71; // x8
  __int64 v72; // x9
  int32_t *v73; // x10
  __int64 v74; // x0
  __int64 v75; // x0
  __int64 v76; // x22
  System_IO_MemoryStream_c *v77; // x8
  __int64 v78; // x9
  int32_t *v79; // x10
  __int64 v80; // x0
  __int64 v82; // x0
  __int64 v83; // x1
  __int64 v84; // x2
  System_IO_IOException_o *v85; // x19
  System_String_o *v86; // x0
  __int64 v87; // x0
  System_Nullable_uint__o v88; // [xsp+8h] [xbp-58h] BYREF
  System_Nullable_uint__o v89; // 0:x0.8

  v88 = crc;
  hasValue = crc.fields.hasValue;
  if ( (byte_49FBBC0 & 1) == 0 )
  {
    sub_1B640C8(&ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo, *(_QWORD *)&eorData);
    sub_1B640C8(&byte___TypeInfo, v7);
    sub_1B640C8(&System_Convert_TypeInfo, v8);
    sub_1B640C8(&Crc32_TypeInfo, v9);
    sub_1B640C8(&System_Security_Cryptography_CryptoStream_TypeInfo, v10);
    sub_1B640C8(&System_IDisposable_TypeInfo, v11);
    sub_1B640C8(&System_IO_MemoryStream_TypeInfo, v12);
    sub_1B640C8(&NetworkManager_TypeInfo, v13);
    sub_1B640C8(&Method_System_Nullable_uint__get_HasValue__, v14);
    sub_1B640C8(&Method_System_Nullable_uint__get_Value__, v15);
    sub_1B640C8(&System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo, v16);
    byte_49FBBC0 = 1;
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
    v89 = (System_Nullable_uint__o)&v88;
    if ( v21 != System_Nullable_uint___get_Value(
                  v89,
                  (const MethodInfo_35D14A0 *)Method_System_Nullable_uint__get_Value__) )
    {
      v82 = sub_1B640DC(&System_IO_IOException_TypeInfo);
      v85 = (System_IO_IOException_o *)sub_1B64314(v82, v83, v84);
      v86 = (System_String_o *)sub_1B640DC(&StringLiteral_8902/*"MdcStr:Dc Crc Error"*/);
      System_IO_IOException___ctor_61515632(v85, v86, 0LL);
      v87 = sub_1B640DC(&Method_MdcStr_Dc__);
      sub_1B641F0(v85, v87);
    }
  }
  if ( eorData )
  {
    Mk = (_DWORD *)sub_1B64170(byte___TypeInfo, 4LL);
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
      sub_1B64324(Mk);
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
      sub_1B6432C(Mk, v23);
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
  v34 = (System_Security_Cryptography_TripleDESCryptoServiceProvider_o *)sub_1B64314(
                                                                           System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo,
                                                                           v32,
                                                                           v33);
  System_Security_Cryptography_TripleDESCryptoServiceProvider___ctor(v34, 0LL);
  v37 = (System_IO_MemoryStream_o *)sub_1B64314(System_IO_MemoryStream_TypeInfo, v35, v36);
  System_IO_MemoryStream___ctor(v37, 0LL);
  if ( !v34 )
    sub_1B64324(v38);
  v39 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_TripleDESCryptoServiceProvider_o *, __int64, __int64, Il2CppMethodPointer))v34->klass->vtable._25_CreateDecryptor.method)(
                                                             v34,
                                                             v29,
                                                             v31,
                                                             v34->klass->vtable._26_GenerateKey.methodPtr);
  v42 = (System_Security_Cryptography_CryptoStream_o *)sub_1B64314(
                                                         System_Security_Cryptography_CryptoStream_TypeInfo,
                                                         v40,
                                                         v41);
  System_Security_Cryptography_CryptoStream___ctor(v42, (System_IO_Stream_o *)v37, v39, 1, 0LL);
  if ( !v20 )
    sub_1B64324(v43);
  if ( !v42 )
    sub_1B64324(v43);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))v42->klass->vtable._36_Write.method)(
    v42,
    v20,
    0LL,
    v20->max_length,
    v42->klass->vtable._37_Write.methodPtr);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, Il2CppMethodPointer))v42->klass->vtable._19_Close.method)(
    v42,
    v42->klass->vtable._20_Dispose.methodPtr);
  klass = v42->klass;
  v45 = *(unsigned __int16 *)(&v42->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v42->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v45;
      p_offset += 4;
      if ( !v45 )
        goto LABEL_32;
    }
    v47 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_32:
    v47 = sub_1BB60A8(v42, System_IDisposable_TypeInfo, 0LL);
  }
  v48 = (*(__int64 (__fastcall **)(System_Security_Cryptography_CryptoStream_o *, _QWORD))v47)(
          v42,
          *(_QWORD *)(v47 + 8));
  if ( !v37 )
    sub_1B64324(v48);
  v49 = (System_Byte_array *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v37->klass->vtable._42_ToArray.method)(
                               v37,
                               v37->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v37->klass->vtable._19_Close.method)(
    v37,
    v37->klass->vtable._20_Dispose.methodPtr);
  v50 = v37->klass;
  v51 = *(unsigned __int16 *)(&v37->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v37->klass->_2.bitflags2 + 3) )
  {
    v52 = &v50->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
    {
      --v51;
      v52 += 4;
      if ( !v51 )
        goto LABEL_39;
    }
    v53 = (__int64)(&v50->vtable._0_Equals.method + 2 * *v52);
  }
  else
  {
LABEL_39:
    v53 = sub_1BB60A8(v37, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v53)(v37, *(_QWORD *)(v53 + 8));
  v56 = (System_IO_MemoryStream_o *)sub_1B64314(System_IO_MemoryStream_TypeInfo, v54, v55);
  System_IO_MemoryStream___ctor(v56, 0LL);
  v59 = (System_IO_MemoryStream_o *)sub_1B64314(System_IO_MemoryStream_TypeInfo, v57, v58);
  System_IO_MemoryStream___ctor_61519400(v59, v49, 0LL);
  v62 = (ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *)sub_1B64314(
                                                              ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo,
                                                              v60,
                                                              v61);
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream___ctor(v62, (System_IO_Stream_o *)v59, 0LL);
  v63 = sub_1B64170(byte___TypeInfo, 0x4000LL);
  v64 = v63;
  if ( !v63 )
    sub_1B64324(0LL);
  if ( !v62 )
    sub_1B64324(v63);
  while ( 1 )
  {
    v65 = ((__int64 (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v62->klass->vtable._33_Read.method)(
            v62,
            v64,
            0LL,
            *(unsigned int *)(v64 + 24),
            v62->klass->vtable._34_Read.methodPtr);
    if ( (int)v65 <= 0 )
      break;
    if ( !v56 )
      sub_1B64324(v65);
    ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v56->klass->vtable._36_Write.method)(
      v56,
      v64,
      0LL,
      (unsigned int)v65,
      v56->klass->vtable._37_Write.methodPtr);
  }
  ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, Il2CppMethodPointer))v62->klass->vtable._19_Close.method)(
    v62,
    v62->klass->vtable._20_Dispose.methodPtr);
  v66 = v62->klass;
  v67 = *(unsigned __int16 *)(&v62->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v62->klass->_2.bitflags2 + 3) )
  {
    v68 = &v66->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v68 - 1) != System_IDisposable_TypeInfo )
    {
      --v67;
      v68 += 4;
      if ( !v67 )
        goto LABEL_50;
    }
    v69 = (__int64)(&v66->vtable._0_Equals.method + 2 * *v68);
  }
  else
  {
LABEL_50:
    v69 = sub_1BB60A8(v62, System_IDisposable_TypeInfo, 0LL);
  }
  v70 = (*(__int64 (__fastcall **)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, _QWORD))v69)(
          v62,
          *(_QWORD *)(v69 + 8));
  if ( !v59 )
    sub_1B64324(v70);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v59->klass->vtable._19_Close.method)(
    v59,
    v59->klass->vtable._20_Dispose.methodPtr);
  v71 = v59->klass;
  v72 = *(unsigned __int16 *)(&v59->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v59->klass->_2.bitflags2 + 3) )
  {
    v73 = &v71->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v73 - 1) != System_IDisposable_TypeInfo )
    {
      --v72;
      v73 += 4;
      if ( !v72 )
        goto LABEL_57;
    }
    v74 = (__int64)(&v71->vtable._0_Equals.method + 2 * *v73);
  }
  else
  {
LABEL_57:
    v74 = sub_1BB60A8(v59, System_IDisposable_TypeInfo, 0LL);
  }
  v75 = (*(__int64 (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v74)(v59, *(_QWORD *)(v74 + 8));
  if ( !v56 )
    sub_1B64324(v75);
  v76 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v56->klass->vtable._42_ToArray.method)(
          v56,
          v56->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v56->klass->vtable._19_Close.method)(
    v56,
    v56->klass->vtable._20_Dispose.methodPtr);
  v77 = v56->klass;
  v78 = *(unsigned __int16 *)(&v56->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v56->klass->_2.bitflags2 + 3) )
  {
    v79 = &v77->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v79 - 1) != System_IDisposable_TypeInfo )
    {
      --v78;
      v79 += 4;
      if ( !v78 )
        goto LABEL_64;
    }
    v80 = (__int64)(&v77->vtable._0_Equals.method + 2 * *v79);
  }
  else
  {
LABEL_64:
    v80 = sub_1BB60A8(v56, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v80)(v56, *(_QWORD *)(v80 + 8));
  Mk = System_Text_Encoding__get_UTF8(0LL);
  if ( !Mk )
    goto LABEL_70;
  return (System_String_o *)(*(__int64 (__fastcall **)(_DWORD *, __int64, _QWORD))(*(_QWORD *)Mk + 888LL))(
                              Mk,
                              v76,
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
  __int64 v18; // x23
  System_Text_Encoding_o *v19; // x0
  System_Text_Encoding_o *v20; // x21
  __int64 v21; // x22
  System_Text_Encoding_o *v22; // x21
  __int64 v23; // x24
  __int64 v24; // x1
  __int64 v25; // x2
  System_Security_Cryptography_TripleDESCryptoServiceProvider_o *v26; // x25
  __int64 v27; // x1
  __int64 v28; // x2
  System_IO_MemoryStream_o *v29; // x21
  __int64 v30; // x0
  System_Security_Cryptography_ICryptoTransform_o *v31; // x24
  __int64 v32; // x1
  __int64 v33; // x2
  System_Security_Cryptography_CryptoStream_o *v34; // x22
  __int64 v35; // x1
  __int64 v36; // x2
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *v37; // x25
  __int64 v38; // x0
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_c *klass; // x8
  __int64 v40; // x9
  int32_t *p_offset; // x10
  __int64 v42; // x0
  __int64 v43; // x0
  System_Security_Cryptography_CryptoStream_c *v44; // x8
  __int64 v45; // x9
  int32_t *v46; // x10
  __int64 v47; // x0
  __int64 v48; // x0
  __int64 v49; // x22
  System_IO_MemoryStream_c *v50; // x8
  __int64 v51; // x9
  int32_t *v52; // x10
  __int64 v53; // x0
  const MethodInfo *v54; // x1
  unsigned int v55; // w8
  unsigned __int64 v56; // x8
  unsigned __int64 v57; // x9
  uint32_t v58; // w1
  System_Nullable_uint__o v60; // [xsp+8h] [xbp-58h] BYREF
  System_Nullable_uint__o v61; // 0:x0.8

  if ( (byte_49FBBBF & 1) == 0 )
  {
    sub_1B640C8(&ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo, str);
    sub_1B640C8(&byte___TypeInfo, v7);
    sub_1B640C8(&System_Convert_TypeInfo, v8);
    sub_1B640C8(&Crc32_TypeInfo, v9);
    sub_1B640C8(&System_Security_Cryptography_CryptoStream_TypeInfo, v10);
    sub_1B640C8(&System_IDisposable_TypeInfo, v11);
    sub_1B640C8(&System_IO_MemoryStream_TypeInfo, v12);
    sub_1B640C8(&NetworkManager_TypeInfo, v13);
    sub_1B640C8(&Method_System_Nullable_uint___ctor__, v14);
    sub_1B640C8(&Method_System_Nullable_uint__get_HasValue__, v15);
    sub_1B640C8(&System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo, v16);
    byte_49FBBBF = 1;
  }
  UTF8 = (unsigned int *)System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    goto LABEL_51;
  v18 = (*(__int64 (__fastcall **)(unsigned int *, System_String_o *, _QWORD))(*(_QWORD *)UTF8 + 616LL))(
          UTF8,
          str,
          *(_QWORD *)(*(_QWORD *)UTF8 + 624LL));
  v19 = System_Text_Encoding__get_UTF8(0LL);
  v20 = v19;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UTF8 = (unsigned int *)NetworkManager__GetMk((const MethodInfo *)v19);
  if ( !v20 )
    goto LABEL_51;
  v21 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, unsigned int *, Il2CppMethodPointer))v20->klass->vtable._19_GetBytes.method)(
          v20,
          UTF8,
          v20->klass->vtable._20_GetBytes.methodPtr);
  v22 = System_Text_Encoding__get_UTF8(0LL);
  UTF8 = (unsigned int *)NetworkManager__GetCv((const MethodInfo *)v22);
  if ( !v22 )
    goto LABEL_51;
  v23 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, unsigned int *, Il2CppMethodPointer))v22->klass->vtable._19_GetBytes.method)(
          v22,
          UTF8,
          v22->klass->vtable._20_GetBytes.methodPtr);
  v26 = (System_Security_Cryptography_TripleDESCryptoServiceProvider_o *)sub_1B64314(
                                                                           System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo,
                                                                           v24,
                                                                           v25);
  System_Security_Cryptography_TripleDESCryptoServiceProvider___ctor(v26, 0LL);
  v29 = (System_IO_MemoryStream_o *)sub_1B64314(System_IO_MemoryStream_TypeInfo, v27, v28);
  System_IO_MemoryStream___ctor(v29, 0LL);
  if ( !v26 )
    sub_1B64324(v30);
  v31 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_TripleDESCryptoServiceProvider_o *, __int64, __int64, Il2CppMethodPointer))v26->klass->vtable._23_CreateEncryptor.method)(
                                                             v26,
                                                             v21,
                                                             v23,
                                                             v26->klass->vtable._24_CreateDecryptor.methodPtr);
  v34 = (System_Security_Cryptography_CryptoStream_o *)sub_1B64314(
                                                         System_Security_Cryptography_CryptoStream_TypeInfo,
                                                         v32,
                                                         v33);
  System_Security_Cryptography_CryptoStream___ctor(v34, (System_IO_Stream_o *)v29, v31, 1, 0LL);
  v37 = (ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *)sub_1B64314(
                                                               ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo,
                                                               v35,
                                                               v36);
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream___ctor(v37, (System_IO_Stream_o *)v34, 0LL);
  if ( !v18 )
    sub_1B64324(v38);
  if ( !v37 )
    sub_1B64324(v38);
  ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v37->klass->vtable._36_Write.method)(
    v37,
    v18,
    0LL,
    *(unsigned int *)(v18 + 24),
    v37->klass->vtable._37_Write.methodPtr);
  ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, Il2CppMethodPointer))v37->klass->vtable._19_Close.method)(
    v37,
    v37->klass->vtable._20_Dispose.methodPtr);
  klass = v37->klass;
  v40 = *(unsigned __int16 *)(&v37->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v37->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v40;
      p_offset += 4;
      if ( !v40 )
        goto LABEL_15;
    }
    v42 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_15:
    v42 = sub_1BB60A8(v37, System_IDisposable_TypeInfo, 0LL);
  }
  v43 = (*(__int64 (__fastcall **)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, _QWORD))v42)(
          v37,
          *(_QWORD *)(v42 + 8));
  if ( !v34 )
    sub_1B64324(v43);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, Il2CppMethodPointer))v34->klass->vtable._19_Close.method)(
    v34,
    v34->klass->vtable._20_Dispose.methodPtr);
  v44 = v34->klass;
  v45 = *(unsigned __int16 *)(&v34->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v34->klass->_2.bitflags2 + 3) )
  {
    v46 = &v44->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
    {
      --v45;
      v46 += 4;
      if ( !v45 )
        goto LABEL_22;
    }
    v47 = (__int64)(&v44->vtable._0_Equals.method + 2 * *v46);
  }
  else
  {
LABEL_22:
    v47 = sub_1BB60A8(v34, System_IDisposable_TypeInfo, 0LL);
  }
  v48 = (*(__int64 (__fastcall **)(System_Security_Cryptography_CryptoStream_o *, _QWORD))v47)(
          v34,
          *(_QWORD *)(v47 + 8));
  if ( !v29 )
    sub_1B64324(v48);
  v49 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v29->klass->vtable._42_ToArray.method)(
          v29,
          v29->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v29->klass->vtable._19_Close.method)(
    v29,
    v29->klass->vtable._20_Dispose.methodPtr);
  v50 = v29->klass;
  v51 = *(unsigned __int16 *)(&v29->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v29->klass->_2.bitflags2 + 3) )
  {
    v52 = &v50->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
    {
      --v51;
      v52 += 4;
      if ( !v51 )
        goto LABEL_29;
    }
    v53 = (__int64)(&v50->vtable._0_Equals.method + 2 * *v52);
  }
  else
  {
LABEL_29:
    v53 = sub_1BB60A8(v29, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v53)(v29, *(_QWORD *)(v53 + 8));
  if ( !eorData )
    goto LABEL_43;
  UTF8 = (unsigned int *)sub_1B64170(byte___TypeInfo, 4LL);
  if ( !UTF8 )
    goto LABEL_51;
  v55 = UTF8[6];
  if ( !v55 )
    goto LABEL_50;
  *((_BYTE *)UTF8 + 32) = eorData;
  if ( v55 == 1 )
    goto LABEL_50;
  *((_BYTE *)UTF8 + 33) = BYTE1(eorData);
  if ( v55 <= 2 )
    goto LABEL_50;
  *((_BYTE *)UTF8 + 34) = BYTE2(eorData);
  if ( v55 == 3 )
    goto LABEL_50;
  *((_BYTE *)UTF8 + 35) = HIBYTE(eorData);
  if ( !v49 )
LABEL_51:
    sub_1B64324(UTF8);
  if ( (int)*(_QWORD *)(v49 + 24) >= 1 )
  {
    v56 = 0LL;
    v57 = (unsigned int)*(_QWORD *)(v49 + 24);
    while ( v56 < v57 && (v56 & 3) < UTF8[6] )
    {
      *(_BYTE *)(v49 + 32 + v56) ^= *((_BYTE *)UTF8 + (v56 & 3) + 32);
      if ( v57 == ++v56 )
        goto LABEL_43;
    }
LABEL_50:
    sub_1B6432C(UTF8, v54);
  }
LABEL_43:
  if ( crc->fields.hasValue )
  {
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v58 = Crc32__Compute((System_Byte_array *)v49, v54);
    v61 = (System_Nullable_uint__o)&v60;
    v60 = 0LL;
    System_Nullable_uint____ctor(v61, v58, (const MethodInfo_35D1488 *)Method_System_Nullable_uint___ctor__);
    *crc = v60;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToBase64String((System_Byte_array *)v49, 0LL);
}