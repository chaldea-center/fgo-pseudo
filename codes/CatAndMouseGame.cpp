void __fastcall CatAndMouseGame___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Byte_array *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x0
  struct CatAndMouseGame_StaticFields *static_fields; // x8
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x0
  struct CatAndMouseGame_StaticFields *v18; // x8
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x0
  struct CatAndMouseGame_StaticFields *v22; // x8
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  __int64 v25; // x0
  struct CatAndMouseGame_StaticFields *v26; // x8
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 v29; // x0
  struct CatAndMouseGame_StaticFields *v30; // x8
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  __int64 v33; // x0
  struct CatAndMouseGame_StaticFields *v34; // x8
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  __int64 v37; // x0
  struct CatAndMouseGame_StaticFields *v38; // x8
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  __int64 v41; // x0
  struct CatAndMouseGame_StaticFields *v42; // x8
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  __int64 v45; // x0
  struct CatAndMouseGame_StaticFields *v46; // x8
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  __int64 v49; // x0
  struct CatAndMouseGame_StaticFields *v50; // x8
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  __int64 v53; // x0
  struct CatAndMouseGame_StaticFields *v54; // x8
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  System_Collections_Generic_Dictionary_object__object__o *v57; // x19
  struct CatAndMouseGame_StaticFields *v58; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  System_Collections_Generic_Dictionary_object__object__o *v61; // x19
  struct CatAndMouseGame_StaticFields *v62; // x0
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  System_Text_Encoding_o *UTF8; // x0
  __int64 v66; // x1
  __int64 v67; // x19
  __int64 v68; // x2
  unsigned __int64 v69; // x8
  unsigned int v70; // w10
  struct CatAndMouseGame_StaticFields *v71; // x11
  struct System_Byte_array *stageTop; // x10
  unsigned int v73; // w11
  uint8_t v74; // w12
  struct System_Byte_array *dataItem; // x11
  int v76; // w8
  unsigned __int64 v77; // x9
  __int64 v78; // x10
  struct CatAndMouseGame_StaticFields *v79; // x12
  struct System_Byte_array *baseData; // x13
  unsigned __int64 v81; // x12
  struct System_Byte_array *v82; // x13
  __int64 v83; // x12
  struct System_Byte_array *v84; // x12
  __int64 v85; // x11
  char *v86; // x11
  __int64 v87; // x12
  int v88; // w13
  struct System_Byte_array *baseTop; // x13
  unsigned __int64 v90; // x12
  struct System_Byte_array *v91; // x13
  __int64 v92; // x12
  struct System_Byte_array *v93; // x12
  __int64 v94; // x11

  if ( (byte_4B4412F & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Application_TypeInfo, v1);
    sub_1BDB878(&byte___TypeInfo, v2);
    sub_1BDB878(&CatAndMouseGame_TypeInfo, v3);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__byte_______ctor__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, v5);
    sub_1BDB878(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v6);
    sub_1BDB878(&System_Collections_Generic_Dictionary_string__byte______TypeInfo, v7);
    sub_1BDB878(&StringLiteral_21166/*"kzdMtpmzqCHAfx00saU1gIhTjYCuOD1JstqtisXsGYqRVcqrHRydj3k6vJCySu3g"*/, v8);
    sub_1BDB878(&StringLiteral_10350/*"PFBs0eIuunoxKkCcLbqDVerU1rShhS276SAL3A8tFLUfGvtz3F3FFeKELIk3Nvi4"*/, v9);
    byte_4B4412F = 1;
  }
  v10 = (struct System_Byte_array *)sub_1BDB920(byte___TypeInfo, 32LL);
  CatAndMouseGame_TypeInfo->static_fields->ownerTop = v10;
  sub_1BDB81C((CGThumbnailListItem_o *)CatAndMouseGame_TypeInfo->static_fields, (int32_t)v10, v11, v12);
  v13 = sub_1BDB920(byte___TypeInfo, 32LL);
  static_fields = CatAndMouseGame_TypeInfo->static_fields;
  static_fields->ownerData = (struct System_Byte_array *)v13;
  sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->ownerData, v13, v15, v16);
  v17 = sub_1BDB920(byte___TypeInfo, 32LL);
  v18 = CatAndMouseGame_TypeInfo->static_fields;
  v18->InfoTop = (struct System_Byte_array *)v17;
  sub_1BDB81C((CGThumbnailListItem_o *)&v18->InfoTop, v17, v19, v20);
  v21 = sub_1BDB920(byte___TypeInfo, 32LL);
  v22 = CatAndMouseGame_TypeInfo->static_fields;
  v22->infoData = (struct System_Byte_array *)v21;
  sub_1BDB81C((CGThumbnailListItem_o *)&v22->infoData, v21, v23, v24);
  v25 = sub_1BDB920(byte___TypeInfo, 32LL);
  v26 = CatAndMouseGame_TypeInfo->static_fields;
  v26->stageTop = (struct System_Byte_array *)v25;
  sub_1BDB81C((CGThumbnailListItem_o *)&v26->stageTop, v25, v27, v28);
  v29 = sub_1BDB920(byte___TypeInfo, 32LL);
  v30 = CatAndMouseGame_TypeInfo->static_fields;
  v30->stageData = (struct System_Byte_array *)v29;
  sub_1BDB81C((CGThumbnailListItem_o *)&v30->stageData, v29, v31, v32);
  v33 = sub_1BDB920(byte___TypeInfo, 32LL);
  v34 = CatAndMouseGame_TypeInfo->static_fields;
  v34->baseTop = (struct System_Byte_array *)v33;
  sub_1BDB81C((CGThumbnailListItem_o *)&v34->baseTop, v33, v35, v36);
  v37 = sub_1BDB920(byte___TypeInfo, 32LL);
  v38 = CatAndMouseGame_TypeInfo->static_fields;
  v38->baseData = (struct System_Byte_array *)v37;
  sub_1BDB81C((CGThumbnailListItem_o *)&v38->baseData, v37, v39, v40);
  v41 = sub_1BDB920(byte___TypeInfo, 32LL);
  v42 = CatAndMouseGame_TypeInfo->static_fields;
  v42->BattleKey = (struct System_Byte_array *)v41;
  sub_1BDB81C((CGThumbnailListItem_o *)&v42->BattleKey, v41, v43, v44);
  v45 = sub_1BDB920(byte___TypeInfo, 32LL);
  v46 = CatAndMouseGame_TypeInfo->static_fields;
  v46->BattleIV = (struct System_Byte_array *)v45;
  sub_1BDB81C((CGThumbnailListItem_o *)&v46->BattleIV, v45, v47, v48);
  v49 = sub_1BDB920(byte___TypeInfo, 32LL);
  v50 = CatAndMouseGame_TypeInfo->static_fields;
  v50->sideTop = (struct System_Byte_array *)v49;
  sub_1BDB81C((CGThumbnailListItem_o *)&v50->sideTop, v49, v51, v52);
  v53 = sub_1BDB920(byte___TypeInfo, 32LL);
  v54 = CatAndMouseGame_TypeInfo->static_fields;
  v54->sideData = (struct System_Byte_array *)v53;
  sub_1BDB81C((CGThumbnailListItem_o *)&v54->sideData, v53, v55, v56);
  v57 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v57,
    (const MethodInfo_339F880 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  v58 = CatAndMouseGame_TypeInfo->static_fields;
  v58->assetbundleKeyCollection = (struct System_Collections_Generic_Dictionary_string__string__o *)v57;
  sub_1BDB81C((CGThumbnailListItem_o *)&v58->assetbundleKeyCollection, (int32_t)v57, v59, v60);
  v61 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_string__byte______TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v61,
    (const MethodInfo_339F880 *)Method_System_Collections_Generic_Dictionary_string__byte_______ctor__);
  v62 = CatAndMouseGame_TypeInfo->static_fields;
  v62->keyCollection = (struct System_Collections_Generic_Dictionary_string__byte______o *)v61;
  sub_1BDB81C((CGThumbnailListItem_o *)&v62->keyCollection, (int32_t)v61, v63, v64);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( !UnityEngine_Application__get_isPlaying(0LL) )
  {
    UTF8 = System_Text_Encoding__get_UTF8(0LL);
    if ( !UTF8 )
      goto LABEL_53;
    v67 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
            UTF8,
            StringLiteral_21166/*"kzdMtpmzqCHAfx00saU1gIhTjYCuOD1JstqtisXsGYqRVcqrHRydj3k6vJCySu3g"*/,
            UTF8->klass->vtable._19_GetBytes.methodPtr);
    UTF8 = System_Text_Encoding__get_UTF8(0LL);
    if ( !UTF8 )
      goto LABEL_53;
    UTF8 = (System_Text_Encoding_o *)((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                                       UTF8,
                                       StringLiteral_10350/*"PFBs0eIuunoxKkCcLbqDVerU1rShhS276SAL3A8tFLUfGvtz3F3FFeKELIk3Nvi4"*/,
                                       UTF8->klass->vtable._19_GetBytes.methodPtr);
    if ( !v67 )
      goto LABEL_53;
    if ( (int)*(_QWORD *)(v67 + 24) >= 1 )
    {
      v69 = 0LL;
      v70 = *(_QWORD *)(v67 + 24);
      do
      {
        v71 = CatAndMouseGame_TypeInfo->static_fields;
        if ( (v69 & 1) != 0 )
        {
          if ( v69 >= v70 )
            goto LABEL_52;
          stageTop = v71->stageTop;
          if ( !stageTop )
            goto LABEL_53;
          v73 = (unsigned int)v69 >> 1;
          if ( (unsigned int)v69 >> 1 >= stageTop->max_length )
LABEL_52:
            sub_1BDBADC(UTF8, v66, v68);
        }
        else
        {
          if ( v69 >= v70 )
            goto LABEL_52;
          stageTop = v71->stageData;
          if ( !stageTop )
            goto LABEL_53;
          v73 = (unsigned int)v69 >> 1;
          if ( (unsigned int)v69 >> 1 >= stageTop->max_length )
            goto LABEL_52;
        }
        v74 = *(_BYTE *)(v67 + 32 + v69++);
        stageTop->m_Items[v73 + 4] = v74;
        v70 = *(_DWORD *)(v67 + 24);
      }
      while ( (__int64)v69 < (int)v70 );
    }
    if ( !UTF8 )
LABEL_53:
      sub_1BDBAD4(UTF8, v66);
    dataItem = (struct System_Byte_array *)UTF8->fields.dataItem;
    if ( (int)dataItem >= 4 )
    {
      v76 = 0;
      v77 = 0LL;
      v78 = 0LL;
      do
      {
        v79 = CatAndMouseGame_TypeInfo->static_fields;
        if ( (v78 & 1) != 0 )
        {
          if ( v77 >= (unsigned int)dataItem )
            goto LABEL_52;
          baseTop = v79->baseTop;
          if ( !baseTop )
            goto LABEL_53;
          v90 = v76 & 0xFFFFFFFFFFFFFFFCLL;
          if ( (unsigned int)v90 >= baseTop->max_length )
            goto LABEL_52;
          baseTop->m_Items[v90 + 4] = *(&UTF8->fields.m_deserializedFromEverett + v77);
          if ( v77 + 1 >= LODWORD(UTF8->fields.dataItem) )
            goto LABEL_52;
          v91 = CatAndMouseGame_TypeInfo->static_fields->baseTop;
          if ( !v91 )
            goto LABEL_53;
          v92 = (int)v90 | 1LL;
          if ( (unsigned int)v92 >= v91->max_length )
            goto LABEL_52;
          v91->m_Items[v92 + 4] = *(&UTF8->fields.m_isReadOnly + v77);
          if ( v77 + 2 >= LODWORD(UTF8->fields.dataItem) )
            goto LABEL_52;
          v93 = CatAndMouseGame_TypeInfo->static_fields->baseTop;
          if ( !v93 )
            goto LABEL_53;
          v94 = v76 | 2LL;
          if ( (unsigned int)v94 >= v93->max_length )
            goto LABEL_52;
          v93->m_Items[v94 + 4] = *(&UTF8->fields.m_isReadOnly + v77 + 1);
          if ( v77 + 3 >= LODWORD(UTF8->fields.dataItem) )
            goto LABEL_52;
          dataItem = CatAndMouseGame_TypeInfo->static_fields->baseTop;
          if ( !dataItem )
            goto LABEL_53;
          v88 = v76 | 3;
          if ( (v76 | 3u) >= dataItem->max_length )
            goto LABEL_52;
          v87 = (4 * v78) | 3;
        }
        else
        {
          if ( v77 >= (unsigned int)dataItem )
            goto LABEL_52;
          baseData = v79->baseData;
          if ( !baseData )
            goto LABEL_53;
          v81 = v76 & 0xFFFFFFFFFFFFFFFCLL;
          if ( (unsigned int)v81 >= baseData->max_length )
            goto LABEL_52;
          baseData->m_Items[v81 + 4] = *(&UTF8->fields.m_deserializedFromEverett + v77);
          if ( v77 + 1 >= LODWORD(UTF8->fields.dataItem) )
            goto LABEL_52;
          v82 = CatAndMouseGame_TypeInfo->static_fields->baseData;
          if ( !v82 )
            goto LABEL_53;
          v83 = (int)v81 | 1LL;
          if ( (unsigned int)v83 >= v82->max_length )
            goto LABEL_52;
          v82->m_Items[v83 + 4] = *(&UTF8->fields.m_isReadOnly + v77);
          if ( v77 + 2 >= LODWORD(UTF8->fields.dataItem) )
            goto LABEL_52;
          v84 = CatAndMouseGame_TypeInfo->static_fields->baseData;
          if ( !v84 )
            goto LABEL_53;
          v85 = v76 | 2LL;
          if ( (unsigned int)v85 >= v84->max_length )
            goto LABEL_52;
          v86 = (char *)v84 + v85;
          v87 = v77 + 3;
          v86[32] = *(&UTF8->fields.m_isReadOnly + v77 + 1);
          if ( v77 + 3 >= LODWORD(UTF8->fields.dataItem) )
            goto LABEL_52;
          dataItem = CatAndMouseGame_TypeInfo->static_fields->baseData;
          if ( !dataItem )
            goto LABEL_53;
          v88 = v76 | 3;
          if ( (v76 | 3u) >= dataItem->max_length )
            goto LABEL_52;
        }
        ++v78;
        v77 += 4LL;
        dataItem->m_Items[v88 + 4] = *(&UTF8->fields.m_deserializedFromEverett + v87);
        v76 += 2;
        LODWORD(dataItem) = UTF8->fields.dataItem;
      }
      while ( v78 < (int)dataItem / 4 );
    }
  }
}


void __fastcall CatAndMouseGame___ctor(CatAndMouseGame_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CatAndMouseGame__CatGame1(System_String_o *str, bool isCompress, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Text_Encoding_o *UTF8; // x0
  __int64 v13; // x1
  __int64 v14; // x22
  __int64 v15; // x20
  __int64 v16; // x23
  System_Security_Cryptography_TripleDESCryptoServiceProvider_o *v17; // x24
  System_IO_MemoryStream_o *v18; // x19
  __int64 v19; // x0
  __int64 v20; // x1
  System_Security_Cryptography_ICryptoTransform_o *v21; // x23
  System_Security_Cryptography_CryptoStream_o *v22; // x20
  __int64 v23; // x0
  __int64 v24; // x1
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *v25; // x25
  __int64 v26; // x0
  __int64 v27; // x1
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_c *klass; // x8
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x1
  System_Security_Cryptography_CryptoStream_c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0
  __int64 v38; // x0
  __int64 v39; // x1
  System_Byte_array *v40; // x22
  System_IO_MemoryStream_c *v41; // x8
  __int64 v42; // x9
  int32_t *v43; // x10
  __int64 v44; // x0

  if ( (byte_4B44130 & 1) == 0 )
  {
    sub_1BDB878(&ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo, isCompress);
    sub_1BDB878(&System_Convert_TypeInfo, v5);
    sub_1BDB878(&System_Security_Cryptography_CryptoStream_TypeInfo, v6);
    sub_1BDB878(&System_IDisposable_TypeInfo, v7);
    sub_1BDB878(&System_IO_MemoryStream_TypeInfo, v8);
    sub_1BDB878(&System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo, v9);
    sub_1BDB878(&StringLiteral_24937/*"wuD6keVr"*/, v10);
    sub_1BDB878(&StringLiteral_16979/*"b5nHjsMrqaeNliSs3jyOzgpD"*/, v11);
    byte_4B44130 = 1;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8
    || (v14 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                UTF8,
                str,
                UTF8->klass->vtable._19_GetBytes.methodPtr),
        (UTF8 = System_Text_Encoding__get_UTF8(0LL)) == 0LL)
    || (v15 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                UTF8,
                StringLiteral_16979/*"b5nHjsMrqaeNliSs3jyOzgpD"*/,
                UTF8->klass->vtable._19_GetBytes.methodPtr),
        (UTF8 = System_Text_Encoding__get_UTF8(0LL)) == 0LL) )
  {
    sub_1BDBAD4(UTF8, v13);
  }
  v16 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
          UTF8,
          StringLiteral_24937/*"wuD6keVr"*/,
          UTF8->klass->vtable._19_GetBytes.methodPtr);
  v17 = (System_Security_Cryptography_TripleDESCryptoServiceProvider_o *)sub_1BDBAC4(System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_TripleDESCryptoServiceProvider___ctor(v17, 0LL);
  v18 = (System_IO_MemoryStream_o *)sub_1BDBAC4(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v18, 0LL);
  if ( !v17 )
    sub_1BDBAD4(v19, v20);
  v21 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_TripleDESCryptoServiceProvider_o *, __int64, __int64, Il2CppMethodPointer))v17->klass->vtable._21_CreateEncryptor.method)(
                                                             v17,
                                                             v15,
                                                             v16,
                                                             v17->klass->vtable._22_CreateDecryptor.methodPtr);
  v22 = (System_Security_Cryptography_CryptoStream_o *)sub_1BDBAC4(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v22, (System_IO_Stream_o *)v18, v21, 1, 0LL);
  if ( isCompress )
  {
    v25 = (ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *)sub_1BDBAC4(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo);
    ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream___ctor(v25, (System_IO_Stream_o *)v22, 0LL);
    if ( !v14 )
      sub_1BDBAD4(v26, v27);
    if ( !v25 )
      sub_1BDBAD4(v26, v27);
    ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v25->klass->vtable._35_Write.method)(
      v25,
      v14,
      0LL,
      *(unsigned int *)(v14 + 24),
      v25->klass->vtable._36_Write.methodPtr);
    ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, Il2CppMethodPointer))v25->klass->vtable._19_Close.method)(
      v25,
      v25->klass->vtable._20_Dispose.methodPtr);
    klass = v25->klass;
    v29 = *(unsigned __int16 *)(&v25->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v25->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v29;
        p_offset += 4;
        if ( !v29 )
          goto LABEL_14;
      }
      v31 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_14:
      v31 = sub_1C2C00C(v25, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, _QWORD))v31)(v25, *(_QWORD *)(v31 + 8));
  }
  else
  {
    if ( !v14 )
      sub_1BDBAD4(v23, v24);
    if ( !v22 )
      sub_1BDBAD4(v23, v24);
    ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v22->klass->vtable._35_Write.method)(
      v22,
      v14,
      0LL,
      *(unsigned int *)(v14 + 24),
      v22->klass->vtable._36_Write.methodPtr);
  }
  System_Security_Cryptography_SymmetricAlgorithm__Clear((System_Security_Cryptography_SymmetricAlgorithm_o *)v17, 0LL);
  if ( !v22 )
    sub_1BDBAD4(v32, v33);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, Il2CppMethodPointer))v22->klass->vtable._19_Close.method)(
    v22,
    v22->klass->vtable._20_Dispose.methodPtr);
  v34 = v22->klass;
  v35 = *(unsigned __int16 *)(&v22->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v22->klass->_2.bitflags2 + 3) )
  {
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      --v35;
      v36 += 4;
      if ( !v35 )
        goto LABEL_25;
    }
    v37 = (__int64)(&v34->vtable._0_Equals.method + 2 * *v36);
  }
  else
  {
LABEL_25:
    v37 = sub_1C2C00C(v22, System_IDisposable_TypeInfo, 0LL);
  }
  v38 = (*(__int64 (__fastcall **)(System_Security_Cryptography_CryptoStream_o *, _QWORD))v37)(
          v22,
          *(_QWORD *)(v37 + 8));
  if ( !v18 )
    sub_1BDBAD4(v38, v39);
  v40 = (System_Byte_array *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v18->klass->vtable._41_ToArray.method)(
                               v18,
                               v18->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v18->klass->vtable._19_Close.method)(
    v18,
    v18->klass->vtable._20_Dispose.methodPtr);
  v41 = v18->klass;
  v42 = *(unsigned __int16 *)(&v18->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v18->klass->_2.bitflags2 + 3) )
  {
    v43 = &v41->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      --v42;
      v43 += 4;
      if ( !v42 )
        goto LABEL_32;
    }
    v44 = (__int64)(&v41->vtable._0_Equals.method + 2 * *v43);
  }
  else
  {
LABEL_32:
    v44 = sub_1C2C00C(v18, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v44)(v18, *(_QWORD *)(v44 + 8));
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToBase64String(v40, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CatAndMouseGame__CatGame2(System_String_o *str, bool isCompress, const MethodInfo *method)
{
  System_Text_Encoding_o *UTF8; // x0
  __int64 v5; // x1
  __int64 v6; // x0
  const MethodInfo *v7; // x4
  CatAndMouseGame_c *v8; // x8
  System_Byte_array *v9; // x19

  if ( (byte_4B44132 & 1) == 0 )
  {
    sub_1BDB878(&CatAndMouseGame_TypeInfo, isCompress);
    byte_4B44132 = 1;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_1BDBAD4(0LL, v5);
  v6 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
         UTF8,
         str,
         UTF8->klass->vtable._19_GetBytes.methodPtr);
  v8 = CatAndMouseGame_TypeInfo;
  v9 = (System_Byte_array *)v6;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v8 = CatAndMouseGame_TypeInfo;
  }
  return CatAndMouseGame__CatHome(v9, v8->static_fields->ownerData, v8->static_fields->ownerTop, 1, v7);
}


System_String_o *__fastcall CatAndMouseGame__CatGame3(System_String_o *str, const MethodInfo *method)
{
  unsigned int *UTF8; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x4
  unsigned __int64 v7; // x8
  System_Byte_array *v8; // x19
  unsigned __int64 v9; // x9
  CatAndMouseGame_c *v10; // x0

  if ( (byte_4B44139 & 1) == 0 )
  {
    sub_1BDB878(&CatAndMouseGame_TypeInfo, method);
    byte_4B44139 = 1;
  }
  UTF8 = (unsigned int *)System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8
    || (UTF8 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned int *, System_String_o *, _QWORD))(*(_QWORD *)UTF8 + 600LL))(
                                 UTF8,
                                 str,
                                 *(_QWORD *)(*(_QWORD *)UTF8 + 608LL))) == 0LL )
  {
    sub_1BDBAD4(UTF8, v4);
  }
  v7 = UTF8[6];
  v8 = (System_Byte_array *)UTF8;
  if ( (__int64)(v7 << 32) >= 1 )
  {
    v9 = 0LL;
    do
    {
      if ( v9 >= v7 )
        sub_1BDBADC(UTF8, v4, v5);
      *((_BYTE *)UTF8 + v9 + 32) = ~*((_BYTE *)UTF8 + v9 + 32);
      ++v9;
    }
    while ( (__int64)v9 < (int)v7 );
  }
  v10 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v10 = CatAndMouseGame_TypeInfo;
  }
  return CatAndMouseGame__CatHome(v8, v10->static_fields->stageData, v10->static_fields->stageTop, 1, v6);
}


System_String_o *__fastcall CatAndMouseGame__CatGame3_40232748(
        System_String_o *str,
        System_String_o *key,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  System_Text_Encoding_o *UTF8; // x0
  __int64 v8; // x1
  __int64 v9; // x0
  const MethodInfo *v10; // x3
  System_Byte_array *v11; // x20
  const MethodInfo *v12; // x4
  System_Byte_array *v13; // [xsp+0h] [xbp-30h] BYREF
  System_Byte_array *home; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B4413A & 1) == 0 )
  {
    sub_1BDB878(&CatAndMouseGame_TypeInfo, key);
    byte_4B4413A = 1;
  }
  v13 = 0LL;
  home = 0LL;
  if ( System_String__IsNullOrEmpty(key, 0LL) )
  {
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    return CatAndMouseGame__CatGame3(str, v5);
  }
  else
  {
    UTF8 = System_Text_Encoding__get_UTF8(0LL);
    if ( !UTF8 )
      sub_1BDBAD4(0LL, v8);
    v9 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
           UTF8,
           str,
           UTF8->klass->vtable._19_GetBytes.methodPtr);
    v13 = 0LL;
    home = 0LL;
    v11 = (System_Byte_array *)v9;
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    CatAndMouseGame__OtherHomeBuilding(key, &home, &v13, v10);
    return CatAndMouseGame__CatHome(v11, home, v13, 1, v12);
  }
}


System_Byte_array *__fastcall CatAndMouseGame__CatGame4(System_Byte_array *data, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x4
  System_Byte_array *v4; // x19
  int max_length; // w11
  int v6; // w8
  char *v7; // x11
  uint8_t *v8; // x13
  uint8_t v9; // w12
  _BYTE *v10; // x11
  char v11; // t1
  int v12; // w12
  CatAndMouseGame_c *v13; // x0

  v4 = data;
  if ( (byte_4B4413C & 1) == 0 )
  {
    data = (System_Byte_array *)sub_1BDB878(&CatAndMouseGame_TypeInfo, method);
    byte_4B4413C = 1;
  }
  if ( !v4 )
    sub_1BDBAD4(data, method);
  max_length = v4->max_length;
  if ( max_length >= 1 )
  {
    v6 = 1;
    do
    {
      if ( v6 >= max_length )
        break;
      if ( v6 - 1 < (unsigned int)max_length && v6 < (unsigned int)max_length )
      {
        v7 = (char *)v4 + v6;
        v8 = &v4->m_Items[v6 + 3];
        v9 = *v8;
        v11 = v7[32];
        v10 = v7 + 32;
        *v8 = v11 ^ 0xCE;
        if ( v6 < v4->max_length )
          continue;
      }
      sub_1BDBADC(data, method, v2);
      *v10 = v9 ^ 0xD2;
      max_length = v4->max_length;
      v12 = v6 + 1;
      v6 += 2;
    }
    while ( v12 < max_length );
  }
  v13 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v13 = CatAndMouseGame_TypeInfo;
  }
  return CatAndMouseGame__CatHomeMain(v4, v13->static_fields->baseData, v13->static_fields->baseTop, 0, v3);
}


System_Byte_array *__fastcall CatAndMouseGame__CatGame4_40236304(
        System_Byte_array *data,
        System_String_o *key,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x3
  const MethodInfo *v8; // x4
  System_Byte_array *v9; // [xsp+0h] [xbp-30h] BYREF
  System_Byte_array *home; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B4413D & 1) == 0 )
  {
    sub_1BDB878(&CatAndMouseGame_TypeInfo, key);
    byte_4B4413D = 1;
  }
  if ( System_String__IsNullOrEmpty(key, 0LL) )
  {
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    return CatAndMouseGame__CatGame4(data, v5);
  }
  else
  {
    v9 = 0LL;
    home = 0LL;
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    CatAndMouseGame__OtherHomeBuilding(key, &home, &v9, v6);
    return CatAndMouseGame__CatHomeMain(data, home, v9, 0, v8);
  }
}


System_String_o *__fastcall CatAndMouseGame__CatGame5(System_String_o *str, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Byte_array *UTF8; // x0
  __int64 v5; // x8
  struct System_Byte_array *BattleIV; // x8
  System_Byte_array *v7; // x19
  System_Byte_array *v8; // x20
  __int64 v9; // x2
  const MethodInfo *v10; // x4
  System_Byte_array *v11; // x21
  __int64 i; // x23
  struct System_Byte_array *BattleKey; // x8
  unsigned __int64 v14; // x24
  __int64 j; // x23
  __int64 v16; // x8
  signed __int64 v17; // x25
  unsigned __int64 v18; // x24
  struct System_Byte_array *v19; // x8

  if ( (byte_4B44140 & 1) == 0 )
  {
    sub_1BDB878(&byte___TypeInfo, method);
    sub_1BDB878(&CatAndMouseGame_TypeInfo, v3);
    byte_4B44140 = 1;
  }
  UTF8 = (System_Byte_array *)CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    UTF8 = (System_Byte_array *)CatAndMouseGame_TypeInfo;
  }
  v5 = *(_QWORD *)(*(_QWORD *)&UTF8->m_Items[156] + 64LL);
  if ( !v5
    || (UTF8 = (System_Byte_array *)sub_1BDB920(byte___TypeInfo, *(unsigned int *)(v5 + 24)),
        (BattleIV = CatAndMouseGame_TypeInfo->static_fields->BattleIV) == 0LL)
    || (v7 = UTF8,
        v8 = (System_Byte_array *)sub_1BDB920(byte___TypeInfo, BattleIV->max_length),
        (UTF8 = (System_Byte_array *)System_Text_Encoding__get_UTF8(0LL)) == 0LL) )
  {
LABEL_32:
    sub_1BDBAD4(UTF8, method);
  }
  v11 = (System_Byte_array *)((__int64 (__fastcall *)(System_Byte_array *, System_String_o *, Il2CppMethodPointer))UTF8->obj.klass->vtable[18].method)(
                               UTF8,
                               str,
                               UTF8->obj.klass->vtable[19].methodPtr);
  for ( i = 32LL; ; ++i )
  {
    UTF8 = (System_Byte_array *)CatAndMouseGame_TypeInfo;
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      UTF8 = (System_Byte_array *)CatAndMouseGame_TypeInfo;
    }
    BattleKey = *(struct System_Byte_array **)(*(_QWORD *)&UTF8->m_Items[156] + 64LL);
    if ( !BattleKey )
      goto LABEL_32;
    v14 = i - 32;
    if ( i - 32 >= (int)BattleKey->max_length )
      break;
    if ( !*(_DWORD *)&UTF8->m_Items[196] )
    {
      j_il2cpp_runtime_class_init_0(UTF8);
      BattleKey = CatAndMouseGame_TypeInfo->static_fields->BattleKey;
      if ( !BattleKey )
        goto LABEL_32;
    }
    if ( v14 >= BattleKey->max_length )
      goto LABEL_33;
    if ( !v7 )
      goto LABEL_32;
    if ( v14 >= v7->max_length )
LABEL_33:
      sub_1BDBADC(UTF8, method, v9);
    *((_BYTE *)&v7->obj.klass + i) = *((_BYTE *)&BattleKey->obj.klass + i) ^ 4;
  }
  for ( j = 32LL; ; ++j )
  {
    if ( !*(_DWORD *)&UTF8->m_Items[196] )
    {
      j_il2cpp_runtime_class_init_0(UTF8);
      UTF8 = (System_Byte_array *)CatAndMouseGame_TypeInfo;
    }
    v16 = *(_QWORD *)(*(_QWORD *)&UTF8->m_Items[156] + 72LL);
    if ( !v16 )
      goto LABEL_32;
    v17 = *(int *)(v16 + 24);
    v18 = j - 32;
    if ( !*(_DWORD *)&UTF8->m_Items[196] )
      j_il2cpp_runtime_class_init_0(UTF8);
    if ( (__int64)v18 >= v17 )
      break;
    v19 = CatAndMouseGame_TypeInfo->static_fields->BattleIV;
    if ( !v19 )
      goto LABEL_32;
    if ( v18 >= v19->max_length )
      goto LABEL_33;
    if ( !v8 )
      goto LABEL_32;
    if ( v18 >= v8->max_length )
      goto LABEL_33;
    *((_BYTE *)&v8->obj.klass + j) = *((_BYTE *)&v19->obj.klass + j) ^ 8;
    UTF8 = (System_Byte_array *)CatAndMouseGame_TypeInfo;
  }
  return CatAndMouseGame__CatHome(v11, v7, v8, 0, v10);
}


System_Byte_array *__fastcall CatAndMouseGame__CatGame5Bytes(System_Byte_array *data, const MethodInfo *method)
{
  __int64 v3; // x1
  CatAndMouseGame_c *v4; // x0
  struct System_Byte_array *BattleKey; // x8
  struct System_Byte_array *BattleIV; // x8
  System_Byte_array *v7; // x20
  __int64 v8; // x2
  const MethodInfo *v9; // x4
  System_Byte_array *v10; // x21
  __int64 i; // x23
  struct System_Byte_array *v12; // x8
  unsigned __int64 v13; // x24
  __int64 j; // x23
  struct System_Byte_array *v15; // x8
  signed __int64 max_length; // x25
  unsigned __int64 v17; // x24
  struct System_Byte_array *v18; // x8

  if ( (byte_4B44141 & 1) == 0 )
  {
    sub_1BDB878(&byte___TypeInfo, method);
    sub_1BDB878(&CatAndMouseGame_TypeInfo, v3);
    byte_4B44141 = 1;
  }
  v4 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v4 = CatAndMouseGame_TypeInfo;
  }
  BattleKey = v4->static_fields->BattleKey;
  if ( !BattleKey
    || (v4 = (CatAndMouseGame_c *)sub_1BDB920(byte___TypeInfo, BattleKey->max_length),
        (BattleIV = CatAndMouseGame_TypeInfo->static_fields->BattleIV) == 0LL) )
  {
LABEL_31:
    sub_1BDBAD4(v4, method);
  }
  v7 = (System_Byte_array *)v4;
  v10 = (System_Byte_array *)sub_1BDB920(byte___TypeInfo, BattleIV->max_length);
  for ( i = 32LL; ; ++i )
  {
    v4 = CatAndMouseGame_TypeInfo;
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      v4 = CatAndMouseGame_TypeInfo;
    }
    v12 = v4->static_fields->BattleKey;
    if ( !v12 )
      goto LABEL_31;
    v13 = i - 32;
    if ( i - 32 >= (int)v12->max_length )
      break;
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v12 = CatAndMouseGame_TypeInfo->static_fields->BattleKey;
      if ( !v12 )
        goto LABEL_31;
    }
    if ( v13 >= v12->max_length )
      goto LABEL_32;
    if ( !v7 )
      goto LABEL_31;
    if ( v13 >= v7->max_length )
LABEL_32:
      sub_1BDBADC(v4, method, v8);
    *((_BYTE *)&v7->obj.klass + i) = *((_BYTE *)&v12->obj.klass + i) ^ 4;
  }
  for ( j = 32LL; ; ++j )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = CatAndMouseGame_TypeInfo;
    }
    v15 = v4->static_fields->BattleIV;
    if ( !v15 )
      goto LABEL_31;
    max_length = (int)v15->max_length;
    v17 = j - 32;
    if ( !v4->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v4);
    if ( (__int64)v17 >= max_length )
      break;
    v18 = CatAndMouseGame_TypeInfo->static_fields->BattleIV;
    if ( !v18 )
      goto LABEL_31;
    if ( v17 >= v18->max_length )
      goto LABEL_32;
    if ( !v10 )
      goto LABEL_31;
    if ( v17 >= v10->max_length )
      goto LABEL_32;
    *((_BYTE *)&v10->obj.klass + j) = *((_BYTE *)&v18->obj.klass + j) ^ 8;
    v4 = CatAndMouseGame_TypeInfo;
  }
  return CatAndMouseGame__CatHomeMain(data, v7, v10, 0, v9);
}


System_String_o *__fastcall CatAndMouseGame__CatGame6(System_String_o *str, const MethodInfo *method)
{
  System_Text_Encoding_o *UTF8; // x0
  __int64 v4; // x1
  __int64 v5; // x0
  const MethodInfo *v6; // x4
  CatAndMouseGame_c *v7; // x8
  System_Byte_array *v8; // x19

  if ( (byte_4B44153 & 1) == 0 )
  {
    sub_1BDB878(&CatAndMouseGame_TypeInfo, method);
    byte_4B44153 = 1;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_1BDBAD4(0LL, v4);
  v5 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
         UTF8,
         str,
         UTF8->klass->vtable._19_GetBytes.methodPtr);
  v7 = CatAndMouseGame_TypeInfo;
  v8 = (System_Byte_array *)v5;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v7 = CatAndMouseGame_TypeInfo;
  }
  return CatAndMouseGame__CatHome(v8, v7->static_fields->sideData, v7->static_fields->sideTop, 0, v6);
}


System_String_o *__fastcall CatAndMouseGame__CatGame6_40244332(System_Byte_array *data, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  CatAndMouseGame_c *v4; // x0

  if ( (byte_4B44154 & 1) == 0 )
  {
    sub_1BDB878(&CatAndMouseGame_TypeInfo, method);
    byte_4B44154 = 1;
  }
  v4 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v4 = CatAndMouseGame_TypeInfo;
  }
  return CatAndMouseGame__CatHome(data, v4->static_fields->sideData, v4->static_fields->sideTop, 0, v2);
}


System_Byte_array *__fastcall CatAndMouseGame__CatGame7(System_Byte_array *data, const MethodInfo *method)
{
  System_Byte_array *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x2
  const MethodInfo *v5; // x4
  System_Byte_array *v6; // x20
  unsigned __int64 v7; // x8
  il2cpp_array_size_t max_length; // w11
  CatAndMouseGame_c *v9; // x0

  v2 = data;
  if ( (byte_4B44143 & 1) == 0 )
  {
    sub_1BDB878(&byte___TypeInfo, method);
    data = (System_Byte_array *)sub_1BDB878(&CatAndMouseGame_TypeInfo, v3);
    byte_4B44143 = 1;
  }
  if ( !v2 )
LABEL_14:
    sub_1BDBAD4(data, method);
  data = (System_Byte_array *)sub_1BDB920(byte___TypeInfo, v2->max_length);
  v6 = data;
  if ( (int)*(_QWORD *)&v2->max_length >= 1 )
  {
    v7 = 0LL;
    max_length = *(_QWORD *)&v2->max_length;
    do
    {
      if ( v7 >= max_length )
        goto LABEL_13;
      if ( !data )
        goto LABEL_14;
      if ( v7 >= data->max_length )
LABEL_13:
        sub_1BDBADC(data, method, v4);
      data->m_Items[v7 + 4] = ~v2->m_Items[v7 + 4];
      max_length = v2->max_length;
      ++v7;
    }
    while ( (__int64)v7 < (int)max_length );
  }
  v9 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v9 = CatAndMouseGame_TypeInfo;
  }
  return CatAndMouseGame__CatHomeMain(v6, v9->static_fields->stageData, v9->static_fields->stageTop, 1, v5);
}


System_String_o *__fastcall CatAndMouseGame__CatGame8(System_String_o *str, const MethodInfo *method)
{
  unsigned int *UTF8; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x4
  unsigned __int64 v7; // x8
  System_Byte_array *v8; // x19
  unsigned __int64 v9; // x9
  CatAndMouseGame_c *v10; // x0

  if ( (byte_4B44145 & 1) == 0 )
  {
    sub_1BDB878(&CatAndMouseGame_TypeInfo, method);
    byte_4B44145 = 1;
  }
  UTF8 = (unsigned int *)System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8
    || (UTF8 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned int *, System_String_o *, _QWORD))(*(_QWORD *)UTF8 + 600LL))(
                                 UTF8,
                                 str,
                                 *(_QWORD *)(*(_QWORD *)UTF8 + 608LL))) == 0LL )
  {
    sub_1BDBAD4(UTF8, v4);
  }
  v7 = UTF8[6];
  v8 = (System_Byte_array *)UTF8;
  if ( (__int64)(v7 << 32) >= 1 )
  {
    v9 = 0LL;
    do
    {
      if ( v9 >= v7 )
        sub_1BDBADC(UTF8, v4, v5);
      *((_BYTE *)UTF8 + v9 + 32) = ~*((_BYTE *)UTF8 + v9 + 32);
      ++v9;
    }
    while ( (__int64)v9 < (int)v7 );
  }
  v10 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v10 = CatAndMouseGame_TypeInfo;
  }
  return CatAndMouseGame__CatHomeZ2(v8, v10->static_fields->stageData, v10->static_fields->stageTop, 1, v6);
}


System_IO_Stream_o *__fastcall CatAndMouseGame__CatGameZ(System_IO_Stream_o *stream, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  CatAndMouseGame_c *v4; // x0

  if ( (byte_4B44137 & 1) == 0 )
  {
    sub_1BDB878(&CatAndMouseGame_TypeInfo, method);
    byte_4B44137 = 1;
  }
  v4 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v4 = CatAndMouseGame_TypeInfo;
  }
  return CatAndMouseGame__CatHomeMainZ(stream, v4->static_fields->stageData, v4->static_fields->stageTop, 1, v2);
}


System_String_o *__fastcall CatAndMouseGame__CatHome(
        System_Byte_array *data,
        System_Byte_array *home,
        System_Byte_array *info,
        bool isCompress,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_String_o *result; // x0
  System_String_o *v11; // x19

  if ( (byte_4B44158 & 1) == 0 )
  {
    sub_1BDB878(&CatAndMouseGame_TypeInfo, home);
    sub_1BDB878(&System_Convert_TypeInfo, v9);
    byte_4B44158 = 1;
  }
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  result = (System_String_o *)CatAndMouseGame__CatHomeMain(data, home, info, isCompress, method);
  if ( result )
  {
    v11 = result;
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    return System_Convert__ToBase64String((System_Byte_array *)v11, 0LL);
  }
  return result;
}


System_Byte_array *__fastcall CatAndMouseGame__CatHomeMain(
        System_Byte_array *data,
        System_Byte_array *home,
        System_Byte_array *info,
        bool isCompress,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Security_Cryptography_RijndaelManaged_o *v12; // x23
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x0
  __int64 v16; // x1
  System_Security_Cryptography_ICryptoTransform_o *v17; // x23
  System_IO_MemoryStream_o *v18; // x0
  il2cpp_array_size_t max_length; // w8
  System_IO_Stream_o *v20; // x19
  int v21; // w9
  int v22; // w8
  System_Security_Cryptography_CryptoStream_o *v23; // x20
  __int64 v24; // x0
  __int64 v25; // x1
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *v26; // x22
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x0
  __int64 v30; // x1
  System_Byte_array *v31; // x21

  if ( (byte_4B4415C & 1) == 0 )
  {
    sub_1BDB878(&ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo, home);
    sub_1BDB878(&System_Security_Cryptography_CryptoStream_TypeInfo, v9);
    sub_1BDB878(&System_IO_MemoryStream_TypeInfo, v10);
    sub_1BDB878(&System_Security_Cryptography_RijndaelManaged_TypeInfo, v11);
    byte_4B4415C = 1;
  }
  v12 = (System_Security_Cryptography_RijndaelManaged_o *)sub_1BDBAC4(System_Security_Cryptography_RijndaelManaged_TypeInfo);
  System_Security_Cryptography_RijndaelManaged___ctor(v12, 0LL);
  if ( !v12 )
    sub_1BDBAD4(v13, v14);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, Il2CppMethodPointer))v12->klass->vtable._19_set_Padding.method)(
    v12,
    2LL,
    v12->klass->vtable._20_CreateEncryptor.methodPtr);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, Il2CppMethodPointer))v12->klass->vtable._17_set_Mode.method)(
    v12,
    1LL,
    v12->klass->vtable._18_get_Padding.methodPtr);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, Il2CppMethodPointer))v12->klass->vtable._15_set_KeySize.method)(
    v12,
    256LL,
    v12->klass->vtable._16_get_Mode.methodPtr);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, Il2CppMethodPointer))v12->klass->vtable._7_set_BlockSize.method)(
    v12,
    256LL,
    v12->klass->vtable._8_get_FeedbackSize.methodPtr);
  v15 = ((__int64 (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, System_Byte_array *, System_Byte_array *, Il2CppMethodPointer))v12->klass->vtable._21_CreateEncryptor.method)(
          v12,
          home,
          info,
          v12->klass->vtable._22_CreateDecryptor.methodPtr);
  if ( !data )
    sub_1BDBAD4(v15, v16);
  v17 = (System_Security_Cryptography_ICryptoTransform_o *)v15;
  v18 = (System_IO_MemoryStream_o *)sub_1BDBAC4(System_IO_MemoryStream_TypeInfo);
  max_length = data->max_length;
  v20 = (System_IO_Stream_o *)v18;
  v21 = max_length + 255;
  v22 = max_length + 510;
  if ( v21 >= 0 )
    v22 = v21;
  System_IO_MemoryStream___ctor_63394644(v18, v22 & 0xFFFFFF00, 0LL);
  v23 = (System_Security_Cryptography_CryptoStream_o *)sub_1BDBAC4(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v23, v20, v17, 1, 0LL);
  if ( isCompress )
  {
    v26 = (ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *)sub_1BDBAC4(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo);
    ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream___ctor_62172484(v26, (System_IO_Stream_o *)v23, 1, 0LL);
    if ( !v26 )
      sub_1BDBAD4(v27, v28);
    ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))v26->klass->vtable._35_Write.method)(
      v26,
      data,
      0LL,
      data->max_length,
      v26->klass->vtable._36_Write.methodPtr);
    v29 = ((__int64 (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, Il2CppMethodPointer))v26->klass->vtable._19_Close.method)(
            v26,
            v26->klass->vtable._20_Dispose.methodPtr);
  }
  else
  {
    if ( !v23 )
      sub_1BDBAD4(v24, v25);
    ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))v23->klass->vtable._35_Write.method)(
      v23,
      data,
      0LL,
      data->max_length,
      v23->klass->vtable._36_Write.methodPtr);
    System_Security_Cryptography_CryptoStream__FlushFinalBlock(v23, 0LL);
  }
  if ( !v20 )
    sub_1BDBAD4(v29, v30);
  v31 = (System_Byte_array *)(*(__int64 (__fastcall **)(System_IO_Stream_o *, Il2CppClass *))&v20->klass[1]._1.this_arg.bits)(
                               v20,
                               v20->klass[1]._1.element_class);
  ((void (__fastcall *)(System_IO_Stream_o *, Il2CppMethodPointer))v20->klass->vtable._19_Close.method)(
    v20,
    v20->klass->vtable._20_Dispose.methodPtr);
  if ( v23 )
    ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, Il2CppMethodPointer))v23->klass->vtable._19_Close.method)(
      v23,
      v23->klass->vtable._20_Dispose.methodPtr);
  return v31;
}


System_IO_Stream_o *__fastcall CatAndMouseGame__CatHomeMainZ(
        System_IO_Stream_o *stream,
        System_Byte_array *home,
        System_Byte_array *info,
        bool isCompress,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  System_Security_Cryptography_RijndaelManaged_o *v11; // x23
  __int64 v12; // x0
  __int64 v13; // x1
  System_Security_Cryptography_ICryptoTransform_o *v14; // x22
  System_Security_Cryptography_CryptoStream_o *v15; // x21
  ICSharpCode_SharpZipLib_GZip_GZipOutputStream_o *v16; // x19

  if ( (byte_4B4415A & 1) == 0 )
  {
    sub_1BDB878(&System_Security_Cryptography_CryptoStream_TypeInfo, home);
    sub_1BDB878(&ICSharpCode_SharpZipLib_GZip_GZipOutputStream_TypeInfo, v9);
    sub_1BDB878(&System_Security_Cryptography_RijndaelManaged_TypeInfo, v10);
    byte_4B4415A = 1;
  }
  v11 = (System_Security_Cryptography_RijndaelManaged_o *)sub_1BDBAC4(System_Security_Cryptography_RijndaelManaged_TypeInfo);
  System_Security_Cryptography_RijndaelManaged___ctor(v11, 0LL);
  if ( !v11 )
    sub_1BDBAD4(v12, v13);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, Il2CppMethodPointer))v11->klass->vtable._19_set_Padding.method)(
    v11,
    2LL,
    v11->klass->vtable._20_CreateEncryptor.methodPtr);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, Il2CppMethodPointer))v11->klass->vtable._17_set_Mode.method)(
    v11,
    1LL,
    v11->klass->vtable._18_get_Padding.methodPtr);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, Il2CppMethodPointer))v11->klass->vtable._15_set_KeySize.method)(
    v11,
    256LL,
    v11->klass->vtable._16_get_Mode.methodPtr);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, Il2CppMethodPointer))v11->klass->vtable._7_set_BlockSize.method)(
    v11,
    256LL,
    v11->klass->vtable._8_get_FeedbackSize.methodPtr);
  v14 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, System_Byte_array *, System_Byte_array *, Il2CppMethodPointer))v11->klass->vtable._21_CreateEncryptor.method)(
                                                             v11,
                                                             home,
                                                             info,
                                                             v11->klass->vtable._22_CreateDecryptor.methodPtr);
  v15 = (System_Security_Cryptography_CryptoStream_o *)sub_1BDBAC4(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v15, stream, v14, 1, 0LL);
  if ( isCompress )
  {
    v16 = (ICSharpCode_SharpZipLib_GZip_GZipOutputStream_o *)sub_1BDBAC4(ICSharpCode_SharpZipLib_GZip_GZipOutputStream_TypeInfo);
    ICSharpCode_SharpZipLib_GZip_GZipOutputStream___ctor(v16, (System_IO_Stream_o *)v15, 0LL);
    return (System_IO_Stream_o *)v16;
  }
  return (System_IO_Stream_o *)v15;
}


System_Byte_array *__fastcall CatAndMouseGame__CatHomeMainZ2(
        System_Byte_array *data,
        System_Byte_array *home,
        System_Byte_array *info,
        bool isCompress,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Security_Cryptography_RijndaelManaged_o *v12; // x23
  __int64 v13; // x0
  __int64 v14; // x1
  System_Security_Cryptography_ICryptoTransform_o *v15; // x23
  System_IO_MemoryStream_o *v16; // x19
  System_Security_Cryptography_CryptoStream_o *v17; // x20
  __int64 v18; // x0
  __int64 v19; // x1
  ICSharpCode_SharpZipLib_GZip_GZipOutputStream_o *v20; // x22
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x0
  __int64 v24; // x1
  System_Byte_array *v25; // x21

  if ( (byte_4B4415B & 1) == 0 )
  {
    sub_1BDB878(&System_Security_Cryptography_CryptoStream_TypeInfo, home);
    sub_1BDB878(&ICSharpCode_SharpZipLib_GZip_GZipOutputStream_TypeInfo, v9);
    sub_1BDB878(&System_IO_MemoryStream_TypeInfo, v10);
    sub_1BDB878(&System_Security_Cryptography_RijndaelManaged_TypeInfo, v11);
    byte_4B4415B = 1;
  }
  v12 = (System_Security_Cryptography_RijndaelManaged_o *)sub_1BDBAC4(System_Security_Cryptography_RijndaelManaged_TypeInfo);
  System_Security_Cryptography_RijndaelManaged___ctor(v12, 0LL);
  if ( !v12 )
    sub_1BDBAD4(v13, v14);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, Il2CppMethodPointer))v12->klass->vtable._19_set_Padding.method)(
    v12,
    2LL,
    v12->klass->vtable._20_CreateEncryptor.methodPtr);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, Il2CppMethodPointer))v12->klass->vtable._17_set_Mode.method)(
    v12,
    1LL,
    v12->klass->vtable._18_get_Padding.methodPtr);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, Il2CppMethodPointer))v12->klass->vtable._15_set_KeySize.method)(
    v12,
    256LL,
    v12->klass->vtable._16_get_Mode.methodPtr);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, Il2CppMethodPointer))v12->klass->vtable._7_set_BlockSize.method)(
    v12,
    256LL,
    v12->klass->vtable._8_get_FeedbackSize.methodPtr);
  v15 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, System_Byte_array *, System_Byte_array *, Il2CppMethodPointer))v12->klass->vtable._21_CreateEncryptor.method)(
                                                             v12,
                                                             home,
                                                             info,
                                                             v12->klass->vtable._22_CreateDecryptor.methodPtr);
  v16 = (System_IO_MemoryStream_o *)sub_1BDBAC4(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v16, 0LL);
  v17 = (System_Security_Cryptography_CryptoStream_o *)sub_1BDBAC4(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v17, (System_IO_Stream_o *)v16, v15, 1, 0LL);
  if ( isCompress )
  {
    v20 = (ICSharpCode_SharpZipLib_GZip_GZipOutputStream_o *)sub_1BDBAC4(ICSharpCode_SharpZipLib_GZip_GZipOutputStream_TypeInfo);
    ICSharpCode_SharpZipLib_GZip_GZipOutputStream___ctor(v20, (System_IO_Stream_o *)v17, 0LL);
    if ( !data )
      sub_1BDBAD4(v21, v22);
    if ( !v20 )
      sub_1BDBAD4(v21, v22);
    ((void (__fastcall *)(ICSharpCode_SharpZipLib_GZip_GZipOutputStream_o *, System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))v20->klass->vtable._35_Write.method)(
      v20,
      data,
      0LL,
      data->max_length,
      v20->klass->vtable._36_Write.methodPtr);
    v23 = ((__int64 (__fastcall *)(ICSharpCode_SharpZipLib_GZip_GZipOutputStream_o *, Il2CppMethodPointer))v20->klass->vtable._19_Close.method)(
            v20,
            v20->klass->vtable._20_Dispose.methodPtr);
  }
  else
  {
    if ( !data )
      sub_1BDBAD4(v18, v19);
    if ( !v17 )
      sub_1BDBAD4(v18, v19);
    ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))v17->klass->vtable._35_Write.method)(
      v17,
      data,
      0LL,
      data->max_length,
      v17->klass->vtable._36_Write.methodPtr);
    System_Security_Cryptography_CryptoStream__FlushFinalBlock(v17, 0LL);
  }
  if ( !v16 )
    sub_1BDBAD4(v23, v24);
  v25 = (System_Byte_array *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v16->klass->vtable._41_ToArray.method)(
                               v16,
                               v16->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v16->klass->vtable._19_Close.method)(
    v16,
    v16->klass->vtable._20_Dispose.methodPtr);
  if ( v17 )
    ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, Il2CppMethodPointer))v17->klass->vtable._19_Close.method)(
      v17,
      v17->klass->vtable._20_Dispose.methodPtr);
  return v25;
}


System_String_o *__fastcall CatAndMouseGame__CatHomeZ2(
        System_Byte_array *data,
        System_Byte_array *home,
        System_Byte_array *info,
        bool isCompress,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_String_o *result; // x0
  System_String_o *v11; // x19

  if ( (byte_4B44159 & 1) == 0 )
  {
    sub_1BDB878(&CatAndMouseGame_TypeInfo, home);
    sub_1BDB878(&System_Convert_TypeInfo, v9);
    byte_4B44159 = 1;
  }
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  result = (System_String_o *)CatAndMouseGame__CatHomeMainZ2(data, home, info, isCompress, method);
  if ( result )
  {
    v11 = result;
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    return System_Convert__ToBase64String((System_Byte_array *)v11, 0LL);
  }
  return result;
}


void __fastcall CatAndMouseGame__ForthHomeBuilding(System_String_o *data, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  bool isPlaying; // w20
  _QWORD *UTF8; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  _QWORD *v9; // x19
  int v10; // w20
  unsigned __int64 v11; // x21
  __int64 v12; // x22
  __int64 v13; // x8
  __int64 v14; // x10
  unsigned __int64 v15; // x9
  struct System_Byte_array *baseData; // x10
  __int64 v17; // x9
  struct System_Byte_array *v18; // x9
  __int64 v19; // x8
  char *v20; // x8
  __int64 v21; // x9
  struct System_Byte_array *v22; // x8
  int v23; // w10
  __int64 v24; // x10
  unsigned __int64 v25; // x9
  struct System_Byte_array *baseTop; // x10
  __int64 v27; // x9
  struct System_Byte_array *v28; // x9
  __int64 v29; // x8

  if ( (byte_4B4414A & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Application_TypeInfo, method);
    sub_1BDB878(&CatAndMouseGame_TypeInfo, v3);
    sub_1BDB878(&StringLiteral_10350/*"PFBs0eIuunoxKkCcLbqDVerU1rShhS276SAL3A8tFLUfGvtz3F3FFeKELIk3Nvi4"*/, v4);
    byte_4B4414A = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  isPlaying = UnityEngine_Application__get_isPlaying(0LL);
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8
    || (!isPlaying
      ? (UTF8 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(*UTF8 + 600LL))(
                            UTF8,
                            StringLiteral_10350/*"PFBs0eIuunoxKkCcLbqDVerU1rShhS276SAL3A8tFLUfGvtz3F3FFeKELIk3Nvi4"*/,
                            *(_QWORD *)(*UTF8 + 608LL)))
      : (UTF8 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, System_String_o *, _QWORD))(*UTF8 + 600LL))(
                            UTF8,
                            data,
                            *(_QWORD *)(*UTF8 + 608LL))),
        (v9 = UTF8) == 0LL) )
  {
LABEL_44:
    sub_1BDBAD4(UTF8, v7);
  }
  if ( *((int *)UTF8 + 6) >= 4 )
  {
    v10 = 0;
    v11 = 0LL;
    v12 = 0LL;
    do
    {
      UTF8 = &CatAndMouseGame_TypeInfo->_1.image;
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
        UTF8 = &CatAndMouseGame_TypeInfo->_1.image;
      }
      v13 = UTF8[23];
      if ( (v12 & 1) != 0 )
      {
        if ( v11 >= *((unsigned int *)v9 + 6) )
          goto LABEL_43;
        v24 = *(_QWORD *)(v13 + 48);
        if ( !v24 )
          goto LABEL_44;
        v25 = v10 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (unsigned int)v25 >= *(_DWORD *)(v24 + 24) )
          goto LABEL_43;
        *(_BYTE *)(v24 + v25 + 32) = *((_BYTE *)v9 + v11 + 32);
        if ( v11 + 1 >= *((unsigned int *)v9 + 6) )
          goto LABEL_43;
        baseTop = CatAndMouseGame_TypeInfo->static_fields->baseTop;
        if ( !baseTop )
          goto LABEL_44;
        v27 = (int)v25 | 1LL;
        if ( (unsigned int)v27 >= baseTop->max_length )
          goto LABEL_43;
        baseTop->m_Items[v27 + 4] = *((_BYTE *)v9 + v11 + 33);
        if ( v11 + 2 >= *((unsigned int *)v9 + 6) )
          goto LABEL_43;
        v28 = CatAndMouseGame_TypeInfo->static_fields->baseTop;
        if ( !v28 )
          goto LABEL_44;
        v29 = v10 | 2LL;
        if ( (unsigned int)v29 >= v28->max_length )
          goto LABEL_43;
        v28->m_Items[v29 + 4] = *((_BYTE *)v9 + v11 + 34);
        if ( v11 + 3 >= *((unsigned int *)v9 + 6) )
          goto LABEL_43;
        v22 = CatAndMouseGame_TypeInfo->static_fields->baseTop;
        if ( !v22 )
          goto LABEL_44;
        v23 = v10 | 3;
        if ( (v10 | 3u) >= v22->max_length )
LABEL_43:
          sub_1BDBADC(UTF8, v7, v8);
        v21 = (4 * v12) | 3;
      }
      else
      {
        if ( v11 >= *((unsigned int *)v9 + 6) )
          goto LABEL_43;
        v14 = *(_QWORD *)(v13 + 56);
        if ( !v14 )
          goto LABEL_44;
        v15 = v10 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (unsigned int)v15 >= *(_DWORD *)(v14 + 24) )
          goto LABEL_43;
        *(_BYTE *)(v14 + v15 + 32) = *((_BYTE *)v9 + v11 + 32);
        if ( v11 + 1 >= *((unsigned int *)v9 + 6) )
          goto LABEL_43;
        baseData = CatAndMouseGame_TypeInfo->static_fields->baseData;
        if ( !baseData )
          goto LABEL_44;
        v17 = (int)v15 | 1LL;
        if ( (unsigned int)v17 >= baseData->max_length )
          goto LABEL_43;
        baseData->m_Items[v17 + 4] = *((_BYTE *)v9 + v11 + 33);
        if ( v11 + 2 >= *((unsigned int *)v9 + 6) )
          goto LABEL_43;
        v18 = CatAndMouseGame_TypeInfo->static_fields->baseData;
        if ( !v18 )
          goto LABEL_44;
        v19 = v10 | 2LL;
        if ( (unsigned int)v19 >= v18->max_length )
          goto LABEL_43;
        v20 = (char *)v18 + v19;
        v21 = v11 + 3;
        v20[32] = *((_BYTE *)v9 + v11 + 34);
        if ( v11 + 3 >= *((unsigned int *)v9 + 6) )
          goto LABEL_43;
        v22 = CatAndMouseGame_TypeInfo->static_fields->baseData;
        if ( !v22 )
          goto LABEL_44;
        v23 = v10 | 3;
        if ( (v10 | 3u) >= v22->max_length )
          goto LABEL_43;
      }
      ++v12;
      v11 += 4LL;
      v22->m_Items[v23 + 4] = *((_BYTE *)v9 + v21 + 32);
      v10 += 2;
    }
    while ( v12 < *((_DWORD *)v9 + 6) / 4 );
  }
}


System_String_o *__fastcall CatAndMouseGame__GetAssetbundleKey(System_String_o *keyType, const MethodInfo *method)
{
  __int64 v3; // x1
  CatAndMouseGame_c *v4; // x0
  System_Collections_Generic_Dictionary_object__object__o *assetbundleKeyCollection; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B44151 & 1) == 0 )
  {
    sub_1BDB878(&CatAndMouseGame_TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__, v3);
    byte_4B44151 = 1;
  }
  v4 = CatAndMouseGame_TypeInfo;
  value = 0LL;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v4 = CatAndMouseGame_TypeInfo;
  }
  assetbundleKeyCollection = (System_Collections_Generic_Dictionary_object__object__o *)v4->static_fields->assetbundleKeyCollection;
  if ( !assetbundleKeyCollection )
    sub_1BDBAD4(0LL, method);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         assetbundleKeyCollection,
         (Il2CppObject *)keyType,
         &value,
         (const MethodInfo_33A1A3C *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
  {
    return (System_String_o *)value;
  }
  else
  {
    return 0LL;
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CatAndMouseGame__MouseGame1(
        System_String_o *str,
        bool isCompress,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Byte_array *v13; // x21
  System_Text_Encoding_o *UTF8; // x0
  __int64 v15; // x1
  __int64 v16; // x19
  __int64 v17; // x24
  System_Security_Cryptography_TripleDESCryptoServiceProvider_o *v18; // x23
  System_IO_MemoryStream_o *v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1
  System_Security_Cryptography_ICryptoTransform_o *v22; // x24
  System_Security_Cryptography_CryptoStream_o *v23; // x19
  __int64 v24; // x0
  __int64 v25; // x1
  System_Security_Cryptography_CryptoStream_c *klass; // x8
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x1
  System_Byte_array *v32; // x19
  System_IO_MemoryStream_c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0
  System_IO_MemoryStream_o *v37; // x20
  System_IO_MemoryStream_o *v38; // x22
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *v39; // x23
  __int64 v40; // x0
  __int64 v41; // x1
  __int64 v42; // x21
  __int64 v43; // x0
  __int64 v44; // x1
  __int64 v45; // x23
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_c *v46; // x8
  __int64 v47; // x9
  int32_t *v48; // x10
  __int64 v49; // x0
  __int64 v50; // x0
  __int64 v51; // x1
  System_IO_MemoryStream_c *v52; // x8
  __int64 v53; // x9
  int32_t *v54; // x10
  __int64 v55; // x0
  __int64 v56; // x0
  __int64 v57; // x1
  System_IO_MemoryStream_c *v58; // x8
  __int64 v59; // x9
  int32_t *v60; // x10
  __int64 v61; // x0

  if ( (byte_4B44131 & 1) == 0 )
  {
    sub_1BDB878(&ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo, isCompress);
    sub_1BDB878(&byte___TypeInfo, v5);
    sub_1BDB878(&System_Convert_TypeInfo, v6);
    sub_1BDB878(&System_Security_Cryptography_CryptoStream_TypeInfo, v7);
    sub_1BDB878(&System_IDisposable_TypeInfo, v8);
    sub_1BDB878(&System_IO_MemoryStream_TypeInfo, v9);
    sub_1BDB878(&System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo, v10);
    sub_1BDB878(&StringLiteral_24937/*"wuD6keVr"*/, v11);
    sub_1BDB878(&StringLiteral_16979/*"b5nHjsMrqaeNliSs3jyOzgpD"*/, v12);
    byte_4B44131 = 1;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v13 = System_Convert__FromBase64String(str, 0LL);
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    goto LABEL_54;
  v16 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
          UTF8,
          StringLiteral_16979/*"b5nHjsMrqaeNliSs3jyOzgpD"*/,
          UTF8->klass->vtable._19_GetBytes.methodPtr);
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    goto LABEL_54;
  v17 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
          UTF8,
          StringLiteral_24937/*"wuD6keVr"*/,
          UTF8->klass->vtable._19_GetBytes.methodPtr);
  v18 = (System_Security_Cryptography_TripleDESCryptoServiceProvider_o *)sub_1BDBAC4(System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_TripleDESCryptoServiceProvider___ctor(v18, 0LL);
  v19 = (System_IO_MemoryStream_o *)sub_1BDBAC4(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v19, 0LL);
  if ( !v18 )
    sub_1BDBAD4(v20, v21);
  v22 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_TripleDESCryptoServiceProvider_o *, __int64, __int64, Il2CppMethodPointer))v18->klass->vtable._23_CreateDecryptor.method)(
                                                             v18,
                                                             v16,
                                                             v17,
                                                             v18->klass->vtable._24_GenerateKey.methodPtr);
  v23 = (System_Security_Cryptography_CryptoStream_o *)sub_1BDBAC4(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v23, (System_IO_Stream_o *)v19, v22, 1, 0LL);
  if ( !v13 )
    sub_1BDBAD4(v24, v25);
  if ( !v23 )
    sub_1BDBAD4(v24, v25);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))v23->klass->vtable._35_Write.method)(
    v23,
    v13,
    0LL,
    v13->max_length,
    v23->klass->vtable._36_Write.methodPtr);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, Il2CppMethodPointer))v23->klass->vtable._19_Close.method)(
    v23,
    v23->klass->vtable._20_Dispose.methodPtr);
  klass = v23->klass;
  v27 = *(unsigned __int16 *)(&v23->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v23->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      p_offset += 4;
      if ( !v27 )
        goto LABEL_14;
    }
    v29 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_14:
    v29 = sub_1C2C00C(v23, System_IDisposable_TypeInfo, 0LL);
  }
  v30 = (*(__int64 (__fastcall **)(System_Security_Cryptography_CryptoStream_o *, _QWORD))v29)(
          v23,
          *(_QWORD *)(v29 + 8));
  if ( !v19 )
    sub_1BDBAD4(v30, v31);
  v32 = (System_Byte_array *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v19->klass->vtable._41_ToArray.method)(
                               v19,
                               v19->klass[1]._1.image);
  System_Security_Cryptography_SymmetricAlgorithm__Clear((System_Security_Cryptography_SymmetricAlgorithm_o *)v18, 0LL);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v19->klass->vtable._19_Close.method)(
    v19,
    v19->klass->vtable._20_Dispose.methodPtr);
  v33 = v19->klass;
  v34 = *(unsigned __int16 *)(&v19->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v19->klass->_2.bitflags2 + 3) )
  {
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_21;
    }
    v36 = (__int64)(&v33->vtable._0_Equals.method + 2 * *v35);
  }
  else
  {
LABEL_21:
    v36 = sub_1C2C00C(v19, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v36)(v19, *(_QWORD *)(v36 + 8));
  if ( isCompress )
  {
    v37 = (System_IO_MemoryStream_o *)sub_1BDBAC4(System_IO_MemoryStream_TypeInfo);
    System_IO_MemoryStream___ctor(v37, 0LL);
    v38 = (System_IO_MemoryStream_o *)sub_1BDBAC4(System_IO_MemoryStream_TypeInfo);
    System_IO_MemoryStream___ctor_63395020(v38, v32, 0LL);
    v39 = (ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *)sub_1BDBAC4(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo);
    ICSharpCode_SharpZipLib_BZip2_BZip2InputStream___ctor(v39, (System_IO_Stream_o *)v38, 0LL);
    v40 = sub_1BDB920(byte___TypeInfo, 0x4000LL);
    v42 = v40;
    if ( !v40 )
      sub_1BDBAD4(0LL, v41);
    if ( !v39 )
      sub_1BDBAD4(v40, v41);
    while ( 1 )
    {
      v43 = ((__int64 (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v39->klass->vtable._32_Read.method)(
              v39,
              v42,
              0LL,
              *(unsigned int *)(v42 + 24),
              v39->klass->vtable._33_Read.methodPtr);
      if ( (int)v43 <= 0 )
        break;
      if ( !v37 )
        sub_1BDBAD4(v43, v44);
      ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v37->klass->vtable._35_Write.method)(
        v37,
        v42,
        0LL,
        (unsigned int)v43,
        v37->klass->vtable._36_Write.methodPtr);
    }
    ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, Il2CppMethodPointer))v39->klass->vtable._19_Close.method)(
      v39,
      v39->klass->vtable._20_Dispose.methodPtr);
    v46 = v39->klass;
    v47 = *(unsigned __int16 *)(&v39->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v39->klass->_2.bitflags2 + 3) )
    {
      v48 = &v46->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
      {
        --v47;
        v48 += 4;
        if ( !v47 )
          goto LABEL_34;
      }
      v49 = (__int64)(&v46->vtable._0_Equals.method + 2 * *v48);
    }
    else
    {
LABEL_34:
      v49 = sub_1C2C00C(v39, System_IDisposable_TypeInfo, 0LL);
    }
    v50 = (*(__int64 (__fastcall **)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, _QWORD))v49)(
            v39,
            *(_QWORD *)(v49 + 8));
    if ( !v38 )
      sub_1BDBAD4(v50, v51);
    ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v38->klass->vtable._19_Close.method)(
      v38,
      v38->klass->vtable._20_Dispose.methodPtr);
    v52 = v38->klass;
    v53 = *(unsigned __int16 *)(&v38->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v38->klass->_2.bitflags2 + 3) )
    {
      v54 = &v52->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
      {
        --v53;
        v54 += 4;
        if ( !v53 )
          goto LABEL_41;
      }
      v55 = (__int64)(&v52->vtable._0_Equals.method + 2 * *v54);
    }
    else
    {
LABEL_41:
      v55 = sub_1C2C00C(v38, System_IDisposable_TypeInfo, 0LL);
    }
    v56 = (*(__int64 (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v55)(v38, *(_QWORD *)(v55 + 8));
    if ( !v37 )
      sub_1BDBAD4(v56, v57);
    v45 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v37->klass->vtable._41_ToArray.method)(
            v37,
            v37->klass[1]._1.image);
    ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v37->klass->vtable._19_Close.method)(
      v37,
      v37->klass->vtable._20_Dispose.methodPtr);
    v58 = v37->klass;
    v59 = *(unsigned __int16 *)(&v37->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v37->klass->_2.bitflags2 + 3) )
    {
      v60 = &v58->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
      {
        --v59;
        v60 += 4;
        if ( !v59 )
          goto LABEL_48;
      }
      v61 = (__int64)(&v58->vtable._0_Equals.method + 2 * *v60);
    }
    else
    {
LABEL_48:
      v61 = sub_1C2C00C(v37, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v61)(v37, *(_QWORD *)(v61 + 8));
  }
  else
  {
    v45 = (__int64)v32;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
LABEL_54:
    sub_1BDBAD4(UTF8, v15);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, Il2CppMethodPointer))UTF8->klass->vtable._35_GetString.method)(
                              UTF8,
                              v45,
                              UTF8->klass->vtable._36_GetString.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CatAndMouseGame__MouseGame2(
        System_Byte_array *data,
        bool isCompress,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  CatAndMouseGame_c *v6; // x0
  System_Text_Encoding_o *UTF8; // x0
  __int64 v8; // x1
  System_Array_o *v9; // x20
  __int64 v10; // x0
  struct CatAndMouseGame_StaticFields *static_fields; // x8
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x4

  if ( (byte_4B44133 & 1) == 0 )
  {
    sub_1BDB878(&byte___TypeInfo, isCompress);
    sub_1BDB878(&CatAndMouseGame_TypeInfo, v4);
    sub_1BDB878(&StringLiteral_22609/*"pX6q6xK2UymhFKcaGHHUlfXqfTsWF0uH"*/, v5);
    byte_4B44133 = 1;
  }
  v6 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v6 = CatAndMouseGame_TypeInfo;
  }
  System_Array__Copy_64239428((System_Array_o *)data, 0, (System_Array_o *)v6->static_fields->ownerTop, 0, 32, 0LL);
  if ( !data
    || (v9 = (System_Array_o *)sub_1BDB920(byte___TypeInfo, data->max_length - 32),
        System_Array__Copy_64239428((System_Array_o *)data, 32, v9, 0, data->max_length - 32, 0LL),
        (UTF8 = System_Text_Encoding__get_UTF8(0LL)) == 0LL) )
  {
    sub_1BDBAD4(UTF8, v8);
  }
  v10 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
          UTF8,
          StringLiteral_22609/*"pX6q6xK2UymhFKcaGHHUlfXqfTsWF0uH"*/,
          UTF8->klass->vtable._19_GetBytes.methodPtr);
  static_fields = CatAndMouseGame_TypeInfo->static_fields;
  static_fields->ownerData = (struct System_Byte_array *)v10;
  sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->ownerData, v10, v12, v13);
  return CatAndMouseGame__MouseHome(
           (System_Byte_array *)v9,
           CatAndMouseGame_TypeInfo->static_fields->ownerData,
           CatAndMouseGame_TypeInfo->static_fields->ownerTop,
           1,
           v14);
}


// local variable allocation has failed, the output may be wrong!
System_Byte_array *__fastcall CatAndMouseGame__MouseGame2Bytes(
        System_Byte_array *data,
        bool isCompress,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  CatAndMouseGame_c *v6; // x0
  System_Text_Encoding_o *UTF8; // x0
  __int64 v8; // x1
  System_Array_o *v9; // x20
  __int64 v10; // x0
  struct CatAndMouseGame_StaticFields *static_fields; // x8
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x4

  if ( (byte_4B44136 & 1) == 0 )
  {
    sub_1BDB878(&byte___TypeInfo, isCompress);
    sub_1BDB878(&CatAndMouseGame_TypeInfo, v4);
    sub_1BDB878(&StringLiteral_22609/*"pX6q6xK2UymhFKcaGHHUlfXqfTsWF0uH"*/, v5);
    byte_4B44136 = 1;
  }
  v6 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v6 = CatAndMouseGame_TypeInfo;
  }
  System_Array__Copy_64239428((System_Array_o *)data, 0, (System_Array_o *)v6->static_fields->ownerTop, 0, 32, 0LL);
  if ( !data
    || (v9 = (System_Array_o *)sub_1BDB920(byte___TypeInfo, data->max_length - 32),
        System_Array__Copy_64239428((System_Array_o *)data, 32, v9, 0, data->max_length - 32, 0LL),
        (UTF8 = System_Text_Encoding__get_UTF8(0LL)) == 0LL) )
  {
    sub_1BDBAD4(UTF8, v8);
  }
  v10 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
          UTF8,
          StringLiteral_22609/*"pX6q6xK2UymhFKcaGHHUlfXqfTsWF0uH"*/,
          UTF8->klass->vtable._19_GetBytes.methodPtr);
  static_fields = CatAndMouseGame_TypeInfo->static_fields;
  static_fields->ownerData = (struct System_Byte_array *)v10;
  sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->ownerData, v10, v12, v13);
  return CatAndMouseGame__MouseHomeSub(
           (System_Byte_array *)v9,
           CatAndMouseGame_TypeInfo->static_fields->ownerData,
           CatAndMouseGame_TypeInfo->static_fields->ownerTop,
           1,
           v14);
}


// local variable allocation has failed, the output may be wrong!
Il2CppObject *__fastcall CatAndMouseGame__MouseGame2MsgPack(
        System_Byte_array *data,
        bool isCompress,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  CatAndMouseGame_c *v6; // x0
  System_Text_Encoding_o *UTF8; // x0
  __int64 v8; // x1
  System_Array_o *v9; // x20
  __int64 v10; // x0
  struct CatAndMouseGame_StaticFields *static_fields; // x8
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x4

  if ( (byte_4B44134 & 1) == 0 )
  {
    sub_1BDB878(&byte___TypeInfo, isCompress);
    sub_1BDB878(&CatAndMouseGame_TypeInfo, v4);
    sub_1BDB878(&StringLiteral_22609/*"pX6q6xK2UymhFKcaGHHUlfXqfTsWF0uH"*/, v5);
    byte_4B44134 = 1;
  }
  v6 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v6 = CatAndMouseGame_TypeInfo;
  }
  System_Array__Copy_64239428((System_Array_o *)data, 0, (System_Array_o *)v6->static_fields->ownerTop, 0, 32, 0LL);
  if ( !data
    || (v9 = (System_Array_o *)sub_1BDB920(byte___TypeInfo, data->max_length - 32),
        System_Array__Copy_64239428((System_Array_o *)data, 32, v9, 0, data->max_length - 32, 0LL),
        (UTF8 = System_Text_Encoding__get_UTF8(0LL)) == 0LL) )
  {
    sub_1BDBAD4(UTF8, v8);
  }
  v10 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
          UTF8,
          StringLiteral_22609/*"pX6q6xK2UymhFKcaGHHUlfXqfTsWF0uH"*/,
          UTF8->klass->vtable._19_GetBytes.methodPtr);
  static_fields = CatAndMouseGame_TypeInfo->static_fields;
  static_fields->ownerData = (struct System_Byte_array *)v10;
  sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->ownerData, v10, v12, v13);
  return CatAndMouseGame__MouseHomeMsgPack(
           (System_Byte_array *)v9,
           CatAndMouseGame_TypeInfo->static_fields->ownerData,
           CatAndMouseGame_TypeInfo->static_fields->ownerTop,
           1,
           v14);
}


// local variable allocation has failed, the output may be wrong!
Il2CppObject *__fastcall CatAndMouseGame__MouseGame2Unpacker(
        System_Byte_array *data,
        bool isCompress,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  CatAndMouseGame_c *v6; // x0
  System_Text_Encoding_o *UTF8; // x0
  __int64 v8; // x1
  System_Array_o *v9; // x20
  __int64 v10; // x0
  struct CatAndMouseGame_StaticFields *static_fields; // x8
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x4

  if ( (byte_4B44135 & 1) == 0 )
  {
    sub_1BDB878(&byte___TypeInfo, isCompress);
    sub_1BDB878(&CatAndMouseGame_TypeInfo, v4);
    sub_1BDB878(&StringLiteral_22609/*"pX6q6xK2UymhFKcaGHHUlfXqfTsWF0uH"*/, v5);
    byte_4B44135 = 1;
  }
  v6 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v6 = CatAndMouseGame_TypeInfo;
  }
  System_Array__Copy_64239428((System_Array_o *)data, 0, (System_Array_o *)v6->static_fields->ownerTop, 0, 32, 0LL);
  if ( !data
    || (v9 = (System_Array_o *)sub_1BDB920(byte___TypeInfo, data->max_length - 32),
        System_Array__Copy_64239428((System_Array_o *)data, 32, v9, 0, data->max_length - 32, 0LL),
        (UTF8 = System_Text_Encoding__get_UTF8(0LL)) == 0LL) )
  {
    sub_1BDBAD4(UTF8, v8);
  }
  v10 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
          UTF8,
          StringLiteral_22609/*"pX6q6xK2UymhFKcaGHHUlfXqfTsWF0uH"*/,
          UTF8->klass->vtable._19_GetBytes.methodPtr);
  static_fields = CatAndMouseGame_TypeInfo->static_fields;
  static_fields->ownerData = (struct System_Byte_array *)v10;
  sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->ownerData, v10, v12, v13);
  return CatAndMouseGame__MouseHomeMaster(
           (System_Byte_array *)v9,
           CatAndMouseGame_TypeInfo->static_fields->ownerData,
           CatAndMouseGame_TypeInfo->static_fields->ownerTop,
           1,
           v14);
}


System_String_o *__fastcall CatAndMouseGame__MouseGame3(System_String_o *str, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Byte_array *v4; // x0
  const MethodInfo *v5; // x4
  CatAndMouseGame_c *v6; // x8
  System_Byte_array *v7; // x19
  System_String_o *result; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *v11; // x19
  unsigned __int64 klass; // x9
  unsigned __int64 v13; // x8
  System_String_o *UTF8; // x0
  __int64 v15; // x1

  if ( (byte_4B4413B & 1) == 0 )
  {
    sub_1BDB878(&CatAndMouseGame_TypeInfo, method);
    sub_1BDB878(&System_Convert_TypeInfo, v3);
    byte_4B4413B = 1;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v4 = System_Convert__FromBase64String(str, 0LL);
  v6 = CatAndMouseGame_TypeInfo;
  v7 = v4;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v6 = CatAndMouseGame_TypeInfo;
  }
  result = (System_String_o *)CatAndMouseGame__MouseHomeMain(
                                v7,
                                v6->static_fields->stageData,
                                v6->static_fields->stageTop,
                                1,
                                v5);
  if ( result )
  {
    v11 = result;
    if ( (int)result[1].klass >= 1 )
    {
      klass = (unsigned int)result[1].klass;
      v13 = 0LL;
      do
      {
        if ( v13 >= klass )
          sub_1BDBADC(result, v9, v10);
        *((_BYTE *)&result[1].monitor + v13) = ~*((_BYTE *)&result[1].monitor + v13);
        ++v13;
      }
      while ( (__int64)v13 < (int)klass );
    }
    UTF8 = (System_String_o *)System_Text_Encoding__get_UTF8(0LL);
    if ( !UTF8
      || (UTF8 = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, System_String_o *, void *))UTF8->klass[1]._1.events)(
                                      UTF8,
                                      v11,
                                      UTF8->klass[1]._1.properties)) == 0LL )
    {
      sub_1BDBAD4(UTF8, v15);
    }
    return System_String__TrimEnd_62629072(UTF8, 0, 0LL);
  }
  return result;
}


System_String_o *__fastcall CatAndMouseGame__MouseGame3_40242832(
        System_String_o *str,
        System_String_o *key,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x3
  const MethodInfo *v8; // x3
  System_Byte_array *v9; // [xsp+0h] [xbp-30h] BYREF
  System_Byte_array *home; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B4414B & 1) == 0 )
  {
    sub_1BDB878(&CatAndMouseGame_TypeInfo, key);
    byte_4B4414B = 1;
  }
  if ( System_String__IsNullOrEmpty(key, 0LL) )
  {
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    return CatAndMouseGame__MouseGame3(str, v5);
  }
  else
  {
    v9 = 0LL;
    home = 0LL;
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    CatAndMouseGame__OtherHomeBuilding(key, &home, &v9, v6);
    return CatAndMouseGame__MouseGame3_40243000(str, home, v9, v8);
  }
}


System_String_o *__fastcall CatAndMouseGame__MouseGame3_40243000(
        System_String_o *str,
        System_Byte_array *home,
        System_Byte_array *info,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x4
  System_Byte_array *v9; // x21
  System_String_o *result; // x0
  System_String_o *v11; // x19
  System_String_o *UTF8; // x0
  __int64 v13; // x1

  if ( (byte_4B4414C & 1) == 0 )
  {
    sub_1BDB878(&CatAndMouseGame_TypeInfo, home);
    sub_1BDB878(&System_Convert_TypeInfo, v7);
    byte_4B4414C = 1;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v9 = System_Convert__FromBase64String(str, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  result = (System_String_o *)CatAndMouseGame__MouseHomeMain(v9, home, info, 1, v8);
  if ( result )
  {
    v11 = result;
    UTF8 = (System_String_o *)System_Text_Encoding__get_UTF8(0LL);
    if ( !UTF8
      || (UTF8 = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, System_String_o *, void *))UTF8->klass[1]._1.events)(
                                      UTF8,
                                      v11,
                                      UTF8->klass[1]._1.properties)) == 0LL )
    {
      sub_1BDBAD4(UTF8, v13);
    }
    return System_String__TrimEnd_62629072(UTF8, 0, 0LL);
  }
  return result;
}


System_Byte_array *__fastcall CatAndMouseGame__MouseGame4(System_Byte_array *data, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  CatAndMouseGame_c *v4; // x0
  System_Byte_array *result; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  signed int max_length; // w8
  il2cpp_array_size_t v9; // w9
  il2cpp_array_size_t v10; // w12
  il2cpp_array_size_t v11; // w13
  char *v12; // x13
  uint8_t *v13; // x15
  uint8_t v14; // w14
  _BYTE *v15; // x13
  char v16; // t1

  if ( (byte_4B4413E & 1) == 0 )
  {
    sub_1BDB878(&CatAndMouseGame_TypeInfo, method);
    byte_4B4413E = 1;
  }
  v4 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v4 = CatAndMouseGame_TypeInfo;
  }
  result = CatAndMouseGame__MouseHomeMain(data, v4->static_fields->baseData, v4->static_fields->baseTop, 0, v2);
  if ( result )
  {
    max_length = result->max_length;
    if ( max_length >= 1 )
    {
      v9 = 0;
      do
      {
        v10 = v9 + 1;
        if ( (int)(v9 + 1) >= max_length )
          break;
        v11 = result->max_length;
        if ( v9 < v11 && v10 < v11 )
        {
          v12 = (char *)result + (int)v10;
          v13 = &result->m_Items[v9 + 4];
          v14 = *v13;
          v16 = v12[32];
          v15 = v12 + 32;
          *v13 = v16 ^ 0xD2;
          if ( v10 < result->max_length )
            continue;
        }
        sub_1BDBADC(result, v6, v7);
        v9 += 2;
        *v15 = v14 ^ 0xCE;
      }
      while ( (int)v9 < max_length );
    }
  }
  return result;
}


System_Security_Cryptography_CryptoStream_o *__fastcall CatAndMouseGame__MouseGame4Stream(
        System_IO_Stream_o *outputStream,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  CatAndMouseGame_c *v4; // x0

  if ( (byte_4B4413F & 1) == 0 )
  {
    sub_1BDB878(&CatAndMouseGame_TypeInfo, method);
    byte_4B4413F = 1;
  }
  v4 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v4 = CatAndMouseGame_TypeInfo;
  }
  return CatAndMouseGame__MouseHomeMainStream(
           outputStream,
           v4->static_fields->baseData,
           v4->static_fields->baseTop,
           0,
           v2);
}


System_Security_Cryptography_CryptoStream_o *__fastcall CatAndMouseGame__MouseGame4Stream_40243524(
        System_IO_Stream_o *outputStream,
        System_String_o *key,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x3
  const MethodInfo *v8; // x4
  System_Byte_array *v9; // [xsp+0h] [xbp-30h] BYREF
  System_Byte_array *home; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B4414E & 1) == 0 )
  {
    sub_1BDB878(&CatAndMouseGame_TypeInfo, key);
    byte_4B4414E = 1;
  }
  if ( System_String__IsNullOrEmpty(key, 0LL) )
  {
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    return CatAndMouseGame__MouseGame4Stream(outputStream, v5);
  }
  else
  {
    v9 = 0LL;
    home = 0LL;
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    CatAndMouseGame__OtherHomeBuilding(key, &home, &v9, v6);
    return CatAndMouseGame__MouseHomeMainStream(outputStream, home, v9, 0, v8);
  }
}


System_Byte_array *__fastcall CatAndMouseGame__MouseGame4_40243244(
        System_Byte_array *data,
        System_String_o *key,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x3
  const MethodInfo *v8; // x3
  System_Byte_array *v9; // [xsp+0h] [xbp-30h] BYREF
  System_Byte_array *home; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B4414D & 1) == 0 )
  {
    sub_1BDB878(&CatAndMouseGame_TypeInfo, key);
    byte_4B4414D = 1;
  }
  if ( System_String__IsNullOrEmpty(key, 0LL) )
  {
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    return CatAndMouseGame__MouseGame4(data, v5);
  }
  else
  {
    v9 = 0LL;
    home = 0LL;
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    CatAndMouseGame__OtherHomeBuilding(key, &home, &v9, v6);
    return CatAndMouseGame__MouseGame4_40243412(data, home, v9, v8);
  }
}


System_Byte_array *__fastcall CatAndMouseGame__MouseGame4_40243412(
        System_Byte_array *data,
        System_Byte_array *home,
        System_Byte_array *info,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( (byte_4B4414F & 1) == 0 )
  {
    sub_1BDB878(&CatAndMouseGame_TypeInfo, home);
    byte_4B4414F = 1;
  }
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  return CatAndMouseGame__MouseHomeMain(data, home, info, 0, v4);
}


System_String_o *__fastcall CatAndMouseGame__MouseGame5(System_String_o *str, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CatAndMouseGame_c *v5; // x0
  struct System_Byte_array *BattleKey; // x8
  struct System_Byte_array *BattleIV; // x8
  System_Byte_array *v8; // x19
  System_Byte_array *v9; // x20
  __int64 v10; // x2
  const MethodInfo *v11; // x4
  System_Byte_array *v12; // x21
  __int64 i; // x23
  struct System_Byte_array *v14; // x8
  unsigned __int64 v15; // x24
  __int64 j; // x23
  struct System_Byte_array *v17; // x8
  signed __int64 max_length; // x25
  unsigned __int64 v19; // x24
  struct System_Byte_array *v20; // x8

  if ( (byte_4B44142 & 1) == 0 )
  {
    sub_1BDB878(&byte___TypeInfo, method);
    sub_1BDB878(&CatAndMouseGame_TypeInfo, v3);
    sub_1BDB878(&System_Convert_TypeInfo, v4);
    byte_4B44142 = 1;
  }
  v5 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v5 = CatAndMouseGame_TypeInfo;
  }
  BattleKey = v5->static_fields->BattleKey;
  if ( !BattleKey
    || (v5 = (CatAndMouseGame_c *)sub_1BDB920(byte___TypeInfo, BattleKey->max_length),
        (BattleIV = CatAndMouseGame_TypeInfo->static_fields->BattleIV) == 0LL) )
  {
LABEL_33:
    sub_1BDBAD4(v5, method);
  }
  v8 = (System_Byte_array *)v5;
  v9 = (System_Byte_array *)sub_1BDB920(byte___TypeInfo, BattleIV->max_length);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v12 = System_Convert__FromBase64String(str, 0LL);
  for ( i = 32LL; ; ++i )
  {
    v5 = CatAndMouseGame_TypeInfo;
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      v5 = CatAndMouseGame_TypeInfo;
    }
    v14 = v5->static_fields->BattleKey;
    if ( !v14 )
      goto LABEL_33;
    v15 = i - 32;
    if ( i - 32 >= (int)v14->max_length )
      break;
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v14 = CatAndMouseGame_TypeInfo->static_fields->BattleKey;
      if ( !v14 )
        goto LABEL_33;
    }
    if ( v15 >= v14->max_length )
      goto LABEL_34;
    if ( !v8 )
      goto LABEL_33;
    if ( v15 >= v8->max_length )
LABEL_34:
      sub_1BDBADC(v5, method, v10);
    *((_BYTE *)&v8->obj.klass + i) = *((_BYTE *)&v14->obj.klass + i) ^ 4;
  }
  for ( j = 32LL; ; ++j )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = CatAndMouseGame_TypeInfo;
    }
    v17 = v5->static_fields->BattleIV;
    if ( !v17 )
      goto LABEL_33;
    max_length = (int)v17->max_length;
    v19 = j - 32;
    if ( !v5->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v5);
    if ( (__int64)v19 >= max_length )
      break;
    v20 = CatAndMouseGame_TypeInfo->static_fields->BattleIV;
    if ( !v20 )
      goto LABEL_33;
    if ( v19 >= v20->max_length )
      goto LABEL_34;
    if ( !v9 )
      goto LABEL_33;
    if ( v19 >= v9->max_length )
      goto LABEL_34;
    *((_BYTE *)&v9->obj.klass + j) = *((_BYTE *)&v20->obj.klass + j) ^ 8;
    v5 = CatAndMouseGame_TypeInfo;
  }
  return CatAndMouseGame__MouseHome(v12, v8, v9, 0, v11);
}


System_String_o *__fastcall CatAndMouseGame__MouseGame6(System_String_o *str, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Byte_array *v4; // x0
  const MethodInfo *v5; // x4
  CatAndMouseGame_c *v6; // x8
  System_Byte_array *v7; // x19

  if ( (byte_4B44155 & 1) == 0 )
  {
    sub_1BDB878(&CatAndMouseGame_TypeInfo, method);
    sub_1BDB878(&System_Convert_TypeInfo, v3);
    byte_4B44155 = 1;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v4 = System_Convert__FromBase64String(str, 0LL);
  v6 = CatAndMouseGame_TypeInfo;
  v7 = v4;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v6 = CatAndMouseGame_TypeInfo;
  }
  return CatAndMouseGame__MouseHome(v7, v6->static_fields->sideData, v6->static_fields->sideTop, 0, v5);
}


System_Byte_array *__fastcall CatAndMouseGame__MouseGame6ForMsgPack(System_String_o *str, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Byte_array *v4; // x0
  const MethodInfo *v5; // x4
  CatAndMouseGame_c *v6; // x8
  System_Byte_array *v7; // x19

  if ( (byte_4B44156 & 1) == 0 )
  {
    sub_1BDB878(&CatAndMouseGame_TypeInfo, method);
    sub_1BDB878(&System_Convert_TypeInfo, v3);
    byte_4B44156 = 1;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v4 = System_Convert__FromBase64String(str, 0LL);
  v6 = CatAndMouseGame_TypeInfo;
  v7 = v4;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v6 = CatAndMouseGame_TypeInfo;
  }
  return CatAndMouseGame__MouseHomeSub(v7, v6->static_fields->sideData, v6->static_fields->sideTop, 0, v5);
}


System_Byte_array *__fastcall CatAndMouseGame__MouseGame7(System_Byte_array *data, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  CatAndMouseGame_c *v4; // x0
  System_Byte_array *result; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  unsigned __int64 max_length; // x8
  unsigned __int64 v9; // x9

  if ( (byte_4B44144 & 1) == 0 )
  {
    sub_1BDB878(&CatAndMouseGame_TypeInfo, method);
    byte_4B44144 = 1;
  }
  v4 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v4 = CatAndMouseGame_TypeInfo;
  }
  result = CatAndMouseGame__MouseHomeMain(data, v4->static_fields->stageData, v4->static_fields->stageTop, 1, v2);
  if ( !result )
    sub_1BDBAD4(0LL, v6);
  max_length = result->max_length;
  if ( (__int64)(max_length << 32) >= 1 )
  {
    v9 = 0LL;
    do
    {
      if ( v9 >= max_length )
        sub_1BDBADC(result, v6, v7);
      result->m_Items[v9 + 4] = ~result->m_Items[v9 + 4];
      ++v9;
    }
    while ( (__int64)v9 < (int)max_length );
  }
  return result;
}


System_String_o *__fastcall CatAndMouseGame__MouseGame8(System_String_o *str, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Byte_array *v4; // x0
  const MethodInfo *v5; // x4
  CatAndMouseGame_c *v6; // x8
  System_Byte_array *v7; // x19
  System_String_o *result; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  const MethodInfo *v11; // x4
  System_String_o *v12; // x20
  CatAndMouseGame_c *v13; // x0
  unsigned __int64 klass_low; // x8
  unsigned __int64 v15; // x9
  System_String_o *UTF8; // x0
  __int64 v17; // x1

  if ( (byte_4B44146 & 1) == 0 )
  {
    sub_1BDB878(&CatAndMouseGame_TypeInfo, method);
    sub_1BDB878(&System_Convert_TypeInfo, v3);
    byte_4B44146 = 1;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v4 = System_Convert__FromBase64String(str, 0LL);
  v6 = CatAndMouseGame_TypeInfo;
  v7 = v4;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v6 = CatAndMouseGame_TypeInfo;
  }
  result = (System_String_o *)CatAndMouseGame__MouseHomeMainZ2(
                                v7,
                                v6->static_fields->stageData,
                                v6->static_fields->stageTop,
                                1,
                                v5);
  v12 = result;
  if ( result )
    goto LABEL_11;
  v13 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v13 = CatAndMouseGame_TypeInfo;
  }
  result = (System_String_o *)CatAndMouseGame__MouseHomeMain(
                                v7,
                                v13->static_fields->stageData,
                                v13->static_fields->stageTop,
                                1,
                                v11);
  v12 = result;
  if ( result )
  {
LABEL_11:
    klass_low = LODWORD(v12[1].klass);
    if ( (__int64)(klass_low << 32) >= 1 )
    {
      v15 = 0LL;
      do
      {
        if ( v15 >= klass_low )
          sub_1BDBADC(result, v9, v10);
        *((_BYTE *)&v12[1].monitor + v15) = ~*((_BYTE *)&v12[1].monitor + v15);
        ++v15;
      }
      while ( (__int64)v15 < (int)klass_low );
    }
    UTF8 = (System_String_o *)System_Text_Encoding__get_UTF8(0LL);
    if ( !UTF8
      || (UTF8 = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, System_String_o *, void *))UTF8->klass[1]._1.events)(
                                      UTF8,
                                      v12,
                                      UTF8->klass[1]._1.properties)) == 0LL )
    {
      sub_1BDBAD4(UTF8, v17);
    }
    return System_String__TrimEnd_62629072(UTF8, 0, 0LL);
  }
  return result;
}


System_IO_Stream_o *__fastcall CatAndMouseGame__MouseGameZ(System_IO_Stream_o *stream, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  CatAndMouseGame_c *v4; // x0

  if ( (byte_4B44138 & 1) == 0 )
  {
    sub_1BDB878(&CatAndMouseGame_TypeInfo, method);
    byte_4B44138 = 1;
  }
  v4 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v4 = CatAndMouseGame_TypeInfo;
  }
  return CatAndMouseGame__MouseHomeMainZ(stream, v4->static_fields->stageData, v4->static_fields->stageTop, 1, v2);
}


System_String_o *__fastcall CatAndMouseGame__MouseHome(
        System_Byte_array *data,
        System_Byte_array *home,
        System_Byte_array *info,
        bool isCompress,
        const MethodInfo *method)
{
  System_Byte_array *v9; // x19
  System_String_o *UTF8; // x0
  __int64 v11; // x1

  if ( (byte_4B4415D & 1) == 0 )
  {
    sub_1BDB878(&CatAndMouseGame_TypeInfo, home);
    byte_4B4415D = 1;
  }
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v9 = CatAndMouseGame__MouseHomeMain(data, home, info, isCompress, method);
  UTF8 = (System_String_o *)System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8
    || (UTF8 = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, System_Byte_array *, void *))UTF8->klass[1]._1.events)(
                                    UTF8,
                                    v9,
                                    UTF8->klass[1]._1.properties)) == 0LL )
  {
    sub_1BDBAD4(UTF8, v11);
  }
  return System_String__TrimEnd_62629072(UTF8, 0, 0LL);
}


System_Byte_array *__fastcall CatAndMouseGame__MouseHomeMain(
        System_Byte_array *data,
        System_Byte_array *home,
        System_Byte_array *info,
        bool isCompress,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  System_Security_Cryptography_RijndaelManaged_o *v11; // x23
  __int64 v12; // x0
  __int64 v13; // x1
  System_Security_Cryptography_ICryptoTransform_o *v14; // x19
  CatAndMouseGame_DataDecryptor_o *v15; // x23
  const MethodInfo *v16; // x4
  __int64 v17; // x0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  System_Byte_array *v20; // x22
  CatAndMouseGame_DataDecryptor_c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0
  System_Security_Cryptography_ICryptoTransform_c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 p_method; // x0

  if ( (byte_4B44162 & 1) == 0 )
  {
    sub_1BDB878(&CatAndMouseGame_DataDecryptor_TypeInfo, home);
    sub_1BDB878(&System_IDisposable_TypeInfo, v9);
    sub_1BDB878(&System_Security_Cryptography_RijndaelManaged_TypeInfo, v10);
    byte_4B44162 = 1;
  }
  v11 = (System_Security_Cryptography_RijndaelManaged_o *)sub_1BDBAC4(System_Security_Cryptography_RijndaelManaged_TypeInfo);
  System_Security_Cryptography_RijndaelManaged___ctor(v11, 0LL);
  if ( !v11 )
    sub_1BDBAD4(v12, v13);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, Il2CppMethodPointer))v11->klass->vtable._19_set_Padding.method)(
    v11,
    2LL,
    v11->klass->vtable._20_CreateEncryptor.methodPtr);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, Il2CppMethodPointer))v11->klass->vtable._17_set_Mode.method)(
    v11,
    1LL,
    v11->klass->vtable._18_get_Padding.methodPtr);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, Il2CppMethodPointer))v11->klass->vtable._15_set_KeySize.method)(
    v11,
    256LL,
    v11->klass->vtable._16_get_Mode.methodPtr);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, Il2CppMethodPointer))v11->klass->vtable._7_set_BlockSize.method)(
    v11,
    256LL,
    v11->klass->vtable._8_get_FeedbackSize.methodPtr);
  v14 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, System_Byte_array *, System_Byte_array *, Il2CppMethodPointer))v11->klass->vtable._23_CreateDecryptor.method)(
                                                             v11,
                                                             home,
                                                             info,
                                                             v11->klass->vtable._24_GenerateKey.methodPtr);
  v15 = (CatAndMouseGame_DataDecryptor_o *)sub_1BDBAC4(CatAndMouseGame_DataDecryptor_TypeInfo);
  CatAndMouseGame_DataDecryptor___ctor(v15, v14, data, isCompress, v16);
  if ( !v15 )
    sub_1BDBAD4(v17, v18);
  CatAndMouseGame_DataDecryptor__ApplyWrite(v15, v18);
  v20 = CatAndMouseGame_DataDecryptor__ToByteArray(v15, v19);
  klass = v15->klass;
  v22 = *(unsigned __int16 *)(&v15->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v15->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      p_offset += 4;
      if ( !v22 )
        goto LABEL_9;
    }
    v24 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v24 = sub_1C2C00C(v15, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(CatAndMouseGame_DataDecryptor_o *, _QWORD))v24)(v15, *(_QWORD *)(v24 + 8));
  if ( v14 )
  {
    v25 = v14->klass;
    v26 = *(unsigned __int16 *)(&v14->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v14->klass->_2.bitflags2 + 3) )
    {
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_16;
      }
      p_method = (__int64)&v25->vtable[*v27].method;
    }
    else
    {
LABEL_16:
      p_method = sub_1C2C00C(v14, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Security_Cryptography_ICryptoTransform_o *, _QWORD))p_method)(
      v14,
      *(_QWORD *)(p_method + 8));
  }
  return v20;
}


System_Security_Cryptography_CryptoStream_o *__fastcall CatAndMouseGame__MouseHomeMainStream(
        System_IO_Stream_o *outputStream,
        System_Byte_array *home,
        System_Byte_array *info,
        bool isCompress,
        const MethodInfo *method)
{
  __int64 v8; // x1
  System_Security_Cryptography_RijndaelManaged_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  System_Security_Cryptography_ICryptoTransform_o *v12; // x20
  System_Security_Cryptography_CryptoStream_o *v13; // x21

  if ( (byte_4B44163 & 1) == 0 )
  {
    sub_1BDB878(&System_Security_Cryptography_CryptoStream_TypeInfo, home);
    sub_1BDB878(&System_Security_Cryptography_RijndaelManaged_TypeInfo, v8);
    byte_4B44163 = 1;
  }
  v9 = (System_Security_Cryptography_RijndaelManaged_o *)sub_1BDBAC4(System_Security_Cryptography_RijndaelManaged_TypeInfo);
  System_Security_Cryptography_RijndaelManaged___ctor(v9, 0LL);
  if ( !v9 )
    sub_1BDBAD4(v10, v11);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, Il2CppMethodPointer))v9->klass->vtable._19_set_Padding.method)(
    v9,
    2LL,
    v9->klass->vtable._20_CreateEncryptor.methodPtr);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, Il2CppMethodPointer))v9->klass->vtable._17_set_Mode.method)(
    v9,
    1LL,
    v9->klass->vtable._18_get_Padding.methodPtr);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, Il2CppMethodPointer))v9->klass->vtable._15_set_KeySize.method)(
    v9,
    256LL,
    v9->klass->vtable._16_get_Mode.methodPtr);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, Il2CppMethodPointer))v9->klass->vtable._7_set_BlockSize.method)(
    v9,
    256LL,
    v9->klass->vtable._8_get_FeedbackSize.methodPtr);
  v12 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, System_Byte_array *, System_Byte_array *, Il2CppMethodPointer))v9->klass->vtable._23_CreateDecryptor.method)(
                                                             v9,
                                                             home,
                                                             info,
                                                             v9->klass->vtable._24_GenerateKey.methodPtr);
  v13 = (System_Security_Cryptography_CryptoStream_o *)sub_1BDBAC4(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v13, outputStream, v12, 1, 0LL);
  return v13;
}


System_IO_Stream_o *__fastcall CatAndMouseGame__MouseHomeMainZ(
        System_IO_Stream_o *stream,
        System_Byte_array *home,
        System_Byte_array *info,
        bool isCompress,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  System_Security_Cryptography_RijndaelManaged_o *v11; // x23
  __int64 v12; // x0
  __int64 v13; // x1
  System_Security_Cryptography_ICryptoTransform_o *v14; // x22
  System_Security_Cryptography_CryptoStream_o *v15; // x21
  ICSharpCode_SharpZipLib_GZip_GZipInputStream_o *v16; // x19

  if ( (byte_4B44160 & 1) == 0 )
  {
    sub_1BDB878(&System_Security_Cryptography_CryptoStream_TypeInfo, home);
    sub_1BDB878(&ICSharpCode_SharpZipLib_GZip_GZipInputStream_TypeInfo, v9);
    sub_1BDB878(&System_Security_Cryptography_RijndaelManaged_TypeInfo, v10);
    byte_4B44160 = 1;
  }
  v11 = (System_Security_Cryptography_RijndaelManaged_o *)sub_1BDBAC4(System_Security_Cryptography_RijndaelManaged_TypeInfo);
  System_Security_Cryptography_RijndaelManaged___ctor(v11, 0LL);
  if ( !v11 )
    sub_1BDBAD4(v12, v13);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, Il2CppMethodPointer))v11->klass->vtable._19_set_Padding.method)(
    v11,
    2LL,
    v11->klass->vtable._20_CreateEncryptor.methodPtr);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, Il2CppMethodPointer))v11->klass->vtable._17_set_Mode.method)(
    v11,
    1LL,
    v11->klass->vtable._18_get_Padding.methodPtr);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, Il2CppMethodPointer))v11->klass->vtable._15_set_KeySize.method)(
    v11,
    256LL,
    v11->klass->vtable._16_get_Mode.methodPtr);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, Il2CppMethodPointer))v11->klass->vtable._7_set_BlockSize.method)(
    v11,
    256LL,
    v11->klass->vtable._8_get_FeedbackSize.methodPtr);
  v14 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, System_Byte_array *, System_Byte_array *, Il2CppMethodPointer))v11->klass->vtable._23_CreateDecryptor.method)(
                                                             v11,
                                                             home,
                                                             info,
                                                             v11->klass->vtable._24_GenerateKey.methodPtr);
  v15 = (System_Security_Cryptography_CryptoStream_o *)sub_1BDBAC4(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v15, stream, v14, 0, 0LL);
  if ( isCompress )
  {
    v16 = (ICSharpCode_SharpZipLib_GZip_GZipInputStream_o *)sub_1BDBAC4(ICSharpCode_SharpZipLib_GZip_GZipInputStream_TypeInfo);
    ICSharpCode_SharpZipLib_GZip_GZipInputStream___ctor(v16, (System_IO_Stream_o *)v15, 0LL);
    return (System_IO_Stream_o *)v16;
  }
  return (System_IO_Stream_o *)v15;
}


System_Byte_array *__fastcall CatAndMouseGame__MouseHomeMainZ2(
        System_Byte_array *data,
        System_Byte_array *home,
        System_Byte_array *info,
        bool isCompress,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Security_Cryptography_RijndaelManaged_o *v13; // x23
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x0
  __int64 v17; // x1
  System_Security_Cryptography_ICryptoTransform_o *v18; // x23
  System_Byte_array *v19; // x22
  System_IO_MemoryStream_o *v20; // x19
  System_Security_Cryptography_CryptoStream_o *v21; // x20
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned int max_length; // w8
  System_IO_MemoryStream_o *v28; // x21
  System_IO_MemoryStream_o *v29; // x23
  ICSharpCode_SharpZipLib_GZip_GZipInputStream_o *v30; // x22
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x24
  __int64 v34; // x0
  __int64 v35; // x1
  __int64 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x0
  __int64 v39; // x1

  if ( (byte_4B44161 & 1) == 0 )
  {
    sub_1BDB878(&byte___TypeInfo, home);
    sub_1BDB878(&System_Security_Cryptography_CryptoStream_TypeInfo, v9);
    sub_1BDB878(&ICSharpCode_SharpZipLib_GZip_GZipInputStream_TypeInfo, v10);
    sub_1BDB878(&System_IO_MemoryStream_TypeInfo, v11);
    sub_1BDB878(&System_Security_Cryptography_RijndaelManaged_TypeInfo, v12);
    byte_4B44161 = 1;
  }
  v13 = (System_Security_Cryptography_RijndaelManaged_o *)sub_1BDBAC4(System_Security_Cryptography_RijndaelManaged_TypeInfo);
  System_Security_Cryptography_RijndaelManaged___ctor(v13, 0LL);
  if ( !v13 )
    sub_1BDBAD4(v14, v15);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._19_set_Padding.method)(
    v13,
    2LL,
    v13->klass->vtable._20_CreateEncryptor.methodPtr);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._17_set_Mode.method)(
    v13,
    1LL,
    v13->klass->vtable._18_get_Padding.methodPtr);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._15_set_KeySize.method)(
    v13,
    256LL,
    v13->klass->vtable._16_get_Mode.methodPtr);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._7_set_BlockSize.method)(
    v13,
    256LL,
    v13->klass->vtable._8_get_FeedbackSize.methodPtr);
  v16 = ((__int64 (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, System_Byte_array *, System_Byte_array *, Il2CppMethodPointer))v13->klass->vtable._23_CreateDecryptor.method)(
          v13,
          home,
          info,
          v13->klass->vtable._24_GenerateKey.methodPtr);
  if ( !data )
    sub_1BDBAD4(v16, v17);
  v18 = (System_Security_Cryptography_ICryptoTransform_o *)v16;
  v19 = (System_Byte_array *)sub_1BDB920(byte___TypeInfo, data->max_length);
  v20 = (System_IO_MemoryStream_o *)sub_1BDBAC4(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_63395020(v20, data, 0LL);
  v21 = (System_Security_Cryptography_CryptoStream_o *)sub_1BDBAC4(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v21, (System_IO_Stream_o *)v20, v18, 0, 0LL);
  if ( !v19 )
    sub_1BDBAD4(v22, v23);
  if ( !v21 )
    sub_1BDBAD4(v22, v23);
  v24 = ((__int64 (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))v21->klass->vtable._32_Read.method)(
          v21,
          v19,
          0LL,
          v19->max_length,
          v21->klass->vtable._33_Read.methodPtr);
  if ( isCompress )
  {
    max_length = v19->max_length;
    if ( !max_length )
      sub_1BDBADC(v24, v25, v26);
    if ( v19->m_Items[4] == 66 )
    {
      if ( max_length <= 1 )
        sub_1BDBADC(v24, v25, v26);
      if ( v19->m_Items[5] == 90 )
      {
        v19 = 0LL;
        if ( !v20 )
          goto LABEL_24;
        goto LABEL_23;
      }
    }
    v28 = (System_IO_MemoryStream_o *)sub_1BDBAC4(System_IO_MemoryStream_TypeInfo);
    System_IO_MemoryStream___ctor(v28, 0LL);
    v29 = (System_IO_MemoryStream_o *)sub_1BDBAC4(System_IO_MemoryStream_TypeInfo);
    System_IO_MemoryStream___ctor_63395020(v29, v19, 0LL);
    v30 = (ICSharpCode_SharpZipLib_GZip_GZipInputStream_o *)sub_1BDBAC4(ICSharpCode_SharpZipLib_GZip_GZipInputStream_TypeInfo);
    ICSharpCode_SharpZipLib_GZip_GZipInputStream___ctor(v30, (System_IO_Stream_o *)v29, 0LL);
    v31 = sub_1BDB920(byte___TypeInfo, 0x4000LL);
    v33 = v31;
    if ( !v31 )
      sub_1BDBAD4(0LL, v32);
    if ( !v30 )
      sub_1BDBAD4(v31, v32);
    while ( 1 )
    {
      v34 = ((__int64 (__fastcall *)(ICSharpCode_SharpZipLib_GZip_GZipInputStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v30->klass->vtable._32_Read.method)(
              v30,
              v33,
              0LL,
              *(unsigned int *)(v33 + 24),
              v30->klass->vtable._33_Read.methodPtr);
      if ( (int)v34 <= 0 )
        break;
      if ( !v28 )
        sub_1BDBAD4(v34, v35);
      ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v28->klass->vtable._35_Write.method)(
        v28,
        v33,
        0LL,
        (unsigned int)v34,
        v28->klass->vtable._36_Write.methodPtr);
    }
    v36 = ((__int64 (__fastcall *)(ICSharpCode_SharpZipLib_GZip_GZipInputStream_o *, Il2CppMethodPointer))v30->klass->vtable._19_Close.method)(
            v30,
            v30->klass->vtable._20_Dispose.methodPtr);
    if ( !v28 )
      sub_1BDBAD4(v36, v37);
    v38 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v28->klass->vtable._41_ToArray.method)(
            v28,
            v28->klass[1]._1.image);
    if ( !v29 )
      sub_1BDBAD4(v38, v39);
    v19 = (System_Byte_array *)v38;
    ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v29->klass->vtable._19_Close.method)(
      v29,
      v29->klass->vtable._20_Dispose.methodPtr);
    ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v28->klass->vtable._19_Close.method)(
      v28,
      v28->klass->vtable._20_Dispose.methodPtr);
  }
  if ( v20 )
LABEL_23:
    ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v20->klass->vtable._19_Close.method)(
      v20,
      v20->klass->vtable._20_Dispose.methodPtr);
LABEL_24:
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, Il2CppMethodPointer))v21->klass->vtable._19_Close.method)(
    v21,
    v21->klass->vtable._20_Dispose.methodPtr);
  return v19;
}


Il2CppObject *__fastcall CatAndMouseGame__MouseHomeMaster(
        System_Byte_array *data,
        System_Byte_array *home,
        System_Byte_array *info,
        bool isCompress,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_Byte_array *v10; // x19
  MasterDataUnpakcer_o *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4B4415F & 1) == 0 )
  {
    sub_1BDB878(&CatAndMouseGame_TypeInfo, home);
    sub_1BDB878(&MasterDataUnpakcer_TypeInfo, v9);
    byte_4B4415F = 1;
  }
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v10 = CatAndMouseGame__MouseHomeSub(data, home, info, isCompress, method);
  v11 = (MasterDataUnpakcer_o *)sub_1BDBAC4(MasterDataUnpakcer_TypeInfo);
  MasterDataUnpakcer___ctor(v11, 0LL);
  if ( !v11 )
    sub_1BDBAD4(v12, v13);
  return MasterDataUnpakcer__Unpack_39974464(v11, v10, 0LL);
}


Il2CppObject *__fastcall CatAndMouseGame__MouseHomeMsgPack(
        System_Byte_array *data,
        System_Byte_array *home,
        System_Byte_array *info,
        bool isCompress,
        const MethodInfo *method)
{
  __int64 v9; // x1
  MiniMessagePack_MiniMessagePacker_o *v10; // x23
  const MethodInfo *v11; // x4
  System_Byte_array *v12; // x0
  __int64 v13; // x1

  if ( (byte_4B4415E & 1) == 0 )
  {
    sub_1BDB878(&CatAndMouseGame_TypeInfo, home);
    sub_1BDB878(&MiniMessagePack_MiniMessagePacker_TypeInfo, v9);
    byte_4B4415E = 1;
  }
  v10 = (MiniMessagePack_MiniMessagePacker_o *)sub_1BDBAC4(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v10, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v12 = CatAndMouseGame__MouseHomeSub(data, home, info, isCompress, v11);
  if ( !v10 )
    sub_1BDBAD4(v12, v13);
  return MiniMessagePack_MiniMessagePacker__Unpack_38766488(v10, v12, 0LL);
}


System_Byte_array *__fastcall CatAndMouseGame__MouseHomeSub(
        System_Byte_array *data,
        System_Byte_array *home,
        System_Byte_array *info,
        bool isCompress,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Security_Cryptography_RijndaelManaged_o *v13; // x23
  __int64 v14; // x0
  __int64 v15; // x1
  System_Security_Cryptography_ICryptoTransform_o *v16; // x23
  System_IO_MemoryStream_o *v17; // x19
  System_Security_Cryptography_CryptoStream_o *v18; // x20
  __int64 v19; // x0
  __int64 v20; // x1
  System_IO_MemoryStream_o *v21; // x21
  ICSharpCode_SharpZipLib_GZip_GZipInputStream_o *v22; // x22
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x23
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x0
  __int64 v29; // x1
  System_Byte_array *v30; // x23
  __int64 v31; // x0
  __int64 v32; // x1

  if ( (byte_4B44164 & 1) == 0 )
  {
    sub_1BDB878(&byte___TypeInfo, home);
    sub_1BDB878(&System_Security_Cryptography_CryptoStream_TypeInfo, v9);
    sub_1BDB878(&ICSharpCode_SharpZipLib_GZip_GZipInputStream_TypeInfo, v10);
    sub_1BDB878(&System_IO_MemoryStream_TypeInfo, v11);
    sub_1BDB878(&System_Security_Cryptography_RijndaelManaged_TypeInfo, v12);
    byte_4B44164 = 1;
  }
  v13 = (System_Security_Cryptography_RijndaelManaged_o *)sub_1BDBAC4(System_Security_Cryptography_RijndaelManaged_TypeInfo);
  System_Security_Cryptography_RijndaelManaged___ctor(v13, 0LL);
  if ( !v13 )
    sub_1BDBAD4(v14, v15);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._19_set_Padding.method)(
    v13,
    2LL,
    v13->klass->vtable._20_CreateEncryptor.methodPtr);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._17_set_Mode.method)(
    v13,
    1LL,
    v13->klass->vtable._18_get_Padding.methodPtr);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._15_set_KeySize.method)(
    v13,
    256LL,
    v13->klass->vtable._16_get_Mode.methodPtr);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._7_set_BlockSize.method)(
    v13,
    256LL,
    v13->klass->vtable._8_get_FeedbackSize.methodPtr);
  v16 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, System_Byte_array *, System_Byte_array *, Il2CppMethodPointer))v13->klass->vtable._23_CreateDecryptor.method)(
                                                             v13,
                                                             home,
                                                             info,
                                                             v13->klass->vtable._24_GenerateKey.methodPtr);
  v17 = (System_IO_MemoryStream_o *)sub_1BDBAC4(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_63395020(v17, data, 0LL);
  v18 = (System_Security_Cryptography_CryptoStream_o *)sub_1BDBAC4(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v18, (System_IO_Stream_o *)v17, v16, 0, 0LL);
  if ( isCompress )
  {
    v21 = (System_IO_MemoryStream_o *)sub_1BDBAC4(System_IO_MemoryStream_TypeInfo);
    System_IO_MemoryStream___ctor(v21, 0LL);
    v22 = (ICSharpCode_SharpZipLib_GZip_GZipInputStream_o *)sub_1BDBAC4(ICSharpCode_SharpZipLib_GZip_GZipInputStream_TypeInfo);
    ICSharpCode_SharpZipLib_GZip_GZipInputStream___ctor(v22, (System_IO_Stream_o *)v18, 0LL);
    v23 = sub_1BDB920(byte___TypeInfo, 0x4000LL);
    v25 = v23;
    if ( !v23 )
      sub_1BDBAD4(0LL, v24);
    if ( !v22 )
      sub_1BDBAD4(v23, v24);
    while ( 1 )
    {
      v26 = ((__int64 (__fastcall *)(ICSharpCode_SharpZipLib_GZip_GZipInputStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v22->klass->vtable._32_Read.method)(
              v22,
              v25,
              0LL,
              *(unsigned int *)(v25 + 24),
              v22->klass->vtable._33_Read.methodPtr);
      if ( (int)v26 <= 0 )
        break;
      if ( !v21 )
        sub_1BDBAD4(v26, v27);
      ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v21->klass->vtable._35_Write.method)(
        v21,
        v25,
        0LL,
        (unsigned int)v26,
        v21->klass->vtable._36_Write.methodPtr);
    }
    System_IO_Stream__Dispose((System_IO_Stream_o *)v22, 0LL);
    if ( !v21 )
      sub_1BDBAD4(v31, v32);
    v30 = (System_Byte_array *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v21->klass->vtable._41_ToArray.method)(
                                 v21,
                                 v21->klass[1]._1.image);
    System_IO_Stream__Dispose((System_IO_Stream_o *)v21, 0LL);
  }
  else
  {
    if ( !data )
      sub_1BDBAD4(v19, v20);
    v28 = sub_1BDB920(byte___TypeInfo, data->max_length);
    v30 = (System_Byte_array *)v28;
    if ( !v28 )
      sub_1BDBAD4(0LL, v29);
    if ( !v18 )
      sub_1BDBAD4(v28, v29);
    ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v18->klass->vtable._32_Read.method)(
      v18,
      v28,
      0LL,
      *(unsigned int *)(v28 + 24),
      v18->klass->vtable._33_Read.methodPtr);
  }
  if ( v17 )
    ((void (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v17->klass->vtable._19_Close.method)(
      v17,
      v17->klass->vtable._20_Dispose.methodPtr);
  if ( v18 )
    ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, Il2CppMethodPointer))v18->klass->vtable._19_Close.method)(
      v18,
      v18->klass->vtable._20_Dispose.methodPtr);
  return v30;
}


System_String_o *__fastcall CatAndMouseGame__MouseInfo(System_Byte_array *data, const MethodInfo *method)
{
  System_Byte_array *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  System_Array_o *v5; // x20
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  CatAndMouseGame_c *v9; // x8
  __int64 v10; // x21
  struct CatAndMouseGame_StaticFields *static_fields; // x0
  const MethodInfo *v12; // x4

  v2 = data;
  if ( (byte_4B44147 & 1) == 0 )
  {
    sub_1BDB878(&byte___TypeInfo, method);
    sub_1BDB878(&CatAndMouseGame_TypeInfo, v3);
    data = (System_Byte_array *)sub_1BDB878(&StringLiteral_15352/*"W0Juh4cFJSYPkebJB9WpswNF51oa6Gm7"*/, v4);
    byte_4B44147 = 1;
  }
  if ( !v2
    || (v5 = (System_Array_o *)sub_1BDB920(byte___TypeInfo, v2->max_length - 32),
        (data = (System_Byte_array *)System_Text_Encoding__get_UTF8(0LL)) == 0LL) )
  {
    sub_1BDBAD4(data, method);
  }
  v6 = ((__int64 (__fastcall *)(System_Byte_array *, __int64, Il2CppMethodPointer))data->obj.klass->vtable[18].method)(
         data,
         StringLiteral_15352/*"W0Juh4cFJSYPkebJB9WpswNF51oa6Gm7"*/,
         data->obj.klass->vtable[19].methodPtr);
  v9 = CatAndMouseGame_TypeInfo;
  v10 = v6;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v9 = CatAndMouseGame_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->infoData = (struct System_Byte_array *)v10;
  sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->infoData, v10, v7, v8);
  System_Array__Copy_64239428(
    (System_Array_o *)v2,
    0,
    (System_Array_o *)CatAndMouseGame_TypeInfo->static_fields->InfoTop,
    0,
    32,
    0LL);
  System_Array__Copy_64239428((System_Array_o *)v2, 32, v5, 0, v2->max_length - 32, 0LL);
  return CatAndMouseGame__MouseHome(
           (System_Byte_array *)v5,
           CatAndMouseGame_TypeInfo->static_fields->infoData,
           CatAndMouseGame_TypeInfo->static_fields->InfoTop,
           1,
           v12);
}


Il2CppObject *__fastcall CatAndMouseGame__MouseInfoMsgPack(System_Byte_array *data, const MethodInfo *method)
{
  System_Byte_array *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  System_Array_o *v5; // x20
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  CatAndMouseGame_c *v9; // x8
  __int64 v10; // x21
  struct CatAndMouseGame_StaticFields *static_fields; // x0
  const MethodInfo *v12; // x4

  v2 = data;
  if ( (byte_4B44148 & 1) == 0 )
  {
    sub_1BDB878(&byte___TypeInfo, method);
    sub_1BDB878(&CatAndMouseGame_TypeInfo, v3);
    data = (System_Byte_array *)sub_1BDB878(&StringLiteral_15352/*"W0Juh4cFJSYPkebJB9WpswNF51oa6Gm7"*/, v4);
    byte_4B44148 = 1;
  }
  if ( !v2
    || (v5 = (System_Array_o *)sub_1BDB920(byte___TypeInfo, v2->max_length - 32),
        (data = (System_Byte_array *)System_Text_Encoding__get_UTF8(0LL)) == 0LL) )
  {
    sub_1BDBAD4(data, method);
  }
  v6 = ((__int64 (__fastcall *)(System_Byte_array *, __int64, Il2CppMethodPointer))data->obj.klass->vtable[18].method)(
         data,
         StringLiteral_15352/*"W0Juh4cFJSYPkebJB9WpswNF51oa6Gm7"*/,
         data->obj.klass->vtable[19].methodPtr);
  v9 = CatAndMouseGame_TypeInfo;
  v10 = v6;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v9 = CatAndMouseGame_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->infoData = (struct System_Byte_array *)v10;
  sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->infoData, v10, v7, v8);
  System_Array__Copy_64239428(
    (System_Array_o *)v2,
    0,
    (System_Array_o *)CatAndMouseGame_TypeInfo->static_fields->InfoTop,
    0,
    32,
    0LL);
  System_Array__Copy_64239428((System_Array_o *)v2, 32, v5, 0, v2->max_length - 32, 0LL);
  return CatAndMouseGame__MouseHomeMsgPack(
           (System_Byte_array *)v5,
           CatAndMouseGame_TypeInfo->static_fields->infoData,
           CatAndMouseGame_TypeInfo->static_fields->InfoTop,
           1,
           v12);
}


void __fastcall CatAndMouseGame__OtherHomeBuilding(
        System_String_o *data,
        System_Byte_array **home,
        System_Byte_array **info,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  CatAndMouseGame_c *v12; // x0
  char *keyCollection; // x0
  CatAndMouseGame_c *v14; // x0
  __int64 v15; // x2
  const MethodInfo *v16; // x3
  System_Byte_array *v17; // x1
  const MethodInfo *v18; // x3
  System_Byte_array *v19; // x1
  __int64 v20; // x22
  System_Byte_array *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Byte_array *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  unsigned __int64 v27; // x8
  unsigned int v28; // w10
  __int64 v29; // x9
  System_Byte_array *v30; // x10
  System_Byte_array *v31; // x10
  CatAndMouseGame_c *v32; // x0
  System_Collections_Generic_Dictionary_object__object__o *v33; // x22
  const MethodInfo *v34; // x3
  char *v35; // x23
  System_Byte_array *v36; // x1
  const MethodInfo *v37; // x3
  System_Byte_array *v38; // x1

  if ( (byte_4B44152 & 1) == 0 )
  {
    sub_1BDB878(&byte_____TypeInfo, home);
    sub_1BDB878(&byte___TypeInfo, v7);
    sub_1BDB878(&CatAndMouseGame_TypeInfo, v8);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__byte______Add__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__byte______ContainsKey__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__byte______get_Item__, v11);
    byte_4B44152 = 1;
  }
  v12 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v12 = CatAndMouseGame_TypeInfo;
  }
  keyCollection = (char *)v12->static_fields->keyCollection;
  if ( !keyCollection )
    goto LABEL_38;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)keyCollection,
         (Il2CppObject *)data,
         (const MethodInfo_33A0424 *)Method_System_Collections_Generic_Dictionary_string__byte______ContainsKey__) )
  {
    v14 = CatAndMouseGame_TypeInfo;
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      v14 = CatAndMouseGame_TypeInfo;
    }
    keyCollection = (char *)v14->static_fields->keyCollection;
    if ( keyCollection )
    {
      keyCollection = (char *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                (System_Collections_Generic_Dictionary_object__object__o *)keyCollection,
                                (Il2CppObject *)data,
                                (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__byte______get_Item__);
      if ( keyCollection )
      {
        if ( !*((_DWORD *)keyCollection + 6) )
          goto LABEL_37;
        v17 = (System_Byte_array *)*((_QWORD *)keyCollection + 4);
        *home = v17;
        sub_1BDB81C((CGThumbnailListItem_o *)home, (int32_t)v17, v15, v16);
        keyCollection = (char *)CatAndMouseGame_TypeInfo->static_fields->keyCollection;
        if ( keyCollection )
        {
          keyCollection = (char *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                    (System_Collections_Generic_Dictionary_object__object__o *)keyCollection,
                                    (Il2CppObject *)data,
                                    (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__byte______get_Item__);
          if ( keyCollection )
          {
            if ( *((_DWORD *)keyCollection + 6) > 1u )
            {
              v19 = (System_Byte_array *)*((_QWORD *)keyCollection + 5);
              *info = v19;
              sub_1BDB81C((CGThumbnailListItem_o *)info, (int32_t)v19, v15, v18);
              return;
            }
LABEL_37:
            sub_1BDBADC(keyCollection, home, v15);
          }
        }
      }
    }
    goto LABEL_38;
  }
  keyCollection = (char *)System_Text_Encoding__get_UTF8(0LL);
  if ( !keyCollection )
    goto LABEL_38;
  v20 = (*(__int64 (__fastcall **)(char *, System_String_o *, _QWORD))(*(_QWORD *)keyCollection + 600LL))(
          keyCollection,
          data,
          *(_QWORD *)(*(_QWORD *)keyCollection + 608LL));
  v21 = (System_Byte_array *)sub_1BDB920(byte___TypeInfo, 32LL);
  *home = v21;
  sub_1BDB81C((CGThumbnailListItem_o *)home, (int32_t)v21, v22, v23);
  v24 = (System_Byte_array *)sub_1BDB920(byte___TypeInfo, 32LL);
  *info = v24;
  sub_1BDB81C((CGThumbnailListItem_o *)info, (int32_t)v24, v25, v26);
  if ( !v20 )
    goto LABEL_38;
  if ( (int)*(_QWORD *)(v20 + 24) >= 1 )
  {
    v27 = 0LL;
    v28 = *(_QWORD *)(v20 + 24);
    v29 = v20 + 32;
    do
    {
      if ( (v27 & 0x1F) != 0 )
      {
        if ( v27 >= v28 )
          goto LABEL_37;
        v30 = *info;
        if ( !*info )
          goto LABEL_38;
        if ( (v27 & 0x1F) >= v30->max_length )
          goto LABEL_37;
        v30->m_Items[(v27 & 0x1F) + 4] = *(_BYTE *)(v29 + v27);
      }
      else
      {
        if ( v27 >= v28 )
          goto LABEL_37;
        v31 = *home;
        if ( !*home )
          goto LABEL_38;
        if ( !v31->max_length )
          goto LABEL_37;
        v31->m_Items[4] = *(_BYTE *)(v29 + v27);
      }
      v28 = *(_DWORD *)(v20 + 24);
    }
    while ( (__int64)++v27 < (int)v28 );
  }
  v32 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v32 = CatAndMouseGame_TypeInfo;
  }
  v33 = (System_Collections_Generic_Dictionary_object__object__o *)v32->static_fields->keyCollection;
  keyCollection = (char *)sub_1BDB920(byte_____TypeInfo, 2LL);
  if ( !keyCollection )
    goto LABEL_38;
  v35 = keyCollection;
  if ( !*((_DWORD *)keyCollection + 6) )
    goto LABEL_37;
  v36 = *home;
  *((_QWORD *)keyCollection + 4) = *home;
  sub_1BDB81C((CGThumbnailListItem_o *)(keyCollection + 32), (int32_t)v36, v15, v34);
  if ( *((_DWORD *)v35 + 6) <= 1u )
    goto LABEL_37;
  v38 = *info;
  *((_QWORD *)v35 + 5) = *info;
  sub_1BDB81C((CGThumbnailListItem_o *)(v35 + 40), (int32_t)v38, v15, v37);
  if ( !v33 )
LABEL_38:
    sub_1BDBAD4(keyCollection, home);
  System_Collections_Generic_Dictionary_object__object___Add(
    v33,
    (Il2CppObject *)data,
    (Il2CppObject *)v35,
    (const MethodInfo_33A0230 *)Method_System_Collections_Generic_Dictionary_string__byte______Add__);
}


void __fastcall CatAndMouseGame__SetAssetbundleKeys(Il2CppObject *obj, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  CatAndMouseGame_c *v7; // x0
  void *assetbundleKeyCollection; // x0
  __int64 v9; // x2
  int v10; // w8
  void *v11; // x19
  unsigned int v12; // w21
  __int64 v13; // x23

  if ( (byte_4B44150 & 1) == 0 )
  {
    sub_1BDB878(&CatAndMouseGame_TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__string__Clear__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, v4);
    sub_1BDB878(&Method_JsonManager_DeserializeArray_CatAndMouseGame_AssetbundleKeyEntity___, v5);
    sub_1BDB878(&JsonManager_TypeInfo, v6);
    byte_4B44150 = 1;
  }
  v7 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v7 = CatAndMouseGame_TypeInfo;
  }
  assetbundleKeyCollection = v7->static_fields->assetbundleKeyCollection;
  if ( !assetbundleKeyCollection )
    goto LABEL_18;
  System_Collections_Generic_Dictionary_object__object___Clear(
    (System_Collections_Generic_Dictionary_object__object__o *)assetbundleKeyCollection,
    (const MethodInfo_33A03B8 *)Method_System_Collections_Generic_Dictionary_string__string__Clear__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  assetbundleKeyCollection = JsonManager__DeserializeArray_object_(
                               obj,
                               (const MethodInfo_30A04A4 *)Method_JsonManager_DeserializeArray_CatAndMouseGame_AssetbundleKeyEntity___);
  if ( !assetbundleKeyCollection )
    goto LABEL_18;
  v10 = *((_DWORD *)assetbundleKeyCollection + 6);
  v11 = assetbundleKeyCollection;
  if ( v10 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= v10 )
        sub_1BDBADC(assetbundleKeyCollection, method, v9);
      assetbundleKeyCollection = CatAndMouseGame_TypeInfo;
      v13 = *((_QWORD *)v11 + (int)v12 + 4);
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
        assetbundleKeyCollection = CatAndMouseGame_TypeInfo;
      }
      if ( !v13 )
        break;
      assetbundleKeyCollection = *(void **)(*((_QWORD *)assetbundleKeyCollection + 23) + 96LL);
      if ( !assetbundleKeyCollection )
        break;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        (System_Collections_Generic_Dictionary_object__object__o *)assetbundleKeyCollection,
        *(Il2CppObject **)(v13 + 16),
        *(Il2CppObject **)(v13 + 24),
        (const MethodInfo_33A021C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
      v10 = *((_DWORD *)v11 + 6);
      if ( (int)++v12 >= v10 )
        return;
    }
LABEL_18:
    sub_1BDBAD4(assetbundleKeyCollection, method);
  }
}


void __fastcall CatAndMouseGame__SixHomeBuilding(System_String_o *data, const MethodInfo *method)
{
  void *UTF8; // x0
  __int64 v4; // x1
  void *v5; // x20
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  CatAndMouseGame_c *v9; // x8
  __int64 v10; // x20
  struct CatAndMouseGame_StaticFields *static_fields; // x0
  System_Text_Encoding_o *v12; // x20
  __int64 v13; // x0
  struct CatAndMouseGame_StaticFields *v14; // x8
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4B44157 & 1) == 0 )
  {
    sub_1BDB878(&CatAndMouseGame_TypeInfo, method);
    byte_4B44157 = 1;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !data )
    goto LABEL_9;
  v5 = UTF8;
  UTF8 = System_String__Substring(data, 32, 0LL);
  if ( !v5 )
    goto LABEL_9;
  v6 = (*(__int64 (__fastcall **)(void *, void *, _QWORD))(*(_QWORD *)v5 + 600LL))(
         v5,
         UTF8,
         *(_QWORD *)(*(_QWORD *)v5 + 608LL));
  v9 = CatAndMouseGame_TypeInfo;
  v10 = v6;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v9 = CatAndMouseGame_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->sideData = (struct System_Byte_array *)v10;
  sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->sideData, v10, v7, v8);
  v12 = System_Text_Encoding__get_UTF8(0LL);
  UTF8 = System_String__Substring_62618184(data, 0, 32, 0LL);
  if ( !v12 )
LABEL_9:
    sub_1BDBAD4(UTF8, v4);
  v13 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, void *, Il2CppMethodPointer))v12->klass->vtable._18_GetBytes.method)(
          v12,
          UTF8,
          v12->klass->vtable._19_GetBytes.methodPtr);
  v14 = CatAndMouseGame_TypeInfo->static_fields;
  v14->sideTop = (struct System_Byte_array *)v13;
  sub_1BDB81C((CGThumbnailListItem_o *)&v14->sideTop, v13, v15, v16);
}


void __fastcall CatAndMouseGame__ThirdHomeBuilding(System_String_o *data, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  bool isPlaying; // w20
  _QWORD *UTF8; // x0
  __int64 v7; // x1
  __int64 v8; // x0
  __int64 v9; // x19
  CatAndMouseGame_c *v10; // x0
  __int64 v11; // x2
  unsigned __int64 i; // x20
  __int64 v13; // x8
  __int64 v14; // x8
  unsigned int v15; // w9
  char v16; // w10

  if ( (byte_4B44149 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Application_TypeInfo, method);
    sub_1BDB878(&CatAndMouseGame_TypeInfo, v3);
    sub_1BDB878(&StringLiteral_21166/*"kzdMtpmzqCHAfx00saU1gIhTjYCuOD1JstqtisXsGYqRVcqrHRydj3k6vJCySu3g"*/, v4);
    byte_4B44149 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  isPlaying = UnityEngine_Application__get_isPlaying(0LL);
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    goto LABEL_27;
  if ( isPlaying )
    v8 = (*(__int64 (__fastcall **)(_QWORD *, System_String_o *, _QWORD))(*UTF8 + 600LL))(
           UTF8,
           data,
           *(_QWORD *)(*UTF8 + 608LL));
  else
    v8 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(*UTF8 + 600LL))(
           UTF8,
           StringLiteral_21166/*"kzdMtpmzqCHAfx00saU1gIhTjYCuOD1JstqtisXsGYqRVcqrHRydj3k6vJCySu3g"*/,
           *(_QWORD *)(*UTF8 + 608LL));
  v9 = v8;
  v10 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v10 = CatAndMouseGame_TypeInfo;
  }
  System_Array__Copy_64239428((System_Array_o *)v9, 0, (System_Array_o *)v10->static_fields->BattleKey, 0, 32, 0LL);
  if ( !v9 )
LABEL_27:
    sub_1BDBAD4(UTF8, v7);
  System_Array__Copy_64239428(
    (System_Array_o *)v9,
    32,
    (System_Array_o *)CatAndMouseGame_TypeInfo->static_fields->BattleIV,
    0,
    *(_DWORD *)(v9 + 24) - 32,
    0LL);
  if ( *(int *)(v9 + 24) >= 1 )
  {
    for ( i = 0LL; (__int64)i < *(int *)(v9 + 24); ++i )
    {
      UTF8 = &CatAndMouseGame_TypeInfo->_1.image;
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
        UTF8 = &CatAndMouseGame_TypeInfo->_1.image;
      }
      v13 = UTF8[23];
      if ( (i & 1) != 0 )
      {
        if ( i >= *(unsigned int *)(v9 + 24) )
          goto LABEL_26;
        v14 = *(_QWORD *)(v13 + 32);
        if ( !v14 )
          goto LABEL_27;
        v15 = (unsigned int)i >> 1;
        if ( (unsigned int)i >> 1 >= *(_DWORD *)(v14 + 24) )
LABEL_26:
          sub_1BDBADC(UTF8, v7, v11);
      }
      else
      {
        if ( i >= *(unsigned int *)(v9 + 24) )
          goto LABEL_26;
        v14 = *(_QWORD *)(v13 + 40);
        if ( !v14 )
          goto LABEL_27;
        v15 = (unsigned int)i >> 1;
        if ( (unsigned int)i >> 1 >= *(_DWORD *)(v14 + 24) )
          goto LABEL_26;
      }
      v16 = *(_BYTE *)(v9 + 32 + i);
      *(_BYTE *)(v14 + v15 + 32) = v16;
    }
  }
}


void __fastcall CatAndMouseGame_AssetbundleKeyEntity___ctor(
        CatAndMouseGame_AssetbundleKeyEntity_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CatAndMouseGame_DataDecryptor___ctor(
        CatAndMouseGame_DataDecryptor_o *this,
        System_Security_Cryptography_ICryptoTransform_o *decryptor,
        System_Byte_array *data,
        bool isCompress,
        const MethodInfo *method)
{
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x0
  __int64 v13; // x1
  System_IO_MemoryStream_o *v14; // x0
  il2cpp_array_size_t max_length; // w1
  struct System_IO_MemoryStream_o *v16; // x21
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_IO_Stream_o *memoryStream; // x21
  System_Security_Cryptography_CryptoStream_o *v20; // x22
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  if ( (byte_4B44165 & 1) == 0 )
  {
    sub_1BDB878(&System_Security_Cryptography_CryptoStream_TypeInfo, decryptor);
    sub_1BDB878(&System_IO_MemoryStream_TypeInfo, v9);
    byte_4B44165 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.data = data;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)data, v10, v11);
  this->fields.isCompress = isCompress;
  if ( !data )
    sub_1BDBAD4(v12, v13);
  v14 = (System_IO_MemoryStream_o *)sub_1BDBAC4(System_IO_MemoryStream_TypeInfo);
  max_length = data->max_length;
  v16 = v14;
  System_IO_MemoryStream___ctor_63394644(v14, max_length, 0LL);
  this->fields.memoryStream = v16;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.memoryStream, (int32_t)v16, v17, v18);
  memoryStream = (System_IO_Stream_o *)this->fields.memoryStream;
  v20 = (System_Security_Cryptography_CryptoStream_o *)sub_1BDBAC4(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v20, memoryStream, decryptor, 1, 0LL);
  this->fields.cryptoStream = v20;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.cryptoStream, (int32_t)v20, v21, v22);
}


void __fastcall CatAndMouseGame_DataDecryptor__ApplyWrite(
        CatAndMouseGame_DataDecryptor_o *this,
        const MethodInfo *method)
{
  CatAndMouseGame_DataDecryptor_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Byte_array *data; // x1
  int max_length; // w21
  int v7; // w20
  il2cpp_array_size_t v8; // w8
  il2cpp_array_size_t v9; // w23
  System_IO_MemoryStream_o *v10; // x21
  CatAndMouseGame_DataDecryptor_o **p_memoryStreamBZip; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_IO_Stream_o *memoryStream; // x21
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *v15; // x22
  CGThumbnailListItem_o *p_bzipStream; // x19
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  CatAndMouseGame_DataDecryptor_o *i; // x21
  int v20; // w0
  __int64 v21; // x3

  v2 = this;
  if ( (byte_4B44166 & 1) == 0 )
  {
    sub_1BDB878(&ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo, method);
    sub_1BDB878(&byte___TypeInfo, v3);
    this = (CatAndMouseGame_DataDecryptor_o *)sub_1BDB878(&System_IO_MemoryStream_TypeInfo, v4);
    byte_4B44166 = 1;
  }
  data = v2->fields.data;
  if ( !data )
    goto LABEL_21;
  max_length = data->max_length;
  this = (CatAndMouseGame_DataDecryptor_o *)v2->fields.cryptoStream;
  if ( max_length >= 1 )
  {
    if ( this )
    {
      v7 = 0;
      v8 = data->max_length;
      do
      {
        v9 = v8 - 0x4000;
        ((void (*)(void))this->klass[2]._1.castClass)();
        this = (CatAndMouseGame_DataDecryptor_o *)v2->fields.cryptoStream;
        if ( !this )
          break;
        (*(void (__fastcall **)(CatAndMouseGame_DataDecryptor_o *, _QWORD))&this->klass[1]._2.element_size)(
          this,
          *(_QWORD *)&this->klass[1]._2.static_fields_size);
        this = (CatAndMouseGame_DataDecryptor_o *)v2->fields.cryptoStream;
        v7 += 0x4000;
        if ( v7 >= max_length )
          goto LABEL_11;
        data = v2->fields.data;
        v8 = v9;
      }
      while ( this );
    }
LABEL_21:
    sub_1BDBAD4(this, data);
  }
LABEL_11:
  if ( !this )
    goto LABEL_21;
  System_Security_Cryptography_CryptoStream__FlushFinalBlock((System_Security_Cryptography_CryptoStream_o *)this, 0LL);
  if ( v2->fields.isCompress )
  {
    this = (CatAndMouseGame_DataDecryptor_o *)v2->fields.memoryStream;
    if ( this )
    {
      ((void (__fastcall *)(CatAndMouseGame_DataDecryptor_o *, _QWORD, _QWORD, void *))this->klass[1].vtable._5_Dispose.method)(
        this,
        0LL,
        0LL,
        this->klass[2]._1.image);
      v10 = (System_IO_MemoryStream_o *)sub_1BDBAC4(System_IO_MemoryStream_TypeInfo);
      System_IO_MemoryStream___ctor(v10, 0LL);
      v2->fields.memoryStreamBZip = v10;
      p_memoryStreamBZip = (CatAndMouseGame_DataDecryptor_o **)&v2->fields.memoryStreamBZip;
      sub_1BDB81C((CGThumbnailListItem_o *)&v2->fields.memoryStreamBZip, (int32_t)v10, v12, v13);
      memoryStream = (System_IO_Stream_o *)v2->fields.memoryStream;
      v15 = (ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *)sub_1BDBAC4(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo);
      ICSharpCode_SharpZipLib_BZip2_BZip2InputStream___ctor(v15, memoryStream, 0LL);
      v2->fields.bzipStream = v15;
      p_bzipStream = (CGThumbnailListItem_o *)&v2->fields.bzipStream;
      sub_1BDB81C(p_bzipStream, (int32_t)v15, v17, v18);
      this = (CatAndMouseGame_DataDecryptor_o *)sub_1BDB920(byte___TypeInfo, 0x4000LL);
      if ( this )
      {
        for ( i = this;
              ;
              ((void (__fastcall *)(CatAndMouseGame_DataDecryptor_o *, CatAndMouseGame_DataDecryptor_o *, _QWORD, __int64, Il2CppClass *))this->klass[2]._1.castClass)(
                this,
                i,
                0LL,
                v21,
                this->klass[2]._1.declaringType) )
        {
          this = (CatAndMouseGame_DataDecryptor_o *)p_bzipStream->klass;
          if ( !p_bzipStream->klass )
            break;
          v20 = ((__int64 (__fastcall *)(CatAndMouseGame_DataDecryptor_o *, CatAndMouseGame_DataDecryptor_o *, _QWORD, _QWORD, void *))this->klass[2]._1.namespaze)(
                  this,
                  i,
                  0LL,
                  *(unsigned int *)&i->fields.isCompress,
                  this->klass[2]._1.byval_arg.data);
          if ( v20 <= 0 )
            return;
          v21 = (unsigned int)v20;
          this = *p_memoryStreamBZip;
          if ( !*p_memoryStreamBZip )
            break;
        }
      }
    }
    goto LABEL_21;
  }
}


void __fastcall CatAndMouseGame_DataDecryptor__Dispose(CatAndMouseGame_DataDecryptor_o *this, const MethodInfo *method)
{
  if ( (byte_4B44168 & 1) == 0 )
  {
    sub_1BDB878(&System_GC_TypeInfo, method);
    byte_4B44168 = 1;
  }
  ((void (__fastcall *)(CatAndMouseGame_DataDecryptor_o *, __int64, void *))this->klass->vtable._5_Dispose.method)(
    this,
    1LL,
    this->klass[1]._1.image);
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__SuppressFinalize((Il2CppObject *)this, 0LL);
}


void __fastcall CatAndMouseGame_DataDecryptor__Dispose_40247212(
        CatAndMouseGame_DataDecryptor_o *this,
        bool isDisposing,
        const MethodInfo *method)
{
  System_IO_Stream_o *memoryStream; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_IO_Stream_o *cryptoStream; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_IO_Stream_o *memoryStreamBZip; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_IO_Stream_o *bzipStream; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( !this->fields.isDisposed )
  {
    if ( isDisposing )
    {
      memoryStream = (System_IO_Stream_o *)this->fields.memoryStream;
      if ( memoryStream )
      {
        System_IO_Stream__Dispose(memoryStream, 0LL);
        this->fields.memoryStream = 0LL;
        sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.memoryStream, 0, v5, v6);
      }
      cryptoStream = (System_IO_Stream_o *)this->fields.cryptoStream;
      if ( cryptoStream )
      {
        System_IO_Stream__Dispose(cryptoStream, 0LL);
        this->fields.cryptoStream = 0LL;
        sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.cryptoStream, 0, v8, v9);
      }
      memoryStreamBZip = (System_IO_Stream_o *)this->fields.memoryStreamBZip;
      if ( memoryStreamBZip )
      {
        System_IO_Stream__Dispose(memoryStreamBZip, 0LL);
        this->fields.memoryStreamBZip = 0LL;
        sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.memoryStreamBZip, 0, v11, v12);
      }
      bzipStream = (System_IO_Stream_o *)this->fields.bzipStream;
      if ( bzipStream )
      {
        System_IO_Stream__Dispose(bzipStream, 0LL);
        this->fields.bzipStream = 0LL;
        sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.bzipStream, 0, v14, v15);
      }
    }
    this->fields.isDisposed = 1;
  }
}


System_Byte_array *__fastcall CatAndMouseGame_DataDecryptor__ToByteArray(
        CatAndMouseGame_DataDecryptor_o *this,
        const MethodInfo *method)
{
  long double inited; // q0
  __int64 v4; // x1
  struct System_IO_MemoryStream_o *memoryStreamBZip; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_IO_MemoryStream_o *v8; // x8
  int v9; // w20
  struct System_IO_MemoryStream_o *v10; // x8
  System_IO_MemoryStream_c *klass; // x9
  const MethodInfo *v12; // x2
  void *image; // x1
  struct System_IO_MemoryStream_o *memoryStream; // x0
  struct System_IO_MemoryStream_o *v15; // x8
  int v16; // w20
  __int64 v17; // x10
  int v18; // w11
  System_Byte_array *result; // x0
  _QWORD *v20; // x19
  __int64 v21; // x8
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x19

  if ( (byte_4B44167 & 1) == 0 )
  {
    sub_1BDB878(&byte___TypeInfo, method);
    sub_1BDB878(&Method_System_Linq_Enumerable_Empty_byte___, v4);
    byte_4B44167 = 1;
  }
  if ( !this->fields.isCompress )
  {
    memoryStream = this->fields.memoryStream;
    if ( memoryStream )
    {
      v6 = ((__int64 (__fastcall *)(struct System_IO_MemoryStream_o *, Il2CppMethodPointer))memoryStream->klass->vtable._39_get_Capacity.method)(
             memoryStream,
             memoryStream->klass->vtable._40_set_Capacity.methodPtr);
      v15 = this->fields.memoryStream;
      if ( v15 )
      {
        v16 = v6;
        v6 = ((__int64 (__fastcall *)(struct System_IO_MemoryStream_o *, Il2CppMethodPointer))v15->klass->vtable._11_get_Length.method)(
               this->fields.memoryStream,
               v15->klass->vtable._12_get_Position.methodPtr);
        v10 = this->fields.memoryStream;
        if ( v10 )
        {
          v17 = v6 + 510;
          v18 = v16 + 255;
          if ( v6 + 255 >= 0 )
            v17 = v6 + 255;
          klass = v10->klass;
          if ( v18 < 0 )
            v18 = v16 + 510;
          if ( (__int64)v18 >> 8 != v17 >> 8 )
            goto LABEL_17;
          goto LABEL_8;
        }
      }
      goto LABEL_32;
    }
  }
  memoryStreamBZip = this->fields.memoryStreamBZip;
  if ( memoryStreamBZip )
  {
    v6 = ((__int64 (__fastcall *)(struct System_IO_MemoryStream_o *, Il2CppMethodPointer))memoryStreamBZip->klass->vtable._39_get_Capacity.method)(
           memoryStreamBZip,
           memoryStreamBZip->klass->vtable._40_set_Capacity.methodPtr);
    v8 = this->fields.memoryStreamBZip;
    if ( v8 )
    {
      v9 = v6;
      v6 = ((__int64 (__fastcall *)(struct System_IO_MemoryStream_o *, Il2CppMethodPointer))v8->klass->vtable._11_get_Length.method)(
             this->fields.memoryStreamBZip,
             v8->klass->vtable._12_get_Position.methodPtr);
      v10 = this->fields.memoryStreamBZip;
      if ( v10 )
      {
        klass = v10->klass;
        if ( v6 != v9 )
        {
LABEL_17:
          v12 = klass->vtable._41_ToArray.method;
          image = klass[1]._1.image;
          return (System_Byte_array *)((__int64 (__fastcall *)(struct System_IO_MemoryStream_o *, void *))v12)(
                                        v10,
                                        image);
        }
LABEL_8:
        v12 = klass->vtable._38_GetBuffer.method;
        image = klass->vtable._39_get_Capacity.methodPtr;
        return (System_Byte_array *)((__int64 (__fastcall *)(struct System_IO_MemoryStream_o *, void *))v12)(v10, image);
      }
    }
LABEL_32:
    sub_1BDBAD4(v6, v7);
  }
  v20 = Method_System_Linq_Enumerable_Empty_byte___;
  v21 = *((_QWORD *)Method_System_Linq_Enumerable_Empty_byte___ + 7);
  if ( !v21 )
  {
    sub_1C2BF64(Method_System_Linq_Enumerable_Empty_byte___);
    v21 = v20[7];
  }
  v22 = *(_QWORD *)(v21 + 16);
  if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
    v22 = sub_1C2BF08(inited);
  if ( !*(_DWORD *)(v22 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v22);
  v23 = *(_QWORD *)(v20[7] + 16LL);
  if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
    v23 = sub_1C2BF08(inited);
  v24 = **(_QWORD **)(v23 + 184);
  if ( v24 )
  {
    result = (System_Byte_array *)sub_1BDB9B4(v24, byte___TypeInfo);
    if ( result )
      return result;
    sub_1BDBD94(v24);
  }
  return 0LL;
}