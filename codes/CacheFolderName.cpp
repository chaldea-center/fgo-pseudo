void __fastcall CacheFolderName___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v22; // x19
  __int64 v23; // x0
  __int64 v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v34; // x19
  struct CacheFolderName_StaticFields *static_fields; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7

  if ( (byte_4B150C8 & 1) == 0 )
  {
    sub_1BCA7E0(&CacheFolderName_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string___ctor__, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_9027/*"MasterDataCaches"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_17336/*"bfaa"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_16791/*"a77d"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_10723/*"PaymentHistorys"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_18620/*"d713"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_2513/*"AssetCaches"*/, v20, v21);
    byte_4B150C8 = 1;
  }
  v22 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__TypeInfo,
                                                                   v1,
                                                                   v2,
                                                                   v3);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v22,
    (const MethodInfo_3234624 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string___ctor__);
  if ( !v22
    || (System_Collections_Generic_Dictionary_Int32Enum__object___Add(
          v22,
          0,
          (Il2CppObject *)StringLiteral_2513/*"AssetCaches"*/,
          (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__),
        System_Collections_Generic_Dictionary_Int32Enum__object___Add(
          v22,
          1,
          (Il2CppObject *)StringLiteral_9027/*"MasterDataCaches"*/,
          (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__),
        System_Collections_Generic_Dictionary_Int32Enum__object___Add(
          v22,
          2,
          (Il2CppObject *)StringLiteral_10723/*"PaymentHistorys"*/,
          (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__),
        CacheFolderName_TypeInfo->static_fields->folderList = (struct System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__o *)v22,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)CacheFolderName_TypeInfo->static_fields,
          (int64_t)v22,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30),
        v34 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                         System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__TypeInfo,
                                                                         v31,
                                                                         v32,
                                                                         v33),
        System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
          v34,
          (const MethodInfo_3234624 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string___ctor__),
        !v34) )
  {
    sub_1BCAA3C(v23, v24);
  }
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v34,
    0,
    (Il2CppObject *)StringLiteral_18620/*"d713"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v34,
    1,
    (Il2CppObject *)StringLiteral_17336/*"bfaa"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v34,
    2,
    (Il2CppObject *)StringLiteral_16791/*"a77d"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  static_fields = CacheFolderName_TypeInfo->static_fields;
  static_fields->convertedFolderList = (struct System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__o *)v34;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->convertedFolderList,
    (int64_t)v34,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
}


void __fastcall CacheFolderName___ctor(CacheFolderName_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall CacheFolderName__convertFolderName(System_String_o *name, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  CacheFolderName_c *v24; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *folderList; // x0
  CacheFolderName_c *v26; // x0
  int32_t key; // w20
  __int64 v28; // x1
  CacheFolderName_c *v29; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *convertedFolderList; // x0
  __int64 v31; // x1
  CacheFolderName_c *v32; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v33; // x0
  Il2CppObject *Item; // x19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v36; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v37; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_4B150C7 & 1) == 0 )
  {
    sub_1BCA7E0(&CacheFolderName_TypeInfo, method, v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsValue__,
      v6,
      v7);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__GetEnumerator__,
      v8,
      v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__, v10, v11);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__Dispose__,
      v12,
      v13);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__MoveNext__,
      v14,
      v15);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__get_Current__,
      v16,
      v17);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_CacheFolderName_FOLDER_NAME__string__get_Key__,
      v18,
      v19);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_CacheFolderName_FOLDER_NAME__string__get_Value__,
      v20,
      v21);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v22, v23);
    byte_4B150C7 = 1;
  }
  v24 = CacheFolderName_TypeInfo;
  memset(&v37, 0, sizeof(v37));
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo, method);
    v24 = CacheFolderName_TypeInfo;
  }
  folderList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v24->static_fields->folderList;
  if ( !folderList )
    goto LABEL_26;
  if ( !System_Collections_Generic_Dictionary_Int32Enum__object___ContainsValue(
          folderList,
          (Il2CppObject *)name,
          (const MethodInfo_3235210 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsValue__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  v26 = CacheFolderName_TypeInfo;
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo, method);
    v26 = CacheFolderName_TypeInfo;
  }
  folderList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v26->static_fields->folderList;
  if ( !folderList )
LABEL_26:
    sub_1BCAA3C(folderList, method);
  System_Collections_Generic_Dictionary_Int32Enum__object___GetEnumerator(
    &v36,
    folderList,
    (const MethodInfo_3235430 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__GetEnumerator__);
  v37 = v36;
  do
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_Int32Enum__object___MoveNext(
            &v37,
            (const MethodInfo_335BB0C *)Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__MoveNext__) )
    {
      System_Collections_Generic_Dictionary_Enumerator_Int32Enum__object___Dispose(
        &v37,
        (const MethodInfo_335BC30 *)Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__Dispose__);
      return (System_String_o *)StringLiteral_1/*""*/;
    }
    key = (int32_t)v37.fields._current.fields.key;
  }
  while ( !System_String__op_Equality((System_String_o *)v37.fields._current.fields.value, name, 0LL) );
  v29 = CacheFolderName_TypeInfo;
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo, v28);
    v29 = CacheFolderName_TypeInfo;
  }
  convertedFolderList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v29->static_fields->convertedFolderList;
  if ( !convertedFolderList )
    sub_1BCAA3C(0LL, v28);
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         convertedFolderList,
         key,
         (const MethodInfo_32351EC *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__) )
  {
    v32 = CacheFolderName_TypeInfo;
    if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo, v31);
      v32 = CacheFolderName_TypeInfo;
    }
    v33 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v32->static_fields->convertedFolderList;
    if ( !v33 )
      sub_1BCAA3C(0LL, v31);
    Item = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
             v33,
             key,
             (const MethodInfo_3234F58 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__);
  }
  else
  {
    Item = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  System_Collections_Generic_Dictionary_Enumerator_Int32Enum__object___Dispose(
    &v37,
    (const MethodInfo_335BC30 *)Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__Dispose__);
  return (System_String_o *)Item;
}


System_String_o *__fastcall CacheFolderName__getFolderName(int32_t name, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  CacheFolderName_c *v10; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *convertedFolderList; // x0
  CacheFolderName_c *v12; // x0

  if ( (byte_4B150C5 & 1) == 0 )
  {
    sub_1BCA7E0(&CacheFolderName_TypeInfo, method, v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__,
      v4,
      v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__, v6, v7);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v8, v9);
    byte_4B150C5 = 1;
  }
  v10 = CacheFolderName_TypeInfo;
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo, method);
    v10 = CacheFolderName_TypeInfo;
  }
  convertedFolderList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v10->static_fields->convertedFolderList;
  if ( !convertedFolderList )
    goto LABEL_12;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         convertedFolderList,
         name,
         (const MethodInfo_32351EC *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__) )
  {
    v12 = CacheFolderName_TypeInfo;
    if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo, method);
      v12 = CacheFolderName_TypeInfo;
    }
    convertedFolderList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v12->static_fields->convertedFolderList;
    if ( convertedFolderList )
      return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                  convertedFolderList,
                                  name,
                                  (const MethodInfo_3234F58 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__);
LABEL_12:
    sub_1BCAA3C(convertedFolderList, method);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall CacheFolderName__getFolderNameNotConverted(int32_t name, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  CacheFolderName_c *v10; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *folderList; // x0
  CacheFolderName_c *v12; // x0

  if ( (byte_4B150C6 & 1) == 0 )
  {
    sub_1BCA7E0(&CacheFolderName_TypeInfo, method, v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__,
      v4,
      v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__, v6, v7);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v8, v9);
    byte_4B150C6 = 1;
  }
  v10 = CacheFolderName_TypeInfo;
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo, method);
    v10 = CacheFolderName_TypeInfo;
  }
  folderList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v10->static_fields->folderList;
  if ( !folderList )
    goto LABEL_12;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         folderList,
         name,
         (const MethodInfo_32351EC *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__) )
  {
    v12 = CacheFolderName_TypeInfo;
    if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo, method);
      v12 = CacheFolderName_TypeInfo;
    }
    folderList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v12->static_fields->folderList;
    if ( folderList )
      return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                  folderList,
                                  name,
                                  (const MethodInfo_3234F58 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__);
LABEL_12:
    sub_1BCAA3C(folderList, method);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}