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
  __int64 v14; // x2
  unsigned int v15; // w8
  unsigned __int64 v16; // x8
  unsigned __int64 max_length; // x9
  System_Text_Encoding_o *UTF8; // x0
  System_Text_Encoding_o *v19; // x19
  __int64 v20; // x21
  System_Text_Encoding_o *v21; // x19
  __int64 v22; // x22
  System_Security_Cryptography_TripleDESCryptoServiceProvider_o *v23; // x23
  System_IO_MemoryStream_o *v24; // x19
  __int64 v25; // x0
  __int64 v26; // x1
  System_Security_Cryptography_ICryptoTransform_o *v27; // x22
  System_Security_Cryptography_CryptoStream_o *v28; // x21
  __int64 v29; // x0
  __int64 v30; // x1
  System_Security_Cryptography_CryptoStream_c *klass; // x8
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  System_Byte_array *v37; // x20
  System_IO_MemoryStream_c *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0
  System_IO_MemoryStream_o *v42; // x19
  System_IO_MemoryStream_o *v43; // x22
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *v44; // x23
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x21
  __int64 v48; // x0
  __int64 v49; // x1
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_c *v50; // x8
  __int64 v51; // x9
  int32_t *v52; // x10
  __int64 v53; // x0
  __int64 v54; // x0
  __int64 v55; // x1
  System_IO_MemoryStream_c *v56; // x8
  __int64 v57; // x9
  int32_t *v58; // x10
  __int64 v59; // x0
  __int64 v60; // x0
  __int64 v61; // x1
  __int64 v62; // x22
  System_IO_MemoryStream_c *v63; // x8
  __int64 v64; // x9
  int32_t *v65; // x10
  __int64 v66; // x0
  __int64 v68; // x0
  System_IO_IOException_o *v69; // x19
  System_String_o *v70; // x0
  __int64 v71; // x0
  System_Nullable_uint__o v72; // [xsp+8h] [xbp-58h] BYREF

  v72 = crc;
  hasValue = crc.fields.hasValue;
  if ( (byte_4C26A9D & 1) == 0 )
  {
    sub_1C2D490(&ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo);
    sub_1C2D490(&byte___TypeInfo);
    sub_1C2D490(&System_Convert_TypeInfo);
    sub_1C2D490(&Crc32_TypeInfo);
    sub_1C2D490(&System_Security_Cryptography_CryptoStream_TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_IO_MemoryStream_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_System_Nullable_uint__get_HasValue__);
    sub_1C2D490(&Method_System_Nullable_uint__get_Value__);
    sub_1C2D490(&System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
    byte_4C26A9D = 1;
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
    v11 = (System_Nullable_uint__o)&v72;
    if ( v10 != System_Nullable_uint___get_Value(
                  v11,
                  (const MethodInfo_38B2EF8 *)Method_System_Nullable_uint__get_Value__) )
    {
      v68 = sub_1C2D4A4(&System_IO_IOException_TypeInfo);
      v69 = (System_IO_IOException_o *)sub_1C2D6DC(v68);
      v70 = (System_String_o *)sub_1C2D4A4(&StringLiteral_8976/*"MdcStr:Dc Crc Error"*/);
      System_IO_IOException___ctor_64277280(v69, v70, 0);
      v71 = sub_1C2D4A4(&Method_MdcStr_Dc__);
      sub_1C2D5B8(v69, v71);
    }
  }
  if ( eorData )
  {
    Mk = (_DWORD *)sub_1C2D538(byte___TypeInfo, 4);
    if ( !Mk )
      goto LABEL_70;
    v15 = Mk[6];
    if ( !v15 )
      goto LABEL_68;
    *((_BYTE *)Mk + 32) = eorData;
    if ( v15 == 1 )
      goto LABEL_68;
    *((_BYTE *)Mk + 33) = BYTE1(eorData);
    if ( v15 <= 2 )
      goto LABEL_68;
    *((_BYTE *)Mk + 34) = BYTE2(eorData);
    if ( v15 == 3 )
      goto LABEL_68;
    *((_BYTE *)Mk + 35) = HIBYTE(eorData);
    if ( !v9 )
LABEL_70:
      sub_1C2D6EC(Mk, v13);
    if ( (int)v9->max_length >= 1 )
    {
      v16 = 0;
      max_length = (unsigned int)v9->max_length;
      while ( v16 < max_length && (v16 & 3) < Mk[6] )
      {
        v9->m_Items[v16] ^= *((_BYTE *)Mk + (v16 & 3) + 32);
        if ( max_length == ++v16 )
          goto LABEL_21;
      }
LABEL_68:
      sub_1C2D6F4(Mk, v13, v14);
    }
  }
LABEL_21:
  UTF8 = System_Text_Encoding__get_UTF8(0);
  v19 = UTF8;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Mk = NetworkManager__GetMk((const MethodInfo *)UTF8);
  if ( !v19 )
    goto LABEL_70;
  v20 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, _DWORD *, const MethodInfo *))v19->klass->vtable._18_GetBytes.methodPtr)(
          v19,
          Mk,
          v19->klass->vtable._18_GetBytes.method);
  v21 = System_Text_Encoding__get_UTF8(0);
  Mk = NetworkManager__GetCv((const MethodInfo *)v21);
  if ( !v21 )
    goto LABEL_70;
  v22 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, _DWORD *, const MethodInfo *))v21->klass->vtable._18_GetBytes.methodPtr)(
          v21,
          Mk,
          v21->klass->vtable._18_GetBytes.method);
  v23 = (System_Security_Cryptography_TripleDESCryptoServiceProvider_o *)sub_1C2D6DC(System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_TripleDESCryptoServiceProvider___ctor(v23, 0);
  v24 = (System_IO_MemoryStream_o *)sub_1C2D6DC(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v24, 0);
  if ( !v23 )
    sub_1C2D6EC(v25, v26);
  v27 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_TripleDESCryptoServiceProvider_o *, __int64, __int64, const MethodInfo *))v23->klass->vtable._23_CreateDecryptor.methodPtr)(
                                                             v23,
                                                             v20,
                                                             v22,
                                                             v23->klass->vtable._23_CreateDecryptor.method);
  v28 = (System_Security_Cryptography_CryptoStream_o *)sub_1C2D6DC(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v28, (System_IO_Stream_o *)v24, v27, 1, 0);
  if ( !v9 )
    sub_1C2D6EC(v29, v30);
  if ( !v28 )
    sub_1C2D6EC(v29, v30);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, System_Byte_array *, _QWORD, _QWORD, const MethodInfo *))v28->klass->vtable._34_Write.methodPtr)(
    v28,
    v9,
    0,
    LODWORD(v9->max_length),
    v28->klass->vtable._34_Write.method);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, const MethodInfo *))v28->klass->vtable._18_Close.methodPtr)(
    v28,
    v28->klass->vtable._18_Close.method);
  klass = v28->klass;
  v32 = *(unsigned __int16 *)&v28->klass->_2.rank;
  if ( *(_WORD *)&v28->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      p_offset += 4;
      if ( !v32 )
        goto LABEL_32;
    }
    v34 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_32:
    v34 = sub_1C7DCA8(v28, System_IDisposable_TypeInfo, 0);
  }
  v35 = (*(__int64 (__fastcall **)(System_Security_Cryptography_CryptoStream_o *, _QWORD))v34)(
          v28,
          *(_QWORD *)(v34 + 8));
  if ( !v24 )
    sub_1C2D6EC(v35, v36);
  v37 = (System_Byte_array *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v24->klass->vtable._40_ToArray.methodPtr)(
                               v24,
                               v24->klass->vtable._40_ToArray.method);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v24->klass->vtable._18_Close.methodPtr)(
    v24,
    v24->klass->vtable._18_Close.method);
  v38 = v24->klass;
  v39 = *(unsigned __int16 *)&v24->klass->_2.rank;
  if ( *(_WORD *)&v24->klass->_2.rank )
  {
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_39;
    }
    v41 = (__int64)&v38->vtable + 16 * *v40;
  }
  else
  {
LABEL_39:
    v41 = sub_1C7DCA8(v24, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v41)(v24, *(_QWORD *)(v41 + 8));
  v42 = (System_IO_MemoryStream_o *)sub_1C2D6DC(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v42, 0);
  v43 = (System_IO_MemoryStream_o *)sub_1C2D6DC(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_64281084(v43, v37, 0);
  v44 = (ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *)sub_1C2D6DC(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo);
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream___ctor(v44, (System_IO_Stream_o *)v43, 0);
  v45 = sub_1C2D538(byte___TypeInfo, 0x4000);
  v47 = v45;
  if ( !v45 )
    sub_1C2D6EC(0, v46);
  if ( !v44 )
    sub_1C2D6EC(v45, v46);
  while ( 1 )
  {
    v48 = ((__int64 (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v44->klass->vtable._31_Read.methodPtr)(
            v44,
            v47,
            0,
            *(unsigned int *)(v47 + 24),
            v44->klass->vtable._31_Read.method);
    if ( (int)v48 <= 0 )
      break;
    if ( !v42 )
      sub_1C2D6EC(v48, v49);
    ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v42->klass->vtable._34_Write.methodPtr)(
      v42,
      v47,
      0,
      (unsigned int)v48,
      v42->klass->vtable._34_Write.method);
  }
  ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, const MethodInfo *))v44->klass->vtable._18_Close.methodPtr)(
    v44,
    v44->klass->vtable._18_Close.method);
  v50 = v44->klass;
  v51 = *(unsigned __int16 *)&v44->klass->_2.rank;
  if ( *(_WORD *)&v44->klass->_2.rank )
  {
    v52 = &v50->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
    {
      --v51;
      v52 += 4;
      if ( !v51 )
        goto LABEL_50;
    }
    v53 = (__int64)&v50->vtable + 16 * *v52;
  }
  else
  {
LABEL_50:
    v53 = sub_1C7DCA8(v44, System_IDisposable_TypeInfo, 0);
  }
  v54 = (*(__int64 (__fastcall **)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, _QWORD))v53)(
          v44,
          *(_QWORD *)(v53 + 8));
  if ( !v43 )
    sub_1C2D6EC(v54, v55);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v43->klass->vtable._18_Close.methodPtr)(
    v43,
    v43->klass->vtable._18_Close.method);
  v56 = v43->klass;
  v57 = *(unsigned __int16 *)&v43->klass->_2.rank;
  if ( *(_WORD *)&v43->klass->_2.rank )
  {
    v58 = &v56->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v58 - 1) != System_IDisposable_TypeInfo )
    {
      --v57;
      v58 += 4;
      if ( !v57 )
        goto LABEL_57;
    }
    v59 = (__int64)&v56->vtable + 16 * *v58;
  }
  else
  {
LABEL_57:
    v59 = sub_1C7DCA8(v43, System_IDisposable_TypeInfo, 0);
  }
  v60 = (*(__int64 (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v59)(v43, *(_QWORD *)(v59 + 8));
  if ( !v42 )
    sub_1C2D6EC(v60, v61);
  v62 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v42->klass->vtable._40_ToArray.methodPtr)(
          v42,
          v42->klass->vtable._40_ToArray.method);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v42->klass->vtable._18_Close.methodPtr)(
    v42,
    v42->klass->vtable._18_Close.method);
  v63 = v42->klass;
  v64 = *(unsigned __int16 *)&v42->klass->_2.rank;
  if ( *(_WORD *)&v42->klass->_2.rank )
  {
    v65 = &v63->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v65 - 1) != System_IDisposable_TypeInfo )
    {
      --v64;
      v65 += 4;
      if ( !v64 )
        goto LABEL_64;
    }
    v66 = (__int64)&v63->vtable + 16 * *v65;
  }
  else
  {
LABEL_64:
    v66 = sub_1C7DCA8(v42, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v66)(v42, *(_QWORD *)(v66 + 8));
  Mk = System_Text_Encoding__get_UTF8(0);
  if ( !Mk )
    goto LABEL_70;
  return (System_String_o *)(*(__int64 (__fastcall **)(_DWORD *, __int64, _QWORD))(*(_QWORD *)Mk + 872LL))(
                              Mk,
                              v62,
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
  __int64 v41; // x2
  unsigned int v42; // w8
  unsigned __int64 v43; // x8
  unsigned __int64 max_length; // x9
  uint32_t v45; // w1
  System_Nullable_uint__o v46; // x0
  System_Nullable_uint__o v48; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C26A9C & 1) == 0 )
  {
    sub_1C2D490(&ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo);
    sub_1C2D490(&byte___TypeInfo);
    sub_1C2D490(&System_Convert_TypeInfo);
    sub_1C2D490(&Crc32_TypeInfo);
    sub_1C2D490(&System_Security_Cryptography_CryptoStream_TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_IO_MemoryStream_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_System_Nullable_uint___ctor__);
    sub_1C2D490(&Method_System_Nullable_uint__get_HasValue__);
    sub_1C2D490(&System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
    byte_4C26A9C = 1;
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
  v15 = (System_Security_Cryptography_TripleDESCryptoServiceProvider_o *)sub_1C2D6DC(System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_TripleDESCryptoServiceProvider___ctor(v15, 0);
  v16 = (System_IO_MemoryStream_o *)sub_1C2D6DC(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v16, 0);
  if ( !v15 )
    sub_1C2D6EC(v17, v18);
  v19 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_TripleDESCryptoServiceProvider_o *, __int64, __int64, const MethodInfo *))v15->klass->vtable._21_CreateEncryptor.methodPtr)(
                                                             v15,
                                                             v12,
                                                             v14,
                                                             v15->klass->vtable._21_CreateEncryptor.method);
  v20 = (System_Security_Cryptography_CryptoStream_o *)sub_1C2D6DC(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v20, (System_IO_Stream_o *)v16, v19, 1, 0);
  v21 = (ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *)sub_1C2D6DC(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo);
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream___ctor(v21, (System_IO_Stream_o *)v20, 0);
  if ( !v9 )
    sub_1C2D6EC(v22, v23);
  if ( !v21 )
    sub_1C2D6EC(v22, v23);
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
    v27 = sub_1C7DCA8(v21, System_IDisposable_TypeInfo, 0);
  }
  v28 = (*(__int64 (__fastcall **)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, _QWORD))v27)(
          v21,
          *(_QWORD *)(v27 + 8));
  if ( !v20 )
    sub_1C2D6EC(v28, v29);
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
    v33 = sub_1C7DCA8(v20, System_IDisposable_TypeInfo, 0);
  }
  v34 = (*(__int64 (__fastcall **)(System_Security_Cryptography_CryptoStream_o *, _QWORD))v33)(
          v20,
          *(_QWORD *)(v33 + 8));
  if ( !v16 )
    sub_1C2D6EC(v34, v35);
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
    v40 = sub_1C7DCA8(v16, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v40)(v16, *(_QWORD *)(v40 + 8));
  if ( !eorData )
    goto LABEL_43;
  UTF8 = (unsigned int *)sub_1C2D538(byte___TypeInfo, 4);
  if ( !UTF8 )
    goto LABEL_51;
  v42 = UTF8[6];
  if ( !v42 )
    goto LABEL_50;
  *((_BYTE *)UTF8 + 32) = eorData;
  if ( v42 == 1 )
    goto LABEL_50;
  *((_BYTE *)UTF8 + 33) = BYTE1(eorData);
  if ( v42 <= 2 )
    goto LABEL_50;
  *((_BYTE *)UTF8 + 34) = BYTE2(eorData);
  if ( v42 == 3 )
    goto LABEL_50;
  *((_BYTE *)UTF8 + 35) = HIBYTE(eorData);
  if ( !v36 )
LABEL_51:
    sub_1C2D6EC(UTF8, v8);
  if ( (int)v36->max_length >= 1 )
  {
    v43 = 0;
    max_length = (unsigned int)v36->max_length;
    while ( v43 < max_length && (v43 & 3) < UTF8[6] )
    {
      v36->m_Items[v43] ^= *((_BYTE *)UTF8 + (v43 & 3) + 32);
      if ( max_length == ++v43 )
        goto LABEL_43;
    }
LABEL_50:
    sub_1C2D6F4(UTF8, v8, v41);
  }
LABEL_43:
  if ( crc->fields.hasValue )
  {
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v45 = Crc32__Compute(v36, 0);
    v46 = (System_Nullable_uint__o)&v48;
    v48 = 0;
    System_Nullable_uint____ctor(v46, v45, (const MethodInfo_38B2EE0 *)Method_System_Nullable_uint___ctor__);
    *crc = v48;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToBase64String(v36, 0);
}