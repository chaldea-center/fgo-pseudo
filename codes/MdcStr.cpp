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
  __int64 v29; // x3
  System_Security_Cryptography_CryptoStream_c *klass; // x8
  unsigned __int64 v31; // x10
  int32_t *p_offset; // x11
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x1
  System_Byte_array *v36; // x19
  __int64 v37; // x3
  System_IO_MemoryStream_c *v38; // x8
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0
  System_IO_MemoryStream_o *v42; // x20
  System_IO_MemoryStream_o *v43; // x21
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *v44; // x22
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x23
  __int64 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x3
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_c *v51; // x8
  unsigned __int64 v52; // x10
  int32_t *v53; // x11
  __int64 v54; // x0
  __int64 v55; // x0
  __int64 v56; // x1
  __int64 v57; // x3
  System_IO_MemoryStream_c *v58; // x8
  unsigned __int64 v59; // x10
  int32_t *v60; // x11
  __int64 v61; // x0
  __int64 v62; // x0
  __int64 v63; // x1
  __int64 v64; // x21
  __int64 v65; // x3
  System_IO_MemoryStream_c *v66; // x8
  unsigned __int64 v67; // x10
  int32_t *v68; // x11
  __int64 v69; // x0
  __int64 v71; // x0
  __int64 v72; // x0
  System_IO_IOException_o *v73; // x19
  System_String_o *v74; // x0
  __int64 v75; // x0
  _DWORD v76[5]; // [xsp+0h] [xbp-50h]
  int v77; // [xsp+14h] [xbp-3Ch]
  System_Nullable_uint__o v78; // [xsp+18h] [xbp-38h] BYREF
  System_Nullable_uint__o v79; // 0:x0.8

  v78 = crc;
  if ( (byte_42AF9F1 & 1) == 0 )
  {
    sub_B52984(&ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo);
    sub_B52984(&byte___TypeInfo);
    sub_B52984(&System_Convert_TypeInfo);
    sub_B52984(&Crc32_TypeInfo);
    sub_B52984(&System_Security_Cryptography_CryptoStream_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_IO_MemoryStream_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_System_Nullable_uint__get_HasValue__);
    sub_B52984(&Method_System_Nullable_uint__get_Value__);
    sub_B52984(&System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
    byte_42AF9F1 = 1;
  }
  v77 = 0;
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
    v79 = (System_Nullable_uint__o)&v78;
    if ( v10 != System_Nullable_uint___get_Value(
                  v79,
                  (const MethodInfo_21747CC *)Method_System_Nullable_uint__get_Value__) )
    {
      v72 = sub_B52988(&System_IO_IOException_TypeInfo);
      v73 = (System_IO_IOException_o *)sub_B52A54(v72);
      v74 = (System_String_o *)sub_B52988(&StringLiteral_9062/*"MdcStr:Dc Crc Error"*/);
      System_IO_IOException___ctor_39376788(v73, v74, 0LL);
      v75 = sub_B52988(&Method_MdcStr_Dc__);
      sub_B52A28(v73, v75);
    }
  }
  if ( eorData )
  {
    Mk = (_DWORD *)sub_B5299C(byte___TypeInfo, 4LL);
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
      sub_B52A5C(Mk, v12);
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
      v71 = sub_B52A88(Mk);
      sub_B52A28(v71, 0LL);
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
  v21 = (System_Security_Cryptography_TripleDESCryptoServiceProvider_o *)sub_B52A54(System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_TripleDESCryptoServiceProvider___ctor(v21, 0LL);
  v22 = (System_IO_MemoryStream_o *)sub_B52A54(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v22, 0LL);
  if ( !v21 )
    sub_B52A5C(v23, v24);
  v25 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_TripleDESCryptoServiceProvider_o *, __int64, __int64, Il2CppMethodPointer))v21->klass->vtable._25_CreateDecryptor.method)(
                                                             v21,
                                                             v18,
                                                             v20,
                                                             v21->klass->vtable._26_GenerateKey.methodPtr);
  v26 = (System_Security_Cryptography_CryptoStream_o *)sub_B52A54(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v26, (System_IO_Stream_o *)v22, v25, 1, 0LL);
  if ( !v9 )
    sub_B52A5C(v27, v28);
  if ( !v26 )
    sub_B52A5C(v27, v28);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))v26->klass->vtable._32_Write.method)(
    v26,
    v9,
    0LL,
    v9->max_length,
    v26->klass->vtable._33_WriteByte.methodPtr);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, Il2CppMethodPointer))v26->klass->vtable._18_Close.method)(
    v26,
    v26->klass->vtable._19_Dispose.methodPtr);
  v76[v77++] = 219;
  klass = v26->klass;
  if ( *(_WORD *)&v26->klass->_2.bitflags1 )
  {
    v31 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v31;
      p_offset += 4;
      if ( v31 >= *(unsigned __int16 *)&v26->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v33 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_35:
    v33 = sub_AEB880(v26, System_IDisposable_TypeInfo, 0LL, v29);
  }
  v34 = (*(__int64 (__fastcall **)(System_Security_Cryptography_CryptoStream_o *, _QWORD))v33)(
          v26,
          *(_QWORD *)(v33 + 8));
  if ( v77 && v76[v77 - 1] == 219 )
    --v77;
  if ( !v22 )
    sub_B52A5C(v34, v35);
  v36 = (System_Byte_array *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v22->klass->vtable._37_ToArray.method)(
                               v22,
                               v22->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v22->klass->vtable._18_Close.method)(
    v22,
    v22->klass->vtable._19_Dispose.methodPtr);
  v76[v77++] = 249;
  v38 = v22->klass;
  if ( *(_WORD *)&v22->klass->_2.bitflags1 )
  {
    v39 = 0LL;
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      ++v39;
      v40 += 4;
      if ( v39 >= *(unsigned __int16 *)&v22->klass->_2.bitflags1 )
        goto LABEL_45;
    }
    v41 = (__int64)(&v38->vtable._0_Equals.method + 2 * *v40);
  }
  else
  {
LABEL_45:
    v41 = sub_AEB880(v22, System_IDisposable_TypeInfo, 0LL, v37);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v41)(v22, *(_QWORD *)(v41 + 8));
  if ( v77 && v76[v77 - 1] == 249 )
    --v77;
  v42 = (System_IO_MemoryStream_o *)sub_B52A54(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v42, 0LL);
  v43 = (System_IO_MemoryStream_o *)sub_B52A54(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_45046292(v43, v36, 0LL);
  v44 = (ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *)sub_B52A54(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo);
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream___ctor(v44, (System_IO_Stream_o *)v43, 0LL);
  v45 = sub_B5299C(byte___TypeInfo, 0x4000LL);
  v47 = v45;
  if ( !v45 )
    sub_B52A5C(0LL, v46);
  if ( !v44 )
    sub_B52A5C(v45, v46);
  while ( 1 )
  {
    v48 = ((__int64 (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v44->klass->vtable._30_Read.method)(
            v44,
            v47,
            0LL,
            *(unsigned int *)(v47 + 24),
            v44->klass->vtable._31_ReadByte.methodPtr);
    if ( (int)v48 < 1 )
      break;
    if ( !v42 )
      sub_B52A5C(v48, v49);
    ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v42->klass->vtable._32_Write.method)(
      v42,
      v47,
      0LL,
      (unsigned int)v48,
      v42->klass->vtable._33_WriteByte.methodPtr);
  }
  ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, Il2CppMethodPointer))v44->klass->vtable._18_Close.method)(
    v44,
    v44->klass->vtable._19_Dispose.methodPtr);
  v76[v77++] = 341;
  v51 = v44->klass;
  if ( *(_WORD *)&v44->klass->_2.bitflags1 )
  {
    v52 = 0LL;
    v53 = &v51->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      ++v52;
      v53 += 4;
      if ( v52 >= *(unsigned __int16 *)&v44->klass->_2.bitflags1 )
        goto LABEL_59;
    }
    v54 = (__int64)(&v51->vtable._0_Equals.method + 2 * *v53);
  }
  else
  {
LABEL_59:
    v54 = sub_AEB880(v44, System_IDisposable_TypeInfo, 0LL, v50);
  }
  v55 = (*(__int64 (__fastcall **)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, _QWORD))v54)(
          v44,
          *(_QWORD *)(v54 + 8));
  if ( v77 && v76[v77 - 1] == 341 )
    --v77;
  if ( !v43 )
    sub_B52A5C(v55, v56);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v43->klass->vtable._18_Close.method)(
    v43,
    v43->klass->vtable._19_Dispose.methodPtr);
  v76[v77++] = 362;
  v58 = v43->klass;
  if ( *(_WORD *)&v43->klass->_2.bitflags1 )
  {
    v59 = 0LL;
    v60 = &v58->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
    {
      ++v59;
      v60 += 4;
      if ( v59 >= *(unsigned __int16 *)&v43->klass->_2.bitflags1 )
        goto LABEL_69;
    }
    v61 = (__int64)(&v58->vtable._0_Equals.method + 2 * *v60);
  }
  else
  {
LABEL_69:
    v61 = sub_AEB880(v43, System_IDisposable_TypeInfo, 0LL, v57);
  }
  v62 = (*(__int64 (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v61)(v43, *(_QWORD *)(v61 + 8));
  if ( v77 && v76[v77 - 1] == 362 )
    --v77;
  if ( !v42 )
    sub_B52A5C(v62, v63);
  v64 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v42->klass->vtable._37_ToArray.method)(
          v42,
          v42->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v42->klass->vtable._18_Close.method)(
    v42,
    v42->klass->vtable._19_Dispose.methodPtr);
  v76[v77++] = 392;
  v66 = v42->klass;
  if ( *(_WORD *)&v42->klass->_2.bitflags1 )
  {
    v67 = 0LL;
    v68 = &v66->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v68 - 1) != System_IDisposable_TypeInfo )
    {
      ++v67;
      v68 += 4;
      if ( v67 >= *(unsigned __int16 *)&v42->klass->_2.bitflags1 )
        goto LABEL_79;
    }
    v69 = (__int64)(&v66->vtable._0_Equals.method + 2 * *v68);
  }
  else
  {
LABEL_79:
    v69 = sub_AEB880(v42, System_IDisposable_TypeInfo, 0LL, v65);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v69)(v42, *(_QWORD *)(v69 + 8));
  if ( v77 && v76[v77 - 1] == 392 )
    --v77;
  Mk = System_Text_Encoding__get_UTF8(0LL);
  if ( !Mk )
    goto LABEL_88;
  return (System_String_o *)(*(__int64 (__fastcall **)(_DWORD *, __int64, _QWORD))(*(_QWORD *)Mk + 856LL))(
                              Mk,
                              v64,
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
  __int64 v23; // x3
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_c *klass; // x8
  unsigned __int64 v25; // x10
  int32_t *p_offset; // x11
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x3
  int v31; // w25
  System_Security_Cryptography_CryptoStream_c *v32; // x8
  unsigned __int64 v33; // x10
  int32_t *v34; // x11
  __int64 v35; // x0
  __int64 v36; // x0
  __int64 v37; // x1
  int v38; // w8
  __int64 v39; // x22
  __int64 v40; // x3
  int v41; // w25
  System_IO_MemoryStream_c *v42; // x8
  unsigned __int64 v43; // x10
  int32_t *v44; // x11
  __int64 v45; // x0
  unsigned int v46; // w8
  unsigned __int64 v47; // x9
  unsigned __int64 v48; // x8
  __int64 v49; // x12
  uint32_t v50; // w1
  __int64 v52; // x0
  int v53[3]; // [xsp+0h] [xbp-50h]
  int v54; // [xsp+Ch] [xbp-44h]
  System_Nullable_uint__o v55; // [xsp+18h] [xbp-38h] BYREF
  System_Nullable_uint__o v56; // 0:x0.8

  if ( (byte_42AF9F0 & 1) == 0 )
  {
    sub_B52984(&ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo);
    sub_B52984(&byte___TypeInfo);
    sub_B52984(&System_Convert_TypeInfo);
    sub_B52984(&Crc32_TypeInfo);
    sub_B52984(&System_Security_Cryptography_CryptoStream_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_IO_MemoryStream_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_System_Nullable_uint___ctor__);
    sub_B52984(&Method_System_Nullable_uint__get_HasValue__);
    sub_B52984(&System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
    byte_42AF9F0 = 1;
  }
  v54 = 0;
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
  v14 = (System_Security_Cryptography_TripleDESCryptoServiceProvider_o *)sub_B52A54(System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_TripleDESCryptoServiceProvider___ctor(v14, 0LL);
  v15 = (System_IO_MemoryStream_o *)sub_B52A54(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v15, 0LL);
  if ( !v14 )
    sub_B52A5C(v16, v17);
  v18 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_TripleDESCryptoServiceProvider_o *, __int64, __int64, Il2CppMethodPointer))v14->klass->vtable._23_CreateEncryptor.method)(
                                                             v14,
                                                             v11,
                                                             v13,
                                                             v14->klass->vtable._24_CreateDecryptor.methodPtr);
  v19 = (System_Security_Cryptography_CryptoStream_o *)sub_B52A54(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v19, (System_IO_Stream_o *)v15, v18, 1, 0LL);
  v20 = (ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *)sub_B52A54(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo);
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream___ctor(v20, (System_IO_Stream_o *)v19, 0LL);
  if ( !v9 )
    sub_B52A5C(v21, v22);
  if ( !v20 )
    sub_B52A5C(v21, v22);
  ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v20->klass->vtable._32_Write.method)(
    v20,
    v9,
    0LL,
    *(unsigned int *)(v9 + 24),
    v20->klass->vtable._33_WriteByte.methodPtr);
  ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, Il2CppMethodPointer))v20->klass->vtable._18_Close.method)(
    v20,
    v20->klass->vtable._19_Dispose.methodPtr);
  v53[0] = 117;
  v54 = 1;
  klass = v20->klass;
  if ( *(_WORD *)&v20->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v25;
      p_offset += 4;
      if ( v25 >= *(unsigned __int16 *)&v20->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v27 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_16:
    v27 = sub_AEB880(v20, System_IDisposable_TypeInfo, 0LL, v23);
  }
  v28 = (*(__int64 (__fastcall **)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, _QWORD))v27)(
          v20,
          *(_QWORD *)(v27 + 8));
  v54 = 0;
  if ( !v19 )
    sub_B52A5C(v28, v29);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, Il2CppMethodPointer))v19->klass->vtable._18_Close.method)(
    v19,
    v19->klass->vtable._19_Dispose.methodPtr);
  v53[0] = 138;
  v31 = ++v54;
  v32 = v19->klass;
  if ( *(_WORD *)&v19->klass->_2.bitflags1 )
  {
    v33 = 0LL;
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      ++v33;
      v34 += 4;
      if ( v33 >= *(unsigned __int16 *)&v19->klass->_2.bitflags1 )
        goto LABEL_25;
    }
    v35 = (__int64)(&v32->vtable._0_Equals.method + 2 * *v34);
  }
  else
  {
LABEL_25:
    v35 = sub_AEB880(v19, System_IDisposable_TypeInfo, 0LL, v30);
  }
  v36 = (*(__int64 (__fastcall **)(System_Security_Cryptography_CryptoStream_o *, _QWORD))v35)(
          v19,
          *(_QWORD *)(v35 + 8));
  if ( v31 )
  {
    v38 = v31 - 1;
    if ( v53[v31 - 1] == 138 )
    {
      --v31;
      v54 = v38;
    }
  }
  if ( !v15 )
    sub_B52A5C(v36, v37);
  v39 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v15->klass->vtable._37_ToArray.method)(
          v15,
          v15->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v15->klass->vtable._18_Close.method)(
    v15,
    v15->klass->vtable._19_Dispose.methodPtr);
  v53[v31] = 168;
  v41 = ++v54;
  v42 = v15->klass;
  if ( *(_WORD *)&v15->klass->_2.bitflags1 )
  {
    v43 = 0LL;
    v44 = &v42->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
    {
      ++v43;
      v44 += 4;
      if ( v43 >= *(unsigned __int16 *)&v15->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v45 = (__int64)(&v42->vtable._0_Equals.method + 2 * *v44);
  }
  else
  {
LABEL_35:
    v45 = sub_AEB880(v15, System_IDisposable_TypeInfo, 0LL, v40);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v45)(v15, *(_QWORD *)(v45 + 8));
  if ( v41 && v53[v41 - 1] == 168 )
    v54 = v41 - 1;
  if ( !eorData )
    goto LABEL_52;
  UTF8 = (unsigned int *)sub_B5299C(byte___TypeInfo, 4LL);
  if ( !UTF8 )
    goto LABEL_62;
  v46 = UTF8[6];
  if ( !v46 )
    goto LABEL_61;
  *((_BYTE *)UTF8 + 32) = eorData;
  if ( v46 == 1 )
    goto LABEL_61;
  *((_BYTE *)UTF8 + 33) = BYTE1(eorData);
  if ( v46 <= 2 )
    goto LABEL_61;
  *((_BYTE *)UTF8 + 34) = BYTE2(eorData);
  if ( v46 == 3 )
    goto LABEL_61;
  *((_BYTE *)UTF8 + 35) = HIBYTE(eorData);
  if ( !v39 )
LABEL_62:
    sub_B52A5C(UTF8, v8);
  if ( (int)*(_QWORD *)(v39 + 24) >= 1 )
  {
    v47 = (unsigned int)*(_QWORD *)(v39 + 24);
    v48 = 0LL;
    while ( v48 < v47 )
    {
      v49 = v48 & 3;
      if ( (unsigned int)v49 >= UTF8[6] )
        break;
      *(_BYTE *)(v39 + 32 + v48++) ^= *((_BYTE *)UTF8 + v49 + 32);
      if ( (__int64)v48 >= (int)v47 )
        goto LABEL_52;
    }
LABEL_61:
    v52 = sub_B52A88(UTF8);
    sub_B52A28(v52, 0LL);
  }
LABEL_52:
  if ( crc->fields.has_value )
  {
    if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v50 = Crc32__Compute((System_Byte_array *)v39, 0LL);
    v56 = (System_Nullable_uint__o)&v55;
    v55 = 0LL;
    System_Nullable_uint____ctor(v56, v50, (const MethodInfo_21747B4 *)Method_System_Nullable_uint___ctor__);
    *crc = v55;
  }
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  return System_Convert__ToBase64String((System_Byte_array *)v39, 0LL);
}