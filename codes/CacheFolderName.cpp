void __fastcall CacheFolderName___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v10; // x19
  struct CacheFolderName_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BDB3FD & 1) == 0 )
  {
    sub_1C21E38(&CacheFolderName_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__TypeInfo);
    sub_1C21E38(&StringLiteral_9088/*"MasterDataCaches"*/);
    sub_1C21E38(&StringLiteral_17453/*"bfaa"*/);
    sub_1C21E38(&StringLiteral_16903/*"a77d"*/);
    sub_1C21E38(&StringLiteral_10795/*"PaymentHistorys"*/);
    sub_1C21E38(&StringLiteral_18745/*"d713"*/);
    sub_1C21E38(&StringLiteral_2532/*"AssetCaches"*/);
    byte_4BDB3FD = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C22084(System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_32E58A4 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string___ctor__);
  if ( !v1
    || (System_Collections_Generic_Dictionary_Int32Enum__object___Add(
          v1,
          0,
          (Il2CppObject *)StringLiteral_2532/*"AssetCaches"*/,
          (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__),
        System_Collections_Generic_Dictionary_Int32Enum__object___Add(
          v1,
          1,
          (Il2CppObject *)StringLiteral_9088/*"MasterDataCaches"*/,
          (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__),
        System_Collections_Generic_Dictionary_Int32Enum__object___Add(
          v1,
          2,
          (Il2CppObject *)StringLiteral_10795/*"PaymentHistorys"*/,
          (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__),
        CacheFolderName_TypeInfo->static_fields->folderList = (struct System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__o *)v1,
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)CacheFolderName_TypeInfo->static_fields,
          (int64_t)v1,
          v4,
          v5,
          v6,
          v7,
          v8,
          v9),
        v10 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C22084(System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__TypeInfo),
        System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
          v10,
          (const MethodInfo_32E58A4 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string___ctor__),
        !v10) )
  {
    sub_1C22094(v2, v3);
  }
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v10,
    0,
    (Il2CppObject *)StringLiteral_18745/*"d713"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v10,
    1,
    (Il2CppObject *)StringLiteral_17453/*"bfaa"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v10,
    2,
    (Il2CppObject *)StringLiteral_16903/*"a77d"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  static_fields = CacheFolderName_TypeInfo->static_fields;
  static_fields->convertedFolderList = (struct System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__o *)v10;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&static_fields->convertedFolderList,
    (int64_t)v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


void __fastcall CacheFolderName___ctor(CacheFolderName_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall CacheFolderName__convertFolderName(System_String_o *name, const MethodInfo *method)
{
  CacheFolderName_c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *folderList; // x0
  CacheFolderName_c *v5; // x0
  int32_t key; // w20
  __int64 v7; // x1
  CacheFolderName_c *v8; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *convertedFolderList; // x0
  __int64 v10; // x1
  CacheFolderName_c *v11; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v12; // x0
  Il2CppObject *Item; // x19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v15; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v16; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_4BDB3FC & 1) == 0 )
  {
    sub_1C21E38(&CacheFolderName_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsValue__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_CacheFolderName_FOLDER_NAME__string__get_Key__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_CacheFolderName_FOLDER_NAME__string__get_Value__);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDB3FC = 1;
  }
  v3 = CacheFolderName_TypeInfo;
  memset(&v16, 0, sizeof(v16));
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
    v3 = CacheFolderName_TypeInfo;
  }
  folderList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v3->static_fields->folderList;
  if ( !folderList )
    goto LABEL_26;
  if ( !System_Collections_Generic_Dictionary_Int32Enum__object___ContainsValue(
          folderList,
          (Il2CppObject *)name,
          (const MethodInfo_32E6490 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsValue__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  v5 = CacheFolderName_TypeInfo;
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
    v5 = CacheFolderName_TypeInfo;
  }
  folderList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v5->static_fields->folderList;
  if ( !folderList )
LABEL_26:
    sub_1C22094(folderList, method);
  System_Collections_Generic_Dictionary_Int32Enum__object___GetEnumerator(
    &v15,
    folderList,
    (const MethodInfo_32E66B0 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__GetEnumerator__);
  v16 = v15;
  do
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_Int32Enum__object___MoveNext(
            &v16,
            (const MethodInfo_3409C30 *)Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__MoveNext__) )
    {
      System_Collections_Generic_Dictionary_Enumerator_Int32Enum__object___Dispose(
        &v16,
        (const MethodInfo_3409D54 *)Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__Dispose__);
      return (System_String_o *)StringLiteral_1/*""*/;
    }
    key = (int32_t)v16.fields._current.fields.key;
  }
  while ( !System_String__op_Equality((System_String_o *)v16.fields._current.fields.value, name, 0LL) );
  v8 = CacheFolderName_TypeInfo;
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
    v8 = CacheFolderName_TypeInfo;
  }
  convertedFolderList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v8->static_fields->convertedFolderList;
  if ( !convertedFolderList )
    sub_1C22094(0LL, v7);
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         convertedFolderList,
         key,
         (const MethodInfo_32E646C *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__) )
  {
    v11 = CacheFolderName_TypeInfo;
    if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
      v11 = CacheFolderName_TypeInfo;
    }
    v12 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v11->static_fields->convertedFolderList;
    if ( !v12 )
      sub_1C22094(0LL, v10);
    Item = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
             v12,
             key,
             (const MethodInfo_32E61D8 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__);
  }
  else
  {
    Item = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  System_Collections_Generic_Dictionary_Enumerator_Int32Enum__object___Dispose(
    &v16,
    (const MethodInfo_3409D54 *)Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__Dispose__);
  return (System_String_o *)Item;
}


System_String_o *__fastcall CacheFolderName__getFolderName(int32_t name, const MethodInfo *method)
{
  CacheFolderName_c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *convertedFolderList; // x0
  CacheFolderName_c *v5; // x0

  if ( (byte_4BDB3FA & 1) == 0 )
  {
    sub_1C21E38(&CacheFolderName_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDB3FA = 1;
  }
  v3 = CacheFolderName_TypeInfo;
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
    v3 = CacheFolderName_TypeInfo;
  }
  convertedFolderList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v3->static_fields->convertedFolderList;
  if ( !convertedFolderList )
    goto LABEL_12;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         convertedFolderList,
         name,
         (const MethodInfo_32E646C *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__) )
  {
    v5 = CacheFolderName_TypeInfo;
    if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
      v5 = CacheFolderName_TypeInfo;
    }
    convertedFolderList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v5->static_fields->convertedFolderList;
    if ( convertedFolderList )
      return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                  convertedFolderList,
                                  name,
                                  (const MethodInfo_32E61D8 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__);
LABEL_12:
    sub_1C22094(convertedFolderList, method);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall CacheFolderName__getFolderNameNotConverted(int32_t name, const MethodInfo *method)
{
  CacheFolderName_c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *folderList; // x0
  CacheFolderName_c *v5; // x0

  if ( (byte_4BDB3FB & 1) == 0 )
  {
    sub_1C21E38(&CacheFolderName_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDB3FB = 1;
  }
  v3 = CacheFolderName_TypeInfo;
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
    v3 = CacheFolderName_TypeInfo;
  }
  folderList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v3->static_fields->folderList;
  if ( !folderList )
    goto LABEL_12;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         folderList,
         name,
         (const MethodInfo_32E646C *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__) )
  {
    v5 = CacheFolderName_TypeInfo;
    if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
      v5 = CacheFolderName_TypeInfo;
    }
    folderList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v5->static_fields->folderList;
    if ( folderList )
      return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                  folderList,
                                  name,
                                  (const MethodInfo_32E61D8 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__);
LABEL_12:
    sub_1C22094(folderList, method);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}