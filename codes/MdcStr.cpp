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
  __int64 v22; // x1
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  unsigned int v26; // w8
  unsigned __int64 v27; // x9
  unsigned __int64 v28; // x8
  __int64 v29; // x12
  System_Text_Encoding_o *UTF8; // x20
  System_String_o *Mk; // x0
  __int64 v32; // x21
  System_Text_Encoding_o *v33; // x20
  System_String_o *Cv; // x0
  __int64 v35; // x22
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  System_Security_Cryptography_TripleDESCryptoServiceProvider_o *v40; // x23
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  System_IO_MemoryStream_o *v45; // x20
  System_Security_Cryptography_ICryptoTransform_o *v46; // x22
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  System_Security_Cryptography_CryptoStream_o *v51; // x21
  System_Security_Cryptography_CryptoStream_c *klass; // x8
  unsigned __int64 v53; // x10
  int32_t *p_offset; // x11
  __int64 v55; // x0
  System_Byte_array *v56; // x19
  System_IO_MemoryStream_c *v57; // x8
  unsigned __int64 v58; // x10
  int32_t *v59; // x11
  __int64 v60; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  System_IO_MemoryStream_o *v65; // x20
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  System_IO_MemoryStream_o *v70; // x21
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *v75; // x22
  __int64 v76; // x2
  __int64 v77; // x23
  int v78; // w0
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_c *v79; // x8
  unsigned __int64 v80; // x10
  int32_t *v81; // x11
  __int64 v82; // x0
  System_IO_MemoryStream_c *v83; // x8
  unsigned __int64 v84; // x10
  int32_t *v85; // x11
  __int64 v86; // x0
  __int64 v87; // x21
  System_IO_MemoryStream_c *v88; // x8
  unsigned __int64 v89; // x10
  int32_t *v90; // x11
  __int64 v91; // x0
  System_Text_Encoding_o *v92; // x0
  __int64 v94; // x0
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x3
  __int64 v98; // x4
  System_IO_IOException_o *v99; // x19
  __int64 v100; // x1
  System_String_o *v101; // x0
  __int64 v102; // x1
  _DWORD v103[5]; // [xsp+0h] [xbp-50h]
  int v104; // [xsp+14h] [xbp-3Ch]
  System_Nullable_uint__o v105; // [xsp+18h] [xbp-38h] BYREF
  System_Nullable_uint__o v106; // 0:x0.8

  v105 = crc;
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
  v104 = 0;
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
    v106 = (System_Nullable_uint__o)&v105;
    if ( v21 != System_Nullable_uint___get_Value(
                  v106,
                  (const MethodInfo_29CEC04 *)Method_System_Nullable_uint__get_Value__) )
    {
      v94 = sub_B17000(&System_IO_IOException_TypeInfo, v22);
      v99 = (System_IO_IOException_o *)sub_B170CC(v94, v95, v96, v97, v98);
      v101 = (System_String_o *)sub_B17000(&StringLiteral_8976, v100);
      System_IO_IOException___ctor_38265584(v99, v101, 0LL);
      sub_B17000(&Method_MdcStr_Dc__, v102);
      sub_B170A0();
    }
  }
  if ( eorData )
  {
    v23 = sub_B17014(byte___TypeInfo, 4LL, v18);
    if ( !v23 )
      goto LABEL_88;
    v26 = *(_DWORD *)(v23 + 24);
    if ( !v26 )
      goto LABEL_87;
    *(_BYTE *)(v23 + 32) = eorData;
    if ( v26 == 1 )
      goto LABEL_87;
    *(_BYTE *)(v23 + 33) = BYTE1(eorData);
    if ( v26 <= 2 )
      goto LABEL_87;
    *(_BYTE *)(v23 + 34) = BYTE2(eorData);
    if ( v26 == 3 )
      goto LABEL_87;
    *(_BYTE *)(v23 + 35) = HIBYTE(eorData);
    if ( !v20 )
LABEL_88:
      sub_B170D4();
    if ( (int)*(_QWORD *)&v20->max_length >= 1 )
    {
      v27 = (unsigned int)*(_QWORD *)&v20->max_length;
      v28 = 0LL;
      while ( v28 < v27 )
      {
        v29 = v28 & 3;
        if ( (unsigned int)v29 >= *(_DWORD *)(v23 + 24) )
          break;
        v20->m_Items[v28++ + 4] ^= *(_BYTE *)(v23 + v29 + 32);
        if ( (__int64)v28 >= (int)v27 )
          goto LABEL_23;
      }
LABEL_87:
      sub_B17100(v23, v24, v25);
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
  v32 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
          UTF8,
          Mk,
          UTF8->klass->vtable._19_GetBytes.methodPtr);
  v33 = System_Text_Encoding__get_UTF8(0LL);
  Cv = NetworkManager__GetCv(0LL);
  if ( !v33 )
    goto LABEL_88;
  v35 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))v33->klass->vtable._18_GetBytes.method)(
          v33,
          Cv,
          v33->klass->vtable._19_GetBytes.methodPtr);
  v40 = (System_Security_Cryptography_TripleDESCryptoServiceProvider_o *)sub_B170CC(
                                                                           System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo,
                                                                           v36,
                                                                           v37,
                                                                           v38,
                                                                           v39);
  System_Security_Cryptography_TripleDESCryptoServiceProvider___ctor(v40, 0LL);
  v45 = (System_IO_MemoryStream_o *)sub_B170CC(System_IO_MemoryStream_TypeInfo, v41, v42, v43, v44);
  System_IO_MemoryStream___ctor(v45, 0LL);
  if ( !v40 )
    sub_B170D4();
  v46 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_TripleDESCryptoServiceProvider_o *, __int64, __int64, Il2CppMethodPointer))v40->klass->vtable._25_CreateDecryptor.method)(
                                                             v40,
                                                             v32,
                                                             v35,
                                                             v40->klass->vtable._26_GenerateKey.methodPtr);
  v51 = (System_Security_Cryptography_CryptoStream_o *)sub_B170CC(
                                                         System_Security_Cryptography_CryptoStream_TypeInfo,
                                                         v47,
                                                         v48,
                                                         v49,
                                                         v50);
  System_Security_Cryptography_CryptoStream___ctor(v51, (System_IO_Stream_o *)v45, v46, 1, 0LL);
  if ( !v20 )
    sub_B170D4();
  if ( !v51 )
    sub_B170D4();
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))v51->klass->vtable._32_Write.method)(
    v51,
    v20,
    0LL,
    v20->max_length,
    v51->klass->vtable._33_WriteByte.methodPtr);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, Il2CppMethodPointer))v51->klass->vtable._18_Close.method)(
    v51,
    v51->klass->vtable._19_Dispose.methodPtr);
  v103[v104++] = 219;
  klass = v51->klass;
  if ( *(_WORD *)&v51->klass->_2.bitflags1 )
  {
    v53 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v53;
      p_offset += 4;
      if ( v53 >= *(unsigned __int16 *)&v51->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v55 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_35:
    v55 = sub_AAFEF8(v51, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Security_Cryptography_CryptoStream_o *, _QWORD))v55)(v51, *(_QWORD *)(v55 + 8));
  if ( v104 && v103[v104 - 1] == 219 )
    --v104;
  if ( !v45 )
    sub_B170D4();
  v56 = (System_Byte_array *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v45->klass->vtable._37_ToArray.method)(
                               v45,
                               v45->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v45->klass->vtable._18_Close.method)(
    v45,
    v45->klass->vtable._19_Dispose.methodPtr);
  v103[v104++] = 249;
  v57 = v45->klass;
  if ( *(_WORD *)&v45->klass->_2.bitflags1 )
  {
    v58 = 0LL;
    v59 = &v57->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v59 - 1) != System_IDisposable_TypeInfo )
    {
      ++v58;
      v59 += 4;
      if ( v58 >= *(unsigned __int16 *)&v45->klass->_2.bitflags1 )
        goto LABEL_45;
    }
    v60 = (__int64)(&v57->vtable._0_Equals.method + 2 * *v59);
  }
  else
  {
LABEL_45:
    v60 = sub_AAFEF8(v45, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v60)(v45, *(_QWORD *)(v60 + 8));
  if ( v104 && v103[v104 - 1] == 249 )
    --v104;
  v65 = (System_IO_MemoryStream_o *)sub_B170CC(System_IO_MemoryStream_TypeInfo, v61, v62, v63, v64);
  System_IO_MemoryStream___ctor(v65, 0LL);
  v70 = (System_IO_MemoryStream_o *)sub_B170CC(System_IO_MemoryStream_TypeInfo, v66, v67, v68, v69);
  System_IO_MemoryStream___ctor_44473456(v70, v56, 0LL);
  v75 = (ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *)sub_B170CC(
                                                              ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo,
                                                              v71,
                                                              v72,
                                                              v73,
                                                              v74);
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream___ctor(v75, (System_IO_Stream_o *)v70, 0LL);
  v77 = sub_B17014(byte___TypeInfo, 0x4000LL, v76);
  if ( !v77 )
    sub_B170D4();
  if ( !v75 )
    sub_B170D4();
  while ( 1 )
  {
    v78 = ((__int64 (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v75->klass->vtable._30_Read.method)(
            v75,
            v77,
            0LL,
            *(unsigned int *)(v77 + 24),
            v75->klass->vtable._31_ReadByte.methodPtr);
    if ( v78 < 1 )
      break;
    if ( !v65 )
      sub_B170D4();
    ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v65->klass->vtable._32_Write.method)(
      v65,
      v77,
      0LL,
      (unsigned int)v78,
      v65->klass->vtable._33_WriteByte.methodPtr);
  }
  ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, Il2CppMethodPointer))v75->klass->vtable._18_Close.method)(
    v75,
    v75->klass->vtable._19_Dispose.methodPtr);
  v103[v104++] = 341;
  v79 = v75->klass;
  if ( *(_WORD *)&v75->klass->_2.bitflags1 )
  {
    v80 = 0LL;
    v81 = &v79->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v81 - 1) != System_IDisposable_TypeInfo )
    {
      ++v80;
      v81 += 4;
      if ( v80 >= *(unsigned __int16 *)&v75->klass->_2.bitflags1 )
        goto LABEL_59;
    }
    v82 = (__int64)(&v79->vtable._0_Equals.method + 2 * *v81);
  }
  else
  {
LABEL_59:
    v82 = sub_AAFEF8(v75, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, _QWORD))v82)(v75, *(_QWORD *)(v82 + 8));
  if ( v104 && v103[v104 - 1] == 341 )
    --v104;
  if ( !v70 )
    sub_B170D4();
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v70->klass->vtable._18_Close.method)(
    v70,
    v70->klass->vtable._19_Dispose.methodPtr);
  v103[v104++] = 362;
  v83 = v70->klass;
  if ( *(_WORD *)&v70->klass->_2.bitflags1 )
  {
    v84 = 0LL;
    v85 = &v83->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v85 - 1) != System_IDisposable_TypeInfo )
    {
      ++v84;
      v85 += 4;
      if ( v84 >= *(unsigned __int16 *)&v70->klass->_2.bitflags1 )
        goto LABEL_69;
    }
    v86 = (__int64)(&v83->vtable._0_Equals.method + 2 * *v85);
  }
  else
  {
LABEL_69:
    v86 = sub_AAFEF8(v70, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v86)(v70, *(_QWORD *)(v86 + 8));
  if ( v104 && v103[v104 - 1] == 362 )
    --v104;
  if ( !v65 )
    sub_B170D4();
  v87 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v65->klass->vtable._37_ToArray.method)(
          v65,
          v65->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v65->klass->vtable._18_Close.method)(
    v65,
    v65->klass->vtable._19_Dispose.methodPtr);
  v103[v104++] = 392;
  v88 = v65->klass;
  if ( *(_WORD *)&v65->klass->_2.bitflags1 )
  {
    v89 = 0LL;
    v90 = &v88->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v90 - 1) != System_IDisposable_TypeInfo )
    {
      ++v89;
      v90 += 4;
      if ( v89 >= *(unsigned __int16 *)&v65->klass->_2.bitflags1 )
        goto LABEL_79;
    }
    v91 = (__int64)(&v88->vtable._0_Equals.method + 2 * *v90);
  }
  else
  {
LABEL_79:
    v91 = sub_AAFEF8(v65, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v91)(v65, *(_QWORD *)(v91 + 8));
  if ( v104 && v103[v104 - 1] == 392 )
    --v104;
  v92 = System_Text_Encoding__get_UTF8(0LL);
  if ( !v92 )
    goto LABEL_88;
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, Il2CppMethodPointer))v92->klass->vtable._34_GetString.method)(
                              v92,
                              v87,
                              v92->klass->vtable._35_GetString.methodPtr);
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