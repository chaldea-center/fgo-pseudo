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

  if ( (byte_40FCA71 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_2088/*"Asset"*/, v8);
    sub_B16FFC(&StringLiteral_2101/*"AssetStorageBack.txt"*/, v9);
    sub_B16FFC(&StringLiteral_21109/*"offline"*/, v10);
    sub_B16FFC(&StringLiteral_2100/*"AssetStorage.txt"*/, v11);
    sub_B16FFC(&StringLiteral_2102/*"AssetStorageCreate.txt"*/, v12);
    sub_B16FFC(&StringLiteral_1/*""*/, v13);
    sub_B16FFC(&StringLiteral_21178/*"online"*/, v14);
    byte_40FCA71 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)AssetManager_TypeInfo->static_fields;
  v16 = (System_Int32_array **)StringLiteral_2088/*"Asset"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_2088/*"Asset"*/;
  sub_B16F98(static_fields, v16, v2, v3, v4, v5, v6, v7);
  v17 = AssetManager_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_21109/*"offline"*/;
  v17->SAVE_DATA_OFFLINE = (struct System_String_o *)StringLiteral_21109/*"offline"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v17->SAVE_DATA_OFFLINE, v18, v19, v20, v21, v22, v23, v24);
  v25 = AssetManager_TypeInfo->static_fields;
  v26 = (System_Int32_array **)StringLiteral_21178/*"online"*/;
  v25->SAVE_DATA_ONLINE = (struct System_String_o *)StringLiteral_21178/*"online"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v25->SAVE_DATA_ONLINE, v26, v27, v28, v29, v30, v31, v32);
  v33 = AssetManager_TypeInfo->static_fields;
  v34 = (System_Int32_array **)StringLiteral_2100/*"AssetStorage.txt"*/;
  v33->configFileName = (struct System_String_o *)StringLiteral_2100/*"AssetStorage.txt"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v33->configFileName, v34, v35, v36, v37, v38, v39, v40);
  v41 = AssetManager_TypeInfo->static_fields;
  v42 = (System_Int32_array **)StringLiteral_2102/*"AssetStorageCreate.txt"*/;
  v41->createConfigFileName = (struct System_String_o *)StringLiteral_2102/*"AssetStorageCreate.txt"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v41->createConfigFileName, v42, v43, v44, v45, v46, v47, v48);
  v49 = AssetManager_TypeInfo->static_fields;
  v50 = (System_Int32_array **)StringLiteral_2101/*"AssetStorageBack.txt"*/;
  v49->backConfigFileName = (struct System_String_o *)StringLiteral_2101/*"AssetStorageBack.txt"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v49->backConfigFileName, v50, v51, v52, v53, v54, v55, v56);
  v57 = AssetManager_TypeInfo->static_fields;
  v58 = (System_Int32_array **)StringLiteral_1/*""*/;
  v57->assetBundleMasterVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98((BattleServantConfConponent_o *)&v57->assetBundleMasterVersion, v58, v59, v60, v61, v62, v63, v64);
  v65 = (System_Int32_array **)StringLiteral_1/*""*/;
  v66 = AssetManager_TypeInfo->static_fields;
  v66->assetBundleDateVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98((BattleServantConfConponent_o *)&v66->assetBundleDateVersion, v65, v67, v68, v69, v70, v71, v72);
  v73 = (System_Int32_array **)StringLiteral_1/*""*/;
  v74 = AssetManager_TypeInfo->static_fields;
  v74->assetBundleBuildVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98((BattleServantConfConponent_o *)&v74->assetBundleBuildVersion, v73, v75, v76, v77, v78, v79, v80);
}


void __fastcall AssetManager___ctor(AssetManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v35; // x20
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v53; // x20
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v64; // x20
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7

  if ( (byte_40FCA70 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__AssetData__TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_AssetLoader___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_AssetLoader__TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager___ctor__, v11);
    sub_B16FFC(&StringLiteral_1/*""*/, v12);
    byte_40FCA70 = 1;
  }
  LOWORD(this->fields.initCRW) = 257;
  BYTE2(this->fields.initCRW) = 1;
  v13 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                        System_Collections_Generic_Dictionary_string__AssetData__TypeInfo,
                                                                                        method,
                                                                                        v2,
                                                                                        v3,
                                                                                        v4);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v13,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.assetBundleReleaseDic = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)v13;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.assetBundleReleaseDic,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v24 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                        System_Collections_Generic_Dictionary_string__AssetData__TypeInfo,
                                                                                        v20,
                                                                                        v21,
                                                                                        v22,
                                                                                        v23);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v24,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.assetResourceDic = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)v24;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.assetResourceDic,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v35 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                        System_Collections_Generic_Dictionary_string__AssetData__TypeInfo,
                                                                                        v31,
                                                                                        v32,
                                                                                        v33,
                                                                                        v34);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v35,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.requestConfigWriteData = (struct System_String_o *)v35;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.requestConfigWriteData,
    (System_Int32_array **)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = (System_Int32_array **)StringLiteral_1/*""*/;
  *(_QWORD *)&this->fields.requestWriteCounter = StringLiteral_1/*""*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.requestWriteCounter, v42, v43, v44, v45, v46, v47, v48);
  LODWORD(this->fields.processingAssetLoaderList) = -1082130432;
  v53 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_AssetLoader__TypeInfo,
                                                                                                  v49,
                                                                                                  v50,
                                                                                                  v51,
                                                                                                  v52);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v53,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_AssetLoader___ctor__);
  this->fields.downloadSize = (int64_t)v53;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.downloadSize,
    (System_Int32_array **)v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  HIDWORD(this->fields.unloadCallbacks) = 1;
  v64 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)sub_B170CC(
                                                                        System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo,
                                                                        v60,
                                                                        v61,
                                                                        v62,
                                                                        v63);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData____ctor(
    v64,
    (const MethodInfo_2B15EA4 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
  this[1].klass = (AssetManager_c *)v64;
  sub_B16F98((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)v64, v65, v66, v67, v68, v69, v70);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A552A4 *)Method_SingletonMonoBehaviour_AssetManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AssetManager__AddCallbackLoadStatus(
        AssetManager_o *this,
        int32_t type,
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int64_t downloadSize; // x23
  __int64 v15; // x24
  int v16; // w8
  AssetLoader_o *v17; // x23
  AssetData_o *data; // x0
  const MethodInfo *v19; // x2
  AssetManager_c *klass; // x0
  AssetManager_LoadWaitStatus_o *Current; // x0
  AssetManager_LoadWaitStatus_o *v22; // x22
  char v23; // w19
  int v24; // w20
  System_Collections_Generic_Queue_Enumerator_T__o v26; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FCA5C & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__,
      *(_QWORD *)&type);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__, v13);
    byte_40FCA5C = 1;
  }
  memset(&v26, 0, sizeof(v26));
  downloadSize = this->fields.downloadSize;
  if ( !downloadSize )
    goto LABEL_12;
  v15 = 0LL;
  while ( 1 )
  {
    v16 = *(_DWORD *)(downloadSize + 24);
    if ( (int)v15 >= v16 )
      break;
    if ( v16 <= (unsigned int)v15 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v17 = *(AssetLoader_o **)(*(_QWORD *)(downloadSize + 16) + 8 * v15 + 32);
    if ( !v17 )
      goto LABEL_12;
    data = v17->fields.data;
    if ( data && AssetData__IsSame_29928224(data, type, name, (const MethodInfo *)callbackFunc) )
    {
      if ( callbackFunc )
        AssetLoader__add_endCallback2(v17, callbackFunc, v19);
      return 1;
    }
    downloadSize = this->fields.downloadSize;
    ++v15;
    if ( !downloadSize )
      goto LABEL_12;
  }
  klass = this[1].klass;
  if ( !klass )
LABEL_12:
    sub_B170D4();
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___GetEnumerator(
    &v26,
    (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)klass,
    (const MethodInfo_2B1656C *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  while ( System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___MoveNext(
            &v26,
            (const MethodInfo_2074268 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__) )
  {
    Current = System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___get_Current(
                &v26,
                (const MethodInfo_207436C *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    v22 = Current;
    if ( !Current )
      sub_B170D4();
    if ( AssetManager_LoadWaitStatus__IsSame(Current, type, name, 0LL) )
    {
      AssetManager_LoadWaitStatus__AddCallback(v22, callbackFunc, 0LL);
      v23 = 1;
      v24 = 5;
      goto LABEL_23;
    }
  }
  v23 = 0;
  v24 = 3;
LABEL_23:
  System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___Dispose(
    &v26,
    (const MethodInfo_2074258 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  return (v24 == 5) & v23;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AssetManager__AddEntryLoadStatus(
        AssetManager_o *this,
        int32_t type,
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int64_t downloadSize; // x23
  __int64 v15; // x24
  int v16; // w8
  AssetLoader_o *v17; // x23
  AssetData_o *data; // x0
  const MethodInfo *v19; // x2
  AssetManager_c *klass; // x0
  AssetManager_LoadWaitStatus_o *Current; // x0
  AssetManager_LoadWaitStatus_o *v22; // x22
  char v23; // w19
  int v24; // w20
  struct AssetData_o *v25; // x8
  int32_t entryCount; // w9
  System_Collections_Generic_Queue_Enumerator_T__o v28; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FCA5B & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__,
      *(_QWORD *)&type);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__, v13);
    byte_40FCA5B = 1;
  }
  memset(&v28, 0, sizeof(v28));
  downloadSize = this->fields.downloadSize;
  if ( !downloadSize )
    goto LABEL_12;
  v15 = 0LL;
  while ( 1 )
  {
    v16 = *(_DWORD *)(downloadSize + 24);
    if ( (int)v15 >= v16 )
      break;
    if ( v16 <= (unsigned int)v15 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v17 = *(AssetLoader_o **)(*(_QWORD *)(downloadSize + 16) + 8 * v15 + 32);
    if ( !v17 )
      goto LABEL_12;
    data = v17->fields.data;
    if ( data && AssetData__IsSame_29928224(data, type, name, (const MethodInfo *)callbackFunc) )
    {
      v25 = v17->fields.data;
      if ( v25 )
      {
        entryCount = v25->fields.entryCount;
        if ( (entryCount & 0x80000000) == 0 )
          v25->fields.entryCount = entryCount + 1;
        if ( callbackFunc )
          AssetLoader__add_endCallback2(v17, callbackFunc, v19);
        return 1;
      }
LABEL_12:
      sub_B170D4();
    }
    downloadSize = this->fields.downloadSize;
    ++v15;
    if ( !downloadSize )
      goto LABEL_12;
  }
  klass = this[1].klass;
  if ( !klass )
    goto LABEL_12;
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___GetEnumerator(
    &v28,
    (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)klass,
    (const MethodInfo_2B1656C *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  while ( System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___MoveNext(
            &v28,
            (const MethodInfo_2074268 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__) )
  {
    Current = System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___get_Current(
                &v28,
                (const MethodInfo_207436C *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    v22 = Current;
    if ( !Current )
      sub_B170D4();
    if ( AssetManager_LoadWaitStatus__IsSame(Current, type, name, 0LL) )
    {
      AssetManager_LoadWaitStatus__AddEntry(v22, 0LL);
      AssetManager_LoadWaitStatus__AddCallback(v22, callbackFunc, 0LL);
      v23 = 1;
      v24 = 9;
      goto LABEL_26;
    }
  }
  v23 = 0;
  v24 = 7;
LABEL_26:
  System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___Dispose(
    &v28,
    (const MethodInfo_2074258 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  return (v24 == 9) & v23;
}


void __fastcall AssetManager__AddLoadWaitStatus(
        AssetManager_o *this,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  AssetManager_LoadWaitStatus_o *v8; // x21
  AssetManager_c *klass; // x0

  if ( (byte_40FCA5E & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_LoadWaitStatus_TypeInfo, callbackFunc);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__, v7);
    byte_40FCA5E = 1;
  }
  v8 = (AssetManager_LoadWaitStatus_o *)sub_B170CC(AssetManager_LoadWaitStatus_TypeInfo, callbackFunc, method, v3, v4);
  AssetManager_LoadWaitStatus___ctor(v8, callbackFunc, 0LL);
  klass = this[1].klass;
  if ( !klass )
    sub_B170D4();
  System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
    (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)klass,
    (Mono_Net_CFNetwork_GetProxyData_o *)v8,
    (const MethodInfo_2B16498 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
}


void __fastcall AssetManager__AddLoadWaitStatus_29959396(
        AssetManager_o *this,
        AssetData_o *info,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  AssetManager_LoadWaitStatus_o *v8; // x21
  AssetManager_c *klass; // x0

  if ( (byte_40FCA5F & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_LoadWaitStatus_TypeInfo, info);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__, v7);
    byte_40FCA5F = 1;
  }
  if ( !info
    || (*(_QWORD *)&this->fields.isErrorDialog += info->fields.size,
        v8 = (AssetManager_LoadWaitStatus_o *)sub_B170CC(AssetManager_LoadWaitStatus_TypeInfo, info, method, v3, v4),
        AssetManager_LoadWaitStatus___ctor_23506268(v8, info, 0LL),
        (klass = this[1].klass) == 0LL) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
    (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)klass,
    (Mono_Net_CFNetwork_GetProxyData_o *)v8,
    (const MethodInfo_2B16498 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
}


void __fastcall AssetManager__AddLoadWaitStatus_29969472(
        AssetManager_o *this,
        AssetData_o *info,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        System_String_array *resourceNames,
        const MethodInfo *method)
{
  __int64 v9; // x1
  AssetManager_LoadWaitStatus_o *v10; // x23
  AssetManager_c *klass; // x0

  if ( (byte_40FCA60 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_LoadWaitStatus_TypeInfo, info);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__, v9);
    byte_40FCA60 = 1;
  }
  if ( !info
    || (*(_QWORD *)&this->fields.isErrorDialog += info->fields.size,
        v10 = (AssetManager_LoadWaitStatus_o *)sub_B170CC(
                                                 AssetManager_LoadWaitStatus_TypeInfo,
                                                 info,
                                                 callbackFunc,
                                                 resourceNames,
                                                 method),
        AssetManager_LoadWaitStatus___ctor_23506320(v10, info, callbackFunc, resourceNames, 0LL),
        (klass = this[1].klass) == 0LL) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
    (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)klass,
    (Mono_Net_CFNetwork_GetProxyData_o *)v10,
    (const MethodInfo_2B16498 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
}


void __fastcall AssetManager__CancelDownloadAssetStorage(AssetManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *klass; // x0
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o **v18; // x21
  Mono_Net_CFNetwork_GetProxyData_o *ProxyData___Dequeue; // x0
  __int64 v20; // x8

  if ( (byte_40FCA53 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__, v8);
    sub_B16FFC(&System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo, v9);
    byte_40FCA53 = 1;
  }
  v10 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)sub_B170CC(
                                                                        System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo,
                                                                        method,
                                                                        v2,
                                                                        v3,
                                                                        v4);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData____ctor(
    v10,
    (const MethodInfo_2B15EA4 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
  v18 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o **)&this[1];
  klass = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)this[1].klass;
  if ( !klass )
LABEL_12:
    sub_B170D4();
  while ( klass->fields._size > 0 )
  {
    ProxyData___Dequeue = System_Collections_Generic_Queue_CFNetwork_GetProxyData___Dequeue(
                            klass,
                            (const MethodInfo_2B166B0 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
    if ( !ProxyData___Dequeue )
      goto LABEL_12;
    v20 = *(_QWORD *)&ProxyData___Dequeue->fields.script;
    if ( v20 && *(int *)(v20 + 84) <= 0 )
    {
      *(_QWORD *)&this->fields.isErrorDialog -= *(int *)(v20 + 48);
    }
    else
    {
      if ( !v10 )
        goto LABEL_12;
      System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
        v10,
        ProxyData___Dequeue,
        (const MethodInfo_2B16498 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
    }
    klass = *v18;
    if ( !*v18 )
      goto LABEL_12;
  }
  this[1].klass = (AssetManager_c *)v10;
  sub_B16F98((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)v10, v11, v12, v13, v14, v15, v16);
  BYTE2(this->fields.writeRequestThread) = 1;
}


void __fastcall AssetManager__CancelDownloadAssetStorageAll(AssetManager_o *this, const MethodInfo *method)
{
  AssetManager_c *klass; // x0

  if ( (byte_40FCA54 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__, method);
    byte_40FCA54 = 1;
  }
  klass = this[1].klass;
  *(_QWORD *)&this->fields.isErrorDialog = 0LL;
  if ( !klass )
    sub_B170D4();
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___Clear(
    (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)klass,
    (const MethodInfo_2B16138 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__);
}


bool __fastcall AssetManager__CheckDateVersion(System_String_o *dateVersion, const MethodInfo *method)
{
  AssetManager_c *v3; // x0
  System_String_o *assetBundleDateVersion; // x0

  if ( (byte_40FCA21 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    byte_40FCA21 = 1;
  }
  v3 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v3 = AssetManager_TypeInfo;
  }
  assetBundleDateVersion = v3->static_fields->assetBundleDateVersion;
  if ( !assetBundleDateVersion )
    sub_B170D4();
  return System_String__StartsWith(assetBundleDateVersion, dateVersion, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AssetManager__CheckEntryLoadStatus(
        AssetManager_o *this,
        int32_t type,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int64_t downloadSize; // x23
  __int64 v13; // x22
  int v14; // w8
  __int64 v15; // x8
  AssetData_o *v16; // x0
  AssetManager_c *klass; // x0
  AssetManager_LoadWaitStatus_o *Current; // x0
  char v19; // w19
  int v20; // w20
  System_Collections_Generic_Queue_Enumerator_T__o v22; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FCA5D & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__,
      *(_QWORD *)&type);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__, v11);
    byte_40FCA5D = 1;
  }
  memset(&v22, 0, sizeof(v22));
  downloadSize = this->fields.downloadSize;
  if ( !downloadSize )
    goto LABEL_12;
  v13 = 0LL;
  while ( 1 )
  {
    v14 = *(_DWORD *)(downloadSize + 24);
    if ( (int)v13 >= v14 )
      break;
    if ( v14 <= (unsigned int)v13 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v15 = *(_QWORD *)(*(_QWORD *)(downloadSize + 16) + 8 * v13 + 32);
    if ( !v15 )
      goto LABEL_12;
    v16 = *(AssetData_o **)(v15 + 24);
    if ( v16 && AssetData__IsSame_29928224(v16, type, name, method) )
      return 1;
    downloadSize = this->fields.downloadSize;
    ++v13;
    if ( !downloadSize )
      goto LABEL_12;
  }
  klass = this[1].klass;
  if ( !klass )
LABEL_12:
    sub_B170D4();
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___GetEnumerator(
    &v22,
    (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)klass,
    (const MethodInfo_2B1656C *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  while ( System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___MoveNext(
            &v22,
            (const MethodInfo_2074268 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__) )
  {
    Current = System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___get_Current(
                &v22,
                (const MethodInfo_207436C *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    if ( !Current )
      sub_B170D4();
    if ( AssetManager_LoadWaitStatus__IsSame(Current, type, name, 0LL) )
    {
      v19 = 1;
      v20 = 2;
      goto LABEL_21;
    }
  }
  v20 = 0;
  v19 = 0;
LABEL_21:
  System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___Dispose(
    &v22,
    (const MethodInfo_2074258 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  return (v20 == 2) & v19;
}


bool __fastcall AssetManager__CheckVersion(
        System_String_o *masterVersion,
        System_String_o *dateVersion,
        const MethodInfo *method)
{
  AssetManager_c *v5; // x0
  AssetManager_c *v6; // x0

  if ( (byte_40FCA20 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, dateVersion);
    byte_40FCA20 = 1;
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
  struct System_Collections_Generic_Dictionary_string__AssetData__o *assetBundleReleaseDic; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  AssetData_o *currentValue; // x21
  Il2CppClass *klass; // x0
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1
  System_String_o *Path; // x22
  const MethodInfo *v15; // x2
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v16; // [xsp+8h] [xbp-88h] BYREF
  int v17; // [xsp+28h] [xbp-68h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v18; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_40FCA6F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, method);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v3);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v4);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v6);
    sub_B16FFC(&StringLiteral_12512/*"SYSTEM"*/, v7);
    byte_40FCA6F = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v17 = 0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.assetBundleReleaseDic, 0LL) )
  {
    assetBundleReleaseDic = this->fields.assetBundleReleaseDic;
    if ( !assetBundleReleaseDic
      || (Values = System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                     (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)assetBundleReleaseDic,
                     (const MethodInfo_2DA39BC *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
    {
      sub_B170D4();
    }
    System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
      &v16,
      Values,
      (const MethodInfo_22866D8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    v18 = v16;
    while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
              &v18,
              (const MethodInfo_26BE610 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__) )
    {
      currentValue = (AssetData_o *)v18.fields.currentValue;
      if ( !v18.fields.currentValue )
        sub_B170D4();
      klass = v18.fields.currentValue[2].klass;
      if ( !klass )
        sub_B170D4();
      if ( !System_String__Equals_43801728((System_String_o *)klass, (System_String_o *)StringLiteral_12512/*"SYSTEM"*/, 5, 0LL) )
      {
        AssetManager__ReleaseReservation(this, currentValue, v12);
        Path = AssetData__get_Path(currentValue, v13);
        if ( System_IO_File__Exists(Path, 0LL) )
        {
          System_IO_File__Delete(Path, 0LL);
          if ( !System_IO_File__Exists(Path, 0LL) )
            currentValue->fields.nowVersion = 0;
        }
      }
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
      &v18,
      (const MethodInfo_26BE60C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    AssetManager__ConfigWriteRequest(this, 1, v15);
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
  struct System_Collections_Generic_Dictionary_string__AssetData__o *assetBundleReleaseDic; // x0
  struct System_Collections_Generic_Dictionary_string__AssetData__o *v17; // x0
  int32_t Count; // w22
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Text_StringBuilder_o *v23; // x21
  AssetManager_c *v24; // x0
  AssetManager_c *v25; // x0
  AssetManager_c *v26; // x0
  struct System_Collections_Generic_Dictionary_string__AssetData__o *v27; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  Il2CppObject *currentValue; // x23
  Il2CppObject *v30; // x22
  System_String_o *v31; // x21
  System_Text_Encoding_o *UTF8; // x0
  System_Byte_array *v33; // x24
  System_String_o *v34; // x1
  System_String_o *v35; // x21
  System_Int32_array **v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  int v43; // w19
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v44; // [xsp+8h] [xbp-88h] BYREF
  int v45[3]; // [xsp+20h] [xbp-70h]
  int v46; // [xsp+2Ch] [xbp-64h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v47; // [xsp+30h] [xbp-60h] BYREF
  uint32_t v48; // [xsp+58h] [xbp-38h] BYREF
  bool lockTaken; // [xsp+5Ch] [xbp-34h] BYREF

  if ( (byte_40FCA57 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, isFast);
    sub_B16FFC(&CatAndMouseGame_TypeInfo, v5);
    sub_B16FFC(&Crc32_TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, v8);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v9);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v10);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v11);
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v13);
    sub_B16FFC(&StringLiteral_26/*"\n"*/, v14);
    sub_B16FFC(&StringLiteral_23604/*"~"*/, v15);
    byte_40FCA57 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  lockTaken = 0;
  v48 = 0;
  v46 = 0;
  assetBundleReleaseDic = this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_43;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)assetBundleReleaseDic,
         (const MethodInfo_2DA3814 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) < 1 )
    return;
  v17 = this->fields.assetBundleReleaseDic;
  if ( !v17 )
    goto LABEL_43;
  Count = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v17,
            (const MethodInfo_2DA3814 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__);
  v23 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v19, v20, v21, v22);
  System_Text_StringBuilder___ctor_41908268(v23, 60 * Count, 0LL);
  if ( !v23 )
    goto LABEL_43;
  System_Text_StringBuilder__Append_41917484(v23, 0x40u, 0LL);
  v24 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v24 = AssetManager_TypeInfo;
  }
  System_Text_StringBuilder__Append_41914240(v23, v24->static_fields->assetBundleMasterVersion, 0LL);
  if ( !System_String__IsNullOrEmpty(AssetManager_TypeInfo->static_fields->assetBundleDateVersion, 0LL) )
  {
    System_Text_StringBuilder__Append_41917484(v23, 0x2Cu, 0LL);
    v25 = AssetManager_TypeInfo;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      v25 = AssetManager_TypeInfo;
    }
    System_Text_StringBuilder__Append_41914240(v23, v25->static_fields->assetBundleDateVersion, 0LL);
    if ( !System_String__IsNullOrEmpty(AssetManager_TypeInfo->static_fields->assetBundleBuildVersion, 0LL) )
    {
      System_Text_StringBuilder__Append_41917484(v23, 0x2Cu, 0LL);
      v26 = AssetManager_TypeInfo;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v26 = AssetManager_TypeInfo;
      }
      System_Text_StringBuilder__Append_41914240(v23, v26->static_fields->assetBundleBuildVersion, 0LL);
    }
  }
  System_Text_StringBuilder__Append_41917484(v23, 0xAu, 0LL);
  v27 = this->fields.assetBundleReleaseDic;
  if ( !v27
    || (Values = System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                   (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)v27,
                   (const MethodInfo_2DA39BC *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
LABEL_43:
    sub_B170D4();
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v44,
    Values,
    (const MethodInfo_22866D8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v47 = v44;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v47,
            (const MethodInfo_26BE610 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__) )
  {
    currentValue = v47.fields.currentValue;
    if ( !v47.fields.currentValue )
      sub_B170D4();
    System_Text_StringBuilder__Append_41917580(v23, (int32_t)v47.fields.currentValue[2].monitor, 0LL);
    System_Text_StringBuilder__Append_41917484(v23, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_41914240(v23, (System_String_o *)currentValue[2].klass, 0LL);
    System_Text_StringBuilder__Append_41917484(v23, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_41917580(v23, (int32_t)currentValue[3].klass, 0LL);
    System_Text_StringBuilder__Append_41917484(v23, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_41917860(v23, HIDWORD(currentValue[3].klass), 0LL);
    System_Text_StringBuilder__Append_41917484(v23, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_41914240(v23, (System_String_o *)currentValue[1].monitor, 0LL);
    System_Text_StringBuilder__Append_41914240(v23, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
  }
  v45[0] = 299;
  v46 = 1;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v47,
    (const MethodInfo_26BE60C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  v46 = 0;
  v30 = *(Il2CppObject **)&this->fields.requestWriteCounter;
  lockTaken = 0;
  System_Threading_Monitor__Enter_15295276(v30, &lockTaken, 0LL);
  v31 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v23->klass->vtable._3_ToString.method)(
                             v23,
                             v23->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_B170D4();
  v33 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                               UTF8,
                               v31,
                               UTF8->klass->vtable._19_GetBytes.methodPtr);
  if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  v48 = Crc32__Compute(v33, 0LL);
  v34 = System_UInt32__ToString((uint32_t)&v48, 0LL);
  v35 = System_String__Concat_43747144(
          (System_String_o *)StringLiteral_23604/*"~"*/,
          v34,
          (System_String_o *)StringLiteral_26/*"\n"*/,
          v31,
          0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v36 = (System_Int32_array **)CatAndMouseGame__CatGame8(v35, 0LL);
  *(_QWORD *)&this->fields.requestWriteCounter = v36;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.requestWriteCounter, v36, v37, v38, v39, v40, v41, v42);
  if ( isFast )
  {
    LODWORD(this->fields.processingAssetLoaderList) = 0;
  }
  else if ( *(float *)&this->fields.processingAssetLoaderList < 0.0 )
  {
    LODWORD(this->fields.processingAssetLoaderList) = 1065353216;
  }
  v45[0] = 436;
  v43 = ++v46;
  if ( lockTaken )
    System_Threading_Monitor__Exit(v30, 0LL);
  if ( v43 && v45[v43 - 1] == 436 )
    v46 = v43 - 1;
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.reserveWriteRequest, 0LL, v4, v5, v6, v7, v8, v9);
  if ( LOBYTE(this->fields.unloadCallbacks) )
    AssetManager__StartThreadConfigWriteRequest(this, v10);
}


System_String_o *__fastcall AssetManager__ConvertDownloadSizeToString(
        AssetManager_o *this,
        double size,
        const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x19
  Il2CppObject *v19; // x0
  System_Int32_array **v20; // x1
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  double v41; // d0
  unsigned int v42; // w8
  unsigned int v43; // w20
  System_String_o format; // [xsp+8h] [xbp-18h] BYREF

  *(double *)&format.klass = size;
  if ( (byte_40FCA4D & 1) == 0 )
  {
    sub_B16FFC(&string___TypeInfo, method);
    sub_B16FFC(&StringLiteral_8290/*"KB"*/, v4);
    sub_B16FFC(&StringLiteral_23557/*"{0}{1}"*/, v5);
    sub_B16FFC(&StringLiteral_9237/*"N2"*/, v6);
    sub_B16FFC(&StringLiteral_13281/*"TB"*/, v7);
    sub_B16FFC(&StringLiteral_2210/*"B"*/, v8);
    sub_B16FFC(&StringLiteral_8679/*"MB"*/, v9);
    sub_B16FFC(&StringLiteral_6813/*"GB"*/, v10);
    byte_40FCA4D = 1;
  }
  v11 = sub_B17014(string___TypeInfo, 5LL, v3);
  if ( !v11 )
    sub_B170D4();
  v18 = v11;
  v19 = (Il2CppObject *)StringLiteral_2210/*"B"*/;
  if ( StringLiteral_2210/*"B"*/ )
  {
    v19 = (Il2CppObject *)sub_B170BC(StringLiteral_2210/*"B"*/, *(_QWORD *)(*(_QWORD *)v18 + 64LL));
    if ( !v19 )
      goto LABEL_35;
    v20 = (System_Int32_array **)StringLiteral_2210/*"B"*/;
  }
  else
  {
    v20 = 0LL;
  }
  if ( !*(_DWORD *)(v18 + 24) )
    goto LABEL_34;
  *(_QWORD *)(v18 + 32) = v20;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 32), v20, v12, v13, v14, v15, v16, v17);
  v19 = (Il2CppObject *)StringLiteral_8290/*"KB"*/;
  if ( StringLiteral_8290/*"KB"*/ )
  {
    v19 = (Il2CppObject *)sub_B170BC(StringLiteral_8290/*"KB"*/, *(_QWORD *)(*(_QWORD *)v18 + 64LL));
    if ( !v19 )
      goto LABEL_35;
    v20 = (System_Int32_array **)StringLiteral_8290/*"KB"*/;
  }
  else
  {
    v20 = 0LL;
  }
  if ( *(_DWORD *)(v18 + 24) <= 1u )
    goto LABEL_34;
  *(_QWORD *)(v18 + 40) = v20;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 40), v20, v12, v21, v22, v23, v24, v25);
  v19 = (Il2CppObject *)StringLiteral_8679/*"MB"*/;
  if ( StringLiteral_8679/*"MB"*/ )
  {
    v19 = (Il2CppObject *)sub_B170BC(StringLiteral_8679/*"MB"*/, *(_QWORD *)(*(_QWORD *)v18 + 64LL));
    if ( !v19 )
      goto LABEL_35;
    v20 = (System_Int32_array **)StringLiteral_8679/*"MB"*/;
  }
  else
  {
    v20 = 0LL;
  }
  if ( *(_DWORD *)(v18 + 24) <= 2u )
    goto LABEL_34;
  *(_QWORD *)(v18 + 48) = v20;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 48), v20, v12, v26, v27, v28, v29, v30);
  v19 = (Il2CppObject *)StringLiteral_6813/*"GB"*/;
  if ( StringLiteral_6813/*"GB"*/ )
  {
    v19 = (Il2CppObject *)sub_B170BC(StringLiteral_6813/*"GB"*/, *(_QWORD *)(*(_QWORD *)v18 + 64LL));
    if ( !v19 )
      goto LABEL_35;
    v20 = (System_Int32_array **)StringLiteral_6813/*"GB"*/;
  }
  else
  {
    v20 = 0LL;
  }
  if ( *(_DWORD *)(v18 + 24) <= 3u )
    goto LABEL_34;
  *(_QWORD *)(v18 + 56) = v20;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 56), v20, v12, v31, v32, v33, v34, v35);
  v19 = (Il2CppObject *)StringLiteral_13281/*"TB"*/;
  if ( !StringLiteral_13281/*"TB"*/ )
  {
    v20 = 0LL;
    goto LABEL_28;
  }
  v19 = (Il2CppObject *)sub_B170BC(StringLiteral_13281/*"TB"*/, *(_QWORD *)(*(_QWORD *)v18 + 64LL));
  if ( !v19 )
  {
LABEL_35:
    sub_B170F4(v19);
    sub_B170A0();
  }
  v20 = (System_Int32_array **)StringLiteral_13281/*"TB"*/;
LABEL_28:
  if ( *(_DWORD *)(v18 + 24) <= 4u )
    goto LABEL_34;
  *(_QWORD *)(v18 + 64) = v20;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 64), v20, v12, v36, v37, v38, v39, v40);
  v41 = *(double *)&format.klass;
  v42 = -1;
  do
  {
    if ( v41 < 1000.0 )
      break;
    ++v42;
    v41 = v41 / 1000.0;
    *(double *)&format.klass = v41;
  }
  while ( v42 <= 2 );
  v43 = v42 + 1;
  v19 = (Il2CppObject *)System_Double__ToString_43691524(v41, &format, (const MethodInfo *)StringLiteral_9237/*"N2"*/);
  if ( v43 >= *(_DWORD *)(v18 + 24) )
  {
LABEL_34:
    sub_B17100(v19, v20, v12);
    sub_B170A0();
  }
  return System_String__Format_43739268(
           (System_String_o *)StringLiteral_23557/*"{0}{1}"*/,
           v19,
           *(Il2CppObject **)(v18 + 8LL * (int)v43 + 32),
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
  AssetManager_c *klass; // x0
  int64_t downloadSize; // x8
  int v14; // w8
  int v15; // w9
  struct System_Collections_Generic_Dictionary_string__AssetData__o *assetBundleReleaseDic; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  int v18; // w20
  int v19; // w8
  struct System_String_o *requestConfigWriteData; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *v21; // x0
  int v22; // w20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v23; // [xsp+8h] [xbp-98h] BYREF
  int v24[3]; // [xsp+20h] [xbp-80h]
  int v25; // [xsp+2Ch] [xbp-74h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v26; // [xsp+30h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v27; // [xsp+50h] [xbp-50h] BYREF

  if ( (byte_40FCA47 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, method);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v3);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__, v5);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v6);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v7);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v11);
    byte_40FCA47 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  memset(&v26, 0, sizeof(v26));
  v25 = 0;
  klass = this[1].klass;
  if ( !klass )
    goto LABEL_28;
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___GetEnumerator(
    (System_Collections_Generic_Queue_Enumerator_T__o *)&v23,
    (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)klass,
    (const MethodInfo_2B1656C *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  v27 = v23;
  while ( System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___MoveNext(
            (System_Collections_Generic_Queue_Enumerator_T__o *)&v27,
            (const MethodInfo_2074268 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__) )
  {
    if ( !System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___get_Current(
            (System_Collections_Generic_Queue_Enumerator_T__o *)&v27,
            (const MethodInfo_207436C *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__) )
      sub_B170D4();
  }
  v24[0] = 52;
  v25 = 1;
  System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus___Dispose(
    (System_Collections_Generic_Queue_Enumerator_T__o *)&v27,
    (const MethodInfo_2074258 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  v25 = 0;
  downloadSize = this->fields.downloadSize;
  if ( !downloadSize )
    goto LABEL_28;
  v14 = *(_DWORD *)(downloadSize + 24);
  v15 = -1;
  do
    ++v15;
  while ( v15 < v14 );
  assetBundleReleaseDic = this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_28;
  Values = System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)assetBundleReleaseDic,
             (const MethodInfo_2DA39BC *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !Values )
    goto LABEL_28;
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v23,
    Values,
    (const MethodInfo_22866D8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v26 = v23;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v26,
            (const MethodInfo_26BE610 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__) )
  {
    if ( !v26.fields.currentValue )
      sub_B170D4();
  }
  v24[0] = 131;
  v18 = ++v25;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v26,
    (const MethodInfo_26BE60C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  if ( v18 )
  {
    v19 = v18 - 1;
    if ( v24[v18 - 1] == 131 )
    {
      --v18;
      v25 = v19;
    }
  }
  requestConfigWriteData = this->fields.requestConfigWriteData;
  if ( !requestConfigWriteData
    || (v21 = System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)requestConfigWriteData,
                (const MethodInfo_2DA39BC *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
LABEL_28:
    sub_B170D4();
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v23,
    v21,
    (const MethodInfo_22866D8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v26 = v23;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v26,
            (const MethodInfo_26BE610 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__) )
    ;
  v24[v18] = 183;
  v22 = ++v25;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v26,
    (const MethodInfo_26BE60C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  if ( v22 && v24[v22 - 1] == 183 )
    v25 = v22 - 1;
}


System_Collections_IEnumerator_o *__fastcall AssetManager__DelayLoadStart(
        AssetManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FCA63 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager__DelayLoadStart_d__148_TypeInfo, method);
    byte_40FCA63 = 1;
  }
  v6 = sub_B170CC(AssetManager__DelayLoadStart_d__148_TypeInfo, method, v2, v3, v4);
  AssetManager__DelayLoadStart_d__148___ctor((AssetManager__DelayLoadStart_d__148_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall AssetManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  AssetManager_c *v2; // x0

  if ( (byte_40FCA19 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, v1);
    byte_40FCA19 = 1;
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
        AssetManager__AddLoadWaitStatus_29969472(this, AssetData, callbackFunc, 0LL, v12);
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
  struct System_Collections_Generic_Dictionary_string__AssetData__o *assetBundleReleaseDic; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  const MethodInfo *v13; // x2
  AssetData_o *currentValue; // x22
  int monitor; // w8
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v18; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FCA4E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, attrib);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v7);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v8);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v10);
    byte_40FCA4E = 1;
  }
  memset(&v18, 0, sizeof(v18));
  assetBundleReleaseDic = this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic
    || (Values = System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                   (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)assetBundleReleaseDic,
                   (const MethodInfo_2DA39BC *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
    sub_B170D4();
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v18,
    Values,
    (const MethodInfo_22866D8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v18,
            (const MethodInfo_26BE610 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__) )
  {
    currentValue = (AssetData_o *)v18.fields.currentValue;
    if ( !v18.fields.currentValue )
      sub_B170D4();
    monitor = (int)v18.fields.currentValue[2].monitor;
    if ( monitor < 1 || monitor == HIDWORD(v18.fields.currentValue[2].monitor) )
    {
      if ( System_String__op_Equality(attrib, (System_String_o *)v18.fields.currentValue[2].klass, 0LL)
        && currentValue->fields.nowVersion != currentValue->fields.newVersion )
      {
        AssetManager__AddLoadWaitStatus_29959396(this, currentValue, v16);
      }
    }
    else
    {
      AssetManager__AddLoadWaitStatus_29959396(this, (AssetData_o *)v18.fields.currentValue, v13);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v18,
    (const MethodInfo_26BE60C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  HIDWORD(this->fields.unloadCallbacks) = loadParallelMax;
  AssetManager__LoadStart(this, v17);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall AssetManager__DownloadAssetStorageAttributeWithCheckDialog(
        AssetManager_o *this,
        System_String_o *attrib,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x22
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

  if ( (byte_40FCA4C & 1) == 0 )
  {
    sub_B16FFC(&AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_TypeInfo, attrib);
    byte_40FCA4C = 1;
  }
  v8 = sub_B170CC(
         AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_TypeInfo,
         attrib,
         *(_QWORD *)&loadParallelMax,
         method,
         v4);
  AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117___ctor(
    (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_o *)v8,
    0,
    0LL);
  if ( !v8 )
    sub_B170D4();
  *(_QWORD *)(v8 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v8 + 40) = attrib;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 40), (System_Int32_array **)attrib, v15, v16, v17, v18, v19, v20);
  *(_DWORD *)(v8 + 56) = loadParallelMax;
  return (System_Collections_IEnumerator_o *)v8;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetManager__DownloadAssetStorageAttribute_29962196(
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *assetBundleReleaseDic; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  const MethodInfo *v19; // x2
  AssetData_o *currentValue; // x22
  int monitor; // w8
  int monitor_high; // w9
  __int64 v23; // x8
  unsigned __int64 v24; // x25
  signed __int64 v25; // x26
  _BOOL8 v26; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v30; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v31; // [xsp+20h] [xbp-60h] BYREF

  v6 = this;
  if ( (byte_40FCA4F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, attribList);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v7);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v8);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v10);
    this = (AssetManager_o *)sub_B16FFC(&StringLiteral_700/*", "*/, v11);
    byte_40FCA4F = 1;
  }
  memset(&v31, 0, sizeof(v31));
  if ( !attribList )
LABEL_33:
    sub_B170D4();
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
        this = (AssetManager_o *)System_String__Concat_43746016(
                                   v13,
                                   (System_String_o *)StringLiteral_700/*", "*/,
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
    sub_B17100(this, attribList, *(_QWORD *)&loadParallelMax);
    sub_B170A0();
  }
LABEL_14:
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)v6->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_33;
  Values = System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
             assetBundleReleaseDic,
             (const MethodInfo_2DA39BC *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !Values )
    goto LABEL_33;
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v30,
    Values,
    (const MethodInfo_22866D8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v31 = v30;
LABEL_17:
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v31,
            (const MethodInfo_26BE610 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__) )
  {
    currentValue = (AssetData_o *)v31.fields.currentValue;
    if ( !v31.fields.currentValue )
      sub_B170D4();
    monitor = (int)v31.fields.currentValue[2].monitor;
    monitor_high = HIDWORD(v31.fields.currentValue[2].monitor);
    if ( monitor < 1 )
    {
      if ( monitor != monitor_high )
      {
        v23 = *(_QWORD *)&attribList->max_length;
        if ( (int)v23 >= 1 )
        {
          v24 = 0LL;
          v25 = (int)v23;
          while ( 1 )
          {
            v26 = System_String__op_Equality(attribList->m_Items[v24], currentValue->fields.attrib, 0LL);
            if ( v26 )
              break;
            if ( (__int64)++v24 >= v25 )
              goto LABEL_17;
            if ( v24 >= attribList->max_length )
            {
              sub_B17100(v26, v27, v28);
              sub_B170A0();
            }
          }
          AssetManager__AddLoadWaitStatus_29959396(v6, currentValue, v28);
        }
      }
    }
    else if ( monitor != monitor_high )
    {
      AssetManager__AddLoadWaitStatus_29959396(v6, (AssetData_o *)v31.fields.currentValue, v19);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v31,
    (const MethodInfo_26BE60C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  HIDWORD(v6->fields.unloadCallbacks) = loadParallelMax;
  AssetManager__LoadStart(v6, v29);
}


bool __fastcall AssetManager__DownloadAssetStorage_29952164(
        AssetManager_o *this,
        System_String_array *nameList,
        System_Action_o *callbackFunc,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  __int64 v5; // x8
  System_String_array *v8; // x22
  AssetManager_o *v9; // x20
  unsigned __int64 v10; // x23
  bool v11; // w25
  int v12; // w8
  const MethodInfo *v13; // x1

  if ( !nameList )
    sub_B170D4();
  v5 = *(_QWORD *)&nameList->max_length;
  v8 = nameList;
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
        sub_B17100(this, nameList, callbackFunc);
        sub_B170A0();
      }
      nameList = (System_String_array *)v8->m_Items[v10];
      if ( nameList )
      {
        if ( v11 )
        {
          this = (AssetManager_o *)AssetManager__DownloadAssetStorage(v9, (System_String_o *)nameList, 0LL, 1, method);
          v12 = (unsigned __int8)this & 1;
        }
        else
        {
          v12 = 0;
        }
        v11 = v12 != 0;
      }
      LODWORD(v5) = v8->max_length;
      ++v10;
    }
    while ( (__int64)v10 < (int)v5 );
  }
  AssetManager__AddLoadWaitStatus(v9, callbackFunc, (const MethodInfo *)callbackFunc);
  HIDWORD(v9->fields.unloadCallbacks) = loadParallelMax;
  AssetManager__LoadStart(v9, v13);
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

  if ( (byte_40FCA6A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AssetData__TryGetValue__, dic);
    byte_40FCA6A = 1;
  }
  value = 0LL;
  if ( !name )
    return 0LL;
  if ( !dic )
    sub_B170D4();
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dic,
         (System_Xml_XmlQualifiedName_o *)name,
         &value,
         (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__AssetData__TryGetValue__) )
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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x19
  struct System_Collections_Generic_Dictionary_string__AssetData__o *assetBundleReleaseDic; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  Il2CppObject *currentValue; // x23
  System_String_o *monitor; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v25; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v26; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FCA51 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, path);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v5);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v6);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__ToArray__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v12);
    sub_B16FFC(&StringLiteral_871/*"/"*/, v13);
    byte_40FCA51 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v14 = System_String__Concat_43743732(path, (System_String_o *)StringLiteral_871/*"/"*/, 0LL);
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v15,
                                                                                                  v16,
                                                                                                  v17,
                                                                                                  v18);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  assetBundleReleaseDic = this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_17;
  Values = System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)assetBundleReleaseDic,
             (const MethodInfo_2DA39BC *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !Values )
    goto LABEL_17;
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v25,
    Values,
    (const MethodInfo_22866D8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v26,
            (const MethodInfo_26BE610 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__) )
  {
    currentValue = v26.fields.currentValue;
    if ( !v26.fields.currentValue )
      sub_B170D4();
    monitor = (System_String_o *)v26.fields.currentValue[1].monitor;
    if ( !monitor )
      sub_B170D4();
    if ( System_String__StartsWith(monitor, v14, 0LL) )
    {
      if ( !v19 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v19,
        (EventMissionProgressRequest_Argument_ProgressData_o *)currentValue[1].monitor,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v26,
    (const MethodInfo_26BE60C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  if ( !v19 )
LABEL_17:
    sub_B170D4();
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v19,
                                  (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_string__ToArray__);
}


AssetData_array *__fastcall AssetManager__GetAssetStorage_29955284(
        AssetManager_o *this,
        System_String_array *nameList,
        const MethodInfo *method)
{
  AssetManager_o *AssetData; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  const MethodInfo *v8; // x3
  __int64 v9; // x8
  AssetData_array *v10; // x21
  unsigned __int64 v11; // x24
  BattleServantConfConponent_o *p_DispLog; // x22
  System_Int32_array **v13; // x23
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_40FCA6B & 1) == 0 )
  {
    sub_B16FFC(&AssetData___TypeInfo, nameList);
    byte_40FCA6B = 1;
  }
  if ( !nameList )
LABEL_17:
    sub_B170D4();
  AssetData = (AssetManager_o *)sub_B17014(AssetData___TypeInfo, nameList->max_length, method);
  v9 = *(_QWORD *)&nameList->max_length;
  v10 = (AssetData_array *)AssetData;
  if ( (int)v9 >= 1 )
  {
    v11 = 0LL;
    p_DispLog = (BattleServantConfConponent_o *)&AssetData->fields._DispLog;
    while ( v11 < (unsigned int)v9 )
    {
      v7 = nameList->m_Items[v11];
      if ( v7 )
      {
        AssetData = (AssetManager_o *)AssetManager__GetAssetData(AssetData, this->fields.assetBundleReleaseDic, v7, v8);
        if ( AssetData )
        {
          v13 = (System_Int32_array **)AssetData;
          if ( AssetData->fields.requestConfigWriteData )
          {
            if ( !v10 )
              goto LABEL_17;
            AssetData = (AssetManager_o *)sub_B170BC(AssetData, v10->obj.klass->_1.element_class);
            if ( !AssetData )
            {
              sub_B170F4(0LL);
              sub_B170A0();
            }
            if ( v11 >= v10->max_length )
              break;
            p_DispLog->klass = (BattleServantConfConponent_c *)v13;
            sub_B16F98(p_DispLog, v13, (System_String_array **)v7, v14, v15, v16, v17, v18);
          }
        }
      }
      LODWORD(v9) = nameList->max_length;
      ++v11;
      p_DispLog = (BattleServantConfConponent_o *)((char *)p_DispLog + 8);
      if ( (__int64)v11 >= (int)v9 )
        return v10;
    }
    sub_B17100(AssetData, v6, v7);
    sub_B170A0();
  }
  return v10;
}


bool __fastcall AssetManager__GetAssetStorage_29955772(
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


bool __fastcall AssetManager__GetAsset_29946228(
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


bool __fastcall AssetManager__GetAsset_29946528(
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


AssetData_o *__fastcall AssetManager__GetAsset_29970360(
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

  if ( (byte_40FCA23 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, v1);
    byte_40FCA23 = 1;
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
  __int64 v3; // x1
  int64_t downloadSize; // x22
  int64_t v5; // x20
  __int64 v6; // x21
  int v7; // w8
  AssetLoader_o *v8; // x0
  int32_t LoadSize; // w0

  if ( (byte_40FCA50 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v3);
    byte_40FCA50 = 1;
  }
  downloadSize = this->fields.downloadSize;
  if ( !downloadSize )
LABEL_10:
    sub_B170D4();
  v5 = *(_QWORD *)&this->fields.isErrorDialog;
  v6 = 0LL;
  while ( 1 )
  {
    v7 = *(_DWORD *)(downloadSize + 24);
    if ( (int)v6 >= v7 )
      return v5;
    if ( v7 <= (unsigned int)v6 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v8 = *(AssetLoader_o **)(*(_QWORD *)(downloadSize + 16) + 8 * v6 + 32);
    if ( v8 )
    {
      LoadSize = AssetLoader__get_LoadSize(v8, method);
      downloadSize = this->fields.downloadSize;
      v5 -= LoadSize;
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

  if ( (byte_40FCA22 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, v1);
    byte_40FCA22 = 1;
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FCA55 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager__InitCR_d__130_TypeInfo, method);
    byte_40FCA55 = 1;
  }
  v6 = sub_B170CC(AssetManager__InitCR_d__130_TypeInfo, method, v2, v3, v4);
  AssetManager__InitCR_d__130___ctor((AssetManager__InitCR_d__130_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
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
  struct System_Collections_Generic_Dictionary_string__AssetData__o *assetResourceDic; // x0
  struct System_Collections_Generic_Dictionary_string__AssetData__o *assetBundleReleaseDic; // x0
  struct System_Collections_Generic_Dictionary_string__AssetData__o *v25; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  char v27; // w23
  const MethodInfo *v28; // x1
  struct System_Collections_Generic_Dictionary_string__AssetData__o *v29; // x0
  int v30; // w20
  struct System_String_o *requestConfigWriteData; // x0
  const MethodInfo *v32; // x2
  struct System_String_o *v33; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *v34; // x0
  const MethodInfo *v35; // x1
  int v36; // w23
  struct System_String_o *v37; // x0
  int64_t downloadSize; // x20
  signed __int64 v39; // x8
  unsigned __int64 v40; // x21
  UnityEngine_Object_o *v41; // x20
  AssetManager_c *klass; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **Path; // x20
  AssetManager_c *v50; // x8
  struct AssetManager_StaticFields *static_fields; // x0
  const MethodInfo *v52; // x1
  struct AssetManager_StaticFields *v53; // x8
  System_String_o *cachePathName; // x20
  System_String_o *configFileName; // x21
  System_String_o *v56; // x0
  System_Int32_array **v57; // x0
  struct AssetManager_StaticFields *v58; // x8
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  struct AssetManager_StaticFields *v65; // x8
  System_String_o *v66; // x20
  const MethodInfo *v67; // x1
  System_String_o *v68; // x0
  System_Int32_array **v69; // x0
  struct AssetManager_StaticFields *v70; // x8
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  struct AssetManager_StaticFields *v77; // x8
  System_String_o *v78; // x20
  const MethodInfo *v79; // x1
  System_String_o *v80; // x0
  System_Int32_array **v81; // x0
  struct AssetManager_StaticFields *v82; // x8
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v89; // [xsp+8h] [xbp-78h] BYREF
  int v90[2]; // [xsp+20h] [xbp-60h]
  int v91; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o i; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_40FCA49 & 1) == 0 )
  {
    sub_B16FFC(&AndroidUtil_TypeInfo, method);
    sub_B16FFC(&AssetManager_TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, v6);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v7);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v8);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_AssetLoader__Clear__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v15);
    byte_40FCA49 = 1;
  }
  memset(&i, 0, sizeof(i));
  v91 = 0;
  assetBundleDic = (System_Collections_IEnumerator_o *)this->fields.assetBundleDic;
  if ( assetBundleDic )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, assetBundleDic, 0LL);
    this->fields.assetBundleDic = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.assetBundleDic, 0LL, v17, v18, v19, v20, v21, v22);
  }
  assetResourceDic = this->fields.assetResourceDic;
  if ( !assetResourceDic )
    goto LABEL_52;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)assetResourceDic,
    (const MethodInfo_2DA3DF4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
  assetBundleReleaseDic = this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_52;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)assetBundleReleaseDic,
         (const MethodInfo_2DA3814 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) < 1 )
  {
    v30 = 0;
  }
  else
  {
    v25 = this->fields.assetBundleReleaseDic;
    if ( !v25 )
      goto LABEL_52;
    Values = System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
               (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)v25,
               (const MethodInfo_2DA39BC *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    if ( !Values )
      goto LABEL_52;
    System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
      &v89,
      Values,
      (const MethodInfo_22866D8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    v27 = 0;
    for ( i = v89;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &i,
            (const MethodInfo_26BE610 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
          v27 |= AssetData__ReleaseData((AssetData_o *)i.fields.currentValue, v28) )
    {
      if ( !i.fields.currentValue )
        sub_B170D4();
    }
    v90[0] = 115;
    v91 = 1;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
      &i,
      (const MethodInfo_26BE60C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    v91 = 0;
    v29 = this->fields.assetBundleReleaseDic;
    if ( !v29 )
      goto LABEL_52;
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v29,
      (const MethodInfo_2DA3DF4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
    v30 = v27 != 0;
  }
  requestConfigWriteData = this->fields.requestConfigWriteData;
  if ( !requestConfigWriteData )
    goto LABEL_52;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)requestConfigWriteData,
         (const MethodInfo_2DA3814 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) < 1 )
  {
    if ( !v30 )
      goto LABEL_31;
    goto LABEL_30;
  }
  v33 = this->fields.requestConfigWriteData;
  if ( !v33 )
    goto LABEL_52;
  v34 = System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)v33,
          (const MethodInfo_2DA39BC *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !v34 )
    goto LABEL_52;
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v89,
    v34,
    (const MethodInfo_22866D8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  for ( i = v89;
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
          &i,
          (const MethodInfo_26BE610 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
        v30 |= AssetData__ReleaseData((AssetData_o *)i.fields.currentValue, v35) )
  {
    if ( !i.fields.currentValue )
      sub_B170D4();
  }
  v90[0] = 201;
  v36 = ++v91;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &i,
    (const MethodInfo_26BE60C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  if ( v36 && v90[v36 - 1] == 201 )
    v91 = v36 - 1;
  v37 = this->fields.requestConfigWriteData;
  if ( !v37 )
    goto LABEL_52;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v37,
    (const MethodInfo_2DA3DF4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
  if ( (v30 & 1) != 0 )
LABEL_30:
    AssetManager__RequestUnloadUnusedAssets(this, 0LL, v32);
LABEL_31:
  downloadSize = this->fields.downloadSize;
  if ( !downloadSize )
    goto LABEL_52;
  LODWORD(v39) = *(_DWORD *)(downloadSize + 24);
  if ( (int)v39 >= 1 )
  {
    v40 = 0LL;
    do
    {
      if ( v40 >= (unsigned int)v39 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v41 = *(UnityEngine_Object_o **)(*(_QWORD *)(downloadSize + 16) + 8 * v40 + 32);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v41, 0LL);
      downloadSize = this->fields.downloadSize;
      if ( !downloadSize )
        goto LABEL_52;
      v39 = *(int *)(downloadSize + 24);
      ++v40;
    }
    while ( (__int64)v40 < v39 );
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.downloadSize,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_AssetLoader__Clear__);
  }
  klass = this[1].klass;
  if ( !klass )
LABEL_52:
    sub_B170D4();
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___Clear(
    (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)klass,
    (const MethodInfo_2B16138 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__);
  *(_QWORD *)&this->fields.isErrorDialog = 0LL;
  BYTE2(this->fields.writeRequestThread) = 0;
  Path = (System_Int32_array **)AssetStorageCache__GetPath(0LL);
  v50 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v50 = AssetManager_TypeInfo;
  }
  static_fields = v50->static_fields;
  static_fields->cachePathName = (struct System_String_o *)Path;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->cachePathName, Path, v43, v44, v45, v46, v47, v48);
  v53 = AssetManager_TypeInfo->static_fields;
  cachePathName = v53->cachePathName;
  configFileName = v53->configFileName;
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  v56 = AndroidUtil__ConvertFileNameIfNeed(configFileName, v52);
  v57 = (System_Int32_array **)System_String__Concat_43743732(cachePathName, v56, 0LL);
  v58 = AssetManager_TypeInfo->static_fields;
  v58->cacheListFileName = (struct System_String_o *)v57;
  sub_B16F98((BattleServantConfConponent_o *)&v58->cacheListFileName, v57, v59, v60, v61, v62, v63, v64);
  v65 = AssetManager_TypeInfo->static_fields;
  v66 = v65->cachePathName;
  v68 = AndroidUtil__ConvertFileNameIfNeed(v65->createConfigFileName, v67);
  v69 = (System_Int32_array **)System_String__Concat_43743732(v66, v68, 0LL);
  v70 = AssetManager_TypeInfo->static_fields;
  v70->createCacheListFileName = (struct System_String_o *)v69;
  sub_B16F98((BattleServantConfConponent_o *)&v70->createCacheListFileName, v69, v71, v72, v73, v74, v75, v76);
  v77 = AssetManager_TypeInfo->static_fields;
  v78 = v77->cachePathName;
  v80 = AndroidUtil__ConvertFileNameIfNeed(v77->backConfigFileName, v79);
  v81 = (System_Int32_array **)System_String__Concat_43743732(v78, v80, 0LL);
  v82 = AssetManager_TypeInfo->static_fields;
  v82->backCacheListFileName = (struct System_String_o *)v81;
  sub_B16F98((BattleServantConfConponent_o *)&v82->backCacheListFileName, v81, v83, v84, v85, v86, v87, v88);
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
    sub_B16F98((BattleServantConfConponent_o *)p_assetBundleDic, (System_Int32_array **)inited, v5, v6, v7, v8, v9, v10);
    UnityEngine_MonoBehaviour__StartCoroutine_34804316(
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

  if ( (byte_40FCA66 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__, name);
    byte_40FCA66 = 1;
  }
  assetBundleReleaseDic = this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
    sub_B170D4();
  return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)assetBundleReleaseDic,
           (System_Xml_XmlQualifiedName_o *)name,
           (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__);
}


bool __fastcall AssetManager__IsExistAssetStorage_29948692(
        AssetManager_o *this,
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v3; // x8
  System_String_array *v4; // x19
  AssetManager_o *v5; // x20
  unsigned __int64 v6; // x21

  if ( !nameList )
    sub_B170D4();
  v3 = *(_QWORD *)&nameList->max_length;
  v4 = nameList;
  if ( (int)v3 < 1 )
    return 1;
  v5 = this;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v3 )
    {
      sub_B17100(this, nameList, method);
      sub_B170A0();
    }
    nameList = (System_String_array *)v4->m_Items[v6];
    if ( nameList )
    {
      this = (AssetManager_o *)AssetManager__IsExistAssetStorage(v5, (System_String_o *)nameList, method);
      if ( ((unsigned __int8)this & 1) == 0 )
        break;
    }
    LODWORD(v3) = v4->max_length;
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


bool __fastcall AssetManager__IsNeedDownload_29949252(
        AssetManager_o *this,
        System_String_array *nameList,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v4; // x8
  AssetManager_o *v6; // x20
  unsigned __int64 v7; // x21

  if ( !nameList )
    sub_B170D4();
  v4 = *(_QWORD *)&nameList->max_length;
  if ( (int)v4 < 1 )
    return 0;
  v6 = this;
  v7 = 0LL;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v4 )
    {
      sub_B17100(this, nameList, method);
      sub_B170A0();
    }
    method = (const MethodInfo *)nameList->m_Items[v7];
    if ( method )
    {
      this = (AssetManager_o *)AssetManager__GetAssetData(
                                 this,
                                 v6->fields.assetBundleReleaseDic,
                                 (System_String_o *)method,
                                 v3);
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
  struct System_Collections_Generic_Dictionary_string__AssetData__o *assetResourceDic; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  int v24; // w21
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x2
  struct System_Collections_Generic_Dictionary_string__AssetData__o *v27; // x0
  float v28; // s0
  System_String_o *Path; // x20
  __int64 v30; // x1
  int64_t FreeSize; // x20
  ManagerConfig_c *v32; // x0
  AssetManager_c *v33; // x0
  AssetManager_c *v34; // x0
  AssetManager_c *v35; // x0
  System_String_o *createCacheListFileName; // x20
  System_Text_Encoding_o *UTF8; // x22
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  System_IO_StreamWriter_o *v42; // x21
  AssetManager_c *v43; // x0
  AssetManager_c *v44; // x0
  AssetManager_c *v45; // x0
  AssetManager_c *v46; // x0
  System_Int32_array **v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  System_IO_IOException_o *v59; // x20
  __int64 v60; // x1
  System_String_o *v61; // x0
  __int64 v62; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v63; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v64; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_40FCA5A & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetManager_OnClickRetryDialog__, method);
    sub_B16FFC(&AssetManager_TypeInfo, v3);
    sub_B16FFC(&ErrorDialog_ClickDelegate_TypeInfo, v4);
    sub_B16FFC(&CommonServicePluginScript_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, v7);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v8);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v9);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v10);
    sub_B16FFC(&LocalizationManager_TypeInfo, v11);
    sub_B16FFC(&ManagementManager_TypeInfo, v12);
    sub_B16FFC(&ManagerConfig_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_B16FFC(&System_IO_StreamWriter_TypeInfo, v15);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v16);
    sub_B16FFC(&StringLiteral_1743/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, v17);
    sub_B16FFC(&StringLiteral_15682/*"[FFFF80]Download error for debug"*/, v18);
    sub_B16FFC(&StringLiteral_11549/*"SCRIPT"*/, v19);
    sub_B16FFC(&StringLiteral_1744/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, v20);
    sub_B16FFC(&StringLiteral_1/*""*/, v21);
    byte_40FCA5A = 1;
  }
  memset(&v64, 0, sizeof(v64));
  assetResourceDic = this->fields.assetResourceDic;
  if ( !assetResourceDic )
    goto LABEL_58;
  Values = System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)assetResourceDic,
             (const MethodInfo_2DA39BC *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !Values )
    goto LABEL_58;
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v63,
    Values,
    (const MethodInfo_22866D8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v24 = 0;
  v64 = v63;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v64,
            (const MethodInfo_26BE610 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__) )
  {
    if ( !v64.fields.currentValue )
      sub_B170D4();
    if ( !HIDWORD(v64.fields.currentValue[5].klass) && v64.fields.currentValue[4].monitor )
      v24 |= AssetData__ReleaseData((AssetData_o *)v64.fields.currentValue, v25);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v64,
    (const MethodInfo_26BE60C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  if ( (v24 & 1) != 0 )
    AssetManager__RequestUnloadUnusedAssets(this, 0LL, v26);
  v27 = this->fields.assetResourceDic;
  if ( !v27 )
LABEL_58:
    sub_B170D4();
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v27,
    (const MethodInfo_2DA3DF4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
  if ( *(float *)&this->fields.processingAssetLoaderList >= 0.0 )
  {
    v28 = *(float *)&this->fields.processingAssetLoaderList - UnityEngine_Time__get_deltaTime(0LL);
    *(float *)&this->fields.processingAssetLoaderList = v28;
    if ( v28 <= 0.0 && !LOBYTE(this->fields.writeRequestThread) )
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
        v32 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v32 = ManagerConfig_TypeInfo;
        }
        if ( FreeSize < v32->static_fields->LIMIT_FREE_SIZE )
        {
          v54 = sub_B17000(&System_IO_IOException_TypeInfo, v30);
          v59 = (System_IO_IOException_o *)sub_B170CC(v54, v55, v56, v57, v58);
          v61 = (System_String_o *)sub_B17000(&StringLiteral_5301/*"Disk full"*/, v60);
          System_IO_IOException___ctor_38265584(v59, v61, 0LL);
          sub_B17000(&Method_AssetManager_LateUpdate__, v62);
          sub_B170A0();
        }
      }
      v33 = AssetManager_TypeInfo;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v33 = AssetManager_TypeInfo;
      }
      if ( System_IO_File__Exists(v33->static_fields->createCacheListFileName, 0LL) )
      {
        v34 = AssetManager_TypeInfo;
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v34 = AssetManager_TypeInfo;
        }
        System_IO_File__Delete(v34->static_fields->createCacheListFileName, 0LL);
      }
      v35 = AssetManager_TypeInfo;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v35 = AssetManager_TypeInfo;
      }
      createCacheListFileName = v35->static_fields->createCacheListFileName;
      UTF8 = System_Text_Encoding__get_UTF8(0LL);
      v42 = (System_IO_StreamWriter_o *)sub_B170CC(System_IO_StreamWriter_TypeInfo, v38, v39, v40, v41);
      System_IO_StreamWriter___ctor_43794204(v42, createCacheListFileName, 0, UTF8, 0LL);
      if ( !v42 )
        sub_B170D4();
      ((void (__fastcall *)(System_IO_StreamWriter_o *, _QWORD, Il2CppMethodPointer))v42->klass->vtable._16_Write.method)(
        v42,
        *(_QWORD *)&this->fields.requestWriteCounter,
        v42->klass->vtable._17_Write.methodPtr);
      ((void (__fastcall *)(System_IO_StreamWriter_o *, Il2CppMethodPointer))v42->klass->vtable._8_Close.method)(
        v42,
        v42->klass->vtable._9_Dispose.methodPtr);
      if ( System_IO_File__Exists(AssetManager_TypeInfo->static_fields->backCacheListFileName, 0LL) )
      {
        v43 = AssetManager_TypeInfo;
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v43 = AssetManager_TypeInfo;
        }
        System_IO_File__Delete(v43->static_fields->backCacheListFileName, 0LL);
      }
      v44 = AssetManager_TypeInfo;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v44 = AssetManager_TypeInfo;
      }
      if ( System_IO_File__Exists(v44->static_fields->cacheListFileName, 0LL) )
      {
        v45 = AssetManager_TypeInfo;
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v45 = AssetManager_TypeInfo;
        }
        System_IO_File__Move(v45->static_fields->cacheListFileName, v45->static_fields->backCacheListFileName, 0LL);
      }
      v46 = AssetManager_TypeInfo;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v46 = AssetManager_TypeInfo;
      }
      System_IO_File__Move(v46->static_fields->createCacheListFileName, v46->static_fields->cacheListFileName, 0LL);
      v47 = (System_Int32_array **)StringLiteral_1/*""*/;
      *(_QWORD *)&this->fields.requestWriteCounter = StringLiteral_1/*""*/;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.requestWriteCounter, v47, v48, v49, v50, v51, v52, v53);
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
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  int32_t entryCount; // w8
  AssetData_o *v13; // x20
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x1
  int32_t v16; // w8
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *requestConfigWriteData; // x0

  v5 = this;
  if ( (byte_40FCA6C & 1) == 0 )
  {
    sub_B16FFC(&AssetData_TypeInfo, name);
    this = (AssetManager_o *)sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AssetData__Add__, v6);
    byte_40FCA6C = 1;
  }
  AssetData = AssetManager__GetAssetData(
                this,
                (System_Collections_Generic_Dictionary_string__AssetData__o *)v5->fields.requestConfigWriteData,
                name,
                v3);
  if ( AssetData )
  {
    entryCount = AssetData->fields.entryCount;
    v13 = AssetData;
    if ( (entryCount & 0x80000000) == 0 )
      AssetData->fields.entryCount = entryCount + 1;
  }
  else
  {
    v13 = (AssetData_o *)sub_B170CC(AssetData_TypeInfo, v8, v9, v10, v11);
    AssetData___ctor(v13, 1, name, v14);
    if ( !v13 )
      goto LABEL_14;
    if ( !AssetData__SetResource(v13, v15) )
      return 0LL;
    v16 = v13->fields.entryCount;
    if ( (v16 & 0x80000000) == 0 )
      v13->fields.entryCount = v16 + 1;
    requestConfigWriteData = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v5->fields.requestConfigWriteData;
    if ( !requestConfigWriteData )
LABEL_14:
      sub_B170D4();
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
      requestConfigWriteData,
      (System_Xml_XmlQualifiedName_o *)name,
      (System_Xml_Schema_XmlSchemaObject_o *)v13,
      (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
  }
  return v13;
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
  const MethodInfo *v10; // x4
  AssetData_o *v11; // x23
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *assetResourceDic; // x0
  int32_t entryCount; // w8
  AssetLoader_LoadEndDataHandler_o *v14; // x0
  AssetData_o *v15; // x1
  _BOOL8 Status; // x0
  const MethodInfo *v17; // x3
  AssetData_o *v18; // x0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x4
  AssetData_o *v21; // x22
  int32_t v22; // w8
  const MethodInfo *v23; // x1
  int32_t v24; // w8

  v8 = this;
  if ( (byte_40FCA67 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__, name);
    byte_40FCA67 = 1;
  }
  if ( !name )
  {
    LOBYTE(v18) = 0;
    return (char)v18;
  }
  AssetData = AssetManager__GetAssetData(
                this,
                v8->fields.assetResourceDic,
                name,
                *(const MethodInfo **)&loadParallelMax);
  if ( AssetData )
  {
    v11 = AssetData;
    assetResourceDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v8->fields.assetResourceDic;
    if ( !assetResourceDic )
      sub_B170D4();
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
      assetResourceDic,
      (System_Xml_XmlQualifiedName_o *)name,
      (const MethodInfo_2DA5684 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
    if ( v11->fields.objectList )
    {
      entryCount = v11->fields.entryCount;
      if ( (entryCount & 0x80000000) == 0 )
        v11->fields.entryCount = entryCount + 1;
      if ( !callbackFunc )
        goto LABEL_20;
      v14 = callbackFunc;
      v15 = v11;
      goto LABEL_11;
    }
  }
  Status = AssetManager__AddEntryLoadStatus(v8, 0, name, callbackFunc, v10);
  if ( Status )
    goto LABEL_20;
  v18 = AssetManager__GetAssetData((AssetManager_o *)Status, v8->fields.assetBundleReleaseDic, name, v17);
  if ( !v18 )
    return (char)v18;
  v21 = v18;
  if ( !v18->fields.objectList )
  {
LABEL_17:
    v22 = v21->fields.entryCount;
    if ( (v22 & 0x80000000) == 0 )
      v21->fields.entryCount = v22 + 1;
    AssetManager__AddLoadWaitStatus_29969472(v8, v21, callbackFunc, 0LL, v20);
    HIDWORD(v8->fields.unloadCallbacks) = loadParallelMax;
    AssetManager__LoadStart(v8, v23);
    goto LABEL_20;
  }
  if ( v18->fields.isLoadResources )
  {
    AssetData__ReleaseData(v18, v19);
    goto LABEL_17;
  }
  v24 = v18->fields.entryCount;
  if ( (v24 & 0x80000000) == 0 )
    v18->fields.entryCount = v24 + 1;
  if ( !callbackFunc )
    goto LABEL_20;
  v14 = callbackFunc;
  v15 = v21;
LABEL_11:
  AssetLoader_LoadEndDataHandler__Invoke(v14, v15, 0LL);
LABEL_20:
  LOBYTE(v18) = 1;
  return (char)v18;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AssetManager__LoadAssetStorage_29954104(
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
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x23
  System_Collections_Generic_List_WarBoardManager_TaskList__o **v36; // x22
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v43; // x0
  __int64 AssetStorage; // x0
  __int64 v45; // x1
  const MethodInfo *v46; // x2
  __int64 v47; // x3
  const MethodInfo *v48; // x4
  __int64 v49; // x8
  int v50; // w26
  unsigned __int64 v51; // x27
  AssetLoader_LoadEndDataHandler_o **v52; // x23
  bool v53; // w25
  System_String_o *v54; // x24
  AssetLoader_LoadEndDataHandler_o *v55; // x25
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  const MethodInfo *v62; // x1

  if ( (byte_40FCA69 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string__AddRange__, nameList);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__IndexOf__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__RemoveRange__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Remove__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, v13);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v14);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v15);
    sub_B16FFC(&Method_AssetManager___c__DisplayClass168_0__LoadAssetStorage_b__0__, v16);
    sub_B16FFC(&AssetManager___c__DisplayClass168_0_TypeInfo, v17);
    byte_40FCA69 = 1;
  }
  v18 = sub_B170CC(
          AssetManager___c__DisplayClass168_0_TypeInfo,
          nameList,
          callbackFunc,
          *(_QWORD *)&loadParallelMax,
          method);
  AssetManager___c__DisplayClass168_0___ctor((AssetManager___c__DisplayClass168_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_32;
  *(_QWORD *)(v18 + 40) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 40), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v18 + 48) = callbackFunc;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v18 + 48),
    (System_Int32_array **)callbackFunc,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  *(_DWORD *)(v18 + 56) = loadParallelMax;
  v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v31,
                                                                                                  v32,
                                                                                                  v33,
                                                                                                  v34);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v35,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  v36 = (System_Collections_Generic_List_WarBoardManager_TaskList__o **)(v18 + 24);
  *(_QWORD *)(v18 + 24) = v35;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)v35, v37, v38, v39, v40, v41, v42);
  v43 = *(System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o **)(v18 + 24);
  if ( !v43
    || (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          v43,
          (System_Collections_Generic_IEnumerable_T__o *)nameList,
          (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_string__AddRange__),
        *(_DWORD *)(v18 + 16) = 0,
        *(_BYTE *)(v18 + 32) = 0,
        !nameList) )
  {
LABEL_32:
    sub_B170D4();
  }
  v49 = *(_QWORD *)&nameList->max_length;
  if ( (int)v49 >= 1 )
  {
    v50 = 0;
    v51 = 0LL;
    v52 = (AssetLoader_LoadEndDataHandler_o **)(v18 + 64);
    v53 = 1;
    while ( 1 )
    {
      if ( v51 >= (unsigned int)v49 )
      {
        sub_B17100(AssetStorage, v45, v46);
        sub_B170A0();
      }
      v54 = nameList->m_Items[v51];
      if ( !v54 )
      {
        if ( !*v36 )
          goto LABEL_32;
        AssetStorage = System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                         *v36,
                         0LL,
                         (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_string__Remove__);
        goto LABEL_23;
      }
      if ( !v53 )
        goto LABEL_22;
      v55 = *v52;
      if ( !*v52 )
      {
        v55 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(
                                                    AssetLoader_LoadEndDataHandler_TypeInfo,
                                                    v45,
                                                    v46,
                                                    v47,
                                                    v48);
        AssetLoader_LoadEndDataHandler___ctor(
          v55,
          (Il2CppObject *)v18,
          Method_AssetManager___c__DisplayClass168_0__LoadAssetStorage_b__0__,
          0LL);
        *(_QWORD *)(v18 + 64) = v55;
        sub_B16F98((BattleServantConfConponent_o *)(v18 + 64), (System_Int32_array **)v55, v56, v57, v58, v59, v60, v61);
      }
      if ( !this )
        goto LABEL_32;
      AssetStorage = AssetManager__LoadAssetStorage(this, v54, v55, *(_DWORD *)(v18 + 56), v48);
      if ( (AssetStorage & 1) == 0 )
        break;
      ++v50;
      v53 = 1;
LABEL_23:
      LODWORD(v49) = nameList->max_length;
      if ( (__int64)++v51 >= (int)v49 )
        goto LABEL_26;
    }
    if ( !*v36 )
      goto LABEL_32;
    AssetStorage = System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
                     *v36,
                     (WarBoardManager_TaskList_o *)v54,
                     (const MethodInfo_2F26D88 *)Method_System_Collections_Generic_List_string__IndexOf__);
    if ( (AssetStorage & 0x80000000) == 0 )
    {
      if ( !*v36 )
        goto LABEL_32;
      System_Collections_Generic_List_RegexCharClass_SingleRange___RemoveRange(
        (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)*v36,
        AssetStorage,
        (*v36)->fields._size - AssetStorage,
        (const MethodInfo_2F27A6C *)Method_System_Collections_Generic_List_string__RemoveRange__);
    }
LABEL_22:
    v53 = 0;
    goto LABEL_23;
  }
  v50 = 0;
  v53 = 1;
LABEL_26:
  if ( v50 < 1 || !*(_BYTE *)(v18 + 32) && *(_DWORD *)(v18 + 16) == v50 )
  {
    AssetManager__AddLoadWaitStatus(this, *(System_Action_o **)(v18 + 48), v46);
    HIDWORD(this->fields.unloadCallbacks) = *(_DWORD *)(v18 + 56);
    *(_BYTE *)(v18 + 32) = 1;
    AssetManager__LoadStart(this, v62);
  }
  return v53;
}


bool __fastcall AssetManager__LoadAsset_29970112(
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
  WebViewManager_o *v4; // x0
  struct System_String_o *errorMessage; // x8

  if ( (byte_40FCA48 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_40FCA48 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  if ( BYTE2(Instance->fields.webViewBase) )
  {
    v4 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( v4 )
    {
      errorMessage = v4->fields.errorMessage;
      if ( errorMessage )
        return SLODWORD(errorMessage[1].klass) > 0;
    }
LABEL_9:
    sub_B170D4();
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
  const MethodInfo *v19; // x4
  AssetData_o *v20; // x24
  struct System_Collections_Generic_Dictionary_string__AssetData__o *assetResourceDic; // x0
  int32_t entryCount; // w8
  AssetLoader_LoadEndDataHandler_o *v23; // x0
  AssetData_o *v24; // x1
  _BOOL8 Status; // x0
  const MethodInfo *v26; // x3
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  AssetData_o *v31; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x24
  _BOOL8 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  struct UnityEngine_Object_array *objectList; // x26
  __int64 v37; // x8
  unsigned __int64 v38; // x27
  int max_length; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *v40; // x25
  __int64 v41; // x23
  UnityEngine_Object_o *v42; // x0
  System_String_o *v43; // x0
  int32_t v44; // w9
  int size; // w8
  System_String_array *v46; // x0
  const MethodInfo *v47; // x4
  const MethodInfo *v48; // x1
  AssetData_o *v50; // [xsp+8h] [xbp-58h]

  if ( (byte_40FCA68 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__, name);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__AddRange__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__ToArray__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, v15);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v16);
    byte_40FCA68 = 1;
  }
  LOBYTE(v17) = 0;
  if ( name && resourceNames )
  {
    if ( *(_QWORD *)&resourceNames->max_length )
    {
      AssetData = AssetManager__GetAssetData(0LL, this->fields.assetResourceDic, name, (const MethodInfo *)callbackFunc);
      if ( AssetData )
      {
        v20 = AssetData;
        assetResourceDic = this->fields.assetResourceDic;
        if ( !assetResourceDic )
          goto LABEL_43;
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)assetResourceDic,
          (System_Xml_XmlQualifiedName_o *)name,
          (const MethodInfo_2DA5684 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
        if ( v20->fields.objectList )
        {
          entryCount = v20->fields.entryCount;
          if ( (entryCount & 0x80000000) == 0 )
            v20->fields.entryCount = entryCount + 1;
          if ( !callbackFunc )
            goto LABEL_39;
          v23 = callbackFunc;
          v24 = v20;
LABEL_13:
          AssetLoader_LoadEndDataHandler__Invoke(v23, v24, 0LL);
LABEL_39:
          LOBYTE(v17) = 1;
          return (char)v17;
        }
      }
      Status = AssetManager__AddEntryLoadStatus(this, 0, name, callbackFunc, v19);
      if ( Status )
        goto LABEL_39;
      v17 = AssetManager__GetAssetData((AssetManager_o *)Status, this->fields.assetBundleReleaseDic, name, v26);
      if ( v17 )
      {
        v31 = v17;
        v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_string__TypeInfo, v27, v28, v29, v30);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v32,
          (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
        objectList = v31->fields.objectList;
        if ( objectList )
        {
          v37 = *(_QWORD *)&resourceNames->max_length;
          v50 = v31;
          if ( (int)v37 >= 1 )
          {
            v38 = 0LL;
            while ( 1 )
            {
              if ( v38 >= (unsigned int)v37 )
                goto LABEL_44;
              max_length = objectList->max_length;
              v40 = (EventMissionProgressRequest_Argument_ProgressData_o *)resourceNames->m_Items[v38];
              if ( max_length >= 1 )
                break;
LABEL_27:
              if ( !v32 )
                goto LABEL_43;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v32,
                v40,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
LABEL_29:
              LODWORD(v37) = resourceNames->max_length;
              if ( (__int64)++v38 >= (int)v37 )
                goto LABEL_30;
            }
            v41 = 0LL;
            while ( (unsigned int)v41 < max_length )
            {
              v42 = objectList->m_Items[v41];
              if ( !v42 )
                goto LABEL_43;
              v43 = UnityEngine_Object__get_name(v42, 0LL);
              if ( !v40 )
                goto LABEL_43;
              v33 = System_String__Equals_43731072((System_String_o *)v40, v43, 0LL);
              if ( v33 )
                goto LABEL_29;
              max_length = objectList->max_length;
              if ( (int)++v41 >= max_length )
                goto LABEL_27;
            }
LABEL_44:
            sub_B17100(v33, v34, v35);
            sub_B170A0();
          }
LABEL_30:
          v31 = v50;
          if ( !v32 )
LABEL_43:
            sub_B170D4();
        }
        else
        {
          if ( !v32 )
            goto LABEL_43;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v32,
            (System_Collections_Generic_IEnumerable_T__o *)resourceNames,
            (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_string__AddRange__);
        }
        v44 = v31->fields.entryCount;
        size = v32->fields._size;
        if ( (v44 & 0x80000000) == 0 )
          v31->fields.entryCount = v44 + 1;
        if ( size >= 1 )
        {
          v46 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v32,
                                         (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_string__ToArray__);
          AssetManager__AddLoadWaitStatus_29969472(this, v31, callbackFunc, v46, v47);
          HIDWORD(this->fields.unloadCallbacks) = loadParallelMax;
          AssetManager__LoadStart(this, v48);
          goto LABEL_39;
        }
        if ( !callbackFunc )
          goto LABEL_39;
        v23 = callbackFunc;
        v24 = v31;
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x1
  NetworkManager_c *v27; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *downloadSize; // x0
  AssetManager_c *klass; // x8
  int64_t v32; // x8
  AssetManager_c *v33; // x0
  System_Int32_array **ProxyData___Dequeue; // x0
  __int64 v35; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_o *Name; // x0
  const MethodInfo *v43; // x1
  System_Action_o *v44; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **v46; // x0
  EventMissionProgressRequest_Argument_ProgressData_o **v47; // x22
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  EventMissionProgressRequest_Argument_ProgressData_o *v61; // x0
  System_Int32_array **v62; // x1
  const MethodInfo *v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  AssetLoader_LoadEndDataHandler_o *v66; // x1
  System_Action_o *v67; // x19
  System_Collections_Generic_List_Enumerator_T__o v68; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v69; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40FCA62 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__Dispose__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__get_Current__, v8);
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_AssetLoader___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_AssetLoader__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_AssetLoader__GetEnumerator__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v12);
    sub_B16FFC(&NetworkManager_TypeInfo, v13);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__, v15);
    sub_B16FFC(&Method_AssetManager___c__DisplayClass147_0__LoadStart_b__0__, v16);
    sub_B16FFC(&AssetManager___c__DisplayClass147_0_TypeInfo, v17);
    sub_B16FFC(&StringLiteral_5218/*"DelayLoadStart"*/, v18);
    byte_40FCA62 = 1;
  }
  memset(&v69, 0, sizeof(v69));
  v19 = sub_B170CC(AssetManager___c__DisplayClass147_0_TypeInfo, method, v2, v3, v4);
  AssetManager___c__DisplayClass147_0___ctor((AssetManager___c__DisplayClass147_0_o *)v19, 0LL);
  if ( !v19 )
    goto LABEL_42;
  *(_QWORD *)(v19 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v19 + 16), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( !byte_40F7166 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, v26);
    byte_40F7166 = 1;
  }
  v27 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v27 = NetworkManager_TypeInfo;
  }
  if ( v27->static_fields->isRebootBlock || BYTE1(this->fields.writeRequestThread) )
    return 0;
  if ( LOBYTE(this->fields.initCRW) )
  {
    downloadSize = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.downloadSize;
    if ( !downloadSize )
      goto LABEL_42;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v68,
      downloadSize,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_AssetLoader__GetEnumerator__);
    v69 = v68;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v69,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_AssetLoader__MoveNext__) )
      ;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v69,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_AssetLoader__Dispose__);
  }
  klass = this[1].klass;
  if ( !klass )
    goto LABEL_42;
  if ( SLODWORD(klass->_1.byval_arg.data) < 1 )
    return 0;
  v32 = this->fields.downloadSize;
  if ( !v32 )
    goto LABEL_42;
  if ( *(_DWORD *)(v32 + 24) >= SHIDWORD(this->fields.unloadCallbacks) )
    return 0;
  UnityEngine_MonoBehaviour__StartCoroutine(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5218/*"DelayLoadStart"*/,
    0LL);
  v33 = this[1].klass;
  if ( !v33
    || (ProxyData___Dequeue = (System_Int32_array **)System_Collections_Generic_Queue_CFNetwork_GetProxyData___Dequeue(
                                                       (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)v33,
                                                       (const MethodInfo_2B166B0 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__),
        *(_QWORD *)(v19 + 24) = ProxyData___Dequeue,
        v35 = v19 + 24,
        sub_B16F98((BattleServantConfConponent_o *)(v19 + 24), ProxyData___Dequeue, v36, v37, v38, v39, v40, v41),
        !*(_QWORD *)(v19 + 24)) )
  {
LABEL_42:
    sub_B170D4();
  }
  Name = AssetManager_LoadWaitStatus__get_Name(*(AssetManager_LoadWaitStatus_o **)(v19 + 24), 0LL);
  if ( !System_String__IsNullOrEmpty(Name, 0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      v46 = (System_Int32_array **)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                     gameObject,
                                     (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_AssetLoader___);
      *(_QWORD *)(v19 + 32) = v46;
      v47 = (EventMissionProgressRequest_Argument_ProgressData_o **)(v19 + 32);
      sub_B16F98((BattleServantConfConponent_o *)(v19 + 32), v46, v48, v49, v50, v51, v52, v53);
      v54 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.downloadSize;
      if ( v54 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v54,
          *v47,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_AssetLoader__Add__);
        if ( *(_QWORD *)v35 )
        {
          v61 = *v47;
          if ( *v47 )
          {
            v62 = *(System_Int32_array ***)(*(_QWORD *)v35 + 16LL);
            *(_QWORD *)&v61->fields.targetId = v62;
            sub_B16F98((BattleServantConfConponent_o *)&v61->fields.targetId, v62, v55, v56, v57, v58, v59, v60);
            if ( *(_QWORD *)v35 )
            {
              if ( *v47 )
              {
                v66 = *(AssetLoader_LoadEndDataHandler_o **)(*(_QWORD *)v35 + 32LL);
                if ( v66 )
                  AssetLoader__add_endCallback2((AssetLoader_o *)*v47, v66, v63);
                v67 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v66, v63, v64, v65);
                System_Action___ctor(
                  v67,
                  (Il2CppObject *)v19,
                  Method_AssetManager___c__DisplayClass147_0__LoadStart_b__0__,
                  0LL);
                if ( v67 )
                {
                  System_Action__Invoke(v67, 0LL);
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
  if ( !*(_QWORD *)v35 )
    goto LABEL_42;
  v44 = *(System_Action_o **)(*(_QWORD *)v35 + 24LL);
  if ( v44 )
    System_Action__Invoke(v44, 0LL);
  return AssetManager__LoadStart(this, v43);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetManager__OnClickRetryDialog(AssetManager_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v5; // x1
  ManagementManager_c *v6; // x0
  ManagementManager_o *Instance; // x0

  if ( (byte_40FCA56 & 1) == 0 )
  {
    sub_B16FFC(&ManagementManager_TypeInfo, isDecide);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v5);
    byte_40FCA56 = 1;
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
    if ( !byte_40F7DF6 )
    {
      sub_B16FFC(&ManagementManager_TypeInfo, isDecide);
      byte_40F7DF6 = 1;
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
      UnityEngine_Application__Quit_40644448(0LL);
    }
    else
    {
      Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
      if ( !Instance )
        sub_B170D4();
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int64_t downloadSize; // x22
  _BOOL4 isRequestDownload; // w23
  unsigned __int64 v10; // x21
  UnityEngine_Object_o *v11; // x22
  struct AssetData_o *data; // x8
  System_Collections_Generic_List_XWeaponTrail_Element__o *v13; // x0

  if ( (byte_40FCA64 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_AssetLoader__RemoveAt__, loader);
    sub_B16FFC(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40FCA64 = 1;
  }
  if ( !loader )
    goto LABEL_14;
  downloadSize = this->fields.downloadSize;
  if ( !downloadSize )
    goto LABEL_14;
  isRequestDownload = loader->fields.isRequestDownload;
  v10 = 0LL;
  while ( 1 )
  {
    if ( (__int64)v10 >= *(int *)(downloadSize + 24) )
      goto LABEL_18;
    if ( v10 >= *(unsigned int *)(downloadSize + 24) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v11 = *(UnityEngine_Object_o **)(*(_QWORD *)(downloadSize + 16) + 8 * v10 + 32);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(v11, (UnityEngine_Object_o *)loader, 0LL) )
      break;
    downloadSize = this->fields.downloadSize;
    ++v10;
    if ( !downloadSize )
      goto LABEL_14;
  }
  data = loader->fields.data;
  if ( !data
    || (v13 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.downloadSize,
        *(_QWORD *)&this->fields.isErrorDialog -= data->fields.size,
        !v13) )
  {
LABEL_14:
    sub_B170D4();
  }
  System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
    v13,
    v10,
    (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_AssetLoader__RemoveAt__);
LABEL_18:
  if ( isRequestDownload )
  {
    if ( *(_QWORD *)&this->fields.reserveWriteRequest )
      LOBYTE(this->fields.unloadCallbacks) = 1;
    else
      AssetManager__StartThreadConfigWriteRequest(this, (const MethodInfo *)loader);
  }
  AssetManager__LoadStart(this, (const MethodInfo *)loader);
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
  struct System_String_o *requestConfigWriteData; // x0

  if ( (byte_40FCA65 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__, *(_QWORD *)&type);
    byte_40FCA65 = 1;
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
        sub_B170D4();
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)requestConfigWriteData,
        (System_Xml_XmlQualifiedName_o *)v9->fields.name,
        (const MethodInfo_2DA5684 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *requestConfigWriteData; // x0

  v5 = this;
  if ( (byte_40FCA6D & 1) == 0 )
  {
    this = (AssetManager_o *)sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__, name);
    byte_40FCA6D = 1;
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
      sub_B170D4();
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
      requestConfigWriteData,
      (System_Xml_XmlQualifiedName_o *)name,
      (const MethodInfo_2DA5684 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
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


void __fastcall AssetManager__ReleaseAssetStorage_29956116(
        AssetManager_o *this,
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v3; // x8
  unsigned __int64 v6; // x21

  if ( !nameList )
    sub_B170D4();
  v3 = *(_QWORD *)&nameList->max_length;
  if ( (int)v3 >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v3 )
      {
        sub_B17100(this, nameList, method);
        sub_B170A0();
      }
      AssetManager__ReleaseAssetStorage(this, nameList->m_Items[v6], method);
      LODWORD(v3) = nameList->max_length;
      ++v6;
    }
    while ( (__int64)v6 < (int)v3 );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetManager__ReleaseAsset_29947240(
        AssetManager_o *this,
        int32_t type,
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v4; // x8
  unsigned __int64 v8; // x22

  if ( !nameList )
    sub_B170D4();
  v4 = *(_QWORD *)&nameList->max_length;
  if ( (int)v4 >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)v4 )
      {
        sub_B17100(this, *(_QWORD *)&type, nameList);
        sub_B170A0();
      }
      AssetManager__ReleaseAsset(this, type, nameList->m_Items[v8], method);
      LODWORD(v4) = nameList->max_length;
      ++v8;
    }
    while ( (__int64)v8 < (int)v4 );
  }
}


void __fastcall AssetManager__ReleaseAsset_29947560(
        AssetManager_o *this,
        AssetData_o *assetInfo,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( assetInfo )
    AssetManager__ReleaseAsset(this, assetInfo->fields.type, assetInfo->fields.name, v3);
}


void __fastcall AssetManager__ReleaseAsset_29947760(
        AssetManager_o *this,
        AssetData_array *assetInfoList,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v4; // x8
  unsigned __int64 v7; // x21
  AssetData_o *v8; // x8

  if ( !assetInfoList )
    sub_B170D4();
  v4 = *(_QWORD *)&assetInfoList->max_length;
  if ( (int)v4 >= 1 )
  {
    v7 = 0LL;
    do
    {
      if ( v7 >= (unsigned int)v4 )
      {
        sub_B17100(this, assetInfoList, method);
        sub_B170A0();
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
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__AssetData__o *assetResourceDic; // x0
  struct System_Collections_Generic_Dictionary_string__AssetData__o *v7; // x0

  if ( (byte_40FCA61 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AssetData__Add__, info);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__, v5);
    byte_40FCA61 = 1;
  }
  if ( !info )
    goto LABEL_11;
  if ( info->fields.entryCount <= 0 && info->fields.objectList )
  {
    assetResourceDic = this->fields.assetResourceDic;
    if ( !assetResourceDic )
      goto LABEL_11;
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)assetResourceDic,
            (System_Xml_XmlQualifiedName_o *)info->fields.name,
            (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__) )
    {
      v7 = this->fields.assetResourceDic;
      if ( v7 )
      {
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v7,
          (System_Xml_XmlQualifiedName_o *)info->fields.name,
          (System_Xml_Schema_XmlSchemaObject_o *)info,
          (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
        return;
      }
LABEL_11:
      sub_B170D4();
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
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
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
  System_String_o *v10; // x0
  struct System_Collections_Generic_Dictionary_string__AssetData__o *assetBundleReleaseDic; // x8
  System_String_o *v12; // x19
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  Il2CppObject *currentValue; // x21
  System_String_o *monitor; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FCA52 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, path);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v5);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v6);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v8);
    sub_B16FFC(&StringLiteral_871/*"/"*/, v9);
    byte_40FCA52 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  v10 = System_String__Concat_43743732(path, (System_String_o *)StringLiteral_871/*"/"*/, 0LL);
  assetBundleReleaseDic = this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic
    || (v12 = v10,
        (Values = System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)assetBundleReleaseDic,
                    (const MethodInfo_2DA39BC *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v16,
    Values,
    (const MethodInfo_22866D8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v16,
            (const MethodInfo_26BE610 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__) )
  {
    currentValue = v16.fields.currentValue;
    if ( !v16.fields.currentValue )
      sub_B170D4();
    monitor = (System_String_o *)v16.fields.currentValue[1].monitor;
    if ( !monitor )
      sub_B170D4();
    if ( System_String__StartsWith(monitor, v12, 0LL) )
      LODWORD(currentValue[2].monitor) = 0;
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v16,
    (const MethodInfo_26BE60C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
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

  if ( (byte_40FCA17 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, v1);
    sub_B16FFC(&ManagerConfig_TypeInfo, v2);
    byte_40FCA17 = 1;
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

  if ( (byte_40FCA18 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, v1);
    sub_B16FFC(&ManagerConfig_TypeInfo, v2);
    byte_40FCA18 = 1;
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
  struct System_Collections_Generic_Dictionary_string__AssetData__o *assetBundleReleaseDic; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  const MethodInfo *v9; // x2
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v10; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FCA4A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, method);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v3);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v4);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v6);
    byte_40FCA4A = 1;
  }
  memset(&v10, 0, sizeof(v10));
  assetBundleReleaseDic = this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic
    || (Values = System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                   (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)assetBundleReleaseDic,
                   (const MethodInfo_2DA39BC *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
    sub_B170D4();
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v10,
    Values,
    (const MethodInfo_22866D8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v10,
            (const MethodInfo_26BE610 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__) )
  {
    if ( !v10.fields.currentValue )
      sub_B170D4();
    if ( LODWORD(v10.fields.currentValue[2].monitor) != HIDWORD(v10.fields.currentValue[2].monitor) )
      AssetManager__AddLoadWaitStatus_29959396(this, (AssetData_o *)v10.fields.currentValue, v9);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v10,
    (const MethodInfo_26BE60C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Threading_ThreadStart_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  System_Threading_Thread_o *v13; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Threading_Thread_o *v20; // x0

  if ( (byte_40FCA58 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetManager_ConfigWriteRequestThread__, method);
    sub_B16FFC(&System_Threading_ThreadStart_TypeInfo, v6);
    sub_B16FFC(&System_Threading_Thread_TypeInfo, v7);
    byte_40FCA58 = 1;
  }
  LOBYTE(this->fields.unloadCallbacks) = 0;
  v8 = (System_Threading_ThreadStart_o *)sub_B170CC(System_Threading_ThreadStart_TypeInfo, method, v2, v3, v4);
  System_Threading_ThreadStart___ctor(v8, (Il2CppObject *)this, Method_AssetManager_ConfigWriteRequestThread__, 0LL);
  v13 = (System_Threading_Thread_o *)sub_B170CC(System_Threading_Thread_TypeInfo, v9, v10, v11, v12);
  System_Threading_Thread___ctor(v13, v8, 0LL);
  *(_QWORD *)&this->fields.reserveWriteRequest = v13;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.reserveWriteRequest,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = *(System_Threading_Thread_o **)&this->fields.reserveWriteRequest;
  if ( !v20 )
    sub_B170D4();
  System_Threading_Thread__Start(v20, 0LL);
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
        const MethodInfo_18AFFFC *method)
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

  if ( (byte_40FA601 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, path);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40FA601 = 1;
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
  sub_B16F98((BattleServantConfConponent_o *)data, (System_Int32_array **)v16, v10, v11, v12, v13, v14, v15);
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
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_Object_o *v24; // x19

  if ( (byte_40FCA6E & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, name);
    sub_B16FFC(&AssetManager_TypeInfo, v11);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40FCA6E = 1;
  }
  *atlas = 0LL;
  sub_B16F98(
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
    Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   AssetStorage,
                                                                   atlasName,
                                                                   (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  else
    Object_WarBoardWaitTimeSetting = 0LL;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
  {
    if ( !Object_WarBoardWaitTimeSetting )
      sub_B170D4();
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                Object_WarBoardWaitTimeSetting,
                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    *atlas = (UIAtlas_o *)Component_srcLineSprite;
    sub_B16F98(
      (BattleServantConfConponent_o *)atlas,
      (System_Int32_array **)Component_srcLineSprite,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = (UnityEngine_Object_o *)*atlas;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Inequality(v24, 0LL, 0LL);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FCA15 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_TypeInfo, method);
    byte_40FCA15 = 1;
  }
  v6 = sub_B170CC(AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_TypeInfo, method, v2, v3, v4);
  AssetManager__WaitForExecutionUnloadUnuseAssets_d__41___ctor(
    (AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall AssetManager___DownloadAssetStorageAttributeWithCheckDialog_b__117_0(
        AssetManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int64_t downloadSize; // x8

  if ( (byte_40FCA72 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_9322/*"NOW_LOADING"*/, v4);
    byte_40FCA72 = 1;
  }
  downloadSize = this->fields.downloadSize;
  if ( !downloadSize )
    sub_B170D4();
  if ( *(int *)(downloadSize + 24) >= 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playBgm((System_String_o *)StringLiteral_9322/*"NOW_LOADING"*/, 0LL);
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

  if ( (byte_40FCA13 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_ResourceUnloadEventHandler_TypeInfo, value);
    byte_40FCA13 = 1;
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
    v9 = sub_B0BA14(p_downLoadWaitList, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  AssetManager__remove_unloadCallbacks(v11, v12, v13);
}


void __fastcall AssetManager__cancelDownloadAssetStorage(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  AssetManager_o *Instance; // x19
  const MethodInfo *v4; // x1

  if ( (byte_40FCA36 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_40FCA36 = 1;
  }
  Instance = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    if ( !Instance )
      sub_B170D4();
    AssetManager__CancelDownloadAssetStorage(Instance, v4);
  }
}


System_Collections_IEnumerator_o *__fastcall AssetManager__coUnloadUnusedAssets(
        AssetManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FCA59 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager__coUnloadUnusedAssets_d__137_TypeInfo, method);
    byte_40FCA59 = 1;
  }
  v6 = sub_B170CC(AssetManager__coUnloadUnusedAssets_d__137_TypeInfo, method, v2, v3, v4);
  AssetManager__coUnloadUnusedAssets_d__137___ctor((AssetManager__coUnloadUnusedAssets_d__137_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
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
      return System_String__Equals_43731072(name1, name2, 0LL);
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
  System_String_array *v3; // x19
  __int64 v4; // x8
  System_String_array *v5; // x20
  unsigned __int64 v6; // x21
  signed __int64 v7; // x22

  v3 = list2;
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
          if ( v6 >= v3->max_length )
            break;
          list1 = (System_String_array *)v5->m_Items[v6];
          list2 = (System_String_array *)v3->m_Items[v6];
          if ( list1 )
          {
            if ( !list2 )
              return 0;
            list1 = (System_String_array *)System_String__Equals_43731072(
                                             (System_String_o *)list1,
                                             (System_String_o *)list2,
                                             0LL);
            if ( ((unsigned __int8)list1 & 1) == 0 )
              return 0;
          }
          else if ( list2 )
          {
            return 0;
          }
          if ( (__int64)++v6 >= v7 )
            return 1;
        }
        while ( v6 < v5->max_length );
      }
      sub_B17100(list1, list2, method);
      sub_B170A0();
    }
  }
  else if ( list2 )
  {
    return list2->max_length == 0;
  }
  return 1;
}


bool __fastcall AssetManager__compAssetStorageList_29945232(
        AssetData_array *assetList,
        System_String_array *list,
        const MethodInfo *method)
{
  System_String_array *v3; // x19
  __int64 v4; // x8
  AssetData_array *v5; // x20
  unsigned __int64 v6; // x21
  signed __int64 v7; // x22
  AssetData_o *v8; // x8
  System_String_o *name; // x0

  v3 = list;
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
          if ( v6 >= v3->max_length )
            break;
          v8 = v5->m_Items[v6];
          list = (System_String_array *)v3->m_Items[v6];
          if ( v8 )
          {
            if ( !list )
              return 0;
            name = v8->fields.name;
            if ( !name )
              sub_B170D4();
            assetList = (AssetData_array *)System_String__Equals_43731072(name, (System_String_o *)list, 0LL);
            if ( ((unsigned __int8)assetList & 1) == 0 )
              return 0;
          }
          else if ( list )
          {
            return 0;
          }
          if ( (__int64)++v6 >= v7 )
            return 1;
        }
        while ( v6 < v5->max_length );
      }
      sub_B17100(assetList, list, method);
      sub_B170A0();
    }
  }
  else if ( list )
  {
    return list->max_length == 0;
  }
  return 1;
}


bool __fastcall AssetManager__compAssetStorage_29944952(
        AssetData_o *data,
        System_String_o *name,
        const MethodInfo *method)
{
  struct System_String_o *v3; // x0
  int32_t m_stringLength; // w8

  if ( data && (v3 = data->fields.name) != 0LL )
  {
    if ( name )
      return System_String__Equals_43731072(v3, name, 0LL);
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
  AssetManager_o *Instance; // x19
  const MethodInfo *v4; // x1

  if ( (byte_40FCA1B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_40FCA1B = 1;
  }
  Instance = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    if ( !Instance )
      sub_B170D4();
    AssetManager__DebugLog(Instance, v4);
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
  const MethodInfo *v9; // x4

  if ( (byte_40FCA39 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_40FCA39 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
    return 0;
  if ( !Instance )
    sub_B170D4();
  return AssetManager__DownloadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, v9);
}


bool __fastcall AssetManager__downloadAssetStorage_29951960(
        System_String_array *nameList,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *Instance; // x21
  const MethodInfo *v7; // x4

  if ( (byte_40FCA3A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_40FCA3A = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
    return 0;
  if ( !Instance )
    sub_B170D4();
  return AssetManager__DownloadAssetStorage_29952164((AssetManager_o *)Instance, nameList, callbackFunc, 1, v7);
}


AssetData_o *__fastcall AssetManager__getAsset(int32_t type, System_String_o *name, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *Instance; // x21
  const MethodInfo *v7; // x3

  if ( (byte_40FCA28 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, name);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_40FCA28 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
    return 0LL;
  if ( !Instance )
    sub_B170D4();
  return AssetManager__GetAsset((AssetManager_o *)Instance, type, name, v7);
}


AssetData_o *__fastcall AssetManager__getAssetResource(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x20
  const MethodInfo *v5; // x3
  bool v6; // w8
  AssetData_o *result; // x0

  if ( (byte_40FCA45 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_40FCA45 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  result = 0LL;
  if ( !v6 )
  {
    if ( !Instance )
      sub_B170D4();
    result = AssetManager__GetAssetData(
               0LL,
               (System_Collections_Generic_Dictionary_string__AssetData__o *)Instance->fields.callbackFunc,
               name,
               v5);
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
  const MethodInfo *v5; // x3
  bool v6; // w8
  AssetData_o *result; // x0

  if ( (byte_40FCA3F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_40FCA3F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  result = 0LL;
  if ( !v6 )
  {
    if ( !Instance )
      sub_B170D4();
    result = AssetManager__GetAssetData(
               0LL,
               (System_Collections_Generic_Dictionary_string__AssetData__o *)Instance->fields.commonCamera,
               name,
               v5);
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
  const MethodInfo *v5; // x2

  if ( (byte_40FCA34 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_40FCA34 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
    return 0LL;
  if ( !Instance )
    sub_B170D4();
  return AssetManager__GetAssetStorageList((AssetManager_o *)Instance, path, v5);
}


AssetData_array *__fastcall AssetManager__getAssetStorage_29955104(
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *Instance; // x20
  const MethodInfo *v5; // x2

  if ( (byte_40FCA40 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_40FCA40 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
    return 0LL;
  if ( !Instance )
    sub_B170D4();
  return AssetManager__GetAssetStorage_29955284((AssetManager_o *)Instance, nameList, v5);
}


bool __fastcall AssetManager__getAssetStorage_29955572(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *Instance; // x21
  const MethodInfo *v7; // x3

  if ( (byte_40FCA41 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_40FCA41 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
    return 0;
  if ( !Instance )
    sub_B170D4();
  return AssetManager__GetAssetStorage_29955772((AssetManager_o *)Instance, name, callbackFunc, v7);
}


bool __fastcall AssetManager__getAsset_29946020(
        int32_t type,
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *Instance; // x22
  const MethodInfo *v9; // x4

  if ( (byte_40FCA29 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, name);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_40FCA29 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
    return 0;
  if ( !Instance )
    sub_B170D4();
  return AssetManager__GetAsset_29946228((AssetManager_o *)Instance, type, name, callbackFunc, v9);
}


bool __fastcall AssetManager__getAsset_29946328(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *Instance; // x21
  const MethodInfo *v7; // x3

  if ( (byte_40FCA2A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_40FCA2A = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
    return 0;
  if ( !Instance )
    sub_B170D4();
  return AssetManager__GetAsset_29946528((AssetManager_o *)Instance, name, callbackFunc, v7);
}


int64_t __fastcall AssetManager__getDownloadSize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  UnityEngine_Object_o *Instance; // x19
  const MethodInfo *v4; // x1

  if ( (byte_40FCA2F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_40FCA2F = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
    return 0LL;
  if ( !Instance )
    sub_B170D4();
  return AssetManager__GetDownloadSize((AssetManager_o *)Instance, v4);
}


System_String_o *__fastcall AssetManager__getShaName(System_String_o *name, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Security_Cryptography_SHA1CryptoServiceProvider_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Text_UTF8Encoding_o *v16; // x20
  System_Byte_array *v17; // x0
  System_Byte_array *v18; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Text_StringBuilder_o *v23; // x19
  System_Text_StringBuilder_o *appended; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x8
  unsigned __int64 v28; // x21
  Il2CppObject *v29; // x0
  int v31; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FCA25 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo, v6);
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, v7);
    sub_B16FFC(&System_Text_UTF8Encoding_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_23388/*"{0,0:x2}"*/, v9);
    sub_B16FFC(&StringLiteral_831/*".bin"*/, v10);
    byte_40FCA25 = 1;
  }
  v11 = (System_Security_Cryptography_SHA1CryptoServiceProvider_o *)sub_B170CC(
                                                                      System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo,
                                                                      method,
                                                                      v2,
                                                                      v3,
                                                                      v4);
  System_Security_Cryptography_SHA1CryptoServiceProvider___ctor(v11, 0LL);
  v16 = (System_Text_UTF8Encoding_o *)sub_B170CC(System_Text_UTF8Encoding_TypeInfo, v12, v13, v14, v15);
  System_Text_UTF8Encoding___ctor(v16, 0LL);
  if ( !v16 )
    goto LABEL_13;
  v17 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_UTF8Encoding_o *, System_String_o *, Il2CppMethodPointer))v16->klass->vtable._18_GetBytes.method)(
                               v16,
                               name,
                               v16->klass->vtable._19_GetBytes.methodPtr);
  if ( !v11 )
    goto LABEL_13;
  v18 = System_Security_Cryptography_HashAlgorithm__ComputeHash_42874060(
          (System_Security_Cryptography_HashAlgorithm_o *)v11,
          v17,
          0LL);
  v23 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v19, v20, v21, v22);
  System_Text_StringBuilder___ctor(v23, 0LL);
  System_Security_Cryptography_HashAlgorithm__Clear((System_Security_Cryptography_HashAlgorithm_o *)v11, 0LL);
  if ( !v18 )
    goto LABEL_13;
  v27 = *(_QWORD *)&v18->max_length;
  if ( (int)v27 >= 1 )
  {
    v28 = 0LL;
    while ( 1 )
    {
      if ( v28 >= (unsigned int)v27 )
      {
        sub_B17100(appended, v25, v26);
        sub_B170A0();
      }
      v31 = v18->m_Items[v28 + 4] ^ 0xAA;
      v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
      if ( !v23 )
        break;
      appended = System_Text_StringBuilder__AppendFormat(v23, (System_String_o *)StringLiteral_23388/*"{0,0:x2}"*/, v29, 0LL);
      LODWORD(v27) = v18->max_length;
      if ( (__int64)++v28 >= (int)v27 )
        goto LABEL_11;
    }
LABEL_13:
    sub_B170D4();
  }
LABEL_11:
  if ( !v23 )
    goto LABEL_13;
  System_Text_StringBuilder__Append_41914240(v23, (System_String_o *)StringLiteral_831/*".bin"*/, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v23->klass->vtable._3_ToString.method)(
                              v23,
                              v23->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


System_String_o *__fastcall AssetManager__getUrlString(System_String_o *url, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  NetworkManager_c *v5; // x0
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  int64_t v9; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FCA24 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1530/*"?t="*/, v3);
    sub_B16FFC(&StringLiteral_19954/*"jar:"*/, v4);
    byte_40FCA24 = 1;
  }
  v9 = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( !url )
    sub_B170D4();
  if ( !System_String__StartsWith(url, NetworkManager_TypeInfo->static_fields->FILE_URL_SCHEME, 0LL) )
  {
    v5 = NetworkManager_TypeInfo;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v5 = NetworkManager_TypeInfo;
    }
    v6 = System_String__Concat_43743732((System_String_o *)StringLiteral_19954/*"jar:"*/, v5->static_fields->FILE_URL_SCHEME, 0LL);
    if ( !System_String__StartsWith(url, v6, 0LL) )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v9 = NetworkManager__getTime(0LL) / 300;
      v7 = System_Int64__ToString((int64_t)&v9, 0LL);
      return System_String__Concat_43746016(url, (System_String_o *)StringLiteral_1530/*"?t="*/, v7, 0LL);
    }
  }
  return url;
}


System_String_o *__fastcall AssetManager__getUrlString_29924852(AssetData_o *data, const MethodInfo *method)
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
  __int64 v16; // x2
  __int64 v17; // x0
  System_String_array *v18; // x20
  System_Int32_array **v19; // x0
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x21
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **assetBundleDateVersion; // x21
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **v59; // x21
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Int32_array **v70; // x19
  __int64 v72; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FCA26 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&string___TypeInfo, v4);
    sub_B16FFC(&StringLiteral_15842/*"_"*/, v5);
    sub_B16FFC(&StringLiteral_19954/*"jar:"*/, v6);
    sub_B16FFC(&StringLiteral_1531/*"?v="*/, v7);
    byte_40FCA26 = 1;
  }
  v72 = 0LL;
  v8 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  DataServerAddress = AssetManager__get_DataServerAddress((const MethodInfo *)v8);
  if ( !data )
    goto LABEL_56;
  v11 = DataServerAddress;
  DownloadName = AssetData__get_DownloadName(data, v10);
  v13 = (System_Int32_array **)System_String__Concat_43743732(v11, DownloadName, 0LL);
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
    v15 = System_String__Concat_43743732(
            (System_String_o *)StringLiteral_19954/*"jar:"*/,
            v14->static_fields->FILE_URL_SCHEME,
            0LL);
    if ( !System_String__StartsWith((System_String_o *)v13, v15, 0LL) )
    {
      v17 = sub_B17014(string___TypeInfo, 9LL, v16);
      if ( v17 )
      {
        v18 = (System_String_array *)v17;
        v19 = (System_Int32_array **)sub_B170BC(v13, *(_QWORD *)(*(_QWORD *)v17 + 64LL));
        if ( !v19 )
          goto LABEL_58;
        if ( !v18->max_length )
          goto LABEL_57;
        v18->m_Items[0] = (System_String_o *)v13;
        sub_B16F98((BattleServantConfConponent_o *)v18->m_Items, v13, v21, v22, v23, v24, v25, v26);
        v19 = (System_Int32_array **)StringLiteral_1531/*"?v="*/;
        if ( StringLiteral_1531/*"?v="*/ )
        {
          v19 = (System_Int32_array **)sub_B170BC(StringLiteral_1531/*"?v="*/, v18->obj.klass->_1.element_class);
          if ( !v19 )
            goto LABEL_58;
          v20 = (System_Int32_array **)StringLiteral_1531/*"?v="*/;
        }
        else
        {
          v20 = 0LL;
        }
        if ( v18->max_length <= 1 )
          goto LABEL_57;
        v18->m_Items[1] = (System_String_o *)v20;
        sub_B16F98((BattleServantConfConponent_o *)&v18->m_Items[1], v20, v21, v27, v28, v29, v30, v31);
        v19 = (System_Int32_array **)AssetManager_TypeInfo;
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v19 = (System_Int32_array **)AssetManager_TypeInfo;
        }
        v37 = *(System_Int32_array ***)&v19[23]->m_Items[13];
        if ( !v37 || (v19 = (System_Int32_array **)sub_B170BC(v37, v18->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v18->max_length <= 2 )
            goto LABEL_57;
          v18->m_Items[2] = (System_String_o *)v37;
          sub_B16F98((BattleServantConfConponent_o *)&v18->m_Items[2], v37, v21, v32, v33, v34, v35, v36);
          v19 = (System_Int32_array **)StringLiteral_15842/*"_"*/;
          if ( StringLiteral_15842/*"_"*/ )
          {
            v19 = (System_Int32_array **)sub_B170BC(StringLiteral_15842/*"_"*/, v18->obj.klass->_1.element_class);
            if ( !v19 )
              goto LABEL_58;
            v20 = (System_Int32_array **)StringLiteral_15842/*"_"*/;
          }
          else
          {
            v20 = 0LL;
          }
          if ( v18->max_length <= 3 )
            goto LABEL_57;
          v18->m_Items[3] = (System_String_o *)v20;
          sub_B16F98((BattleServantConfConponent_o *)&v18->m_Items[3], v20, v21, v38, v39, v40, v41, v42);
          assetBundleDateVersion = (System_Int32_array **)AssetManager_TypeInfo->static_fields->assetBundleDateVersion;
          if ( !assetBundleDateVersion
            || (v19 = (System_Int32_array **)sub_B170BC(assetBundleDateVersion, v18->obj.klass->_1.element_class)) != 0LL )
          {
            if ( v18->max_length <= 4 )
              goto LABEL_57;
            v18->m_Items[4] = (System_String_o *)assetBundleDateVersion;
            sub_B16F98(
              (BattleServantConfConponent_o *)&v18->m_Items[4],
              assetBundleDateVersion,
              v21,
              v43,
              v44,
              v45,
              v46,
              v47);
            v19 = (System_Int32_array **)StringLiteral_15842/*"_"*/;
            if ( StringLiteral_15842/*"_"*/ )
            {
              v19 = (System_Int32_array **)sub_B170BC(StringLiteral_15842/*"_"*/, v18->obj.klass->_1.element_class);
              if ( !v19 )
                goto LABEL_58;
              v20 = (System_Int32_array **)StringLiteral_15842/*"_"*/;
            }
            else
            {
              v20 = 0LL;
            }
            if ( v18->max_length <= 5 )
              goto LABEL_57;
            v18->m_Items[5] = (System_String_o *)v20;
            sub_B16F98((BattleServantConfConponent_o *)&v18->m_Items[5], v20, v21, v49, v50, v51, v52, v53);
            HIDWORD(v72) = data->fields.size;
            v19 = (System_Int32_array **)System_Int32__ToString((int32_t)&v72 + 4, 0LL);
            v59 = v19;
            if ( !v19 || (v19 = (System_Int32_array **)sub_B170BC(v19, v18->obj.klass->_1.element_class)) != 0LL )
            {
              if ( v18->max_length <= 6 )
                goto LABEL_57;
              v18->m_Items[6] = (System_String_o *)v59;
              sub_B16F98((BattleServantConfConponent_o *)&v18->m_Items[6], v59, v21, v54, v55, v56, v57, v58);
              v19 = (System_Int32_array **)StringLiteral_15842/*"_"*/;
              if ( StringLiteral_15842/*"_"*/ )
              {
                v19 = (System_Int32_array **)sub_B170BC(StringLiteral_15842/*"_"*/, v18->obj.klass->_1.element_class);
                if ( !v19 )
                  goto LABEL_58;
                v20 = (System_Int32_array **)StringLiteral_15842/*"_"*/;
              }
              else
              {
                v20 = 0LL;
              }
              if ( v18->max_length <= 7 )
                goto LABEL_57;
              v18->m_Items[7] = (System_String_o *)v20;
              sub_B16F98((BattleServantConfConponent_o *)&v18->m_Items[7], v20, v21, v60, v61, v62, v63, v64);
              LODWORD(v72) = data->fields.crc;
              v19 = (System_Int32_array **)System_UInt32__ToString((uint32_t)&v72, 0LL);
              v70 = v19;
              if ( !v19 || (v19 = (System_Int32_array **)sub_B170BC(v19, v18->obj.klass->_1.element_class)) != 0LL )
              {
                if ( v18->max_length > 8 )
                {
                  v18->m_Items[8] = (System_String_o *)v70;
                  sub_B16F98((BattleServantConfConponent_o *)&v18->m_Items[8], v70, v21, v65, v66, v67, v68, v69);
                  return System_String__Concat_43823856(v18, 0LL);
                }
LABEL_57:
                sub_B17100(v19, v20, v21);
                sub_B170A0();
              }
            }
          }
        }
LABEL_58:
        sub_B170F4(v19);
        sub_B170A0();
      }
LABEL_56:
      sub_B170D4();
    }
  }
  return (System_String_o *)v13;
}


System_String_o *__fastcall AssetManager__get_CacheListFile(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_o *Path; // x19
  AssetManager_c *v3; // x8

  if ( (byte_40FCA1F & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, v1);
    byte_40FCA1F = 1;
  }
  Path = AssetStorageCache__GetPath(0LL);
  v3 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v3 = AssetManager_TypeInfo;
  }
  return System_String__Concat_43743732(Path, v3->static_fields->configFileName, 0LL);
}


System_String_o *__fastcall AssetManager__get_CachePathName(const MethodInfo *method)
{
  __int64 v1; // x1
  AssetManager_c *v2; // x0

  if ( (byte_40FCA1D & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, v1);
    byte_40FCA1D = 1;
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

  if ( (byte_40FCA1E & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, v1);
    byte_40FCA1E = 1;
  }
  v2 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  DataServerAddress = AssetManager__get_DataServerAddress((const MethodInfo *)v2);
  return System_String__Concat_43743732(DataServerAddress, AssetManager_TypeInfo->static_fields->configFileName, 0LL);
}


System_String_o *__fastcall AssetManager__get_DataServerAddress(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_40FCA1C & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, v1);
    byte_40FCA1C = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( !byte_40FCA73 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, v1);
    byte_40FCA73 = 1;
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

  if ( (byte_40FCA16 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, v1);
    sub_B16FFC(&ManagerConfig_TypeInfo, v2);
    byte_40FCA16 = 1;
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
  struct System_Collections_Generic_Dictionary_string__AssetData__o *assetBundleReleaseDic; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  Il2CppObject *currentValue; // x21
  int monitor; // w8
  char v13; // w19
  int v14; // w20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FCA4B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, attrib);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v5);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v6);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v8);
    byte_40FCA4B = 1;
  }
  memset(&v16, 0, sizeof(v16));
  assetBundleReleaseDic = this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic
    || (Values = System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                   (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)assetBundleReleaseDic,
                   (const MethodInfo_2DA39BC *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
    sub_B170D4();
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v16,
    Values,
    (const MethodInfo_22866D8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v16,
            (const MethodInfo_26BE610 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__) )
  {
    currentValue = v16.fields.currentValue;
    if ( !v16.fields.currentValue )
      sub_B170D4();
    monitor = (int)v16.fields.currentValue[2].monitor;
    if ( monitor >= 1 && monitor != HIDWORD(v16.fields.currentValue[2].monitor)
      || System_String__op_Equality(attrib, (System_String_o *)v16.fields.currentValue[2].klass, 0LL)
      && LODWORD(currentValue[2].monitor) != HIDWORD(currentValue[2].monitor) )
    {
      v13 = 1;
      v14 = 4;
      goto LABEL_14;
    }
  }
  v13 = 0;
  v14 = 2;
LABEL_14:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v16,
    (const MethodInfo_26BE60C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  return (v14 == 4) & v13;
}


bool __fastcall AssetManager__isExistAssetStorage(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *Instance; // x20
  const MethodInfo *v5; // x2

  if ( (byte_40FCA30 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_40FCA30 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
    return 0;
  if ( !Instance )
    sub_B170D4();
  return AssetManager__IsExistAssetStorage((AssetManager_o *)Instance, name, v5);
}


bool __fastcall AssetManager__isExistAssetStorage_29948512(System_String_array *nameList, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *Instance; // x20
  const MethodInfo *v5; // x2

  if ( (byte_40FCA31 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_40FCA31 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
    return 0;
  if ( !Instance )
    sub_B170D4();
  return AssetManager__IsExistAssetStorage_29948692((AssetManager_o *)Instance, nameList, v5);
}


bool __fastcall AssetManager__isNeedDownload(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x3
  AssetData_o *AssetData; // x0

  if ( (byte_40FCA32 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_40FCA32 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
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
      sub_B170D4();
    AssetData = AssetManager__GetAssetData(
                  (AssetManager_o *)v5,
                  (System_Collections_Generic_Dictionary_string__AssetData__o *)Instance->fields.commonCamera,
                  name,
                  v6);
    if ( AssetData )
      LOBYTE(AssetData) = AssetData->fields.nowVersion != AssetData->fields.newVersion;
  }
  return (char)AssetData;
}


bool __fastcall AssetManager__isNeedDownload_29949072(System_String_array *nameList, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *Instance; // x20
  const MethodInfo *v5; // x2

  if ( (byte_40FCA33 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_40FCA33 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
    return 0;
  if ( !Instance )
    sub_B170D4();
  return AssetManager__IsNeedDownload_29949252((AssetManager_o *)Instance, nameList, v5);
}


bool __fastcall AssetManager__loadAsset(
        int32_t type,
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *Instance; // x22
  const MethodInfo *v9; // x4

  if ( (byte_40FCA27 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, name);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_40FCA27 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
    return 0;
  if ( !Instance )
    sub_B170D4();
  return AssetManager__LoadAsset((AssetManager_o *)Instance, type, name, callbackFunc, v9);
}


AssetData_o *__fastcall AssetManager__loadAssetResource(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *Instance; // x20
  const MethodInfo *v5; // x2

  if ( (byte_40FCA44 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_40FCA44 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
    return 0LL;
  if ( !Instance )
    sub_B170D4();
  return AssetManager__LoadAssetResource((AssetManager_o *)Instance, name, v5);
}


bool __fastcall AssetManager__loadAssetStorage(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        int32_t maxParallelLoad,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *Instance; // x22
  const MethodInfo *v9; // x4

  if ( (byte_40FCA3B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_40FCA3B = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
    return 0;
  if ( !Instance )
    sub_B170D4();
  return AssetManager__LoadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, v9);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AssetManager__loadAssetStorage_29953688(
        System_String_o *name,
        int32_t maxParallelLoad,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *Instance; // x22
  const MethodInfo *v9; // x4

  if ( (byte_40FCA3D & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&maxParallelLoad);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_40FCA3D = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
    return 0;
  if ( !Instance )
    sub_B170D4();
  return AssetManager__LoadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, v9);
}


bool __fastcall AssetManager__loadAssetStorage_29953896(
        System_String_array *nameList,
        System_Action_o *callbackFunc,
        int32_t loadParalleMax,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *Instance; // x22
  const MethodInfo *v9; // x4

  if ( (byte_40FCA3E & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_40FCA3E = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
    return 0;
  if ( !Instance )
    sub_B170D4();
  return AssetManager__LoadAssetStorage_29954104((AssetManager_o *)Instance, nameList, callbackFunc, loadParalleMax, v9);
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
  const MethodInfo *v11; // x5

  if ( (byte_40FCA3C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, resourceNames);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v9);
    byte_40FCA3C = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
    return 0;
  if ( !Instance )
    sub_B170D4();
  return AssetManager__LoadResourcesAssetStorage(
           (AssetManager_o *)Instance,
           assetBandleName,
           resourceNames,
           callbackFunc,
           maxParallelLoad,
           v11);
}


void __fastcall AssetManager__pauseDownloadAssetStorage(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x19

  if ( (byte_40FCA37 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_40FCA37 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    if ( !Instance )
      sub_B170D4();
    if ( !BYTE1(Instance[1].monitor) )
      BYTE1(Instance[1].monitor) = 1;
  }
}


void __fastcall AssetManager__releaseAsset(int32_t type, System_String_o *name, const MethodInfo *method)
{
  __int64 v5; // x1
  AssetManager_o *Instance; // x21
  const MethodInfo *v7; // x3

  if ( (byte_40FCA2B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, name);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_40FCA2B = 1;
  }
  Instance = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    if ( !Instance )
      sub_B170D4();
    AssetManager__ReleaseAsset(Instance, type, name, v7);
  }
}


void __fastcall AssetManager__releaseAssetResource(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  AssetManager_o *Instance; // x20
  const MethodInfo *v5; // x2

  if ( (byte_40FCA46 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_40FCA46 = 1;
  }
  Instance = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    if ( !Instance )
      sub_B170D4();
    AssetManager__ReleaseAssetResource(Instance, name, v5);
  }
}


void __fastcall AssetManager__releaseAssetStorage(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  AssetManager_o *Instance; // x20
  const MethodInfo *v5; // x2

  if ( (byte_40FCA42 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_40FCA42 = 1;
  }
  Instance = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    if ( !Instance )
      sub_B170D4();
    AssetManager__ReleaseAssetStorage(Instance, name, v5);
  }
}


void __fastcall AssetManager__releaseAssetStorage_29955940(System_String_array *nameList, const MethodInfo *method)
{
  __int64 v3; // x1
  AssetManager_o *Instance; // x20
  const MethodInfo *v5; // x2

  if ( (byte_40FCA43 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_40FCA43 = 1;
  }
  Instance = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    if ( !Instance )
      sub_B170D4();
    AssetManager__ReleaseAssetStorage_29956116(Instance, nameList, v5);
  }
}


void __fastcall AssetManager__releaseAsset_29947044(
        int32_t type,
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  AssetManager_o *Instance; // x21
  const MethodInfo *v7; // x3

  if ( (byte_40FCA2C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, nameList);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_40FCA2C = 1;
  }
  Instance = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    if ( !Instance )
      sub_B170D4();
    AssetManager__ReleaseAsset_29947240(Instance, type, nameList, v7);
  }
}


void __fastcall AssetManager__releaseAsset_29947376(AssetData_o *assetInfo, const MethodInfo *method)
{
  __int64 v3; // x1
  AssetManager_o *Instance; // x20
  const MethodInfo *v5; // x3

  if ( (byte_40FCA2D & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_40FCA2D = 1;
  }
  Instance = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    if ( !Instance )
      sub_B170D4();
    if ( assetInfo )
      AssetManager__ReleaseAsset(Instance, assetInfo->fields.type, assetInfo->fields.name, v5);
  }
}


void __fastcall AssetManager__releaseAsset_29947584(AssetData_array *assetInfoList, const MethodInfo *method)
{
  __int64 v3; // x1
  AssetManager_o *Instance; // x20
  const MethodInfo *v5; // x2

  if ( (byte_40FCA2E & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_40FCA2E = 1;
  }
  Instance = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    if ( !Instance )
      sub_B170D4();
    AssetManager__ReleaseAsset_29947760(Instance, assetInfoList, v5);
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

  if ( (byte_40FCA14 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_ResourceUnloadEventHandler_TypeInfo, value);
    byte_40FCA14 = 1;
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
    v9 = sub_B0BA14(p_downLoadWaitList, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  AssetManager__WaitForExecutionUnloadUnuseAssets(v11, v12);
}


void __fastcall AssetManager__resetAssetStorageVersion(System_String_o *path, const MethodInfo *method)
{
  __int64 v3; // x1
  AssetManager_o *Instance; // x20
  const MethodInfo *v5; // x2

  if ( (byte_40FCA35 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_40FCA35 = 1;
  }
  Instance = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    if ( !Instance )
      sub_B170D4();
    AssetManager__ResetAssetStorageVersion(Instance, path, v5);
  }
}


void __fastcall AssetManager__resumeDownloadAssetStorage(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x19
  const MethodInfo *v4; // x1

  if ( (byte_40FCA38 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_40FCA38 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    if ( !Instance )
      sub_B170D4();
    if ( BYTE1(Instance[1].monitor) )
    {
      BYTE1(Instance[1].monitor) = 0;
      AssetManager__LoadStart((AssetManager_o *)Instance, v4);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetManager__setDebugStatusOut(AssetManager_o *this, bool isUse, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *Instance; // x19
  bool v5; // w0

  if ( (byte_40FCA1A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isUse);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_40FCA1A = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Equality(Instance, 0LL, 0LL);
  if ( !Instance && !v5 )
    sub_B170D4();
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callbackFunc,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall AssetManager_LoadWaitStatus___ctor_23506268(
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)data, v5, v6, v7, v8, v9, v10);
}


void __fastcall AssetManager_LoadWaitStatus___ctor_23506320(
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)data, v9, v10, v11, v12, v13, v14);
  this->fields.callbackFunc2 = callbackFunc;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callbackFunc,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.resourceNames = resourceNames;
  sub_B16F98(
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

  if ( (byte_40F912B & 1) == 0 )
  {
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, callbackFunc);
    byte_40F912B = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = (BattleServantConfConponent_o *)&this->fields.callbackFunc2;
  v7 = (System_Int32_array **)System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)callbackFunc, 0LL);
  if ( v7 && *v7 != (System_Int32_array *)AssetLoader_LoadEndDataHandler_TypeInfo )
  {
    v14 = (AssetManager_LoadWaitStatus_o *)sub_B173C8(v7);
    AssetManager_LoadWaitStatus__get_Name(v14, v15);
  }
  else
  {
    p_callbackFunc2->klass = (BattleServantConfConponent_c *)v7;
    sub_B16F98(p_callbackFunc2, v7, v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall AssetManager_LoadWaitStatus__AddEntry(AssetManager_LoadWaitStatus_o *this, const MethodInfo *method)
{
  AssetData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_B170D4();
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
    LOBYTE(data) = AssetData__IsSame_29928224(data, type, name, 0LL);
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

  if ( (byte_40F912C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40F912C = 1;
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
  sub_B16F98(
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
  return (System_IAsyncResult_o *)sub_B16FA0(this, &v5, callback, object);
}


void __fastcall AssetManager_ResourceUnloadEventHandler__EndInvoke(
        AssetManager_ResourceUnloadEventHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


void __fastcall AssetManager_ResourceUnloadEventHandler__Invoke(
        AssetManager_ResourceUnloadEventHandler_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x8
  __int64 v5; // x23
  AssetManager_ResourceUnloadEventHandler_o **v6; // x24
  __int64 v7; // x25
  unsigned int v8; // w22
  __int64 class_0; // x0
  __int64 v10; // x8
  unsigned __int64 v11; // x10
  _DWORD *v12; // x11
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x0
  void (__fastcall **v16)(__int64 *, _QWORD); // x0
  AssetManager_ResourceUnloadEventHandler_o *v17; // x8
  __int64 *v18; // x20
  __int64 v19; // x21
  void (__fastcall *v20)(__int64); // x22
  char v21; // w22
  char v22; // w0
  __int64 v23; // x8
  __int64 v24; // x1
  __int64 v25; // x2
  unsigned __int64 v26; // x10
  _DWORD *v27; // x11
  AssetManager_ResourceUnloadEventHandler_o *v28; // [xsp+8h] [xbp-38h] BYREF

  v28 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v28;
    v5 = 1LL;
    goto LABEL_5;
  }
  v5 = *(_QWORD *)(v3 + 24);
  if ( v5 )
  {
    v6 = (AssetManager_ResourceUnloadEventHandler_o **)(v3 + 32);
LABEL_5:
    v7 = 0LL;
    while ( 1 )
    {
      v17 = v6[v7];
      v18 = *(__int64 **)&v17->fields.method;
      v19 = *(_QWORD *)&v17->fields.extra_arg;
      v20 = *(void (__fastcall **)(__int64))&v17->fields.method_ptr;
      if ( *(__int16 *)(v19 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v17->fields.extra_arg, method, v2);
      if ( (sub_B1702C(v19) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v19 + 74) )
        goto LABEL_35;
      v20(v19);
LABEL_36:
      if ( ++v7 == v5 )
        return;
    }
    if ( v18 && *(__int16 *)(v19 + 72) != -1 && (*(_BYTE *)(*v18 + 277) & 1) == 0 && this->fields.m_target )
    {
      v21 = sub_B17024(v19);
      v22 = sub_B17428(v19);
      if ( (v21 & 1) != 0 )
      {
        if ( (v22 & 1) != 0 )
        {
          v23 = *v18;
          v24 = *(_QWORD *)(v19 + 24);
          v25 = *(unsigned __int16 *)(v19 + 72);
          if ( *(_WORD *)(*v18 + 298) )
          {
            v26 = 0LL;
            v27 = (_DWORD *)(*(_QWORD *)(v23 + 176) + 8LL);
            while ( *((_QWORD *)v27 - 1) != v24 )
            {
              ++v26;
              v27 += 4;
              if ( v26 >= *(unsigned __int16 *)(*v18 + 298) )
                goto LABEL_34;
            }
            v15 = v23 + 16LL * (*v27 + (int)v25) + 312;
          }
          else
          {
LABEL_34:
            v15 = sub_AAFEF8(v18, v24, v25);
          }
          v14 = *(_QWORD *)(v15 + 8);
        }
        else
        {
          v14 = *(_QWORD *)(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 320);
        }
        v16 = (void (__fastcall **)(__int64 *, _QWORD))sub_B170AC(v14, v19);
        (*v16)(v18, v16);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v19 + 72);
        if ( (v22 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v19);
          v10 = *v18;
          if ( *(_WORD *)(*v18 + 298) )
          {
            v11 = 0LL;
            v12 = (_DWORD *)(*(_QWORD *)(v10 + 176) + 8LL);
            while ( *((_QWORD *)v12 - 1) != class_0 )
            {
              ++v11;
              v12 += 4;
              if ( v11 >= *(unsigned __int16 *)(*v18 + 298) )
                goto LABEL_11;
            }
            v13 = v10 + 16LL * (int)(*v12 + v8) + 312;
          }
          else
          {
LABEL_11:
            v13 = sub_AAFEF8(v18, class_0, v8);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v13)(v18, *(_QWORD *)(v13 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 312))(
            v18,
            *(_QWORD *)(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v20)(v18, v19);
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
      sub_B170D4();
    AssetManager__LoadStart(_4__this, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.__2__current, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_AssetManager__DelayLoadStart_d__148_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
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
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  int32_t _1__state; // w8
  struct AssetManager_o *_4__this; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *assetBundleReleaseDic; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  AssetData_o *currentValue; // x21
  struct AssetManager___c__DisplayClass117_0_o **p__8__1; // x21
  _BOOL4 isDispLogo_5__2; // w8
  CommonUI_o *Instance; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  AssetManager_c *klass; // x8
  Il2CppObject *v38; // x22
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_o *v45; // x22
  System_String_o *v46; // x23
  Il2CppObject *DownloadSizeString; // x0
  System_String_o *v48; // x23
  WebViewManager_o *v49; // x0
  Il2CppObject *v50; // x26
  CommonUI_o *v51; // x24
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  ErrorDialog_ClickDelegate_o *v56; // x25
  CommonUI_o *v57; // x0
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  UnityEngine_WaitForEndOfFrame_o *v61; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  bool result; // w0
  CommonUI_o *v70; // x21
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  System_Action_o *v75; // x22
  bool v76; // w0
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  AvalonSceneManager_c *v81; // x0
  float DEFAULT_FADE_TIME; // s8
  UnityEngine_WaitForSeconds_o *v83; // x20
  Il2CppObject **v84; // x19
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v91; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v92; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40F9127 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_b__117_0__, v6);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v7);
    sub_B16FFC(&ErrorDialog_ClickDelegate_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, v9);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v10);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v11);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v12);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_B16FFC(&Method_AssetManager___c__DisplayClass117_0__DownloadAssetStorageAttributeWithCheckDialog_b__1__, v16);
    sub_B16FFC(&AssetManager___c__DisplayClass117_0_TypeInfo, v17);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v18);
    sub_B16FFC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v19);
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, v20);
    sub_B16FFC(&StringLiteral_23732/*"データ更新"*/, v21);
    sub_B16FFC(&StringLiteral_9254/*"NETWORK_ERROR_DATA_UPDATE_TITLE"*/, v22);
    sub_B16FFC(&StringLiteral_280/*" ゲームデータの更新を行います。\n\n{0}\n\n ※Wi-Fi接続での更新を推奨します。"*/, v23);
    sub_B16FFC(&StringLiteral_9252/*"NETWORK_ERROR_DATA_UPDATE_EXP"*/, v24);
    byte_40F9127 = 1;
  }
  memset(&v92, 0, sizeof(v92));
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 2 )
  {
    isDispLogo_5__2 = this->fields._isDispLogo_5__2;
    this->fields.__1__state = -1;
    if ( isDispLogo_5__2 )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_60;
      CommonUI__SetLoadMode(Instance, 3, 0LL);
    }
LABEL_56:
    if ( _4__this )
    {
      HIDWORD(_4__this->fields.unloadCallbacks) = this->fields.loadParallelMax;
      AssetManager__LoadStart(_4__this, 0LL);
      return 0;
    }
    goto LABEL_60;
  }
  if ( _1__state == 1 )
  {
    p__8__1 = &this->fields.__8__1;
    this->fields.__1__state = -1;
LABEL_44:
    if ( !*p__8__1 )
      goto LABEL_60;
    if ( !(*p__8__1)->fields.isDataUpdate )
    {
LABEL_48:
      v61 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2, v3, v4);
      UnityEngine_WaitForEndOfFrame___ctor(v61, 0LL);
      this->fields.__2__current = (Il2CppObject *)v61;
      p__2__current = &this->fields.__2__current;
      sub_B16F98(
        (BattleServantConfConponent_o *)p__2__current,
        (System_Int32_array **)v61,
        v63,
        v64,
        v65,
        v66,
        v67,
        v68);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    v57 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v57 )
      goto LABEL_60;
    if ( CommonUI__isBusyDataUpdateDialog(v57, 0LL) )
      goto LABEL_48;
    *p__8__1 = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)p__8__1, 0LL, v2, v3, v4, v58, v59, v60);
    goto LABEL_50;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_60;
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)_4__this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_60;
  Values = System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
             assetBundleReleaseDic,
             (const MethodInfo_2DA39BC *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !Values )
    goto LABEL_60;
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v91,
    Values,
    (const MethodInfo_22866D8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v92 = v91;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v92,
            (const MethodInfo_26BE610 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__) )
  {
    currentValue = (AssetData_o *)v92.fields.currentValue;
    if ( !v92.fields.currentValue )
      sub_B170D4();
    if ( AssetData__IsDownloadOldVersion((AssetData_o *)v92.fields.currentValue, 0LL)
      || System_String__op_Equality(this->fields.attrib, currentValue->fields.attrib, 0LL)
      && AssetData__IsNeedUpdateVersion(currentValue, 0LL) )
    {
      AssetManager__AddLoadWaitStatus_29959396(_4__this, currentValue, 0LL);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v92,
    (const MethodInfo_26BE60C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  klass = _4__this[1].klass;
  if ( !klass )
LABEL_60:
    sub_B170D4();
  if ( SLODWORD(klass->_1.byval_arg.data) >= 1 )
  {
    v38 = (Il2CppObject *)sub_B170CC(AssetManager___c__DisplayClass117_0_TypeInfo, v33, v34, v35, v36);
    System_Object___ctor(v38, 0LL);
    this->fields.__8__1 = (struct AssetManager___c__DisplayClass117_0_o *)v38;
    p__8__1 = &this->fields.__8__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__8__1,
      (System_Int32_array **)v38,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
    if ( !this->fields.__8__1 )
      goto LABEL_60;
    this->fields.__8__1->fields.isDataUpdate = 0;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( LocalizationManager__ContainsKey((System_String_o *)StringLiteral_9254/*"NETWORK_ERROR_DATA_UPDATE_TITLE"*/, 0LL) )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v45 = LocalizationManager__Get((System_String_o *)StringLiteral_9254/*"NETWORK_ERROR_DATA_UPDATE_TITLE"*/, 0LL);
    }
    else
    {
      v45 = (System_String_o *)StringLiteral_23732/*"データ更新"*/;
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( LocalizationManager__ContainsKey((System_String_o *)StringLiteral_9252/*"NETWORK_ERROR_DATA_UPDATE_EXP"*/, 0LL) )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v46 = LocalizationManager__Get((System_String_o *)StringLiteral_9252/*"NETWORK_ERROR_DATA_UPDATE_EXP"*/, 0LL);
    }
    else
    {
      v46 = (System_String_o *)StringLiteral_280/*" ゲームデータの更新を行います。\n\n{0}\n\n ※Wi-Fi接続での更新を推奨します。"*/;
    }
    DownloadSizeString = (Il2CppObject *)AssetManager__GetDownloadSizeString(_4__this, 0LL);
    v48 = System_String__Format(v46, DownloadSizeString, 0LL);
    v49 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v50 = (Il2CppObject *)*p__8__1;
    v51 = (CommonUI_o *)v49;
    v56 = (ErrorDialog_ClickDelegate_o *)sub_B170CC(ErrorDialog_ClickDelegate_TypeInfo, v52, v53, v54, v55);
    ErrorDialog_ClickDelegate___ctor(
      v56,
      v50,
      Method_AssetManager___c__DisplayClass117_0__DownloadAssetStorageAttributeWithCheckDialog_b__1__,
      0LL);
    if ( !v51 )
      goto LABEL_60;
    CommonUI__OpenDataUpdateDialog(v51, v45, v48, v56, 0, 0LL);
    goto LABEL_44;
  }
LABEL_50:
  this->fields._isDispLogo_5__2 = 0;
  v70 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v75 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v71, v72, v73, v74);
  System_Action___ctor(
    v75,
    (Il2CppObject *)_4__this,
    Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_b__117_0__,
    0LL);
  if ( !v70 )
    goto LABEL_60;
  v76 = CommonUI__PlayLogo(v70, v75, 0LL);
  this->fields._isDispLogo_5__2 = v76;
  if ( !v76 )
    goto LABEL_56;
  v81 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v81 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v81->static_fields->DEFAULT_FADE_TIME;
  v83 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, v77, v78, v79, v80);
  UnityEngine_WaitForSeconds___ctor(v83, DEFAULT_FADE_TIME, 0LL);
  this->fields.__2__current = (Il2CppObject *)v83;
  v84 = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)v84, (System_Int32_array **)v83, v85, v86, v87, v88, v89, v90);
  *((_DWORD *)v84 - 2) = 2;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(
    &Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__117_System_Collections_IEnumerator_Reset__,
    v8);
  sub_B170A0();
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *assetBundleReleaseDic; // x0
  AssetManager_c *v53; // x0
  AssetManager_c *v54; // x0
  System_String_o *AllText; // x21
  System_String_o *v56; // x0
  __int64 v57; // x2
  UnityEngine_Networking_UnityWebRequest_o **p_loader_5__3; // x21
  UnityEngine_WaitForEndOfFrame_o *v59; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  bool result; // w0
  System_String_o *v68; // x21
  System_Char_array *v69; // x0
  __int64 v70; // x2
  System_String_o *v71; // x21
  __int64 v72; // x2
  System_Char_array *v73; // x0
  __int64 v74; // x2
  il2cpp_array_size_t max_length; // w8
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  int v82; // w23
  __int64 *v83; // x8
  System_String_o *v84; // x0
  System_String_o *v85; // x22
  System_String_o *v86; // x22
  System_String_o *v87; // x21
  System_Text_Encoding_o *UTF8; // x0
  System_Byte_array *v89; // x23
  uint32_t v90; // w23
  System_Char_array *v91; // x0
  __int64 v92; // x2
  il2cpp_array_size_t v93; // w8
  unsigned __int64 v94; // x0
  System_String_array *v95; // x1
  System_String_array *v96; // x28
  __int64 v97; // x8
  System_String_o *v98; // x0
  System_String_o *v99; // x21
  System_String_array *v100; // x22
  System_String_o *v101; // x0
  System_String_o *v102; // x0
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  AssetManager_c *v109; // x8
  System_Int32_array **v110; // x23
  struct AssetManager_StaticFields *v111; // x0
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  AssetManager_c *v118; // x0
  System_Int32_array ***v119; // x8
  System_Int32_array **v120; // x23
  struct AssetManager_StaticFields *v121; // x0
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  AssetManager_c *v128; // x0
  System_Int32_array ***v129; // x8
  System_Int32_array **v130; // x22
  struct AssetManager_StaticFields *v131; // x0
  int v132; // w8
  __int64 v133; // x23
  System_String_o *v134; // x21
  System_String_array *v135; // x0
  System_String_array *v136; // x22
  System_String_o *v137; // x0
  System_String_o *v138; // x0
  int32_t v139; // w21
  System_String_o *v140; // x0
  System_String_o *v141; // x24
  System_String_o *v142; // x0
  int32_t v143; // w25
  System_String_o *v144; // x0
  System_String_o *v145; // x0
  __int64 v146; // x3
  __int64 v147; // x4
  int v148; // w8
  System_String_o *v149; // x26
  uint32_t v150; // w27
  int32_t v151; // w24
  System_String_o *v152; // x28
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v153; // x22
  AssetData_o *v154; // x21
  System_String_o *v155; // x21
  AssetManager_c *v156; // x0
  struct AssetManager_StaticFields *static_fields; // x0
  System_Int32_array **v158; // x1
  System_Int32_array **v159; // x1
  struct AssetManager_StaticFields *v160; // x0
  System_String_array **v161; // x2
  System_String_array **v162; // x3
  System_Boolean_array **v163; // x4
  System_Int32_array **v164; // x5
  System_Int32_array *v165; // x6
  System_Int32_array *v166; // x7
  System_Int32_array **v167; // x1
  struct AssetManager_StaticFields *v168; // x0
  System_String_array **v169; // x2
  System_String_array **v170; // x3
  System_Boolean_array **v171; // x4
  System_Int32_array **v172; // x5
  System_Int32_array *v173; // x6
  System_Int32_array *v174; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v175; // x0
  ManagerConfig_c *v176; // x0
  struct ManagerConfig_StaticFields *v177; // x8
  CommonUI_o *Instance; // x22
  __int64 v179; // x1
  __int64 v180; // x2
  __int64 v181; // x3
  __int64 v182; // x4
  ErrorDialog_ClickDelegate_o *v183; // x23
  struct System_String_o *ConfigFileAddress; // x0
  System_String_array **v185; // x2
  System_String_array **v186; // x3
  System_Boolean_array **v187; // x4
  System_Int32_array **v188; // x5
  System_Int32_array *v189; // x6
  System_Int32_array *v190; // x7
  System_String_array **v191; // x2
  System_String_array **v192; // x3
  System_Boolean_array **v193; // x4
  System_Int32_array **v194; // x5
  System_Int32_array *v195; // x6
  System_Int32_array *v196; // x7
  System_String_o *configFileUrl_5__2; // x21
  System_String_o *UrlString; // x0
  struct UnityEngine_Networking_UnityWebRequest_o *v199; // x0
  System_String_array **v200; // x2
  System_String_array **v201; // x3
  System_Boolean_array **v202; // x4
  System_Int32_array **v203; // x5
  System_Int32_array *v204; // x6
  System_Int32_array *v205; // x7
  __int64 v206; // x1
  __int64 v207; // x2
  __int64 v208; // x3
  __int64 v209; // x4
  float unscaledTime; // s8
  ManagerConfig_c *v211; // x0
  float TIMEOUT; // s0
  UnityEngine_WaitForEndOfFrame_o *v213; // x22
  System_String_array **v214; // x2
  System_String_array **v215; // x3
  System_Boolean_array **v216; // x4
  System_Int32_array **v217; // x5
  System_Int32_array *v218; // x6
  System_Int32_array *v219; // x7
  float downloadProgress; // s0
  float loadProgress_5__5; // s9
  float v222; // s8
  System_String_array **v223; // x2
  System_String_array **v224; // x3
  System_Boolean_array **v225; // x4
  System_Int32_array **v226; // x5
  System_Int32_array *v227; // x6
  System_Int32_array *v228; // x7
  float v229; // s0
  bool v230; // zf
  float v231; // s8
  System_String_o *error; // x0
  bool IsNullOrEmpty; // w0
  UnityEngine_Networking_DownloadHandler_o *downloadHandler; // x0
  System_String_o *text; // x22
  System_String_o *v236; // x22
  __int64 v237; // x2
  System_String_o *v238; // x22
  System_String_o *v239; // x0
  System_String_o *v240; // x0
  Il2CppObject *v241; // x22
  ManagerConfig_c *v242; // x0
  struct ManagerConfig_StaticFields *v243; // x8
  UnityEngine_Networking_UnityWebRequest_o *loader_5__3; // x0
  Il2CppObject *wait_5__6; // x1
  System_String_o *v246; // x0
  System_String_o *v247; // x22
  __int64 v248; // x2
  il2cpp_array_size_t v249; // w8
  int32_t v250; // w0
  int32_t v251; // w24
  System_String_o *v252; // x23
  System_String_o *v253; // x22
  System_Text_Encoding_o *v254; // x0
  System_Byte_array *v255; // x24
  uint32_t v256; // w24
  System_String_array **v257; // x2
  System_String_array **v258; // x3
  System_Boolean_array **v259; // x4
  System_Int32_array **v260; // x5
  System_Int32_array *v261; // x6
  System_Int32_array *v262; // x7
  System_String_array **v263; // x2
  System_String_array **v264; // x3
  System_Boolean_array **v265; // x4
  System_Int32_array **v266; // x5
  System_Int32_array *v267; // x6
  System_Int32_array *v268; // x7
  il2cpp_array_size_t v269; // w8
  System_String_array *v270; // x28
  __int64 v271; // x1
  __int64 v272; // x2
  __int64 v273; // x3
  __int64 v274; // x4
  AssetDataListInfo_o *v275; // x22
  System_String_array **v276; // x3
  System_Boolean_array **v277; // x4
  System_Int32_array **v278; // x5
  System_Int32_array *v279; // x6
  System_Int32_array *v280; // x7
  int v281; // w8
  unsigned int v282; // w25
  System_String_o *v283; // x22
  System_String_array *v284; // x0
  System_String_array *v285; // x27
  System_String_o *v286; // x0
  char v287; // w8
  System_String_o *v288; // x0
  System_String_o *v289; // x0
  int v290; // w9
  void **v291; // x11
  AssetManager_c *v292; // x8
  System_String_o *v293; // x26
  bool v294; // cc
  System_Int32_array ***v295; // x9
  System_Int32_array ***v296; // x10
  System_Int32_array **v297; // x24
  System_Int32_array **v298; // x23
  System_String_o *v299; // x22
  System_String_o *v300; // x0
  System_String_o *v301; // x0
  System_String_o *v302; // x0
  int32_t v303; // w22
  System_String_o *v304; // x0
  System_String_o *v305; // x24
  System_String_o *v306; // x0
  int32_t v307; // w26
  System_String_o *v308; // x0
  System_String_o *v309; // x0
  int v310; // w8
  System_String_o *v311; // x23
  System_String_array **v312; // x2
  System_String_array **v313; // x3
  System_Boolean_array **v314; // x4
  System_Int32_array **v315; // x5
  System_Int32_array *v316; // x6
  System_Int32_array *v317; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v318; // x0
  System_String_array **v319; // x2
  System_String_array **v320; // x3
  System_Boolean_array **v321; // x4
  System_Int32_array **v322; // x5
  System_Int32_array *v323; // x6
  System_Int32_array *v324; // x7
  System_String_array **v325; // x2
  System_String_array **v326; // x3
  System_Boolean_array **v327; // x4
  System_Int32_array **v328; // x5
  System_Int32_array *v329; // x6
  System_Int32_array *v330; // x7
  AssetData_o *AssetData; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v332; // x27
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *fields; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v334; // x27
  System_String_o *v335; // x26
  int32_t v336; // w24
  AssetData_o *v337; // x22
  Il2CppObject *v338; // x22
  System_String_array **v339; // x2
  System_String_array **v340; // x3
  System_Boolean_array **v341; // x4
  System_Int32_array **v342; // x5
  System_Int32_array *v343; // x6
  System_Int32_array *v344; // x7
  ManagerConfig_c *v345; // x0
  struct ManagerConfig_StaticFields *v346; // x8
  CommonUI_o *v347; // x21
  __int64 v348; // x1
  __int64 v349; // x2
  __int64 v350; // x3
  __int64 v351; // x4
  ErrorDialog_ClickDelegate_o *v352; // x23
  UnityEngine_WaitForEndOfFrame_o *v353; // x20
  Il2CppObject **v354; // x19
  System_String_array **v355; // x2
  System_String_array **v356; // x3
  System_Boolean_array **v357; // x4
  System_Int32_array **v358; // x5
  System_Int32_array *v359; // x6
  System_Int32_array *v360; // x7
  int v361; // w8
  ManagementManager_c *v362; // x0
  _BOOL4 isDuringStartup; // w22
  CommonUI_o *v364; // x21
  System_String_o *v365; // x22
  __int64 v366; // x1
  __int64 v367; // x2
  __int64 v368; // x3
  __int64 v369; // x4
  ErrorDialog_ClickDelegate_o *v370; // x23
  System_String_o *v371; // x22
  __int64 v372; // x1
  __int64 v373; // x2
  __int64 v374; // x3
  __int64 v375; // x4
  ErrorDialog_ClickDelegate_o *v376; // x23
  UnityEngine_WaitForEndOfFrame_o *v377; // x20
  System_String_array **v378; // x2
  System_String_array **v379; // x3
  System_Boolean_array **v380; // x4
  System_Int32_array **v381; // x5
  System_Int32_array *v382; // x6
  System_Int32_array *v383; // x7
  UnityEngine_WaitForSeconds_o *v384; // x20
  System_String_array **v385; // x2
  System_String_array **v386; // x3
  System_Boolean_array **v387; // x4
  System_Int32_array **v388; // x5
  System_Int32_array *v389; // x6
  System_Int32_array *v390; // x7
  AssetManager_c *v391; // x0
  System_Int32_array **klass; // x23
  struct AssetManager_StaticFields *v393; // x0
  struct AssetManager_StaticFields *v394; // x0
  System_Int32_array **v395; // x1
  System_String_array **v396; // x2
  System_String_array **v397; // x3
  System_Boolean_array **v398; // x4
  System_Int32_array **v399; // x5
  System_Int32_array *v400; // x6
  System_Int32_array *v401; // x7
  struct AssetManager_StaticFields *v402; // x0
  System_Int32_array **v403; // x1
  System_String_array **v404; // x2
  System_String_array **v405; // x3
  System_Boolean_array **v406; // x4
  System_Int32_array **v407; // x5
  System_Int32_array *v408; // x6
  System_Int32_array *v409; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v410; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v411; // x0
  Il2CppObject *current; // x22
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v413; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v414; // x0
  BattleServantConfConponent_o *p_configFileUrl_5__2; // x19
  System_String_array **v416; // x2
  System_String_array **v417; // x3
  System_Boolean_array **v418; // x4
  System_Int32_array **v419; // x5
  System_Int32_array *v420; // x6
  System_Int32_array *v421; // x7
  __int64 v422; // x1
  __int64 v423; // x2
  __int64 v424; // x3
  __int64 v425; // x4
  UnityEngine_WaitForEndOfFrame_o *v426; // x20
  System_String_array **v427; // x2
  System_String_array **v428; // x3
  System_Boolean_array **v429; // x4
  System_Int32_array **v430; // x5
  System_Int32_array *v431; // x6
  System_Int32_array *v432; // x7
  System_Nullable_Vector2__o methoda; // [xsp+0h] [xbp-100h]
  System_Nullable_Vector2__o methodb; // [xsp+0h] [xbp-100h]
  int32_t size; // [xsp+24h] [xbp-DCh]
  System_String_o *keyType; // [xsp+28h] [xbp-D8h]
  uint32_t crc; // [xsp+34h] [xbp-CCh]
  BattleServantConfConponent_o *p_fields; // [xsp+38h] [xbp-C8h]
  BattleServantConfConponent_o *p_dateVersion; // [xsp+40h] [xbp-C0h]
  System_String_array *v440; // [xsp+48h] [xbp-B8h]
  BattleServantConfConponent_o *p_buildVersion; // [xsp+48h] [xbp-B8h]
  System_String_o *attrib; // [xsp+50h] [xbp-B0h]
  System_String_o *attriba; // [xsp+50h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_T__o v444; // [xsp+58h] [xbp-A8h] BYREF
  int v445; // [xsp+78h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_T__o v446; // [xsp+80h] [xbp-80h] BYREF

  if ( (byte_40F9128 & 1) == 0 )
  {
    sub_B16FFC(&AssetDataListInfo_TypeInfo, method);
    sub_B16FFC(&AssetData_TypeInfo, v9);
    sub_B16FFC(&Method_AssetManager_OnClickRetryDialog__, v10);
    sub_B16FFC(&Method_AssetManager_OnClickWaitDebugDialog__, v11);
    sub_B16FFC(&AssetManager_TypeInfo, v12);
    sub_B16FFC(&CatAndMouseGame_TypeInfo, v13);
    sub_B16FFC(&char___TypeInfo, v14);
    sub_B16FFC(&ErrorDialog_ClickDelegate_TypeInfo, v15);
    sub_B16FFC(&Crc32_TypeInfo, v16);
    sub_B16FFC(&UnityEngine_Debug_TypeInfo, v17);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AssetData__Add__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AssetData__set_Item__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__, v25);
    sub_B16FFC(&Method_System_Collections_Generic_List_AssetData__Add__, v26);
    sub_B16FFC(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__, v27);
    sub_B16FFC(&LocalizationManager_TypeInfo, v28);
    sub_B16FFC(&ManagementManager_TypeInfo, v29);
    sub_B16FFC(&ManagerConfig_TypeInfo, v30);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v31);
    sub_B16FFC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v32);
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, v33);
    sub_B16FFC(&StringLiteral_2107/*"AssetStorageList download time over"*/, v34);
    sub_B16FFC(&StringLiteral_2103/*"AssetStorageList download crc error"*/, v35);
    sub_B16FFC(&StringLiteral_2099/*"AssetStorage boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/, v36);
    sub_B16FFC(&StringLiteral_1743/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, v37);
    sub_B16FFC(&StringLiteral_2095/*"AssetStorage boot load crc error : チェックサム値が不一致"*/, v38);
    sub_B16FFC(&StringLiteral_15682/*"[FFFF80]Download error for debug"*/, v39);
    sub_B16FFC(&StringLiteral_2104/*"AssetStorageList download data error"*/, v40);
    sub_B16FFC(&StringLiteral_2106/*"AssetStorageList download error : "*/, v41);
    sub_B16FFC(&StringLiteral_2097/*"AssetStorage boot load error : アセットバンドルリスト作成失敗"*/, v42);
    sub_B16FFC(&StringLiteral_23604/*"~"*/, v43);
    sub_B16FFC(&StringLiteral_2098/*"AssetStorage boot load error : ファイル先頭の１行目の内容が空"*/, v44);
    sub_B16FFC(&StringLiteral_11549/*"SCRIPT"*/, v45);
    sub_B16FFC(&StringLiteral_1533/*"@"*/, v46);
    sub_B16FFC(&StringLiteral_1744/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, v47);
    sub_B16FFC(&StringLiteral_1/*""*/, v48);
    byte_40F9128 = 1;
  }
  memset(&v446, 0, sizeof(v446));
  v445 = 0;
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
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
      assetBundleReleaseDic = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)_4__this->fields.assetBundleReleaseDic;
      if ( !assetBundleReleaseDic )
        goto LABEL_314;
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
             assetBundleReleaseDic,
             (const MethodInfo_2DA3814 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) )
      {
        goto LABEL_136;
      }
      v53 = AssetManager_TypeInfo;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v53 = AssetManager_TypeInfo;
      }
      if ( !System_IO_File__Exists(v53->static_fields->cacheListFileName, 0LL) )
        goto LABEL_136;
      v54 = AssetManager_TypeInfo;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v54 = AssetManager_TypeInfo;
      }
      AllText = System_IO_File__ReadAllText(v54->static_fields->cacheListFileName, 0LL);
      if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      }
      v56 = CatAndMouseGame__MouseGame8(AllText, 0LL);
      v68 = v56;
      if ( !v56 )
        goto LABEL_136;
      v69 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v57);
      if ( !v69 )
        sub_B170D4();
      if ( !v69->max_length )
      {
        sub_B17100(v69, v69, v70);
        sub_B170A0();
      }
      v69->m_Items[2] = -257;
      v71 = System_String__Trim(v68, v69, 0LL);
      v73 = (System_Char_array *)sub_B17014(char___TypeInfo, 2LL, v72);
      if ( !v73 )
        sub_B170D4();
      max_length = v73->max_length;
      if ( !max_length )
      {
        sub_B17100(v73, v73, v74);
        sub_B170A0();
      }
      v73->m_Items[2] = 13;
      if ( max_length == 1 )
      {
        sub_B17100(v73, v73, v74);
        sub_B170A0();
      }
      v73->m_Items[3] = 10;
      if ( !v71 )
        sub_B170D4();
      v82 = System_String__IndexOfAny(v71, v73, 0LL);
      if ( v82 < 2 )
      {
        v83 = &StringLiteral_2098/*"AssetStorage boot load error : ファイル先頭の１行目の内容が空"*/;
        goto LABEL_109;
      }
      v84 = System_String__Substring_43807468(v71, 0, v82, 0LL);
      v85 = v84;
      if ( !v84 )
        sub_B170D4();
      if ( !System_String__StartsWith(v84, (System_String_o *)StringLiteral_23604/*"~"*/, 0LL) )
      {
        v83 = &StringLiteral_2099/*"AssetStorage boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
        goto LABEL_109;
      }
      v86 = System_String__Substring(v85, 1, 0LL);
      v87 = System_String__Substring(v71, v82 + 1, 0LL);
      UTF8 = System_Text_Encoding__get_UTF8(0LL);
      if ( !UTF8 )
        sub_B170D4();
      v89 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                                   UTF8,
                                   v87,
                                   UTF8->klass->vtable._19_GetBytes.methodPtr);
      if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v90 = Crc32__Compute(v89, 0LL);
      if ( System_UInt32__Parse(v86, 0LL) != v90 )
      {
        v83 = &StringLiteral_2095/*"AssetStorage boot load crc error : チェックサム値が不一致"*/;
        goto LABEL_109;
      }
      v91 = (System_Char_array *)sub_B17014(char___TypeInfo, 2LL, v76);
      if ( !v91 )
        sub_B170D4();
      v93 = v91->max_length;
      if ( !v93 )
      {
        sub_B17100(v91, v91, v92);
        sub_B170A0();
      }
      v91->m_Items[2] = 13;
      if ( v93 == 1 )
      {
        sub_B17100(v91, v91, v92);
        sub_B170A0();
      }
      v91->m_Items[3] = 10;
      if ( !v87 )
        sub_B170D4();
      v94 = (unsigned __int64)System_String__Split_43804516(v87, v91, 1, 0LL);
      v96 = (System_String_array *)v94;
      if ( !v94 )
        goto LABEL_136;
      v97 = *(_QWORD *)(v94 + 24);
      if ( !v97 )
        goto LABEL_108;
      if ( !(_DWORD)v97 )
        goto LABEL_315;
      v98 = *(System_String_o **)(v94 + 32);
      if ( !v98 )
        goto LABEL_314;
      v94 = System_String__StartsWith(v98, (System_String_o *)StringLiteral_1533/*"@"*/, 0LL);
      if ( (v94 & 1) == 0 )
      {
LABEL_108:
        v83 = &StringLiteral_2097/*"AssetStorage boot load error : アセットバンドルリスト作成失敗"*/;
LABEL_109:
        v155 = (System_String_o *)*v83;
        if ( *v83 )
        {
          v156 = AssetManager_TypeInfo;
          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
            v156 = AssetManager_TypeInfo;
          }
          static_fields = v156->static_fields;
          v158 = (System_Int32_array **)StringLiteral_1/*""*/;
          static_fields->assetBundleMasterVersion = (struct System_String_o *)StringLiteral_1/*""*/;
          sub_B16F98(
            (BattleServantConfConponent_o *)&static_fields->assetBundleMasterVersion,
            v158,
            v76,
            v77,
            v78,
            v79,
            v80,
            v81);
          v159 = (System_Int32_array **)StringLiteral_1/*""*/;
          v160 = AssetManager_TypeInfo->static_fields;
          v160->assetBundleDateVersion = (struct System_String_o *)StringLiteral_1/*""*/;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v160->assetBundleDateVersion,
            v159,
            v161,
            v162,
            v163,
            v164,
            v165,
            v166);
          v167 = (System_Int32_array **)StringLiteral_1/*""*/;
          v168 = AssetManager_TypeInfo->static_fields;
          v168->assetBundleBuildVersion = (struct System_String_o *)StringLiteral_1/*""*/;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v168->assetBundleBuildVersion,
            v167,
            v169,
            v170,
            v171,
            v172,
            v173,
            v174);
          v175 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)_4__this->fields.assetBundleReleaseDic;
          if ( !v175 )
            goto LABEL_314;
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
            v175,
            (const MethodInfo_2DA3DF4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
          v176 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v176 = ManagerConfig_TypeInfo;
          }
          v177 = v176->static_fields;
          if ( v177->UseDebugCommand )
          {
            if ( (BYTE3(v176->vtable._0_Equals.methodPtr) & 4) != 0 && !v176->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v176);
              v177 = ManagerConfig_TypeInfo->static_fields;
            }
            if ( System_String__op_Inequality(v177->ServerDefaultType, (System_String_o *)StringLiteral_11549/*"SCRIPT"*/, 0LL) )
            {
              LOBYTE(_4__this->fields.writeRequestThread) = 1;
              Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v183 = (ErrorDialog_ClickDelegate_o *)sub_B170CC(
                                                      ErrorDialog_ClickDelegate_TypeInfo,
                                                      v179,
                                                      v180,
                                                      v181,
                                                      v182);
              ErrorDialog_ClickDelegate___ctor(
                v183,
                (Il2CppObject *)_4__this,
                Method_AssetManager_OnClickWaitDebugDialog__,
                0LL);
              if ( !Instance )
                goto LABEL_314;
              methoda.fields.value = 0LL;
              *(_DWORD *)&methoda.fields.has_value = 0;
              CommonUI__OpenWarningDialog(
                Instance,
                (System_String_o *)StringLiteral_15682/*"[FFFF80]Download error for debug"*/,
                v155,
                v183,
                1,
                0,
                -1.0,
                1,
                methoda,
                0LL);
LABEL_32:
              if ( LOBYTE(_4__this->fields.writeRequestThread) )
              {
                v59 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(
                                                           UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                           method,
                                                           v2,
                                                           v3,
                                                           v4);
                UnityEngine_WaitForEndOfFrame___ctor(v59, 0LL);
                this->fields.__2__current = (Il2CppObject *)v59;
                p__2__current = &this->fields.__2__current;
                sub_B16F98(
                  (BattleServantConfConponent_o *)p__2__current,
                  (System_Int32_array **)v59,
                  v61,
                  v62,
                  v63,
                  v64,
                  v65,
                  v66);
                result = 1;
                *((_DWORD *)p__2__current - 2) = 1;
                return result;
              }
            }
          }
        }
        goto LABEL_136;
      }
      if ( !v96->max_length )
        goto LABEL_315;
      v99 = v96->m_Items[0];
      v94 = sub_B17014(char___TypeInfo, 1LL, v76);
      if ( !v94 )
        goto LABEL_314;
      v95 = (System_String_array *)v94;
      if ( !*(_DWORD *)(v94 + 24) )
        goto LABEL_315;
      *(_WORD *)(v94 + 32) = 44;
      if ( !v99 )
        goto LABEL_314;
      v94 = (unsigned __int64)System_String__Split(v99, (System_Char_array *)v94, 0LL);
      if ( !v94 )
        goto LABEL_314;
      v100 = (System_String_array *)v94;
      if ( !*(_DWORD *)(v94 + 24) )
        goto LABEL_315;
      v101 = *(System_String_o **)(v94 + 32);
      if ( !v101 )
        goto LABEL_314;
      v102 = System_String__Substring(v101, 1, 0LL);
      v109 = AssetManager_TypeInfo;
      v110 = (System_Int32_array **)v102;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v109 = AssetManager_TypeInfo;
      }
      v111 = v109->static_fields;
      v111->assetBundleMasterVersion = (struct System_String_o *)v110;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v111->assetBundleMasterVersion,
        v110,
        v103,
        v104,
        v105,
        v106,
        v107,
        v108);
      v118 = AssetManager_TypeInfo;
      if ( (int)v100->max_length <= 1 )
        v119 = (System_Int32_array ***)&StringLiteral_1/*""*/;
      else
        v119 = (System_Int32_array ***)&v100->m_Items[1];
      v120 = *v119;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v118 = AssetManager_TypeInfo;
      }
      v121 = v118->static_fields;
      v121->assetBundleDateVersion = (struct System_String_o *)v120;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v121->assetBundleDateVersion,
        v120,
        v112,
        v113,
        v114,
        v115,
        v116,
        v117);
      v128 = AssetManager_TypeInfo;
      if ( (int)v100->max_length <= 2 )
        v129 = (System_Int32_array ***)&StringLiteral_1/*""*/;
      else
        v129 = (System_Int32_array ***)&v100->m_Items[2];
      v130 = *v129;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v128 = AssetManager_TypeInfo;
      }
      v131 = v128->static_fields;
      v131->assetBundleBuildVersion = (struct System_String_o *)v130;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v131->assetBundleBuildVersion,
        v130,
        v122,
        v123,
        v124,
        v125,
        v126,
        v127);
      v132 = v96->max_length;
      if ( v132 >= 2 )
      {
        v133 = 5LL;
        v440 = v96;
        while ( (int)v133 - 4 < (unsigned int)v132 )
        {
          v134 = (System_String_o *)*((_QWORD *)&v96->obj.klass + v133);
          v94 = sub_B17014(char___TypeInfo, 1LL, v76);
          if ( !v94 )
            goto LABEL_314;
          v95 = (System_String_array *)v94;
          if ( !*(_DWORD *)(v94 + 24) )
            break;
          *(_WORD *)(v94 + 32) = 44;
          if ( !v134 )
            goto LABEL_314;
          v135 = System_String__Split(v134, (System_Char_array *)v94, 0LL);
          if ( !v135 )
            goto LABEL_314;
          v136 = v135;
          if ( (int)v135->max_length < 5 )
            goto LABEL_136;
          v137 = v135->m_Items[0];
          if ( !v137 )
            goto LABEL_314;
          v138 = System_String__Trim_43731064(v137, 0LL);
          v94 = System_Int32__Parse(v138, 0LL);
          if ( v136->max_length < 3 )
            goto LABEL_315;
          v139 = v94;
          v140 = v136->m_Items[2];
          if ( !v140 )
            goto LABEL_314;
          v141 = v136->m_Items[1];
          v142 = System_String__Trim_43731064(v140, 0LL);
          v94 = System_Int32__Parse(v142, 0LL);
          if ( v136->max_length <= 3 )
            goto LABEL_315;
          v143 = v94;
          v144 = v136->m_Items[3];
          if ( !v144 )
            goto LABEL_314;
          v145 = System_String__Trim_43731064(v144, 0LL);
          v94 = System_UInt32__Parse(v145, 0LL);
          v148 = v136->max_length;
          if ( (unsigned int)v148 <= 4 )
            goto LABEL_315;
          v149 = v136->m_Items[4];
          v150 = v94;
          attrib = v141;
          v151 = v139;
          v152 = v148 >= 6 ? v136->m_Items[5] : 0LL;
          v153 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)_4__this->fields.assetBundleReleaseDic;
          v154 = (AssetData_o *)sub_B170CC(AssetData_TypeInfo, v95, v76, v146, v147);
          AssetData___ctor_29927896(v154, 0, v149, v151, attrib, v143, v150, v152, 0LL);
          if ( !v153 )
            goto LABEL_314;
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
            v153,
            (System_Xml_XmlQualifiedName_o *)v149,
            (System_Xml_Schema_XmlSchemaObject_o *)v154,
            (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__set_Item__);
          v96 = v440;
          ++v133;
          v132 = v440->max_length;
          if ( (int)v133 - 4 >= v132 )
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
      ConfigFileAddress = AssetManager__get_ConfigFileAddress(0LL);
      this->fields._configFileUrl_5__2 = ConfigFileAddress;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._configFileUrl_5__2,
        (System_Int32_array **)ConfigFileAddress,
        v185,
        v186,
        v187,
        v188,
        v189,
        v190);
      this->fields._loader_5__3 = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields._loader_5__3, 0LL, v191, v192, v193, v194, v195, v196);
LABEL_140:
      configFileUrl_5__2 = this->fields._configFileUrl_5__2;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      UrlString = AssetManager__getUrlString(configFileUrl_5__2, 0LL);
      v199 = UnityEngine_Networking_UnityWebRequest__Get(UrlString, 0LL);
      this->fields._loader_5__3 = v199;
      p_loader_5__3 = &this->fields._loader_5__3;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._loader_5__3,
        (System_Int32_array **)v199,
        v200,
        v201,
        v202,
        v203,
        v204,
        v205);
      if ( !this->fields._loader_5__3 )
        goto LABEL_314;
      UnityEngine_Networking_UnityWebRequest__SendWebRequest(this->fields._loader_5__3, 0LL);
      unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
      v211 = ManagerConfig_TypeInfo;
      if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v211 = ManagerConfig_TypeInfo;
      }
      TIMEOUT = v211->static_fields->TIMEOUT;
      this->fields._loadProgress_5__5 = 0.0;
      this->fields._requestTime_5__4 = unscaledTime + TIMEOUT;
      v213 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(
                                                  UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                  v206,
                                                  v207,
                                                  v208,
                                                  v209);
      UnityEngine_WaitForEndOfFrame___ctor(v213, 0LL);
      this->fields._wait_5__6 = v213;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._wait_5__6,
        (System_Int32_array **)v213,
        v214,
        v215,
        v216,
        v217,
        v218,
        v219);
LABEL_148:
      if ( !*p_loader_5__3 )
        goto LABEL_314;
      if ( UnityEngine_Networking_UnityWebRequest__get_isDone(*p_loader_5__3, 0LL) )
        goto LABEL_321;
      if ( !*p_loader_5__3 )
        goto LABEL_314;
      downloadProgress = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(*p_loader_5__3, 0LL);
      loadProgress_5__5 = this->fields._loadProgress_5__5;
      v222 = downloadProgress;
      v229 = UnityEngine_Time__get_unscaledTime(0LL);
      v230 = v222 == loadProgress_5__5;
      v231 = v229;
      if ( !v230 )
      {
        v242 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v242 = ManagerConfig_TypeInfo;
        }
        v243 = v242->static_fields;
        loader_5__3 = this->fields._loader_5__3;
        this->fields._requestTime_5__4 = v231 + v243->TIMEOUT;
        if ( loader_5__3 )
        {
          this->fields._loadProgress_5__5 = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                                              loader_5__3,
                                              0LL);
          goto LABEL_175;
        }
LABEL_314:
        sub_B170D4();
      }
      if ( v229 >= this->fields._requestTime_5__4 )
      {
LABEL_321:
        if ( !_4__this || !*p_loader_5__3 )
          goto LABEL_314;
        if ( !UnityEngine_Networking_UnityWebRequest__get_isDone(*p_loader_5__3, 0LL) )
        {
          v241 = (Il2CppObject *)StringLiteral_2107/*"AssetStorageList download time over"*/;
          goto LABEL_260;
        }
        if ( !*p_loader_5__3 )
          goto LABEL_314;
        error = UnityEngine_Networking_UnityWebRequest__get_error(*p_loader_5__3, 0LL);
        IsNullOrEmpty = System_String__IsNullOrEmpty(error, 0LL);
        if ( !*p_loader_5__3 )
          goto LABEL_314;
        if ( !IsNullOrEmpty )
        {
          v240 = UnityEngine_Networking_UnityWebRequest__get_error(*p_loader_5__3, 0LL);
LABEL_177:
          v241 = (Il2CppObject *)v240;
          goto LABEL_260;
        }
        downloadHandler = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(*p_loader_5__3, 0LL);
        if ( !downloadHandler )
          goto LABEL_314;
        text = UnityEngine_Networking_DownloadHandler__get_text(downloadHandler, 0LL);
        if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
        }
        v236 = CatAndMouseGame__MouseGame3(text, 0LL);
        if ( System_String__IsNullOrEmpty(v236, 0LL) )
        {
          v238 = this->fields._configFileUrl_5__2;
          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          }
          v239 = AssetManager__getUrlString(v238, 0LL);
          v240 = System_String__Concat_43743732((System_String_o *)StringLiteral_2106/*"AssetStorageList download error : "*/, v239, 0LL);
          goto LABEL_177;
        }
        v94 = sub_B17014(char___TypeInfo, 1LL, v237);
        if ( !v94 )
          goto LABEL_314;
        v95 = (System_String_array *)v94;
        if ( !*(_DWORD *)(v94 + 24) )
          goto LABEL_315;
        *(_WORD *)(v94 + 32) = -257;
        if ( !v236 )
          goto LABEL_314;
        v246 = System_String__Trim(v236, (System_Char_array *)v94, 0LL);
        if ( !v246 )
          goto LABEL_314;
        v247 = v246;
        if ( System_String__StartsWith(v246, (System_String_o *)StringLiteral_23604/*"~"*/, 0LL) )
        {
          v94 = sub_B17014(char___TypeInfo, 2LL, v248);
          if ( !v94 )
            goto LABEL_314;
          v249 = *(_DWORD *)(v94 + 24);
          v95 = (System_String_array *)v94;
          if ( !v249 )
            goto LABEL_315;
          *(_WORD *)(v94 + 32) = 13;
          if ( v249 == 1 )
            goto LABEL_315;
          *(_WORD *)(v94 + 34) = 10;
          v250 = System_String__IndexOfAny(v247, (System_Char_array *)v94, 0LL);
          if ( v250 >= 2 )
          {
            v251 = v250;
            v252 = System_String__Substring_43807468(v247, 1, v250 - 1, 0LL);
            v253 = System_String__Substring(v247, v251 + 1, 0LL);
            v254 = System_Text_Encoding__get_UTF8(0LL);
            if ( !v254 )
              goto LABEL_314;
            v255 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))v254->klass->vtable._18_GetBytes.method)(
                                          v254,
                                          v253,
                                          v254->klass->vtable._19_GetBytes.methodPtr);
            if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
            v256 = Crc32__Compute(v255, 0LL);
            if ( System_UInt32__Parse(v252, 0LL) == v256 )
            {
              if ( *p_loader_5__3 )
              {
                UnityEngine_Networking_UnityWebRequest__Dispose(*p_loader_5__3, 0LL);
                *p_loader_5__3 = 0LL;
                sub_B16F98((BattleServantConfConponent_o *)p_loader_5__3, 0LL, v263, v264, v265, v266, v267, v268);
              }
              if ( !v253 )
                goto LABEL_313;
              v94 = sub_B17014(char___TypeInfo, 2LL, v257);
              if ( !v94 )
                goto LABEL_314;
              v269 = *(_DWORD *)(v94 + 24);
              v95 = (System_String_array *)v94;
              if ( v269 )
              {
                *(_WORD *)(v94 + 32) = 13;
                if ( v269 != 1 )
                {
                  *(_WORD *)(v94 + 34) = 10;
                  v270 = System_String__Split_43804516(v253, (System_Char_array *)v94, 1, 0LL);
                  v275 = (AssetDataListInfo_o *)sub_B170CC(AssetDataListInfo_TypeInfo, v271, v272, v273, v274);
                  AssetDataListInfo___ctor(v275, 0LL);
                  if ( !v270 )
                    goto LABEL_314;
                  v281 = v270->max_length;
                  p_fields = (BattleServantConfConponent_o *)&v275->fields;
                  p_dateVersion = (BattleServantConfConponent_o *)&v275->fields.dateVersion;
                  p_buildVersion = (BattleServantConfConponent_o *)&v275->fields.buildVersion;
                  attriba = (System_String_o *)v275;
                  if ( v281 >= 1 )
                  {
                    v282 = 0;
                    while ( v282 < v281 )
                    {
                      v283 = v270->m_Items[v282];
                      v94 = sub_B17014(char___TypeInfo, 1LL, v76);
                      if ( !v94 )
                        goto LABEL_314;
                      v95 = (System_String_array *)v94;
                      if ( !*(_DWORD *)(v94 + 24) )
                        break;
                      *(_WORD *)(v94 + 32) = 44;
                      if ( !v283 )
                        goto LABEL_314;
                      v284 = System_String__Split(v283, (System_Char_array *)v94, 0LL);
                      if ( !v284 )
                        goto LABEL_314;
                      v285 = v284;
                      if ( (int)v284->max_length < 1 )
                        goto LABEL_299;
                      v286 = v284->m_Items[0];
                      if ( !v286 )
                        goto LABEL_314;
                      v94 = System_String__StartsWith(v286, (System_String_o *)StringLiteral_1533/*"@"*/, 0LL);
                      if ( !v285->max_length )
                        goto LABEL_315;
                      v287 = v94;
                      v288 = v285->m_Items[0];
                      if ( !v288 )
                        goto LABEL_314;
                      if ( (v287 & 1) != 0 )
                      {
                        v289 = System_String__Substring(v288, 1, 0LL);
                        v290 = v285->max_length;
                        v291 = (void **)&v285->m_Items[2];
                        v292 = AssetManager_TypeInfo;
                        v293 = v289;
                        if ( v290 == 2 )
                          v291 = &StringLiteral_1/*""*/;
                        v294 = v290 <= 1;
                        if ( v290 <= 1 )
                          v295 = (System_Int32_array ***)&StringLiteral_1/*""*/;
                        else
                          v295 = (System_Int32_array ***)&v285->m_Items[1];
                        if ( v294 )
                          v296 = (System_Int32_array ***)&StringLiteral_1/*""*/;
                        else
                          v296 = (System_Int32_array ***)v291;
                        v297 = *v295;
                        v298 = *v296;
                        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
                        {
                          v299 = attriba;
                          if ( !AssetManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                            v292 = AssetManager_TypeInfo;
                          }
                        }
                        else
                        {
                          v299 = attriba;
                        }
                        if ( System_String__op_Inequality(v293, v292->static_fields->assetBundleMasterVersion, 0LL) )
                        {
                          v318 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)_4__this->fields.assetBundleReleaseDic;
                          if ( !v318 )
                            goto LABEL_314;
                          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
                            v318,
                            (const MethodInfo_2DA3DF4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
                        }
                        if ( !v299 )
                          goto LABEL_314;
                        p_fields->klass = (BattleServantConfConponent_c *)v293;
                        sub_B16F98(p_fields, (System_Int32_array **)v293, v312, v313, v314, v315, v316, v317);
                        p_dateVersion->klass = (BattleServantConfConponent_c *)v297;
                        sub_B16F98(p_dateVersion, v297, v319, v320, v321, v322, v323, v324);
                        p_buildVersion->klass = (BattleServantConfConponent_c *)v298;
                        sub_B16F98(p_buildVersion, v298, v325, v326, v327, v328, v329, v330);
                      }
                      else
                      {
                        v94 = System_String__StartsWith(v288, (System_String_o *)StringLiteral_23604/*"~"*/, 0LL);
                        if ( (v94 & 1) == 0 )
                        {
                          if ( !v285->max_length )
                            goto LABEL_315;
                          v300 = v285->m_Items[0];
                          if ( !v300 )
                            goto LABEL_314;
                          v94 = System_String__IndexOf(v300, 0x7Eu, 0LL);
                          if ( (_DWORD)v94 != 1 )
                          {
                            if ( (int)v285->max_length < 5 )
                              goto LABEL_299;
                            v301 = v285->m_Items[0];
                            if ( !v301 )
                              goto LABEL_314;
                            v302 = System_String__Trim_43731064(v301, 0LL);
                            v94 = System_Int32__Parse(v302, 0LL);
                            if ( v285->max_length < 3 )
                              goto LABEL_315;
                            v303 = v94;
                            v304 = v285->m_Items[2];
                            if ( !v304 )
                              goto LABEL_314;
                            v305 = v285->m_Items[1];
                            v306 = System_String__Trim_43731064(v304, 0LL);
                            v94 = System_Int32__Parse(v306, 0LL);
                            if ( v285->max_length <= 3 )
                              goto LABEL_315;
                            v307 = v94;
                            v308 = v285->m_Items[3];
                            if ( !v308 )
                              goto LABEL_314;
                            v309 = System_String__Trim_43731064(v308, 0LL);
                            v94 = System_UInt32__Parse(v309, 0LL);
                            v310 = v285->max_length;
                            crc = v94;
                            if ( (unsigned int)v310 <= 4 )
                              goto LABEL_315;
                            v311 = v285->m_Items[4];
                            if ( v310 >= 6 )
                              keyType = v285->m_Items[5];
                            else
                              keyType = 0LL;
                            AssetData = AssetManager__GetAssetData(
                                          _4__this,
                                          _4__this->fields.assetBundleReleaseDic,
                                          v311,
                                          0LL);
                            if ( AssetData )
                            {
                              v332 = (EventMissionProgressRequest_Argument_ProgressData_o *)AssetData;
                              AssetData__SetUpdateInfo(AssetData, v303, v305, v307, crc, keyType, 0LL);
                              if ( !attriba )
                                goto LABEL_314;
                              fields = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)attriba[1].fields;
                              if ( !fields )
                                goto LABEL_314;
                              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                fields,
                                v332,
                                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_AssetData__Add__);
                              v311 = 0LL;
                            }
                            v94 = System_String__IsNullOrEmpty(v311, 0LL);
                            if ( (v94 & 1) == 0 )
                            {
                              size = v307;
                              if ( !attriba )
                                goto LABEL_314;
                              v334 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)attriba[1].fields;
                              v335 = v305;
                              v336 = v303;
                              v337 = (AssetData_o *)sub_B170CC(AssetData_TypeInfo, v95, v76, v276, v277);
                              AssetData___ctor_29928040(v337, 0, v311, 0, v336, v335, size, crc, keyType, 0LL);
                              if ( !v334 )
                                goto LABEL_314;
                              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                v334,
                                (EventMissionProgressRequest_Argument_ProgressData_o *)v337,
                                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_AssetData__Add__);
                            }
                          }
                        }
                      }
                      v281 = v270->max_length;
                      if ( (int)++v282 >= v281 )
                        goto LABEL_299;
                    }
                    goto LABEL_315;
                  }
LABEL_299:
                  if ( !attriba )
                    goto LABEL_314;
                  v391 = AssetManager_TypeInfo;
                  klass = (System_Int32_array **)p_fields->klass;
                  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !AssetManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                    v391 = AssetManager_TypeInfo;
                  }
                  v393 = v391->static_fields;
                  v393->assetBundleMasterVersion = (struct System_String_o *)klass;
                  sub_B16F98(
                    (BattleServantConfConponent_o *)&v393->assetBundleMasterVersion,
                    klass,
                    v76,
                    v276,
                    v277,
                    v278,
                    v279,
                    v280);
                  v394 = AssetManager_TypeInfo->static_fields;
                  v395 = (System_Int32_array **)p_dateVersion->klass;
                  v394->assetBundleDateVersion = (struct System_String_o *)p_dateVersion->klass;
                  sub_B16F98(
                    (BattleServantConfConponent_o *)&v394->assetBundleDateVersion,
                    v395,
                    v396,
                    v397,
                    v398,
                    v399,
                    v400,
                    v401);
                  v402 = AssetManager_TypeInfo->static_fields;
                  v403 = (System_Int32_array **)p_buildVersion->klass;
                  v402->assetBundleBuildVersion = (struct System_String_o *)p_buildVersion->klass;
                  sub_B16F98(
                    (BattleServantConfConponent_o *)&v402->assetBundleBuildVersion,
                    v403,
                    v404,
                    v405,
                    v406,
                    v407,
                    v408,
                    v409);
                  v410 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)_4__this->fields.assetBundleReleaseDic;
                  if ( !v410 )
                    goto LABEL_314;
                  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
                    v410,
                    (const MethodInfo_2DA3DF4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
                  v411 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)attriba[1].fields;
                  if ( !v411 )
                    goto LABEL_314;
                  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                    &v444,
                    v411,
                    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
                  v446 = v444;
                  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                            &v446,
                            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__) )
                  {
                    current = v446.fields.current;
                    if ( !v446.fields.current )
                      sub_B170D4();
                    v413 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)_4__this->fields.assetBundleReleaseDic;
                    if ( !v413 )
                      sub_B170D4();
                    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                            v413,
                            (System_Xml_XmlQualifiedName_o *)v446.fields.current[1].monitor,
                            (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__) )
                    {
                      v414 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)_4__this->fields.assetBundleReleaseDic;
                      if ( !v414 )
                        sub_B170D4();
                      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
                        v414,
                        (System_Xml_XmlQualifiedName_o *)current[1].monitor,
                        (System_Xml_Schema_XmlSchemaObject_o *)current,
                        (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
                    }
                  }
                  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                    &v446,
                    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
                  AssetManager__ConfigWriteRequest(_4__this, 1, 0LL);
LABEL_313:
                  this->fields._configFileUrl_5__2 = 0LL;
                  p_configFileUrl_5__2 = (BattleServantConfConponent_o *)&this->fields._configFileUrl_5__2;
                  sub_B16F98(p_configFileUrl_5__2, 0LL, v257, v258, v259, v260, v261, v262);
                  p_configFileUrl_5__2->monitor = 0LL;
                  sub_B16F98((BattleServantConfConponent_o *)p_loader_5__3, 0LL, v416, v417, v418, v419, v420, v421);
                  v426 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(
                                                              UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                              v422,
                                                              v423,
                                                              v424,
                                                              v425);
                  UnityEngine_WaitForEndOfFrame___ctor(v426, 0LL);
                  p_configFileUrl_5__2[-1].fields.classBoardSkillObj = (struct BattleServantClassBoardSkillEffectListComponent_o *)v426;
                  sub_B16F98(
                    (BattleServantConfConponent_o *)((char *)p_configFileUrl_5__2 - 16),
                    (System_Int32_array **)v426,
                    v427,
                    v428,
                    v429,
                    v430,
                    v431,
                    v432);
                  *(_DWORD *)&p_configFileUrl_5__2[-1].fields.isEquip = 6;
                  return 1;
                }
              }
LABEL_315:
              sub_B17100(v94, v95, v76);
              sub_B170A0();
            }
            v338 = (Il2CppObject *)StringLiteral_2103/*"AssetStorageList download crc error"*/;
            if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
            }
            UnityEngine_Debug__LogError(v338, 0LL);
          }
        }
        v241 = (Il2CppObject *)StringLiteral_2104/*"AssetStorageList download data error"*/;
        if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__LogError(v241, 0LL);
LABEL_260:
        if ( *p_loader_5__3 )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose(*p_loader_5__3, 0LL);
          *p_loader_5__3 = 0LL;
          sub_B16F98((BattleServantConfConponent_o *)p_loader_5__3, 0LL, v339, v340, v341, v342, v343, v344);
        }
        if ( v241 )
        {
          v345 = ManagerConfig_TypeInfo;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v345 = ManagerConfig_TypeInfo;
          }
          v346 = v345->static_fields;
          if ( v346->UseDebugCommand )
          {
            if ( (BYTE3(v345->vtable._0_Equals.methodPtr) & 4) != 0 && !v345->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v345);
              v346 = ManagerConfig_TypeInfo->static_fields;
            }
            if ( System_String__op_Inequality(v346->ServerDefaultType, (System_String_o *)StringLiteral_11549/*"SCRIPT"*/, 0LL) )
            {
              LOBYTE(_4__this->fields.writeRequestThread) = 1;
              v347 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v352 = (ErrorDialog_ClickDelegate_o *)sub_B170CC(
                                                      ErrorDialog_ClickDelegate_TypeInfo,
                                                      v348,
                                                      v349,
                                                      v350,
                                                      v351);
              ErrorDialog_ClickDelegate___ctor(
                v352,
                (Il2CppObject *)_4__this,
                Method_AssetManager_OnClickWaitDebugDialog__,
                0LL);
              if ( !v347 )
                goto LABEL_314;
              methodb.fields.value = 0LL;
              *(_DWORD *)&methodb.fields.has_value = 0;
              CommonUI__OpenWarningDialog(
                v347,
                (System_String_o *)StringLiteral_15682/*"[FFFF80]Download error for debug"*/,
                (System_String_o *)v241,
                v352,
                1,
                0,
                -1.0,
                1,
                methodb,
                0LL);
LABEL_273:
              if ( LOBYTE(_4__this->fields.writeRequestThread) )
              {
                v353 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(
                                                            UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                            method,
                                                            v2,
                                                            v3,
                                                            v4);
                UnityEngine_WaitForEndOfFrame___ctor(v353, 0LL);
                this->fields.__2__current = (Il2CppObject *)v353;
                v354 = &this->fields.__2__current;
                sub_B16F98(
                  (BattleServantConfConponent_o *)v354,
                  (System_Int32_array **)v353,
                  v355,
                  v356,
                  v357,
                  v358,
                  v359,
                  v360);
                v361 = 3;
LABEL_297:
                *((_DWORD *)v354 - 2) = v361;
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
          if ( !byte_40F7DF6 )
          {
            sub_B16FFC(&ManagementManager_TypeInfo, method);
            byte_40F7DF6 = 1;
          }
          v362 = ManagementManager_TypeInfo;
          if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagementManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
            v362 = ManagementManager_TypeInfo;
          }
          isDuringStartup = v362->static_fields->isDuringStartup;
          v364 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( isDuringStartup )
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v365 = LocalizationManager__Get((System_String_o *)StringLiteral_1743/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
            v370 = (ErrorDialog_ClickDelegate_o *)sub_B170CC(ErrorDialog_ClickDelegate_TypeInfo, v366, v367, v368, v369);
            ErrorDialog_ClickDelegate___ctor(
              v370,
              (Il2CppObject *)_4__this,
              Method_AssetManager_OnClickRetryDialog__,
              0LL);
            if ( !v364 )
              goto LABEL_314;
            CommonUI__OpenRetryBootDialog(v364, (System_String_o *)StringLiteral_1/*""*/, v365, v370, 0, 0LL);
          }
          else
          {
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v371 = LocalizationManager__Get((System_String_o *)StringLiteral_1744/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
            v376 = (ErrorDialog_ClickDelegate_o *)sub_B170CC(ErrorDialog_ClickDelegate_TypeInfo, v372, v373, v374, v375);
            ErrorDialog_ClickDelegate___ctor(
              v376,
              (Il2CppObject *)_4__this,
              Method_AssetManager_OnClickRetryDialog__,
              0LL);
            if ( !v364 )
              goto LABEL_314;
            CommonUI__OpenRetryDialog(v364, (System_String_o *)StringLiteral_1/*""*/, v371, v376, 0, 0LL);
          }
LABEL_294:
          if ( LOBYTE(_4__this->fields.writeRequestThread) )
          {
            v377 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(
                                                        UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                        method,
                                                        v2,
                                                        v3,
                                                        v4);
            UnityEngine_WaitForEndOfFrame___ctor(v377, 0LL);
            this->fields.__2__current = (Il2CppObject *)v377;
            v354 = &this->fields.__2__current;
            sub_B16F98(
              (BattleServantConfConponent_o *)v354,
              (System_Int32_array **)v377,
              v378,
              v379,
              v380,
              v381,
              v382,
              v383);
            v361 = 4;
            goto LABEL_297;
          }
        }
        v384 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3, v4);
        UnityEngine_WaitForSeconds___ctor(v384, 1.0, 0LL);
        this->fields.__2__current = (Il2CppObject *)v384;
        v354 = &this->fields.__2__current;
        sub_B16F98(
          (BattleServantConfConponent_o *)v354,
          (System_Int32_array **)v384,
          v385,
          v386,
          v387,
          v388,
          v389,
          v390);
        v361 = 5;
        goto LABEL_297;
      }
LABEL_175:
      wait_5__6 = (Il2CppObject *)this->fields._wait_5__6;
      this->fields.__2__current = wait_5__6;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.__2__current,
        (System_Int32_array **)wait_5__6,
        v223,
        v224,
        v225,
        v226,
        v227,
        v228);
      this->fields.__1__state = 2;
      return 1;
    case 1:
      this->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_32;
      goto LABEL_314;
    case 2:
      p_loader_5__3 = &this->fields._loader_5__3;
      this->fields.__1__state = -1;
      goto LABEL_148;
    case 3:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_314;
      goto LABEL_273;
    case 4:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_314;
      goto LABEL_294;
    case 5:
      this->fields._wait_5__6 = 0LL;
      this->fields.__1__state = -1;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields._wait_5__6, 0LL, v2, v3, v4, v5, v6, v7);
      if ( !_4__this )
        goto LABEL_314;
      goto LABEL_140;
    case 6:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_314;
      _4__this->fields.assetBundleDic = 0LL;
      BYTE2(_4__this->fields.writeRequestThread) = 0;
      BYTE2(_4__this->fields.initCRW) = 1;
      sub_B16F98((BattleServantConfConponent_o *)&_4__this->fields.assetBundleDic, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_AssetManager__InitCR_d__130_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  int32_t _1__state; // w8
  struct AssetManager_o *_4__this; // x21
  UnityEngine_WaitForEndOfFrame_o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  Il2CppObject *wait_5__2; // x1
  bool result; // w0

  if ( (byte_40F9129 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_WaitForEndOfFrame_TypeInfo, method);
    byte_40F9129 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_12;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    v11 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2, v3, v4);
    UnityEngine_WaitForEndOfFrame___ctor(v11, 0LL);
    this->fields._wait_5__2 = v11;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._wait_5__2,
      (System_Int32_array **)v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    if ( !_4__this )
LABEL_12:
      sub_B170D4();
  }
  if ( BYTE4(_4__this->fields.writeRequestThread) || BYTE3(_4__this->fields.writeRequestThread) )
  {
    wait_5__2 = (Il2CppObject *)this->fields._wait_5__2;
    this->fields.__2__current = wait_5__2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__2__current,
      (System_Int32_array **)wait_5__2,
      v2,
      v3,
      v4,
      v5,
      v6,
      v7);
    result = 1;
    this->fields.__1__state = 1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
    UnityEngine_Application__Quit_40644448(0LL);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  AssetLoader_o *loader; // x20
  System_Int32_array **_4__this; // x22
  __int64 v9; // x21
  __int64 v10; // x9
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct AssetManager_LoadWaitStatus_o *waiter; // x8

  if ( (byte_40F9125 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetManager_OnEndLoadAssetStorage__, method);
    sub_B16FFC(&AssetLoader_LoadEndHandler_TypeInfo, v6);
    byte_40F9125 = 1;
  }
  loader = this->fields.loader;
  _4__this = (System_Int32_array **)this->fields.__4__this;
  v9 = sub_B170CC(AssetLoader_LoadEndHandler_TypeInfo, method, v2, v3, v4);
  v10 = *(_QWORD *)Method_AssetManager_OnEndLoadAssetStorage__;
  *(_QWORD *)(v9 + 40) = Method_AssetManager_OnEndLoadAssetStorage__;
  *(_QWORD *)(v9 + 16) = v10;
  *(_QWORD *)(v9 + 32) = _4__this;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 32), _4__this, v11, v12, v13, v14, v15, v16);
  waiter = this->fields.waiter;
  if ( !waiter || !loader )
    sub_B170D4();
  AssetLoader__StartLoad(loader, (AssetLoader_LoadEndHandler_o *)v9, waiter->fields.resourceNames, 0LL);
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
  __int64 v5; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *remainNameList; // x0
  struct System_Collections_Generic_List_string__o *v7; // x8
  AssetManager_o *_4__this; // x0
  struct AssetManager_o *v9; // x8
  AssetManager_o *v10; // x0

  if ( (byte_40F9126 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Remove__, data);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, v5);
    byte_40F9126 = 1;
  }
  ++this->fields.calledCallbackFuncCounter;
  if ( !data )
    goto LABEL_13;
  remainNameList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.remainNameList;
  if ( !remainNameList )
    goto LABEL_13;
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    remainNameList,
    (WarBoardManager_TaskList_o *)data->fields.name,
    (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_string__Remove__);
  if ( this->fields.calledCallbackFunc )
    return;
  v7 = this->fields.remainNameList;
  if ( !v7 )
LABEL_13:
    sub_B170D4();
  if ( v7->fields._size <= 0 )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      AssetManager__AddLoadWaitStatus(_4__this, this->fields.callbackFunc, 0LL);
      v9 = this->fields.__4__this;
      if ( v9 )
      {
        HIDWORD(v9->fields.unloadCallbacks) = this->fields.loadParallelMax;
        v10 = this->fields.__4__this;
        this->fields.calledCallbackFunc = 1;
        if ( v10 )
        {
          AssetManager__LoadStart(v10, 0LL);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  int32_t _1__state; // w8
  struct AssetManager_o *_4__this; // x20
  UnityEngine_WaitForEndOfFrame_o *v9; // x21
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
  Il2CppObject *wait_5__2; // x1
  bool v23; // w21
  Il2CppObject *v24; // x0
  Il2CppObject **p__2__current; // x19
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  AssetManager_ResourceUnloadEventHandler_o *v32; // x0
  BattleServantConfConponent_o *p_downLoadWaitList; // x20
  AssetManager_ResourceUnloadEventHandler_o *downLoadWaitList; // t1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_40F912A & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v6);
    byte_40F912A = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 2 )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_20;
    downLoadWaitList = (AssetManager_ResourceUnloadEventHandler_o *)_4__this->fields.downLoadWaitList;
    p_downLoadWaitList = (BattleServantConfConponent_o *)&_4__this->fields.downLoadWaitList;
    v32 = downLoadWaitList;
    *(_WORD *)(&p_downLoadWaitList[-1].fields.isEquip + 3) = 0;
    if ( downLoadWaitList )
    {
      AssetManager_ResourceUnloadEventHandler__Invoke(v32, method);
      p_downLoadWaitList->klass = 0LL;
      sub_B16F98(p_downLoadWaitList, 0LL, v35, v36, v37, v38, v39, v40);
    }
    return 0;
  }
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    goto LABEL_8;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  v9 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2, v3, v4);
  UnityEngine_WaitForEndOfFrame___ctor(v9, 0LL);
  this->fields._wait_5__2 = v9;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._wait_5__2,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
LABEL_8:
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__LoadIsBusy(0LL) )
  {
    if ( _4__this )
    {
      v23 = 1;
      BYTE4(_4__this->fields.writeRequestThread) = 1;
      v24 = (Il2CppObject *)UnityEngine_Resources__UnloadUnusedAssets(0LL);
      this->fields.__2__current = v24;
      p__2__current = &this->fields.__2__current;
      sub_B16F98(
        (BattleServantConfConponent_o *)p__2__current,
        (System_Int32_array **)v24,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
      *((_DWORD *)p__2__current - 2) = 2;
      return v23;
    }
LABEL_20:
    sub_B170D4();
  }
  wait_5__2 = (Il2CppObject *)this->fields._wait_5__2;
  this->fields.__2__current = wait_5__2;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.__2__current,
    (System_Int32_array **)wait_5__2,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v23 = 1;
  this->fields.__1__state = 1;
  return v23;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_AssetManager__coUnloadUnusedAssets_d__137_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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