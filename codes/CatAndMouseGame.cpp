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
  __int64 v57; // x1
  __int64 v58; // x19
  unsigned __int64 v59; // x8
  unsigned int v60; // w10
  struct CatAndMouseGame_StaticFields *v61; // x11
  struct System_Byte_array *stageTop; // x10
  unsigned int v63; // w11
  uint8_t v64; // w12
  struct System_Byte_array *dataItem; // x11
  int v66; // w8
  unsigned __int64 v67; // x9
  __int64 v68; // x10
  struct CatAndMouseGame_StaticFields *v69; // x12
  struct System_Byte_array *baseData; // x13
  unsigned __int64 v71; // x12
  struct System_Byte_array *v72; // x13
  __int64 v73; // x12
  struct System_Byte_array *v74; // x12
  __int64 v75; // x11
  char *v76; // x11
  __int64 v77; // x12
  int v78; // w13
  struct System_Byte_array *baseTop; // x13
  unsigned __int64 v80; // x12
  struct System_Byte_array *v81; // x13
  __int64 v82; // x12
  struct System_Byte_array *v83; // x12
  __int64 v84; // x11

  if ( (byte_4C563BD & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Application_TypeInfo);
    sub_1C3E564(&byte___TypeInfo);
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__byte_______ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_Dictionary_string__byte______TypeInfo);
    sub_1C3E564(&StringLiteral_21174/*"kzdMtpmzqCHAfx00saU1gIhTjYCuOD1JstqtisXsGYqRVcqrHRydj3k6vJCySu3g"*/);
    sub_1C3E564(&StringLiteral_10356/*"PFBs0eIuunoxKkCcLbqDVerU1rShhS276SAL3A8tFLUfGvtz3F3FFeKELIk3Nvi4"*/);
    byte_4C563BD = 1;
  }
  v1 = (struct System_Byte_array *)sub_1C3E60C(byte___TypeInfo, 32);
  CatAndMouseGame_TypeInfo->static_fields->ownerTop = v1;
  sub_1C3E508((CGThumbnailListItem_o *)CatAndMouseGame_TypeInfo->static_fields, (int32_t)v1, v2, v3);
  v4 = sub_1C3E60C(byte___TypeInfo, 32);
  static_fields = CatAndMouseGame_TypeInfo->static_fields;
  static_fields->ownerData = (struct System_Byte_array *)v4;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->ownerData, v4, v6, v7);
  v8 = sub_1C3E60C(byte___TypeInfo, 32);
  v9 = CatAndMouseGame_TypeInfo->static_fields;
  v9->InfoTop = (struct System_Byte_array *)v8;
  sub_1C3E508((CGThumbnailListItem_o *)&v9->InfoTop, v8, v10, v11);
  v12 = sub_1C3E60C(byte___TypeInfo, 32);
  v13 = CatAndMouseGame_TypeInfo->static_fields;
  v13->infoData = (struct System_Byte_array *)v12;
  sub_1C3E508((CGThumbnailListItem_o *)&v13->infoData, v12, v14, v15);
  v16 = sub_1C3E60C(byte___TypeInfo, 32);
  v17 = CatAndMouseGame_TypeInfo->static_fields;
  v17->stageTop = (struct System_Byte_array *)v16;
  sub_1C3E508((CGThumbnailListItem_o *)&v17->stageTop, v16, v18, v19);
  v20 = sub_1C3E60C(byte___TypeInfo, 32);
  v21 = CatAndMouseGame_TypeInfo->static_fields;
  v21->stageData = (struct System_Byte_array *)v20;
  sub_1C3E508((CGThumbnailListItem_o *)&v21->stageData, v20, v22, v23);
  v24 = sub_1C3E60C(byte___TypeInfo, 32);
  v25 = CatAndMouseGame_TypeInfo->static_fields;
  v25->baseTop = (struct System_Byte_array *)v24;
  sub_1C3E508((CGThumbnailListItem_o *)&v25->baseTop, v24, v26, v27);
  v28 = sub_1C3E60C(byte___TypeInfo, 32);
  v29 = CatAndMouseGame_TypeInfo->static_fields;
  v29->baseData = (struct System_Byte_array *)v28;
  sub_1C3E508((CGThumbnailListItem_o *)&v29->baseData, v28, v30, v31);
  v32 = sub_1C3E60C(byte___TypeInfo, 32);
  v33 = CatAndMouseGame_TypeInfo->static_fields;
  v33->BattleKey = (struct System_Byte_array *)v32;
  sub_1C3E508((CGThumbnailListItem_o *)&v33->BattleKey, v32, v34, v35);
  v36 = sub_1C3E60C(byte___TypeInfo, 32);
  v37 = CatAndMouseGame_TypeInfo->static_fields;
  v37->BattleIV = (struct System_Byte_array *)v36;
  sub_1C3E508((CGThumbnailListItem_o *)&v37->BattleIV, v36, v38, v39);
  v40 = sub_1C3E60C(byte___TypeInfo, 32);
  v41 = CatAndMouseGame_TypeInfo->static_fields;
  v41->sideTop = (struct System_Byte_array *)v40;
  sub_1C3E508((CGThumbnailListItem_o *)&v41->sideTop, v40, v42, v43);
  v44 = sub_1C3E60C(byte___TypeInfo, 32);
  v45 = CatAndMouseGame_TypeInfo->static_fields;
  v45->sideData = (struct System_Byte_array *)v44;
  sub_1C3E508((CGThumbnailListItem_o *)&v45->sideData, v44, v46, v47);
  v48 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v48,
    (const MethodInfo_3474E30 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  v49 = CatAndMouseGame_TypeInfo->static_fields;
  v49->assetbundleKeyCollection = (struct System_Collections_Generic_Dictionary_string__string__o *)v48;
  sub_1C3E508((CGThumbnailListItem_o *)&v49->assetbundleKeyCollection, (int32_t)v48, v50, v51);
  v52 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_string__byte______TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v52,
    (const MethodInfo_3474E30 *)Method_System_Collections_Generic_Dictionary_string__byte_______ctor__);
  v53 = CatAndMouseGame_TypeInfo->static_fields;
  v53->keyCollection = (struct System_Collections_Generic_Dictionary_string__byte______o *)v52;
  sub_1C3E508((CGThumbnailListItem_o *)&v53->keyCollection, (int32_t)v52, v54, v55);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( !UnityEngine_Application__get_isPlaying(0) )
  {
    UTF8 = System_Text_Encoding__get_UTF8(0);
    if ( !UTF8 )
      goto LABEL_53;
    v58 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
            UTF8,
            StringLiteral_21174/*"kzdMtpmzqCHAfx00saU1gIhTjYCuOD1JstqtisXsGYqRVcqrHRydj3k6vJCySu3g"*/,
            UTF8->klass->vtable._18_GetBytes.method);
    UTF8 = System_Text_Encoding__get_UTF8(0);
    if ( !UTF8 )
      goto LABEL_53;
    UTF8 = (System_Text_Encoding_o *)((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
                                       UTF8,
                                       StringLiteral_10356/*"PFBs0eIuunoxKkCcLbqDVerU1rShhS276SAL3A8tFLUfGvtz3F3FFeKELIk3Nvi4"*/,
                                       UTF8->klass->vtable._18_GetBytes.method);
    if ( !v58 )
      goto LABEL_53;
    if ( (int)*(_QWORD *)(v58 + 24) >= 1 )
    {
      v59 = 0;
      v60 = *(_QWORD *)(v58 + 24);
      do
      {
        v61 = CatAndMouseGame_TypeInfo->static_fields;
        if ( (v59 & 1) != 0 )
        {
          if ( v59 >= v60 )
            goto LABEL_52;
          stageTop = v61->stageTop;
          if ( !stageTop )
            goto LABEL_53;
          v63 = (unsigned int)v59 >> 1;
          if ( (unsigned int)v59 >> 1 >= LODWORD(stageTop->max_length) )
LABEL_52:
            sub_1C3E7C8(UTF8, v57);
        }
        else
        {
          if ( v59 >= v60 )
            goto LABEL_52;
          stageTop = v61->stageData;
          if ( !stageTop )
            goto LABEL_53;
          v63 = (unsigned int)v59 >> 1;
          if ( (unsigned int)v59 >> 1 >= LODWORD(stageTop->max_length) )
            goto LABEL_52;
        }
        v64 = *(_BYTE *)(v58 + 32 + v59++);
        stageTop->m_Items[v63] = v64;
        v60 = *(_DWORD *)(v58 + 24);
      }
      while ( (__int64)v59 < (int)v60 );
    }
    if ( !UTF8 )
LABEL_53:
      sub_1C3E7C0(UTF8, v57);
    dataItem = (struct System_Byte_array *)UTF8->fields.dataItem;
    if ( (int)dataItem >= 4 )
    {
      v66 = 0;
      v67 = 0;
      v68 = 0;
      do
      {
        v69 = CatAndMouseGame_TypeInfo->static_fields;
        if ( (v68 & 1) != 0 )
        {
          if ( v67 >= (unsigned int)dataItem )
            goto LABEL_52;
          baseTop = v69->baseTop;
          if ( !baseTop )
            goto LABEL_53;
          v80 = v66 & 0xFFFFFFFFFFFFFFFCLL;
          if ( (unsigned int)v80 >= LODWORD(baseTop->max_length) )
            goto LABEL_52;
          baseTop->m_Items[v80] = *(&UTF8->fields.m_deserializedFromEverett + v67);
          if ( v67 + 1 >= LODWORD(UTF8->fields.dataItem) )
            goto LABEL_52;
          v81 = CatAndMouseGame_TypeInfo->static_fields->baseTop;
          if ( !v81 )
            goto LABEL_53;
          v82 = (int)v80 | 1LL;
          if ( (unsigned int)v82 >= LODWORD(v81->max_length) )
            goto LABEL_52;
          v81->m_Items[v82] = *(&UTF8->fields.m_isReadOnly + v67);
          if ( v67 + 2 >= LODWORD(UTF8->fields.dataItem) )
            goto LABEL_52;
          v83 = CatAndMouseGame_TypeInfo->static_fields->baseTop;
          if ( !v83 )
            goto LABEL_53;
          v84 = v66 | 2LL;
          if ( (unsigned int)v84 >= LODWORD(v83->max_length) )
            goto LABEL_52;
          v83->m_Items[v84] = *(&UTF8->fields.m_isReadOnly + v67 + 1);
          if ( v67 + 3 >= LODWORD(UTF8->fields.dataItem) )
            goto LABEL_52;
          dataItem = CatAndMouseGame_TypeInfo->static_fields->baseTop;
          if ( !dataItem )
            goto LABEL_53;
          v78 = v66 | 3;
          if ( (v66 | 3u) >= LODWORD(dataItem->max_length) )
            goto LABEL_52;
          v77 = (4 * v68) | 3;
        }
        else
        {
          if ( v67 >= (unsigned int)dataItem )
            goto LABEL_52;
          baseData = v69->baseData;
          if ( !baseData )
            goto LABEL_53;
          v71 = v66 & 0xFFFFFFFFFFFFFFFCLL;
          if ( (unsigned int)v71 >= LODWORD(baseData->max_length) )
            goto LABEL_52;
          baseData->m_Items[v71] = *(&UTF8->fields.m_deserializedFromEverett + v67);
          if ( v67 + 1 >= LODWORD(UTF8->fields.dataItem) )
            goto LABEL_52;
          v72 = CatAndMouseGame_TypeInfo->static_fields->baseData;
          if ( !v72 )
            goto LABEL_53;
          v73 = (int)v71 | 1LL;
          if ( (unsigned int)v73 >= LODWORD(v72->max_length) )
            goto LABEL_52;
          v72->m_Items[v73] = *(&UTF8->fields.m_isReadOnly + v67);
          if ( v67 + 2 >= LODWORD(UTF8->fields.dataItem) )
            goto LABEL_52;
          v74 = CatAndMouseGame_TypeInfo->static_fields->baseData;
          if ( !v74 )
            goto LABEL_53;
          v75 = v66 | 2LL;
          if ( (unsigned int)v75 >= LODWORD(v74->max_length) )
            goto LABEL_52;
          v76 = (char *)v74 + v75;
          v77 = v67 + 3;
          v76[32] = *(&UTF8->fields.m_isReadOnly + v67 + 1);
          if ( v67 + 3 >= LODWORD(UTF8->fields.dataItem) )
            goto LABEL_52;
          dataItem = CatAndMouseGame_TypeInfo->static_fields->baseData;
          if ( !dataItem )
            goto LABEL_53;
          v78 = v66 | 3;
          if ( (v66 | 3u) >= LODWORD(dataItem->max_length) )
            goto LABEL_52;
        }
        ++v68;
        v67 += 4LL;
        dataItem->m_Items[v78] = *(&UTF8->fields.m_deserializedFromEverett + v77);
        v66 += 2;
        LODWORD(dataItem) = UTF8->fields.dataItem;
      }
      while ( v68 < (int)dataItem / 4 );
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
  __int64 v6; // x1
  __int64 v7; // x22
  __int64 v8; // x20
  __int64 v9; // x23
  System_Security_Cryptography_TripleDESCryptoServiceProvider_o *v10; // x24
  System_IO_MemoryStream_o *v11; // x19
  __int64 v12; // x0
  __int64 v13; // x1
  System_Security_Cryptography_ICryptoTransform_o *v14; // x23
  System_Security_Cryptography_CryptoStream_o *v15; // x20
  __int64 v16; // x0
  __int64 v17; // x1
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *v18; // x25
  __int64 v19; // x0
  __int64 v20; // x1
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  System_Security_Cryptography_CryptoStream_c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x1
  System_Byte_array *v33; // x22
  System_IO_MemoryStream_c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0

  if ( (byte_4C563BE & 1) == 0 )
  {
    sub_1C3E564(&ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo);
    sub_1C3E564(&System_Convert_TypeInfo);
    sub_1C3E564(&System_Security_Cryptography_CryptoStream_TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_IO_MemoryStream_TypeInfo);
    sub_1C3E564(&System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
    sub_1C3E564(&StringLiteral_24883/*"wuD6keVr"*/);
    sub_1C3E564(&StringLiteral_16986/*"b5nHjsMrqaeNliSs3jyOzgpD"*/);
    byte_4C563BE = 1;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0);
  if ( !UTF8
    || (v7 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
               UTF8,
               str,
               UTF8->klass->vtable._18_GetBytes.method),
        (UTF8 = System_Text_Encoding__get_UTF8(0)) == 0)
    || (v8 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
               UTF8,
               StringLiteral_16986/*"b5nHjsMrqaeNliSs3jyOzgpD"*/,
               UTF8->klass->vtable._18_GetBytes.method),
        (UTF8 = System_Text_Encoding__get_UTF8(0)) == 0) )
  {
    sub_1C3E7C0(UTF8, v6);
  }
  v9 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
         UTF8,
         StringLiteral_24883/*"wuD6keVr"*/,
         UTF8->klass->vtable._18_GetBytes.method);
  v10 = (System_Security_Cryptography_TripleDESCryptoServiceProvider_o *)sub_1C3E7B0(System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_TripleDESCryptoServiceProvider___ctor(v10, 0);
  v11 = (System_IO_MemoryStream_o *)sub_1C3E7B0(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v11, 0);
  if ( !v10 )
    sub_1C3E7C0(v12, v13);
  v14 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_TripleDESCryptoServiceProvider_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._21_CreateEncryptor.methodPtr)(
                                                             v10,
                                                             v8,
                                                             v9,
                                                             v10->klass->vtable._21_CreateEncryptor.method);
  v15 = (System_Security_Cryptography_CryptoStream_o *)sub_1C3E7B0(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v15, (System_IO_Stream_o *)v11, v14, 1, 0);
  if ( isCompress )
  {
    v18 = (ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *)sub_1C3E7B0(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo);
    ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream___ctor(v18, (System_IO_Stream_o *)v15, 0);
    if ( !v7 )
      sub_1C3E7C0(v19, v20);
    if ( !v18 )
      sub_1C3E7C0(v19, v20);
    ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v18->klass->vtable._34_Write.methodPtr)(
      v18,
      v7,
      0,
      *(unsigned int *)(v7 + 24),
      v18->klass->vtable._34_Write.method);
    ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, const MethodInfo *))v18->klass->vtable._18_Close.methodPtr)(
      v18,
      v18->klass->vtable._18_Close.method);
    klass = v18->klass;
    v22 = *(unsigned __int16 *)&v18->klass->_2.rank;
    if ( *(_WORD *)&v18->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v22;
        p_offset += 4;
        if ( !v22 )
          goto LABEL_14;
      }
      v24 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_14:
      v24 = sub_1C8ED7C(v18, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, _QWORD))v24)(v18, *(_QWORD *)(v24 + 8));
  }
  else
  {
    if ( !v7 )
      sub_1C3E7C0(v16, v17);
    if ( !v15 )
      sub_1C3E7C0(v16, v17);
    ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v15->klass->vtable._34_Write.methodPtr)(
      v15,
      v7,
      0,
      *(unsigned int *)(v7 + 24),
      v15->klass->vtable._34_Write.method);
  }
  System_Security_Cryptography_SymmetricAlgorithm__Clear((System_Security_Cryptography_SymmetricAlgorithm_o *)v10, 0);
  if ( !v15 )
    sub_1C3E7C0(v25, v26);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, const MethodInfo *))v15->klass->vtable._18_Close.methodPtr)(
    v15,
    v15->klass->vtable._18_Close.method);
  v27 = v15->klass;
  v28 = *(unsigned __int16 *)&v15->klass->_2.rank;
  if ( *(_WORD *)&v15->klass->_2.rank )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_25;
    }
    v30 = (__int64)&v27->vtable + 16 * *v29;
  }
  else
  {
LABEL_25:
    v30 = sub_1C8ED7C(v15, System_IDisposable_TypeInfo, 0);
  }
  v31 = (*(__int64 (__fastcall **)(System_Security_Cryptography_CryptoStream_o *, _QWORD))v30)(
          v15,
          *(_QWORD *)(v30 + 8));
  if ( !v11 )
    sub_1C3E7C0(v31, v32);
  v33 = (System_Byte_array *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v11->klass->vtable._40_ToArray.methodPtr)(
                               v11,
                               v11->klass->vtable._40_ToArray.method);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v11->klass->vtable._18_Close.methodPtr)(
    v11,
    v11->klass->vtable._18_Close.method);
  v34 = v11->klass;
  v35 = *(unsigned __int16 *)&v11->klass->_2.rank;
  if ( *(_WORD *)&v11->klass->_2.rank )
  {
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      --v35;
      v36 += 4;
      if ( !v35 )
        goto LABEL_32;
    }
    v37 = (__int64)&v34->vtable + 16 * *v36;
  }
  else
  {
LABEL_32:
    v37 = sub_1C8ED7C(v11, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v37)(v11, *(_QWORD *)(v37 + 8));
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToBase64String(v33, 0);
}


System_String_o *CatAndMouseGame__CatGame2(System_String_o *str, bool isCompress, const MethodInfo *method)
{
  System_Text_Encoding_o *UTF8; // x0
  __int64 v5; // x1
  __int64 v6; // x0
  const MethodInfo *v7; // x4
  CatAndMouseGame_c *v8; // x8
  System_Byte_array *v9; // x19

  if ( (byte_4C563C0 & 1) == 0 )
  {
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    byte_4C563C0 = 1;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0);
  if ( !UTF8 )
    sub_1C3E7C0(0, v5);
  v6 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
         UTF8,
         str,
         UTF8->klass->vtable._18_GetBytes.method);
  v8 = CatAndMouseGame_TypeInfo;
  v9 = (System_Byte_array *)v6;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v8 = CatAndMouseGame_TypeInfo;
  }
  return CatAndMouseGame__CatHome(v9, v8->static_fields->ownerData, v8->static_fields->ownerTop, 1, v7);
}


System_String_o *CatAndMouseGame__CatGame3(System_String_o *str, const MethodInfo *method)
{
  unsigned int *UTF8; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x4
  unsigned __int64 v6; // x8
  System_Byte_array *v7; // x19
  unsigned __int64 v8; // x9
  CatAndMouseGame_c *v9; // x0

  if ( (byte_4C563C7 & 1) == 0 )
  {
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    byte_4C563C7 = 1;
  }
  UTF8 = (unsigned int *)System_Text_Encoding__get_UTF8(0);
  if ( !UTF8
    || (UTF8 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned int *, System_String_o *, _QWORD))(*(_QWORD *)UTF8 + 600LL))(
                                 UTF8,
                                 str,
                                 *(_QWORD *)(*(_QWORD *)UTF8 + 608LL))) == 0 )
  {
    sub_1C3E7C0(UTF8, v4);
  }
  v6 = UTF8[6];
  v7 = (System_Byte_array *)UTF8;
  if ( (__int64)(v6 << 32) >= 1 )
  {
    v8 = 0;
    do
    {
      if ( v8 >= v6 )
        sub_1C3E7C8(UTF8, v4);
      *((_BYTE *)UTF8 + v8 + 32) = ~*((_BYTE *)UTF8 + v8 + 32);
      ++v8;
    }
    while ( (__int64)v8 < (int)v6 );
  }
  v9 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v9 = CatAndMouseGame_TypeInfo;
  }
  return CatAndMouseGame__CatHome(v7, v9->static_fields->stageData, v9->static_fields->stageTop, 1, v5);
}


System_String_o *CatAndMouseGame__CatGame3_41274880(
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

  if ( (byte_4C563C8 & 1) == 0 )
  {
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    byte_4C563C8 = 1;
  }
  v13 = 0;
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
      sub_1C3E7C0(0, v8);
    v9 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
           UTF8,
           str,
           UTF8->klass->vtable._18_GetBytes.method);
    v13 = 0;
    home = 0;
    v11 = (System_Byte_array *)v9;
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    CatAndMouseGame__OtherHomeBuilding(key, &home, &v13, v10);
    return CatAndMouseGame__CatHome(v11, home, v13, 1, v12);
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
  if ( (byte_4C563CA & 1) == 0 )
  {
    data = (System_Byte_array *)sub_1C3E564(&CatAndMouseGame_TypeInfo);
    byte_4C563CA = 1;
  }
  if ( !v3 )
    sub_1C3E7C0(data, method);
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
      sub_1C3E7C8(data, method);
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


System_Byte_array *CatAndMouseGame__CatGame4_41278436(
        System_Byte_array *data,
        System_String_o *key,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x3
  const MethodInfo *v8; // x4
  System_Byte_array *v9; // [xsp+0h] [xbp-30h] BYREF
  System_Byte_array *home; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C563CB & 1) == 0 )
  {
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    byte_4C563CB = 1;
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

  if ( (byte_4C563CE & 1) == 0 )
  {
    sub_1C3E564(&byte___TypeInfo);
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    byte_4C563CE = 1;
  }
  p_image = &CatAndMouseGame_TypeInfo->_1.image;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    p_image = &CatAndMouseGame_TypeInfo->_1.image;
  }
  v4 = *(_QWORD *)(p_image[23] + 64LL);
  if ( !v4
    || (p_image = (_QWORD *)sub_1C3E60C(byte___TypeInfo, *(unsigned int *)(v4 + 24)),
        (BattleIV = CatAndMouseGame_TypeInfo->static_fields->BattleIV) == 0)
    || (v6 = p_image,
        v7 = sub_1C3E60C(byte___TypeInfo, LODWORD(BattleIV->max_length)),
        (p_image = System_Text_Encoding__get_UTF8(0)) == 0) )
  {
LABEL_32:
    sub_1C3E7C0(p_image, method);
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
      sub_1C3E7C8(p_image, method);
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

  if ( (byte_4C563CF & 1) == 0 )
  {
    sub_1C3E564(&byte___TypeInfo);
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    byte_4C563CF = 1;
  }
  v3 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v3 = CatAndMouseGame_TypeInfo;
  }
  BattleKey = v3->static_fields->BattleKey;
  if ( !BattleKey
    || (v3 = (CatAndMouseGame_c *)sub_1C3E60C(byte___TypeInfo, LODWORD(BattleKey->max_length)),
        (BattleIV = CatAndMouseGame_TypeInfo->static_fields->BattleIV) == 0) )
  {
LABEL_31:
    sub_1C3E7C0(v3, method);
  }
  v6 = v3;
  v8 = sub_1C3E60C(byte___TypeInfo, LODWORD(BattleIV->max_length));
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
      sub_1C3E7C8(v3, method);
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
  __int64 v4; // x1
  __int64 v5; // x0
  const MethodInfo *v6; // x4
  CatAndMouseGame_c *v7; // x8
  System_Byte_array *v8; // x19

  if ( (byte_4C563E1 & 1) == 0 )
  {
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    byte_4C563E1 = 1;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0);
  if ( !UTF8 )
    sub_1C3E7C0(0, v4);
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
  return CatAndMouseGame__CatHome(v8, v7->static_fields->sideData, v7->static_fields->sideTop, 0, v6);
}


System_String_o *CatAndMouseGame__CatGame6_41286464(System_Byte_array *data, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  CatAndMouseGame_c *v4; // x0

  if ( (byte_4C563E2 & 1) == 0 )
  {
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    byte_4C563E2 = 1;
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
  if ( (byte_4C563D1 & 1) == 0 )
  {
    sub_1C3E564(&byte___TypeInfo);
    data = (System_Byte_array *)sub_1C3E564(&CatAndMouseGame_TypeInfo);
    byte_4C563D1 = 1;
  }
  if ( !v2 )
LABEL_14:
    sub_1C3E7C0(data, method);
  data = (System_Byte_array *)sub_1C3E60C(byte___TypeInfo, LODWORD(v2->max_length));
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
        sub_1C3E7C8(data, method);
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
  __int64 v4; // x1
  const MethodInfo *v5; // x4
  unsigned __int64 v6; // x8
  System_Byte_array *v7; // x19
  unsigned __int64 v8; // x9
  CatAndMouseGame_c *v9; // x0

  if ( (byte_4C563D3 & 1) == 0 )
  {
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    byte_4C563D3 = 1;
  }
  UTF8 = (unsigned int *)System_Text_Encoding__get_UTF8(0);
  if ( !UTF8
    || (UTF8 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned int *, System_String_o *, _QWORD))(*(_QWORD *)UTF8 + 600LL))(
                                 UTF8,
                                 str,
                                 *(_QWORD *)(*(_QWORD *)UTF8 + 608LL))) == 0 )
  {
    sub_1C3E7C0(UTF8, v4);
  }
  v6 = UTF8[6];
  v7 = (System_Byte_array *)UTF8;
  if ( (__int64)(v6 << 32) >= 1 )
  {
    v8 = 0;
    do
    {
      if ( v8 >= v6 )
        sub_1C3E7C8(UTF8, v4);
      *((_BYTE *)UTF8 + v8 + 32) = ~*((_BYTE *)UTF8 + v8 + 32);
      ++v8;
    }
    while ( (__int64)v8 < (int)v6 );
  }
  v9 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v9 = CatAndMouseGame_TypeInfo;
  }
  return CatAndMouseGame__CatHomeZ2(v7, v9->static_fields->stageData, v9->static_fields->stageTop, 1, v5);
}


System_IO_Stream_o *CatAndMouseGame__CatGameZ(System_IO_Stream_o *stream, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  CatAndMouseGame_c *v4; // x0

  if ( (byte_4C563C5 & 1) == 0 )
  {
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    byte_4C563C5 = 1;
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

  if ( (byte_4C563E6 & 1) == 0 )
  {
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    sub_1C3E564(&System_Convert_TypeInfo);
    byte_4C563E6 = 1;
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
  __int64 v11; // x1
  __int64 v12; // x0
  __int64 v13; // x1
  System_Security_Cryptography_ICryptoTransform_o *v14; // x23
  System_IO_MemoryStream_o *v15; // x0
  int max_length; // w8
  System_IO_Stream_o *v17; // x19
  int v18; // w9
  int v19; // w8
  System_Security_Cryptography_CryptoStream_o *v20; // x20
  __int64 v21; // x0
  __int64 v22; // x1
  ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *v23; // x22
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x0
  __int64 v27; // x1
  System_Byte_array *v28; // x21

  if ( (byte_4C563EA & 1) == 0 )
  {
    sub_1C3E564(&ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo);
    sub_1C3E564(&System_Security_Cryptography_CryptoStream_TypeInfo);
    sub_1C3E564(&System_IO_MemoryStream_TypeInfo);
    sub_1C3E564(&System_Security_Cryptography_RijndaelManaged_TypeInfo);
    byte_4C563EA = 1;
  }
  v9 = (System_Security_Cryptography_RijndaelManaged_o *)sub_1C3E7B0(System_Security_Cryptography_RijndaelManaged_TypeInfo);
  System_Security_Cryptography_RijndaelManaged___ctor(v9, 0);
  if ( !v9 )
    sub_1C3E7C0(v10, v11);
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
  v12 = ((__int64 (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, System_Byte_array *, System_Byte_array *, const MethodInfo *))v9->klass->vtable._21_CreateEncryptor.methodPtr)(
          v9,
          home,
          info,
          v9->klass->vtable._21_CreateEncryptor.method);
  if ( !data )
    sub_1C3E7C0(v12, v13);
  v14 = (System_Security_Cryptography_ICryptoTransform_o *)v12;
  v15 = (System_IO_MemoryStream_o *)sub_1C3E7B0(System_IO_MemoryStream_TypeInfo);
  max_length = data->max_length;
  v17 = (System_IO_Stream_o *)v15;
  v18 = max_length + 255;
  v19 = max_length + 510;
  if ( v18 >= 0 )
    v19 = v18;
  System_IO_MemoryStream___ctor_64458568(v15, v19 & 0xFFFFFF00, 0);
  v20 = (System_Security_Cryptography_CryptoStream_o *)sub_1C3E7B0(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v20, v17, v14, 1, 0);
  if ( isCompress )
  {
    v23 = (ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *)sub_1C3E7B0(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_TypeInfo);
    ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream___ctor_63236692(v23, (System_IO_Stream_o *)v20, 1, 0);
    if ( !v23 )
      sub_1C3E7C0(v24, v25);
    ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, System_Byte_array *, _QWORD, _QWORD, const MethodInfo *))v23->klass->vtable._34_Write.methodPtr)(
      v23,
      data,
      0,
      LODWORD(data->max_length),
      v23->klass->vtable._34_Write.method);
    v26 = ((__int64 (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2OutputStream_o *, const MethodInfo *))v23->klass->vtable._18_Close.methodPtr)(
            v23,
            v23->klass->vtable._18_Close.method);
  }
  else
  {
    if ( !v20 )
      sub_1C3E7C0(v21, v22);
    ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, System_Byte_array *, _QWORD, _QWORD, const MethodInfo *))v20->klass->vtable._34_Write.methodPtr)(
      v20,
      data,
      0,
      LODWORD(data->max_length),
      v20->klass->vtable._34_Write.method);
    System_Security_Cryptography_CryptoStream__FlushFinalBlock(v20, 0);
  }
  if ( !v17 )
    sub_1C3E7C0(v26, v27);
  v28 = (System_Byte_array *)((__int64 (__fastcall *)(System_IO_Stream_o *, _QWORD))v17->klass[1]._1.this_arg.data)(
                               v17,
                               *(_QWORD *)&v17->klass[1]._1.this_arg.bits);
  ((void (__fastcall *)(System_IO_Stream_o *, const MethodInfo *))v17->klass->vtable._18_Close.methodPtr)(
    v17,
    v17->klass->vtable._18_Close.method);
  if ( v20 )
    ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, const MethodInfo *))v20->klass->vtable._18_Close.methodPtr)(
      v20,
      v20->klass->vtable._18_Close.method);
  return v28;
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
  __int64 v11; // x1
  System_Security_Cryptography_ICryptoTransform_o *v12; // x22
  System_Security_Cryptography_CryptoStream_o *v13; // x21
  ICSharpCode_SharpZipLib_GZip_GZipOutputStream_o *v14; // x19

  if ( (byte_4C563E8 & 1) == 0 )
  {
    sub_1C3E564(&System_Security_Cryptography_CryptoStream_TypeInfo);
    sub_1C3E564(&ICSharpCode_SharpZipLib_GZip_GZipOutputStream_TypeInfo);
    sub_1C3E564(&System_Security_Cryptography_RijndaelManaged_TypeInfo);
    byte_4C563E8 = 1;
  }
  v9 = (System_Security_Cryptography_RijndaelManaged_o *)sub_1C3E7B0(System_Security_Cryptography_RijndaelManaged_TypeInfo);
  System_Security_Cryptography_RijndaelManaged___ctor(v9, 0);
  if ( !v9 )
    sub_1C3E7C0(v10, v11);
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
  v12 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, System_Byte_array *, System_Byte_array *, const MethodInfo *))v9->klass->vtable._21_CreateEncryptor.methodPtr)(
                                                             v9,
                                                             home,
                                                             info,
                                                             v9->klass->vtable._21_CreateEncryptor.method);
  v13 = (System_Security_Cryptography_CryptoStream_o *)sub_1C3E7B0(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v13, stream, v12, 1, 0);
  if ( isCompress )
  {
    v14 = (ICSharpCode_SharpZipLib_GZip_GZipOutputStream_o *)sub_1C3E7B0(ICSharpCode_SharpZipLib_GZip_GZipOutputStream_TypeInfo);
    ICSharpCode_SharpZipLib_GZip_GZipOutputStream___ctor(v14, (System_IO_Stream_o *)v13, 0);
    return (System_IO_Stream_o *)v14;
  }
  return (System_IO_Stream_o *)v13;
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
  __int64 v11; // x1
  System_Security_Cryptography_ICryptoTransform_o *v12; // x23
  System_IO_MemoryStream_o *v13; // x19
  System_Security_Cryptography_CryptoStream_o *v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  ICSharpCode_SharpZipLib_GZip_GZipOutputStream_o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x0
  __int64 v21; // x1
  System_Byte_array *v22; // x21

  if ( (byte_4C563E9 & 1) == 0 )
  {
    sub_1C3E564(&System_Security_Cryptography_CryptoStream_TypeInfo);
    sub_1C3E564(&ICSharpCode_SharpZipLib_GZip_GZipOutputStream_TypeInfo);
    sub_1C3E564(&System_IO_MemoryStream_TypeInfo);
    sub_1C3E564(&System_Security_Cryptography_RijndaelManaged_TypeInfo);
    byte_4C563E9 = 1;
  }
  v9 = (System_Security_Cryptography_RijndaelManaged_o *)sub_1C3E7B0(System_Security_Cryptography_RijndaelManaged_TypeInfo);
  System_Security_Cryptography_RijndaelManaged___ctor(v9, 0);
  if ( !v9 )
    sub_1C3E7C0(v10, v11);
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
  v12 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, System_Byte_array *, System_Byte_array *, const MethodInfo *))v9->klass->vtable._21_CreateEncryptor.methodPtr)(
                                                             v9,
                                                             home,
                                                             info,
                                                             v9->klass->vtable._21_CreateEncryptor.method);
  v13 = (System_IO_MemoryStream_o *)sub_1C3E7B0(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v13, 0);
  v14 = (System_Security_Cryptography_CryptoStream_o *)sub_1C3E7B0(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v14, (System_IO_Stream_o *)v13, v12, 1, 0);
  if ( isCompress )
  {
    v17 = (ICSharpCode_SharpZipLib_GZip_GZipOutputStream_o *)sub_1C3E7B0(ICSharpCode_SharpZipLib_GZip_GZipOutputStream_TypeInfo);
    ICSharpCode_SharpZipLib_GZip_GZipOutputStream___ctor(v17, (System_IO_Stream_o *)v14, 0);
    if ( !data )
      sub_1C3E7C0(v18, v19);
    if ( !v17 )
      sub_1C3E7C0(v18, v19);
    ((void (__fastcall *)(ICSharpCode_SharpZipLib_GZip_GZipOutputStream_o *, System_Byte_array *, _QWORD, _QWORD, const MethodInfo *))v17->klass->vtable._34_Write.methodPtr)(
      v17,
      data,
      0,
      LODWORD(data->max_length),
      v17->klass->vtable._34_Write.method);
    v20 = ((__int64 (__fastcall *)(ICSharpCode_SharpZipLib_GZip_GZipOutputStream_o *, const MethodInfo *))v17->klass->vtable._18_Close.methodPtr)(
            v17,
            v17->klass->vtable._18_Close.method);
  }
  else
  {
    if ( !data )
      sub_1C3E7C0(v15, v16);
    if ( !v14 )
      sub_1C3E7C0(v15, v16);
    ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, System_Byte_array *, _QWORD, _QWORD, const MethodInfo *))v14->klass->vtable._34_Write.methodPtr)(
      v14,
      data,
      0,
      LODWORD(data->max_length),
      v14->klass->vtable._34_Write.method);
    System_Security_Cryptography_CryptoStream__FlushFinalBlock(v14, 0);
  }
  if ( !v13 )
    sub_1C3E7C0(v20, v21);
  v22 = (System_Byte_array *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v13->klass->vtable._40_ToArray.methodPtr)(
                               v13,
                               v13->klass->vtable._40_ToArray.method);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v13->klass->vtable._18_Close.methodPtr)(
    v13,
    v13->klass->vtable._18_Close.method);
  if ( v14 )
    ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, const MethodInfo *))v14->klass->vtable._18_Close.methodPtr)(
      v14,
      v14->klass->vtable._18_Close.method);
  return v22;
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

  if ( (byte_4C563E7 & 1) == 0 )
  {
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    sub_1C3E564(&System_Convert_TypeInfo);
    byte_4C563E7 = 1;
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
  __int64 v5; // x1
  _QWORD *v6; // x19
  int v7; // w20
  unsigned __int64 v8; // x21
  __int64 v9; // x22
  __int64 v10; // x8
  __int64 v11; // x10
  unsigned __int64 v12; // x9
  struct System_Byte_array *baseData; // x10
  __int64 v14; // x9
  struct System_Byte_array *v15; // x9
  __int64 v16; // x8
  char *v17; // x8
  __int64 v18; // x9
  struct System_Byte_array *v19; // x8
  int v20; // w10
  __int64 v21; // x10
  unsigned __int64 v22; // x9
  struct System_Byte_array *baseTop; // x10
  __int64 v24; // x9
  struct System_Byte_array *v25; // x9
  __int64 v26; // x8

  if ( (byte_4C563D8 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Application_TypeInfo);
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    sub_1C3E564(&StringLiteral_10356/*"PFBs0eIuunoxKkCcLbqDVerU1rShhS276SAL3A8tFLUfGvtz3F3FFeKELIk3Nvi4"*/);
    byte_4C563D8 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  isPlaying = UnityEngine_Application__get_isPlaying(0);
  UTF8 = System_Text_Encoding__get_UTF8(0);
  if ( !UTF8
    || (!isPlaying
      ? (UTF8 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(*UTF8 + 600LL))(
                            UTF8,
                            StringLiteral_10356/*"PFBs0eIuunoxKkCcLbqDVerU1rShhS276SAL3A8tFLUfGvtz3F3FFeKELIk3Nvi4"*/,
                            *(_QWORD *)(*UTF8 + 608LL)))
      : (UTF8 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, System_String_o *, _QWORD))(*UTF8 + 600LL))(
                            UTF8,
                            data,
                            *(_QWORD *)(*UTF8 + 608LL))),
        (v6 = UTF8) == 0) )
  {
LABEL_44:
    sub_1C3E7C0(UTF8, v5);
  }
  if ( *((int *)UTF8 + 6) >= 4 )
  {
    v7 = 0;
    v8 = 0;
    v9 = 0;
    do
    {
      UTF8 = &CatAndMouseGame_TypeInfo->_1.image;
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
        UTF8 = &CatAndMouseGame_TypeInfo->_1.image;
      }
      v10 = UTF8[23];
      if ( (v9 & 1) != 0 )
      {
        if ( v8 >= *((unsigned int *)v6 + 6) )
          goto LABEL_43;
        v21 = *(_QWORD *)(v10 + 48);
        if ( !v21 )
          goto LABEL_44;
        v22 = v7 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (unsigned int)v22 >= *(_DWORD *)(v21 + 24) )
          goto LABEL_43;
        *(_BYTE *)(v21 + v22 + 32) = *((_BYTE *)v6 + v8 + 32);
        if ( v8 + 1 >= *((unsigned int *)v6 + 6) )
          goto LABEL_43;
        baseTop = CatAndMouseGame_TypeInfo->static_fields->baseTop;
        if ( !baseTop )
          goto LABEL_44;
        v24 = (int)v22 | 1LL;
        if ( (unsigned int)v24 >= LODWORD(baseTop->max_length) )
          goto LABEL_43;
        baseTop->m_Items[v24] = *((_BYTE *)v6 + v8 + 33);
        if ( v8 + 2 >= *((unsigned int *)v6 + 6) )
          goto LABEL_43;
        v25 = CatAndMouseGame_TypeInfo->static_fields->baseTop;
        if ( !v25 )
          goto LABEL_44;
        v26 = v7 | 2LL;
        if ( (unsigned int)v26 >= LODWORD(v25->max_length) )
          goto LABEL_43;
        v25->m_Items[v26] = *((_BYTE *)v6 + v8 + 34);
        if ( v8 + 3 >= *((unsigned int *)v6 + 6) )
          goto LABEL_43;
        v19 = CatAndMouseGame_TypeInfo->static_fields->baseTop;
        if ( !v19 )
          goto LABEL_44;
        v20 = v7 | 3;
        if ( (v7 | 3u) >= LODWORD(v19->max_length) )
LABEL_43:
          sub_1C3E7C8(UTF8, v5);
        v18 = (4 * v9) | 3;
      }
      else
      {
        if ( v8 >= *((unsigned int *)v6 + 6) )
          goto LABEL_43;
        v11 = *(_QWORD *)(v10 + 56);
        if ( !v11 )
          goto LABEL_44;
        v12 = v7 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (unsigned int)v12 >= *(_DWORD *)(v11 + 24) )
          goto LABEL_43;
        *(_BYTE *)(v11 + v12 + 32) = *((_BYTE *)v6 + v8 + 32);
        if ( v8 + 1 >= *((unsigned int *)v6 + 6) )
          goto LABEL_43;
        baseData = CatAndMouseGame_TypeInfo->static_fields->baseData;
        if ( !baseData )
          goto LABEL_44;
        v14 = (int)v12 | 1LL;
        if ( (unsigned int)v14 >= LODWORD(baseData->max_length) )
          goto LABEL_43;
        baseData->m_Items[v14] = *((_BYTE *)v6 + v8 + 33);
        if ( v8 + 2 >= *((unsigned int *)v6 + 6) )
          goto LABEL_43;
        v15 = CatAndMouseGame_TypeInfo->static_fields->baseData;
        if ( !v15 )
          goto LABEL_44;
        v16 = v7 | 2LL;
        if ( (unsigned int)v16 >= LODWORD(v15->max_length) )
          goto LABEL_43;
        v17 = (char *)v15 + v16;
        v18 = v8 + 3;
        v17[32] = *((_BYTE *)v6 + v8 + 34);
        if ( v8 + 3 >= *((unsigned int *)v6 + 6) )
          goto LABEL_43;
        v19 = CatAndMouseGame_TypeInfo->static_fields->baseData;
        if ( !v19 )
          goto LABEL_44;
        v20 = v7 | 3;
        if ( (v7 | 3u) >= LODWORD(v19->max_length) )
          goto LABEL_43;
      }
      ++v9;
      v8 += 4LL;
      v19->m_Items[v20] = *((_BYTE *)v6 + v18 + 32);
      v7 += 2;
    }
    while ( v9 < *((_DWORD *)v6 + 6) / 4 );
  }
}


System_String_o *CatAndMouseGame__GetAssetbundleKey(System_String_o *keyType, const MethodInfo *method)
{
  CatAndMouseGame_c *v3; // x0
  System_Collections_Generic_Dictionary_object__object__o *assetbundleKeyCollection; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C563DF & 1) == 0 )
  {
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    byte_4C563DF = 1;
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
    sub_1C3E7C0(0, method);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         assetbundleKeyCollection,
         (Il2CppObject *)keyType,
         &value,
         (const MethodInfo_3476FEC *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
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
  __int64 v7; // x1
  __int64 v8; // x19
  __int64 v9; // x24
  System_Security_Cryptography_TripleDESCryptoServiceProvider_o *v10; // x23
  System_IO_MemoryStream_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  System_Security_Cryptography_ICryptoTransform_o *v14; // x24
  System_Security_Cryptography_CryptoStream_o *v15; // x19
  __int64 v16; // x0
  __int64 v17; // x1
  System_Security_Cryptography_CryptoStream_c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  System_Byte_array *v24; // x19
  System_IO_MemoryStream_c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0
  System_IO_MemoryStream_o *v29; // x20
  System_IO_MemoryStream_o *v30; // x22
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *v31; // x23
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x21
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x23
  ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_c *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0
  __int64 v42; // x0
  __int64 v43; // x1
  System_IO_MemoryStream_c *v44; // x8
  __int64 v45; // x9
  int32_t *v46; // x10
  __int64 v47; // x0
  __int64 v48; // x0
  __int64 v49; // x1
  System_IO_MemoryStream_c *v50; // x8
  __int64 v51; // x9
  int32_t *v52; // x10
  __int64 v53; // x0

  if ( (byte_4C563BF & 1) == 0 )
  {
    sub_1C3E564(&ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo);
    sub_1C3E564(&byte___TypeInfo);
    sub_1C3E564(&System_Convert_TypeInfo);
    sub_1C3E564(&System_Security_Cryptography_CryptoStream_TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_IO_MemoryStream_TypeInfo);
    sub_1C3E564(&System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
    sub_1C3E564(&StringLiteral_24883/*"wuD6keVr"*/);
    sub_1C3E564(&StringLiteral_16986/*"b5nHjsMrqaeNliSs3jyOzgpD"*/);
    byte_4C563BF = 1;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v5 = System_Convert__FromBase64String(str, 0);
  UTF8 = System_Text_Encoding__get_UTF8(0);
  if ( !UTF8 )
    goto LABEL_54;
  v8 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
         UTF8,
         StringLiteral_16986/*"b5nHjsMrqaeNliSs3jyOzgpD"*/,
         UTF8->klass->vtable._18_GetBytes.method);
  UTF8 = System_Text_Encoding__get_UTF8(0);
  if ( !UTF8 )
    goto LABEL_54;
  v9 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
         UTF8,
         StringLiteral_24883/*"wuD6keVr"*/,
         UTF8->klass->vtable._18_GetBytes.method);
  v10 = (System_Security_Cryptography_TripleDESCryptoServiceProvider_o *)sub_1C3E7B0(System_Security_Cryptography_TripleDESCryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_TripleDESCryptoServiceProvider___ctor(v10, 0);
  v11 = (System_IO_MemoryStream_o *)sub_1C3E7B0(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(v11, 0);
  if ( !v10 )
    sub_1C3E7C0(v12, v13);
  v14 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_TripleDESCryptoServiceProvider_o *, __int64, __int64, const MethodInfo *))v10->klass->vtable._23_CreateDecryptor.methodPtr)(
                                                             v10,
                                                             v8,
                                                             v9,
                                                             v10->klass->vtable._23_CreateDecryptor.method);
  v15 = (System_Security_Cryptography_CryptoStream_o *)sub_1C3E7B0(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v15, (System_IO_Stream_o *)v11, v14, 1, 0);
  if ( !v5 )
    sub_1C3E7C0(v16, v17);
  if ( !v15 )
    sub_1C3E7C0(v16, v17);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, System_Byte_array *, _QWORD, _QWORD, const MethodInfo *))v15->klass->vtable._34_Write.methodPtr)(
    v15,
    v5,
    0,
    LODWORD(v5->max_length),
    v15->klass->vtable._34_Write.method);
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, const MethodInfo *))v15->klass->vtable._18_Close.methodPtr)(
    v15,
    v15->klass->vtable._18_Close.method);
  klass = v15->klass;
  v19 = *(unsigned __int16 *)&v15->klass->_2.rank;
  if ( *(_WORD *)&v15->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v19;
      p_offset += 4;
      if ( !v19 )
        goto LABEL_14;
    }
    v21 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_14:
    v21 = sub_1C8ED7C(v15, System_IDisposable_TypeInfo, 0);
  }
  v22 = (*(__int64 (__fastcall **)(System_Security_Cryptography_CryptoStream_o *, _QWORD))v21)(
          v15,
          *(_QWORD *)(v21 + 8));
  if ( !v11 )
    sub_1C3E7C0(v22, v23);
  v24 = (System_Byte_array *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v11->klass->vtable._40_ToArray.methodPtr)(
                               v11,
                               v11->klass->vtable._40_ToArray.method);
  System_Security_Cryptography_SymmetricAlgorithm__Clear((System_Security_Cryptography_SymmetricAlgorithm_o *)v10, 0);
  ((void (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v11->klass->vtable._18_Close.methodPtr)(
    v11,
    v11->klass->vtable._18_Close.method);
  v25 = v11->klass;
  v26 = *(unsigned __int16 *)&v11->klass->_2.rank;
  if ( *(_WORD *)&v11->klass->_2.rank )
  {
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      v27 += 4;
      if ( !v26 )
        goto LABEL_21;
    }
    v28 = (__int64)&v25->vtable + 16 * *v27;
  }
  else
  {
LABEL_21:
    v28 = sub_1C8ED7C(v11, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v28)(v11, *(_QWORD *)(v28 + 8));
  if ( isCompress )
  {
    v29 = (System_IO_MemoryStream_o *)sub_1C3E7B0(System_IO_MemoryStream_TypeInfo);
    System_IO_MemoryStream___ctor(v29, 0);
    v30 = (System_IO_MemoryStream_o *)sub_1C3E7B0(System_IO_MemoryStream_TypeInfo);
    System_IO_MemoryStream___ctor_64458944(v30, v24, 0);
    v31 = (ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *)sub_1C3E7B0(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo);
    ICSharpCode_SharpZipLib_BZip2_BZip2InputStream___ctor(v31, (System_IO_Stream_o *)v30, 0);
    v32 = sub_1C3E60C(byte___TypeInfo, 0x4000);
    v34 = v32;
    if ( !v32 )
      sub_1C3E7C0(0, v33);
    if ( !v31 )
      sub_1C3E7C0(v32, v33);
    while ( 1 )
    {
      v35 = ((__int64 (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v31->klass->vtable._31_Read.methodPtr)(
              v31,
              v34,
              0,
              *(unsigned int *)(v34 + 24),
              v31->klass->vtable._31_Read.method);
      if ( (int)v35 <= 0 )
        break;
      if ( !v29 )
        sub_1C3E7C0(v35, v36);
      ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v29->klass->vtable._34_Write.methodPtr)(
        v29,
        v34,
        0,
        (unsigned int)v35,
        v29->klass->vtable._34_Write.method);
    }
    ((void (__fastcall *)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, const MethodInfo *))v31->klass->vtable._18_Close.methodPtr)(
      v31,
      v31->klass->vtable._18_Close.method);
    v38 = v31->klass;
    v39 = *(unsigned __int16 *)&v31->klass->_2.rank;
    if ( *(_WORD *)&v31->klass->_2.rank )
    {
      v40 = &v38->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_34;
      }
      v41 = (__int64)&v38->vtable + 16 * *v40;
    }
    else
    {
LABEL_34:
      v41 = sub_1C8ED7C(v31, System_IDisposable_TypeInfo, 0);
    }
    v42 = (*(__int64 (__fastcall **)(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *, _QWORD))v41)(
            v31,
            *(_QWORD *)(v41 + 8));
    if ( !v30 )
      sub_1C3E7C0(v42, v43);
    ((void (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v30->klass->vtable._18_Close.methodPtr)(
      v30,
      v30->klass->vtable._18_Close.method);
    v44 = v30->klass;
    v45 = *(unsigned __int16 *)&v30->klass->_2.rank;
    if ( *(_WORD *)&v30->klass->_2.rank )
    {
      v46 = &v44->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
      {
        --v45;
        v46 += 4;
        if ( !v45 )
          goto LABEL_41;
      }
      v47 = (__int64)&v44->vtable + 16 * *v46;
    }
    else
    {
LABEL_41:
      v47 = sub_1C8ED7C(v30, System_IDisposable_TypeInfo, 0);
    }
    v48 = (*(__int64 (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v47)(v30, *(_QWORD *)(v47 + 8));
    if ( !v29 )
      sub_1C3E7C0(v48, v49);
    v37 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v29->klass->vtable._40_ToArray.methodPtr)(
            v29,
            v29->klass->vtable._40_ToArray.method);
    ((void (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v29->klass->vtable._18_Close.methodPtr)(
      v29,
      v29->klass->vtable._18_Close.method);
    v50 = v29->klass;
    v51 = *(unsigned __int16 *)&v29->klass->_2.rank;
    if ( *(_WORD *)&v29->klass->_2.rank )
    {
      v52 = &v50->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
      {
        --v51;
        v52 += 4;
        if ( !v51 )
          goto LABEL_48;
      }
      v53 = (__int64)&v50->vtable + 16 * *v52;
    }
    else
    {
LABEL_48:
      v53 = sub_1C8ED7C(v29, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v53)(v29, *(_QWORD *)(v53 + 8));
  }
  else
  {
    v37 = (__int64)v24;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0);
  if ( !UTF8 )
LABEL_54:
    sub_1C3E7C0(UTF8, v7);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, const MethodInfo *))UTF8->klass->vtable._35_GetString.methodPtr)(
                              UTF8,
                              v37,
                              UTF8->klass->vtable._35_GetString.method);
}


System_String_o *CatAndMouseGame__MouseGame2(System_Byte_array *data, bool isCompress, const MethodInfo *method)
{
  CatAndMouseGame_c *v4; // x0
  System_Text_Encoding_o *UTF8; // x0
  __int64 v6; // x1
  System_Array_o *v7; // x20
  __int64 v8; // x0
  struct CatAndMouseGame_StaticFields *static_fields; // x8
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x4

  if ( (byte_4C563C1 & 1) == 0 )
  {
    sub_1C3E564(&byte___TypeInfo);
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    sub_1C3E564(&StringLiteral_22616/*"pX6q6xK2UymhFKcaGHHUlfXqfTsWF0uH"*/);
    byte_4C563C1 = 1;
  }
  v4 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v4 = CatAndMouseGame_TypeInfo;
  }
  System_Array__Copy_65298516((System_Array_o *)data, 0, (System_Array_o *)v4->static_fields->ownerTop, 0, 32, 0);
  if ( !data
    || (v7 = (System_Array_o *)sub_1C3E60C(byte___TypeInfo, (unsigned int)(LODWORD(data->max_length) - 32)),
        System_Array__Copy_65298516((System_Array_o *)data, 32, v7, 0, LODWORD(data->max_length) - 32, 0),
        (UTF8 = System_Text_Encoding__get_UTF8(0)) == 0) )
  {
    sub_1C3E7C0(UTF8, v6);
  }
  v8 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
         UTF8,
         StringLiteral_22616/*"pX6q6xK2UymhFKcaGHHUlfXqfTsWF0uH"*/,
         UTF8->klass->vtable._18_GetBytes.method);
  static_fields = CatAndMouseGame_TypeInfo->static_fields;
  static_fields->ownerData = (struct System_Byte_array *)v8;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->ownerData, v8, v10, v11);
  return CatAndMouseGame__MouseHome(
           (System_Byte_array *)v7,
           CatAndMouseGame_TypeInfo->static_fields->ownerData,
           CatAndMouseGame_TypeInfo->static_fields->ownerTop,
           1,
           v12);
}


System_Byte_array *CatAndMouseGame__MouseGame2Bytes(System_Byte_array *data, bool isCompress, const MethodInfo *method)
{
  CatAndMouseGame_c *v4; // x0
  System_Text_Encoding_o *UTF8; // x0
  __int64 v6; // x1
  System_Array_o *v7; // x20
  __int64 v8; // x0
  struct CatAndMouseGame_StaticFields *static_fields; // x8
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x4

  if ( (byte_4C563C4 & 1) == 0 )
  {
    sub_1C3E564(&byte___TypeInfo);
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    sub_1C3E564(&StringLiteral_22616/*"pX6q6xK2UymhFKcaGHHUlfXqfTsWF0uH"*/);
    byte_4C563C4 = 1;
  }
  v4 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v4 = CatAndMouseGame_TypeInfo;
  }
  System_Array__Copy_65298516((System_Array_o *)data, 0, (System_Array_o *)v4->static_fields->ownerTop, 0, 32, 0);
  if ( !data
    || (v7 = (System_Array_o *)sub_1C3E60C(byte___TypeInfo, (unsigned int)(LODWORD(data->max_length) - 32)),
        System_Array__Copy_65298516((System_Array_o *)data, 32, v7, 0, LODWORD(data->max_length) - 32, 0),
        (UTF8 = System_Text_Encoding__get_UTF8(0)) == 0) )
  {
    sub_1C3E7C0(UTF8, v6);
  }
  v8 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
         UTF8,
         StringLiteral_22616/*"pX6q6xK2UymhFKcaGHHUlfXqfTsWF0uH"*/,
         UTF8->klass->vtable._18_GetBytes.method);
  static_fields = CatAndMouseGame_TypeInfo->static_fields;
  static_fields->ownerData = (struct System_Byte_array *)v8;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->ownerData, v8, v10, v11);
  return CatAndMouseGame__MouseHomeSub(
           (System_Byte_array *)v7,
           CatAndMouseGame_TypeInfo->static_fields->ownerData,
           CatAndMouseGame_TypeInfo->static_fields->ownerTop,
           1,
           v12);
}


Il2CppObject *CatAndMouseGame__MouseGame2MsgPack(System_Byte_array *data, bool isCompress, const MethodInfo *method)
{
  CatAndMouseGame_c *v4; // x0
  System_Text_Encoding_o *UTF8; // x0
  __int64 v6; // x1
  System_Array_o *v7; // x20
  __int64 v8; // x0
  struct CatAndMouseGame_StaticFields *static_fields; // x8
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x4

  if ( (byte_4C563C2 & 1) == 0 )
  {
    sub_1C3E564(&byte___TypeInfo);
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    sub_1C3E564(&StringLiteral_22616/*"pX6q6xK2UymhFKcaGHHUlfXqfTsWF0uH"*/);
    byte_4C563C2 = 1;
  }
  v4 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v4 = CatAndMouseGame_TypeInfo;
  }
  System_Array__Copy_65298516((System_Array_o *)data, 0, (System_Array_o *)v4->static_fields->ownerTop, 0, 32, 0);
  if ( !data
    || (v7 = (System_Array_o *)sub_1C3E60C(byte___TypeInfo, (unsigned int)(LODWORD(data->max_length) - 32)),
        System_Array__Copy_65298516((System_Array_o *)data, 32, v7, 0, LODWORD(data->max_length) - 32, 0),
        (UTF8 = System_Text_Encoding__get_UTF8(0)) == 0) )
  {
    sub_1C3E7C0(UTF8, v6);
  }
  v8 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
         UTF8,
         StringLiteral_22616/*"pX6q6xK2UymhFKcaGHHUlfXqfTsWF0uH"*/,
         UTF8->klass->vtable._18_GetBytes.method);
  static_fields = CatAndMouseGame_TypeInfo->static_fields;
  static_fields->ownerData = (struct System_Byte_array *)v8;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->ownerData, v8, v10, v11);
  return CatAndMouseGame__MouseHomeMsgPack(
           (System_Byte_array *)v7,
           CatAndMouseGame_TypeInfo->static_fields->ownerData,
           CatAndMouseGame_TypeInfo->static_fields->ownerTop,
           1,
           v12);
}


Il2CppObject *CatAndMouseGame__MouseGame2Unpacker(System_Byte_array *data, bool isCompress, const MethodInfo *method)
{
  CatAndMouseGame_c *v4; // x0
  System_Text_Encoding_o *UTF8; // x0
  __int64 v6; // x1
  System_Array_o *v7; // x20
  __int64 v8; // x0
  struct CatAndMouseGame_StaticFields *static_fields; // x8
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x4

  if ( (byte_4C563C3 & 1) == 0 )
  {
    sub_1C3E564(&byte___TypeInfo);
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    sub_1C3E564(&StringLiteral_22616/*"pX6q6xK2UymhFKcaGHHUlfXqfTsWF0uH"*/);
    byte_4C563C3 = 1;
  }
  v4 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v4 = CatAndMouseGame_TypeInfo;
  }
  System_Array__Copy_65298516((System_Array_o *)data, 0, (System_Array_o *)v4->static_fields->ownerTop, 0, 32, 0);
  if ( !data
    || (v7 = (System_Array_o *)sub_1C3E60C(byte___TypeInfo, (unsigned int)(LODWORD(data->max_length) - 32)),
        System_Array__Copy_65298516((System_Array_o *)data, 32, v7, 0, LODWORD(data->max_length) - 32, 0),
        (UTF8 = System_Text_Encoding__get_UTF8(0)) == 0) )
  {
    sub_1C3E7C0(UTF8, v6);
  }
  v8 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
         UTF8,
         StringLiteral_22616/*"pX6q6xK2UymhFKcaGHHUlfXqfTsWF0uH"*/,
         UTF8->klass->vtable._18_GetBytes.method);
  static_fields = CatAndMouseGame_TypeInfo->static_fields;
  static_fields->ownerData = (struct System_Byte_array *)v8;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->ownerData, v8, v10, v11);
  return CatAndMouseGame__MouseHomeMaster(
           (System_Byte_array *)v7,
           CatAndMouseGame_TypeInfo->static_fields->ownerData,
           CatAndMouseGame_TypeInfo->static_fields->ownerTop,
           1,
           v12);
}


System_String_o *CatAndMouseGame__MouseGame3(System_String_o *str, const MethodInfo *method)
{
  System_Byte_array *v3; // x0
  const MethodInfo *v4; // x4
  CatAndMouseGame_c *v5; // x8
  System_Byte_array *v6; // x19
  System_String_o *result; // x0
  __int64 v8; // x1
  System_String_o *v9; // x19
  unsigned __int64 klass; // x9
  unsigned __int64 v11; // x8
  System_String_o *UTF8; // x0
  __int64 v13; // x1

  if ( (byte_4C563C9 & 1) == 0 )
  {
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    sub_1C3E564(&System_Convert_TypeInfo);
    byte_4C563C9 = 1;
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
    v9 = result;
    if ( (int)result[1].klass >= 1 )
    {
      klass = (unsigned int)result[1].klass;
      v11 = 0;
      do
      {
        if ( v11 >= klass )
          sub_1C3E7C8(result, v8);
        *((_BYTE *)&result[1].monitor + v11) = ~*((_BYTE *)&result[1].monitor + v11);
        ++v11;
      }
      while ( (__int64)v11 < (int)klass );
    }
    UTF8 = (System_String_o *)System_Text_Encoding__get_UTF8(0);
    if ( !UTF8
      || (UTF8 = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, System_String_o *, void *))UTF8->klass[1]._1.fields)(
                                      UTF8,
                                      v9,
                                      UTF8->klass[1]._1.events)) == 0 )
    {
      sub_1C3E7C0(UTF8, v13);
    }
    return System_String__TrimEnd_63693160(UTF8, 0, 0);
  }
  return result;
}


System_String_o *CatAndMouseGame__MouseGame3_41284964(
        System_String_o *str,
        System_String_o *key,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x3
  const MethodInfo *v8; // x3
  System_Byte_array *v9; // [xsp+0h] [xbp-30h] BYREF
  System_Byte_array *home; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C563D9 & 1) == 0 )
  {
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    byte_4C563D9 = 1;
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
    return CatAndMouseGame__MouseGame3_41285132(str, home, v9, v8);
  }
}


System_String_o *CatAndMouseGame__MouseGame3_41285132(
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
  __int64 v12; // x1

  if ( (byte_4C563DA & 1) == 0 )
  {
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    sub_1C3E564(&System_Convert_TypeInfo);
    byte_4C563DA = 1;
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
      sub_1C3E7C0(UTF8, v12);
    }
    return System_String__TrimEnd_63693160(UTF8, 0, 0);
  }
  return result;
}


System_Byte_array *CatAndMouseGame__MouseGame4(System_Byte_array *data, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  CatAndMouseGame_c *v4; // x0
  System_Byte_array *result; // x0
  __int64 v6; // x1
  int max_length; // w8
  int v8; // w9
  unsigned int v9; // w12
  unsigned int v10; // w13
  char *v11; // x13
  uint8_t *v12; // x15
  uint8_t v13; // w14
  _BYTE *v14; // x13
  char v15; // t1

  if ( (byte_4C563CC & 1) == 0 )
  {
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    byte_4C563CC = 1;
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
      v8 = 0;
      do
      {
        v9 = v8 + 1;
        if ( v8 + 1 >= max_length )
          break;
        v10 = result->max_length;
        if ( v8 < v10 && v9 < v10 )
        {
          v11 = (char *)result + (int)v9;
          v12 = &result->m_Items[v8];
          v13 = *v12;
          v15 = v11[32];
          v14 = v11 + 32;
          *v12 = v15 ^ 0xD2;
          if ( v9 < LODWORD(result->max_length) )
            continue;
        }
        sub_1C3E7C8(result, v6);
        v8 += 2;
        *v14 = v13 ^ 0xCE;
      }
      while ( v8 < max_length );
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

  if ( (byte_4C563CD & 1) == 0 )
  {
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    byte_4C563CD = 1;
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


System_Security_Cryptography_CryptoStream_o *CatAndMouseGame__MouseGame4Stream_41285656(
        System_IO_Stream_o *outputStream,
        System_String_o *key,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x3
  const MethodInfo *v8; // x4
  System_Byte_array *v9; // [xsp+0h] [xbp-30h] BYREF
  System_Byte_array *home; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C563DC & 1) == 0 )
  {
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    byte_4C563DC = 1;
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


System_Byte_array *CatAndMouseGame__MouseGame4_41285376(
        System_Byte_array *data,
        System_String_o *key,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x3
  const MethodInfo *v8; // x3
  System_Byte_array *v9; // [xsp+0h] [xbp-30h] BYREF
  System_Byte_array *home; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C563DB & 1) == 0 )
  {
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    byte_4C563DB = 1;
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
    return CatAndMouseGame__MouseGame4_41285544(data, home, v9, v8);
  }
}


System_Byte_array *CatAndMouseGame__MouseGame4_41285544(
        System_Byte_array *data,
        System_Byte_array *home,
        System_Byte_array *info,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( (byte_4C563DD & 1) == 0 )
  {
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    byte_4C563DD = 1;
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

  if ( (byte_4C563D0 & 1) == 0 )
  {
    sub_1C3E564(&byte___TypeInfo);
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    sub_1C3E564(&System_Convert_TypeInfo);
    byte_4C563D0 = 1;
  }
  v3 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v3 = CatAndMouseGame_TypeInfo;
  }
  BattleKey = v3->static_fields->BattleKey;
  if ( !BattleKey
    || (v3 = (CatAndMouseGame_c *)sub_1C3E60C(byte___TypeInfo, LODWORD(BattleKey->max_length)),
        (BattleIV = CatAndMouseGame_TypeInfo->static_fields->BattleIV) == 0) )
  {
LABEL_33:
    sub_1C3E7C0(v3, method);
  }
  v6 = v3;
  v7 = sub_1C3E60C(byte___TypeInfo, LODWORD(BattleIV->max_length));
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
      sub_1C3E7C8(v3, method);
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

  if ( (byte_4C563E3 & 1) == 0 )
  {
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    sub_1C3E564(&System_Convert_TypeInfo);
    byte_4C563E3 = 1;
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

  if ( (byte_4C563E4 & 1) == 0 )
  {
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    sub_1C3E564(&System_Convert_TypeInfo);
    byte_4C563E4 = 1;
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
  __int64 v6; // x1
  unsigned __int64 max_length_low; // x8
  unsigned __int64 v8; // x9

  if ( (byte_4C563D2 & 1) == 0 )
  {
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    byte_4C563D2 = 1;
  }
  v4 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v4 = CatAndMouseGame_TypeInfo;
  }
  result = CatAndMouseGame__MouseHomeMain(data, v4->static_fields->stageData, v4->static_fields->stageTop, 1, v2);
  if ( !result )
    sub_1C3E7C0(0, v6);
  max_length_low = LODWORD(result->max_length);
  if ( (__int64)(max_length_low << 32) >= 1 )
  {
    v8 = 0;
    do
    {
      if ( v8 >= max_length_low )
        sub_1C3E7C8(result, v6);
      result->m_Items[v8] = ~result->m_Items[v8];
      ++v8;
    }
    while ( (__int64)v8 < (int)max_length_low );
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
  __int64 v8; // x1
  const MethodInfo *v9; // x4
  System_String_o *v10; // x20
  CatAndMouseGame_c *v11; // x0
  unsigned __int64 klass_low; // x8
  unsigned __int64 v13; // x9
  System_String_o *UTF8; // x0
  __int64 v15; // x1

  if ( (byte_4C563D4 & 1) == 0 )
  {
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    sub_1C3E564(&System_Convert_TypeInfo);
    byte_4C563D4 = 1;
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
  v10 = result;
  if ( result )
    goto LABEL_11;
  v11 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v11 = CatAndMouseGame_TypeInfo;
  }
  result = (System_String_o *)CatAndMouseGame__MouseHomeMain(
                                v6,
                                v11->static_fields->stageData,
                                v11->static_fields->stageTop,
                                1,
                                v9);
  v10 = result;
  if ( result )
  {
LABEL_11:
    klass_low = LODWORD(v10[1].klass);
    if ( (__int64)(klass_low << 32) >= 1 )
    {
      v13 = 0;
      do
      {
        if ( v13 >= klass_low )
          sub_1C3E7C8(result, v8);
        *((_BYTE *)&v10[1].monitor + v13) = ~*((_BYTE *)&v10[1].monitor + v13);
        ++v13;
      }
      while ( (__int64)v13 < (int)klass_low );
    }
    UTF8 = (System_String_o *)System_Text_Encoding__get_UTF8(0);
    if ( !UTF8
      || (UTF8 = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, System_String_o *, void *))UTF8->klass[1]._1.fields)(
                                      UTF8,
                                      v10,
                                      UTF8->klass[1]._1.events)) == 0 )
    {
      sub_1C3E7C0(UTF8, v15);
    }
    return System_String__TrimEnd_63693160(UTF8, 0, 0);
  }
  return result;
}


System_IO_Stream_o *CatAndMouseGame__MouseGameZ(System_IO_Stream_o *stream, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  CatAndMouseGame_c *v4; // x0

  if ( (byte_4C563C6 & 1) == 0 )
  {
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    byte_4C563C6 = 1;
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
  __int64 v11; // x1

  if ( (byte_4C563EB & 1) == 0 )
  {
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    byte_4C563EB = 1;
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
    sub_1C3E7C0(UTF8, v11);
  }
  return System_String__TrimEnd_63693160(UTF8, 0, 0);
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
  __int64 v11; // x1
  System_Security_Cryptography_ICryptoTransform_o *v12; // x19
  CatAndMouseGame_DataDecryptor_o *v13; // x23
  const MethodInfo *v14; // x4
  __int64 v15; // x0
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  System_Byte_array *v18; // x22
  CatAndMouseGame_DataDecryptor_c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0
  System_Security_Cryptography_ICryptoTransform_c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0

  if ( (byte_4C563F0 & 1) == 0 )
  {
    sub_1C3E564(&CatAndMouseGame_DataDecryptor_TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Security_Cryptography_RijndaelManaged_TypeInfo);
    byte_4C563F0 = 1;
  }
  v9 = (System_Security_Cryptography_RijndaelManaged_o *)sub_1C3E7B0(System_Security_Cryptography_RijndaelManaged_TypeInfo);
  System_Security_Cryptography_RijndaelManaged___ctor(v9, 0);
  if ( !v9 )
    sub_1C3E7C0(v10, v11);
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
  v12 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, System_Byte_array *, System_Byte_array *, const MethodInfo *))v9->klass->vtable._23_CreateDecryptor.methodPtr)(
                                                             v9,
                                                             home,
                                                             info,
                                                             v9->klass->vtable._23_CreateDecryptor.method);
  v13 = (CatAndMouseGame_DataDecryptor_o *)sub_1C3E7B0(CatAndMouseGame_DataDecryptor_TypeInfo);
  CatAndMouseGame_DataDecryptor___ctor(v13, v12, data, isCompress, v14);
  if ( !v13 )
    sub_1C3E7C0(v15, v16);
  CatAndMouseGame_DataDecryptor__ApplyWrite(v13, v16);
  v18 = CatAndMouseGame_DataDecryptor__ToByteArray(v13, v17);
  klass = v13->klass;
  v20 = *(unsigned __int16 *)&v13->klass->_2.rank;
  if ( *(_WORD *)&v13->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v20;
      p_offset += 4;
      if ( !v20 )
        goto LABEL_9;
    }
    v22 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_9:
    v22 = sub_1C8ED7C(v13, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(CatAndMouseGame_DataDecryptor_o *, _QWORD))v22)(v13, *(_QWORD *)(v22 + 8));
  if ( v12 )
  {
    v23 = v12->klass;
    v24 = *(unsigned __int16 *)&v12->klass->_2.rank;
    if ( *(_WORD *)&v12->klass->_2.rank )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_16;
      }
      v26 = (__int64)&v23->vtable[*v25];
    }
    else
    {
LABEL_16:
      v26 = sub_1C8ED7C(v12, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Security_Cryptography_ICryptoTransform_o *, _QWORD))v26)(v12, *(_QWORD *)(v26 + 8));
  }
  return v18;
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
  __int64 v10; // x1
  System_Security_Cryptography_ICryptoTransform_o *v11; // x20
  System_Security_Cryptography_CryptoStream_o *v12; // x21

  if ( (byte_4C563F1 & 1) == 0 )
  {
    sub_1C3E564(&System_Security_Cryptography_CryptoStream_TypeInfo);
    sub_1C3E564(&System_Security_Cryptography_RijndaelManaged_TypeInfo);
    byte_4C563F1 = 1;
  }
  v8 = (System_Security_Cryptography_RijndaelManaged_o *)sub_1C3E7B0(System_Security_Cryptography_RijndaelManaged_TypeInfo);
  System_Security_Cryptography_RijndaelManaged___ctor(v8, 0);
  if ( !v8 )
    sub_1C3E7C0(v9, v10);
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
  v11 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, System_Byte_array *, System_Byte_array *, const MethodInfo *))v8->klass->vtable._23_CreateDecryptor.methodPtr)(
                                                             v8,
                                                             home,
                                                             info,
                                                             v8->klass->vtable._23_CreateDecryptor.method);
  v12 = (System_Security_Cryptography_CryptoStream_o *)sub_1C3E7B0(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v12, outputStream, v11, 1, 0);
  return v12;
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
  __int64 v11; // x1
  System_Security_Cryptography_ICryptoTransform_o *v12; // x22
  System_Security_Cryptography_CryptoStream_o *v13; // x21
  ICSharpCode_SharpZipLib_GZip_GZipInputStream_o *v14; // x19

  if ( (byte_4C563EE & 1) == 0 )
  {
    sub_1C3E564(&System_Security_Cryptography_CryptoStream_TypeInfo);
    sub_1C3E564(&ICSharpCode_SharpZipLib_GZip_GZipInputStream_TypeInfo);
    sub_1C3E564(&System_Security_Cryptography_RijndaelManaged_TypeInfo);
    byte_4C563EE = 1;
  }
  v9 = (System_Security_Cryptography_RijndaelManaged_o *)sub_1C3E7B0(System_Security_Cryptography_RijndaelManaged_TypeInfo);
  System_Security_Cryptography_RijndaelManaged___ctor(v9, 0);
  if ( !v9 )
    sub_1C3E7C0(v10, v11);
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
  v12 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, System_Byte_array *, System_Byte_array *, const MethodInfo *))v9->klass->vtable._23_CreateDecryptor.methodPtr)(
                                                             v9,
                                                             home,
                                                             info,
                                                             v9->klass->vtable._23_CreateDecryptor.method);
  v13 = (System_Security_Cryptography_CryptoStream_o *)sub_1C3E7B0(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v13, stream, v12, 0, 0);
  if ( isCompress )
  {
    v14 = (ICSharpCode_SharpZipLib_GZip_GZipInputStream_o *)sub_1C3E7B0(ICSharpCode_SharpZipLib_GZip_GZipInputStream_TypeInfo);
    ICSharpCode_SharpZipLib_GZip_GZipInputStream___ctor(v14, (System_IO_Stream_o *)v13, 0);
    return (System_IO_Stream_o *)v14;
  }
  return (System_IO_Stream_o *)v13;
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
  __int64 v11; // x1
  __int64 v12; // x0
  __int64 v13; // x1
  System_Security_Cryptography_ICryptoTransform_o *v14; // x23
  __int64 v15; // x22
  System_IO_MemoryStream_o *v16; // x19
  System_Security_Cryptography_CryptoStream_o *v17; // x20
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x0
  __int64 v21; // x1
  unsigned int v22; // w8
  System_IO_MemoryStream_o *v23; // x21
  System_IO_MemoryStream_o *v24; // x23
  ICSharpCode_SharpZipLib_GZip_GZipInputStream_o *v25; // x22
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x24
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x0
  __int64 v34; // x1

  if ( (byte_4C563EF & 1) == 0 )
  {
    sub_1C3E564(&byte___TypeInfo);
    sub_1C3E564(&System_Security_Cryptography_CryptoStream_TypeInfo);
    sub_1C3E564(&ICSharpCode_SharpZipLib_GZip_GZipInputStream_TypeInfo);
    sub_1C3E564(&System_IO_MemoryStream_TypeInfo);
    sub_1C3E564(&System_Security_Cryptography_RijndaelManaged_TypeInfo);
    byte_4C563EF = 1;
  }
  v9 = (System_Security_Cryptography_RijndaelManaged_o *)sub_1C3E7B0(System_Security_Cryptography_RijndaelManaged_TypeInfo);
  System_Security_Cryptography_RijndaelManaged___ctor(v9, 0);
  if ( !v9 )
    sub_1C3E7C0(v10, v11);
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
  v12 = ((__int64 (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, System_Byte_array *, System_Byte_array *, const MethodInfo *))v9->klass->vtable._23_CreateDecryptor.methodPtr)(
          v9,
          home,
          info,
          v9->klass->vtable._23_CreateDecryptor.method);
  if ( !data )
    sub_1C3E7C0(v12, v13);
  v14 = (System_Security_Cryptography_ICryptoTransform_o *)v12;
  v15 = sub_1C3E60C(byte___TypeInfo, LODWORD(data->max_length));
  v16 = (System_IO_MemoryStream_o *)sub_1C3E7B0(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_64458944(v16, data, 0);
  v17 = (System_Security_Cryptography_CryptoStream_o *)sub_1C3E7B0(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v17, (System_IO_Stream_o *)v16, v14, 0, 0);
  if ( !v15 )
    sub_1C3E7C0(v18, v19);
  if ( !v17 )
    sub_1C3E7C0(v18, v19);
  v20 = ((__int64 (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v17->klass->vtable._31_Read.methodPtr)(
          v17,
          v15,
          0,
          *(unsigned int *)(v15 + 24),
          v17->klass->vtable._31_Read.method);
  if ( isCompress )
  {
    v22 = *(_DWORD *)(v15 + 24);
    if ( !v22 )
      sub_1C3E7C8(v20, v21);
    if ( *(_BYTE *)(v15 + 32) == 66 )
    {
      if ( v22 <= 1 )
        sub_1C3E7C8(v20, v21);
      if ( *(_BYTE *)(v15 + 33) == 90 )
      {
        v15 = 0;
        if ( !v16 )
          goto LABEL_24;
        goto LABEL_23;
      }
    }
    v23 = (System_IO_MemoryStream_o *)sub_1C3E7B0(System_IO_MemoryStream_TypeInfo);
    System_IO_MemoryStream___ctor(v23, 0);
    v24 = (System_IO_MemoryStream_o *)sub_1C3E7B0(System_IO_MemoryStream_TypeInfo);
    System_IO_MemoryStream___ctor_64458944(v24, (System_Byte_array *)v15, 0);
    v25 = (ICSharpCode_SharpZipLib_GZip_GZipInputStream_o *)sub_1C3E7B0(ICSharpCode_SharpZipLib_GZip_GZipInputStream_TypeInfo);
    ICSharpCode_SharpZipLib_GZip_GZipInputStream___ctor(v25, (System_IO_Stream_o *)v24, 0);
    v26 = sub_1C3E60C(byte___TypeInfo, 0x4000);
    v28 = v26;
    if ( !v26 )
      sub_1C3E7C0(0, v27);
    if ( !v25 )
      sub_1C3E7C0(v26, v27);
    while ( 1 )
    {
      v29 = ((__int64 (__fastcall *)(ICSharpCode_SharpZipLib_GZip_GZipInputStream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v25->klass->vtable._31_Read.methodPtr)(
              v25,
              v28,
              0,
              *(unsigned int *)(v28 + 24),
              v25->klass->vtable._31_Read.method);
      if ( (int)v29 <= 0 )
        break;
      if ( !v23 )
        sub_1C3E7C0(v29, v30);
      ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v23->klass->vtable._34_Write.methodPtr)(
        v23,
        v28,
        0,
        (unsigned int)v29,
        v23->klass->vtable._34_Write.method);
    }
    v31 = ((__int64 (__fastcall *)(ICSharpCode_SharpZipLib_GZip_GZipInputStream_o *, const MethodInfo *))v25->klass->vtable._18_Close.methodPtr)(
            v25,
            v25->klass->vtable._18_Close.method);
    if ( !v23 )
      sub_1C3E7C0(v31, v32);
    v33 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v23->klass->vtable._40_ToArray.methodPtr)(
            v23,
            v23->klass->vtable._40_ToArray.method);
    if ( !v24 )
      sub_1C3E7C0(v33, v34);
    v15 = v33;
    ((void (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v24->klass->vtable._18_Close.methodPtr)(
      v24,
      v24->klass->vtable._18_Close.method);
    ((void (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v23->klass->vtable._18_Close.methodPtr)(
      v23,
      v23->klass->vtable._18_Close.method);
  }
  if ( v16 )
LABEL_23:
    ((void (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v16->klass->vtable._18_Close.methodPtr)(
      v16,
      v16->klass->vtable._18_Close.method);
LABEL_24:
  ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, const MethodInfo *))v17->klass->vtable._18_Close.methodPtr)(
    v17,
    v17->klass->vtable._18_Close.method);
  return (System_Byte_array *)v15;
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
  __int64 v12; // x1

  if ( (byte_4C563ED & 1) == 0 )
  {
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    sub_1C3E564(&MasterDataUnpakcer_TypeInfo);
    byte_4C563ED = 1;
  }
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v9 = CatAndMouseGame__MouseHomeSub(data, home, info, isCompress, method);
  v10 = (MasterDataUnpakcer_o *)sub_1C3E7B0(MasterDataUnpakcer_TypeInfo);
  MasterDataUnpakcer___ctor(v10, 0);
  if ( !v10 )
    sub_1C3E7C0(v11, v12);
  return MasterDataUnpakcer__Unpack_41010164(v10, v9, 0);
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
  __int64 v12; // x1

  if ( (byte_4C563EC & 1) == 0 )
  {
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    sub_1C3E564(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    byte_4C563EC = 1;
  }
  v9 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C3E7B0(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v9, 0);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v11 = CatAndMouseGame__MouseHomeSub(data, home, info, isCompress, v10);
  if ( !v9 )
    sub_1C3E7C0(v11, v12);
  return MiniMessagePack_MiniMessagePacker__Unpack_39767336(v9, v11, 0);
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
  __int64 v11; // x1
  System_Security_Cryptography_ICryptoTransform_o *v12; // x23
  System_IO_MemoryStream_o *v13; // x19
  System_Security_Cryptography_CryptoStream_o *v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  System_IO_MemoryStream_o *v17; // x21
  ICSharpCode_SharpZipLib_GZip_GZipInputStream_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x23
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x0
  __int64 v25; // x1
  System_Byte_array *v26; // x23
  __int64 v27; // x0
  __int64 v28; // x1

  if ( (byte_4C563F2 & 1) == 0 )
  {
    sub_1C3E564(&byte___TypeInfo);
    sub_1C3E564(&System_Security_Cryptography_CryptoStream_TypeInfo);
    sub_1C3E564(&ICSharpCode_SharpZipLib_GZip_GZipInputStream_TypeInfo);
    sub_1C3E564(&System_IO_MemoryStream_TypeInfo);
    sub_1C3E564(&System_Security_Cryptography_RijndaelManaged_TypeInfo);
    byte_4C563F2 = 1;
  }
  v9 = (System_Security_Cryptography_RijndaelManaged_o *)sub_1C3E7B0(System_Security_Cryptography_RijndaelManaged_TypeInfo);
  System_Security_Cryptography_RijndaelManaged___ctor(v9, 0);
  if ( !v9 )
    sub_1C3E7C0(v10, v11);
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
  v12 = (System_Security_Cryptography_ICryptoTransform_o *)((__int64 (__fastcall *)(System_Security_Cryptography_RijndaelManaged_o *, System_Byte_array *, System_Byte_array *, const MethodInfo *))v9->klass->vtable._23_CreateDecryptor.methodPtr)(
                                                             v9,
                                                             home,
                                                             info,
                                                             v9->klass->vtable._23_CreateDecryptor.method);
  v13 = (System_IO_MemoryStream_o *)sub_1C3E7B0(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_64458944(v13, data, 0);
  v14 = (System_Security_Cryptography_CryptoStream_o *)sub_1C3E7B0(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v14, (System_IO_Stream_o *)v13, v12, 0, 0);
  if ( isCompress )
  {
    v17 = (System_IO_MemoryStream_o *)sub_1C3E7B0(System_IO_MemoryStream_TypeInfo);
    System_IO_MemoryStream___ctor(v17, 0);
    v18 = (ICSharpCode_SharpZipLib_GZip_GZipInputStream_o *)sub_1C3E7B0(ICSharpCode_SharpZipLib_GZip_GZipInputStream_TypeInfo);
    ICSharpCode_SharpZipLib_GZip_GZipInputStream___ctor(v18, (System_IO_Stream_o *)v14, 0);
    v19 = sub_1C3E60C(byte___TypeInfo, 0x4000);
    v21 = v19;
    if ( !v19 )
      sub_1C3E7C0(0, v20);
    if ( !v18 )
      sub_1C3E7C0(v19, v20);
    while ( 1 )
    {
      v22 = ((__int64 (__fastcall *)(ICSharpCode_SharpZipLib_GZip_GZipInputStream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v18->klass->vtable._31_Read.methodPtr)(
              v18,
              v21,
              0,
              *(unsigned int *)(v21 + 24),
              v18->klass->vtable._31_Read.method);
      if ( (int)v22 <= 0 )
        break;
      if ( !v17 )
        sub_1C3E7C0(v22, v23);
      ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v17->klass->vtable._34_Write.methodPtr)(
        v17,
        v21,
        0,
        (unsigned int)v22,
        v17->klass->vtable._34_Write.method);
    }
    System_IO_Stream__Dispose((System_IO_Stream_o *)v18, 0);
    if ( !v17 )
      sub_1C3E7C0(v27, v28);
    v26 = (System_Byte_array *)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v17->klass->vtable._40_ToArray.methodPtr)(
                                 v17,
                                 v17->klass->vtable._40_ToArray.method);
    System_IO_Stream__Dispose((System_IO_Stream_o *)v17, 0);
  }
  else
  {
    if ( !data )
      sub_1C3E7C0(v15, v16);
    v24 = sub_1C3E60C(byte___TypeInfo, LODWORD(data->max_length));
    v26 = (System_Byte_array *)v24;
    if ( !v24 )
      sub_1C3E7C0(0, v25);
    if ( !v14 )
      sub_1C3E7C0(v24, v25);
    ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v14->klass->vtable._31_Read.methodPtr)(
      v14,
      v24,
      0,
      *(unsigned int *)(v24 + 24),
      v14->klass->vtable._31_Read.method);
  }
  if ( v13 )
    ((void (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v13->klass->vtable._18_Close.methodPtr)(
      v13,
      v13->klass->vtable._18_Close.method);
  if ( v14 )
    ((void (__fastcall *)(System_Security_Cryptography_CryptoStream_o *, const MethodInfo *))v14->klass->vtable._18_Close.methodPtr)(
      v14,
      v14->klass->vtable._18_Close.method);
  return v26;
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
  if ( (byte_4C563D5 & 1) == 0 )
  {
    sub_1C3E564(&byte___TypeInfo);
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    data = (System_Byte_array *)sub_1C3E564(&StringLiteral_15377/*"W0Juh4cFJSYPkebJB9WpswNF51oa6Gm7"*/);
    byte_4C563D5 = 1;
  }
  if ( !v2
    || (v3 = (System_Array_o *)sub_1C3E60C(byte___TypeInfo, (unsigned int)(LODWORD(v2->max_length) - 32)),
        (data = (System_Byte_array *)System_Text_Encoding__get_UTF8(0)) == 0) )
  {
    sub_1C3E7C0(data, method);
  }
  v4 = ((__int64 (__fastcall *)(System_Byte_array *, __int64, const MethodInfo *))data->obj.klass->vtable[18].methodPtr)(
         data,
         StringLiteral_15377/*"W0Juh4cFJSYPkebJB9WpswNF51oa6Gm7"*/,
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
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->infoData, v8, v5, v6);
  System_Array__Copy_65298516(
    (System_Array_o *)v2,
    0,
    (System_Array_o *)CatAndMouseGame_TypeInfo->static_fields->InfoTop,
    0,
    32,
    0);
  System_Array__Copy_65298516((System_Array_o *)v2, 32, v3, 0, LODWORD(v2->max_length) - 32, 0);
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
  if ( (byte_4C563D6 & 1) == 0 )
  {
    sub_1C3E564(&byte___TypeInfo);
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    data = (System_Byte_array *)sub_1C3E564(&StringLiteral_15377/*"W0Juh4cFJSYPkebJB9WpswNF51oa6Gm7"*/);
    byte_4C563D6 = 1;
  }
  if ( !v2
    || (v3 = (System_Array_o *)sub_1C3E60C(byte___TypeInfo, (unsigned int)(LODWORD(v2->max_length) - 32)),
        (data = (System_Byte_array *)System_Text_Encoding__get_UTF8(0)) == 0) )
  {
    sub_1C3E7C0(data, method);
  }
  v4 = ((__int64 (__fastcall *)(System_Byte_array *, __int64, const MethodInfo *))data->obj.klass->vtable[18].methodPtr)(
         data,
         StringLiteral_15377/*"W0Juh4cFJSYPkebJB9WpswNF51oa6Gm7"*/,
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
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->infoData, v8, v5, v6);
  System_Array__Copy_65298516(
    (System_Array_o *)v2,
    0,
    (System_Array_o *)CatAndMouseGame_TypeInfo->static_fields->InfoTop,
    0,
    32,
    0);
  System_Array__Copy_65298516((System_Array_o *)v2, 32, v3, 0, LODWORD(v2->max_length) - 32, 0);
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

  if ( (byte_4C563E0 & 1) == 0 )
  {
    sub_1C3E564(&byte_____TypeInfo);
    sub_1C3E564(&byte___TypeInfo);
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__byte______Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__byte______ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__byte______get_Item__);
    byte_4C563E0 = 1;
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
         (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__byte______ContainsKey__) )
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
                                (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__byte______get_Item__);
      if ( keyCollection )
      {
        if ( !*((_DWORD *)keyCollection + 6) )
          goto LABEL_37;
        v12 = (System_Byte_array *)*((_QWORD *)keyCollection + 4);
        *home = v12;
        sub_1C3E508((CGThumbnailListItem_o *)home, (int32_t)v12, v10, v11);
        keyCollection = (char *)CatAndMouseGame_TypeInfo->static_fields->keyCollection;
        if ( keyCollection )
        {
          keyCollection = (char *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                    (System_Collections_Generic_Dictionary_object__object__o *)keyCollection,
                                    (Il2CppObject *)data,
                                    (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__byte______get_Item__);
          if ( keyCollection )
          {
            if ( *((_DWORD *)keyCollection + 6) > 1u )
            {
              v15 = (System_Byte_array *)*((_QWORD *)keyCollection + 5);
              *info = v15;
              sub_1C3E508((CGThumbnailListItem_o *)info, (int32_t)v15, v13, v14);
              return;
            }
LABEL_37:
            sub_1C3E7C8(keyCollection, home);
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
  v17 = (System_Byte_array *)sub_1C3E60C(byte___TypeInfo, 32);
  *home = v17;
  sub_1C3E508((CGThumbnailListItem_o *)home, (int32_t)v17, v18, v19);
  v20 = (System_Byte_array *)sub_1C3E60C(byte___TypeInfo, 32);
  *info = v20;
  sub_1C3E508((CGThumbnailListItem_o *)info, (int32_t)v20, v21, v22);
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
  keyCollection = (char *)sub_1C3E60C(byte_____TypeInfo, 2);
  if ( !keyCollection )
    goto LABEL_38;
  v32 = keyCollection;
  if ( !*((_DWORD *)keyCollection + 6) )
    goto LABEL_37;
  v33 = *home;
  *((_QWORD *)keyCollection + 4) = *home;
  sub_1C3E508((CGThumbnailListItem_o *)(keyCollection + 32), (int32_t)v33, v30, v31);
  if ( *((_DWORD *)v32 + 6) <= 1u )
    goto LABEL_37;
  v36 = *info;
  *((_QWORD *)v32 + 5) = *info;
  sub_1C3E508((CGThumbnailListItem_o *)(v32 + 40), (int32_t)v36, v34, v35);
  if ( !v29 )
LABEL_38:
    sub_1C3E7C0(keyCollection, home);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)data,
    (Il2CppObject *)v32,
    (const MethodInfo_34757E0 *)Method_System_Collections_Generic_Dictionary_string__byte______Add__);
}


void CatAndMouseGame__SetAssetbundleKeys(Il2CppObject *obj, const MethodInfo *method)
{
  CatAndMouseGame_c *v3; // x0
  void *assetbundleKeyCollection; // x0
  int v5; // w8
  void *v6; // x19
  unsigned int v7; // w21
  __int64 v8; // x23

  if ( (byte_4C563DE & 1) == 0 )
  {
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__string__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_1C3E564(&Method_JsonManager_DeserializeArray_CatAndMouseGame_AssetbundleKeyEntity___);
    sub_1C3E564(&JsonManager_TypeInfo);
    byte_4C563DE = 1;
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
    (const MethodInfo_3475968 *)Method_System_Collections_Generic_Dictionary_string__string__Clear__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  assetbundleKeyCollection = JsonManager__DeserializeArray_object_(
                               obj,
                               (const MethodInfo_3168FB8 *)Method_JsonManager_DeserializeArray_CatAndMouseGame_AssetbundleKeyEntity___);
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
        sub_1C3E7C8(assetbundleKeyCollection, method);
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
        (const MethodInfo_34757CC *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
      v5 = *((_DWORD *)v6 + 6);
      if ( (int)++v7 >= v5 )
        return;
    }
LABEL_18:
    sub_1C3E7C0(assetbundleKeyCollection, method);
  }
}


void CatAndMouseGame__SixHomeBuilding(System_String_o *data, const MethodInfo *method)
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

  if ( (byte_4C563E5 & 1) == 0 )
  {
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    byte_4C563E5 = 1;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0);
  if ( !data )
    goto LABEL_9;
  v5 = UTF8;
  UTF8 = System_String__Substring(data, 32, 0);
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
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->sideData, v10, v7, v8);
  v12 = System_Text_Encoding__get_UTF8(0);
  UTF8 = System_String__Substring_63682392(data, 0, 32, 0);
  if ( !v12 )
LABEL_9:
    sub_1C3E7C0(UTF8, v4);
  v13 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, void *, const MethodInfo *))v12->klass->vtable._18_GetBytes.methodPtr)(
          v12,
          UTF8,
          v12->klass->vtable._18_GetBytes.method);
  v14 = CatAndMouseGame_TypeInfo->static_fields;
  v14->sideTop = (struct System_Byte_array *)v13;
  sub_1C3E508((CGThumbnailListItem_o *)&v14->sideTop, v13, v15, v16);
}


void CatAndMouseGame__ThirdHomeBuilding(System_String_o *data, const MethodInfo *method)
{
  bool isPlaying; // w20
  _QWORD *UTF8; // x0
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x19
  CatAndMouseGame_c *v8; // x0
  unsigned __int64 i; // x20
  __int64 v10; // x8
  __int64 v11; // x8
  unsigned int v12; // w9
  char v13; // w10

  if ( (byte_4C563D7 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Application_TypeInfo);
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    sub_1C3E564(&StringLiteral_21174/*"kzdMtpmzqCHAfx00saU1gIhTjYCuOD1JstqtisXsGYqRVcqrHRydj3k6vJCySu3g"*/);
    byte_4C563D7 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  isPlaying = UnityEngine_Application__get_isPlaying(0);
  UTF8 = System_Text_Encoding__get_UTF8(0);
  if ( !UTF8 )
    goto LABEL_27;
  if ( isPlaying )
    v6 = (*(__int64 (__fastcall **)(_QWORD *, System_String_o *, _QWORD))(*UTF8 + 600LL))(
           UTF8,
           data,
           *(_QWORD *)(*UTF8 + 608LL));
  else
    v6 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(*UTF8 + 600LL))(
           UTF8,
           StringLiteral_21174/*"kzdMtpmzqCHAfx00saU1gIhTjYCuOD1JstqtisXsGYqRVcqrHRydj3k6vJCySu3g"*/,
           *(_QWORD *)(*UTF8 + 608LL));
  v7 = v6;
  v8 = CatAndMouseGame_TypeInfo;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v8 = CatAndMouseGame_TypeInfo;
  }
  System_Array__Copy_65298516((System_Array_o *)v7, 0, (System_Array_o *)v8->static_fields->BattleKey, 0, 32, 0);
  if ( !v7 )
LABEL_27:
    sub_1C3E7C0(UTF8, v5);
  System_Array__Copy_65298516(
    (System_Array_o *)v7,
    32,
    (System_Array_o *)CatAndMouseGame_TypeInfo->static_fields->BattleIV,
    0,
    *(_DWORD *)(v7 + 24) - 32,
    0);
  if ( *(int *)(v7 + 24) >= 1 )
  {
    for ( i = 0; (__int64)i < *(int *)(v7 + 24); ++i )
    {
      UTF8 = &CatAndMouseGame_TypeInfo->_1.image;
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
        UTF8 = &CatAndMouseGame_TypeInfo->_1.image;
      }
      v10 = UTF8[23];
      if ( (i & 1) != 0 )
      {
        if ( i >= *(unsigned int *)(v7 + 24) )
          goto LABEL_26;
        v11 = *(_QWORD *)(v10 + 32);
        if ( !v11 )
          goto LABEL_27;
        v12 = (unsigned int)i >> 1;
        if ( (unsigned int)i >> 1 >= *(_DWORD *)(v11 + 24) )
LABEL_26:
          sub_1C3E7C8(UTF8, v5);
      }
      else
      {
        if ( i >= *(unsigned int *)(v7 + 24) )
          goto LABEL_26;
        v11 = *(_QWORD *)(v10 + 40);
        if ( !v11 )
          goto LABEL_27;
        v12 = (unsigned int)i >> 1;
        if ( (unsigned int)i >> 1 >= *(_DWORD *)(v11 + 24) )
          goto LABEL_26;
      }
      v13 = *(_BYTE *)(v7 + 32 + i);
      *(_BYTE *)(v11 + v12 + 32) = v13;
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
  __int64 v12; // x1
  System_IO_MemoryStream_o *v13; // x0
  int32_t max_length; // w1
  struct System_IO_MemoryStream_o *v15; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_IO_Stream_o *memoryStream; // x21
  System_Security_Cryptography_CryptoStream_o *v19; // x22
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4C563F3 & 1) == 0 )
  {
    sub_1C3E564(&System_Security_Cryptography_CryptoStream_TypeInfo);
    sub_1C3E564(&System_IO_MemoryStream_TypeInfo);
    byte_4C563F3 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.data = data;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)data, v9, v10);
  this->fields.isCompress = isCompress;
  if ( !data )
    sub_1C3E7C0(v11, v12);
  v13 = (System_IO_MemoryStream_o *)sub_1C3E7B0(System_IO_MemoryStream_TypeInfo);
  max_length = data->max_length;
  v15 = v13;
  System_IO_MemoryStream___ctor_64458568(v13, max_length, 0);
  this->fields.memoryStream = v15;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.memoryStream, (int32_t)v15, v16, v17);
  memoryStream = (System_IO_Stream_o *)this->fields.memoryStream;
  v19 = (System_Security_Cryptography_CryptoStream_o *)sub_1C3E7B0(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor(v19, memoryStream, decryptor, 1, 0);
  this->fields.cryptoStream = v19;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.cryptoStream, (int32_t)v19, v20, v21);
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
  if ( (byte_4C563F4 & 1) == 0 )
  {
    sub_1C3E564(&ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo);
    sub_1C3E564(&byte___TypeInfo);
    this = (CatAndMouseGame_DataDecryptor_o *)sub_1C3E564(&System_IO_MemoryStream_TypeInfo);
    byte_4C563F4 = 1;
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
        data = v2->fields.data;
        v6 = v7;
      }
      while ( this );
    }
LABEL_21:
    sub_1C3E7C0(this, data);
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
      v8 = (System_IO_MemoryStream_o *)sub_1C3E7B0(System_IO_MemoryStream_TypeInfo);
      System_IO_MemoryStream___ctor(v8, 0);
      v2->fields.memoryStreamBZip = v8;
      p_memoryStreamBZip = (CatAndMouseGame_DataDecryptor_o **)&v2->fields.memoryStreamBZip;
      sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.memoryStreamBZip, (int32_t)v8, v10, v11);
      memoryStream = (System_IO_Stream_o *)v2->fields.memoryStream;
      v13 = (ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_o *)sub_1C3E7B0(ICSharpCode_SharpZipLib_BZip2_BZip2InputStream_TypeInfo);
      ICSharpCode_SharpZipLib_BZip2_BZip2InputStream___ctor(v13, memoryStream, 0);
      v2->fields.bzipStream = v13;
      p_bzipStream = (CGThumbnailListItem_o *)&v2->fields.bzipStream;
      sub_1C3E508(p_bzipStream, (int32_t)v13, v15, v16);
      this = (CatAndMouseGame_DataDecryptor_o *)sub_1C3E60C(byte___TypeInfo, 0x4000);
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
  if ( (byte_4C563F6 & 1) == 0 )
  {
    sub_1C3E564(&System_GC_TypeInfo);
    byte_4C563F6 = 1;
  }
  ((void (__fastcall *)(CatAndMouseGame_DataDecryptor_o *, __int64, const MethodInfo *))this->klass->vtable._5_Dispose.methodPtr)(
    this,
    1,
    this->klass->vtable._5_Dispose.method);
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__SuppressFinalize((Il2CppObject *)this, 0);
}


void CatAndMouseGame_DataDecryptor__Dispose_41289344(
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
        sub_1C3E508((CGThumbnailListItem_o *)&this->fields.memoryStream, 0, v5, v6);
      }
      cryptoStream = (System_IO_Stream_o *)this->fields.cryptoStream;
      if ( cryptoStream )
      {
        System_IO_Stream__Dispose(cryptoStream, 0);
        this->fields.cryptoStream = 0;
        sub_1C3E508((CGThumbnailListItem_o *)&this->fields.cryptoStream, 0, v8, v9);
      }
      memoryStreamBZip = (System_IO_Stream_o *)this->fields.memoryStreamBZip;
      if ( memoryStreamBZip )
      {
        System_IO_Stream__Dispose(memoryStreamBZip, 0);
        this->fields.memoryStreamBZip = 0;
        sub_1C3E508((CGThumbnailListItem_o *)&this->fields.memoryStreamBZip, 0, v11, v12);
      }
      bzipStream = (System_IO_Stream_o *)this->fields.bzipStream;
      if ( bzipStream )
      {
        System_IO_Stream__Dispose(bzipStream, 0);
        this->fields.bzipStream = 0;
        sub_1C3E508((CGThumbnailListItem_o *)&this->fields.bzipStream, 0, v14, v15);
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
  __int64 v6; // x1
  struct System_IO_MemoryStream_o *v7; // x8
  int v8; // w20
  struct System_IO_MemoryStream_o *v9; // x8
  System_IO_MemoryStream_c *klass; // x9
  __int64 (__fastcall *methodPtr)(struct System_IO_MemoryStream_o *, const MethodInfo *); // x2
  const MethodInfo *v12; // x1
  struct System_IO_MemoryStream_o *memoryStream; // x0
  struct System_IO_MemoryStream_o *v14; // x8
  int v15; // w20
  __int64 v16; // x10
  int v17; // w11
  System_Byte_array *result; // x0
  _QWORD *v19; // x19
  __int64 v20; // x8
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x19

  if ( (byte_4C563F5 & 1) == 0 )
  {
    sub_1C3E564(&byte___TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Empty_byte___);
    byte_4C563F5 = 1;
  }
  if ( !this->fields.isCompress )
  {
    memoryStream = this->fields.memoryStream;
    if ( memoryStream )
    {
      v5 = (_QWORD *)((__int64 (__fastcall *)(struct System_IO_MemoryStream_o *, const MethodInfo *))memoryStream->klass->vtable._38_get_Capacity.methodPtr)(
                       memoryStream,
                       memoryStream->klass->vtable._38_get_Capacity.method);
      v14 = this->fields.memoryStream;
      if ( v14 )
      {
        v15 = (int)v5;
        v5 = ((_QWORD *(__fastcall *)(struct System_IO_MemoryStream_o *__return_ptr, struct System_IO_MemoryStream_o *, const MethodInfo *))v14->klass->vtable._11_get_Length.methodPtr)(
               v14,
               this->fields.memoryStream,
               v14->klass->vtable._11_get_Length.method);
        v9 = this->fields.memoryStream;
        if ( v9 )
        {
          v16 = (__int64)v5 + 510;
          v17 = v15 + 255;
          if ( (__int64)v5 + 255 >= 0 )
            v16 = (__int64)v5 + 255;
          klass = v9->klass;
          if ( v17 < 0 )
            v17 = v15 + 510;
          if ( (__int64)v17 >> 8 != v16 >> 8 )
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
    v7 = this->fields.memoryStreamBZip;
    if ( v7 )
    {
      v8 = (int)v5;
      v5 = ((_QWORD *(__fastcall *)(struct System_IO_MemoryStream_o *__return_ptr, struct System_IO_MemoryStream_o *, const MethodInfo *))v7->klass->vtable._11_get_Length.methodPtr)(
             v7,
             this->fields.memoryStreamBZip,
             v7->klass->vtable._11_get_Length.method);
      v9 = this->fields.memoryStreamBZip;
      if ( v9 )
      {
        klass = v9->klass;
        if ( v5 != (_QWORD *)v8 )
        {
LABEL_17:
          methodPtr = (__int64 (__fastcall *)(struct System_IO_MemoryStream_o *, const MethodInfo *))klass->vtable._40_ToArray.methodPtr;
          v12 = klass->vtable._40_ToArray.method;
          return (System_Byte_array *)methodPtr(v9, v12);
        }
LABEL_8:
        methodPtr = (__int64 (__fastcall *)(struct System_IO_MemoryStream_o *, const MethodInfo *))klass->vtable._37_GetBuffer.methodPtr;
        v12 = klass->vtable._37_GetBuffer.method;
        return (System_Byte_array *)methodPtr(v9, v12);
      }
    }
LABEL_32:
    sub_1C3E7C0(v5, v6);
  }
  v19 = Method_System_Linq_Enumerable_Empty_byte___;
  v20 = *((_QWORD *)Method_System_Linq_Enumerable_Empty_byte___ + 7);
  if ( !v20 )
  {
    sub_1C8ECD4(Method_System_Linq_Enumerable_Empty_byte___);
    v20 = v19[7];
  }
  v21 = *(_QWORD *)(v20 + 16);
  if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
    v21 = sub_1C8EC78(inited);
  if ( !*(_DWORD *)(v21 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v21);
  v22 = *(_QWORD *)(v19[7] + 16LL);
  if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
    v22 = sub_1C8EC78(inited);
  v23 = **(_QWORD **)(v22 + 184);
  if ( v23 )
  {
    result = (System_Byte_array *)sub_1C3E6A0(v23, byte___TypeInfo);
    if ( result )
      return result;
    sub_1C3EA80(v23);
  }
  return 0;
}