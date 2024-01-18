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
  __int64 v22; // x1
  unsigned int v23; // w8
  unsigned __int64 v24; // x9
  unsigned __int64 v25; // x8
  __int64 v26; // x12
  System_Text_Encoding_o *UTF8; // x20
  __int64 v28; // x21
  System_Text_Encoding_o *v29; // x20
  __int64 v30; // x22
  System_Security_Cryptography_TripleDESCryptoServiceProvider_o *v31; // x23
  System_IO_MemoryStream_o *v32; // x20
  __int64 v33; // x0
  __int64 v34; // x1
  System_Security_Cryptography_ICryptoTransform_o *v35; // x22
  System_Security_Cryptography_CryptoStream_o *v36; // x21
  __int64 v37; // x0
  __int64 v38; // x1
  __int64 v39; // x3
  System_Security_Cryptography_CryptoStream_c *klass; // x8
  unsigned __int64 v41; // x10
  int32_t *p_offset; // x11
  __int64 v43; // x0
  __int64 v44; // x0
  __int64 v45; // x1
  System_Byte_array *v46; // x19
  __int64 v47; // x3
  System_IO_MemoryStream_c *v48; // x8
  unsigned __int64 v49; // x10
  int32_t *v50; // x11
  __int64 v51; // x0
  System_IO_MemoryStream_o *v52; // x20
  System_IO_MemoryStream_o *v53; // x21
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *v54; // x22
  __int64 v55; // x0
  __int64 v56; // x1
  __int64 v57; // x23
  __int64 v58; // x0
  __int64 v59; // x1
  __int64 v60; // x3
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_c *v61; // x8
  unsigned __int64 v62; // x10
  int32_t *v63; // x11
  __int64 v64; // x0
  __int64 v65; // x0
  __int64 v66; // x1
  __int64 v67; // x3
  System_IO_MemoryStream_c *v68; // x8
  unsigned __int64 v69; // x10
  int32_t *v70; // x11
  __int64 v71; // x0
  __int64 v72; // x0
  __int64 v73; // x1
  __int64 v74; // x21
  __int64 v75; // x3
  System_IO_MemoryStream_c *v76; // x8
  unsigned __int64 v77; // x10
  int32_t *v78; // x11
  __int64 v79; // x0
  __int64 v81; // x0
  __int64 v82; // x0
  System_IO_IOException_o *v83; // x19
  System_String_o *v84; // x0
  __int64 v85; // x0
  _DWORD v86[5]; // [xsp+0h] [xbp-50h]
  int v87; // [xsp+14h] [xbp-3Ch]
  System_Nullable_uint__o v88; // [xsp+18h] [xbp-38h] BYREF
  System_Nullable_uint__o v89; // 0:x0.8

  v88 = crc;
  if ( (byte_41881D2 & 1) == 0 )
  {
    sub_B2C35C(&ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo, *(_QWORD *)&eorData);
    sub_B2C35C(&byte___TypeInfo, v7);
    sub_B2C35C(&System_Convert_TypeInfo, v8);
    sub_B2C35C(&Crc32_TypeInfo, v9);
    sub_B2C35C(&System_Security_Cryptography_CryptoStream_TypeInfo, v10);
    sub_B2C35C(&System_IDisposable_TypeInfo, v11);
    sub_B2C35C(&System_IO_MemoryStream_TypeInfo, v12);
    sub_B2C35C(&NetworkManager_TypeInfo, v13);
    sub_B2C35C(&Method_System_Nullable_uint__get_HasValue__, v14);
    sub_B2C35C(&Method_System_Nullable_uint__get_Value__, v15);
    sub_B2C35C(&System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo, v16);
    byte_41881D2 = 1;
  }
  v87 = 0;
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
    v89 = (System_Nullable_uint__o)&v88;
    if ( v20 != System_Nullable_uint___get_Value(
                  v89,
                  (const MethodInfo_2154AF4 *)Method_System_Nullable_uint__get_Value__) )
    {
      v82 = sub_B2C360(&System_IO_IOException_TypeInfo);
      v83 = (System_IO_IOException_o *)sub_B2C42C(v82);
      v84 = (System_String_o *)sub_B2C360(&StringLiteral_9006/*"MdcStr:Dc Crc Error"*/);
      System_IO_IOException___ctor_38371192(v83, v84, 0LL);
      v85 = sub_B2C360(&Method_MdcStr_Dc__);
      sub_B2C400(v83, v85);
    }
  }
  if ( eorData )
  {
    Mk = (_DWORD *)sub_B2C374(byte___TypeInfo, 4LL);
    if ( !Mk )
      goto LABEL_88;
    v23 = Mk[6];
    if ( !v23 )
      goto LABEL_87;
    *((_BYTE *)Mk + 32) = eorData;
    if ( v23 == 1 )
      goto LABEL_87;
    *((_BYTE *)Mk + 33) = BYTE1(eorData);
    if ( v23 <= 2 )
      goto LABEL_87;
    *((_BYTE *)Mk + 34) = BYTE2(eorData);
    if ( v23 == 3 )
      goto LABEL_87;
    *((_BYTE *)Mk + 35) = HIBYTE(eorData);
    if ( !v19 )
LABEL_88:
      sub_B2C434(Mk, v22);
    if ( (int)*(_QWORD *)&v19->max_length >= 1 )
    {
      v24 = (unsigned int)*(_QWORD *)&v19->max_length;
      v25 = 0LL;
      while ( v25 < v24 )
      {
        v26 = v25 & 3;
        if ( (unsigned int)v26 >= Mk[6] )
          break;
        v19->m_Items[v25++ + 4] ^= *((_BYTE *)Mk + v26 + 32);
        if ( (__int64)v25 >= (int)v24 )
          goto LABEL_23;
      }
LABEL_87:
      v81 = sub_B2C460(Mk);
      sub_B2C400(v81, 0LL);
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
  v28 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, _DWORD *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
          UTF8,
          Mk,
          UTF8->klass->vtable._19_GetBytes.methodPtr);
  v29 = System_Text_Encoding__get_UTF8(0LL);
  Mk = NetworkManager__GetCv(0LL);
  if ( !v29 )
    goto LABEL_88;
  v30 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, _DWORD *, Il2CppMethodPointer))v29->klass->vtable._18_GetBytes.method)(
          v29,
          Mk,
          v29->klass->vtable._19_GetBytes.methodPtr);
  v31 = (System_Security_Cryptography_TripleDESCryptoServiceProvider_o *)sub_B2C42C(System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_TripleDESCryptoServiceProvider___ctor(v31, 0LL);
  v32 = (System_IO_MemoryStream_o *)sub_B2C42C(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v32, 0LL);
  if ( !v31 )
    sub_B2C434(v33, v34);
  v35 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_TripleDESCryptoServiceProvider_o *, __int64, __int64, Il2CppMethodPointer))v31->klass->vtable._25_CreateDecryptor.method)(
                                                             v31,
                                                             v28,
                                                             v30,
                                                             v31->klass->vtable._26_GenerateKey.methodPtr);
  v36 = (System_Security_Cryptography_CryptoStream_o *)sub_B2C42C(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v36, (System_IO_Stream_o *)v32, v35, 1, 0LL);
  if ( !v19 )
    sub_B2C434(v37, v38);
  if ( !v36 )
    sub_B2C434(v37, v38);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))v36->klass->vtable._32_Write.method)(
    v36,
    v19,
    0LL,
    v19->max_length,
    v36->klass->vtable._33_WriteByte.methodPtr);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, Il2CppMethodPointer))v36->klass->vtable._18_Close.method)(
    v36,
    v36->klass->vtable._19_Dispose.methodPtr);
  v86[v87++] = 219;
  klass = v36->klass;
  if ( *(_WORD *)&v36->klass->_2.bitflags1 )
  {
    v41 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v41;
      p_offset += 4;
      if ( v41 >= *(unsigned __int16 *)&v36->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v43 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_35:
    v43 = sub_AC5258(v36, System_IDisposable_TypeInfo, 0LL, v39);
  }
  v44 = (*(__int64 (__fastcall **)(System_Security_Cryptography_CryptoStream_o *, _QWORD))v43)(
          v36,
          *(_QWORD *)(v43 + 8));
  if ( v87 && v86[v87 - 1] == 219 )
    --v87;
  if ( !v32 )
    sub_B2C434(v44, v45);
  v46 = (System_Byte_array *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v32->klass->vtable._37_ToArray.method)(
                               v32,
                               v32->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v32->klass->vtable._18_Close.method)(
    v32,
    v32->klass->vtable._19_Dispose.methodPtr);
  v86[v87++] = 249;
  v48 = v32->klass;
  if ( *(_WORD *)&v32->klass->_2.bitflags1 )
  {
    v49 = 0LL;
    v50 = &v48->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
    {
      ++v49;
      v50 += 4;
      if ( v49 >= *(unsigned __int16 *)&v32->klass->_2.bitflags1 )
        goto LABEL_45;
    }
    v51 = (__int64)(&v48->vtable._0_Equals.method + 2 * *v50);
  }
  else
  {
LABEL_45:
    v51 = sub_AC5258(v32, System_IDisposable_TypeInfo, 0LL, v47);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v51)(v32, *(_QWORD *)(v51 + 8));
  if ( v87 && v86[v87 - 1] == 249 )
    --v87;
  v52 = (System_IO_MemoryStream_o *)sub_B2C42C(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v52, 0LL);
  v53 = (System_IO_MemoryStream_o *)sub_B2C42C(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_45022032(v53, v46, 0LL);
  v54 = (ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *)sub_B2C42C(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo);
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream___ctor(v54, (System_IO_Stream_o *)v53, 0LL);
  v55 = sub_B2C374(byte___TypeInfo, 0x4000LL);
  v57 = v55;
  if ( !v55 )
    sub_B2C434(0LL, v56);
  if ( !v54 )
    sub_B2C434(v55, v56);
  while ( 1 )
  {
    v58 = ((__int64 (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v54->klass->vtable._30_Read.method)(
            v54,
            v57,
            0LL,
            *(unsigned int *)(v57 + 24),
            v54->klass->vtable._31_ReadByte.methodPtr);
    if ( (int)v58 < 1 )
      break;
    if ( !v52 )
      sub_B2C434(v58, v59);
    ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v52->klass->vtable._32_Write.method)(
      v52,
      v57,
      0LL,
      (unsigned int)v58,
      v52->klass->vtable._33_WriteByte.methodPtr);
  }
  ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, Il2CppMethodPointer))v54->klass->vtable._18_Close.method)(
    v54,
    v54->klass->vtable._19_Dispose.methodPtr);
  v86[v87++] = 341;
  v61 = v54->klass;
  if ( *(_WORD *)&v54->klass->_2.bitflags1 )
  {
    v62 = 0LL;
    v63 = &v61->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
    {
      ++v62;
      v63 += 4;
      if ( v62 >= *(unsigned __int16 *)&v54->klass->_2.bitflags1 )
        goto LABEL_59;
    }
    v64 = (__int64)(&v61->vtable._0_Equals.method + 2 * *v63);
  }
  else
  {
LABEL_59:
    v64 = sub_AC5258(v54, System_IDisposable_TypeInfo, 0LL, v60);
  }
  v65 = (*(__int64 (__fastcall **)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, _QWORD))v64)(
          v54,
          *(_QWORD *)(v64 + 8));
  if ( v87 && v86[v87 - 1] == 341 )
    --v87;
  if ( !v53 )
    sub_B2C434(v65, v66);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v53->klass->vtable._18_Close.method)(
    v53,
    v53->klass->vtable._19_Dispose.methodPtr);
  v86[v87++] = 362;
  v68 = v53->klass;
  if ( *(_WORD *)&v53->klass->_2.bitflags1 )
  {
    v69 = 0LL;
    v70 = &v68->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v70 - 1) != System_IDisposable_TypeInfo )
    {
      ++v69;
      v70 += 4;
      if ( v69 >= *(unsigned __int16 *)&v53->klass->_2.bitflags1 )
        goto LABEL_69;
    }
    v71 = (__int64)(&v68->vtable._0_Equals.method + 2 * *v70);
  }
  else
  {
LABEL_69:
    v71 = sub_AC5258(v53, System_IDisposable_TypeInfo, 0LL, v67);
  }
  v72 = (*(__int64 (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v71)(v53, *(_QWORD *)(v71 + 8));
  if ( v87 && v86[v87 - 1] == 362 )
    --v87;
  if ( !v52 )
    sub_B2C434(v72, v73);
  v74 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v52->klass->vtable._37_ToArray.method)(
          v52,
          v52->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v52->klass->vtable._18_Close.method)(
    v52,
    v52->klass->vtable._19_Dispose.methodPtr);
  v86[v87++] = 392;
  v76 = v52->klass;
  if ( *(_WORD *)&v52->klass->_2.bitflags1 )
  {
    v77 = 0LL;
    v78 = &v76->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v78 - 1) != System_IDisposable_TypeInfo )
    {
      ++v77;
      v78 += 4;
      if ( v77 >= *(unsigned __int16 *)&v52->klass->_2.bitflags1 )
        goto LABEL_79;
    }
    v79 = (__int64)(&v76->vtable._0_Equals.method + 2 * *v78);
  }
  else
  {
LABEL_79:
    v79 = sub_AC5258(v52, System_IDisposable_TypeInfo, 0LL, v75);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v79)(v52, *(_QWORD *)(v79 + 8));
  if ( v87 && v86[v87 - 1] == 392 )
    --v87;
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
  __int64 v18; // x1
  __int64 v19; // x24
  System_Text_Encoding_o *v20; // x21
  __int64 v21; // x22
  System_Text_Encoding_o *v22; // x21
  __int64 v23; // x23
  System_Security_Cryptography_TripleDESCryptoServiceProvider_o *v24; // x25
  System_IO_MemoryStream_o *v25; // x21
  __int64 v26; // x0
  __int64 v27; // x1
  System_Security_Cryptography_ICryptoTransform_o *v28; // x23
  System_Security_Cryptography_CryptoStream_o *v29; // x22
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *v30; // x23
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x3
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_c *klass; // x8
  unsigned __int64 v35; // x10
  int32_t *p_offset; // x11
  __int64 v37; // x0
  __int64 v38; // x0
  __int64 v39; // x1
  __int64 v40; // x3
  int v41; // w25
  System_Security_Cryptography_CryptoStream_c *v42; // x8
  unsigned __int64 v43; // x10
  int32_t *v44; // x11
  __int64 v45; // x0
  __int64 v46; // x0
  __int64 v47; // x1
  int v48; // w8
  __int64 v49; // x22
  __int64 v50; // x3
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

  if ( (byte_41881D1 & 1) == 0 )
  {
    sub_B2C35C(&ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo, str);
    sub_B2C35C(&byte___TypeInfo, v7);
    sub_B2C35C(&System_Convert_TypeInfo, v8);
    sub_B2C35C(&Crc32_TypeInfo, v9);
    sub_B2C35C(&System_Security_Cryptography_CryptoStream_TypeInfo, v10);
    sub_B2C35C(&System_IDisposable_TypeInfo, v11);
    sub_B2C35C(&System_IO_MemoryStream_TypeInfo, v12);
    sub_B2C35C(&NetworkManager_TypeInfo, v13);
    sub_B2C35C(&Method_System_Nullable_uint___ctor__, v14);
    sub_B2C35C(&Method_System_Nullable_uint__get_HasValue__, v15);
    sub_B2C35C(&System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo, v16);
    byte_41881D1 = 1;
  }
  v64 = 0;
  UTF8 = (unsigned int *)System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    goto LABEL_62;
  v19 = (*(__int64 (__fastcall **)(unsigned int *, System_String_o *, _QWORD))(*(_QWORD *)UTF8 + 600LL))(
          UTF8,
          str,
          *(_QWORD *)(*(_QWORD *)UTF8 + 608LL));
  v20 = System_Text_Encoding__get_UTF8(0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UTF8 = (unsigned int *)NetworkManager__GetMk(0LL);
  if ( !v20 )
    goto LABEL_62;
  v21 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, unsigned int *, Il2CppMethodPointer))v20->klass->vtable._18_GetBytes.method)(
          v20,
          UTF8,
          v20->klass->vtable._19_GetBytes.methodPtr);
  v22 = System_Text_Encoding__get_UTF8(0LL);
  UTF8 = (unsigned int *)NetworkManager__GetCv(0LL);
  if ( !v22 )
    goto LABEL_62;
  v23 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, unsigned int *, Il2CppMethodPointer))v22->klass->vtable._18_GetBytes.method)(
          v22,
          UTF8,
          v22->klass->vtable._19_GetBytes.methodPtr);
  v24 = (System_Security_Cryptography_TripleDESCryptoServiceProvider_o *)sub_B2C42C(System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_TripleDESCryptoServiceProvider___ctor(v24, 0LL);
  v25 = (System_IO_MemoryStream_o *)sub_B2C42C(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v25, 0LL);
  if ( !v24 )
    sub_B2C434(v26, v27);
  v28 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_TripleDESCryptoServiceProvider_o *, __int64, __int64, Il2CppMethodPointer))v24->klass->vtable._23_CreateEncryptor.method)(
                                                             v24,
                                                             v21,
                                                             v23,
                                                             v24->klass->vtable._24_CreateDecryptor.methodPtr);
  v29 = (System_Security_Cryptography_CryptoStream_o *)sub_B2C42C(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v29, (System_IO_Stream_o *)v25, v28, 1, 0LL);
  v30 = (ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *)sub_B2C42C(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo);
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream___ctor(v30, (System_IO_Stream_o *)v29, 0LL);
  if ( !v19 )
    sub_B2C434(v31, v32);
  if ( !v30 )
    sub_B2C434(v31, v32);
  ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v30->klass->vtable._32_Write.method)(
    v30,
    v19,
    0LL,
    *(unsigned int *)(v19 + 24),
    v30->klass->vtable._33_WriteByte.methodPtr);
  ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, Il2CppMethodPointer))v30->klass->vtable._18_Close.method)(
    v30,
    v30->klass->vtable._19_Dispose.methodPtr);
  v63[0] = 117;
  v64 = 1;
  klass = v30->klass;
  if ( *(_WORD *)&v30->klass->_2.bitflags1 )
  {
    v35 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v35;
      p_offset += 4;
      if ( v35 >= *(unsigned __int16 *)&v30->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v37 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_16:
    v37 = sub_AC5258(v30, System_IDisposable_TypeInfo, 0LL, v33);
  }
  v38 = (*(__int64 (__fastcall **)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, _QWORD))v37)(
          v30,
          *(_QWORD *)(v37 + 8));
  v64 = 0;
  if ( !v29 )
    sub_B2C434(v38, v39);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, Il2CppMethodPointer))v29->klass->vtable._18_Close.method)(
    v29,
    v29->klass->vtable._19_Dispose.methodPtr);
  v63[0] = 138;
  v41 = ++v64;
  v42 = v29->klass;
  if ( *(_WORD *)&v29->klass->_2.bitflags1 )
  {
    v43 = 0LL;
    v44 = &v42->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
    {
      ++v43;
      v44 += 4;
      if ( v43 >= *(unsigned __int16 *)&v29->klass->_2.bitflags1 )
        goto LABEL_25;
    }
    v45 = (__int64)(&v42->vtable._0_Equals.method + 2 * *v44);
  }
  else
  {
LABEL_25:
    v45 = sub_AC5258(v29, System_IDisposable_TypeInfo, 0LL, v40);
  }
  v46 = (*(__int64 (__fastcall **)(System_Security_Cryptography_CryptoStream_o *, _QWORD))v45)(
          v29,
          *(_QWORD *)(v45 + 8));
  if ( v41 )
  {
    v48 = v41 - 1;
    if ( v63[v41 - 1] == 138 )
    {
      --v41;
      v64 = v48;
    }
  }
  if ( !v25 )
    sub_B2C434(v46, v47);
  v49 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v25->klass->vtable._37_ToArray.method)(
          v25,
          v25->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v25->klass->vtable._18_Close.method)(
    v25,
    v25->klass->vtable._19_Dispose.methodPtr);
  v63[v41] = 168;
  v51 = ++v64;
  v52 = v25->klass;
  if ( *(_WORD *)&v25->klass->_2.bitflags1 )
  {
    v53 = 0LL;
    v54 = &v52->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
    {
      ++v53;
      v54 += 4;
      if ( v53 >= *(unsigned __int16 *)&v25->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v55 = (__int64)(&v52->vtable._0_Equals.method + 2 * *v54);
  }
  else
  {
LABEL_35:
    v55 = sub_AC5258(v25, System_IDisposable_TypeInfo, 0LL, v50);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v55)(v25, *(_QWORD *)(v55 + 8));
  if ( v51 && v63[v51 - 1] == 168 )
    v64 = v51 - 1;
  if ( !eorData )
    goto LABEL_52;
  UTF8 = (unsigned int *)sub_B2C374(byte___TypeInfo, 4LL);
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
  if ( !v49 )
LABEL_62:
    sub_B2C434(UTF8, v18);
  if ( (int)*(_QWORD *)(v49 + 24) >= 1 )
  {
    v57 = (unsigned int)*(_QWORD *)(v49 + 24);
    v58 = 0LL;
    while ( v58 < v57 )
    {
      v59 = v58 & 3;
      if ( (unsigned int)v59 >= UTF8[6] )
        break;
      *(_BYTE *)(v49 + 32 + v58++) ^= *((_BYTE *)UTF8 + v59 + 32);
      if ( (__int64)v58 >= (int)v57 )
        goto LABEL_52;
    }
LABEL_61:
    v62 = sub_B2C460(UTF8);
    sub_B2C400(v62, 0LL);
  }
LABEL_52:
  if ( crc->fields.has_value )
  {
    if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v60 = Crc32__Compute((System_Byte_array *)v49, 0LL);
    v66 = (System_Nullable_uint__o)&v65;
    v65 = 0LL;
    System_Nullable_uint____ctor(v66, v60, (const MethodInfo_2154ADC *)Method_System_Nullable_uint___ctor__);
    *crc = v65;
  }
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  return System_Convert__ToBase64String((System_Byte_array *)v49, 0LL);
}