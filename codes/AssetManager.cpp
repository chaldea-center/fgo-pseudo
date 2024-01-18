void __fastcall AssetManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v16; // x1
  struct AssetManager_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct AssetManager_StaticFields *v25; // x0
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct AssetManager_StaticFields *v33; // x0
  System_Int32_array **v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct AssetManager_StaticFields *v41; // x0
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct AssetManager_StaticFields *v49; // x0
  System_Int32_array **v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  struct AssetManager_StaticFields *v57; // x0
  System_Int32_array **v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x1
  struct AssetManager_StaticFields *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Int32_array **v73; // x1
  struct AssetManager_StaticFields *v74; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7

  if ( (byte_418A738 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_2094/*"Asset"*/, v8);
    sub_B2C35C(&StringLiteral_2107/*"AssetStorageBack.txt"*/, v9);
    sub_B2C35C(&StringLiteral_21198/*"offline"*/, v10);
    sub_B2C35C(&StringLiteral_2106/*"AssetStorage.txt"*/, v11);
    sub_B2C35C(&StringLiteral_2108/*"AssetStorageCreate.txt"*/, v12);
    sub_B2C35C(&StringLiteral_1/*""*/, v13);
    sub_B2C35C(&StringLiteral_21268/*"online"*/, v14);
    byte_418A738 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)AssetManager_TypeInfo->static_fields;
  v16 = (System_Int32_array **)StringLiteral_2094/*"Asset"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_2094/*"Asset"*/;
  sub_B2C2F8(static_fields, v16, v2, v3, v4, v5, v6, v7);
  v17 = AssetManager_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_21198/*"offline"*/;
  v17->SAVE_DATA_OFFLINE = (struct System_String_o *)StringLiteral_21198/*"offline"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v17->SAVE_DATA_OFFLINE, v18, v19, v20, v21, v22, v23, v24);
  v25 = AssetManager_TypeInfo->static_fields;
  v26 = (System_Int32_array **)StringLiteral_21268/*"online"*/;
  v25->SAVE_DATA_ONLINE = (struct System_String_o *)StringLiteral_21268/*"online"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v25->SAVE_DATA_ONLINE, v26, v27, v28, v29, v30, v31, v32);
  v33 = AssetManager_TypeInfo->static_fields;
  v34 = (System_Int32_array **)StringLiteral_2106/*"AssetStorage.txt"*/;
  v33->configFileName = (struct System_String_o *)StringLiteral_2106/*"AssetStorage.txt"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v33->configFileName, v34, v35, v36, v37, v38, v39, v40);
  v41 = AssetManager_TypeInfo->static_fields;
  v42 = (System_Int32_array **)StringLiteral_2108/*"AssetStorageCreate.txt"*/;
  v41->createConfigFileName = (struct System_String_o *)StringLiteral_2108/*"AssetStorageCreate.txt"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v41->createConfigFileName, v42, v43, v44, v45, v46, v47, v48);
  v49 = AssetManager_TypeInfo->static_fields;
  v50 = (System_Int32_array **)StringLiteral_2107/*"AssetStorageBack.txt"*/;
  v49->backConfigFileName = (struct System_String_o *)StringLiteral_2107/*"AssetStorageBack.txt"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v49->backConfigFileName, v50, v51, v52, v53, v54, v55, v56);
  v57 = AssetManager_TypeInfo->static_fields;
  v58 = (System_Int32_array **)StringLiteral_1/*""*/;
  v57->assetBundleMasterVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v57->assetBundleMasterVersion, v58, v59, v60, v61, v62, v63, v64);
  v65 = (System_Int32_array **)StringLiteral_1/*""*/;
  v66 = AssetManager_TypeInfo->static_fields;
  v66->assetBundleDateVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v66->assetBundleDateVersion, v65, v67, v68, v69, v70, v71, v72);
  v73 = (System_Int32_array **)StringLiteral_1/*""*/;
  v74 = AssetManager_TypeInfo->static_fields;
  v74->assetBundleBuildVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v74->assetBundleBuildVersion, v73, v75, v76, v77, v78, v79, v80);
}


void __fastcall AssetManager___ctor(AssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v45; // x20
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7

  if ( (byte_418A737 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__AssetData__TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_AssetLoader___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_List_AssetLoader__TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager___ctor__, v8);
    sub_B2C35C(&StringLiteral_1/*""*/, v9);
    byte_418A737 = 1;
  }
  LOWORD(this->fields.initCRW) = 257;
  BYTE2(this->fields.initCRW) = 1;
  v10 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v10,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.assetBundleReleaseDic = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)v10;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.assetBundleReleaseDic,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v17,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.assetResourceDic = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)v17;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.assetResourceDic,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v24,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.requestConfigWriteData = (struct System_String_o *)v24;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.requestConfigWriteData,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Int32_array **)StringLiteral_1/*""*/;
  *(_QWORD *)&this->fields.requestWriteCounter = StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.requestWriteCounter, v31, v32, v33, v34, v35, v36, v37);
  LODWORD(this->fields.processingAssetLoaderList) = -1082130432;
  v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_AssetLoader__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v38,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_AssetLoader___ctor__);
  this->fields.downloadSize = (int64_t)v38;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.downloadSize,
    (System_Int32_array **)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  HIDWORD(this->fields.unloadCallbacks) = 1;
  v45 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)sub_B2C42C(System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData____ctor(
    v45,
    (const MethodInfo_295D884 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
  this[1].klass = (AssetManager_c *)v45;
  sub_B2C2F8((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)v45, v46, v47, v48, v49, v50, v51);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_28419D4 *)Method_SingletonMonoBehaviour_AssetManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AssetManager__AddCallbackLoadStatus(
        AssetManager_o *this,
        int32_t type,
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  AssetManager_o *v8; // x22
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int64_t downloadSize; // x23
  __int64 v15; // x24
  int v16; // w8
  __int64 v17; // x23
  const MethodInfo *v18; // x2
  AssetManager_LoadWaitStatus_o *Current; // x0
  __int64 v20; // x1
  AssetManager_LoadWaitStatus_o *v21; // x22
  char v22; // w19
  int v23; // w20
  System_Collections_Generic_Queue_Enumerator_T__o v25; // [xsp+8h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_418A723 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__,
      *(_QWORD *)&type);
    sub_B2C35C(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v12);
    this = (AssetManager_o *)sub_B2C35C(
                               &Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__,
                               v13);
    byte_418A723 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  downloadSize = v8->fields.downloadSize;
  if ( !downloadSize )
    goto LABEL_12;
  v15 = 0LL;
  while ( 1 )
  {
    v16 = *(_DWORD *)(downloadSize + 24);
    if ( (int)v15 >= v16 )
      break;
    if ( v16 <= (unsigned int)v15 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v17 = *(_QWORD *)(*(_QWORD *)(downloadSize + 16) + 8 * v15 + 32);
    if ( !v17 )
      goto LABEL_12;
    this = *(AssetManager_o **)(v17 + 24);
    if ( this )
    {
      this = (AssetManager_o *)AssetData__IsSame_30133532(
                                 (AssetData_o *)this,
                                 type,
                                 name,
                                 (const MethodInfo *)callbackFunc);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( callbackFunc )
          AssetLoader__add_endCallback2((AssetLoader_o *)v17, callbackFunc, v18);
        return 1;
      }
    }
    downloadSize = v8->fields.downloadSize;
    ++v15;
    if ( !downloadSize )
      goto LABEL_12;
  }
  this = (AssetManager_o *)v8[1].klass;
  if ( !this )
LABEL_12:
    sub_B2C434(this, *(_QWORD *)&type);
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___GetEnumerator(
    &v25,
    (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)this,
    (const MethodInfo_295DF4C *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  while ( System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___MoveNext(
            &v25,
            (const MethodInfo_20EA640 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__) )
  {
    Current = System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___get_Current(
                &v25,
                (const MethodInfo_20EA744 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    v21 = Current;
    if ( !Current )
      sub_B2C434(0LL, v20);
    if ( AssetManager_LoadWaitStatus__IsSame(Current, type, name, 0LL) )
    {
      AssetManager_LoadWaitStatus__AddCallback(v21, callbackFunc, 0LL);
      v22 = 1;
      v23 = 5;
      goto LABEL_23;
    }
  }
  v22 = 0;
  v23 = 3;
LABEL_23:
  System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___Dispose(
    &v25,
    (const MethodInfo_20EA630 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  return (v23 == 5) & v22;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AssetManager__AddEntryLoadStatus(
        AssetManager_o *this,
        int32_t type,
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  AssetManager_o *v8; // x22
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int64_t downloadSize; // x23
  __int64 v15; // x24
  int v16; // w8
  __int64 v17; // x23
  const MethodInfo *v18; // x2
  AssetManager_LoadWaitStatus_o *Current; // x0
  __int64 v20; // x1
  AssetManager_LoadWaitStatus_o *v21; // x22
  char v22; // w19
  int v23; // w20
  __int64 v24; // x8
  int v25; // w9
  System_Collections_Generic_Queue_Enumerator_T__o v27; // [xsp+8h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_418A722 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__,
      *(_QWORD *)&type);
    sub_B2C35C(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v12);
    this = (AssetManager_o *)sub_B2C35C(
                               &Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__,
                               v13);
    byte_418A722 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  downloadSize = v8->fields.downloadSize;
  if ( !downloadSize )
    goto LABEL_12;
  v15 = 0LL;
  while ( 1 )
  {
    v16 = *(_DWORD *)(downloadSize + 24);
    if ( (int)v15 >= v16 )
      break;
    if ( v16 <= (unsigned int)v15 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v17 = *(_QWORD *)(*(_QWORD *)(downloadSize + 16) + 8 * v15 + 32);
    if ( !v17 )
      goto LABEL_12;
    this = *(AssetManager_o **)(v17 + 24);
    if ( this )
    {
      this = (AssetManager_o *)AssetData__IsSame_30133532(
                                 (AssetData_o *)this,
                                 type,
                                 name,
                                 (const MethodInfo *)callbackFunc);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v24 = *(_QWORD *)(v17 + 24);
        if ( v24 )
        {
          v25 = *(_DWORD *)(v24 + 84);
          if ( (v25 & 0x80000000) == 0 )
            *(_DWORD *)(v24 + 84) = v25 + 1;
          if ( callbackFunc )
            AssetLoader__add_endCallback2((AssetLoader_o *)v17, callbackFunc, v18);
          return 1;
        }
LABEL_12:
        sub_B2C434(this, *(_QWORD *)&type);
      }
    }
    downloadSize = v8->fields.downloadSize;
    ++v15;
    if ( !downloadSize )
      goto LABEL_12;
  }
  this = (AssetManager_o *)v8[1].klass;
  if ( !this )
    goto LABEL_12;
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___GetEnumerator(
    &v27,
    (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)this,
    (const MethodInfo_295DF4C *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  while ( System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___MoveNext(
            &v27,
            (const MethodInfo_20EA640 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__) )
  {
    Current = System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___get_Current(
                &v27,
                (const MethodInfo_20EA744 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    v21 = Current;
    if ( !Current )
      sub_B2C434(0LL, v20);
    if ( AssetManager_LoadWaitStatus__IsSame(Current, type, name, 0LL) )
    {
      AssetManager_LoadWaitStatus__AddEntry(v21, 0LL);
      AssetManager_LoadWaitStatus__AddCallback(v21, callbackFunc, 0LL);
      v22 = 1;
      v23 = 9;
      goto LABEL_26;
    }
  }
  v22 = 0;
  v23 = 7;
LABEL_26:
  System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___Dispose(
    &v27,
    (const MethodInfo_20EA630 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  return (v23 == 9) & v22;
}


void __fastcall AssetManager__AddLoadWaitStatus(
        AssetManager_o *this,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  AssetManager_LoadWaitStatus_o *v6; // x21
  __int64 v7; // x1
  AssetManager_c *klass; // x0

  if ( (byte_418A725 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_LoadWaitStatus_TypeInfo, callbackFunc);
    sub_B2C35C(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__, v5);
    byte_418A725 = 1;
  }
  v6 = (AssetManager_LoadWaitStatus_o *)sub_B2C42C(AssetManager_LoadWaitStatus_TypeInfo);
  AssetManager_LoadWaitStatus___ctor(v6, callbackFunc, 0LL);
  klass = this[1].klass;
  if ( !klass )
    sub_B2C434(0LL, v7);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
    (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)klass,
    (Mono_Net_CFNetwork_GetProxyData_o *)v6,
    (const MethodInfo_295DE78 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
}


void __fastcall AssetManager__AddLoadWaitStatus_30164704(
        AssetManager_o *this,
        AssetData_o *info,
        const MethodInfo *method)
{
  AssetManager_o *v4; // x19
  __int64 v5; // x1
  AssetManager_LoadWaitStatus_o *v6; // x21

  v4 = this;
  if ( (byte_418A726 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_LoadWaitStatus_TypeInfo, info);
    this = (AssetManager_o *)sub_B2C35C(
                               &Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__,
                               v5);
    byte_418A726 = 1;
  }
  if ( !info
    || (*(_QWORD *)&v4->fields.isErrorDialog += info->fields.size,
        v6 = (AssetManager_LoadWaitStatus_o *)sub_B2C42C(AssetManager_LoadWaitStatus_TypeInfo),
        AssetManager_LoadWaitStatus___ctor_23571744(v6, info, 0LL),
        (this = (AssetManager_o *)v4[1].klass) == 0LL) )
  {
    sub_B2C434(this, info);
  }
  System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
    (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)this,
    (Mono_Net_CFNetwork_GetProxyData_o *)v6,
    (const MethodInfo_295DE78 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
}


void __fastcall AssetManager__AddLoadWaitStatus_30174780(
        AssetManager_o *this,
        AssetData_o *info,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        System_String_array *resourceNames,
        const MethodInfo *method)
{
  AssetManager_o *v8; // x20
  __int64 v9; // x1
  AssetManager_LoadWaitStatus_o *v10; // x23

  v8 = this;
  if ( (byte_418A727 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_LoadWaitStatus_TypeInfo, info);
    this = (AssetManager_o *)sub_B2C35C(
                               &Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__,
                               v9);
    byte_418A727 = 1;
  }
  if ( !info
    || (*(_QWORD *)&v8->fields.isErrorDialog += info->fields.size,
        v10 = (AssetManager_LoadWaitStatus_o *)sub_B2C42C(AssetManager_LoadWaitStatus_TypeInfo),
        AssetManager_LoadWaitStatus___ctor_23571796(v10, info, callbackFunc, resourceNames, 0LL),
        (this = (AssetManager_o *)v8[1].klass) == 0LL) )
  {
    sub_B2C434(this, info);
  }
  System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
    (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)this,
    (Mono_Net_CFNetwork_GetProxyData_o *)v10,
    (const MethodInfo_295DE78 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
}


void __fastcall AssetManager__CancelDownloadAssetStorage(AssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v7; // x20
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *klass; // x0
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o **v16; // x21
  struct Mono_Net_CFNetwork_GetProxyData_array *array; // x8

  if ( (byte_418A71A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__, v5);
    sub_B2C35C(&System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo, v6);
    byte_418A71A = 1;
  }
  v7 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)sub_B2C42C(System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData____ctor(
    v7,
    (const MethodInfo_295D884 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
  v16 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o **)&this[1];
  klass = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)this[1].klass;
  if ( !klass )
LABEL_12:
    sub_B2C434(klass, v8);
  while ( klass->fields._size > 0 )
  {
    klass = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)System_Collections_Generic_Queue_CFNetwork_GetProxyData___Dequeue(
                                                                            klass,
                                                                            (const MethodInfo_295E090 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
    if ( !klass )
      goto LABEL_12;
    array = klass->fields._array;
    v8 = klass;
    if ( array && SHIDWORD(array->m_Items[6]) <= 0 )
    {
      *(_QWORD *)&this->fields.isErrorDialog -= SLODWORD(array->m_Items[2]);
    }
    else
    {
      if ( !v7 )
        goto LABEL_12;
      System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
        v7,
        (Mono_Net_CFNetwork_GetProxyData_o *)klass,
        (const MethodInfo_295DE78 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
    }
    klass = *v16;
    if ( !*v16 )
      goto LABEL_12;
  }
  this[1].klass = (AssetManager_c *)v7;
  sub_B2C2F8((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)v7, v9, v10, v11, v12, v13, v14);
  BYTE2(this->fields.writeRequestThread) = 1;
}


void __fastcall AssetManager__CancelDownloadAssetStorageAll(AssetManager_o *this, const MethodInfo *method)
{
  AssetManager_c *klass; // x0

  if ( (byte_418A71B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__, method);
    byte_418A71B = 1;
  }
  klass = this[1].klass;
  *(_QWORD *)&this->fields.isErrorDialog = 0LL;
  if ( !klass )
    sub_B2C434(0LL, method);
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___Clear(
    (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)klass,
    (const MethodInfo_295DB18 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__);
}


bool __fastcall AssetManager__CheckDateVersion(System_String_o *dateVersion, const MethodInfo *method)
{
  AssetManager_c *v3; // x0
  System_String_o *assetBundleDateVersion; // x0

  if ( (byte_418A6E8 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    byte_418A6E8 = 1;
  }
  v3 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v3 = AssetManager_TypeInfo;
  }
  assetBundleDateVersion = v3->static_fields->assetBundleDateVersion;
  if ( !assetBundleDateVersion )
    sub_B2C434(0LL, method);
  return System_String__StartsWith(assetBundleDateVersion, dateVersion, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AssetManager__CheckEntryLoadStatus(
        AssetManager_o *this,
        int32_t type,
        System_String_o *name,
        const MethodInfo *method)
{
  AssetManager_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int64_t downloadSize; // x23
  __int64 v13; // x22
  int v14; // w8
  __int64 v15; // x8
  AssetManager_LoadWaitStatus_o *Current; // x0
  __int64 v17; // x1
  char v18; // w19
  int v19; // w20
  System_Collections_Generic_Queue_Enumerator_T__o v21; // [xsp+8h] [xbp-48h] BYREF

  v6 = this;
  if ( (byte_418A724 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__,
      *(_QWORD *)&type);
    sub_B2C35C(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v10);
    this = (AssetManager_o *)sub_B2C35C(
                               &Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__,
                               v11);
    byte_418A724 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  downloadSize = v6->fields.downloadSize;
  if ( !downloadSize )
    goto LABEL_12;
  v13 = 0LL;
  while ( 1 )
  {
    v14 = *(_DWORD *)(downloadSize + 24);
    if ( (int)v13 >= v14 )
      break;
    if ( v14 <= (unsigned int)v13 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v15 = *(_QWORD *)(*(_QWORD *)(downloadSize + 16) + 8 * v13 + 32);
    if ( !v15 )
      goto LABEL_12;
    this = *(AssetManager_o **)(v15 + 24);
    if ( this )
    {
      this = (AssetManager_o *)AssetData__IsSame_30133532((AssetData_o *)this, type, name, method);
      if ( ((unsigned __int8)this & 1) != 0 )
        return 1;
    }
    downloadSize = v6->fields.downloadSize;
    ++v13;
    if ( !downloadSize )
      goto LABEL_12;
  }
  this = (AssetManager_o *)v6[1].klass;
  if ( !this )
LABEL_12:
    sub_B2C434(this, *(_QWORD *)&type);
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___GetEnumerator(
    &v21,
    (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)this,
    (const MethodInfo_295DF4C *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  while ( System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___MoveNext(
            &v21,
            (const MethodInfo_20EA640 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__) )
  {
    Current = System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___get_Current(
                &v21,
                (const MethodInfo_20EA744 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    if ( !Current )
      sub_B2C434(0LL, v17);
    if ( AssetManager_LoadWaitStatus__IsSame(Current, type, name, 0LL) )
    {
      v18 = 1;
      v19 = 2;
      goto LABEL_21;
    }
  }
  v19 = 0;
  v18 = 0;
LABEL_21:
  System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___Dispose(
    &v21,
    (const MethodInfo_20EA630 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  return (v19 == 2) & v18;
}


bool __fastcall AssetManager__CheckVersion(
        System_String_o *masterVersion,
        System_String_o *dateVersion,
        const MethodInfo *method)
{
  AssetManager_c *v5; // x0
  AssetManager_c *v6; // x0

  if ( (byte_418A6E7 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, dateVersion);
    byte_418A6E7 = 1;
  }
  v5 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v5 = AssetManager_TypeInfo;
  }
  if ( !System_String__op_Equality(v5->static_fields->assetBundleMasterVersion, masterVersion, 0LL) )
    return 0;
  v6 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v6 = AssetManager_TypeInfo;
  }
  return System_String__op_Equality(v6->static_fields->assetBundleDateVersion, dateVersion, 0LL);
}


void __fastcall AssetManager__ClearCacheWithoutSystemAssets(AssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *assetBundleReleaseDic; // x0
  _BOOL8 v10; // x0
  __int64 v11; // x1
  AssetData_o *currentValue; // x21
  Il2CppClass *klass; // x0
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1
  System_String_o *Path; // x22
  const MethodInfo *v17; // x2
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v18; // [xsp+8h] [xbp-88h] BYREF
  int v19; // [xsp+28h] [xbp-68h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v20; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_418A736 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, method);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v3);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v4);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v6);
    sub_B2C35C(&StringLiteral_12568/*"SYSTEM"*/, v7);
    byte_418A736 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v19 = 0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.assetBundleReleaseDic, 0LL) )
  {
    assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.assetBundleReleaseDic;
    if ( !assetBundleReleaseDic
      || (assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(assetBundleReleaseDic, (const MethodInfo_2DB1A64 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
    {
      sub_B2C434(assetBundleReleaseDic, v8);
    }
    System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
      &v18,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
      (const MethodInfo_29C7178 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    v20 = v18;
    while ( 1 )
    {
      v10 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
              &v20,
              (const MethodInfo_27541F0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
      if ( !v10 )
        break;
      currentValue = (AssetData_o *)v20.fields.currentValue;
      if ( !v20.fields.currentValue )
        sub_B2C434(v10, v11);
      klass = v20.fields.currentValue[2].klass;
      if ( !klass )
        sub_B2C434(0LL, v11);
      if ( !System_String__Equals_44363528((System_String_o *)klass, (System_String_o *)StringLiteral_12568/*"SYSTEM"*/, 5, 0LL) )
      {
        AssetManager__ReleaseReservation(this, currentValue, v14);
        Path = AssetData__get_Path(currentValue, v15);
        if ( System_IO_File__Exists(Path, 0LL) )
        {
          System_IO_File__Delete(Path, 0LL);
          if ( !System_IO_File__Exists(Path, 0LL) )
            currentValue->fields.nowVersion = 0;
        }
      }
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
      &v20,
      (const MethodInfo_27541EC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    AssetManager__ConfigWriteRequest(this, 1, v17);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetManager__ConfigWriteRequest(AssetManager_o *this, bool isFast, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *assetBundleReleaseDic; // x0
  int32_t Count; // w22
  System_Text_StringBuilder_o *v18; // x21
  AssetManager_c *v19; // x0
  AssetManager_c *v20; // x0
  AssetManager_c *v21; // x0
  _BOOL8 v22; // x0
  __int64 v23; // x1
  Il2CppObject *currentValue; // x23
  Il2CppObject *v25; // x22
  System_String_o *v26; // x21
  System_Text_Encoding_o *UTF8; // x0
  __int64 v28; // x1
  System_Byte_array *v29; // x24
  System_String_o *v30; // x1
  System_String_o *v31; // x21
  System_Int32_array **v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  int v39; // w19
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v40; // [xsp+8h] [xbp-88h] BYREF
  int v41[3]; // [xsp+20h] [xbp-70h]
  int v42; // [xsp+2Ch] [xbp-64h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v43; // [xsp+30h] [xbp-60h] BYREF
  uint32_t v44; // [xsp+58h] [xbp-38h] BYREF
  bool lockTaken; // [xsp+5Ch] [xbp-34h] BYREF

  if ( (byte_418A71E & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, isFast);
    sub_B2C35C(&CatAndMouseGame_TypeInfo, v5);
    sub_B2C35C(&Crc32_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, v8);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v9);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v10);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v11);
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v13);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v14);
    sub_B2C35C(&StringLiteral_23698/*"~"*/, v15);
    byte_418A71E = 1;
  }
  memset(&v43, 0, sizeof(v43));
  lockTaken = 0;
  v44 = 0;
  v42 = 0;
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_43;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
         assetBundleReleaseDic,
         (const MethodInfo_2DB18BC *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) < 1 )
    return;
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_43;
  Count = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
            assetBundleReleaseDic,
            (const MethodInfo_2DB18BC *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__);
  v18 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_42402728(v18, 60 * Count, 0LL);
  if ( !v18 )
    goto LABEL_43;
  System_Text_StringBuilder__Append_42411944(v18, 0x40u, 0LL);
  v19 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v19 = AssetManager_TypeInfo;
  }
  System_Text_StringBuilder__Append_42408700(v18, v19->static_fields->assetBundleMasterVersion, 0LL);
  if ( !System_String__IsNullOrEmpty(AssetManager_TypeInfo->static_fields->assetBundleDateVersion, 0LL) )
  {
    System_Text_StringBuilder__Append_42411944(v18, 0x2Cu, 0LL);
    v20 = AssetManager_TypeInfo;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      v20 = AssetManager_TypeInfo;
    }
    System_Text_StringBuilder__Append_42408700(v18, v20->static_fields->assetBundleDateVersion, 0LL);
    if ( !System_String__IsNullOrEmpty(AssetManager_TypeInfo->static_fields->assetBundleBuildVersion, 0LL) )
    {
      System_Text_StringBuilder__Append_42411944(v18, 0x2Cu, 0LL);
      v21 = AssetManager_TypeInfo;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v21 = AssetManager_TypeInfo;
      }
      System_Text_StringBuilder__Append_42408700(v18, v21->static_fields->assetBundleBuildVersion, 0LL);
    }
  }
  System_Text_StringBuilder__Append_42411944(v18, 0xAu, 0LL);
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic
    || (assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values((System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)assetBundleReleaseDic, (const MethodInfo_2DB1A64 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
LABEL_43:
    sub_B2C434(assetBundleReleaseDic, isFast);
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v40,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
    (const MethodInfo_29C7178 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v43 = v40;
  while ( 1 )
  {
    v22 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v43,
            (const MethodInfo_27541F0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v22 )
      break;
    currentValue = v43.fields.currentValue;
    if ( !v43.fields.currentValue )
      sub_B2C434(v22, v23);
    System_Text_StringBuilder__Append_42412040(v18, (int32_t)v43.fields.currentValue[2].monitor, 0LL);
    System_Text_StringBuilder__Append_42411944(v18, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_42408700(v18, (System_String_o *)currentValue[2].klass, 0LL);
    System_Text_StringBuilder__Append_42411944(v18, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_42412040(v18, (int32_t)currentValue[3].klass, 0LL);
    System_Text_StringBuilder__Append_42411944(v18, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_42412320(v18, HIDWORD(currentValue[3].klass), 0LL);
    System_Text_StringBuilder__Append_42411944(v18, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_42408700(v18, (System_String_o *)currentValue[1].monitor, 0LL);
    System_Text_StringBuilder__Append_42408700(v18, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
  }
  v41[0] = 299;
  v42 = 1;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v43,
    (const MethodInfo_27541EC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  v42 = 0;
  v25 = *(Il2CppObject **)&this->fields.requestWriteCounter;
  lockTaken = 0;
  System_Threading_Monitor__Enter_15380960(v25, &lockTaken, 0LL);
  v26 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v18->klass->vtable._3_ToString.method)(
                             v18,
                             v18->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_B2C434(0LL, v28);
  v29 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                               UTF8,
                               v26,
                               UTF8->klass->vtable._19_GetBytes.methodPtr);
  if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  v44 = Crc32__Compute(v29, 0LL);
  v30 = System_UInt32__ToString((uint32_t)&v44, 0LL);
  v31 = System_String__Concat_44308944(
          (System_String_o *)StringLiteral_23698/*"~"*/,
          v30,
          (System_String_o *)StringLiteral_26/*"\n"*/,
          v26,
          0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v32 = (System_Int32_array **)CatAndMouseGame__CatGame8(v31, 0LL);
  *(_QWORD *)&this->fields.requestWriteCounter = v32;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.requestWriteCounter, v32, v33, v34, v35, v36, v37, v38);
  if ( isFast )
  {
    LODWORD(this->fields.processingAssetLoaderList) = 0;
  }
  else if ( *(float *)&this->fields.processingAssetLoaderList < 0.0 )
  {
    LODWORD(this->fields.processingAssetLoaderList) = 1065353216;
  }
  v41[0] = 436;
  v39 = ++v42;
  if ( lockTaken )
    System_Threading_Monitor__Exit(v25, 0LL);
  if ( v39 && v41[v39 - 1] == 436 )
    v42 = v39 - 1;
}


void __fastcall AssetManager__ConfigWriteRequestThread(AssetManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  const MethodInfo *v10; // x1

  AssetManager__ConfigWriteRequest(this, 0, v2);
  *(_QWORD *)&this->fields.reserveWriteRequest = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.reserveWriteRequest, 0LL, v4, v5, v6, v7, v8, v9);
  if ( LOBYTE(this->fields.unloadCallbacks) )
    AssetManager__StartThreadConfigWriteRequest(this, v10);
}


System_String_o *__fastcall AssetManager__ConvertDownloadSizeToString(
        AssetManager_o *this,
        double size,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x19
  Il2CppObject *v19; // x0
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x1
  double v49; // d0
  unsigned int v50; // w8
  unsigned int v51; // w20
  __int64 v53; // x0
  __int64 v54; // x0
  System_String_o format; // [xsp+8h] [xbp-18h] BYREF

  *(double *)&format.klass = size;
  if ( (byte_418A714 & 1) == 0 )
  {
    sub_B2C35C(&string___TypeInfo, method);
    sub_B2C35C(&StringLiteral_8319/*"KB"*/, v3);
    sub_B2C35C(&StringLiteral_23651/*"{0}{1}"*/, v4);
    sub_B2C35C(&StringLiteral_9267/*"N2"*/, v5);
    sub_B2C35C(&StringLiteral_13337/*"TB"*/, v6);
    sub_B2C35C(&StringLiteral_2217/*"B"*/, v7);
    sub_B2C35C(&StringLiteral_8708/*"MB"*/, v8);
    sub_B2C35C(&StringLiteral_6841/*"GB"*/, v9);
    byte_418A714 = 1;
  }
  v10 = sub_B2C374(string___TypeInfo, 5LL);
  if ( !v10 )
    sub_B2C434(0LL, v11);
  v18 = v10;
  v19 = (Il2CppObject *)StringLiteral_2217/*"B"*/;
  if ( StringLiteral_2217/*"B"*/ )
  {
    v19 = (Il2CppObject *)sub_B2C41C(StringLiteral_2217/*"B"*/, *(_QWORD *)(*(_QWORD *)v18 + 64LL));
    if ( !v19 )
      goto LABEL_35;
    v20 = (System_Int32_array **)StringLiteral_2217/*"B"*/;
  }
  else
  {
    v20 = 0LL;
  }
  if ( !*(_DWORD *)(v18 + 24) )
    goto LABEL_34;
  *(_QWORD *)(v18 + 32) = v20;
  sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 32), v20, v12, v13, v14, v15, v16, v17);
  v19 = (Il2CppObject *)StringLiteral_8319/*"KB"*/;
  if ( StringLiteral_8319/*"KB"*/ )
  {
    v19 = (Il2CppObject *)sub_B2C41C(StringLiteral_8319/*"KB"*/, *(_QWORD *)(*(_QWORD *)v18 + 64LL));
    if ( !v19 )
      goto LABEL_35;
    v27 = (System_Int32_array **)StringLiteral_8319/*"KB"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( *(_DWORD *)(v18 + 24) <= 1u )
    goto LABEL_34;
  *(_QWORD *)(v18 + 40) = v27;
  sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 40), v27, v21, v22, v23, v24, v25, v26);
  v19 = (Il2CppObject *)StringLiteral_8708/*"MB"*/;
  if ( StringLiteral_8708/*"MB"*/ )
  {
    v19 = (Il2CppObject *)sub_B2C41C(StringLiteral_8708/*"MB"*/, *(_QWORD *)(*(_QWORD *)v18 + 64LL));
    if ( !v19 )
      goto LABEL_35;
    v34 = (System_Int32_array **)StringLiteral_8708/*"MB"*/;
  }
  else
  {
    v34 = 0LL;
  }
  if ( *(_DWORD *)(v18 + 24) <= 2u )
    goto LABEL_34;
  *(_QWORD *)(v18 + 48) = v34;
  sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 48), v34, v28, v29, v30, v31, v32, v33);
  v19 = (Il2CppObject *)StringLiteral_6841/*"GB"*/;
  if ( StringLiteral_6841/*"GB"*/ )
  {
    v19 = (Il2CppObject *)sub_B2C41C(StringLiteral_6841/*"GB"*/, *(_QWORD *)(*(_QWORD *)v18 + 64LL));
    if ( !v19 )
      goto LABEL_35;
    v41 = (System_Int32_array **)StringLiteral_6841/*"GB"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( *(_DWORD *)(v18 + 24) <= 3u )
    goto LABEL_34;
  *(_QWORD *)(v18 + 56) = v41;
  sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 56), v41, v35, v36, v37, v38, v39, v40);
  v19 = (Il2CppObject *)StringLiteral_13337/*"TB"*/;
  if ( !StringLiteral_13337/*"TB"*/ )
  {
    v48 = 0LL;
    goto LABEL_28;
  }
  v19 = (Il2CppObject *)sub_B2C41C(StringLiteral_13337/*"TB"*/, *(_QWORD *)(*(_QWORD *)v18 + 64LL));
  if ( !v19 )
  {
LABEL_35:
    v54 = sub_B2C454(v19);
    sub_B2C400(v54, 0LL);
  }
  v48 = (System_Int32_array **)StringLiteral_13337/*"TB"*/;
LABEL_28:
  if ( *(_DWORD *)(v18 + 24) <= 4u )
    goto LABEL_34;
  *(_QWORD *)(v18 + 64) = v48;
  sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 64), v48, v42, v43, v44, v45, v46, v47);
  v49 = *(double *)&format.klass;
  v50 = -1;
  do
  {
    if ( v49 < 1000.0 )
      break;
    ++v50;
    v49 = v49 / 1000.0;
    *(double *)&format.klass = v49;
  }
  while ( v50 <= 2 );
  v51 = v50 + 1;
  v19 = (Il2CppObject *)System_Double__ToString_44253324(v49, &format, (const MethodInfo *)StringLiteral_9267/*"N2"*/);
  if ( v51 >= *(_DWORD *)(v18 + 24) )
  {
LABEL_34:
    v53 = sub_B2C460(v19);
    sub_B2C400(v53, 0LL);
  }
  return System_String__Format_44301068(
           (System_String_o *)StringLiteral_23651/*"{0}{1}"*/,
           v19,
           *(Il2CppObject **)(v18 + 8LL * (int)v51 + 32),
           0LL);
}


void __fastcall AssetManager__DebugLog(AssetManager_o *this, const MethodInfo *method)
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
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *klass; // x0
  __int64 v13; // x1
  int64_t downloadSize; // x8
  int v15; // w8
  int v16; // w9
  _BOOL8 v17; // x0
  __int64 v18; // x1
  int v19; // w20
  int v20; // w8
  int v21; // w20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v22; // [xsp+8h] [xbp-98h] BYREF
  int v23[3]; // [xsp+20h] [xbp-80h]
  int v24; // [xsp+2Ch] [xbp-74h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v25; // [xsp+30h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v26; // [xsp+50h] [xbp-50h] BYREF

  if ( (byte_418A70E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, method);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v3);
    sub_B2C35C(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__, v5);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v6);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v7);
    sub_B2C35C(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v11);
    byte_418A70E = 1;
  }
  memset(&v26, 0, sizeof(v26));
  memset(&v25, 0, sizeof(v25));
  v24 = 0;
  klass = (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)this[1].klass;
  if ( !klass )
    goto LABEL_28;
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___GetEnumerator(
    (System_Collections_Generic_Queue_Enumerator_T__o *)&v22,
    klass,
    (const MethodInfo_295DF4C *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  v26 = v22;
  while ( System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___MoveNext(
            (System_Collections_Generic_Queue_Enumerator_T__o *)&v26,
            (const MethodInfo_20EA640 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__) )
  {
    if ( !System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___get_Current(
            (System_Collections_Generic_Queue_Enumerator_T__o *)&v26,
            (const MethodInfo_20EA744 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__) )
      sub_B2C434(0LL, v13);
  }
  v23[0] = 52;
  v24 = 1;
  System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___Dispose(
    (System_Collections_Generic_Queue_Enumerator_T__o *)&v26,
    (const MethodInfo_20EA630 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  v24 = 0;
  downloadSize = this->fields.downloadSize;
  if ( !downloadSize )
    goto LABEL_28;
  v15 = *(_DWORD *)(downloadSize + 24);
  v16 = -1;
  do
    ++v16;
  while ( v16 < v15 );
  klass = (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)this->fields.assetBundleReleaseDic;
  if ( !klass )
    goto LABEL_28;
  klass = (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                                                                               (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)klass,
                                                                               (const MethodInfo_2DB1A64 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !klass )
    goto LABEL_28;
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v22,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)klass,
    (const MethodInfo_29C7178 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v25 = v22;
  while ( 1 )
  {
    v17 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v25,
            (const MethodInfo_27541F0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v17 )
      break;
    if ( !v25.fields.currentValue )
      sub_B2C434(v17, v18);
  }
  v23[0] = 131;
  v19 = ++v24;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v25,
    (const MethodInfo_27541EC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  if ( v19 )
  {
    v20 = v19 - 1;
    if ( v23[v19 - 1] == 131 )
    {
      --v19;
      v24 = v20;
    }
  }
  klass = (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)this->fields.requestConfigWriteData;
  if ( !klass
    || (klass = (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                                                                                     (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)klass,
                                                                                     (const MethodInfo_2DB1A64 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
LABEL_28:
    sub_B2C434(klass, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v22,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)klass,
    (const MethodInfo_29C7178 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v25 = v22;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v25,
            (const MethodInfo_27541F0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__) )
    ;
  v23[v19] = 183;
  v21 = ++v24;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v25,
    (const MethodInfo_27541EC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  if ( v21 && v23[v21 - 1] == 183 )
    v24 = v21 - 1;
}


System_Collections_IEnumerator_o *__fastcall AssetManager__DelayLoadStart(
        AssetManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_418A72A & 1) == 0 )
  {
    sub_B2C35C(&AssetManager__DelayLoadStart_d__148_TypeInfo, method);
    byte_418A72A = 1;
  }
  v3 = sub_B2C42C(AssetManager__DelayLoadStart_d__148_TypeInfo);
  AssetManager__DelayLoadStart_d__148___ctor((AssetManager__DelayLoadStart_d__148_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall AssetManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  AssetManager_c *v2; // x0

  if ( (byte_418A6E0 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, v1);
    byte_418A6E0 = 1;
  }
  v2 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v2 = AssetManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v2->static_fields->SAVE_KEY, 0LL);
}


bool __fastcall AssetManager__DownloadAssetStorage(
        AssetManager_o *this,
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  _BOOL8 Status; // x0
  const MethodInfo *v10; // x3
  AssetData_o *AssetData; // x0
  const MethodInfo *v12; // x4
  const MethodInfo *v13; // x1

  if ( name )
  {
    Status = AssetManager__AddCallbackLoadStatus(this, 0, name, callbackFunc, method);
    if ( Status )
    {
LABEL_9:
      LOBYTE(AssetData) = 1;
      return (char)AssetData;
    }
    AssetData = AssetManager__GetAssetData((AssetManager_o *)Status, this->fields.assetBundleReleaseDic, name, v10);
    if ( AssetData )
    {
      if ( AssetData->fields.nowVersion == AssetData->fields.newVersion )
      {
        if ( callbackFunc )
          AssetLoader_LoadEndDataHandler__Invoke(callbackFunc, AssetData, 0LL);
      }
      else
      {
        AssetManager__AddLoadWaitStatus_30174780(this, AssetData, callbackFunc, 0LL, v12);
        HIDWORD(this->fields.unloadCallbacks) = loadParallelMax;
        AssetManager__LoadStart(this, v13);
      }
      goto LABEL_9;
    }
  }
  else
  {
    LOBYTE(AssetData) = 0;
  }
  return (char)AssetData;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetManager__DownloadAssetStorageAll(
        AssetManager_o *this,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  HIDWORD(this->fields.unloadCallbacks) = loadParallelMax;
  AssetManager__LoadStart(this, *(const MethodInfo **)&loadParallelMax);
}


void __fastcall AssetManager__DownloadAssetStorageAttribute(
        AssetManager_o *this,
        System_String_o *attrib,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *assetBundleReleaseDic; // x0
  _BOOL8 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  AssetData_o *currentValue; // x22
  int monitor; // w8
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v19; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_418A715 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, attrib);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v7);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v8);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v10);
    byte_418A715 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic
    || (assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(assetBundleReleaseDic, (const MethodInfo_2DB1A64 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
    sub_B2C434(assetBundleReleaseDic, attrib);
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v19,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
    (const MethodInfo_29C7178 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v12 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v19,
            (const MethodInfo_27541F0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v12 )
      break;
    currentValue = (AssetData_o *)v19.fields.currentValue;
    if ( !v19.fields.currentValue )
      sub_B2C434(v12, v13);
    monitor = (int)v19.fields.currentValue[2].monitor;
    if ( monitor < 1 || monitor == HIDWORD(v19.fields.currentValue[2].monitor) )
    {
      if ( System_String__op_Equality(attrib, (System_String_o *)v19.fields.currentValue[2].klass, 0LL)
        && currentValue->fields.nowVersion != currentValue->fields.newVersion )
      {
        AssetManager__AddLoadWaitStatus_30164704(this, currentValue, v17);
      }
    }
    else
    {
      AssetManager__AddLoadWaitStatus_30164704(this, (AssetData_o *)v19.fields.currentValue, v14);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v19,
    (const MethodInfo_27541EC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  HIDWORD(this->fields.unloadCallbacks) = loadParallelMax;
  AssetManager__LoadStart(this, v18);
}


System_Collections_IEnumerator_o *__fastcall AssetManager__DownloadAssetStorageAttributeWithCheckDialog(
        AssetManager_o *this,
        System_String_o *attrib,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_418A713 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_TypeInfo, attrib);
    byte_418A713 = 1;
  }
  v7 = sub_B2C42C(AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_TypeInfo);
  AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117___ctor(
    (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = attrib;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)attrib, v16, v17, v18, v19, v20, v21);
  *(_DWORD *)(v7 + 56) = loadParallelMax;
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall AssetManager__DownloadAssetStorageAttribute_30167504(
        AssetManager_o *this,
        System_String_array *attribList,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  AssetManager_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x9
  System_String_o *v13; // x8
  __int64 v14; // x22
  __int64 v15; // x23
  unsigned __int64 v16; // x9
  __int64 v17; // x0
  _BOOL8 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  AssetData_o *currentValue; // x22
  int monitor; // w8
  int monitor_high; // w9
  __int64 v24; // x8
  unsigned __int64 v25; // x25
  signed __int64 v26; // x26
  _BOOL8 v27; // x0
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x1
  __int64 v30; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v31; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v32; // [xsp+20h] [xbp-60h] BYREF

  v6 = this;
  if ( (byte_418A716 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, attribList);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v7);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v8);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v10);
    this = (AssetManager_o *)sub_B2C35C(&StringLiteral_701/*", "*/, v11);
    byte_418A716 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  if ( !attribList )
LABEL_33:
    sub_B2C434(this, attribList);
  v12 = *(_QWORD *)&attribList->max_length;
  if ( !v12 )
    return;
  if ( !(_DWORD)v12 )
    goto LABEL_13;
  v13 = attribList->m_Items[0];
  if ( (_DWORD)v12 == 1 )
  {
    AssetManager__DownloadAssetStorageAttribute(v6, attribList->m_Items[0], 1, method);
    return;
  }
  if ( (int)v12 >= 2 )
  {
    if ( (v12 & 0xFFFFFFFE) != 0 )
    {
      v14 = (int)v12;
      v15 = 5LL;
      do
      {
        this = (AssetManager_o *)System_String__Concat_44307816(
                                   v13,
                                   (System_String_o *)StringLiteral_701/*", "*/,
                                   *((System_String_o **)&attribList->obj.klass + v15),
                                   0LL);
        v16 = v15 - 3;
        if ( v15 - 3 >= v14 )
          goto LABEL_14;
        v13 = (System_String_o *)this;
        ++v15;
      }
      while ( v16 < attribList->max_length );
    }
LABEL_13:
    v17 = sub_B2C460(this);
    sub_B2C400(v17, 0LL);
  }
LABEL_14:
  this = (AssetManager_o *)v6->fields.assetBundleReleaseDic;
  if ( !this )
    goto LABEL_33;
  this = (AssetManager_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                             (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this,
                             (const MethodInfo_2DB1A64 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !this )
    goto LABEL_33;
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v31,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_29C7178 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v32 = v31;
LABEL_17:
  while ( 1 )
  {
    v18 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v32,
            (const MethodInfo_27541F0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v18 )
      break;
    currentValue = (AssetData_o *)v32.fields.currentValue;
    if ( !v32.fields.currentValue )
      sub_B2C434(v18, v19);
    monitor = (int)v32.fields.currentValue[2].monitor;
    monitor_high = HIDWORD(v32.fields.currentValue[2].monitor);
    if ( monitor < 1 )
    {
      if ( monitor != monitor_high )
      {
        v24 = *(_QWORD *)&attribList->max_length;
        if ( (int)v24 >= 1 )
        {
          v25 = 0LL;
          v26 = (int)v24;
          while ( 1 )
          {
            v27 = System_String__op_Equality(attribList->m_Items[v25], currentValue->fields.attrib, 0LL);
            if ( v27 )
              break;
            if ( (__int64)++v25 >= v26 )
              goto LABEL_17;
            if ( v25 >= attribList->max_length )
            {
              v30 = sub_B2C460(v27);
              sub_B2C400(v30, 0LL);
            }
          }
          AssetManager__AddLoadWaitStatus_30164704(v6, currentValue, v28);
        }
      }
    }
    else if ( monitor != monitor_high )
    {
      AssetManager__AddLoadWaitStatus_30164704(v6, (AssetData_o *)v32.fields.currentValue, v20);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v32,
    (const MethodInfo_27541EC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  HIDWORD(v6->fields.unloadCallbacks) = loadParallelMax;
  AssetManager__LoadStart(v6, v29);
}


bool __fastcall AssetManager__DownloadAssetStorage_30157472(
        AssetManager_o *this,
        System_String_array *nameList,
        System_Action_o *callbackFunc,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  __int64 v5; // x8
  AssetManager_o *v9; // x20
  unsigned __int64 v10; // x23
  bool v11; // w25
  System_String_o *v12; // x1
  int v13; // w8
  const MethodInfo *v14; // x1
  __int64 v16; // x0

  if ( !nameList )
    sub_B2C434(this, 0LL);
  v5 = *(_QWORD *)&nameList->max_length;
  v9 = this;
  if ( (int)v5 < 1 )
  {
    v11 = 1;
  }
  else
  {
    v10 = 0LL;
    v11 = 1;
    do
    {
      if ( v10 >= (unsigned int)v5 )
      {
        v16 = sub_B2C460(this);
        sub_B2C400(v16, 0LL);
      }
      v12 = nameList->m_Items[v10];
      if ( v12 )
      {
        if ( v11 )
        {
          this = (AssetManager_o *)AssetManager__DownloadAssetStorage(v9, v12, 0LL, 1, method);
          v13 = (unsigned __int8)this & 1;
        }
        else
        {
          v13 = 0;
        }
        v11 = v13 != 0;
      }
      LODWORD(v5) = nameList->max_length;
      ++v10;
    }
    while ( (__int64)v10 < (int)v5 );
  }
  AssetManager__AddLoadWaitStatus(v9, callbackFunc, (const MethodInfo *)callbackFunc);
  HIDWORD(v9->fields.unloadCallbacks) = loadParallelMax;
  AssetManager__LoadStart(v9, v14);
  return v11;
}


AssetData_o *__fastcall AssetManager__GetAsset(
        AssetManager_o *this,
        int32_t type,
        System_String_o *name,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__AssetData__o **p_requestConfigWriteData; // x8

  if ( type == 1 )
  {
    p_requestConfigWriteData = (System_Collections_Generic_Dictionary_string__AssetData__o **)&this->fields.requestConfigWriteData;
    return AssetManager__GetAssetData(this, *p_requestConfigWriteData, name, method);
  }
  if ( !type )
  {
    p_requestConfigWriteData = &this->fields.assetBundleReleaseDic;
    return AssetManager__GetAssetData(this, *p_requestConfigWriteData, name, method);
  }
  return 0LL;
}


AssetData_o *__fastcall AssetManager__GetAssetData(
        AssetManager_o *this,
        System_Collections_Generic_Dictionary_string__AssetData__o *dic,
        System_String_o *name,
        const MethodInfo *method)
{
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418A731 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_B2C35C(
                               &Method_System_Collections_Generic_Dictionary_string__AssetData__TryGetValue__,
                               dic);
    byte_418A731 = 1;
  }
  value = 0LL;
  if ( !name )
    return 0LL;
  if ( !dic )
    sub_B2C434(this, dic);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dic,
         (System_Xml_XmlQualifiedName_o *)name,
         &value,
         (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__TryGetValue__) )
  {
    return (AssetData_o *)value;
  }
  else
  {
    return 0LL;
  }
}


System_String_o *__fastcall AssetManager__GetAssetDownloadSizeString(
        AssetManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AssetData_o *AssetData; // x0
  const MethodInfo *v5; // x1
  double size; // d0

  AssetData = AssetManager__GetAssetData(this, this->fields.assetBundleReleaseDic, name, v3);
  if ( AssetData )
    size = (double)AssetData->fields.size;
  else
    size = 0.0;
  return AssetManager__ConvertDownloadSizeToString((AssetManager_o *)AssetData, size, v5);
}


AssetData_o *__fastcall AssetManager__GetAssetResource(
        AssetManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AssetData_o *result; // x0

  result = AssetManager__GetAssetData(
             this,
             (System_Collections_Generic_Dictionary_string__AssetData__o *)this->fields.requestConfigWriteData,
             name,
             v3);
  if ( result )
  {
    if ( !result->fields.objectList )
      return 0LL;
  }
  return result;
}


AssetData_o *__fastcall AssetManager__GetAssetStorage(
        AssetManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AssetData_o *result; // x0

  result = AssetManager__GetAssetData(this, this->fields.assetBundleReleaseDic, name, v3);
  if ( result )
  {
    if ( !result->fields.objectList )
      return 0LL;
  }
  return result;
}


System_String_array *__fastcall AssetManager__GetAssetStorageList(
        AssetManager_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_String_o *v14; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x19
  __int64 v16; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *assetBundleReleaseDic; // x0
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *currentValue; // x23
  System_String_o *monitor; // x0
  _BOOL8 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v25; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v26; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_418A718 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, path);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v5);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v6);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__ToArray__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v10);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v12);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v13);
    byte_418A718 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v14 = System_String__Concat_44305532(path, (System_String_o *)StringLiteral_872/*"/"*/, 0LL);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_17;
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(assetBundleReleaseDic, (const MethodInfo_2DB1A64 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !assetBundleReleaseDic )
    goto LABEL_17;
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v25,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
    (const MethodInfo_29C7178 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v26 = v25;
  while ( 1 )
  {
    v18 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v26,
            (const MethodInfo_27541F0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v18 )
      break;
    currentValue = v26.fields.currentValue;
    if ( !v26.fields.currentValue )
      sub_B2C434(v18, v19);
    monitor = (System_String_o *)v26.fields.currentValue[1].monitor;
    if ( !monitor )
      sub_B2C434(0LL, v19);
    v22 = System_String__StartsWith(monitor, v14, 0LL);
    if ( v22 )
    {
      if ( !v15 )
        sub_B2C434(v22, v23);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v15,
        (EventMissionProgressRequest_Argument_ProgressData_o *)currentValue[1].monitor,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v26,
    (const MethodInfo_27541EC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  if ( !v15 )
LABEL_17:
    sub_B2C434(assetBundleReleaseDic, v16);
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                  (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_string__ToArray__);
}


AssetData_array *__fastcall AssetManager__GetAssetStorage_30160592(
        AssetManager_o *this,
        System_String_array *nameList,
        const MethodInfo *method)
{
  AssetManager_o *v4; // x20
  const MethodInfo *v5; // x3
  __int64 v6; // x8
  AssetData_array *v7; // x21
  unsigned __int64 v8; // x24
  BattleServantConfConponent_o *p_DispLog; // x22
  System_String_o *v10; // x2
  System_Int32_array **v11; // x23
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v19; // x0
  __int64 v20; // x0

  v4 = this;
  if ( (byte_418A732 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_B2C35C(&AssetData___TypeInfo, nameList);
    byte_418A732 = 1;
  }
  if ( !nameList )
LABEL_17:
    sub_B2C434(this, nameList);
  this = (AssetManager_o *)sub_B2C374(AssetData___TypeInfo, nameList->max_length);
  v6 = *(_QWORD *)&nameList->max_length;
  v7 = (AssetData_array *)this;
  if ( (int)v6 >= 1 )
  {
    v8 = 0LL;
    p_DispLog = (BattleServantConfConponent_o *)&this->fields._DispLog;
    while ( v8 < (unsigned int)v6 )
    {
      v10 = nameList->m_Items[v8];
      if ( v10 )
      {
        this = (AssetManager_o *)AssetManager__GetAssetData(this, v4->fields.assetBundleReleaseDic, v10, v5);
        if ( this )
        {
          v11 = (System_Int32_array **)this;
          if ( this->fields.requestConfigWriteData )
          {
            if ( !v7 )
              goto LABEL_17;
            this = (AssetManager_o *)sub_B2C41C(this, v7->obj.klass->_1.element_class);
            if ( !this )
            {
              v20 = sub_B2C454(0LL);
              sub_B2C400(v20, 0LL);
            }
            if ( v8 >= v7->max_length )
              break;
            p_DispLog->klass = (BattleServantConfConponent_c *)v11;
            sub_B2C2F8(p_DispLog, v11, v12, v13, v14, v15, v16, v17);
          }
        }
      }
      LODWORD(v6) = nameList->max_length;
      ++v8;
      p_DispLog = (BattleServantConfConponent_o *)((char *)p_DispLog + 8);
      if ( (__int64)v8 >= (int)v6 )
        return v7;
    }
    v19 = sub_B2C460(this);
    sub_B2C400(v19, 0LL);
  }
  return v7;
}


bool __fastcall AssetManager__GetAssetStorage_30161080(
        AssetManager_o *this,
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  _BOOL8 Status; // x0
  const MethodInfo *v9; // x3
  AssetData_o *AssetData; // x0

  if ( !name )
    goto LABEL_8;
  Status = AssetManager__AddCallbackLoadStatus(this, 0, name, callbackFunc, v4);
  if ( Status )
  {
LABEL_7:
    LOBYTE(AssetData) = 1;
    return (char)AssetData;
  }
  AssetData = AssetManager__GetAssetData((AssetManager_o *)Status, this->fields.assetBundleReleaseDic, name, v9);
  if ( AssetData )
  {
    if ( AssetData->fields.objectList )
    {
      if ( callbackFunc )
        AssetLoader_LoadEndDataHandler__Invoke(callbackFunc, AssetData, 0LL);
      goto LABEL_7;
    }
LABEL_8:
    LOBYTE(AssetData) = 0;
  }
  return (char)AssetData;
}


bool __fastcall AssetManager__GetAsset_30151536(
        AssetManager_o *this,
        int32_t type,
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3
  AssetData_o *Asset; // x0

  if ( AssetManager__AddCallbackLoadStatus(this, type, name, callbackFunc, method) )
  {
LABEL_5:
    LOBYTE(Asset) = 1;
    return (char)Asset;
  }
  Asset = AssetManager__GetAsset(this, type, name, v9);
  if ( Asset )
  {
    if ( callbackFunc )
      AssetLoader_LoadEndDataHandler__Invoke(callbackFunc, Asset, 0LL);
    goto LABEL_5;
  }
  return (char)Asset;
}


bool __fastcall AssetManager__GetAsset_30151836(
        AssetManager_o *this,
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  _BOOL8 Status; // x0
  const MethodInfo *v9; // x3
  AssetData_o *AssetData; // x0
  const MethodInfo *v11; // x4
  bool v12; // w22
  _BOOL8 v14; // x0
  const MethodInfo *v15; // x3

  Status = AssetManager__AddCallbackLoadStatus(this, 0, name, callbackFunc, v4);
  if ( !Status )
  {
    AssetData = AssetManager__GetAssetData((AssetManager_o *)Status, this->fields.assetBundleReleaseDic, name, v9);
    if ( !AssetData )
    {
      v12 = 1;
      v14 = AssetManager__AddCallbackLoadStatus(this, 1, name, callbackFunc, v11);
      if ( v14 )
        return v12;
      AssetData = AssetManager__GetAssetData(
                    (AssetManager_o *)v14,
                    (System_Collections_Generic_Dictionary_string__AssetData__o *)this->fields.requestConfigWriteData,
                    name,
                    v15);
      if ( !AssetData )
        return 0;
    }
    if ( callbackFunc )
      AssetLoader_LoadEndDataHandler__Invoke(callbackFunc, AssetData, 0LL);
  }
  return 1;
}


AssetData_o *__fastcall AssetManager__GetAsset_30175668(
        AssetManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AssetData_o *result; // x0
  const MethodInfo *v7; // x3

  result = AssetManager__GetAssetData(this, this->fields.assetBundleReleaseDic, name, v3);
  if ( !result )
    return AssetManager__GetAssetData(
             0LL,
             (System_Collections_Generic_Dictionary_string__AssetData__o *)this->fields.requestConfigWriteData,
             name,
             v7);
  return result;
}


System_String_o *__fastcall AssetManager__GetDateVersion(const MethodInfo *method)
{
  __int64 v1; // x1
  AssetManager_c *v2; // x0

  if ( (byte_418A6EA & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, v1);
    byte_418A6EA = 1;
  }
  v2 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v2 = AssetManager_TypeInfo;
  }
  return v2->static_fields->assetBundleDateVersion;
}


bool __fastcall AssetManager__GetDebugSlowLoad(const MethodInfo *method)
{
  return 0;
}


bool __fastcall AssetManager__GetDebugStatusOut(AssetManager_o *this, const MethodInfo *method)
{
  return 0;
}


int64_t __fastcall AssetManager__GetDownloadSize(AssetManager_o *this, const MethodInfo *method)
{
  AssetManager_o *v2; // x19
  __int64 v3; // x1
  int64_t downloadSize; // x22
  int64_t v5; // x20
  __int64 v6; // x21
  int v7; // w8

  v2 = this;
  if ( (byte_418A717 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, method);
    this = (AssetManager_o *)sub_B2C35C(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v3);
    byte_418A717 = 1;
  }
  downloadSize = v2->fields.downloadSize;
  if ( !downloadSize )
LABEL_10:
    sub_B2C434(this, method);
  v5 = *(_QWORD *)&v2->fields.isErrorDialog;
  v6 = 0LL;
  while ( 1 )
  {
    v7 = *(_DWORD *)(downloadSize + 24);
    if ( (int)v6 >= v7 )
      return v5;
    if ( v7 <= (unsigned int)v6 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    this = *(AssetManager_o **)(*(_QWORD *)(downloadSize + 16) + 8 * v6 + 32);
    if ( this )
    {
      this = (AssetManager_o *)AssetLoader__get_LoadSize((AssetLoader_o *)this, method);
      downloadSize = v2->fields.downloadSize;
      v5 -= (int)this;
      ++v6;
      if ( downloadSize )
        continue;
    }
    goto LABEL_10;
  }
}


System_String_o *__fastcall AssetManager__GetDownloadSizeString(AssetManager_o *this, const MethodInfo *method)
{
  AssetManager_o *DownloadSize; // x0
  const MethodInfo *v3; // x1

  DownloadSize = (AssetManager_o *)AssetManager__GetDownloadSize(this, method);
  return AssetManager__ConvertDownloadSizeToString(DownloadSize, (double)(__int64)DownloadSize, v3);
}


System_String_o *__fastcall AssetManager__GetMasterVersion(const MethodInfo *method)
{
  __int64 v1; // x1
  AssetManager_c *v2; // x0

  if ( (byte_418A6E9 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, v1);
    byte_418A6E9 = 1;
  }
  v2 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v2 = AssetManager_TypeInfo;
  }
  return v2->static_fields->assetBundleMasterVersion;
}


System_Collections_IEnumerator_o *__fastcall AssetManager__InitCR(AssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_418A71C & 1) == 0 )
  {
    sub_B2C35C(&AssetManager__InitCR_d__130_TypeInfo, method);
    byte_418A71C = 1;
  }
  v3 = sub_B2C42C(AssetManager__InitCR_d__130_TypeInfo);
  AssetManager__InitCR_d__130___ctor((AssetManager__InitCR_d__130_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall AssetManager__Initialize(AssetManager_o *this, const MethodInfo *method)
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_IEnumerator_o *assetBundleDic; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *assetResourceDic; // x0
  char v24; // w23
  const MethodInfo *v25; // x1
  int v26; // w20
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x1
  int v29; // w23
  int64_t downloadSize; // x20
  signed __int64 v31; // x8
  unsigned __int64 v32; // x21
  UnityEngine_Object_o *v33; // x20
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **Path; // x20
  AssetManager_c *v41; // x8
  struct AssetManager_StaticFields *static_fields; // x0
  const MethodInfo *v43; // x1
  struct AssetManager_StaticFields *v44; // x8
  System_String_o *cachePathName; // x20
  System_String_o *configFileName; // x21
  System_String_o *v47; // x0
  System_Int32_array **v48; // x0
  struct AssetManager_StaticFields *v49; // x8
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  struct AssetManager_StaticFields *v56; // x8
  System_String_o *v57; // x20
  const MethodInfo *v58; // x1
  System_String_o *v59; // x0
  System_Int32_array **v60; // x0
  struct AssetManager_StaticFields *v61; // x8
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  struct AssetManager_StaticFields *v68; // x8
  System_String_o *v69; // x20
  const MethodInfo *v70; // x1
  System_String_o *v71; // x0
  System_Int32_array **v72; // x0
  struct AssetManager_StaticFields *v73; // x8
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v80; // [xsp+8h] [xbp-78h] BYREF
  int v81[2]; // [xsp+20h] [xbp-60h]
  int v82; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o i; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_418A710 & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, method);
    sub_B2C35C(&AssetManager_TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, v6);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v7);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v8);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_AssetLoader__Clear__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v12);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v13);
    sub_B2C35C(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v15);
    byte_418A710 = 1;
  }
  memset(&i, 0, sizeof(i));
  v82 = 0;
  assetBundleDic = (System_Collections_IEnumerator_o *)this->fields.assetBundleDic;
  if ( assetBundleDic )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, assetBundleDic, 0LL);
    this->fields.assetBundleDic = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.assetBundleDic, 0LL, v17, v18, v19, v20, v21, v22);
  }
  assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.assetResourceDic;
  if ( !assetResourceDic )
    goto LABEL_52;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    assetResourceDic,
    (const MethodInfo_2DB1E9C *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
  assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.assetBundleReleaseDic;
  if ( !assetResourceDic )
    goto LABEL_52;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
         assetResourceDic,
         (const MethodInfo_2DB18BC *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) < 1 )
  {
    v26 = 0;
  }
  else
  {
    assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.assetBundleReleaseDic;
    if ( !assetResourceDic )
      goto LABEL_52;
    assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values((System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)assetResourceDic, (const MethodInfo_2DB1A64 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    if ( !assetResourceDic )
      goto LABEL_52;
    System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
      &v80,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetResourceDic,
      (const MethodInfo_29C7178 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    v24 = 0;
    for ( i = v80;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &i,
            (const MethodInfo_27541F0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
          v24 |= AssetData__ReleaseData((AssetData_o *)i.fields.currentValue, v25) )
    {
      if ( !i.fields.currentValue )
        sub_B2C434(0LL, v25);
    }
    v81[0] = 115;
    v82 = 1;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
      &i,
      (const MethodInfo_27541EC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    v82 = 0;
    assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.assetBundleReleaseDic;
    if ( !assetResourceDic )
      goto LABEL_52;
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
      assetResourceDic,
      (const MethodInfo_2DB1E9C *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
    v26 = v24 != 0;
  }
  assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.requestConfigWriteData;
  if ( !assetResourceDic )
    goto LABEL_52;
  assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
                                                                                                     assetResourceDic,
                                                                                                     (const MethodInfo_2DB18BC *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__);
  if ( (int)assetResourceDic < 1 )
  {
    if ( !v26 )
      goto LABEL_31;
    goto LABEL_30;
  }
  assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.requestConfigWriteData;
  if ( !assetResourceDic )
    goto LABEL_52;
  assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                                                                                                     (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)assetResourceDic,
                                                                                                     (const MethodInfo_2DB1A64 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !assetResourceDic )
    goto LABEL_52;
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v80,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetResourceDic,
    (const MethodInfo_29C7178 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  for ( i = v80;
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
          &i,
          (const MethodInfo_27541F0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
        v26 |= AssetData__ReleaseData((AssetData_o *)i.fields.currentValue, v28) )
  {
    if ( !i.fields.currentValue )
      sub_B2C434(0LL, v28);
  }
  v81[0] = 201;
  v29 = ++v82;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &i,
    (const MethodInfo_27541EC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  if ( v29 && v81[v29 - 1] == 201 )
    v82 = v29 - 1;
  assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.requestConfigWriteData;
  if ( !assetResourceDic )
    goto LABEL_52;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    assetResourceDic,
    (const MethodInfo_2DB1E9C *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
  if ( (v26 & 1) != 0 )
LABEL_30:
    AssetManager__RequestUnloadUnusedAssets(this, 0LL, v27);
LABEL_31:
  downloadSize = this->fields.downloadSize;
  if ( !downloadSize )
    goto LABEL_52;
  LODWORD(v31) = *(_DWORD *)(downloadSize + 24);
  if ( (int)v31 >= 1 )
  {
    v32 = 0LL;
    do
    {
      if ( v32 >= (unsigned int)v31 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v33 = *(UnityEngine_Object_o **)(*(_QWORD *)(downloadSize + 16) + 8 * v32 + 32);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35314896(v33, 0LL);
      downloadSize = this->fields.downloadSize;
      if ( !downloadSize )
        goto LABEL_52;
      v31 = *(int *)(downloadSize + 24);
      ++v32;
    }
    while ( (__int64)v32 < v31 );
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.downloadSize,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_AssetLoader__Clear__);
  }
  assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this[1].klass;
  if ( !assetResourceDic )
LABEL_52:
    sub_B2C434(assetResourceDic, assetBundleDic);
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___Clear(
    (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)assetResourceDic,
    (const MethodInfo_295DB18 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__);
  *(_QWORD *)&this->fields.isErrorDialog = 0LL;
  BYTE2(this->fields.writeRequestThread) = 0;
  Path = (System_Int32_array **)AssetStorageCache__GetPath(0LL);
  v41 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v41 = AssetManager_TypeInfo;
  }
  static_fields = v41->static_fields;
  static_fields->cachePathName = (struct System_String_o *)Path;
  sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->cachePathName, Path, v34, v35, v36, v37, v38, v39);
  v44 = AssetManager_TypeInfo->static_fields;
  cachePathName = v44->cachePathName;
  configFileName = v44->configFileName;
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  v47 = AndroidUtil__ConvertFileNameIfNeed(configFileName, v43);
  v48 = (System_Int32_array **)System_String__Concat_44305532(cachePathName, v47, 0LL);
  v49 = AssetManager_TypeInfo->static_fields;
  v49->cacheListFileName = (struct System_String_o *)v48;
  sub_B2C2F8((BattleServantConfConponent_o *)&v49->cacheListFileName, v48, v50, v51, v52, v53, v54, v55);
  v56 = AssetManager_TypeInfo->static_fields;
  v57 = v56->cachePathName;
  v59 = AndroidUtil__ConvertFileNameIfNeed(v56->createConfigFileName, v58);
  v60 = (System_Int32_array **)System_String__Concat_44305532(v57, v59, 0LL);
  v61 = AssetManager_TypeInfo->static_fields;
  v61->createCacheListFileName = (struct System_String_o *)v60;
  sub_B2C2F8((BattleServantConfConponent_o *)&v61->createCacheListFileName, v60, v62, v63, v64, v65, v66, v67);
  v68 = AssetManager_TypeInfo->static_fields;
  v69 = v68->cachePathName;
  v71 = AndroidUtil__ConvertFileNameIfNeed(v68->backConfigFileName, v70);
  v72 = (System_Int32_array **)System_String__Concat_44305532(v69, v71, 0LL);
  v73 = AssetManager_TypeInfo->static_fields;
  v73->backCacheListFileName = (struct System_String_o *)v72;
  sub_B2C2F8((BattleServantConfConponent_o *)&v73->backCacheListFileName, v72, v74, v75, v76, v77, v78, v79);
  BYTE1(this->fields.initCRW) = 0;
}


void __fastcall AssetManager__InitializeAssetStorage(AssetManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__AssetData__o **p_assetBundleDic; // x20
  System_Collections_IEnumerator_o *inited; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  p_assetBundleDic = &this->fields.assetBundleDic;
  if ( !this->fields.assetBundleDic )
  {
    BYTE2(this->fields.initCRW) = 0;
    inited = AssetManager__InitCR(this, method);
    this->fields.assetBundleDic = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)inited;
    sub_B2C2F8((BattleServantConfConponent_o *)p_assetBundleDic, (System_Int32_array **)inited, v5, v6, v7, v8, v9, v10);
    UnityEngine_MonoBehaviour__StartCoroutine_35309748(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_Collections_IEnumerator_o *)this->fields.assetBundleDic,
      0LL);
  }
}


bool __fastcall AssetManager__IsAssetStorageExistsButEmpty(
        AssetManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AssetData_o *AssetData; // x0

  AssetData = AssetManager__GetAssetData(this, this->fields.assetBundleReleaseDic, name, v3);
  if ( AssetData )
    LOBYTE(AssetData) = AssetData->fields.objectList == 0LL;
  return (char)AssetData;
}


bool __fastcall AssetManager__IsExistAssetStorage(
        AssetManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__AssetData__o *assetBundleReleaseDic; // x0

  if ( (byte_418A72D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__, name);
    byte_418A72D = 1;
  }
  assetBundleReleaseDic = this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
    sub_B2C434(0LL, name);
  return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)assetBundleReleaseDic,
           (System_Xml_XmlQualifiedName_o *)name,
           (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__);
}


bool __fastcall AssetManager__IsExistAssetStorage_30154000(
        AssetManager_o *this,
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v3; // x8
  AssetManager_o *v5; // x20
  unsigned __int64 v6; // x21
  System_String_o *v7; // x1
  __int64 v9; // x0

  if ( !nameList )
    sub_B2C434(this, 0LL);
  v3 = *(_QWORD *)&nameList->max_length;
  if ( (int)v3 < 1 )
    return 1;
  v5 = this;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v3 )
    {
      v9 = sub_B2C460(this);
      sub_B2C400(v9, 0LL);
    }
    v7 = nameList->m_Items[v6];
    if ( v7 )
    {
      this = (AssetManager_o *)AssetManager__IsExistAssetStorage(v5, v7, method);
      if ( ((unsigned __int8)this & 1) == 0 )
        break;
    }
    LODWORD(v3) = nameList->max_length;
    if ( (__int64)++v6 >= (int)v3 )
      return 1;
  }
  return 0;
}


bool __fastcall AssetManager__IsInitializeAssetStorage(AssetManager_o *this, const MethodInfo *method)
{
  return BYTE2(this->fields.initCRW);
}


bool __fastcall AssetManager__IsNeedDownload(AssetManager_o *this, System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AssetData_o *AssetData; // x0

  AssetData = AssetManager__GetAssetData(this, this->fields.assetBundleReleaseDic, name, v3);
  if ( AssetData )
    LOBYTE(AssetData) = AssetData->fields.nowVersion != AssetData->fields.newVersion;
  return (char)AssetData;
}


bool __fastcall AssetManager__IsNeedDownload_30154560(
        AssetManager_o *this,
        System_String_array *nameList,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v4; // x8
  AssetManager_o *v6; // x20
  unsigned __int64 v7; // x21
  System_String_o *v8; // x2
  __int64 v10; // x0

  if ( !nameList )
    sub_B2C434(this, 0LL);
  v4 = *(_QWORD *)&nameList->max_length;
  if ( (int)v4 < 1 )
    return 0;
  v6 = this;
  v7 = 0LL;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v4 )
    {
      v10 = sub_B2C460(this);
      sub_B2C400(v10, 0LL);
    }
    v8 = nameList->m_Items[v7];
    if ( v8 )
    {
      this = (AssetManager_o *)AssetManager__GetAssetData(this, v6->fields.assetBundleReleaseDic, v8, v3);
      if ( this )
      {
        if ( LODWORD(this->fields.initCRW) != HIDWORD(this->fields.initCRW) )
          break;
      }
    }
    LODWORD(v4) = nameList->max_length;
    if ( (__int64)++v7 >= (int)v4 )
      return 0;
  }
  return 1;
}


void __fastcall AssetManager__LateUpdate(AssetManager_o *this, const MethodInfo *method)
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *assetResourceDic; // x0
  int v23; // w21
  _BOOL8 v24; // x0
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x2
  float v27; // s0
  System_String_o *Path; // x20
  int64_t FreeSize; // x20
  ManagerConfig_c *v30; // x0
  AssetManager_c *v31; // x0
  AssetManager_c *v32; // x0
  AssetManager_c *v33; // x0
  System_String_o *createCacheListFileName; // x20
  System_Text_Encoding_o *UTF8; // x22
  System_IO_StreamWriter_o *v36; // x21
  __int64 v37; // x0
  __int64 v38; // x1
  AssetManager_c *v39; // x0
  AssetManager_c *v40; // x0
  AssetManager_c *v41; // x0
  AssetManager_c *v42; // x0
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  __int64 v50; // x0
  System_IO_IOException_o *v51; // x20
  System_String_o *v52; // x0
  __int64 v53; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v54; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v55; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_418A721 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetManager_OnClickRetryDialog__, method);
    sub_B2C35C(&AssetManager_TypeInfo, v3);
    sub_B2C35C(&ErrorDialog_ClickDelegate_TypeInfo, v4);
    sub_B2C35C(&CommonServicePluginScript_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, v7);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v8);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v9);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v10);
    sub_B2C35C(&LocalizationManager_TypeInfo, v11);
    sub_B2C35C(&ManagementManager_TypeInfo, v12);
    sub_B2C35C(&ManagerConfig_TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_B2C35C(&System_IO_StreamWriter_TypeInfo, v15);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v16);
    sub_B2C35C(&StringLiteral_1741/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, v17);
    sub_B2C35C(&StringLiteral_15745/*"[FFFF80]Download error for debug"*/, v18);
    sub_B2C35C(&StringLiteral_11585/*"SCRIPT"*/, v19);
    sub_B2C35C(&StringLiteral_1742/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, v20);
    sub_B2C35C(&StringLiteral_1/*""*/, v21);
    byte_418A721 = 1;
  }
  memset(&v55, 0, sizeof(v55));
  assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.assetResourceDic;
  if ( !assetResourceDic )
    goto LABEL_58;
  assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                                                                                                  assetResourceDic,
                                                                                                  (const MethodInfo_2DB1A64 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !assetResourceDic )
    goto LABEL_58;
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v54,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetResourceDic,
    (const MethodInfo_29C7178 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v23 = 0;
  v55 = v54;
  while ( 1 )
  {
    v24 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v55,
            (const MethodInfo_27541F0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v24 )
      break;
    if ( !v55.fields.currentValue )
      sub_B2C434(v24, v25);
    if ( !HIDWORD(v55.fields.currentValue[5].klass) && v55.fields.currentValue[4].monitor )
      v23 |= AssetData__ReleaseData((AssetData_o *)v55.fields.currentValue, v25);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v55,
    (const MethodInfo_27541EC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  if ( (v23 & 1) != 0 )
    AssetManager__RequestUnloadUnusedAssets(this, 0LL, v26);
  assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.assetResourceDic;
  if ( !assetResourceDic )
LABEL_58:
    sub_B2C434(assetResourceDic, method);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)assetResourceDic,
    (const MethodInfo_2DB1E9C *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
  if ( *(float *)&this->fields.processingAssetLoaderList >= 0.0 )
  {
    v27 = *(float *)&this->fields.processingAssetLoaderList - UnityEngine_Time__get_deltaTime(0LL);
    *(float *)&this->fields.processingAssetLoaderList = v27;
    if ( v27 <= 0.0 && !LOBYTE(this->fields.writeRequestThread) )
    {
      Path = AssetStorageCache__GetPath(0LL);
      if ( (BYTE3(CommonServicePluginScript_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
      }
      FreeSize = CommonServicePluginScript__GetFreeSize(Path, 0LL);
      if ( FreeSize >= 1 )
      {
        v30 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v30 = ManagerConfig_TypeInfo;
        }
        if ( FreeSize < v30->static_fields->LIMIT_FREE_SIZE )
        {
          v50 = sub_B2C360(&System_IO_IOException_TypeInfo);
          v51 = (System_IO_IOException_o *)sub_B2C42C(v50);
          v52 = (System_String_o *)sub_B2C360(&StringLiteral_5320/*"Disk full"*/);
          System_IO_IOException___ctor_38371192(v51, v52, 0LL);
          v53 = sub_B2C360(&Method_AssetManager_LateUpdate__);
          sub_B2C400(v51, v53);
        }
      }
      v31 = AssetManager_TypeInfo;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v31 = AssetManager_TypeInfo;
      }
      if ( System_IO_File__Exists(v31->static_fields->createCacheListFileName, 0LL) )
      {
        v32 = AssetManager_TypeInfo;
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v32 = AssetManager_TypeInfo;
        }
        System_IO_File__Delete(v32->static_fields->createCacheListFileName, 0LL);
      }
      v33 = AssetManager_TypeInfo;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v33 = AssetManager_TypeInfo;
      }
      createCacheListFileName = v33->static_fields->createCacheListFileName;
      UTF8 = System_Text_Encoding__get_UTF8(0LL);
      v36 = (System_IO_StreamWriter_o *)sub_B2C42C(System_IO_StreamWriter_TypeInfo);
      System_IO_StreamWriter___ctor_44356004(v36, createCacheListFileName, 0, UTF8, 0LL);
      if ( !v36 )
        sub_B2C434(v37, v38);
      ((void (__fastcall *)(System_IO_StreamWriter_o *, _QWORD, Il2CppMethodPointer))v36->klass->vtable._16_Write.method)(
        v36,
        *(_QWORD *)&this->fields.requestWriteCounter,
        v36->klass->vtable._17_Write.methodPtr);
      ((void (__fastcall *)(System_IO_StreamWriter_o *, Il2CppMethodPointer))v36->klass->vtable._8_Close.method)(
        v36,
        v36->klass->vtable._9_Dispose.methodPtr);
      if ( System_IO_File__Exists(AssetManager_TypeInfo->static_fields->backCacheListFileName, 0LL) )
      {
        v39 = AssetManager_TypeInfo;
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v39 = AssetManager_TypeInfo;
        }
        System_IO_File__Delete(v39->static_fields->backCacheListFileName, 0LL);
      }
      v40 = AssetManager_TypeInfo;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v40 = AssetManager_TypeInfo;
      }
      if ( System_IO_File__Exists(v40->static_fields->cacheListFileName, 0LL) )
      {
        v41 = AssetManager_TypeInfo;
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v41 = AssetManager_TypeInfo;
        }
        System_IO_File__Move(v41->static_fields->cacheListFileName, v41->static_fields->backCacheListFileName, 0LL);
      }
      v42 = AssetManager_TypeInfo;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v42 = AssetManager_TypeInfo;
      }
      System_IO_File__Move(v42->static_fields->createCacheListFileName, v42->static_fields->cacheListFileName, 0LL);
      v43 = (System_Int32_array **)StringLiteral_1/*""*/;
      *(_QWORD *)&this->fields.requestWriteCounter = StringLiteral_1/*""*/;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.requestWriteCounter, v43, v44, v45, v46, v47, v48, v49);
      LODWORD(this->fields.processingAssetLoaderList) = -1082130432;
    }
  }
}


bool __fastcall AssetManager__LoadAsset(
        AssetManager_o *this,
        int32_t type,
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  AssetData_o *AssetResource; // x0

  if ( type == 1 )
  {
    AssetResource = AssetManager__LoadAssetResource(this, name, (const MethodInfo *)name);
    if ( AssetResource )
    {
      if ( callbackFunc )
        AssetLoader_LoadEndDataHandler__Invoke(callbackFunc, AssetResource, 0LL);
      LOBYTE(AssetResource) = 1;
    }
  }
  else if ( type )
  {
    LOBYTE(AssetResource) = 0;
  }
  else
  {
    LOBYTE(AssetResource) = AssetManager__LoadAssetStorage(this, name, callbackFunc, 1, method);
  }
  return (char)AssetResource;
}


AssetData_o *__fastcall AssetManager__LoadAssetResource(
        AssetManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AssetManager_o *v5; // x21
  __int64 v6; // x1
  AssetData_o *AssetData; // x0
  int32_t entryCount; // w8
  AssetData_o *v9; // x20
  const MethodInfo *v10; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *requestConfigWriteData; // x0
  const MethodInfo *v12; // x1
  int32_t v13; // w8

  v5 = this;
  if ( (byte_418A733 & 1) == 0 )
  {
    sub_B2C35C(&AssetData_TypeInfo, name);
    this = (AssetManager_o *)sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AssetData__Add__, v6);
    byte_418A733 = 1;
  }
  AssetData = AssetManager__GetAssetData(
                this,
                (System_Collections_Generic_Dictionary_string__AssetData__o *)v5->fields.requestConfigWriteData,
                name,
                v3);
  if ( AssetData )
  {
    entryCount = AssetData->fields.entryCount;
    v9 = AssetData;
    if ( (entryCount & 0x80000000) == 0 )
      AssetData->fields.entryCount = entryCount + 1;
  }
  else
  {
    v9 = (AssetData_o *)sub_B2C42C(AssetData_TypeInfo);
    AssetData___ctor(v9, 1, name, v10);
    if ( !v9 )
      goto LABEL_14;
    if ( !AssetData__SetResource(v9, v12) )
      return 0LL;
    v13 = v9->fields.entryCount;
    if ( (v13 & 0x80000000) == 0 )
      v9->fields.entryCount = v13 + 1;
    requestConfigWriteData = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v5->fields.requestConfigWriteData;
    if ( !requestConfigWriteData )
LABEL_14:
      sub_B2C434(requestConfigWriteData, v12);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
      requestConfigWriteData,
      (System_Xml_XmlQualifiedName_o *)name,
      (System_Xml_Schema_XmlSchemaObject_o *)v9,
      (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
  }
  return v9;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AssetManager__LoadAssetStorage(
        AssetManager_o *this,
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  AssetManager_o *v8; // x21
  AssetData_o *AssetData; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4
  AssetData_o *v12; // x23
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *assetResourceDic; // x0
  int32_t entryCount; // w8
  AssetLoader_LoadEndDataHandler_o *v15; // x0
  AssetData_o *v16; // x1
  _BOOL8 Status; // x0
  const MethodInfo *v18; // x3
  AssetData_o *v19; // x0
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x4
  AssetData_o *v22; // x22
  int32_t v23; // w8
  const MethodInfo *v24; // x1
  int32_t v25; // w8

  v8 = this;
  if ( (byte_418A72E & 1) == 0 )
  {
    this = (AssetManager_o *)sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__, name);
    byte_418A72E = 1;
  }
  if ( !name )
  {
    LOBYTE(v19) = 0;
    return (char)v19;
  }
  AssetData = AssetManager__GetAssetData(
                this,
                v8->fields.assetResourceDic,
                name,
                *(const MethodInfo **)&loadParallelMax);
  if ( AssetData )
  {
    v12 = AssetData;
    assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v8->fields.assetResourceDic;
    if ( !assetResourceDic )
      sub_B2C434(0LL, v10);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
      assetResourceDic,
      (System_Xml_XmlQualifiedName_o *)name,
      (const MethodInfo_2DB372C *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
    if ( v12->fields.objectList )
    {
      entryCount = v12->fields.entryCount;
      if ( (entryCount & 0x80000000) == 0 )
        v12->fields.entryCount = entryCount + 1;
      if ( !callbackFunc )
        goto LABEL_20;
      v15 = callbackFunc;
      v16 = v12;
      goto LABEL_11;
    }
  }
  Status = AssetManager__AddEntryLoadStatus(v8, 0, name, callbackFunc, v11);
  if ( Status )
    goto LABEL_20;
  v19 = AssetManager__GetAssetData((AssetManager_o *)Status, v8->fields.assetBundleReleaseDic, name, v18);
  if ( !v19 )
    return (char)v19;
  v22 = v19;
  if ( !v19->fields.objectList )
  {
LABEL_17:
    v23 = v22->fields.entryCount;
    if ( (v23 & 0x80000000) == 0 )
      v22->fields.entryCount = v23 + 1;
    AssetManager__AddLoadWaitStatus_30174780(v8, v22, callbackFunc, 0LL, v21);
    HIDWORD(v8->fields.unloadCallbacks) = loadParallelMax;
    AssetManager__LoadStart(v8, v24);
    goto LABEL_20;
  }
  if ( v19->fields.isLoadResources )
  {
    AssetData__ReleaseData(v19, v20);
    goto LABEL_17;
  }
  v25 = v19->fields.entryCount;
  if ( (v25 & 0x80000000) == 0 )
    v19->fields.entryCount = v25 + 1;
  if ( !callbackFunc )
    goto LABEL_20;
  v15 = callbackFunc;
  v16 = v22;
LABEL_11:
  AssetLoader_LoadEndDataHandler__Invoke(v15, v16, 0LL);
LABEL_20:
  LOBYTE(v19) = 1;
  return (char)v19;
}


bool __fastcall AssetManager__LoadAssetStorage_30159412(
        AssetManager_o *this,
        System_String_array *nameList,
        System_Action_o *callbackFunc,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x21
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *AssetStorage; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x23
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o **v34; // x22
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x4
  __int64 v43; // x8
  int v44; // w26
  unsigned __int64 v45; // x27
  AssetLoader_LoadEndDataHandler_o **v46; // x23
  bool v47; // w25
  System_String_o *v48; // x24
  AssetLoader_LoadEndDataHandler_o *v49; // x25
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  const MethodInfo *v56; // x1
  __int64 v58; // x0

  if ( (byte_418A730 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string__AddRange__, nameList);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__IndexOf__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__RemoveRange__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Remove__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, v13);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v14);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v15);
    sub_B2C35C(&Method_AssetManager___c__DisplayClass168_0__LoadAssetStorage_b__0__, v16);
    sub_B2C35C(&AssetManager___c__DisplayClass168_0_TypeInfo, v17);
    byte_418A730 = 1;
  }
  v18 = sub_B2C42C(AssetManager___c__DisplayClass168_0_TypeInfo);
  AssetManager___c__DisplayClass168_0___ctor((AssetManager___c__DisplayClass168_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_32;
  *(_QWORD *)(v18 + 40) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 40), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v18 + 48) = callbackFunc;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v18 + 48),
    (System_Int32_array **)callbackFunc,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  *(_DWORD *)(v18 + 56) = loadParallelMax;
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  v34 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o **)(v18 + 24);
  *(_QWORD *)(v18 + 24) = v33;
  sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)v33, v35, v36, v37, v38, v39, v40);
  AssetStorage = *(System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o **)(v18 + 24);
  if ( !AssetStorage
    || (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          AssetStorage,
          (System_Collections_Generic_IEnumerable_T__o *)nameList,
          (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_string__AddRange__),
        *(_DWORD *)(v18 + 16) = 0,
        *(_BYTE *)(v18 + 32) = 0,
        !nameList) )
  {
LABEL_32:
    sub_B2C434(AssetStorage, v20);
  }
  v43 = *(_QWORD *)&nameList->max_length;
  if ( (int)v43 >= 1 )
  {
    v44 = 0;
    v45 = 0LL;
    v46 = (AssetLoader_LoadEndDataHandler_o **)(v18 + 64);
    v47 = 1;
    while ( 1 )
    {
      if ( v45 >= (unsigned int)v43 )
      {
        v58 = sub_B2C460(AssetStorage);
        sub_B2C400(v58, 0LL);
      }
      v48 = nameList->m_Items[v45];
      if ( !v48 )
      {
        AssetStorage = *v34;
        if ( !*v34 )
          goto LABEL_32;
        AssetStorage = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                                                                                           (System_Collections_Generic_List_WarBoardManager_TaskList__o *)AssetStorage,
                                                                                           0LL,
                                                                                           (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_string__Remove__);
        goto LABEL_23;
      }
      if ( !v47 )
        goto LABEL_22;
      v49 = *v46;
      if ( !*v46 )
      {
        v49 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v49,
          (Il2CppObject *)v18,
          Method_AssetManager___c__DisplayClass168_0__LoadAssetStorage_b__0__,
          0LL);
        *(_QWORD *)(v18 + 64) = v49;
        sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 64), (System_Int32_array **)v49, v50, v51, v52, v53, v54, v55);
      }
      if ( !this )
        goto LABEL_32;
      AssetStorage = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)AssetManager__LoadAssetStorage(
                                                                                         this,
                                                                                         v48,
                                                                                         v49,
                                                                                         *(_DWORD *)(v18 + 56),
                                                                                         v42);
      if ( ((unsigned __int8)AssetStorage & 1) == 0 )
        break;
      ++v44;
      v47 = 1;
LABEL_23:
      LODWORD(v43) = nameList->max_length;
      if ( (__int64)++v45 >= (int)v43 )
        goto LABEL_26;
    }
    AssetStorage = *v34;
    if ( !*v34 )
      goto LABEL_32;
    AssetStorage = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
                                                                                       (System_Collections_Generic_List_WarBoardManager_TaskList__o *)AssetStorage,
                                                                                       (WarBoardManager_TaskList_o *)v48,
                                                                                       (const MethodInfo_2EF5510 *)Method_System_Collections_Generic_List_string__IndexOf__);
    if ( ((unsigned int)AssetStorage & 0x80000000) == 0 )
    {
      v20 = (unsigned int)AssetStorage;
      AssetStorage = *v34;
      if ( !*v34 )
        goto LABEL_32;
      System_Collections_Generic_List_RegexCharClass_SingleRange___RemoveRange(
        (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)AssetStorage,
        v20,
        AssetStorage->fields._size - v20,
        (const MethodInfo_2EF61F4 *)Method_System_Collections_Generic_List_string__RemoveRange__);
    }
LABEL_22:
    v47 = 0;
    goto LABEL_23;
  }
  v44 = 0;
  v47 = 1;
LABEL_26:
  if ( v44 < 1 || !*(_BYTE *)(v18 + 32) && *(_DWORD *)(v18 + 16) == v44 )
  {
    AssetManager__AddLoadWaitStatus(this, *(System_Action_o **)(v18 + 48), v41);
    HIDWORD(this->fields.unloadCallbacks) = *(_DWORD *)(v18 + 56);
    *(_BYTE *)(v18 + 32) = 1;
    AssetManager__LoadStart(this, v56);
  }
  return v47;
}


bool __fastcall AssetManager__LoadAsset_30175420(
        AssetManager_o *this,
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  bool v8; // w20
  const MethodInfo *v9; // x2
  AssetData_o *AssetResource; // x0

  v8 = 1;
  if ( !AssetManager__LoadAssetStorage(this, name, callbackFunc, 1, v4) )
  {
    AssetResource = AssetManager__LoadAssetResource(this, name, v9);
    if ( AssetResource )
    {
      if ( callbackFunc )
        AssetLoader_LoadEndDataHandler__Invoke(callbackFunc, AssetResource, 0LL);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return v8;
}


bool __fastcall AssetManager__LoadIsBusy(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  struct System_String_o *errorMessage; // x8

  if ( (byte_418A70F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_418A70F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  if ( BYTE2(Instance->fields.webViewBase) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( Instance )
    {
      errorMessage = Instance->fields.errorMessage;
      if ( errorMessage )
        return SLODWORD(errorMessage[1].klass) > 0;
    }
LABEL_9:
    sub_B2C434(Instance, v4);
  }
  return 1;
}


bool __fastcall AssetManager__LoadResourcesAssetStorage(
        AssetManager_o *this,
        System_String_o *name,
        System_String_array *resourceNames,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  AssetData_o *v17; // x0
  AssetData_o *AssetData; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x4
  AssetData_o *v21; // x24
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *assetResourceDic; // x0
  int32_t entryCount; // w8
  AssetLoader_LoadEndDataHandler_o *v24; // x0
  AssetData_o *v25; // x1
  _BOOL8 Status; // x0
  const MethodInfo *v27; // x3
  AssetData_o *v28; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x24
  struct UnityEngine_Object_array *objectList; // x26
  __int64 v31; // x8
  unsigned __int64 v32; // x27
  int max_length; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *v34; // x25
  __int64 v35; // x23
  int32_t v36; // w9
  int size; // w8
  System_String_array *v38; // x0
  const MethodInfo *v39; // x4
  const MethodInfo *v40; // x1
  __int64 v41; // x0
  AssetData_o *v43; // [xsp+8h] [xbp-58h]

  if ( (byte_418A72F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__, name);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__AddRange__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__ToArray__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, v15);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v16);
    byte_418A72F = 1;
  }
  LOBYTE(v17) = 0;
  if ( name && resourceNames )
  {
    if ( *(_QWORD *)&resourceNames->max_length )
    {
      AssetData = AssetManager__GetAssetData(0LL, this->fields.assetResourceDic, name, (const MethodInfo *)callbackFunc);
      if ( AssetData )
      {
        v21 = AssetData;
        assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.assetResourceDic;
        if ( !assetResourceDic )
          goto LABEL_43;
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
          assetResourceDic,
          (System_Xml_XmlQualifiedName_o *)name,
          (const MethodInfo_2DB372C *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
        if ( v21->fields.objectList )
        {
          entryCount = v21->fields.entryCount;
          if ( (entryCount & 0x80000000) == 0 )
            v21->fields.entryCount = entryCount + 1;
          if ( !callbackFunc )
            goto LABEL_39;
          v24 = callbackFunc;
          v25 = v21;
LABEL_13:
          AssetLoader_LoadEndDataHandler__Invoke(v24, v25, 0LL);
LABEL_39:
          LOBYTE(v17) = 1;
          return (char)v17;
        }
      }
      Status = AssetManager__AddEntryLoadStatus(this, 0, name, callbackFunc, v20);
      if ( Status )
        goto LABEL_39;
      v17 = AssetManager__GetAssetData((AssetManager_o *)Status, this->fields.assetBundleReleaseDic, name, v27);
      if ( v17 )
      {
        v28 = v17;
        v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v29,
          (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
        objectList = v28->fields.objectList;
        if ( objectList )
        {
          v31 = *(_QWORD *)&resourceNames->max_length;
          v43 = v28;
          if ( (int)v31 >= 1 )
          {
            v32 = 0LL;
            while ( 1 )
            {
              if ( v32 >= (unsigned int)v31 )
                goto LABEL_44;
              max_length = objectList->max_length;
              v34 = (EventMissionProgressRequest_Argument_ProgressData_o *)resourceNames->m_Items[v32];
              if ( max_length >= 1 )
                break;
LABEL_27:
              if ( !v29 )
                goto LABEL_43;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v29,
                v34,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
LABEL_29:
              LODWORD(v31) = resourceNames->max_length;
              if ( (__int64)++v32 >= (int)v31 )
                goto LABEL_30;
            }
            v35 = 0LL;
            while ( (unsigned int)v35 < max_length )
            {
              assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)objectList->m_Items[v35];
              if ( !assetResourceDic )
                goto LABEL_43;
              assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)assetResourceDic, 0LL);
              if ( !v34 )
                goto LABEL_43;
              assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_String__Equals_44292872((System_String_o *)v34, (System_String_o *)assetResourceDic, 0LL);
              if ( ((unsigned __int8)assetResourceDic & 1) != 0 )
                goto LABEL_29;
              max_length = objectList->max_length;
              if ( (int)++v35 >= max_length )
                goto LABEL_27;
            }
LABEL_44:
            v41 = sub_B2C460(assetResourceDic);
            sub_B2C400(v41, 0LL);
          }
LABEL_30:
          v28 = v43;
          if ( !v29 )
LABEL_43:
            sub_B2C434(assetResourceDic, v19);
        }
        else
        {
          if ( !v29 )
            goto LABEL_43;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v29,
            (System_Collections_Generic_IEnumerable_T__o *)resourceNames,
            (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_string__AddRange__);
        }
        v36 = v28->fields.entryCount;
        size = v29->fields._size;
        if ( (v36 & 0x80000000) == 0 )
          v28->fields.entryCount = v36 + 1;
        if ( size >= 1 )
        {
          v38 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v29,
                                         (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_string__ToArray__);
          AssetManager__AddLoadWaitStatus_30174780(this, v28, callbackFunc, v38, v39);
          HIDWORD(this->fields.unloadCallbacks) = loadParallelMax;
          AssetManager__LoadStart(this, v40);
          goto LABEL_39;
        }
        if ( !callbackFunc )
          goto LABEL_39;
        v24 = callbackFunc;
        v25 = v28;
        goto LABEL_13;
      }
    }
    else
    {
      LOBYTE(v17) = 0;
    }
  }
  return (char)v17;
}


bool __fastcall AssetManager__LoadStart(AssetManager_o *this, const MethodInfo *method)
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x20
  int64_t downloadSize; // x0
  const MethodInfo *v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  AssetManager_c *klass; // x8
  int64_t v28; // x8
  System_Int32_array **ProxyData___Dequeue; // x0
  __int64 v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_o *Name; // x0
  System_Action_o *v38; // x0
  System_Int32_array **v39; // x0
  EventMissionProgressRequest_Argument_ProgressData_o **v40; // x22
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x1
  const MethodInfo *v54; // x2
  AssetLoader_LoadEndDataHandler_o *v55; // x1
  System_Action_o *v56; // x19
  System_Collections_Generic_List_Enumerator_T__o v57; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v58; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_418A729 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__get_Current__, v5);
    sub_B2C35C(&Method_UnityEngine_GameObject_AddComponent_AssetLoader___, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_AssetLoader__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_AssetLoader__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v9);
    sub_B2C35C(&NetworkManager_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__, v12);
    sub_B2C35C(&Method_AssetManager___c__DisplayClass147_0__LoadStart_b__0__, v13);
    sub_B2C35C(&AssetManager___c__DisplayClass147_0_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_5237/*"DelayLoadStart"*/, v15);
    byte_418A729 = 1;
  }
  memset(&v58, 0, sizeof(v58));
  v16 = sub_B2C42C(AssetManager___c__DisplayClass147_0_TypeInfo);
  AssetManager___c__DisplayClass147_0___ctor((AssetManager___c__DisplayClass147_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_42;
  *(_QWORD *)(v16 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( !byte_4185CE0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, v18);
    byte_4185CE0 = 1;
  }
  downloadSize = (int64_t)NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    downloadSize = (int64_t)NetworkManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)(downloadSize + 184) + 136LL) || BYTE1(this->fields.writeRequestThread) )
    return 0;
  if ( LOBYTE(this->fields.initCRW) )
  {
    downloadSize = this->fields.downloadSize;
    if ( !downloadSize )
      goto LABEL_42;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v57,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)downloadSize,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_AssetLoader__GetEnumerator__);
    v58 = v57;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v58,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_AssetLoader__MoveNext__) )
      ;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v58,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_AssetLoader__Dispose__);
  }
  klass = this[1].klass;
  if ( !klass )
    goto LABEL_42;
  if ( SLODWORD(klass->_1.byval_arg.data) < 1 )
    return 0;
  v28 = this->fields.downloadSize;
  if ( !v28 )
    goto LABEL_42;
  if ( *(_DWORD *)(v28 + 24) >= SHIDWORD(this->fields.unloadCallbacks) )
    return 0;
  UnityEngine_MonoBehaviour__StartCoroutine(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5237/*"DelayLoadStart"*/,
    0LL);
  downloadSize = (int64_t)this[1].klass;
  if ( !downloadSize
    || (ProxyData___Dequeue = (System_Int32_array **)System_Collections_Generic_Queue_CFNetwork_GetProxyData___Dequeue(
                                                       (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)downloadSize,
                                                       (const MethodInfo_295E090 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__),
        *(_QWORD *)(v16 + 24) = ProxyData___Dequeue,
        v30 = v16 + 24,
        sub_B2C2F8((BattleServantConfConponent_o *)(v16 + 24), ProxyData___Dequeue, v31, v32, v33, v34, v35, v36),
        (downloadSize = *(_QWORD *)(v16 + 24)) == 0) )
  {
LABEL_42:
    sub_B2C434(downloadSize, v18);
  }
  Name = AssetManager_LoadWaitStatus__get_Name((AssetManager_LoadWaitStatus_o *)downloadSize, 0LL);
  downloadSize = System_String__IsNullOrEmpty(Name, 0LL);
  if ( (downloadSize & 1) == 0 )
  {
    downloadSize = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( downloadSize )
    {
      v39 = (System_Int32_array **)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                     (UnityEngine_GameObject_o *)downloadSize,
                                     (const MethodInfo_1AA77E0 *)Method_UnityEngine_GameObject_AddComponent_AssetLoader___);
      *(_QWORD *)(v16 + 32) = v39;
      v40 = (EventMissionProgressRequest_Argument_ProgressData_o **)(v16 + 32);
      sub_B2C2F8((BattleServantConfConponent_o *)(v16 + 32), v39, v41, v42, v43, v44, v45, v46);
      downloadSize = this->fields.downloadSize;
      if ( downloadSize )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)downloadSize,
          *v40,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_AssetLoader__Add__);
        if ( *(_QWORD *)v30 )
        {
          downloadSize = (int64_t)*v40;
          if ( *v40 )
          {
            v53 = *(System_Int32_array ***)(*(_QWORD *)v30 + 16LL);
            *(_QWORD *)(downloadSize + 24) = v53;
            sub_B2C2F8((BattleServantConfConponent_o *)(downloadSize + 24), v53, v47, v48, v49, v50, v51, v52);
            if ( *(_QWORD *)v30 )
            {
              downloadSize = (int64_t)*v40;
              if ( *v40 )
              {
                v55 = *(AssetLoader_LoadEndDataHandler_o **)(*(_QWORD *)v30 + 32LL);
                if ( v55 )
                  AssetLoader__add_endCallback2((AssetLoader_o *)downloadSize, v55, v54);
                v56 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                System_Action___ctor(
                  v56,
                  (Il2CppObject *)v16,
                  Method_AssetManager___c__DisplayClass147_0__LoadStart_b__0__,
                  0LL);
                if ( v56 )
                {
                  System_Action__Invoke(v56, 0LL);
                  return 1;
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_42;
  }
  if ( !*(_QWORD *)v30 )
    goto LABEL_42;
  v38 = *(System_Action_o **)(*(_QWORD *)v30 + 24LL);
  if ( v38 )
    System_Action__Invoke(v38, 0LL);
  return AssetManager__LoadStart(this, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetManager__OnClickRetryDialog(AssetManager_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v5; // x1
  ManagementManager_c *v6; // x0
  ManagementManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_418A71D & 1) == 0 )
  {
    sub_B2C35C(&ManagementManager_TypeInfo, isDecide);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v5);
    byte_418A71D = 1;
  }
  if ( isDecide )
  {
    LOBYTE(this->fields.writeRequestThread) = 0;
  }
  else
  {
    if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagementManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    }
    if ( !byte_4185D97 )
    {
      sub_B2C35C(&ManagementManager_TypeInfo, isDecide);
      byte_4185D97 = 1;
    }
    v6 = ManagementManager_TypeInfo;
    if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagementManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      v6 = ManagementManager_TypeInfo;
    }
    if ( v6->static_fields->isDuringStartup )
    {
      UnityEngine_Application__Quit_40611620(0LL);
    }
    else
    {
      Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
      if ( !Instance )
        sub_B2C434(0LL, v8);
      ManagementManager__reboot(Instance, 0, 0LL);
    }
  }
}


void __fastcall AssetManager__OnClickWaitDebugDialog(AssetManager_o *this, bool isDecide, const MethodInfo *method)
{
  LOBYTE(this->fields.writeRequestThread) = 0;
}


void __fastcall AssetManager__OnEndLoadAssetStorage(
        AssetManager_o *this,
        AssetLoader_o *loader,
        const MethodInfo *method)
{
  AssetManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int64_t downloadSize; // x22
  _BOOL4 isRequestDownload; // w23
  unsigned __int64 v10; // x21
  UnityEngine_Object_o *v11; // x22
  struct AssetData_o *data; // x8

  v4 = this;
  if ( (byte_418A72B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_AssetLoader__RemoveAt__, loader);
    sub_B2C35C(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v6);
    this = (AssetManager_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_418A72B = 1;
  }
  if ( !loader )
    goto LABEL_14;
  downloadSize = v4->fields.downloadSize;
  if ( !downloadSize )
    goto LABEL_14;
  isRequestDownload = loader->fields.isRequestDownload;
  v10 = 0LL;
  while ( 1 )
  {
    if ( (__int64)v10 >= *(int *)(downloadSize + 24) )
      goto LABEL_18;
    if ( v10 >= *(unsigned int *)(downloadSize + 24) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v11 = *(UnityEngine_Object_o **)(*(_QWORD *)(downloadSize + 16) + 8 * v10 + 32);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (AssetManager_o *)UnityEngine_Object__op_Equality(v11, (UnityEngine_Object_o *)loader, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    downloadSize = v4->fields.downloadSize;
    ++v10;
    if ( !downloadSize )
      goto LABEL_14;
  }
  data = loader->fields.data;
  if ( !data
    || (this = (AssetManager_o *)v4->fields.downloadSize,
        *(_QWORD *)&v4->fields.isErrorDialog -= data->fields.size,
        !this) )
  {
LABEL_14:
    sub_B2C434(this, loader);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
    v10,
    (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_AssetLoader__RemoveAt__);
LABEL_18:
  if ( isRequestDownload )
  {
    if ( *(_QWORD *)&v4->fields.reserveWriteRequest )
      LOBYTE(v4->fields.unloadCallbacks) = 1;
    else
      AssetManager__StartThreadConfigWriteRequest(v4, (const MethodInfo *)loader);
  }
  AssetManager__LoadStart(v4, (const MethodInfo *)loader);
}


void __fastcall AssetManager__PauseDownloadAssetStorage(AssetManager_o *this, const MethodInfo *method)
{
  if ( !BYTE1(this->fields.writeRequestThread) )
    BYTE1(this->fields.writeRequestThread) = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetManager__ReleaseAsset(
        AssetManager_o *this,
        int32_t type,
        System_String_o *name,
        const MethodInfo *method)
{
  AssetData_o *Asset; // x0
  const MethodInfo *v8; // x1
  AssetData_o *v9; // x21
  bool v10; // w0
  __int64 v11; // x1
  struct System_String_o *requestConfigWriteData; // x0

  if ( (byte_418A72C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__, *(_QWORD *)&type);
    byte_418A72C = 1;
  }
  Asset = AssetManager__GetAsset(this, type, name, method);
  if ( Asset )
  {
    v9 = Asset;
    v10 = AssetData__RemoveEntry(Asset, v8);
    if ( type == 1 && v10 )
    {
      requestConfigWriteData = this->fields.requestConfigWriteData;
      if ( !requestConfigWriteData )
        sub_B2C434(0LL, v11);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)requestConfigWriteData,
        (System_Xml_XmlQualifiedName_o *)v9->fields.name,
        (const MethodInfo_2DB372C *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
    }
  }
}


void __fastcall AssetManager__ReleaseAssetResource(
        AssetManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AssetManager_o *v5; // x20
  AssetData_o *AssetData; // x0
  const MethodInfo *v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *requestConfigWriteData; // x0

  v5 = this;
  if ( (byte_418A734 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__, name);
    byte_418A734 = 1;
  }
  AssetData = AssetManager__GetAssetData(
                this,
                (System_Collections_Generic_Dictionary_string__AssetData__o *)v5->fields.requestConfigWriteData,
                name,
                v3);
  if ( AssetData && AssetData__RemoveEntry(AssetData, v7) )
  {
    requestConfigWriteData = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v5->fields.requestConfigWriteData;
    if ( !requestConfigWriteData )
      sub_B2C434(0LL, v8);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
      requestConfigWriteData,
      (System_Xml_XmlQualifiedName_o *)name,
      (const MethodInfo_2DB372C *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
  }
}


void __fastcall AssetManager__ReleaseAssetStorage(
        AssetManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AssetData_o *AssetData; // x0
  const MethodInfo *v5; // x1

  AssetData = AssetManager__GetAssetData(this, this->fields.assetBundleReleaseDic, name, v3);
  if ( AssetData )
    AssetData__RemoveEntry(AssetData, v5);
}


void __fastcall AssetManager__ReleaseAssetStorage_30161424(
        AssetManager_o *this,
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v3; // x8
  unsigned __int64 v6; // x21
  __int64 v7; // x0

  if ( !nameList )
    sub_B2C434(this, 0LL);
  v3 = *(_QWORD *)&nameList->max_length;
  if ( (int)v3 >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v3 )
      {
        v7 = sub_B2C460(this);
        sub_B2C400(v7, 0LL);
      }
      AssetManager__ReleaseAssetStorage(this, nameList->m_Items[v6], method);
      LODWORD(v3) = nameList->max_length;
      ++v6;
    }
    while ( (__int64)v6 < (int)v3 );
  }
}


void __fastcall AssetManager__ReleaseAsset_30152548(
        AssetManager_o *this,
        int32_t type,
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v4; // x8
  unsigned __int64 v8; // x22
  __int64 v9; // x0

  if ( !nameList )
    sub_B2C434(this, type);
  v4 = *(_QWORD *)&nameList->max_length;
  if ( (int)v4 >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)v4 )
      {
        v9 = sub_B2C460(this);
        sub_B2C400(v9, 0LL);
      }
      AssetManager__ReleaseAsset(this, type, nameList->m_Items[v8], method);
      LODWORD(v4) = nameList->max_length;
      ++v8;
    }
    while ( (__int64)v8 < (int)v4 );
  }
}


void __fastcall AssetManager__ReleaseAsset_30152868(
        AssetManager_o *this,
        AssetData_o *assetInfo,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( assetInfo )
    AssetManager__ReleaseAsset(this, assetInfo->fields.type, assetInfo->fields.name, v3);
}


void __fastcall AssetManager__ReleaseAsset_30153068(
        AssetManager_o *this,
        AssetData_array *assetInfoList,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v4; // x8
  unsigned __int64 v7; // x21
  AssetData_o *v8; // x8
  __int64 v9; // x0

  if ( !assetInfoList )
    sub_B2C434(this, 0LL);
  v4 = *(_QWORD *)&assetInfoList->max_length;
  if ( (int)v4 >= 1 )
  {
    v7 = 0LL;
    do
    {
      if ( v7 >= (unsigned int)v4 )
      {
        v9 = sub_B2C460(this);
        sub_B2C400(v9, 0LL);
      }
      v8 = assetInfoList->m_Items[v7];
      if ( v8 )
        AssetManager__ReleaseAsset(this, v8->fields.type, v8->fields.name, v3);
      LODWORD(v4) = assetInfoList->max_length;
      ++v7;
    }
    while ( (__int64)v7 < (int)v4 );
  }
}


void __fastcall AssetManager__ReleaseReservation(AssetManager_o *this, AssetData_o *info, const MethodInfo *method)
{
  AssetManager_o *v4; // x20
  __int64 v5; // x1

  v4 = this;
  if ( (byte_418A728 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AssetData__Add__, info);
    this = (AssetManager_o *)sub_B2C35C(
                               &Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__,
                               v5);
    byte_418A728 = 1;
  }
  if ( !info )
    goto LABEL_11;
  if ( info->fields.entryCount <= 0 && info->fields.objectList )
  {
    this = (AssetManager_o *)v4->fields.assetResourceDic;
    if ( !this )
      goto LABEL_11;
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
            (System_Xml_XmlQualifiedName_o *)info->fields.name,
            (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__) )
    {
      this = (AssetManager_o *)v4->fields.assetResourceDic;
      if ( this )
      {
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
          (System_Xml_XmlQualifiedName_o *)info->fields.name,
          (System_Xml_Schema_XmlSchemaObject_o *)info,
          (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
        return;
      }
LABEL_11:
      sub_B2C434(this, info);
    }
  }
}


void __fastcall AssetManager__RequestUnloadUnusedAssets(
        AssetManager_o *this,
        AssetManager_ResourceUnloadEventHandler_o *callback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  if ( callback )
    AssetManager__add_unloadCallbacks(this, callback, method);
  if ( !BYTE3(this->fields.writeRequestThread) )
  {
    BYTE3(this->fields.writeRequestThread) = 1;
    v4 = AssetManager__coUnloadUnusedAssets(this, (const MethodInfo *)callback);
    UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
  }
}


void __fastcall AssetManager__ResetAssetStorageVersion(
        AssetManager_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_Dictionary_string__AssetData__o *assetBundleReleaseDic; // x8
  System_String_o *v13; // x19
  Il2CppObject *currentValue; // x21
  System_String_o *monitor; // x0
  _BOOL8 v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v18; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418A719 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, path);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v5);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v6);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v8);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v9);
    byte_418A719 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  Values = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)System_String__Concat_44305532(
                                                                                      path,
                                                                                      (System_String_o *)StringLiteral_872/*"/"*/,
                                                                                      0LL);
  assetBundleReleaseDic = this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic
    || (v13 = (System_String_o *)Values,
        (Values = System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)assetBundleReleaseDic,
                    (const MethodInfo_2DB1A64 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL) )
  {
    sub_B2C434(Values, v11);
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v18,
    Values,
    (const MethodInfo_29C7178 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v16 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v18,
            (const MethodInfo_27541F0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v16 )
      break;
    currentValue = v18.fields.currentValue;
    if ( !v18.fields.currentValue )
      sub_B2C434(v16, v17);
    monitor = (System_String_o *)v18.fields.currentValue[1].monitor;
    if ( !monitor )
      sub_B2C434(0LL, v17);
    if ( System_String__StartsWith(monitor, v13, 0LL) )
      LODWORD(currentValue[2].monitor) = 0;
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v18,
    (const MethodInfo_27541EC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
}


void __fastcall AssetManager__ResumeDownloadAssetStorage(AssetManager_o *this, const MethodInfo *method)
{
  if ( BYTE1(this->fields.writeRequestThread) )
  {
    BYTE1(this->fields.writeRequestThread) = 0;
    AssetManager__LoadStart(this, method);
  }
}


void __fastcall AssetManager__SetDebugSlowLoad(bool isUse, const MethodInfo *method)
{
  ;
}


void __fastcall AssetManager__SetDebugStatusOut(AssetManager_o *this, bool isUse, const MethodInfo *method)
{
  ;
}


void __fastcall AssetManager__SetOfflineStatus(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  ManagerConfig_c *v3; // x0
  AssetManager_c *v4; // x0

  if ( (byte_418A6DE & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, v1);
    sub_B2C35C(&ManagerConfig_TypeInfo, v2);
    byte_418A6DE = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( !v3->static_fields->UseStandaloneAsset )
  {
    v4 = AssetManager_TypeInfo;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      v4 = AssetManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetString(v4->static_fields->SAVE_KEY, v4->static_fields->SAVE_DATA_OFFLINE, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


bool __fastcall AssetManager__SetOnlineStatus(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  ManagerConfig_c *v3; // x0
  AssetManager_c *v4; // x0
  System_String_o *String; // x0
  AssetManager_c *v7; // x0

  if ( (byte_418A6DF & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, v1);
    sub_B2C35C(&ManagerConfig_TypeInfo, v2);
    byte_418A6DF = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseStandaloneAsset )
    return 0;
  v4 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v4 = AssetManager_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(v4->static_fields->SAVE_KEY, v4->static_fields->SAVE_DATA_OFFLINE, 0LL);
  if ( System_String__op_Equality(String, AssetManager_TypeInfo->static_fields->SAVE_DATA_ONLINE, 0LL) )
    return 0;
  v7 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v7 = AssetManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(v7->static_fields->SAVE_KEY, v7->static_fields->SAVE_DATA_ONLINE, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
  return 1;
}


void __fastcall AssetManager__SetupAssetStorageAll(AssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *assetBundleReleaseDic; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v11; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418A711 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, method);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v3);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v4);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v6);
    byte_418A711 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic
    || (assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(assetBundleReleaseDic, (const MethodInfo_2DB1A64 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
    sub_B2C434(assetBundleReleaseDic, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v11,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
    (const MethodInfo_29C7178 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
           &v11,
           (const MethodInfo_27541F0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v8 )
      break;
    if ( !v11.fields.currentValue )
      sub_B2C434(v8, v9);
    if ( LODWORD(v11.fields.currentValue[2].monitor) != HIDWORD(v11.fields.currentValue[2].monitor) )
      AssetManager__AddLoadWaitStatus_30164704(this, (AssetData_o *)v11.fields.currentValue, v10);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v11,
    (const MethodInfo_27541EC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
}


void __fastcall AssetManager__StartConfigWriteRequestThread(AssetManager_o *this, const MethodInfo *method)
{
  if ( *(_QWORD *)&this->fields.reserveWriteRequest )
    LOBYTE(this->fields.unloadCallbacks) = 1;
  else
    AssetManager__StartThreadConfigWriteRequest(this, method);
}


void __fastcall AssetManager__StartThreadConfigWriteRequest(AssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Threading_ThreadStart_o *v5; // x20
  System_Threading_Thread_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x1
  System_Threading_Thread_o *v14; // x0

  if ( (byte_418A71F & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetManager_ConfigWriteRequestThread__, method);
    sub_B2C35C(&System_Threading_ThreadStart_TypeInfo, v3);
    sub_B2C35C(&System_Threading_Thread_TypeInfo, v4);
    byte_418A71F = 1;
  }
  LOBYTE(this->fields.unloadCallbacks) = 0;
  v5 = (System_Threading_ThreadStart_o *)sub_B2C42C(System_Threading_ThreadStart_TypeInfo);
  System_Threading_ThreadStart___ctor(v5, (Il2CppObject *)this, Method_AssetManager_ConfigWriteRequestThread__, 0LL);
  v6 = (System_Threading_Thread_o *)sub_B2C42C(System_Threading_Thread_TypeInfo);
  System_Threading_Thread___ctor(v6, v5, 0LL);
  *(_QWORD *)&this->fields.reserveWriteRequest = v6;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.reserveWriteRequest,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v14 = *(System_Threading_Thread_o **)&this->fields.reserveWriteRequest;
  if ( !v14 )
    sub_B2C434(0LL, v13);
  System_Threading_Thread__Start(v14, 0LL);
}


bool __fastcall AssetManager__SwitchingDebugSlowLoad(const MethodInfo *method)
{
  return 0;
}


bool __fastcall AssetManager__SwitchingDebugStatusOut(AssetManager_o *this, const MethodInfo *method)
{
  return 0;
}


bool __fastcall AssetManager__TryGetAssetObject_object_(
        Il2CppObject **data,
        System_String_o *path,
        System_String_o *name,
        const MethodInfo_17206E0 *method)
{
  __int64 v8; // x1
  AssetData_o *AssetStorage; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  Il2CppObject *v16; // x1
  Il2CppObject *v17; // x19

  if ( (byte_418720F & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, path);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_418720F = 1;
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0LL);
  if ( AssetStorage )
    v16 = (Il2CppObject *)((__int64 (__fastcall *)(AssetData_o *, System_String_o *))method->rgctx_data->_0_AssetData_GetObject_T_->methodPointer)(
                            AssetStorage,
                            name);
  else
    v16 = 0LL;
  *data = v16;
  sub_B2C2F8((BattleServantConfConponent_o *)data, (System_Int32_array **)v16, v10, v11, v12, v13, v14, v15);
  v17 = *data;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0LL, 0LL);
}


bool __fastcall AssetManager__TryGetUIAtlas(
        UIAtlas_o **atlas,
        System_String_o *name,
        System_String_o *atlasName,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  const MethodInfo *v14; // x1
  AssetData_o *AssetStorage; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x20
  _BOOL8 v17; // x0
  __int64 v18; // x1
  srcLineSprite_o *Component_srcLineSprite; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_Object_o *v26; // x19

  if ( (byte_418A735 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, name);
    sub_B2C35C(&AssetManager_TypeInfo, v11);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v12);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v13);
    byte_418A735 = 1;
  }
  *atlas = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)atlas,
    0LL,
    (System_String_array **)atlasName,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(name, v14);
  if ( AssetStorage )
    Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                               AssetStorage,
                                                               atlasName,
                                                               (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  else
    Object_WarBoardWaitTimeSetting = 0LL;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v17 = UnityEngine_Object__op_Inequality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
  if ( v17 )
  {
    if ( !Object_WarBoardWaitTimeSetting )
      sub_B2C434(v17, v18);
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting,
                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    *atlas = (UIAtlas_o *)Component_srcLineSprite;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)atlas,
      (System_Int32_array **)Component_srcLineSprite,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  v26 = (UnityEngine_Object_o *)*atlas;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Inequality(v26, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetManager__UpdateLoadParallelMax(AssetManager_o *this, int32_t value, const MethodInfo *method)
{
  HIDWORD(this->fields.unloadCallbacks) = value;
  AssetManager__LoadStart(this, *(const MethodInfo **)&value);
}


System_Collections_IEnumerator_o *__fastcall AssetManager__WaitForExecutionUnloadUnuseAssets(
        AssetManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_418A6DC & 1) == 0 )
  {
    sub_B2C35C(&AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_TypeInfo, method);
    byte_418A6DC = 1;
  }
  v3 = sub_B2C42C(AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_TypeInfo);
  AssetManager__WaitForExecutionUnloadUnuseAssets_d__41___ctor(
    (AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall AssetManager___DownloadAssetStorageAttributeWithCheckDialog_b__117_0(
        AssetManager_o *this,
        const MethodInfo *method)
{
  AssetManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  int64_t downloadSize; // x8

  v2 = this;
  if ( (byte_418A739 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    this = (AssetManager_o *)sub_B2C35C(&StringLiteral_9352/*"NOW_LOADING"*/, v4);
    byte_418A739 = 1;
  }
  downloadSize = v2->fields.downloadSize;
  if ( !downloadSize )
    sub_B2C434(this, method);
  if ( *(int *)(downloadSize + 24) >= 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playBgm((System_String_o *)StringLiteral_9352/*"NOW_LOADING"*/, 0LL);
  }
}


void __fastcall AssetManager__add_unloadCallbacks(
        AssetManager_o *this,
        AssetManager_ResourceUnloadEventHandler_o *value,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o **p_downLoadWaitList; // x20
  System_Delegate_o *v6; // x21
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *downLoadWaitList; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  AssetManager_o *v11; // x0
  AssetManager_ResourceUnloadEventHandler_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_418A6DA & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_ResourceUnloadEventHandler_TypeInfo, value);
    byte_418A6DA = 1;
  }
  downLoadWaitList = this->fields.downLoadWaitList;
  p_downLoadWaitList = &this->fields.downLoadWaitList;
  v6 = (System_Delegate_o *)downLoadWaitList;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (AssetManager_ResourceUnloadEventHandler_c *)v8->klass != AssetManager_ResourceUnloadEventHandler_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_downLoadWaitList, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  AssetManager__remove_unloadCallbacks(v11, v12, v13);
}


void __fastcall AssetManager__cancelDownloadAssetStorage(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_418A6FD & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_418A6FD = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_B2C434(v4, v5);
    AssetManager__CancelDownloadAssetStorage((AssetManager_o *)Instance, v5);
  }
}


System_Collections_IEnumerator_o *__fastcall AssetManager__coUnloadUnusedAssets(
        AssetManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_418A720 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager__coUnloadUnusedAssets_d__137_TypeInfo, method);
    byte_418A720 = 1;
  }
  v3 = sub_B2C42C(AssetManager__coUnloadUnusedAssets_d__137_TypeInfo);
  AssetManager__coUnloadUnusedAssets_d__137___ctor((AssetManager__coUnloadUnusedAssets_d__137_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


bool __fastcall AssetManager__compAssetStorage(
        System_String_o *name1,
        System_String_o *name2,
        const MethodInfo *method)
{
  int32_t m_stringLength; // w8

  if ( name1 )
  {
    if ( name2 )
      return System_String__Equals_44292872(name1, name2, 0LL);
    m_stringLength = name1->fields.m_stringLength;
    return m_stringLength == 0;
  }
  if ( name2 )
  {
    m_stringLength = name2->fields.m_stringLength;
    return m_stringLength == 0;
  }
  return 1;
}


bool __fastcall AssetManager__compAssetStorageList(
        System_String_array *list1,
        System_String_array *list2,
        const MethodInfo *method)
{
  __int64 v4; // x8
  System_String_array *v5; // x20
  unsigned __int64 v6; // x21
  signed __int64 v7; // x22
  System_String_o *v8; // x1
  __int64 v9; // x0

  if ( list1 && (v4 = *(_QWORD *)&list1->max_length, v5 = list1, v4) )
  {
    if ( !list2 || (_DWORD)v4 != list2->max_length )
      return 0;
    if ( (int)v4 >= 1 )
    {
      if ( (_DWORD)v4 )
      {
        v6 = 0LL;
        v7 = (int)v4;
        do
        {
          if ( v6 >= list2->max_length )
            break;
          list1 = (System_String_array *)v5->m_Items[v6];
          v8 = list2->m_Items[v6];
          if ( list1 )
          {
            if ( !v8 )
              return 0;
            list1 = (System_String_array *)System_String__Equals_44292872((System_String_o *)list1, v8, 0LL);
            if ( ((unsigned __int8)list1 & 1) == 0 )
              return 0;
          }
          else if ( v8 )
          {
            return 0;
          }
          if ( (__int64)++v6 >= v7 )
            return 1;
        }
        while ( v6 < v5->max_length );
      }
      v9 = sub_B2C460(list1);
      sub_B2C400(v9, 0LL);
    }
  }
  else if ( list2 )
  {
    return list2->max_length == 0;
  }
  return 1;
}


bool __fastcall AssetManager__compAssetStorageList_30150540(
        AssetData_array *assetList,
        System_String_array *list,
        const MethodInfo *method)
{
  __int64 v4; // x8
  AssetData_array *v5; // x20
  unsigned __int64 v6; // x21
  signed __int64 v7; // x22
  AssetData_o *v8; // x8
  System_String_o *v9; // x1
  System_String_o *name; // x0
  __int64 v11; // x0

  if ( assetList && (v4 = *(_QWORD *)&assetList->max_length, v5 = assetList, v4) )
  {
    if ( !list || (_DWORD)v4 != list->max_length )
      return 0;
    if ( (int)v4 >= 1 )
    {
      if ( (_DWORD)v4 )
      {
        v6 = 0LL;
        v7 = (int)v4;
        do
        {
          if ( v6 >= list->max_length )
            break;
          v8 = v5->m_Items[v6];
          v9 = list->m_Items[v6];
          if ( v8 )
          {
            if ( !v9 )
              return 0;
            name = v8->fields.name;
            if ( !name )
              sub_B2C434(0LL, v9);
            assetList = (AssetData_array *)System_String__Equals_44292872(name, v9, 0LL);
            if ( ((unsigned __int8)assetList & 1) == 0 )
              return 0;
          }
          else if ( v9 )
          {
            return 0;
          }
          if ( (__int64)++v6 >= v7 )
            return 1;
        }
        while ( v6 < v5->max_length );
      }
      v11 = sub_B2C460(assetList);
      sub_B2C400(v11, 0LL);
    }
  }
  else if ( list )
  {
    return list->max_length == 0;
  }
  return 1;
}


bool __fastcall AssetManager__compAssetStorage_30150260(
        AssetData_o *data,
        System_String_o *name,
        const MethodInfo *method)
{
  struct System_String_o *v3; // x0
  int32_t m_stringLength; // w8

  if ( data && (v3 = data->fields.name) != 0LL )
  {
    if ( name )
      return System_String__Equals_44292872(v3, name, 0LL);
    m_stringLength = v3->fields.m_stringLength;
  }
  else
  {
    if ( !name )
      return 1;
    m_stringLength = name->fields.m_stringLength;
  }
  return m_stringLength == 0;
}


void __fastcall AssetManager__debugLog(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_418A6E2 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_418A6E2 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_B2C434(v4, v5);
    AssetManager__DebugLog((AssetManager_o *)Instance, v5);
  }
}


bool __fastcall AssetManager__downloadAssetStorage(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        int32_t maxParallelLoad,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *Instance; // x22
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4

  if ( (byte_418A700 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_418A700 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_B2C434(v9, v10);
  return AssetManager__DownloadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, v11);
}


bool __fastcall AssetManager__downloadAssetStorage_30157268(
        System_String_array *nameList,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *Instance; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_418A701 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_418A701 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v7 )
    return 0;
  if ( !Instance )
    sub_B2C434(v7, v8);
  return AssetManager__DownloadAssetStorage_30157472((AssetManager_o *)Instance, nameList, callbackFunc, 1, v9);
}


AssetData_o *__fastcall AssetManager__getAsset(int32_t type, System_String_o *name, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *Instance; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_418A6EF & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, name);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_418A6EF = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v7 )
    return 0LL;
  if ( !Instance )
    sub_B2C434(v7, v8);
  return AssetManager__GetAsset((AssetManager_o *)Instance, type, name, v9);
}


AssetData_o *__fastcall AssetManager__getAssetResource(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x20
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  bool v7; // w8
  AssetData_o *result; // x0

  if ( (byte_418A70C & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_418A70C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  result = 0LL;
  if ( !v7 )
  {
    if ( !Instance )
      sub_B2C434(0LL, v5);
    result = AssetManager__GetAssetData(
               0LL,
               (System_Collections_Generic_Dictionary_string__AssetData__o *)Instance->fields.callbackFunc,
               name,
               v6);
    if ( result )
    {
      if ( !result->fields.objectList )
        return 0LL;
    }
  }
  return result;
}


AssetData_o *__fastcall AssetManager__getAssetStorage(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x20
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  bool v7; // w8
  AssetData_o *result; // x0

  if ( (byte_418A706 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_418A706 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  result = 0LL;
  if ( !v7 )
  {
    if ( !Instance )
      sub_B2C434(0LL, v5);
    result = AssetManager__GetAssetData(
               0LL,
               (System_Collections_Generic_Dictionary_string__AssetData__o *)Instance->fields.commonCamera,
               name,
               v6);
    if ( result )
    {
      if ( !result->fields.objectList )
        return 0LL;
    }
  }
  return result;
}


System_String_array *__fastcall AssetManager__getAssetStorageList(System_String_o *path, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_418A6FB & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_418A6FB = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v5 )
    return 0LL;
  if ( !Instance )
    sub_B2C434(v5, v6);
  return AssetManager__GetAssetStorageList((AssetManager_o *)Instance, path, v7);
}


AssetData_array *__fastcall AssetManager__getAssetStorage_30160412(
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_418A707 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_418A707 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v5 )
    return 0LL;
  if ( !Instance )
    sub_B2C434(v5, v6);
  return AssetManager__GetAssetStorage_30160592((AssetManager_o *)Instance, nameList, v7);
}


bool __fastcall AssetManager__getAssetStorage_30160880(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *Instance; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_418A708 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_418A708 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v7 )
    return 0;
  if ( !Instance )
    sub_B2C434(v7, v8);
  return AssetManager__GetAssetStorage_30161080((AssetManager_o *)Instance, name, callbackFunc, v9);
}


bool __fastcall AssetManager__getAsset_30151328(
        int32_t type,
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *Instance; // x22
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4

  if ( (byte_418A6F0 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, name);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_418A6F0 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_B2C434(v9, v10);
  return AssetManager__GetAsset_30151536((AssetManager_o *)Instance, type, name, callbackFunc, v11);
}


bool __fastcall AssetManager__getAsset_30151636(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *Instance; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_418A6F1 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_418A6F1 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v7 )
    return 0;
  if ( !Instance )
    sub_B2C434(v7, v8);
  return AssetManager__GetAsset_30151836((AssetManager_o *)Instance, name, callbackFunc, v9);
}


int64_t __fastcall AssetManager__getDownloadSize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_418A6F6 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_418A6F6 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v4 )
    return 0LL;
  if ( !Instance )
    sub_B2C434(v4, v5);
  return AssetManager__GetDownloadSize((AssetManager_o *)Instance, v5);
}


System_String_o *__fastcall AssetManager__getShaName(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Security_Cryptography_SHA1CryptoServiceProvider_o *v8; // x21
  System_Text_UTF8Encoding_o *v9; // x20
  System_Text_StringBuilder_o *appended; // x0
  __int64 v11; // x1
  System_Byte_array *v12; // x20
  System_Text_StringBuilder_o *v13; // x19
  __int64 v14; // x8
  unsigned __int64 v15; // x21
  __int64 v17; // x0
  int v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_418A6EC & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo, v3);
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, v4);
    sub_B2C35C(&System_Text_UTF8Encoding_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_23482/*"{0,0:x2}"*/, v6);
    sub_B2C35C(&StringLiteral_832/*".bin"*/, v7);
    byte_418A6EC = 1;
  }
  v8 = (System_Security_Cryptography_SHA1CryptoServiceProvider_o *)sub_B2C42C(System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_SHA1CryptoServiceProvider___ctor(v8, 0LL);
  v9 = (System_Text_UTF8Encoding_o *)sub_B2C42C(System_Text_UTF8Encoding_TypeInfo);
  System_Text_UTF8Encoding___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_13;
  appended = (System_Text_StringBuilder_o *)((__int64 (__fastcall *)(System_Text_UTF8Encoding_o *, System_String_o *, Il2CppMethodPointer))v9->klass->vtable._18_GetBytes.method)(
                                              v9,
                                              name,
                                              v9->klass->vtable._19_GetBytes.methodPtr);
  if ( !v8 )
    goto LABEL_13;
  v12 = System_Security_Cryptography_HashAlgorithm__ComputeHash_43523120(
          (System_Security_Cryptography_HashAlgorithm_o *)v8,
          (System_Byte_array *)appended,
          0LL);
  v13 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v13, 0LL);
  System_Security_Cryptography_HashAlgorithm__Clear((System_Security_Cryptography_HashAlgorithm_o *)v8, 0LL);
  if ( !v12 )
    goto LABEL_13;
  v14 = *(_QWORD *)&v12->max_length;
  if ( (int)v14 >= 1 )
  {
    v15 = 0LL;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)v14 )
      {
        v17 = sub_B2C460(appended);
        sub_B2C400(v17, 0LL);
      }
      v18 = v12->m_Items[v15 + 4] ^ 0xAA;
      appended = (System_Text_StringBuilder_o *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
      if ( !v13 )
        break;
      appended = System_Text_StringBuilder__AppendFormat(
                   v13,
                   (System_String_o *)StringLiteral_23482/*"{0,0:x2}"*/,
                   (Il2CppObject *)appended,
                   0LL);
      LODWORD(v14) = v12->max_length;
      if ( (__int64)++v15 >= (int)v14 )
        goto LABEL_11;
    }
LABEL_13:
    sub_B2C434(appended, v11);
  }
LABEL_11:
  if ( !v13 )
    goto LABEL_13;
  System_Text_StringBuilder__Append_42408700(v13, (System_String_o *)StringLiteral_832/*".bin"*/, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v13->klass->vtable._3_ToString.method)(
                              v13,
                              v13->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


System_String_o *__fastcall AssetManager__getUrlString(System_String_o *url, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  NetworkManager_c *v5; // x0
  NetworkManager_c *v6; // x0
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  int64_t v10; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418A6EB & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_1532/*"?t="*/, v3);
    sub_B2C35C(&StringLiteral_20036/*"jar:"*/, v4);
    byte_418A6EB = 1;
  }
  v10 = 0LL;
  v5 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( !url )
    sub_B2C434(v5, method);
  if ( !System_String__StartsWith(url, NetworkManager_TypeInfo->static_fields->FILE_URL_SCHEME, 0LL) )
  {
    v6 = NetworkManager_TypeInfo;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v6 = NetworkManager_TypeInfo;
    }
    v7 = System_String__Concat_44305532((System_String_o *)StringLiteral_20036/*"jar:"*/, v6->static_fields->FILE_URL_SCHEME, 0LL);
    if ( !System_String__StartsWith(url, v7, 0LL) )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v10 = NetworkManager__getTime(0LL) / 300;
      v8 = System_Int64__ToString((int64_t)&v10, 0LL);
      return System_String__Concat_44307816(url, (System_String_o *)StringLiteral_1532/*"?t="*/, v8, 0LL);
    }
  }
  return url;
}


System_String_o *__fastcall AssetManager__getUrlString_30130160(AssetData_o *data, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  AssetManager_c *v8; // x0
  System_String_o *DataServerAddress; // x0
  const MethodInfo *v10; // x1
  System_String_o *v11; // x20
  System_String_o *DownloadName; // x0
  System_Int32_array **v13; // x21
  NetworkManager_c *v14; // x0
  System_String_o *v15; // x0
  System_String_array *v16; // x20
  System_Int32_array **v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **assetBundleDateVersion; // x21
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x21
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Int32_array **v72; // x1
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Int32_array **v79; // x19
  __int64 v81; // x0
  __int64 v82; // x0
  __int64 v83; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418A6ED & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&string___TypeInfo, v4);
    sub_B2C35C(&StringLiteral_15905/*"_"*/, v5);
    sub_B2C35C(&StringLiteral_20036/*"jar:"*/, v6);
    sub_B2C35C(&StringLiteral_1533/*"?v="*/, v7);
    byte_418A6ED = 1;
  }
  v83 = 0LL;
  v8 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  DataServerAddress = AssetManager__get_DataServerAddress((const MethodInfo *)v8);
  if ( !data )
    goto LABEL_56;
  v11 = DataServerAddress;
  DownloadName = AssetData__get_DownloadName(data, v10);
  DataServerAddress = System_String__Concat_44305532(v11, DownloadName, 0LL);
  v13 = (System_Int32_array **)DataServerAddress;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( !v13 )
    goto LABEL_56;
  if ( !System_String__StartsWith((System_String_o *)v13, NetworkManager_TypeInfo->static_fields->FILE_URL_SCHEME, 0LL) )
  {
    v14 = NetworkManager_TypeInfo;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v14 = NetworkManager_TypeInfo;
    }
    v15 = System_String__Concat_44305532(
            (System_String_o *)StringLiteral_20036/*"jar:"*/,
            v14->static_fields->FILE_URL_SCHEME,
            0LL);
    if ( !System_String__StartsWith((System_String_o *)v13, v15, 0LL) )
    {
      DataServerAddress = (System_String_o *)sub_B2C374(string___TypeInfo, 9LL);
      if ( DataServerAddress )
      {
        v16 = (System_String_array *)DataServerAddress;
        v17 = (System_Int32_array **)sub_B2C41C(v13, DataServerAddress->klass->_1.element_class);
        if ( !v17 )
          goto LABEL_58;
        if ( !v16->max_length )
          goto LABEL_57;
        v16->m_Items[0] = (System_String_o *)v13;
        sub_B2C2F8((BattleServantConfConponent_o *)v16->m_Items, v13, v18, v19, v20, v21, v22, v23);
        v17 = (System_Int32_array **)StringLiteral_1533/*"?v="*/;
        if ( StringLiteral_1533/*"?v="*/ )
        {
          v17 = (System_Int32_array **)sub_B2C41C(StringLiteral_1533/*"?v="*/, v16->obj.klass->_1.element_class);
          if ( !v17 )
            goto LABEL_58;
          v30 = (System_Int32_array **)StringLiteral_1533/*"?v="*/;
        }
        else
        {
          v30 = 0LL;
        }
        if ( v16->max_length <= 1 )
          goto LABEL_57;
        v16->m_Items[1] = (System_String_o *)v30;
        sub_B2C2F8((BattleServantConfConponent_o *)&v16->m_Items[1], v30, v24, v25, v26, v27, v28, v29);
        v17 = (System_Int32_array **)AssetManager_TypeInfo;
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v17 = (System_Int32_array **)AssetManager_TypeInfo;
        }
        v37 = *(System_Int32_array ***)&v17[23]->m_Items[13];
        if ( !v37 || (v17 = (System_Int32_array **)sub_B2C41C(v37, v16->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v16->max_length <= 2 )
            goto LABEL_57;
          v16->m_Items[2] = (System_String_o *)v37;
          sub_B2C2F8((BattleServantConfConponent_o *)&v16->m_Items[2], v37, v31, v32, v33, v34, v35, v36);
          v17 = (System_Int32_array **)StringLiteral_15905/*"_"*/;
          if ( StringLiteral_15905/*"_"*/ )
          {
            v17 = (System_Int32_array **)sub_B2C41C(StringLiteral_15905/*"_"*/, v16->obj.klass->_1.element_class);
            if ( !v17 )
              goto LABEL_58;
            v44 = (System_Int32_array **)StringLiteral_15905/*"_"*/;
          }
          else
          {
            v44 = 0LL;
          }
          if ( v16->max_length <= 3 )
            goto LABEL_57;
          v16->m_Items[3] = (System_String_o *)v44;
          sub_B2C2F8((BattleServantConfConponent_o *)&v16->m_Items[3], v44, v38, v39, v40, v41, v42, v43);
          assetBundleDateVersion = (System_Int32_array **)AssetManager_TypeInfo->static_fields->assetBundleDateVersion;
          if ( !assetBundleDateVersion
            || (v17 = (System_Int32_array **)sub_B2C41C(assetBundleDateVersion, v16->obj.klass->_1.element_class)) != 0LL )
          {
            if ( v16->max_length <= 4 )
              goto LABEL_57;
            v16->m_Items[4] = (System_String_o *)assetBundleDateVersion;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&v16->m_Items[4],
              assetBundleDateVersion,
              v45,
              v46,
              v47,
              v48,
              v49,
              v50);
            v17 = (System_Int32_array **)StringLiteral_15905/*"_"*/;
            if ( StringLiteral_15905/*"_"*/ )
            {
              v17 = (System_Int32_array **)sub_B2C41C(StringLiteral_15905/*"_"*/, v16->obj.klass->_1.element_class);
              if ( !v17 )
                goto LABEL_58;
              v58 = (System_Int32_array **)StringLiteral_15905/*"_"*/;
            }
            else
            {
              v58 = 0LL;
            }
            if ( v16->max_length <= 5 )
              goto LABEL_57;
            v16->m_Items[5] = (System_String_o *)v58;
            sub_B2C2F8((BattleServantConfConponent_o *)&v16->m_Items[5], v58, v52, v53, v54, v55, v56, v57);
            HIDWORD(v83) = data->fields.size;
            v17 = (System_Int32_array **)System_Int32__ToString((int32_t)&v83 + 4, 0LL);
            v65 = v17;
            if ( !v17 || (v17 = (System_Int32_array **)sub_B2C41C(v17, v16->obj.klass->_1.element_class)) != 0LL )
            {
              if ( v16->max_length <= 6 )
                goto LABEL_57;
              v16->m_Items[6] = (System_String_o *)v65;
              sub_B2C2F8((BattleServantConfConponent_o *)&v16->m_Items[6], v65, v59, v60, v61, v62, v63, v64);
              v17 = (System_Int32_array **)StringLiteral_15905/*"_"*/;
              if ( StringLiteral_15905/*"_"*/ )
              {
                v17 = (System_Int32_array **)sub_B2C41C(StringLiteral_15905/*"_"*/, v16->obj.klass->_1.element_class);
                if ( !v17 )
                  goto LABEL_58;
                v72 = (System_Int32_array **)StringLiteral_15905/*"_"*/;
              }
              else
              {
                v72 = 0LL;
              }
              if ( v16->max_length <= 7 )
                goto LABEL_57;
              v16->m_Items[7] = (System_String_o *)v72;
              sub_B2C2F8((BattleServantConfConponent_o *)&v16->m_Items[7], v72, v66, v67, v68, v69, v70, v71);
              LODWORD(v83) = data->fields.crc;
              v17 = (System_Int32_array **)System_UInt32__ToString((uint32_t)&v83, 0LL);
              v79 = v17;
              if ( !v17 || (v17 = (System_Int32_array **)sub_B2C41C(v17, v16->obj.klass->_1.element_class)) != 0LL )
              {
                if ( v16->max_length > 8 )
                {
                  v16->m_Items[8] = (System_String_o *)v79;
                  sub_B2C2F8((BattleServantConfConponent_o *)&v16->m_Items[8], v79, v73, v74, v75, v76, v77, v78);
                  return System_String__Concat_44385656(v16, 0LL);
                }
LABEL_57:
                v81 = sub_B2C460(v17);
                sub_B2C400(v81, 0LL);
              }
            }
          }
        }
LABEL_58:
        v82 = sub_B2C454(v17);
        sub_B2C400(v82, 0LL);
      }
LABEL_56:
      sub_B2C434(DataServerAddress, v10);
    }
  }
  return (System_String_o *)v13;
}


System_String_o *__fastcall AssetManager__get_CacheListFile(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_o *Path; // x19
  AssetManager_c *v3; // x8

  if ( (byte_418A6E6 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, v1);
    byte_418A6E6 = 1;
  }
  Path = AssetStorageCache__GetPath(0LL);
  v3 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v3 = AssetManager_TypeInfo;
  }
  return System_String__Concat_44305532(Path, v3->static_fields->configFileName, 0LL);
}


System_String_o *__fastcall AssetManager__get_CachePathName(const MethodInfo *method)
{
  __int64 v1; // x1
  AssetManager_c *v2; // x0

  if ( (byte_418A6E4 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, v1);
    byte_418A6E4 = 1;
  }
  v2 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v2 = AssetManager_TypeInfo;
  }
  return v2->static_fields->cachePathName;
}


System_String_o *__fastcall AssetManager__get_ConfigFileAddress(const MethodInfo *method)
{
  __int64 v1; // x1
  AssetManager_c *v2; // x0
  System_String_o *DataServerAddress; // x0

  if ( (byte_418A6E5 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, v1);
    byte_418A6E5 = 1;
  }
  v2 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  DataServerAddress = AssetManager__get_DataServerAddress((const MethodInfo *)v2);
  return System_String__Concat_44305532(DataServerAddress, AssetManager_TypeInfo->static_fields->configFileName, 0LL);
}


System_String_o *__fastcall AssetManager__get_DataServerAddress(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_418A6E3 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, v1);
    byte_418A6E3 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( !byte_418A73A )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, v1);
    byte_418A73A = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->dataServerAddress;
}


bool __fastcall AssetManager__get_DispLog(AssetManager_o *this, const MethodInfo *method)
{
  return (bool)this->fields.initCRW;
}


bool __fastcall AssetManager__get_InProgressUnloadUnusedAssets(AssetManager_o *this, const MethodInfo *method)
{
  return BYTE4(this->fields.writeRequestThread);
}


bool __fastcall AssetManager__get_IsOnline(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  ManagerConfig_c *v3; // x0
  AssetManager_c *v5; // x0
  System_String_o *String; // x0

  if ( (byte_418A6DD & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, v1);
    sub_B2C35C(&ManagerConfig_TypeInfo, v2);
    byte_418A6DD = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseStandaloneAsset )
    return 0;
  v5 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v5 = AssetManager_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(v5->static_fields->SAVE_KEY, v5->static_fields->SAVE_DATA_OFFLINE, 0LL);
  return System_String__op_Equality(String, AssetManager_TypeInfo->static_fields->SAVE_DATA_ONLINE, 0LL);
}


bool __fastcall AssetManager__isDownloadAssetStorageCheck(
        AssetManager_o *this,
        System_String_o *attrib,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *assetBundleReleaseDic; // x0
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *currentValue; // x21
  int monitor; // w8
  char v14; // w19
  int v15; // w20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418A712 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, attrib);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v5);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v6);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v8);
    byte_418A712 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic
    || (assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(assetBundleReleaseDic, (const MethodInfo_2DB1A64 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
    sub_B2C434(assetBundleReleaseDic, attrib);
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v17,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
    (const MethodInfo_29C7178 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v17,
            (const MethodInfo_27541F0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v10 )
      break;
    currentValue = v17.fields.currentValue;
    if ( !v17.fields.currentValue )
      sub_B2C434(v10, v11);
    monitor = (int)v17.fields.currentValue[2].monitor;
    if ( monitor >= 1 && monitor != HIDWORD(v17.fields.currentValue[2].monitor)
      || System_String__op_Equality(attrib, (System_String_o *)v17.fields.currentValue[2].klass, 0LL)
      && LODWORD(currentValue[2].monitor) != HIDWORD(currentValue[2].monitor) )
    {
      v14 = 1;
      v15 = 4;
      goto LABEL_14;
    }
  }
  v14 = 0;
  v15 = 2;
LABEL_14:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v17,
    (const MethodInfo_27541EC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  return (v15 == 4) & v14;
}


bool __fastcall AssetManager__isExistAssetStorage(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_418A6F7 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_418A6F7 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v5 )
    return 0;
  if ( !Instance )
    sub_B2C434(v5, v6);
  return AssetManager__IsExistAssetStorage((AssetManager_o *)Instance, name, v7);
}


bool __fastcall AssetManager__isExistAssetStorage_30153820(System_String_array *nameList, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_418A6F8 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_418A6F8 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v5 )
    return 0;
  if ( !Instance )
    sub_B2C434(v5, v6);
  return AssetManager__IsExistAssetStorage_30154000((AssetManager_o *)Instance, nameList, v7);
}


bool __fastcall AssetManager__isNeedDownload(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  AssetData_o *AssetData; // x0

  if ( (byte_418A6F9 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_418A6F9 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
  {
    LOBYTE(AssetData) = 0;
  }
  else
  {
    if ( !Instance )
      sub_B2C434(v5, v6);
    AssetData = AssetManager__GetAssetData(
                  (AssetManager_o *)v5,
                  (System_Collections_Generic_Dictionary_string__AssetData__o *)Instance->fields.commonCamera,
                  name,
                  v7);
    if ( AssetData )
      LOBYTE(AssetData) = AssetData->fields.nowVersion != AssetData->fields.newVersion;
  }
  return (char)AssetData;
}


bool __fastcall AssetManager__isNeedDownload_30154380(System_String_array *nameList, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_418A6FA & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_418A6FA = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v5 )
    return 0;
  if ( !Instance )
    sub_B2C434(v5, v6);
  return AssetManager__IsNeedDownload_30154560((AssetManager_o *)Instance, nameList, v7);
}


bool __fastcall AssetManager__loadAsset(
        int32_t type,
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *Instance; // x22
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4

  if ( (byte_418A6EE & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, name);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_418A6EE = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_B2C434(v9, v10);
  return AssetManager__LoadAsset((AssetManager_o *)Instance, type, name, callbackFunc, v11);
}


AssetData_o *__fastcall AssetManager__loadAssetResource(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_418A70B & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_418A70B = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v5 )
    return 0LL;
  if ( !Instance )
    sub_B2C434(v5, v6);
  return AssetManager__LoadAssetResource((AssetManager_o *)Instance, name, v7);
}


bool __fastcall AssetManager__loadAssetStorage(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        int32_t maxParallelLoad,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *Instance; // x22
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4

  if ( (byte_418A702 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_418A702 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_B2C434(v9, v10);
  return AssetManager__LoadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, v11);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AssetManager__loadAssetStorage_30158996(
        System_String_o *name,
        int32_t maxParallelLoad,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *Instance; // x22
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4

  if ( (byte_418A704 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&maxParallelLoad);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_418A704 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_B2C434(v9, v10);
  return AssetManager__LoadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, v11);
}


bool __fastcall AssetManager__loadAssetStorage_30159204(
        System_String_array *nameList,
        System_Action_o *callbackFunc,
        int32_t loadParalleMax,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *Instance; // x22
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4

  if ( (byte_418A705 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_418A705 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_B2C434(v9, v10);
  return AssetManager__LoadAssetStorage_30159412(
           (AssetManager_o *)Instance,
           nameList,
           callbackFunc,
           loadParalleMax,
           v11);
}


bool __fastcall AssetManager__loadResourcesFromAssetStorage(
        System_String_o *assetBandleName,
        System_String_array *resourceNames,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        int32_t maxParallelLoad,
        const MethodInfo *method)
{
  __int64 v9; // x1
  UnityEngine_Object_o *Instance; // x23
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x5

  if ( (byte_418A703 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, resourceNames);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v9);
    byte_418A703 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( v11 )
    return 0;
  if ( !Instance )
    sub_B2C434(v11, v12);
  return AssetManager__LoadResourcesAssetStorage(
           (AssetManager_o *)Instance,
           assetBandleName,
           resourceNames,
           callbackFunc,
           maxParallelLoad,
           v13);
}


void __fastcall AssetManager__pauseDownloadAssetStorage(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x19
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_418A6FE & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_418A6FE = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_B2C434(v4, v5);
    if ( !BYTE1(Instance[1].monitor) )
      BYTE1(Instance[1].monitor) = 1;
  }
}


void __fastcall AssetManager__releaseAsset(int32_t type, System_String_o *name, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *Instance; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_418A6F2 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, name);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_418A6F2 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !Instance )
      sub_B2C434(v7, v8);
    AssetManager__ReleaseAsset((AssetManager_o *)Instance, type, name, v9);
  }
}


void __fastcall AssetManager__releaseAssetResource(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_418A70D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_418A70D = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_B2C434(v5, v6);
    AssetManager__ReleaseAssetResource((AssetManager_o *)Instance, name, v7);
  }
}


void __fastcall AssetManager__releaseAssetStorage(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_418A709 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_418A709 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_B2C434(v5, v6);
    AssetManager__ReleaseAssetStorage((AssetManager_o *)Instance, name, v7);
  }
}


void __fastcall AssetManager__releaseAssetStorage_30161248(System_String_array *nameList, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_418A70A & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_418A70A = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_B2C434(v5, v6);
    AssetManager__ReleaseAssetStorage_30161424((AssetManager_o *)Instance, nameList, v7);
  }
}


void __fastcall AssetManager__releaseAsset_30152352(
        int32_t type,
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *Instance; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_418A6F3 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, nameList);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_418A6F3 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !Instance )
      sub_B2C434(v7, v8);
    AssetManager__ReleaseAsset_30152548((AssetManager_o *)Instance, type, nameList, v9);
  }
}


void __fastcall AssetManager__releaseAsset_30152684(AssetData_o *assetInfo, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_418A6F4 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_418A6F4 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_B2C434(v5, v6);
    if ( assetInfo )
      AssetManager__ReleaseAsset((AssetManager_o *)Instance, assetInfo->fields.type, assetInfo->fields.name, v7);
  }
}


void __fastcall AssetManager__releaseAsset_30152892(AssetData_array *assetInfoList, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_418A6F5 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_418A6F5 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_B2C434(v5, v6);
    AssetManager__ReleaseAsset_30153068((AssetManager_o *)Instance, assetInfoList, v7);
  }
}


void __fastcall AssetManager__remove_unloadCallbacks(
        AssetManager_o *this,
        AssetManager_ResourceUnloadEventHandler_o *value,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o **p_downLoadWaitList; // x20
  System_Delegate_o *v6; // x21
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *downLoadWaitList; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  AssetManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_418A6DB & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_ResourceUnloadEventHandler_TypeInfo, value);
    byte_418A6DB = 1;
  }
  downLoadWaitList = this->fields.downLoadWaitList;
  p_downLoadWaitList = &this->fields.downLoadWaitList;
  v6 = (System_Delegate_o *)downLoadWaitList;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (AssetManager_ResourceUnloadEventHandler_c *)v8->klass != AssetManager_ResourceUnloadEventHandler_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_downLoadWaitList, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  AssetManager__WaitForExecutionUnloadUnuseAssets(v11, v12);
}


void __fastcall AssetManager__resetAssetStorageVersion(System_String_o *path, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_418A6FC & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_418A6FC = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_B2C434(v5, v6);
    AssetManager__ResetAssetStorageVersion((AssetManager_o *)Instance, path, v7);
  }
}


void __fastcall AssetManager__resumeDownloadAssetStorage(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x19
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_418A6FF & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_418A6FF = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_B2C434(v4, v5);
    if ( BYTE1(Instance[1].monitor) )
    {
      BYTE1(Instance[1].monitor) = 0;
      AssetManager__LoadStart((AssetManager_o *)Instance, v5);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetManager__setDebugStatusOut(AssetManager_o *this, bool isUse, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *Instance; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_418A6E1 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isUse);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_418A6E1 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !Instance && !v5 )
    sub_B2C434(v5, v6);
}


void __fastcall AssetManager_LoadWaitStatus___ctor(
        AssetManager_LoadWaitStatus_o *this,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.callbackFunc = callbackFunc;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callbackFunc,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall AssetManager_LoadWaitStatus___ctor_23571744(
        AssetManager_LoadWaitStatus_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.data = data;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)data, v5, v6, v7, v8, v9, v10);
}


void __fastcall AssetManager_LoadWaitStatus___ctor_23571796(
        AssetManager_LoadWaitStatus_o *this,
        AssetData_o *data,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        System_String_array *resourceNames,
        const MethodInfo *method)
{
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.data = data;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)data, v9, v10, v11, v12, v13, v14);
  this->fields.callbackFunc2 = callbackFunc;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callbackFunc,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.resourceNames = resourceNames;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.resourceNames,
    (System_Int32_array **)resourceNames,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
}


void __fastcall AssetManager_LoadWaitStatus__AddCallback(
        AssetManager_LoadWaitStatus_o *this,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_callbackFunc2; // x19
  System_Delegate_o *callbackFunc2; // t1
  System_Int32_array **v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  AssetManager_LoadWaitStatus_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4186BB5 & 1) == 0 )
  {
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, callbackFunc);
    byte_4186BB5 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = (BattleServantConfConponent_o *)&this->fields.callbackFunc2;
  v7 = (System_Int32_array **)System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)callbackFunc, 0LL);
  if ( v7 && *v7 != (System_Int32_array *)AssetLoader_LoadEndDataHandler_TypeInfo )
  {
    v14 = (AssetManager_LoadWaitStatus_o *)sub_B2C728(v7);
    AssetManager_LoadWaitStatus__get_Name(v14, v15);
  }
  else
  {
    p_callbackFunc2->klass = (BattleServantConfConponent_c *)v7;
    sub_B2C2F8(p_callbackFunc2, v7, v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall AssetManager_LoadWaitStatus__AddEntry(AssetManager_LoadWaitStatus_o *this, const MethodInfo *method)
{
  AssetData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_B2C434(0LL, method);
  AssetData__AddEntry(data, 0LL);
}


bool __fastcall AssetManager_LoadWaitStatus__IsSame(
        AssetManager_LoadWaitStatus_o *this,
        int32_t type,
        System_String_o *name,
        const MethodInfo *method)
{
  AssetData_o *data; // x0

  data = this->fields.data;
  if ( data )
    LOBYTE(data) = AssetData__IsSame_30133532(data, type, name, 0LL);
  return (char)data;
}


System_String_array *__fastcall AssetManager_LoadWaitStatus__ResourceNames(
        AssetManager_LoadWaitStatus_o *this,
        const MethodInfo *method)
{
  return this->fields.resourceNames;
}


System_Action_o *__fastcall AssetManager_LoadWaitStatus__get_CallbackFunc(
        AssetManager_LoadWaitStatus_o *this,
        const MethodInfo *method)
{
  return this->fields.callbackFunc;
}


AssetLoader_LoadEndDataHandler_o *__fastcall AssetManager_LoadWaitStatus__get_DataCallbackFunc(
        AssetManager_LoadWaitStatus_o *this,
        const MethodInfo *method)
{
  return this->fields.callbackFunc2;
}


AssetData_o *__fastcall AssetManager_LoadWaitStatus__get_Info(
        AssetManager_LoadWaitStatus_o *this,
        const MethodInfo *method)
{
  return this->fields.data;
}


System_String_o *__fastcall AssetManager_LoadWaitStatus__get_Name(
        AssetManager_LoadWaitStatus_o *this,
        const MethodInfo *method)
{
  struct AssetData_o *data; // x8
  System_String_o **p_name; // x8

  if ( (byte_4186BB6 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4186BB6 = 1;
  }
  data = this->fields.data;
  if ( data )
    p_name = &data->fields.name;
  else
    p_name = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_name;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetManager_ResourceUnloadEventHandler___ctor(
        AssetManager_ResourceUnloadEventHandler_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B2C2F8(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall AssetManager_ResourceUnloadEventHandler__BeginInvoke(
        AssetManager_ResourceUnloadEventHandler_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B2C300(this, &v5, callback, object);
}


void __fastcall AssetManager_ResourceUnloadEventHandler__EndInvoke(
        AssetManager_ResourceUnloadEventHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


void __fastcall AssetManager_ResourceUnloadEventHandler__Invoke(
        AssetManager_ResourceUnloadEventHandler_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v6; // x23
  AssetManager_ResourceUnloadEventHandler_o **v7; // x24
  __int64 v8; // x25
  unsigned int v9; // w22
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD); // x0
  AssetManager_ResourceUnloadEventHandler_o *v19; // x8
  __int64 *v20; // x20
  __int64 v21; // x21
  void (__fastcall *v22)(__int64); // x22
  char v23; // w22
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  AssetManager_ResourceUnloadEventHandler_o *v31; // [xsp+8h] [xbp-38h] BYREF

  v31 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v31;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v4 + 24);
  if ( v6 )
  {
    v7 = (AssetManager_ResourceUnloadEventHandler_o **)(v4 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(__int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v19->fields.extra_arg, method, v2, v3);
      if ( (sub_B2C38C(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) )
        goto LABEL_35;
      v22(v21);
LABEL_36:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B2C384(v21);
      v24 = sub_B2C788(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_34;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_34:
            v17 = sub_AC5258(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD))sub_B2C40C(v16, v21);
        (*v18)(v20, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AC5258(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v15)(v20, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v22)(v20, v21);
    goto LABEL_36;
  }
}


void __fastcall AssetManager__DelayLoadStart_d__148___ctor(
        AssetManager__DelayLoadStart_d__148_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AssetManager__DelayLoadStart_d__148__MoveNext(
        AssetManager__DelayLoadStart_d__148_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int32_t _1__state; // w8
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  AssetManager_o *_4__this; // x0

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_B2C434(0LL, method);
    AssetManager__LoadStart(_4__this, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.__2__current, 0LL, v2, v3, v4, v5, v6, v7);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall AssetManager__DelayLoadStart_d__148__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AssetManager__DelayLoadStart_d__148_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AssetManager__DelayLoadStart_d__148__System_Collections_IEnumerator_Reset(
        AssetManager__DelayLoadStart_d__148_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_AssetManager__DelayLoadStart_d__148_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall AssetManager__DelayLoadStart_d__148__System_Collections_IEnumerator_get_Current(
        AssetManager__DelayLoadStart_d__148_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall AssetManager__DelayLoadStart_d__148__System_IDisposable_Dispose(
        AssetManager__DelayLoadStart_d__148_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117___ctor(
        AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117__MoveNext(
        AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_o *this,
        const MethodInfo *method)
{
  AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_o *v2; // x19
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  int32_t _1__state; // w8
  struct AssetManager_o *_4__this; // x20
  _BOOL8 v24; // x0
  __int64 v25; // x1
  AssetData_o *currentValue; // x21
  BattleServantConfConponent_o *p__8__1; // x21
  _BOOL4 isDispLogo_5__2; // w8
  AssetManager_c *klass; // x8
  Il2CppObject *v30; // x22
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_o *v37; // x22
  System_String_o *v38; // x23
  Il2CppObject *DownloadSizeString; // x0
  System_String_o *v40; // x23
  WebViewManager_o *Instance; // x0
  Il2CppObject *v42; // x26
  CommonUI_o *v43; // x24
  ErrorDialog_ClickDelegate_o *v44; // x25
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  UnityEngine_WaitForEndOfFrame_o *v51; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  bool result; // w0
  CommonUI_o *v60; // x21
  System_Action_o *v61; // x22
  AvalonSceneManager_c *v62; // x0
  float DEFAULT_FADE_TIME; // s8
  UnityEngine_WaitForSeconds_o *v64; // x20
  BattleServantConfConponent_o *v65; // x19
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v72; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v73; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_4186BB1 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_b__117_0__, v3);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v4);
    sub_B2C35C(&ErrorDialog_ClickDelegate_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, v6);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v7);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v8);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v9);
    sub_B2C35C(&LocalizationManager_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_B2C35C(&Method_AssetManager___c__DisplayClass117_0__DownloadAssetStorageAttributeWithCheckDialog_b__1__, v13);
    sub_B2C35C(&AssetManager___c__DisplayClass117_0_TypeInfo, v14);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v15);
    sub_B2C35C(&UnityEngine_WaitForEndOfFrame_TypeInfo, v16);
    sub_B2C35C(&UnityEngine_WaitForSeconds_TypeInfo, v17);
    sub_B2C35C(&StringLiteral_23829/*"データ更新"*/, v18);
    sub_B2C35C(&StringLiteral_9284/*"NETWORK_ERROR_DATA_UPDATE_TITLE"*/, v19);
    sub_B2C35C(&StringLiteral_280/*" ゲームデータの更新を行います。\n\n{0}\n\n ※Wi-Fi接続での更新を推奨します。"*/, v20);
    this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_o *)sub_B2C35C(&StringLiteral_9282/*"NETWORK_ERROR_DATA_UPDATE_EXP"*/, v21);
    byte_4186BB1 = 1;
  }
  memset(&v73, 0, sizeof(v73));
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    isDispLogo_5__2 = v2->fields._isDispLogo_5__2;
    v2->fields.__1__state = -1;
    if ( isDispLogo_5__2 )
    {
      this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_60;
      CommonUI__SetLoadMode((CommonUI_o *)this, 3, 0LL);
    }
LABEL_56:
    if ( _4__this )
    {
      HIDWORD(_4__this->fields.unloadCallbacks) = v2->fields.loadParallelMax;
      AssetManager__LoadStart(_4__this, 0LL);
      return 0;
    }
    goto LABEL_60;
  }
  if ( _1__state == 1 )
  {
    p__8__1 = (BattleServantConfConponent_o *)&v2->fields.__8__1;
    v2->fields.__1__state = -1;
LABEL_44:
    if ( !p__8__1->klass )
      goto LABEL_60;
    if ( !LOBYTE(p__8__1->klass->_1.name) )
    {
LABEL_48:
      v51 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v51, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v51;
      p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B2C2F8(p__2__current, (System_Int32_array **)v51, v53, v54, v55, v56, v57, v58);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
      return result;
    }
    this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this )
      goto LABEL_60;
    if ( CommonUI__isBusyDataUpdateDialog((CommonUI_o *)this, 0LL) )
      goto LABEL_48;
    p__8__1->klass = 0LL;
    sub_B2C2F8(p__8__1, 0LL, v45, v46, v47, v48, v49, v50);
    goto LABEL_50;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_60;
  this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_o *)_4__this->fields.assetBundleReleaseDic;
  if ( !this )
    goto LABEL_60;
  this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                                                                                  (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this,
                                                                                  (const MethodInfo_2DB1A64 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !this )
    goto LABEL_60;
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v72,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_29C7178 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v73 = v72;
  while ( 1 )
  {
    v24 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v73,
            (const MethodInfo_27541F0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v24 )
      break;
    currentValue = (AssetData_o *)v73.fields.currentValue;
    if ( !v73.fields.currentValue )
      sub_B2C434(v24, v25);
    if ( AssetData__IsDownloadOldVersion((AssetData_o *)v73.fields.currentValue, 0LL)
      || System_String__op_Equality(v2->fields.attrib, currentValue->fields.attrib, 0LL)
      && AssetData__IsNeedUpdateVersion(currentValue, 0LL) )
    {
      AssetManager__AddLoadWaitStatus_30164704(_4__this, currentValue, 0LL);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v73,
    (const MethodInfo_27541EC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  klass = _4__this[1].klass;
  if ( !klass )
LABEL_60:
    sub_B2C434(this, method);
  if ( SLODWORD(klass->_1.byval_arg.data) >= 1 )
  {
    v30 = (Il2CppObject *)sub_B2C42C(AssetManager___c__DisplayClass117_0_TypeInfo);
    System_Object___ctor(v30, 0LL);
    v2->fields.__8__1 = (struct AssetManager___c__DisplayClass117_0_o *)v30;
    p__8__1 = (BattleServantConfConponent_o *)&v2->fields.__8__1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v2->fields.__8__1,
      (System_Int32_array **)v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    if ( !v2->fields.__8__1 )
      goto LABEL_60;
    v2->fields.__8__1->fields.isDataUpdate = 0;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( LocalizationManager__ContainsKey((System_String_o *)StringLiteral_9284/*"NETWORK_ERROR_DATA_UPDATE_TITLE"*/, 0LL) )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v37 = LocalizationManager__Get((System_String_o *)StringLiteral_9284/*"NETWORK_ERROR_DATA_UPDATE_TITLE"*/, 0LL);
    }
    else
    {
      v37 = (System_String_o *)StringLiteral_23829/*"データ更新"*/;
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( LocalizationManager__ContainsKey((System_String_o *)StringLiteral_9282/*"NETWORK_ERROR_DATA_UPDATE_EXP"*/, 0LL) )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v38 = LocalizationManager__Get((System_String_o *)StringLiteral_9282/*"NETWORK_ERROR_DATA_UPDATE_EXP"*/, 0LL);
    }
    else
    {
      v38 = (System_String_o *)StringLiteral_280/*" ゲームデータの更新を行います。\n\n{0}\n\n ※Wi-Fi接続での更新を推奨します。"*/;
    }
    DownloadSizeString = (Il2CppObject *)AssetManager__GetDownloadSizeString(_4__this, 0LL);
    v40 = System_String__Format(v38, DownloadSizeString, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v42 = (Il2CppObject *)p__8__1->klass;
    v43 = (CommonUI_o *)Instance;
    v44 = (ErrorDialog_ClickDelegate_o *)sub_B2C42C(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(
      v44,
      v42,
      Method_AssetManager___c__DisplayClass117_0__DownloadAssetStorageAttributeWithCheckDialog_b__1__,
      0LL);
    if ( !v43 )
      goto LABEL_60;
    CommonUI__OpenDataUpdateDialog(v43, v37, v40, v44, 0, 0LL);
    goto LABEL_44;
  }
LABEL_50:
  v2->fields._isDispLogo_5__2 = 0;
  v60 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v61 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v61,
    (Il2CppObject *)_4__this,
    Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_b__117_0__,
    0LL);
  if ( !v60 )
    goto LABEL_60;
  this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_o *)CommonUI__PlayLogo(v60, v61, 0LL);
  v2->fields._isDispLogo_5__2 = (unsigned __int8)this & 1;
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_56;
  v62 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v62 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v62->static_fields->DEFAULT_FADE_TIME;
  v64 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v64, DEFAULT_FADE_TIME, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v64;
  v65 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
  sub_B2C2F8(v65, (System_Int32_array **)v64, v66, v67, v68, v69, v70, v71);
  *(_DWORD *)&v65[-1].fields.isOpenAfter = 2;
  return 1;
}


Il2CppObject *__fastcall AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117__System_Collections_IEnumerator_Reset(
        AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117__System_Collections_IEnumerator_get_Current(
        AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117__System_IDisposable_Dispose(
        AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall AssetManager__InitCR_d__130___ctor(
        AssetManager__InitCR_d__130_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AssetManager__InitCR_d__130__MoveNext(AssetManager__InitCR_d__130_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  AssetManager__InitCR_d__130_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  struct AssetManager_o *_4__this; // x20
  AssetManager_c *v50; // x0
  AssetManager_c *v51; // x0
  AssetManager_c *v52; // x0
  AssetManager_c *v53; // x0
  System_String_o *AllText; // x21
  System_String_o *v55; // x0
  AssetManager__InitCR_d__130_o **v56; // x21
  UnityEngine_WaitForEndOfFrame_o *v57; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  bool result; // w0
  System_String_o *v66; // x21
  System_Char_array *v67; // x0
  System_String_o *v68; // x21
  System_Char_array *v69; // x0
  il2cpp_array_size_t max_length; // w8
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  int v77; // w23
  __int64 *v78; // x8
  System_String_o *v79; // x0
  __int64 v80; // x1
  System_String_o *v81; // x22
  System_String_o *v82; // x22
  System_String_o *v83; // x21
  System_Text_Encoding_o *UTF8; // x0
  __int64 v85; // x1
  System_Byte_array *v86; // x23
  uint32_t v87; // w23
  System_Char_array *v88; // x0
  il2cpp_array_size_t v89; // w8
  AssetManager__InitCR_d__130_o *v90; // x28
  Il2CppObject *_2__current; // x8
  System_String_o *v92; // x21
  AssetManager__InitCR_d__130_o *v93; // x22
  System_String_o *v94; // x0
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  AssetManager_c *v101; // x8
  System_Int32_array **v102; // x23
  struct AssetManager_StaticFields *v103; // x0
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  AssetManager_c *v110; // x0
  System_Int32_array ***p_configFileUrl_5__2; // x8
  System_Int32_array **v112; // x23
  struct AssetManager_StaticFields *v113; // x0
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  AssetManager_c *v120; // x0
  System_Int32_array ***p_loader_5__3; // x8
  System_Int32_array **v122; // x22
  struct AssetManager_StaticFields *v123; // x0
  int v124; // w8
  __int64 v125; // x23
  System_String_o *v126; // x21
  AssetManager__InitCR_d__130_o *v127; // x22
  System_String_o *v128; // x0
  int32_t v129; // w21
  System_String_o *configFileUrl_5__2; // x24
  System_String_o *v131; // x0
  int32_t v132; // w25
  System_String_o *v133; // x0
  int v134; // w8
  System_String_o *wait_5__6; // x26
  uint32_t v136; // w27
  int32_t v137; // w24
  System_String_o *v138; // x28
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *assetBundleReleaseDic; // x22
  AssetData_o *v140; // x21
  System_String_o *v141; // x21
  AssetManager_c *v142; // x0
  struct AssetManager_StaticFields *static_fields; // x0
  System_Int32_array **v144; // x1
  System_Int32_array **v145; // x1
  struct AssetManager_StaticFields *v146; // x0
  System_String_array **v147; // x2
  System_String_array **v148; // x3
  System_Boolean_array **v149; // x4
  System_Int32_array **v150; // x5
  System_Int32_array *v151; // x6
  System_Int32_array *v152; // x7
  System_Int32_array **v153; // x1
  struct AssetManager_StaticFields *v154; // x0
  System_String_array **v155; // x2
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  System_Int32_array **v158; // x5
  System_Int32_array *v159; // x6
  System_Int32_array *v160; // x7
  ManagerConfig_c *v161; // x0
  struct ManagerConfig_StaticFields *v162; // x8
  CommonUI_o *Instance; // x22
  ErrorDialog_ClickDelegate_o *v164; // x23
  __int64 v165; // x0
  __int64 v166; // x0
  __int64 v167; // x0
  __int64 v168; // x0
  __int64 v169; // x0
  System_Int32_array **ConfigFileAddress; // x0
  System_String_array **v171; // x2
  System_String_array **v172; // x3
  System_Boolean_array **v173; // x4
  System_Int32_array **v174; // x5
  System_Int32_array *v175; // x6
  System_Int32_array *v176; // x7
  System_String_array **v177; // x2
  System_String_array **v178; // x3
  System_Boolean_array **v179; // x4
  System_Int32_array **v180; // x5
  System_Int32_array *v181; // x6
  System_Int32_array *v182; // x7
  System_String_o *v183; // x21
  System_String_o *UrlString; // x0
  System_Int32_array **v185; // x0
  System_String_array **v186; // x2
  System_String_array **v187; // x3
  System_Boolean_array **v188; // x4
  System_Int32_array **v189; // x5
  System_Int32_array *v190; // x6
  System_Int32_array *v191; // x7
  float unscaledTime; // s8
  ManagerConfig_c *v193; // x0
  float TIMEOUT; // s0
  UnityEngine_WaitForEndOfFrame_o *v195; // x22
  System_String_array **v196; // x2
  System_String_array **v197; // x3
  System_Boolean_array **v198; // x4
  System_Int32_array **v199; // x5
  System_Int32_array *v200; // x6
  System_Int32_array *v201; // x7
  float downloadProgress; // s0
  float loadProgress_5__5; // s9
  float v204; // s8
  System_String_array **v205; // x2
  System_String_array **v206; // x3
  System_Boolean_array **v207; // x4
  System_Int32_array **v208; // x5
  System_Int32_array *v209; // x6
  System_Int32_array *v210; // x7
  float v211; // s0
  bool v212; // zf
  float v213; // s8
  System_String_o *error; // x0
  System_String_o *text; // x22
  System_String_o *v216; // x22
  System_String_o *v217; // x22
  System_String_o *v218; // x0
  System_String_o *v219; // x0
  Il2CppObject *v220; // x22
  ManagerConfig_c *v221; // x0
  struct ManagerConfig_StaticFields *v222; // x8
  System_Int32_array **v223; // x1
  System_String_o *v224; // x22
  int v225; // w8
  int32_t v226; // w0
  int32_t v227; // w24
  System_String_o *v228; // x23
  System_String_o *v229; // x22
  System_Byte_array *v230; // x24
  uint32_t v231; // w24
  System_String_array **v232; // x2
  System_String_array **v233; // x3
  System_Boolean_array **v234; // x4
  System_Int32_array **v235; // x5
  System_Int32_array *v236; // x6
  System_Int32_array *v237; // x7
  System_String_array **v238; // x2
  System_String_array **v239; // x3
  System_Boolean_array **v240; // x4
  System_Int32_array **v241; // x5
  System_Int32_array *v242; // x6
  System_Int32_array *v243; // x7
  int v244; // w8
  System_String_array *v245; // x28
  AssetDataListInfo_o *v246; // x22
  System_String_array **v247; // x2
  System_String_array **v248; // x3
  System_Boolean_array **v249; // x4
  System_Int32_array **v250; // x5
  System_Int32_array *v251; // x6
  System_Int32_array *v252; // x7
  int v253; // w8
  unsigned int v254; // w25
  System_String_o *v255; // x22
  AssetManager__InitCR_d__130_o *v256; // x27
  char v257; // w8
  System_String_o *v258; // x0
  int v259; // w9
  void **v260; // x11
  AssetManager_c *v261; // x8
  System_String_o *v262; // x26
  bool v263; // cc
  System_Int32_array ***v264; // x9
  System_Int32_array ***v265; // x10
  System_Int32_array **v266; // x24
  System_Int32_array **v267; // x23
  System_String_o *v268; // x22
  System_String_o *v269; // x0
  int32_t v270; // w22
  System_String_o *v271; // x24
  System_String_o *v272; // x0
  int32_t v273; // w26
  System_String_o *v274; // x0
  int v275; // w8
  System_String_o *v276; // x23
  System_String_array **v277; // x2
  System_String_array **v278; // x3
  System_Boolean_array **v279; // x4
  System_Int32_array **v280; // x5
  System_Int32_array *v281; // x6
  System_Int32_array *v282; // x7
  System_String_array **v283; // x2
  System_String_array **v284; // x3
  System_Boolean_array **v285; // x4
  System_Int32_array **v286; // x5
  System_Int32_array *v287; // x6
  System_Int32_array *v288; // x7
  System_String_array **v289; // x2
  System_String_array **v290; // x3
  System_Boolean_array **v291; // x4
  System_Int32_array **v292; // x5
  System_Int32_array *v293; // x6
  System_Int32_array *v294; // x7
  AssetData_o *AssetData; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v296; // x27
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *fields; // x27
  System_String_o *v298; // x26
  int32_t v299; // w24
  AssetData_o *v300; // x22
  Il2CppObject *v301; // x22
  System_String_array **v302; // x2
  System_String_array **v303; // x3
  System_Boolean_array **v304; // x4
  System_Int32_array **v305; // x5
  System_Int32_array *v306; // x6
  System_Int32_array *v307; // x7
  ManagerConfig_c *v308; // x0
  struct ManagerConfig_StaticFields *v309; // x8
  CommonUI_o *v310; // x21
  ErrorDialog_ClickDelegate_o *v311; // x23
  UnityEngine_WaitForEndOfFrame_o *v312; // x20
  BattleServantConfConponent_o *v313; // x19
  System_String_array **v314; // x2
  System_String_array **v315; // x3
  System_Boolean_array **v316; // x4
  System_Int32_array **v317; // x5
  System_Int32_array *v318; // x6
  System_Int32_array *v319; // x7
  int v320; // w8
  ManagementManager_c *v321; // x0
  _BOOL4 isDuringStartup; // w22
  CommonUI_o *v323; // x21
  System_String_o *v324; // x22
  ErrorDialog_ClickDelegate_o *v325; // x23
  System_String_o *v326; // x22
  ErrorDialog_ClickDelegate_o *v327; // x23
  UnityEngine_WaitForEndOfFrame_o *v328; // x20
  System_String_array **v329; // x2
  System_String_array **v330; // x3
  System_Boolean_array **v331; // x4
  System_Int32_array **v332; // x5
  System_Int32_array *v333; // x6
  System_Int32_array *v334; // x7
  UnityEngine_WaitForSeconds_o *v335; // x20
  System_String_array **v336; // x2
  System_String_array **v337; // x3
  System_Boolean_array **v338; // x4
  System_Int32_array **v339; // x5
  System_Int32_array *v340; // x6
  System_Int32_array *v341; // x7
  AssetManager_c *v342; // x0
  System_Int32_array **klass; // x23
  struct AssetManager_StaticFields *v344; // x0
  struct AssetManager_StaticFields *v345; // x0
  System_Int32_array **v346; // x1
  System_String_array **v347; // x2
  System_String_array **v348; // x3
  System_Boolean_array **v349; // x4
  System_Int32_array **v350; // x5
  System_Int32_array *v351; // x6
  System_Int32_array *v352; // x7
  struct AssetManager_StaticFields *v353; // x0
  System_Int32_array **v354; // x1
  System_String_array **v355; // x2
  System_String_array **v356; // x3
  System_Boolean_array **v357; // x4
  System_Int32_array **v358; // x5
  System_Int32_array *v359; // x6
  System_Int32_array *v360; // x7
  _BOOL8 v361; // x0
  __int64 v362; // x1
  Il2CppObject *current; // x22
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v364; // x0
  __int64 v365; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v366; // x0
  BattleServantConfConponent_o *v367; // x19
  System_String_array **v368; // x2
  System_String_array **v369; // x3
  System_Boolean_array **v370; // x4
  System_Int32_array **v371; // x5
  System_Int32_array *v372; // x6
  System_Int32_array *v373; // x7
  UnityEngine_WaitForEndOfFrame_o *v374; // x20
  System_String_array **v375; // x2
  System_String_array **v376; // x3
  System_Boolean_array **v377; // x4
  System_Int32_array **v378; // x5
  System_Int32_array *v379; // x6
  System_Int32_array *v380; // x7
  __int64 v381; // x0
  System_Nullable_Vector2__o methoda; // [xsp+0h] [xbp-100h]
  System_Nullable_Vector2__o methodb; // [xsp+0h] [xbp-100h]
  int32_t size; // [xsp+24h] [xbp-DCh]
  System_String_o *keyType; // [xsp+28h] [xbp-D8h]
  uint32_t crc; // [xsp+34h] [xbp-CCh]
  BattleServantConfConponent_o *p_fields; // [xsp+38h] [xbp-C8h]
  BattleServantConfConponent_o *p_dateVersion; // [xsp+40h] [xbp-C0h]
  AssetManager__InitCR_d__130_o *v389; // [xsp+48h] [xbp-B8h]
  BattleServantConfConponent_o *p_buildVersion; // [xsp+48h] [xbp-B8h]
  System_String_o *attrib; // [xsp+50h] [xbp-B0h]
  System_String_o *attriba; // [xsp+50h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_T__o v393; // [xsp+58h] [xbp-A8h] BYREF
  int v394; // [xsp+78h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_T__o v395; // [xsp+80h] [xbp-80h] BYREF

  v8 = this;
  if ( (byte_4186BB2 & 1) == 0 )
  {
    sub_B2C35C(&AssetDataListInfo_TypeInfo, method);
    sub_B2C35C(&AssetData_TypeInfo, v9);
    sub_B2C35C(&Method_AssetManager_OnClickRetryDialog__, v10);
    sub_B2C35C(&Method_AssetManager_OnClickWaitDebugDialog__, v11);
    sub_B2C35C(&AssetManager_TypeInfo, v12);
    sub_B2C35C(&CatAndMouseGame_TypeInfo, v13);
    sub_B2C35C(&char___TypeInfo, v14);
    sub_B2C35C(&ErrorDialog_ClickDelegate_TypeInfo, v15);
    sub_B2C35C(&Crc32_TypeInfo, v16);
    sub_B2C35C(&UnityEngine_Debug_TypeInfo, v17);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AssetData__Add__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AssetData__set_Item__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__, v25);
    sub_B2C35C(&Method_System_Collections_Generic_List_AssetData__Add__, v26);
    sub_B2C35C(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__, v27);
    sub_B2C35C(&LocalizationManager_TypeInfo, v28);
    sub_B2C35C(&ManagementManager_TypeInfo, v29);
    sub_B2C35C(&ManagerConfig_TypeInfo, v30);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v31);
    sub_B2C35C(&UnityEngine_WaitForEndOfFrame_TypeInfo, v32);
    sub_B2C35C(&UnityEngine_WaitForSeconds_TypeInfo, v33);
    sub_B2C35C(&StringLiteral_2113/*"AssetStorageList download time over"*/, v34);
    sub_B2C35C(&StringLiteral_2109/*"AssetStorageList download crc error"*/, v35);
    sub_B2C35C(&StringLiteral_2105/*"AssetStorage boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/, v36);
    sub_B2C35C(&StringLiteral_1741/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, v37);
    sub_B2C35C(&StringLiteral_2101/*"AssetStorage boot load crc error : チェックサム値が不一致"*/, v38);
    sub_B2C35C(&StringLiteral_15745/*"[FFFF80]Download error for debug"*/, v39);
    sub_B2C35C(&StringLiteral_2110/*"AssetStorageList download data error"*/, v40);
    sub_B2C35C(&StringLiteral_2112/*"AssetStorageList download error : "*/, v41);
    sub_B2C35C(&StringLiteral_2103/*"AssetStorage boot load error : アセットバンドルリスト作成失敗"*/, v42);
    sub_B2C35C(&StringLiteral_23698/*"~"*/, v43);
    sub_B2C35C(&StringLiteral_2104/*"AssetStorage boot load error : ファイル先頭の１行目の内容が空"*/, v44);
    sub_B2C35C(&StringLiteral_11585/*"SCRIPT"*/, v45);
    sub_B2C35C(&StringLiteral_1535/*"@"*/, v46);
    sub_B2C35C(&StringLiteral_1742/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, v47);
    this = (AssetManager__InitCR_d__130_o *)sub_B2C35C(&StringLiteral_1/*""*/, v48);
    byte_4186BB2 = 1;
  }
  memset(&v395, 0, sizeof(v395));
  v394 = 0;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_314;
      v50 = AssetManager_TypeInfo;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v50 = AssetManager_TypeInfo;
      }
      if ( !System_IO_Directory__Exists(v50->static_fields->cachePathName, 0LL) )
      {
        v51 = AssetManager_TypeInfo;
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v51 = AssetManager_TypeInfo;
        }
        System_IO_Directory__CreateDirectory(v51->static_fields->cachePathName, 0LL);
      }
      this = (AssetManager__InitCR_d__130_o *)_4__this->fields.assetBundleReleaseDic;
      if ( !this )
        goto LABEL_314;
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
             (const MethodInfo_2DB18BC *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) )
      {
        goto LABEL_136;
      }
      v52 = AssetManager_TypeInfo;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v52 = AssetManager_TypeInfo;
      }
      if ( !System_IO_File__Exists(v52->static_fields->cacheListFileName, 0LL) )
        goto LABEL_136;
      v53 = AssetManager_TypeInfo;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v53 = AssetManager_TypeInfo;
      }
      AllText = System_IO_File__ReadAllText(v53->static_fields->cacheListFileName, 0LL);
      if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      }
      v55 = CatAndMouseGame__MouseGame8(AllText, 0LL);
      v66 = v55;
      if ( !v55 )
        goto LABEL_136;
      v67 = (System_Char_array *)sub_B2C374(char___TypeInfo, 1LL);
      if ( !v67 )
        sub_B2C434(0LL, 0LL);
      if ( !v67->max_length )
      {
        v165 = sub_B2C460(v67);
        sub_B2C400(v165, 0LL);
      }
      v67->m_Items[2] = -257;
      v68 = System_String__Trim(v66, v67, 0LL);
      v69 = (System_Char_array *)sub_B2C374(char___TypeInfo, 2LL);
      if ( !v69 )
        sub_B2C434(0LL, 0LL);
      max_length = v69->max_length;
      if ( !max_length )
      {
        v166 = sub_B2C460(v69);
        sub_B2C400(v166, 0LL);
      }
      v69->m_Items[2] = 13;
      if ( max_length == 1 )
      {
        v167 = sub_B2C460(v69);
        sub_B2C400(v167, 0LL);
      }
      v69->m_Items[3] = 10;
      if ( !v68 )
        sub_B2C434(v69, v69);
      v77 = System_String__IndexOfAny(v68, v69, 0LL);
      if ( v77 < 2 )
      {
        v78 = &StringLiteral_2104/*"AssetStorage boot load error : ファイル先頭の１行目の内容が空"*/;
        goto LABEL_109;
      }
      v79 = System_String__Substring_44369268(v68, 0, v77, 0LL);
      v81 = v79;
      if ( !v79 )
        sub_B2C434(0LL, v80);
      if ( !System_String__StartsWith(v79, (System_String_o *)StringLiteral_23698/*"~"*/, 0LL) )
      {
        v78 = &StringLiteral_2105/*"AssetStorage boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
        goto LABEL_109;
      }
      v82 = System_String__Substring(v81, 1, 0LL);
      v83 = System_String__Substring(v68, v77 + 1, 0LL);
      UTF8 = System_Text_Encoding__get_UTF8(0LL);
      if ( !UTF8 )
        sub_B2C434(0LL, v85);
      v86 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                                   UTF8,
                                   v83,
                                   UTF8->klass->vtable._19_GetBytes.methodPtr);
      if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v87 = Crc32__Compute(v86, 0LL);
      if ( System_UInt32__Parse(v82, 0LL) != v87 )
      {
        v78 = &StringLiteral_2101/*"AssetStorage boot load crc error : チェックサム値が不一致"*/;
        goto LABEL_109;
      }
      v88 = (System_Char_array *)sub_B2C374(char___TypeInfo, 2LL);
      if ( !v88 )
        sub_B2C434(0LL, 0LL);
      v89 = v88->max_length;
      if ( !v89 )
      {
        v168 = sub_B2C460(v88);
        sub_B2C400(v168, 0LL);
      }
      v88->m_Items[2] = 13;
      if ( v89 == 1 )
      {
        v169 = sub_B2C460(v88);
        sub_B2C400(v169, 0LL);
      }
      v88->m_Items[3] = 10;
      if ( !v83 )
        sub_B2C434(v88, v88);
      this = (AssetManager__InitCR_d__130_o *)System_String__Split_44366316(v83, v88, 1, 0LL);
      v90 = this;
      if ( !this )
        goto LABEL_136;
      _2__current = this->fields.__2__current;
      if ( !_2__current )
        goto LABEL_108;
      if ( !(_DWORD)_2__current )
        goto LABEL_315;
      this = (AssetManager__InitCR_d__130_o *)this->fields.__4__this;
      if ( !this )
        goto LABEL_314;
      this = (AssetManager__InitCR_d__130_o *)System_String__StartsWith(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_1535/*"@"*/,
                                                0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
LABEL_108:
        v78 = &StringLiteral_2103/*"AssetStorage boot load error : アセットバンドルリスト作成失敗"*/;
LABEL_109:
        v141 = (System_String_o *)*v78;
        if ( *v78 )
        {
          v142 = AssetManager_TypeInfo;
          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
            v142 = AssetManager_TypeInfo;
          }
          static_fields = v142->static_fields;
          v144 = (System_Int32_array **)StringLiteral_1/*""*/;
          static_fields->assetBundleMasterVersion = (struct System_String_o *)StringLiteral_1/*""*/;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&static_fields->assetBundleMasterVersion,
            v144,
            v71,
            v72,
            v73,
            v74,
            v75,
            v76);
          v145 = (System_Int32_array **)StringLiteral_1/*""*/;
          v146 = AssetManager_TypeInfo->static_fields;
          v146->assetBundleDateVersion = (struct System_String_o *)StringLiteral_1/*""*/;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&v146->assetBundleDateVersion,
            v145,
            v147,
            v148,
            v149,
            v150,
            v151,
            v152);
          v153 = (System_Int32_array **)StringLiteral_1/*""*/;
          v154 = AssetManager_TypeInfo->static_fields;
          v154->assetBundleBuildVersion = (struct System_String_o *)StringLiteral_1/*""*/;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&v154->assetBundleBuildVersion,
            v153,
            v155,
            v156,
            v157,
            v158,
            v159,
            v160);
          this = (AssetManager__InitCR_d__130_o *)_4__this->fields.assetBundleReleaseDic;
          if ( !this )
            goto LABEL_314;
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
            (const MethodInfo_2DB1E9C *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
          v161 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v161 = ManagerConfig_TypeInfo;
          }
          v162 = v161->static_fields;
          if ( v162->UseDebugCommand )
          {
            if ( (BYTE3(v161->vtable._0_Equals.methodPtr) & 4) != 0 && !v161->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v161);
              v162 = ManagerConfig_TypeInfo->static_fields;
            }
            if ( System_String__op_Inequality(v162->ServerDefaultType, (System_String_o *)StringLiteral_11585/*"SCRIPT"*/, 0LL) )
            {
              LOBYTE(_4__this->fields.writeRequestThread) = 1;
              Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v164 = (ErrorDialog_ClickDelegate_o *)sub_B2C42C(ErrorDialog_ClickDelegate_TypeInfo);
              ErrorDialog_ClickDelegate___ctor(
                v164,
                (Il2CppObject *)_4__this,
                Method_AssetManager_OnClickWaitDebugDialog__,
                0LL);
              if ( !Instance )
                goto LABEL_314;
              methoda.fields.value = 0LL;
              *(_DWORD *)&methoda.fields.has_value = 0;
              CommonUI__OpenWarningDialog(
                Instance,
                (System_String_o *)StringLiteral_15745/*"[FFFF80]Download error for debug"*/,
                v141,
                v164,
                1,
                0,
                -1.0,
                1,
                methoda,
                0LL);
LABEL_32:
              if ( LOBYTE(_4__this->fields.writeRequestThread) )
              {
                v57 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
                UnityEngine_WaitForEndOfFrame___ctor(v57, 0LL);
                v8->fields.__2__current = (Il2CppObject *)v57;
                p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
                sub_B2C2F8(p__2__current, (System_Int32_array **)v57, v59, v60, v61, v62, v63, v64);
                result = 1;
                *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
                return result;
              }
            }
          }
        }
        goto LABEL_136;
      }
      if ( !LODWORD(v90->fields.__2__current) )
        goto LABEL_315;
      v92 = (System_String_o *)v90->fields.__4__this;
      this = (AssetManager__InitCR_d__130_o *)sub_B2C374(char___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_314;
      method = (const MethodInfo *)this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_315;
      LOWORD(this->fields.__4__this) = 44;
      if ( !v92 )
        goto LABEL_314;
      this = (AssetManager__InitCR_d__130_o *)System_String__Split(v92, (System_Char_array *)this, 0LL);
      if ( !this )
        goto LABEL_314;
      v93 = this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_315;
      this = (AssetManager__InitCR_d__130_o *)this->fields.__4__this;
      if ( !this )
        goto LABEL_314;
      v94 = System_String__Substring((System_String_o *)this, 1, 0LL);
      v101 = AssetManager_TypeInfo;
      v102 = (System_Int32_array **)v94;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v101 = AssetManager_TypeInfo;
      }
      v103 = v101->static_fields;
      v103->assetBundleMasterVersion = (struct System_String_o *)v102;
      sub_B2C2F8((BattleServantConfConponent_o *)&v103->assetBundleMasterVersion, v102, v95, v96, v97, v98, v99, v100);
      v110 = AssetManager_TypeInfo;
      if ( SLODWORD(v93->fields.__2__current) <= 1 )
        p_configFileUrl_5__2 = (System_Int32_array ***)&StringLiteral_1/*""*/;
      else
        p_configFileUrl_5__2 = (System_Int32_array ***)&v93->fields._configFileUrl_5__2;
      v112 = *p_configFileUrl_5__2;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v110 = AssetManager_TypeInfo;
      }
      v113 = v110->static_fields;
      v113->assetBundleDateVersion = (struct System_String_o *)v112;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v113->assetBundleDateVersion,
        v112,
        v104,
        v105,
        v106,
        v107,
        v108,
        v109);
      v120 = AssetManager_TypeInfo;
      if ( SLODWORD(v93->fields.__2__current) <= 2 )
        p_loader_5__3 = (System_Int32_array ***)&StringLiteral_1/*""*/;
      else
        p_loader_5__3 = (System_Int32_array ***)&v93->fields._loader_5__3;
      v122 = *p_loader_5__3;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v120 = AssetManager_TypeInfo;
      }
      v123 = v120->static_fields;
      v123->assetBundleBuildVersion = (struct System_String_o *)v122;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v123->assetBundleBuildVersion,
        v122,
        v114,
        v115,
        v116,
        v117,
        v118,
        v119);
      v124 = (int)v90->fields.__2__current;
      if ( v124 >= 2 )
      {
        v125 = 5LL;
        v389 = v90;
        while ( (int)v125 - 4 < (unsigned int)v124 )
        {
          v126 = (System_String_o *)*((_QWORD *)&v90->klass + v125);
          this = (AssetManager__InitCR_d__130_o *)sub_B2C374(char___TypeInfo, 1LL);
          if ( !this )
            goto LABEL_314;
          method = (const MethodInfo *)this;
          if ( !LODWORD(this->fields.__2__current) )
            break;
          LOWORD(this->fields.__4__this) = 44;
          if ( !v126 )
            goto LABEL_314;
          this = (AssetManager__InitCR_d__130_o *)System_String__Split(v126, (System_Char_array *)this, 0LL);
          if ( !this )
            goto LABEL_314;
          v127 = this;
          if ( SLODWORD(this->fields.__2__current) < 5 )
            goto LABEL_136;
          this = (AssetManager__InitCR_d__130_o *)this->fields.__4__this;
          if ( !this )
            goto LABEL_314;
          v128 = System_String__Trim_44292864((System_String_o *)this, 0LL);
          this = (AssetManager__InitCR_d__130_o *)System_Int32__Parse(v128, 0LL);
          if ( LODWORD(v127->fields.__2__current) < 3 )
            goto LABEL_315;
          v129 = (int)this;
          this = (AssetManager__InitCR_d__130_o *)v127->fields._loader_5__3;
          if ( !this )
            goto LABEL_314;
          configFileUrl_5__2 = v127->fields._configFileUrl_5__2;
          v131 = System_String__Trim_44292864((System_String_o *)this, 0LL);
          this = (AssetManager__InitCR_d__130_o *)System_Int32__Parse(v131, 0LL);
          if ( LODWORD(v127->fields.__2__current) <= 3 )
            goto LABEL_315;
          v132 = (int)this;
          this = *(AssetManager__InitCR_d__130_o **)&v127->fields._requestTime_5__4;
          if ( !this )
            goto LABEL_314;
          v133 = System_String__Trim_44292864((System_String_o *)this, 0LL);
          this = (AssetManager__InitCR_d__130_o *)System_UInt32__Parse(v133, 0LL);
          v134 = (int)v127->fields.__2__current;
          if ( (unsigned int)v134 <= 4 )
            goto LABEL_315;
          wait_5__6 = (System_String_o *)v127->fields._wait_5__6;
          v136 = (unsigned int)this;
          attrib = configFileUrl_5__2;
          v137 = v129;
          v138 = v134 >= 6 ? (System_String_o *)v127[1].klass : 0LL;
          assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)_4__this->fields.assetBundleReleaseDic;
          v140 = (AssetData_o *)sub_B2C42C(AssetData_TypeInfo);
          AssetData___ctor_30133204(v140, 0, wait_5__6, v137, attrib, v132, v136, v138, 0LL);
          if ( !assetBundleReleaseDic )
            goto LABEL_314;
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
            assetBundleReleaseDic,
            (System_Xml_XmlQualifiedName_o *)wait_5__6,
            (System_Xml_Schema_XmlSchemaObject_o *)v140,
            (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__AssetData__set_Item__);
          v90 = v389;
          ++v125;
          v124 = (int)v389->fields.__2__current;
          if ( (int)v125 - 4 >= v124 )
            goto LABEL_136;
        }
        goto LABEL_315;
      }
LABEL_136:
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      ConfigFileAddress = (System_Int32_array **)AssetManager__get_ConfigFileAddress(0LL);
      v8->fields._configFileUrl_5__2 = (struct System_String_o *)ConfigFileAddress;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v8->fields._configFileUrl_5__2,
        ConfigFileAddress,
        v171,
        v172,
        v173,
        v174,
        v175,
        v176);
      v8->fields._loader_5__3 = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields._loader_5__3, 0LL, v177, v178, v179, v180, v181, v182);
LABEL_140:
      v183 = v8->fields._configFileUrl_5__2;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      UrlString = AssetManager__getUrlString(v183, 0LL);
      v185 = (System_Int32_array **)UnityEngine_Networking_UnityWebRequest__Get(UrlString, 0LL);
      v8->fields._loader_5__3 = (struct UnityEngine_Networking_UnityWebRequest_o *)v185;
      v56 = (AssetManager__InitCR_d__130_o **)&v8->fields._loader_5__3;
      sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields._loader_5__3, v185, v186, v187, v188, v189, v190, v191);
      this = (AssetManager__InitCR_d__130_o *)v8->fields._loader_5__3;
      if ( !this )
        goto LABEL_314;
      UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
      v193 = ManagerConfig_TypeInfo;
      if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v193 = ManagerConfig_TypeInfo;
      }
      TIMEOUT = v193->static_fields->TIMEOUT;
      v8->fields._loadProgress_5__5 = 0.0;
      v8->fields._requestTime_5__4 = unscaledTime + TIMEOUT;
      v195 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v195, 0LL);
      v8->fields._wait_5__6 = v195;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v8->fields._wait_5__6,
        (System_Int32_array **)v195,
        v196,
        v197,
        v198,
        v199,
        v200,
        v201);
LABEL_148:
      this = *v56;
      if ( !*v56 )
        goto LABEL_314;
      this = (AssetManager__InitCR_d__130_o *)UnityEngine_Networking_UnityWebRequest__get_isDone(
                                                (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_155;
      this = *v56;
      if ( !*v56 )
        goto LABEL_314;
      downloadProgress = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                           (UnityEngine_Networking_UnityWebRequest_o *)this,
                           0LL);
      loadProgress_5__5 = v8->fields._loadProgress_5__5;
      v204 = downloadProgress;
      v211 = UnityEngine_Time__get_unscaledTime(0LL);
      v212 = v204 == loadProgress_5__5;
      v213 = v211;
      if ( !v212 )
      {
        v221 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v221 = ManagerConfig_TypeInfo;
        }
        v222 = v221->static_fields;
        this = (AssetManager__InitCR_d__130_o *)v8->fields._loader_5__3;
        v8->fields._requestTime_5__4 = v213 + v222->TIMEOUT;
        if ( this )
        {
          v8->fields._loadProgress_5__5 = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                                            (UnityEngine_Networking_UnityWebRequest_o *)this,
                                            0LL);
          goto LABEL_175;
        }
LABEL_314:
        sub_B2C434(this, method);
      }
      if ( v211 >= v8->fields._requestTime_5__4 )
      {
LABEL_155:
        if ( !_4__this )
          goto LABEL_314;
        this = *v56;
        if ( !*v56 )
          goto LABEL_314;
        if ( !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL) )
        {
          v220 = (Il2CppObject *)StringLiteral_2113/*"AssetStorageList download time over"*/;
          goto LABEL_260;
        }
        this = *v56;
        if ( !*v56 )
          goto LABEL_314;
        error = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        this = (AssetManager__InitCR_d__130_o *)System_String__IsNullOrEmpty(error, 0LL);
        if ( !*v56 )
          goto LABEL_314;
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v219 = UnityEngine_Networking_UnityWebRequest__get_error(
                   (UnityEngine_Networking_UnityWebRequest_o *)*v56,
                   0LL);
LABEL_177:
          v220 = (Il2CppObject *)v219;
          goto LABEL_260;
        }
        this = (AssetManager__InitCR_d__130_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                  (UnityEngine_Networking_UnityWebRequest_o *)*v56,
                                                  0LL);
        if ( !this )
          goto LABEL_314;
        text = UnityEngine_Networking_DownloadHandler__get_text((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
        if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
        }
        v216 = CatAndMouseGame__MouseGame3(text, 0LL);
        if ( System_String__IsNullOrEmpty(v216, 0LL) )
        {
          v217 = v8->fields._configFileUrl_5__2;
          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          }
          v218 = AssetManager__getUrlString(v217, 0LL);
          v219 = System_String__Concat_44305532((System_String_o *)StringLiteral_2112/*"AssetStorageList download error : "*/, v218, 0LL);
          goto LABEL_177;
        }
        this = (AssetManager__InitCR_d__130_o *)sub_B2C374(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_314;
        method = (const MethodInfo *)this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_315;
        LOWORD(this->fields.__4__this) = -257;
        if ( !v216 )
          goto LABEL_314;
        this = (AssetManager__InitCR_d__130_o *)System_String__Trim(v216, (System_Char_array *)this, 0LL);
        if ( !this )
          goto LABEL_314;
        v224 = (System_String_o *)this;
        if ( System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_23698/*"~"*/, 0LL) )
        {
          this = (AssetManager__InitCR_d__130_o *)sub_B2C374(char___TypeInfo, 2LL);
          if ( !this )
            goto LABEL_314;
          v225 = (int)this->fields.__2__current;
          if ( !v225 )
            goto LABEL_315;
          LOWORD(this->fields.__4__this) = 13;
          if ( v225 == 1 )
            goto LABEL_315;
          WORD1(this->fields.__4__this) = 10;
          v226 = System_String__IndexOfAny(v224, (System_Char_array *)this, 0LL);
          if ( v226 >= 2 )
          {
            v227 = v226;
            v228 = System_String__Substring_44369268(v224, 1, v226 - 1, 0LL);
            v229 = System_String__Substring(v224, v227 + 1, 0LL);
            this = (AssetManager__InitCR_d__130_o *)System_Text_Encoding__get_UTF8(0LL);
            if ( !this )
              goto LABEL_314;
            v230 = (System_Byte_array *)((__int64 (__fastcall *)(AssetManager__InitCR_d__130_o *, System_String_o *, Il2CppClass **))this->klass[1]._1.methods)(
                                          this,
                                          v229,
                                          this->klass[1]._1.nestedTypes);
            if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
            v231 = Crc32__Compute(v230, 0LL);
            if ( System_UInt32__Parse(v228, 0LL) == v231 )
            {
              if ( *v56 )
              {
                UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)*v56, 0LL);
                *v56 = 0LL;
                sub_B2C2F8((BattleServantConfConponent_o *)v56, 0LL, v238, v239, v240, v241, v242, v243);
              }
              if ( !v229 )
                goto LABEL_313;
              this = (AssetManager__InitCR_d__130_o *)sub_B2C374(char___TypeInfo, 2LL);
              if ( !this )
                goto LABEL_314;
              v244 = (int)this->fields.__2__current;
              if ( v244 )
              {
                LOWORD(this->fields.__4__this) = 13;
                if ( v244 != 1 )
                {
                  WORD1(this->fields.__4__this) = 10;
                  v245 = System_String__Split_44366316(v229, (System_Char_array *)this, 1, 0LL);
                  v246 = (AssetDataListInfo_o *)sub_B2C42C(AssetDataListInfo_TypeInfo);
                  AssetDataListInfo___ctor(v246, 0LL);
                  if ( !v245 )
                    goto LABEL_314;
                  v253 = v245->max_length;
                  p_fields = (BattleServantConfConponent_o *)&v246->fields;
                  p_dateVersion = (BattleServantConfConponent_o *)&v246->fields.dateVersion;
                  p_buildVersion = (BattleServantConfConponent_o *)&v246->fields.buildVersion;
                  attriba = (System_String_o *)v246;
                  if ( v253 >= 1 )
                  {
                    v254 = 0;
                    while ( v254 < v253 )
                    {
                      v255 = v245->m_Items[v254];
                      this = (AssetManager__InitCR_d__130_o *)sub_B2C374(char___TypeInfo, 1LL);
                      if ( !this )
                        goto LABEL_314;
                      method = (const MethodInfo *)this;
                      if ( !LODWORD(this->fields.__2__current) )
                        break;
                      LOWORD(this->fields.__4__this) = 44;
                      if ( !v255 )
                        goto LABEL_314;
                      this = (AssetManager__InitCR_d__130_o *)System_String__Split(v255, (System_Char_array *)this, 0LL);
                      if ( !this )
                        goto LABEL_314;
                      v256 = this;
                      if ( SLODWORD(this->fields.__2__current) < 1 )
                        goto LABEL_299;
                      this = (AssetManager__InitCR_d__130_o *)this->fields.__4__this;
                      if ( !this )
                        goto LABEL_314;
                      this = (AssetManager__InitCR_d__130_o *)System_String__StartsWith(
                                                                (System_String_o *)this,
                                                                (System_String_o *)StringLiteral_1535/*"@"*/,
                                                                0LL);
                      if ( !LODWORD(v256->fields.__2__current) )
                        goto LABEL_315;
                      v257 = (char)this;
                      this = (AssetManager__InitCR_d__130_o *)v256->fields.__4__this;
                      if ( !this )
                        goto LABEL_314;
                      if ( (v257 & 1) != 0 )
                      {
                        v258 = System_String__Substring((System_String_o *)this, 1, 0LL);
                        v259 = (int)v256->fields.__2__current;
                        v260 = (void **)&v256->fields._loader_5__3;
                        v261 = AssetManager_TypeInfo;
                        v262 = v258;
                        if ( v259 == 2 )
                          v260 = &StringLiteral_1/*""*/;
                        v263 = v259 <= 1;
                        if ( v259 <= 1 )
                          v264 = (System_Int32_array ***)&StringLiteral_1/*""*/;
                        else
                          v264 = (System_Int32_array ***)&v256->fields._configFileUrl_5__2;
                        if ( v263 )
                          v265 = (System_Int32_array ***)&StringLiteral_1/*""*/;
                        else
                          v265 = (System_Int32_array ***)v260;
                        v266 = *v264;
                        v267 = *v265;
                        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
                        {
                          v268 = attriba;
                          if ( !AssetManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                            v261 = AssetManager_TypeInfo;
                          }
                        }
                        else
                        {
                          v268 = attriba;
                        }
                        this = (AssetManager__InitCR_d__130_o *)System_String__op_Inequality(
                                                                  v262,
                                                                  v261->static_fields->assetBundleMasterVersion,
                                                                  0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                        {
                          this = (AssetManager__InitCR_d__130_o *)_4__this->fields.assetBundleReleaseDic;
                          if ( !this )
                            goto LABEL_314;
                          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
                            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
                            (const MethodInfo_2DB1E9C *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
                        }
                        if ( !v268 )
                          goto LABEL_314;
                        p_fields->klass = (BattleServantConfConponent_c *)v262;
                        sub_B2C2F8(p_fields, (System_Int32_array **)v262, v277, v278, v279, v280, v281, v282);
                        p_dateVersion->klass = (BattleServantConfConponent_c *)v266;
                        sub_B2C2F8(p_dateVersion, v266, v283, v284, v285, v286, v287, v288);
                        p_buildVersion->klass = (BattleServantConfConponent_c *)v267;
                        sub_B2C2F8(p_buildVersion, v267, v289, v290, v291, v292, v293, v294);
                      }
                      else
                      {
                        this = (AssetManager__InitCR_d__130_o *)System_String__StartsWith(
                                                                  (System_String_o *)this,
                                                                  (System_String_o *)StringLiteral_23698/*"~"*/,
                                                                  0LL);
                        if ( ((unsigned __int8)this & 1) == 0 )
                        {
                          if ( !LODWORD(v256->fields.__2__current) )
                            goto LABEL_315;
                          this = (AssetManager__InitCR_d__130_o *)v256->fields.__4__this;
                          if ( !this )
                            goto LABEL_314;
                          this = (AssetManager__InitCR_d__130_o *)System_String__IndexOf(
                                                                    (System_String_o *)this,
                                                                    0x7Eu,
                                                                    0LL);
                          if ( (_DWORD)this != 1 )
                          {
                            if ( SLODWORD(v256->fields.__2__current) < 5 )
                              goto LABEL_299;
                            this = (AssetManager__InitCR_d__130_o *)v256->fields.__4__this;
                            if ( !this )
                              goto LABEL_314;
                            v269 = System_String__Trim_44292864((System_String_o *)this, 0LL);
                            this = (AssetManager__InitCR_d__130_o *)System_Int32__Parse(v269, 0LL);
                            if ( LODWORD(v256->fields.__2__current) < 3 )
                              goto LABEL_315;
                            v270 = (int)this;
                            this = (AssetManager__InitCR_d__130_o *)v256->fields._loader_5__3;
                            if ( !this )
                              goto LABEL_314;
                            v271 = v256->fields._configFileUrl_5__2;
                            v272 = System_String__Trim_44292864((System_String_o *)this, 0LL);
                            this = (AssetManager__InitCR_d__130_o *)System_Int32__Parse(v272, 0LL);
                            if ( LODWORD(v256->fields.__2__current) <= 3 )
                              goto LABEL_315;
                            v273 = (int)this;
                            this = *(AssetManager__InitCR_d__130_o **)&v256->fields._requestTime_5__4;
                            if ( !this )
                              goto LABEL_314;
                            v274 = System_String__Trim_44292864((System_String_o *)this, 0LL);
                            this = (AssetManager__InitCR_d__130_o *)System_UInt32__Parse(v274, 0LL);
                            v275 = (int)v256->fields.__2__current;
                            crc = (unsigned int)this;
                            if ( (unsigned int)v275 <= 4 )
                              goto LABEL_315;
                            v276 = (System_String_o *)v256->fields._wait_5__6;
                            if ( v275 >= 6 )
                              keyType = (System_String_o *)v256[1].klass;
                            else
                              keyType = 0LL;
                            AssetData = AssetManager__GetAssetData(
                                          _4__this,
                                          _4__this->fields.assetBundleReleaseDic,
                                          v276,
                                          0LL);
                            if ( AssetData )
                            {
                              v296 = (EventMissionProgressRequest_Argument_ProgressData_o *)AssetData;
                              this = (AssetManager__InitCR_d__130_o *)AssetData__SetUpdateInfo(
                                                                        AssetData,
                                                                        v270,
                                                                        v271,
                                                                        v273,
                                                                        crc,
                                                                        keyType,
                                                                        0LL);
                              if ( !attriba )
                                goto LABEL_314;
                              this = (AssetManager__InitCR_d__130_o *)attriba[1].fields;
                              if ( !this )
                                goto LABEL_314;
                              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
                                v296,
                                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_AssetData__Add__);
                              v276 = 0LL;
                            }
                            this = (AssetManager__InitCR_d__130_o *)System_String__IsNullOrEmpty(v276, 0LL);
                            if ( ((unsigned __int8)this & 1) == 0 )
                            {
                              size = v273;
                              if ( !attriba )
                                goto LABEL_314;
                              fields = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)attriba[1].fields;
                              v298 = v271;
                              v299 = v270;
                              v300 = (AssetData_o *)sub_B2C42C(AssetData_TypeInfo);
                              AssetData___ctor_30133348(v300, 0, v276, 0, v299, v298, size, crc, keyType, 0LL);
                              if ( !fields )
                                goto LABEL_314;
                              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                fields,
                                (EventMissionProgressRequest_Argument_ProgressData_o *)v300,
                                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_AssetData__Add__);
                            }
                          }
                        }
                      }
                      v253 = v245->max_length;
                      if ( (int)++v254 >= v253 )
                        goto LABEL_299;
                    }
                    goto LABEL_315;
                  }
LABEL_299:
                  if ( !attriba )
                    goto LABEL_314;
                  v342 = AssetManager_TypeInfo;
                  klass = (System_Int32_array **)p_fields->klass;
                  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !AssetManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                    v342 = AssetManager_TypeInfo;
                  }
                  v344 = v342->static_fields;
                  v344->assetBundleMasterVersion = (struct System_String_o *)klass;
                  sub_B2C2F8(
                    (BattleServantConfConponent_o *)&v344->assetBundleMasterVersion,
                    klass,
                    v247,
                    v248,
                    v249,
                    v250,
                    v251,
                    v252);
                  v345 = AssetManager_TypeInfo->static_fields;
                  v346 = (System_Int32_array **)p_dateVersion->klass;
                  v345->assetBundleDateVersion = (struct System_String_o *)p_dateVersion->klass;
                  sub_B2C2F8(
                    (BattleServantConfConponent_o *)&v345->assetBundleDateVersion,
                    v346,
                    v347,
                    v348,
                    v349,
                    v350,
                    v351,
                    v352);
                  v353 = AssetManager_TypeInfo->static_fields;
                  v354 = (System_Int32_array **)p_buildVersion->klass;
                  v353->assetBundleBuildVersion = (struct System_String_o *)p_buildVersion->klass;
                  sub_B2C2F8(
                    (BattleServantConfConponent_o *)&v353->assetBundleBuildVersion,
                    v354,
                    v355,
                    v356,
                    v357,
                    v358,
                    v359,
                    v360);
                  this = (AssetManager__InitCR_d__130_o *)_4__this->fields.assetBundleReleaseDic;
                  if ( !this )
                    goto LABEL_314;
                  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
                    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
                    (const MethodInfo_2DB1E9C *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
                  this = (AssetManager__InitCR_d__130_o *)attriba[1].fields;
                  if ( !this )
                    goto LABEL_314;
                  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                    &v393,
                    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
                    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
                  v395 = v393;
                  while ( 1 )
                  {
                    v361 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                             &v395,
                             (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
                    if ( !v361 )
                      break;
                    current = v395.fields.current;
                    if ( !v395.fields.current )
                      sub_B2C434(v361, v362);
                    v364 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)_4__this->fields.assetBundleReleaseDic;
                    if ( !v364 )
                      sub_B2C434(0LL, v362);
                    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                            v364,
                            (System_Xml_XmlQualifiedName_o *)v395.fields.current[1].monitor,
                            (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__) )
                    {
                      v366 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)_4__this->fields.assetBundleReleaseDic;
                      if ( !v366 )
                        sub_B2C434(0LL, v365);
                      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
                        v366,
                        (System_Xml_XmlQualifiedName_o *)current[1].monitor,
                        (System_Xml_Schema_XmlSchemaObject_o *)current,
                        (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
                    }
                  }
                  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                    &v395,
                    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
                  AssetManager__ConfigWriteRequest(_4__this, 1, 0LL);
LABEL_313:
                  v8->fields._configFileUrl_5__2 = 0LL;
                  v367 = (BattleServantConfConponent_o *)&v8->fields._configFileUrl_5__2;
                  sub_B2C2F8(v367, 0LL, v232, v233, v234, v235, v236, v237);
                  v367->monitor = 0LL;
                  sub_B2C2F8((BattleServantConfConponent_o *)v56, 0LL, v368, v369, v370, v371, v372, v373);
                  v374 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
                  UnityEngine_WaitForEndOfFrame___ctor(v374, 0LL);
                  v367[-1].fields.classBoardSkillObj = (struct BattleServantClassBoardSkillEffectListComponent_o *)v374;
                  sub_B2C2F8(
                    (BattleServantConfConponent_o *)((char *)v367 - 16),
                    (System_Int32_array **)v374,
                    v375,
                    v376,
                    v377,
                    v378,
                    v379,
                    v380);
                  *(_DWORD *)&v367[-1].fields.isEquip = 6;
                  return 1;
                }
              }
LABEL_315:
              v381 = sub_B2C460(this);
              sub_B2C400(v381, 0LL);
            }
            v301 = (Il2CppObject *)StringLiteral_2109/*"AssetStorageList download crc error"*/;
            if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
            }
            UnityEngine_Debug__LogError(v301, 0LL);
          }
        }
        v220 = (Il2CppObject *)StringLiteral_2110/*"AssetStorageList download data error"*/;
        if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__LogError(v220, 0LL);
LABEL_260:
        if ( *v56 )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)*v56, 0LL);
          *v56 = 0LL;
          sub_B2C2F8((BattleServantConfConponent_o *)v56, 0LL, v302, v303, v304, v305, v306, v307);
        }
        if ( v220 )
        {
          v308 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v308 = ManagerConfig_TypeInfo;
          }
          v309 = v308->static_fields;
          if ( v309->UseDebugCommand )
          {
            if ( (BYTE3(v308->vtable._0_Equals.methodPtr) & 4) != 0 && !v308->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v308);
              v309 = ManagerConfig_TypeInfo->static_fields;
            }
            if ( System_String__op_Inequality(v309->ServerDefaultType, (System_String_o *)StringLiteral_11585/*"SCRIPT"*/, 0LL) )
            {
              LOBYTE(_4__this->fields.writeRequestThread) = 1;
              v310 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v311 = (ErrorDialog_ClickDelegate_o *)sub_B2C42C(ErrorDialog_ClickDelegate_TypeInfo);
              ErrorDialog_ClickDelegate___ctor(
                v311,
                (Il2CppObject *)_4__this,
                Method_AssetManager_OnClickWaitDebugDialog__,
                0LL);
              if ( !v310 )
                goto LABEL_314;
              methodb.fields.value = 0LL;
              *(_DWORD *)&methodb.fields.has_value = 0;
              CommonUI__OpenWarningDialog(
                v310,
                (System_String_o *)StringLiteral_15745/*"[FFFF80]Download error for debug"*/,
                (System_String_o *)v220,
                v311,
                1,
                0,
                -1.0,
                1,
                methodb,
                0LL);
LABEL_273:
              if ( LOBYTE(_4__this->fields.writeRequestThread) )
              {
                v312 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
                UnityEngine_WaitForEndOfFrame___ctor(v312, 0LL);
                v8->fields.__2__current = (Il2CppObject *)v312;
                v313 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
                sub_B2C2F8(v313, (System_Int32_array **)v312, v314, v315, v316, v317, v318, v319);
                v320 = 3;
LABEL_297:
                *(_DWORD *)&v313[-1].fields.isOpenAfter = v320;
                return 1;
              }
            }
          }
          LOBYTE(_4__this->fields.writeRequestThread) = 1;
          if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          }
          if ( !byte_4185D97 )
          {
            sub_B2C35C(&ManagementManager_TypeInfo, method);
            byte_4185D97 = 1;
          }
          v321 = ManagementManager_TypeInfo;
          if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            v321 = ManagementManager_TypeInfo;
          }
          isDuringStartup = v321->static_fields->isDuringStartup;
          v323 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( isDuringStartup )
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v324 = LocalizationManager__Get((System_String_o *)StringLiteral_1741/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
            v325 = (ErrorDialog_ClickDelegate_o *)sub_B2C42C(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(
              v325,
              (Il2CppObject *)_4__this,
              Method_AssetManager_OnClickRetryDialog__,
              0LL);
            if ( !v323 )
              goto LABEL_314;
            CommonUI__OpenRetryBootDialog(v323, (System_String_o *)StringLiteral_1/*""*/, v324, v325, 0, 0LL);
          }
          else
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v326 = LocalizationManager__Get((System_String_o *)StringLiteral_1742/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
            v327 = (ErrorDialog_ClickDelegate_o *)sub_B2C42C(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(
              v327,
              (Il2CppObject *)_4__this,
              Method_AssetManager_OnClickRetryDialog__,
              0LL);
            if ( !v323 )
              goto LABEL_314;
            CommonUI__OpenRetryDialog(v323, (System_String_o *)StringLiteral_1/*""*/, v326, v327, 0, 0LL);
          }
LABEL_294:
          if ( LOBYTE(_4__this->fields.writeRequestThread) )
          {
            v328 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v328, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v328;
            v313 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
            sub_B2C2F8(v313, (System_Int32_array **)v328, v329, v330, v331, v332, v333, v334);
            v320 = 4;
            goto LABEL_297;
          }
        }
        v335 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v335, 1.0, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v335;
        v313 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B2C2F8(v313, (System_Int32_array **)v335, v336, v337, v338, v339, v340, v341);
        v320 = 5;
        goto LABEL_297;
      }
LABEL_175:
      v223 = (System_Int32_array **)v8->fields._wait_5__6;
      v8->fields.__2__current = (Il2CppObject *)v223;
      sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields.__2__current, v223, v205, v206, v207, v208, v209, v210);
      v8->fields.__1__state = 2;
      return 1;
    case 1:
      v8->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_32;
      goto LABEL_314;
    case 2:
      v56 = (AssetManager__InitCR_d__130_o **)&v8->fields._loader_5__3;
      v8->fields.__1__state = -1;
      goto LABEL_148;
    case 3:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_314;
      goto LABEL_273;
    case 4:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_314;
      goto LABEL_294;
    case 5:
      v8->fields._wait_5__6 = 0LL;
      v8->fields.__1__state = -1;
      sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields._wait_5__6, 0LL, v2, v3, v4, v5, v6, v7);
      if ( !_4__this )
        goto LABEL_314;
      goto LABEL_140;
    case 6:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_314;
      _4__this->fields.assetBundleDic = 0LL;
      BYTE2(_4__this->fields.writeRequestThread) = 0;
      BYTE2(_4__this->fields.initCRW) = 1;
      sub_B2C2F8((BattleServantConfConponent_o *)&_4__this->fields.assetBundleDic, 0LL, v2, v3, v4, v5, v6, v7);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall AssetManager__InitCR_d__130__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AssetManager__InitCR_d__130_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AssetManager__InitCR_d__130__System_Collections_IEnumerator_Reset(
        AssetManager__InitCR_d__130_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_AssetManager__InitCR_d__130_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall AssetManager__InitCR_d__130__System_Collections_IEnumerator_get_Current(
        AssetManager__InitCR_d__130_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall AssetManager__InitCR_d__130__System_IDisposable_Dispose(
        AssetManager__InitCR_d__130_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall AssetManager__WaitForExecutionUnloadUnuseAssets_d__41___ctor(
        AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AssetManager__WaitForExecutionUnloadUnuseAssets_d__41__MoveNext(
        AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_o *v8; // x19
  int32_t _1__state; // w8
  struct AssetManager_o *_4__this; // x21
  UnityEngine_WaitForEndOfFrame_o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **wait_5__2; // x1
  bool result; // w0

  v8 = this;
  if ( (byte_4186BB3 & 1) == 0 )
  {
    this = (AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_o *)sub_B2C35C(
                                                                        &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                        method);
    byte_4186BB3 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_12;
  }
  else
  {
    if ( _1__state )
      return 0;
    v8->fields.__1__state = -1;
    v11 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v11, 0LL);
    v8->fields._wait_5__2 = v11;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v8->fields._wait_5__2,
      (System_Int32_array **)v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    if ( !_4__this )
LABEL_12:
      sub_B2C434(this, method);
  }
  if ( BYTE4(_4__this->fields.writeRequestThread) || BYTE3(_4__this->fields.writeRequestThread) )
  {
    wait_5__2 = (System_Int32_array **)v8->fields._wait_5__2;
    v8->fields.__2__current = (Il2CppObject *)wait_5__2;
    sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields.__2__current, wait_5__2, v2, v3, v4, v5, v6, v7);
    result = 1;
    v8->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall AssetManager__WaitForExecutionUnloadUnuseAssets_d__41__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AssetManager__WaitForExecutionUnloadUnuseAssets_d__41__System_Collections_IEnumerator_Reset(
        AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall AssetManager__WaitForExecutionUnloadUnuseAssets_d__41__System_Collections_IEnumerator_get_Current(
        AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall AssetManager__WaitForExecutionUnloadUnuseAssets_d__41__System_IDisposable_Dispose(
        AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall AssetManager___c__DisplayClass117_0___ctor(
        AssetManager___c__DisplayClass117_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssetManager___c__DisplayClass117_0___DownloadAssetStorageAttributeWithCheckDialog_b__1(
        AssetManager___c__DisplayClass117_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  if ( isDecide )
    this->fields.isDataUpdate = 1;
  else
    UnityEngine_Application__Quit_40611620(0LL);
}


void __fastcall AssetManager___c__DisplayClass147_0___ctor(
        AssetManager___c__DisplayClass147_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssetManager___c__DisplayClass147_0___LoadStart_b__0(
        AssetManager___c__DisplayClass147_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  AssetLoader_o *loader; // x20
  System_Int32_array **_4__this; // x22
  __int64 v6; // x21
  __int64 v7; // x9
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x0
  __int64 v15; // x1
  struct AssetManager_LoadWaitStatus_o *waiter; // x8

  if ( (byte_4186BAF & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetManager_OnEndLoadAssetStorage__, method);
    sub_B2C35C(&AssetLoader_LoadEndHandler_TypeInfo, v3);
    byte_4186BAF = 1;
  }
  loader = this->fields.loader;
  _4__this = (System_Int32_array **)this->fields.__4__this;
  v6 = sub_B2C42C(AssetLoader_LoadEndHandler_TypeInfo);
  v7 = *(_QWORD *)Method_AssetManager_OnEndLoadAssetStorage__;
  *(_QWORD *)(v6 + 40) = Method_AssetManager_OnEndLoadAssetStorage__;
  *(_QWORD *)(v6 + 16) = v7;
  *(_QWORD *)(v6 + 32) = _4__this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v6 + 32), _4__this, v8, v9, v10, v11, v12, v13);
  waiter = this->fields.waiter;
  if ( !waiter || !loader )
    sub_B2C434(v14, v15);
  AssetLoader__StartLoad(loader, (AssetLoader_LoadEndHandler_o *)v6, waiter->fields.resourceNames, 0LL);
}


void __fastcall AssetManager___c__DisplayClass168_0___ctor(
        AssetManager___c__DisplayClass168_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssetManager___c__DisplayClass168_0___LoadAssetStorage_b__0(
        AssetManager___c__DisplayClass168_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  AssetManager___c__DisplayClass168_0_o *v4; // x19
  __int64 v5; // x1
  struct System_Collections_Generic_List_string__o *remainNameList; // x8
  struct AssetManager_o *_4__this; // x8

  v4 = this;
  if ( (byte_4186BB0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Remove__, data);
    this = (AssetManager___c__DisplayClass168_0_o *)sub_B2C35C(
                                                      &Method_System_Collections_Generic_List_string__get_Count__,
                                                      v5);
    byte_4186BB0 = 1;
  }
  ++v4->fields.calledCallbackFuncCounter;
  if ( !data )
    goto LABEL_13;
  this = (AssetManager___c__DisplayClass168_0_o *)v4->fields.remainNameList;
  if ( !this )
    goto LABEL_13;
  this = (AssetManager___c__DisplayClass168_0_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                                                    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
                                                    (WarBoardManager_TaskList_o *)data->fields.name,
                                                    (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_string__Remove__);
  if ( v4->fields.calledCallbackFunc )
    return;
  remainNameList = v4->fields.remainNameList;
  if ( !remainNameList )
LABEL_13:
    sub_B2C434(this, data);
  if ( remainNameList->fields._size <= 0 )
  {
    this = (AssetManager___c__DisplayClass168_0_o *)v4->fields.__4__this;
    if ( this )
    {
      AssetManager__AddLoadWaitStatus((AssetManager_o *)this, v4->fields.callbackFunc, 0LL);
      _4__this = v4->fields.__4__this;
      if ( _4__this )
      {
        HIDWORD(_4__this->fields.unloadCallbacks) = v4->fields.loadParallelMax;
        this = (AssetManager___c__DisplayClass168_0_o *)v4->fields.__4__this;
        v4->fields.calledCallbackFunc = 1;
        if ( this )
        {
          AssetManager__LoadStart((AssetManager_o *)this, 0LL);
          return;
        }
      }
    }
    goto LABEL_13;
  }
}


void __fastcall AssetManager__coUnloadUnusedAssets_d__137___ctor(
        AssetManager__coUnloadUnusedAssets_d__137_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AssetManager__coUnloadUnusedAssets_d__137__MoveNext(
        AssetManager__coUnloadUnusedAssets_d__137_o *this,
        const MethodInfo *method)
{
  AssetManager__coUnloadUnusedAssets_d__137_o *v2; // x19
  __int64 v3; // x1
  int32_t _1__state; // w8
  struct AssetManager_o *_4__this; // x20
  UnityEngine_WaitForEndOfFrame_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **wait_5__2; // x1
  bool v20; // w21
  System_Int32_array **v21; // x0
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  AssetManager_ResourceUnloadEventHandler_o *v29; // x0
  BattleServantConfConponent_o *p_downLoadWaitList; // x20
  AssetManager_ResourceUnloadEventHandler_o *downLoadWaitList; // t1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  v2 = this;
  if ( (byte_4186BB4 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    this = (AssetManager__coUnloadUnusedAssets_d__137_o *)sub_B2C35C(&UnityEngine_WaitForEndOfFrame_TypeInfo, v3);
    byte_4186BB4 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_20;
    downLoadWaitList = (AssetManager_ResourceUnloadEventHandler_o *)_4__this->fields.downLoadWaitList;
    p_downLoadWaitList = (BattleServantConfConponent_o *)&_4__this->fields.downLoadWaitList;
    v29 = downLoadWaitList;
    *(_WORD *)(&p_downLoadWaitList[-1].fields.isEquip + 3) = 0;
    if ( downLoadWaitList )
    {
      AssetManager_ResourceUnloadEventHandler__Invoke(v29, method);
      p_downLoadWaitList->klass = 0LL;
      sub_B2C2F8(p_downLoadWaitList, 0LL, v32, v33, v34, v35, v36, v37);
    }
    return 0;
  }
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    goto LABEL_8;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  v6 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
  UnityEngine_WaitForEndOfFrame___ctor(v6, 0LL);
  v2->fields._wait_5__2 = v6;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v2->fields._wait_5__2,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
LABEL_8:
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  this = (AssetManager__coUnloadUnusedAssets_d__137_o *)AssetManager__LoadIsBusy(0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( _4__this )
    {
      v20 = 1;
      BYTE4(_4__this->fields.writeRequestThread) = 1;
      v21 = (System_Int32_array **)UnityEngine_Resources__UnloadUnusedAssets(0LL);
      v2->fields.__2__current = (Il2CppObject *)v21;
      p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B2C2F8(p__2__current, v21, v23, v24, v25, v26, v27, v28);
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 2;
      return v20;
    }
LABEL_20:
    sub_B2C434(this, method);
  }
  wait_5__2 = (System_Int32_array **)v2->fields._wait_5__2;
  v2->fields.__2__current = (Il2CppObject *)wait_5__2;
  sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields.__2__current, wait_5__2, v13, v14, v15, v16, v17, v18);
  v20 = 1;
  v2->fields.__1__state = 1;
  return v20;
}


Il2CppObject *__fastcall AssetManager__coUnloadUnusedAssets_d__137__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AssetManager__coUnloadUnusedAssets_d__137_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AssetManager__coUnloadUnusedAssets_d__137__System_Collections_IEnumerator_Reset(
        AssetManager__coUnloadUnusedAssets_d__137_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_AssetManager__coUnloadUnusedAssets_d__137_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall AssetManager__coUnloadUnusedAssets_d__137__System_Collections_IEnumerator_get_Current(
        AssetManager__coUnloadUnusedAssets_d__137_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall AssetManager__coUnloadUnusedAssets_d__137__System_IDisposable_Dispose(
        AssetManager__coUnloadUnusedAssets_d__137_o *this,
        const MethodInfo *method)
{
  ;
}