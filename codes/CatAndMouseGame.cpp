void CatAndMouseGame___cctor(const MethodInfo *method)
{
  struct System_Byte_array *v1; // x0
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x0
  struct CatAndMouseGame_StaticFields *static_fields; // x8
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x0
  struct CatAndMouseGame_StaticFields *v9; // x8
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x0
  struct CatAndMouseGame_StaticFields *v13; // x8
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x0
  struct CatAndMouseGame_StaticFields *v17; // x8
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 v20; // x0
  struct CatAndMouseGame_StaticFields *v21; // x8
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v24; // x0
  struct CatAndMouseGame_StaticFields *v25; // x8
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  __int64 v28; // x0
  struct CatAndMouseGame_StaticFields *v29; // x8
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  __int64 v32; // x0
  struct CatAndMouseGame_StaticFields *v33; // x8
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  __int64 v36; // x0
  struct CatAndMouseGame_StaticFields *v37; // x8
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  __int64 v40; // x0
  struct CatAndMouseGame_StaticFields *v41; // x8
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  __int64 v44; // x0
  struct CatAndMouseGame_StaticFields *v45; // x8
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  System_Collections_Generic_Dictionary_object__object__o *v48; // x19
  struct CatAndMouseGame_StaticFields *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  System_Collections_Generic_Dictionary_object__object__o *v52; // x19
  struct CatAndMouseGame_StaticFields *v53; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  System_Text_Encoding_o *UTF8; // x0
  __int64 v57; // x19
  unsigned __int64 v58; // x8
  unsigned int v59; // w10
  struct CatAndMouseGame_StaticFields *v60; // x11
  struct System_Byte_array *stageTop; // x10
  unsigned int v62; // w11
  uint8_t v63; // w12
  struct System_Byte_array *dataItem; // x11
  int v65; // w8
  unsigned __int64 v66; // x9
  __int64 v67; // x10
  struct CatAndMouseGame_StaticFields *v68; // x12
  struct System_Byte_array *baseData; // x13
  unsigned __int64 v70; // x12
  struct System_Byte_array *v71; // x13
  __int64 v72; // x12
  struct System_Byte_array *v73; // x12
  __int64 v74; // x11
  char *v75; // x11
  __int64 v76; // x12
  int v77; // w13
  struct System_Byte_array *baseTop; // x13
  unsigned __int64 v79; // x12
  struct System_Byte_array *v80; // x13
  __int64 v81; // x12
  struct System_Byte_array *v82; // x12
  __int64 v83; // x11

  if ( (byte_4C42614 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    sub_1C37058(&byte___TypeInfo);
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__byte_______ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__byte______TypeInfo);
    sub_1C37058(&StringLiteral_21156/*"kzdMtpmzqCHAfx00saU1gIhTjYCuOD1JstqtisXsGYqRVcqrHRydj3k6vJCySu3g"*/);
    sub_1C37058(&StringLiteral_10354/*"PFBs0eIuunoxKkCcLbqDVerU1rShhS276SAL3A8tFLUfGvtz3F3FFeKELIk3Nvi4"*/);
    byte_4C42614 = 1;
  }
  v1 = (struct System_Byte_array *)sub_1C37100(byte___TypeInfo, 32);
  CatAndMouseGame_TypeInfo->static_fields->ownerTop = v1;
  sub_1C36FFC((CGThumbnailListItem_o *)CatAndMouseGame_TypeInfo->static_fields, (int32_t)v1, v2, v3);
  v4 = sub_1C37100(byte___TypeInfo, 32);
  static_fields = CatAndMouseGame_TypeInfo->static_fields;
  static_fields->ownerData = (struct System_Byte_array *)v4;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->ownerData, v4, v6, v7);
  v8 = sub_1C37100(byte___TypeInfo, 32);
  v9 = CatAndMouseGame_TypeInfo->static_fields;
  v9->InfoTop = (struct System_Byte_array *)v8;
  sub_1C36FFC((CGThumbnailListItem_o *)&v9->InfoTop, v8, v10, v11);
  v12 = sub_1C37100(byte___TypeInfo, 32);
  v13 = CatAndMouseGame_TypeInfo->static_fields;
  v13->infoData = (struct System_Byte_array *)v12;
  sub_1C36FFC((CGThumbnailListItem_o *)&v13->infoData, v12, v14, v15);
  v16 = sub_1C37100(byte___TypeInfo, 32);
  v17 = CatAndMouseGame_TypeInfo->static_fields;
  v17->stageTop = (struct System_Byte_array *)v16;
  sub_1C36FFC((CGThumbnailListItem_o *)&v17->stageTop, v16, v18, v19);
  v20 = sub_1C37100(byte___TypeInfo, 32);
  v21 = CatAndMouseGame_TypeInfo->static_fields;
  v21->stageData = (struct System_Byte_array *)v20;
  sub_1C36FFC((CGThumbnailListItem_o *)&v21->stageData, v20, v22, v23);
  v24 = sub_1C37100(byte___TypeInfo, 32);
  v25 = CatAndMouseGame_TypeInfo->static_fields;
  v25->baseTop = (struct System_Byte_array *)v24;
  sub_1C36FFC((CGThumbnailListItem_o *)&v25->baseTop, v24, v26, v27);
  v28 = sub_1C37100(byte___TypeInfo, 32);
  v29 = CatAndMouseGame_TypeInfo->static_fields;
  v29->baseData = (struct System_Byte_array *)v28;
  sub_1C36FFC((CGThumbnailListItem_o *)&v29->baseData, v28, v30, v31);
  v32 = sub_1C37100(byte___TypeInfo, 32);
  v33 = CatAndMouseGame_TypeInfo->static_fields;
  v33->BattleKey = (struct System_Byte_array *)v32;
  sub_1C36FFC((CGThumbnailListItem_o *)&v33->BattleKey, v32, v34, v35);
  v36 = sub_1C37100(byte___TypeInfo, 32);
  v37 = CatAndMouseGame_TypeInfo->static_fields;
  v37->BattleIV = (struct System_Byte_array *)v36;
  sub_1C36FFC((CGThumbnailListItem_o *)&v37->BattleIV, v36, v38, v39);
  v40 = sub_1C37100(byte___TypeInfo, 32);
  v41 = CatAndMouseGame_TypeInfo->static_fields;
  v41->sideTop = (struct System_Byte_array *)v40;
  sub_1C36FFC((CGThumbnailListItem_o *)&v41->sideTop, v40, v42, v43);
  v44 = sub_1C37100(byte___TypeInfo, 32);
  v45 = CatAndMouseGame_TypeInfo->static_fields;
  v45->sideData = (struct System_Byte_array *)v44;
  sub_1C36FFC((CGThumbnailListItem_o *)&v45->sideData, v44, v46, v47);
  v48 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v48,
    (const MethodInfo_3462C80 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  v49 = CatAndMouseGame_TypeInfo->static_fields;
  v49->assetbundleKeyCollection = (struct System_Collections_Generic_Dictionary_string__string__o *)v48;
  sub_1C36FFC((CGThumbnailListItem_o *)&v49->assetbundleKeyCollection, (int32_t)v48, v50, v51);
  v52 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_string__byte______TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v52,
    (const MethodInfo_3462C80 *)Method_System_Collections_Generic_Dictionary_string__byte_______ctor__);
  v53 = CatAndMouseGame_TypeInfo->static_fields;
  v53->keyCollection = (struct System_Collections_Generic_Dictionary_string__byte______o *)v52;
  sub_1C36FFC((CGThumbnailListItem_o *)&v53->keyCollection, (int32_t)v52, v54, v55);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( !UnityEngine_Application__get_isPlaying(0) )
  {
    UTF8 = System_Text_Encoding__get_UTF8(0);
    if ( !UTF8 )
      goto LABEL_53;
    v57 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
            UTF8,
            StringLiteral_21156/*"kzdMtpmzqCHAfx00saU1gIhTjYCuOD1JstqtisXsGYqRVcqrHRydj3k6vJCySu3g"*/,
            UTF8->klass->vtable._18_GetBytes.method);
    UTF8 = System_Text_Encoding__get_UTF8(0);
    if ( !UTF8 )
      goto LABEL_53;
    UTF8 = (System_Text_Encoding_o *)((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
                                       UTF8,
                                       StringLiteral_10354/*"PFBs0eIuunoxKkCcLbqDVerU1rShhS276SAL3A8tFLUfGvtz3F3FFeKELIk3Nvi4"*/,
                                       UTF8->klass->vtable._18_GetBytes.method);
    if ( !v57 )
      goto LABEL_53;
    if ( (int)*(_QWORD *)(v57 + 24) >= 1 )
    {
      v58 = 0;
      v59 = *(_QWORD *)(v57 + 24);
      do
      {
        v60 = CatAndMouseGame_TypeInfo->static_fields;
        if ( (v58 & 1) != 0 )
        {
          if ( v58 >= v59 )
            goto LABEL_52;
          stageTop = v60->stageTop;
          if ( !stageTop )
            goto LABEL_53;
          v62 = (unsigned int)v58 >> 1;
          if ( (unsigned int)v58 >> 1 >= LODWORD(stageTop->max_length) )
LABEL_52:
            sub_1C372BC(UTF8);
        }
        else
        {
          if ( v58 >= v59 )
            goto LABEL_52;
          stageTop = v60->stageData;
          if ( !stageTop )
            goto LABEL_53;
          v62 = (unsigned int)v58 >> 1;
          if ( (unsigned int)v58 >> 1 >= LODWORD(stageTop->max_length) )
            goto LABEL_52;
        }
        v63 = *(_BYTE *)(v57 + 32 + v58++);
        stageTop->m_Items[v62] = v63;
        v59 = *(_DWORD *)(v57 + 24);
      }
      while ( (__int64)v58 < (int)v59 );
    }
    if ( !UTF8 )
LABEL_53:
      sub_1C372B4(UTF8);
    dataItem = (struct System_Byte_array *)UTF8->fields.dataItem;
    if ( (int)dataItem >= 4 )
    {
      v65 = 0;
      v66 = 0;
      v67 = 0;
      do
      {
        v68 = CatAndMouseGame_TypeInfo->static_fields;
        if ( (v67 & 1) != 0 )
        {
          if ( v66 >= (unsigned int)dataItem )
            goto LABEL_52;
          baseTop = v68->baseTop;
          if ( !baseTop )
            goto LABEL_53;
          v79 = v65 & 0xFFFFFFFFFFFFFFFCLL;
          if ( (unsigned int)v79 >= LODWORD(baseTop->max_length) )
            goto LABEL_52;
          baseTop->m_Items[v79] = *(&UTF8->fields.m_deserializedFromEverett + v66);
          if ( v66 + 1 >= LODWORD(UTF8->fields.dataItem) )
            goto LABEL_52;
          v80 = CatAndMouseGame_TypeInfo->static_fields->baseTop;
          if ( !v80 )
            goto LABEL_53;
          v81 = (int)v79 | 1LL;
          if ( (unsigned int)v81 >= LODWORD(v80->max_length) )
            goto LABEL_52;
          v80->m_Items[v81] = *(&UTF8->fields.m_isReadOnly + v66);
          if ( v66 + 2 >= LODWORD(UTF8->fields.dataItem) )
            goto LABEL_52;
          v82 = CatAndMouseGame_TypeInfo->static_fields->baseTop;
          if ( !v82 )
            goto LABEL_53;
          v83 = v65 | 2LL;
          if ( (unsigned int)v83 >= LODWORD(v82->max_length) )
            goto LABEL_52;
          v82->m_Items[v83] = *(&UTF8->fields.m_isReadOnly + v66 + 1);
          if ( v66 + 3 >= LODWORD(UTF8->fields.dataItem) )
            goto LABEL_52;
          dataItem = CatAndMouseGame_TypeInfo->static_fields->baseTop;
          if ( !dataItem )
            goto LABEL_53;
          v77 = v65 | 3;
          if ( (v65 | 3u) >= LODWORD(dataItem->max_length) )
            goto LABEL_52;
          v76 = (4 * v67) | 3;
        }
        else
        {
          if ( v66 >= (unsigned int)dataItem )
            goto LABEL_52;
          baseData = v68->baseData;
          if ( !baseData )
            goto LABEL_53;
          v70 = v65 & 0xFFFFFFFFFFFFFFFCLL;
          if ( (unsigned int)v70 >= LODWORD(baseData->max_length) )
            goto LABEL_52;
          baseData->m_Items[v70] = *(&UTF8->fields.m_deserializedFromEverett + v66);
          if ( v66 + 1 >= LODWORD(UTF8->fields.dataItem) )
            goto LABEL_52;
          v71 = CatAndMouseGame_TypeInfo->static_fields->baseData;
          if ( !v71 )
            goto LABEL_53;
          v72 = (int)v70 | 1LL;
          if ( (unsigned int)v72 >= LODWORD(v71->max_length) )
            goto LABEL_52;
          v71->m_Items[v72] = *(&UTF8->fields.m_isReadOnly + v66);
          if ( v66 + 2 >= LODWORD(UTF8->fields.dataItem) )
            goto LABEL_52;
          v73 = CatAndMouseGame_TypeInfo->static_fields->baseData;
          if ( !v73 )
            goto LABEL_53;
          v74 = v65 | 2LL;
          if ( (unsigned int)v74 >= LODWORD(v73->max_length) )
            goto LABEL_52;
          v75 = (char *)v73 + v74;
          v76 = v66 + 3;
          v75[32] = *(&UTF8->fields.m_isReadOnly + v66 + 1);
          if ( v66 + 3 >= LODWORD(UTF8->fields.dataItem) )
            goto LABEL_52;
          dataItem = CatAndMouseGame_TypeInfo->static_fields->baseData;
          if ( !dataItem )
            goto LABEL_53;
          v77 = v65 | 3;
          if ( (v65 | 3u) >= LODWORD(dataItem->max_length) )
            goto LABEL_52;
        }
        ++v67;
        v66 += 4LL;
        dataItem->m_Items[v77] = *(&UTF8->fields.m_deserializedFromEverett + v76);
        v65 += 2;
        LODWORD(dataItem) = UTF8->fields.dataItem;
      }
      while ( v67 < (int)dataItem / 4 );
    }
  }
}


void CatAndMouseGame___ctor(CatAndMouseGame_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *CatAndMouseGame__CatGame1(System_String_o *str, bool isCompress, const MethodInfo *method)
{
  System_Text_Encoding_o *UTF8; // x0
  __int64 v6; // x22
  __int64 v7; // x20
  __int64 v8; // x23
  System_Security_Cryptography_TripleDESCryptoServiceProvider_o *v9; // x24
  System_IO_MemoryStream_o *v10; // x19
  __int64 v11; // x0
  System_Security_Cryptography_ICryptoTransform_o *v12; // x23
  System_Security_Cryptography_CryptoStream_o *v13; // x20
  __int64 v14; // x0
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *v15; // x25
  __int64 v16; // x0
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  System_Security_Cryptography_CryptoStream_c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  System_Byte_array *v27; // x22
  System_IO_MemoryStream_c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0

  if ( (byte_4C42615 & 1) == 0 )
  {
    sub_1C37058(&ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo);
    sub_1C37058(&System_Convert_TypeInfo);
    sub_1C37058(&System_Security_Cryptography_CryptoStream_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_IO_MemoryStream_TypeInfo);
    sub_1C37058(&System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
    sub_1C37058(&StringLiteral_24863/*"wuD6keVr"*/);
    sub_1C37058(&StringLiteral_16970/*"b5nHjsMrqaeNliSs3jyOzgpD"*/);
    byte_4C42615 = 1;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0);
  if ( !UTF8
    || (v6 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
               UTF8,
               str,
               UTF8->klass->vtable._18_GetBytes.method),
        (UTF8 = System_Text_Encoding__get_UTF8(0)) == 0)
    || (v7 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
               UTF8,
               StringLiteral_16970/*"b5nHjsMrqaeNliSs3jyOzgpD"*/,
               UTF8->klass->vtable._18_GetBytes.method),
        (UTF8 = System_Text_Encoding__get_UTF8(0)) == 0) )
  {
    sub_1C372B4(UTF8);
  }
  v8 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
         UTF8,
         StringLiteral_24863/*"wuD6keVr"*/,
         UTF8->klass->vtable._18_GetBytes.method);
  v9 = (System_Security_Cryptography_TripleDESCryptoServiceProvider_o *)sub_1C372A4(System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_TripleDESCryptoServiceProvider___ctor(v9, 0);
  v10 = (System_IO_MemoryStream_o *)sub_1C372A4(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v10, 0);
  if ( !v9 )
    sub_1C372B4(v11);
  v12 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_TripleDESCryptoServiceProvider_o *, __int64, __int64, const MethodInfo *))v9->klass->vtable._21_CreateEncryptor.methodPtr)(
                                                             v9,
                                                             v7,
                                                             v8,
                                                             v9->klass->vtable._21_CreateEncryptor.method);
  v13 = (System_Security_Cryptography_CryptoStream_o *)sub_1C372A4(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v13, (System_IO_Stream_o *)v10, v12, 1, 0);
  if ( isCompress )
  {
    v15 = (ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *)sub_1C372A4(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo);
    ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream___ctor(v15, (System_IO_Stream_o *)v13, 0);
    if ( !v6 )
      sub_1C372B4(v16);
    if ( !v15 )
      sub_1C372B4(v16);
    ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v15->klass->vtable._34_Write.methodPtr)(
      v15,
      v6,
      0,
      *(unsigned int *)(v6 + 24),
      v15->klass->vtable._34_Write.method);
    ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, const MethodInfo *))v15->klass->vtable._18_Close.methodPtr)(
      v15,
      v15->klass->vtable._18_Close.method);
    klass = v15->klass;
    v18 = *(unsigned __int16 *)&v15->klass->_2.rank;
    if ( *(_WORD *)&v15->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_14;
      }
      v20 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_14:
      v20 = sub_1C87870(v15, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, _QWORD))v20)(v15, *(_QWORD *)(v20 + 8));
  }
  else
  {
    if ( !v6 )
      sub_1C372B4(v14);
    if ( !v13 )
      sub_1C372B4(v14);
    ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v13->klass->vtable._34_Write.methodPtr)(
      v13,
      v6,
      0,
      *(unsigned int *)(v6 + 24),
      v13->klass->vtable._34_Write.method);
  }
  System_Security_Cryptography_SymmetricAlgorithm__Clear((System_Security_Cryptography_SymmetricAlgorithm_o *)v9, 0);
  if ( !v13 )
    sub_1C372B4(v21);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, const MethodInfo *))v13->klass->vtable._18_Close.methodPtr)(
    v13,
    v13->klass->vtable._18_Close.method);
  v22 = v13->klass;
  v23 = *(unsigned __int16 *)&v13->klass->_2.rank;
  if ( *(_WORD *)&v13->klass->_2.rank )
  {
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_25;
    }
    v25 = (__int64)&v22->vtable + 16 * *v24;
  }
  else
  {
LABEL_25:
    v25 = sub_1C87870(v13, System_IDisposable_TypeInfo, 0);
  }
  v26 = (*(__int64 (__fastcall **)(System_Security_Cryptography_CryptoStream_o *, _QWORD))v25)(
          v13,
          *(_QWORD *)(v25 + 8));
  if ( !v10 )
    sub_1C372B4(v26);
  v27 = (System_Byte_array *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v10->klass->vtable._40_ToArray.methodPtr)(
                               v10,
                               v10->klass->vtable._40_ToArray.method);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v10->klass->vtable._18_Close.methodPtr)(
    v10,
    v10->klass->vtable._18_Close.method);
  v28 = v10->klass;
  v29 = *(unsigned __int16 *)&v10->klass->_2.rank;
  if ( *(_WORD *)&v10->klass->_2.rank )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_32;
    }
    v31 = (__int64)&v28->vtable + 16 * *v30;
  }
  else
  {
LABEL_32:
    v31 = sub_1C87870(v10, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v31)(v10, *(_QWORD *)(v31 + 8));
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToBase64String(v27, 0);
}


System_String_o *CatAndMouseGame__CatGame2(System_String_o *str, bool isCompress, const MethodInfo *method)
{
  System_Text_Encoding_o *UTF8; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x4
  CatAndMouseGame_c *v7; // x8
  System_Byte_array *v8; // x19

  if ( (byte_4C42617 & 1) == 0 )
  {
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    byte_4C42617 = 1;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0);
  if ( !UTF8 )
    sub_1C372B4(0);
  v5 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
         UTF8,
         str,
         UTF8->klass->vtable._18_GetBytes.method);
  v7 = CatAndMouseGame_TypeInfo;
  v8 = (System_Byte_array *)v5;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v7 = CatAndMouseGame_TypeInfo;
  }
  return CatAndMouseGame__CatHome(v8, v7->static_fields->ownerData, v7->static_fields->ownerTop, 1, v6);
}


System_String_o *CatAndMouseGame__CatGame3(System_String_o *str, const MethodInfo *method)
{
  unsigned int *UTF8; // x0
  const MethodInfo *v4; // x4
  unsigned __int64 v5; // x8
  System_Byte_array *v6; // x19
  unsigned __int64 v7; // x9
  CatAndMouseGame_c *v8; // x0

  if ( (byte_4C4261E & 1) == 0 )
  {
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    byte_4C4261E = 1;
  }
  UTF8 = (unsigned int *)System_Text_Encoding__get_UTF8(0);
  if ( !UTF8
    || (UTF8 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned int *, System_String_o *, _QWORD))(*(_QWORD *)UTF8 + 600LL))(
                                 UTF8,
                                 str,
                                 *(_QWORD *)(*(_QWORD *)UTF8 + 608LL))) == 0 )
  {
    sub_1C372B4(UTF8);
  }
  v5 = UTF8[6];
  v6 = (System_Byte_array *)UTF8;
  if ( (__int64)(v5 << 32) >= 1 )
  {
    v7 = 0;
    do
    {
      if ( v7 >= v5 )
        sub_1C372BC(UTF8);
      *((_BYTE *)UTF8 + v7 + 32) = ~*((_BYTE *)UTF8 + v7 + 32);
      ++v7;
    }
    while ( (__int64)v7 < (int)v5 );
  }
  v8 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v8 = CatAndMouseGame_TypeInfo;
  }
  return CatAndMouseGame__CatHome(v6, v8->static_fields->stageData, v8->static_fields->stageTop, 1, v4);
}


System_String_o *CatAndMouseGame__CatGame3_41226352(
        System_String_o *str,
        System_String_o *key,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  System_Text_Encoding_o *UTF8; // x0
  __int64 v8; // x0
  const MethodInfo *v9; // x3
  System_Byte_array *v10; // x20
  const MethodInfo *v11; // x4
  System_Byte_array *v12; // [xsp+0h] [xbp-30h] BYREF
  System_Byte_array *home; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C4261F & 1) == 0 )
  {
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    byte_4C4261F = 1;
  }
  v12 = 0;
  home = 0;
  if ( System_String__IsNullOrEmpty(key, 0) )
  {
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    return CatAndMouseGame__CatGame3(str, v5);
  }
  else
  {
    UTF8 = System_Text_Encoding__get_UTF8(0);
    if ( !UTF8 )
      sub_1C372B4(0);
    v8 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
           UTF8,
           str,
           UTF8->klass->vtable._18_GetBytes.method);
    v12 = 0;
    home = 0;
    v10 = (System_Byte_array *)v8;
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    CatAndMouseGame__OtherHomeBuilding(key, &home, &v12, v9);
    return CatAndMouseGame__CatHome(v10, home, v12, 1, v11);
  }
}


System_Byte_array *CatAndMouseGame__CatGame4(System_Byte_array *data, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  System_Byte_array *v3; // x19
  int max_length; // w11
  int v5; // w8
  char *v6; // x11
  uint8_t *v7; // x13
  uint8_t v8; // w12
  _BYTE *v9; // x11
  char v10; // t1
  int v11; // w12
  CatAndMouseGame_c *v12; // x0

  v3 = data;
  if ( (byte_4C42621 & 1) == 0 )
  {
    data = (System_Byte_array *)sub_1C37058(&CatAndMouseGame_TypeInfo);
    byte_4C42621 = 1;
  }
  if ( !v3 )
    sub_1C372B4(data);
  max_length = v3->max_length;
  if ( max_length >= 1 )
  {
    v5 = 1;
    do
    {
      if ( v5 >= max_length )
        break;
      if ( v5 - 1 < (unsigned int)max_length && v5 < (unsigned int)max_length )
      {
        v6 = (char *)v3 + v5;
        v7 = &v3->m_Items[v5 - 1];
        v8 = *v7;
        v10 = v6[32];
        v9 = v6 + 32;
        *v7 = v10 ^ 0xCE;
        if ( (unsigned int)v5 < LODWORD(v3->max_length) )
          continue;
      }
      sub_1C372BC(data);
      *v9 = v8 ^ 0xD2;
      max_length = v3->max_length;
      v11 = v5 + 1;
      v5 += 2;
    }
    while ( v11 < max_length );
  }
  v12 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v12 = CatAndMouseGame_TypeInfo;
  }
  return CatAndMouseGame__CatHomeMain(v3, v12->static_fields->baseData, v12->static_fields->baseTop, 0, v2);
}


System_Byte_array *CatAndMouseGame__CatGame4_41229908(
        System_Byte_array *data,
        System_String_o *key,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x3
  const MethodInfo *v8; // x4
  System_Byte_array *v9; // [xsp+0h] [xbp-30h] BYREF
  System_Byte_array *home; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C42622 & 1) == 0 )
  {
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    byte_4C42622 = 1;
  }
  if ( System_String__IsNullOrEmpty(key, 0) )
  {
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    return CatAndMouseGame__CatGame4(data, v5);
  }
  else
  {
    v9 = 0;
    home = 0;
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    CatAndMouseGame__OtherHomeBuilding(key, &home, &v9, v6);
    return CatAndMouseGame__CatHomeMain(data, home, v9, 0, v8);
  }
}


System_String_o *CatAndMouseGame__CatGame5(System_String_o *str, const MethodInfo *method)
{
  _QWORD *p_image; // x0
  __int64 v4; // x8
  struct System_Byte_array *BattleIV; // x8
  _QWORD *v6; // x19
  __int64 v7; // x20
  const MethodInfo *v8; // x4
  System_Byte_array *v9; // x21
  __int64 i; // x23
  struct System_Byte_array *BattleKey; // x8
  unsigned __int64 v12; // x24
  __int64 j; // x23
  __int64 v14; // x8
  signed __int64 v15; // x25
  unsigned __int64 v16; // x24
  struct System_Byte_array *v17; // x8

  if ( (byte_4C42625 & 1) == 0 )
  {
    sub_1C37058(&byte___TypeInfo);
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    byte_4C42625 = 1;
  }
  p_image = &CatAndMouseGame_TypeInfo->_1.image;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    p_image = &CatAndMouseGame_TypeInfo->_1.image;
  }
  v4 = *(_QWORD *)(p_image[23] + 64LL);
  if ( !v4
    || (p_image = (_QWORD *)sub_1C37100(byte___TypeInfo, *(unsigned int *)(v4 + 24)),
        (BattleIV = CatAndMouseGame_TypeInfo->static_fields->BattleIV) == 0)
    || (v6 = p_image,
        v7 = sub_1C37100(byte___TypeInfo, LODWORD(BattleIV->max_length)),
        (p_image = System_Text_Encoding__get_UTF8(0)) == 0) )
  {
LABEL_32:
    sub_1C372B4(p_image);
  }
  v9 = (System_Byte_array *)(*(__int64 (__fastcall **)(_QWORD *, System_String_o *, _QWORD))(*p_image + 600LL))(
                              p_image,
                              str,
                              *(_QWORD *)(*p_image + 608LL));
  for ( i = 32; ; ++i )
  {
    p_image = &CatAndMouseGame_TypeInfo->_1.image;
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      p_image = &CatAndMouseGame_TypeInfo->_1.image;
    }
    BattleKey = *(struct System_Byte_array **)(p_image[23] + 64LL);
    if ( !BattleKey )
      goto LABEL_32;
    v12 = i - 32;
    if ( i - 32 >= SLODWORD(BattleKey->max_length) )
      break;
    if ( !*((_DWORD *)p_image + 56) )
    {
      j_il2cpp_runtime_class_init_0(p_image);
      BattleKey = CatAndMouseGame_TypeInfo->static_fields->BattleKey;
      if ( !BattleKey )
        goto LABEL_32;
    }
    if ( v12 >= LODWORD(BattleKey->max_length) )
      goto LABEL_33;
    if ( !v6 )
      goto LABEL_32;
    if ( v12 >= *((unsigned int *)v6 + 6) )
LABEL_33:
      sub_1C372BC(p_image);
    *((_BYTE *)v6 + i) = *((_BYTE *)&BattleKey->obj.klass + i) ^ 4;
  }
  for ( j = 32; ; ++j )
  {
    if ( !*((_DWORD *)p_image + 56) )
    {
      j_il2cpp_runtime_class_init_0(p_image);
      p_image = &CatAndMouseGame_TypeInfo->_1.image;
    }
    v14 = *(_QWORD *)(p_image[23] + 72LL);
    if ( !v14 )
      goto LABEL_32;
    v15 = *(int *)(v14 + 24);
    v16 = j - 32;
    if ( !*((_DWORD *)p_image + 56) )
      j_il2cpp_runtime_class_init_0(p_image);
    if ( (__int64)v16 >= v15 )
      break;
    v17 = CatAndMouseGame_TypeInfo->static_fields->BattleIV;
    if ( !v17 )
      goto LABEL_32;
    if ( v16 >= LODWORD(v17->max_length) )
      goto LABEL_33;
    if ( !v7 )
      goto LABEL_32;
    if ( v16 >= *(unsigned int *)(v7 + 24) )
      goto LABEL_33;
    *(_BYTE *)(v7 + j) = *((_BYTE *)&v17->obj.klass + j) ^ 8;
    p_image = &CatAndMouseGame_TypeInfo->_1.image;
  }
  return CatAndMouseGame__CatHome(v9, (System_Byte_array *)v6, (System_Byte_array *)v7, 0, v8);
}


System_Byte_array *CatAndMouseGame__CatGame5Bytes(System_Byte_array *data, const MethodInfo *method)
{
  CatAndMouseGame_c *v3; // x0
  struct System_Byte_array *BattleKey; // x8
  struct System_Byte_array *BattleIV; // x8
  CatAndMouseGame_c *v6; // x20
  const MethodInfo *v7; // x4
  __int64 v8; // x21
  __int64 i; // x23
  struct System_Byte_array *v10; // x8
  unsigned __int64 v11; // x24
  __int64 j; // x23
  struct System_Byte_array *v13; // x8
  signed __int64 max_length_low; // x25
  unsigned __int64 v15; // x24
  struct System_Byte_array *v16; // x8

  if ( (byte_4C42626 & 1) == 0 )
  {
    sub_1C37058(&byte___TypeInfo);
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    byte_4C42626 = 1;
  }
  v3 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v3 = CatAndMouseGame_TypeInfo;
  }
  BattleKey = v3->static_fields->BattleKey;
  if ( !BattleKey
    || (v3 = (CatAndMouseGame_c *)sub_1C37100(byte___TypeInfo, LODWORD(BattleKey->max_length)),
        (BattleIV = CatAndMouseGame_TypeInfo->static_fields->BattleIV) == 0) )
  {
LABEL_31:
    sub_1C372B4(v3);
  }
  v6 = v3;
  v8 = sub_1C37100(byte___TypeInfo, LODWORD(BattleIV->max_length));
  for ( i = 32; ; ++i )
  {
    v3 = CatAndMouseGame_TypeInfo;
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      v3 = CatAndMouseGame_TypeInfo;
    }
    v10 = v3->static_fields->BattleKey;
    if ( !v10 )
      goto LABEL_31;
    v11 = i - 32;
    if ( i - 32 >= SLODWORD(v10->max_length) )
      break;
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v10 = CatAndMouseGame_TypeInfo->static_fields->BattleKey;
      if ( !v10 )
        goto LABEL_31;
    }
    if ( v11 >= LODWORD(v10->max_length) )
      goto LABEL_32;
    if ( !v6 )
      goto LABEL_31;
    if ( v11 >= LODWORD(v6->_1.namespaze) )
LABEL_32:
      sub_1C372BC(v3);
    *((_BYTE *)&v6->_1.image + i) = *((_BYTE *)&v10->obj.klass + i) ^ 4;
  }
  for ( j = 32; ; ++j )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = CatAndMouseGame_TypeInfo;
    }
    v13 = v3->static_fields->BattleIV;
    if ( !v13 )
      goto LABEL_31;
    max_length_low = SLODWORD(v13->max_length);
    v15 = j - 32;
    if ( !v3->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v3);
    if ( (__int64)v15 >= max_length_low )
      break;
    v16 = CatAndMouseGame_TypeInfo->static_fields->BattleIV;
    if ( !v16 )
      goto LABEL_31;
    if ( v15 >= LODWORD(v16->max_length) )
      goto LABEL_32;
    if ( !v8 )
      goto LABEL_31;
    if ( v15 >= *(unsigned int *)(v8 + 24) )
      goto LABEL_32;
    *(_BYTE *)(v8 + j) = *((_BYTE *)&v16->obj.klass + j) ^ 8;
    v3 = CatAndMouseGame_TypeInfo;
  }
  return CatAndMouseGame__CatHomeMain(data, (System_Byte_array *)v6, (System_Byte_array *)v8, 0, v7);
}


System_String_o *CatAndMouseGame__CatGame6(System_String_o *str, const MethodInfo *method)
{
  System_Text_Encoding_o *UTF8; // x0
  __int64 v4; // x0
  const MethodInfo *v5; // x4
  CatAndMouseGame_c *v6; // x8
  System_Byte_array *v7; // x19

  if ( (byte_4C42638 & 1) == 0 )
  {
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    byte_4C42638 = 1;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0);
  if ( !UTF8 )
    sub_1C372B4(0);
  v4 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
         UTF8,
         str,
         UTF8->klass->vtable._18_GetBytes.method);
  v6 = CatAndMouseGame_TypeInfo;
  v7 = (System_Byte_array *)v4;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v6 = CatAndMouseGame_TypeInfo;
  }
  return CatAndMouseGame__CatHome(v7, v6->static_fields->sideData, v6->static_fields->sideTop, 0, v5);
}


System_String_o *CatAndMouseGame__CatGame6_41237936(System_Byte_array *data, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  CatAndMouseGame_c *v4; // x0

  if ( (byte_4C42639 & 1) == 0 )
  {
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    byte_4C42639 = 1;
  }
  v4 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v4 = CatAndMouseGame_TypeInfo;
  }
  return CatAndMouseGame__CatHome(data, v4->static_fields->sideData, v4->static_fields->sideTop, 0, v2);
}


System_Byte_array *CatAndMouseGame__CatGame7(System_Byte_array *data, const MethodInfo *method)
{
  System_Byte_array *v2; // x19
  const MethodInfo *v3; // x4
  System_Byte_array *v4; // x20
  unsigned __int64 v5; // x8
  unsigned int max_length; // w11
  CatAndMouseGame_c *v7; // x0

  v2 = data;
  if ( (byte_4C42628 & 1) == 0 )
  {
    sub_1C37058(&byte___TypeInfo);
    data = (System_Byte_array *)sub_1C37058(&CatAndMouseGame_TypeInfo);
    byte_4C42628 = 1;
  }
  if ( !v2 )
LABEL_14:
    sub_1C372B4(data);
  data = (System_Byte_array *)sub_1C37100(byte___TypeInfo, LODWORD(v2->max_length));
  v4 = data;
  if ( (int)v2->max_length >= 1 )
  {
    v5 = 0;
    max_length = v2->max_length;
    do
    {
      if ( v5 >= max_length )
        goto LABEL_13;
      if ( !data )
        goto LABEL_14;
      if ( v5 >= LODWORD(data->max_length) )
LABEL_13:
        sub_1C372BC(data);
      data->m_Items[v5] = ~v2->m_Items[v5];
      max_length = v2->max_length;
      ++v5;
    }
    while ( (__int64)v5 < (int)max_length );
  }
  v7 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v7 = CatAndMouseGame_TypeInfo;
  }
  return CatAndMouseGame__CatHomeMain(v4, v7->static_fields->stageData, v7->static_fields->stageTop, 1, v3);
}


System_String_o *CatAndMouseGame__CatGame8(System_String_o *str, const MethodInfo *method)
{
  unsigned int *UTF8; // x0
  const MethodInfo *v4; // x4
  unsigned __int64 v5; // x8
  System_Byte_array *v6; // x19
  unsigned __int64 v7; // x9
  CatAndMouseGame_c *v8; // x0

  if ( (byte_4C4262A & 1) == 0 )
  {
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    byte_4C4262A = 1;
  }
  UTF8 = (unsigned int *)System_Text_Encoding__get_UTF8(0);
  if ( !UTF8
    || (UTF8 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned int *, System_String_o *, _QWORD))(*(_QWORD *)UTF8 + 600LL))(
                                 UTF8,
                                 str,
                                 *(_QWORD *)(*(_QWORD *)UTF8 + 608LL))) == 0 )
  {
    sub_1C372B4(UTF8);
  }
  v5 = UTF8[6];
  v6 = (System_Byte_array *)UTF8;
  if ( (__int64)(v5 << 32) >= 1 )
  {
    v7 = 0;
    do
    {
      if ( v7 >= v5 )
        sub_1C372BC(UTF8);
      *((_BYTE *)UTF8 + v7 + 32) = ~*((_BYTE *)UTF8 + v7 + 32);
      ++v7;
    }
    while ( (__int64)v7 < (int)v5 );
  }
  v8 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v8 = CatAndMouseGame_TypeInfo;
  }
  return CatAndMouseGame__CatHomeZ2(v6, v8->static_fields->stageData, v8->static_fields->stageTop, 1, v4);
}


System_IO_Stream_o *CatAndMouseGame__CatGameZ(System_IO_Stream_o *stream, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  CatAndMouseGame_c *v4; // x0

  if ( (byte_4C4261C & 1) == 0 )
  {
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    byte_4C4261C = 1;
  }
  v4 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v4 = CatAndMouseGame_TypeInfo;
  }
  return CatAndMouseGame__CatHomeMainZ(stream, v4->static_fields->stageData, v4->static_fields->stageTop, 1, v2);
}


System_String_o *CatAndMouseGame__CatHome(
        System_Byte_array *data,
        System_Byte_array *home,
        System_Byte_array *info,
        bool isCompress,
        const MethodInfo *method)
{
  System_String_o *result; // x0
  System_String_o *v10; // x19

  if ( (byte_4C4263D & 1) == 0 )
  {
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    sub_1C37058(&System_Convert_TypeInfo);
    byte_4C4263D = 1;
  }
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  result = (System_String_o *)CatAndMouseGame__CatHomeMain(data, home, info, isCompress, method);
  if ( result )
  {
    v10 = result;
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    return System_Convert__ToBase64String((System_Byte_array *)v10, 0);
  }
  return result;
}


System_Byte_array *CatAndMouseGame__CatHomeMain(
        System_Byte_array *data,
        System_Byte_array *home,
        System_Byte_array *info,
        bool isCompress,
        const MethodInfo *method)
{
  System_Security_Cryptography_RijndaelManaged_o *v9; // x23
  __int64 v10; // x0
  __int64 v11; // x0
  System_Security_Cryptography_ICryptoTransform_o *v12; // x23
  System_IO_MemoryStream_o *v13; // x0
  int max_length; // w8
  System_IO_Stream_o *v15; // x19
  int v16; // w9
  int v17; // w8
  System_Security_Cryptography_CryptoStream_o *v18; // x20
  __int64 v19; // x0
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *v20; // x22
  __int64 v21; // x0
  __int64 v22; // x0
  System_Byte_array *v23; // x21

  if ( (byte_4C42641 & 1) == 0 )
  {
    sub_1C37058(&ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo);
    sub_1C37058(&System_Security_Cryptography_CryptoStream_TypeInfo);
    sub_1C37058(&System_IO_MemoryStream_TypeInfo);
    sub_1C37058(&System_Security_Cryptography_RijndaelManaged_TypeInfo);
    byte_4C42641 = 1;
  }
  v9 = (System_Security_Cryptography_RijndaelManaged_o *)sub_1C372A4(System_Security_Cryptography_RijndaelManaged_TypeInfo);
  System_Security_Cryptography_RijndaelManaged___ctor(v9, 0);
  if ( !v9 )
    sub_1C372B4(v10);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, const MethodInfo *))v9->klass->vtable._19_set_Padding.methodPtr)(
    v9,
    2,
    v9->klass->vtable._19_set_Padding.method);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, const MethodInfo *))v9->klass->vtable._17_set_Mode.methodPtr)(
    v9,
    1,
    v9->klass->vtable._17_set_Mode.method);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, const MethodInfo *))v9->klass->vtable._15_set_KeySize.methodPtr)(
    v9,
    256,
    v9->klass->vtable._15_set_KeySize.method);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, const MethodInfo *))v9->klass->vtable._7_set_BlockSize.methodPtr)(
    v9,
    256,
    v9->klass->vtable._7_set_BlockSize.method);
  v11 = ((__int64 (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, System_Byte_array *, System_Byte_array *, const MethodInfo *))v9->klass->vtable._21_CreateEncryptor.methodPtr)(
          v9,
          home,
          info,
          v9->klass->vtable._21_CreateEncryptor.method);
  if ( !data )
    sub_1C372B4(v11);
  v12 = (System_Security_Cryptography_ICryptoTransform_o *)v11;
  v13 = (System_IO_MemoryStream_o *)sub_1C372A4(System_IO_MemoryStream_TypeInfo);
  max_length = data->max_length;
  v15 = (System_IO_Stream_o *)v13;
  v16 = max_length + 255;
  v17 = max_length + 510;
  if ( v16 >= 0 )
    v17 = v16;
  System_IO_MemoryStream___ctor_64383756(v13, v17 & 0xFFFFFF00, 0);
  v18 = (System_Security_Cryptography_CryptoStream_o *)sub_1C372A4(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v18, v15, v12, 1, 0);
  if ( isCompress )
  {
    v20 = (ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *)sub_1C372A4(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo);
    ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream___ctor_63161880(v20, (System_IO_Stream_o *)v18, 1, 0);
    if ( !v20 )
      sub_1C372B4(v21);
    ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, System_Byte_array *, _QWORD, _QWORD, const MethodInfo *))v20->klass->vtable._34_Write.methodPtr)(
      v20,
      data,
      0,
      LODWORD(data->max_length),
      v20->klass->vtable._34_Write.method);
    v22 = ((__int64 (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, const MethodInfo *))v20->klass->vtable._18_Close.methodPtr)(
            v20,
            v20->klass->vtable._18_Close.method);
  }
  else
  {
    if ( !v18 )
      sub_1C372B4(v19);
    ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, System_Byte_array *, _QWORD, _QWORD, const MethodInfo *))v18->klass->vtable._34_Write.methodPtr)(
      v18,
      data,
      0,
      LODWORD(data->max_length),
      v18->klass->vtable._34_Write.method);
    System_Security_Cryptography_CryptoStream__FlushFinalBlock(v18, 0);
  }
  if ( !v15 )
    sub_1C372B4(v22);
  v23 = (System_Byte_array *)((__int64 (__fastcall *)(System_IO_Stream_o *, _QWORD))v15->klass[1]._1.this_arg.data)(
                               v15,
                               *(_QWORD *)&v15->klass[1]._1.this_arg.bits);
  ((void (__fastcall *)(System_IO_Stream_o *, const MethodInfo *))v15->klass->vtable._18_Close.methodPtr)(
    v15,
    v15->klass->vtable._18_Close.method);
  if ( v18 )
    ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, const MethodInfo *))v18->klass->vtable._18_Close.methodPtr)(
      v18,
      v18->klass->vtable._18_Close.method);
  return v23;
}


System_IO_Stream_o *CatAndMouseGame__CatHomeMainZ(
        System_IO_Stream_o *stream,
        System_Byte_array *home,
        System_Byte_array *info,
        bool isCompress,
        const MethodInfo *method)
{
  System_Security_Cryptography_RijndaelManaged_o *v9; // x23
  __int64 v10; // x0
  System_Security_Cryptography_ICryptoTransform_o *v11; // x22
  System_Security_Cryptography_CryptoStream_o *v12; // x21
  ICSharpCode_SharpZipLib_GZip_GZipOutputStream_o *v13; // x19

  if ( (byte_4C4263F & 1) == 0 )
  {
    sub_1C37058(&System_Security_Cryptography_CryptoStream_TypeInfo);
    sub_1C37058(&ICSharpCode_SharpZipLib_GZip_GZipOutputStream_TypeInfo);
    sub_1C37058(&System_Security_Cryptography_RijndaelManaged_TypeInfo);
    byte_4C4263F = 1;
  }
  v9 = (System_Security_Cryptography_RijndaelManaged_o *)sub_1C372A4(System_Security_Cryptography_RijndaelManaged_TypeInfo);
  System_Security_Cryptography_RijndaelManaged___ctor(v9, 0);
  if ( !v9 )
    sub_1C372B4(v10);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, const MethodInfo *))v9->klass->vtable._19_set_Padding.methodPtr)(
    v9,
    2,
    v9->klass->vtable._19_set_Padding.method);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, const MethodInfo *))v9->klass->vtable._17_set_Mode.methodPtr)(
    v9,
    1,
    v9->klass->vtable._17_set_Mode.method);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, const MethodInfo *))v9->klass->vtable._15_set_KeySize.methodPtr)(
    v9,
    256,
    v9->klass->vtable._15_set_KeySize.method);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, const MethodInfo *))v9->klass->vtable._7_set_BlockSize.methodPtr)(
    v9,
    256,
    v9->klass->vtable._7_set_BlockSize.method);
  v11 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, System_Byte_array *, System_Byte_array *, const MethodInfo *))v9->klass->vtable._21_CreateEncryptor.methodPtr)(
                                                             v9,
                                                             home,
                                                             info,
                                                             v9->klass->vtable._21_CreateEncryptor.method);
  v12 = (System_Security_Cryptography_CryptoStream_o *)sub_1C372A4(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v12, stream, v11, 1, 0);
  if ( isCompress )
  {
    v13 = (ICSharpCode_SharpZipLib_GZip_GZipOutputStream_o *)sub_1C372A4(ICSharpCode_SharpZipLib_GZip_GZipOutputStream_TypeInfo);
    ICSharpCode_SharpZipLib_GZip_GZipOutputStream___ctor(v13, (System_IO_Stream_o *)v12, 0);
    return (System_IO_Stream_o *)v13;
  }
  return (System_IO_Stream_o *)v12;
}


System_Byte_array *CatAndMouseGame__CatHomeMainZ2(
        System_Byte_array *data,
        System_Byte_array *home,
        System_Byte_array *info,
        bool isCompress,
        const MethodInfo *method)
{
  System_Security_Cryptography_RijndaelManaged_o *v9; // x23
  __int64 v10; // x0
  System_Security_Cryptography_ICryptoTransform_o *v11; // x23
  System_IO_MemoryStream_o *v12; // x19
  System_Security_Cryptography_CryptoStream_o *v13; // x20
  __int64 v14; // x0
  ICSharpCode_SharpZipLib_GZip_GZipOutputStream_o *v15; // x22
  __int64 v16; // x0
  __int64 v17; // x0
  System_Byte_array *v18; // x21

  if ( (byte_4C42640 & 1) == 0 )
  {
    sub_1C37058(&System_Security_Cryptography_CryptoStream_TypeInfo);
    sub_1C37058(&ICSharpCode_SharpZipLib_GZip_GZipOutputStream_TypeInfo);
    sub_1C37058(&System_IO_MemoryStream_TypeInfo);
    sub_1C37058(&System_Security_Cryptography_RijndaelManaged_TypeInfo);
    byte_4C42640 = 1;
  }
  v9 = (System_Security_Cryptography_RijndaelManaged_o *)sub_1C372A4(System_Security_Cryptography_RijndaelManaged_TypeInfo);
  System_Security_Cryptography_RijndaelManaged___ctor(v9, 0);
  if ( !v9 )
    sub_1C372B4(v10);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, const MethodInfo *))v9->klass->vtable._19_set_Padding.methodPtr)(
    v9,
    2,
    v9->klass->vtable._19_set_Padding.method);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, const MethodInfo *))v9->klass->vtable._17_set_Mode.methodPtr)(
    v9,
    1,
    v9->klass->vtable._17_set_Mode.method);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, const MethodInfo *))v9->klass->vtable._15_set_KeySize.methodPtr)(
    v9,
    256,
    v9->klass->vtable._15_set_KeySize.method);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, const MethodInfo *))v9->klass->vtable._7_set_BlockSize.methodPtr)(
    v9,
    256,
    v9->klass->vtable._7_set_BlockSize.method);
  v11 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, System_Byte_array *, System_Byte_array *, const MethodInfo *))v9->klass->vtable._21_CreateEncryptor.methodPtr)(
                                                             v9,
                                                             home,
                                                             info,
                                                             v9->klass->vtable._21_CreateEncryptor.method);
  v12 = (System_IO_MemoryStream_o *)sub_1C372A4(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v12, 0);
  v13 = (System_Security_Cryptography_CryptoStream_o *)sub_1C372A4(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v13, (System_IO_Stream_o *)v12, v11, 1, 0);
  if ( isCompress )
  {
    v15 = (ICSharpCode_SharpZipLib_GZip_GZipOutputStream_o *)sub_1C372A4(ICSharpCode_SharpZipLib_GZip_GZipOutputStream_TypeInfo);
    ICSharpCode_SharpZipLib_GZip_GZipOutputStream___ctor(v15, (System_IO_Stream_o *)v13, 0);
    if ( !data )
      sub_1C372B4(v16);
    if ( !v15 )
      sub_1C372B4(v16);
    ((void (__fastcall *)(ICSharpCode_SharpZipLib_GZip_GZipOutputStream_o *, System_Byte_array *, _QWORD, _QWORD, const MethodInfo *))v15->klass->vtable._34_Write.methodPtr)(
      v15,
      data,
      0,
      LODWORD(data->max_length),
      v15->klass->vtable._34_Write.method);
    v17 = ((__int64 (__fastcall *)(ICSharpCode_SharpZipLib_GZip_GZipOutputStream_o *, const MethodInfo *))v15->klass->vtable._18_Close.methodPtr)(
            v15,
            v15->klass->vtable._18_Close.method);
  }
  else
  {
    if ( !data )
      sub_1C372B4(v14);
    if ( !v13 )
      sub_1C372B4(v14);
    ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, System_Byte_array *, _QWORD, _QWORD, const MethodInfo *))v13->klass->vtable._34_Write.methodPtr)(
      v13,
      data,
      0,
      LODWORD(data->max_length),
      v13->klass->vtable._34_Write.method);
    System_Security_Cryptography_CryptoStream__FlushFinalBlock(v13, 0);
  }
  if ( !v12 )
    sub_1C372B4(v17);
  v18 = (System_Byte_array *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v12->klass->vtable._40_ToArray.methodPtr)(
                               v12,
                               v12->klass->vtable._40_ToArray.method);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v12->klass->vtable._18_Close.methodPtr)(
    v12,
    v12->klass->vtable._18_Close.method);
  if ( v13 )
    ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, const MethodInfo *))v13->klass->vtable._18_Close.methodPtr)(
      v13,
      v13->klass->vtable._18_Close.method);
  return v18;
}


System_String_o *CatAndMouseGame__CatHomeZ2(
        System_Byte_array *data,
        System_Byte_array *home,
        System_Byte_array *info,
        bool isCompress,
        const MethodInfo *method)
{
  System_String_o *result; // x0
  System_String_o *v10; // x19

  if ( (byte_4C4263E & 1) == 0 )
  {
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    sub_1C37058(&System_Convert_TypeInfo);
    byte_4C4263E = 1;
  }
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  result = (System_String_o *)CatAndMouseGame__CatHomeMainZ2(data, home, info, isCompress, method);
  if ( result )
  {
    v10 = result;
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    return System_Convert__ToBase64String((System_Byte_array *)v10, 0);
  }
  return result;
}


void CatAndMouseGame__ForthHomeBuilding(System_String_o *data, const MethodInfo *method)
{
  bool isPlaying; // w20
  _QWORD *UTF8; // x0
  _QWORD *v5; // x19
  int v6; // w20
  unsigned __int64 v7; // x21
  __int64 v8; // x22
  __int64 v9; // x8
  __int64 v10; // x10
  unsigned __int64 v11; // x9
  struct System_Byte_array *baseData; // x10
  __int64 v13; // x9
  struct System_Byte_array *v14; // x9
  __int64 v15; // x8
  char *v16; // x8
  __int64 v17; // x9
  struct System_Byte_array *v18; // x8
  int v19; // w10
  __int64 v20; // x10
  unsigned __int64 v21; // x9
  struct System_Byte_array *baseTop; // x10
  __int64 v23; // x9
  struct System_Byte_array *v24; // x9
  __int64 v25; // x8

  if ( (byte_4C4262F & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    sub_1C37058(&StringLiteral_10354/*"PFBs0eIuunoxKkCcLbqDVerU1rShhS276SAL3A8tFLUfGvtz3F3FFeKELIk3Nvi4"*/);
    byte_4C4262F = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  isPlaying = UnityEngine_Application__get_isPlaying(0);
  UTF8 = System_Text_Encoding__get_UTF8(0);
  if ( !UTF8
    || (!isPlaying
      ? (UTF8 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(*UTF8 + 600LL))(
                            UTF8,
                            StringLiteral_10354/*"PFBs0eIuunoxKkCcLbqDVerU1rShhS276SAL3A8tFLUfGvtz3F3FFeKELIk3Nvi4"*/,
                            *(_QWORD *)(*UTF8 + 608LL)))
      : (UTF8 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, System_String_o *, _QWORD))(*UTF8 + 600LL))(
                            UTF8,
                            data,
                            *(_QWORD *)(*UTF8 + 608LL))),
        (v5 = UTF8) == 0) )
  {
LABEL_44:
    sub_1C372B4(UTF8);
  }
  if ( *((int *)UTF8 + 6) >= 4 )
  {
    v6 = 0;
    v7 = 0;
    v8 = 0;
    do
    {
      UTF8 = &CatAndMouseGame_TypeInfo->_1.image;
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
        UTF8 = &CatAndMouseGame_TypeInfo->_1.image;
      }
      v9 = UTF8[23];
      if ( (v8 & 1) != 0 )
      {
        if ( v7 >= *((unsigned int *)v5 + 6) )
          goto LABEL_43;
        v20 = *(_QWORD *)(v9 + 48);
        if ( !v20 )
          goto LABEL_44;
        v21 = v6 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (unsigned int)v21 >= *(_DWORD *)(v20 + 24) )
          goto LABEL_43;
        *(_BYTE *)(v20 + v21 + 32) = *((_BYTE *)v5 + v7 + 32);
        if ( v7 + 1 >= *((unsigned int *)v5 + 6) )
          goto LABEL_43;
        baseTop = CatAndMouseGame_TypeInfo->static_fields->baseTop;
        if ( !baseTop )
          goto LABEL_44;
        v23 = (int)v21 | 1LL;
        if ( (unsigned int)v23 >= LODWORD(baseTop->max_length) )
          goto LABEL_43;
        baseTop->m_Items[v23] = *((_BYTE *)v5 + v7 + 33);
        if ( v7 + 2 >= *((unsigned int *)v5 + 6) )
          goto LABEL_43;
        v24 = CatAndMouseGame_TypeInfo->static_fields->baseTop;
        if ( !v24 )
          goto LABEL_44;
        v25 = v6 | 2LL;
        if ( (unsigned int)v25 >= LODWORD(v24->max_length) )
          goto LABEL_43;
        v24->m_Items[v25] = *((_BYTE *)v5 + v7 + 34);
        if ( v7 + 3 >= *((unsigned int *)v5 + 6) )
          goto LABEL_43;
        v18 = CatAndMouseGame_TypeInfo->static_fields->baseTop;
        if ( !v18 )
          goto LABEL_44;
        v19 = v6 | 3;
        if ( (v6 | 3u) >= LODWORD(v18->max_length) )
LABEL_43:
          sub_1C372BC(UTF8);
        v17 = (4 * v8) | 3;
      }
      else
      {
        if ( v7 >= *((unsigned int *)v5 + 6) )
          goto LABEL_43;
        v10 = *(_QWORD *)(v9 + 56);
        if ( !v10 )
          goto LABEL_44;
        v11 = v6 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (unsigned int)v11 >= *(_DWORD *)(v10 + 24) )
          goto LABEL_43;
        *(_BYTE *)(v10 + v11 + 32) = *((_BYTE *)v5 + v7 + 32);
        if ( v7 + 1 >= *((unsigned int *)v5 + 6) )
          goto LABEL_43;
        baseData = CatAndMouseGame_TypeInfo->static_fields->baseData;
        if ( !baseData )
          goto LABEL_44;
        v13 = (int)v11 | 1LL;
        if ( (unsigned int)v13 >= LODWORD(baseData->max_length) )
          goto LABEL_43;
        baseData->m_Items[v13] = *((_BYTE *)v5 + v7 + 33);
        if ( v7 + 2 >= *((unsigned int *)v5 + 6) )
          goto LABEL_43;
        v14 = CatAndMouseGame_TypeInfo->static_fields->baseData;
        if ( !v14 )
          goto LABEL_44;
        v15 = v6 | 2LL;
        if ( (unsigned int)v15 >= LODWORD(v14->max_length) )
          goto LABEL_43;
        v16 = (char *)v14 + v15;
        v17 = v7 + 3;
        v16[32] = *((_BYTE *)v5 + v7 + 34);
        if ( v7 + 3 >= *((unsigned int *)v5 + 6) )
          goto LABEL_43;
        v18 = CatAndMouseGame_TypeInfo->static_fields->baseData;
        if ( !v18 )
          goto LABEL_44;
        v19 = v6 | 3;
        if ( (v6 | 3u) >= LODWORD(v18->max_length) )
          goto LABEL_43;
      }
      ++v8;
      v7 += 4LL;
      v18->m_Items[v19] = *((_BYTE *)v5 + v17 + 32);
      v6 += 2;
    }
    while ( v8 < *((_DWORD *)v5 + 6) / 4 );
  }
}


System_String_o *CatAndMouseGame__GetAssetbundleKey(System_String_o *keyType, const MethodInfo *method)
{
  CatAndMouseGame_c *v3; // x0
  System_Collections_Generic_Dictionary_object__object__o *assetbundleKeyCollection; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C42636 & 1) == 0 )
  {
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    byte_4C42636 = 1;
  }
  v3 = CatAndMouseGame_TypeInfo;
  value = 0;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v3 = CatAndMouseGame_TypeInfo;
  }
  assetbundleKeyCollection = (System_Collections_Generic_Dictionary_object__object__o *)v3->static_fields->assetbundleKeyCollection;
  if ( !assetbundleKeyCollection )
    sub_1C372B4(0);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         assetbundleKeyCollection,
         (Il2CppObject *)keyType,
         &value,
         (const MethodInfo_3464E3C *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
  {
    return (System_String_o *)value;
  }
  else
  {
    return 0;
  }
}


System_String_o *CatAndMouseGame__MouseGame1(System_String_o *str, bool isCompress, const MethodInfo *method)
{
  System_Byte_array *v5; // x21
  System_Text_Encoding_o *UTF8; // x0
  __int64 v7; // x19
  __int64 v8; // x24
  System_Security_Cryptography_TripleDESCryptoServiceProvider_o *v9; // x23
  System_IO_MemoryStream_o *v10; // x22
  __int64 v11; // x0
  System_Security_Cryptography_ICryptoTransform_o *v12; // x24
  System_Security_Cryptography_CryptoStream_o *v13; // x19
  __int64 v14; // x0
  System_Security_Cryptography_CryptoStream_c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  System_Byte_array *v20; // x19
  System_IO_MemoryStream_c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  System_IO_MemoryStream_o *v25; // x20
  System_IO_MemoryStream_o *v26; // x22
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *v27; // x23
  __int64 v28; // x0
  __int64 v29; // x21
  __int64 v30; // x0
  __int64 v31; // x23
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  __int64 v36; // x0
  System_IO_MemoryStream_c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  __int64 v41; // x0
  System_IO_MemoryStream_c *v42; // x8
  __int64 v43; // x9
  int32_t *v44; // x10
  __int64 v45; // x0

  if ( (byte_4C42616 & 1) == 0 )
  {
    sub_1C37058(&ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo);
    sub_1C37058(&byte___TypeInfo);
    sub_1C37058(&System_Convert_TypeInfo);
    sub_1C37058(&System_Security_Cryptography_CryptoStream_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_IO_MemoryStream_TypeInfo);
    sub_1C37058(&System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
    sub_1C37058(&StringLiteral_24863/*"wuD6keVr"*/);
    sub_1C37058(&StringLiteral_16970/*"b5nHjsMrqaeNliSs3jyOzgpD"*/);
    byte_4C42616 = 1;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v5 = System_Convert__FromBase64String(str, 0);
  UTF8 = System_Text_Encoding__get_UTF8(0);
  if ( !UTF8 )
    goto LABEL_54;
  v7 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
         UTF8,
         StringLiteral_16970/*"b5nHjsMrqaeNliSs3jyOzgpD"*/,
         UTF8->klass->vtable._18_GetBytes.method);
  UTF8 = System_Text_Encoding__get_UTF8(0);
  if ( !UTF8 )
    goto LABEL_54;
  v8 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
         UTF8,
         StringLiteral_24863/*"wuD6keVr"*/,
         UTF8->klass->vtable._18_GetBytes.method);
  v9 = (System_Security_Cryptography_TripleDESCryptoServiceProvider_o *)sub_1C372A4(System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_TripleDESCryptoServiceProvider___ctor(v9, 0);
  v10 = (System_IO_MemoryStream_o *)sub_1C372A4(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v10, 0);
  if ( !v9 )
    sub_1C372B4(v11);
  v12 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_TripleDESCryptoServiceProvider_o *, __int64, __int64, const MethodInfo *))v9->klass->vtable._23_CreateDecryptor.methodPtr)(
                                                             v9,
                                                             v7,
                                                             v8,
                                                             v9->klass->vtable._23_CreateDecryptor.method);
  v13 = (System_Security_Cryptography_CryptoStream_o *)sub_1C372A4(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v13, (System_IO_Stream_o *)v10, v12, 1, 0);
  if ( !v5 )
    sub_1C372B4(v14);
  if ( !v13 )
    sub_1C372B4(v14);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, System_Byte_array *, _QWORD, _QWORD, const MethodInfo *))v13->klass->vtable._34_Write.methodPtr)(
    v13,
    v5,
    0,
    LODWORD(v5->max_length),
    v13->klass->vtable._34_Write.method);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, const MethodInfo *))v13->klass->vtable._18_Close.methodPtr)(
    v13,
    v13->klass->vtable._18_Close.method);
  klass = v13->klass;
  v16 = *(unsigned __int16 *)&v13->klass->_2.rank;
  if ( *(_WORD *)&v13->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v16;
      p_offset += 4;
      if ( !v16 )
        goto LABEL_14;
    }
    v18 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_14:
    v18 = sub_1C87870(v13, System_IDisposable_TypeInfo, 0);
  }
  v19 = (*(__int64 (__fastcall **)(System_Security_Cryptography_CryptoStream_o *, _QWORD))v18)(
          v13,
          *(_QWORD *)(v18 + 8));
  if ( !v10 )
    sub_1C372B4(v19);
  v20 = (System_Byte_array *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v10->klass->vtable._40_ToArray.methodPtr)(
                               v10,
                               v10->klass->vtable._40_ToArray.method);
  System_Security_Cryptography_SymmetricAlgorithm__Clear((System_Security_Cryptography_SymmetricAlgorithm_o *)v9, 0);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v10->klass->vtable._18_Close.methodPtr)(
    v10,
    v10->klass->vtable._18_Close.method);
  v21 = v10->klass;
  v22 = *(unsigned __int16 *)&v10->klass->_2.rank;
  if ( *(_WORD *)&v10->klass->_2.rank )
  {
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      v23 += 4;
      if ( !v22 )
        goto LABEL_21;
    }
    v24 = (__int64)&v21->vtable + 16 * *v23;
  }
  else
  {
LABEL_21:
    v24 = sub_1C87870(v10, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v24)(v10, *(_QWORD *)(v24 + 8));
  if ( isCompress )
  {
    v25 = (System_IO_MemoryStream_o *)sub_1C372A4(System_IO_MemoryStream_TypeInfo);
    System_IO_MemoryStream___ctor(v25, 0);
    v26 = (System_IO_MemoryStream_o *)sub_1C372A4(System_IO_MemoryStream_TypeInfo);
    System_IO_MemoryStream___ctor_64384132(v26, v20, 0);
    v27 = (ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *)sub_1C372A4(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo);
    ICSharpCode_SharpZipLib_BZip2_BZip2InputStream___ctor(v27, (System_IO_Stream_o *)v26, 0);
    v28 = sub_1C37100(byte___TypeInfo, 0x4000);
    v29 = v28;
    if ( !v28 )
      sub_1C372B4(0);
    if ( !v27 )
      sub_1C372B4(v28);
    while ( 1 )
    {
      v30 = ((__int64 (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v27->klass->vtable._31_Read.methodPtr)(
              v27,
              v29,
              0,
              *(unsigned int *)(v29 + 24),
              v27->klass->vtable._31_Read.method);
      if ( (int)v30 <= 0 )
        break;
      if ( !v25 )
        sub_1C372B4(v30);
      ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v25->klass->vtable._34_Write.methodPtr)(
        v25,
        v29,
        0,
        (unsigned int)v30,
        v25->klass->vtable._34_Write.method);
    }
    ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, const MethodInfo *))v27->klass->vtable._18_Close.methodPtr)(
      v27,
      v27->klass->vtable._18_Close.method);
    v32 = v27->klass;
    v33 = *(unsigned __int16 *)&v27->klass->_2.rank;
    if ( *(_WORD *)&v27->klass->_2.rank )
    {
      v34 = &v32->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_34;
      }
      v35 = (__int64)&v32->vtable + 16 * *v34;
    }
    else
    {
LABEL_34:
      v35 = sub_1C87870(v27, System_IDisposable_TypeInfo, 0);
    }
    v36 = (*(__int64 (__fastcall **)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, _QWORD))v35)(
            v27,
            *(_QWORD *)(v35 + 8));
    if ( !v26 )
      sub_1C372B4(v36);
    ((void (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v26->klass->vtable._18_Close.methodPtr)(
      v26,
      v26->klass->vtable._18_Close.method);
    v37 = v26->klass;
    v38 = *(unsigned __int16 *)&v26->klass->_2.rank;
    if ( *(_WORD *)&v26->klass->_2.rank )
    {
      v39 = &v37->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_41;
      }
      v40 = (__int64)&v37->vtable + 16 * *v39;
    }
    else
    {
LABEL_41:
      v40 = sub_1C87870(v26, System_IDisposable_TypeInfo, 0);
    }
    v41 = (*(__int64 (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v40)(v26, *(_QWORD *)(v40 + 8));
    if ( !v25 )
      sub_1C372B4(v41);
    v31 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v25->klass->vtable._40_ToArray.methodPtr)(
            v25,
            v25->klass->vtable._40_ToArray.method);
    ((void (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v25->klass->vtable._18_Close.methodPtr)(
      v25,
      v25->klass->vtable._18_Close.method);
    v42 = v25->klass;
    v43 = *(unsigned __int16 *)&v25->klass->_2.rank;
    if ( *(_WORD *)&v25->klass->_2.rank )
    {
      v44 = &v42->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
      {
        --v43;
        v44 += 4;
        if ( !v43 )
          goto LABEL_48;
      }
      v45 = (__int64)&v42->vtable + 16 * *v44;
    }
    else
    {
LABEL_48:
      v45 = sub_1C87870(v25, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v45)(v25, *(_QWORD *)(v45 + 8));
  }
  else
  {
    v31 = (__int64)v20;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0);
  if ( !UTF8 )
LABEL_54:
    sub_1C372B4(UTF8);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, const MethodInfo *))UTF8->klass->vtable._35_GetString.methodPtr)(
                              UTF8,
                              v31,
                              UTF8->klass->vtable._35_GetString.method);
}


System_String_o *CatAndMouseGame__MouseGame2(System_Byte_array *data, bool isCompress, const MethodInfo *method)
{
  CatAndMouseGame_c *v4; // x0
  System_Text_Encoding_o *UTF8; // x0
  System_Array_o *v6; // x20
  __int64 v7; // x0
  struct CatAndMouseGame_StaticFields *static_fields; // x8
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x4

  if ( (byte_4C42618 & 1) == 0 )
  {
    sub_1C37058(&byte___TypeInfo);
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    sub_1C37058(&StringLiteral_22597/*"pX6q6xK2UymhFKcaGHHUlfXqfTsWF0uH"*/);
    byte_4C42618 = 1;
  }
  v4 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v4 = CatAndMouseGame_TypeInfo;
  }
  System_Array__Copy_65223704((System_Array_o *)data, 0, (System_Array_o *)v4->static_fields->ownerTop, 0, 32, 0);
  if ( !data
    || (v6 = (System_Array_o *)sub_1C37100(byte___TypeInfo, (unsigned int)(LODWORD(data->max_length) - 32)),
        System_Array__Copy_65223704((System_Array_o *)data, 32, v6, 0, LODWORD(data->max_length) - 32, 0),
        (UTF8 = System_Text_Encoding__get_UTF8(0)) == 0) )
  {
    sub_1C372B4(UTF8);
  }
  v7 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
         UTF8,
         StringLiteral_22597/*"pX6q6xK2UymhFKcaGHHUlfXqfTsWF0uH"*/,
         UTF8->klass->vtable._18_GetBytes.method);
  static_fields = CatAndMouseGame_TypeInfo->static_fields;
  static_fields->ownerData = (struct System_Byte_array *)v7;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->ownerData, v7, v9, v10);
  return CatAndMouseGame__MouseHome(
           (System_Byte_array *)v6,
           CatAndMouseGame_TypeInfo->static_fields->ownerData,
           CatAndMouseGame_TypeInfo->static_fields->ownerTop,
           1,
           v11);
}


System_Byte_array *CatAndMouseGame__MouseGame2Bytes(System_Byte_array *data, bool isCompress, const MethodInfo *method)
{
  CatAndMouseGame_c *v4; // x0
  System_Text_Encoding_o *UTF8; // x0
  System_Array_o *v6; // x20
  __int64 v7; // x0
  struct CatAndMouseGame_StaticFields *static_fields; // x8
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x4

  if ( (byte_4C4261B & 1) == 0 )
  {
    sub_1C37058(&byte___TypeInfo);
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    sub_1C37058(&StringLiteral_22597/*"pX6q6xK2UymhFKcaGHHUlfXqfTsWF0uH"*/);
    byte_4C4261B = 1;
  }
  v4 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v4 = CatAndMouseGame_TypeInfo;
  }
  System_Array__Copy_65223704((System_Array_o *)data, 0, (System_Array_o *)v4->static_fields->ownerTop, 0, 32, 0);
  if ( !data
    || (v6 = (System_Array_o *)sub_1C37100(byte___TypeInfo, (unsigned int)(LODWORD(data->max_length) - 32)),
        System_Array__Copy_65223704((System_Array_o *)data, 32, v6, 0, LODWORD(data->max_length) - 32, 0),
        (UTF8 = System_Text_Encoding__get_UTF8(0)) == 0) )
  {
    sub_1C372B4(UTF8);
  }
  v7 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
         UTF8,
         StringLiteral_22597/*"pX6q6xK2UymhFKcaGHHUlfXqfTsWF0uH"*/,
         UTF8->klass->vtable._18_GetBytes.method);
  static_fields = CatAndMouseGame_TypeInfo->static_fields;
  static_fields->ownerData = (struct System_Byte_array *)v7;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->ownerData, v7, v9, v10);
  return CatAndMouseGame__MouseHomeSub(
           (System_Byte_array *)v6,
           CatAndMouseGame_TypeInfo->static_fields->ownerData,
           CatAndMouseGame_TypeInfo->static_fields->ownerTop,
           1,
           v11);
}


Il2CppObject *CatAndMouseGame__MouseGame2MsgPack(System_Byte_array *data, bool isCompress, const MethodInfo *method)
{
  CatAndMouseGame_c *v4; // x0
  System_Text_Encoding_o *UTF8; // x0
  System_Array_o *v6; // x20
  __int64 v7; // x0
  struct CatAndMouseGame_StaticFields *static_fields; // x8
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x4

  if ( (byte_4C42619 & 1) == 0 )
  {
    sub_1C37058(&byte___TypeInfo);
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    sub_1C37058(&StringLiteral_22597/*"pX6q6xK2UymhFKcaGHHUlfXqfTsWF0uH"*/);
    byte_4C42619 = 1;
  }
  v4 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v4 = CatAndMouseGame_TypeInfo;
  }
  System_Array__Copy_65223704((System_Array_o *)data, 0, (System_Array_o *)v4->static_fields->ownerTop, 0, 32, 0);
  if ( !data
    || (v6 = (System_Array_o *)sub_1C37100(byte___TypeInfo, (unsigned int)(LODWORD(data->max_length) - 32)),
        System_Array__Copy_65223704((System_Array_o *)data, 32, v6, 0, LODWORD(data->max_length) - 32, 0),
        (UTF8 = System_Text_Encoding__get_UTF8(0)) == 0) )
  {
    sub_1C372B4(UTF8);
  }
  v7 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
         UTF8,
         StringLiteral_22597/*"pX6q6xK2UymhFKcaGHHUlfXqfTsWF0uH"*/,
         UTF8->klass->vtable._18_GetBytes.method);
  static_fields = CatAndMouseGame_TypeInfo->static_fields;
  static_fields->ownerData = (struct System_Byte_array *)v7;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->ownerData, v7, v9, v10);
  return CatAndMouseGame__MouseHomeMsgPack(
           (System_Byte_array *)v6,
           CatAndMouseGame_TypeInfo->static_fields->ownerData,
           CatAndMouseGame_TypeInfo->static_fields->ownerTop,
           1,
           v11);
}


Il2CppObject *CatAndMouseGame__MouseGame2Unpacker(System_Byte_array *data, bool isCompress, const MethodInfo *method)
{
  CatAndMouseGame_c *v4; // x0
  System_Text_Encoding_o *UTF8; // x0
  System_Array_o *v6; // x20
  __int64 v7; // x0
  struct CatAndMouseGame_StaticFields *static_fields; // x8
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x4

  if ( (byte_4C4261A & 1) == 0 )
  {
    sub_1C37058(&byte___TypeInfo);
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    sub_1C37058(&StringLiteral_22597/*"pX6q6xK2UymhFKcaGHHUlfXqfTsWF0uH"*/);
    byte_4C4261A = 1;
  }
  v4 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v4 = CatAndMouseGame_TypeInfo;
  }
  System_Array__Copy_65223704((System_Array_o *)data, 0, (System_Array_o *)v4->static_fields->ownerTop, 0, 32, 0);
  if ( !data
    || (v6 = (System_Array_o *)sub_1C37100(byte___TypeInfo, (unsigned int)(LODWORD(data->max_length) - 32)),
        System_Array__Copy_65223704((System_Array_o *)data, 32, v6, 0, LODWORD(data->max_length) - 32, 0),
        (UTF8 = System_Text_Encoding__get_UTF8(0)) == 0) )
  {
    sub_1C372B4(UTF8);
  }
  v7 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
         UTF8,
         StringLiteral_22597/*"pX6q6xK2UymhFKcaGHHUlfXqfTsWF0uH"*/,
         UTF8->klass->vtable._18_GetBytes.method);
  static_fields = CatAndMouseGame_TypeInfo->static_fields;
  static_fields->ownerData = (struct System_Byte_array *)v7;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->ownerData, v7, v9, v10);
  return CatAndMouseGame__MouseHomeMaster(
           (System_Byte_array *)v6,
           CatAndMouseGame_TypeInfo->static_fields->ownerData,
           CatAndMouseGame_TypeInfo->static_fields->ownerTop,
           1,
           v11);
}


System_String_o *CatAndMouseGame__MouseGame3(System_String_o *str, const MethodInfo *method)
{
  System_Byte_array *v3; // x0
  const MethodInfo *v4; // x4
  CatAndMouseGame_c *v5; // x8
  System_Byte_array *v6; // x19
  System_String_o *result; // x0
  System_String_o *v8; // x19
  unsigned __int64 klass; // x9
  unsigned __int64 v10; // x8
  System_String_o *UTF8; // x0

  if ( (byte_4C42620 & 1) == 0 )
  {
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    sub_1C37058(&System_Convert_TypeInfo);
    byte_4C42620 = 1;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v3 = System_Convert__FromBase64String(str, 0);
  v5 = CatAndMouseGame_TypeInfo;
  v6 = v3;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v5 = CatAndMouseGame_TypeInfo;
  }
  result = (System_String_o *)CatAndMouseGame__MouseHomeMain(
                                v6,
                                v5->static_fields->stageData,
                                v5->static_fields->stageTop,
                                1,
                                v4);
  if ( result )
  {
    v8 = result;
    if ( (int)result[1].klass >= 1 )
    {
      klass = (unsigned int)result[1].klass;
      v10 = 0;
      do
      {
        if ( v10 >= klass )
          sub_1C372BC(result);
        *((_BYTE *)&result[1].monitor + v10) = ~*((_BYTE *)&result[1].monitor + v10);
        ++v10;
      }
      while ( (__int64)v10 < (int)klass );
    }
    UTF8 = (System_String_o *)System_Text_Encoding__get_UTF8(0);
    if ( !UTF8
      || (UTF8 = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, System_String_o *, void *))UTF8->klass[1]._1.fields)(
                                      UTF8,
                                      v8,
                                      UTF8->klass[1]._1.events)) == 0 )
    {
      sub_1C372B4(UTF8);
    }
    return System_String__TrimEnd_63618348(UTF8, 0, 0);
  }
  return result;
}


System_String_o *CatAndMouseGame__MouseGame3_41236436(
        System_String_o *str,
        System_String_o *key,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x3
  const MethodInfo *v8; // x3
  System_Byte_array *v9; // [xsp+0h] [xbp-30h] BYREF
  System_Byte_array *home; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C42630 & 1) == 0 )
  {
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    byte_4C42630 = 1;
  }
  if ( System_String__IsNullOrEmpty(key, 0) )
  {
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    return CatAndMouseGame__MouseGame3(str, v5);
  }
  else
  {
    v9 = 0;
    home = 0;
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    CatAndMouseGame__OtherHomeBuilding(key, &home, &v9, v6);
    return CatAndMouseGame__MouseGame3_41236604(str, home, v9, v8);
  }
}


System_String_o *CatAndMouseGame__MouseGame3_41236604(
        System_String_o *str,
        System_Byte_array *home,
        System_Byte_array *info,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x4
  System_Byte_array *v8; // x21
  System_String_o *result; // x0
  System_String_o *v10; // x19
  System_String_o *UTF8; // x0

  if ( (byte_4C42631 & 1) == 0 )
  {
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    sub_1C37058(&System_Convert_TypeInfo);
    byte_4C42631 = 1;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v8 = System_Convert__FromBase64String(str, 0);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  result = (System_String_o *)CatAndMouseGame__MouseHomeMain(v8, home, info, 1, v7);
  if ( result )
  {
    v10 = result;
    UTF8 = (System_String_o *)System_Text_Encoding__get_UTF8(0);
    if ( !UTF8
      || (UTF8 = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, System_String_o *, void *))UTF8->klass[1]._1.fields)(
                                      UTF8,
                                      v10,
                                      UTF8->klass[1]._1.events)) == 0 )
    {
      sub_1C372B4(UTF8);
    }
    return System_String__TrimEnd_63618348(UTF8, 0, 0);
  }
  return result;
}


System_Byte_array *CatAndMouseGame__MouseGame4(System_Byte_array *data, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  CatAndMouseGame_c *v4; // x0
  System_Byte_array *result; // x0
  int max_length; // w8
  int v7; // w9
  unsigned int v8; // w12
  unsigned int v9; // w13
  char *v10; // x13
  uint8_t *v11; // x15
  uint8_t v12; // w14
  _BYTE *v13; // x13
  char v14; // t1

  if ( (byte_4C42623 & 1) == 0 )
  {
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    byte_4C42623 = 1;
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
      v7 = 0;
      do
      {
        v8 = v7 + 1;
        if ( v7 + 1 >= max_length )
          break;
        v9 = result->max_length;
        if ( v7 < v9 && v8 < v9 )
        {
          v10 = (char *)result + (int)v8;
          v11 = &result->m_Items[v7];
          v12 = *v11;
          v14 = v10[32];
          v13 = v10 + 32;
          *v11 = v14 ^ 0xD2;
          if ( v8 < LODWORD(result->max_length) )
            continue;
        }
        sub_1C372BC(result);
        v7 += 2;
        *v13 = v12 ^ 0xCE;
      }
      while ( v7 < max_length );
    }
  }
  return result;
}


System_Security_Cryptography_CryptoStream_o *CatAndMouseGame__MouseGame4Stream(
        System_IO_Stream_o *outputStream,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  CatAndMouseGame_c *v4; // x0

  if ( (byte_4C42624 & 1) == 0 )
  {
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    byte_4C42624 = 1;
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


System_Security_Cryptography_CryptoStream_o *CatAndMouseGame__MouseGame4Stream_41237128(
        System_IO_Stream_o *outputStream,
        System_String_o *key,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x3
  const MethodInfo *v8; // x4
  System_Byte_array *v9; // [xsp+0h] [xbp-30h] BYREF
  System_Byte_array *home; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C42633 & 1) == 0 )
  {
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    byte_4C42633 = 1;
  }
  if ( System_String__IsNullOrEmpty(key, 0) )
  {
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    return CatAndMouseGame__MouseGame4Stream(outputStream, v5);
  }
  else
  {
    v9 = 0;
    home = 0;
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    CatAndMouseGame__OtherHomeBuilding(key, &home, &v9, v6);
    return CatAndMouseGame__MouseHomeMainStream(outputStream, home, v9, 0, v8);
  }
}


System_Byte_array *CatAndMouseGame__MouseGame4_41236848(
        System_Byte_array *data,
        System_String_o *key,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x3
  const MethodInfo *v8; // x3
  System_Byte_array *v9; // [xsp+0h] [xbp-30h] BYREF
  System_Byte_array *home; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C42632 & 1) == 0 )
  {
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    byte_4C42632 = 1;
  }
  if ( System_String__IsNullOrEmpty(key, 0) )
  {
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    return CatAndMouseGame__MouseGame4(data, v5);
  }
  else
  {
    v9 = 0;
    home = 0;
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    CatAndMouseGame__OtherHomeBuilding(key, &home, &v9, v6);
    return CatAndMouseGame__MouseGame4_41237016(data, home, v9, v8);
  }
}


System_Byte_array *CatAndMouseGame__MouseGame4_41237016(
        System_Byte_array *data,
        System_Byte_array *home,
        System_Byte_array *info,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( (byte_4C42634 & 1) == 0 )
  {
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    byte_4C42634 = 1;
  }
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  return CatAndMouseGame__MouseHomeMain(data, home, info, 0, v4);
}


System_String_o *CatAndMouseGame__MouseGame5(System_String_o *str, const MethodInfo *method)
{
  CatAndMouseGame_c *v3; // x0
  struct System_Byte_array *BattleKey; // x8
  struct System_Byte_array *BattleIV; // x8
  CatAndMouseGame_c *v6; // x19
  __int64 v7; // x20
  const MethodInfo *v8; // x4
  System_Byte_array *v9; // x21
  __int64 i; // x23
  struct System_Byte_array *v11; // x8
  unsigned __int64 v12; // x24
  __int64 j; // x23
  struct System_Byte_array *v14; // x8
  signed __int64 max_length_low; // x25
  unsigned __int64 v16; // x24
  struct System_Byte_array *v17; // x8

  if ( (byte_4C42627 & 1) == 0 )
  {
    sub_1C37058(&byte___TypeInfo);
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    sub_1C37058(&System_Convert_TypeInfo);
    byte_4C42627 = 1;
  }
  v3 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v3 = CatAndMouseGame_TypeInfo;
  }
  BattleKey = v3->static_fields->BattleKey;
  if ( !BattleKey
    || (v3 = (CatAndMouseGame_c *)sub_1C37100(byte___TypeInfo, LODWORD(BattleKey->max_length)),
        (BattleIV = CatAndMouseGame_TypeInfo->static_fields->BattleIV) == 0) )
  {
LABEL_33:
    sub_1C372B4(v3);
  }
  v6 = v3;
  v7 = sub_1C37100(byte___TypeInfo, LODWORD(BattleIV->max_length));
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v9 = System_Convert__FromBase64String(str, 0);
  for ( i = 32; ; ++i )
  {
    v3 = CatAndMouseGame_TypeInfo;
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      v3 = CatAndMouseGame_TypeInfo;
    }
    v11 = v3->static_fields->BattleKey;
    if ( !v11 )
      goto LABEL_33;
    v12 = i - 32;
    if ( i - 32 >= SLODWORD(v11->max_length) )
      break;
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v11 = CatAndMouseGame_TypeInfo->static_fields->BattleKey;
      if ( !v11 )
        goto LABEL_33;
    }
    if ( v12 >= LODWORD(v11->max_length) )
      goto LABEL_34;
    if ( !v6 )
      goto LABEL_33;
    if ( v12 >= LODWORD(v6->_1.namespaze) )
LABEL_34:
      sub_1C372BC(v3);
    *((_BYTE *)&v6->_1.image + i) = *((_BYTE *)&v11->obj.klass + i) ^ 4;
  }
  for ( j = 32; ; ++j )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = CatAndMouseGame_TypeInfo;
    }
    v14 = v3->static_fields->BattleIV;
    if ( !v14 )
      goto LABEL_33;
    max_length_low = SLODWORD(v14->max_length);
    v16 = j - 32;
    if ( !v3->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v3);
    if ( (__int64)v16 >= max_length_low )
      break;
    v17 = CatAndMouseGame_TypeInfo->static_fields->BattleIV;
    if ( !v17 )
      goto LABEL_33;
    if ( v16 >= LODWORD(v17->max_length) )
      goto LABEL_34;
    if ( !v7 )
      goto LABEL_33;
    if ( v16 >= *(unsigned int *)(v7 + 24) )
      goto LABEL_34;
    *(_BYTE *)(v7 + j) = *((_BYTE *)&v17->obj.klass + j) ^ 8;
    v3 = CatAndMouseGame_TypeInfo;
  }
  return CatAndMouseGame__MouseHome(v9, (System_Byte_array *)v6, (System_Byte_array *)v7, 0, v8);
}


System_String_o *CatAndMouseGame__MouseGame6(System_String_o *str, const MethodInfo *method)
{
  System_Byte_array *v3; // x0
  const MethodInfo *v4; // x4
  CatAndMouseGame_c *v5; // x8
  System_Byte_array *v6; // x19

  if ( (byte_4C4263A & 1) == 0 )
  {
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    sub_1C37058(&System_Convert_TypeInfo);
    byte_4C4263A = 1;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v3 = System_Convert__FromBase64String(str, 0);
  v5 = CatAndMouseGame_TypeInfo;
  v6 = v3;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v5 = CatAndMouseGame_TypeInfo;
  }
  return CatAndMouseGame__MouseHome(v6, v5->static_fields->sideData, v5->static_fields->sideTop, 0, v4);
}


System_Byte_array *CatAndMouseGame__MouseGame6ForMsgPack(System_String_o *str, const MethodInfo *method)
{
  System_Byte_array *v3; // x0
  const MethodInfo *v4; // x4
  CatAndMouseGame_c *v5; // x8
  System_Byte_array *v6; // x19

  if ( (byte_4C4263B & 1) == 0 )
  {
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    sub_1C37058(&System_Convert_TypeInfo);
    byte_4C4263B = 1;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v3 = System_Convert__FromBase64String(str, 0);
  v5 = CatAndMouseGame_TypeInfo;
  v6 = v3;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v5 = CatAndMouseGame_TypeInfo;
  }
  return CatAndMouseGame__MouseHomeSub(v6, v5->static_fields->sideData, v5->static_fields->sideTop, 0, v4);
}


System_Byte_array *CatAndMouseGame__MouseGame7(System_Byte_array *data, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  CatAndMouseGame_c *v4; // x0
  System_Byte_array *result; // x0
  unsigned __int64 max_length_low; // x8
  unsigned __int64 v7; // x9

  if ( (byte_4C42629 & 1) == 0 )
  {
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    byte_4C42629 = 1;
  }
  v4 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v4 = CatAndMouseGame_TypeInfo;
  }
  result = CatAndMouseGame__MouseHomeMain(data, v4->static_fields->stageData, v4->static_fields->stageTop, 1, v2);
  if ( !result )
    sub_1C372B4(0);
  max_length_low = LODWORD(result->max_length);
  if ( (__int64)(max_length_low << 32) >= 1 )
  {
    v7 = 0;
    do
    {
      if ( v7 >= max_length_low )
        sub_1C372BC(result);
      result->m_Items[v7] = ~result->m_Items[v7];
      ++v7;
    }
    while ( (__int64)v7 < (int)max_length_low );
  }
  return result;
}


System_String_o *CatAndMouseGame__MouseGame8(System_String_o *str, const MethodInfo *method)
{
  System_Byte_array *v3; // x0
  const MethodInfo *v4; // x4
  CatAndMouseGame_c *v5; // x8
  System_Byte_array *v6; // x19
  System_String_o *result; // x0
  const MethodInfo *v8; // x4
  System_String_o *v9; // x20
  CatAndMouseGame_c *v10; // x0
  unsigned __int64 klass_low; // x8
  unsigned __int64 v12; // x9
  System_String_o *UTF8; // x0

  if ( (byte_4C4262B & 1) == 0 )
  {
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    sub_1C37058(&System_Convert_TypeInfo);
    byte_4C4262B = 1;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v3 = System_Convert__FromBase64String(str, 0);
  v5 = CatAndMouseGame_TypeInfo;
  v6 = v3;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v5 = CatAndMouseGame_TypeInfo;
  }
  result = (System_String_o *)CatAndMouseGame__MouseHomeMainZ2(
                                v6,
                                v5->static_fields->stageData,
                                v5->static_fields->stageTop,
                                1,
                                v4);
  v9 = result;
  if ( result )
    goto LABEL_11;
  v10 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v10 = CatAndMouseGame_TypeInfo;
  }
  result = (System_String_o *)CatAndMouseGame__MouseHomeMain(
                                v6,
                                v10->static_fields->stageData,
                                v10->static_fields->stageTop,
                                1,
                                v8);
  v9 = result;
  if ( result )
  {
LABEL_11:
    klass_low = LODWORD(v9[1].klass);
    if ( (__int64)(klass_low << 32) >= 1 )
    {
      v12 = 0;
      do
      {
        if ( v12 >= klass_low )
          sub_1C372BC(result);
        *((_BYTE *)&v9[1].monitor + v12) = ~*((_BYTE *)&v9[1].monitor + v12);
        ++v12;
      }
      while ( (__int64)v12 < (int)klass_low );
    }
    UTF8 = (System_String_o *)System_Text_Encoding__get_UTF8(0);
    if ( !UTF8
      || (UTF8 = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, System_String_o *, void *))UTF8->klass[1]._1.fields)(
                                      UTF8,
                                      v9,
                                      UTF8->klass[1]._1.events)) == 0 )
    {
      sub_1C372B4(UTF8);
    }
    return System_String__TrimEnd_63618348(UTF8, 0, 0);
  }
  return result;
}


System_IO_Stream_o *CatAndMouseGame__MouseGameZ(System_IO_Stream_o *stream, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  CatAndMouseGame_c *v4; // x0

  if ( (byte_4C4261D & 1) == 0 )
  {
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    byte_4C4261D = 1;
  }
  v4 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v4 = CatAndMouseGame_TypeInfo;
  }
  return CatAndMouseGame__MouseHomeMainZ(stream, v4->static_fields->stageData, v4->static_fields->stageTop, 1, v2);
}


System_String_o *CatAndMouseGame__MouseHome(
        System_Byte_array *data,
        System_Byte_array *home,
        System_Byte_array *info,
        bool isCompress,
        const MethodInfo *method)
{
  System_Byte_array *v9; // x19
  System_String_o *UTF8; // x0

  if ( (byte_4C42642 & 1) == 0 )
  {
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    byte_4C42642 = 1;
  }
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v9 = CatAndMouseGame__MouseHomeMain(data, home, info, isCompress, method);
  UTF8 = (System_String_o *)System_Text_Encoding__get_UTF8(0);
  if ( !UTF8
    || (UTF8 = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, System_Byte_array *, void *))UTF8->klass[1]._1.fields)(
                                    UTF8,
                                    v9,
                                    UTF8->klass[1]._1.events)) == 0 )
  {
    sub_1C372B4(UTF8);
  }
  return System_String__TrimEnd_63618348(UTF8, 0, 0);
}


System_Byte_array *CatAndMouseGame__MouseHomeMain(
        System_Byte_array *data,
        System_Byte_array *home,
        System_Byte_array *info,
        bool isCompress,
        const MethodInfo *method)
{
  System_Security_Cryptography_RijndaelManaged_o *v9; // x23
  __int64 v10; // x0
  System_Security_Cryptography_ICryptoTransform_o *v11; // x19
  CatAndMouseGame_DataDecryptor_o *v12; // x23
  const MethodInfo *v13; // x4
  __int64 v14; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  System_Byte_array *v17; // x22
  CatAndMouseGame_DataDecryptor_c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0
  System_Security_Cryptography_ICryptoTransform_c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0

  if ( (byte_4C42647 & 1) == 0 )
  {
    sub_1C37058(&CatAndMouseGame_DataDecryptor_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Security_Cryptography_RijndaelManaged_TypeInfo);
    byte_4C42647 = 1;
  }
  v9 = (System_Security_Cryptography_RijndaelManaged_o *)sub_1C372A4(System_Security_Cryptography_RijndaelManaged_TypeInfo);
  System_Security_Cryptography_RijndaelManaged___ctor(v9, 0);
  if ( !v9 )
    sub_1C372B4(v10);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, const MethodInfo *))v9->klass->vtable._19_set_Padding.methodPtr)(
    v9,
    2,
    v9->klass->vtable._19_set_Padding.method);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, const MethodInfo *))v9->klass->vtable._17_set_Mode.methodPtr)(
    v9,
    1,
    v9->klass->vtable._17_set_Mode.method);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, const MethodInfo *))v9->klass->vtable._15_set_KeySize.methodPtr)(
    v9,
    256,
    v9->klass->vtable._15_set_KeySize.method);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, const MethodInfo *))v9->klass->vtable._7_set_BlockSize.methodPtr)(
    v9,
    256,
    v9->klass->vtable._7_set_BlockSize.method);
  v11 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, System_Byte_array *, System_Byte_array *, const MethodInfo *))v9->klass->vtable._23_CreateDecryptor.methodPtr)(
                                                             v9,
                                                             home,
                                                             info,
                                                             v9->klass->vtable._23_CreateDecryptor.method);
  v12 = (CatAndMouseGame_DataDecryptor_o *)sub_1C372A4(CatAndMouseGame_DataDecryptor_TypeInfo);
  CatAndMouseGame_DataDecryptor___ctor(v12, v11, data, isCompress, v13);
  if ( !v12 )
    sub_1C372B4(v14);
  CatAndMouseGame_DataDecryptor__ApplyWrite(v12, v15);
  v17 = CatAndMouseGame_DataDecryptor__ToByteArray(v12, v16);
  klass = v12->klass;
  v19 = *(unsigned __int16 *)&v12->klass->_2.rank;
  if ( *(_WORD *)&v12->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v19;
      p_offset += 4;
      if ( !v19 )
        goto LABEL_9;
    }
    v21 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_9:
    v21 = sub_1C87870(v12, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(CatAndMouseGame_DataDecryptor_o *, _QWORD))v21)(v12, *(_QWORD *)(v21 + 8));
  if ( v11 )
  {
    v22 = v11->klass;
    v23 = *(unsigned __int16 *)&v11->klass->_2.rank;
    if ( *(_WORD *)&v11->klass->_2.rank )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_16;
      }
      v25 = (__int64)&v22->vtable[*v24];
    }
    else
    {
LABEL_16:
      v25 = sub_1C87870(v11, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Security_Cryptography_ICryptoTransform_o *, _QWORD))v25)(v11, *(_QWORD *)(v25 + 8));
  }
  return v17;
}


System_Security_Cryptography_CryptoStream_o *CatAndMouseGame__MouseHomeMainStream(
        System_IO_Stream_o *outputStream,
        System_Byte_array *home,
        System_Byte_array *info,
        bool isCompress,
        const MethodInfo *method)
{
  System_Security_Cryptography_RijndaelManaged_o *v8; // x22
  __int64 v9; // x0
  System_Security_Cryptography_ICryptoTransform_o *v10; // x20
  System_Security_Cryptography_CryptoStream_o *v11; // x21

  if ( (byte_4C42648 & 1) == 0 )
  {
    sub_1C37058(&System_Security_Cryptography_CryptoStream_TypeInfo);
    sub_1C37058(&System_Security_Cryptography_RijndaelManaged_TypeInfo);
    byte_4C42648 = 1;
  }
  v8 = (System_Security_Cryptography_RijndaelManaged_o *)sub_1C372A4(System_Security_Cryptography_RijndaelManaged_TypeInfo);
  System_Security_Cryptography_RijndaelManaged___ctor(v8, 0);
  if ( !v8 )
    sub_1C372B4(v9);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, const MethodInfo *))v8->klass->vtable._19_set_Padding.methodPtr)(
    v8,
    2,
    v8->klass->vtable._19_set_Padding.method);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, const MethodInfo *))v8->klass->vtable._17_set_Mode.methodPtr)(
    v8,
    1,
    v8->klass->vtable._17_set_Mode.method);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, const MethodInfo *))v8->klass->vtable._15_set_KeySize.methodPtr)(
    v8,
    256,
    v8->klass->vtable._15_set_KeySize.method);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, const MethodInfo *))v8->klass->vtable._7_set_BlockSize.methodPtr)(
    v8,
    256,
    v8->klass->vtable._7_set_BlockSize.method);
  v10 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, System_Byte_array *, System_Byte_array *, const MethodInfo *))v8->klass->vtable._23_CreateDecryptor.methodPtr)(
                                                             v8,
                                                             home,
                                                             info,
                                                             v8->klass->vtable._23_CreateDecryptor.method);
  v11 = (System_Security_Cryptography_CryptoStream_o *)sub_1C372A4(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v11, outputStream, v10, 1, 0);
  return v11;
}


System_IO_Stream_o *CatAndMouseGame__MouseHomeMainZ(
        System_IO_Stream_o *stream,
        System_Byte_array *home,
        System_Byte_array *info,
        bool isCompress,
        const MethodInfo *method)
{
  System_Security_Cryptography_RijndaelManaged_o *v9; // x23
  __int64 v10; // x0
  System_Security_Cryptography_ICryptoTransform_o *v11; // x22
  System_Security_Cryptography_CryptoStream_o *v12; // x21
  ICSharpCode_SharpZipLib_GZip_GZipInputStream_o *v13; // x19

  if ( (byte_4C42645 & 1) == 0 )
  {
    sub_1C37058(&System_Security_Cryptography_CryptoStream_TypeInfo);
    sub_1C37058(&ICSharpCode_SharpZipLib_GZip_GZipInputStream_TypeInfo);
    sub_1C37058(&System_Security_Cryptography_RijndaelManaged_TypeInfo);
    byte_4C42645 = 1;
  }
  v9 = (System_Security_Cryptography_RijndaelManaged_o *)sub_1C372A4(System_Security_Cryptography_RijndaelManaged_TypeInfo);
  System_Security_Cryptography_RijndaelManaged___ctor(v9, 0);
  if ( !v9 )
    sub_1C372B4(v10);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, const MethodInfo *))v9->klass->vtable._19_set_Padding.methodPtr)(
    v9,
    2,
    v9->klass->vtable._19_set_Padding.method);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, const MethodInfo *))v9->klass->vtable._17_set_Mode.methodPtr)(
    v9,
    1,
    v9->klass->vtable._17_set_Mode.method);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, const MethodInfo *))v9->klass->vtable._15_set_KeySize.methodPtr)(
    v9,
    256,
    v9->klass->vtable._15_set_KeySize.method);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, const MethodInfo *))v9->klass->vtable._7_set_BlockSize.methodPtr)(
    v9,
    256,
    v9->klass->vtable._7_set_BlockSize.method);
  v11 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, System_Byte_array *, System_Byte_array *, const MethodInfo *))v9->klass->vtable._23_CreateDecryptor.methodPtr)(
                                                             v9,
                                                             home,
                                                             info,
                                                             v9->klass->vtable._23_CreateDecryptor.method);
  v12 = (System_Security_Cryptography_CryptoStream_o *)sub_1C372A4(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v12, stream, v11, 0, 0);
  if ( isCompress )
  {
    v13 = (ICSharpCode_SharpZipLib_GZip_GZipInputStream_o *)sub_1C372A4(ICSharpCode_SharpZipLib_GZip_GZipInputStream_TypeInfo);
    ICSharpCode_SharpZipLib_GZip_GZipInputStream___ctor(v13, (System_IO_Stream_o *)v12, 0);
    return (System_IO_Stream_o *)v13;
  }
  return (System_IO_Stream_o *)v12;
}


System_Byte_array *CatAndMouseGame__MouseHomeMainZ2(
        System_Byte_array *data,
        System_Byte_array *home,
        System_Byte_array *info,
        bool isCompress,
        const MethodInfo *method)
{
  System_Security_Cryptography_RijndaelManaged_o *v9; // x23
  __int64 v10; // x0
  __int64 v11; // x0
  System_Security_Cryptography_ICryptoTransform_o *v12; // x23
  __int64 v13; // x22
  System_IO_MemoryStream_o *v14; // x19
  System_Security_Cryptography_CryptoStream_o *v15; // x20
  __int64 v16; // x0
  __int64 v17; // x0
  unsigned int v18; // w8
  System_IO_MemoryStream_o *v19; // x21
  System_IO_MemoryStream_o *v20; // x23
  ICSharpCode_SharpZipLib_GZip_GZipInputStream_o *v21; // x22
  __int64 v22; // x0
  __int64 v23; // x24
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x0

  if ( (byte_4C42646 & 1) == 0 )
  {
    sub_1C37058(&byte___TypeInfo);
    sub_1C37058(&System_Security_Cryptography_CryptoStream_TypeInfo);
    sub_1C37058(&ICSharpCode_SharpZipLib_GZip_GZipInputStream_TypeInfo);
    sub_1C37058(&System_IO_MemoryStream_TypeInfo);
    sub_1C37058(&System_Security_Cryptography_RijndaelManaged_TypeInfo);
    byte_4C42646 = 1;
  }
  v9 = (System_Security_Cryptography_RijndaelManaged_o *)sub_1C372A4(System_Security_Cryptography_RijndaelManaged_TypeInfo);
  System_Security_Cryptography_RijndaelManaged___ctor(v9, 0);
  if ( !v9 )
    sub_1C372B4(v10);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, const MethodInfo *))v9->klass->vtable._19_set_Padding.methodPtr)(
    v9,
    2,
    v9->klass->vtable._19_set_Padding.method);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, const MethodInfo *))v9->klass->vtable._17_set_Mode.methodPtr)(
    v9,
    1,
    v9->klass->vtable._17_set_Mode.method);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, const MethodInfo *))v9->klass->vtable._15_set_KeySize.methodPtr)(
    v9,
    256,
    v9->klass->vtable._15_set_KeySize.method);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, const MethodInfo *))v9->klass->vtable._7_set_BlockSize.methodPtr)(
    v9,
    256,
    v9->klass->vtable._7_set_BlockSize.method);
  v11 = ((__int64 (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, System_Byte_array *, System_Byte_array *, const MethodInfo *))v9->klass->vtable._23_CreateDecryptor.methodPtr)(
          v9,
          home,
          info,
          v9->klass->vtable._23_CreateDecryptor.method);
  if ( !data )
    sub_1C372B4(v11);
  v12 = (System_Security_Cryptography_ICryptoTransform_o *)v11;
  v13 = sub_1C37100(byte___TypeInfo, LODWORD(data->max_length));
  v14 = (System_IO_MemoryStream_o *)sub_1C372A4(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_64384132(v14, data, 0);
  v15 = (System_Security_Cryptography_CryptoStream_o *)sub_1C372A4(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v15, (System_IO_Stream_o *)v14, v12, 0, 0);
  if ( !v13 )
    sub_1C372B4(v16);
  if ( !v15 )
    sub_1C372B4(v16);
  v17 = ((__int64 (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v15->klass->vtable._31_Read.methodPtr)(
          v15,
          v13,
          0,
          *(unsigned int *)(v13 + 24),
          v15->klass->vtable._31_Read.method);
  if ( isCompress )
  {
    v18 = *(_DWORD *)(v13 + 24);
    if ( !v18 )
      sub_1C372BC(v17);
    if ( *(_BYTE *)(v13 + 32) == 66 )
    {
      if ( v18 <= 1 )
        sub_1C372BC(v17);
      if ( *(_BYTE *)(v13 + 33) == 90 )
      {
        v13 = 0;
        if ( !v14 )
          goto LABEL_24;
        goto LABEL_23;
      }
    }
    v19 = (System_IO_MemoryStream_o *)sub_1C372A4(System_IO_MemoryStream_TypeInfo);
    System_IO_MemoryStream___ctor(v19, 0);
    v20 = (System_IO_MemoryStream_o *)sub_1C372A4(System_IO_MemoryStream_TypeInfo);
    System_IO_MemoryStream___ctor_64384132(v20, (System_Byte_array *)v13, 0);
    v21 = (ICSharpCode_SharpZipLib_GZip_GZipInputStream_o *)sub_1C372A4(ICSharpCode_SharpZipLib_GZip_GZipInputStream_TypeInfo);
    ICSharpCode_SharpZipLib_GZip_GZipInputStream___ctor(v21, (System_IO_Stream_o *)v20, 0);
    v22 = sub_1C37100(byte___TypeInfo, 0x4000);
    v23 = v22;
    if ( !v22 )
      sub_1C372B4(0);
    if ( !v21 )
      sub_1C372B4(v22);
    while ( 1 )
    {
      v24 = ((__int64 (__fastcall *)(ICSharpCode_SharpZipLib_GZip_GZipInputStream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v21->klass->vtable._31_Read.methodPtr)(
              v21,
              v23,
              0,
              *(unsigned int *)(v23 + 24),
              v21->klass->vtable._31_Read.method);
      if ( (int)v24 <= 0 )
        break;
      if ( !v19 )
        sub_1C372B4(v24);
      ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v19->klass->vtable._34_Write.methodPtr)(
        v19,
        v23,
        0,
        (unsigned int)v24,
        v19->klass->vtable._34_Write.method);
    }
    v25 = ((__int64 (__fastcall *)(ICSharpCode_SharpZipLib_GZip_GZipInputStream_o *, const MethodInfo *))v21->klass->vtable._18_Close.methodPtr)(
            v21,
            v21->klass->vtable._18_Close.method);
    if ( !v19 )
      sub_1C372B4(v25);
    v26 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v19->klass->vtable._40_ToArray.methodPtr)(
            v19,
            v19->klass->vtable._40_ToArray.method);
    if ( !v20 )
      sub_1C372B4(v26);
    v13 = v26;
    ((void (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v20->klass->vtable._18_Close.methodPtr)(
      v20,
      v20->klass->vtable._18_Close.method);
    ((void (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v19->klass->vtable._18_Close.methodPtr)(
      v19,
      v19->klass->vtable._18_Close.method);
  }
  if ( v14 )
LABEL_23:
    ((void (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v14->klass->vtable._18_Close.methodPtr)(
      v14,
      v14->klass->vtable._18_Close.method);
LABEL_24:
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, const MethodInfo *))v15->klass->vtable._18_Close.methodPtr)(
    v15,
    v15->klass->vtable._18_Close.method);
  return (System_Byte_array *)v13;
}


Il2CppObject *CatAndMouseGame__MouseHomeMaster(
        System_Byte_array *data,
        System_Byte_array *home,
        System_Byte_array *info,
        bool isCompress,
        const MethodInfo *method)
{
  System_Byte_array *v9; // x19
  MasterDataUnpakcer_o *v10; // x20
  __int64 v11; // x0

  if ( (byte_4C42644 & 1) == 0 )
  {
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    sub_1C37058(&MasterDataUnpakcer_TypeInfo);
    byte_4C42644 = 1;
  }
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v9 = CatAndMouseGame__MouseHomeSub(data, home, info, isCompress, method);
  v10 = (MasterDataUnpakcer_o *)sub_1C372A4(MasterDataUnpakcer_TypeInfo);
  MasterDataUnpakcer___ctor(v10, 0);
  if ( !v10 )
    sub_1C372B4(v11);
  return MasterDataUnpakcer__Unpack_40961728(v10, v9, 0);
}


Il2CppObject *CatAndMouseGame__MouseHomeMsgPack(
        System_Byte_array *data,
        System_Byte_array *home,
        System_Byte_array *info,
        bool isCompress,
        const MethodInfo *method)
{
  MiniMessagePack_MiniMessagePacker_o *v9; // x23
  const MethodInfo *v10; // x4
  System_Byte_array *v11; // x0

  if ( (byte_4C42643 & 1) == 0 )
  {
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    sub_1C37058(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    byte_4C42643 = 1;
  }
  v9 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C372A4(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v9, 0);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v11 = CatAndMouseGame__MouseHomeSub(data, home, info, isCompress, v10);
  if ( !v9 )
    sub_1C372B4(v11);
  return MiniMessagePack_MiniMessagePacker__Unpack_39721084(v9, v11, 0);
}


System_Byte_array *CatAndMouseGame__MouseHomeSub(
        System_Byte_array *data,
        System_Byte_array *home,
        System_Byte_array *info,
        bool isCompress,
        const MethodInfo *method)
{
  System_Security_Cryptography_RijndaelManaged_o *v9; // x23
  __int64 v10; // x0
  System_Security_Cryptography_ICryptoTransform_o *v11; // x23
  System_IO_MemoryStream_o *v12; // x19
  System_Security_Cryptography_CryptoStream_o *v13; // x20
  __int64 v14; // x0
  System_IO_MemoryStream_o *v15; // x21
  ICSharpCode_SharpZipLib_GZip_GZipInputStream_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x23
  __int64 v19; // x0
  __int64 v20; // x0
  System_Byte_array *v21; // x23
  __int64 v22; // x0

  if ( (byte_4C42649 & 1) == 0 )
  {
    sub_1C37058(&byte___TypeInfo);
    sub_1C37058(&System_Security_Cryptography_CryptoStream_TypeInfo);
    sub_1C37058(&ICSharpCode_SharpZipLib_GZip_GZipInputStream_TypeInfo);
    sub_1C37058(&System_IO_MemoryStream_TypeInfo);
    sub_1C37058(&System_Security_Cryptography_RijndaelManaged_TypeInfo);
    byte_4C42649 = 1;
  }
  v9 = (System_Security_Cryptography_RijndaelManaged_o *)sub_1C372A4(System_Security_Cryptography_RijndaelManaged_TypeInfo);
  System_Security_Cryptography_RijndaelManaged___ctor(v9, 0);
  if ( !v9 )
    sub_1C372B4(v10);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, const MethodInfo *))v9->klass->vtable._19_set_Padding.methodPtr)(
    v9,
    2,
    v9->klass->vtable._19_set_Padding.method);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, const MethodInfo *))v9->klass->vtable._17_set_Mode.methodPtr)(
    v9,
    1,
    v9->klass->vtable._17_set_Mode.method);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, const MethodInfo *))v9->klass->vtable._15_set_KeySize.methodPtr)(
    v9,
    256,
    v9->klass->vtable._15_set_KeySize.method);
  ((void (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, __int64, const MethodInfo *))v9->klass->vtable._7_set_BlockSize.methodPtr)(
    v9,
    256,
    v9->klass->vtable._7_set_BlockSize.method);
  v11 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, System_Byte_array *, System_Byte_array *, const MethodInfo *))v9->klass->vtable._23_CreateDecryptor.methodPtr)(
                                                             v9,
                                                             home,
                                                             info,
                                                             v9->klass->vtable._23_CreateDecryptor.method);
  v12 = (System_IO_MemoryStream_o *)sub_1C372A4(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_64384132(v12, data, 0);
  v13 = (System_Security_Cryptography_CryptoStream_o *)sub_1C372A4(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v13, (System_IO_Stream_o *)v12, v11, 0, 0);
  if ( isCompress )
  {
    v15 = (System_IO_MemoryStream_o *)sub_1C372A4(System_IO_MemoryStream_TypeInfo);
    System_IO_MemoryStream___ctor(v15, 0);
    v16 = (ICSharpCode_SharpZipLib_GZip_GZipInputStream_o *)sub_1C372A4(ICSharpCode_SharpZipLib_GZip_GZipInputStream_TypeInfo);
    ICSharpCode_SharpZipLib_GZip_GZipInputStream___ctor(v16, (System_IO_Stream_o *)v13, 0);
    v17 = sub_1C37100(byte___TypeInfo, 0x4000);
    v18 = v17;
    if ( !v17 )
      sub_1C372B4(0);
    if ( !v16 )
      sub_1C372B4(v17);
    while ( 1 )
    {
      v19 = ((__int64 (__fastcall *)(ICSharpCode_SharpZipLib_GZip_GZipInputStream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v16->klass->vtable._31_Read.methodPtr)(
              v16,
              v18,
              0,
              *(unsigned int *)(v18 + 24),
              v16->klass->vtable._31_Read.method);
      if ( (int)v19 <= 0 )
        break;
      if ( !v15 )
        sub_1C372B4(v19);
      ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v15->klass->vtable._34_Write.methodPtr)(
        v15,
        v18,
        0,
        (unsigned int)v19,
        v15->klass->vtable._34_Write.method);
    }
    System_IO_Stream__Dispose((System_IO_Stream_o *)v16, 0);
    if ( !v15 )
      sub_1C372B4(v22);
    v21 = (System_Byte_array *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v15->klass->vtable._40_ToArray.methodPtr)(
                                 v15,
                                 v15->klass->vtable._40_ToArray.method);
    System_IO_Stream__Dispose((System_IO_Stream_o *)v15, 0);
  }
  else
  {
    if ( !data )
      sub_1C372B4(v14);
    v20 = sub_1C37100(byte___TypeInfo, LODWORD(data->max_length));
    v21 = (System_Byte_array *)v20;
    if ( !v20 )
      sub_1C372B4(0);
    if ( !v13 )
      sub_1C372B4(v20);
    ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v13->klass->vtable._31_Read.methodPtr)(
      v13,
      v20,
      0,
      *(unsigned int *)(v20 + 24),
      v13->klass->vtable._31_Read.method);
  }
  if ( v12 )
    ((void (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v12->klass->vtable._18_Close.methodPtr)(
      v12,
      v12->klass->vtable._18_Close.method);
  if ( v13 )
    ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, const MethodInfo *))v13->klass->vtable._18_Close.methodPtr)(
      v13,
      v13->klass->vtable._18_Close.method);
  return v21;
}


System_String_o *CatAndMouseGame__MouseInfo(System_Byte_array *data, const MethodInfo *method)
{
  System_Byte_array *v2; // x19
  System_Array_o *v3; // x20
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CatAndMouseGame_c *v7; // x8
  __int64 v8; // x21
  struct CatAndMouseGame_StaticFields *static_fields; // x0
  const MethodInfo *v10; // x4

  v2 = data;
  if ( (byte_4C4262C & 1) == 0 )
  {
    sub_1C37058(&byte___TypeInfo);
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    data = (System_Byte_array *)sub_1C37058(&StringLiteral_15367/*"W0Juh4cFJSYPkebJB9WpswNF51oa6Gm7"*/);
    byte_4C4262C = 1;
  }
  if ( !v2
    || (v3 = (System_Array_o *)sub_1C37100(byte___TypeInfo, (unsigned int)(LODWORD(v2->max_length) - 32)),
        (data = (System_Byte_array *)System_Text_Encoding__get_UTF8(0)) == 0) )
  {
    sub_1C372B4(data);
  }
  v4 = ((__int64 (__fastcall *)(System_Byte_array *, __int64, const MethodInfo *))data->obj.klass->vtable[18].methodPtr)(
         data,
         StringLiteral_15367/*"W0Juh4cFJSYPkebJB9WpswNF51oa6Gm7"*/,
         data->obj.klass->vtable[18].method);
  v7 = CatAndMouseGame_TypeInfo;
  v8 = v4;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v7 = CatAndMouseGame_TypeInfo;
  }
  static_fields = v7->static_fields;
  static_fields->infoData = (struct System_Byte_array *)v8;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->infoData, v8, v5, v6);
  System_Array__Copy_65223704(
    (System_Array_o *)v2,
    0,
    (System_Array_o *)CatAndMouseGame_TypeInfo->static_fields->InfoTop,
    0,
    32,
    0);
  System_Array__Copy_65223704((System_Array_o *)v2, 32, v3, 0, LODWORD(v2->max_length) - 32, 0);
  return CatAndMouseGame__MouseHome(
           (System_Byte_array *)v3,
           CatAndMouseGame_TypeInfo->static_fields->infoData,
           CatAndMouseGame_TypeInfo->static_fields->InfoTop,
           1,
           v10);
}


Il2CppObject *CatAndMouseGame__MouseInfoMsgPack(System_Byte_array *data, const MethodInfo *method)
{
  System_Byte_array *v2; // x19
  System_Array_o *v3; // x20
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CatAndMouseGame_c *v7; // x8
  __int64 v8; // x21
  struct CatAndMouseGame_StaticFields *static_fields; // x0
  const MethodInfo *v10; // x4

  v2 = data;
  if ( (byte_4C4262D & 1) == 0 )
  {
    sub_1C37058(&byte___TypeInfo);
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    data = (System_Byte_array *)sub_1C37058(&StringLiteral_15367/*"W0Juh4cFJSYPkebJB9WpswNF51oa6Gm7"*/);
    byte_4C4262D = 1;
  }
  if ( !v2
    || (v3 = (System_Array_o *)sub_1C37100(byte___TypeInfo, (unsigned int)(LODWORD(v2->max_length) - 32)),
        (data = (System_Byte_array *)System_Text_Encoding__get_UTF8(0)) == 0) )
  {
    sub_1C372B4(data);
  }
  v4 = ((__int64 (__fastcall *)(System_Byte_array *, __int64, const MethodInfo *))data->obj.klass->vtable[18].methodPtr)(
         data,
         StringLiteral_15367/*"W0Juh4cFJSYPkebJB9WpswNF51oa6Gm7"*/,
         data->obj.klass->vtable[18].method);
  v7 = CatAndMouseGame_TypeInfo;
  v8 = v4;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v7 = CatAndMouseGame_TypeInfo;
  }
  static_fields = v7->static_fields;
  static_fields->infoData = (struct System_Byte_array *)v8;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->infoData, v8, v5, v6);
  System_Array__Copy_65223704(
    (System_Array_o *)v2,
    0,
    (System_Array_o *)CatAndMouseGame_TypeInfo->static_fields->InfoTop,
    0,
    32,
    0);
  System_Array__Copy_65223704((System_Array_o *)v2, 32, v3, 0, LODWORD(v2->max_length) - 32, 0);
  return CatAndMouseGame__MouseHomeMsgPack(
           (System_Byte_array *)v3,
           CatAndMouseGame_TypeInfo->static_fields->infoData,
           CatAndMouseGame_TypeInfo->static_fields->InfoTop,
           1,
           v10);
}


void CatAndMouseGame__OtherHomeBuilding(
        System_String_o *data,
        System_Byte_array **home,
        System_Byte_array **info,
        const MethodInfo *method)
{
  CatAndMouseGame_c *v7; // x0
  char *keyCollection; // x0
  CatAndMouseGame_c *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Byte_array *v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Byte_array *v15; // x1
  __int64 v16; // x22
  System_Byte_array *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Byte_array *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  unsigned __int64 v23; // x8
  unsigned int v24; // w10
  __int64 v25; // x9
  System_Byte_array *v26; // x10
  System_Byte_array *v27; // x10
  CatAndMouseGame_c *v28; // x0
  System_Collections_Generic_Dictionary_object__object__o *v29; // x22
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  char *v32; // x23
  System_Byte_array *v33; // x1
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Byte_array *v36; // x1

  if ( (byte_4C42637 & 1) == 0 )
  {
    sub_1C37058(&byte_____TypeInfo);
    sub_1C37058(&byte___TypeInfo);
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__byte______Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__byte______ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__byte______get_Item__);
    byte_4C42637 = 1;
  }
  v7 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v7 = CatAndMouseGame_TypeInfo;
  }
  keyCollection = (char *)v7->static_fields->keyCollection;
  if ( !keyCollection )
    goto LABEL_38;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)keyCollection,
         (Il2CppObject *)data,
         (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__byte______ContainsKey__) )
  {
    v9 = CatAndMouseGame_TypeInfo;
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      v9 = CatAndMouseGame_TypeInfo;
    }
    keyCollection = (char *)v9->static_fields->keyCollection;
    if ( keyCollection )
    {
      keyCollection = (char *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                (System_Collections_Generic_Dictionary_object__object__o *)keyCollection,
                                (Il2CppObject *)data,
                                (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__byte______get_Item__);
      if ( keyCollection )
      {
        if ( !*((_DWORD *)keyCollection + 6) )
          goto LABEL_37;
        v12 = (System_Byte_array *)*((_QWORD *)keyCollection + 4);
        *home = v12;
        sub_1C36FFC((CGThumbnailListItem_o *)home, (int32_t)v12, v10, v11);
        keyCollection = (char *)CatAndMouseGame_TypeInfo->static_fields->keyCollection;
        if ( keyCollection )
        {
          keyCollection = (char *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                    (System_Collections_Generic_Dictionary_object__object__o *)keyCollection,
                                    (Il2CppObject *)data,
                                    (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__byte______get_Item__);
          if ( keyCollection )
          {
            if ( *((_DWORD *)keyCollection + 6) > 1u )
            {
              v15 = (System_Byte_array *)*((_QWORD *)keyCollection + 5);
              *info = v15;
              sub_1C36FFC((CGThumbnailListItem_o *)info, (int32_t)v15, v13, v14);
              return;
            }
LABEL_37:
            sub_1C372BC(keyCollection);
          }
        }
      }
    }
    goto LABEL_38;
  }
  keyCollection = (char *)System_Text_Encoding__get_UTF8(0);
  if ( !keyCollection )
    goto LABEL_38;
  v16 = (*(__int64 (__fastcall **)(char *, System_String_o *, _QWORD))(*(_QWORD *)keyCollection + 600LL))(
          keyCollection,
          data,
          *(_QWORD *)(*(_QWORD *)keyCollection + 608LL));
  v17 = (System_Byte_array *)sub_1C37100(byte___TypeInfo, 32);
  *home = v17;
  sub_1C36FFC((CGThumbnailListItem_o *)home, (int32_t)v17, v18, v19);
  v20 = (System_Byte_array *)sub_1C37100(byte___TypeInfo, 32);
  *info = v20;
  sub_1C36FFC((CGThumbnailListItem_o *)info, (int32_t)v20, v21, v22);
  if ( !v16 )
    goto LABEL_38;
  if ( (int)*(_QWORD *)(v16 + 24) >= 1 )
  {
    v23 = 0;
    v24 = *(_QWORD *)(v16 + 24);
    v25 = v16 + 32;
    do
    {
      if ( (v23 & 0x1F) != 0 )
      {
        if ( v23 >= v24 )
          goto LABEL_37;
        v26 = *info;
        if ( !*info )
          goto LABEL_38;
        if ( (v23 & 0x1F) >= LODWORD(v26->max_length) )
          goto LABEL_37;
        v26->m_Items[v23 & 0x1F] = *(_BYTE *)(v25 + v23);
      }
      else
      {
        if ( v23 >= v24 )
          goto LABEL_37;
        v27 = *home;
        if ( !*home )
          goto LABEL_38;
        if ( !LODWORD(v27->max_length) )
          goto LABEL_37;
        v27->m_Items[0] = *(_BYTE *)(v25 + v23);
      }
      v24 = *(_DWORD *)(v16 + 24);
    }
    while ( (__int64)++v23 < (int)v24 );
  }
  v28 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v28 = CatAndMouseGame_TypeInfo;
  }
  v29 = (System_Collections_Generic_Dictionary_object__object__o *)v28->static_fields->keyCollection;
  keyCollection = (char *)sub_1C37100(byte_____TypeInfo, 2);
  if ( !keyCollection )
    goto LABEL_38;
  v32 = keyCollection;
  if ( !*((_DWORD *)keyCollection + 6) )
    goto LABEL_37;
  v33 = *home;
  *((_QWORD *)keyCollection + 4) = *home;
  sub_1C36FFC((CGThumbnailListItem_o *)(keyCollection + 32), (int32_t)v33, v30, v31);
  if ( *((_DWORD *)v32 + 6) <= 1u )
    goto LABEL_37;
  v36 = *info;
  *((_QWORD *)v32 + 5) = *info;
  sub_1C36FFC((CGThumbnailListItem_o *)(v32 + 40), (int32_t)v36, v34, v35);
  if ( !v29 )
LABEL_38:
    sub_1C372B4(keyCollection);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)data,
    (Il2CppObject *)v32,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__byte______Add__);
}


void CatAndMouseGame__SetAssetbundleKeys(Il2CppObject *obj, const MethodInfo *method)
{
  CatAndMouseGame_c *v3; // x0
  void *assetbundleKeyCollection; // x0
  int v5; // w8
  void *v6; // x19
  unsigned int v7; // w21
  __int64 v8; // x23

  if ( (byte_4C42635 & 1) == 0 )
  {
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_1C37058(&Method_JsonManager_DeserializeArray_CatAndMouseGame_AssetbundleKeyEntity___);
    sub_1C37058(&JsonManager_TypeInfo);
    byte_4C42635 = 1;
  }
  v3 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v3 = CatAndMouseGame_TypeInfo;
  }
  assetbundleKeyCollection = v3->static_fields->assetbundleKeyCollection;
  if ( !assetbundleKeyCollection )
    goto LABEL_18;
  System_Collections_Generic_Dictionary_object__object___Clear(
    (System_Collections_Generic_Dictionary_object__object__o *)assetbundleKeyCollection,
    (const MethodInfo_34637B8 *)Method_System_Collections_Generic_Dictionary_string__string__Clear__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  assetbundleKeyCollection = JsonManager__DeserializeArray_object_(
                               obj,
                               (const MethodInfo_31570C4 *)Method_JsonManager_DeserializeArray_CatAndMouseGame_AssetbundleKeyEntity___);
  if ( !assetbundleKeyCollection )
    goto LABEL_18;
  v5 = *((_DWORD *)assetbundleKeyCollection + 6);
  v6 = assetbundleKeyCollection;
  if ( v5 >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= v5 )
        sub_1C372BC(assetbundleKeyCollection);
      assetbundleKeyCollection = CatAndMouseGame_TypeInfo;
      v8 = *((_QWORD *)v6 + (int)v7 + 4);
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
        assetbundleKeyCollection = CatAndMouseGame_TypeInfo;
      }
      if ( !v8 )
        break;
      assetbundleKeyCollection = *(void **)(*((_QWORD *)assetbundleKeyCollection + 23) + 96LL);
      if ( !assetbundleKeyCollection )
        break;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        (System_Collections_Generic_Dictionary_object__object__o *)assetbundleKeyCollection,
        *(Il2CppObject **)(v8 + 16),
        *(Il2CppObject **)(v8 + 24),
        (const MethodInfo_346361C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
      v5 = *((_DWORD *)v6 + 6);
      if ( (int)++v7 >= v5 )
        return;
    }
LABEL_18:
    sub_1C372B4(assetbundleKeyCollection);
  }
}


void CatAndMouseGame__SixHomeBuilding(System_String_o *data, const MethodInfo *method)
{
  void *UTF8; // x0
  void *v4; // x20
  __int64 v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  CatAndMouseGame_c *v8; // x8
  __int64 v9; // x20
  struct CatAndMouseGame_StaticFields *static_fields; // x0
  System_Text_Encoding_o *v11; // x20
  __int64 v12; // x0
  struct CatAndMouseGame_StaticFields *v13; // x8
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C4263C & 1) == 0 )
  {
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    byte_4C4263C = 1;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0);
  if ( !data )
    goto LABEL_9;
  v4 = UTF8;
  UTF8 = System_String__Substring(data, 32, 0);
  if ( !v4 )
    goto LABEL_9;
  v5 = (*(__int64 (__fastcall **)(void *, void *, _QWORD))(*(_QWORD *)v4 + 600LL))(
         v4,
         UTF8,
         *(_QWORD *)(*(_QWORD *)v4 + 608LL));
  v8 = CatAndMouseGame_TypeInfo;
  v9 = v5;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v8 = CatAndMouseGame_TypeInfo;
  }
  static_fields = v8->static_fields;
  static_fields->sideData = (struct System_Byte_array *)v9;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->sideData, v9, v6, v7);
  v11 = System_Text_Encoding__get_UTF8(0);
  UTF8 = System_String__Substring_63607580(data, 0, 32, 0);
  if ( !v11 )
LABEL_9:
    sub_1C372B4(UTF8);
  v12 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, void *, const MethodInfo *))v11->klass->vtable._18_GetBytes.methodPtr)(
          v11,
          UTF8,
          v11->klass->vtable._18_GetBytes.method);
  v13 = CatAndMouseGame_TypeInfo->static_fields;
  v13->sideTop = (struct System_Byte_array *)v12;
  sub_1C36FFC((CGThumbnailListItem_o *)&v13->sideTop, v12, v14, v15);
}


void CatAndMouseGame__ThirdHomeBuilding(System_String_o *data, const MethodInfo *method)
{
  bool isPlaying; // w20
  _QWORD *UTF8; // x0
  __int64 v5; // x0
  __int64 v6; // x19
  CatAndMouseGame_c *v7; // x0
  unsigned __int64 i; // x20
  __int64 v9; // x8
  __int64 v10; // x8
  unsigned int v11; // w9
  char v12; // w10

  if ( (byte_4C4262E & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    sub_1C37058(&StringLiteral_21156/*"kzdMtpmzqCHAfx00saU1gIhTjYCuOD1JstqtisXsGYqRVcqrHRydj3k6vJCySu3g"*/);
    byte_4C4262E = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  isPlaying = UnityEngine_Application__get_isPlaying(0);
  UTF8 = System_Text_Encoding__get_UTF8(0);
  if ( !UTF8 )
    goto LABEL_27;
  if ( isPlaying )
    v5 = (*(__int64 (__fastcall **)(_QWORD *, System_String_o *, _QWORD))(*UTF8 + 600LL))(
           UTF8,
           data,
           *(_QWORD *)(*UTF8 + 608LL));
  else
    v5 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(*UTF8 + 600LL))(
           UTF8,
           StringLiteral_21156/*"kzdMtpmzqCHAfx00saU1gIhTjYCuOD1JstqtisXsGYqRVcqrHRydj3k6vJCySu3g"*/,
           *(_QWORD *)(*UTF8 + 608LL));
  v6 = v5;
  v7 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v7 = CatAndMouseGame_TypeInfo;
  }
  System_Array__Copy_65223704((System_Array_o *)v6, 0, (System_Array_o *)v7->static_fields->BattleKey, 0, 32, 0);
  if ( !v6 )
LABEL_27:
    sub_1C372B4(UTF8);
  System_Array__Copy_65223704(
    (System_Array_o *)v6,
    32,
    (System_Array_o *)CatAndMouseGame_TypeInfo->static_fields->BattleIV,
    0,
    *(_DWORD *)(v6 + 24) - 32,
    0);
  if ( *(int *)(v6 + 24) >= 1 )
  {
    for ( i = 0; (__int64)i < *(int *)(v6 + 24); ++i )
    {
      UTF8 = &CatAndMouseGame_TypeInfo->_1.image;
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
        UTF8 = &CatAndMouseGame_TypeInfo->_1.image;
      }
      v9 = UTF8[23];
      if ( (i & 1) != 0 )
      {
        if ( i >= *(unsigned int *)(v6 + 24) )
          goto LABEL_26;
        v10 = *(_QWORD *)(v9 + 32);
        if ( !v10 )
          goto LABEL_27;
        v11 = (unsigned int)i >> 1;
        if ( (unsigned int)i >> 1 >= *(_DWORD *)(v10 + 24) )
LABEL_26:
          sub_1C372BC(UTF8);
      }
      else
      {
        if ( i >= *(unsigned int *)(v6 + 24) )
          goto LABEL_26;
        v10 = *(_QWORD *)(v9 + 40);
        if ( !v10 )
          goto LABEL_27;
        v11 = (unsigned int)i >> 1;
        if ( (unsigned int)i >> 1 >= *(_DWORD *)(v10 + 24) )
          goto LABEL_26;
      }
      v12 = *(_BYTE *)(v6 + 32 + i);
      *(_BYTE *)(v10 + v11 + 32) = v12;
    }
  }
}


void CatAndMouseGame_AssetbundleKeyEntity___ctor(
        CatAndMouseGame_AssetbundleKeyEntity_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CatAndMouseGame_DataDecryptor___ctor(
        CatAndMouseGame_DataDecryptor_o *this,
        System_Security_Cryptography_ICryptoTransform_o *decryptor,
        System_Byte_array *data,
        bool isCompress,
        const MethodInfo *method)
{
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x0
  System_IO_MemoryStream_o *v12; // x0
  int32_t max_length; // w1
  struct System_IO_MemoryStream_o *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_IO_Stream_o *memoryStream; // x21
  System_Security_Cryptography_CryptoStream_o *v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4C4264A & 1) == 0 )
  {
    sub_1C37058(&System_Security_Cryptography_CryptoStream_TypeInfo);
    sub_1C37058(&System_IO_MemoryStream_TypeInfo);
    byte_4C4264A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.data = data;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)data, v9, v10);
  this->fields.isCompress = isCompress;
  if ( !data )
    sub_1C372B4(v11);
  v12 = (System_IO_MemoryStream_o *)sub_1C372A4(System_IO_MemoryStream_TypeInfo);
  max_length = data->max_length;
  v14 = v12;
  System_IO_MemoryStream___ctor_64383756(v12, max_length, 0);
  this->fields.memoryStream = v14;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.memoryStream, (int32_t)v14, v15, v16);
  memoryStream = (System_IO_Stream_o *)this->fields.memoryStream;
  v18 = (System_Security_Cryptography_CryptoStream_o *)sub_1C372A4(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v18, memoryStream, decryptor, 1, 0);
  this->fields.cryptoStream = v18;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.cryptoStream, (int32_t)v18, v19, v20);
}


void CatAndMouseGame_DataDecryptor__ApplyWrite(CatAndMouseGame_DataDecryptor_o *this, const MethodInfo *method)
{
  CatAndMouseGame_DataDecryptor_o *v2; // x19
  struct System_Byte_array *data; // x1
  int max_length; // w21
  int v5; // w20
  int v6; // w8
  int v7; // w23
  System_IO_MemoryStream_o *v8; // x21
  CatAndMouseGame_DataDecryptor_o **p_memoryStreamBZip; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_IO_Stream_o *memoryStream; // x21
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *v13; // x22
  CGThumbnailListItem_o *p_bzipStream; // x19
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  CatAndMouseGame_DataDecryptor_o *i; // x21
  int v18; // w0
  __int64 v19; // x3

  v2 = this;
  if ( (byte_4C4264B & 1) == 0 )
  {
    sub_1C37058(&ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo);
    sub_1C37058(&byte___TypeInfo);
    this = (CatAndMouseGame_DataDecryptor_o *)sub_1C37058(&System_IO_MemoryStream_TypeInfo);
    byte_4C4264B = 1;
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
      v5 = 0;
      v6 = data->max_length;
      do
      {
        v7 = v6 - 0x4000;
        (*(void (**)(void))&this->klass[2]._1.byval_arg.bits)();
        this = (CatAndMouseGame_DataDecryptor_o *)v2->fields.cryptoStream;
        if ( !this )
          break;
        (*(void (__fastcall **)(CatAndMouseGame_DataDecryptor_o *, size_t))&this->klass[1]._2.cctor_finished)(
          this,
          this->klass[1]._2.cctor_thread);
        this = (CatAndMouseGame_DataDecryptor_o *)v2->fields.cryptoStream;
        v5 += 0x4000;
        if ( v5 >= max_length )
          goto LABEL_11;
        v6 = v7;
      }
      while ( this );
    }
LABEL_21:
    sub_1C372B4(this);
  }
LABEL_11:
  if ( !this )
    goto LABEL_21;
  System_Security_Cryptography_CryptoStream__FlushFinalBlock((System_Security_Cryptography_CryptoStream_o *)this, 0);
  if ( v2->fields.isCompress )
  {
    this = (CatAndMouseGame_DataDecryptor_o *)v2->fields.memoryStream;
    if ( this )
    {
      ((void (__fastcall *)(CatAndMouseGame_DataDecryptor_o *, _QWORD, _QWORD, Il2CppMethodPointer))this->klass[1].vtable._3_ToString.method)(
        this,
        0,
        0,
        this->klass[1].vtable._4_Dispose.methodPtr);
      v8 = (System_IO_MemoryStream_o *)sub_1C372A4(System_IO_MemoryStream_TypeInfo);
      System_IO_MemoryStream___ctor(v8, 0);
      v2->fields.memoryStreamBZip = v8;
      p_memoryStreamBZip = (CatAndMouseGame_DataDecryptor_o **)&v2->fields.memoryStreamBZip;
      sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.memoryStreamBZip, (int32_t)v8, v10, v11);
      memoryStream = (System_IO_Stream_o *)v2->fields.memoryStream;
      v13 = (ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *)sub_1C372A4(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo);
      ICSharpCode_SharpZipLib_BZip2_BZip2InputStream___ctor(v13, memoryStream, 0);
      v2->fields.bzipStream = v13;
      p_bzipStream = (CGThumbnailListItem_o *)&v2->fields.bzipStream;
      sub_1C36FFC(p_bzipStream, (int32_t)v13, v15, v16);
      this = (CatAndMouseGame_DataDecryptor_o *)sub_1C37100(byte___TypeInfo, 0x4000);
      if ( this )
      {
        for ( i = this;
              ;
              (*(void (__fastcall **)(CatAndMouseGame_DataDecryptor_o *, CatAndMouseGame_DataDecryptor_o *, _QWORD, __int64, void *))&this->klass[2]._1.byval_arg.bits)(
                this,
                i,
                0,
                v19,
                this->klass[2]._1.this_arg.data) )
        {
          this = (CatAndMouseGame_DataDecryptor_o *)p_bzipStream->klass;
          if ( !p_bzipStream->klass )
            break;
          v18 = ((__int64 (__fastcall *)(CatAndMouseGame_DataDecryptor_o *, CatAndMouseGame_DataDecryptor_o *, _QWORD, _QWORD, void *))this->klass[1].vtable._5_Dispose.method)(
                  this,
                  i,
                  0,
                  *(unsigned int *)&i->fields.isCompress,
                  this->klass[2]._1.image);
          if ( v18 <= 0 )
            return;
          v19 = (unsigned int)v18;
          this = *p_memoryStreamBZip;
          if ( !*p_memoryStreamBZip )
            break;
        }
      }
    }
    goto LABEL_21;
  }
}


void CatAndMouseGame_DataDecryptor__Dispose(CatAndMouseGame_DataDecryptor_o *this, const MethodInfo *method)
{
  if ( (byte_4C4264D & 1) == 0 )
  {
    sub_1C37058(&System_GC_TypeInfo);
    byte_4C4264D = 1;
  }
  ((void (__fastcall *)(CatAndMouseGame_DataDecryptor_o *, __int64, const MethodInfo *))this->klass->vtable._5_Dispose.methodPtr)(
    this,
    1,
    this->klass->vtable._5_Dispose.method);
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__SuppressFinalize((Il2CppObject *)this, 0);
}


void CatAndMouseGame_DataDecryptor__Dispose_41240816(
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
        System_IO_Stream__Dispose(memoryStream, 0);
        this->fields.memoryStream = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.memoryStream, 0, v5, v6);
      }
      cryptoStream = (System_IO_Stream_o *)this->fields.cryptoStream;
      if ( cryptoStream )
      {
        System_IO_Stream__Dispose(cryptoStream, 0);
        this->fields.cryptoStream = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.cryptoStream, 0, v8, v9);
      }
      memoryStreamBZip = (System_IO_Stream_o *)this->fields.memoryStreamBZip;
      if ( memoryStreamBZip )
      {
        System_IO_Stream__Dispose(memoryStreamBZip, 0);
        this->fields.memoryStreamBZip = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.memoryStreamBZip, 0, v11, v12);
      }
      bzipStream = (System_IO_Stream_o *)this->fields.bzipStream;
      if ( bzipStream )
      {
        System_IO_Stream__Dispose(bzipStream, 0);
        this->fields.bzipStream = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.bzipStream, 0, v14, v15);
      }
    }
    this->fields.isDisposed = 1;
  }
}


System_Byte_array *CatAndMouseGame_DataDecryptor__ToByteArray(
        CatAndMouseGame_DataDecryptor_o *this,
        const MethodInfo *method)
{
  long double inited; // q0
  struct System_IO_MemoryStream_o *memoryStreamBZip; // x0
  _QWORD *v5; // x0
  struct System_IO_MemoryStream_o *v6; // x8
  int v7; // w20
  struct System_IO_MemoryStream_o *v8; // x8
  System_IO_MemoryStream_c *klass; // x9
  __int64 (__fastcall *methodPtr)(struct System_IO_MemoryStream_o *, const MethodInfo *); // x2
  const MethodInfo *v11; // x1
  struct System_IO_MemoryStream_o *memoryStream; // x0
  struct System_IO_MemoryStream_o *v13; // x8
  int v14; // w20
  __int64 v15; // x10
  int v16; // w11
  System_Byte_array *result; // x0
  _QWORD *v18; // x19
  __int64 v19; // x8
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x19

  if ( (byte_4C4264C & 1) == 0 )
  {
    sub_1C37058(&byte___TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Empty_byte___);
    byte_4C4264C = 1;
  }
  if ( !this->fields.isCompress )
  {
    memoryStream = this->fields.memoryStream;
    if ( memoryStream )
    {
      v5 = (_QWORD *)((__int64 (__fastcall *)(struct System_IO_MemoryStream_o *, const MethodInfo *))memoryStream->klass->vtable._38_get_Capacity.methodPtr)(
                       memoryStream,
                       memoryStream->klass->vtable._38_get_Capacity.method);
      v13 = this->fields.memoryStream;
      if ( v13 )
      {
        v14 = (int)v5;
        v5 = ((_QWORD *(__fastcall *)(struct System_IO_MemoryStream_o *__return_ptr, struct System_IO_MemoryStream_o *, const MethodInfo *))v13->klass->vtable._11_get_Length.methodPtr)(
               v13,
               this->fields.memoryStream,
               v13->klass->vtable._11_get_Length.method);
        v8 = this->fields.memoryStream;
        if ( v8 )
        {
          v15 = (__int64)v5 + 510;
          v16 = v14 + 255;
          if ( (__int64)v5 + 255 >= 0 )
            v15 = (__int64)v5 + 255;
          klass = v8->klass;
          if ( v16 < 0 )
            v16 = v14 + 510;
          if ( (__int64)v16 >> 8 != v15 >> 8 )
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
    v5 = (_QWORD *)((__int64 (__fastcall *)(struct System_IO_MemoryStream_o *, const MethodInfo *))memoryStreamBZip->klass->vtable._38_get_Capacity.methodPtr)(
                     memoryStreamBZip,
                     memoryStreamBZip->klass->vtable._38_get_Capacity.method);
    v6 = this->fields.memoryStreamBZip;
    if ( v6 )
    {
      v7 = (int)v5;
      v5 = ((_QWORD *(__fastcall *)(struct System_IO_MemoryStream_o *__return_ptr, struct System_IO_MemoryStream_o *, const MethodInfo *))v6->klass->vtable._11_get_Length.methodPtr)(
             v6,
             this->fields.memoryStreamBZip,
             v6->klass->vtable._11_get_Length.method);
      v8 = this->fields.memoryStreamBZip;
      if ( v8 )
      {
        klass = v8->klass;
        if ( v5 != (_QWORD *)v7 )
        {
LABEL_17:
          methodPtr = (__int64 (__fastcall *)(struct System_IO_MemoryStream_o *, const MethodInfo *))klass->vtable._40_ToArray.methodPtr;
          v11 = klass->vtable._40_ToArray.method;
          return (System_Byte_array *)methodPtr(v8, v11);
        }
LABEL_8:
        methodPtr = (__int64 (__fastcall *)(struct System_IO_MemoryStream_o *, const MethodInfo *))klass->vtable._37_GetBuffer.methodPtr;
        v11 = klass->vtable._37_GetBuffer.method;
        return (System_Byte_array *)methodPtr(v8, v11);
      }
    }
LABEL_32:
    sub_1C372B4(v5);
  }
  v18 = Method_System_Linq_Enumerable_Empty_byte___;
  v19 = *((_QWORD *)Method_System_Linq_Enumerable_Empty_byte___ + 7);
  if ( !v19 )
  {
    sub_1C877C8(Method_System_Linq_Enumerable_Empty_byte___);
    v19 = v18[7];
  }
  v20 = *(_QWORD *)(v19 + 16);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1C8776C(inited);
  if ( !*(_DWORD *)(v20 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v20);
  v21 = *(_QWORD *)(v18[7] + 16LL);
  if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
    v21 = sub_1C8776C(inited);
  v22 = **(_QWORD **)(v21 + 184);
  if ( v22 )
  {
    result = (System_Byte_array *)sub_1C37194(v22, byte___TypeInfo);
    if ( result )
      return result;
    sub_1C37574(v22);
  }
  return 0;
}