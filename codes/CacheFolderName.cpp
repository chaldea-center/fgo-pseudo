void __fastcall CacheFolderName___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v11; // x19
  struct CacheFolderName_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_4354AF0 & 1) == 0 )
  {
    sub_B70694(&CacheFolderName_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__TypeInfo);
    sub_B70694(&StringLiteral_9073/*"MasterDataCaches"*/);
    sub_B70694(&StringLiteral_16944/*"bfaa"*/);
    sub_B70694(&StringLiteral_16460/*"a77d"*/);
    sub_B70694(&StringLiteral_10769/*"PaymentHistorys"*/);
    sub_B70694(&StringLiteral_18126/*"d713"*/);
    sub_B70694(&StringLiteral_2131/*"AssetCaches"*/);
    byte_4354AF0 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B70764(System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v1,
    (const MethodInfo_2F71470 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string___ctor__);
  if ( !v1 )
    goto LABEL_6;
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    0,
    (System_String_o *)StringLiteral_2131/*"AssetCaches"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    1,
    (System_String_o *)StringLiteral_9073/*"MasterDataCaches"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    2,
    (System_String_o *)StringLiteral_10769/*"PaymentHistorys"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  static_fields = (BattleServantConfConponent_o *)CacheFolderName_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B70764(System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v11,
    (const MethodInfo_2F71470 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string___ctor__);
  if ( !v11 )
LABEL_6:
    sub_B7076C(v2, v3);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v11,
    0,
    (System_String_o *)StringLiteral_18126/*"d713"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v11,
    1,
    (System_String_o *)StringLiteral_16944/*"bfaa"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v11,
    2,
    (System_String_o *)StringLiteral_16460/*"a77d"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  v12 = CacheFolderName_TypeInfo->static_fields;
  v12->convertedFolderList = (struct System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__o *)v11;
  sub_B70630(
    (BattleServantConfConponent_o *)&v12->convertedFolderList,
    (System_Int32_array **)v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void __fastcall CacheFolderName___ctor(CacheFolderName_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall CacheFolderName__convertFolderName(System_String_o *name, const MethodInfo *method)
{
  CacheFolderName_c *v3; // x0
  System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__o *folderList; // x0
  CacheFolderName_c *v5; // x0
  int32_t key; // w20
  __int64 v7; // x1
  CacheFolderName_c *v8; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *convertedFolderList; // x0
  __int64 v10; // x1
  CacheFolderName_c *v11; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v12; // x0
  System_String_o *Item; // x19
  int v14; // w20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v17; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_4354AEF & 1) == 0 )
  {
    sub_B70694(&CacheFolderName_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsValue__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_CacheFolderName_FOLDER_NAME__string__get_Key__);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_CacheFolderName_FOLDER_NAME__string__get_Value__);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4354AEF = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = CacheFolderName_TypeInfo;
  if ( (BYTE3(CacheFolderName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
    v3 = CacheFolderName_TypeInfo;
  }
  folderList = v3->static_fields->folderList;
  if ( !folderList )
    goto LABEL_30;
  if ( !System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string___ContainsValue(
          folderList,
          name,
          (const MethodInfo_2F722CC *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsValue__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  v5 = CacheFolderName_TypeInfo;
  if ( (BYTE3(CacheFolderName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
    v5 = CacheFolderName_TypeInfo;
  }
  folderList = v5->static_fields->folderList;
  if ( !folderList )
LABEL_30:
    sub_B7076C(folderList, method);
  System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string___GetEnumerator(
    &v16,
    folderList,
    (const MethodInfo_2F72608 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__GetEnumerator__);
  v17 = v16;
  do
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string___MoveNext(
            &v17,
            (const MethodInfo_2772254 *)Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__MoveNext__) )
    {
      Item = 0LL;
      v14 = 126;
      goto LABEL_27;
    }
    key = (int32_t)v17.fields.current.fields.key;
  }
  while ( !System_String__op_Equality((System_String_o *)v17.fields.current.fields.value, name, 0LL) );
  v8 = CacheFolderName_TypeInfo;
  if ( (BYTE3(CacheFolderName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
    v8 = CacheFolderName_TypeInfo;
  }
  convertedFolderList = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v8->static_fields->convertedFolderList;
  if ( !convertedFolderList )
    sub_B7076C(0LL, v7);
  if ( System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
         convertedFolderList,
         key,
         (const MethodInfo_2F72298 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__) )
  {
    v11 = CacheFolderName_TypeInfo;
    if ( (BYTE3(CacheFolderName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CacheFolderName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
      v11 = CacheFolderName_TypeInfo;
    }
    v12 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v11->static_fields->convertedFolderList;
    if ( !v12 )
      sub_B7076C(0LL, v10);
    Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
             v12,
             key,
             (const MethodInfo_2F71F60 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__);
    v14 = 132;
  }
  else
  {
    v14 = 132;
    Item = (System_String_o *)StringLiteral_1/*""*/;
  }
LABEL_27:
  System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string___Dispose(
    &v17,
    (const MethodInfo_27723C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__Dispose__);
  if ( v14 != 132 )
    return (System_String_o *)StringLiteral_1/*""*/;
  return Item;
}


System_String_o *__fastcall CacheFolderName__getFolderName(int32_t name, const MethodInfo *method)
{
  CacheFolderName_c *v3; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *convertedFolderList; // x0
  CacheFolderName_c *v5; // x0

  if ( (byte_4354AED & 1) == 0 )
  {
    sub_B70694(&CacheFolderName_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4354AED = 1;
  }
  v3 = CacheFolderName_TypeInfo;
  if ( (BYTE3(CacheFolderName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
    v3 = CacheFolderName_TypeInfo;
  }
  convertedFolderList = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v3->static_fields->convertedFolderList;
  if ( !convertedFolderList )
    goto LABEL_14;
  if ( System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
         convertedFolderList,
         name,
         (const MethodInfo_2F72298 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__) )
  {
    v5 = CacheFolderName_TypeInfo;
    if ( (BYTE3(CacheFolderName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CacheFolderName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
      v5 = CacheFolderName_TypeInfo;
    }
    convertedFolderList = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v5->static_fields->convertedFolderList;
    if ( convertedFolderList )
      return System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
               convertedFolderList,
               name,
               (const MethodInfo_2F71F60 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__);
LABEL_14:
    sub_B7076C(convertedFolderList, method);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall CacheFolderName__getFolderNameNotConverted(int32_t name, const MethodInfo *method)
{
  CacheFolderName_c *v3; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *folderList; // x0
  CacheFolderName_c *v5; // x0

  if ( (byte_4354AEE & 1) == 0 )
  {
    sub_B70694(&CacheFolderName_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4354AEE = 1;
  }
  v3 = CacheFolderName_TypeInfo;
  if ( (BYTE3(CacheFolderName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
    v3 = CacheFolderName_TypeInfo;
  }
  folderList = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v3->static_fields->folderList;
  if ( !folderList )
    goto LABEL_14;
  if ( System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
         folderList,
         name,
         (const MethodInfo_2F72298 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__) )
  {
    v5 = CacheFolderName_TypeInfo;
    if ( (BYTE3(CacheFolderName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CacheFolderName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
      v5 = CacheFolderName_TypeInfo;
    }
    folderList = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v5->static_fields->folderList;
    if ( folderList )
      return System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
               folderList,
               name,
               (const MethodInfo_2F71F60 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__);
LABEL_14:
    sub_B7076C(folderList, method);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}