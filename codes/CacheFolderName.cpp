void __fastcall CacheFolderName___cctor(const MethodInfo *method)
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
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v11; // x19
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v16; // x19
  struct CacheFolderName_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_4A07B80 & 1) == 0 )
  {
    sub_1B686D4(&CacheFolderName_TypeInfo, v1);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__, v2);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string___ctor__, v3);
    sub_1B686D4(&System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__TypeInfo, v4);
    sub_1B686D4(&StringLiteral_8861/*"MasterDataCaches"*/, v5);
    sub_1B686D4(&StringLiteral_17098/*"bfaa"*/, v6);
    sub_1B686D4(&StringLiteral_16556/*"a77d"*/, v7);
    sub_1B686D4(&StringLiteral_10543/*"PaymentHistorys"*/, v8);
    sub_1B686D4(&StringLiteral_18368/*"d713"*/, v9);
    sub_1B686D4(&StringLiteral_2487/*"AssetCaches"*/, v10);
    byte_4A07B80 = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B68920(System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v11,
    (const MethodInfo_31625DC *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string___ctor__);
  if ( !v11
    || (System_Collections_Generic_Dictionary_Int32Enum__object___Add(
          v11,
          0,
          (Il2CppObject *)StringLiteral_2487/*"AssetCaches"*/,
          (const MethodInfo_3162FB0 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__),
        System_Collections_Generic_Dictionary_Int32Enum__object___Add(
          v11,
          1,
          (Il2CppObject *)StringLiteral_8861/*"MasterDataCaches"*/,
          (const MethodInfo_3162FB0 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__),
        System_Collections_Generic_Dictionary_Int32Enum__object___Add(
          v11,
          2,
          (Il2CppObject *)StringLiteral_10543/*"PaymentHistorys"*/,
          (const MethodInfo_3162FB0 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__),
        CacheFolderName_TypeInfo->static_fields->folderList = (struct System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__o *)v11,
        sub_1B68678(
          (ServantStatusBattleListViewItem_o *)CacheFolderName_TypeInfo->static_fields,
          (int32_t)v11,
          v14,
          v15),
        v16 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B68920(System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__TypeInfo),
        System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
          v16,
          (const MethodInfo_31625DC *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string___ctor__),
        !v16) )
  {
    sub_1B68930(v12, v13);
  }
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v16,
    0,
    (Il2CppObject *)StringLiteral_18368/*"d713"*/,
    (const MethodInfo_3162FB0 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v16,
    1,
    (Il2CppObject *)StringLiteral_17098/*"bfaa"*/,
    (const MethodInfo_3162FB0 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v16,
    2,
    (Il2CppObject *)StringLiteral_16556/*"a77d"*/,
    (const MethodInfo_3162FB0 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  static_fields = CacheFolderName_TypeInfo->static_fields;
  static_fields->convertedFolderList = (struct System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__o *)v16;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->convertedFolderList, (int32_t)v16, v18, v19);
}


void __fastcall CacheFolderName___ctor(CacheFolderName_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall CacheFolderName__convertFolderName(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  CacheFolderName_c *v13; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *folderList; // x0
  CacheFolderName_c *v15; // x0
  int32_t key; // w20
  __int64 v17; // x1
  CacheFolderName_c *v18; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *convertedFolderList; // x0
  __int64 v20; // x1
  CacheFolderName_c *v21; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v22; // x0
  Il2CppObject *Item; // x19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v25; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v26; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_4A07B7F & 1) == 0 )
  {
    sub_1B686D4(&CacheFolderName_TypeInfo, method);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsValue__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__GetEnumerator__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__, v6);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__Dispose__,
      v7);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__MoveNext__,
      v8);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__get_Current__,
      v9);
    sub_1B686D4(&Method_System_Collections_Generic_KeyValuePair_CacheFolderName_FOLDER_NAME__string__get_Key__, v10);
    sub_1B686D4(&Method_System_Collections_Generic_KeyValuePair_CacheFolderName_FOLDER_NAME__string__get_Value__, v11);
    sub_1B686D4(&StringLiteral_1/*""*/, v12);
    byte_4A07B7F = 1;
  }
  v13 = CacheFolderName_TypeInfo;
  memset(&v26, 0, sizeof(v26));
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
    v13 = CacheFolderName_TypeInfo;
  }
  folderList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v13->static_fields->folderList;
  if ( !folderList )
    goto LABEL_26;
  if ( !System_Collections_Generic_Dictionary_Int32Enum__object___ContainsValue(
          folderList,
          (Il2CppObject *)name,
          (const MethodInfo_31631C8 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsValue__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  v15 = CacheFolderName_TypeInfo;
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
    v15 = CacheFolderName_TypeInfo;
  }
  folderList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v15->static_fields->folderList;
  if ( !folderList )
LABEL_26:
    sub_1B68930(folderList, method);
  System_Collections_Generic_Dictionary_Int32Enum__object___GetEnumerator(
    &v25,
    folderList,
    (const MethodInfo_31633E8 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__GetEnumerator__);
  v26 = v25;
  do
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_Int32Enum__object___MoveNext(
            &v26,
            (const MethodInfo_3280284 *)Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__MoveNext__) )
    {
      System_Collections_Generic_Dictionary_Enumerator_Int32Enum__object___Dispose(
        &v26,
        (const MethodInfo_32803A8 *)Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__Dispose__);
      return (System_String_o *)StringLiteral_1/*""*/;
    }
    key = (int32_t)v26.fields._current.fields.key;
  }
  while ( !System_String__op_Equality((System_String_o *)v26.fields._current.fields.value, name, 0LL) );
  v18 = CacheFolderName_TypeInfo;
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
    v18 = CacheFolderName_TypeInfo;
  }
  convertedFolderList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v18->static_fields->convertedFolderList;
  if ( !convertedFolderList )
    sub_1B68930(0LL, v17);
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         convertedFolderList,
         key,
         (const MethodInfo_31631A4 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__) )
  {
    v21 = CacheFolderName_TypeInfo;
    if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
      v21 = CacheFolderName_TypeInfo;
    }
    v22 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v21->static_fields->convertedFolderList;
    if ( !v22 )
      sub_1B68930(0LL, v20);
    Item = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
             v22,
             key,
             (const MethodInfo_3162F10 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__);
  }
  else
  {
    Item = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  System_Collections_Generic_Dictionary_Enumerator_Int32Enum__object___Dispose(
    &v26,
    (const MethodInfo_32803A8 *)Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__Dispose__);
  return (System_String_o *)Item;
}


System_String_o *__fastcall CacheFolderName__getFolderName(int32_t name, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CacheFolderName_c *v6; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *convertedFolderList; // x0
  CacheFolderName_c *v8; // x0

  if ( (byte_4A07B7D & 1) == 0 )
  {
    sub_1B686D4(&CacheFolderName_TypeInfo, method);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__, v4);
    sub_1B686D4(&StringLiteral_1/*""*/, v5);
    byte_4A07B7D = 1;
  }
  v6 = CacheFolderName_TypeInfo;
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
    v6 = CacheFolderName_TypeInfo;
  }
  convertedFolderList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v6->static_fields->convertedFolderList;
  if ( !convertedFolderList )
    goto LABEL_12;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         convertedFolderList,
         name,
         (const MethodInfo_31631A4 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__) )
  {
    v8 = CacheFolderName_TypeInfo;
    if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
      v8 = CacheFolderName_TypeInfo;
    }
    convertedFolderList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v8->static_fields->convertedFolderList;
    if ( convertedFolderList )
      return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                  convertedFolderList,
                                  name,
                                  (const MethodInfo_3162F10 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__);
LABEL_12:
    sub_1B68930(convertedFolderList, method);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall CacheFolderName__getFolderNameNotConverted(int32_t name, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CacheFolderName_c *v6; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *folderList; // x0
  CacheFolderName_c *v8; // x0

  if ( (byte_4A07B7E & 1) == 0 )
  {
    sub_1B686D4(&CacheFolderName_TypeInfo, method);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__, v4);
    sub_1B686D4(&StringLiteral_1/*""*/, v5);
    byte_4A07B7E = 1;
  }
  v6 = CacheFolderName_TypeInfo;
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
    v6 = CacheFolderName_TypeInfo;
  }
  folderList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v6->static_fields->folderList;
  if ( !folderList )
    goto LABEL_12;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         folderList,
         name,
         (const MethodInfo_31631A4 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__) )
  {
    v8 = CacheFolderName_TypeInfo;
    if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
      v8 = CacheFolderName_TypeInfo;
    }
    folderList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v8->static_fields->folderList;
    if ( folderList )
      return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                  folderList,
                                  name,
                                  (const MethodInfo_3162F10 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__);
LABEL_12:
    sub_1B68930(folderList, method);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}