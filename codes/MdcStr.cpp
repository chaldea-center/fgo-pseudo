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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  System_Byte_array *v37; // x0
  bool v38; // zf
  System_Byte_array *v39; // x19
  uint32_t v40; // w21
  _DWORD *Mk; // x0
  __int64 v42; // x1
  unsigned int v43; // w8
  unsigned __int64 v44; // x9
  unsigned __int64 v45; // x8
  __int64 v46; // x12
  System_Text_Encoding_o *UTF8; // x20
  __int64 v48; // x21
  System_Text_Encoding_o *v49; // x20
  __int64 v50; // x22
  System_Security_Cryptography_TripleDESCryptoServiceProvider_o *v51; // x23
  System_IO_MemoryStream_o *v52; // x20
  __int64 v53; // x0
  __int64 v54; // x1
  System_Security_Cryptography_ICryptoTransform_o *v55; // x22
  System_Security_Cryptography_CryptoStream_o *v56; // x21
  __int64 v57; // x0
  __int64 v58; // x1
  __int64 v59; // x3
  System_Security_Cryptography_CryptoStream_c *klass; // x8
  unsigned __int64 v61; // x10
  int32_t *p_offset; // x11
  __int64 v63; // x0
  __int64 v64; // x0
  __int64 v65; // x1
  System_Byte_array *v66; // x19
  __int64 v67; // x3
  System_IO_MemoryStream_c *v68; // x8
  unsigned __int64 v69; // x10
  int32_t *v70; // x11
  __int64 v71; // x0
  System_IO_MemoryStream_o *v72; // x20
  System_IO_MemoryStream_o *v73; // x21
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *v74; // x22
  __int64 v75; // x0
  __int64 v76; // x1
  __int64 v77; // x23
  __int64 v78; // x0
  __int64 v79; // x1
  __int64 v80; // x3
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_c *v81; // x8
  unsigned __int64 v82; // x10
  int32_t *v83; // x11
  __int64 v84; // x0
  __int64 v85; // x0
  __int64 v86; // x1
  __int64 v87; // x3
  System_IO_MemoryStream_c *v88; // x8
  unsigned __int64 v89; // x10
  int32_t *v90; // x11
  __int64 v91; // x0
  __int64 v92; // x0
  __int64 v93; // x1
  __int64 v94; // x21
  __int64 v95; // x3
  System_IO_MemoryStream_c *v96; // x8
  unsigned __int64 v97; // x10
  int32_t *v98; // x11
  __int64 v99; // x0
  __int64 v101; // x0
  __int64 v102; // x0
  System_IO_IOException_o *v103; // x19
  System_String_o *v104; // x0
  __int64 v105; // x0
  _DWORD v106[5]; // [xsp+0h] [xbp-50h]
  int v107; // [xsp+14h] [xbp-3Ch]
  System_Nullable_uint__o v108; // [xsp+18h] [xbp-38h] BYREF
  System_Nullable_uint__o v109; // 0:x0.8

  v108 = crc;
  if ( (byte_42E86EF & 1) == 0 )
  {
    sub_B5D5C4(&ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo, eorData, crc.fields.value, method);
    sub_B5D5C4(&byte___TypeInfo, v7, v8, v9);
    sub_B5D5C4(&System_Convert_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Crc32_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&System_Security_Cryptography_CryptoStream_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&System_IO_MemoryStream_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&NetworkManager_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_System_Nullable_uint__get_HasValue__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Nullable_uint__get_Value__, v31, v32, v33);
    sub_B5D5C4(&System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo, v34, v35, v36);
    byte_42E86EF = 1;
  }
  v107 = 0;
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v37 = System_Convert__FromBase64String(str, 0LL);
  v38 = (*(_QWORD *)&crc & 0xFF00000000LL) == 0;
  v39 = v37;
  if ( !v38 )
  {
    if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v40 = Crc32__Compute(v39, 0LL);
    v109 = (System_Nullable_uint__o)&v108;
    if ( v40 != System_Nullable_uint___get_Value(
                  v109,
                  (const MethodInfo_234E1C8 *)Method_System_Nullable_uint__get_Value__) )
    {
      v102 = sub_B5D5C8(&System_IO_IOException_TypeInfo);
      v103 = (System_IO_IOException_o *)sub_B5D694(v102);
      v104 = (System_String_o *)sub_B5D5C8(&StringLiteral_9100/*"MdcStr:Dc Crc Error"*/);
      System_IO_IOException___ctor_39731552(v103, v104, 0LL);
      v105 = sub_B5D5C8(&Method_MdcStr_Dc__);
      sub_B5D668(v103, v105);
    }
  }
  if ( eorData )
  {
    Mk = (_DWORD *)sub_B5D5DC(byte___TypeInfo, 4LL);
    if ( !Mk )
      goto LABEL_88;
    v43 = Mk[6];
    if ( !v43 )
      goto LABEL_87;
    *((_BYTE *)Mk + 32) = eorData;
    if ( v43 == 1 )
      goto LABEL_87;
    *((_BYTE *)Mk + 33) = BYTE1(eorData);
    if ( v43 <= 2 )
      goto LABEL_87;
    *((_BYTE *)Mk + 34) = BYTE2(eorData);
    if ( v43 == 3 )
      goto LABEL_87;
    *((_BYTE *)Mk + 35) = HIBYTE(eorData);
    if ( !v39 )
LABEL_88:
      sub_B5D69C(Mk, v42);
    if ( (int)*(_QWORD *)&v39->max_length >= 1 )
    {
      v44 = (unsigned int)*(_QWORD *)&v39->max_length;
      v45 = 0LL;
      while ( v45 < v44 )
      {
        v46 = v45 & 3;
        if ( (unsigned int)v46 >= Mk[6] )
          break;
        v39->m_Items[v45++ + 4] ^= *((_BYTE *)Mk + v46 + 32);
        if ( (__int64)v45 >= (int)v44 )
          goto LABEL_23;
      }
LABEL_87:
      v101 = sub_B5D6C8(Mk);
      sub_B5D668(v101, 0LL);
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
  v48 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, _DWORD *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
          UTF8,
          Mk,
          UTF8->klass->vtable._19_GetBytes.methodPtr);
  v49 = System_Text_Encoding__get_UTF8(0LL);
  Mk = NetworkManager__GetCv(0LL);
  if ( !v49 )
    goto LABEL_88;
  v50 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, _DWORD *, Il2CppMethodPointer))v49->klass->vtable._18_GetBytes.method)(
          v49,
          Mk,
          v49->klass->vtable._19_GetBytes.methodPtr);
  v51 = (System_Security_Cryptography_TripleDESCryptoServiceProvider_o *)sub_B5D694(System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_TripleDESCryptoServiceProvider___ctor(v51, 0LL);
  v52 = (System_IO_MemoryStream_o *)sub_B5D694(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v52, 0LL);
  if ( !v51 )
    sub_B5D69C(v53, v54);
  v55 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_TripleDESCryptoServiceProvider_o *, __int64, __int64, Il2CppMethodPointer))v51->klass->vtable._25_CreateDecryptor.method)(
                                                             v51,
                                                             v48,
                                                             v50,
                                                             v51->klass->vtable._26_GenerateKey.methodPtr);
  v56 = (System_Security_Cryptography_CryptoStream_o *)sub_B5D694(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v56, (System_IO_Stream_o *)v52, v55, 1, 0LL);
  if ( !v39 )
    sub_B5D69C(v57, v58);
  if ( !v56 )
    sub_B5D69C(v57, v58);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))v56->klass->vtable._32_Write.method)(
    v56,
    v39,
    0LL,
    v39->max_length,
    v56->klass->vtable._33_WriteByte.methodPtr);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, Il2CppMethodPointer))v56->klass->vtable._18_Close.method)(
    v56,
    v56->klass->vtable._19_Dispose.methodPtr);
  v106[v107++] = 219;
  klass = v56->klass;
  if ( *(_WORD *)&v56->klass->_2.bitflags1 )
  {
    v61 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v61;
      p_offset += 4;
      if ( v61 >= *(unsigned __int16 *)&v56->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v63 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_35:
    v63 = sub_AF54C0(v56, System_IDisposable_TypeInfo, 0LL, v59);
  }
  v64 = (*(__int64 (__fastcall **)(System_Security_Cryptography_CryptoStream_o *, _QWORD))v63)(
          v56,
          *(_QWORD *)(v63 + 8));
  if ( v107 && v106[v107 - 1] == 219 )
    --v107;
  if ( !v52 )
    sub_B5D69C(v64, v65);
  v66 = (System_Byte_array *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v52->klass->vtable._37_ToArray.method)(
                               v52,
                               v52->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v52->klass->vtable._18_Close.method)(
    v52,
    v52->klass->vtable._19_Dispose.methodPtr);
  v106[v107++] = 249;
  v68 = v52->klass;
  if ( *(_WORD *)&v52->klass->_2.bitflags1 )
  {
    v69 = 0LL;
    v70 = &v68->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v70 - 1) != System_IDisposable_TypeInfo )
    {
      ++v69;
      v70 += 4;
      if ( v69 >= *(unsigned __int16 *)&v52->klass->_2.bitflags1 )
        goto LABEL_45;
    }
    v71 = (__int64)(&v68->vtable._0_Equals.method + 2 * *v70);
  }
  else
  {
LABEL_45:
    v71 = sub_AF54C0(v52, System_IDisposable_TypeInfo, 0LL, v67);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v71)(v52, *(_QWORD *)(v71 + 8));
  if ( v107 && v106[v107 - 1] == 249 )
    --v107;
  v72 = (System_IO_MemoryStream_o *)sub_B5D694(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v72, 0LL);
  v73 = (System_IO_MemoryStream_o *)sub_B5D694(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_45159160(v73, v66, 0LL);
  v74 = (ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *)sub_B5D694(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo);
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream___ctor(v74, (System_IO_Stream_o *)v73, 0LL);
  v75 = sub_B5D5DC(byte___TypeInfo, 0x4000LL);
  v77 = v75;
  if ( !v75 )
    sub_B5D69C(0LL, v76);
  if ( !v74 )
    sub_B5D69C(v75, v76);
  while ( 1 )
  {
    v78 = ((__int64 (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v74->klass->vtable._30_Read.method)(
            v74,
            v77,
            0LL,
            *(unsigned int *)(v77 + 24),
            v74->klass->vtable._31_ReadByte.methodPtr);
    if ( (int)v78 < 1 )
      break;
    if ( !v72 )
      sub_B5D69C(v78, v79);
    ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v72->klass->vtable._32_Write.method)(
      v72,
      v77,
      0LL,
      (unsigned int)v78,
      v72->klass->vtable._33_WriteByte.methodPtr);
  }
  ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, Il2CppMethodPointer))v74->klass->vtable._18_Close.method)(
    v74,
    v74->klass->vtable._19_Dispose.methodPtr);
  v106[v107++] = 341;
  v81 = v74->klass;
  if ( *(_WORD *)&v74->klass->_2.bitflags1 )
  {
    v82 = 0LL;
    v83 = &v81->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v83 - 1) != System_IDisposable_TypeInfo )
    {
      ++v82;
      v83 += 4;
      if ( v82 >= *(unsigned __int16 *)&v74->klass->_2.bitflags1 )
        goto LABEL_59;
    }
    v84 = (__int64)(&v81->vtable._0_Equals.method + 2 * *v83);
  }
  else
  {
LABEL_59:
    v84 = sub_AF54C0(v74, System_IDisposable_TypeInfo, 0LL, v80);
  }
  v85 = (*(__int64 (__fastcall **)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, _QWORD))v84)(
          v74,
          *(_QWORD *)(v84 + 8));
  if ( v107 && v106[v107 - 1] == 341 )
    --v107;
  if ( !v73 )
    sub_B5D69C(v85, v86);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v73->klass->vtable._18_Close.method)(
    v73,
    v73->klass->vtable._19_Dispose.methodPtr);
  v106[v107++] = 362;
  v88 = v73->klass;
  if ( *(_WORD *)&v73->klass->_2.bitflags1 )
  {
    v89 = 0LL;
    v90 = &v88->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v90 - 1) != System_IDisposable_TypeInfo )
    {
      ++v89;
      v90 += 4;
      if ( v89 >= *(unsigned __int16 *)&v73->klass->_2.bitflags1 )
        goto LABEL_69;
    }
    v91 = (__int64)(&v88->vtable._0_Equals.method + 2 * *v90);
  }
  else
  {
LABEL_69:
    v91 = sub_AF54C0(v73, System_IDisposable_TypeInfo, 0LL, v87);
  }
  v92 = (*(__int64 (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v91)(v73, *(_QWORD *)(v91 + 8));
  if ( v107 && v106[v107 - 1] == 362 )
    --v107;
  if ( !v72 )
    sub_B5D69C(v92, v93);
  v94 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v72->klass->vtable._37_ToArray.method)(
          v72,
          v72->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v72->klass->vtable._18_Close.method)(
    v72,
    v72->klass->vtable._19_Dispose.methodPtr);
  v106[v107++] = 392;
  v96 = v72->klass;
  if ( *(_WORD *)&v72->klass->_2.bitflags1 )
  {
    v97 = 0LL;
    v98 = &v96->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v98 - 1) != System_IDisposable_TypeInfo )
    {
      ++v97;
      v98 += 4;
      if ( v97 >= *(unsigned __int16 *)&v72->klass->_2.bitflags1 )
        goto LABEL_79;
    }
    v99 = (__int64)(&v96->vtable._0_Equals.method + 2 * *v98);
  }
  else
  {
LABEL_79:
    v99 = sub_AF54C0(v72, System_IDisposable_TypeInfo, 0LL, v95);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v99)(v72, *(_QWORD *)(v99 + 8));
  if ( v107 && v106[v107 - 1] == 392 )
    --v107;
  Mk = System_Text_Encoding__get_UTF8(0LL);
  if ( !Mk )
    goto LABEL_88;
  return (System_String_o *)(*(__int64 (__fastcall **)(_DWORD *, __int64, _QWORD))(*(_QWORD *)Mk + 856LL))(
                              Mk,
                              v94,
                              *(_QWORD *)(*(_QWORD *)Mk + 864LL));
}


System_String_o *__fastcall MdcStr__Ec(
        System_Nullable_uint__o *crc,
        System_String_o *str,
        uint32_t eorData,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  unsigned int *UTF8; // x0
  __int64 v38; // x1
  __int64 v39; // x24
  System_Text_Encoding_o *v40; // x21
  __int64 v41; // x22
  System_Text_Encoding_o *v42; // x21
  __int64 v43; // x23
  System_Security_Cryptography_TripleDESCryptoServiceProvider_o *v44; // x25
  System_IO_MemoryStream_o *v45; // x21
  __int64 v46; // x0
  __int64 v47; // x1
  System_Security_Cryptography_ICryptoTransform_o *v48; // x23
  System_Security_Cryptography_CryptoStream_o *v49; // x22
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *v50; // x23
  __int64 v51; // x0
  __int64 v52; // x1
  __int64 v53; // x3
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_c *klass; // x8
  unsigned __int64 v55; // x10
  int32_t *p_offset; // x11
  __int64 v57; // x0
  __int64 v58; // x0
  __int64 v59; // x1
  __int64 v60; // x3
  int v61; // w25
  System_Security_Cryptography_CryptoStream_c *v62; // x8
  unsigned __int64 v63; // x10
  int32_t *v64; // x11
  __int64 v65; // x0
  __int64 v66; // x0
  __int64 v67; // x1
  int v68; // w8
  __int64 v69; // x22
  __int64 v70; // x3
  int v71; // w25
  System_IO_MemoryStream_c *v72; // x8
  unsigned __int64 v73; // x10
  int32_t *v74; // x11
  __int64 v75; // x0
  unsigned int v76; // w8
  unsigned __int64 v77; // x9
  unsigned __int64 v78; // x8
  __int64 v79; // x12
  uint32_t v80; // w1
  __int64 v82; // x0
  int v83[3]; // [xsp+0h] [xbp-50h]
  int v84; // [xsp+Ch] [xbp-44h]
  System_Nullable_uint__o v85; // [xsp+18h] [xbp-38h] BYREF
  System_Nullable_uint__o v86; // 0:x0.8

  if ( (byte_42E86EE & 1) == 0 )
  {
    sub_B5D5C4(&ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo, (_DWORD)str, eorData, method);
    sub_B5D5C4(&byte___TypeInfo, v7, v8, v9);
    sub_B5D5C4(&System_Convert_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Crc32_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&System_Security_Cryptography_CryptoStream_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&System_IO_MemoryStream_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&NetworkManager_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_System_Nullable_uint___ctor__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Nullable_uint__get_HasValue__, v31, v32, v33);
    sub_B5D5C4(&System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo, v34, v35, v36);
    byte_42E86EE = 1;
  }
  v84 = 0;
  UTF8 = (unsigned int *)System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    goto LABEL_62;
  v39 = (*(__int64 (__fastcall **)(unsigned int *, System_String_o *, _QWORD))(*(_QWORD *)UTF8 + 600LL))(
          UTF8,
          str,
          *(_QWORD *)(*(_QWORD *)UTF8 + 608LL));
  v40 = System_Text_Encoding__get_UTF8(0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UTF8 = (unsigned int *)NetworkManager__GetMk(0LL);
  if ( !v40 )
    goto LABEL_62;
  v41 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, unsigned int *, Il2CppMethodPointer))v40->klass->vtable._18_GetBytes.method)(
          v40,
          UTF8,
          v40->klass->vtable._19_GetBytes.methodPtr);
  v42 = System_Text_Encoding__get_UTF8(0LL);
  UTF8 = (unsigned int *)NetworkManager__GetCv(0LL);
  if ( !v42 )
    goto LABEL_62;
  v43 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, unsigned int *, Il2CppMethodPointer))v42->klass->vtable._18_GetBytes.method)(
          v42,
          UTF8,
          v42->klass->vtable._19_GetBytes.methodPtr);
  v44 = (System_Security_Cryptography_TripleDESCryptoServiceProvider_o *)sub_B5D694(System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_TripleDESCryptoServiceProvider___ctor(v44, 0LL);
  v45 = (System_IO_MemoryStream_o *)sub_B5D694(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v45, 0LL);
  if ( !v44 )
    sub_B5D69C(v46, v47);
  v48 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_TripleDESCryptoServiceProvider_o *, __int64, __int64, Il2CppMethodPointer))v44->klass->vtable._23_CreateEncryptor.method)(
                                                             v44,
                                                             v41,
                                                             v43,
                                                             v44->klass->vtable._24_CreateDecryptor.methodPtr);
  v49 = (System_Security_Cryptography_CryptoStream_o *)sub_B5D694(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v49, (System_IO_Stream_o *)v45, v48, 1, 0LL);
  v50 = (ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *)sub_B5D694(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo);
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream___ctor(v50, (System_IO_Stream_o *)v49, 0LL);
  if ( !v39 )
    sub_B5D69C(v51, v52);
  if ( !v50 )
    sub_B5D69C(v51, v52);
  ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v50->klass->vtable._32_Write.method)(
    v50,
    v39,
    0LL,
    *(unsigned int *)(v39 + 24),
    v50->klass->vtable._33_WriteByte.methodPtr);
  ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, Il2CppMethodPointer))v50->klass->vtable._18_Close.method)(
    v50,
    v50->klass->vtable._19_Dispose.methodPtr);
  v83[0] = 117;
  v84 = 1;
  klass = v50->klass;
  if ( *(_WORD *)&v50->klass->_2.bitflags1 )
  {
    v55 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v55;
      p_offset += 4;
      if ( v55 >= *(unsigned __int16 *)&v50->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v57 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_16:
    v57 = sub_AF54C0(v50, System_IDisposable_TypeInfo, 0LL, v53);
  }
  v58 = (*(__int64 (__fastcall **)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, _QWORD))v57)(
          v50,
          *(_QWORD *)(v57 + 8));
  v84 = 0;
  if ( !v49 )
    sub_B5D69C(v58, v59);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, Il2CppMethodPointer))v49->klass->vtable._18_Close.method)(
    v49,
    v49->klass->vtable._19_Dispose.methodPtr);
  v83[0] = 138;
  v61 = ++v84;
  v62 = v49->klass;
  if ( *(_WORD *)&v49->klass->_2.bitflags1 )
  {
    v63 = 0LL;
    v64 = &v62->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v64 - 1) != System_IDisposable_TypeInfo )
    {
      ++v63;
      v64 += 4;
      if ( v63 >= *(unsigned __int16 *)&v49->klass->_2.bitflags1 )
        goto LABEL_25;
    }
    v65 = (__int64)(&v62->vtable._0_Equals.method + 2 * *v64);
  }
  else
  {
LABEL_25:
    v65 = sub_AF54C0(v49, System_IDisposable_TypeInfo, 0LL, v60);
  }
  v66 = (*(__int64 (__fastcall **)(System_Security_Cryptography_CryptoStream_o *, _QWORD))v65)(
          v49,
          *(_QWORD *)(v65 + 8));
  if ( v61 )
  {
    v68 = v61 - 1;
    if ( v83[v61 - 1] == 138 )
    {
      --v61;
      v84 = v68;
    }
  }
  if ( !v45 )
    sub_B5D69C(v66, v67);
  v69 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v45->klass->vtable._37_ToArray.method)(
          v45,
          v45->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v45->klass->vtable._18_Close.method)(
    v45,
    v45->klass->vtable._19_Dispose.methodPtr);
  v83[v61] = 168;
  v71 = ++v84;
  v72 = v45->klass;
  if ( *(_WORD *)&v45->klass->_2.bitflags1 )
  {
    v73 = 0LL;
    v74 = &v72->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v74 - 1) != System_IDisposable_TypeInfo )
    {
      ++v73;
      v74 += 4;
      if ( v73 >= *(unsigned __int16 *)&v45->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v75 = (__int64)(&v72->vtable._0_Equals.method + 2 * *v74);
  }
  else
  {
LABEL_35:
    v75 = sub_AF54C0(v45, System_IDisposable_TypeInfo, 0LL, v70);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v75)(v45, *(_QWORD *)(v75 + 8));
  if ( v71 && v83[v71 - 1] == 168 )
    v84 = v71 - 1;
  if ( !eorData )
    goto LABEL_52;
  UTF8 = (unsigned int *)sub_B5D5DC(byte___TypeInfo, 4LL);
  if ( !UTF8 )
    goto LABEL_62;
  v76 = UTF8[6];
  if ( !v76 )
    goto LABEL_61;
  *((_BYTE *)UTF8 + 32) = eorData;
  if ( v76 == 1 )
    goto LABEL_61;
  *((_BYTE *)UTF8 + 33) = BYTE1(eorData);
  if ( v76 <= 2 )
    goto LABEL_61;
  *((_BYTE *)UTF8 + 34) = BYTE2(eorData);
  if ( v76 == 3 )
    goto LABEL_61;
  *((_BYTE *)UTF8 + 35) = HIBYTE(eorData);
  if ( !v69 )
LABEL_62:
    sub_B5D69C(UTF8, v38);
  if ( (int)*(_QWORD *)(v69 + 24) >= 1 )
  {
    v77 = (unsigned int)*(_QWORD *)(v69 + 24);
    v78 = 0LL;
    while ( v78 < v77 )
    {
      v79 = v78 & 3;
      if ( (unsigned int)v79 >= UTF8[6] )
        break;
      *(_BYTE *)(v69 + 32 + v78++) ^= *((_BYTE *)UTF8 + v79 + 32);
      if ( (__int64)v78 >= (int)v77 )
        goto LABEL_52;
    }
LABEL_61:
    v82 = sub_B5D6C8(UTF8);
    sub_B5D668(v82, 0LL);
  }
LABEL_52:
  if ( crc->fields.has_value )
  {
    if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v80 = Crc32__Compute((System_Byte_array *)v69, 0LL);
    v86 = (System_Nullable_uint__o)&v85;
    v85 = 0LL;
    System_Nullable_uint____ctor(v86, v80, (const MethodInfo_234E1B0 *)Method_System_Nullable_uint___ctor__);
    *crc = v85;
  }
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  return System_Convert__ToBase64String((System_Byte_array *)v69, 0LL);
}