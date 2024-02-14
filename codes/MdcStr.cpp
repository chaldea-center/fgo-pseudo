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
  bool v18; // zf
  System_Byte_array *v19; // x19
  uint32_t v20; // w21
  _DWORD *Mk; // x0
  unsigned int v22; // w8
  unsigned __int64 v23; // x9
  unsigned __int64 v24; // x8
  __int64 v25; // x12
  System_Text_Encoding_o *UTF8; // x20
  __int64 v27; // x21
  System_Text_Encoding_o *v28; // x20
  __int64 v29; // x22
  __int64 v30; // x1
  __int64 v31; // x2
  System_Security_Cryptography_TripleDESCryptoServiceProvider_o *v32; // x23
  __int64 v33; // x1
  __int64 v34; // x2
  System_IO_MemoryStream_o *v35; // x20
  __int64 v36; // x0
  System_Security_Cryptography_ICryptoTransform_o *v37; // x22
  __int64 v38; // x1
  __int64 v39; // x2
  System_Security_Cryptography_CryptoStream_o *v40; // x21
  __int64 v41; // x0
  System_Security_Cryptography_CryptoStream_c *klass; // x8
  unsigned __int64 v43; // x10
  int32_t *p_offset; // x11
  __int64 v45; // x0
  __int64 v46; // x0
  System_Byte_array *v47; // x19
  System_IO_MemoryStream_c *v48; // x8
  unsigned __int64 v49; // x10
  int32_t *v50; // x11
  __int64 v51; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  System_IO_MemoryStream_o *v54; // x20
  __int64 v55; // x1
  __int64 v56; // x2
  System_IO_MemoryStream_o *v57; // x21
  __int64 v58; // x1
  __int64 v59; // x2
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *v60; // x22
  __int64 v61; // x0
  __int64 v62; // x23
  __int64 v63; // x0
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_c *v64; // x8
  unsigned __int64 v65; // x10
  int32_t *v66; // x11
  __int64 v67; // x0
  __int64 v68; // x0
  System_IO_MemoryStream_c *v69; // x8
  unsigned __int64 v70; // x10
  int32_t *v71; // x11
  __int64 v72; // x0
  __int64 v73; // x0
  __int64 v74; // x21
  System_IO_MemoryStream_c *v75; // x8
  unsigned __int64 v76; // x10
  int32_t *v77; // x11
  __int64 v78; // x0
  __int64 v80; // x0
  __int64 v81; // x0
  __int64 v82; // x1
  __int64 v83; // x2
  System_IO_IOException_o *v84; // x19
  System_String_o *v85; // x0
  __int64 v86; // x0
  _DWORD v87[5]; // [xsp+0h] [xbp-50h]
  int v88; // [xsp+14h] [xbp-3Ch]
  System_Nullable_uint__o v89; // [xsp+18h] [xbp-38h] BYREF
  System_Nullable_uint__o v90; // 0:x0.8

  v89 = crc;
  if ( (byte_4214E0C & 1) == 0 )
  {
    sub_B0D8A4(&ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo, *(_QWORD *)&eorData);
    sub_B0D8A4(&byte___TypeInfo, v7);
    sub_B0D8A4(&System_Convert_TypeInfo, v8);
    sub_B0D8A4(&Crc32_TypeInfo, v9);
    sub_B0D8A4(&System_Security_Cryptography_CryptoStream_TypeInfo, v10);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v11);
    sub_B0D8A4(&System_IO_MemoryStream_TypeInfo, v12);
    sub_B0D8A4(&NetworkManager_TypeInfo, v13);
    sub_B0D8A4(&Method_System_Nullable_uint__get_HasValue__, v14);
    sub_B0D8A4(&Method_System_Nullable_uint__get_Value__, v15);
    sub_B0D8A4(&System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo, v16);
    byte_4214E0C = 1;
  }
  v88 = 0;
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v17 = System_Convert__FromBase64String(str, 0LL);
  v18 = (*(_QWORD *)&crc & 0xFF00000000LL) == 0;
  v19 = v17;
  if ( !v18 )
  {
    if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v20 = Crc32__Compute(v19, 0LL);
    v90 = (System_Nullable_uint__o)&v89;
    if ( v20 != System_Nullable_uint___get_Value(
                  v90,
                  (const MethodInfo_299ADD0 *)Method_System_Nullable_uint__get_Value__) )
    {
      v81 = sub_B0D8A8(&System_IO_IOException_TypeInfo);
      v84 = (System_IO_IOException_o *)sub_B0D974(v81, v82, v83);
      v85 = (System_String_o *)sub_B0D8A8(&StringLiteral_9029/*"MdcStr:Dc Crc Error"*/);
      System_IO_IOException___ctor_38462808(v84, v85, 0LL);
      v86 = sub_B0D8A8(&Method_MdcStr_Dc__);
      sub_B0D948(v84, v86);
    }
  }
  if ( eorData )
  {
    Mk = (_DWORD *)sub_B0D8BC(byte___TypeInfo, 4LL);
    if ( !Mk )
      goto LABEL_88;
    v22 = Mk[6];
    if ( !v22 )
      goto LABEL_87;
    *((_BYTE *)Mk + 32) = eorData;
    if ( v22 == 1 )
      goto LABEL_87;
    *((_BYTE *)Mk + 33) = BYTE1(eorData);
    if ( v22 <= 2 )
      goto LABEL_87;
    *((_BYTE *)Mk + 34) = BYTE2(eorData);
    if ( v22 == 3 )
      goto LABEL_87;
    *((_BYTE *)Mk + 35) = HIBYTE(eorData);
    if ( !v19 )
LABEL_88:
      sub_B0D97C(Mk);
    if ( (int)*(_QWORD *)&v19->max_length >= 1 )
    {
      v23 = (unsigned int)*(_QWORD *)&v19->max_length;
      v24 = 0LL;
      while ( v24 < v23 )
      {
        v25 = v24 & 3;
        if ( (unsigned int)v25 >= Mk[6] )
          break;
        v19->m_Items[v24++ + 4] ^= *((_BYTE *)Mk + v25 + 32);
        if ( (__int64)v24 >= (int)v23 )
          goto LABEL_23;
      }
LABEL_87:
      v80 = sub_B0D9A8(Mk);
      sub_B0D948(v80, 0LL);
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
  v27 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, _DWORD *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
          UTF8,
          Mk,
          UTF8->klass->vtable._19_GetBytes.methodPtr);
  v28 = System_Text_Encoding__get_UTF8(0LL);
  Mk = NetworkManager__GetCv(0LL);
  if ( !v28 )
    goto LABEL_88;
  v29 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, _DWORD *, Il2CppMethodPointer))v28->klass->vtable._18_GetBytes.method)(
          v28,
          Mk,
          v28->klass->vtable._19_GetBytes.methodPtr);
  v32 = (System_Security_Cryptography_TripleDESCryptoServiceProvider_o *)sub_B0D974(
                                                                           System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo,
                                                                           v30,
                                                                           v31);
  System_Security_Cryptography_TripleDESCryptoServiceProvider___ctor(v32, 0LL);
  v35 = (System_IO_MemoryStream_o *)sub_B0D974(System_IO_MemoryStream_TypeInfo, v33, v34);
  System_IO_MemoryStream___ctor(v35, 0LL);
  if ( !v32 )
    sub_B0D97C(v36);
  v37 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_TripleDESCryptoServiceProvider_o *, __int64, __int64, Il2CppMethodPointer))v32->klass->vtable._25_CreateDecryptor.method)(
                                                             v32,
                                                             v27,
                                                             v29,
                                                             v32->klass->vtable._26_GenerateKey.methodPtr);
  v40 = (System_Security_Cryptography_CryptoStream_o *)sub_B0D974(
                                                         System_Security_Cryptography_CryptoStream_TypeInfo,
                                                         v38,
                                                         v39);
  System_Security_Cryptography_CryptoStream___ctor(v40, (System_IO_Stream_o *)v35, v37, 1, 0LL);
  if ( !v19 )
    sub_B0D97C(v41);
  if ( !v40 )
    sub_B0D97C(v41);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))v40->klass->vtable._32_Write.method)(
    v40,
    v19,
    0LL,
    v19->max_length,
    v40->klass->vtable._33_WriteByte.methodPtr);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, Il2CppMethodPointer))v40->klass->vtable._18_Close.method)(
    v40,
    v40->klass->vtable._19_Dispose.methodPtr);
  v87[v88++] = 219;
  klass = v40->klass;
  if ( *(_WORD *)&v40->klass->_2.bitflags1 )
  {
    v43 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v43;
      p_offset += 4;
      if ( v43 >= *(unsigned __int16 *)&v40->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v45 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_35:
    v45 = sub_AA67A0(v40, System_IDisposable_TypeInfo, 0LL);
  }
  v46 = (*(__int64 (__fastcall **)(System_Security_Cryptography_CryptoStream_o *, _QWORD))v45)(
          v40,
          *(_QWORD *)(v45 + 8));
  if ( v88 && v87[v88 - 1] == 219 )
    --v88;
  if ( !v35 )
    sub_B0D97C(v46);
  v47 = (System_Byte_array *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v35->klass->vtable._37_ToArray.method)(
                               v35,
                               v35->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v35->klass->vtable._18_Close.method)(
    v35,
    v35->klass->vtable._19_Dispose.methodPtr);
  v87[v88++] = 249;
  v48 = v35->klass;
  if ( *(_WORD *)&v35->klass->_2.bitflags1 )
  {
    v49 = 0LL;
    v50 = &v48->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
    {
      ++v49;
      v50 += 4;
      if ( v49 >= *(unsigned __int16 *)&v35->klass->_2.bitflags1 )
        goto LABEL_45;
    }
    v51 = (__int64)(&v48->vtable._0_Equals.method + 2 * *v50);
  }
  else
  {
LABEL_45:
    v51 = sub_AA67A0(v35, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v51)(v35, *(_QWORD *)(v51 + 8));
  if ( v88 && v87[v88 - 1] == 249 )
    --v88;
  v54 = (System_IO_MemoryStream_o *)sub_B0D974(System_IO_MemoryStream_TypeInfo, v52, v53);
  System_IO_MemoryStream___ctor(v54, 0LL);
  v57 = (System_IO_MemoryStream_o *)sub_B0D974(System_IO_MemoryStream_TypeInfo, v55, v56);
  System_IO_MemoryStream___ctor_44569216(v57, v47, 0LL);
  v60 = (ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *)sub_B0D974(
                                                              ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo,
                                                              v58,
                                                              v59);
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream___ctor(v60, (System_IO_Stream_o *)v57, 0LL);
  v61 = sub_B0D8BC(byte___TypeInfo, 0x4000LL);
  v62 = v61;
  if ( !v61 )
    sub_B0D97C(0LL);
  if ( !v60 )
    sub_B0D97C(v61);
  while ( 1 )
  {
    v63 = ((__int64 (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v60->klass->vtable._30_Read.method)(
            v60,
            v62,
            0LL,
            *(unsigned int *)(v62 + 24),
            v60->klass->vtable._31_ReadByte.methodPtr);
    if ( (int)v63 < 1 )
      break;
    if ( !v54 )
      sub_B0D97C(v63);
    ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v54->klass->vtable._32_Write.method)(
      v54,
      v62,
      0LL,
      (unsigned int)v63,
      v54->klass->vtable._33_WriteByte.methodPtr);
  }
  ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, Il2CppMethodPointer))v60->klass->vtable._18_Close.method)(
    v60,
    v60->klass->vtable._19_Dispose.methodPtr);
  v87[v88++] = 341;
  v64 = v60->klass;
  if ( *(_WORD *)&v60->klass->_2.bitflags1 )
  {
    v65 = 0LL;
    v66 = &v64->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v66 - 1) != System_IDisposable_TypeInfo )
    {
      ++v65;
      v66 += 4;
      if ( v65 >= *(unsigned __int16 *)&v60->klass->_2.bitflags1 )
        goto LABEL_59;
    }
    v67 = (__int64)(&v64->vtable._0_Equals.method + 2 * *v66);
  }
  else
  {
LABEL_59:
    v67 = sub_AA67A0(v60, System_IDisposable_TypeInfo, 0LL);
  }
  v68 = (*(__int64 (__fastcall **)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, _QWORD))v67)(
          v60,
          *(_QWORD *)(v67 + 8));
  if ( v88 && v87[v88 - 1] == 341 )
    --v88;
  if ( !v57 )
    sub_B0D97C(v68);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v57->klass->vtable._18_Close.method)(
    v57,
    v57->klass->vtable._19_Dispose.methodPtr);
  v87[v88++] = 362;
  v69 = v57->klass;
  if ( *(_WORD *)&v57->klass->_2.bitflags1 )
  {
    v70 = 0LL;
    v71 = &v69->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v71 - 1) != System_IDisposable_TypeInfo )
    {
      ++v70;
      v71 += 4;
      if ( v70 >= *(unsigned __int16 *)&v57->klass->_2.bitflags1 )
        goto LABEL_69;
    }
    v72 = (__int64)(&v69->vtable._0_Equals.method + 2 * *v71);
  }
  else
  {
LABEL_69:
    v72 = sub_AA67A0(v57, System_IDisposable_TypeInfo, 0LL);
  }
  v73 = (*(__int64 (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v72)(v57, *(_QWORD *)(v72 + 8));
  if ( v88 && v87[v88 - 1] == 362 )
    --v88;
  if ( !v54 )
    sub_B0D97C(v73);
  v74 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v54->klass->vtable._37_ToArray.method)(
          v54,
          v54->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v54->klass->vtable._18_Close.method)(
    v54,
    v54->klass->vtable._19_Dispose.methodPtr);
  v87[v88++] = 392;
  v75 = v54->klass;
  if ( *(_WORD *)&v54->klass->_2.bitflags1 )
  {
    v76 = 0LL;
    v77 = &v75->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v77 - 1) != System_IDisposable_TypeInfo )
    {
      ++v76;
      v77 += 4;
      if ( v76 >= *(unsigned __int16 *)&v54->klass->_2.bitflags1 )
        goto LABEL_79;
    }
    v78 = (__int64)(&v75->vtable._0_Equals.method + 2 * *v77);
  }
  else
  {
LABEL_79:
    v78 = sub_AA67A0(v54, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v78)(v54, *(_QWORD *)(v78 + 8));
  if ( v88 && v87[v88 - 1] == 392 )
    --v88;
  Mk = System_Text_Encoding__get_UTF8(0LL);
  if ( !Mk )
    goto LABEL_88;
  return (System_String_o *)(*(__int64 (__fastcall **)(_DWORD *, __int64, _QWORD))(*(_QWORD *)Mk + 856LL))(
                              Mk,
                              v74,
                              *(_QWORD *)(*(_QWORD *)Mk + 864LL));
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
  __int64 v18; // x24
  System_Text_Encoding_o *v19; // x21
  __int64 v20; // x22
  System_Text_Encoding_o *v21; // x21
  __int64 v22; // x23
  __int64 v23; // x1
  __int64 v24; // x2
  System_Security_Cryptography_TripleDESCryptoServiceProvider_o *v25; // x25
  __int64 v26; // x1
  __int64 v27; // x2
  System_IO_MemoryStream_o *v28; // x21
  __int64 v29; // x0
  System_Security_Cryptography_ICryptoTransform_o *v30; // x23
  __int64 v31; // x1
  __int64 v32; // x2
  System_Security_Cryptography_CryptoStream_o *v33; // x22
  __int64 v34; // x1
  __int64 v35; // x2
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *v36; // x23
  __int64 v37; // x0
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_c *klass; // x8
  unsigned __int64 v39; // x10
  int32_t *p_offset; // x11
  __int64 v41; // x0
  __int64 v42; // x0
  int v43; // w25
  System_Security_Cryptography_CryptoStream_c *v44; // x8
  unsigned __int64 v45; // x10
  int32_t *v46; // x11
  __int64 v47; // x0
  __int64 v48; // x0
  int v49; // w8
  __int64 v50; // x22
  int v51; // w25
  System_IO_MemoryStream_c *v52; // x8
  unsigned __int64 v53; // x10
  int32_t *v54; // x11
  __int64 v55; // x0
  unsigned int v56; // w8
  unsigned __int64 v57; // x9
  unsigned __int64 v58; // x8
  __int64 v59; // x12
  uint32_t v60; // w1
  __int64 v62; // x0
  int v63[3]; // [xsp+0h] [xbp-50h]
  int v64; // [xsp+Ch] [xbp-44h]
  System_Nullable_uint__o v65; // [xsp+18h] [xbp-38h] BYREF
  System_Nullable_uint__o v66; // 0:x0.8

  if ( (byte_4214E0B & 1) == 0 )
  {
    sub_B0D8A4(&ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo, str);
    sub_B0D8A4(&byte___TypeInfo, v7);
    sub_B0D8A4(&System_Convert_TypeInfo, v8);
    sub_B0D8A4(&Crc32_TypeInfo, v9);
    sub_B0D8A4(&System_Security_Cryptography_CryptoStream_TypeInfo, v10);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v11);
    sub_B0D8A4(&System_IO_MemoryStream_TypeInfo, v12);
    sub_B0D8A4(&NetworkManager_TypeInfo, v13);
    sub_B0D8A4(&Method_System_Nullable_uint___ctor__, v14);
    sub_B0D8A4(&Method_System_Nullable_uint__get_HasValue__, v15);
    sub_B0D8A4(&System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo, v16);
    byte_4214E0B = 1;
  }
  v64 = 0;
  UTF8 = (unsigned int *)System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    goto LABEL_62;
  v18 = (*(__int64 (__fastcall **)(unsigned int *, System_String_o *, _QWORD))(*(_QWORD *)UTF8 + 600LL))(
          UTF8,
          str,
          *(_QWORD *)(*(_QWORD *)UTF8 + 608LL));
  v19 = System_Text_Encoding__get_UTF8(0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UTF8 = (unsigned int *)NetworkManager__GetMk(0LL);
  if ( !v19 )
    goto LABEL_62;
  v20 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, unsigned int *, Il2CppMethodPointer))v19->klass->vtable._18_GetBytes.method)(
          v19,
          UTF8,
          v19->klass->vtable._19_GetBytes.methodPtr);
  v21 = System_Text_Encoding__get_UTF8(0LL);
  UTF8 = (unsigned int *)NetworkManager__GetCv(0LL);
  if ( !v21 )
    goto LABEL_62;
  v22 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, unsigned int *, Il2CppMethodPointer))v21->klass->vtable._18_GetBytes.method)(
          v21,
          UTF8,
          v21->klass->vtable._19_GetBytes.methodPtr);
  v25 = (System_Security_Cryptography_TripleDESCryptoServiceProvider_o *)sub_B0D974(
                                                                           System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo,
                                                                           v23,
                                                                           v24);
  System_Security_Cryptography_TripleDESCryptoServiceProvider___ctor(v25, 0LL);
  v28 = (System_IO_MemoryStream_o *)sub_B0D974(System_IO_MemoryStream_TypeInfo, v26, v27);
  System_IO_MemoryStream___ctor(v28, 0LL);
  if ( !v25 )
    sub_B0D97C(v29);
  v30 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_TripleDESCryptoServiceProvider_o *, __int64, __int64, Il2CppMethodPointer))v25->klass->vtable._23_CreateEncryptor.method)(
                                                             v25,
                                                             v20,
                                                             v22,
                                                             v25->klass->vtable._24_CreateDecryptor.methodPtr);
  v33 = (System_Security_Cryptography_CryptoStream_o *)sub_B0D974(
                                                         System_Security_Cryptography_CryptoStream_TypeInfo,
                                                         v31,
                                                         v32);
  System_Security_Cryptography_CryptoStream___ctor(v33, (System_IO_Stream_o *)v28, v30, 1, 0LL);
  v36 = (ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *)sub_B0D974(
                                                               ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo,
                                                               v34,
                                                               v35);
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream___ctor(v36, (System_IO_Stream_o *)v33, 0LL);
  if ( !v18 )
    sub_B0D97C(v37);
  if ( !v36 )
    sub_B0D97C(v37);
  ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v36->klass->vtable._32_Write.method)(
    v36,
    v18,
    0LL,
    *(unsigned int *)(v18 + 24),
    v36->klass->vtable._33_WriteByte.methodPtr);
  ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, Il2CppMethodPointer))v36->klass->vtable._18_Close.method)(
    v36,
    v36->klass->vtable._19_Dispose.methodPtr);
  v63[0] = 117;
  v64 = 1;
  klass = v36->klass;
  if ( *(_WORD *)&v36->klass->_2.bitflags1 )
  {
    v39 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v39;
      p_offset += 4;
      if ( v39 >= *(unsigned __int16 *)&v36->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v41 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_16:
    v41 = sub_AA67A0(v36, System_IDisposable_TypeInfo, 0LL);
  }
  v42 = (*(__int64 (__fastcall **)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, _QWORD))v41)(
          v36,
          *(_QWORD *)(v41 + 8));
  v64 = 0;
  if ( !v33 )
    sub_B0D97C(v42);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, Il2CppMethodPointer))v33->klass->vtable._18_Close.method)(
    v33,
    v33->klass->vtable._19_Dispose.methodPtr);
  v63[0] = 138;
  v43 = ++v64;
  v44 = v33->klass;
  if ( *(_WORD *)&v33->klass->_2.bitflags1 )
  {
    v45 = 0LL;
    v46 = &v44->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
    {
      ++v45;
      v46 += 4;
      if ( v45 >= *(unsigned __int16 *)&v33->klass->_2.bitflags1 )
        goto LABEL_25;
    }
    v47 = (__int64)(&v44->vtable._0_Equals.method + 2 * *v46);
  }
  else
  {
LABEL_25:
    v47 = sub_AA67A0(v33, System_IDisposable_TypeInfo, 0LL);
  }
  v48 = (*(__int64 (__fastcall **)(System_Security_Cryptography_CryptoStream_o *, _QWORD))v47)(
          v33,
          *(_QWORD *)(v47 + 8));
  if ( v43 )
  {
    v49 = v43 - 1;
    if ( v63[v43 - 1] == 138 )
    {
      --v43;
      v64 = v49;
    }
  }
  if ( !v28 )
    sub_B0D97C(v48);
  v50 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v28->klass->vtable._37_ToArray.method)(
          v28,
          v28->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v28->klass->vtable._18_Close.method)(
    v28,
    v28->klass->vtable._19_Dispose.methodPtr);
  v63[v43] = 168;
  v51 = ++v64;
  v52 = v28->klass;
  if ( *(_WORD *)&v28->klass->_2.bitflags1 )
  {
    v53 = 0LL;
    v54 = &v52->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
    {
      ++v53;
      v54 += 4;
      if ( v53 >= *(unsigned __int16 *)&v28->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v55 = (__int64)(&v52->vtable._0_Equals.method + 2 * *v54);
  }
  else
  {
LABEL_35:
    v55 = sub_AA67A0(v28, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v55)(v28, *(_QWORD *)(v55 + 8));
  if ( v51 && v63[v51 - 1] == 168 )
    v64 = v51 - 1;
  if ( !eorData )
    goto LABEL_52;
  UTF8 = (unsigned int *)sub_B0D8BC(byte___TypeInfo, 4LL);
  if ( !UTF8 )
    goto LABEL_62;
  v56 = UTF8[6];
  if ( !v56 )
    goto LABEL_61;
  *((_BYTE *)UTF8 + 32) = eorData;
  if ( v56 == 1 )
    goto LABEL_61;
  *((_BYTE *)UTF8 + 33) = BYTE1(eorData);
  if ( v56 <= 2 )
    goto LABEL_61;
  *((_BYTE *)UTF8 + 34) = BYTE2(eorData);
  if ( v56 == 3 )
    goto LABEL_61;
  *((_BYTE *)UTF8 + 35) = HIBYTE(eorData);
  if ( !v50 )
LABEL_62:
    sub_B0D97C(UTF8);
  if ( (int)*(_QWORD *)(v50 + 24) >= 1 )
  {
    v57 = (unsigned int)*(_QWORD *)(v50 + 24);
    v58 = 0LL;
    while ( v58 < v57 )
    {
      v59 = v58 & 3;
      if ( (unsigned int)v59 >= UTF8[6] )
        break;
      *(_BYTE *)(v50 + 32 + v58++) ^= *((_BYTE *)UTF8 + v59 + 32);
      if ( (__int64)v58 >= (int)v57 )
        goto LABEL_52;
    }
LABEL_61:
    v62 = sub_B0D9A8(UTF8);
    sub_B0D948(v62, 0LL);
  }
LABEL_52:
  if ( crc->fields.has_value )
  {
    if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v60 = Crc32__Compute((System_Byte_array *)v50, 0LL);
    v66 = (System_Nullable_uint__o)&v65;
    v65 = 0LL;
    System_Nullable_uint____ctor(v66, v60, (const MethodInfo_299ADB8 *)Method_System_Nullable_uint___ctor__);
    *crc = v65;
  }
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  return System_Convert__ToBase64String((System_Byte_array *)v50, 0LL);
}