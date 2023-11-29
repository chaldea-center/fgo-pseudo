void __fastcall CacheFolderName___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v14; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v26; // x19
  struct CacheFolderName_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_40FB54F & 1) == 0 )
  {
    sub_B16FFC(&CacheFolderName_TypeInfo, v1);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__TypeInfo, v7);
    sub_B16FFC(&StringLiteral_8935, v8);
    sub_B16FFC(&StringLiteral_16630, v9);
    sub_B16FFC(&StringLiteral_16157, v10);
    sub_B16FFC(&StringLiteral_10594, v11);
    sub_B16FFC(&StringLiteral_17792, v12);
    sub_B16FFC(&StringLiteral_2091, v13);
    byte_40FB54F = 1;
  }
  v14 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B170CC(
                                                                           System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__TypeInfo,
                                                                           v1,
                                                                           v2,
                                                                           v3,
                                                                           v4);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v14,
    (const MethodInfo_2DFF0A0 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string___ctor__);
  if ( !v14 )
    goto LABEL_6;
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v14,
    0,
    (System_String_o *)StringLiteral_2091,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v14,
    1,
    (System_String_o *)StringLiteral_8935,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v14,
    2,
    (System_String_o *)StringLiteral_10594,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  static_fields = (BattleServantConfConponent_o *)CacheFolderName_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v14;
  sub_B16F98(static_fields, (System_Int32_array **)v14, v16, v17, v18, v19, v20, v21);
  v26 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B170CC(
                                                                           System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__TypeInfo,
                                                                           v22,
                                                                           v23,
                                                                           v24,
                                                                           v25);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v26,
    (const MethodInfo_2DFF0A0 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string___ctor__);
  if ( !v26 )
LABEL_6:
    sub_B170D4();
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v26,
    0,
    (System_String_o *)StringLiteral_17792,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v26,
    1,
    (System_String_o *)StringLiteral_16630,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v26,
    2,
    (System_String_o *)StringLiteral_16157,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__Add__);
  v27 = CacheFolderName_TypeInfo->static_fields;
  v27->convertedFolderList = (struct System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__o *)v26;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v27->convertedFolderList,
    (System_Int32_array **)v26,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
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
  System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__o *v16; // x0
  int32_t key; // w20
  CacheFolderName_c *v18; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *convertedFolderList; // x0
  CacheFolderName_c *v20; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v21; // x0
  System_String_o *Item; // x19
  int v23; // w20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v26; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_40FB54E & 1) == 0 )
  {
    sub_B16FFC(&CacheFolderName_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsValue__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__GetEnumerator__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__, v6);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__Dispose__,
      v7);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__MoveNext__,
      v8);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__get_Current__,
      v9);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_CacheFolderName_FOLDER_NAME__string__get_Key__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_CacheFolderName_FOLDER_NAME__string__get_Value__, v11);
    sub_B16FFC(&StringLiteral_1, v12);
    byte_40FB54E = 1;
  }
  memset(&v26, 0, sizeof(v26));
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
          (const MethodInfo_2DFFEFC *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsValue__) )
    return (System_String_o *)StringLiteral_1;
  v15 = CacheFolderName_TypeInfo;
  if ( (BYTE3(CacheFolderName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
    v15 = CacheFolderName_TypeInfo;
  }
  v16 = v15->static_fields->folderList;
  if ( !v16 )
LABEL_30:
    sub_B170D4();
  System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string___GetEnumerator(
    &v25,
    v16,
    (const MethodInfo_2E00238 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__GetEnumerator__);
  v26 = v25;
  do
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string___MoveNext(
            &v26,
            (const MethodInfo_26B48C4 *)Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__MoveNext__) )
    {
      Item = 0LL;
      v23 = 126;
      goto LABEL_27;
    }
    key = (int32_t)v26.fields.current.fields.key;
  }
  while ( !System_String__op_Equality((System_String_o *)v26.fields.current.fields.value, name, 0LL) );
  v18 = CacheFolderName_TypeInfo;
  if ( (BYTE3(CacheFolderName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
    v18 = CacheFolderName_TypeInfo;
  }
  convertedFolderList = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v18->static_fields->convertedFolderList;
  if ( !convertedFolderList )
    sub_B170D4();
  if ( System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
         convertedFolderList,
         key,
         (const MethodInfo_2DFFEC8 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__) )
  {
    v20 = CacheFolderName_TypeInfo;
    if ( (BYTE3(CacheFolderName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CacheFolderName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
      v20 = CacheFolderName_TypeInfo;
    }
    v21 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v20->static_fields->convertedFolderList;
    if ( !v21 )
      sub_B170D4();
    Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
             v21,
             key,
             (const MethodInfo_2DFFB90 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__);
    v23 = 132;
  }
  else
  {
    v23 = 132;
    Item = (System_String_o *)StringLiteral_1;
  }
LABEL_27:
  System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string___Dispose(
    &v26,
    (const MethodInfo_26B4A30 *)Method_System_Collections_Generic_Dictionary_Enumerator_CacheFolderName_FOLDER_NAME__string__Dispose__);
  if ( v23 != 132 )
    return (System_String_o *)StringLiteral_1;
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
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v9; // x0

  if ( (byte_40FB54C & 1) == 0 )
  {
    sub_B16FFC(&CacheFolderName_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__, v4);
    sub_B16FFC(&StringLiteral_1, v5);
    byte_40FB54C = 1;
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
         (const MethodInfo_2DFFEC8 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__) )
  {
    v8 = CacheFolderName_TypeInfo;
    if ( (BYTE3(CacheFolderName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CacheFolderName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
      v8 = CacheFolderName_TypeInfo;
    }
    v9 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v8->static_fields->convertedFolderList;
    if ( v9 )
      return System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
               v9,
               name,
               (const MethodInfo_2DFFB90 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__);
LABEL_14:
    sub_B170D4();
  }
  return (System_String_o *)StringLiteral_1;
}


System_String_o *__fastcall CacheFolderName__getFolderNameNotConverted(int32_t name, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CacheFolderName_c *v6; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *folderList; // x0
  CacheFolderName_c *v8; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v9; // x0

  if ( (byte_40FB54D & 1) == 0 )
  {
    sub_B16FFC(&CacheFolderName_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__, v4);
    sub_B16FFC(&StringLiteral_1, v5);
    byte_40FB54D = 1;
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
         (const MethodInfo_2DFFEC8 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__ContainsKey__) )
  {
    v8 = CacheFolderName_TypeInfo;
    if ( (BYTE3(CacheFolderName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CacheFolderName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
      v8 = CacheFolderName_TypeInfo;
    }
    v9 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v8->static_fields->folderList;
    if ( v9 )
      return System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
               v9,
               name,
               (const MethodInfo_2DFFB90 *)Method_System_Collections_Generic_Dictionary_CacheFolderName_FOLDER_NAME__string__get_Item__);
LABEL_14:
    sub_B170D4();
  }
  return (System_String_o *)StringLiteral_1;
}