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
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v11; // x19
  __int64 v12; // x0
  __int64 v13; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v21; // x19
  struct CacheFolderName_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_418A05B & 1) == 0 )
  {
    sub_B2C35C(&CacheFolderName_TypeInfo, v1);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__, v2);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__TypeInfo, v4);
    sub_B2C35C(&StringLiteral_8965/*"MasterDataCaches"*/, v5);
    sub_B2C35C(&StringLiteral_16694/*"bfaa"*/, v6);
    sub_B2C35C(&StringLiteral_16222/*"a77d"*/, v7);
    sub_B2C35C(&StringLiteral_10628/*"PaymentHistorys"*/, v8);
    sub_B2C35C(&StringLiteral_17860/*"d713"*/, v9);
    sub_B2C35C(&StringLiteral_2097/*"AssetCaches"*/, v10);
    byte_418A05B = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B2C42C(System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v11,
    (const MethodInfo_2E457D0 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string___ctor__);
  if ( !v11 )
    goto LABEL_6;
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v11,
    0,
    (System_String_o *)StringLiteral_2097/*"AssetCaches"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v11,
    1,
    (System_String_o *)StringLiteral_8965/*"MasterDataCaches"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v11,
    2,
    (System_String_o *)StringLiteral_10628/*"PaymentHistorys"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  static_fields = (BattleServantConfConponent_o *)CacheFolderName_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v11;
  sub_B2C2F8(static_fields, (System_Int32_array **)v11, v15, v16, v17, v18, v19, v20);
  v21 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B2C42C(System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v21,
    (const MethodInfo_2E457D0 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string___ctor__);
  if ( !v21 )
LABEL_6:
    sub_B2C434(v12, v13);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v21,
    0,
    (System_String_o *)StringLiteral_17860/*"d713"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v21,
    1,
    (System_String_o *)StringLiteral_16694/*"bfaa"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v21,
    2,
    (System_String_o *)StringLiteral_16222/*"a77d"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  v22 = CacheFolderName_TypeInfo->static_fields;
  v22->convertedFolderList = (struct System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__o *)v21;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v22->convertedFolderList,
    (System_Int32_array **)v21,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
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
  __int64 v17; // x1
  CacheFolderName_c *v18; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *convertedFolderList; // x0
  __int64 v20; // x1
  CacheFolderName_c *v21; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v22; // x0
  System_String_o *Item; // x19
  int v24; // w20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v27; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_418A05A & 1) == 0 )
  {
    sub_B2C35C(&CacheFolderName_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsValue__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__GetEnumerator__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__, v6);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__Dispose__,
      v7);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__MoveNext__,
      v8);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__get_Current__,
      v9);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_CacheFolderName_FOLDER_NAME__string__get_Key__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_CacheFolderName_FOLDER_NAME__string__get_Value__, v11);
    sub_B2C35C(&StringLiteral_1/*""*/, v12);
    byte_418A05A = 1;
  }
  memset(&v27, 0, sizeof(v27));
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
          (const MethodInfo_2E4662C *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsValue__) )
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
    sub_B2C434(folderList, method);
  System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string___GetEnumerator(
    &v26,
    folderList,
    (const MethodInfo_2E46968 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__GetEnumerator__);
  v27 = v26;
  do
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string___MoveNext(
            &v27,
            (const MethodInfo_2783358 *)Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__MoveNext__) )
    {
      Item = 0LL;
      v24 = 126;
      goto LABEL_27;
    }
    key = (int32_t)v27.fields.current.fields.key;
  }
  while ( !System_String__op_Equality((System_String_o *)v27.fields.current.fields.value, name, 0LL) );
  v18 = CacheFolderName_TypeInfo;
  if ( (BYTE3(CacheFolderName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
    v18 = CacheFolderName_TypeInfo;
  }
  convertedFolderList = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v18->static_fields->convertedFolderList;
  if ( !convertedFolderList )
    sub_B2C434(0LL, v17);
  if ( System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
         convertedFolderList,
         key,
         (const MethodInfo_2E465F8 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__) )
  {
    v21 = CacheFolderName_TypeInfo;
    if ( (BYTE3(CacheFolderName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CacheFolderName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
      v21 = CacheFolderName_TypeInfo;
    }
    v22 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v21->static_fields->convertedFolderList;
    if ( !v22 )
      sub_B2C434(0LL, v20);
    Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
             v22,
             key,
             (const MethodInfo_2E462C0 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__);
    v24 = 132;
  }
  else
  {
    v24 = 132;
    Item = (System_String_o *)StringLiteral_1/*""*/;
  }
LABEL_27:
  System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string___Dispose(
    &v27,
    (const MethodInfo_27834C4 *)Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__Dispose__);
  if ( v24 != 132 )
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

  if ( (byte_418A058 & 1) == 0 )
  {
    sub_B2C35C(&CacheFolderName_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__, v4);
    sub_B2C35C(&StringLiteral_1/*""*/, v5);
    byte_418A058 = 1;
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
         (const MethodInfo_2E465F8 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__) )
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
               (const MethodInfo_2E462C0 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__);
LABEL_14:
    sub_B2C434(convertedFolderList, method);
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

  if ( (byte_418A059 & 1) == 0 )
  {
    sub_B2C35C(&CacheFolderName_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__, v4);
    sub_B2C35C(&StringLiteral_1/*""*/, v5);
    byte_418A059 = 1;
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
         (const MethodInfo_2E465F8 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__) )
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
               (const MethodInfo_2E462C0 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__);
LABEL_14:
    sub_B2C434(folderList, method);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}