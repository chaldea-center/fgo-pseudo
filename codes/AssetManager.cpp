void AssetManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct AssetManager_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct AssetManager_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w1
  struct AssetManager_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w1
  struct AssetManager_StaticFields *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w1
  struct AssetManager_StaticFields *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  int32_t v47; // w1
  struct AssetManager_StaticFields *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  int32_t v55; // w1
  struct AssetManager_StaticFields *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  int32_t v63; // w1
  struct AssetManager_StaticFields *v64; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7

  if ( (byte_4D2B83D & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&StringLiteral_2371/*"Asset"*/);
    sub_1C94098(&StringLiteral_2384/*"AssetStorageBack.txt"*/);
    sub_1C94098(&StringLiteral_22579/*"offline"*/);
    sub_1C94098(&StringLiteral_2383/*"AssetStorage.txt"*/);
    sub_1C94098(&StringLiteral_2385/*"AssetStorageCreate.txt"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_22645/*"online"*/);
    byte_4D2B83D = 1;
  }
  AssetManager_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_2371/*"Asset"*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)AssetManager_TypeInfo->static_fields,
    StringLiteral_2371/*"Asset"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_22579/*"offline"*/;
  static_fields = AssetManager_TypeInfo->static_fields;
  static_fields->SAVE_DATA_OFFLINE = (struct System_String_o *)StringLiteral_22579/*"offline"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->SAVE_DATA_OFFLINE, v7, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_22645/*"online"*/;
  v16 = AssetManager_TypeInfo->static_fields;
  v16->SAVE_DATA_ONLINE = (struct System_String_o *)StringLiteral_22645/*"online"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v16->SAVE_DATA_ONLINE, v15, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_2383/*"AssetStorage.txt"*/;
  v24 = AssetManager_TypeInfo->static_fields;
  v24->configFileName = (struct System_String_o *)StringLiteral_2383/*"AssetStorage.txt"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v24->configFileName, v23, v25, v26, v27, v28, v29, v30);
  v31 = StringLiteral_2385/*"AssetStorageCreate.txt"*/;
  v32 = AssetManager_TypeInfo->static_fields;
  v32->createConfigFileName = (struct System_String_o *)StringLiteral_2385/*"AssetStorageCreate.txt"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v32->createConfigFileName, v31, v33, v34, v35, v36, v37, v38);
  v39 = StringLiteral_2384/*"AssetStorageBack.txt"*/;
  v40 = AssetManager_TypeInfo->static_fields;
  v40->backConfigFileName = (struct System_String_o *)StringLiteral_2384/*"AssetStorageBack.txt"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v40->backConfigFileName, v39, v41, v42, v43, v44, v45, v46);
  v47 = StringLiteral_1/*""*/;
  v48 = AssetManager_TypeInfo->static_fields;
  v48->assetBundleMasterVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v48->assetBundleMasterVersion, v47, v49, v50, v51, v52, v53, v54);
  v55 = StringLiteral_1/*""*/;
  v56 = AssetManager_TypeInfo->static_fields;
  v56->assetBundleDateVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v56->assetBundleDateVersion, v55, v57, v58, v59, v60, v61, v62);
  v63 = StringLiteral_1/*""*/;
  v64 = AssetManager_TypeInfo->static_fields;
  v64->assetBundleBuildVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v64->assetBundleBuildVersion, v63, v65, v66, v67, v68, v69, v70);
}


void AssetManager___ctor(AssetManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_Dictionary_object__object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_Dictionary_object__object__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Collections_Generic_List_object__o *v31; // x20
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  System_Collections_Generic_Queue_T__o *v38; // x20
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7

  if ( (byte_4D2B83C & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_AssetLoader___ctor__);
    sub_1C94098(&System_Collections_Generic_List_AssetLoader__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
    sub_1C94098(&System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager___ctor__);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2B83C = 1;
  }
  *(_WORD *)&this->fields._DispLog = 257;
  this->fields.isInitEnd = 1;
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3520244 *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.assetBundleDic = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.assetBundleDic, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v10,
    (const MethodInfo_3520244 *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.assetBundleReleaseDic = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)v10;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.assetBundleReleaseDic,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v17,
    (const MethodInfo_3520244 *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.assetResourceDic = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)v17;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.assetResourceDic, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_1/*""*/;
  this->fields.requestConfigWriteData = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.requestConfigWriteData, v24, v25, v26, v27, v28, v29, v30);
  this->fields.requestWriteCounter = -1.0;
  v31 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_AssetLoader__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_AssetLoader___ctor__);
  this->fields.processingAssetLoaderList = (struct System_Collections_Generic_List_AssetLoader__o *)v31;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.processingAssetLoaderList,
    (int32_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this->fields.loadParallelMax = 1;
  v38 = (System_Collections_Generic_Queue_T__o *)sub_1C942E4(System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v38,
    (const MethodInfo_3A15C30 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
  this->fields.downLoadWaitList = (struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)v38;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.downLoadWaitList, (int32_t)v38, v39, v40, v41, v42, v43, v44);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3ABAA5C *)Method_SingletonMonoBehaviour_AssetManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool AssetManager__AddCallbackLoadStatus(
        AssetManager_o *this,
        int32_t type,
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *processingAssetLoaderList; // x0
  int32_t v10; // w23
  AssetLoader_o *v11; // x24
  AssetData_o *syncRoot; // x0
  const MethodInfo *v13; // x2
  bool v14; // w22
  Il2CppObject *Current; // x0
  __int64 v16; // x1
  AssetManager_LoadWaitStatus_o *v17; // x23
  AssetData_o *klass; // x0
  const MethodInfo *v19; // x2
  int v20; // w19
  System_Collections_Generic_Queue_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4D2B826 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
    byte_4D2B826 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
    goto LABEL_10;
  v10 = 0;
  while ( v10 < processingAssetLoaderList->fields._size )
  {
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               processingAssetLoaderList,
                                                                               v10,
                                                                               (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    if ( !processingAssetLoaderList )
      goto LABEL_10;
    v11 = (AssetLoader_o *)processingAssetLoaderList;
    syncRoot = (AssetData_o *)processingAssetLoaderList->fields._syncRoot;
    if ( syncRoot && AssetData__IsSame_41256836(syncRoot, type, name, 0) )
    {
      if ( callbackFunc )
        AssetLoader__add_endCallback2(v11, callbackFunc, v13);
      return 1;
    }
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
    ++v10;
    if ( !processingAssetLoaderList )
      goto LABEL_10;
  }
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.downLoadWaitList;
  if ( !processingAssetLoaderList )
LABEL_10:
    sub_1C942F0(processingAssetLoaderList, *(_QWORD *)&type);
  System_Collections_Generic_Queue_object___GetEnumerator(
    &v22,
    (System_Collections_Generic_Queue_T__o *)processingAssetLoaderList,
    (const MethodInfo_3A162B0 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_Queue_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_35EC5CC *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    if ( !v14 )
      break;
    Current = System_Collections_Generic_Queue_Enumerator_object___get_Current(
                &v22,
                (const MethodInfo_35EC6BC *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    v17 = (AssetManager_LoadWaitStatus_o *)Current;
    if ( !Current )
      sub_1C942F0(0, v16);
    klass = (AssetData_o *)Current[1].klass;
    if ( klass && AssetData__IsSame_41256836(klass, type, name, 0) )
    {
      AssetManager_LoadWaitStatus__AddCallback(v17, callbackFunc, v19);
      v20 = 7;
      goto LABEL_19;
    }
  }
  v20 = 8;
LABEL_19:
  System_Collections_Generic_Queue_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_35EC5BC *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  return v14 && v20 == 7;
}


// local variable allocation has failed, the output may be wrong!
bool AssetManager__AddEntryLoadStatus(
        AssetManager_o *this,
        int32_t type,
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *processingAssetLoaderList; // x0
  int32_t v10; // w23
  AssetLoader_o *v11; // x24
  AssetData_o *syncRoot; // x0
  bool v13; // w22
  Il2CppObject *Current; // x0
  __int64 v15; // x1
  AssetManager_LoadWaitStatus_o *v16; // x23
  AssetData_o *klass; // x0
  __int64 v18; // x1
  AssetData_o *data; // x0
  const MethodInfo *v20; // x2
  int v21; // w19
  const MethodInfo *v23; // x2
  System_Collections_Generic_Queue_Enumerator_T__o v24; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Queue_Enumerator_T__o v25; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4D2B825 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
    byte_4D2B825 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
    goto LABEL_10;
  v10 = 0;
  while ( v10 < processingAssetLoaderList->fields._size )
  {
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               processingAssetLoaderList,
                                                                               v10,
                                                                               (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    if ( !processingAssetLoaderList )
      goto LABEL_10;
    v11 = (AssetLoader_o *)processingAssetLoaderList;
    syncRoot = (AssetData_o *)processingAssetLoaderList->fields._syncRoot;
    if ( syncRoot && AssetData__IsSame_41256836(syncRoot, type, name, 0) )
    {
      processingAssetLoaderList = (System_Collections_Generic_List_object__o *)v11->fields.data;
      if ( processingAssetLoaderList )
      {
        AssetData__AddEntry((AssetData_o *)processingAssetLoaderList, 0);
        if ( callbackFunc )
          AssetLoader__add_endCallback2(v11, callbackFunc, v23);
        return 1;
      }
LABEL_10:
      sub_1C942F0(processingAssetLoaderList, *(_QWORD *)&type);
    }
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
    ++v10;
    if ( !processingAssetLoaderList )
      goto LABEL_10;
  }
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.downLoadWaitList;
  if ( !processingAssetLoaderList )
    goto LABEL_10;
  System_Collections_Generic_Queue_object___GetEnumerator(
    &v24,
    (System_Collections_Generic_Queue_T__o *)processingAssetLoaderList,
    (const MethodInfo_3A162B0 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  v25 = v24;
  do
  {
    v13 = System_Collections_Generic_Queue_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_35EC5CC *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    if ( !v13 )
    {
      v21 = 8;
      goto LABEL_20;
    }
    Current = System_Collections_Generic_Queue_Enumerator_object___get_Current(
                &v25,
                (const MethodInfo_35EC6BC *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    v16 = (AssetManager_LoadWaitStatus_o *)Current;
    if ( !Current )
      sub_1C942F0(0, v15);
    klass = (AssetData_o *)Current[1].klass;
  }
  while ( !klass || !AssetData__IsSame_41256836(klass, type, name, 0) );
  data = v16->fields.data;
  if ( !data )
    sub_1C942F0(0, v18);
  AssetData__AddEntry(data, 0);
  AssetManager_LoadWaitStatus__AddCallback(v16, callbackFunc, v20);
  v21 = 7;
LABEL_20:
  System_Collections_Generic_Queue_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_35EC5BC *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  return v13 && v21 == 7;
}


void AssetManager__AddLoadWaitStatus(AssetManager_o *this, System_Action_o *callbackFunc, const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  __int64 v12; // x1
  System_Collections_Generic_Queue_T__o *downLoadWaitList; // x0

  if ( (byte_4D2B828 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_LoadWaitStatus_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
    byte_4D2B828 = 1;
  }
  v5 = sub_1C942E4(AssetManager_LoadWaitStatus_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_QWORD *)(v5 + 24) = callbackFunc;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)callbackFunc, v6, v7, v8, v9, v10, v11);
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
    sub_1C942F0(0, v12);
  System_Collections_Generic_Queue_object___Enqueue(
    downLoadWaitList,
    (Il2CppObject *)v5,
    (const MethodInfo_3A161F8 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
}


void AssetManager__AddLoadWaitStatus_41297864(AssetManager_o *this, AssetData_o *info, const MethodInfo *method)
{
  AssetManager_o *v4; // x20
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  v4 = this;
  if ( (byte_4D2B829 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_LoadWaitStatus_TypeInfo);
    this = (AssetManager_o *)sub_1C94098(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
    byte_4D2B829 = 1;
  }
  if ( !info
    || (v4->fields.downloadSize += info->fields.size,
        v5 = sub_1C942E4(AssetManager_LoadWaitStatus_TypeInfo),
        System_Object___ctor((Il2CppObject *)v5, 0),
        *(_QWORD *)(v5 + 16) = info,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)info, v6, v7, v8, v9, v10, v11),
        (this = (AssetManager_o *)v4->fields.downLoadWaitList) == 0) )
  {
    sub_1C942F0(this, info);
  }
  System_Collections_Generic_Queue_object___Enqueue(
    (System_Collections_Generic_Queue_T__o *)this,
    (Il2CppObject *)v5,
    (const MethodInfo_3A161F8 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
}


void AssetManager__AddLoadWaitStatus_41309340(
        AssetManager_o *this,
        AssetData_o *info,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        System_String_array *resourceNames,
        const MethodInfo *method)
{
  AssetManager_o *v8; // x21
  AssetManager_LoadWaitStatus_o *v9; // x23
  const MethodInfo *v10; // x4

  v8 = this;
  if ( (byte_4D2B82A & 1) == 0 )
  {
    sub_1C94098(&AssetManager_LoadWaitStatus_TypeInfo);
    this = (AssetManager_o *)sub_1C94098(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
    byte_4D2B82A = 1;
  }
  if ( !info
    || (v8->fields.downloadSize += info->fields.size,
        v9 = (AssetManager_LoadWaitStatus_o *)sub_1C942E4(AssetManager_LoadWaitStatus_TypeInfo),
        AssetManager_LoadWaitStatus___ctor_41309512(v9, info, callbackFunc, resourceNames, v10),
        (this = (AssetManager_o *)v8->fields.downLoadWaitList) == 0) )
  {
    sub_1C942F0(this, info);
  }
  System_Collections_Generic_Queue_object___Enqueue(
    (System_Collections_Generic_Queue_T__o *)this,
    (Il2CppObject *)v9,
    (const MethodInfo_3A161F8 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
}


System_Collections_IEnumerator_o *AssetManager__AssetObjectListSetupAndCall(
        AssetData_o *asset,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D2B839 & 1) == 0 )
  {
    sub_1C94098(&AssetManager__AssetObjectListSetupAndCall_d__190_TypeInfo);
    byte_4D2B839 = 1;
  }
  v5 = sub_1C942E4(AssetManager__AssetObjectListSetupAndCall_d__190_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = asset;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)asset, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = action;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)action, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *AssetManager__AssetObjectListSetupAndCall_41311356(
        AssetData_array *assetList,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D2B83A & 1) == 0 )
  {
    sub_1C94098(&AssetManager__AssetObjectListSetupAndCall_d__191_TypeInfo);
    byte_4D2B83A = 1;
  }
  v5 = sub_1C942E4(AssetManager__AssetObjectListSetupAndCall_d__191_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = assetList;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)assetList, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = action;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)action, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void AssetManager__CancelAndReleaseDownloadAssetStorage(
        AssetManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *v5; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  void *downLoadWaitList; // x0
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o **p_downLoadWaitList; // x22
  char v15; // w27
  __int64 v16; // x24
  Il2CppObject *v17; // x23
  int32_t v18; // w23
  AssetData_o *v19; // x0
  AssetManager___c_c *v20; // x8
  AssetLoader_o *v21; // x24
  AssetLoader_LoadEndDataHandler_o *_9__130_0; // x25
  Il2CppObject *v23; // x26
  const MethodInfo *v24; // x3
  struct AssetManager___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7

  if ( (byte_4D2B81C & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    sub_1C94098(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
    sub_1C94098(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
    sub_1C94098(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__);
    sub_1C94098(&System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo);
    sub_1C94098(&Method_AssetManager___c__CancelAndReleaseDownloadAssetStorage_b__130_0__);
    sub_1C94098(&AssetManager___c_TypeInfo);
    byte_4D2B81C = 1;
  }
  v5 = (System_Collections_Generic_Queue_T__o *)sub_1C942E4(System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v5,
    (const MethodInfo_3A15C30 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
  p_downLoadWaitList = &this->fields.downLoadWaitList;
  downLoadWaitList = this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
    goto LABEL_33;
  v15 = 0;
  while ( *((int *)downLoadWaitList + 8) > 0 )
  {
    downLoadWaitList = System_Collections_Generic_Queue_object___Dequeue(
                         (System_Collections_Generic_Queue_T__o *)downLoadWaitList,
                         (const MethodInfo_3A16388 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
    if ( !downLoadWaitList )
      goto LABEL_33;
    v16 = *((_QWORD *)downLoadWaitList + 2);
    v17 = (Il2CppObject *)downLoadWaitList;
    if ( v16
      && (downLoadWaitList = (void *)AssetData__IsSame(*((AssetData_o **)downLoadWaitList + 2), name, 0),
          ((unsigned __int8)downLoadWaitList & 1) != 0) )
    {
      downLoadWaitList = this->fields.downLoadWaitList;
      v15 = 1;
      this->fields.downloadSize -= *(int *)(v16 + 48);
      if ( !downLoadWaitList )
        goto LABEL_33;
    }
    else
    {
      if ( !v5 )
        goto LABEL_33;
      System_Collections_Generic_Queue_object___Enqueue(
        v5,
        v17,
        (const MethodInfo_3A161F8 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
      downLoadWaitList = *p_downLoadWaitList;
      if ( !*p_downLoadWaitList )
        goto LABEL_33;
    }
  }
  if ( (v15 & 1) == 0 )
  {
    downLoadWaitList = this->fields.processingAssetLoaderList;
    if ( downLoadWaitList )
    {
      v18 = 0;
      while ( v18 < *((_DWORD *)downLoadWaitList + 6) )
      {
        downLoadWaitList = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)downLoadWaitList,
                             v18,
                             (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
        if ( !downLoadWaitList )
          goto LABEL_33;
        v19 = (AssetData_o *)*((_QWORD *)downLoadWaitList + 4);
        if ( v19 && AssetData__IsSame_41256836(v19, 0, name, 0) )
        {
          downLoadWaitList = this->fields.processingAssetLoaderList;
          if ( !downLoadWaitList )
            goto LABEL_33;
          downLoadWaitList = System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)downLoadWaitList,
                               v18,
                               (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
          v20 = AssetManager___c_TypeInfo;
          v21 = (AssetLoader_o *)downLoadWaitList;
          if ( !AssetManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager___c_TypeInfo);
            v20 = AssetManager___c_TypeInfo;
          }
          _9__130_0 = v20->static_fields->__9__130_0;
          if ( !_9__130_0 )
          {
            if ( !v20->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v20);
              v20 = AssetManager___c_TypeInfo;
            }
            v23 = (Il2CppObject *)v20->static_fields->__9;
            _9__130_0 = (AssetLoader_LoadEndDataHandler_o *)sub_1C942E4(AssetLoader_LoadEndDataHandler_TypeInfo);
            AssetLoader_LoadEndDataHandler___ctor(
              _9__130_0,
              v23,
              Method_AssetManager___c__CancelAndReleaseDownloadAssetStorage_b__130_0__,
              v24);
            static_fields = AssetManager___c_TypeInfo->static_fields;
            static_fields->__9__130_0 = _9__130_0;
            sub_1C9403C(
              (GrandQuestFolderBoardItem_o *)&static_fields->__9__130_0,
              (int32_t)_9__130_0,
              v26,
              v27,
              v28,
              v29,
              v30,
              v31);
          }
          if ( !v21 )
            goto LABEL_33;
          if ( _9__130_0 )
            AssetLoader__add_endCallback2(v21, _9__130_0, v7);
        }
        downLoadWaitList = this->fields.processingAssetLoaderList;
        ++v18;
        if ( !downLoadWaitList )
          goto LABEL_33;
      }
      goto LABEL_15;
    }
LABEL_33:
    sub_1C942F0(downLoadWaitList, v6);
  }
LABEL_15:
  this->fields.downLoadWaitList = (struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)v5;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.downLoadWaitList,
    (int32_t)v5,
    (int32_t)v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.isCancelDownload = 1;
}


void AssetManager__CancelAndReleaseDownloadAssetStorages(
        AssetManager_o *this,
        System_String_array *names,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v6; // x21

  if ( !names )
    sub_1C942F0(this, 0);
  max_length = names->max_length;
  if ( (int)max_length >= 1 )
  {
    v6 = 0;
    do
    {
      if ( v6 >= (unsigned int)max_length )
        sub_1C942F8(this);
      AssetManager__CancelAndReleaseDownloadAssetStorage(this, names->m_Items[v6], method);
      LODWORD(max_length) = names->max_length;
      ++v6;
    }
    while ( (__int64)v6 < (int)max_length );
  }
}


void AssetManager__CancelDownloadAssetStorage(AssetManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *v3; // x20
  System_Collections_Generic_Queue_T__o *v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  System_Collections_Generic_Queue_T__o *downLoadWaitList; // x0
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o **p_downLoadWaitList; // x21
  struct System_Object_array *array; // x8

  if ( (byte_4D2B81B & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
    sub_1C94098(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
    sub_1C94098(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__);
    sub_1C94098(&System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo);
    byte_4D2B81B = 1;
  }
  v3 = (System_Collections_Generic_Queue_T__o *)sub_1C942E4(System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v3,
    (const MethodInfo_3A15C30 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
  p_downLoadWaitList = &this->fields.downLoadWaitList;
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
LABEL_12:
    sub_1C942F0(downLoadWaitList, v4);
  while ( downLoadWaitList->fields._size > 0 )
  {
    downLoadWaitList = (System_Collections_Generic_Queue_T__o *)System_Collections_Generic_Queue_object___Dequeue(
                                                                  downLoadWaitList,
                                                                  (const MethodInfo_3A16388 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
    if ( !downLoadWaitList )
      goto LABEL_12;
    array = downLoadWaitList->fields._array;
    v4 = downLoadWaitList;
    if ( array && SHIDWORD(array->m_Items[6]) <= 0 )
    {
      this->fields.downloadSize -= SLODWORD(array->m_Items[2]);
    }
    else
    {
      if ( !v3 )
        goto LABEL_12;
      System_Collections_Generic_Queue_object___Enqueue(
        v3,
        (Il2CppObject *)downLoadWaitList,
        (const MethodInfo_3A161F8 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
    }
    downLoadWaitList = (System_Collections_Generic_Queue_T__o *)*p_downLoadWaitList;
    if ( !*p_downLoadWaitList )
      goto LABEL_12;
  }
  this->fields.downLoadWaitList = (struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.downLoadWaitList, (int32_t)v3, v5, v6, v7, v8, v9, v10);
  this->fields.isCancelDownload = 1;
}


void AssetManager__CancelDownloadAssetStorageAll(AssetManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *downLoadWaitList; // x0

  if ( (byte_4D2B81E & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__);
    byte_4D2B81E = 1;
  }
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
  this->fields.downloadSize = 0;
  if ( !downLoadWaitList )
    sub_1C942F0(0, method);
  System_Collections_Generic_Queue_object___Clear(
    downLoadWaitList,
    (const MethodInfo_3A15EB8 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__);
}


bool AssetManager__CheckDateVersion(System_String_o *dateVersion, const MethodInfo *method)
{
  AssetManager_c *v3; // x0
  System_String_o *assetBundleDateVersion; // x0

  if ( (byte_4D2B7E7 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    byte_4D2B7E7 = 1;
  }
  v3 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v3 = AssetManager_TypeInfo;
  }
  assetBundleDateVersion = v3->static_fields->assetBundleDateVersion;
  if ( !assetBundleDateVersion )
    sub_1C942F0(0, method);
  return System_String__StartsWith(assetBundleDateVersion, dateVersion, 0);
}


// local variable allocation has failed, the output may be wrong!
bool AssetManager__CheckEntryLoadStatus(
        AssetManager_o *this,
        int32_t type,
        System_String_o *name,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *processingAssetLoaderList; // x0
  int32_t v8; // w22
  AssetData_o *syncRoot; // x0
  bool v10; // w21
  Il2CppObject *Current; // x0
  __int64 v12; // x1
  AssetData_o *klass; // x0
  int v14; // w19
  System_Collections_Generic_Queue_Enumerator_T__o v16; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D2B827 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
    byte_4D2B827 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
    goto LABEL_10;
  v8 = 0;
  while ( v8 < processingAssetLoaderList->fields._size )
  {
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               processingAssetLoaderList,
                                                                               v8,
                                                                               (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    if ( !processingAssetLoaderList )
      goto LABEL_10;
    syncRoot = (AssetData_o *)processingAssetLoaderList->fields._syncRoot;
    if ( syncRoot && AssetData__IsSame_41256836(syncRoot, type, name, 0) )
      return 1;
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
    ++v8;
    if ( !processingAssetLoaderList )
      goto LABEL_10;
  }
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.downLoadWaitList;
  if ( !processingAssetLoaderList )
LABEL_10:
    sub_1C942F0(processingAssetLoaderList, *(_QWORD *)&type);
  System_Collections_Generic_Queue_object___GetEnumerator(
    &v16,
    (System_Collections_Generic_Queue_T__o *)processingAssetLoaderList,
    (const MethodInfo_3A162B0 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_Queue_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_35EC5CC *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    if ( !v10 )
      break;
    Current = System_Collections_Generic_Queue_Enumerator_object___get_Current(
                &v16,
                (const MethodInfo_35EC6BC *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    if ( !Current )
      sub_1C942F0(0, v12);
    klass = (AssetData_o *)Current[1].klass;
    if ( klass && AssetData__IsSame_41256836(klass, type, name, 0) )
    {
      v14 = 7;
      goto LABEL_19;
    }
  }
  v14 = 8;
LABEL_19:
  System_Collections_Generic_Queue_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_35EC5BC *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  return v10 && v14 == 7;
}


bool AssetManager__CheckVersion(System_String_o *masterVersion, System_String_o *dateVersion, const MethodInfo *method)
{
  AssetManager_c *v5; // x0
  AssetManager_c *v6; // x0

  if ( (byte_4D2B7E6 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    byte_4D2B7E6 = 1;
  }
  v5 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v5 = AssetManager_TypeInfo;
  }
  if ( !System_String__op_Equality(v5->static_fields->assetBundleMasterVersion, masterVersion, 0) )
    return 0;
  v6 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v6 = AssetManager_TypeInfo;
  }
  return System_String__op_Equality(v6->static_fields->assetBundleDateVersion, dateVersion, 0);
}


void AssetManager__ClearCacheWithoutSystemAssets(AssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_object__object__o *assetBundleDic; // x0
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *currentValue; // x21
  Il2CppClass *klass; // x0
  const MethodInfo *v9; // x2
  System_String_o *Path; // x23
  const MethodInfo *v11; // x2
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v12; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v13; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4D2B83B & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    sub_1C94098(&StringLiteral_12636/*"SYSTEM"*/);
    byte_4D2B83B = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.assetBundleDic, 0) )
  {
    assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
    if ( !assetBundleDic
      || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                        assetBundleDic,
                                                                                        (const MethodInfo_3520A24 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0 )
    {
      sub_1C942F0(assetBundleDic, v3);
    }
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v12,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
      (const MethodInfo_3BB3594 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    v13 = v12;
    while ( 1 )
    {
      v5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
             &v13,
             (const MethodInfo_3620234 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
      if ( !v5 )
        break;
      currentValue = v13.fields._currentValue;
      if ( !v13.fields._currentValue )
        sub_1C942F0(v5, v6);
      klass = v13.fields._currentValue[2].klass;
      if ( !klass )
        sub_1C942F0(0, v6);
      if ( !System_String__Equals_64453128((System_String_o *)klass, (System_String_o *)StringLiteral_12636/*"SYSTEM"*/, 5, 0) )
      {
        AssetManager__ReleaseReservation(this, (AssetData_o *)currentValue, v9);
        Path = AssetData__get_Path((AssetData_o *)currentValue, 0);
        if ( System_IO_File__Exists(Path, 0) )
        {
          System_IO_File__Delete(Path, 0);
          if ( !System_IO_File__Exists(Path, 0) )
            AssetData__ResetVersion((AssetData_o *)currentValue, 0);
        }
      }
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
      &v13,
      (const MethodInfo_3620230 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    AssetManager__ConfigWriteRequest(this, 1, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void AssetManager__ConfigWriteRequest(AssetManager_o *this, bool isFast, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *assetBundleDic; // x0
  int32_t Count; // w22
  System_Text_StringBuilder_o *v7; // x21
  AssetManager_c *v8; // x0
  AssetManager_c *v9; // x0
  AssetManager_c *v10; // x0
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *currentValue; // x24
  Il2CppObject *requestConfigWriteData; // x22
  System_String_o *v15; // x21
  System_Text_Encoding_o *UTF8; // x0
  __int64 v17; // x1
  System_Byte_array *v18; // x24
  System_String_o *v19; // x1
  System_String_o *v20; // x21
  struct System_String_o *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v28; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v29; // [xsp+20h] [xbp-80h] BYREF
  uint32_t v30; // [xsp+48h] [xbp-58h] BYREF
  bool lockTaken; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_4D2B821 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&CatAndMouseGame_TypeInfo);
    sub_1C94098(&Crc32_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_1C94098(&System_Text_StringBuilder_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    sub_1C94098(&StringLiteral_43/*"\n"*/);
    sub_1C94098(&StringLiteral_25513/*"~"*/);
    byte_4D2B821 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  lockTaken = 0;
  v30 = 0;
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic )
    goto LABEL_35;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         assetBundleDic,
         (const MethodInfo_35208C4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) < 1 )
    return;
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic )
    goto LABEL_35;
  Count = System_Collections_Generic_Dictionary_object__object___get_Count(
            assetBundleDic,
            (const MethodInfo_35208C4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__);
  v7 = (System_Text_StringBuilder_o *)sub_1C942E4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_64495056(v7, 60 * Count, 0);
  if ( !v7 )
    goto LABEL_35;
  System_Text_StringBuilder__Append_64504032(v7, 0x40u, 0);
  v8 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v8 = AssetManager_TypeInfo;
  }
  System_Text_StringBuilder__Append_64501704(v7, v8->static_fields->assetBundleMasterVersion, 0);
  if ( !System_String__IsNullOrEmpty(AssetManager_TypeInfo->static_fields->assetBundleDateVersion, 0) )
  {
    System_Text_StringBuilder__Append_64504032(v7, 0x2Cu, 0);
    v9 = AssetManager_TypeInfo;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      v9 = AssetManager_TypeInfo;
    }
    System_Text_StringBuilder__Append_64501704(v7, v9->static_fields->assetBundleDateVersion, 0);
    if ( !System_String__IsNullOrEmpty(AssetManager_TypeInfo->static_fields->assetBundleBuildVersion, 0) )
    {
      System_Text_StringBuilder__Append_64504032(v7, 0x2Cu, 0);
      v10 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v10 = AssetManager_TypeInfo;
      }
      System_Text_StringBuilder__Append_64501704(v7, v10->static_fields->assetBundleBuildVersion, 0);
    }
  }
  System_Text_StringBuilder__Append_64504032(v7, 0xAu, 0);
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      assetBundleDic,
                                                                                      (const MethodInfo_3520A24 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0 )
  {
LABEL_35:
    sub_1C942F0(assetBundleDic, isFast);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v28,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_3BB3594 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v11 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v29,
            (const MethodInfo_3620234 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v11 )
      break;
    currentValue = v29.fields._currentValue;
    if ( !v29.fields._currentValue )
      sub_1C942F0(v11, v12);
    System_Text_StringBuilder__Append_64504200(v7, (int32_t)v29.fields._currentValue[2].monitor, 0);
    System_Text_StringBuilder__Append_64504032(v7, 0x2Cu, 0);
    System_Text_StringBuilder__Append_64501704(v7, (System_String_o *)currentValue[2].klass, 0);
    System_Text_StringBuilder__Append_64504032(v7, 0x2Cu, 0);
    System_Text_StringBuilder__Append_64504200(v7, (int32_t)currentValue[3].klass, 0);
    System_Text_StringBuilder__Append_64504032(v7, 0x2Cu, 0);
    System_Text_StringBuilder__Append_64504376(v7, HIDWORD(currentValue[3].klass), 0);
    System_Text_StringBuilder__Append_64504032(v7, 0x2Cu, 0);
    System_Text_StringBuilder__Append_64501704(v7, (System_String_o *)currentValue[1].monitor, 0);
    System_Text_StringBuilder__Append_64501704(v7, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v29,
    (const MethodInfo_3620230 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  requestConfigWriteData = (Il2CppObject *)this->fields.requestConfigWriteData;
  lockTaken = 0;
  System_Threading_Monitor__Enter_66345384(requestConfigWriteData, &lockTaken, 0);
  v15 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v7->klass->vtable._3_ToString.methodPtr)(
                             v7,
                             v7->klass->vtable._3_ToString.method);
  UTF8 = System_Text_Encoding__get_UTF8(0);
  if ( !UTF8 )
    sub_1C942F0(0, v17);
  v18 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
                               UTF8,
                               v15,
                               UTF8->klass->vtable._18_GetBytes.method);
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  v30 = Crc32__Compute(v18, 0);
  v19 = System_UInt32__ToString((uint32_t)&v30, 0);
  v20 = System_String__Concat_64458012(
          (System_String_o *)StringLiteral_25513/*"~"*/,
          v19,
          (System_String_o *)StringLiteral_43/*"\n"*/,
          v15,
          0);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v21 = CatAndMouseGame__CatGame8(v20, 0);
  this->fields.requestConfigWriteData = v21;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.requestConfigWriteData,
    (int32_t)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  if ( isFast )
  {
    this->fields.requestWriteCounter = 0.0;
  }
  else if ( this->fields.requestWriteCounter < 0.0 )
  {
    this->fields.requestWriteCounter = 1.0;
  }
  if ( lockTaken )
    System_Threading_Monitor__Exit(requestConfigWriteData, 0);
}


void AssetManager__ConfigWriteRequestThread(AssetManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  const MethodInfo *v10; // x1

  AssetManager__ConfigWriteRequest(this, 0, v2);
  this->fields.writeRequestThread = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.writeRequestThread, 0, v4, v5, v6, v7, v8, v9);
  if ( this->fields.reserveWriteRequest )
    AssetManager__StartThreadConfigWriteRequest(this, v10);
}


System_String_o *AssetManager__ConvertDownloadSizeToString(AssetManager_o *this, double size, const MethodInfo *method)
{
  System_String_o *v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_String_o *v12; // x19
  int32_t v13; // w1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w1
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  int32_t v34; // w1
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  int32_t v41; // w1
  unsigned int i; // w21
  System_String_o format; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2B815 & 1) == 0 )
  {
    sub_1C94098(&string___TypeInfo);
    sub_1C94098(&StringLiteral_8213/*"KB"*/);
    sub_1C94098(&StringLiteral_25461/*"{0}{1}"*/);
    sub_1C94098(&StringLiteral_9254/*"N2"*/);
    sub_1C94098(&StringLiteral_13411/*"TB"*/);
    sub_1C94098(&StringLiteral_2506/*"B"*/);
    sub_1C94098(&StringLiteral_8654/*"MB"*/);
    sub_1C94098(&StringLiteral_6932/*"GB"*/);
    byte_4D2B815 = 1;
  }
  v4 = (System_String_o *)sub_1C94140(string___TypeInfo, 5);
  if ( !v4 )
    sub_1C942F0(0, v5);
  v12 = v4;
  if ( !LODWORD(v4[1].klass) )
    goto LABEL_14;
  v13 = StringLiteral_2506/*"B"*/;
  v4[1].monitor = (void *)StringLiteral_2506/*"B"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v4[1].monitor, v13, v6, v7, v8, v9, v10, v11);
  if ( LODWORD(v12[1].klass) <= 1 )
    goto LABEL_14;
  v20 = StringLiteral_8213/*"KB"*/;
  v12[1].fields = (System_String_Fields)StringLiteral_8213/*"KB"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v12[1].fields, v20, v14, v15, v16, v17, v18, v19);
  if ( LODWORD(v12[1].klass) <= 2 )
    goto LABEL_14;
  v27 = StringLiteral_8654/*"MB"*/;
  v12[2].klass = (System_String_c *)StringLiteral_8654/*"MB"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v12[2], v27, v21, v22, v23, v24, v25, v26);
  if ( LODWORD(v12[1].klass) <= 3 )
    goto LABEL_14;
  v34 = StringLiteral_6932/*"GB"*/;
  v12[2].monitor = (void *)StringLiteral_6932/*"GB"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v12[2].monitor, v34, v28, v29, v30, v31, v32, v33);
  if ( LODWORD(v12[1].klass) <= 4 )
    goto LABEL_14;
  v41 = StringLiteral_13411/*"TB"*/;
  v12[2].fields = (System_String_Fields)StringLiteral_13411/*"TB"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v12[2].fields, v41, v35, v36, v37, v38, v39, v40);
  for ( i = 0; i != 4; ++i )
  {
    if ( size < 1000.0 )
      break;
    size = size / 1000.0;
    *(double *)&format.klass = size;
  }
  v4 = System_Double__ToString_65836788(1000.0, &format, (const MethodInfo *)StringLiteral_9254/*"N2"*/);
  if ( i >= LODWORD(v12[1].klass) )
LABEL_14:
    sub_1C942F8(v4);
  return System_String__Format_64459052(
           (System_String_o *)StringLiteral_25461/*"{0}{1}"*/,
           (Il2CppObject *)v4,
           *((Il2CppObject **)&v12[1].monitor + i),
           0);
}


void AssetManager__DebugLog(AssetManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *downLoadWaitList; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_List_AssetLoader__o *processingAssetLoaderList; // x8
  int32_t size; // w8
  int v7; // w9
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v9; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o i; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v11; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4D2B80F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_1C94098(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    byte_4D2B80F = 1;
  }
  memset(&v11, 0, sizeof(v11));
  memset(&i, 0, sizeof(i));
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
    goto LABEL_23;
  System_Collections_Generic_Queue_object___GetEnumerator(
    (System_Collections_Generic_Queue_Enumerator_T__o *)&v9,
    downLoadWaitList,
    (const MethodInfo_3A162B0 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  v11 = v9;
  while ( System_Collections_Generic_Queue_Enumerator_object___MoveNext(
            (System_Collections_Generic_Queue_Enumerator_T__o *)&v11,
            (const MethodInfo_35EC5CC *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__) )
  {
    if ( !System_Collections_Generic_Queue_Enumerator_object___get_Current(
            (System_Collections_Generic_Queue_Enumerator_T__o *)&v11,
            (const MethodInfo_35EC6BC *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__) )
      sub_1C942F0(0, v4);
  }
  System_Collections_Generic_Queue_Enumerator_object___Dispose(
    (System_Collections_Generic_Queue_Enumerator_T__o *)&v11,
    (const MethodInfo_35EC5BC *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  processingAssetLoaderList = this->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
    goto LABEL_23;
  size = processingAssetLoaderList->fields._size;
  v7 = -1;
  do
    ++v7;
  while ( v7 < size );
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.assetBundleDic;
  if ( !downLoadWaitList )
    goto LABEL_23;
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                (System_Collections_Generic_Dictionary_object__object__o *)downLoadWaitList,
                                                                (const MethodInfo_3520A24 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !downLoadWaitList )
    goto LABEL_23;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v9,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)downLoadWaitList,
    (const MethodInfo_3BB3594 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  for ( i = v9;
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
          &i,
          (const MethodInfo_3620234 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
        AssetData__get_IsEmpty((AssetData_o *)i.fields._currentValue, 0) )
  {
    if ( !i.fields._currentValue )
      sub_1C942F0(0, v8);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &i,
    (const MethodInfo_3620230 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.assetResourceDic;
  if ( !downLoadWaitList
    || (downLoadWaitList = (System_Collections_Generic_Queue_T__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                      (System_Collections_Generic_Dictionary_object__object__o *)downLoadWaitList,
                                                                      (const MethodInfo_3520A24 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0 )
  {
LABEL_23:
    sub_1C942F0(downLoadWaitList, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v9,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)downLoadWaitList,
    (const MethodInfo_3BB3594 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  i = v9;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &i,
            (const MethodInfo_3620234 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__) )
    ;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &i,
    (const MethodInfo_3620230 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
}


System_Collections_IEnumerator_o *AssetManager__DelayLoadStart(AssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2B82D & 1) == 0 )
  {
    sub_1C94098(&AssetManager__DelayLoadStart_d__153_TypeInfo);
    byte_4D2B82D = 1;
  }
  v3 = sub_1C942E4(AssetManager__DelayLoadStart_d__153_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void AssetManager__DeleteContinueData(const MethodInfo *method)
{
  AssetManager_c *v1; // x0

  if ( (byte_4D2B7DF & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    byte_4D2B7DF = 1;
  }
  v1 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v1 = AssetManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v1->static_fields->SAVE_KEY, 0);
}


bool AssetManager__DownloadAssetStorage(
        AssetManager_o *this,
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  _BOOL8 Status; // x0
  const MethodInfo *v10; // x3
  AssetData_o *AssetData; // x0
  AssetData_o *v12; // x22
  const MethodInfo *v13; // x4
  const MethodInfo *v14; // x1

  if ( name )
  {
    Status = AssetManager__AddCallbackLoadStatus(this, 0, name, callbackFunc, method);
    if ( Status )
    {
LABEL_9:
      LOBYTE(AssetData) = 1;
      return (char)AssetData;
    }
    AssetData = AssetManager__GetAssetData((AssetManager_o *)Status, this->fields.assetBundleDic, name, v10);
    if ( AssetData )
    {
      v12 = AssetData;
      if ( AssetData__IsNeedUpdateVersion(AssetData, 0) )
      {
        AssetManager__AddLoadWaitStatus_41309340(this, v12, callbackFunc, 0, v13);
        this->fields.loadParallelMax = loadParallelMax;
        AssetManager__LoadStart(this, v14);
      }
      else if ( callbackFunc )
      {
        ((void (__fastcall *)(intptr_t, AssetData_o *, intptr_t))callbackFunc->fields.invoke_impl)(
          callbackFunc->fields.method_code,
          v12,
          callbackFunc->fields.method);
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
void AssetManager__DownloadAssetStorageAll(AssetManager_o *this, int32_t loadParallelMax, const MethodInfo *method)
{
  this->fields.loadParallelMax = loadParallelMax;
  AssetManager__LoadStart(this, *(const MethodInfo **)&loadParallelMax);
}


void AssetManager__DownloadAssetStorageAttribute(
        AssetManager_o *this,
        System_String_o *attrib,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *assetBundleDic; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  AssetData_o *currentValue; // x22
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v13; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v14; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4D2B816 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    byte_4D2B816 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      assetBundleDic,
                                                                                      (const MethodInfo_3520A24 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0 )
  {
    sub_1C942F0(assetBundleDic, attrib);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v13,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_3BB3594 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v14 = v13;
  while ( 1 )
  {
    v8 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v14,
           (const MethodInfo_3620234 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v8 )
      break;
    currentValue = (AssetData_o *)v14.fields._currentValue;
    if ( !v14.fields._currentValue )
      sub_1C942F0(v8, v9);
    if ( AssetData__IsDownloadOldVersion((AssetData_o *)v14.fields._currentValue, 0)
      || System_String__op_Equality(attrib, currentValue->fields.attrib, 0)
      && AssetData__IsNeedUpdateVersion(currentValue, 0) )
    {
      AssetManager__AddLoadWaitStatus_41297864(this, currentValue, v11);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v14,
    (const MethodInfo_3620230 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  this->fields.loadParallelMax = loadParallelMax;
  AssetManager__LoadStart(this, v12);
}


System_Collections_IEnumerator_o *AssetManager__DownloadAssetStorageAttributeWithCheckDialog(
        AssetManager_o *this,
        System_String_o *attrib,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4D2B814 & 1) == 0 )
  {
    sub_1C94098(&AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__119_TypeInfo);
    byte_4D2B814 = 1;
  }
  v7 = sub_1C942E4(AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__119_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = attrib;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 40), (int32_t)attrib, v14, v15, v16, v17, v18, v19);
  *(_DWORD *)(v7 + 56) = loadParallelMax;
  return (System_Collections_IEnumerator_o *)v7;
}


void AssetManager__DownloadAssetStorageAttribute_41300808(
        AssetManager_o *this,
        System_String_array *attribList,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  AssetManager_o *v6; // x19
  il2cpp_array_size_t max_length; // x9
  System_String_o *v8; // x8
  __int64 v9; // x22
  __int64 v10; // x24
  unsigned __int64 v11; // x10
  _BOOL8 v12; // x0
  __int64 v13; // x1
  AssetData_o *currentValue; // x22
  const MethodInfo *v15; // x2
  unsigned __int64 v16; // x26
  __int64 v17; // x25
  _BOOL8 v18; // x0
  const MethodInfo *v20; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v21; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v22; // [xsp+20h] [xbp-70h] BYREF

  v6 = this;
  if ( (byte_4D2B817 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    this = (AssetManager_o *)sub_1C94098(&StringLiteral_809/*", "*/);
    byte_4D2B817 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  if ( !attribList )
LABEL_32:
    sub_1C942F0(this, attribList);
  max_length = attribList->max_length;
  if ( !max_length )
    return;
  if ( !(_DWORD)max_length )
    goto LABEL_13;
  v8 = attribList->m_Items[0];
  if ( (_DWORD)max_length == 1 )
  {
    AssetManager__DownloadAssetStorageAttribute(v6, attribList->m_Items[0], 1, method);
    return;
  }
  if ( (int)max_length < 2 )
    goto LABEL_14;
  if ( (max_length & 0xFFFFFFFE) == 0 )
LABEL_13:
    sub_1C942F8(this);
  v9 = 0;
  v10 = (unsigned int)attribList->max_length - 2LL;
  while ( 1 )
  {
    this = (AssetManager_o *)System_String__Concat_64456008(
                               v8,
                               (System_String_o *)StringLiteral_809/*", "*/,
                               attribList->m_Items[v9 + 1],
                               0);
    if ( v10 == v9 )
      break;
    v11 = v9 + 2;
    v8 = (System_String_o *)this;
    ++v9;
    if ( v11 >= LODWORD(attribList->max_length) )
      goto LABEL_13;
  }
LABEL_14:
  this = (AssetManager_o *)v6->fields.assetBundleDic;
  if ( !this )
    goto LABEL_32;
  this = (AssetManager_o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                             (System_Collections_Generic_Dictionary_object__object__o *)this,
                             (const MethodInfo_3520A24 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !this )
    goto LABEL_32;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v21,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_3BB3594 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v22 = v21;
LABEL_17:
  while ( 1 )
  {
    v12 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v22,
            (const MethodInfo_3620234 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v12 )
      break;
    currentValue = (AssetData_o *)v22.fields._currentValue;
    if ( !v22.fields._currentValue )
      sub_1C942F0(v12, v13);
    if ( AssetData__IsDownloadOldVersion((AssetData_o *)v22.fields._currentValue, 0) )
      goto LABEL_20;
    if ( AssetData__IsNeedUpdateVersion(currentValue, 0) && (int)attribList->max_length >= 1 )
    {
      v16 = 0;
      v17 = (unsigned int)attribList->max_length - 1LL;
      while ( 1 )
      {
        v18 = System_String__op_Equality(attribList->m_Items[v16], currentValue->fields.attrib, 0);
        if ( v18 )
          break;
        if ( v17 == v16++ )
          goto LABEL_17;
        if ( v16 >= LODWORD(attribList->max_length) )
          sub_1C942F8(v18);
      }
LABEL_20:
      AssetManager__AddLoadWaitStatus_41297864(v6, currentValue, v15);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v22,
    (const MethodInfo_3620230 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  v6->fields.loadParallelMax = loadParallelMax;
  AssetManager__LoadStart(v6, v20);
}


bool AssetManager__DownloadAssetStorage_41290132(
        AssetManager_o *this,
        System_String_array *nameList,
        System_Action_o *callbackFunc,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  AssetManager_o *v9; // x20
  unsigned __int64 v10; // x23
  bool v11; // w25
  System_String_o *v12; // x1
  int v13; // w8
  const MethodInfo *v14; // x1

  if ( !nameList )
    sub_1C942F0(this, 0);
  max_length = nameList->max_length;
  v9 = this;
  if ( (int)max_length < 1 )
  {
    v11 = 1;
  }
  else
  {
    v10 = 0;
    v11 = 1;
    do
    {
      if ( v10 >= (unsigned int)max_length )
        sub_1C942F8(this);
      v12 = nameList->m_Items[v10];
      if ( v12 )
      {
        if ( v11 )
        {
          this = (AssetManager_o *)AssetManager__DownloadAssetStorage(v9, v12, 0, 1, method);
          v13 = (unsigned __int8)this & 1;
        }
        else
        {
          v13 = 0;
        }
        v11 = v13 != 0;
      }
      LODWORD(max_length) = nameList->max_length;
      ++v10;
    }
    while ( (__int64)v10 < (int)max_length );
  }
  AssetManager__AddLoadWaitStatus(v9, callbackFunc, (const MethodInfo *)callbackFunc);
  v9->fields.loadParallelMax = loadParallelMax;
  AssetManager__LoadStart(v9, v14);
  return v11;
}


AssetData_o *AssetManager__GetAsset(
        AssetManager_o *this,
        int32_t type,
        System_String_o *name,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__AssetData__o **p_assetResourceDic; // x8

  if ( type == 1 )
  {
    p_assetResourceDic = &this->fields.assetResourceDic;
    return AssetManager__GetAssetData(this, *p_assetResourceDic, name, method);
  }
  if ( !type )
  {
    p_assetResourceDic = &this->fields.assetBundleDic;
    return AssetManager__GetAssetData(this, *p_assetResourceDic, name, method);
  }
  return 0;
}


AssetData_o *AssetManager__GetAssetData(
        AssetManager_o *this,
        System_Collections_Generic_Dictionary_string__AssetData__o *dic,
        System_String_o *name,
        const MethodInfo *method)
{
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2B834 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__AssetData__TryGetValue__);
    byte_4D2B834 = 1;
  }
  value = 0;
  if ( !name )
    return 0;
  if ( !dic )
    sub_1C942F0(this, dic);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)dic,
         (Il2CppObject *)name,
         &value,
         (const MethodInfo_3522400 *)Method_System_Collections_Generic_Dictionary_string__AssetData__TryGetValue__) )
  {
    return (AssetData_o *)value;
  }
  else
  {
    return 0;
  }
}


System_String_o *AssetManager__GetAssetDownloadSizeString(
        AssetManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AssetData_o *AssetData; // x0
  const MethodInfo *v5; // x1
  double size; // d0

  AssetData = AssetManager__GetAssetData(this, this->fields.assetBundleDic, name, v3);
  if ( AssetData )
    size = (double)AssetData->fields.size;
  else
    size = 0.0;
  return AssetManager__ConvertDownloadSizeToString((AssetManager_o *)AssetData, size, v5);
}


AssetData_o *AssetManager__GetAssetResource(AssetManager_o *this, System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AssetData_o *result; // x0
  AssetData_o *v5; // x19

  result = AssetManager__GetAssetData(this, this->fields.assetResourceDic, name, v3);
  if ( result )
  {
    v5 = result;
    if ( AssetData__get_IsEmpty(result, 0) )
      return 0;
    else
      return v5;
  }
  return result;
}


AssetData_o *AssetManager__GetAssetStorage(AssetManager_o *this, System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AssetData_o *result; // x0
  AssetData_o *v5; // x19

  result = AssetManager__GetAssetData(this, this->fields.assetBundleDic, name, v3);
  if ( result )
  {
    v5 = result;
    if ( AssetData__get_IsEmpty(result, 0) )
      return 0;
    else
      return v5;
  }
  return result;
}


AssetData_o *AssetManager__GetAssetStorageData(AssetManager_o *this, System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return AssetManager__GetAssetData(this, this->fields.assetBundleDic, name, v3);
}


System_String_array *AssetManager__GetAssetStorageList(
        AssetManager_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  System_String_o *v5; // x20
  System_Collections_Generic_List_object__o *v6; // x19
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *assetBundleDic; // x0
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *currentValue; // x25
  System_String_o *monitor; // x0
  _BOOL8 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  Il2CppObject *v21; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v27; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v28; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4D2B819 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    sub_1C94098(&StringLiteral_1041/*"/"*/);
    byte_4D2B819 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v5 = System_String__Concat_64417744(path, (System_String_o *)StringLiteral_1041/*"/"*/, 0);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic )
    goto LABEL_21;
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                assetBundleDic,
                                                                                (const MethodInfo_3520A24 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !assetBundleDic )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v27,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_3BB3594 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v28 = v27;
  while ( 1 )
  {
    v9 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v28,
           (const MethodInfo_3620234 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v9 )
      break;
    currentValue = v28.fields._currentValue;
    if ( !v28.fields._currentValue )
      sub_1C942F0(v9, v10);
    monitor = (System_String_o *)v28.fields._currentValue[1].monitor;
    if ( !monitor )
      sub_1C942F0(0, v10);
    v13 = System_String__StartsWith(monitor, v5, 0);
    if ( v13 )
    {
      if ( !v6 )
        sub_1C942F0(v13, v14);
      v21 = (Il2CppObject *)currentValue[1].monitor;
      items = v6->fields._items;
      v23 = Method_System_Collections_Generic_List_string__Add__;
      ++v6->fields._version;
      if ( !items )
        sub_1C942F0(v13, v21);
      size = v6->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v6,
          v21,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = &items->obj.klass + size;
        v6->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v21;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v21, v15, v16, v17, v18, v19, v20);
      }
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v28,
    (const MethodInfo_3620230 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  if ( !v6 )
LABEL_21:
    sub_1C942F0(assetBundleDic, v7);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v6,
                                  (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_string__ToArray__);
}


AssetData_array *AssetManager__GetAssetStorage_41293660(
        AssetManager_o *this,
        System_String_array *nameList,
        const MethodInfo *method)
{
  AssetManager_o *v4; // x20
  const MethodInfo *v5; // x3
  il2cpp_array_size_t max_length; // x8
  unsigned int *v7; // x21
  unsigned __int64 v8; // x24
  GrandQuestFolderBoardItem_o *p_isUseDebugStatus; // x22
  System_String_o *v10; // x2
  AssetManager_o *v11; // x23
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  __int64 v19; // x0

  v4 = this;
  if ( (byte_4D2B835 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_1C94098(&AssetData___TypeInfo);
    byte_4D2B835 = 1;
  }
  if ( !nameList )
LABEL_17:
    sub_1C942F0(this, nameList);
  this = (AssetManager_o *)sub_1C94140(AssetData___TypeInfo, LODWORD(nameList->max_length));
  max_length = nameList->max_length;
  v7 = (unsigned int *)this;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    p_isUseDebugStatus = (GrandQuestFolderBoardItem_o *)&this->fields.isUseDebugStatus;
    while ( v8 < (unsigned int)max_length )
    {
      v10 = nameList->m_Items[v8];
      if ( v10 )
      {
        this = (AssetManager_o *)AssetManager__GetAssetData(this, v4->fields.assetBundleDic, v10, v5);
        if ( this )
        {
          v11 = this;
          this = (AssetManager_o *)AssetData__get_IsEmpty((AssetData_o *)this, 0);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !v7 )
              goto LABEL_17;
            this = (AssetManager_o *)sub_1C941D4(v11, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
            if ( !this )
            {
              v19 = sub_1C94314(0);
              sub_1C941C0(v19, 0);
            }
            if ( v8 >= v7[6] )
              break;
            p_isUseDebugStatus->klass = (GrandQuestFolderBoardItem_c *)v11;
            sub_1C9403C(p_isUseDebugStatus, (int32_t)v11, v12, v13, v14, v15, v16, v17);
          }
        }
      }
      LODWORD(max_length) = nameList->max_length;
      ++v8;
      p_isUseDebugStatus = (GrandQuestFolderBoardItem_o *)((char *)p_isUseDebugStatus + 8);
      if ( (__int64)v8 >= (int)max_length )
        return (AssetData_array *)v7;
    }
    sub_1C942F8(this);
  }
  return (AssetData_array *)v7;
}


bool AssetManager__GetAssetStorage_41294120(
        AssetManager_o *this,
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  _BOOL8 Status; // x0
  const MethodInfo *v9; // x3
  AssetData_o *AssetData; // x0
  AssetData_o *v11; // x20

  if ( !name )
    goto LABEL_6;
  Status = AssetManager__AddCallbackLoadStatus(this, 0, name, callbackFunc, v4);
  if ( !Status )
  {
    AssetData = AssetManager__GetAssetData((AssetManager_o *)Status, this->fields.assetBundleDic, name, v9);
    if ( !AssetData )
      return (char)AssetData;
    v11 = AssetData;
    if ( !AssetData__get_IsEmpty(AssetData, 0) )
    {
      if ( callbackFunc )
        ((void (__fastcall *)(intptr_t, AssetData_o *, intptr_t))callbackFunc->fields.invoke_impl)(
          callbackFunc->fields.method_code,
          v11,
          callbackFunc->fields.method);
      goto LABEL_3;
    }
LABEL_6:
    LOBYTE(AssetData) = 0;
    return (char)AssetData;
  }
LABEL_3:
  LOBYTE(AssetData) = 1;
  return (char)AssetData;
}


bool AssetManager__GetAsset_41284216(
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
      ((void (__fastcall *)(intptr_t, AssetData_o *, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        Asset,
        callbackFunc->fields.method);
    goto LABEL_5;
  }
  return (char)Asset;
}


bool AssetManager__GetAsset_41284504(
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
    AssetData = AssetManager__GetAssetData((AssetManager_o *)Status, this->fields.assetBundleDic, name, v9);
    if ( !AssetData )
    {
      v12 = 1;
      v14 = AssetManager__AddCallbackLoadStatus(this, 1, name, callbackFunc, v11);
      if ( v14 )
        return v12;
      AssetData = AssetManager__GetAssetData((AssetManager_o *)v14, this->fields.assetResourceDic, name, v15);
      if ( !AssetData )
        return 0;
    }
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, AssetData_o *, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        AssetData,
        callbackFunc->fields.method);
  }
  return 1;
}


AssetData_o *AssetManager__GetAsset_41310588(AssetManager_o *this, System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AssetData_o *result; // x0
  const MethodInfo *v7; // x3

  result = AssetManager__GetAssetData(this, this->fields.assetBundleDic, name, v3);
  if ( !result )
    return AssetManager__GetAssetData(0, this->fields.assetResourceDic, name, v7);
  return result;
}


System_String_o *AssetManager__GetDateVersion(const MethodInfo *method)
{
  AssetManager_c *v1; // x0

  if ( (byte_4D2B7E9 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    byte_4D2B7E9 = 1;
  }
  v1 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v1 = AssetManager_TypeInfo;
  }
  return v1->static_fields->assetBundleDateVersion;
}


bool AssetManager__GetDebugSlowLoad(const MethodInfo *method)
{
  return 0;
}


bool AssetManager__GetDebugStatusOut(AssetManager_o *this, const MethodInfo *method)
{
  return 0;
}


int64_t AssetManager__GetDownloadSize(AssetManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *processingAssetLoaderList; // x0
  int64_t downloadSize; // x21
  int32_t v5; // w20
  int32_t LoadSize; // w8

  if ( (byte_4D2B818 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    byte_4D2B818 = 1;
  }
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
LABEL_8:
    sub_1C942F0(processingAssetLoaderList, method);
  downloadSize = this->fields.downloadSize;
  v5 = 0;
  while ( v5 < processingAssetLoaderList->fields._size )
  {
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               processingAssetLoaderList,
                                                                               v5,
                                                                               (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    if ( processingAssetLoaderList )
    {
      LoadSize = AssetLoader__get_LoadSize((AssetLoader_o *)processingAssetLoaderList, method);
      processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
      downloadSize -= LoadSize;
      ++v5;
      if ( processingAssetLoaderList )
        continue;
    }
    goto LABEL_8;
  }
  return downloadSize;
}


System_String_o *AssetManager__GetDownloadSizeString(AssetManager_o *this, const MethodInfo *method)
{
  AssetManager_o *DownloadSize; // x0
  const MethodInfo *v3; // x1

  DownloadSize = (AssetManager_o *)AssetManager__GetDownloadSize(this, method);
  return AssetManager__ConvertDownloadSizeToString(DownloadSize, (double)(__int64)DownloadSize, v3);
}


System_String_o *AssetManager__GetMasterVersion(const MethodInfo *method)
{
  AssetManager_c *v1; // x0

  if ( (byte_4D2B7E8 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    byte_4D2B7E8 = 1;
  }
  v1 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v1 = AssetManager_TypeInfo;
  }
  return v1->static_fields->assetBundleMasterVersion;
}


System_Collections_IEnumerator_o *AssetManager__InitCR(AssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2B81F & 1) == 0 )
  {
    sub_1C94098(&AssetManager__InitCR_d__135_TypeInfo);
    byte_4D2B81F = 1;
  }
  v3 = sub_1C942E4(AssetManager__InitCR_d__135_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void AssetManager__Initialize(AssetManager_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *initCRW; // x1
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  void *assetBundleReleaseDic; // x0
  char v11; // w28
  __int64 v12; // x1
  int v13; // w28
  const MethodInfo *v14; // x2
  __int64 v15; // x1
  int32_t v16; // w20
  Il2CppObject *Item; // x21
  int32_t v18; // w2
  int v19; // w8
  const MethodInfo *v20; // x0
  System_String_o *Path; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  AssetManager_c *v28; // x8
  System_String_o *v29; // x20
  struct AssetManager_StaticFields *static_fields; // x0
  struct AssetManager_StaticFields *v31; // x8
  System_String_o *cachePathName; // x20
  System_String_o *configFileName; // x21
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  struct AssetManager_StaticFields *v36; // x8
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  struct AssetManager_StaticFields *v43; // x8
  System_String_o *v44; // x20
  System_String_o *v45; // x0
  System_String_o *v46; // x0
  struct AssetManager_StaticFields *v47; // x8
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  struct AssetManager_StaticFields *v54; // x8
  System_String_o *v55; // x20
  System_String_o *v56; // x0
  System_String_o *v57; // x0
  struct AssetManager_StaticFields *v58; // x8
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v65; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o i; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4D2B811 & 1) == 0 )
  {
    sub_1C94098(&AndroidUtil_TypeInfo);
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_AssetLoader__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    byte_4D2B811 = 1;
  }
  memset(&i, 0, sizeof(i));
  initCRW = this->fields.initCRW;
  if ( initCRW )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, initCRW, 0);
    this->fields.initCRW = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.initCRW, 0, v4, v5, v6, v7, v8, v9);
  }
  assetBundleReleaseDic = this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_44;
  System_Collections_Generic_Dictionary_object__object___Clear(
    (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
    (const MethodInfo_3520D7C *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
  assetBundleReleaseDic = this->fields.assetBundleDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_44;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
         (const MethodInfo_35208C4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) < 1 )
  {
    v13 = 0;
  }
  else
  {
    assetBundleReleaseDic = this->fields.assetBundleDic;
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    assetBundleReleaseDic = System_Collections_Generic_Dictionary_object__object___get_Values(
                              (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
                              (const MethodInfo_3520A24 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v65,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
      (const MethodInfo_3BB3594 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    v11 = 0;
    for ( i = v65;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &i,
            (const MethodInfo_3620234 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
          v11 |= AssetData__ReleaseData((AssetData_o *)i.fields._currentValue, 0) )
    {
      if ( !i.fields._currentValue )
        sub_1C942F0(0, v12);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
      &i,
      (const MethodInfo_3620230 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    assetBundleReleaseDic = this->fields.assetBundleDic;
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    System_Collections_Generic_Dictionary_object__object___Clear(
      (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
      (const MethodInfo_3520D7C *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
    v13 = v11 != 0;
  }
  assetBundleReleaseDic = this->fields.assetResourceDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_44;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
         (const MethodInfo_35208C4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) >= 1 )
  {
    assetBundleReleaseDic = this->fields.assetResourceDic;
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    assetBundleReleaseDic = System_Collections_Generic_Dictionary_object__object___get_Values(
                              (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
                              (const MethodInfo_3520A24 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v65,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
      (const MethodInfo_3BB3594 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    for ( i = v65;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &i,
            (const MethodInfo_3620234 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
          v13 |= AssetData__ReleaseData((AssetData_o *)i.fields._currentValue, 0) )
    {
      if ( !i.fields._currentValue )
        sub_1C942F0(0, v15);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
      &i,
      (const MethodInfo_3620230 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    assetBundleReleaseDic = this->fields.assetResourceDic;
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    System_Collections_Generic_Dictionary_object__object___Clear(
      (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
      (const MethodInfo_3520D7C *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
  }
  if ( (v13 & 1) != 0 )
    AssetManager__RequestUnloadUnusedAssets(this, 0, v14);
  assetBundleReleaseDic = this->fields.processingAssetLoaderList;
  if ( !assetBundleReleaseDic )
    goto LABEL_44;
  if ( *((int *)assetBundleReleaseDic + 6) >= 1 )
  {
    v16 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)assetBundleReleaseDic,
               v16,
               (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72110972((UnityEngine_Object_o *)Item, 0);
      assetBundleReleaseDic = this->fields.processingAssetLoaderList;
      if ( !assetBundleReleaseDic )
        goto LABEL_44;
      v18 = *((_DWORD *)assetBundleReleaseDic + 6);
      ++v16;
    }
    while ( v16 < v18 );
    v19 = *((_DWORD *)assetBundleReleaseDic + 7) + 1;
    *((_DWORD *)assetBundleReleaseDic + 6) = 0;
    *((_DWORD *)assetBundleReleaseDic + 7) = v19;
    if ( v18 >= 1 )
      System_Array__Clear(*((System_Array_o **)assetBundleReleaseDic + 2), 0, v18, 0);
  }
  assetBundleReleaseDic = this->fields.downLoadWaitList;
  if ( !assetBundleReleaseDic )
LABEL_44:
    sub_1C942F0(assetBundleReleaseDic, initCRW);
  System_Collections_Generic_Queue_object___Clear(
    (System_Collections_Generic_Queue_T__o *)assetBundleReleaseDic,
    (const MethodInfo_3A15EB8 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__);
  this->fields.downloadSize = 0;
  this->fields.isCancelDownload = 0;
  Path = AssetStorageCache__GetPath(v20);
  v28 = AssetManager_TypeInfo;
  v29 = Path;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v28 = AssetManager_TypeInfo;
  }
  static_fields = v28->static_fields;
  static_fields->cachePathName = v29;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->cachePathName, (int32_t)v29, v22, v23, v24, v25, v26, v27);
  v31 = AssetManager_TypeInfo->static_fields;
  cachePathName = v31->cachePathName;
  configFileName = v31->configFileName;
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  v34 = AndroidUtil__ConvertFileNameIfNeed(configFileName, 0);
  v35 = System_String__Concat_64417744(cachePathName, v34, 0);
  v36 = AssetManager_TypeInfo->static_fields;
  v36->cacheListFileName = v35;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v36->cacheListFileName, (int32_t)v35, v37, v38, v39, v40, v41, v42);
  v43 = AssetManager_TypeInfo->static_fields;
  v44 = v43->cachePathName;
  v45 = AndroidUtil__ConvertFileNameIfNeed(v43->createConfigFileName, 0);
  v46 = System_String__Concat_64417744(v44, v45, 0);
  v47 = AssetManager_TypeInfo->static_fields;
  v47->createCacheListFileName = v46;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v47->createCacheListFileName, (int32_t)v46, v48, v49, v50, v51, v52, v53);
  v54 = AssetManager_TypeInfo->static_fields;
  v55 = v54->cachePathName;
  v56 = AndroidUtil__ConvertFileNameIfNeed(v54->backConfigFileName, 0);
  v57 = System_String__Concat_64417744(v55, v56, 0);
  v58 = AssetManager_TypeInfo->static_fields;
  v58->backCacheListFileName = v57;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v58->backCacheListFileName, (int32_t)v57, v59, v60, v61, v62, v63, v64);
  this->fields.isInitFirst = 0;
}


void AssetManager__InitializeAssetStorage(AssetManager_o *this, const MethodInfo *method)
{
  struct System_Collections_IEnumerator_o **p_initCRW; // x20
  struct System_Collections_IEnumerator_o *inited; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  p_initCRW = &this->fields.initCRW;
  if ( !this->fields.initCRW )
  {
    this->fields.isInitEnd = 0;
    inited = AssetManager__InitCR(this, method);
    this->fields.initCRW = inited;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)p_initCRW, (int32_t)inited, v5, v6, v7, v8, v9, v10);
    UnityEngine_MonoBehaviour__StartCoroutine_72096164((UnityEngine_MonoBehaviour_o *)this, this->fields.initCRW, 0);
  }
}


void AssetManager__InterruptDownloadAssetStorage(
        AssetManager_o *this,
        System_String_o *target,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  AssetManager_o *v9; // x20
  GrandQuestFolderBoardItem_o *p_downLoadWaitList; // x20
  System_Collections_Generic_Queue_T__o *v11; // x21
  System_Collections_Generic_Queue_T__o *downLoadWaitList; // t1
  int size; // w23
  Il2CppObject *v14; // x22
  AssetData_o *m_CachedPtr; // x0

  v9 = this;
  if ( (byte_4D2B81D & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
    sub_1C94098(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
    sub_1C94098(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Peek__);
    this = (AssetManager_o *)sub_1C94098(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__);
    byte_4D2B81D = 1;
  }
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)v9->fields.downLoadWaitList;
  p_downLoadWaitList = (GrandQuestFolderBoardItem_o *)&v9->fields.downLoadWaitList;
  v11 = downLoadWaitList;
  if ( !downLoadWaitList )
    goto LABEL_10;
  size = v11->fields._size;
  if ( size >= 1 )
  {
    while ( 1 )
    {
      this = (AssetManager_o *)System_Collections_Generic_Queue_object___Peek(
                                 v11,
                                 (const MethodInfo_3A164E4 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Peek__);
      if ( !this )
        break;
      v14 = (Il2CppObject *)this;
      m_CachedPtr = (AssetData_o *)this->fields.m_CachedPtr;
      if ( !m_CachedPtr || !AssetData__IsSame_41256836(m_CachedPtr, 0, target, 0) )
      {
        System_Collections_Generic_Queue_object___Dequeue(
          v11,
          (const MethodInfo_3A16388 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
        System_Collections_Generic_Queue_object___Enqueue(
          v11,
          v14,
          (const MethodInfo_3A161F8 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
        if ( --size )
          continue;
      }
      goto LABEL_9;
    }
LABEL_10:
    sub_1C942F0(this, target);
  }
LABEL_9:
  p_downLoadWaitList->klass = (GrandQuestFolderBoardItem_c *)v11;
  sub_1C9403C(p_downLoadWaitList, (int32_t)v11, (int32_t)method, v3, v4, v5, v6, v7);
}


bool AssetManager__IsAssetStorageExistsButEmpty(AssetManager_o *this, System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AssetData_o *AssetData; // x0

  AssetData = AssetManager__GetAssetData(this, this->fields.assetBundleDic, name, v3);
  if ( AssetData )
    LOBYTE(AssetData) = AssetData__get_IsEmpty(AssetData, 0);
  return (char)AssetData;
}


bool AssetManager__IsExistAssetStorage(AssetManager_o *this, System_String_o *name, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__AssetData__o *assetBundleDic; // x0

  if ( (byte_4D2B830 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__);
    byte_4D2B830 = 1;
  }
  assetBundleDic = this->fields.assetBundleDic;
  if ( !assetBundleDic )
    sub_1C942F0(0, name);
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)assetBundleDic,
           (Il2CppObject *)name,
           (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__);
}


bool AssetManager__IsExistAssetStorage_41286592(
        AssetManager_o *this,
        System_String_array *nameList,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  bool v5; // w21
  AssetManager_o *v6; // x20
  unsigned __int64 v7; // x22
  System_String_o *v8; // x1

  if ( !nameList )
    sub_1C942F0(this, 0);
  max_length = nameList->max_length;
  v5 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v6 = this;
    v7 = 0;
    do
    {
      if ( v7 >= (unsigned int)max_length )
        sub_1C942F8(this);
      v8 = nameList->m_Items[v7];
      if ( v8 )
      {
        this = (AssetManager_o *)AssetManager__IsExistAssetStorage(v6, v8, method);
        if ( ((unsigned __int8)this & 1) == 0 )
          break;
      }
      LODWORD(max_length) = nameList->max_length;
      v5 = (__int64)++v7 < (int)max_length;
    }
    while ( (__int64)v7 < (int)max_length );
  }
  return !v5;
}


bool AssetManager__IsInitializeAssetStorage(AssetManager_o *this, const MethodInfo *method)
{
  return this->fields.isInitEnd;
}


bool AssetManager__IsNeedDownload(AssetManager_o *this, System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AssetData_o *AssetData; // x0

  AssetData = AssetManager__GetAssetData(this, this->fields.assetBundleDic, name, v3);
  if ( AssetData )
    LOBYTE(AssetData) = AssetData__IsNeedUpdateVersion(AssetData, 0);
  return (char)AssetData;
}


bool AssetManager__IsNeedDownload_41287132(
        AssetManager_o *this,
        System_String_array *nameList,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  bool v5; // w21
  AssetManager_o *v6; // x20
  unsigned __int64 v7; // x22
  System_String_o *v8; // x1

  if ( !nameList )
    sub_1C942F0(this, 0);
  max_length = nameList->max_length;
  v5 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v6 = this;
    v7 = 0;
    do
    {
      if ( v7 >= (unsigned int)max_length )
        sub_1C942F8(this);
      v8 = nameList->m_Items[v7];
      if ( v8 )
      {
        this = (AssetManager_o *)AssetManager__IsNeedDownload(v6, v8, method);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
      LODWORD(max_length) = nameList->max_length;
      v5 = (__int64)++v7 < (int)max_length;
    }
    while ( (__int64)v7 < (int)max_length );
  }
  return v5;
}


void AssetManager__LateUpdate(AssetManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *assetBundleReleaseDic; // x0
  int v4; // w24
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *currentValue; // x20
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x0
  float v10; // s0
  System_String_o *Path; // x20
  int64_t FreeSize; // x20
  ManagerConfig_c *v13; // x0
  AssetManager_c *v14; // x0
  AssetManager_c *v15; // x0
  AssetManager_c *v16; // x0
  System_String_o *createCacheListFileName; // x20
  System_Text_Encoding_o *UTF8; // x22
  System_IO_StreamWriter_o *v19; // x21
  __int64 v20; // x0
  __int64 v21; // x1
  AssetManager_c *v22; // x0
  AssetManager_c *v23; // x0
  AssetManager_c *v24; // x0
  AssetManager_c *v25; // x0
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  __int64 v33; // x0
  System_IO_IOException_o *v34; // x20
  System_String_o *v35; // x0
  __int64 v36; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v37; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v38; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_4D2B824 & 1) == 0 )
  {
    sub_1C94098(&Method_AssetManager_OnClickRetryDialog__);
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C94098(&CommonServicePluginScript_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&ManagementManager_TypeInfo);
    sub_1C94098(&ManagerConfig_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&System_IO_StreamWriter_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    sub_1C94098(&StringLiteral_2040/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/);
    sub_1C94098(&StringLiteral_15983/*"[FFFF80]Download error for debug"*/);
    sub_1C94098(&StringLiteral_11528/*"SCRIPT"*/);
    sub_1C94098(&StringLiteral_2041/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2B824 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_49;
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                       assetBundleReleaseDic,
                                                                                       (const MethodInfo_3520A24 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !assetBundleReleaseDic )
    goto LABEL_49;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v37,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
    (const MethodInfo_3BB3594 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v4 = 0;
  v38 = v37;
  while ( 1 )
  {
    v5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v38,
           (const MethodInfo_3620234 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v5 )
      break;
    currentValue = v38.fields._currentValue;
    if ( !v38.fields._currentValue )
      sub_1C942F0(v5, v6);
    if ( !HIDWORD(v38.fields._currentValue[5].klass)
      && !AssetData__get_IsEmpty((AssetData_o *)v38.fields._currentValue, 0) )
    {
      v4 |= AssetData__ReleaseData((AssetData_o *)currentValue, 0);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v38,
    (const MethodInfo_3620230 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  if ( (v4 & 1) != 0 )
    AssetManager__RequestUnloadUnusedAssets(this, 0, v8);
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
LABEL_49:
    sub_1C942F0(assetBundleReleaseDic, method);
  System_Collections_Generic_Dictionary_object__object___Clear(
    assetBundleReleaseDic,
    (const MethodInfo_3520D7C *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
  if ( this->fields.requestWriteCounter >= 0.0 )
  {
    v10 = this->fields.requestWriteCounter - UnityEngine_Time__get_deltaTime(0);
    this->fields.requestWriteCounter = v10;
    if ( v10 <= 0.0 && !this->fields.isErrorDialog )
    {
      Path = AssetStorageCache__GetPath(v9);
      if ( !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
      FreeSize = CommonServicePluginScript__GetFreeSize(Path, 0);
      if ( FreeSize < 0 )
        goto LABEL_47;
      v13 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v13 = ManagerConfig_TypeInfo;
      }
      if ( FreeSize < v13->static_fields->LIMIT_FREE_SIZE )
      {
LABEL_47:
        v33 = sub_1C940AC(&System_IO_IOException_TypeInfo);
        v34 = (System_IO_IOException_o *)sub_1C942E4(v33);
        v35 = (System_String_o *)sub_1C940AC(&StringLiteral_5293/*"Disk full"*/);
        System_IO_IOException___ctor_65234864(v34, v35, 0);
        v36 = sub_1C940AC(&Method_AssetManager_LateUpdate__);
        sub_1C941C0(v34, v36);
      }
      v14 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v14 = AssetManager_TypeInfo;
      }
      if ( System_IO_File__Exists(v14->static_fields->createCacheListFileName, 0) )
      {
        v15 = AssetManager_TypeInfo;
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v15 = AssetManager_TypeInfo;
        }
        System_IO_File__Delete(v15->static_fields->createCacheListFileName, 0);
      }
      v16 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v16 = AssetManager_TypeInfo;
      }
      createCacheListFileName = v16->static_fields->createCacheListFileName;
      UTF8 = System_Text_Encoding__get_UTF8(0);
      v19 = (System_IO_StreamWriter_o *)sub_1C942E4(System_IO_StreamWriter_TypeInfo);
      System_IO_StreamWriter___ctor_65262212(v19, createCacheListFileName, 0, UTF8, 0);
      if ( !v19 )
        sub_1C942F0(v20, v21);
      ((void (__fastcall *)(System_IO_StreamWriter_o *, struct System_String_o *, const MethodInfo *))v19->klass->vtable._16_Write.methodPtr)(
        v19,
        this->fields.requestConfigWriteData,
        v19->klass->vtable._16_Write.method);
      ((void (__fastcall *)(System_IO_StreamWriter_o *, const MethodInfo *))v19->klass->vtable._8_Close.methodPtr)(
        v19,
        v19->klass->vtable._8_Close.method);
      if ( System_IO_File__Exists(AssetManager_TypeInfo->static_fields->backCacheListFileName, 0) )
      {
        v22 = AssetManager_TypeInfo;
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v22 = AssetManager_TypeInfo;
        }
        System_IO_File__Delete(v22->static_fields->backCacheListFileName, 0);
      }
      v23 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v23 = AssetManager_TypeInfo;
      }
      if ( System_IO_File__Exists(v23->static_fields->cacheListFileName, 0) )
      {
        v24 = AssetManager_TypeInfo;
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v24 = AssetManager_TypeInfo;
        }
        System_IO_File__Move(v24->static_fields->cacheListFileName, v24->static_fields->backCacheListFileName, 0);
      }
      v25 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v25 = AssetManager_TypeInfo;
      }
      System_IO_File__Move(v25->static_fields->createCacheListFileName, v25->static_fields->cacheListFileName, 0);
      v26 = StringLiteral_1/*""*/;
      this->fields.requestConfigWriteData = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&this->fields.requestConfigWriteData,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
      this->fields.requestWriteCounter = -1.0;
    }
  }
}


bool AssetManager__LoadAsset(
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
        ((void (__fastcall *)(intptr_t, AssetData_o *, intptr_t))callbackFunc->fields.invoke_impl)(
          callbackFunc->fields.method_code,
          AssetResource,
          callbackFunc->fields.method);
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


AssetData_o *AssetManager__LoadAssetResource(AssetManager_o *this, System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AssetManager_o *v5; // x20
  AssetData_o *AssetData; // x0
  AssetData_o *v7; // x22
  AssetData_o *v8; // x21
  System_Collections_Generic_Dictionary_object__object__o *assetResourceDic; // x0
  __int64 v10; // x1

  v5 = this;
  if ( (byte_4D2B836 & 1) == 0 )
  {
    sub_1C94098(&AssetData_TypeInfo);
    this = (AssetManager_o *)sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
    byte_4D2B836 = 1;
  }
  AssetData = AssetManager__GetAssetData(this, v5->fields.assetResourceDic, name, v3);
  if ( !AssetData )
  {
    v8 = (AssetData_o *)sub_1C942E4(AssetData_TypeInfo);
    AssetData___ctor(v8, 1, name, 0);
    if ( v8 )
    {
      v7 = 0;
      if ( !AssetData__SetResource(v8, 0) )
        return v7;
      AssetData__AddEntry(v8, 0);
      assetResourceDic = (System_Collections_Generic_Dictionary_object__object__o *)v5->fields.assetResourceDic;
      if ( assetResourceDic )
      {
        System_Collections_Generic_Dictionary_object__object___Add(
          assetResourceDic,
          (Il2CppObject *)name,
          (Il2CppObject *)v8,
          (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
        return v8;
      }
    }
    sub_1C942F0(assetResourceDic, v10);
  }
  v7 = AssetData;
  AssetData__AddEntry(AssetData, 0);
  return v7;
}


// local variable allocation has failed, the output may be wrong!
bool AssetManager__LoadAssetStorage(
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
  System_Collections_Generic_Dictionary_object__object__o *assetBundleReleaseDic; // x0
  _BOOL8 Status; // x0
  const MethodInfo *v15; // x3
  AssetData_o *v16; // x0
  AssetData_o *v17; // x22
  const MethodInfo *v18; // x4
  const MethodInfo *v19; // x1

  v8 = this;
  if ( (byte_4D2B831 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
    byte_4D2B831 = 1;
  }
  if ( name )
  {
    AssetData = AssetManager__GetAssetData(
                  this,
                  v8->fields.assetBundleReleaseDic,
                  name,
                  *(const MethodInfo **)&loadParallelMax);
    if ( AssetData )
    {
      v12 = AssetData;
      assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)v8->fields.assetBundleReleaseDic;
      if ( !assetBundleReleaseDic )
        sub_1C942F0(0, v10);
      System_Collections_Generic_Dictionary_object__object___Remove(
        assetBundleReleaseDic,
        (Il2CppObject *)name,
        (const MethodInfo_35220F0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
      if ( !AssetData__get_IsEmpty(v12, 0) )
      {
        AssetData__AddEntry(v12, 0);
        if ( callbackFunc )
          ((void (__fastcall *)(intptr_t, AssetData_o *, intptr_t))callbackFunc->fields.invoke_impl)(
            callbackFunc->fields.method_code,
            v12,
            callbackFunc->fields.method);
        goto LABEL_16;
      }
    }
    Status = AssetManager__AddEntryLoadStatus(v8, 0, name, callbackFunc, v11);
    if ( Status )
      goto LABEL_16;
    v16 = AssetManager__GetAssetData((AssetManager_o *)Status, v8->fields.assetBundleDic, name, v15);
    if ( v16 )
    {
      v17 = v16;
      if ( !AssetData__get_IsEmpty(v16, 0) )
      {
        if ( !v17->fields.isLoadResources )
        {
          AssetData__AddEntry(v17, 0);
          if ( callbackFunc )
            ((void (__fastcall *)(intptr_t, AssetData_o *, intptr_t))callbackFunc->fields.invoke_impl)(
              callbackFunc->fields.method_code,
              v17,
              callbackFunc->fields.method);
          goto LABEL_16;
        }
        AssetData__ReleaseData(v17, 0);
      }
      AssetData__AddEntry(v17, 0);
      AssetManager__AddLoadWaitStatus_41309340(v8, v17, callbackFunc, 0, v18);
      v8->fields.loadParallelMax = loadParallelMax;
      AssetManager__LoadStart(v8, v19);
LABEL_16:
      LOBYTE(v16) = 1;
    }
  }
  else
  {
    LOBYTE(v16) = 0;
  }
  return (char)v16;
}


bool AssetManager__LoadAssetStorage_41292328(
        AssetManager_o *this,
        System_String_array *nameList,
        System_Action_o *callbackFunc,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  __int64 v9; // x21
  System_Collections_Generic_List_object__o *AssetStorage; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_List_object__o *v24; // x23
  System_Collections_Generic_List_object__o **v25; // x22
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x4
  il2cpp_array_size_t max_length; // x8
  int v35; // w26
  unsigned __int64 v36; // x27
  AssetLoader_LoadEndDataHandler_o **v37; // x23
  bool v38; // w25
  System_String_o *v39; // x24
  AssetLoader_LoadEndDataHandler_o *v40; // x25
  const MethodInfo *v41; // x3
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  const MethodInfo *v48; // x1

  if ( (byte_4D2B833 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__IndexOf__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__RemoveRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C94098(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C94098(&Method_AssetManager___c__DisplayClass173_0__LoadAssetStorage_b__0__);
    sub_1C94098(&AssetManager___c__DisplayClass173_0_TypeInfo);
    byte_4D2B833 = 1;
  }
  v9 = sub_1C942E4(AssetManager___c__DisplayClass173_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_31;
  *(_QWORD *)(v9 + 40) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 40), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 48) = callbackFunc;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 48), (int32_t)callbackFunc, v18, v19, v20, v21, v22, v23);
  *(_DWORD *)(v9 + 56) = loadParallelMax;
  v24 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v9 + 24) = v24;
  v25 = (System_Collections_Generic_List_object__o **)(v9 + 24);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)v24, v26, v27, v28, v29, v30, v31);
  AssetStorage = *(System_Collections_Generic_List_object__o **)(v9 + 24);
  if ( !AssetStorage
    || (System_Collections_Generic_List_object___AddRange(
          AssetStorage,
          (System_Collections_Generic_IEnumerable_T__o *)nameList,
          (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_string__AddRange__),
        *(_DWORD *)(v9 + 16) = 0,
        *(_BYTE *)(v9 + 32) = 0,
        !nameList) )
  {
LABEL_31:
    sub_1C942F0(AssetStorage, v11);
  }
  max_length = nameList->max_length;
  if ( (int)max_length >= 1 )
  {
    v35 = 0;
    v36 = 0;
    v37 = (AssetLoader_LoadEndDataHandler_o **)(v9 + 64);
    v38 = 1;
    while ( 1 )
    {
      if ( v36 >= (unsigned int)max_length )
        sub_1C942F8(AssetStorage);
      v39 = nameList->m_Items[v36];
      if ( !v39 )
      {
        AssetStorage = *v25;
        if ( !*v25 )
          goto LABEL_31;
        AssetStorage = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Remove(
                                                                      AssetStorage,
                                                                      0,
                                                                      (const MethodInfo_386C35C *)Method_System_Collections_Generic_List_string__Remove__);
        goto LABEL_23;
      }
      if ( !v38 )
        goto LABEL_22;
      v40 = *v37;
      if ( !*v37 )
      {
        v40 = (AssetLoader_LoadEndDataHandler_o *)sub_1C942E4(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v40,
          (Il2CppObject *)v9,
          Method_AssetManager___c__DisplayClass173_0__LoadAssetStorage_b__0__,
          v41);
        *(_QWORD *)(v9 + 64) = v40;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 64), (int32_t)v40, v42, v43, v44, v45, v46, v47);
      }
      if ( !this )
        goto LABEL_31;
      AssetStorage = (System_Collections_Generic_List_object__o *)AssetManager__LoadAssetStorage(
                                                                    this,
                                                                    v39,
                                                                    v40,
                                                                    *(_DWORD *)(v9 + 56),
                                                                    v33);
      if ( ((unsigned __int8)AssetStorage & 1) == 0 )
        break;
      ++v35;
      v38 = 1;
LABEL_23:
      LODWORD(max_length) = nameList->max_length;
      if ( (__int64)++v36 >= (int)max_length )
        goto LABEL_26;
    }
    AssetStorage = *v25;
    if ( !*v25 )
      goto LABEL_31;
    AssetStorage = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___IndexOf(
                                                                  AssetStorage,
                                                                  (Il2CppObject *)v39,
                                                                  (const MethodInfo_386BAD4 *)Method_System_Collections_Generic_List_string__IndexOf__);
    if ( ((unsigned int)AssetStorage & 0x80000000) == 0 )
    {
      v11 = (unsigned int)AssetStorage;
      AssetStorage = *v25;
      if ( !*v25 )
        goto LABEL_31;
      System_Collections_Generic_List_object___RemoveRange(
        AssetStorage,
        v11,
        AssetStorage->fields._size - v11,
        (const MethodInfo_386C6A0 *)Method_System_Collections_Generic_List_string__RemoveRange__);
    }
LABEL_22:
    v38 = 0;
    goto LABEL_23;
  }
  v35 = 0;
  v38 = 1;
LABEL_26:
  if ( v35 < 1 || !*(_BYTE *)(v9 + 32) && *(_DWORD *)(v9 + 16) == v35 )
  {
    AssetManager__AddLoadWaitStatus(this, *(System_Action_o **)(v9 + 48), v32);
    this->fields.loadParallelMax = *(_DWORD *)(v9 + 56);
    *(_BYTE *)(v9 + 32) = 1;
    AssetManager__LoadStart(this, v48);
  }
  return v38;
}


bool AssetManager__LoadAsset_41310344(
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
        ((void (__fastcall *)(intptr_t, AssetData_o *, intptr_t))callbackFunc->fields.invoke_impl)(
          callbackFunc->fields.method_code,
          AssetResource,
          callbackFunc->fields.method);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return v8;
}


bool AssetManager__LoadIsBusy(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1
  _DWORD *monitor; // x8

  if ( (byte_4D2B810 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4D2B810 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  if ( BYTE2(Instance[3].klass) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( Instance )
    {
      monitor = Instance[6].monitor;
      if ( monitor )
        return monitor[6] > 0;
    }
LABEL_9:
    sub_1C942F0(Instance, v2);
  }
  return 1;
}


bool AssetManager__LoadResourcesAssetStorage(
        AssetManager_o *this,
        System_String_o *name,
        System_String_array *resourceNames,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  AssetData_o *v11; // x0
  AssetData_o *AssetData; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x4
  AssetData_o *v15; // x24
  System_Collections_Generic_Dictionary_object__object__o *assetBundleReleaseDic; // x0
  _BOOL8 Status; // x0
  const MethodInfo *v18; // x3
  AssetData_o *v19; // x23
  System_Collections_Generic_List_object__o *v20; // x24
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct UnityEngine_Object_array *objectList; // x26
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v29; // x27
  int v30; // w8
  Il2CppObject *v31; // x25
  __int64 v32; // x23
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  int v37; // w22
  System_String_array *v38; // x0
  const MethodInfo *v39; // x4
  const MethodInfo *v40; // x1
  AssetData_o *v42; // [xsp+8h] [xbp-68h]

  if ( (byte_4D2B832 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    byte_4D2B832 = 1;
  }
  LOBYTE(v11) = 0;
  if ( !name || !resourceNames )
    return (char)v11;
  if ( !resourceNames->max_length )
  {
    LOBYTE(v11) = 0;
    return (char)v11;
  }
  AssetData = AssetManager__GetAssetData(0, this->fields.assetBundleReleaseDic, name, (const MethodInfo *)callbackFunc);
  if ( AssetData )
  {
    v15 = AssetData;
    assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleReleaseDic;
    if ( !assetBundleReleaseDic )
      goto LABEL_41;
    System_Collections_Generic_Dictionary_object__object___Remove(
      assetBundleReleaseDic,
      (Il2CppObject *)name,
      (const MethodInfo_35220F0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
    if ( !AssetData__get_IsEmpty(v15, 0) )
    {
      AssetData__AddEntry(v15, 0);
      if ( callbackFunc )
        ((void (__fastcall *)(intptr_t, AssetData_o *, intptr_t))callbackFunc->fields.invoke_impl)(
          callbackFunc->fields.method_code,
          v15,
          callbackFunc->fields.method);
      goto LABEL_39;
    }
  }
  Status = AssetManager__AddEntryLoadStatus(this, 0, name, callbackFunc, v14);
  if ( Status )
  {
LABEL_39:
    LOBYTE(v11) = 1;
    return (char)v11;
  }
  v11 = AssetManager__GetAssetData((AssetManager_o *)Status, this->fields.assetBundleDic, name, v18);
  if ( v11 )
  {
    v19 = v11;
    v20 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v20,
      (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
    objectList = v19->fields.objectList;
    if ( objectList )
    {
      max_length = resourceNames->max_length;
      v42 = v19;
      if ( (int)max_length >= 1 )
      {
        v29 = 0;
        while ( 1 )
        {
          if ( v29 >= (unsigned int)max_length )
            goto LABEL_42;
          v30 = objectList->max_length;
          v31 = (Il2CppObject *)resourceNames->m_Items[v29];
          if ( v30 >= 1 )
            break;
LABEL_22:
          if ( !v20 )
            goto LABEL_41;
          items = v20->fields._items;
          v34 = Method_System_Collections_Generic_List_string__Add__;
          ++v20->fields._version;
          if ( !items )
            goto LABEL_41;
          size = v20->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v20,
              v31,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
          }
          else
          {
            v36 = &items->obj.klass + size;
            v20->fields._size = size + 1;
            v36[4] = (Il2CppClass *)v31;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v36 + 4), (int32_t)v31, v21, v22, v23, v24, v25, v26);
          }
LABEL_27:
          LODWORD(max_length) = resourceNames->max_length;
          if ( (__int64)++v29 >= (int)max_length )
            goto LABEL_28;
        }
        v32 = 0;
        while ( (unsigned int)v32 < v30 )
        {
          assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)objectList->m_Items[v32];
          if ( !assetBundleReleaseDic )
            goto LABEL_41;
          assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_Object__get_name(
                                                                                               (UnityEngine_Object_o *)assetBundleReleaseDic,
                                                                                               0);
          if ( !v31 )
            goto LABEL_41;
          assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)System_String__Equals_64453064(
                                                                                               (System_String_o *)v31,
                                                                                               (System_String_o *)assetBundleReleaseDic,
                                                                                               0);
          if ( ((unsigned __int8)assetBundleReleaseDic & 1) != 0 )
            goto LABEL_27;
          v30 = objectList->max_length;
          if ( (int)++v32 >= v30 )
            goto LABEL_22;
        }
LABEL_42:
        sub_1C942F8(assetBundleReleaseDic);
      }
LABEL_28:
      v19 = v42;
      if ( !v20 )
LABEL_41:
        sub_1C942F0(assetBundleReleaseDic, v13);
    }
    else
    {
      if ( !v20 )
        goto LABEL_41;
      System_Collections_Generic_List_object___AddRange(
        v20,
        (System_Collections_Generic_IEnumerable_T__o *)resourceNames,
        (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_string__AddRange__);
    }
    v37 = v20->fields._size;
    AssetData__AddEntry(v19, 0);
    if ( v37 < 1 )
    {
      if ( callbackFunc )
        ((void (__fastcall *)(intptr_t, AssetData_o *, intptr_t))callbackFunc->fields.invoke_impl)(
          callbackFunc->fields.method_code,
          v19,
          callbackFunc->fields.method);
    }
    else
    {
      v38 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                     v20,
                                     (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_string__ToArray__);
      AssetManager__AddLoadWaitStatus_41309340(this, v19, callbackFunc, v38, v39);
      this->fields.loadParallelMax = loadParallelMax;
      AssetManager__LoadStart(this, v40);
    }
    goto LABEL_39;
  }
  return (char)v11;
}


bool AssetManager__LoadStart(AssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  void *processingAssetLoaderList; // x0
  Il2CppObject *v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *downLoadWaitList; // x8
  struct System_Collections_Generic_List_AssetLoader__o *v15; // x8
  Il2CppObject *v16; // x0
  __int64 v17; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  __int64 v24; // x22
  __int64 v25; // x8
  System_String_o **v26; // x8
  __int64 v27; // x8
  Il2CppObject *v28; // x0
  Il2CppObject **v29; // x22
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  __int64 v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  __int64 v45; // x8
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  __int64 v52; // x1
  const MethodInfo *v53; // x2
  AssetLoader_LoadEndDataHandler_o *v54; // x1
  __int64 v55; // x19
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4D2B82C & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__get_Current__);
    sub_1C94098(&Method_UnityEngine_GameObject_AddComponent_AssetLoader___);
    sub_1C94098(&Method_System_Collections_Generic_List_AssetLoader__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_AssetLoader__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
    sub_1C94098(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__);
    sub_1C94098(&Method_AssetManager___c__DisplayClass152_0__LoadStart_b__0__);
    sub_1C94098(&AssetManager___c__DisplayClass152_0_TypeInfo);
    sub_1C94098(&StringLiteral_5226/*"DelayLoadStart"*/);
    byte_4D2B82C = 1;
  }
  memset(&v57, 0, sizeof(v57));
  v3 = sub_1C942E4(AssetManager___c__DisplayClass152_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_49;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D27B37 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D27B37 = 1;
  }
  processingAssetLoaderList = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    processingAssetLoaderList = NetworkManager_TypeInfo;
  }
  if ( *(_BYTE *)(*((_QWORD *)processingAssetLoaderList + 23) + 144LL) || this->fields.isPauseDownload )
    return 0;
  if ( this->fields._DispLog )
  {
    processingAssetLoaderList = this->fields.processingAssetLoaderList;
    if ( !processingAssetLoaderList )
      goto LABEL_49;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v56,
      (System_Collections_Generic_List_object__o *)processingAssetLoaderList,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_AssetLoader__GetEnumerator__);
    v57 = v56;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v57,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_AssetLoader__MoveNext__) )
      ;
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v57,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_AssetLoader__Dispose__);
  }
  downLoadWaitList = this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
    goto LABEL_49;
  if ( downLoadWaitList->fields._size <= 0 )
    return 0;
  v15 = this->fields.processingAssetLoaderList;
  if ( !v15 )
    goto LABEL_49;
  if ( v15->fields._size >= this->fields.loadParallelMax )
    return 0;
  UnityEngine_MonoBehaviour__StartCoroutine(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5226/*"DelayLoadStart"*/,
    0);
  processingAssetLoaderList = this->fields.downLoadWaitList;
  if ( !processingAssetLoaderList
    || (v16 = System_Collections_Generic_Queue_object___Dequeue(
                (System_Collections_Generic_Queue_T__o *)processingAssetLoaderList,
                (const MethodInfo_3A16388 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__),
        *(_QWORD *)(v3 + 24) = v16,
        v17 = v3 + 24,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)v16, v18, v19, v20, v21, v22, v23),
        (v24 = *(_QWORD *)(v3 + 24)) == 0) )
  {
LABEL_49:
    sub_1C942F0(processingAssetLoaderList, v5);
  }
  if ( (byte_4D2B840 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2B840 = 1;
  }
  v25 = *(_QWORD *)(v24 + 16);
  if ( v25 )
    v26 = (System_String_o **)(v25 + 24);
  else
    v26 = (System_String_o **)&StringLiteral_1/*""*/;
  processingAssetLoaderList = (void *)System_String__IsNullOrEmpty(*v26, 0);
  if ( ((unsigned __int8)processingAssetLoaderList & 1) == 0 )
  {
    processingAssetLoaderList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( processingAssetLoaderList )
    {
      v28 = UnityEngine_GameObject__AddComponent_object_(
              (UnityEngine_GameObject_o *)processingAssetLoaderList,
              (const MethodInfo_31F46A8 *)Method_UnityEngine_GameObject_AddComponent_AssetLoader___);
      *(_QWORD *)(v3 + 32) = v28;
      v29 = (Il2CppObject **)(v3 + 32);
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)v28, v30, v31, v32, v33, v34, v35);
      processingAssetLoaderList = this->fields.processingAssetLoaderList;
      if ( processingAssetLoaderList )
      {
        v5 = *v29;
        v42 = *((_QWORD *)processingAssetLoaderList + 2);
        v43 = Method_System_Collections_Generic_List_AssetLoader__Add__;
        ++*((_DWORD *)processingAssetLoaderList + 7);
        if ( v42 )
        {
          v44 = *((int *)processingAssetLoaderList + 6);
          if ( (unsigned int)v44 >= *(_DWORD *)(v42 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)processingAssetLoaderList,
              v5,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
          }
          else
          {
            v45 = v42 + 8 * v44;
            *((_DWORD *)processingAssetLoaderList + 6) = v44 + 1;
            *(_QWORD *)(v45 + 32) = v5;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v45 + 32), (int32_t)v5, v36, v37, v38, v39, v40, v41);
          }
          if ( *(_QWORD *)v17 )
          {
            processingAssetLoaderList = *v29;
            if ( *v29 )
            {
              v52 = *(_QWORD *)(*(_QWORD *)v17 + 16LL);
              *((_QWORD *)processingAssetLoaderList + 4) = v52;
              sub_1C9403C(
                (GrandQuestFolderBoardItem_o *)((char *)processingAssetLoaderList + 32),
                v52,
                v46,
                v47,
                v48,
                v49,
                v50,
                v51);
              if ( *(_QWORD *)v17 )
              {
                processingAssetLoaderList = *v29;
                if ( *v29 )
                {
                  v54 = *(AssetLoader_LoadEndDataHandler_o **)(*(_QWORD *)v17 + 32LL);
                  if ( v54 )
                    AssetLoader__add_endCallback2((AssetLoader_o *)processingAssetLoaderList, v54, v53);
                  v55 = sub_1C942E4(System_Action_TypeInfo);
                  System_Action___ctor(
                    (System_Action_o *)v55,
                    (Il2CppObject *)v3,
                    Method_AssetManager___c__DisplayClass152_0__LoadStart_b__0__,
                    0);
                  if ( v55 )
                  {
                    (*(void (__fastcall **)(_QWORD, _QWORD))(v55 + 24))(*(_QWORD *)(v55 + 64), *(_QWORD *)(v55 + 40));
                    return 1;
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_49;
  }
  if ( !*(_QWORD *)v17 )
    goto LABEL_49;
  v27 = *(_QWORD *)(*(_QWORD *)v17 + 24LL);
  if ( v27 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(v27 + 24))(*(_QWORD *)(v27 + 64), *(_QWORD *)(v27 + 40));
  return AssetManager__LoadStart(this, (const MethodInfo *)v5);
}


void AssetManager__OnClickRetryDialog(AssetManager_o *this, bool isDecide, const MethodInfo *method)
{
  ManagementManager_c *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4D2B820 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Application_TypeInfo);
    sub_1C94098(&ManagementManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4D2B820 = 1;
  }
  if ( isDecide )
  {
    this->fields.isErrorDialog = 0;
  }
  else
  {
    if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    if ( !byte_4D2B7C8 )
    {
      sub_1C94098(&ManagementManager_TypeInfo);
      byte_4D2B7C8 = 1;
    }
    v5 = ManagementManager_TypeInfo;
    if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      v5 = ManagementManager_TypeInfo;
    }
    if ( v5->static_fields->isDuringStartup )
    {
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__Quit_71904136(0);
    }
    else
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
      if ( !Instance )
        sub_1C942F0(0, v7);
      ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0);
    }
  }
}


void AssetManager__OnClickWaitDebugDialog(AssetManager_o *this, bool isDecide, const MethodInfo *method)
{
  this->fields.isErrorDialog = 0;
}


void AssetManager__OnEndLoadAssetStorage(AssetManager_o *this, AssetLoader_o *loader, const MethodInfo *method)
{
  AssetManager_o *v4; // x19
  _BOOL4 isRequestDownload; // w23
  int32_t v6; // w21
  Il2CppObject *Item; // x22
  struct AssetData_o *data; // x8

  v4 = this;
  if ( (byte_4D2B82E & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_AssetLoader__RemoveAt__);
    sub_1C94098(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    this = (AssetManager_o *)sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2B82E = 1;
  }
  if ( !loader )
    goto LABEL_11;
  this = (AssetManager_o *)v4->fields.processingAssetLoaderList;
  if ( !this )
    goto LABEL_11;
  isRequestDownload = loader->fields.isRequestDownload;
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= SLODWORD(this->fields.m_CancellationTokenSource) )
      goto LABEL_15;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)this,
             v6,
             (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (AssetManager_o *)UnityEngine_Object__op_Equality(
                               (UnityEngine_Object_o *)Item,
                               (UnityEngine_Object_o *)loader,
                               0);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    this = (AssetManager_o *)v4->fields.processingAssetLoaderList;
    ++v6;
    if ( !this )
      goto LABEL_11;
  }
  data = loader->fields.data;
  if ( !data
    || (this = (AssetManager_o *)v4->fields.processingAssetLoaderList,
        v4->fields.downloadSize -= data->fields.size,
        !this) )
  {
LABEL_11:
    sub_1C942F0(this, loader);
  }
  System_Collections_Generic_List_object___RemoveAt(
    (System_Collections_Generic_List_object__o *)this,
    v6,
    (const MethodInfo_386C608 *)Method_System_Collections_Generic_List_AssetLoader__RemoveAt__);
LABEL_15:
  if ( isRequestDownload )
  {
    if ( v4->fields.writeRequestThread )
      v4->fields.reserveWriteRequest = 1;
    else
      AssetManager__StartThreadConfigWriteRequest(v4, (const MethodInfo *)loader);
  }
  AssetManager__LoadStart(v4, (const MethodInfo *)loader);
}


void AssetManager__PauseDownloadAssetStorage(AssetManager_o *this, const MethodInfo *method)
{
  if ( !this->fields.isPauseDownload )
    this->fields.isPauseDownload = 1;
}


void AssetManager__ReleaseAsset(AssetManager_o *this, int32_t type, System_String_o *name, const MethodInfo *method)
{
  AssetData_o *Asset; // x0
  AssetData_o *v8; // x21
  bool v9; // w0
  __int64 v10; // x1
  struct System_Collections_Generic_Dictionary_string__AssetData__o *assetResourceDic; // x0

  if ( (byte_4D2B82F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
    byte_4D2B82F = 1;
  }
  Asset = AssetManager__GetAsset(this, type, name, method);
  if ( Asset )
  {
    v8 = Asset;
    v9 = AssetData__RemoveEntry(Asset, 0);
    if ( type == 1 && v9 )
    {
      assetResourceDic = this->fields.assetResourceDic;
      if ( !assetResourceDic )
        sub_1C942F0(0, v10);
      System_Collections_Generic_Dictionary_object__object___Remove(
        (System_Collections_Generic_Dictionary_object__object__o *)assetResourceDic,
        (Il2CppObject *)v8->fields.name,
        (const MethodInfo_35220F0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
    }
  }
}


void AssetManager__ReleaseAssetResource(AssetManager_o *this, System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AssetManager_o *v5; // x20
  AssetData_o *AssetData; // x0
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *assetResourceDic; // x0

  v5 = this;
  if ( (byte_4D2B837 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
    byte_4D2B837 = 1;
  }
  AssetData = AssetManager__GetAssetData(this, v5->fields.assetResourceDic, name, v3);
  if ( AssetData && AssetData__RemoveEntry(AssetData, 0) )
  {
    assetResourceDic = (System_Collections_Generic_Dictionary_object__object__o *)v5->fields.assetResourceDic;
    if ( !assetResourceDic )
      sub_1C942F0(0, v7);
    System_Collections_Generic_Dictionary_object__object___Remove(
      assetResourceDic,
      (Il2CppObject *)name,
      (const MethodInfo_35220F0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
  }
}


void AssetManager__ReleaseAssetStorage(AssetManager_o *this, System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AssetData_o *AssetData; // x0

  AssetData = AssetManager__GetAssetData(this, this->fields.assetBundleDic, name, v3);
  if ( AssetData )
    AssetData__RemoveEntry(AssetData, 0);
}


void AssetManager__ReleaseAssetStorageAll(
        AssetManager_o *this,
        System_String_array *nameList,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v6; // x21

  if ( !nameList )
    sub_1C942F0(this, 0);
  max_length = nameList->max_length;
  if ( (int)max_length >= 1 )
  {
    v6 = 0;
    do
    {
      if ( v6 >= (unsigned int)max_length )
        sub_1C942F8(this);
      AssetManager__ReleaseAssetStorageEntryAll(this, nameList->m_Items[v6], method);
      LODWORD(max_length) = nameList->max_length;
      ++v6;
    }
    while ( (__int64)v6 < (int)max_length );
  }
}


void AssetManager__ReleaseAssetStorageEntryAll(AssetManager_o *this, System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AssetData_o *AssetData; // x0

  AssetData = AssetManager__GetAssetData(this, this->fields.assetBundleDic, name, v3);
  if ( AssetData )
    AssetData__RemoveEntryAll(AssetData, 0);
}


void AssetManager__ReleaseAssetStorage_41294644(
        AssetManager_o *this,
        System_String_array *nameList,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v6; // x21

  if ( !nameList )
    sub_1C942F0(this, 0);
  max_length = nameList->max_length;
  if ( (int)max_length >= 1 )
  {
    v6 = 0;
    do
    {
      if ( v6 >= (unsigned int)max_length )
        sub_1C942F8(this);
      AssetManager__ReleaseAssetStorage(this, nameList->m_Items[v6], method);
      LODWORD(max_length) = nameList->max_length;
      ++v6;
    }
    while ( (__int64)v6 < (int)max_length );
  }
}


void AssetManager__ReleaseAsset_41285192(
        AssetManager_o *this,
        int32_t type,
        System_String_array *nameList,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v8; // x22

  if ( !nameList )
    sub_1C942F0(this, type);
  max_length = nameList->max_length;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    do
    {
      if ( v8 >= (unsigned int)max_length )
        sub_1C942F8(this);
      AssetManager__ReleaseAsset(this, type, nameList->m_Items[v8], method);
      LODWORD(max_length) = nameList->max_length;
      ++v8;
    }
    while ( (__int64)v8 < (int)max_length );
  }
}


void AssetManager__ReleaseAsset_41285492(AssetManager_o *this, AssetData_o *assetInfo, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( assetInfo )
    AssetManager__ReleaseAsset(this, assetInfo->fields.type, assetInfo->fields.name, v3);
}


void AssetManager__ReleaseAsset_41285692(
        AssetManager_o *this,
        AssetData_array *assetInfoList,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v7; // x21
  AssetData_o *v8; // x8

  if ( !assetInfoList )
    sub_1C942F0(this, 0);
  max_length = assetInfoList->max_length;
  if ( (int)max_length >= 1 )
  {
    v7 = 0;
    do
    {
      if ( v7 >= (unsigned int)max_length )
        sub_1C942F8(this);
      v8 = assetInfoList->m_Items[v7];
      if ( v8 )
        AssetManager__ReleaseAsset(this, v8->fields.type, v8->fields.name, v3);
      LODWORD(max_length) = assetInfoList->max_length;
      ++v7;
    }
    while ( (__int64)v7 < (int)max_length );
  }
}


void AssetManager__ReleaseReservation(AssetManager_o *this, AssetData_o *info, const MethodInfo *method)
{
  AssetManager_o *v4; // x20

  v4 = this;
  if ( (byte_4D2B82B & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
    this = (AssetManager_o *)sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__);
    byte_4D2B82B = 1;
  }
  if ( !info )
    goto LABEL_11;
  if ( info->fields.entryCount <= 0 && !AssetData__get_IsEmpty(info, 0) )
  {
    this = (AssetManager_o *)v4->fields.assetBundleReleaseDic;
    if ( this )
    {
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)this,
             (Il2CppObject *)info->fields.name,
             (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__) )
      {
        return;
      }
      this = (AssetManager_o *)v4->fields.assetBundleReleaseDic;
      if ( this )
      {
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)this,
          (Il2CppObject *)info->fields.name,
          (Il2CppObject *)info,
          (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
        return;
      }
    }
LABEL_11:
    sub_1C942F0(this, info);
  }
}


void AssetManager__RequestUnloadUnusedAssets(
        AssetManager_o *this,
        AssetManager_ResourceUnloadEventHandler_o *callback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  if ( callback )
    AssetManager__add_unloadCallbacks(this, callback, method);
  if ( !this->fields.requestUnloadUnusedAssets )
  {
    this->fields.requestUnloadUnusedAssets = 1;
    v4 = AssetManager__coUnloadUnusedAssets(this, (const MethodInfo *)callback);
    UnityEngine_MonoBehaviour__StartCoroutine_72096164((UnityEngine_MonoBehaviour_o *)this, v4, 0);
  }
}


void AssetManager__ResetAssetStorageVersion(AssetManager_o *this, System_String_o *path, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__AssetData__o *assetBundleDic; // x8
  System_String_o *v8; // x19
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *currentValue; // x20
  System_String_o *v12; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v13; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D2B81A & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    sub_1C94098(&StringLiteral_1041/*"/"*/);
    byte_4D2B81A = 1;
  }
  memset(&v13, 0, sizeof(v13));
  Values = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)System_String__Concat_64417744(
                                                                                      path,
                                                                                      (System_String_o *)StringLiteral_1041/*"/"*/,
                                                                                      0);
  assetBundleDic = this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (v8 = (System_String_o *)Values,
        (Values = System_Collections_Generic_Dictionary_object__object___get_Values(
                    (System_Collections_Generic_Dictionary_object__object__o *)assetBundleDic,
                    (const MethodInfo_3520A24 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0) )
  {
    sub_1C942F0(Values, v6);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v13,
    Values,
    (const MethodInfo_3BB3594 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v9 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v13,
           (const MethodInfo_3620234 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v9 )
      break;
    currentValue = v13.fields._currentValue;
    if ( !v13.fields._currentValue )
      sub_1C942F0(v9, v10);
    v12 = *(System_String_o **)((char *)&v13.fields._currentValue->klass + (unsigned __int64)&off_18);
    if ( !v12 )
      sub_1C942F0(0, v10);
    if ( System_String__StartsWith(v12, v8, 0) )
      AssetData__ResetVersion((AssetData_o *)currentValue, 0);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v13,
    (const MethodInfo_3620230 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
}


void AssetManager__ResumeDownloadAssetStorage(AssetManager_o *this, const MethodInfo *method)
{
  if ( this->fields.isPauseDownload )
  {
    this->fields.isPauseDownload = 0;
    AssetManager__LoadStart(this, method);
  }
}


void AssetManager__SetAssetBundleUnload(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  AssetData_o *AssetData; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3

  if ( (byte_4D2B7F5 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4D2B7F5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  AssetData = (AssetData_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( ((unsigned __int8)AssetData & 1) == 0 )
  {
    if ( !Instance
      || (AssetData = AssetManager__GetAssetData(
                        (AssetManager_o *)AssetData,
                        (System_Collections_Generic_Dictionary_string__AssetData__o *)Instance[4].klass,
                        name,
                        v6)) == 0 )
    {
      sub_1C942F0(AssetData, v5);
    }
    AssetData->fields.isAssetBundleUnload = 1;
  }
}


void AssetManager__SetDebugSlowLoad(bool isUse, const MethodInfo *method)
{
  ;
}


void AssetManager__SetDebugStatusOut(AssetManager_o *this, bool isUse, const MethodInfo *method)
{
  ;
}


void AssetManager__SetOfflineStatus(const MethodInfo *method)
{
  ManagerConfig_c *v1; // x0
  AssetManager_c *v2; // x0

  if ( (byte_4D2B7DD & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&ManagerConfig_TypeInfo);
    byte_4D2B7DD = 1;
  }
  v1 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v1 = ManagerConfig_TypeInfo;
  }
  if ( !v1->static_fields->UseStandaloneAsset )
  {
    v2 = AssetManager_TypeInfo;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      v2 = AssetManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetString(v2->static_fields->SAVE_KEY, v2->static_fields->SAVE_DATA_OFFLINE, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


bool AssetManager__SetOnlineStatus(const MethodInfo *method)
{
  ManagerConfig_c *v1; // x0
  AssetManager_c *v2; // x0
  System_String_o *String; // x0
  AssetManager_c *v5; // x0

  if ( (byte_4D2B7DE & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&ManagerConfig_TypeInfo);
    byte_4D2B7DE = 1;
  }
  v1 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v1 = ManagerConfig_TypeInfo;
  }
  if ( v1->static_fields->UseStandaloneAsset )
    return 0;
  v2 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v2 = AssetManager_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(v2->static_fields->SAVE_KEY, v2->static_fields->SAVE_DATA_OFFLINE, 0);
  if ( System_String__op_Equality(String, AssetManager_TypeInfo->static_fields->SAVE_DATA_ONLINE, 0) )
    return 0;
  v5 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v5 = AssetManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(v5->static_fields->SAVE_KEY, v5->static_fields->SAVE_DATA_ONLINE, 0);
  UnityEngine_PlayerPrefs__Save(0);
  return 1;
}


void AssetManager__SetupAssetStorageAll(AssetManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *assetBundleDic; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *currentValue; // x20
  const MethodInfo *v7; // x2
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v8; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D2B812 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    byte_4D2B812 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      assetBundleDic,
                                                                                      (const MethodInfo_3520A24 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0 )
  {
    sub_1C942F0(assetBundleDic, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v8,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_3BB3594 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v8,
           (const MethodInfo_3620234 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v4 )
      break;
    currentValue = v8.fields._currentValue;
    if ( !v8.fields._currentValue )
      sub_1C942F0(v4, v5);
    if ( AssetData__IsNeedUpdateVersion((AssetData_o *)v8.fields._currentValue, 0) )
      AssetManager__AddLoadWaitStatus_41297864(this, (AssetData_o *)currentValue, v7);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v8,
    (const MethodInfo_3620230 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
}


void AssetManager__StartConfigWriteRequestThread(AssetManager_o *this, const MethodInfo *method)
{
  if ( this->fields.writeRequestThread )
    this->fields.reserveWriteRequest = 1;
  else
    AssetManager__StartThreadConfigWriteRequest(this, method);
}


void AssetManager__StartThreadConfigWriteRequest(AssetManager_o *this, const MethodInfo *method)
{
  System_Threading_ThreadStart_o *v3; // x20
  System_Threading_Thread_o *v4; // x21
  struct System_Threading_Thread_o **p_writeRequestThread; // x19
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  __int64 v12; // x1

  if ( (byte_4D2B822 & 1) == 0 )
  {
    sub_1C94098(&Method_AssetManager_ConfigWriteRequestThread__);
    sub_1C94098(&System_Threading_ThreadStart_TypeInfo);
    sub_1C94098(&System_Threading_Thread_TypeInfo);
    byte_4D2B822 = 1;
  }
  this->fields.reserveWriteRequest = 0;
  v3 = (System_Threading_ThreadStart_o *)sub_1C942E4(System_Threading_ThreadStart_TypeInfo);
  System_Threading_ThreadStart___ctor(v3, (Il2CppObject *)this, Method_AssetManager_ConfigWriteRequestThread__, 0);
  v4 = (System_Threading_Thread_o *)sub_1C942E4(System_Threading_Thread_TypeInfo);
  System_Threading_Thread___ctor(v4, v3, 0);
  this->fields.writeRequestThread = v4;
  p_writeRequestThread = &this->fields.writeRequestThread;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)p_writeRequestThread, (int32_t)v4, v6, v7, v8, v9, v10, v11);
  if ( !*p_writeRequestThread )
    sub_1C942F0(0, v12);
  System_Threading_Thread__Start(*p_writeRequestThread, 0);
}


bool AssetManager__SwitchingDebugSlowLoad(const MethodInfo *method)
{
  return 0;
}


bool AssetManager__SwitchingDebugStatusOut(AssetManager_o *this, const MethodInfo *method)
{
  return 0;
}


bool AssetManager__TryGetAssetObject_object_(
        Il2CppObject **data,
        System_String_o *path,
        System_String_o *name,
        const MethodInfo_317D72C *method)
{
  AssetData_o *AssetStorage; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  Il2CppObject *Object_object__51893132; // x1
  Il2CppObject *v16; // x19

  if ( !method->rgctx_data )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C6A188(method);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0);
  if ( AssetStorage )
    Object_object__51893132 = AssetData__GetObject_object__51893132(
                                AssetStorage,
                                name,
                                (const MethodInfo_317D38C *)method->rgctx_data->_2_AssetData_GetObject_T_);
  else
    Object_object__51893132 = 0;
  *data = Object_object__51893132;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)data, (int32_t)Object_object__51893132, v9, v10, v11, v12, v13, v14);
  v16 = *data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0, 0);
}


bool AssetManager__TryGetUIAtlas(
        UIAtlas_o **atlas,
        System_String_o *name,
        System_String_o *atlasName,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v11; // x1
  AssetData_o *AssetStorage; // x0
  Il2CppObject *Object_object__51893132; // x20
  _BOOL8 v14; // x0
  __int64 v15; // x1
  Il2CppObject *Component_object; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  UnityEngine_Object_o *v23; // x19

  if ( (byte_4D2B838 & 1) == 0 )
  {
    sub_1C94098(&Method_AssetData_GetObject_GameObject____79044816);
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2B838 = 1;
  }
  *atlas = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)atlas, 0, (int32_t)atlasName, (int32_t)method, v4, v5, v6, v7);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(name, v11);
  if ( AssetStorage )
    Object_object__51893132 = AssetData__GetObject_object__51893132(
                                AssetStorage,
                                atlasName,
                                (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816);
  else
    Object_object__51893132 = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51893132, 0, 0);
  if ( v14 )
  {
    if ( !Object_object__51893132 )
      sub_1C942F0(v14, v15);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object_object__51893132,
                         (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    *atlas = (UIAtlas_o *)Component_object;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)atlas, (int32_t)Component_object, v17, v18, v19, v20, v21, v22);
  }
  v23 = (UnityEngine_Object_o *)*atlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(v23, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void AssetManager__UpdateLoadParallelMax(AssetManager_o *this, int32_t value, const MethodInfo *method)
{
  this->fields.loadParallelMax = value;
  AssetManager__LoadStart(this, *(const MethodInfo **)&value);
}


System_Collections_IEnumerator_o *AssetManager__WaitForExecutionUnloadUnuseAssets(
        AssetManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2B7DB & 1) == 0 )
  {
    sub_1C94098(&AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_TypeInfo);
    byte_4D2B7DB = 1;
  }
  v3 = sub_1C942E4(AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void AssetManager___DownloadAssetStorageAttributeWithCheckDialog_b__119_0(
        AssetManager_o *this,
        const MethodInfo *method)
{
  AssetManager_o *v2; // x19
  struct System_Collections_Generic_List_AssetLoader__o *processingAssetLoaderList; // x8

  v2 = this;
  if ( (byte_4D2B83E & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_1C94098(&SoundManager_TypeInfo);
    this = (AssetManager_o *)sub_1C94098(&StringLiteral_9344/*"NOW_LOADING"*/);
    byte_4D2B83E = 1;
  }
  processingAssetLoaderList = v2->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
    sub_1C942F0(this, method);
  if ( processingAssetLoaderList->fields._size >= 1 )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playBgm((System_String_o *)StringLiteral_9344/*"NOW_LOADING"*/, 0);
  }
}


void AssetManager__add_unloadCallbacks(
        AssetManager_o *this,
        AssetManager_ResourceUnloadEventHandler_o *value,
        const MethodInfo *method)
{
  struct AssetManager_ResourceUnloadEventHandler_o **p_unloadCallbacks; // x20
  System_Delegate_o *v6; // x21
  struct AssetManager_ResourceUnloadEventHandler_o *unloadCallbacks; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  AssetManager_o *v11; // x0
  AssetManager_ResourceUnloadEventHandler_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4D2B7D9 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_ResourceUnloadEventHandler_TypeInfo);
    byte_4D2B7D9 = 1;
  }
  unloadCallbacks = this->fields.unloadCallbacks;
  p_unloadCallbacks = &this->fields.unloadCallbacks;
  v6 = (System_Delegate_o *)unloadCallbacks;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (AssetManager_ResourceUnloadEventHandler_c *)v8->klass != AssetManager_ResourceUnloadEventHandler_TypeInfo )
        break;
    }
    v9 = sub_1CEFE6C(p_unloadCallbacks, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C9468C(v8);
  AssetManager__remove_unloadCallbacks(v11, v12, v13);
}


void AssetManager__cancelDownloadAssetStorage(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4D2B7FD & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4D2B7FD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1C942F0(v2, v3);
    AssetManager__CancelDownloadAssetStorage((AssetManager_o *)Instance, v3);
  }
}


System_Collections_IEnumerator_o *AssetManager__coUnloadUnusedAssets(AssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2B823 & 1) == 0 )
  {
    sub_1C94098(&AssetManager__coUnloadUnusedAssets_d__142_TypeInfo);
    byte_4D2B823 = 1;
  }
  v3 = sub_1C942E4(AssetManager__coUnloadUnusedAssets_d__142_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


bool AssetManager__compAssetStorage(System_String_o *name1, System_String_o *name2, const MethodInfo *method)
{
  int32_t stringLength; // w8

  if ( name1 )
  {
    if ( name2 )
      return System_String__Equals_64453064(name1, name2, 0);
    stringLength = name1->fields._stringLength;
    return stringLength == 0;
  }
  if ( name2 )
  {
    stringLength = name2->fields._stringLength;
    return stringLength == 0;
  }
  return 1;
}


bool AssetManager__compAssetStorageList(
        System_String_array *list1,
        System_String_array *list2,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  System_String_array *v5; // x20
  unsigned __int64 v6; // x21
  __int64 v7; // x22
  System_String_o *v8; // x1

  if ( list1 && (max_length = list1->max_length, v5 = list1, max_length) )
  {
    if ( !list2 || (_DWORD)max_length != LODWORD(list2->max_length) )
      return 0;
    if ( (int)max_length >= 1 )
    {
      if ( (unsigned int)list1->max_length )
      {
        v6 = 0;
        v7 = (unsigned int)list1->max_length - 1LL;
        do
        {
          if ( v6 >= LODWORD(list2->max_length) )
            break;
          list1 = (System_String_array *)v5->m_Items[v6];
          v8 = list2->m_Items[v6];
          if ( list1 )
          {
            if ( !v8 )
              return 0;
            list1 = (System_String_array *)System_String__Equals_64453064((System_String_o *)list1, v8, 0);
            if ( ((unsigned __int8)list1 & 1) == 0 )
              return 0;
          }
          else if ( v8 )
          {
            return 0;
          }
          if ( v7 == v6 )
            return 1;
          ++v6;
        }
        while ( v6 < LODWORD(v5->max_length) );
      }
      sub_1C942F8(list1);
    }
  }
  else if ( list2 )
  {
    return LODWORD(list2->max_length) == 0;
  }
  return 1;
}


bool AssetManager__compAssetStorageList_41283252(
        AssetData_array *assetList,
        System_String_array *list,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  AssetData_array *v5; // x20
  unsigned __int64 v6; // x21
  __int64 v7; // x22
  AssetData_o *v8; // x8
  System_String_o *v9; // x1
  System_String_o *name; // x0

  if ( assetList && (max_length = assetList->max_length, v5 = assetList, max_length) )
  {
    if ( !list || (_DWORD)max_length != LODWORD(list->max_length) )
      return 0;
    if ( (int)max_length >= 1 )
    {
      if ( (unsigned int)assetList->max_length )
      {
        v6 = 0;
        v7 = (unsigned int)assetList->max_length - 1LL;
        do
        {
          if ( v6 >= LODWORD(list->max_length) )
            break;
          v8 = v5->m_Items[v6];
          v9 = list->m_Items[v6];
          if ( v8 )
          {
            if ( !v9 )
              return 0;
            name = v8->fields.name;
            if ( !name )
              sub_1C942F0(0, v9);
            assetList = (AssetData_array *)System_String__Equals_64453064(name, v9, 0);
            if ( ((unsigned __int8)assetList & 1) == 0 )
              return 0;
          }
          else if ( v9 )
          {
            return 0;
          }
          if ( v7 == v6 )
            return 1;
          ++v6;
        }
        while ( v6 < LODWORD(v5->max_length) );
      }
      sub_1C942F8(assetList);
    }
  }
  else if ( list )
  {
    return LODWORD(list->max_length) == 0;
  }
  return 1;
}


bool AssetManager__compAssetStorage_41282980(AssetData_o *data, System_String_o *name, const MethodInfo *method)
{
  struct System_String_o *v3; // x0
  int32_t stringLength; // w8

  if ( data && (v3 = data->fields.name) != 0 )
  {
    if ( name )
      return System_String__Equals_64453064(v3, name, 0);
    stringLength = v3->fields._stringLength;
  }
  else
  {
    if ( !name )
      return 1;
    stringLength = name->fields._stringLength;
  }
  return stringLength == 0;
}


void AssetManager__debugLog(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4D2B7E1 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4D2B7E1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1C942F0(v2, v3);
    AssetManager__DebugLog((AssetManager_o *)Instance, v3);
  }
}


bool AssetManager__downloadAssetStorage(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        int32_t maxParallelLoad,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_4D2B800 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4D2B800 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v8 )
    return 0;
  if ( !Instance )
    sub_1C942F0(v8, v9);
  return AssetManager__DownloadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, v10);
}


bool AssetManager__downloadAssetStorage_41289940(
        System_String_array *nameList,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x4

  if ( (byte_4D2B801 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4D2B801 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v6 )
    return 0;
  if ( !Instance )
    sub_1C942F0(v6, v7);
  return AssetManager__DownloadAssetStorage_41290132((AssetManager_o *)Instance, nameList, callbackFunc, 1, v8);
}


AssetData_o *AssetManager__getAsset(int32_t type, System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4D2B7EE & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4D2B7EE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v6 )
    return 0;
  if ( !Instance )
    sub_1C942F0(v6, v7);
  return AssetManager__GetAsset((AssetManager_o *)Instance, type, name, v8);
}


AssetData_o *AssetManager__getAssetResource(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4D2B80D & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4D2B80D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_1C942F0(v4, v5);
  return AssetManager__GetAssetResource((AssetManager_o *)Instance, name, v6);
}


AssetData_o *AssetManager__getAssetStorage(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4D2B806 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4D2B806 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_1C942F0(v4, v5);
  return AssetManager__GetAssetStorage((AssetManager_o *)Instance, name, v6);
}


AssetData_o *AssetManager__getAssetStorageData(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3

  if ( (byte_4D2B807 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4D2B807 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_1C942F0(v4, v5);
  return AssetManager__GetAssetData(
           (AssetManager_o *)v4,
           (System_Collections_Generic_Dictionary_string__AssetData__o *)Instance[4].klass,
           name,
           v6);
}


System_String_array *AssetManager__getAssetStorageList(System_String_o *path, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4D2B7FB & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4D2B7FB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_1C942F0(v4, v5);
  return AssetManager__GetAssetStorageList((AssetManager_o *)Instance, path, v6);
}


AssetData_array *AssetManager__getAssetStorage_41293480(System_String_array *nameList, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4D2B808 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4D2B808 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_1C942F0(v4, v5);
  return AssetManager__GetAssetStorage_41293660((AssetManager_o *)Instance, nameList, v6);
}


bool AssetManager__getAssetStorage_41293932(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4D2B809 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4D2B809 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v6 )
    return 0;
  if ( !Instance )
    sub_1C942F0(v6, v7);
  return AssetManager__GetAssetStorage_41294120((AssetManager_o *)Instance, name, callbackFunc, v8);
}


bool AssetManager__getAsset_41284008(
        int32_t type,
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_4D2B7EF & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4D2B7EF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v8 )
    return 0;
  if ( !Instance )
    sub_1C942F0(v8, v9);
  return AssetManager__GetAsset_41284216((AssetManager_o *)Instance, type, name, callbackFunc, v10);
}


bool AssetManager__getAsset_41284316(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4D2B7F0 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4D2B7F0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v6 )
    return 0;
  if ( !Instance )
    sub_1C942F0(v6, v7);
  return AssetManager__GetAsset_41284504((AssetManager_o *)Instance, name, callbackFunc, v8);
}


int64_t AssetManager__getDownloadSize(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4D2B7F6 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4D2B7F6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v2 )
    return 0;
  if ( !Instance )
    sub_1C942F0(v2, v3);
  return AssetManager__GetDownloadSize((AssetManager_o *)Instance, v3);
}


System_String_o *AssetManager__getShaName(System_String_o *name, const MethodInfo *method)
{
  System_Security_Cryptography_SHA1CryptoServiceProvider_o *v3; // x21
  System_Text_UTF8Encoding_o *v4; // x20
  System_Text_StringBuilder_o *appended; // x0
  __int64 v6; // x1
  System_Byte_array *v7; // x20
  System_Text_StringBuilder_o *v8; // x19
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v10; // x21
  int v12; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D2B7EB & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo);
    sub_1C94098(&System_Text_StringBuilder_TypeInfo);
    sub_1C94098(&System_Text_UTF8Encoding_TypeInfo);
    sub_1C94098(&StringLiteral_25296/*"{0,0:x2}"*/);
    sub_1C94098(&StringLiteral_1012/*".bin"*/);
    byte_4D2B7EB = 1;
  }
  v3 = (System_Security_Cryptography_SHA1CryptoServiceProvider_o *)sub_1C942E4(System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_SHA1CryptoServiceProvider___ctor(v3, 0);
  v4 = (System_Text_UTF8Encoding_o *)sub_1C942E4(System_Text_UTF8Encoding_TypeInfo);
  System_Text_UTF8Encoding___ctor(v4, 0);
  if ( !v4 )
    goto LABEL_13;
  appended = (System_Text_StringBuilder_o *)((__int64 (__fastcall *)(System_Text_UTF8Encoding_o *, System_String_o *, const MethodInfo *))v4->klass->vtable._18_GetBytes.methodPtr)(
                                              v4,
                                              name,
                                              v4->klass->vtable._18_GetBytes.method);
  if ( !v3 )
    goto LABEL_13;
  v7 = System_Security_Cryptography_HashAlgorithm__ComputeHash(
         (System_Security_Cryptography_HashAlgorithm_o *)v3,
         (System_Byte_array *)appended,
         0);
  v8 = (System_Text_StringBuilder_o *)sub_1C942E4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v8, 0);
  System_Security_Cryptography_HashAlgorithm__Clear((System_Security_Cryptography_HashAlgorithm_o *)v3, 0);
  if ( !v7 )
    goto LABEL_13;
  max_length = v7->max_length;
  if ( (int)max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)max_length )
        sub_1C942F8(appended);
      v12 = v7->m_Items[v10] ^ 0xAA;
      appended = (System_Text_StringBuilder_o *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
      if ( !v8 )
        break;
      appended = System_Text_StringBuilder__AppendFormat(
                   v8,
                   (System_String_o *)StringLiteral_25296/*"{0,0:x2}"*/,
                   (Il2CppObject *)appended,
                   0);
      LODWORD(max_length) = v7->max_length;
      if ( (__int64)++v10 >= (int)max_length )
        goto LABEL_11;
    }
LABEL_13:
    sub_1C942F0(appended, v6);
  }
LABEL_11:
  if ( !v8 )
    goto LABEL_13;
  System_Text_StringBuilder__Append_64501704(v8, (System_String_o *)StringLiteral_1012/*".bin"*/, 0);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v8->klass->vtable._3_ToString.methodPtr)(
                              v8,
                              v8->klass->vtable._3_ToString.method);
}


System_String_o *AssetManager__getUrlString(System_String_o *url, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  NetworkManager_c *v4; // x0
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  int64_t v8; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2B7EA & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&StringLiteral_1760/*"?t="*/);
    sub_1C94098(&StringLiteral_21241/*"jar:"*/);
    byte_4D2B7EA = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !url )
    sub_1C942F0(v3, method);
  if ( !System_String__StartsWith(url, NetworkManager_TypeInfo->static_fields->FILE_URL_SCHEME, 0) )
  {
    v4 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v4 = NetworkManager_TypeInfo;
    }
    v5 = System_String__Concat_64417744((System_String_o *)StringLiteral_21241/*"jar:"*/, v4->static_fields->FILE_URL_SCHEME, 0);
    if ( !System_String__StartsWith(url, v5, 0) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v8 = NetworkManager__getTime(0) / 300;
      v6 = System_Int64__ToString((int64_t)&v8, 0);
      return System_String__Concat_64456008(url, (System_String_o *)StringLiteral_1760/*"?t="*/, v6, 0);
    }
  }
  return url;
}


System_String_o *AssetManager__getUrlString_41282176(AssetData_o *data, const MethodInfo *method)
{
  AssetManager_c *v3; // x0
  char *DataServerAddress; // x0
  __int64 v5; // x1
  System_String_o *v6; // x20
  System_String_o *DownloadName; // x0
  System_String_o *v8; // x21
  NetworkManager_c *v9; // x0
  System_String_o *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  char *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  __int64 v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  int32_t v38; // w1
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  struct System_String_o *assetBundleDateVersion; // x1
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  int32_t v52; // w1
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  int32_t v65; // w1
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  __int64 v73; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2B7EC & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&string___TypeInfo);
    sub_1C94098(&StringLiteral_16163/*"_"*/);
    sub_1C94098(&StringLiteral_21241/*"jar:"*/);
    sub_1C94098(&StringLiteral_1761/*"?v="*/);
    byte_4D2B7EC = 1;
  }
  v3 = AssetManager_TypeInfo;
  v73 = 0;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  DataServerAddress = (char *)AssetManager__get_DataServerAddress((const MethodInfo *)v3);
  if ( !data )
    goto LABEL_27;
  v6 = (System_String_o *)DataServerAddress;
  DownloadName = AssetData__get_DownloadName(data, 0);
  DataServerAddress = (char *)System_String__Concat_64417744(v6, DownloadName, 0);
  v8 = (System_String_o *)DataServerAddress;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !v8 )
    goto LABEL_27;
  if ( !System_String__StartsWith(v8, NetworkManager_TypeInfo->static_fields->FILE_URL_SCHEME, 0) )
  {
    v9 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v9 = NetworkManager_TypeInfo;
    }
    v10 = System_String__Concat_64417744((System_String_o *)StringLiteral_21241/*"jar:"*/, v9->static_fields->FILE_URL_SCHEME, 0);
    if ( !System_String__StartsWith(v8, v10, 0) )
    {
      DataServerAddress = (char *)sub_1C94140(string___TypeInfo, 9);
      if ( DataServerAddress )
      {
        v17 = DataServerAddress;
        if ( !*((_DWORD *)DataServerAddress + 6) )
          goto LABEL_28;
        *((_QWORD *)DataServerAddress + 4) = v8;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(DataServerAddress + 32), (int32_t)v8, v11, v12, v13, v14, v15, v16);
        if ( *((_DWORD *)v17 + 6) <= 1u )
          goto LABEL_28;
        v24 = StringLiteral_1761/*"?v="*/;
        *((_QWORD *)v17 + 5) = StringLiteral_1761/*"?v="*/;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v17 + 40), v24, v18, v19, v20, v21, v22, v23);
        DataServerAddress = (char *)AssetManager_TypeInfo;
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          DataServerAddress = (char *)AssetManager_TypeInfo;
        }
        if ( *((_DWORD *)v17 + 6) <= 2u )
          goto LABEL_28;
        v31 = *(_QWORD *)(*((_QWORD *)DataServerAddress + 23) + 80LL);
        *((_QWORD *)v17 + 6) = v31;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v17 + 48), v31, v25, v26, v27, v28, v29, v30);
        if ( *((_DWORD *)v17 + 6) <= 3u )
          goto LABEL_28;
        v38 = StringLiteral_16163/*"_"*/;
        *((_QWORD *)v17 + 7) = StringLiteral_16163/*"_"*/;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v17 + 56), v38, v32, v33, v34, v35, v36, v37);
        if ( *((_DWORD *)v17 + 6) <= 4u )
          goto LABEL_28;
        assetBundleDateVersion = AssetManager_TypeInfo->static_fields->assetBundleDateVersion;
        *((_QWORD *)v17 + 8) = assetBundleDateVersion;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)(v17 + 64),
          (int32_t)assetBundleDateVersion,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
        if ( *((_DWORD *)v17 + 6) <= 5u )
          goto LABEL_28;
        v52 = StringLiteral_16163/*"_"*/;
        *((_QWORD *)v17 + 9) = StringLiteral_16163/*"_"*/;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v17 + 72), v52, v46, v47, v48, v49, v50, v51);
        HIDWORD(v73) = data->fields.size;
        DataServerAddress = (char *)System_Int32__ToString((int32_t)&v73 + 4, 0);
        if ( *((_DWORD *)v17 + 6) <= 6u
          || (*((_QWORD *)v17 + 10) = DataServerAddress,
              sub_1C9403C(
                (GrandQuestFolderBoardItem_o *)(v17 + 80),
                (int32_t)DataServerAddress,
                v53,
                v54,
                v55,
                v56,
                v57,
                v58),
              *((_DWORD *)v17 + 6) <= 7u)
          || (v65 = StringLiteral_16163/*"_"*/,
              *((_QWORD *)v17 + 11) = StringLiteral_16163/*"_"*/,
              sub_1C9403C((GrandQuestFolderBoardItem_o *)(v17 + 88), v65, v59, v60, v61, v62, v63, v64),
              LODWORD(v73) = data->fields.crc,
              DataServerAddress = (char *)System_UInt32__ToString((uint32_t)&v73, 0),
              *((_DWORD *)v17 + 6) <= 8u) )
        {
LABEL_28:
          sub_1C942F8(DataServerAddress);
        }
        *((_QWORD *)v17 + 12) = DataServerAddress;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v17 + 96), (int32_t)DataServerAddress, v66, v67, v68, v69, v70, v71);
        return System_String__Concat_64458276((System_String_array *)v17, 0);
      }
LABEL_27:
      sub_1C942F0(DataServerAddress, v5);
    }
  }
  return v8;
}


System_String_o *AssetManager__get_CacheListFile(const MethodInfo *method)
{
  System_String_o *Path; // x0
  AssetManager_c *v2; // x8
  System_String_o *v3; // x19

  if ( (byte_4D2B7E5 & 1) == 0 )
  {
    method = (const MethodInfo *)sub_1C94098(&AssetManager_TypeInfo);
    byte_4D2B7E5 = 1;
  }
  Path = AssetStorageCache__GetPath(method);
  v2 = AssetManager_TypeInfo;
  v3 = Path;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v2 = AssetManager_TypeInfo;
  }
  return System_String__Concat_64417744(v3, v2->static_fields->configFileName, 0);
}


System_String_o *AssetManager__get_CachePathName(const MethodInfo *method)
{
  AssetManager_c *v1; // x0

  if ( (byte_4D2B7E3 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    byte_4D2B7E3 = 1;
  }
  v1 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v1 = AssetManager_TypeInfo;
  }
  return v1->static_fields->cachePathName;
}


System_String_o *AssetManager__get_ConfigFileAddress(const MethodInfo *method)
{
  AssetManager_c *v1; // x0
  System_String_o *DataServerAddress; // x0

  if ( (byte_4D2B7E4 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    byte_4D2B7E4 = 1;
  }
  v1 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  DataServerAddress = AssetManager__get_DataServerAddress((const MethodInfo *)v1);
  return System_String__Concat_64417744(DataServerAddress, AssetManager_TypeInfo->static_fields->configFileName, 0);
}


System_String_o *AssetManager__get_DataServerAddress(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0

  if ( (byte_4D2B7E2 & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2B7E2 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2B94E )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2B94E = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v1 = NetworkManager_TypeInfo;
  }
  return v1->static_fields->dataServerAddress;
}


bool AssetManager__get_DispLog(AssetManager_o *this, const MethodInfo *method)
{
  return this->fields._DispLog;
}


bool AssetManager__get_InProgressUnloadUnusedAssets(AssetManager_o *this, const MethodInfo *method)
{
  return this->fields.inProgressUnloadUnusedAssets;
}


bool AssetManager__get_IsOnline(const MethodInfo *method)
{
  ManagerConfig_c *v1; // x0
  AssetManager_c *v3; // x0
  System_String_o *String; // x0

  if ( (byte_4D2B7DC & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&ManagerConfig_TypeInfo);
    byte_4D2B7DC = 1;
  }
  v1 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v1 = ManagerConfig_TypeInfo;
  }
  if ( v1->static_fields->UseStandaloneAsset )
    return 0;
  v3 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v3 = AssetManager_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(v3->static_fields->SAVE_KEY, v3->static_fields->SAVE_DATA_OFFLINE, 0);
  return System_String__op_Equality(String, AssetManager_TypeInfo->static_fields->SAVE_DATA_ONLINE, 0);
}


bool AssetManager__isDownloadAssetStorageCheck(AssetManager_o *this, System_String_o *attrib, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *assetBundleDic; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *currentValue; // x20
  char v9; // w19
  int v10; // w20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D2B813 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    byte_4D2B813 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      assetBundleDic,
                                                                                      (const MethodInfo_3520A24 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0 )
  {
    sub_1C942F0(assetBundleDic, attrib);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v12,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_3BB3594 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v12,
           (const MethodInfo_3620234 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v6 )
      break;
    currentValue = v12.fields._currentValue;
    if ( !v12.fields._currentValue )
      sub_1C942F0(v6, v7);
    if ( AssetData__IsDownloadOldVersion((AssetData_o *)v12.fields._currentValue, 0)
      || System_String__op_Equality(attrib, *(System_String_o **)((char *)&qword_20 + (_QWORD)currentValue), 0)
      && AssetData__IsNeedUpdateVersion((AssetData_o *)currentValue, 0) )
    {
      v9 = 1;
      v10 = 5;
      goto LABEL_13;
    }
  }
  v9 = 0;
  v10 = 6;
LABEL_13:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v12,
    (const MethodInfo_3620230 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  return v9 & (v10 == 5);
}


bool AssetManager__isExistAssetStorage(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4D2B7F7 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4D2B7F7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_1C942F0(v4, v5);
  return AssetManager__IsExistAssetStorage((AssetManager_o *)Instance, name, v6);
}


bool AssetManager__isExistAssetStorage_41286412(System_String_array *nameList, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4D2B7F8 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4D2B7F8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_1C942F0(v4, v5);
  return AssetManager__IsExistAssetStorage_41286592((AssetManager_o *)Instance, nameList, v6);
}


bool AssetManager__isNeedDownload(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4D2B7F9 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4D2B7F9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_1C942F0(v4, v5);
  return AssetManager__IsNeedDownload((AssetManager_o *)Instance, name, v6);
}


bool AssetManager__isNeedDownload_41286952(System_String_array *nameList, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4D2B7FA & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4D2B7FA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_1C942F0(v4, v5);
  return AssetManager__IsNeedDownload_41287132((AssetManager_o *)Instance, nameList, v6);
}


bool AssetManager__loadAsset(
        int32_t type,
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_4D2B7ED & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4D2B7ED = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v8 )
    return 0;
  if ( !Instance )
    sub_1C942F0(v8, v9);
  return AssetManager__LoadAsset((AssetManager_o *)Instance, type, name, callbackFunc, v10);
}


AssetData_o *AssetManager__loadAssetResource(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4D2B80C & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4D2B80C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_1C942F0(v4, v5);
  return AssetManager__LoadAssetResource((AssetManager_o *)Instance, name, v6);
}


bool AssetManager__loadAssetStorage(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        int32_t maxParallelLoad,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_4D2B802 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4D2B802 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v8 )
    return 0;
  if ( !Instance )
    sub_1C942F0(v8, v9);
  return AssetManager__LoadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, v10);
}


bool AssetManager__loadAssetStorage_41291912(
        System_String_o *name,
        int32_t maxParallelLoad,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_4D2B804 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4D2B804 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v8 )
    return 0;
  if ( !Instance )
    sub_1C942F0(v8, v9);
  return AssetManager__LoadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, v10);
}


bool AssetManager__loadAssetStorage_41292120(
        System_String_array *nameList,
        System_Action_o *callbackFunc,
        int32_t loadParalleMax,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_4D2B805 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4D2B805 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v8 )
    return 0;
  if ( !Instance )
    sub_1C942F0(v8, v9);
  return AssetManager__LoadAssetStorage_41292328(
           (AssetManager_o *)Instance,
           nameList,
           callbackFunc,
           loadParalleMax,
           v10);
}


bool AssetManager__loadResourcesFromAssetStorage(
        System_String_o *assetBandleName,
        System_String_array *resourceNames,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        int32_t maxParallelLoad,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x23
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x5

  if ( (byte_4D2B803 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4D2B803 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v10 )
    return 0;
  if ( !Instance )
    sub_1C942F0(v10, v11);
  return AssetManager__LoadResourcesAssetStorage(
           (AssetManager_o *)Instance,
           assetBandleName,
           resourceNames,
           callbackFunc,
           maxParallelLoad,
           v12);
}


void AssetManager__pauseDownloadAssetStorage(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v2; // x0
  __int64 v3; // x1

  if ( (byte_4D2B7FE & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4D2B7FE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1C942F0(v2, v3);
    if ( !BYTE1(Instance[7].monitor) )
      BYTE1(Instance[7].monitor) = 1;
  }
}


void AssetManager__releaseAsset(int32_t type, System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4D2B7F1 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4D2B7F1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v6 )
  {
    if ( !Instance )
      sub_1C942F0(v6, v7);
    AssetManager__ReleaseAsset((AssetManager_o *)Instance, type, name, v8);
  }
}


void AssetManager__releaseAssetResource(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4D2B80E & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4D2B80E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C942F0(v4, v5);
    AssetManager__ReleaseAssetResource((AssetManager_o *)Instance, name, v6);
  }
}


void AssetManager__releaseAssetStorage(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4D2B80A & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4D2B80A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C942F0(v4, v5);
    AssetManager__ReleaseAssetStorage((AssetManager_o *)Instance, name, v6);
  }
}


void AssetManager__releaseAssetStorage_41294468(System_String_array *nameList, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4D2B80B & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4D2B80B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C942F0(v4, v5);
    AssetManager__ReleaseAssetStorage_41294644((AssetManager_o *)Instance, nameList, v6);
  }
}


void AssetManager__releaseAsset_41285008(int32_t type, System_String_array *nameList, const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4D2B7F2 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4D2B7F2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v6 )
  {
    if ( !Instance )
      sub_1C942F0(v6, v7);
    AssetManager__ReleaseAsset_41285192((AssetManager_o *)Instance, type, nameList, v8);
  }
}


void AssetManager__releaseAsset_41285308(AssetData_o *assetInfo, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3

  if ( (byte_4D2B7F3 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4D2B7F3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C942F0(v4, v5);
    if ( assetInfo )
      AssetManager__ReleaseAsset((AssetManager_o *)Instance, assetInfo->fields.type, assetInfo->fields.name, v6);
  }
}


void AssetManager__releaseAsset_41285516(AssetData_array *assetInfoList, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4D2B7F4 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4D2B7F4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C942F0(v4, v5);
    AssetManager__ReleaseAsset_41285692((AssetManager_o *)Instance, assetInfoList, v6);
  }
}


void AssetManager__remove_unloadCallbacks(
        AssetManager_o *this,
        AssetManager_ResourceUnloadEventHandler_o *value,
        const MethodInfo *method)
{
  struct AssetManager_ResourceUnloadEventHandler_o **p_unloadCallbacks; // x20
  System_Delegate_o *v6; // x21
  struct AssetManager_ResourceUnloadEventHandler_o *unloadCallbacks; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  AssetManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4D2B7DA & 1) == 0 )
  {
    sub_1C94098(&AssetManager_ResourceUnloadEventHandler_TypeInfo);
    byte_4D2B7DA = 1;
  }
  unloadCallbacks = this->fields.unloadCallbacks;
  p_unloadCallbacks = &this->fields.unloadCallbacks;
  v6 = (System_Delegate_o *)unloadCallbacks;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (AssetManager_ResourceUnloadEventHandler_c *)v8->klass != AssetManager_ResourceUnloadEventHandler_TypeInfo )
        break;
    }
    v9 = sub_1CEFE6C(p_unloadCallbacks, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C9468C(v8);
  AssetManager__WaitForExecutionUnloadUnuseAssets(v11, v12);
}


void AssetManager__resetAssetStorageVersion(System_String_o *path, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4D2B7FC & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4D2B7FC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C942F0(v4, v5);
    AssetManager__ResetAssetStorageVersion((AssetManager_o *)Instance, path, v6);
  }
}


void AssetManager__resumeDownloadAssetStorage(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4D2B7FF & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4D2B7FF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1C942F0(v2, v3);
    if ( BYTE1(Instance[7].monitor) )
    {
      BYTE1(Instance[7].monitor) = 0;
      AssetManager__LoadStart((AssetManager_o *)Instance, v3);
    }
  }
}


void AssetManager__setDebugStatusOut(AssetManager_o *this, bool isUse, const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4D2B7E0 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4D2B7E0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !Instance && !v4 )
    sub_1C942F0(v4, v5);
}


void AssetManager_LoadWaitStatus___ctor(
        AssetManager_LoadWaitStatus_o *this,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.callbackFunc = callbackFunc;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v5, v6, v7, v8, v9, v10);
}


void AssetManager_LoadWaitStatus___ctor_41309292(
        AssetManager_LoadWaitStatus_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.data = data;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)data, v5, v6, v7, v8, v9, v10);
}


void AssetManager_LoadWaitStatus___ctor_41309512(
        AssetManager_LoadWaitStatus_o *this,
        AssetData_o *data,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        System_String_array *resourceNames,
        const MethodInfo *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.data = data;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)data, v9, v10, v11, v12, v13, v14);
  this->fields.callbackFunc2 = callbackFunc;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callbackFunc,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.resourceNames = resourceNames;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.resourceNames,
    (int32_t)resourceNames,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
}


void AssetManager_LoadWaitStatus__AddCallback(
        AssetManager_LoadWaitStatus_o *this,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_callbackFunc2; // x19
  System_Delegate_o *callbackFunc2; // t1
  System_Delegate_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Delegate_o *v14; // x8
  AssetLoader_LoadEndDataHandler_c *v15; // x1

  if ( (byte_4D2B83F & 1) == 0 )
  {
    sub_1C94098(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4D2B83F = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2;
  v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)callbackFunc, 0);
  v14 = v7;
  if ( !v7 )
    goto LABEL_7;
  v15 = AssetLoader_LoadEndDataHandler_TypeInfo;
  if ( (AssetLoader_LoadEndDataHandler_c *)v7->klass != AssetLoader_LoadEndDataHandler_TypeInfo
    || (p_callbackFunc2->klass = (GrandQuestFolderBoardItem_c *)v7, (AssetLoader_LoadEndDataHandler_c *)v7->klass != v15) )
  {
    sub_1C9468C(v7);
LABEL_7:
    p_callbackFunc2->klass = (GrandQuestFolderBoardItem_c *)v14;
  }
  sub_1C9403C(p_callbackFunc2, (int32_t)v14, v8, v9, v10, v11, v12, v13);
}


void AssetManager_LoadWaitStatus__AddEntry(AssetManager_LoadWaitStatus_o *this, const MethodInfo *method)
{
  AssetData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1C942F0(0, method);
  AssetData__AddEntry(data, 0);
}


bool AssetManager_LoadWaitStatus__IsSame(
        AssetManager_LoadWaitStatus_o *this,
        int32_t type,
        System_String_o *name,
        const MethodInfo *method)
{
  AssetData_o *data; // x0

  data = this->fields.data;
  if ( data )
    LOBYTE(data) = AssetData__IsSame_41256836(data, type, name, 0);
  return (char)data;
}


System_String_array *AssetManager_LoadWaitStatus__ResourceNames(
        AssetManager_LoadWaitStatus_o *this,
        const MethodInfo *method)
{
  return this->fields.resourceNames;
}


System_Action_o *AssetManager_LoadWaitStatus__get_CallbackFunc(
        AssetManager_LoadWaitStatus_o *this,
        const MethodInfo *method)
{
  return this->fields.callbackFunc;
}


AssetLoader_LoadEndDataHandler_o *AssetManager_LoadWaitStatus__get_DataCallbackFunc(
        AssetManager_LoadWaitStatus_o *this,
        const MethodInfo *method)
{
  return this->fields.callbackFunc2;
}


AssetData_o *AssetManager_LoadWaitStatus__get_Info(AssetManager_LoadWaitStatus_o *this, const MethodInfo *method)
{
  return this->fields.data;
}


System_String_o *AssetManager_LoadWaitStatus__get_Name(AssetManager_LoadWaitStatus_o *this, const MethodInfo *method)
{
  struct AssetData_o *data; // x8
  System_String_o **p_name; // x8

  if ( (byte_4D2B840 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2B840 = 1;
  }
  data = this->fields.data;
  if ( data )
    p_name = &data->fields.name;
  else
    p_name = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_name;
}


void AssetManager_ResourceUnloadEventHandler___ctor(
        AssetManager_ResourceUnloadEventHandler_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AC84BC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC847C;
}


System_IAsyncResult_o *AssetManager_ResourceUnloadEventHandler__BeginInvoke(
        AssetManager_ResourceUnloadEventHandler_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C9404C(this, &v5, callback, object);
}


void AssetManager_ResourceUnloadEventHandler__EndInvoke(
        AssetManager_ResourceUnloadEventHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
}


void AssetManager_ResourceUnloadEventHandler__Invoke(
        AssetManager_ResourceUnloadEventHandler_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}


void AssetManager__AssetObjectListSetupAndCall_d__190___ctor(
        AssetManager__AssetObjectListSetupAndCall_d__190_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool AssetManager__AssetObjectListSetupAndCall_d__190__MoveNext(
        AssetManager__AssetObjectListSetupAndCall_d__190_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct AssetData_o *asset; // x1
  System_Func_bool__o *v14; // x21
  UnityEngine_WaitUntil_o *v15; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  bool result; // w0
  System_Action_o *action; // x0

  if ( (byte_4D2B845 & 1) == 0 )
  {
    sub_1C94098(&System_Func_bool__TypeInfo);
    sub_1C94098(&Method_AssetManager___c__DisplayClass190_0__AssetObjectListSetupAndCall_b__0__);
    sub_1C94098(&AssetManager___c__DisplayClass190_0_TypeInfo);
    sub_1C94098(&UnityEngine_WaitUntil_TypeInfo);
    byte_4D2B845 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    action = this->fields.action;
    this->fields.__1__state = -1;
    ActionExtensions__Call(action, 0);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  v4 = sub_1C942E4(AssetManager___c__DisplayClass190_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    sub_1C942F0(v5, v6);
  asset = this->fields.asset;
  *(_QWORD *)(v4 + 16) = asset;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v4 + 16), (int32_t)asset, v7, v8, v9, v10, v11, v12);
  v14 = (System_Func_bool__o *)sub_1C942E4(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v14,
    (Il2CppObject *)v4,
    Method_AssetManager___c__DisplayClass190_0__AssetObjectListSetupAndCall_b__0__,
    0);
  v15 = (UnityEngine_WaitUntil_o *)sub_1C942E4(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v15, v14, 0);
  this->fields.__2__current = (Il2CppObject *)v15;
  p__2__current = &this->fields.__2__current;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)p__2__current, (int32_t)v15, v17, v18, v19, v20, v21, v22);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *AssetManager__AssetObjectListSetupAndCall_d__190__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AssetManager__AssetObjectListSetupAndCall_d__190_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn AssetManager__AssetObjectListSetupAndCall_d__190__System_Collections_IEnumerator_Reset(
        AssetManager__AssetObjectListSetupAndCall_d__190_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_AssetManager__AssetObjectListSetupAndCall_d__190_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *AssetManager__AssetObjectListSetupAndCall_d__190__System_Collections_IEnumerator_get_Current(
        AssetManager__AssetObjectListSetupAndCall_d__190_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void AssetManager__AssetObjectListSetupAndCall_d__190__System_IDisposable_Dispose(
        AssetManager__AssetObjectListSetupAndCall_d__190_o *this,
        const MethodInfo *method)
{
  ;
}


void AssetManager__AssetObjectListSetupAndCall_d__191___ctor(
        AssetManager__AssetObjectListSetupAndCall_d__191_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool AssetManager__AssetObjectListSetupAndCall_d__191__MoveNext(
        AssetManager__AssetObjectListSetupAndCall_d__191_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct AssetData_array *assetList; // x1
  System_Func_bool__o *v14; // x21
  UnityEngine_WaitUntil_o *v15; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  bool result; // w0
  System_Action_o *action; // x0

  if ( (byte_4D2B846 & 1) == 0 )
  {
    sub_1C94098(&System_Func_bool__TypeInfo);
    sub_1C94098(&Method_AssetManager___c__DisplayClass191_0__AssetObjectListSetupAndCall_b__0__);
    sub_1C94098(&AssetManager___c__DisplayClass191_0_TypeInfo);
    sub_1C94098(&UnityEngine_WaitUntil_TypeInfo);
    byte_4D2B846 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    action = this->fields.action;
    this->fields.__1__state = -1;
    ActionExtensions__Call(action, 0);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  v4 = sub_1C942E4(AssetManager___c__DisplayClass191_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    sub_1C942F0(v5, v6);
  assetList = this->fields.assetList;
  *(_QWORD *)(v4 + 16) = assetList;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v4 + 16), (int32_t)assetList, v7, v8, v9, v10, v11, v12);
  v14 = (System_Func_bool__o *)sub_1C942E4(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v14,
    (Il2CppObject *)v4,
    Method_AssetManager___c__DisplayClass191_0__AssetObjectListSetupAndCall_b__0__,
    0);
  v15 = (UnityEngine_WaitUntil_o *)sub_1C942E4(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v15, v14, 0);
  this->fields.__2__current = (Il2CppObject *)v15;
  p__2__current = &this->fields.__2__current;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)p__2__current, (int32_t)v15, v17, v18, v19, v20, v21, v22);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *AssetManager__AssetObjectListSetupAndCall_d__191__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AssetManager__AssetObjectListSetupAndCall_d__191_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn AssetManager__AssetObjectListSetupAndCall_d__191__System_Collections_IEnumerator_Reset(
        AssetManager__AssetObjectListSetupAndCall_d__191_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_AssetManager__AssetObjectListSetupAndCall_d__191_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *AssetManager__AssetObjectListSetupAndCall_d__191__System_Collections_IEnumerator_get_Current(
        AssetManager__AssetObjectListSetupAndCall_d__191_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void AssetManager__AssetObjectListSetupAndCall_d__191__System_IDisposable_Dispose(
        AssetManager__AssetObjectListSetupAndCall_d__191_o *this,
        const MethodInfo *method)
{
  ;
}


void AssetManager__DelayLoadStart_d__153___ctor(
        AssetManager__DelayLoadStart_d__153_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool AssetManager__DelayLoadStart_d__153__MoveNext(
        AssetManager__DelayLoadStart_d__153_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
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
      sub_1C942F0(0, method);
    AssetManager__LoadStart(_4__this, method);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, 0, v2, v3, v4, v5, v6, v7);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *AssetManager__DelayLoadStart_d__153__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AssetManager__DelayLoadStart_d__153_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn AssetManager__DelayLoadStart_d__153__System_Collections_IEnumerator_Reset(
        AssetManager__DelayLoadStart_d__153_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_AssetManager__DelayLoadStart_d__153_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *AssetManager__DelayLoadStart_d__153__System_Collections_IEnumerator_get_Current(
        AssetManager__DelayLoadStart_d__153_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void AssetManager__DelayLoadStart_d__153__System_IDisposable_Dispose(
        AssetManager__DelayLoadStart_d__153_o *this,
        const MethodInfo *method)
{
  ;
}


void AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__119___ctor(
        AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__119_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__119__MoveNext(
        AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__119_o *this,
        const MethodInfo *method)
{
  AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__119_o *v2; // x19
  int32_t _1__state; // w8
  struct AssetManager_o *_4__this; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  AssetData_o *currentValue; // x21
  const MethodInfo *v8; // x2
  _BOOL4 isDispLogo_5__2; // w8
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *downLoadWaitList; // x8
  Il2CppObject *v11; // x22
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_String_o *v18; // x22
  const MethodInfo *v19; // x1
  System_String_o *v20; // x23
  AssetManager_o *DownloadSize; // x0
  const MethodInfo *v22; // x1
  Il2CppObject *v23; // x0
  System_String_o *v24; // x23
  Il2CppObject *Instance; // x0
  Il2CppObject *v26; // x25
  CommonUI_o *v27; // x21
  ErrorDialog_ClickDelegate_o *v28; // x24
  struct AssetManager___c__DisplayClass119_0_o *_8__1; // x8
  struct AssetManager___c__DisplayClass119_0_o **p__8__1; // x21
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  UnityEngine_WaitForEndOfFrame_o *v37; // x20
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  bool result; // w0
  Il2CppObject *v46; // x21
  System_Action_o *v47; // x22
  AvalonSceneManager_c *v48; // x0
  float DEFAULT_FADE_TIME; // s8
  UnityEngine_WaitForSeconds_o *v50; // x20
  GrandQuestFolderBoardItem_o *v51; // x19
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v58; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v59; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_4D2B847 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_b__119_0__);
    sub_1C94098(&AvalonSceneManager_TypeInfo);
    sub_1C94098(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_AssetManager___c__DisplayClass119_0__DownloadAssetStorageAttributeWithCheckDialog_b__1__);
    sub_1C94098(&AssetManager___c__DisplayClass119_0_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    sub_1C94098(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C94098(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C94098(&StringLiteral_25678/*"データ更新"*/);
    sub_1C94098(&StringLiteral_5440/*"END_BOOT_ASSET_DOWNLOAD"*/);
    sub_1C94098(&StringLiteral_9271/*"NETWORK_ERROR_DATA_UPDATE_TITLE"*/);
    sub_1C94098(&StringLiteral_330/*" ゲームデータの更新を行います。\n\n{0}\n\n ※Wi-Fi接続での更新を推奨します。"*/);
    this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__119_o *)sub_1C94098(&StringLiteral_9269/*"NETWORK_ERROR_DATA_UPDATE_EXP"*/);
    byte_4D2B847 = 1;
  }
  memset(&v59, 0, sizeof(v59));
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    isDispLogo_5__2 = v2->fields._isDispLogo_5__2;
    v2->fields.__1__state = -1;
    if ( isDispLogo_5__2 )
    {
      this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__119_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_59;
      CommonUI__SetLoadMode((CommonUI_o *)this, 3, 0);
    }
LABEL_55:
    if ( _4__this )
    {
      _4__this->fields.loadParallelMax = v2->fields.loadParallelMax;
      AssetManager__LoadStart(_4__this, method);
      return 0;
    }
    goto LABEL_59;
  }
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
LABEL_40:
    p__8__1 = &v2->fields.__8__1;
    _8__1 = v2->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_59;
    if ( !_8__1->fields.isDataUpdate )
    {
LABEL_44:
      v37 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C942E4(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v37, 0);
      v2->fields.__2__current = (Il2CppObject *)v37;
      p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
      sub_1C9403C(p__2__current, (int32_t)v37, v39, v40, v41, v42, v43, v44);
      result = 1;
      LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
      return result;
    }
    this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__119_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this )
      goto LABEL_59;
    this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__119_o *)CommonUI__isBusyDataUpdateDialog(
                                                                                    (CommonUI_o *)this,
                                                                                    0);
    if ( ((unsigned __int8)this & 1) != 0 )
      goto LABEL_44;
    if ( !*p__8__1 )
      goto LABEL_59;
    if ( (*p__8__1)->fields.isDataUpdate )
    {
      this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__119_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( !this )
        goto LABEL_59;
      CrashReporter__SetNowState((CrashReporter_o *)this, (System_String_o *)StringLiteral_5440/*"END_BOOT_ASSET_DOWNLOAD"*/, 0);
    }
    *p__8__1 = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v2->fields.__8__1, 0, v31, v32, v33, v34, v35, v36);
    goto LABEL_50;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_59;
  this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__119_o *)_4__this->fields.assetBundleDic;
  if ( !this )
    goto LABEL_59;
  this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__119_o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                  (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                                                  (const MethodInfo_3520A24 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !this )
    goto LABEL_59;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v58,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_3BB3594 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v59 = v58;
  while ( 1 )
  {
    v5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v59,
           (const MethodInfo_3620234 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v5 )
      break;
    currentValue = (AssetData_o *)v59.fields._currentValue;
    if ( !v59.fields._currentValue )
      sub_1C942F0(v5, v6);
    if ( AssetData__IsDownloadOldVersion((AssetData_o *)v59.fields._currentValue, 0)
      || System_String__op_Equality(v2->fields.attrib, currentValue->fields.attrib, 0)
      && AssetData__IsNeedUpdateVersion(currentValue, 0) )
    {
      AssetManager__AddLoadWaitStatus_41297864(_4__this, currentValue, v8);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v59,
    (const MethodInfo_3620230 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  downLoadWaitList = _4__this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
LABEL_59:
    sub_1C942F0(this, method);
  if ( downLoadWaitList->fields._size >= 1 )
  {
    v11 = (Il2CppObject *)sub_1C942E4(AssetManager___c__DisplayClass119_0_TypeInfo);
    System_Object___ctor(v11, 0);
    v2->fields.__8__1 = (struct AssetManager___c__DisplayClass119_0_o *)v11;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v2->fields.__8__1, (int32_t)v11, v12, v13, v14, v15, v16, v17);
    if ( !v2->fields.__8__1 )
      goto LABEL_59;
    v2->fields.__8__1->fields.isDataUpdate = 0;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( LocalizationManager__ContainsKey((System_String_o *)StringLiteral_9271/*"NETWORK_ERROR_DATA_UPDATE_TITLE"*/, 0) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v18 = LocalizationManager__Get((System_String_o *)StringLiteral_9271/*"NETWORK_ERROR_DATA_UPDATE_TITLE"*/, 0);
    }
    else
    {
      v18 = (System_String_o *)StringLiteral_25678/*"データ更新"*/;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( LocalizationManager__ContainsKey((System_String_o *)StringLiteral_9269/*"NETWORK_ERROR_DATA_UPDATE_EXP"*/, 0) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v20 = LocalizationManager__Get((System_String_o *)StringLiteral_9269/*"NETWORK_ERROR_DATA_UPDATE_EXP"*/, 0);
    }
    else
    {
      v20 = (System_String_o *)StringLiteral_330/*" ゲームデータの更新を行います。\n\n{0}\n\n ※Wi-Fi接続での更新を推奨します。"*/;
    }
    DownloadSize = (AssetManager_o *)AssetManager__GetDownloadSize(_4__this, v19);
    v23 = (Il2CppObject *)AssetManager__ConvertDownloadSizeToString(DownloadSize, (double)(__int64)DownloadSize, v22);
    v24 = System_String__Format(v20, v23, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v26 = (Il2CppObject *)v2->fields.__8__1;
    v27 = (CommonUI_o *)Instance;
    v28 = (ErrorDialog_ClickDelegate_o *)sub_1C942E4(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(
      v28,
      v26,
      Method_AssetManager___c__DisplayClass119_0__DownloadAssetStorageAttributeWithCheckDialog_b__1__,
      0);
    if ( !v27 )
      goto LABEL_59;
    CommonUI__OpenDataUpdateDialog(v27, v18, v24, v28, 0, 0);
    goto LABEL_40;
  }
LABEL_50:
  v2->fields._isDispLogo_5__2 = 0;
  v46 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v47 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(
    v47,
    (Il2CppObject *)_4__this,
    Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_b__119_0__,
    0);
  if ( !v46 )
    goto LABEL_59;
  this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__119_o *)CommonUI__PlayLogo(
                                                                                  (CommonUI_o *)v46,
                                                                                  v47,
                                                                                  0);
  v2->fields._isDispLogo_5__2 = (unsigned __int8)this & 1;
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_55;
  v48 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v48 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v48->static_fields->DEFAULT_FADE_TIME;
  v50 = (UnityEngine_WaitForSeconds_o *)sub_1C942E4(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v50, DEFAULT_FADE_TIME, 0);
  v2->fields.__2__current = (Il2CppObject *)v50;
  v51 = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
  sub_1C9403C(v51, (int32_t)v50, v52, v53, v54, v55, v56, v57);
  LODWORD(v51[-1].fields._ClosedMessage_k__BackingField) = 2;
  return 1;
}


Il2CppObject *AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__119__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__119_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__119__System_Collections_IEnumerator_Reset(
        AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__119_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__119_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__119__System_Collections_IEnumerator_get_Current(
        AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__119_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__119__System_IDisposable_Dispose(
        AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__119_o *this,
        const MethodInfo *method)
{
  ;
}


void AssetManager__InitCR_d__135___ctor(
        AssetManager__InitCR_d__135_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool AssetManager__InitCR_d__135__MoveNext(AssetManager__InitCR_d__135_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  AssetManager__InitCR_d__135_o *v8; // x19
  struct AssetManager_o *_4__this; // x20
  AssetManager_c *v10; // x0
  AssetManager_c *v11; // x0
  AssetManager_c *v12; // x0
  AssetManager_c *v13; // x0
  System_String_o *AllText; // x21
  System_String_o *v15; // x0
  UnityEngine_WaitForEndOfFrame_o *v16; // x20
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  bool result; // w0
  System_String_o *v25; // x21
  __int64 v26; // x0
  System_String_o *v27; // x21
  __int64 v28; // x0
  int v29; // w8
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  int v36; // w23
  __int64 *v37; // x8
  System_String_o *v38; // x0
  __int64 v39; // x1
  System_String_o *v40; // x22
  System_String_o *v41; // x22
  System_String_o *v42; // x21
  System_Text_Encoding_o *UTF8; // x0
  __int64 v44; // x1
  System_Byte_array *v45; // x23
  uint32_t v46; // w23
  __int64 v47; // x0
  int v48; // w8
  AssetManager__InitCR_d__135_o *v49; // x25
  Il2CppObject *_2__current; // x8
  AssetManager__InitCR_d__135_o *v51; // x22
  System_String_o *v52; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  AssetManager_c *v59; // x8
  System_String_o *v60; // x23
  struct AssetManager_StaticFields *v61; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  AssetManager_c *v68; // x0
  __int64 *p_configFileUrl_5__2; // x8
  __int64 v70; // x23
  struct AssetManager_StaticFields *v71; // x0
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  AssetManager_c *v78; // x0
  __int64 *p_loader_5__3; // x8
  __int64 v80; // x22
  struct AssetManager_StaticFields *v81; // x0
  int v82; // w8
  __int64 v83; // x21
  AssetManager__InitCR_d__135_o *v84; // x22
  System_String_o *v85; // x0
  int32_t v86; // w23
  System_String_o *configFileUrl_5__2; // x24
  System_String_o *v88; // x0
  int32_t v89; // w25
  System_String_o *v90; // x0
  int v91; // w8
  uint32_t v92; // w26
  System_String_o *v93; // x27
  System_String_o *wait_5__6; // x22
  System_Collections_Generic_Dictionary_object__object__o *assetBundleDic; // x28
  AssetData_o *v96; // x29
  System_String_o *v97; // x21
  AssetManager_c *v98; // x0
  struct AssetManager_StaticFields *static_fields; // x0
  int32_t v100; // w1
  int32_t v101; // w1
  struct AssetManager_StaticFields *v102; // x0
  int32_t v103; // w2
  int32_t v104; // w3
  System_String_o *v105; // x4
  int32_t v106; // w5
  int64_t v107; // x6
  System_String_o *v108; // x7
  int32_t v109; // w1
  struct AssetManager_StaticFields *v110; // x0
  int32_t v111; // w2
  int32_t v112; // w3
  System_String_o *v113; // x4
  int32_t v114; // w5
  int64_t v115; // x6
  System_String_o *v116; // x7
  ManagerConfig_c *v117; // x0
  struct ManagerConfig_StaticFields *v118; // x8
  Il2CppObject *Instance; // x22
  ErrorDialog_ClickDelegate_o *v120; // x23
  AssetManager_c *v121; // x0
  System_String_o *ConfigFileAddress; // x0
  int32_t v123; // w2
  int32_t v124; // w3
  System_String_o *v125; // x4
  int32_t v126; // w5
  int64_t v127; // x6
  System_String_o *v128; // x7
  int32_t v129; // w2
  int32_t v130; // w3
  System_String_o *v131; // x4
  int32_t v132; // w5
  int64_t v133; // x6
  System_String_o *v134; // x7
  System_String_o *v135; // x21
  System_String_o *UrlString; // x0
  UnityEngine_Networking_UnityWebRequest_o *v137; // x0
  int32_t v138; // w2
  int32_t v139; // w3
  System_String_o *v140; // x4
  int32_t v141; // w5
  int64_t v142; // x6
  System_String_o *v143; // x7
  float unscaledTime; // s8
  ManagerConfig_c *v145; // x0
  float TIMEOUT; // s0
  UnityEngine_WaitForEndOfFrame_o *v147; // x21
  int32_t v148; // w2
  int32_t v149; // w3
  System_String_o *v150; // x4
  int32_t v151; // w5
  int64_t v152; // x6
  System_String_o *v153; // x7
  AssetManager__InitCR_d__135_o **v154; // x21
  float downloadProgress; // s0
  float loadProgress_5__5; // s9
  float v157; // s8
  int32_t v158; // w2
  int32_t v159; // w3
  System_String_o *v160; // x4
  int32_t v161; // w5
  int64_t v162; // x6
  System_String_o *v163; // x7
  float v164; // s0
  bool v165; // zf
  float v166; // s8
  System_String_o *error; // x0
  System_String_o *text; // x22
  System_String_o *v169; // x22
  const MethodInfo *v170; // x1
  System_String_o *v171; // x22
  System_String_o *v172; // x0
  System_String_o *v173; // x0
  Il2CppObject *v174; // x22
  ManagerConfig_c *v175; // x0
  struct ManagerConfig_StaticFields *v176; // x8
  Il2CppObject *v177; // x1
  GrandQuestFolderBoardItem_o *v178; // x19
  int v179; // w8
  AssetManager__InitCR_d__135_o *v180; // x22
  int v181; // w8
  int32_t v182; // w0
  int32_t v183; // w24
  System_String_o *v184; // x23
  System_String_o *v185; // x22
  System_Byte_array *v186; // x24
  uint32_t v187; // w24
  int32_t v188; // w2
  int32_t v189; // w3
  System_String_o *v190; // x4
  int32_t v191; // w5
  int64_t v192; // x6
  System_String_o *v193; // x7
  int32_t v194; // w2
  int32_t v195; // w3
  System_String_o *v196; // x4
  int32_t v197; // w5
  int64_t v198; // x6
  System_String_o *v199; // x7
  int v200; // w8
  System_String_array *v201; // x25
  __int64 v202; // x22
  const MethodInfo *v203; // x1
  int32_t v204; // w2
  int32_t v205; // w3
  System_String_o *v206; // x4
  int32_t v207; // w5
  int64_t v208; // x6
  System_String_o *v209; // x7
  int max_length; // w8
  unsigned int v211; // w29
  AssetManager__InitCR_d__135_o *v212; // x27
  char v213; // w8
  System_String_o *v214; // x0
  int v215; // w9
  __int64 *v216; // x11
  AssetManager_c *v217; // x8
  System_String_o *v218; // x26
  bool v219; // cc
  __int64 *v220; // x9
  __int64 *v221; // x10
  GrandQuestFolderBoardItem_c *v222; // x24
  GrandQuestFolderBoardItem_c *v223; // x23
  int32_t v224; // w2
  int32_t v225; // w3
  System_String_o *v226; // x4
  int32_t v227; // w5
  int64_t v228; // x6
  System_String_o *v229; // x7
  int32_t v230; // w2
  int32_t v231; // w3
  System_String_o *v232; // x4
  int32_t v233; // w5
  int64_t v234; // x6
  System_String_o *v235; // x7
  int32_t v236; // w2
  int32_t v237; // w3
  System_String_o *v238; // x4
  int32_t v239; // w5
  int64_t v240; // x6
  System_String_o *v241; // x7
  System_String_o *v242; // x0
  System_String_o *v243; // x0
  int32_t v244; // w23
  System_String_o *v245; // x0
  const MethodInfo *v246; // x3
  int v247; // w8
  uint32_t v248; // w24
  System_String_o *v249; // x26
  AssetData_o *AssetData; // x0
  Il2CppObject *v251; // x27
  int32_t v252; // w2
  int32_t v253; // w3
  System_String_o *v254; // x4
  int32_t v255; // w5
  int64_t v256; // x6
  System_String_o *v257; // x7
  __int64 v258; // x8
  _QWORD *v259; // x9
  __int64 _2__current_low; // x10
  __int64 v261; // x8
  System_Collections_Generic_List_object__o *v262; // x27
  AssetData_o *v263; // x28
  int32_t v264; // w2
  int32_t v265; // w3
  System_String_o *v266; // x4
  int32_t v267; // w5
  int64_t v268; // x6
  System_String_o *v269; // x7
  struct System_Object_array *items; // x8
  _QWORD *v271; // x9
  __int64 size; // x10
  Il2CppClass **v273; // x0
  AssetManager_c *v274; // x0
  GrandQuestFolderBoardItem_c *v275; // x23
  struct AssetManager_StaticFields *v276; // x0
  struct AssetManager_StaticFields *v277; // x0
  GrandQuestFolderBoardItem_c *v278; // x1
  int32_t v279; // w2
  int32_t v280; // w3
  System_String_o *v281; // x4
  int32_t v282; // w5
  int64_t v283; // x6
  System_String_o *v284; // x7
  struct AssetManager_StaticFields *v285; // x0
  GrandQuestFolderBoardItem_c *v286; // x1
  int32_t v287; // w2
  int32_t v288; // w3
  System_String_o *v289; // x4
  int32_t v290; // w5
  int64_t v291; // x6
  System_String_o *v292; // x7
  _BOOL8 v293; // x0
  __int64 v294; // x1
  Il2CppObject *current; // x22
  System_Collections_Generic_Dictionary_object__object__o *v296; // x0
  __int64 v297; // x1
  System_Collections_Generic_Dictionary_object__object__o *v298; // x0
  Il2CppObject *v299; // x22
  int32_t v300; // w2
  int32_t v301; // w3
  System_String_o *v302; // x4
  int32_t v303; // w5
  int64_t v304; // x6
  System_String_o *v305; // x7
  ManagerConfig_c *v306; // x0
  struct ManagerConfig_StaticFields *v307; // x8
  Il2CppObject *v308; // x21
  ErrorDialog_ClickDelegate_o *v309; // x23
  UnityEngine_WaitForEndOfFrame_o *v310; // x20
  int32_t v311; // w2
  int32_t v312; // w3
  System_String_o *v313; // x4
  int32_t v314; // w5
  int64_t v315; // x6
  System_String_o *v316; // x7
  ManagementManager_c *v317; // x0
  _BOOL4 isDuringStartup; // w22
  Il2CppObject *v319; // x21
  System_String_o *v320; // x22
  ErrorDialog_ClickDelegate_o *v321; // x23
  System_String_o *v322; // x22
  ErrorDialog_ClickDelegate_o *v323; // x23
  UnityEngine_WaitForEndOfFrame_o *v324; // x20
  int32_t v325; // w2
  int32_t v326; // w3
  System_String_o *v327; // x4
  int32_t v328; // w5
  int64_t v329; // x6
  System_String_o *v330; // x7
  UnityEngine_WaitForSeconds_o *v331; // x20
  int32_t v332; // w2
  int32_t v333; // w3
  System_String_o *v334; // x4
  int32_t v335; // w5
  int64_t v336; // x6
  System_String_o *v337; // x7
  const MethodInfo *v338; // x2
  int32_t v339; // w2
  int32_t v340; // w3
  System_String_o *v341; // x4
  int32_t v342; // w5
  int64_t v343; // x6
  System_String_o *v344; // x7
  UnityEngine_WaitForEndOfFrame_o *v345; // x20
  int32_t v346; // w2
  int32_t v347; // w3
  System_String_o *v348; // x4
  int32_t v349; // w5
  int64_t v350; // x6
  System_String_o *v351; // x7
  System_Nullable_Vector2__o methoda; // [xsp+0h] [xbp-F0h]
  System_Nullable_Vector2__o methodb; // [xsp+0h] [xbp-F0h]
  System_String_o *klass; // [xsp+18h] [xbp-D8h]
  System_String_o *v355; // [xsp+20h] [xbp-D0h]
  int32_t version; // [xsp+2Ch] [xbp-C4h]
  GrandQuestFolderBoardItem_o *v357; // [xsp+30h] [xbp-C0h]
  GrandQuestFolderBoardItem_o *v358; // [xsp+38h] [xbp-B8h]
  AssetManager__InitCR_d__135_o *v359; // [xsp+40h] [xbp-B0h]
  GrandQuestFolderBoardItem_o *v360; // [xsp+40h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v361; // [xsp+48h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v362; // [xsp+60h] [xbp-90h] BYREF

  v8 = this;
  if ( (byte_4D2B848 & 1) == 0 )
  {
    sub_1C94098(&AssetDataListInfo_TypeInfo);
    sub_1C94098(&AssetData_TypeInfo);
    sub_1C94098(&Method_AssetManager_OnClickRetryDialog__);
    sub_1C94098(&Method_AssetManager_OnClickWaitDebugDialog__);
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&CatAndMouseGame_TypeInfo);
    sub_1C94098(&char___TypeInfo);
    sub_1C94098(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C94098(&Crc32_TypeInfo);
    sub_1C94098(&UnityEngine_Debug_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__AssetData__set_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_AssetData__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&ManagementManager_TypeInfo);
    sub_1C94098(&ManagerConfig_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C94098(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C94098(&StringLiteral_2390/*"AssetStorageList download time over"*/);
    sub_1C94098(&StringLiteral_2386/*"AssetStorageList download crc error"*/);
    sub_1C94098(&StringLiteral_2382/*"AssetStorage boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/);
    sub_1C94098(&StringLiteral_2040/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/);
    sub_1C94098(&StringLiteral_2378/*"AssetStorage boot load crc error : チェックサム値が不一致"*/);
    sub_1C94098(&StringLiteral_15983/*"[FFFF80]Download error for debug"*/);
    sub_1C94098(&StringLiteral_2387/*"AssetStorageList download data error"*/);
    sub_1C94098(&StringLiteral_2389/*"AssetStorageList download error : "*/);
    sub_1C94098(&StringLiteral_2380/*"AssetStorage boot load error : アセットバンドルリスト作成失敗"*/);
    sub_1C94098(&StringLiteral_25513/*"~"*/);
    sub_1C94098(&StringLiteral_2381/*"AssetStorage boot load error : ファイル先頭の１行目の内容が空"*/);
    sub_1C94098(&StringLiteral_11528/*"SCRIPT"*/);
    sub_1C94098(&StringLiteral_1763/*"@"*/);
    sub_1C94098(&StringLiteral_2041/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/);
    this = (AssetManager__InitCR_d__135_o *)sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2B848 = 1;
  }
  memset(&v362, 0, sizeof(v362));
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_281;
      v10 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v10 = AssetManager_TypeInfo;
      }
      if ( !System_IO_Directory__Exists(v10->static_fields->cachePathName, 0) )
      {
        v11 = AssetManager_TypeInfo;
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v11 = AssetManager_TypeInfo;
        }
        System_IO_Directory__CreateDirectory(v11->static_fields->cachePathName, 0);
      }
      this = (AssetManager__InitCR_d__135_o *)_4__this->fields.assetBundleDic;
      if ( !this )
        goto LABEL_281;
      if ( System_Collections_Generic_Dictionary_object__object___get_Count(
             (System_Collections_Generic_Dictionary_object__object__o *)this,
             (const MethodInfo_35208C4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) )
      {
        goto LABEL_120;
      }
      v12 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v12 = AssetManager_TypeInfo;
      }
      if ( !System_IO_File__Exists(v12->static_fields->cacheListFileName, 0) )
        goto LABEL_120;
      v13 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v13 = AssetManager_TypeInfo;
      }
      AllText = System_IO_File__ReadAllText(v13->static_fields->cacheListFileName, 0);
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      v15 = CatAndMouseGame__MouseGame8(AllText, 0);
      v25 = v15;
      if ( !v15 )
        goto LABEL_120;
      v26 = sub_1C94140(char___TypeInfo, 1);
      if ( !v26 )
        sub_1C942F0(0, 0);
      if ( !*(_DWORD *)(v26 + 24) )
        sub_1C942F8(v26);
      *(_WORD *)(v26 + 32) = -257;
      v27 = System_String__Trim_64474308(v25, (System_Char_array *)v26, 0);
      v28 = sub_1C94140(char___TypeInfo, 2);
      if ( !v28 )
        sub_1C942F0(0, 0);
      v29 = *(_DWORD *)(v28 + 24);
      if ( !v29 )
        sub_1C942F8(v28);
      *(_WORD *)(v28 + 32) = 13;
      if ( v29 == 1 )
        sub_1C942F8(v28);
      *(_WORD *)(v28 + 34) = 10;
      if ( !v27 )
        sub_1C942F0(v28, v28);
      v36 = System_String__IndexOfAny(v27, (System_Char_array *)v28, 0);
      if ( v36 < 2 )
      {
        v37 = &StringLiteral_2381/*"AssetStorage boot load error : ファイル先頭の１行目の内容が空"*/;
        goto LABEL_96;
      }
      v38 = System_String__Substring_64463684(v27, 0, v36, 0);
      v40 = v38;
      if ( !v38 )
        sub_1C942F0(0, v39);
      if ( !System_String__StartsWith(v38, (System_String_o *)StringLiteral_25513/*"~"*/, 0) )
      {
        v37 = &StringLiteral_2382/*"AssetStorage boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
        goto LABEL_96;
      }
      v41 = System_String__Substring(v40, 1, 0);
      v42 = System_String__Substring(v27, v36 + 1, 0);
      UTF8 = System_Text_Encoding__get_UTF8(0);
      if ( !UTF8 )
        sub_1C942F0(0, v44);
      v45 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
                                   UTF8,
                                   v42,
                                   UTF8->klass->vtable._18_GetBytes.method);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v46 = Crc32__Compute(v45, 0);
      if ( System_UInt32__Parse(v41, 0) != v46 )
      {
        v37 = &StringLiteral_2378/*"AssetStorage boot load crc error : チェックサム値が不一致"*/;
        goto LABEL_96;
      }
      v47 = sub_1C94140(char___TypeInfo, 2);
      if ( !v47 )
        sub_1C942F0(0, 0);
      v48 = *(_DWORD *)(v47 + 24);
      if ( !v48 )
        sub_1C942F8(v47);
      *(_WORD *)(v47 + 32) = 13;
      if ( v48 == 1 )
        sub_1C942F8(v47);
      *(_WORD *)(v47 + 34) = 10;
      if ( !v42 )
        sub_1C942F0(v47, v47);
      this = (AssetManager__InitCR_d__135_o *)System_String__Split_64466952(v42, (System_Char_array *)v47, 1, 0);
      v49 = this;
      if ( !this )
        goto LABEL_120;
      _2__current = this->fields.__2__current;
      if ( !_2__current )
        goto LABEL_95;
      if ( !(_DWORD)_2__current )
        goto LABEL_282;
      this = (AssetManager__InitCR_d__135_o *)this->fields.__4__this;
      if ( !this )
        goto LABEL_281;
      this = (AssetManager__InitCR_d__135_o *)System_String__StartsWith(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_1763/*"@"*/,
                                                0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
LABEL_95:
        v37 = &StringLiteral_2380/*"AssetStorage boot load error : アセットバンドルリスト作成失敗"*/;
LABEL_96:
        v97 = (System_String_o *)*v37;
        if ( *v37 )
        {
          v98 = AssetManager_TypeInfo;
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
            v98 = AssetManager_TypeInfo;
          }
          static_fields = v98->static_fields;
          v100 = StringLiteral_1/*""*/;
          static_fields->assetBundleMasterVersion = (struct System_String_o *)StringLiteral_1/*""*/;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&static_fields->assetBundleMasterVersion,
            v100,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35);
          v101 = StringLiteral_1/*""*/;
          v102 = AssetManager_TypeInfo->static_fields;
          v102->assetBundleDateVersion = (struct System_String_o *)StringLiteral_1/*""*/;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&v102->assetBundleDateVersion,
            v101,
            v103,
            v104,
            v105,
            v106,
            v107,
            v108);
          v109 = StringLiteral_1/*""*/;
          v110 = AssetManager_TypeInfo->static_fields;
          v110->assetBundleBuildVersion = (struct System_String_o *)StringLiteral_1/*""*/;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&v110->assetBundleBuildVersion,
            v109,
            v111,
            v112,
            v113,
            v114,
            v115,
            v116);
          this = (AssetManager__InitCR_d__135_o *)_4__this->fields.assetBundleDic;
          if ( !this )
            goto LABEL_281;
          System_Collections_Generic_Dictionary_object__object___Clear(
            (System_Collections_Generic_Dictionary_object__object__o *)this,
            (const MethodInfo_3520D7C *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
          v117 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v117 = ManagerConfig_TypeInfo;
          }
          v118 = v117->static_fields;
          if ( v118->UseDebugCommand )
          {
            if ( !v117->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v117);
              v118 = ManagerConfig_TypeInfo->static_fields;
            }
            if ( System_String__op_Inequality(v118->ServerDefaultType, (System_String_o *)StringLiteral_11528/*"SCRIPT"*/, 0) )
            {
              _4__this->fields.isErrorDialog = 1;
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v120 = (ErrorDialog_ClickDelegate_o *)sub_1C942E4(ErrorDialog_ClickDelegate_TypeInfo);
              ErrorDialog_ClickDelegate___ctor(
                v120,
                (Il2CppObject *)_4__this,
                Method_AssetManager_OnClickWaitDebugDialog__,
                0);
              if ( !Instance )
                goto LABEL_281;
              *(_QWORD *)&methoda.fields.hasValue = 0;
              methoda.fields.value.fields.y = 0.0;
              CommonUI__OpenWarningDialog(
                (CommonUI_o *)Instance,
                (System_String_o *)StringLiteral_15983/*"[FFFF80]Download error for debug"*/,
                v97,
                v120,
                1,
                0,
                -1.0,
                1,
                methoda,
                0);
LABEL_27:
              if ( _4__this->fields.isErrorDialog )
              {
                v16 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C942E4(UnityEngine_WaitForEndOfFrame_TypeInfo);
                UnityEngine_WaitForEndOfFrame___ctor(v16, 0);
                v8->fields.__2__current = (Il2CppObject *)v16;
                p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
                sub_1C9403C(p__2__current, (int32_t)v16, v18, v19, v20, v21, v22, v23);
                result = 1;
                LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
                return result;
              }
            }
          }
        }
        goto LABEL_120;
      }
      if ( !LODWORD(v49->fields.__2__current) )
        goto LABEL_282;
      this = (AssetManager__InitCR_d__135_o *)v49->fields.__4__this;
      if ( !this )
        goto LABEL_281;
      this = (AssetManager__InitCR_d__135_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0);
      if ( !this )
        goto LABEL_281;
      v51 = this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_282;
      this = (AssetManager__InitCR_d__135_o *)this->fields.__4__this;
      if ( !this )
        goto LABEL_281;
      v52 = System_String__Substring((System_String_o *)this, 1, 0);
      v59 = AssetManager_TypeInfo;
      v60 = v52;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v59 = AssetManager_TypeInfo;
      }
      v61 = v59->static_fields;
      v61->assetBundleMasterVersion = v60;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v61->assetBundleMasterVersion,
        (int32_t)v60,
        v53,
        v54,
        v55,
        v56,
        v57,
        v58);
      v68 = AssetManager_TypeInfo;
      if ( SLODWORD(v51->fields.__2__current) <= 1 )
        p_configFileUrl_5__2 = &StringLiteral_1/*""*/;
      else
        p_configFileUrl_5__2 = (__int64 *)&v51->fields._configFileUrl_5__2;
      v70 = *p_configFileUrl_5__2;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v68 = AssetManager_TypeInfo;
      }
      v71 = v68->static_fields;
      v71->assetBundleDateVersion = (struct System_String_o *)v70;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v71->assetBundleDateVersion, v70, v62, v63, v64, v65, v66, v67);
      v78 = AssetManager_TypeInfo;
      if ( SLODWORD(v51->fields.__2__current) <= 2 )
        p_loader_5__3 = &StringLiteral_1/*""*/;
      else
        p_loader_5__3 = (__int64 *)&v51->fields._loader_5__3;
      v80 = *p_loader_5__3;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v78 = AssetManager_TypeInfo;
      }
      v81 = v78->static_fields;
      v81->assetBundleBuildVersion = (struct System_String_o *)v80;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v81->assetBundleBuildVersion, v80, v72, v73, v74, v75, v76, v77);
      v82 = (int)v49->fields.__2__current;
      if ( v82 >= 2 )
      {
        v83 = 5;
        v359 = v49;
        while ( (int)v83 - 4 < (unsigned int)v82 )
        {
          this = (AssetManager__InitCR_d__135_o *)*((_QWORD *)&v49->klass + v83);
          if ( !this )
            goto LABEL_281;
          this = (AssetManager__InitCR_d__135_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0);
          if ( !this )
            goto LABEL_281;
          v84 = this;
          if ( SLODWORD(this->fields.__2__current) < 5 )
            goto LABEL_120;
          this = (AssetManager__InitCR_d__135_o *)this->fields.__4__this;
          if ( !this )
            goto LABEL_281;
          v85 = System_String__Trim((System_String_o *)this, 0);
          this = (AssetManager__InitCR_d__135_o *)System_Int32__Parse(v85, 0);
          if ( LODWORD(v84->fields.__2__current) <= 2 )
            goto LABEL_282;
          v86 = (int)this;
          this = (AssetManager__InitCR_d__135_o *)v84->fields._loader_5__3;
          if ( !this )
            goto LABEL_281;
          configFileUrl_5__2 = v84->fields._configFileUrl_5__2;
          v88 = System_String__Trim((System_String_o *)this, 0);
          this = (AssetManager__InitCR_d__135_o *)System_Int32__Parse(v88, 0);
          if ( LODWORD(v84->fields.__2__current) <= 3 )
            goto LABEL_282;
          v89 = (int)this;
          this = *(AssetManager__InitCR_d__135_o **)&v84->fields._requestTime_5__4;
          if ( !this )
            goto LABEL_281;
          v90 = System_String__Trim((System_String_o *)this, 0);
          this = (AssetManager__InitCR_d__135_o *)System_UInt32__Parse(v90, 0);
          v91 = (int)v84->fields.__2__current;
          if ( (unsigned int)v91 <= 4 )
            goto LABEL_282;
          v92 = (unsigned int)this;
          v93 = v91 >= 6 ? (System_String_o *)v84[1].klass : 0LL;
          wait_5__6 = (System_String_o *)v84->fields._wait_5__6;
          assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.assetBundleDic;
          v96 = (AssetData_o *)sub_1C942E4(AssetData_TypeInfo);
          AssetData___ctor_41256524(v96, 0, wait_5__6, v86, configFileUrl_5__2, v89, v92, v93, 0);
          if ( !assetBundleDic )
            goto LABEL_281;
          System_Collections_Generic_Dictionary_object__object___set_Item(
            assetBundleDic,
            (Il2CppObject *)wait_5__6,
            (Il2CppObject *)v96,
            (const MethodInfo_3520BE0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__set_Item__);
          v49 = v359;
          ++v83;
          v82 = (int)v359->fields.__2__current;
          if ( (int)v83 - 4 >= v82 )
            goto LABEL_120;
        }
        goto LABEL_282;
      }
LABEL_120:
      v121 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      ConfigFileAddress = AssetManager__get_ConfigFileAddress((const MethodInfo *)v121);
      v8->fields._configFileUrl_5__2 = ConfigFileAddress;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v8->fields._configFileUrl_5__2,
        (int32_t)ConfigFileAddress,
        v123,
        v124,
        v125,
        v126,
        v127,
        v128);
      v8->fields._loader_5__3 = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v8->fields._loader_5__3, 0, v129, v130, v131, v132, v133, v134);
LABEL_123:
      v135 = v8->fields._configFileUrl_5__2;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      UrlString = AssetManager__getUrlString(v135, method);
      v137 = UnityEngine_Networking_UnityWebRequest__Get(UrlString, 0);
      v8->fields._loader_5__3 = v137;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v8->fields._loader_5__3,
        (int32_t)v137,
        v138,
        v139,
        v140,
        v141,
        v142,
        v143);
      this = (AssetManager__InitCR_d__135_o *)v8->fields._loader_5__3;
      if ( !this )
        goto LABEL_281;
      UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
      unscaledTime = UnityEngine_Time__get_unscaledTime(0);
      v145 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v145 = ManagerConfig_TypeInfo;
      }
      TIMEOUT = v145->static_fields->TIMEOUT;
      v8->fields._loadProgress_5__5 = 0.0;
      v8->fields._requestTime_5__4 = unscaledTime + TIMEOUT;
      v147 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C942E4(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v147, 0);
      v8->fields._wait_5__6 = v147;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v8->fields._wait_5__6,
        (int32_t)v147,
        v148,
        v149,
        v150,
        v151,
        v152,
        v153);
LABEL_129:
      v154 = (AssetManager__InitCR_d__135_o **)&v8->fields._loader_5__3;
      this = (AssetManager__InitCR_d__135_o *)v8->fields._loader_5__3;
      if ( !this )
        goto LABEL_281;
      this = (AssetManager__InitCR_d__135_o *)UnityEngine_Networking_UnityWebRequest__get_isDone(
                                                (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                0);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_136;
      this = *v154;
      if ( !*v154 )
        goto LABEL_281;
      downloadProgress = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                           (UnityEngine_Networking_UnityWebRequest_o *)this,
                           0);
      loadProgress_5__5 = v8->fields._loadProgress_5__5;
      v157 = downloadProgress;
      v164 = UnityEngine_Time__get_unscaledTime(0);
      v165 = v157 == loadProgress_5__5;
      v166 = v164;
      if ( !v165 )
      {
        v175 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v175 = ManagerConfig_TypeInfo;
        }
        v176 = v175->static_fields;
        this = (AssetManager__InitCR_d__135_o *)v8->fields._loader_5__3;
        v8->fields._requestTime_5__4 = v166 + v176->TIMEOUT;
        if ( this )
        {
          v8->fields._loadProgress_5__5 = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                                            (UnityEngine_Networking_UnityWebRequest_o *)this,
                                            0);
          goto LABEL_153;
        }
LABEL_281:
        sub_1C942F0(this, method);
      }
      if ( v164 >= v8->fields._requestTime_5__4 )
      {
LABEL_136:
        if ( !_4__this )
          goto LABEL_281;
        this = *v154;
        if ( !*v154 )
          goto LABEL_281;
        if ( !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0) )
        {
          v174 = (Il2CppObject *)StringLiteral_2390/*"AssetStorageList download time over"*/;
          goto LABEL_249;
        }
        this = *v154;
        if ( !*v154 )
          goto LABEL_281;
        error = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
        this = (AssetManager__InitCR_d__135_o *)System_String__IsNullOrEmpty(error, 0);
        if ( !*v154 )
          goto LABEL_281;
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v173 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)*v154, 0);
LABEL_155:
          v174 = (Il2CppObject *)v173;
          goto LABEL_249;
        }
        this = (AssetManager__InitCR_d__135_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                  (UnityEngine_Networking_UnityWebRequest_o *)*v154,
                                                  0);
        if ( !this )
          goto LABEL_281;
        text = UnityEngine_Networking_DownloadHandler__get_text((UnityEngine_Networking_DownloadHandler_o *)this, 0);
        if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
        v169 = CatAndMouseGame__MouseGame3(text, 0);
        if ( System_String__IsNullOrEmpty(v169, 0) )
        {
          v171 = v8->fields._configFileUrl_5__2;
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v172 = AssetManager__getUrlString(v171, v170);
          v173 = System_String__Concat_64417744((System_String_o *)StringLiteral_2389/*"AssetStorageList download error : "*/, v172, 0);
          goto LABEL_155;
        }
        this = (AssetManager__InitCR_d__135_o *)sub_1C94140(char___TypeInfo, 1);
        if ( !this )
          goto LABEL_281;
        method = (const MethodInfo *)this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_282;
        LOWORD(this->fields.__4__this) = -257;
        if ( !v169 )
          goto LABEL_281;
        this = (AssetManager__InitCR_d__135_o *)System_String__Trim_64474308(v169, (System_Char_array *)this, 0);
        if ( !this )
          goto LABEL_281;
        v180 = this;
        if ( System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_25513/*"~"*/, 0) )
        {
          this = (AssetManager__InitCR_d__135_o *)sub_1C94140(char___TypeInfo, 2);
          if ( !this )
            goto LABEL_281;
          v181 = (int)this->fields.__2__current;
          if ( !v181 )
            goto LABEL_282;
          LOWORD(this->fields.__4__this) = 13;
          if ( v181 == 1 )
            goto LABEL_282;
          WORD1(this->fields.__4__this) = 10;
          v182 = System_String__IndexOfAny((System_String_o *)v180, (System_Char_array *)this, 0);
          if ( v182 >= 2 )
          {
            v183 = v182;
            v184 = System_String__Substring_64463684((System_String_o *)v180, 1, v182 - 1, 0);
            v185 = System_String__Substring((System_String_o *)v180, v183 + 1, 0);
            this = (AssetManager__InitCR_d__135_o *)System_Text_Encoding__get_UTF8(0);
            if ( !this )
              goto LABEL_281;
            v186 = (System_Byte_array *)((__int64 (__fastcall *)(AssetManager__InitCR_d__135_o *, System_String_o *, void *))this->klass[1]._1.properties)(
                                          this,
                                          v185,
                                          this->klass[1]._1.methods);
            if ( !Crc32_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
            v187 = Crc32__Compute(v186, 0);
            if ( System_UInt32__Parse(v184, 0) == v187 )
            {
              if ( *v154 )
              {
                UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)*v154, 0);
                *v154 = 0;
                sub_1C9403C(
                  (GrandQuestFolderBoardItem_o *)&v8->fields._loader_5__3,
                  0,
                  v194,
                  v195,
                  v196,
                  v197,
                  v198,
                  v199);
              }
              if ( !v185 )
                goto LABEL_280;
              this = (AssetManager__InitCR_d__135_o *)sub_1C94140(char___TypeInfo, 2);
              if ( !this )
                goto LABEL_281;
              v200 = (int)this->fields.__2__current;
              if ( v200 )
              {
                LOWORD(this->fields.__4__this) = 13;
                if ( v200 != 1 )
                {
                  WORD1(this->fields.__4__this) = 10;
                  v201 = System_String__Split_64466952(v185, (System_Char_array *)this, 1, 0);
                  v202 = sub_1C942E4(AssetDataListInfo_TypeInfo);
                  AssetDataListInfo___ctor((AssetDataListInfo_o *)v202, v203);
                  if ( !v201 )
                    goto LABEL_281;
                  max_length = v201->max_length;
                  v357 = (GrandQuestFolderBoardItem_o *)(v202 + 16);
                  v358 = (GrandQuestFolderBoardItem_o *)(v202 + 24);
                  v360 = (GrandQuestFolderBoardItem_o *)(v202 + 32);
                  if ( max_length >= 1 )
                  {
                    v211 = 0;
                    while ( v211 < max_length )
                    {
                      this = (AssetManager__InitCR_d__135_o *)v201->m_Items[v211];
                      if ( !this )
                        goto LABEL_281;
                      this = (AssetManager__InitCR_d__135_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0);
                      if ( !this )
                        goto LABEL_281;
                      v212 = this;
                      if ( SLODWORD(this->fields.__2__current) < 1 )
                        goto LABEL_231;
                      this = (AssetManager__InitCR_d__135_o *)this->fields.__4__this;
                      if ( !this )
                        goto LABEL_281;
                      this = (AssetManager__InitCR_d__135_o *)System_String__StartsWith(
                                                                (System_String_o *)this,
                                                                (System_String_o *)StringLiteral_1763/*"@"*/,
                                                                0);
                      if ( !LODWORD(v212->fields.__2__current) )
                        goto LABEL_282;
                      v213 = (char)this;
                      this = (AssetManager__InitCR_d__135_o *)v212->fields.__4__this;
                      if ( !this )
                        goto LABEL_281;
                      if ( (v213 & 1) != 0 )
                      {
                        v214 = System_String__Substring((System_String_o *)this, 1, 0);
                        v215 = (int)v212->fields.__2__current;
                        v216 = (__int64 *)&v212->fields._loader_5__3;
                        v217 = AssetManager_TypeInfo;
                        v218 = v214;
                        if ( v215 == 2 )
                          v216 = &StringLiteral_1/*""*/;
                        v219 = v215 <= 1;
                        if ( v215 <= 1 )
                          v220 = &StringLiteral_1/*""*/;
                        else
                          v220 = (__int64 *)&v212->fields._configFileUrl_5__2;
                        if ( v219 )
                          v221 = &StringLiteral_1/*""*/;
                        else
                          v221 = v216;
                        v222 = (GrandQuestFolderBoardItem_c *)*v220;
                        v223 = (GrandQuestFolderBoardItem_c *)*v221;
                        if ( !AssetManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                          v217 = AssetManager_TypeInfo;
                        }
                        this = (AssetManager__InitCR_d__135_o *)System_String__op_Inequality(
                                                                  v218,
                                                                  v217->static_fields->assetBundleMasterVersion,
                                                                  0);
                        if ( ((unsigned __int8)this & 1) != 0 )
                        {
                          this = (AssetManager__InitCR_d__135_o *)_4__this->fields.assetBundleDic;
                          if ( !this )
                            goto LABEL_281;
                          System_Collections_Generic_Dictionary_object__object___Clear(
                            (System_Collections_Generic_Dictionary_object__object__o *)this,
                            (const MethodInfo_3520D7C *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
                        }
                        if ( !v202 )
                          goto LABEL_281;
                        v357->klass = (GrandQuestFolderBoardItem_c *)v218;
                        sub_1C9403C(v357, (int32_t)v218, v224, v225, v226, v227, v228, v229);
                        v358->klass = v222;
                        sub_1C9403C(v358, (int32_t)v222, v230, v231, v232, v233, v234, v235);
                        v360->klass = v223;
                        sub_1C9403C(v360, (int32_t)v223, v236, v237, v238, v239, v240, v241);
                      }
                      else
                      {
                        this = (AssetManager__InitCR_d__135_o *)System_String__StartsWith(
                                                                  (System_String_o *)this,
                                                                  (System_String_o *)StringLiteral_25513/*"~"*/,
                                                                  0);
                        if ( ((unsigned __int8)this & 1) == 0 )
                        {
                          if ( !LODWORD(v212->fields.__2__current) )
                            goto LABEL_282;
                          this = (AssetManager__InitCR_d__135_o *)v212->fields.__4__this;
                          if ( !this )
                            goto LABEL_281;
                          this = (AssetManager__InitCR_d__135_o *)System_String__IndexOf(
                                                                    (System_String_o *)this,
                                                                    0x7Eu,
                                                                    0);
                          if ( (_DWORD)this != 1 )
                          {
                            if ( SLODWORD(v212->fields.__2__current) < 5 )
                              goto LABEL_231;
                            this = (AssetManager__InitCR_d__135_o *)v212->fields.__4__this;
                            if ( !this )
                              goto LABEL_281;
                            v242 = System_String__Trim((System_String_o *)this, 0);
                            this = (AssetManager__InitCR_d__135_o *)System_Int32__Parse(v242, 0);
                            version = (int)this;
                            if ( LODWORD(v212->fields.__2__current) <= 2 )
                              goto LABEL_282;
                            this = (AssetManager__InitCR_d__135_o *)v212->fields._loader_5__3;
                            if ( !this )
                              goto LABEL_281;
                            v355 = v212->fields._configFileUrl_5__2;
                            v243 = System_String__Trim((System_String_o *)this, 0);
                            this = (AssetManager__InitCR_d__135_o *)System_Int32__Parse(v243, 0);
                            if ( LODWORD(v212->fields.__2__current) <= 3 )
                              goto LABEL_282;
                            v244 = (int)this;
                            this = *(AssetManager__InitCR_d__135_o **)&v212->fields._requestTime_5__4;
                            if ( !this )
                              goto LABEL_281;
                            v245 = System_String__Trim((System_String_o *)this, 0);
                            this = (AssetManager__InitCR_d__135_o *)System_UInt32__Parse(v245, 0);
                            v247 = (int)v212->fields.__2__current;
                            if ( (unsigned int)v247 <= 4 )
                              goto LABEL_282;
                            v248 = (unsigned int)this;
                            if ( v247 >= 6 )
                              klass = (System_String_o *)v212[1].klass;
                            else
                              klass = 0;
                            v249 = (System_String_o *)v212->fields._wait_5__6;
                            AssetData = AssetManager__GetAssetData(
                                          (AssetManager_o *)this,
                                          _4__this->fields.assetBundleDic,
                                          v249,
                                          v246);
                            if ( AssetData )
                            {
                              v251 = (Il2CppObject *)AssetData;
                              this = (AssetManager__InitCR_d__135_o *)AssetData__SetUpdateInfo(
                                                                        AssetData,
                                                                        version,
                                                                        v355,
                                                                        v244,
                                                                        v248,
                                                                        klass,
                                                                        0);
                              if ( !v202 )
                                goto LABEL_281;
                              this = *(AssetManager__InitCR_d__135_o **)(v202 + 40);
                              if ( !this )
                                goto LABEL_281;
                              v258 = *(_QWORD *)&this->fields.__1__state;
                              v259 = Method_System_Collections_Generic_List_AssetData__Add__;
                              ++HIDWORD(this->fields.__2__current);
                              if ( !v258 )
                                goto LABEL_281;
                              _2__current_low = SLODWORD(this->fields.__2__current);
                              if ( (unsigned int)_2__current_low >= *(_DWORD *)(v258 + 24) )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  (System_Collections_Generic_List_object__o *)this,
                                  v251,
                                  *(const MethodInfo_386AE34 **)(*(_QWORD *)(v259[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v261 = v258 + 8 * _2__current_low;
                                LODWORD(this->fields.__2__current) = _2__current_low + 1;
                                *(_QWORD *)(v261 + 32) = v251;
                                sub_1C9403C(
                                  (GrandQuestFolderBoardItem_o *)(v261 + 32),
                                  (int32_t)v251,
                                  v252,
                                  v253,
                                  v254,
                                  v255,
                                  v256,
                                  v257);
                              }
                              v249 = 0;
                            }
                            this = (AssetManager__InitCR_d__135_o *)System_String__IsNullOrEmpty(v249, 0);
                            if ( ((unsigned __int8)this & 1) == 0 )
                            {
                              if ( !v202 )
                                goto LABEL_281;
                              v262 = *(System_Collections_Generic_List_object__o **)(v202 + 40);
                              v263 = (AssetData_o *)sub_1C942E4(AssetData_TypeInfo);
                              AssetData___ctor_41256664(v263, 0, v249, 0, version, v355, v244, v248, klass, 0);
                              if ( !v262 )
                                goto LABEL_281;
                              items = v262->fields._items;
                              v271 = Method_System_Collections_Generic_List_AssetData__Add__;
                              ++v262->fields._version;
                              if ( !items )
                                goto LABEL_281;
                              size = v262->fields._size;
                              if ( (unsigned int)size >= LODWORD(items->max_length) )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  v262,
                                  (Il2CppObject *)v263,
                                  *(const MethodInfo_386AE34 **)(*(_QWORD *)(v271[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v273 = &items->obj.klass + size;
                                v262->fields._size = size + 1;
                                v273[4] = (Il2CppClass *)v263;
                                sub_1C9403C(
                                  (GrandQuestFolderBoardItem_o *)(v273 + 4),
                                  (int32_t)v263,
                                  v264,
                                  v265,
                                  v266,
                                  v267,
                                  v268,
                                  v269);
                              }
                            }
                          }
                        }
                      }
                      max_length = v201->max_length;
                      if ( (int)++v211 >= max_length )
                        goto LABEL_231;
                    }
                    goto LABEL_282;
                  }
LABEL_231:
                  if ( !v202 )
                    goto LABEL_281;
                  v274 = AssetManager_TypeInfo;
                  v275 = v357->klass;
                  if ( !AssetManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                    v274 = AssetManager_TypeInfo;
                  }
                  v276 = v274->static_fields;
                  v276->assetBundleMasterVersion = (struct System_String_o *)v275;
                  sub_1C9403C(
                    (GrandQuestFolderBoardItem_o *)&v276->assetBundleMasterVersion,
                    (int32_t)v275,
                    v204,
                    v205,
                    v206,
                    v207,
                    v208,
                    v209);
                  v277 = AssetManager_TypeInfo->static_fields;
                  v278 = v358->klass;
                  v277->assetBundleDateVersion = (struct System_String_o *)v358->klass;
                  sub_1C9403C(
                    (GrandQuestFolderBoardItem_o *)&v277->assetBundleDateVersion,
                    (int32_t)v278,
                    v279,
                    v280,
                    v281,
                    v282,
                    v283,
                    v284);
                  v285 = AssetManager_TypeInfo->static_fields;
                  v286 = v360->klass;
                  v285->assetBundleBuildVersion = (struct System_String_o *)v360->klass;
                  sub_1C9403C(
                    (GrandQuestFolderBoardItem_o *)&v285->assetBundleBuildVersion,
                    (int32_t)v286,
                    v287,
                    v288,
                    v289,
                    v290,
                    v291,
                    v292);
                  this = (AssetManager__InitCR_d__135_o *)_4__this->fields.assetBundleDic;
                  if ( !this )
                    goto LABEL_281;
                  System_Collections_Generic_Dictionary_object__object___Clear(
                    (System_Collections_Generic_Dictionary_object__object__o *)this,
                    (const MethodInfo_3520D7C *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
                  this = *(AssetManager__InitCR_d__135_o **)(v202 + 40);
                  if ( !this )
                    goto LABEL_281;
                  System_Collections_Generic_List_object___GetEnumerator(
                    (System_Collections_Generic_List_Enumerator_T__o *)&v361,
                    (System_Collections_Generic_List_object__o *)this,
                    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
                  v362 = v361;
                  while ( 1 )
                  {
                    v293 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                             &v362,
                             (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
                    if ( !v293 )
                      break;
                    current = v362.fields._current;
                    if ( !v362.fields._current )
                      sub_1C942F0(v293, v294);
                    v296 = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.assetBundleDic;
                    if ( !v296 )
                      sub_1C942F0(0, v294);
                    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                            v296,
                            (Il2CppObject *)v362.fields._current[1].monitor,
                            (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__) )
                    {
                      v298 = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.assetBundleDic;
                      if ( !v298 )
                        sub_1C942F0(0, v297);
                      System_Collections_Generic_Dictionary_object__object___Add(
                        v298,
                        (Il2CppObject *)current[1].monitor,
                        current,
                        (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
                    }
                  }
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v362,
                    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
                  AssetManager__ConfigWriteRequest(_4__this, 1, v338);
LABEL_280:
                  v8->fields._configFileUrl_5__2 = 0;
                  sub_1C9403C(
                    (GrandQuestFolderBoardItem_o *)&v8->fields._configFileUrl_5__2,
                    0,
                    v188,
                    v189,
                    v190,
                    v191,
                    v192,
                    v193);
                  v8->fields._loader_5__3 = 0;
                  sub_1C9403C(
                    (GrandQuestFolderBoardItem_o *)&v8->fields._loader_5__3,
                    0,
                    v339,
                    v340,
                    v341,
                    v342,
                    v343,
                    v344);
                  v345 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C942E4(UnityEngine_WaitForEndOfFrame_TypeInfo);
                  UnityEngine_WaitForEndOfFrame___ctor(v345, 0);
                  v8->fields.__2__current = (Il2CppObject *)v345;
                  v178 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
                  sub_1C9403C(v178, (int32_t)v345, v346, v347, v348, v349, v350, v351);
                  v179 = 6;
                  goto LABEL_278;
                }
              }
LABEL_282:
              sub_1C942F8(this);
            }
            v299 = (Il2CppObject *)StringLiteral_2386/*"AssetStorageList download crc error"*/;
            if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
            UnityEngine_Debug__LogError(v299, 0);
          }
        }
        v174 = (Il2CppObject *)StringLiteral_2387/*"AssetStorageList download data error"*/;
        if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
        UnityEngine_Debug__LogError(v174, 0);
LABEL_249:
        if ( *v154 )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)*v154, 0);
          *v154 = 0;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)&v8->fields._loader_5__3, 0, v300, v301, v302, v303, v304, v305);
        }
        if ( !v174 )
          goto LABEL_277;
        v306 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v306 = ManagerConfig_TypeInfo;
        }
        v307 = v306->static_fields;
        if ( v307->UseDebugCommand )
        {
          if ( !v306->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v306);
            v307 = ManagerConfig_TypeInfo->static_fields;
          }
          if ( System_String__op_Inequality(v307->ServerDefaultType, (System_String_o *)StringLiteral_11528/*"SCRIPT"*/, 0) )
          {
            _4__this->fields.isErrorDialog = 1;
            v308 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v309 = (ErrorDialog_ClickDelegate_o *)sub_1C942E4(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(
              v309,
              (Il2CppObject *)_4__this,
              Method_AssetManager_OnClickWaitDebugDialog__,
              0);
            if ( !v308 )
              goto LABEL_281;
            *(_QWORD *)&methodb.fields.hasValue = 0;
            methodb.fields.value.fields.y = 0.0;
            CommonUI__OpenWarningDialog(
              (CommonUI_o *)v308,
              (System_String_o *)StringLiteral_15983/*"[FFFF80]Download error for debug"*/,
              (System_String_o *)v174,
              v309,
              1,
              0,
              -1.0,
              1,
              methodb,
              0);
LABEL_260:
            if ( _4__this->fields.isErrorDialog )
            {
              v310 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C942E4(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v310, 0);
              v8->fields.__2__current = (Il2CppObject *)v310;
              v178 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
              sub_1C9403C(v178, (int32_t)v310, v311, v312, v313, v314, v315, v316);
              v179 = 3;
              goto LABEL_278;
            }
          }
        }
        _4__this->fields.isErrorDialog = 1;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        if ( !byte_4D2B7C8 )
        {
          sub_1C94098(&ManagementManager_TypeInfo);
          byte_4D2B7C8 = 1;
        }
        v317 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v317 = ManagementManager_TypeInfo;
        }
        isDuringStartup = v317->static_fields->isDuringStartup;
        v319 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          if ( isDuringStartup )
          {
LABEL_270:
            v320 = LocalizationManager__Get((System_String_o *)StringLiteral_2040/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0);
            v321 = (ErrorDialog_ClickDelegate_o *)sub_1C942E4(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(
              v321,
              (Il2CppObject *)_4__this,
              Method_AssetManager_OnClickRetryDialog__,
              0);
            if ( !v319 )
              goto LABEL_281;
            CommonUI__OpenRetryBootDialog((CommonUI_o *)v319, (System_String_o *)StringLiteral_1/*""*/, v320, v321, 0, 0);
LABEL_275:
            if ( _4__this->fields.isErrorDialog )
            {
              v324 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C942E4(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v324, 0);
              v8->fields.__2__current = (Il2CppObject *)v324;
              v178 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
              sub_1C9403C(v178, (int32_t)v324, v325, v326, v327, v328, v329, v330);
              v179 = 4;
              goto LABEL_278;
            }
LABEL_277:
            v331 = (UnityEngine_WaitForSeconds_o *)sub_1C942E4(UnityEngine_WaitForSeconds_TypeInfo);
            UnityEngine_WaitForSeconds___ctor(v331, 1.0, 0);
            v8->fields.__2__current = (Il2CppObject *)v331;
            v178 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
            sub_1C9403C(v178, (int32_t)v331, v332, v333, v334, v335, v336, v337);
            v179 = 5;
            goto LABEL_278;
          }
        }
        else
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          if ( isDuringStartup )
            goto LABEL_270;
        }
        v322 = LocalizationManager__Get((System_String_o *)StringLiteral_2041/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0);
        v323 = (ErrorDialog_ClickDelegate_o *)sub_1C942E4(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v323, (Il2CppObject *)_4__this, Method_AssetManager_OnClickRetryDialog__, 0);
        if ( !v319 )
          goto LABEL_281;
        CommonUI__OpenRetryDialog((CommonUI_o *)v319, (System_String_o *)StringLiteral_1/*""*/, v322, v323, 0, 0);
        goto LABEL_275;
      }
LABEL_153:
      v177 = (Il2CppObject *)v8->fields._wait_5__6;
      v8->fields.__2__current = v177;
      v178 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
      sub_1C9403C(v178, (int32_t)v177, v158, v159, v160, v161, v162, v163);
      v179 = 2;
LABEL_278:
      LODWORD(v178[-1].fields._ClosedMessage_k__BackingField) = v179;
      return 1;
    case 1:
      v8->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_27;
      goto LABEL_281;
    case 2:
      v8->fields.__1__state = -1;
      goto LABEL_129;
    case 3:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_281;
      goto LABEL_260;
    case 4:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_281;
      goto LABEL_275;
    case 5:
      v8->fields._wait_5__6 = 0;
      v8->fields.__1__state = -1;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v8->fields._wait_5__6, 0, v2, v3, v4, v5, v6, v7);
      if ( !_4__this )
        goto LABEL_281;
      goto LABEL_123;
    case 6:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_281;
      _4__this->fields.initCRW = 0;
      _4__this->fields.isCancelDownload = 0;
      _4__this->fields.isInitEnd = 1;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&_4__this->fields.initCRW, 0, v2, v3, v4, v5, v6, v7);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *AssetManager__InitCR_d__135__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AssetManager__InitCR_d__135_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn AssetManager__InitCR_d__135__System_Collections_IEnumerator_Reset(
        AssetManager__InitCR_d__135_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_AssetManager__InitCR_d__135_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *AssetManager__InitCR_d__135__System_Collections_IEnumerator_get_Current(
        AssetManager__InitCR_d__135_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void AssetManager__InitCR_d__135__System_IDisposable_Dispose(
        AssetManager__InitCR_d__135_o *this,
        const MethodInfo *method)
{
  ;
}


void AssetManager__WaitForExecutionUnloadUnuseAssets_d__41___ctor(
        AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool AssetManager__WaitForExecutionUnloadUnuseAssets_d__41__MoveNext(
        AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_o *v8; // x19
  int32_t _1__state; // w8
  struct AssetManager_o *_4__this; // x21
  UnityEngine_WaitForEndOfFrame_o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  Il2CppObject *wait_5__2; // x1
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  bool result; // w0

  v8 = this;
  if ( (byte_4D2B849 & 1) == 0 )
  {
    this = (AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_o *)sub_1C94098(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4D2B849 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v8->fields.__1__state = -1;
    v11 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C942E4(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v11, 0);
    v8->fields._wait_5__2 = v11;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v8->fields._wait_5__2, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  }
  if ( !_4__this )
    sub_1C942F0(this, method);
  if ( _4__this->fields.inProgressUnloadUnusedAssets || _4__this->fields.requestUnloadUnusedAssets )
  {
    wait_5__2 = (Il2CppObject *)v8->fields._wait_5__2;
    v8->fields.__2__current = wait_5__2;
    p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
    sub_1C9403C(p__2__current, (int32_t)wait_5__2, v2, v3, v4, v5, v6, v7);
    result = 1;
    LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *AssetManager__WaitForExecutionUnloadUnuseAssets_d__41__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn AssetManager__WaitForExecutionUnloadUnuseAssets_d__41__System_Collections_IEnumerator_Reset(
        AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *AssetManager__WaitForExecutionUnloadUnuseAssets_d__41__System_Collections_IEnumerator_get_Current(
        AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void AssetManager__WaitForExecutionUnloadUnuseAssets_d__41__System_IDisposable_Dispose(
        AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_o *this,
        const MethodInfo *method)
{
  ;
}


void AssetManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2B841 & 1) == 0 )
  {
    sub_1C94098(&AssetManager___c_TypeInfo);
    byte_4D2B841 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(AssetManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AssetManager___c_TypeInfo->static_fields->__9 = (struct AssetManager___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)AssetManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void AssetManager___c___ctor(AssetManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AssetManager___c___CancelAndReleaseDownloadAssetStorage_b__130_0(
        AssetManager___c_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  if ( !assetData )
    sub_1C942F0(this, 0);
  AssetData__RemoveEntryAll(assetData, 0);
}


void AssetManager___c__DisplayClass119_0___ctor(AssetManager___c__DisplayClass119_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AssetManager___c__DisplayClass119_0___DownloadAssetStorageAttributeWithCheckDialog_b__1(
        AssetManager___c__DisplayClass119_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4D2B842 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Application_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C94098(&StringLiteral_12363/*"START_BOOT_ASSET_DOWNLOAD"*/);
    byte_4D2B842 = 1;
  }
  if ( isDecide )
  {
    this->fields.isDataUpdate = 1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !Instance )
      sub_1C942F0(0, v6);
    CrashReporter__SetNowState((CrashReporter_o *)Instance, (System_String_o *)StringLiteral_12363/*"START_BOOT_ASSET_DOWNLOAD"*/, 0);
  }
  else
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    UnityEngine_Application__Quit_71904136(0);
  }
}


void AssetManager___c__DisplayClass152_0___ctor(AssetManager___c__DisplayClass152_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AssetManager___c__DisplayClass152_0___LoadStart_b__0(
        AssetManager___c__DisplayClass152_0_o *this,
        const MethodInfo *method)
{
  AssetLoader_o *loader; // x20
  Il2CppObject *_4__this; // x22
  AssetLoader_LoadEndHandler_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  struct AssetManager_LoadWaitStatus_o *waiter; // x8

  if ( (byte_4D2B843 & 1) == 0 )
  {
    sub_1C94098(&Method_AssetManager_OnEndLoadAssetStorage__);
    sub_1C94098(&AssetLoader_LoadEndHandler_TypeInfo);
    byte_4D2B843 = 1;
  }
  loader = this->fields.loader;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v5 = (AssetLoader_LoadEndHandler_o *)sub_1C942E4(AssetLoader_LoadEndHandler_TypeInfo);
  AssetLoader_LoadEndHandler___ctor(v5, _4__this, Method_AssetManager_OnEndLoadAssetStorage__, v6);
  waiter = this->fields.waiter;
  if ( !waiter || !loader )
    sub_1C942F0(v7, v8);
  AssetLoader__StartLoad(loader, v5, waiter->fields.resourceNames, v9);
}


void AssetManager___c__DisplayClass173_0___ctor(AssetManager___c__DisplayClass173_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AssetManager___c__DisplayClass173_0___LoadAssetStorage_b__0(
        AssetManager___c__DisplayClass173_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  AssetManager___c__DisplayClass173_0_o *v4; // x19
  const MethodInfo *v5; // x2
  struct System_Collections_Generic_List_string__o *remainNameList; // x8

  v4 = this;
  if ( (byte_4D2B844 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_string__Remove__);
    this = (AssetManager___c__DisplayClass173_0_o *)sub_1C94098(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_4D2B844 = 1;
  }
  ++v4->fields.calledCallbackFuncCounter;
  if ( !data )
    goto LABEL_12;
  this = (AssetManager___c__DisplayClass173_0_o *)v4->fields.remainNameList;
  if ( !this )
    goto LABEL_12;
  this = (AssetManager___c__DisplayClass173_0_o *)System_Collections_Generic_List_object___Remove(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    (Il2CppObject *)data->fields.name,
                                                    (const MethodInfo_386C35C *)Method_System_Collections_Generic_List_string__Remove__);
  if ( v4->fields.calledCallbackFunc )
    return;
  remainNameList = v4->fields.remainNameList;
  if ( !remainNameList )
LABEL_12:
    sub_1C942F0(this, data);
  if ( remainNameList->fields._size <= 0 )
  {
    this = (AssetManager___c__DisplayClass173_0_o *)v4->fields.__4__this;
    if ( this )
    {
      AssetManager__AddLoadWaitStatus((AssetManager_o *)this, v4->fields.callbackFunc, v5);
      this = (AssetManager___c__DisplayClass173_0_o *)v4->fields.__4__this;
      if ( this )
      {
        HIDWORD(this[1].fields.__9__0) = v4->fields.loadParallelMax;
        v4->fields.calledCallbackFunc = 1;
        AssetManager__LoadStart((AssetManager_o *)this, (const MethodInfo *)data);
        return;
      }
    }
    goto LABEL_12;
  }
}


void AssetManager___c__DisplayClass190_0___ctor(AssetManager___c__DisplayClass190_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool AssetManager___c__DisplayClass190_0___AssetObjectListSetupAndCall_b__0(
        AssetManager___c__DisplayClass190_0_o *this,
        const MethodInfo *method)
{
  struct AssetData_o *asset; // x8

  asset = this->fields.asset;
  if ( !asset )
    sub_1C942F0(this, method);
  return asset->fields.objectList != 0;
}


void AssetManager___c__DisplayClass191_0___ctor(AssetManager___c__DisplayClass191_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool AssetManager___c__DisplayClass191_0___AssetObjectListSetupAndCall_b__0(
        AssetManager___c__DisplayClass191_0_o *this,
        const MethodInfo *method)
{
  struct AssetData_array *assetList; // x9
  int max_length; // w8
  int v4; // w10
  AssetData_o *v5; // x11

  assetList = this->fields.assetList;
  if ( !assetList )
    goto LABEL_12;
  max_length = assetList->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( max_length == v4 )
        sub_1C942F8(this);
      v5 = assetList->m_Items[v4];
      if ( !v5 )
        break;
      if ( v5->fields.objectList )
      {
        if ( max_length != ++v4 )
          continue;
      }
      return v4 >= max_length;
    }
LABEL_12:
    sub_1C942F0(this, method);
  }
  v4 = 0;
  return v4 >= max_length;
}


void AssetManager__coUnloadUnusedAssets_d__142___ctor(
        AssetManager__coUnloadUnusedAssets_d__142_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool AssetManager__coUnloadUnusedAssets_d__142__MoveNext(
        AssetManager__coUnloadUnusedAssets_d__142_o *this,
        const MethodInfo *method)
{
  AssetManager__coUnloadUnusedAssets_d__142_o *v2; // x19
  int32_t _1__state; // w8
  struct AssetManager_o *_4__this; // x20
  UnityEngine_WaitForEndOfFrame_o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  AssetManager_c *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  Il2CppObject *wait_5__2; // x1
  GrandQuestFolderBoardItem_o *v20; // x19
  bool v21; // w21
  UnityEngine_AsyncOperation_o *v22; // x0
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct AssetManager_ResourceUnloadEventHandler_o *v30; // x8
  GrandQuestFolderBoardItem_o *p_unloadCallbacks; // x20
  struct AssetManager_ResourceUnloadEventHandler_o *unloadCallbacks; // t1
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7

  v2 = this;
  if ( (byte_4D2B84A & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    this = (AssetManager__coUnloadUnusedAssets_d__142_o *)sub_1C94098(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4D2B84A = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_19;
    unloadCallbacks = _4__this->fields.unloadCallbacks;
    p_unloadCallbacks = (GrandQuestFolderBoardItem_o *)&_4__this->fields.unloadCallbacks;
    v30 = unloadCallbacks;
    *(_WORD *)((char *)&p_unloadCallbacks[-1].fields._IconId_k__BackingField + 3) = 0;
    if ( unloadCallbacks )
    {
      ((void (__fastcall *)(intptr_t, intptr_t))v30->fields.invoke_impl)(v30->fields.method_code, v30->fields.method);
      p_unloadCallbacks->klass = 0;
      sub_1C9403C(p_unloadCallbacks, 0, v33, v34, v35, v36, v37, v38);
    }
    return 0;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v2->fields.__1__state = -1;
      v5 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C942E4(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v5, 0);
      v2->fields._wait_5__2 = v5;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v2->fields._wait_5__2, (int32_t)v5, v6, v7, v8, v9, v10, v11);
      goto LABEL_8;
    }
    return 0;
  }
  v2->fields.__1__state = -1;
LABEL_8:
  v12 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  this = (AssetManager__coUnloadUnusedAssets_d__142_o *)AssetManager__LoadIsBusy((const MethodInfo *)v12);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( _4__this )
    {
      v21 = 1;
      _4__this->fields.inProgressUnloadUnusedAssets = 1;
      v22 = UnityEngine_Resources__UnloadUnusedAssets(0);
      v2->fields.__2__current = (Il2CppObject *)v22;
      p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
      sub_1C9403C(p__2__current, (int32_t)v22, v24, v25, v26, v27, v28, v29);
      LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 2;
      return v21;
    }
LABEL_19:
    sub_1C942F0(this, method);
  }
  wait_5__2 = (Il2CppObject *)v2->fields._wait_5__2;
  v2->fields.__2__current = wait_5__2;
  v20 = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
  sub_1C9403C(v20, (int32_t)wait_5__2, v13, v14, v15, v16, v17, v18);
  v21 = 1;
  LODWORD(v20[-1].fields._ClosedMessage_k__BackingField) = 1;
  return v21;
}


Il2CppObject *AssetManager__coUnloadUnusedAssets_d__142__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AssetManager__coUnloadUnusedAssets_d__142_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn AssetManager__coUnloadUnusedAssets_d__142__System_Collections_IEnumerator_Reset(
        AssetManager__coUnloadUnusedAssets_d__142_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_AssetManager__coUnloadUnusedAssets_d__142_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *AssetManager__coUnloadUnusedAssets_d__142__System_Collections_IEnumerator_get_Current(
        AssetManager__coUnloadUnusedAssets_d__142_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void AssetManager__coUnloadUnusedAssets_d__142__System_IDisposable_Dispose(
        AssetManager__coUnloadUnusedAssets_d__142_o *this,
        const MethodInfo *method)
{
  ;
}