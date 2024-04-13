void __fastcall CacheFolderName___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v31; // x19
  __int64 v32; // x0
  __int64 v33; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v41; // x19
  struct CacheFolderName_StaticFields *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7

  if ( (byte_42EB612 & 1) == 0 )
  {
    sub_B5D5C4(&CacheFolderName_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_9058/*"MasterDataCaches"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_16900/*"bfaa"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_16416/*"a77d"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_10748/*"PaymentHistorys"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_18079/*"d713"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_2126/*"AssetCaches"*/, v28, v29, v30);
    byte_42EB612 = 1;
  }
  v31 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B5D694(System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v31,
    (const MethodInfo_2F48DA8 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string___ctor__);
  if ( !v31 )
    goto LABEL_6;
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v31,
    0,
    (System_String_o *)StringLiteral_2126/*"AssetCaches"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v31,
    1,
    (System_String_o *)StringLiteral_9058/*"MasterDataCaches"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v31,
    2,
    (System_String_o *)StringLiteral_10748/*"PaymentHistorys"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  static_fields = (BattleServantConfConponent_o *)CacheFolderName_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v31;
  sub_B5D560(static_fields, (System_Int32_array **)v31, v35, v36, v37, v38, v39, v40);
  v41 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B5D694(System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v41,
    (const MethodInfo_2F48DA8 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string___ctor__);
  if ( !v41 )
LABEL_6:
    sub_B5D69C(v32, v33);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v41,
    0,
    (System_String_o *)StringLiteral_18079/*"d713"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v41,
    1,
    (System_String_o *)StringLiteral_16900/*"bfaa"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v41,
    2,
    (System_String_o *)StringLiteral_16416/*"a77d"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  v42 = CacheFolderName_TypeInfo->static_fields;
  v42->convertedFolderList = (struct System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__o *)v41;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v42->convertedFolderList,
    (System_Int32_array **)v41,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
}


void __fastcall CacheFolderName___ctor(CacheFolderName_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall CacheFolderName__convertFolderName(System_String_o *name, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  CacheFolderName_c *v35; // x0
  System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__o *folderList; // x0
  CacheFolderName_c *v37; // x0
  int32_t key; // w20
  __int64 v39; // x1
  CacheFolderName_c *v40; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *convertedFolderList; // x0
  __int64 v42; // x1
  CacheFolderName_c *v43; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v44; // x0
  System_String_o *Item; // x19
  int v46; // w20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v48; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v49; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_42EB611 & 1) == 0 )
  {
    sub_B5D5C4(&CacheFolderName_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsValue__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__GetEnumerator__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__,
      v14,
      v15,
      v16);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__Dispose__,
      v17,
      v18,
      v19);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__MoveNext__,
      v20,
      v21,
      v22);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__get_Current__,
      v23,
      v24,
      v25);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_CacheFolderName_FOLDER_NAME__string__get_Key__,
      v26,
      v27,
      v28);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_CacheFolderName_FOLDER_NAME__string__get_Value__,
      v29,
      v30,
      v31);
    sub_B5D5C4(&StringLiteral_1/*""*/, v32, v33, v34);
    byte_42EB611 = 1;
  }
  memset(&v49, 0, sizeof(v49));
  v35 = CacheFolderName_TypeInfo;
  if ( (BYTE3(CacheFolderName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
    v35 = CacheFolderName_TypeInfo;
  }
  folderList = v35->static_fields->folderList;
  if ( !folderList )
    goto LABEL_30;
  if ( !System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string___ContainsValue(
          folderList,
          name,
          (const MethodInfo_2F49C04 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsValue__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  v37 = CacheFolderName_TypeInfo;
  if ( (BYTE3(CacheFolderName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
    v37 = CacheFolderName_TypeInfo;
  }
  folderList = v37->static_fields->folderList;
  if ( !folderList )
LABEL_30:
    sub_B5D69C(folderList, method);
  System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string___GetEnumerator(
    &v48,
    folderList,
    (const MethodInfo_2F49F40 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__GetEnumerator__);
  v49 = v48;
  do
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string___MoveNext(
            &v49,
            (const MethodInfo_28A7024 *)Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__MoveNext__) )
    {
      Item = 0LL;
      v46 = 126;
      goto LABEL_27;
    }
    key = (int32_t)v49.fields.current.fields.key;
  }
  while ( !System_String__op_Equality((System_String_o *)v49.fields.current.fields.value, name, 0LL) );
  v40 = CacheFolderName_TypeInfo;
  if ( (BYTE3(CacheFolderName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
    v40 = CacheFolderName_TypeInfo;
  }
  convertedFolderList = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v40->static_fields->convertedFolderList;
  if ( !convertedFolderList )
    sub_B5D69C(0LL, v39);
  if ( System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
         convertedFolderList,
         key,
         (const MethodInfo_2F49BD0 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__) )
  {
    v43 = CacheFolderName_TypeInfo;
    if ( (BYTE3(CacheFolderName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CacheFolderName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
      v43 = CacheFolderName_TypeInfo;
    }
    v44 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v43->static_fields->convertedFolderList;
    if ( !v44 )
      sub_B5D69C(0LL, v42);
    Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
             v44,
             key,
             (const MethodInfo_2F49898 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__);
    v46 = 132;
  }
  else
  {
    v46 = 132;
    Item = (System_String_o *)StringLiteral_1/*""*/;
  }
LABEL_27:
  System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string___Dispose(
    &v49,
    (const MethodInfo_28A7190 *)Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__Dispose__);
  if ( v46 != 132 )
    return (System_String_o *)StringLiteral_1/*""*/;
  return Item;
}


System_String_o *__fastcall CacheFolderName__getFolderName(int32_t name, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  CacheFolderName_c *v14; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *convertedFolderList; // x0
  CacheFolderName_c *v16; // x0

  if ( (byte_42EB60F & 1) == 0 )
  {
    sub_B5D5C4(&CacheFolderName_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&StringLiteral_1/*""*/, v11, v12, v13);
    byte_42EB60F = 1;
  }
  v14 = CacheFolderName_TypeInfo;
  if ( (BYTE3(CacheFolderName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
    v14 = CacheFolderName_TypeInfo;
  }
  convertedFolderList = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v14->static_fields->convertedFolderList;
  if ( !convertedFolderList )
    goto LABEL_14;
  if ( System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
         convertedFolderList,
         name,
         (const MethodInfo_2F49BD0 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__) )
  {
    v16 = CacheFolderName_TypeInfo;
    if ( (BYTE3(CacheFolderName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CacheFolderName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
      v16 = CacheFolderName_TypeInfo;
    }
    convertedFolderList = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v16->static_fields->convertedFolderList;
    if ( convertedFolderList )
      return System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
               convertedFolderList,
               name,
               (const MethodInfo_2F49898 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__);
LABEL_14:
    sub_B5D69C(convertedFolderList, method);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall CacheFolderName__getFolderNameNotConverted(int32_t name, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  CacheFolderName_c *v14; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *folderList; // x0
  CacheFolderName_c *v16; // x0

  if ( (byte_42EB610 & 1) == 0 )
  {
    sub_B5D5C4(&CacheFolderName_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&StringLiteral_1/*""*/, v11, v12, v13);
    byte_42EB610 = 1;
  }
  v14 = CacheFolderName_TypeInfo;
  if ( (BYTE3(CacheFolderName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
    v14 = CacheFolderName_TypeInfo;
  }
  folderList = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v14->static_fields->folderList;
  if ( !folderList )
    goto LABEL_14;
  if ( System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
         folderList,
         name,
         (const MethodInfo_2F49BD0 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__) )
  {
    v16 = CacheFolderName_TypeInfo;
    if ( (BYTE3(CacheFolderName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CacheFolderName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
      v16 = CacheFolderName_TypeInfo;
    }
    folderList = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v16->static_fields->folderList;
    if ( folderList )
      return System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
               folderList,
               name,
               (const MethodInfo_2F49898 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__);
LABEL_14:
    sub_B5D69C(folderList, method);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}