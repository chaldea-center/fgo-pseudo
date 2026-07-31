void CacheFolderName___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v10; // x19
  struct CacheFolderName_StaticFields *static_fields; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5937427 & 1) == 0 )
  {
    sub_21FFC50(&CacheFolderName_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__TypeInfo);
    sub_21FFC50(&StringLiteral_9296/*"MasterDataCaches"*/);
    sub_21FFC50(&StringLiteral_17832/*"bfaa"*/);
    sub_21FFC50(&StringLiteral_17272/*"a77d"*/);
    sub_21FFC50(&StringLiteral_11018/*"PaymentHistorys"*/);
    sub_21FFC50(&StringLiteral_19233/*"d713"*/);
    sub_21FFC50(&StringLiteral_2482/*"AssetCaches"*/);
    byte_5937427 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_3F88244 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string___ctor__);
  if ( !v1
    || (System_Collections_Generic_Dictionary_Int32Enum__object___Add(
          v1,
          0,
          (Il2CppObject *)StringLiteral_2482/*"AssetCaches"*/,
          (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__),
        System_Collections_Generic_Dictionary_Int32Enum__object___Add(
          v1,
          1,
          (Il2CppObject *)StringLiteral_9296/*"MasterDataCaches"*/,
          (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__),
        System_Collections_Generic_Dictionary_Int32Enum__object___Add(
          v1,
          2,
          (Il2CppObject *)StringLiteral_11018/*"PaymentHistorys"*/,
          (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__),
        CacheFolderName_TypeInfo->static_fields->folderList = (struct System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__o *)v1,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)CacheFolderName_TypeInfo->static_fields,
          (int32_t)v1,
          v4,
          v5,
          v6,
          v7,
          v8,
          v9),
        v10 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__TypeInfo),
        System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
          v10,
          (const MethodInfo_3F88244 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string___ctor__),
        !v10) )
  {
    sub_21FFECC(v2, v3);
  }
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v10,
    0,
    (Il2CppObject *)StringLiteral_19233/*"d713"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v10,
    1,
    (Il2CppObject *)StringLiteral_17832/*"bfaa"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v10,
    2,
    (Il2CppObject *)StringLiteral_17272/*"a77d"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  static_fields = CacheFolderName_TypeInfo->static_fields;
  static_fields->convertedFolderList = (struct System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__o *)v10;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->convertedFolderList,
    (int32_t)v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


void CacheFolderName___ctor(CacheFolderName_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *CacheFolderName__convertFolderName(System_String_o *name, const MethodInfo *method)
{
  __int64 v2; // x2
  CacheFolderName_c *v4; // x0
  int v5; // w8
  System_Collections_Generic_Dictionary_TKey__TValue__o *folderList; // x0
  __int64 v7; // x2
  CacheFolderName_c *v8; // x0
  int32_t key; // w20
  __int64 v10; // x1
  __int64 v11; // x2
  CacheFolderName_c *v12; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *convertedFolderList; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  CacheFolderName_c *v16; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v17; // x0
  Il2CppObject *Item; // x19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v20; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v21; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_5937426 & 1) == 0 )
  {
    sub_21FFC50(&CacheFolderName_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsValue__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_CacheFolderName_FOLDER_NAME__string__get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_CacheFolderName_FOLDER_NAME__string__get_Value__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937426 = 1;
  }
  v4 = CacheFolderName_TypeInfo;
  v5 = *(&CacheFolderName_TypeInfo->_2.cctor_finished + 1);
  memset(&v21, 0, sizeof(v21));
  if ( !v5 )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo, method, v2);
    v4 = CacheFolderName_TypeInfo;
  }
  folderList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v4->static_fields->folderList;
  if ( !folderList )
    goto LABEL_26;
  if ( !System_Collections_Generic_Dictionary_Int32Enum__object___ContainsValue(
          folderList,
          (Il2CppObject *)name,
          (const MethodInfo_3F88E10 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsValue__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  v8 = CacheFolderName_TypeInfo;
  if ( !*(&CacheFolderName_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo, method, v7);
    v8 = CacheFolderName_TypeInfo;
  }
  folderList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v8->static_fields->folderList;
  if ( !folderList )
LABEL_26:
    sub_21FFECC(folderList, method);
  System_Collections_Generic_Dictionary_Int32Enum__object___GetEnumerator(
    &v20,
    folderList,
    (const MethodInfo_3F89034 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__GetEnumerator__);
  v21 = v20;
  v20.fields._dictionary = 0;
  *(_QWORD *)&v20.fields._version = &v21;
  do
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_Int32Enum__object___MoveNext(
            &v21,
            (const MethodInfo_412A7B0 *)Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__MoveNext__) )
    {
      System_Collections_Generic_Dictionary_Enumerator_Int32Enum__object___Dispose(
        &v21,
        (const MethodInfo_412A8D4 *)Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__Dispose__);
      return (System_String_o *)StringLiteral_1/*""*/;
    }
    key = (int32_t)v21.fields._current.fields.key;
  }
  while ( !System_String__op_Equality((System_String_o *)v21.fields._current.fields.value, name, 0) );
  v12 = CacheFolderName_TypeInfo;
  if ( !*(&CacheFolderName_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo, v10, v11);
    v12 = CacheFolderName_TypeInfo;
  }
  convertedFolderList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v12->static_fields->convertedFolderList;
  if ( !convertedFolderList )
    sub_21FFECC(0, v10);
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         convertedFolderList,
         key,
         (const MethodInfo_3F88DEC *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__) )
  {
    v16 = CacheFolderName_TypeInfo;
    if ( !*(&CacheFolderName_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo, v14, v15);
      v16 = CacheFolderName_TypeInfo;
    }
    v17 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v16->static_fields->convertedFolderList;
    if ( !v17 )
      sub_21FFECC(0, v14);
    Item = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
             v17,
             key,
             (const MethodInfo_3F88B58 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__);
  }
  else
  {
    Item = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  System_Collections_Generic_Dictionary_Enumerator_Int32Enum__object___Dispose(
    &v21,
    (const MethodInfo_412A8D4 *)Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__Dispose__);
  return (System_String_o *)Item;
}


System_String_o *CacheFolderName__getFolderName(int32_t name, const MethodInfo *method)
{
  __int64 v2; // x2
  CacheFolderName_c *v4; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *convertedFolderList; // x0
  __int64 v6; // x2
  CacheFolderName_c *v7; // x0

  if ( (byte_5937424 & 1) == 0 )
  {
    sub_21FFC50(&CacheFolderName_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937424 = 1;
  }
  v4 = CacheFolderName_TypeInfo;
  if ( !*(&CacheFolderName_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo, method, v2);
    v4 = CacheFolderName_TypeInfo;
  }
  convertedFolderList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v4->static_fields->convertedFolderList;
  if ( !convertedFolderList )
    goto LABEL_12;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         convertedFolderList,
         name,
         (const MethodInfo_3F88DEC *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__) )
  {
    v7 = CacheFolderName_TypeInfo;
    if ( !*(&CacheFolderName_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo, method, v6);
      v7 = CacheFolderName_TypeInfo;
    }
    convertedFolderList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v7->static_fields->convertedFolderList;
    if ( convertedFolderList )
      return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                  convertedFolderList,
                                  name,
                                  (const MethodInfo_3F88B58 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__);
LABEL_12:
    sub_21FFECC(convertedFolderList, method);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *CacheFolderName__getFolderNameNotConverted(int32_t name, const MethodInfo *method)
{
  __int64 v2; // x2
  CacheFolderName_c *v4; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *folderList; // x0
  __int64 v6; // x2
  CacheFolderName_c *v7; // x0

  if ( (byte_5937425 & 1) == 0 )
  {
    sub_21FFC50(&CacheFolderName_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937425 = 1;
  }
  v4 = CacheFolderName_TypeInfo;
  if ( !*(&CacheFolderName_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo, method, v2);
    v4 = CacheFolderName_TypeInfo;
  }
  folderList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v4->static_fields->folderList;
  if ( !folderList )
    goto LABEL_12;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         folderList,
         name,
         (const MethodInfo_3F88DEC *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__) )
  {
    v7 = CacheFolderName_TypeInfo;
    if ( !*(&CacheFolderName_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo, method, v6);
      v7 = CacheFolderName_TypeInfo;
    }
    folderList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v7->static_fields->folderList;
    if ( folderList )
      return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                  folderList,
                                  name,
                                  (const MethodInfo_3F88B58 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__);
LABEL_12:
    sub_21FFECC(folderList, method);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}