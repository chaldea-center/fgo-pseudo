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
  __int64 v18; // x2
  bool v19; // zf
  System_Byte_array *v20; // x19
  uint32_t v21; // w21
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  unsigned int v25; // w8
  unsigned __int64 v26; // x9
  unsigned __int64 v27; // x8
  __int64 v28; // x12
  System_Text_Encoding_o *UTF8; // x20
  System_String_o *Mk; // x0
  __int64 v31; // x21
  System_Text_Encoding_o *v32; // x20
  System_String_o *Cv; // x0
  __int64 v34; // x22
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  System_Security_Cryptography_TripleDESCryptoServiceProvider_o *v39; // x23
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  System_IO_MemoryStream_o *v44; // x20
  System_Security_Cryptography_ICryptoTransform_o *v45; // x22
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  System_Security_Cryptography_CryptoStream_o *v50; // x21
  System_Security_Cryptography_CryptoStream_c *klass; // x8
  unsigned __int64 v52; // x10
  int32_t *p_offset; // x11
  __int64 v54; // x0
  System_Byte_array *v55; // x19
  System_IO_MemoryStream_c *v56; // x8
  unsigned __int64 v57; // x10
  int32_t *v58; // x11
  __int64 v59; // x0
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  System_IO_MemoryStream_o *v64; // x20
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  System_IO_MemoryStream_o *v69; // x21
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *v74; // x22
  __int64 v75; // x2
  __int64 v76; // x23
  int v77; // w0
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_c *v78; // x8
  unsigned __int64 v79; // x10
  int32_t *v80; // x11
  __int64 v81; // x0
  System_IO_MemoryStream_c *v82; // x8
  unsigned __int64 v83; // x10
  int32_t *v84; // x11
  __int64 v85; // x0
  __int64 v86; // x21
  System_IO_MemoryStream_c *v87; // x8
  unsigned __int64 v88; // x10
  int32_t *v89; // x11
  __int64 v90; // x0
  System_Text_Encoding_o *v91; // x0
  __int64 v93; // x0
  __int64 v94; // x1
  __int64 v95; // x2
  __int64 v96; // x3
  __int64 v97; // x4
  System_IO_IOException_o *v98; // x19
  System_String_o *v99; // x0
  _DWORD v100[5]; // [xsp+0h] [xbp-50h]
  int v101; // [xsp+14h] [xbp-3Ch]
  System_Nullable_uint__o v102; // [xsp+18h] [xbp-38h] BYREF
  System_Nullable_uint__o v103; // 0:x0.8

  v102 = crc;
  if ( (byte_40F7B82 & 1) == 0 )
  {
    sub_B16FFC(&ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo, *(_QWORD *)&eorData);
    sub_B16FFC(&byte___TypeInfo, v7);
    sub_B16FFC(&System_Convert_TypeInfo, v8);
    sub_B16FFC(&Crc32_TypeInfo, v9);
    sub_B16FFC(&System_Security_Cryptography_CryptoStream_TypeInfo, v10);
    sub_B16FFC(&System_IDisposable_TypeInfo, v11);
    sub_B16FFC(&System_IO_MemoryStream_TypeInfo, v12);
    sub_B16FFC(&NetworkManager_TypeInfo, v13);
    sub_B16FFC(&Method_System_Nullable_uint__get_HasValue__, v14);
    sub_B16FFC(&Method_System_Nullable_uint__get_Value__, v15);
    sub_B16FFC(&System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo, v16);
    byte_40F7B82 = 1;
  }
  v101 = 0;
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v17 = System_Convert__FromBase64String(str, 0LL);
  v19 = (*(_QWORD *)&crc & 0xFF00000000LL) == 0;
  v20 = v17;
  if ( !v19 )
  {
    if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v21 = Crc32__Compute(v20, 0LL);
    v103 = (System_Nullable_uint__o)&v102;
    if ( v21 != System_Nullable_uint___get_Value(
                  v103,
                  (const MethodInfo_29CEC04 *)Method_System_Nullable_uint__get_Value__) )
    {
      v93 = sub_B17000(&System_IO_IOException_TypeInfo);
      v98 = (System_IO_IOException_o *)sub_B170CC(v93, v94, v95, v96, v97);
      v99 = (System_String_o *)sub_B17000(&StringLiteral_8976);
      System_IO_IOException___ctor_38265584(v98, v99, 0LL);
      sub_B17000(&Method_MdcStr_Dc__);
      sub_B170A0();
    }
  }
  if ( eorData )
  {
    v22 = sub_B17014(byte___TypeInfo, 4LL, v18);
    if ( !v22 )
      goto LABEL_88;
    v25 = *(_DWORD *)(v22 + 24);
    if ( !v25 )
      goto LABEL_87;
    *(_BYTE *)(v22 + 32) = eorData;
    if ( v25 == 1 )
      goto LABEL_87;
    *(_BYTE *)(v22 + 33) = BYTE1(eorData);
    if ( v25 <= 2 )
      goto LABEL_87;
    *(_BYTE *)(v22 + 34) = BYTE2(eorData);
    if ( v25 == 3 )
      goto LABEL_87;
    *(_BYTE *)(v22 + 35) = HIBYTE(eorData);
    if ( !v20 )
LABEL_88:
      sub_B170D4();
    if ( (int)*(_QWORD *)&v20->max_length >= 1 )
    {
      v26 = (unsigned int)*(_QWORD *)&v20->max_length;
      v27 = 0LL;
      while ( v27 < v26 )
      {
        v28 = v27 & 3;
        if ( (unsigned int)v28 >= *(_DWORD *)(v22 + 24) )
          break;
        v20->m_Items[v27++ + 4] ^= *(_BYTE *)(v22 + v28 + 32);
        if ( (__int64)v27 >= (int)v26 )
          goto LABEL_23;
      }
LABEL_87:
      sub_B17100(v22, v23, v24);
      sub_B170A0();
    }
  }
LABEL_23:
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Mk = NetworkManager__GetMk(0LL);
  if ( !UTF8 )
    goto LABEL_88;
  v31 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
          UTF8,
          Mk,
          UTF8->klass->vtable._19_GetBytes.methodPtr);
  v32 = System_Text_Encoding__get_UTF8(0LL);
  Cv = NetworkManager__GetCv(0LL);
  if ( !v32 )
    goto LABEL_88;
  v34 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))v32->klass->vtable._18_GetBytes.method)(
          v32,
          Cv,
          v32->klass->vtable._19_GetBytes.methodPtr);
  v39 = (System_Security_Cryptography_TripleDESCryptoServiceProvider_o *)sub_B170CC(
                                                                           System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo,
                                                                           v35,
                                                                           v36,
                                                                           v37,
                                                                           v38);
  System_Security_Cryptography_TripleDESCryptoServiceProvider___ctor(v39, 0LL);
  v44 = (System_IO_MemoryStream_o *)sub_B170CC(System_IO_MemoryStream_TypeInfo, v40, v41, v42, v43);
  System_IO_MemoryStream___ctor(v44, 0LL);
  if ( !v39 )
    sub_B170D4();
  v45 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_TripleDESCryptoServiceProvider_o *, __int64, __int64, Il2CppMethodPointer))v39->klass->vtable._25_CreateDecryptor.method)(
                                                             v39,
                                                             v31,
                                                             v34,
                                                             v39->klass->vtable._26_GenerateKey.methodPtr);
  v50 = (System_Security_Cryptography_CryptoStream_o *)sub_B170CC(
                                                         System_Security_Cryptography_CryptoStream_TypeInfo,
                                                         v46,
                                                         v47,
                                                         v48,
                                                         v49);
  System_Security_Cryptography_CryptoStream___ctor(v50, (System_IO_Stream_o *)v44, v45, 1, 0LL);
  if ( !v20 )
    sub_B170D4();
  if ( !v50 )
    sub_B170D4();
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))v50->klass->vtable._32_Write.method)(
    v50,
    v20,
    0LL,
    v20->max_length,
    v50->klass->vtable._33_WriteByte.methodPtr);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, Il2CppMethodPointer))v50->klass->vtable._18_Close.method)(
    v50,
    v50->klass->vtable._19_Dispose.methodPtr);
  v100[v101++] = 219;
  klass = v50->klass;
  if ( *(_WORD *)&v50->klass->_2.bitflags1 )
  {
    v52 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v52;
      p_offset += 4;
      if ( v52 >= *(unsigned __int16 *)&v50->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v54 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_35:
    v54 = sub_AAFEF8(v50, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Security_Cryptography_CryptoStream_o *, _QWORD))v54)(v50, *(_QWORD *)(v54 + 8));
  if ( v101 && v100[v101 - 1] == 219 )
    --v101;
  if ( !v44 )
    sub_B170D4();
  v55 = (System_Byte_array *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v44->klass->vtable._37_ToArray.method)(
                               v44,
                               v44->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v44->klass->vtable._18_Close.method)(
    v44,
    v44->klass->vtable._19_Dispose.methodPtr);
  v100[v101++] = 249;
  v56 = v44->klass;
  if ( *(_WORD *)&v44->klass->_2.bitflags1 )
  {
    v57 = 0LL;
    v58 = &v56->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v58 - 1) != System_IDisposable_TypeInfo )
    {
      ++v57;
      v58 += 4;
      if ( v57 >= *(unsigned __int16 *)&v44->klass->_2.bitflags1 )
        goto LABEL_45;
    }
    v59 = (__int64)(&v56->vtable._0_Equals.method + 2 * *v58);
  }
  else
  {
LABEL_45:
    v59 = sub_AAFEF8(v44, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v59)(v44, *(_QWORD *)(v59 + 8));
  if ( v101 && v100[v101 - 1] == 249 )
    --v101;
  v64 = (System_IO_MemoryStream_o *)sub_B170CC(System_IO_MemoryStream_TypeInfo, v60, v61, v62, v63);
  System_IO_MemoryStream___ctor(v64, 0LL);
  v69 = (System_IO_MemoryStream_o *)sub_B170CC(System_IO_MemoryStream_TypeInfo, v65, v66, v67, v68);
  System_IO_MemoryStream___ctor_44473456(v69, v55, 0LL);
  v74 = (ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *)sub_B170CC(
                                                              ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo,
                                                              v70,
                                                              v71,
                                                              v72,
                                                              v73);
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream___ctor(v74, (System_IO_Stream_o *)v69, 0LL);
  v76 = sub_B17014(byte___TypeInfo, 0x4000LL, v75);
  if ( !v76 )
    sub_B170D4();
  if ( !v74 )
    sub_B170D4();
  while ( 1 )
  {
    v77 = ((__int64 (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v74->klass->vtable._30_Read.method)(
            v74,
            v76,
            0LL,
            *(unsigned int *)(v76 + 24),
            v74->klass->vtable._31_ReadByte.methodPtr);
    if ( v77 < 1 )
      break;
    if ( !v64 )
      sub_B170D4();
    ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v64->klass->vtable._32_Write.method)(
      v64,
      v76,
      0LL,
      (unsigned int)v77,
      v64->klass->vtable._33_WriteByte.methodPtr);
  }
  ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, Il2CppMethodPointer))v74->klass->vtable._18_Close.method)(
    v74,
    v74->klass->vtable._19_Dispose.methodPtr);
  v100[v101++] = 341;
  v78 = v74->klass;
  if ( *(_WORD *)&v74->klass->_2.bitflags1 )
  {
    v79 = 0LL;
    v80 = &v78->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v80 - 1) != System_IDisposable_TypeInfo )
    {
      ++v79;
      v80 += 4;
      if ( v79 >= *(unsigned __int16 *)&v74->klass->_2.bitflags1 )
        goto LABEL_59;
    }
    v81 = (__int64)(&v78->vtable._0_Equals.method + 2 * *v80);
  }
  else
  {
LABEL_59:
    v81 = sub_AAFEF8(v74, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, _QWORD))v81)(v74, *(_QWORD *)(v81 + 8));
  if ( v101 && v100[v101 - 1] == 341 )
    --v101;
  if ( !v69 )
    sub_B170D4();
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v69->klass->vtable._18_Close.method)(
    v69,
    v69->klass->vtable._19_Dispose.methodPtr);
  v100[v101++] = 362;
  v82 = v69->klass;
  if ( *(_WORD *)&v69->klass->_2.bitflags1 )
  {
    v83 = 0LL;
    v84 = &v82->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v84 - 1) != System_IDisposable_TypeInfo )
    {
      ++v83;
      v84 += 4;
      if ( v83 >= *(unsigned __int16 *)&v69->klass->_2.bitflags1 )
        goto LABEL_69;
    }
    v85 = (__int64)(&v82->vtable._0_Equals.method + 2 * *v84);
  }
  else
  {
LABEL_69:
    v85 = sub_AAFEF8(v69, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v85)(v69, *(_QWORD *)(v85 + 8));
  if ( v101 && v100[v101 - 1] == 362 )
    --v101;
  if ( !v64 )
    sub_B170D4();
  v86 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v64->klass->vtable._37_ToArray.method)(
          v64,
          v64->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v64->klass->vtable._18_Close.method)(
    v64,
    v64->klass->vtable._19_Dispose.methodPtr);
  v100[v101++] = 392;
  v87 = v64->klass;
  if ( *(_WORD *)&v64->klass->_2.bitflags1 )
  {
    v88 = 0LL;
    v89 = &v87->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v89 - 1) != System_IDisposable_TypeInfo )
    {
      ++v88;
      v89 += 4;
      if ( v88 >= *(unsigned __int16 *)&v64->klass->_2.bitflags1 )
        goto LABEL_79;
    }
    v90 = (__int64)(&v87->vtable._0_Equals.method + 2 * *v89);
  }
  else
  {
LABEL_79:
    v90 = sub_AAFEF8(v64, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v90)(v64, *(_QWORD *)(v90 + 8));
  if ( v101 && v100[v101 - 1] == 392 )
    --v101;
  v91 = System_Text_Encoding__get_UTF8(0LL);
  if ( !v91 )
    goto LABEL_88;
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, Il2CppMethodPointer))v91->klass->vtable._34_GetString.method)(
                              v91,
                              v86,
                              v91->klass->vtable._35_GetString.methodPtr);
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
  System_Text_Encoding_o *UTF8; // x0
  __int64 v18; // x24
  System_Text_Encoding_o *v19; // x21
  System_String_o *Mk; // x0
  __int64 v21; // x22
  System_Text_Encoding_o *v22; // x21
  System_String_o *Cv; // x0
  __int64 v24; // x23
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Security_Cryptography_TripleDESCryptoServiceProvider_o *v29; // x25
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_IO_MemoryStream_o *v34; // x21
  System_Security_Cryptography_ICryptoTransform_o *v35; // x23
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  System_Security_Cryptography_CryptoStream_o *v40; // x22
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *v45; // x23
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_c *klass; // x8
  unsigned __int64 v47; // x10
  int32_t *p_offset; // x11
  __int64 v49; // x0
  int v50; // w25
  System_Security_Cryptography_CryptoStream_c *v51; // x8
  unsigned __int64 v52; // x10
  int32_t *v53; // x11
  __int64 v54; // x0
  int v55; // w8
  __int64 v56; // x22
  int v57; // w25
  System_IO_MemoryStream_c *v58; // x8
  unsigned __int64 v59; // x10
  int32_t *v60; // x11
  __int64 v61; // x0
  __int64 v62; // x2
  __int64 v63; // x0
  __int64 v64; // x1
  __int64 v65; // x2
  unsigned int v66; // w8
  unsigned __int64 v67; // x9
  unsigned __int64 v68; // x8
  __int64 v69; // x12
  uint32_t v70; // w1
  int v72[3]; // [xsp+0h] [xbp-50h]
  int v73; // [xsp+Ch] [xbp-44h]
  System_Nullable_uint__o v74; // [xsp+18h] [xbp-38h] BYREF
  System_Nullable_uint__o v75; // 0:x0.8

  if ( (byte_40F7B81 & 1) == 0 )
  {
    sub_B16FFC(&ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo, str);
    sub_B16FFC(&byte___TypeInfo, v7);
    sub_B16FFC(&System_Convert_TypeInfo, v8);
    sub_B16FFC(&Crc32_TypeInfo, v9);
    sub_B16FFC(&System_Security_Cryptography_CryptoStream_TypeInfo, v10);
    sub_B16FFC(&System_IDisposable_TypeInfo, v11);
    sub_B16FFC(&System_IO_MemoryStream_TypeInfo, v12);
    sub_B16FFC(&NetworkManager_TypeInfo, v13);
    sub_B16FFC(&Method_System_Nullable_uint___ctor__, v14);
    sub_B16FFC(&Method_System_Nullable_uint__get_HasValue__, v15);
    sub_B16FFC(&System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo, v16);
    byte_40F7B81 = 1;
  }
  v73 = 0;
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    goto LABEL_62;
  v18 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
          UTF8,
          str,
          UTF8->klass->vtable._19_GetBytes.methodPtr);
  v19 = System_Text_Encoding__get_UTF8(0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Mk = NetworkManager__GetMk(0LL);
  if ( !v19 )
    goto LABEL_62;
  v21 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))v19->klass->vtable._18_GetBytes.method)(
          v19,
          Mk,
          v19->klass->vtable._19_GetBytes.methodPtr);
  v22 = System_Text_Encoding__get_UTF8(0LL);
  Cv = NetworkManager__GetCv(0LL);
  if ( !v22 )
    goto LABEL_62;
  v24 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))v22->klass->vtable._18_GetBytes.method)(
          v22,
          Cv,
          v22->klass->vtable._19_GetBytes.methodPtr);
  v29 = (System_Security_Cryptography_TripleDESCryptoServiceProvider_o *)sub_B170CC(
                                                                           System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo,
                                                                           v25,
                                                                           v26,
                                                                           v27,
                                                                           v28);
  System_Security_Cryptography_TripleDESCryptoServiceProvider___ctor(v29, 0LL);
  v34 = (System_IO_MemoryStream_o *)sub_B170CC(System_IO_MemoryStream_TypeInfo, v30, v31, v32, v33);
  System_IO_MemoryStream___ctor(v34, 0LL);
  if ( !v29 )
    sub_B170D4();
  v35 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_TripleDESCryptoServiceProvider_o *, __int64, __int64, Il2CppMethodPointer))v29->klass->vtable._23_CreateEncryptor.method)(
                                                             v29,
                                                             v21,
                                                             v24,
                                                             v29->klass->vtable._24_CreateDecryptor.methodPtr);
  v40 = (System_Security_Cryptography_CryptoStream_o *)sub_B170CC(
                                                         System_Security_Cryptography_CryptoStream_TypeInfo,
                                                         v36,
                                                         v37,
                                                         v38,
                                                         v39);
  System_Security_Cryptography_CryptoStream___ctor(v40, (System_IO_Stream_o *)v34, v35, 1, 0LL);
  v45 = (ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *)sub_B170CC(
                                                               ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo,
                                                               v41,
                                                               v42,
                                                               v43,
                                                               v44);
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream___ctor(v45, (System_IO_Stream_o *)v40, 0LL);
  if ( !v18 )
    sub_B170D4();
  if ( !v45 )
    sub_B170D4();
  ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v45->klass->vtable._32_Write.method)(
    v45,
    v18,
    0LL,
    *(unsigned int *)(v18 + 24),
    v45->klass->vtable._33_WriteByte.methodPtr);
  ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, Il2CppMethodPointer))v45->klass->vtable._18_Close.method)(
    v45,
    v45->klass->vtable._19_Dispose.methodPtr);
  v72[0] = 117;
  v73 = 1;
  klass = v45->klass;
  if ( *(_WORD *)&v45->klass->_2.bitflags1 )
  {
    v47 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v47;
      p_offset += 4;
      if ( v47 >= *(unsigned __int16 *)&v45->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v49 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_16:
    v49 = sub_AAFEF8(v45, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, _QWORD))v49)(v45, *(_QWORD *)(v49 + 8));
  v73 = 0;
  if ( !v40 )
    sub_B170D4();
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, Il2CppMethodPointer))v40->klass->vtable._18_Close.method)(
    v40,
    v40->klass->vtable._19_Dispose.methodPtr);
  v72[0] = 138;
  v50 = ++v73;
  v51 = v40->klass;
  if ( *(_WORD *)&v40->klass->_2.bitflags1 )
  {
    v52 = 0LL;
    v53 = &v51->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      ++v52;
      v53 += 4;
      if ( v52 >= *(unsigned __int16 *)&v40->klass->_2.bitflags1 )
        goto LABEL_25;
    }
    v54 = (__int64)(&v51->vtable._0_Equals.method + 2 * *v53);
  }
  else
  {
LABEL_25:
    v54 = sub_AAFEF8(v40, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Security_Cryptography_CryptoStream_o *, _QWORD))v54)(v40, *(_QWORD *)(v54 + 8));
  if ( v50 )
  {
    v55 = v50 - 1;
    if ( v72[v50 - 1] == 138 )
    {
      --v50;
      v73 = v55;
    }
  }
  if ( !v34 )
    sub_B170D4();
  v56 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v34->klass->vtable._37_ToArray.method)(
          v34,
          v34->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v34->klass->vtable._18_Close.method)(
    v34,
    v34->klass->vtable._19_Dispose.methodPtr);
  v72[v50] = 168;
  v57 = ++v73;
  v58 = v34->klass;
  if ( *(_WORD *)&v34->klass->_2.bitflags1 )
  {
    v59 = 0LL;
    v60 = &v58->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
    {
      ++v59;
      v60 += 4;
      if ( v59 >= *(unsigned __int16 *)&v34->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v61 = (__int64)(&v58->vtable._0_Equals.method + 2 * *v60);
  }
  else
  {
LABEL_35:
    v61 = sub_AAFEF8(v34, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v61)(v34, *(_QWORD *)(v61 + 8));
  if ( v57 && v72[v57 - 1] == 168 )
    v73 = v57 - 1;
  if ( !eorData )
    goto LABEL_52;
  v63 = sub_B17014(byte___TypeInfo, 4LL, v62);
  if ( !v63 )
    goto LABEL_62;
  v66 = *(_DWORD *)(v63 + 24);
  if ( !v66 )
    goto LABEL_61;
  *(_BYTE *)(v63 + 32) = eorData;
  if ( v66 == 1 )
    goto LABEL_61;
  *(_BYTE *)(v63 + 33) = BYTE1(eorData);
  if ( v66 <= 2 )
    goto LABEL_61;
  *(_BYTE *)(v63 + 34) = BYTE2(eorData);
  if ( v66 == 3 )
    goto LABEL_61;
  *(_BYTE *)(v63 + 35) = HIBYTE(eorData);
  if ( !v56 )
LABEL_62:
    sub_B170D4();
  if ( (int)*(_QWORD *)(v56 + 24) >= 1 )
  {
    v67 = (unsigned int)*(_QWORD *)(v56 + 24);
    v68 = 0LL;
    while ( v68 < v67 )
    {
      v69 = v68 & 3;
      if ( (unsigned int)v69 >= *(_DWORD *)(v63 + 24) )
        break;
      *(_BYTE *)(v56 + 32 + v68++) ^= *(_BYTE *)(v63 + v69 + 32);
      if ( (__int64)v68 >= (int)v67 )
        goto LABEL_52;
    }
LABEL_61:
    sub_B17100(v63, v64, v65);
    sub_B170A0();
  }
LABEL_52:
  if ( crc->fields.has_value )
  {
    if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v70 = Crc32__Compute((System_Byte_array *)v56, 0LL);
    v75 = (System_Nullable_uint__o)&v74;
    v74 = 0LL;
    System_Nullable_uint____ctor(v75, v70, (const MethodInfo_29CEBEC *)Method_System_Nullable_uint___ctor__);
    *crc = v74;
  }
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  return System_Convert__ToBase64String((System_Byte_array *)v56, 0LL);
}