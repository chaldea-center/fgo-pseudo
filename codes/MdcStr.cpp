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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  System_Byte_array *v27; // x0
  __int64 v28; // x1
  bool v29; // zf
  System_Byte_array *v30; // x20
  uint32_t v31; // w21
  __int64 v32; // x1
  _DWORD *Mk; // x0
  __int64 v34; // x1
  unsigned int v35; // w8
  unsigned __int64 v36; // x8
  unsigned __int64 v37; // x9
  System_Text_Encoding_o *UTF8; // x0
  __int64 v39; // x1
  System_Text_Encoding_o *v40; // x19
  __int64 v41; // x21
  System_Text_Encoding_o *v42; // x19
  __int64 v43; // x22
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  System_Security_Cryptography_TripleDESCryptoServiceProvider_o *v47; // x23
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  System_IO_MemoryStream_o *v51; // x19
  __int64 v52; // x0
  __int64 v53; // x1
  System_Security_Cryptography_ICryptoTransform_o *v54; // x22
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  System_Security_Cryptography_CryptoStream_o *v58; // x21
  __int64 v59; // x0
  __int64 v60; // x1
  System_Security_Cryptography_CryptoStream_c *klass; // x8
  __int64 v62; // x9
  int32_t *p_offset; // x10
  __int64 v64; // x0
  __int64 v65; // x0
  __int64 v66; // x1
  System_Byte_array *v67; // x20
  System_IO_MemoryStream_c *v68; // x8
  __int64 v69; // x9
  int32_t *v70; // x10
  __int64 v71; // x0
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  System_IO_MemoryStream_o *v75; // x19
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  System_IO_MemoryStream_o *v79; // x22
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *v83; // x23
  __int64 v84; // x0
  __int64 v85; // x1
  __int64 v86; // x21
  __int64 v87; // x0
  __int64 v88; // x1
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_c *v89; // x8
  __int64 v90; // x9
  int32_t *v91; // x10
  __int64 v92; // x0
  __int64 v93; // x0
  __int64 v94; // x1
  System_IO_MemoryStream_c *v95; // x8
  __int64 v96; // x9
  int32_t *v97; // x10
  __int64 v98; // x0
  __int64 v99; // x0
  __int64 v100; // x1
  __int64 v101; // x22
  System_IO_MemoryStream_c *v102; // x8
  __int64 v103; // x9
  int32_t *v104; // x10
  __int64 v105; // x0
  __int64 v107; // x0
  __int64 v108; // x1
  __int64 v109; // x2
  __int64 v110; // x3
  System_IO_IOException_o *v111; // x19
  __int64 v112; // x1
  System_String_o *v113; // x0
  __int64 v114; // x1
  __int64 v115; // x0
  System_Nullable_uint__o v116; // [xsp+8h] [xbp-58h] BYREF
  System_Nullable_uint__o v117; // 0:x0.8

  v116 = crc;
  hasValue = crc.fields.hasValue;
  if ( (byte_4B15A25 & 1) == 0 )
  {
    sub_1BCA7E0(&ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo, *(_QWORD *)&eorData, crc);
    sub_1BCA7E0(&byte___TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Convert_TypeInfo, v9, v10);
    sub_1BCA7E0(&Crc32_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Security_Cryptography_CryptoStream_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v15, v16);
    sub_1BCA7E0(&System_IO_MemoryStream_TypeInfo, v17, v18);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_System_Nullable_uint__get_HasValue__, v21, v22);
    sub_1BCA7E0(&Method_System_Nullable_uint__get_Value__, v23, v24);
    sub_1BCA7E0(&System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo, v25, v26);
    byte_4B15A25 = 1;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, *(_QWORD *)&eorData);
  v27 = System_Convert__FromBase64String(str, 0LL);
  v29 = !hasValue;
  v30 = v27;
  if ( !v29 )
  {
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo, v28);
    v31 = Crc32__Compute(v30, 0LL);
    v117 = (System_Nullable_uint__o)&v116;
    if ( v31 != System_Nullable_uint___get_Value(
                  v117,
                  (const MethodInfo_36C21B8 *)Method_System_Nullable_uint__get_Value__) )
    {
      v107 = sub_1BCA7F4(&System_IO_IOException_TypeInfo, v32);
      v111 = (System_IO_IOException_o *)sub_1BCAA2C(v107, v108, v109, v110);
      v113 = (System_String_o *)sub_1BCA7F4(&StringLiteral_9073/*"MdcStr:Dc Crc Error"*/, v112);
      System_IO_IOException___ctor_62541464(v111, v113, 0LL);
      v115 = sub_1BCA7F4(&Method_MdcStr_Dc__, v114);
      sub_1BCA908(v111, v115);
    }
  }
  if ( eorData )
  {
    Mk = (_DWORD *)sub_1BCA888(byte___TypeInfo, 4LL);
    if ( !Mk )
      goto LABEL_70;
    v35 = Mk[6];
    if ( !v35 )
      goto LABEL_68;
    *((_BYTE *)Mk + 32) = eorData;
    if ( v35 == 1 )
      goto LABEL_68;
    *((_BYTE *)Mk + 33) = BYTE1(eorData);
    if ( v35 <= 2 )
      goto LABEL_68;
    *((_BYTE *)Mk + 34) = BYTE2(eorData);
    if ( v35 == 3 )
      goto LABEL_68;
    *((_BYTE *)Mk + 35) = HIBYTE(eorData);
    if ( !v30 )
LABEL_70:
      sub_1BCAA3C(Mk, v34);
    if ( (int)*(_QWORD *)&v30->max_length >= 1 )
    {
      v36 = 0LL;
      v37 = (unsigned int)*(_QWORD *)&v30->max_length;
      while ( v36 < v37 && (v36 & 3) < Mk[6] )
      {
        v30->m_Items[v36 + 4] ^= *((_BYTE *)Mk + (v36 & 3) + 32);
        if ( v37 == ++v36 )
          goto LABEL_21;
      }
LABEL_68:
      sub_1BCAA44(Mk, v34);
    }
  }
LABEL_21:
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  v40 = UTF8;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v39);
  Mk = NetworkManager__GetMk((const MethodInfo *)UTF8);
  if ( !v40 )
    goto LABEL_70;
  v41 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, _DWORD *, Il2CppMethodPointer))v40->klass->vtable._19_GetBytes.method)(
          v40,
          Mk,
          v40->klass->vtable._20_GetBytes.methodPtr);
  v42 = System_Text_Encoding__get_UTF8(0LL);
  Mk = NetworkManager__GetCv((const MethodInfo *)v42);
  if ( !v42 )
    goto LABEL_70;
  v43 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, _DWORD *, Il2CppMethodPointer))v42->klass->vtable._19_GetBytes.method)(
          v42,
          Mk,
          v42->klass->vtable._20_GetBytes.methodPtr);
  v47 = (System_Security_Cryptography_TripleDESCryptoServiceProvider_o *)sub_1BCAA2C(
                                                                           System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo,
                                                                           v44,
                                                                           v45,
                                                                           v46);
  System_Security_Cryptography_TripleDESCryptoServiceProvider___ctor(v47, 0LL);
  v51 = (System_IO_MemoryStream_o *)sub_1BCAA2C(System_IO_MemoryStream_TypeInfo, v48, v49, v50);
  System_IO_MemoryStream___ctor(v51, 0LL);
  if ( !v47 )
    sub_1BCAA3C(v52, v53);
  v54 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_TripleDESCryptoServiceProvider_o *, __int64, __int64, Il2CppMethodPointer))v47->klass->vtable._25_CreateDecryptor.method)(
                                                             v47,
                                                             v41,
                                                             v43,
                                                             v47->klass->vtable._26_GenerateKey.methodPtr);
  v58 = (System_Security_Cryptography_CryptoStream_o *)sub_1BCAA2C(
                                                         System_Security_Cryptography_CryptoStream_TypeInfo,
                                                         v55,
                                                         v56,
                                                         v57);
  System_Security_Cryptography_CryptoStream___ctor(v58, (System_IO_Stream_o *)v51, v54, 1, 0LL);
  if ( !v30 )
    sub_1BCAA3C(v59, v60);
  if ( !v58 )
    sub_1BCAA3C(v59, v60);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))v58->klass->vtable._36_Write.method)(
    v58,
    v30,
    0LL,
    v30->max_length,
    v58->klass->vtable._37_Write.methodPtr);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, Il2CppMethodPointer))v58->klass->vtable._19_Close.method)(
    v58,
    v58->klass->vtable._20_Dispose.methodPtr);
  klass = v58->klass;
  v62 = *(unsigned __int16 *)(&v58->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v58->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v62;
      p_offset += 4;
      if ( !v62 )
        goto LABEL_32;
    }
    v64 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_32:
    v64 = sub_1C1C7C0(v58, System_IDisposable_TypeInfo, 0LL);
  }
  v65 = (*(__int64 (__fastcall **)(System_Security_Cryptography_CryptoStream_o *, _QWORD))v64)(
          v58,
          *(_QWORD *)(v64 + 8));
  if ( !v51 )
    sub_1BCAA3C(v65, v66);
  v67 = (System_Byte_array *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v51->klass->vtable._42_ToArray.method)(
                               v51,
                               v51->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v51->klass->vtable._19_Close.method)(
    v51,
    v51->klass->vtable._20_Dispose.methodPtr);
  v68 = v51->klass;
  v69 = *(unsigned __int16 *)(&v51->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v51->klass->_2.bitflags2 + 3) )
  {
    v70 = &v68->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v70 - 1) != System_IDisposable_TypeInfo )
    {
      --v69;
      v70 += 4;
      if ( !v69 )
        goto LABEL_39;
    }
    v71 = (__int64)(&v68->vtable._0_Equals.method + 2 * *v70);
  }
  else
  {
LABEL_39:
    v71 = sub_1C1C7C0(v51, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v71)(v51, *(_QWORD *)(v71 + 8));
  v75 = (System_IO_MemoryStream_o *)sub_1BCAA2C(System_IO_MemoryStream_TypeInfo, v72, v73, v74);
  System_IO_MemoryStream___ctor(v75, 0LL);
  v79 = (System_IO_MemoryStream_o *)sub_1BCAA2C(System_IO_MemoryStream_TypeInfo, v76, v77, v78);
  System_IO_MemoryStream___ctor_62545232(v79, v67, 0LL);
  v83 = (ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *)sub_1BCAA2C(
                                                              ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo,
                                                              v80,
                                                              v81,
                                                              v82);
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream___ctor(v83, (System_IO_Stream_o *)v79, 0LL);
  v84 = sub_1BCA888(byte___TypeInfo, 0x4000LL);
  v86 = v84;
  if ( !v84 )
    sub_1BCAA3C(0LL, v85);
  if ( !v83 )
    sub_1BCAA3C(v84, v85);
  while ( 1 )
  {
    v87 = ((__int64 (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v83->klass->vtable._33_Read.method)(
            v83,
            v86,
            0LL,
            *(unsigned int *)(v86 + 24),
            v83->klass->vtable._34_Read.methodPtr);
    if ( (int)v87 <= 0 )
      break;
    if ( !v75 )
      sub_1BCAA3C(v87, v88);
    ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v75->klass->vtable._36_Write.method)(
      v75,
      v86,
      0LL,
      (unsigned int)v87,
      v75->klass->vtable._37_Write.methodPtr);
  }
  ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, Il2CppMethodPointer))v83->klass->vtable._19_Close.method)(
    v83,
    v83->klass->vtable._20_Dispose.methodPtr);
  v89 = v83->klass;
  v90 = *(unsigned __int16 *)(&v83->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v83->klass->_2.bitflags2 + 3) )
  {
    v91 = &v89->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v91 - 1) != System_IDisposable_TypeInfo )
    {
      --v90;
      v91 += 4;
      if ( !v90 )
        goto LABEL_50;
    }
    v92 = (__int64)(&v89->vtable._0_Equals.method + 2 * *v91);
  }
  else
  {
LABEL_50:
    v92 = sub_1C1C7C0(v83, System_IDisposable_TypeInfo, 0LL);
  }
  v93 = (*(__int64 (__fastcall **)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, _QWORD))v92)(
          v83,
          *(_QWORD *)(v92 + 8));
  if ( !v79 )
    sub_1BCAA3C(v93, v94);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v79->klass->vtable._19_Close.method)(
    v79,
    v79->klass->vtable._20_Dispose.methodPtr);
  v95 = v79->klass;
  v96 = *(unsigned __int16 *)(&v79->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v79->klass->_2.bitflags2 + 3) )
  {
    v97 = &v95->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v97 - 1) != System_IDisposable_TypeInfo )
    {
      --v96;
      v97 += 4;
      if ( !v96 )
        goto LABEL_57;
    }
    v98 = (__int64)(&v95->vtable._0_Equals.method + 2 * *v97);
  }
  else
  {
LABEL_57:
    v98 = sub_1C1C7C0(v79, System_IDisposable_TypeInfo, 0LL);
  }
  v99 = (*(__int64 (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v98)(v79, *(_QWORD *)(v98 + 8));
  if ( !v75 )
    sub_1BCAA3C(v99, v100);
  v101 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v75->klass->vtable._42_ToArray.method)(
           v75,
           v75->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v75->klass->vtable._19_Close.method)(
    v75,
    v75->klass->vtable._20_Dispose.methodPtr);
  v102 = v75->klass;
  v103 = *(unsigned __int16 *)(&v75->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v75->klass->_2.bitflags2 + 3) )
  {
    v104 = &v102->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v104 - 1) != System_IDisposable_TypeInfo )
    {
      --v103;
      v104 += 4;
      if ( !v103 )
        goto LABEL_64;
    }
    v105 = (__int64)(&v102->vtable._0_Equals.method + 2 * *v104);
  }
  else
  {
LABEL_64:
    v105 = sub_1C1C7C0(v75, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v105)(v75, *(_QWORD *)(v105 + 8));
  Mk = System_Text_Encoding__get_UTF8(0LL);
  if ( !Mk )
    goto LABEL_70;
  return (System_String_o *)(*(__int64 (__fastcall **)(_DWORD *, __int64, _QWORD))(*(_QWORD *)Mk + 888LL))(
                              Mk,
                              v101,
                              *(_QWORD *)(*(_QWORD *)Mk + 896LL));
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall MdcStr__Ec(
        System_Nullable_uint__o *crc,
        System_String_o *str,
        uint32_t eorData,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned int *UTF8; // x0
  __int64 v28; // x1
  __int64 v29; // x23
  System_Text_Encoding_o *v30; // x0
  __int64 v31; // x1
  System_Text_Encoding_o *v32; // x21
  __int64 v33; // x22
  System_Text_Encoding_o *v34; // x21
  __int64 v35; // x24
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Security_Cryptography_TripleDESCryptoServiceProvider_o *v39; // x25
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_IO_MemoryStream_o *v43; // x21
  __int64 v44; // x0
  __int64 v45; // x1
  System_Security_Cryptography_ICryptoTransform_o *v46; // x24
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  System_Security_Cryptography_CryptoStream_o *v50; // x22
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *v54; // x25
  __int64 v55; // x0
  __int64 v56; // x1
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_c *klass; // x8
  __int64 v58; // x9
  int32_t *p_offset; // x10
  __int64 v60; // x0
  __int64 v61; // x0
  __int64 v62; // x1
  System_Security_Cryptography_CryptoStream_c *v63; // x8
  __int64 v64; // x9
  int32_t *v65; // x10
  __int64 v66; // x0
  __int64 v67; // x0
  __int64 v68; // x1
  __int64 v69; // x22
  System_IO_MemoryStream_c *v70; // x8
  __int64 v71; // x9
  int32_t *v72; // x10
  __int64 v73; // x0
  unsigned int v74; // w8
  unsigned __int64 v75; // x8
  unsigned __int64 v76; // x9
  uint32_t v77; // w1
  System_Nullable_uint__o v79; // [xsp+8h] [xbp-58h] BYREF
  System_Nullable_uint__o v80; // 0:x0.8

  if ( (byte_4B15A24 & 1) == 0 )
  {
    sub_1BCA7E0(&ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo, str, *(_QWORD *)&eorData);
    sub_1BCA7E0(&byte___TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Convert_TypeInfo, v9, v10);
    sub_1BCA7E0(&Crc32_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Security_Cryptography_CryptoStream_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v15, v16);
    sub_1BCA7E0(&System_IO_MemoryStream_TypeInfo, v17, v18);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_System_Nullable_uint___ctor__, v21, v22);
    sub_1BCA7E0(&Method_System_Nullable_uint__get_HasValue__, v23, v24);
    sub_1BCA7E0(&System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo, v25, v26);
    byte_4B15A24 = 1;
  }
  UTF8 = (unsigned int *)System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    goto LABEL_51;
  v29 = (*(__int64 (__fastcall **)(unsigned int *, System_String_o *, _QWORD))(*(_QWORD *)UTF8 + 616LL))(
          UTF8,
          str,
          *(_QWORD *)(*(_QWORD *)UTF8 + 624LL));
  v30 = System_Text_Encoding__get_UTF8(0LL);
  v32 = v30;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v31);
  UTF8 = (unsigned int *)NetworkManager__GetMk((const MethodInfo *)v30);
  if ( !v32 )
    goto LABEL_51;
  v33 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, unsigned int *, Il2CppMethodPointer))v32->klass->vtable._19_GetBytes.method)(
          v32,
          UTF8,
          v32->klass->vtable._20_GetBytes.methodPtr);
  v34 = System_Text_Encoding__get_UTF8(0LL);
  UTF8 = (unsigned int *)NetworkManager__GetCv((const MethodInfo *)v34);
  if ( !v34 )
    goto LABEL_51;
  v35 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, unsigned int *, Il2CppMethodPointer))v34->klass->vtable._19_GetBytes.method)(
          v34,
          UTF8,
          v34->klass->vtable._20_GetBytes.methodPtr);
  v39 = (System_Security_Cryptography_TripleDESCryptoServiceProvider_o *)sub_1BCAA2C(
                                                                           System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo,
                                                                           v36,
                                                                           v37,
                                                                           v38);
  System_Security_Cryptography_TripleDESCryptoServiceProvider___ctor(v39, 0LL);
  v43 = (System_IO_MemoryStream_o *)sub_1BCAA2C(System_IO_MemoryStream_TypeInfo, v40, v41, v42);
  System_IO_MemoryStream___ctor(v43, 0LL);
  if ( !v39 )
    sub_1BCAA3C(v44, v45);
  v46 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_TripleDESCryptoServiceProvider_o *, __int64, __int64, Il2CppMethodPointer))v39->klass->vtable._23_CreateEncryptor.method)(
                                                             v39,
                                                             v33,
                                                             v35,
                                                             v39->klass->vtable._24_CreateDecryptor.methodPtr);
  v50 = (System_Security_Cryptography_CryptoStream_o *)sub_1BCAA2C(
                                                         System_Security_Cryptography_CryptoStream_TypeInfo,
                                                         v47,
                                                         v48,
                                                         v49);
  System_Security_Cryptography_CryptoStream___ctor(v50, (System_IO_Stream_o *)v43, v46, 1, 0LL);
  v54 = (ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *)sub_1BCAA2C(
                                                               ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo,
                                                               v51,
                                                               v52,
                                                               v53);
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream___ctor(v54, (System_IO_Stream_o *)v50, 0LL);
  if ( !v29 )
    sub_1BCAA3C(v55, v56);
  if ( !v54 )
    sub_1BCAA3C(v55, v56);
  ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v54->klass->vtable._36_Write.method)(
    v54,
    v29,
    0LL,
    *(unsigned int *)(v29 + 24),
    v54->klass->vtable._37_Write.methodPtr);
  ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, Il2CppMethodPointer))v54->klass->vtable._19_Close.method)(
    v54,
    v54->klass->vtable._20_Dispose.methodPtr);
  klass = v54->klass;
  v58 = *(unsigned __int16 *)(&v54->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v54->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v58;
      p_offset += 4;
      if ( !v58 )
        goto LABEL_15;
    }
    v60 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_15:
    v60 = sub_1C1C7C0(v54, System_IDisposable_TypeInfo, 0LL);
  }
  v61 = (*(__int64 (__fastcall **)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, _QWORD))v60)(
          v54,
          *(_QWORD *)(v60 + 8));
  if ( !v50 )
    sub_1BCAA3C(v61, v62);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, Il2CppMethodPointer))v50->klass->vtable._19_Close.method)(
    v50,
    v50->klass->vtable._20_Dispose.methodPtr);
  v63 = v50->klass;
  v64 = *(unsigned __int16 *)(&v50->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v50->klass->_2.bitflags2 + 3) )
  {
    v65 = &v63->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v65 - 1) != System_IDisposable_TypeInfo )
    {
      --v64;
      v65 += 4;
      if ( !v64 )
        goto LABEL_22;
    }
    v66 = (__int64)(&v63->vtable._0_Equals.method + 2 * *v65);
  }
  else
  {
LABEL_22:
    v66 = sub_1C1C7C0(v50, System_IDisposable_TypeInfo, 0LL);
  }
  v67 = (*(__int64 (__fastcall **)(System_Security_Cryptography_CryptoStream_o *, _QWORD))v66)(
          v50,
          *(_QWORD *)(v66 + 8));
  if ( !v43 )
    sub_1BCAA3C(v67, v68);
  v69 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v43->klass->vtable._42_ToArray.method)(
          v43,
          v43->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v43->klass->vtable._19_Close.method)(
    v43,
    v43->klass->vtable._20_Dispose.methodPtr);
  v70 = v43->klass;
  v71 = *(unsigned __int16 *)(&v43->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v43->klass->_2.bitflags2 + 3) )
  {
    v72 = &v70->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v72 - 1) != System_IDisposable_TypeInfo )
    {
      --v71;
      v72 += 4;
      if ( !v71 )
        goto LABEL_29;
    }
    v73 = (__int64)(&v70->vtable._0_Equals.method + 2 * *v72);
  }
  else
  {
LABEL_29:
    v73 = sub_1C1C7C0(v43, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v73)(v43, *(_QWORD *)(v73 + 8));
  if ( !eorData )
    goto LABEL_43;
  UTF8 = (unsigned int *)sub_1BCA888(byte___TypeInfo, 4LL);
  if ( !UTF8 )
    goto LABEL_51;
  v74 = UTF8[6];
  if ( !v74 )
    goto LABEL_50;
  *((_BYTE *)UTF8 + 32) = eorData;
  if ( v74 == 1 )
    goto LABEL_50;
  *((_BYTE *)UTF8 + 33) = BYTE1(eorData);
  if ( v74 <= 2 )
    goto LABEL_50;
  *((_BYTE *)UTF8 + 34) = BYTE2(eorData);
  if ( v74 == 3 )
    goto LABEL_50;
  *((_BYTE *)UTF8 + 35) = HIBYTE(eorData);
  if ( !v69 )
LABEL_51:
    sub_1BCAA3C(UTF8, v28);
  if ( (int)*(_QWORD *)(v69 + 24) >= 1 )
  {
    v75 = 0LL;
    v76 = (unsigned int)*(_QWORD *)(v69 + 24);
    while ( v75 < v76 && (v75 & 3) < UTF8[6] )
    {
      *(_BYTE *)(v69 + 32 + v75) ^= *((_BYTE *)UTF8 + (v75 & 3) + 32);
      if ( v76 == ++v75 )
        goto LABEL_43;
    }
LABEL_50:
    sub_1BCAA44(UTF8, v28);
  }
LABEL_43:
  if ( crc->fields.hasValue )
  {
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo, v28);
    v77 = Crc32__Compute((System_Byte_array *)v69, 0LL);
    v80 = (System_Nullable_uint__o)&v79;
    v79 = 0LL;
    System_Nullable_uint____ctor(v80, v77, (const MethodInfo_36C21A0 *)Method_System_Nullable_uint___ctor__);
    *crc = v79;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v28);
  return System_Convert__ToBase64String((System_Byte_array *)v69, 0LL);
}