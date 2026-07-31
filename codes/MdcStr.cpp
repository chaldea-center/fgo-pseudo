void MdcStr___ctor(MdcStr_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *MdcStr__Dc(
        System_String_o *str,
        uint32_t eorData,
        System_Nullable_uint__o crc,
        const MethodInfo *method)
{
  bool hasValue; // w19
  System_Byte_array *v7; // x0
  __int64 v8; // x1
  bool v9; // zf
  System_Byte_array *v10; // x19
  uint32_t v11; // w21
  System_Nullable_uint__o v12; // x0
  System_String_o *Mk; // x0
  __int64 v14; // x1
  unsigned int klass; // w8
  unsigned __int64 v16; // x8
  unsigned __int64 max_length; // x9
  System_Text_Encoding_o *UTF8; // x0
  __int64 v19; // x1
  System_Text_Encoding_o *v20; // x20
  __int64 v21; // x20
  System_Text_Encoding_o *v22; // x21
  __int64 v23; // x22
  System_Security_Cryptography_TripleDESCryptoServiceProvider_o *v24; // x23
  System_IO_MemoryStream_o *v25; // x21
  __int64 v26; // x0
  __int64 v27; // x1
  System_Security_Cryptography_ICryptoTransform_o *v28; // x22
  System_Security_Cryptography_CryptoStream_o *v29; // x20
  __int64 v30; // x0
  __int64 v31; // x1
  System_Security_Cryptography_CryptoStream_c *v32; // x8
  __int64 v33; // x9
  int32_t *p_offset; // x10
  __int64 v35; // x0
  __int64 v36; // x1
  System_Byte_array *v37; // x19
  System_IO_MemoryStream_c *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0
  System_IO_MemoryStream_o *v42; // x20
  System_IO_MemoryStream_o *v43; // x20
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *v44; // x21
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x1
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_c *v48; // x8
  __int64 v49; // x9
  int32_t *v50; // x10
  __int64 v51; // x0
  __int64 v52; // x0
  System_IO_IOException_o *v53; // x19
  System_String_o *v54; // x0
  __int64 v55; // x0
  __int64 v56; // x1
  System_IO_MemoryStream_o *v58; // [xsp+48h] [xbp-68h]
  System_Nullable_uint__o v59; // [xsp+68h] [xbp-48h] BYREF

  hasValue = crc.fields.hasValue;
  v59 = crc;
  if ( (byte_5937E19 & 1) == 0 )
  {
    sub_21FFC50(&ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo);
    sub_21FFC50(&byte___TypeInfo);
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&Crc32_TypeInfo);
    sub_21FFC50(&System_Security_Cryptography_CryptoStream_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_IO_MemoryStream_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_System_Nullable_uint__get_HasValue__);
    sub_21FFC50(&Method_System_Nullable_uint__get_Value__);
    sub_21FFC50(&System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
    byte_5937E19 = 1;
  }
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, *(_QWORD *)&eorData);
  v7 = System_Convert__FromBase64String(str, 0);
  v9 = !hasValue;
  v10 = v7;
  if ( !v9 )
  {
    if ( !*(&Crc32_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo, v8);
    v11 = Crc32__Compute(v10, 0);
    v12 = (System_Nullable_uint__o)&v59;
    if ( v11 != System_Nullable_uint___get_Value(
                  v12,
                  (const MethodInfo_45B40D0 *)Method_System_Nullable_uint__get_Value__) )
    {
      v52 = sub_21FFC64(&System_IO_IOException_TypeInfo);
      v53 = (System_IO_IOException_o *)sub_21FFEBC(v52);
      v54 = (System_String_o *)sub_21FFC64(&StringLiteral_9338/*"MdcStr:Dc Crc Error"*/);
      System_IO_IOException___ctor_76656180(v53, v54, 0);
      v55 = sub_21FFC64(&Method_MdcStr_Dc__);
      sub_21FFD90(v53, v55);
    }
  }
  if ( eorData )
  {
    Mk = (System_String_o *)sub_21FFD10(byte___TypeInfo, 4);
    if ( !Mk )
      goto LABEL_60;
    klass = (unsigned int)Mk[1].klass;
    if ( !klass )
      goto LABEL_53;
    LOBYTE(Mk[1].monitor) = eorData;
    if ( klass == 1 )
      goto LABEL_53;
    BYTE1(Mk[1].monitor) = BYTE1(eorData);
    if ( klass <= 2 )
      goto LABEL_53;
    BYTE2(Mk[1].monitor) = BYTE2(eorData);
    if ( klass == 3 )
      goto LABEL_53;
    BYTE3(Mk[1].monitor) = HIBYTE(eorData);
    if ( !v10 )
LABEL_60:
      sub_21FFECC(Mk, v14);
    if ( (int)v10->max_length >= 1 )
    {
      v16 = 0;
      max_length = (unsigned int)v10->max_length;
      while ( v16 < max_length && (v16 & 3) < LODWORD(Mk[1].klass) )
      {
        v10->m_Items[v16] ^= *((_BYTE *)&Mk[1].monitor + (v16 & 3));
        if ( max_length == ++v16 )
          goto LABEL_21;
      }
LABEL_53:
      sub_21FFED4(Mk);
    }
  }
LABEL_21:
  UTF8 = System_Text_Encoding__get_UTF8(0);
  v20 = UTF8;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19);
  Mk = NetworkManager__GetMk((const MethodInfo *)UTF8);
  if ( v20 )
  {
    v21 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, const MethodInfo *))v20->klass->vtable._18_GetBytes.methodPtr)(
            v20,
            Mk,
            v20->klass->vtable._18_GetBytes.method);
    v22 = System_Text_Encoding__get_UTF8(0);
    Mk = NetworkManager__GetCv((const MethodInfo *)v22);
    if ( v22 )
    {
      v23 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, const MethodInfo *))v22->klass->vtable._18_GetBytes.methodPtr)(
              v22,
              Mk,
              v22->klass->vtable._18_GetBytes.method);
      v24 = (System_Security_Cryptography_TripleDESCryptoServiceProvider_o *)sub_21FFEBC(System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
      System_Security_Cryptography_TripleDESCryptoServiceProvider___ctor(v24, 0);
      v25 = (System_IO_MemoryStream_o *)sub_21FFEBC(System_IO_MemoryStream_TypeInfo);
      System_IO_MemoryStream___ctor(v25, 0);
      if ( !v24 )
        sub_21FFECC(v26, v27);
      v28 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_TripleDESCryptoServiceProvider_o *, __int64, __int64, const MethodInfo *))v24->klass->vtable._23_CreateDecryptor.methodPtr)(
                                                                 v24,
                                                                 v21,
                                                                 v23,
                                                                 v24->klass->vtable._23_CreateDecryptor.method);
      v29 = (System_Security_Cryptography_CryptoStream_o *)sub_21FFEBC(System_Security_Cryptography_CryptoStream_TypeInfo);
      System_Security_Cryptography_CryptoStream___ctor(v29, (System_IO_Stream_o *)v25, v28, 1, 0);
      if ( !v10 || !v29 )
        sub_21FFECC(v30, v31);
      ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, System_Byte_array *, _QWORD, _QWORD, const MethodInfo *))v29->klass->vtable._34_Write.methodPtr)(
        v29,
        v10,
        0,
        LODWORD(v10->max_length),
        v29->klass->vtable._34_Write.method);
      v29->klass->vtable._18_Close.methodPtr();
      v32 = v29->klass;
      v33 = *(unsigned __int16 *)&v29->klass->_2.rank;
      if ( *(_WORD *)&v29->klass->_2.rank )
      {
        p_offset = &v32->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v33;
          p_offset += 4;
          if ( !v33 )
            goto LABEL_32;
        }
        v35 = (__int64)&v32->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_32:
        v35 = sub_2237E2C(v29, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(System_Security_Cryptography_CryptoStream_o *, _QWORD))v35)(v29, *(_QWORD *)(v35 + 8));
      if ( !v25 )
        sub_21FFECC(0, v36);
      v37 = (System_Byte_array *)((__int64 (*)(void))v25->klass->vtable._40_ToArray.methodPtr)();
      v25->klass->vtable._18_Close.methodPtr();
      v38 = v25->klass;
      v39 = *(unsigned __int16 *)&v25->klass->_2.rank;
      if ( *(_WORD *)&v25->klass->_2.rank )
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
        v41 = sub_2237E2C(v25, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v41)(v25, *(_QWORD *)(v41 + 8));
      v42 = (System_IO_MemoryStream_o *)sub_21FFEBC(System_IO_MemoryStream_TypeInfo);
      System_IO_MemoryStream___ctor(v42, 0);
      v58 = v42;
      v43 = (System_IO_MemoryStream_o *)sub_21FFEBC(System_IO_MemoryStream_TypeInfo);
      System_IO_MemoryStream___ctor_76663240(v43, v37, 0);
      v44 = (ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *)sub_21FFEBC(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo);
      ICSharpCode_SharpZipLib_BZip2_BZip2InputStream___ctor(v44, (System_IO_Stream_o *)v43, 0);
      v45 = sub_21FFD10(byte___TypeInfo, 0x4000);
      if ( v45 )
      {
        while ( 1 )
        {
          v45 = (__int64)v44;
          if ( !v44 )
            break;
          if ( ((int (*)(void))v44->klass->vtable._31_Read.methodPtr)() <= 0 )
          {
            v44->klass->vtable._18_Close.methodPtr();
            v48 = v44->klass;
            v49 = *(unsigned __int16 *)&v44->klass->_2.rank;
            if ( *(_WORD *)&v44->klass->_2.rank )
            {
              v50 = &v48->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
              {
                --v49;
                v50 += 4;
                if ( !v49 )
                  goto LABEL_50;
              }
              v51 = (__int64)&v48->vtable + 16 * *v50;
            }
            else
            {
LABEL_50:
              v51 = sub_2237E2C(v44, System_IDisposable_TypeInfo, 0);
            }
            (*(void (__fastcall **)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, _QWORD))v51)(
              v44,
              *(_QWORD *)(v51 + 8));
            sub_21FFECC(0, v56);
          }
          if ( !v58 )
            sub_21FFECC(0, v47);
          v58->klass->vtable._34_Write.methodPtr();
        }
      }
      sub_21FFECC(v45, v46);
    }
  }
  goto LABEL_60;
}


System_String_o *MdcStr__Ec(
        System_Nullable_uint__o *crc,
        System_String_o *str,
        uint32_t eorData,
        const MethodInfo *method)
{
  unsigned int *UTF8; // x0
  __int64 v8; // x1
  __int64 v9; // x21
  System_Text_Encoding_o *v10; // x0
  __int64 v11; // x1
  System_Text_Encoding_o *v12; // x22
  __int64 v13; // x22
  System_Text_Encoding_o *v14; // x23
  __int64 v15; // x24
  System_Security_Cryptography_TripleDESCryptoServiceProvider_o *v16; // x25
  System_IO_MemoryStream_o *v17; // x23
  __int64 v18; // x0
  __int64 v19; // x1
  System_Security_Cryptography_ICryptoTransform_o *v20; // x24
  System_Security_Cryptography_CryptoStream_o *v21; // x22
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *v22; // x23
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x1
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_c *klass; // x8
  __int64 v27; // x9
  int *p_offset; // x10
  __int64 v29; // x0
  __int64 v30; // x1
  System_Security_Cryptography_CryptoStream_c *v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x1
  __int64 v36; // x1
  System_Byte_array *v37; // x21
  System_IO_MemoryStream_o *v38; // x22
  System_IO_MemoryStream_c *v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  unsigned int v43; // w8
  unsigned __int64 v44; // x8
  unsigned __int64 max_length; // x9
  uint32_t v46; // w1
  System_Nullable_uint__o v47; // x0
  System_Nullable_uint__o v49; // [xsp+28h] [xbp-78h] BYREF
  System_IO_MemoryStream_o **v50; // [xsp+30h] [xbp-70h]
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *v51; // [xsp+38h] [xbp-68h]
  System_Security_Cryptography_CryptoStream_o *v52; // [xsp+40h] [xbp-60h]
  System_IO_MemoryStream_o *v53; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_5937E18 & 1) == 0 )
  {
    sub_21FFC50(&ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo);
    sub_21FFC50(&byte___TypeInfo);
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&Crc32_TypeInfo);
    sub_21FFC50(&System_Security_Cryptography_CryptoStream_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_IO_MemoryStream_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_System_Nullable_uint___ctor__);
    sub_21FFC50(&Method_System_Nullable_uint__get_HasValue__);
    sub_21FFC50(&System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
    byte_5937E18 = 1;
  }
  v52 = 0;
  v53 = 0;
  v51 = 0;
  UTF8 = (unsigned int *)System_Text_Encoding__get_UTF8(0);
  if ( !UTF8 )
    goto LABEL_55;
  v9 = (*(__int64 (__fastcall **)(unsigned int *, System_String_o *, _QWORD))(*(_QWORD *)UTF8 + 600LL))(
         UTF8,
         str,
         *(_QWORD *)(*(_QWORD *)UTF8 + 608LL));
  v10 = System_Text_Encoding__get_UTF8(0);
  v12 = v10;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
  UTF8 = (unsigned int *)NetworkManager__GetMk((const MethodInfo *)v10);
  if ( !v12 )
    goto LABEL_55;
  v13 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, unsigned int *, const MethodInfo *))v12->klass->vtable._18_GetBytes.methodPtr)(
          v12,
          UTF8,
          v12->klass->vtable._18_GetBytes.method);
  v14 = System_Text_Encoding__get_UTF8(0);
  UTF8 = (unsigned int *)NetworkManager__GetCv((const MethodInfo *)v14);
  if ( !v14 )
    goto LABEL_55;
  v15 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, unsigned int *, const MethodInfo *))v14->klass->vtable._18_GetBytes.methodPtr)(
          v14,
          UTF8,
          v14->klass->vtable._18_GetBytes.method);
  v16 = (System_Security_Cryptography_TripleDESCryptoServiceProvider_o *)sub_21FFEBC(System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_TripleDESCryptoServiceProvider___ctor(v16, 0);
  v17 = (System_IO_MemoryStream_o *)sub_21FFEBC(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v17, 0);
  v53 = v17;
  v49 = 0;
  v50 = &v53;
  if ( !v16 )
    sub_21FFECC(v18, v19);
  v20 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_TripleDESCryptoServiceProvider_o *, __int64, __int64, const MethodInfo *))v16->klass->vtable._21_CreateEncryptor.methodPtr)(
                                                             v16,
                                                             v13,
                                                             v15,
                                                             v16->klass->vtable._21_CreateEncryptor.method);
  v21 = (System_Security_Cryptography_CryptoStream_o *)sub_21FFEBC(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v21, (System_IO_Stream_o *)v17, v20, 1, 0);
  v52 = v21;
  v22 = (ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *)sub_21FFEBC(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo);
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream___ctor(v22, (System_IO_Stream_o *)v21, 0);
  v51 = v22;
  if ( !v9 || !v22 )
    sub_21FFECC(v23, v24);
  ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v22->klass->vtable._34_Write.methodPtr)(
    v22,
    v9,
    0,
    *(unsigned int *)(v9 + 24),
    v22->klass->vtable._34_Write.method);
  if ( !v51 )
    sub_21FFECC(0, v25);
  v51->klass->vtable._18_Close.methodPtr();
  klass = v51->klass;
  v27 = *(unsigned __int16 *)&v51->klass->_2.rank;
  if ( *(_WORD *)&v51->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      p_offset += 4;
      if ( !v27 )
        goto LABEL_16;
    }
    v29 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_16:
    v29 = sub_2237E2C(v51, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, _QWORD))v29)(v51, *(_QWORD *)(v29 + 8));
  if ( !v52 )
    sub_21FFECC(0, v30);
  v52->klass->vtable._18_Close.methodPtr();
  v31 = v52->klass;
  v32 = *(unsigned __int16 *)&v52->klass->_2.rank;
  if ( *(_WORD *)&v52->klass->_2.rank )
  {
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_23;
    }
    v34 = (__int64)&v31->vtable + 16 * *v33;
  }
  else
  {
LABEL_23:
    v34 = sub_2237E2C(v52, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Security_Cryptography_CryptoStream_o *, _QWORD))v34)(v52, *(_QWORD *)(v34 + 8));
  if ( !v53 )
    sub_21FFECC(0, v35);
  v37 = (System_Byte_array *)((__int64 (*)(void))v53->klass->vtable._40_ToArray.methodPtr)();
  if ( !v53 )
    sub_21FFECC(0, v36);
  v53->klass->vtable._18_Close.methodPtr();
  v38 = *v50;
  if ( *v50 )
  {
    v39 = v38->klass;
    v40 = *(unsigned __int16 *)&v38->klass->_2.rank;
    if ( *(_WORD *)&v38->klass->_2.rank )
    {
      v41 = &v39->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_32;
      }
      v42 = (__int64)&v39->vtable + 16 * *v41;
    }
    else
    {
LABEL_32:
      v42 = sub_2237E2C(*v50, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v42)(v38, *(_QWORD *)(v42 + 8));
  }
  if ( !eorData )
    goto LABEL_47;
  UTF8 = (unsigned int *)sub_21FFD10(byte___TypeInfo, 4);
  if ( !UTF8 )
    goto LABEL_55;
  v43 = UTF8[6];
  if ( !v43 )
    goto LABEL_54;
  *((_BYTE *)UTF8 + 32) = eorData;
  if ( v43 == 1 )
    goto LABEL_54;
  *((_BYTE *)UTF8 + 33) = BYTE1(eorData);
  if ( v43 <= 2 )
    goto LABEL_54;
  *((_BYTE *)UTF8 + 34) = BYTE2(eorData);
  if ( v43 == 3 )
    goto LABEL_54;
  *((_BYTE *)UTF8 + 35) = HIBYTE(eorData);
  if ( !v37 )
LABEL_55:
    sub_21FFECC(UTF8, v8);
  if ( (int)v37->max_length >= 1 )
  {
    v44 = 0;
    max_length = (unsigned int)v37->max_length;
    while ( v44 < max_length && (v44 & 3) < UTF8[6] )
    {
      v37->m_Items[v44] ^= *((_BYTE *)UTF8 + (v44 & 3) + 32);
      if ( max_length == ++v44 )
        goto LABEL_47;
    }
LABEL_54:
    sub_21FFED4(UTF8);
  }
LABEL_47:
  if ( crc->fields.hasValue )
  {
    if ( !*(&Crc32_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo, v8);
    v46 = Crc32__Compute(v37, 0);
    v47 = (System_Nullable_uint__o)&v49;
    v49 = 0;
    System_Nullable_uint____ctor(v47, v46, (const MethodInfo_45B40B8 *)Method_System_Nullable_uint___ctor__);
    *crc = v49;
  }
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v8);
  return System_Convert__ToBase64String(v37, 0);
}