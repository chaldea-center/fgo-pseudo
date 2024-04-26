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
  System_Byte_array *v7; // x0
  bool v8; // zf
  System_Byte_array *v9; // x19
  uint32_t v10; // w21
  _DWORD *Mk; // x0
  __int64 v12; // x1
  unsigned int v13; // w8
  unsigned __int64 v14; // x9
  unsigned __int64 v15; // x8
  __int64 v16; // x12
  System_Text_Encoding_o *UTF8; // x20
  __int64 v18; // x21
  System_Text_Encoding_o *v19; // x20
  __int64 v20; // x22
  System_Security_Cryptography_TripleDESCryptoServiceProvider_o *v21; // x23
  System_IO_MemoryStream_o *v22; // x20
  __int64 v23; // x0
  __int64 v24; // x1
  System_Security_Cryptography_ICryptoTransform_o *v25; // x22
  System_Security_Cryptography_CryptoStream_o *v26; // x21
  __int64 v27; // x0
  __int64 v28; // x1
  System_Security_Cryptography_CryptoStream_c *klass; // x8
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  System_Byte_array *v35; // x19
  System_IO_MemoryStream_c *v36; // x8
  unsigned __int64 v37; // x10
  int32_t *v38; // x11
  __int64 v39; // x0
  System_IO_MemoryStream_o *v40; // x20
  System_IO_MemoryStream_o *v41; // x21
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *v42; // x22
  __int64 v43; // x0
  __int64 v44; // x1
  __int64 v45; // x23
  __int64 v46; // x0
  __int64 v47; // x1
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_c *v48; // x8
  unsigned __int64 v49; // x10
  int32_t *v50; // x11
  __int64 v51; // x0
  __int64 v52; // x0
  __int64 v53; // x1
  System_IO_MemoryStream_c *v54; // x8
  unsigned __int64 v55; // x10
  int32_t *v56; // x11
  __int64 v57; // x0
  __int64 v58; // x0
  __int64 v59; // x1
  __int64 v60; // x21
  System_IO_MemoryStream_c *v61; // x8
  unsigned __int64 v62; // x10
  int32_t *v63; // x11
  __int64 v64; // x0
  __int64 v66; // x0
  __int64 v67; // x0
  System_IO_IOException_o *v68; // x19
  System_String_o *v69; // x0
  __int64 v70; // x0
  _DWORD v71[5]; // [xsp+0h] [xbp-50h]
  int v72; // [xsp+14h] [xbp-3Ch]
  System_Nullable_uint__o v73; // [xsp+18h] [xbp-38h] BYREF
  System_Nullable_uint__o v74; // 0:x0.8

  v73 = crc;
  if ( (byte_4350489 & 1) == 0 )
  {
    sub_B70694(&ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo);
    sub_B70694(&byte___TypeInfo);
    sub_B70694(&System_Convert_TypeInfo);
    sub_B70694(&Crc32_TypeInfo);
    sub_B70694(&System_Security_Cryptography_CryptoStream_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_IO_MemoryStream_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_System_Nullable_uint__get_HasValue__);
    sub_B70694(&Method_System_Nullable_uint__get_Value__);
    sub_B70694(&System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
    byte_4350489 = 1;
  }
  v72 = 0;
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v7 = System_Convert__FromBase64String(str, 0LL);
  v8 = (*(_QWORD *)&crc & 0xFF00000000LL) == 0;
  v9 = v7;
  if ( !v8 )
  {
    if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v10 = Crc32__Compute(v9, 0LL);
    v74 = (System_Nullable_uint__o)&v73;
    if ( v10 != System_Nullable_uint___get_Value(
                  v74,
                  (const MethodInfo_243B03C *)Method_System_Nullable_uint__get_Value__) )
    {
      v67 = sub_B70698(&System_IO_IOException_TypeInfo);
      v68 = (System_IO_IOException_o *)sub_B70764(v67);
      v69 = (System_String_o *)sub_B70698(&StringLiteral_9115/*"MdcStr:Dc Crc Error"*/);
      System_IO_IOException___ctor_39273636(v68, v69, 0LL);
      v70 = sub_B70698(&Method_MdcStr_Dc__);
      sub_B70738(v68, v70);
    }
  }
  if ( eorData )
  {
    Mk = (_DWORD *)sub_B706AC(byte___TypeInfo, 4LL);
    if ( !Mk )
      goto LABEL_88;
    v13 = Mk[6];
    if ( !v13 )
      goto LABEL_87;
    *((_BYTE *)Mk + 32) = eorData;
    if ( v13 == 1 )
      goto LABEL_87;
    *((_BYTE *)Mk + 33) = BYTE1(eorData);
    if ( v13 <= 2 )
      goto LABEL_87;
    *((_BYTE *)Mk + 34) = BYTE2(eorData);
    if ( v13 == 3 )
      goto LABEL_87;
    *((_BYTE *)Mk + 35) = HIBYTE(eorData);
    if ( !v9 )
LABEL_88:
      sub_B7076C(Mk, v12);
    if ( (int)*(_QWORD *)&v9->max_length >= 1 )
    {
      v14 = (unsigned int)*(_QWORD *)&v9->max_length;
      v15 = 0LL;
      while ( v15 < v14 )
      {
        v16 = v15 & 3;
        if ( (unsigned int)v16 >= Mk[6] )
          break;
        v9->m_Items[v15++ + 4] ^= *((_BYTE *)Mk + v16 + 32);
        if ( (__int64)v15 >= (int)v14 )
          goto LABEL_23;
      }
LABEL_87:
      v66 = sub_B70798(Mk);
      sub_B70738(v66, 0LL);
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
  v18 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, _DWORD *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
          UTF8,
          Mk,
          UTF8->klass->vtable._19_GetBytes.methodPtr);
  v19 = System_Text_Encoding__get_UTF8(0LL);
  Mk = NetworkManager__GetCv(0LL);
  if ( !v19 )
    goto LABEL_88;
  v20 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, _DWORD *, Il2CppMethodPointer))v19->klass->vtable._18_GetBytes.method)(
          v19,
          Mk,
          v19->klass->vtable._19_GetBytes.methodPtr);
  v21 = (System_Security_Cryptography_TripleDESCryptoServiceProvider_o *)sub_B70764(System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_TripleDESCryptoServiceProvider___ctor(v21, 0LL);
  v22 = (System_IO_MemoryStream_o *)sub_B70764(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v22, 0LL);
  if ( !v21 )
    sub_B7076C(v23, v24);
  v25 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_TripleDESCryptoServiceProvider_o *, __int64, __int64, Il2CppMethodPointer))v21->klass->vtable._25_CreateDecryptor.method)(
                                                             v21,
                                                             v18,
                                                             v20,
                                                             v21->klass->vtable._26_GenerateKey.methodPtr);
  v26 = (System_Security_Cryptography_CryptoStream_o *)sub_B70764(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v26, (System_IO_Stream_o *)v22, v25, 1, 0LL);
  if ( !v9 )
    sub_B7076C(v27, v28);
  if ( !v26 )
    sub_B7076C(v27, v28);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))v26->klass->vtable._32_Write.method)(
    v26,
    v9,
    0LL,
    v9->max_length,
    v26->klass->vtable._33_WriteByte.methodPtr);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, Il2CppMethodPointer))v26->klass->vtable._18_Close.method)(
    v26,
    v26->klass->vtable._19_Dispose.methodPtr);
  v71[v72++] = 219;
  klass = v26->klass;
  if ( *(_WORD *)&v26->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v30;
      p_offset += 4;
      if ( v30 >= *(unsigned __int16 *)&v26->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v32 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_35:
    v32 = sub_B08590(v26, System_IDisposable_TypeInfo, 0LL);
  }
  v33 = (*(__int64 (__fastcall **)(System_Security_Cryptography_CryptoStream_o *, _QWORD))v32)(
          v26,
          *(_QWORD *)(v32 + 8));
  if ( v72 && v71[v72 - 1] == 219 )
    --v72;
  if ( !v22 )
    sub_B7076C(v33, v34);
  v35 = (System_Byte_array *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v22->klass->vtable._37_ToArray.method)(
                               v22,
                               v22->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v22->klass->vtable._18_Close.method)(
    v22,
    v22->klass->vtable._19_Dispose.methodPtr);
  v71[v72++] = 249;
  v36 = v22->klass;
  if ( *(_WORD *)&v22->klass->_2.bitflags1 )
  {
    v37 = 0LL;
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      ++v37;
      v38 += 4;
      if ( v37 >= *(unsigned __int16 *)&v22->klass->_2.bitflags1 )
        goto LABEL_45;
    }
    v39 = (__int64)(&v36->vtable._0_Equals.method + 2 * *v38);
  }
  else
  {
LABEL_45:
    v39 = sub_B08590(v22, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v39)(v22, *(_QWORD *)(v39 + 8));
  if ( v72 && v71[v72 - 1] == 249 )
    --v72;
  v40 = (System_IO_MemoryStream_o *)sub_B70764(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v40, 0LL);
  v41 = (System_IO_MemoryStream_o *)sub_B70764(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_45610760(v41, v35, 0LL);
  v42 = (ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *)sub_B70764(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo);
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream___ctor(v42, (System_IO_Stream_o *)v41, 0LL);
  v43 = sub_B706AC(byte___TypeInfo, 0x4000LL);
  v45 = v43;
  if ( !v43 )
    sub_B7076C(0LL, v44);
  if ( !v42 )
    sub_B7076C(v43, v44);
  while ( 1 )
  {
    v46 = ((__int64 (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v42->klass->vtable._30_Read.method)(
            v42,
            v45,
            0LL,
            *(unsigned int *)(v45 + 24),
            v42->klass->vtable._31_ReadByte.methodPtr);
    if ( (int)v46 < 1 )
      break;
    if ( !v40 )
      sub_B7076C(v46, v47);
    ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v40->klass->vtable._32_Write.method)(
      v40,
      v45,
      0LL,
      (unsigned int)v46,
      v40->klass->vtable._33_WriteByte.methodPtr);
  }
  ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, Il2CppMethodPointer))v42->klass->vtable._18_Close.method)(
    v42,
    v42->klass->vtable._19_Dispose.methodPtr);
  v71[v72++] = 341;
  v48 = v42->klass;
  if ( *(_WORD *)&v42->klass->_2.bitflags1 )
  {
    v49 = 0LL;
    v50 = &v48->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
    {
      ++v49;
      v50 += 4;
      if ( v49 >= *(unsigned __int16 *)&v42->klass->_2.bitflags1 )
        goto LABEL_59;
    }
    v51 = (__int64)(&v48->vtable._0_Equals.method + 2 * *v50);
  }
  else
  {
LABEL_59:
    v51 = sub_B08590(v42, System_IDisposable_TypeInfo, 0LL);
  }
  v52 = (*(__int64 (__fastcall **)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, _QWORD))v51)(
          v42,
          *(_QWORD *)(v51 + 8));
  if ( v72 && v71[v72 - 1] == 341 )
    --v72;
  if ( !v41 )
    sub_B7076C(v52, v53);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v41->klass->vtable._18_Close.method)(
    v41,
    v41->klass->vtable._19_Dispose.methodPtr);
  v71[v72++] = 362;
  v54 = v41->klass;
  if ( *(_WORD *)&v41->klass->_2.bitflags1 )
  {
    v55 = 0LL;
    v56 = &v54->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
    {
      ++v55;
      v56 += 4;
      if ( v55 >= *(unsigned __int16 *)&v41->klass->_2.bitflags1 )
        goto LABEL_69;
    }
    v57 = (__int64)(&v54->vtable._0_Equals.method + 2 * *v56);
  }
  else
  {
LABEL_69:
    v57 = sub_B08590(v41, System_IDisposable_TypeInfo, 0LL);
  }
  v58 = (*(__int64 (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v57)(v41, *(_QWORD *)(v57 + 8));
  if ( v72 && v71[v72 - 1] == 362 )
    --v72;
  if ( !v40 )
    sub_B7076C(v58, v59);
  v60 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v40->klass->vtable._37_ToArray.method)(
          v40,
          v40->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v40->klass->vtable._18_Close.method)(
    v40,
    v40->klass->vtable._19_Dispose.methodPtr);
  v71[v72++] = 392;
  v61 = v40->klass;
  if ( *(_WORD *)&v40->klass->_2.bitflags1 )
  {
    v62 = 0LL;
    v63 = &v61->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
    {
      ++v62;
      v63 += 4;
      if ( v62 >= *(unsigned __int16 *)&v40->klass->_2.bitflags1 )
        goto LABEL_79;
    }
    v64 = (__int64)(&v61->vtable._0_Equals.method + 2 * *v63);
  }
  else
  {
LABEL_79:
    v64 = sub_B08590(v40, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v64)(v40, *(_QWORD *)(v64 + 8));
  if ( v72 && v71[v72 - 1] == 392 )
    --v72;
  Mk = System_Text_Encoding__get_UTF8(0LL);
  if ( !Mk )
    goto LABEL_88;
  return (System_String_o *)(*(__int64 (__fastcall **)(_DWORD *, __int64, _QWORD))(*(_QWORD *)Mk + 856LL))(
                              Mk,
                              v60,
                              *(_QWORD *)(*(_QWORD *)Mk + 864LL));
}


System_String_o *__fastcall MdcStr__Ec(
        System_Nullable_uint__o *crc,
        System_String_o *str,
        uint32_t eorData,
        const MethodInfo *method)
{
  unsigned int *UTF8; // x0
  __int64 v8; // x1
  __int64 v9; // x24
  System_Text_Encoding_o *v10; // x21
  __int64 v11; // x22
  System_Text_Encoding_o *v12; // x21
  __int64 v13; // x23
  System_Security_Cryptography_TripleDESCryptoServiceProvider_o *v14; // x25
  System_IO_MemoryStream_o *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  System_Security_Cryptography_ICryptoTransform_o *v18; // x23
  System_Security_Cryptography_CryptoStream_o *v19; // x22
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *v20; // x23
  __int64 v21; // x0
  __int64 v22; // x1
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_c *klass; // x8
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  int v29; // w25
  System_Security_Cryptography_CryptoStream_c *v30; // x8
  unsigned __int64 v31; // x10
  int32_t *v32; // x11
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x1
  int v36; // w8
  __int64 v37; // x22
  int v38; // w25
  System_IO_MemoryStream_c *v39; // x8
  unsigned __int64 v40; // x10
  int32_t *v41; // x11
  __int64 v42; // x0
  unsigned int v43; // w8
  unsigned __int64 v44; // x9
  unsigned __int64 v45; // x8
  __int64 v46; // x12
  uint32_t v47; // w1
  __int64 v49; // x0
  int v50[3]; // [xsp+0h] [xbp-50h]
  int v51; // [xsp+Ch] [xbp-44h]
  System_Nullable_uint__o v52; // [xsp+18h] [xbp-38h] BYREF
  System_Nullable_uint__o v53; // 0:x0.8

  if ( (byte_4350488 & 1) == 0 )
  {
    sub_B70694(&ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo);
    sub_B70694(&byte___TypeInfo);
    sub_B70694(&System_Convert_TypeInfo);
    sub_B70694(&Crc32_TypeInfo);
    sub_B70694(&System_Security_Cryptography_CryptoStream_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_IO_MemoryStream_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_System_Nullable_uint___ctor__);
    sub_B70694(&Method_System_Nullable_uint__get_HasValue__);
    sub_B70694(&System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
    byte_4350488 = 1;
  }
  v51 = 0;
  UTF8 = (unsigned int *)System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    goto LABEL_62;
  v9 = (*(__int64 (__fastcall **)(unsigned int *, System_String_o *, _QWORD))(*(_QWORD *)UTF8 + 600LL))(
         UTF8,
         str,
         *(_QWORD *)(*(_QWORD *)UTF8 + 608LL));
  v10 = System_Text_Encoding__get_UTF8(0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UTF8 = (unsigned int *)NetworkManager__GetMk(0LL);
  if ( !v10 )
    goto LABEL_62;
  v11 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, unsigned int *, Il2CppMethodPointer))v10->klass->vtable._18_GetBytes.method)(
          v10,
          UTF8,
          v10->klass->vtable._19_GetBytes.methodPtr);
  v12 = System_Text_Encoding__get_UTF8(0LL);
  UTF8 = (unsigned int *)NetworkManager__GetCv(0LL);
  if ( !v12 )
    goto LABEL_62;
  v13 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, unsigned int *, Il2CppMethodPointer))v12->klass->vtable._18_GetBytes.method)(
          v12,
          UTF8,
          v12->klass->vtable._19_GetBytes.methodPtr);
  v14 = (System_Security_Cryptography_TripleDESCryptoServiceProvider_o *)sub_B70764(System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_TripleDESCryptoServiceProvider___ctor(v14, 0LL);
  v15 = (System_IO_MemoryStream_o *)sub_B70764(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v15, 0LL);
  if ( !v14 )
    sub_B7076C(v16, v17);
  v18 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_TripleDESCryptoServiceProvider_o *, __int64, __int64, Il2CppMethodPointer))v14->klass->vtable._23_CreateEncryptor.method)(
                                                             v14,
                                                             v11,
                                                             v13,
                                                             v14->klass->vtable._24_CreateDecryptor.methodPtr);
  v19 = (System_Security_Cryptography_CryptoStream_o *)sub_B70764(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v19, (System_IO_Stream_o *)v15, v18, 1, 0LL);
  v20 = (ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *)sub_B70764(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo);
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream___ctor(v20, (System_IO_Stream_o *)v19, 0LL);
  if ( !v9 )
    sub_B7076C(v21, v22);
  if ( !v20 )
    sub_B7076C(v21, v22);
  ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v20->klass->vtable._32_Write.method)(
    v20,
    v9,
    0LL,
    *(unsigned int *)(v9 + 24),
    v20->klass->vtable._33_WriteByte.methodPtr);
  ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, Il2CppMethodPointer))v20->klass->vtable._18_Close.method)(
    v20,
    v20->klass->vtable._19_Dispose.methodPtr);
  v50[0] = 117;
  v51 = 1;
  klass = v20->klass;
  if ( *(_WORD *)&v20->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v24;
      p_offset += 4;
      if ( v24 >= *(unsigned __int16 *)&v20->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_16:
    v26 = sub_B08590(v20, System_IDisposable_TypeInfo, 0LL);
  }
  v27 = (*(__int64 (__fastcall **)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, _QWORD))v26)(
          v20,
          *(_QWORD *)(v26 + 8));
  v51 = 0;
  if ( !v19 )
    sub_B7076C(v27, v28);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, Il2CppMethodPointer))v19->klass->vtable._18_Close.method)(
    v19,
    v19->klass->vtable._19_Dispose.methodPtr);
  v50[0] = 138;
  v29 = ++v51;
  v30 = v19->klass;
  if ( *(_WORD *)&v19->klass->_2.bitflags1 )
  {
    v31 = 0LL;
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      ++v31;
      v32 += 4;
      if ( v31 >= *(unsigned __int16 *)&v19->klass->_2.bitflags1 )
        goto LABEL_25;
    }
    v33 = (__int64)(&v30->vtable._0_Equals.method + 2 * *v32);
  }
  else
  {
LABEL_25:
    v33 = sub_B08590(v19, System_IDisposable_TypeInfo, 0LL);
  }
  v34 = (*(__int64 (__fastcall **)(System_Security_Cryptography_CryptoStream_o *, _QWORD))v33)(
          v19,
          *(_QWORD *)(v33 + 8));
  if ( v29 )
  {
    v36 = v29 - 1;
    if ( v50[v29 - 1] == 138 )
    {
      --v29;
      v51 = v36;
    }
  }
  if ( !v15 )
    sub_B7076C(v34, v35);
  v37 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v15->klass->vtable._37_ToArray.method)(
          v15,
          v15->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v15->klass->vtable._18_Close.method)(
    v15,
    v15->klass->vtable._19_Dispose.methodPtr);
  v50[v29] = 168;
  v38 = ++v51;
  v39 = v15->klass;
  if ( *(_WORD *)&v15->klass->_2.bitflags1 )
  {
    v40 = 0LL;
    v41 = &v39->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      ++v40;
      v41 += 4;
      if ( v40 >= *(unsigned __int16 *)&v15->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v42 = (__int64)(&v39->vtable._0_Equals.method + 2 * *v41);
  }
  else
  {
LABEL_35:
    v42 = sub_B08590(v15, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v42)(v15, *(_QWORD *)(v42 + 8));
  if ( v38 && v50[v38 - 1] == 168 )
    v51 = v38 - 1;
  if ( !eorData )
    goto LABEL_52;
  UTF8 = (unsigned int *)sub_B706AC(byte___TypeInfo, 4LL);
  if ( !UTF8 )
    goto LABEL_62;
  v43 = UTF8[6];
  if ( !v43 )
    goto LABEL_61;
  *((_BYTE *)UTF8 + 32) = eorData;
  if ( v43 == 1 )
    goto LABEL_61;
  *((_BYTE *)UTF8 + 33) = BYTE1(eorData);
  if ( v43 <= 2 )
    goto LABEL_61;
  *((_BYTE *)UTF8 + 34) = BYTE2(eorData);
  if ( v43 == 3 )
    goto LABEL_61;
  *((_BYTE *)UTF8 + 35) = HIBYTE(eorData);
  if ( !v37 )
LABEL_62:
    sub_B7076C(UTF8, v8);
  if ( (int)*(_QWORD *)(v37 + 24) >= 1 )
  {
    v44 = (unsigned int)*(_QWORD *)(v37 + 24);
    v45 = 0LL;
    while ( v45 < v44 )
    {
      v46 = v45 & 3;
      if ( (unsigned int)v46 >= UTF8[6] )
        break;
      *(_BYTE *)(v37 + 32 + v45++) ^= *((_BYTE *)UTF8 + v46 + 32);
      if ( (__int64)v45 >= (int)v44 )
        goto LABEL_52;
    }
LABEL_61:
    v49 = sub_B70798(UTF8);
    sub_B70738(v49, 0LL);
  }
LABEL_52:
  if ( crc->fields.has_value )
  {
    if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v47 = Crc32__Compute((System_Byte_array *)v37, 0LL);
    v53 = (System_Nullable_uint__o)&v52;
    v52 = 0LL;
    System_Nullable_uint____ctor(v53, v47, (const MethodInfo_243B024 *)Method_System_Nullable_uint___ctor__);
    *crc = v52;
  }
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  return System_Convert__ToBase64String((System_Byte_array *)v37, 0LL);
}