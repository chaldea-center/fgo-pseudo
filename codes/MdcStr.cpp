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
  bool v18; // zf
  System_Byte_array *v19; // x20
  uint32_t v20; // w21
  _DWORD *Mk; // x0
  __int64 v22; // x1
  unsigned int v23; // w8
  unsigned __int64 v24; // x8
  unsigned __int64 v25; // x9
  System_Text_Encoding_o *UTF8; // x0
  System_Text_Encoding_o *v27; // x19
  __int64 v28; // x21
  System_Text_Encoding_o *v29; // x19
  __int64 v30; // x22
  System_Security_Cryptography_TripleDESCryptoServiceProvider_o *v31; // x23
  System_IO_MemoryStream_o *v32; // x19
  __int64 v33; // x0
  __int64 v34; // x1
  System_Security_Cryptography_ICryptoTransform_o *v35; // x22
  System_Security_Cryptography_CryptoStream_o *v36; // x21
  __int64 v37; // x0
  __int64 v38; // x1
  System_Security_Cryptography_CryptoStream_c *klass; // x8
  __int64 v40; // x9
  int32_t *p_offset; // x10
  __int64 v42; // x0
  __int64 v43; // x0
  __int64 v44; // x1
  System_Byte_array *v45; // x20
  System_IO_MemoryStream_c *v46; // x8
  __int64 v47; // x9
  int32_t *v48; // x10
  __int64 v49; // x0
  System_IO_MemoryStream_o *v50; // x19
  System_IO_MemoryStream_o *v51; // x22
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *v52; // x23
  __int64 v53; // x0
  __int64 v54; // x1
  __int64 v55; // x21
  __int64 v56; // x0
  __int64 v57; // x1
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_c *v58; // x8
  __int64 v59; // x9
  int32_t *v60; // x10
  __int64 v61; // x0
  __int64 v62; // x0
  __int64 v63; // x1
  System_IO_MemoryStream_c *v64; // x8
  __int64 v65; // x9
  int32_t *v66; // x10
  __int64 v67; // x0
  __int64 v68; // x0
  __int64 v69; // x1
  __int64 v70; // x22
  System_IO_MemoryStream_c *v71; // x8
  __int64 v72; // x9
  int32_t *v73; // x10
  __int64 v74; // x0
  __int64 v76; // x0
  System_IO_IOException_o *v77; // x19
  System_String_o *v78; // x0
  __int64 v79; // x0
  System_Nullable_uint__o v80; // [xsp+8h] [xbp-58h] BYREF
  System_Nullable_uint__o v81; // 0:x0.8

  v80 = crc;
  hasValue = crc.fields.hasValue;
  if ( (byte_4AB5589 & 1) == 0 )
  {
    sub_1BAB41C(&ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo, *(_QWORD *)&eorData);
    sub_1BAB41C(&byte___TypeInfo, v7);
    sub_1BAB41C(&System_Convert_TypeInfo, v8);
    sub_1BAB41C(&Crc32_TypeInfo, v9);
    sub_1BAB41C(&System_Security_Cryptography_CryptoStream_TypeInfo, v10);
    sub_1BAB41C(&System_IDisposable_TypeInfo, v11);
    sub_1BAB41C(&System_IO_MemoryStream_TypeInfo, v12);
    sub_1BAB41C(&NetworkManager_TypeInfo, v13);
    sub_1BAB41C(&Method_System_Nullable_uint__get_HasValue__, v14);
    sub_1BAB41C(&Method_System_Nullable_uint__get_Value__, v15);
    sub_1BAB41C(&System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo, v16);
    byte_4AB5589 = 1;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v17 = System_Convert__FromBase64String(str, 0LL);
  v18 = !hasValue;
  v19 = v17;
  if ( !v18 )
  {
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v20 = Crc32__Compute(v19, 0LL);
    v81 = (System_Nullable_uint__o)&v80;
    if ( v20 != System_Nullable_uint___get_Value(
                  v81,
                  (const MethodInfo_366DCEC *)Method_System_Nullable_uint__get_Value__) )
    {
      v76 = sub_1BAB430(&System_IO_IOException_TypeInfo);
      v77 = (System_IO_IOException_o *)sub_1BAB668(v76);
      v78 = (System_String_o *)sub_1BAB430(&StringLiteral_8948/*"MdcStr:Dc Crc Error"*/);
      System_IO_IOException___ctor_62188372(v77, v78, 0LL);
      v79 = sub_1BAB430(&Method_MdcStr_Dc__);
      sub_1BAB544(v77, v79);
    }
  }
  if ( eorData )
  {
    Mk = (_DWORD *)sub_1BAB4C4(byte___TypeInfo, 4LL);
    if ( !Mk )
      goto LABEL_70;
    v23 = Mk[6];
    if ( !v23 )
      goto LABEL_68;
    *((_BYTE *)Mk + 32) = eorData;
    if ( v23 == 1 )
      goto LABEL_68;
    *((_BYTE *)Mk + 33) = BYTE1(eorData);
    if ( v23 <= 2 )
      goto LABEL_68;
    *((_BYTE *)Mk + 34) = BYTE2(eorData);
    if ( v23 == 3 )
      goto LABEL_68;
    *((_BYTE *)Mk + 35) = HIBYTE(eorData);
    if ( !v19 )
LABEL_70:
      sub_1BAB678(Mk, v22);
    if ( (int)*(_QWORD *)&v19->max_length >= 1 )
    {
      v24 = 0LL;
      v25 = (unsigned int)*(_QWORD *)&v19->max_length;
      while ( v24 < v25 && (v24 & 3) < Mk[6] )
      {
        v19->m_Items[v24 + 4] ^= *((_BYTE *)Mk + (v24 & 3) + 32);
        if ( v25 == ++v24 )
          goto LABEL_21;
      }
LABEL_68:
      sub_1BAB680(Mk, v22);
    }
  }
LABEL_21:
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  v27 = UTF8;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Mk = NetworkManager__GetMk((const MethodInfo *)UTF8);
  if ( !v27 )
    goto LABEL_70;
  v28 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, _DWORD *, Il2CppMethodPointer))v27->klass->vtable._19_GetBytes.method)(
          v27,
          Mk,
          v27->klass->vtable._20_GetBytes.methodPtr);
  v29 = System_Text_Encoding__get_UTF8(0LL);
  Mk = NetworkManager__GetCv((const MethodInfo *)v29);
  if ( !v29 )
    goto LABEL_70;
  v30 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, _DWORD *, Il2CppMethodPointer))v29->klass->vtable._19_GetBytes.method)(
          v29,
          Mk,
          v29->klass->vtable._20_GetBytes.methodPtr);
  v31 = (System_Security_Cryptography_TripleDESCryptoServiceProvider_o *)sub_1BAB668(System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_TripleDESCryptoServiceProvider___ctor(v31, 0LL);
  v32 = (System_IO_MemoryStream_o *)sub_1BAB668(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v32, 0LL);
  if ( !v31 )
    sub_1BAB678(v33, v34);
  v35 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_TripleDESCryptoServiceProvider_o *, __int64, __int64, Il2CppMethodPointer))v31->klass->vtable._25_CreateDecryptor.method)(
                                                             v31,
                                                             v28,
                                                             v30,
                                                             v31->klass->vtable._26_GenerateKey.methodPtr);
  v36 = (System_Security_Cryptography_CryptoStream_o *)sub_1BAB668(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v36, (System_IO_Stream_o *)v32, v35, 1, 0LL);
  if ( !v19 )
    sub_1BAB678(v37, v38);
  if ( !v36 )
    sub_1BAB678(v37, v38);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))v36->klass->vtable._36_Write.method)(
    v36,
    v19,
    0LL,
    v19->max_length,
    v36->klass->vtable._37_Write.methodPtr);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, Il2CppMethodPointer))v36->klass->vtable._19_Close.method)(
    v36,
    v36->klass->vtable._20_Dispose.methodPtr);
  klass = v36->klass;
  v40 = *(unsigned __int16 *)(&v36->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v36->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v40;
      p_offset += 4;
      if ( !v40 )
        goto LABEL_32;
    }
    v42 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_32:
    v42 = sub_1BFD3FC(v36, System_IDisposable_TypeInfo, 0LL);
  }
  v43 = (*(__int64 (__fastcall **)(System_Security_Cryptography_CryptoStream_o *, _QWORD))v42)(
          v36,
          *(_QWORD *)(v42 + 8));
  if ( !v32 )
    sub_1BAB678(v43, v44);
  v45 = (System_Byte_array *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v32->klass->vtable._42_ToArray.method)(
                               v32,
                               v32->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v32->klass->vtable._19_Close.method)(
    v32,
    v32->klass->vtable._20_Dispose.methodPtr);
  v46 = v32->klass;
  v47 = *(unsigned __int16 *)(&v32->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v32->klass->_2.bitflags2 + 3) )
  {
    v48 = &v46->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      --v47;
      v48 += 4;
      if ( !v47 )
        goto LABEL_39;
    }
    v49 = (__int64)(&v46->vtable._0_Equals.method + 2 * *v48);
  }
  else
  {
LABEL_39:
    v49 = sub_1BFD3FC(v32, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v49)(v32, *(_QWORD *)(v49 + 8));
  v50 = (System_IO_MemoryStream_o *)sub_1BAB668(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v50, 0LL);
  v51 = (System_IO_MemoryStream_o *)sub_1BAB668(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_62192140(v51, v45, 0LL);
  v52 = (ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *)sub_1BAB668(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo);
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream___ctor(v52, (System_IO_Stream_o *)v51, 0LL);
  v53 = sub_1BAB4C4(byte___TypeInfo, 0x4000LL);
  v55 = v53;
  if ( !v53 )
    sub_1BAB678(0LL, v54);
  if ( !v52 )
    sub_1BAB678(v53, v54);
  while ( 1 )
  {
    v56 = ((__int64 (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v52->klass->vtable._33_Read.method)(
            v52,
            v55,
            0LL,
            *(unsigned int *)(v55 + 24),
            v52->klass->vtable._34_Read.methodPtr);
    if ( (int)v56 <= 0 )
      break;
    if ( !v50 )
      sub_1BAB678(v56, v57);
    ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v50->klass->vtable._36_Write.method)(
      v50,
      v55,
      0LL,
      (unsigned int)v56,
      v50->klass->vtable._37_Write.methodPtr);
  }
  ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, Il2CppMethodPointer))v52->klass->vtable._19_Close.method)(
    v52,
    v52->klass->vtable._20_Dispose.methodPtr);
  v58 = v52->klass;
  v59 = *(unsigned __int16 *)(&v52->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v52->klass->_2.bitflags2 + 3) )
  {
    v60 = &v58->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
    {
      --v59;
      v60 += 4;
      if ( !v59 )
        goto LABEL_50;
    }
    v61 = (__int64)(&v58->vtable._0_Equals.method + 2 * *v60);
  }
  else
  {
LABEL_50:
    v61 = sub_1BFD3FC(v52, System_IDisposable_TypeInfo, 0LL);
  }
  v62 = (*(__int64 (__fastcall **)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, _QWORD))v61)(
          v52,
          *(_QWORD *)(v61 + 8));
  if ( !v51 )
    sub_1BAB678(v62, v63);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v51->klass->vtable._19_Close.method)(
    v51,
    v51->klass->vtable._20_Dispose.methodPtr);
  v64 = v51->klass;
  v65 = *(unsigned __int16 *)(&v51->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v51->klass->_2.bitflags2 + 3) )
  {
    v66 = &v64->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v66 - 1) != System_IDisposable_TypeInfo )
    {
      --v65;
      v66 += 4;
      if ( !v65 )
        goto LABEL_57;
    }
    v67 = (__int64)(&v64->vtable._0_Equals.method + 2 * *v66);
  }
  else
  {
LABEL_57:
    v67 = sub_1BFD3FC(v51, System_IDisposable_TypeInfo, 0LL);
  }
  v68 = (*(__int64 (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v67)(v51, *(_QWORD *)(v67 + 8));
  if ( !v50 )
    sub_1BAB678(v68, v69);
  v70 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v50->klass->vtable._42_ToArray.method)(
          v50,
          v50->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v50->klass->vtable._19_Close.method)(
    v50,
    v50->klass->vtable._20_Dispose.methodPtr);
  v71 = v50->klass;
  v72 = *(unsigned __int16 *)(&v50->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v50->klass->_2.bitflags2 + 3) )
  {
    v73 = &v71->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v73 - 1) != System_IDisposable_TypeInfo )
    {
      --v72;
      v73 += 4;
      if ( !v72 )
        goto LABEL_64;
    }
    v74 = (__int64)(&v71->vtable._0_Equals.method + 2 * *v73);
  }
  else
  {
LABEL_64:
    v74 = sub_1BFD3FC(v50, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v74)(v50, *(_QWORD *)(v74 + 8));
  Mk = System_Text_Encoding__get_UTF8(0LL);
  if ( !Mk )
    goto LABEL_70;
  return (System_String_o *)(*(__int64 (__fastcall **)(_DWORD *, __int64, _QWORD))(*(_QWORD *)Mk + 888LL))(
                              Mk,
                              v70,
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
  __int64 v18; // x1
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

  if ( (byte_4AB5588 & 1) == 0 )
  {
    sub_1BAB41C(&ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo, str);
    sub_1BAB41C(&byte___TypeInfo, v7);
    sub_1BAB41C(&System_Convert_TypeInfo, v8);
    sub_1BAB41C(&Crc32_TypeInfo, v9);
    sub_1BAB41C(&System_Security_Cryptography_CryptoStream_TypeInfo, v10);
    sub_1BAB41C(&System_IDisposable_TypeInfo, v11);
    sub_1BAB41C(&System_IO_MemoryStream_TypeInfo, v12);
    sub_1BAB41C(&NetworkManager_TypeInfo, v13);
    sub_1BAB41C(&Method_System_Nullable_uint___ctor__, v14);
    sub_1BAB41C(&Method_System_Nullable_uint__get_HasValue__, v15);
    sub_1BAB41C(&System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo, v16);
    byte_4AB5588 = 1;
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
  v25 = (System_Security_Cryptography_TripleDESCryptoServiceProvider_o *)sub_1BAB668(System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_TripleDESCryptoServiceProvider___ctor(v25, 0LL);
  v26 = (System_IO_MemoryStream_o *)sub_1BAB668(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v26, 0LL);
  if ( !v25 )
    sub_1BAB678(v27, v28);
  v29 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_TripleDESCryptoServiceProvider_o *, __int64, __int64, Il2CppMethodPointer))v25->klass->vtable._23_CreateEncryptor.method)(
                                                             v25,
                                                             v22,
                                                             v24,
                                                             v25->klass->vtable._24_CreateDecryptor.methodPtr);
  v30 = (System_Security_Cryptography_CryptoStream_o *)sub_1BAB668(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v30, (System_IO_Stream_o *)v26, v29, 1, 0LL);
  v31 = (ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *)sub_1BAB668(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo);
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream___ctor(v31, (System_IO_Stream_o *)v30, 0LL);
  if ( !v19 )
    sub_1BAB678(v32, v33);
  if ( !v31 )
    sub_1BAB678(v32, v33);
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
    v37 = sub_1BFD3FC(v31, System_IDisposable_TypeInfo, 0LL);
  }
  v38 = (*(__int64 (__fastcall **)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, _QWORD))v37)(
          v31,
          *(_QWORD *)(v37 + 8));
  if ( !v30 )
    sub_1BAB678(v38, v39);
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
    v43 = sub_1BFD3FC(v30, System_IDisposable_TypeInfo, 0LL);
  }
  v44 = (*(__int64 (__fastcall **)(System_Security_Cryptography_CryptoStream_o *, _QWORD))v43)(
          v30,
          *(_QWORD *)(v43 + 8));
  if ( !v26 )
    sub_1BAB678(v44, v45);
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
    v50 = sub_1BFD3FC(v26, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v50)(v26, *(_QWORD *)(v50 + 8));
  if ( !eorData )
    goto LABEL_43;
  UTF8 = (unsigned int *)sub_1BAB4C4(byte___TypeInfo, 4LL);
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
    sub_1BAB678(UTF8, v18);
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
    sub_1BAB680(UTF8, v18);
  }
LABEL_43:
  if ( crc->fields.hasValue )
  {
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v54 = Crc32__Compute((System_Byte_array *)v46, 0LL);
    v57 = (System_Nullable_uint__o)&v56;
    v56 = 0LL;
    System_Nullable_uint____ctor(v57, v54, (const MethodInfo_366DCD4 *)Method_System_Nullable_uint___ctor__);
    *crc = v56;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToBase64String((System_Byte_array *)v46, 0LL);
}