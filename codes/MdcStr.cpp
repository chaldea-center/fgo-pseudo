void MdcStr___ctor(MdcStr_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *MdcStr__Dc(
        System_String_o *str,
        uint32_t eorData,
        System_Nullable_uint__o crc,
        const MethodInfo *method)
{
  bool hasValue; // w20
  System_Byte_array *v7; // x0
  bool v8; // zf
  System_Byte_array *v9; // x20
  uint32_t v10; // w21
  System_Nullable_uint__o v11; // x0
  _DWORD *Mk; // x0
  __int64 v13; // x1
  unsigned int v14; // w8
  unsigned __int64 v15; // x8
  unsigned __int64 max_length; // x9
  System_Text_Encoding_o *UTF8; // x0
  System_Text_Encoding_o *v18; // x19
  __int64 v19; // x21
  System_Text_Encoding_o *v20; // x19
  __int64 v21; // x22
  System_Security_Cryptography_TripleDESCryptoServiceProvider_o *v22; // x23
  System_IO_MemoryStream_o *v23; // x19
  __int64 v24; // x0
  __int64 v25; // x1
  System_Security_Cryptography_ICryptoTransform_o *v26; // x22
  System_Security_Cryptography_CryptoStream_o *v27; // x21
  __int64 v28; // x0
  __int64 v29; // x1
  System_Security_Cryptography_CryptoStream_c *klass; // x8
  __int64 v31; // x9
  int32_t *p_offset; // x10
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x1
  System_Byte_array *v36; // x20
  System_IO_MemoryStream_c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  System_IO_MemoryStream_o *v41; // x19
  System_IO_MemoryStream_o *v42; // x22
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *v43; // x23
  __int64 v44; // x0
  __int64 v45; // x1
  __int64 v46; // x21
  __int64 v47; // x0
  __int64 v48; // x1
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_c *v49; // x8
  __int64 v50; // x9
  int32_t *v51; // x10
  __int64 v52; // x0
  __int64 v53; // x0
  __int64 v54; // x1
  System_IO_MemoryStream_c *v55; // x8
  __int64 v56; // x9
  int32_t *v57; // x10
  __int64 v58; // x0
  __int64 v59; // x0
  __int64 v60; // x1
  __int64 v61; // x22
  System_IO_MemoryStream_c *v62; // x8
  __int64 v63; // x9
  int32_t *v64; // x10
  __int64 v65; // x0
  __int64 v67; // x0
  System_IO_IOException_o *v68; // x19
  System_String_o *v69; // x0
  __int64 v70; // x0
  System_Nullable_uint__o v71; // [xsp+8h] [xbp-58h] BYREF

  v71 = crc;
  hasValue = crc.fields.hasValue;
  if ( (byte_4CB5A6B & 1) == 0 )
  {
    sub_1C6BA08(&ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo);
    sub_1C6BA08(&byte___TypeInfo);
    sub_1C6BA08(&System_Convert_TypeInfo);
    sub_1C6BA08(&Crc32_TypeInfo);
    sub_1C6BA08(&System_Security_Cryptography_CryptoStream_TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_IO_MemoryStream_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_System_Nullable_uint__get_HasValue__);
    sub_1C6BA08(&Method_System_Nullable_uint__get_Value__);
    sub_1C6BA08(&System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
    byte_4CB5A6B = 1;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v7 = System_Convert__FromBase64String(str, 0);
  v8 = !hasValue;
  v9 = v7;
  if ( !v8 )
  {
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v10 = Crc32__Compute(v9, 0);
    v11 = (System_Nullable_uint__o)&v71;
    if ( v10 != System_Nullable_uint___get_Value(
                  v11,
                  (const MethodInfo_392CB8C *)Method_System_Nullable_uint__get_Value__) )
    {
      v67 = sub_1C6BA1C(&System_IO_IOException_TypeInfo);
      v68 = (System_IO_IOException_o *)sub_1C6BC54(v67);
      v69 = (System_String_o *)sub_1C6BA1C(&StringLiteral_8980/*"MdcStr:Dc Crc Error"*/);
      System_IO_IOException___ctor_64783912(v68, v69, 0);
      v70 = sub_1C6BA1C(&Method_MdcStr_Dc__);
      sub_1C6BB30(v68, v70);
    }
  }
  if ( eorData )
  {
    Mk = (_DWORD *)sub_1C6BAB0(byte___TypeInfo, 4);
    if ( !Mk )
      goto LABEL_70;
    v14 = Mk[6];
    if ( !v14 )
      goto LABEL_68;
    *((_BYTE *)Mk + 32) = eorData;
    if ( v14 == 1 )
      goto LABEL_68;
    *((_BYTE *)Mk + 33) = BYTE1(eorData);
    if ( v14 <= 2 )
      goto LABEL_68;
    *((_BYTE *)Mk + 34) = BYTE2(eorData);
    if ( v14 == 3 )
      goto LABEL_68;
    *((_BYTE *)Mk + 35) = HIBYTE(eorData);
    if ( !v9 )
LABEL_70:
      sub_1C6BC60(Mk, v13);
    if ( (int)v9->max_length >= 1 )
    {
      v15 = 0;
      max_length = (unsigned int)v9->max_length;
      while ( v15 < max_length && (v15 & 3) < Mk[6] )
      {
        v9->m_Items[v15] ^= *((_BYTE *)Mk + (v15 & 3) + 32);
        if ( max_length == ++v15 )
          goto LABEL_21;
      }
LABEL_68:
      sub_1C6BC68(Mk);
    }
  }
LABEL_21:
  UTF8 = System_Text_Encoding__get_UTF8(0);
  v18 = UTF8;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Mk = NetworkManager__GetMk((const MethodInfo *)UTF8);
  if ( !v18 )
    goto LABEL_70;
  v19 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, _DWORD *, const MethodInfo *))v18->klass->vtable._18_GetBytes.methodPtr)(
          v18,
          Mk,
          v18->klass->vtable._18_GetBytes.method);
  v20 = System_Text_Encoding__get_UTF8(0);
  Mk = NetworkManager__GetCv((const MethodInfo *)v20);
  if ( !v20 )
    goto LABEL_70;
  v21 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, _DWORD *, const MethodInfo *))v20->klass->vtable._18_GetBytes.methodPtr)(
          v20,
          Mk,
          v20->klass->vtable._18_GetBytes.method);
  v22 = (System_Security_Cryptography_TripleDESCryptoServiceProvider_o *)sub_1C6BC54(System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_TripleDESCryptoServiceProvider___ctor(v22, 0);
  v23 = (System_IO_MemoryStream_o *)sub_1C6BC54(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v23, 0);
  if ( !v22 )
    sub_1C6BC60(v24, v25);
  v26 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_TripleDESCryptoServiceProvider_o *, __int64, __int64, const MethodInfo *))v22->klass->vtable._23_CreateDecryptor.methodPtr)(
                                                             v22,
                                                             v19,
                                                             v21,
                                                             v22->klass->vtable._23_CreateDecryptor.method);
  v27 = (System_Security_Cryptography_CryptoStream_o *)sub_1C6BC54(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v27, (System_IO_Stream_o *)v23, v26, 1, 0);
  if ( !v9 )
    sub_1C6BC60(v28, v29);
  if ( !v27 )
    sub_1C6BC60(v28, v29);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, System_Byte_array *, _QWORD, _QWORD, const MethodInfo *))v27->klass->vtable._34_Write.methodPtr)(
    v27,
    v9,
    0,
    LODWORD(v9->max_length),
    v27->klass->vtable._34_Write.method);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, const MethodInfo *))v27->klass->vtable._18_Close.methodPtr)(
    v27,
    v27->klass->vtable._18_Close.method);
  klass = v27->klass;
  v31 = *(unsigned __int16 *)&v27->klass->_2.rank;
  if ( *(_WORD *)&v27->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      p_offset += 4;
      if ( !v31 )
        goto LABEL_32;
    }
    v33 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_32:
    v33 = sub_1C41D90(v27, System_IDisposable_TypeInfo, 0);
  }
  v34 = (*(__int64 (__fastcall **)(System_Security_Cryptography_CryptoStream_o *, _QWORD))v33)(
          v27,
          *(_QWORD *)(v33 + 8));
  if ( !v23 )
    sub_1C6BC60(v34, v35);
  v36 = (System_Byte_array *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v23->klass->vtable._40_ToArray.methodPtr)(
                               v23,
                               v23->klass->vtable._40_ToArray.method);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v23->klass->vtable._18_Close.methodPtr)(
    v23,
    v23->klass->vtable._18_Close.method);
  v37 = v23->klass;
  v38 = *(unsigned __int16 *)&v23->klass->_2.rank;
  if ( *(_WORD *)&v23->klass->_2.rank )
  {
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_39;
    }
    v40 = (__int64)&v37->vtable + 16 * *v39;
  }
  else
  {
LABEL_39:
    v40 = sub_1C41D90(v23, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v40)(v23, *(_QWORD *)(v40 + 8));
  v41 = (System_IO_MemoryStream_o *)sub_1C6BC54(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v41, 0);
  v42 = (System_IO_MemoryStream_o *)sub_1C6BC54(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_64787716(v42, v36, 0);
  v43 = (ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *)sub_1C6BC54(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo);
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream___ctor(v43, (System_IO_Stream_o *)v42, 0);
  v44 = sub_1C6BAB0(byte___TypeInfo, 0x4000);
  v46 = v44;
  if ( !v44 )
    sub_1C6BC60(0, v45);
  if ( !v43 )
    sub_1C6BC60(v44, v45);
  while ( 1 )
  {
    v47 = ((__int64 (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v43->klass->vtable._31_Read.methodPtr)(
            v43,
            v46,
            0,
            *(unsigned int *)(v46 + 24),
            v43->klass->vtable._31_Read.method);
    if ( (int)v47 <= 0 )
      break;
    if ( !v41 )
      sub_1C6BC60(v47, v48);
    ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v41->klass->vtable._34_Write.methodPtr)(
      v41,
      v46,
      0,
      (unsigned int)v47,
      v41->klass->vtable._34_Write.method);
  }
  ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, const MethodInfo *))v43->klass->vtable._18_Close.methodPtr)(
    v43,
    v43->klass->vtable._18_Close.method);
  v49 = v43->klass;
  v50 = *(unsigned __int16 *)&v43->klass->_2.rank;
  if ( *(_WORD *)&v43->klass->_2.rank )
  {
    v51 = &v49->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
    {
      --v50;
      v51 += 4;
      if ( !v50 )
        goto LABEL_50;
    }
    v52 = (__int64)&v49->vtable + 16 * *v51;
  }
  else
  {
LABEL_50:
    v52 = sub_1C41D90(v43, System_IDisposable_TypeInfo, 0);
  }
  v53 = (*(__int64 (__fastcall **)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, _QWORD))v52)(
          v43,
          *(_QWORD *)(v52 + 8));
  if ( !v42 )
    sub_1C6BC60(v53, v54);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v42->klass->vtable._18_Close.methodPtr)(
    v42,
    v42->klass->vtable._18_Close.method);
  v55 = v42->klass;
  v56 = *(unsigned __int16 *)&v42->klass->_2.rank;
  if ( *(_WORD *)&v42->klass->_2.rank )
  {
    v57 = &v55->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
    {
      --v56;
      v57 += 4;
      if ( !v56 )
        goto LABEL_57;
    }
    v58 = (__int64)&v55->vtable + 16 * *v57;
  }
  else
  {
LABEL_57:
    v58 = sub_1C41D90(v42, System_IDisposable_TypeInfo, 0);
  }
  v59 = (*(__int64 (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v58)(v42, *(_QWORD *)(v58 + 8));
  if ( !v41 )
    sub_1C6BC60(v59, v60);
  v61 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v41->klass->vtable._40_ToArray.methodPtr)(
          v41,
          v41->klass->vtable._40_ToArray.method);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v41->klass->vtable._18_Close.methodPtr)(
    v41,
    v41->klass->vtable._18_Close.method);
  v62 = v41->klass;
  v63 = *(unsigned __int16 *)&v41->klass->_2.rank;
  if ( *(_WORD *)&v41->klass->_2.rank )
  {
    v64 = &v62->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v64 - 1) != System_IDisposable_TypeInfo )
    {
      --v63;
      v64 += 4;
      if ( !v63 )
        goto LABEL_64;
    }
    v65 = (__int64)&v62->vtable + 16 * *v64;
  }
  else
  {
LABEL_64:
    v65 = sub_1C41D90(v41, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v65)(v41, *(_QWORD *)(v65 + 8));
  Mk = System_Text_Encoding__get_UTF8(0);
  if ( !Mk )
    goto LABEL_70;
  return (System_String_o *)(*(__int64 (__fastcall **)(_DWORD *, __int64, _QWORD))(*(_QWORD *)Mk + 872LL))(
                              Mk,
                              v61,
                              *(_QWORD *)(*(_QWORD *)Mk + 880LL));
}


System_String_o *MdcStr__Ec(
        System_Nullable_uint__o *crc,
        System_String_o *str,
        uint32_t eorData,
        const MethodInfo *method)
{
  unsigned int *UTF8; // x0
  __int64 v8; // x1
  __int64 v9; // x23
  System_Text_Encoding_o *v10; // x0
  System_Text_Encoding_o *v11; // x21
  __int64 v12; // x22
  System_Text_Encoding_o *v13; // x21
  __int64 v14; // x24
  System_Security_Cryptography_TripleDESCryptoServiceProvider_o *v15; // x25
  System_IO_MemoryStream_o *v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  System_Security_Cryptography_ICryptoTransform_o *v19; // x24
  System_Security_Cryptography_CryptoStream_o *v20; // x22
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *v21; // x25
  __int64 v22; // x0
  __int64 v23; // x1
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_c *klass; // x8
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x1
  System_Security_Cryptography_CryptoStream_c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x1
  System_Byte_array *v36; // x22
  System_IO_MemoryStream_c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  unsigned int v41; // w8
  unsigned __int64 v42; // x8
  unsigned __int64 max_length; // x9
  uint32_t v44; // w1
  System_Nullable_uint__o v45; // x0
  System_Nullable_uint__o v47; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CB5A6A & 1) == 0 )
  {
    sub_1C6BA08(&ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo);
    sub_1C6BA08(&byte___TypeInfo);
    sub_1C6BA08(&System_Convert_TypeInfo);
    sub_1C6BA08(&Crc32_TypeInfo);
    sub_1C6BA08(&System_Security_Cryptography_CryptoStream_TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_IO_MemoryStream_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_System_Nullable_uint___ctor__);
    sub_1C6BA08(&Method_System_Nullable_uint__get_HasValue__);
    sub_1C6BA08(&System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
    byte_4CB5A6A = 1;
  }
  UTF8 = (unsigned int *)System_Text_Encoding__get_UTF8(0);
  if ( !UTF8 )
    goto LABEL_51;
  v9 = (*(__int64 (__fastcall **)(unsigned int *, System_String_o *, _QWORD))(*(_QWORD *)UTF8 + 600LL))(
         UTF8,
         str,
         *(_QWORD *)(*(_QWORD *)UTF8 + 608LL));
  v10 = System_Text_Encoding__get_UTF8(0);
  v11 = v10;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UTF8 = (unsigned int *)NetworkManager__GetMk((const MethodInfo *)v10);
  if ( !v11 )
    goto LABEL_51;
  v12 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, unsigned int *, const MethodInfo *))v11->klass->vtable._18_GetBytes.methodPtr)(
          v11,
          UTF8,
          v11->klass->vtable._18_GetBytes.method);
  v13 = System_Text_Encoding__get_UTF8(0);
  UTF8 = (unsigned int *)NetworkManager__GetCv((const MethodInfo *)v13);
  if ( !v13 )
    goto LABEL_51;
  v14 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, unsigned int *, const MethodInfo *))v13->klass->vtable._18_GetBytes.methodPtr)(
          v13,
          UTF8,
          v13->klass->vtable._18_GetBytes.method);
  v15 = (System_Security_Cryptography_TripleDESCryptoServiceProvider_o *)sub_1C6BC54(System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_TripleDESCryptoServiceProvider___ctor(v15, 0);
  v16 = (System_IO_MemoryStream_o *)sub_1C6BC54(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v16, 0);
  if ( !v15 )
    sub_1C6BC60(v17, v18);
  v19 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_TripleDESCryptoServiceProvider_o *, __int64, __int64, const MethodInfo *))v15->klass->vtable._21_CreateEncryptor.methodPtr)(
                                                             v15,
                                                             v12,
                                                             v14,
                                                             v15->klass->vtable._21_CreateEncryptor.method);
  v20 = (System_Security_Cryptography_CryptoStream_o *)sub_1C6BC54(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v20, (System_IO_Stream_o *)v16, v19, 1, 0);
  v21 = (ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *)sub_1C6BC54(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo);
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream___ctor(v21, (System_IO_Stream_o *)v20, 0);
  if ( !v9 )
    sub_1C6BC60(v22, v23);
  if ( !v21 )
    sub_1C6BC60(v22, v23);
  ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v21->klass->vtable._34_Write.methodPtr)(
    v21,
    v9,
    0,
    *(unsigned int *)(v9 + 24),
    v21->klass->vtable._34_Write.method);
  ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, const MethodInfo *))v21->klass->vtable._18_Close.methodPtr)(
    v21,
    v21->klass->vtable._18_Close.method);
  klass = v21->klass;
  v25 = *(unsigned __int16 *)&v21->klass->_2.rank;
  if ( *(_WORD *)&v21->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v25;
      p_offset += 4;
      if ( !v25 )
        goto LABEL_15;
    }
    v27 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_15:
    v27 = sub_1C41D90(v21, System_IDisposable_TypeInfo, 0);
  }
  v28 = (*(__int64 (__fastcall **)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, _QWORD))v27)(
          v21,
          *(_QWORD *)(v27 + 8));
  if ( !v20 )
    sub_1C6BC60(v28, v29);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, const MethodInfo *))v20->klass->vtable._18_Close.methodPtr)(
    v20,
    v20->klass->vtable._18_Close.method);
  v30 = v20->klass;
  v31 = *(unsigned __int16 *)&v20->klass->_2.rank;
  if ( *(_WORD *)&v20->klass->_2.rank )
  {
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_22;
    }
    v33 = (__int64)&v30->vtable + 16 * *v32;
  }
  else
  {
LABEL_22:
    v33 = sub_1C41D90(v20, System_IDisposable_TypeInfo, 0);
  }
  v34 = (*(__int64 (__fastcall **)(System_Security_Cryptography_CryptoStream_o *, _QWORD))v33)(
          v20,
          *(_QWORD *)(v33 + 8));
  if ( !v16 )
    sub_1C6BC60(v34, v35);
  v36 = (System_Byte_array *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v16->klass->vtable._40_ToArray.methodPtr)(
                               v16,
                               v16->klass->vtable._40_ToArray.method);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v16->klass->vtable._18_Close.methodPtr)(
    v16,
    v16->klass->vtable._18_Close.method);
  v37 = v16->klass;
  v38 = *(unsigned __int16 *)&v16->klass->_2.rank;
  if ( *(_WORD *)&v16->klass->_2.rank )
  {
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_29;
    }
    v40 = (__int64)&v37->vtable + 16 * *v39;
  }
  else
  {
LABEL_29:
    v40 = sub_1C41D90(v16, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v40)(v16, *(_QWORD *)(v40 + 8));
  if ( !eorData )
    goto LABEL_43;
  UTF8 = (unsigned int *)sub_1C6BAB0(byte___TypeInfo, 4);
  if ( !UTF8 )
    goto LABEL_51;
  v41 = UTF8[6];
  if ( !v41 )
    goto LABEL_50;
  *((_BYTE *)UTF8 + 32) = eorData;
  if ( v41 == 1 )
    goto LABEL_50;
  *((_BYTE *)UTF8 + 33) = BYTE1(eorData);
  if ( v41 <= 2 )
    goto LABEL_50;
  *((_BYTE *)UTF8 + 34) = BYTE2(eorData);
  if ( v41 == 3 )
    goto LABEL_50;
  *((_BYTE *)UTF8 + 35) = HIBYTE(eorData);
  if ( !v36 )
LABEL_51:
    sub_1C6BC60(UTF8, v8);
  if ( (int)v36->max_length >= 1 )
  {
    v42 = 0;
    max_length = (unsigned int)v36->max_length;
    while ( v42 < max_length && (v42 & 3) < UTF8[6] )
    {
      v36->m_Items[v42] ^= *((_BYTE *)UTF8 + (v42 & 3) + 32);
      if ( max_length == ++v42 )
        goto LABEL_43;
    }
LABEL_50:
    sub_1C6BC68(UTF8);
  }
LABEL_43:
  if ( crc->fields.hasValue )
  {
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v44 = Crc32__Compute(v36, 0);
    v45 = (System_Nullable_uint__o)&v47;
    v47 = 0;
    System_Nullable_uint____ctor(v45, v44, (const MethodInfo_392CB74 *)Method_System_Nullable_uint___ctor__);
    *crc = v47;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToBase64String(v36, 0);
}