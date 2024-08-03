void __fastcall CacheFolderName___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v12; // x19
  __int64 v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v18; // x19
  struct CacheFolderName_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_49FB33A & 1) == 0 )
  {
    sub_1B640C8(&CacheFolderName_TypeInfo, v1);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__TypeInfo, v5);
    sub_1B640C8(&StringLiteral_8856/*"MasterDataCaches"*/, v6);
    sub_1B640C8(&StringLiteral_17095/*"bfaa"*/, v7);
    sub_1B640C8(&StringLiteral_16553/*"a77d"*/, v8);
    sub_1B640C8(&StringLiteral_10539/*"PaymentHistorys"*/, v9);
    sub_1B640C8(&StringLiteral_18363/*"d713"*/, v10);
    sub_1B640C8(&StringLiteral_2489/*"AssetCaches"*/, v11);
    byte_49FB33A = 1;
  }
  v12 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64314(
                                                                   System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__TypeInfo,
                                                                   v1,
                                                                   v2);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v12,
    (const MethodInfo_3151E6C *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string___ctor__);
  if ( !v12
    || (System_Collections_Generic_Dictionary_Int32Enum__object___Add(
          v12,
          0,
          (Il2CppObject *)StringLiteral_2489/*"AssetCaches"*/,
          (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__),
        System_Collections_Generic_Dictionary_Int32Enum__object___Add(
          v12,
          1,
          (Il2CppObject *)StringLiteral_8856/*"MasterDataCaches"*/,
          (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__),
        System_Collections_Generic_Dictionary_Int32Enum__object___Add(
          v12,
          2,
          (Il2CppObject *)StringLiteral_10539/*"PaymentHistorys"*/,
          (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__),
        CacheFolderName_TypeInfo->static_fields->folderList = (struct System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__o *)v12,
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)CacheFolderName_TypeInfo->static_fields,
          (int32_t)v12,
          v14,
          v15),
        v18 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64314(
                                                                         System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__TypeInfo,
                                                                         v16,
                                                                         v17),
        System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
          v18,
          (const MethodInfo_3151E6C *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string___ctor__),
        !v18) )
  {
    sub_1B64324(v13);
  }
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v18,
    0,
    (Il2CppObject *)StringLiteral_18363/*"d713"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v18,
    1,
    (Il2CppObject *)StringLiteral_17095/*"bfaa"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v18,
    2,
    (Il2CppObject *)StringLiteral_16553/*"a77d"*/,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  static_fields = CacheFolderName_TypeInfo->static_fields;
  static_fields->convertedFolderList = (struct System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__o *)v18;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->convertedFolderList, (int32_t)v18, v20, v21);
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
  CacheFolderName_c *v17; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *convertedFolderList; // x0
  CacheFolderName_c *v19; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v20; // x0
  Il2CppObject *Item; // x19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v24; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_49FB339 & 1) == 0 )
  {
    sub_1B640C8(&CacheFolderName_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsValue__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__GetEnumerator__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__, v6);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__Dispose__,
      v7);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__MoveNext__,
      v8);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__get_Current__,
      v9);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_CacheFolderName_FOLDER_NAME__string__get_Key__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_CacheFolderName_FOLDER_NAME__string__get_Value__, v11);
    sub_1B640C8(&StringLiteral_1/*""*/, v12);
    byte_49FB339 = 1;
  }
  v13 = CacheFolderName_TypeInfo;
  memset(&v24, 0, sizeof(v24));
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
          (const MethodInfo_3152A58 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsValue__) )
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
    sub_1B64324(folderList);
  System_Collections_Generic_Dictionary_Int32Enum__object___GetEnumerator(
    &v23,
    folderList,
    (const MethodInfo_3152C78 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__GetEnumerator__);
  v24 = v23;
  do
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_Int32Enum__object___MoveNext(
            &v24,
            (const MethodInfo_326F064 *)Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__MoveNext__) )
    {
      System_Collections_Generic_Dictionary_Enumerator_Int32Enum__object___Dispose(
        &v24,
        (const MethodInfo_326F188 *)Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__Dispose__);
      return (System_String_o *)StringLiteral_1/*""*/;
    }
    key = (int32_t)v24.fields._current.fields.key;
  }
  while ( !System_String__op_Equality((System_String_o *)v24.fields._current.fields.value, name, 0LL) );
  v17 = CacheFolderName_TypeInfo;
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
    v17 = CacheFolderName_TypeInfo;
  }
  convertedFolderList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v17->static_fields->convertedFolderList;
  if ( !convertedFolderList )
    sub_1B64324(0LL);
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         convertedFolderList,
         key,
         (const MethodInfo_3152A34 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__) )
  {
    v19 = CacheFolderName_TypeInfo;
    if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
      v19 = CacheFolderName_TypeInfo;
    }
    v20 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v19->static_fields->convertedFolderList;
    if ( !v20 )
      sub_1B64324(0LL);
    Item = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
             v20,
             key,
             (const MethodInfo_31527A0 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__);
  }
  else
  {
    Item = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  System_Collections_Generic_Dictionary_Enumerator_Int32Enum__object___Dispose(
    &v24,
    (const MethodInfo_326F188 *)Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__Dispose__);
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

  if ( (byte_49FB337 & 1) == 0 )
  {
    sub_1B640C8(&CacheFolderName_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__, v4);
    sub_1B640C8(&StringLiteral_1/*""*/, v5);
    byte_49FB337 = 1;
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
         (const MethodInfo_3152A34 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__) )
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
                                  (const MethodInfo_31527A0 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__);
LABEL_12:
    sub_1B64324(convertedFolderList);
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

  if ( (byte_49FB338 & 1) == 0 )
  {
    sub_1B640C8(&CacheFolderName_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__, v4);
    sub_1B640C8(&StringLiteral_1/*""*/, v5);
    byte_49FB338 = 1;
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
         (const MethodInfo_3152A34 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__) )
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
                                  (const MethodInfo_31527A0 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__);
LABEL_12:
    sub_1B64324(folderList);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}