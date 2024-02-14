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
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v12; // x19
  __int64 v13; // x0
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v23; // x19
  struct CacheFolderName_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_4215D56 & 1) == 0 )
  {
    sub_B0D8A4(&CacheFolderName_TypeInfo, v1);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_8988/*"MasterDataCaches"*/, v6);
    sub_B0D8A4(&StringLiteral_16743/*"bfaa"*/, v7);
    sub_B0D8A4(&StringLiteral_16270/*"a77d"*/, v8);
    sub_B0D8A4(&StringLiteral_10653/*"PaymentHistorys"*/, v9);
    sub_B0D8A4(&StringLiteral_17916/*"d713"*/, v10);
    sub_B0D8A4(&StringLiteral_2107/*"AssetCaches"*/, v11);
    byte_4215D56 = 1;
  }
  v12 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B0D974(
                                                                           System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__TypeInfo,
                                                                           v1,
                                                                           v2);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v12,
    (const MethodInfo_2EA610C *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string___ctor__);
  if ( !v12 )
    goto LABEL_6;
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v12,
    0,
    (System_String_o *)StringLiteral_2107/*"AssetCaches"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v12,
    1,
    (System_String_o *)StringLiteral_8988/*"MasterDataCaches"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v12,
    2,
    (System_String_o *)StringLiteral_10653/*"PaymentHistorys"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  static_fields = (BattleServantConfConponent_o *)CacheFolderName_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v12;
  sub_B0D840(static_fields, (System_Int32_array **)v12, v15, v16, v17, v18, v19, v20);
  v23 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B0D974(
                                                                           System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__TypeInfo,
                                                                           v21,
                                                                           v22);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v23,
    (const MethodInfo_2EA610C *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string___ctor__);
  if ( !v23 )
LABEL_6:
    sub_B0D97C(v13);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    0,
    (System_String_o *)StringLiteral_17916/*"d713"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    1,
    (System_String_o *)StringLiteral_16743/*"bfaa"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v23,
    2,
    (System_String_o *)StringLiteral_16270/*"a77d"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  v24 = CacheFolderName_TypeInfo->static_fields;
  v24->convertedFolderList = (struct System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__o *)v23;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v24->convertedFolderList,
    (System_Int32_array **)v23,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
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
  System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__o *folderList; // x0
  CacheFolderName_c *v15; // x0
  int32_t key; // w20
  CacheFolderName_c *v17; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *convertedFolderList; // x0
  CacheFolderName_c *v19; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v20; // x0
  System_String_o *Item; // x19
  int v22; // w20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v25; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_4215D55 & 1) == 0 )
  {
    sub_B0D8A4(&CacheFolderName_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsValue__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__GetEnumerator__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__, v6);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__Dispose__,
      v7);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__MoveNext__,
      v8);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__get_Current__,
      v9);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_CacheFolderName_FOLDER_NAME__string__get_Key__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_CacheFolderName_FOLDER_NAME__string__get_Value__, v11);
    sub_B0D8A4(&StringLiteral_1/*""*/, v12);
    byte_4215D55 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v13 = CacheFolderName_TypeInfo;
  if ( (BYTE3(CacheFolderName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
    v13 = CacheFolderName_TypeInfo;
  }
  folderList = v13->static_fields->folderList;
  if ( !folderList )
    goto LABEL_30;
  if ( !System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string___ContainsValue(
          folderList,
          name,
          (const MethodInfo_2EA6F68 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsValue__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  v15 = CacheFolderName_TypeInfo;
  if ( (BYTE3(CacheFolderName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
    v15 = CacheFolderName_TypeInfo;
  }
  folderList = v15->static_fields->folderList;
  if ( !folderList )
LABEL_30:
    sub_B0D97C(folderList);
  System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string___GetEnumerator(
    &v24,
    folderList,
    (const MethodInfo_2EA72A4 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__GetEnumerator__);
  v25 = v24;
  do
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string___MoveNext(
            &v25,
            (const MethodInfo_2815B54 *)Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__MoveNext__) )
    {
      Item = 0LL;
      v22 = 126;
      goto LABEL_27;
    }
    key = (int32_t)v25.fields.current.fields.key;
  }
  while ( !System_String__op_Equality((System_String_o *)v25.fields.current.fields.value, name, 0LL) );
  v17 = CacheFolderName_TypeInfo;
  if ( (BYTE3(CacheFolderName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
    v17 = CacheFolderName_TypeInfo;
  }
  convertedFolderList = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v17->static_fields->convertedFolderList;
  if ( !convertedFolderList )
    sub_B0D97C(0LL);
  if ( System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
         convertedFolderList,
         key,
         (const MethodInfo_2EA6F34 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__) )
  {
    v19 = CacheFolderName_TypeInfo;
    if ( (BYTE3(CacheFolderName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CacheFolderName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
      v19 = CacheFolderName_TypeInfo;
    }
    v20 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v19->static_fields->convertedFolderList;
    if ( !v20 )
      sub_B0D97C(0LL);
    Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
             v20,
             key,
             (const MethodInfo_2EA6BFC *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__);
    v22 = 132;
  }
  else
  {
    v22 = 132;
    Item = (System_String_o *)StringLiteral_1/*""*/;
  }
LABEL_27:
  System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string___Dispose(
    &v25,
    (const MethodInfo_2815CC0 *)Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__Dispose__);
  if ( v22 != 132 )
    return (System_String_o *)StringLiteral_1/*""*/;
  return Item;
}


System_String_o *__fastcall CacheFolderName__getFolderName(int32_t name, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CacheFolderName_c *v6; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *convertedFolderList; // x0
  CacheFolderName_c *v8; // x0

  if ( (byte_4215D53 & 1) == 0 )
  {
    sub_B0D8A4(&CacheFolderName_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__, v4);
    sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_4215D53 = 1;
  }
  v6 = CacheFolderName_TypeInfo;
  if ( (BYTE3(CacheFolderName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
    v6 = CacheFolderName_TypeInfo;
  }
  convertedFolderList = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v6->static_fields->convertedFolderList;
  if ( !convertedFolderList )
    goto LABEL_14;
  if ( System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
         convertedFolderList,
         name,
         (const MethodInfo_2EA6F34 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__) )
  {
    v8 = CacheFolderName_TypeInfo;
    if ( (BYTE3(CacheFolderName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CacheFolderName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
      v8 = CacheFolderName_TypeInfo;
    }
    convertedFolderList = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v8->static_fields->convertedFolderList;
    if ( convertedFolderList )
      return System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
               convertedFolderList,
               name,
               (const MethodInfo_2EA6BFC *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__);
LABEL_14:
    sub_B0D97C(convertedFolderList);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall CacheFolderName__getFolderNameNotConverted(int32_t name, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CacheFolderName_c *v6; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *folderList; // x0
  CacheFolderName_c *v8; // x0

  if ( (byte_4215D54 & 1) == 0 )
  {
    sub_B0D8A4(&CacheFolderName_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__, v4);
    sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_4215D54 = 1;
  }
  v6 = CacheFolderName_TypeInfo;
  if ( (BYTE3(CacheFolderName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
    v6 = CacheFolderName_TypeInfo;
  }
  folderList = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v6->static_fields->folderList;
  if ( !folderList )
    goto LABEL_14;
  if ( System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
         folderList,
         name,
         (const MethodInfo_2EA6F34 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__) )
  {
    v8 = CacheFolderName_TypeInfo;
    if ( (BYTE3(CacheFolderName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CacheFolderName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
      v8 = CacheFolderName_TypeInfo;
    }
    folderList = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v8->static_fields->folderList;
    if ( folderList )
      return System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
               folderList,
               name,
               (const MethodInfo_2EA6BFC *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__);
LABEL_14:
    sub_B0D97C(folderList);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}