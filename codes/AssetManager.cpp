void __fastcall AssetManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t v11; // w1
  struct AssetManager_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  struct AssetManager_StaticFields *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  struct AssetManager_StaticFields *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  struct AssetManager_StaticFields *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  struct AssetManager_StaticFields *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w1
  struct AssetManager_StaticFields *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w1
  struct AssetManager_StaticFields *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  int32_t v39; // w1
  struct AssetManager_StaticFields *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3

  if ( (byte_4B1B54D & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, v1);
    sub_1BCAFF8(&StringLiteral_2360/*"Asset"*/, v4);
    sub_1BCAFF8(&StringLiteral_2373/*"AssetStorageBack.txt"*/, v5);
    sub_1BCAFF8(&StringLiteral_22166/*"offline"*/, v6);
    sub_1BCAFF8(&StringLiteral_2372/*"AssetStorage.txt"*/, v7);
    sub_1BCAFF8(&StringLiteral_2374/*"AssetStorageCreate.txt"*/, v8);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v9);
    sub_1BCAFF8(&StringLiteral_22233/*"online"*/, v10);
    byte_4B1B54D = 1;
  }
  AssetManager_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_2360/*"Asset"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)AssetManager_TypeInfo->static_fields, StringLiteral_2360/*"Asset"*/, v2, v3);
  v11 = StringLiteral_22166/*"offline"*/;
  static_fields = AssetManager_TypeInfo->static_fields;
  static_fields->SAVE_DATA_OFFLINE = (struct System_String_o *)StringLiteral_22166/*"offline"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->SAVE_DATA_OFFLINE, v11, v13, v14);
  v15 = StringLiteral_22233/*"online"*/;
  v16 = AssetManager_TypeInfo->static_fields;
  v16->SAVE_DATA_ONLINE = (struct System_String_o *)StringLiteral_22233/*"online"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v16->SAVE_DATA_ONLINE, v15, v17, v18);
  v19 = StringLiteral_2372/*"AssetStorage.txt"*/;
  v20 = AssetManager_TypeInfo->static_fields;
  v20->configFileName = (struct System_String_o *)StringLiteral_2372/*"AssetStorage.txt"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v20->configFileName, v19, v21, v22);
  v23 = StringLiteral_2374/*"AssetStorageCreate.txt"*/;
  v24 = AssetManager_TypeInfo->static_fields;
  v24->createConfigFileName = (struct System_String_o *)StringLiteral_2374/*"AssetStorageCreate.txt"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v24->createConfigFileName, v23, v25, v26);
  v27 = StringLiteral_2373/*"AssetStorageBack.txt"*/;
  v28 = AssetManager_TypeInfo->static_fields;
  v28->backConfigFileName = (struct System_String_o *)StringLiteral_2373/*"AssetStorageBack.txt"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v28->backConfigFileName, v27, v29, v30);
  v31 = (int)StringLiteral_1/*""*/;
  v32 = AssetManager_TypeInfo->static_fields;
  v32->assetBundleMasterVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v32->assetBundleMasterVersion, v31, v33, v34);
  v35 = (int)StringLiteral_1/*""*/;
  v36 = AssetManager_TypeInfo->static_fields;
  v36->assetBundleDateVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v36->assetBundleDateVersion, v35, v37, v38);
  v39 = (int)StringLiteral_1/*""*/;
  v40 = AssetManager_TypeInfo->static_fields;
  v40->assetBundleBuildVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v40->assetBundleBuildVersion, v39, v41, v42);
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
  System_Collections_Generic_Dictionary_object__object__o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_Dictionary_object__object__o *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_Dictionary_object__object__o *v16; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_object__o *v22; // x20
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_Queue_T__o *v25; // x20
  int32_t v26; // w2
  const MethodInfo *v27; // x3

  if ( (byte_4B1B54C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__, method);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_string__AssetData__TypeInfo, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_AssetLoader___ctor__, v4);
    sub_1BCAFF8(&System_Collections_Generic_List_AssetLoader__TypeInfo, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__, v6);
    sub_1BCAFF8(&System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo, v7);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager___ctor__, v8);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v9);
    byte_4B1B54C = 1;
  }
  *(_WORD *)&this->fields._DispLog = 257;
  this->fields.isInitEnd = 1;
  v10 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCB244(System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v10,
    (const MethodInfo_33853C8 *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.assetBundleDic = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)v10;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.assetBundleDic, (int32_t)v10, v11, v12);
  v13 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCB244(System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v13,
    (const MethodInfo_33853C8 *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.assetBundleReleaseDic = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)v13;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.assetBundleReleaseDic, (int32_t)v13, v14, v15);
  v16 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCB244(System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v16,
    (const MethodInfo_33853C8 *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.assetResourceDic = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)v16;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.assetResourceDic, (int32_t)v16, v17, v18);
  v19 = (int)StringLiteral_1/*""*/;
  this->fields.requestConfigWriteData = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.requestConfigWriteData, v19, v20, v21);
  this->fields.requestWriteCounter = -1.0;
  v22 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_AssetLoader__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_AssetLoader___ctor__);
  this->fields.processingAssetLoaderList = (struct System_Collections_Generic_List_AssetLoader__o *)v22;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.processingAssetLoaderList, (int32_t)v22, v23, v24);
  this->fields.loadParallelMax = 1;
  v25 = (System_Collections_Generic_Queue_T__o *)sub_1BCB244(System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v25,
    (const MethodInfo_382E240 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
  this->fields.downLoadWaitList = (struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)v25;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.downLoadWaitList, (int32_t)v25, v26, v27);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_38F8EF0 *)Method_SingletonMonoBehaviour_AssetManager___ctor__);
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
  System_Collections_Generic_List_object__o *processingAssetLoaderList; // x0
  int32_t v15; // w23
  AssetLoader_o *v16; // x24
  AssetData_o *syncRoot; // x0
  const MethodInfo *v18; // x2
  bool v19; // w22
  Il2CppObject *Current; // x0
  __int64 v21; // x1
  AssetManager_LoadWaitStatus_o *v22; // x23
  AssetData_o *klass; // x0
  const MethodInfo *v24; // x2
  int v25; // w19
  System_Collections_Generic_Queue_Enumerator_T__o v27; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4B1B536 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__,
      *(_QWORD *)&type);
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__, v13);
    byte_4B1B536 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
    goto LABEL_10;
  v15 = 0;
  while ( v15 < processingAssetLoaderList->fields._size )
  {
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               processingAssetLoaderList,
                                                                               v15,
                                                                               (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    if ( !processingAssetLoaderList )
      goto LABEL_10;
    v16 = (AssetLoader_o *)processingAssetLoaderList;
    syncRoot = (AssetData_o *)processingAssetLoaderList->fields._syncRoot;
    if ( syncRoot && AssetData__IsSame_39695164(syncRoot, type, name, 0LL) )
    {
      if ( callbackFunc )
        AssetLoader__add_endCallback2(v16, callbackFunc, v18);
      return 1;
    }
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
    ++v15;
    if ( !processingAssetLoaderList )
      goto LABEL_10;
  }
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.downLoadWaitList;
  if ( !processingAssetLoaderList )
LABEL_10:
    sub_1BCB254(processingAssetLoaderList, *(_QWORD *)&type);
  System_Collections_Generic_Queue_object___GetEnumerator(
    &v27,
    (System_Collections_Generic_Queue_T__o *)processingAssetLoaderList,
    (const MethodInfo_382E8C0 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  while ( 1 )
  {
    v19 = System_Collections_Generic_Queue_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_344F928 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    if ( !v19 )
      break;
    Current = System_Collections_Generic_Queue_Enumerator_object___get_Current(
                &v27,
                (const MethodInfo_344FA18 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    v22 = (AssetManager_LoadWaitStatus_o *)Current;
    if ( !Current )
      sub_1BCB254(0LL, v21);
    klass = (AssetData_o *)Current[1].klass;
    if ( klass && AssetData__IsSame_39695164(klass, type, name, 0LL) )
    {
      AssetManager_LoadWaitStatus__AddCallback(v22, callbackFunc, v24);
      v25 = 7;
      goto LABEL_19;
    }
  }
  v25 = 8;
LABEL_19:
  System_Collections_Generic_Queue_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_344F918 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  return v19 && v25 == 7;
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
  System_Collections_Generic_List_object__o *processingAssetLoaderList; // x0
  int32_t v15; // w23
  AssetLoader_o *v16; // x24
  AssetData_o *syncRoot; // x0
  bool v18; // w22
  Il2CppObject *Current; // x0
  __int64 v20; // x1
  AssetManager_LoadWaitStatus_o *v21; // x23
  AssetData_o *klass; // x0
  __int64 v23; // x1
  AssetData_o *data; // x0
  const MethodInfo *v25; // x2
  int v26; // w19
  const MethodInfo *v28; // x2
  System_Collections_Generic_Queue_Enumerator_T__o v29; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Queue_Enumerator_T__o v30; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B1B535 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__,
      *(_QWORD *)&type);
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__, v13);
    byte_4B1B535 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
    goto LABEL_10;
  v15 = 0;
  while ( v15 < processingAssetLoaderList->fields._size )
  {
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               processingAssetLoaderList,
                                                                               v15,
                                                                               (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    if ( !processingAssetLoaderList )
      goto LABEL_10;
    v16 = (AssetLoader_o *)processingAssetLoaderList;
    syncRoot = (AssetData_o *)processingAssetLoaderList->fields._syncRoot;
    if ( syncRoot && AssetData__IsSame_39695164(syncRoot, type, name, 0LL) )
    {
      processingAssetLoaderList = (System_Collections_Generic_List_object__o *)v16->fields.data;
      if ( processingAssetLoaderList )
      {
        AssetData__AddEntry((AssetData_o *)processingAssetLoaderList, 0LL);
        if ( callbackFunc )
          AssetLoader__add_endCallback2(v16, callbackFunc, v28);
        return 1;
      }
LABEL_10:
      sub_1BCB254(processingAssetLoaderList, *(_QWORD *)&type);
    }
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
    ++v15;
    if ( !processingAssetLoaderList )
      goto LABEL_10;
  }
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.downLoadWaitList;
  if ( !processingAssetLoaderList )
    goto LABEL_10;
  System_Collections_Generic_Queue_object___GetEnumerator(
    &v29,
    (System_Collections_Generic_Queue_T__o *)processingAssetLoaderList,
    (const MethodInfo_382E8C0 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  v30 = v29;
  do
  {
    v18 = System_Collections_Generic_Queue_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_344F928 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    if ( !v18 )
    {
      v26 = 8;
      goto LABEL_20;
    }
    Current = System_Collections_Generic_Queue_Enumerator_object___get_Current(
                &v30,
                (const MethodInfo_344FA18 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    v21 = (AssetManager_LoadWaitStatus_o *)Current;
    if ( !Current )
      sub_1BCB254(0LL, v20);
    klass = (AssetData_o *)Current[1].klass;
  }
  while ( !klass || !AssetData__IsSame_39695164(klass, type, name, 0LL) );
  data = v21->fields.data;
  if ( !data )
    sub_1BCB254(0LL, v23);
  AssetData__AddEntry(data, 0LL);
  AssetManager_LoadWaitStatus__AddCallback(v21, callbackFunc, v25);
  v26 = 7;
LABEL_20:
  System_Collections_Generic_Queue_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_344F918 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  return v18 && v26 == 7;
}


void __fastcall AssetManager__AddLoadWaitStatus(
        AssetManager_o *this,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x1
  System_Collections_Generic_Queue_T__o *downLoadWaitList; // x0

  if ( (byte_4B1B538 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_LoadWaitStatus_TypeInfo, callbackFunc);
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__, v5);
    byte_4B1B538 = 1;
  }
  v6 = sub_1BCB244(AssetManager_LoadWaitStatus_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_QWORD *)(v6 + 24) = callbackFunc;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v6 + 24), (int32_t)callbackFunc, v7, v8);
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
    sub_1BCB254(0LL, v9);
  System_Collections_Generic_Queue_object___Enqueue(
    downLoadWaitList,
    (Il2CppObject *)v6,
    (const MethodInfo_382E808 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
}


void __fastcall AssetManager__AddLoadWaitStatus_39735032(
        AssetManager_o *this,
        AssetData_o *info,
        const MethodInfo *method)
{
  AssetManager_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v4 = this;
  if ( (byte_4B1B539 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_LoadWaitStatus_TypeInfo, info);
    this = (AssetManager_o *)sub_1BCAFF8(
                               &Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__,
                               v5);
    byte_4B1B539 = 1;
  }
  if ( !info
    || (v4->fields.downloadSize += info->fields.size,
        v6 = sub_1BCB244(AssetManager_LoadWaitStatus_TypeInfo),
        System_Object___ctor((Il2CppObject *)v6, 0LL),
        *(_QWORD *)(v6 + 16) = info,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v6 + 16), (int32_t)info, v7, v8),
        (this = (AssetManager_o *)v4->fields.downLoadWaitList) == 0LL) )
  {
    sub_1BCB254(this, info);
  }
  System_Collections_Generic_Queue_object___Enqueue(
    (System_Collections_Generic_Queue_T__o *)this,
    (Il2CppObject *)v6,
    (const MethodInfo_382E808 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
}


void __fastcall AssetManager__AddLoadWaitStatus_39746512(
        AssetManager_o *this,
        AssetData_o *info,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        System_String_array *resourceNames,
        const MethodInfo *method)
{
  AssetManager_o *v8; // x21
  __int64 v9; // x1
  AssetManager_LoadWaitStatus_o *v10; // x23
  const MethodInfo *v11; // x4

  v8 = this;
  if ( (byte_4B1B53A & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_LoadWaitStatus_TypeInfo, info);
    this = (AssetManager_o *)sub_1BCAFF8(
                               &Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__,
                               v9);
    byte_4B1B53A = 1;
  }
  if ( !info
    || (v8->fields.downloadSize += info->fields.size,
        v10 = (AssetManager_LoadWaitStatus_o *)sub_1BCB244(AssetManager_LoadWaitStatus_TypeInfo),
        AssetManager_LoadWaitStatus___ctor_39746684(v10, info, callbackFunc, resourceNames, v11),
        (this = (AssetManager_o *)v8->fields.downLoadWaitList) == 0LL) )
  {
    sub_1BCB254(this, info);
  }
  System_Collections_Generic_Queue_object___Enqueue(
    (System_Collections_Generic_Queue_T__o *)this,
    (Il2CppObject *)v10,
    (const MethodInfo_382E808 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
}


System_Collections_IEnumerator_o *__fastcall AssetManager__AssetObjectListSetupAndCall(
        AssetData_o *asset,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B1B549 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager__AssetObjectListSetupAndCall_d__189_TypeInfo, action);
    byte_4B1B549 = 1;
  }
  v5 = sub_1BCB244(AssetManager__AssetObjectListSetupAndCall_d__189_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = asset;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v5 + 32), (int32_t)asset, v6, v7);
  *(_QWORD *)(v5 + 40) = action;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v5 + 40), (int32_t)action, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall AssetManager__AssetObjectListSetupAndCall_39748528(
        AssetData_array *assetList,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B1B54A & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager__AssetObjectListSetupAndCall_d__190_TypeInfo, action);
    byte_4B1B54A = 1;
  }
  v5 = sub_1BCB244(AssetManager__AssetObjectListSetupAndCall_d__190_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = assetList;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v5 + 32), (int32_t)assetList, v6, v7);
  *(_QWORD *)(v5 + 40) = action;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v5 + 40), (int32_t)action, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall AssetManager__CancelAndReleaseDownloadAssetStorage(
        AssetManager_o *this,
        System_String_o *name,
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
  System_Collections_Generic_Queue_T__o *v14; // x21
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x3
  void *downLoadWaitList; // x0
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o **p_downLoadWaitList; // x22
  char v20; // w27
  __int64 v21; // x24
  Il2CppObject *v22; // x23
  int32_t v23; // w23
  AssetData_o *v24; // x0
  AssetManager___c_c *v25; // x8
  AssetLoader_o *v26; // x24
  AssetLoader_LoadEndDataHandler_o *_9__129_0; // x25
  Il2CppObject *v28; // x26
  const MethodInfo *v29; // x3
  struct AssetManager___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3

  if ( (byte_4B1B52C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, name);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v5);
    sub_1BCAFF8(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__, v10);
    sub_1BCAFF8(&System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo, v11);
    sub_1BCAFF8(&Method_AssetManager___c__CancelAndReleaseDownloadAssetStorage_b__129_0__, v12);
    sub_1BCAFF8(&AssetManager___c_TypeInfo, v13);
    byte_4B1B52C = 1;
  }
  v14 = (System_Collections_Generic_Queue_T__o *)sub_1BCB244(System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v14,
    (const MethodInfo_382E240 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
  p_downLoadWaitList = &this->fields.downLoadWaitList;
  downLoadWaitList = this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
    goto LABEL_33;
  v20 = 0;
  while ( *((int *)downLoadWaitList + 8) > 0 )
  {
    downLoadWaitList = System_Collections_Generic_Queue_object___Dequeue(
                         (System_Collections_Generic_Queue_T__o *)downLoadWaitList,
                         (const MethodInfo_382E998 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
    if ( !downLoadWaitList )
      goto LABEL_33;
    v21 = *((_QWORD *)downLoadWaitList + 2);
    v22 = (Il2CppObject *)downLoadWaitList;
    if ( v21
      && (downLoadWaitList = (void *)AssetData__IsSame(*((AssetData_o **)downLoadWaitList + 2), name, 0LL),
          ((unsigned __int8)downLoadWaitList & 1) != 0) )
    {
      downLoadWaitList = this->fields.downLoadWaitList;
      v20 = 1;
      this->fields.downloadSize -= *(int *)(v21 + 48);
      if ( !downLoadWaitList )
        goto LABEL_33;
    }
    else
    {
      if ( !v14 )
        goto LABEL_33;
      System_Collections_Generic_Queue_object___Enqueue(
        v14,
        v22,
        (const MethodInfo_382E808 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
      downLoadWaitList = *p_downLoadWaitList;
      if ( !*p_downLoadWaitList )
        goto LABEL_33;
    }
  }
  if ( (v20 & 1) == 0 )
  {
    downLoadWaitList = this->fields.processingAssetLoaderList;
    if ( downLoadWaitList )
    {
      v23 = 0;
      while ( v23 < *((_DWORD *)downLoadWaitList + 6) )
      {
        downLoadWaitList = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)downLoadWaitList,
                             v23,
                             (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
        if ( !downLoadWaitList )
          goto LABEL_33;
        v24 = (AssetData_o *)*((_QWORD *)downLoadWaitList + 4);
        if ( v24 && AssetData__IsSame_39695164(v24, 0, name, 0LL) )
        {
          downLoadWaitList = this->fields.processingAssetLoaderList;
          if ( !downLoadWaitList )
            goto LABEL_33;
          downLoadWaitList = System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)downLoadWaitList,
                               v23,
                               (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
          v25 = AssetManager___c_TypeInfo;
          v26 = (AssetLoader_o *)downLoadWaitList;
          if ( !AssetManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager___c_TypeInfo);
            v25 = AssetManager___c_TypeInfo;
          }
          _9__129_0 = v25->static_fields->__9__129_0;
          if ( !_9__129_0 )
          {
            if ( !v25->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v25);
              v25 = AssetManager___c_TypeInfo;
            }
            v28 = (Il2CppObject *)v25->static_fields->__9;
            _9__129_0 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCB244(AssetLoader_LoadEndDataHandler_TypeInfo);
            AssetLoader_LoadEndDataHandler___ctor(
              _9__129_0,
              v28,
              Method_AssetManager___c__CancelAndReleaseDownloadAssetStorage_b__129_0__,
              v29);
            static_fields = AssetManager___c_TypeInfo->static_fields;
            static_fields->__9__129_0 = _9__129_0;
            sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__129_0, (int32_t)_9__129_0, v31, v32);
          }
          if ( !v26 )
            goto LABEL_33;
          if ( _9__129_0 )
            AssetLoader__add_endCallback2(v26, _9__129_0, v16);
        }
        downLoadWaitList = this->fields.processingAssetLoaderList;
        ++v23;
        if ( !downLoadWaitList )
          goto LABEL_33;
      }
      goto LABEL_15;
    }
LABEL_33:
    sub_1BCB254(downLoadWaitList, v15);
  }
LABEL_15:
  this->fields.downLoadWaitList = (struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)v14;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.downLoadWaitList, (int32_t)v14, (int32_t)v16, v17);
  this->fields.isCancelDownload = 1;
}


void __fastcall AssetManager__CancelAndReleaseDownloadAssetStorages(
        AssetManager_o *this,
        System_String_array *names,
        const MethodInfo *method)
{
  __int64 v3; // x8
  unsigned __int64 v6; // x21

  if ( !names )
    sub_1BCB254(this, 0LL);
  v3 = *(_QWORD *)&names->max_length;
  if ( (int)v3 >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v3 )
        sub_1BCB25C(this, names, method);
      AssetManager__CancelAndReleaseDownloadAssetStorage(this, names->m_Items[v6], method);
      LODWORD(v3) = names->max_length;
      ++v6;
    }
    while ( (__int64)v6 < (int)v3 );
  }
}


void __fastcall AssetManager__CancelDownloadAssetStorage(AssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Queue_T__o *v7; // x20
  System_Collections_Generic_Queue_T__o *v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_Queue_T__o *downLoadWaitList; // x0
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o **p_downLoadWaitList; // x21
  struct System_Object_array *array; // x8

  if ( (byte_4B1B52B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__, v5);
    sub_1BCAFF8(&System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo, v6);
    byte_4B1B52B = 1;
  }
  v7 = (System_Collections_Generic_Queue_T__o *)sub_1BCB244(System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v7,
    (const MethodInfo_382E240 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
  p_downLoadWaitList = &this->fields.downLoadWaitList;
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
LABEL_12:
    sub_1BCB254(downLoadWaitList, v8);
  while ( downLoadWaitList->fields._size > 0 )
  {
    downLoadWaitList = (System_Collections_Generic_Queue_T__o *)System_Collections_Generic_Queue_object___Dequeue(
                                                                  downLoadWaitList,
                                                                  (const MethodInfo_382E998 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
    if ( !downLoadWaitList )
      goto LABEL_12;
    array = downLoadWaitList->fields._array;
    v8 = downLoadWaitList;
    if ( array && SHIDWORD(array->m_Items[6]) <= 0 )
    {
      this->fields.downloadSize -= SLODWORD(array->m_Items[2]);
    }
    else
    {
      if ( !v7 )
        goto LABEL_12;
      System_Collections_Generic_Queue_object___Enqueue(
        v7,
        (Il2CppObject *)downLoadWaitList,
        (const MethodInfo_382E808 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
    }
    downLoadWaitList = (System_Collections_Generic_Queue_T__o *)*p_downLoadWaitList;
    if ( !*p_downLoadWaitList )
      goto LABEL_12;
  }
  this->fields.downLoadWaitList = (struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)v7;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.downLoadWaitList, (int32_t)v7, v9, v10);
  this->fields.isCancelDownload = 1;
}


void __fastcall AssetManager__CancelDownloadAssetStorageAll(AssetManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *downLoadWaitList; // x0

  if ( (byte_4B1B52E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__, method);
    byte_4B1B52E = 1;
  }
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
  this->fields.downloadSize = 0LL;
  if ( !downLoadWaitList )
    sub_1BCB254(0LL, method);
  System_Collections_Generic_Queue_object___Clear(
    downLoadWaitList,
    (const MethodInfo_382E4C8 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__);
}


bool __fastcall AssetManager__CheckDateVersion(System_String_o *dateVersion, const MethodInfo *method)
{
  AssetManager_c *v3; // x0
  System_String_o *assetBundleDateVersion; // x0

  if ( (byte_4B1B4F8 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, method);
    byte_4B1B4F8 = 1;
  }
  v3 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v3 = AssetManager_TypeInfo;
  }
  assetBundleDateVersion = v3->static_fields->assetBundleDateVersion;
  if ( !assetBundleDateVersion )
    sub_1BCB254(0LL, method);
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
  System_Collections_Generic_List_object__o *processingAssetLoaderList; // x0
  int32_t v13; // w22
  AssetData_o *syncRoot; // x0
  bool v15; // w21
  Il2CppObject *Current; // x0
  __int64 v17; // x1
  AssetData_o *klass; // x0
  int v19; // w19
  System_Collections_Generic_Queue_Enumerator_T__o v21; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B1B537 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__,
      *(_QWORD *)&type);
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__, v11);
    byte_4B1B537 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
    goto LABEL_10;
  v13 = 0;
  while ( v13 < processingAssetLoaderList->fields._size )
  {
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               processingAssetLoaderList,
                                                                               v13,
                                                                               (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    if ( !processingAssetLoaderList )
      goto LABEL_10;
    syncRoot = (AssetData_o *)processingAssetLoaderList->fields._syncRoot;
    if ( syncRoot && AssetData__IsSame_39695164(syncRoot, type, name, 0LL) )
      return 1;
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
    ++v13;
    if ( !processingAssetLoaderList )
      goto LABEL_10;
  }
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.downLoadWaitList;
  if ( !processingAssetLoaderList )
LABEL_10:
    sub_1BCB254(processingAssetLoaderList, *(_QWORD *)&type);
  System_Collections_Generic_Queue_object___GetEnumerator(
    &v21,
    (System_Collections_Generic_Queue_T__o *)processingAssetLoaderList,
    (const MethodInfo_382E8C0 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  while ( 1 )
  {
    v15 = System_Collections_Generic_Queue_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_344F928 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    if ( !v15 )
      break;
    Current = System_Collections_Generic_Queue_Enumerator_object___get_Current(
                &v21,
                (const MethodInfo_344FA18 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    if ( !Current )
      sub_1BCB254(0LL, v17);
    klass = (AssetData_o *)Current[1].klass;
    if ( klass && AssetData__IsSame_39695164(klass, type, name, 0LL) )
    {
      v19 = 7;
      goto LABEL_19;
    }
  }
  v19 = 8;
LABEL_19:
  System_Collections_Generic_Queue_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_344F918 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  return v15 && v19 == 7;
}


bool __fastcall AssetManager__CheckVersion(
        System_String_o *masterVersion,
        System_String_o *dateVersion,
        const MethodInfo *method)
{
  AssetManager_c *v5; // x0
  AssetManager_c *v6; // x0

  if ( (byte_4B1B4F7 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, dateVersion);
    byte_4B1B4F7 = 1;
  }
  v5 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v5 = AssetManager_TypeInfo;
  }
  if ( !System_String__op_Equality(v5->static_fields->assetBundleMasterVersion, masterVersion, 0LL) )
    return 0;
  v6 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
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
  System_Collections_Generic_Dictionary_object__object__o *assetBundleDic; // x0
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *currentValue; // x21
  Il2CppClass *klass; // x0
  const MethodInfo *v14; // x2
  System_String_o *Path; // x23
  const MethodInfo *v16; // x2
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B1B54B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, method);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v3);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v4);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v6);
    sub_1BCAFF8(&StringLiteral_12472/*"SYSTEM"*/, v7);
    byte_4B1B54B = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.assetBundleDic, 0LL) )
  {
    assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
    if ( !assetBundleDic
      || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                        assetBundleDic,
                                                                                        (const MethodInfo_3385BA8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
    {
      sub_1BCB254(assetBundleDic, v8);
    }
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v17,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
      (const MethodInfo_39EC574 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    v18 = v17;
    while ( 1 )
    {
      v10 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
              &v18,
              (const MethodInfo_3481F34 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
      if ( !v10 )
        break;
      currentValue = v18.fields._currentValue;
      if ( !v18.fields._currentValue )
        sub_1BCB254(v10, v11);
      klass = v18.fields._currentValue[2].klass;
      if ( !klass )
        sub_1BCB254(0LL, v11);
      if ( !System_String__Equals_62485792((System_String_o *)klass, (System_String_o *)StringLiteral_12472/*"SYSTEM"*/, 5, 0LL) )
      {
        AssetManager__ReleaseReservation(this, (AssetData_o *)currentValue, v14);
        Path = AssetData__get_Path((AssetData_o *)currentValue, 0LL);
        if ( System_IO_File__Exists(Path, 0LL) )
        {
          System_IO_File__Delete(Path, 0LL);
          if ( !System_IO_File__Exists(Path, 0LL) )
            AssetData__ResetVersion((AssetData_o *)currentValue, 0LL);
        }
      }
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
      &v18,
      (const MethodInfo_3481F30 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    AssetManager__ConfigWriteRequest(this, 1, v16);
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
  System_Collections_Generic_Dictionary_object__object__o *assetBundleDic; // x0
  int32_t Count; // w22
  System_Text_StringBuilder_o *v18; // x21
  AssetManager_c *v19; // x0
  AssetManager_c *v20; // x0
  AssetManager_c *v21; // x0
  _BOOL8 v22; // x0
  __int64 v23; // x1
  Il2CppObject *currentValue; // x24
  Il2CppObject *requestConfigWriteData; // x22
  System_String_o *v26; // x21
  System_Text_Encoding_o *UTF8; // x0
  __int64 v28; // x1
  System_Byte_array *v29; // x24
  System_String_o *v30; // x1
  System_String_o *v31; // x21
  struct System_String_o *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v35; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v36; // [xsp+20h] [xbp-80h] BYREF
  uint32_t v37; // [xsp+48h] [xbp-58h] BYREF
  bool lockTaken; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_4B1B531 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, isFast);
    sub_1BCAFF8(&CatAndMouseGame_TypeInfo, v5);
    sub_1BCAFF8(&Crc32_TypeInfo, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, v8);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v9);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v10);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v11);
    sub_1BCAFF8(&System_Text_StringBuilder_TypeInfo, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v13);
    sub_1BCAFF8(&StringLiteral_43/*"\n"*/, v14);
    sub_1BCAFF8(&StringLiteral_25039/*"~"*/, v15);
    byte_4B1B531 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  lockTaken = 0;
  v37 = 0;
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic )
    goto LABEL_35;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         assetBundleDic,
         (const MethodInfo_3385A48 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) < 1 )
    return;
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic )
    goto LABEL_35;
  Count = System_Collections_Generic_Dictionary_object__object___get_Count(
            assetBundleDic,
            (const MethodInfo_3385A48 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__);
  v18 = (System_Text_StringBuilder_o *)sub_1BCB244(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_62527720(v18, 60 * Count, 0LL);
  if ( !v18 )
    goto LABEL_35;
  System_Text_StringBuilder__Append_62536696(v18, 0x40u, 0LL);
  v19 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v19 = AssetManager_TypeInfo;
  }
  System_Text_StringBuilder__Append_62534368(v18, v19->static_fields->assetBundleMasterVersion, 0LL);
  if ( !System_String__IsNullOrEmpty(AssetManager_TypeInfo->static_fields->assetBundleDateVersion, 0LL) )
  {
    System_Text_StringBuilder__Append_62536696(v18, 0x2Cu, 0LL);
    v20 = AssetManager_TypeInfo;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      v20 = AssetManager_TypeInfo;
    }
    System_Text_StringBuilder__Append_62534368(v18, v20->static_fields->assetBundleDateVersion, 0LL);
    if ( !System_String__IsNullOrEmpty(AssetManager_TypeInfo->static_fields->assetBundleBuildVersion, 0LL) )
    {
      System_Text_StringBuilder__Append_62536696(v18, 0x2Cu, 0LL);
      v21 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v21 = AssetManager_TypeInfo;
      }
      System_Text_StringBuilder__Append_62534368(v18, v21->static_fields->assetBundleBuildVersion, 0LL);
    }
  }
  System_Text_StringBuilder__Append_62536696(v18, 0xAu, 0LL);
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      assetBundleDic,
                                                                                      (const MethodInfo_3385BA8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
LABEL_35:
    sub_1BCB254(assetBundleDic, isFast);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v35,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_39EC574 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v36 = v35;
  while ( 1 )
  {
    v22 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v36,
            (const MethodInfo_3481F34 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v22 )
      break;
    currentValue = v36.fields._currentValue;
    if ( !v36.fields._currentValue )
      sub_1BCB254(v22, v23);
    System_Text_StringBuilder__Append_62536864(v18, (int32_t)v36.fields._currentValue[2].monitor, 0LL);
    System_Text_StringBuilder__Append_62536696(v18, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_62534368(v18, (System_String_o *)currentValue[2].klass, 0LL);
    System_Text_StringBuilder__Append_62536696(v18, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_62536864(v18, (int32_t)currentValue[3].klass, 0LL);
    System_Text_StringBuilder__Append_62536696(v18, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_62537040(v18, HIDWORD(currentValue[3].klass), 0LL);
    System_Text_StringBuilder__Append_62536696(v18, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_62534368(v18, (System_String_o *)currentValue[1].monitor, 0LL);
    System_Text_StringBuilder__Append_62534368(v18, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v36,
    (const MethodInfo_3481F30 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  requestConfigWriteData = (Il2CppObject *)this->fields.requestConfigWriteData;
  lockTaken = 0;
  System_Threading_Monitor__Enter_64378436(requestConfigWriteData, &lockTaken, 0LL);
  v26 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v18->klass->vtable._3_ToString.method)(
                             v18,
                             v18->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_1BCB254(0LL, v28);
  v29 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                               UTF8,
                               v26,
                               UTF8->klass->vtable._19_GetBytes.methodPtr);
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  v37 = Crc32__Compute(v29, 0LL);
  v30 = System_UInt32__ToString((uint32_t)&v37, 0LL);
  v31 = System_String__Concat_62490676(
          (System_String_o *)StringLiteral_25039/*"~"*/,
          v30,
          (System_String_o *)StringLiteral_43/*"\n"*/,
          v26,
          0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v32 = CatAndMouseGame__CatGame8(v31, 0LL);
  this->fields.requestConfigWriteData = v32;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.requestConfigWriteData, (int32_t)v32, v33, v34);
  if ( isFast )
  {
    this->fields.requestWriteCounter = 0.0;
  }
  else if ( this->fields.requestWriteCounter < 0.0 )
  {
    this->fields.requestWriteCounter = 1.0;
  }
  if ( lockTaken )
    System_Threading_Monitor__Exit(requestConfigWriteData, 0LL);
}


void __fastcall AssetManager__ConfigWriteRequestThread(AssetManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1

  AssetManager__ConfigWriteRequest(this, 0, v2);
  this->fields.writeRequestThread = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.writeRequestThread, 0, v4, v5);
  if ( this->fields.reserveWriteRequest )
    AssetManager__StartThreadConfigWriteRequest(this, v6);
}


System_String_o *__fastcall AssetManager__ConvertDownloadSizeToString(
        AssetManager_o *this,
        double size,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  const MethodInfo *v14; // x3
  System_String_o *v15; // x19
  int32_t v16; // w1
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  unsigned int i; // w21
  System_String_o format; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1B525 & 1) == 0 )
  {
    sub_1BCAFF8(&string___TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_8125/*"KB"*/, v4);
    sub_1BCAFF8(&StringLiteral_24988/*"{0}{1}"*/, v5);
    sub_1BCAFF8(&StringLiteral_9162/*"N2"*/, v6);
    sub_1BCAFF8(&StringLiteral_13241/*"TB"*/, v7);
    sub_1BCAFF8(&StringLiteral_2495/*"B"*/, v8);
    sub_1BCAFF8(&StringLiteral_8563/*"MB"*/, v9);
    sub_1BCAFF8(&StringLiteral_6869/*"GB"*/, v10);
    byte_4B1B525 = 1;
  }
  v11 = (System_String_o *)sub_1BCB0A0(string___TypeInfo, 5LL);
  if ( !v11 )
    sub_1BCB254(0LL, v12);
  v15 = v11;
  if ( !LODWORD(v11[1].klass) )
    goto LABEL_14;
  v16 = StringLiteral_2495/*"B"*/;
  v11[1].monitor = (void *)StringLiteral_2495/*"B"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v11[1].monitor, v16, v13, v14);
  if ( LODWORD(v15[1].klass) <= 1 )
    goto LABEL_14;
  v18 = StringLiteral_8125/*"KB"*/;
  v15[1].fields = (System_String_Fields)StringLiteral_8125/*"KB"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v15[1].fields, v18, v13, v17);
  if ( LODWORD(v15[1].klass) <= 2 )
    goto LABEL_14;
  v20 = StringLiteral_8563/*"MB"*/;
  v15[2].klass = (System_String_c *)StringLiteral_8563/*"MB"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v15[2], v20, v13, v19);
  if ( LODWORD(v15[1].klass) <= 3 )
    goto LABEL_14;
  v22 = StringLiteral_6869/*"GB"*/;
  v15[2].monitor = (void *)StringLiteral_6869/*"GB"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v15[2].monitor, v22, v13, v21);
  if ( LODWORD(v15[1].klass) <= 4 )
    goto LABEL_14;
  v24 = StringLiteral_13241/*"TB"*/;
  v15[2].fields = (System_String_Fields)StringLiteral_13241/*"TB"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v15[2].fields, v24, v13, v23);
  for ( i = 0; i != 4; ++i )
  {
    if ( size < 1000.0 )
      break;
    size = size / 1000.0;
    *(double *)&format.klass = size;
  }
  v11 = System_Double__ToString_63869684(1000.0, &format, (const MethodInfo *)StringLiteral_9162/*"N2"*/);
  if ( i >= LODWORD(v15[1].klass) )
LABEL_14:
    sub_1BCB25C(v11, v12, v13);
  return System_String__Format_62491716(
           (System_String_o *)StringLiteral_24988/*"{0}{1}"*/,
           (Il2CppObject *)v11,
           *((Il2CppObject **)&v15[1].monitor + i),
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
  System_Collections_Generic_Queue_T__o *downLoadWaitList; // x0
  __int64 v13; // x1
  struct System_Collections_Generic_List_AssetLoader__o *processingAssetLoaderList; // x8
  int size; // w8
  int v16; // w9
  __int64 v17; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v18; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o i; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v20; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4B1B51F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__, v3);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__, v5);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__, v7);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v11);
    byte_4B1B51F = 1;
  }
  memset(&v20, 0, sizeof(v20));
  memset(&i, 0, sizeof(i));
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
    goto LABEL_23;
  System_Collections_Generic_Queue_object___GetEnumerator(
    (System_Collections_Generic_Queue_Enumerator_T__o *)&v18,
    downLoadWaitList,
    (const MethodInfo_382E8C0 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  v20 = v18;
  while ( System_Collections_Generic_Queue_Enumerator_object___MoveNext(
            (System_Collections_Generic_Queue_Enumerator_T__o *)&v20,
            (const MethodInfo_344F928 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__) )
  {
    if ( !System_Collections_Generic_Queue_Enumerator_object___get_Current(
            (System_Collections_Generic_Queue_Enumerator_T__o *)&v20,
            (const MethodInfo_344FA18 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__) )
      sub_1BCB254(0LL, v13);
  }
  System_Collections_Generic_Queue_Enumerator_object___Dispose(
    (System_Collections_Generic_Queue_Enumerator_T__o *)&v20,
    (const MethodInfo_344F918 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  processingAssetLoaderList = this->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
    goto LABEL_23;
  size = processingAssetLoaderList->fields._size;
  v16 = -1;
  do
    ++v16;
  while ( v16 < size );
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.assetBundleDic;
  if ( !downLoadWaitList )
    goto LABEL_23;
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                (System_Collections_Generic_Dictionary_object__object__o *)downLoadWaitList,
                                                                (const MethodInfo_3385BA8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !downLoadWaitList )
    goto LABEL_23;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v18,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)downLoadWaitList,
    (const MethodInfo_39EC574 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  for ( i = v18;
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
          &i,
          (const MethodInfo_3481F34 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
        AssetData__get_IsEmpty((AssetData_o *)i.fields._currentValue, 0LL) )
  {
    if ( !i.fields._currentValue )
      sub_1BCB254(0LL, v17);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &i,
    (const MethodInfo_3481F30 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.assetResourceDic;
  if ( !downLoadWaitList
    || (downLoadWaitList = (System_Collections_Generic_Queue_T__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                      (System_Collections_Generic_Dictionary_object__object__o *)downLoadWaitList,
                                                                      (const MethodInfo_3385BA8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
LABEL_23:
    sub_1BCB254(downLoadWaitList, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v18,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)downLoadWaitList,
    (const MethodInfo_39EC574 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  i = v18;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &i,
            (const MethodInfo_3481F34 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__) )
    ;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &i,
    (const MethodInfo_3481F30 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
}


System_Collections_IEnumerator_o *__fastcall AssetManager__DelayLoadStart(
        AssetManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B1B53D & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager__DelayLoadStart_d__152_TypeInfo, method);
    byte_4B1B53D = 1;
  }
  v3 = sub_1BCB244(AssetManager__DelayLoadStart_d__152_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall AssetManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  AssetManager_c *v2; // x0

  if ( (byte_4B1B4F0 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, v1);
    byte_4B1B4F0 = 1;
  }
  v2 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
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
      if ( AssetData__IsNeedUpdateVersion(AssetData, 0LL) )
      {
        AssetManager__AddLoadWaitStatus_39746512(this, v12, callbackFunc, 0LL, v13);
        this->fields.loadParallelMax = loadParallelMax;
        AssetManager__LoadStart(this, v14);
      }
      else if ( callbackFunc )
      {
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, AssetData_o *, _QWORD))callbackFunc->fields.m_target)(
          callbackFunc->fields.original_method_info,
          v12,
          *(_QWORD *)&callbackFunc->fields.extra_arg);
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
  this->fields.loadParallelMax = loadParallelMax;
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
  System_Collections_Generic_Dictionary_object__object__o *assetBundleDic; // x0
  _BOOL8 v12; // x0
  __int64 v13; // x1
  AssetData_o *currentValue; // x22
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B1B526 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, attrib);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v7);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v8);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v10);
    byte_4B1B526 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      assetBundleDic,
                                                                                      (const MethodInfo_3385BA8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
    sub_1BCB254(assetBundleDic, attrib);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v17,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_39EC574 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v18 = v17;
  while ( 1 )
  {
    v12 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v18,
            (const MethodInfo_3481F34 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v12 )
      break;
    currentValue = (AssetData_o *)v18.fields._currentValue;
    if ( !v18.fields._currentValue )
      sub_1BCB254(v12, v13);
    if ( AssetData__IsDownloadOldVersion((AssetData_o *)v18.fields._currentValue, 0LL)
      || System_String__op_Equality(attrib, currentValue->fields.attrib, 0LL)
      && AssetData__IsNeedUpdateVersion(currentValue, 0LL) )
    {
      AssetManager__AddLoadWaitStatus_39735032(this, currentValue, v15);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v18,
    (const MethodInfo_3481F30 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  this->fields.loadParallelMax = loadParallelMax;
  AssetManager__LoadStart(this, v16);
}


System_Collections_IEnumerator_o *__fastcall AssetManager__DownloadAssetStorageAttributeWithCheckDialog(
        AssetManager_o *this,
        System_String_o *attrib,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4B1B524 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_TypeInfo, attrib);
    byte_4B1B524 = 1;
  }
  v7 = sub_1BCB244(AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 40) = attrib;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v7 + 40), (int32_t)attrib, v10, v11);
  *(_DWORD *)(v7 + 56) = loadParallelMax;
  return (System_Collections_IEnumerator_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetManager__DownloadAssetStorageAttribute_39737976(
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
  __int64 v15; // x24
  unsigned __int64 v16; // x10
  _BOOL8 v17; // x0
  __int64 v18; // x1
  AssetData_o *currentValue; // x22
  const MethodInfo *v20; // x2
  unsigned __int64 v21; // x26
  __int64 v22; // x25
  _BOOL8 v23; // x0
  __int64 v24; // x1
  const MethodInfo *v26; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v28; // [xsp+20h] [xbp-70h] BYREF

  v6 = this;
  if ( (byte_4B1B527 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, attribList);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v7);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v8);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v10);
    this = (AssetManager_o *)sub_1BCAFF8(&StringLiteral_807/*", "*/, v11);
    byte_4B1B527 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  if ( !attribList )
LABEL_32:
    sub_1BCB254(this, attribList);
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
  if ( (int)v12 < 2 )
    goto LABEL_14;
  if ( (v12 & 0xFFFFFFFE) == 0 )
LABEL_13:
    sub_1BCB25C(this, attribList, *(_QWORD *)&loadParallelMax);
  v14 = 0LL;
  v15 = (unsigned int)*(_QWORD *)&attribList->max_length - 2LL;
  while ( 1 )
  {
    this = (AssetManager_o *)System_String__Concat_62488672(
                               v13,
                               (System_String_o *)StringLiteral_807/*", "*/,
                               attribList->m_Items[v14 + 1],
                               0LL);
    if ( v15 == v14 )
      break;
    v16 = v14 + 2;
    v13 = (System_String_o *)this;
    ++v14;
    if ( v16 >= attribList->max_length )
      goto LABEL_13;
  }
LABEL_14:
  this = (AssetManager_o *)v6->fields.assetBundleDic;
  if ( !this )
    goto LABEL_32;
  this = (AssetManager_o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                             (System_Collections_Generic_Dictionary_object__object__o *)this,
                             (const MethodInfo_3385BA8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !this )
    goto LABEL_32;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v27,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_39EC574 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v28 = v27;
LABEL_17:
  while ( 1 )
  {
    v17 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v28,
            (const MethodInfo_3481F34 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v17 )
      break;
    currentValue = (AssetData_o *)v28.fields._currentValue;
    if ( !v28.fields._currentValue )
      sub_1BCB254(v17, v18);
    if ( AssetData__IsDownloadOldVersion((AssetData_o *)v28.fields._currentValue, 0LL) )
      goto LABEL_20;
    if ( AssetData__IsNeedUpdateVersion(currentValue, 0LL) && (int)*(_QWORD *)&attribList->max_length >= 1 )
    {
      v21 = 0LL;
      v22 = (unsigned int)*(_QWORD *)&attribList->max_length - 1LL;
      while ( 1 )
      {
        v23 = System_String__op_Equality(attribList->m_Items[v21], currentValue->fields.attrib, 0LL);
        if ( v23 )
          break;
        if ( v22 == v21++ )
          goto LABEL_17;
        if ( v21 >= attribList->max_length )
          sub_1BCB25C(v23, v24, v20);
      }
LABEL_20:
      AssetManager__AddLoadWaitStatus_39735032(v6, currentValue, v20);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v28,
    (const MethodInfo_3481F30 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  v6->fields.loadParallelMax = loadParallelMax;
  AssetManager__LoadStart(v6, v26);
}


bool __fastcall AssetManager__DownloadAssetStorage_39727284(
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
    sub_1BCB254(this, 0LL);
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
        sub_1BCB25C(this, nameList, callbackFunc);
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
  v9->fields.loadParallelMax = loadParallelMax;
  AssetManager__LoadStart(v9, v13);
  return v11;
}


AssetData_o *__fastcall AssetManager__GetAsset(
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
  return 0LL;
}


AssetData_o *__fastcall AssetManager__GetAssetData(
        AssetManager_o *this,
        System_Collections_Generic_Dictionary_string__AssetData__o *dic,
        System_String_o *name,
        const MethodInfo *method)
{
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1B544 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_1BCAFF8(
                               &Method_System_Collections_Generic_Dictionary_string__AssetData__TryGetValue__,
                               dic);
    byte_4B1B544 = 1;
  }
  value = 0LL;
  if ( !name )
    return 0LL;
  if ( !dic )
    sub_1BCB254(this, dic);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)dic,
         (Il2CppObject *)name,
         &value,
         (const MethodInfo_3387584 *)Method_System_Collections_Generic_Dictionary_string__AssetData__TryGetValue__) )
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

  AssetData = AssetManager__GetAssetData(this, this->fields.assetBundleDic, name, v3);
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
  AssetData_o *v5; // x19

  result = AssetManager__GetAssetData(this, this->fields.assetResourceDic, name, v3);
  if ( result )
  {
    v5 = result;
    if ( AssetData__get_IsEmpty(result, 0LL) )
      return 0LL;
    else
      return v5;
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
  AssetData_o *v5; // x19

  result = AssetManager__GetAssetData(this, this->fields.assetBundleDic, name, v3);
  if ( result )
  {
    v5 = result;
    if ( AssetData__get_IsEmpty(result, 0LL) )
      return 0LL;
    else
      return v5;
  }
  return result;
}


AssetData_o *__fastcall AssetManager__GetAssetStorageData(
        AssetManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return AssetManager__GetAssetData(this, this->fields.assetBundleDic, name, v3);
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
  System_Collections_Generic_List_object__o *v15; // x19
  __int64 v16; // x1
  System_Collections_Generic_Dictionary_object__object__o *assetBundleDic; // x0
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *currentValue; // x25
  System_String_o *monitor; // x0
  _BOOL8 v22; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  Il2CppObject *v26; // x1
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v32; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v33; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B1B529 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, path);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v5);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v6);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Add__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__ToArray__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string___ctor__, v10);
    sub_1BCAFF8(&System_Collections_Generic_List_string__TypeInfo, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v12);
    sub_1BCAFF8(&StringLiteral_1039/*"/"*/, v13);
    byte_4B1B529 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  v14 = System_String__Concat_62450424(path, (System_String_o *)StringLiteral_1039/*"/"*/, 0LL);
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_string___ctor__);
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic )
    goto LABEL_21;
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                assetBundleDic,
                                                                                (const MethodInfo_3385BA8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !assetBundleDic )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v32,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_39EC574 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    v18 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v33,
            (const MethodInfo_3481F34 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v18 )
      break;
    currentValue = v33.fields._currentValue;
    if ( !v33.fields._currentValue )
      sub_1BCB254(v18, v19);
    monitor = (System_String_o *)v33.fields._currentValue[1].monitor;
    if ( !monitor )
      sub_1BCB254(0LL, v19);
    v22 = System_String__StartsWith(monitor, v14, 0LL);
    if ( v22 )
    {
      if ( !v15 )
        sub_1BCB254(v22, v23);
      v26 = (Il2CppObject *)currentValue[1].monitor;
      items = v15->fields._items;
      v28 = Method_System_Collections_Generic_List_string__Add__;
      ++v15->fields._version;
      if ( !items )
        sub_1BCB254(v22, v26);
      size = v15->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          v26,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v15->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v26;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v26, v24, v25);
      }
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v33,
    (const MethodInfo_3481F30 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  if ( !v15 )
LABEL_21:
    sub_1BCB254(assetBundleDic, v16);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v15,
                                  (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_string__ToArray__);
}


AssetData_array *__fastcall AssetManager__GetAssetStorage_39730828(
        AssetManager_o *this,
        System_String_array *nameList,
        const MethodInfo *method)
{
  AssetManager_o *v4; // x20
  System_String_o *v5; // x2
  const MethodInfo *v6; // x3
  __int64 v7; // x8
  AssetData_array *v8; // x21
  unsigned __int64 v9; // x24
  CGThumbnailListItem_o *p_isUseDebugStatus; // x22
  AssetManager_o *v11; // x23
  const MethodInfo *v12; // x3
  __int64 v14; // x0

  v4 = this;
  if ( (byte_4B1B545 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_1BCAFF8(&AssetData___TypeInfo, nameList);
    byte_4B1B545 = 1;
  }
  if ( !nameList )
LABEL_17:
    sub_1BCB254(this, nameList);
  this = (AssetManager_o *)sub_1BCB0A0(AssetData___TypeInfo, nameList->max_length);
  v7 = *(_QWORD *)&nameList->max_length;
  v8 = (AssetData_array *)this;
  if ( (int)v7 >= 1 )
  {
    v9 = 0LL;
    p_isUseDebugStatus = (CGThumbnailListItem_o *)&this->fields.isUseDebugStatus;
    while ( v9 < (unsigned int)v7 )
    {
      v5 = nameList->m_Items[v9];
      if ( v5 )
      {
        this = (AssetManager_o *)AssetManager__GetAssetData(this, v4->fields.assetBundleDic, v5, v6);
        if ( this )
        {
          v11 = this;
          this = (AssetManager_o *)AssetData__get_IsEmpty((AssetData_o *)this, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !v8 )
              goto LABEL_17;
            this = (AssetManager_o *)sub_1BCB134(v11, v8->obj.klass->_1.element_class);
            if ( !this )
            {
              v14 = sub_1BCB278(0LL);
              sub_1BCB120(v14, 0LL);
            }
            if ( v9 >= v8->max_length )
              break;
            p_isUseDebugStatus->klass = (CGThumbnailListItem_c *)v11;
            sub_1BCAF9C(p_isUseDebugStatus, (int32_t)v11, (int32_t)v5, v12);
          }
        }
      }
      LODWORD(v7) = nameList->max_length;
      ++v9;
      p_isUseDebugStatus = (CGThumbnailListItem_o *)((char *)p_isUseDebugStatus + 8);
      if ( (__int64)v9 >= (int)v7 )
        return v8;
    }
    sub_1BCB25C(this, nameList, v5);
  }
  return v8;
}


bool __fastcall AssetManager__GetAssetStorage_39731288(
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
    if ( !AssetData__get_IsEmpty(AssetData, 0LL) )
    {
      if ( callbackFunc )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, AssetData_o *, _QWORD))callbackFunc->fields.m_target)(
          callbackFunc->fields.original_method_info,
          v11,
          *(_QWORD *)&callbackFunc->fields.extra_arg);
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


bool __fastcall AssetManager__GetAsset_39721560(
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
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, AssetData_o *, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        Asset,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
    goto LABEL_5;
  }
  return (char)Asset;
}


bool __fastcall AssetManager__GetAsset_39721848(
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
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, AssetData_o *, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        AssetData,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
  return 1;
}


AssetData_o *__fastcall AssetManager__GetAsset_39747760(
        AssetManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AssetData_o *result; // x0
  const MethodInfo *v7; // x3

  result = AssetManager__GetAssetData(this, this->fields.assetBundleDic, name, v3);
  if ( !result )
    return AssetManager__GetAssetData(0LL, this->fields.assetResourceDic, name, v7);
  return result;
}


System_String_o *__fastcall AssetManager__GetDateVersion(const MethodInfo *method)
{
  __int64 v1; // x1
  AssetManager_c *v2; // x0

  if ( (byte_4B1B4FA & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, v1);
    byte_4B1B4FA = 1;
  }
  v2 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
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
  System_Collections_Generic_List_object__o *processingAssetLoaderList; // x0
  int64_t downloadSize; // x21
  int32_t v6; // w20
  int32_t LoadSize; // w8

  if ( (byte_4B1B528 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v3);
    byte_4B1B528 = 1;
  }
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
LABEL_8:
    sub_1BCB254(processingAssetLoaderList, method);
  downloadSize = this->fields.downloadSize;
  v6 = 0;
  while ( v6 < processingAssetLoaderList->fields._size )
  {
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               processingAssetLoaderList,
                                                                               v6,
                                                                               (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    if ( processingAssetLoaderList )
    {
      LoadSize = AssetLoader__get_LoadSize((AssetLoader_o *)processingAssetLoaderList, method);
      processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
      downloadSize -= LoadSize;
      ++v6;
      if ( processingAssetLoaderList )
        continue;
    }
    goto LABEL_8;
  }
  return downloadSize;
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

  if ( (byte_4B1B4F9 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, v1);
    byte_4B1B4F9 = 1;
  }
  v2 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v2 = AssetManager_TypeInfo;
  }
  return v2->static_fields->assetBundleMasterVersion;
}


System_Collections_IEnumerator_o *__fastcall AssetManager__InitCR(AssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B1B52F & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager__InitCR_d__134_TypeInfo, method);
    byte_4B1B52F = 1;
  }
  v3 = sub_1BCB244(AssetManager__InitCR_d__134_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
  System_Collections_IEnumerator_o *initCRW; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  void *assetBundleReleaseDic; // x0
  char v20; // w28
  __int64 v21; // x1
  int v22; // w28
  const MethodInfo *v23; // x2
  __int64 v24; // x1
  int32_t v25; // w20
  Il2CppObject *Item; // x21
  int32_t v27; // w2
  int v28; // w8
  const MethodInfo *v29; // x0
  System_String_o *Path; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  AssetManager_c *v33; // x8
  System_String_o *v34; // x20
  struct AssetManager_StaticFields *static_fields; // x0
  struct AssetManager_StaticFields *v36; // x8
  System_String_o *cachePathName; // x20
  System_String_o *configFileName; // x21
  System_String_o *v39; // x0
  System_String_o *v40; // x0
  struct AssetManager_StaticFields *v41; // x8
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct AssetManager_StaticFields *v44; // x8
  System_String_o *v45; // x20
  System_String_o *v46; // x0
  System_String_o *v47; // x0
  struct AssetManager_StaticFields *v48; // x8
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  struct AssetManager_StaticFields *v51; // x8
  System_String_o *v52; // x20
  System_String_o *v53; // x0
  System_String_o *v54; // x0
  struct AssetManager_StaticFields *v55; // x8
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v58; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o i; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B1B521 & 1) == 0 )
  {
    sub_1BCAFF8(&AndroidUtil_TypeInfo, method);
    sub_1BCAFF8(&AssetManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, v6);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v7);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v8);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_AssetLoader__Clear__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v12);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v15);
    byte_4B1B521 = 1;
  }
  memset(&i, 0, sizeof(i));
  initCRW = this->fields.initCRW;
  if ( initCRW )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, initCRW, 0LL);
    this->fields.initCRW = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.initCRW, 0, v17, v18);
  }
  assetBundleReleaseDic = this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_44;
  System_Collections_Generic_Dictionary_object__object___Clear(
    (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
    (const MethodInfo_3385F00 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
  assetBundleReleaseDic = this->fields.assetBundleDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_44;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
         (const MethodInfo_3385A48 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) < 1 )
  {
    v22 = 0;
  }
  else
  {
    assetBundleReleaseDic = this->fields.assetBundleDic;
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    assetBundleReleaseDic = System_Collections_Generic_Dictionary_object__object___get_Values(
                              (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
                              (const MethodInfo_3385BA8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v58,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
      (const MethodInfo_39EC574 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    v20 = 0;
    for ( i = v58;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &i,
            (const MethodInfo_3481F34 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
          v20 |= AssetData__ReleaseData((AssetData_o *)i.fields._currentValue, 0LL) )
    {
      if ( !i.fields._currentValue )
        sub_1BCB254(0LL, v21);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
      &i,
      (const MethodInfo_3481F30 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    assetBundleReleaseDic = this->fields.assetBundleDic;
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    System_Collections_Generic_Dictionary_object__object___Clear(
      (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
      (const MethodInfo_3385F00 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
    v22 = v20 != 0;
  }
  assetBundleReleaseDic = this->fields.assetResourceDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_44;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
         (const MethodInfo_3385A48 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) >= 1 )
  {
    assetBundleReleaseDic = this->fields.assetResourceDic;
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    assetBundleReleaseDic = System_Collections_Generic_Dictionary_object__object___get_Values(
                              (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
                              (const MethodInfo_3385BA8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v58,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
      (const MethodInfo_39EC574 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    for ( i = v58;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &i,
            (const MethodInfo_3481F34 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
          v22 |= AssetData__ReleaseData((AssetData_o *)i.fields._currentValue, 0LL) )
    {
      if ( !i.fields._currentValue )
        sub_1BCB254(0LL, v24);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
      &i,
      (const MethodInfo_3481F30 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    assetBundleReleaseDic = this->fields.assetResourceDic;
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    System_Collections_Generic_Dictionary_object__object___Clear(
      (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
      (const MethodInfo_3385F00 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
  }
  if ( (v22 & 1) != 0 )
    AssetManager__RequestUnloadUnusedAssets(this, 0LL, v23);
  assetBundleReleaseDic = this->fields.processingAssetLoaderList;
  if ( !assetBundleReleaseDic )
    goto LABEL_44;
  if ( *((int *)assetBundleReleaseDic + 6) >= 1 )
  {
    v25 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)assetBundleReleaseDic,
               v25,
               (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70136076((UnityEngine_Object_o *)Item, 0LL);
      assetBundleReleaseDic = this->fields.processingAssetLoaderList;
      if ( !assetBundleReleaseDic )
        goto LABEL_44;
      v27 = *((_DWORD *)assetBundleReleaseDic + 6);
      ++v25;
    }
    while ( v25 < v27 );
    v28 = *((_DWORD *)assetBundleReleaseDic + 7) + 1;
    *((_DWORD *)assetBundleReleaseDic + 6) = 0;
    *((_DWORD *)assetBundleReleaseDic + 7) = v28;
    if ( v27 >= 1 )
      System_Array__Clear(*((System_Array_o **)assetBundleReleaseDic + 2), 0, v27, 0LL);
  }
  assetBundleReleaseDic = this->fields.downLoadWaitList;
  if ( !assetBundleReleaseDic )
LABEL_44:
    sub_1BCB254(assetBundleReleaseDic, initCRW);
  System_Collections_Generic_Queue_object___Clear(
    (System_Collections_Generic_Queue_T__o *)assetBundleReleaseDic,
    (const MethodInfo_382E4C8 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__);
  this->fields.downloadSize = 0LL;
  this->fields.isCancelDownload = 0;
  Path = AssetStorageCache__GetPath(v29);
  v33 = AssetManager_TypeInfo;
  v34 = Path;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v33 = AssetManager_TypeInfo;
  }
  static_fields = v33->static_fields;
  static_fields->cachePathName = v34;
  sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->cachePathName, (int32_t)v34, v31, v32);
  v36 = AssetManager_TypeInfo->static_fields;
  cachePathName = v36->cachePathName;
  configFileName = v36->configFileName;
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  v39 = AndroidUtil__ConvertFileNameIfNeed(configFileName, 0LL);
  v40 = System_String__Concat_62450424(cachePathName, v39, 0LL);
  v41 = AssetManager_TypeInfo->static_fields;
  v41->cacheListFileName = v40;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v41->cacheListFileName, (int32_t)v40, v42, v43);
  v44 = AssetManager_TypeInfo->static_fields;
  v45 = v44->cachePathName;
  v46 = AndroidUtil__ConvertFileNameIfNeed(v44->createConfigFileName, 0LL);
  v47 = System_String__Concat_62450424(v45, v46, 0LL);
  v48 = AssetManager_TypeInfo->static_fields;
  v48->createCacheListFileName = v47;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v48->createCacheListFileName, (int32_t)v47, v49, v50);
  v51 = AssetManager_TypeInfo->static_fields;
  v52 = v51->cachePathName;
  v53 = AndroidUtil__ConvertFileNameIfNeed(v51->backConfigFileName, 0LL);
  v54 = System_String__Concat_62450424(v52, v53, 0LL);
  v55 = AssetManager_TypeInfo->static_fields;
  v55->backCacheListFileName = v54;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v55->backCacheListFileName, (int32_t)v54, v56, v57);
  this->fields.isInitFirst = 0;
}


void __fastcall AssetManager__InitializeAssetStorage(AssetManager_o *this, const MethodInfo *method)
{
  struct System_Collections_IEnumerator_o **p_initCRW; // x20
  struct System_Collections_IEnumerator_o *inited; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  p_initCRW = &this->fields.initCRW;
  if ( !this->fields.initCRW )
  {
    this->fields.isInitEnd = 0;
    inited = AssetManager__InitCR(this, method);
    this->fields.initCRW = inited;
    sub_1BCAF9C((CGThumbnailListItem_o *)p_initCRW, (int32_t)inited, v5, v6);
    UnityEngine_MonoBehaviour__StartCoroutine_70121648((UnityEngine_MonoBehaviour_o *)this, this->fields.initCRW, 0LL);
  }
}


void __fastcall AssetManager__InterruptDownloadAssetStorage(
        AssetManager_o *this,
        System_String_o *target,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AssetManager_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  CGThumbnailListItem_o *p_downLoadWaitList; // x20
  System_Collections_Generic_Queue_T__o *v10; // x21
  System_Collections_Generic_Queue_T__o *downLoadWaitList; // t1
  int size; // w23
  Il2CppObject *v13; // x22
  AssetData_o *v14; // x0

  v5 = this;
  if ( (byte_4B1B52D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__, target);
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Peek__, v7);
    this = (AssetManager_o *)sub_1BCAFF8(
                               &Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__,
                               v8);
    byte_4B1B52D = 1;
  }
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)v5->fields.downLoadWaitList;
  p_downLoadWaitList = (CGThumbnailListItem_o *)&v5->fields.downLoadWaitList;
  v10 = downLoadWaitList;
  if ( !downLoadWaitList )
    goto LABEL_10;
  size = v10->fields._size;
  if ( size >= 1 )
  {
    while ( 1 )
    {
      this = (AssetManager_o *)System_Collections_Generic_Queue_object___Peek(
                                 v10,
                                 (const MethodInfo_382EAF4 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Peek__);
      if ( !this )
        break;
      v13 = (Il2CppObject *)this;
      v14 = *(AssetData_o **)&this->fields.m_CachedPtr;
      if ( !v14 || !AssetData__IsSame_39695164(v14, 0, target, 0LL) )
      {
        System_Collections_Generic_Queue_object___Dequeue(
          v10,
          (const MethodInfo_382E998 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
        System_Collections_Generic_Queue_object___Enqueue(
          v10,
          v13,
          (const MethodInfo_382E808 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
        if ( --size )
          continue;
      }
      goto LABEL_9;
    }
LABEL_10:
    sub_1BCB254(this, target);
  }
LABEL_9:
  p_downLoadWaitList->klass = (CGThumbnailListItem_c *)v10;
  sub_1BCAF9C(p_downLoadWaitList, (int32_t)v10, (int32_t)method, v3);
}


bool __fastcall AssetManager__IsAssetStorageExistsButEmpty(
        AssetManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AssetData_o *AssetData; // x0

  AssetData = AssetManager__GetAssetData(this, this->fields.assetBundleDic, name, v3);
  if ( AssetData )
    LOBYTE(AssetData) = AssetData__get_IsEmpty(AssetData, 0LL);
  return (char)AssetData;
}


bool __fastcall AssetManager__IsExistAssetStorage(
        AssetManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__AssetData__o *assetBundleDic; // x0

  if ( (byte_4B1B540 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__, name);
    byte_4B1B540 = 1;
  }
  assetBundleDic = this->fields.assetBundleDic;
  if ( !assetBundleDic )
    sub_1BCB254(0LL, name);
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)assetBundleDic,
           (Il2CppObject *)name,
           (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__);
}


bool __fastcall AssetManager__IsExistAssetStorage_39723744(
        AssetManager_o *this,
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v3; // x8
  System_String_array *v4; // x19
  bool v5; // w21
  AssetManager_o *v6; // x20
  unsigned __int64 v7; // x22

  if ( !nameList )
    sub_1BCB254(this, 0LL);
  v3 = *(_QWORD *)&nameList->max_length;
  v4 = nameList;
  v5 = (int)v3 > 0;
  if ( (int)v3 >= 1 )
  {
    v6 = this;
    v7 = 0LL;
    do
    {
      if ( v7 >= (unsigned int)v3 )
        sub_1BCB25C(this, nameList, method);
      nameList = (System_String_array *)v4->m_Items[v7];
      if ( nameList )
      {
        this = (AssetManager_o *)AssetManager__IsExistAssetStorage(v6, (System_String_o *)nameList, method);
        if ( ((unsigned __int8)this & 1) == 0 )
          break;
      }
      LODWORD(v3) = v4->max_length;
      v5 = (__int64)++v7 < (int)v3;
    }
    while ( (__int64)v7 < (int)v3 );
  }
  return !v5;
}


bool __fastcall AssetManager__IsInitializeAssetStorage(AssetManager_o *this, const MethodInfo *method)
{
  return this->fields.isInitEnd;
}


bool __fastcall AssetManager__IsNeedDownload(AssetManager_o *this, System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AssetData_o *AssetData; // x0

  AssetData = AssetManager__GetAssetData(this, this->fields.assetBundleDic, name, v3);
  if ( AssetData )
    LOBYTE(AssetData) = AssetData__IsNeedUpdateVersion(AssetData, 0LL);
  return (char)AssetData;
}


bool __fastcall AssetManager__IsNeedDownload_39724284(
        AssetManager_o *this,
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v3; // x8
  System_String_array *v4; // x19
  bool v5; // w21
  AssetManager_o *v6; // x20
  unsigned __int64 v7; // x22

  if ( !nameList )
    sub_1BCB254(this, 0LL);
  v3 = *(_QWORD *)&nameList->max_length;
  v4 = nameList;
  v5 = (int)v3 > 0;
  if ( (int)v3 >= 1 )
  {
    v6 = this;
    v7 = 0LL;
    do
    {
      if ( v7 >= (unsigned int)v3 )
        sub_1BCB25C(this, nameList, method);
      nameList = (System_String_array *)v4->m_Items[v7];
      if ( nameList )
      {
        this = (AssetManager_o *)AssetManager__IsNeedDownload(v6, (System_String_o *)nameList, method);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
      LODWORD(v3) = v4->max_length;
      v5 = (__int64)++v7 < (int)v3;
    }
    while ( (__int64)v7 < (int)v3 );
  }
  return v5;
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
  System_Collections_Generic_Dictionary_object__object__o *assetBundleReleaseDic; // x0
  int v23; // w24
  _BOOL8 v24; // x0
  __int64 v25; // x1
  Il2CppObject *currentValue; // x20
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x0
  float v29; // s0
  System_String_o *Path; // x20
  int64_t FreeSize; // x20
  ManagerConfig_c *v32; // x0
  AssetManager_c *v33; // x0
  AssetManager_c *v34; // x0
  AssetManager_c *v35; // x0
  System_String_o *createCacheListFileName; // x20
  System_Text_Encoding_o *UTF8; // x22
  System_IO_StreamWriter_o *v38; // x21
  __int64 v39; // x0
  __int64 v40; // x1
  AssetManager_c *v41; // x0
  AssetManager_c *v42; // x0
  AssetManager_c *v43; // x0
  AssetManager_c *v44; // x0
  int32_t v45; // w1
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  __int64 v48; // x0
  System_IO_IOException_o *v49; // x20
  System_String_o *v50; // x0
  __int64 v51; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v52; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v53; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_4B1B534 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_AssetManager_OnClickRetryDialog__, method);
    sub_1BCAFF8(&AssetManager_TypeInfo, v3);
    sub_1BCAFF8(&ErrorDialog_ClickDelegate_TypeInfo, v4);
    sub_1BCAFF8(&CommonServicePluginScript_TypeInfo, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, v7);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v8);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v9);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v10);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v11);
    sub_1BCAFF8(&ManagementManager_TypeInfo, v12);
    sub_1BCAFF8(&ManagerConfig_TypeInfo, v13);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_1BCAFF8(&System_IO_StreamWriter_TypeInfo, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v16);
    sub_1BCAFF8(&StringLiteral_2033/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, v17);
    sub_1BCAFF8(&StringLiteral_15795/*"[FFFF80]Download error for debug"*/, v18);
    sub_1BCAFF8(&StringLiteral_11377/*"SCRIPT"*/, v19);
    sub_1BCAFF8(&StringLiteral_2034/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, v20);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v21);
    byte_4B1B534 = 1;
  }
  memset(&v53, 0, sizeof(v53));
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_49;
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                       assetBundleReleaseDic,
                                                                                       (const MethodInfo_3385BA8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !assetBundleReleaseDic )
    goto LABEL_49;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v52,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
    (const MethodInfo_39EC574 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v23 = 0;
  v53 = v52;
  while ( 1 )
  {
    v24 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v53,
            (const MethodInfo_3481F34 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v24 )
      break;
    currentValue = v53.fields._currentValue;
    if ( !v53.fields._currentValue )
      sub_1BCB254(v24, v25);
    if ( !HIDWORD(v53.fields._currentValue[5].klass)
      && !AssetData__get_IsEmpty((AssetData_o *)v53.fields._currentValue, 0LL) )
    {
      v23 |= AssetData__ReleaseData((AssetData_o *)currentValue, 0LL);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v53,
    (const MethodInfo_3481F30 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  if ( (v23 & 1) != 0 )
    AssetManager__RequestUnloadUnusedAssets(this, 0LL, v27);
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
LABEL_49:
    sub_1BCB254(assetBundleReleaseDic, method);
  System_Collections_Generic_Dictionary_object__object___Clear(
    assetBundleReleaseDic,
    (const MethodInfo_3385F00 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
  if ( this->fields.requestWriteCounter >= 0.0 )
  {
    v29 = this->fields.requestWriteCounter - UnityEngine_Time__get_deltaTime(0LL);
    this->fields.requestWriteCounter = v29;
    if ( v29 <= 0.0 && !this->fields.isErrorDialog )
    {
      Path = AssetStorageCache__GetPath(v28);
      if ( !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
      FreeSize = CommonServicePluginScript__GetFreeSize(Path, 0LL);
      if ( FreeSize >= 1 )
      {
        v32 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v32 = ManagerConfig_TypeInfo;
        }
        if ( FreeSize < v32->static_fields->LIMIT_FREE_SIZE )
        {
          v48 = sub_1BCB00C(&System_IO_IOException_TypeInfo);
          v49 = (System_IO_IOException_o *)sub_1BCB244(v48);
          v50 = (System_String_o *)sub_1BCB00C(&StringLiteral_5248/*"Disk full"*/);
          System_IO_IOException___ctor_63268140(v49, v50, 0LL);
          v51 = sub_1BCB00C(&Method_AssetManager_LateUpdate__);
          sub_1BCB120(v49, v51);
        }
      }
      v33 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v33 = AssetManager_TypeInfo;
      }
      if ( System_IO_File__Exists(v33->static_fields->createCacheListFileName, 0LL) )
      {
        v34 = AssetManager_TypeInfo;
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v34 = AssetManager_TypeInfo;
        }
        System_IO_File__Delete(v34->static_fields->createCacheListFileName, 0LL);
      }
      v35 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v35 = AssetManager_TypeInfo;
      }
      createCacheListFileName = v35->static_fields->createCacheListFileName;
      UTF8 = System_Text_Encoding__get_UTF8(0LL);
      v38 = (System_IO_StreamWriter_o *)sub_1BCB244(System_IO_StreamWriter_TypeInfo);
      System_IO_StreamWriter___ctor_63295488(v38, createCacheListFileName, 0, UTF8, 0LL);
      if ( !v38 )
        sub_1BCB254(v39, v40);
      ((void (__fastcall *)(System_IO_StreamWriter_o *, struct System_String_o *, Il2CppMethodPointer))v38->klass->vtable._16_Write.method)(
        v38,
        this->fields.requestConfigWriteData,
        v38->klass->vtable._17_WriteLine.methodPtr);
      ((void (__fastcall *)(System_IO_StreamWriter_o *, Il2CppMethodPointer))v38->klass->vtable._8_Close.method)(
        v38,
        v38->klass->vtable._9_Dispose.methodPtr);
      if ( System_IO_File__Exists(AssetManager_TypeInfo->static_fields->backCacheListFileName, 0LL) )
      {
        v41 = AssetManager_TypeInfo;
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v41 = AssetManager_TypeInfo;
        }
        System_IO_File__Delete(v41->static_fields->backCacheListFileName, 0LL);
      }
      v42 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v42 = AssetManager_TypeInfo;
      }
      if ( System_IO_File__Exists(v42->static_fields->cacheListFileName, 0LL) )
      {
        v43 = AssetManager_TypeInfo;
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v43 = AssetManager_TypeInfo;
        }
        System_IO_File__Move(v43->static_fields->cacheListFileName, v43->static_fields->backCacheListFileName, 0LL);
      }
      v44 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v44 = AssetManager_TypeInfo;
      }
      System_IO_File__Move(v44->static_fields->createCacheListFileName, v44->static_fields->cacheListFileName, 0LL);
      v45 = (int)StringLiteral_1/*""*/;
      this->fields.requestConfigWriteData = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.requestConfigWriteData, v45, v46, v47);
      this->fields.requestWriteCounter = -1.0;
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
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, AssetData_o *, _QWORD))callbackFunc->fields.m_target)(
          callbackFunc->fields.original_method_info,
          AssetResource,
          *(_QWORD *)&callbackFunc->fields.extra_arg);
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
  AssetManager_o *v5; // x20
  __int64 v6; // x1
  AssetData_o *AssetData; // x0
  AssetData_o *v8; // x22
  AssetData_o *v9; // x21
  System_Collections_Generic_Dictionary_object__object__o *assetResourceDic; // x0
  __int64 v11; // x1

  v5 = this;
  if ( (byte_4B1B546 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetData_TypeInfo, name);
    this = (AssetManager_o *)sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__AssetData__Add__, v6);
    byte_4B1B546 = 1;
  }
  AssetData = AssetManager__GetAssetData(this, v5->fields.assetResourceDic, name, v3);
  if ( !AssetData )
  {
    v9 = (AssetData_o *)sub_1BCB244(AssetData_TypeInfo);
    AssetData___ctor(v9, 1, name, 0LL);
    if ( v9 )
    {
      v8 = 0LL;
      if ( !AssetData__SetResource(v9, 0LL) )
        return v8;
      AssetData__AddEntry(v9, 0LL);
      assetResourceDic = (System_Collections_Generic_Dictionary_object__object__o *)v5->fields.assetResourceDic;
      if ( assetResourceDic )
      {
        System_Collections_Generic_Dictionary_object__object___Add(
          assetResourceDic,
          (Il2CppObject *)name,
          (Il2CppObject *)v9,
          (const MethodInfo_3385D78 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
        return v9;
      }
    }
    sub_1BCB254(assetResourceDic, v11);
  }
  v8 = AssetData;
  AssetData__AddEntry(AssetData, 0LL);
  return v8;
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
  System_Collections_Generic_Dictionary_object__object__o *assetBundleReleaseDic; // x0
  _BOOL8 Status; // x0
  const MethodInfo *v15; // x3
  AssetData_o *v16; // x0
  AssetData_o *v17; // x22
  const MethodInfo *v18; // x4
  const MethodInfo *v19; // x1

  v8 = this;
  if ( (byte_4B1B541 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_1BCAFF8(
                               &Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__,
                               name);
    byte_4B1B541 = 1;
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
        sub_1BCB254(0LL, v10);
      System_Collections_Generic_Dictionary_object__object___Remove(
        assetBundleReleaseDic,
        (Il2CppObject *)name,
        (const MethodInfo_3387274 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
      if ( !AssetData__get_IsEmpty(v12, 0LL) )
      {
        AssetData__AddEntry(v12, 0LL);
        if ( callbackFunc )
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, AssetData_o *, _QWORD))callbackFunc->fields.m_target)(
            callbackFunc->fields.original_method_info,
            v12,
            *(_QWORD *)&callbackFunc->fields.extra_arg);
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
      if ( !AssetData__get_IsEmpty(v16, 0LL) )
      {
        if ( !v17->fields.isLoadResources )
        {
          AssetData__AddEntry(v17, 0LL);
          if ( callbackFunc )
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, AssetData_o *, _QWORD))callbackFunc->fields.m_target)(
              callbackFunc->fields.original_method_info,
              v17,
              *(_QWORD *)&callbackFunc->fields.extra_arg);
          goto LABEL_16;
        }
        AssetData__ReleaseData(v17, 0LL);
      }
      AssetData__AddEntry(v17, 0LL);
      AssetManager__AddLoadWaitStatus_39746512(v8, v17, callbackFunc, 0LL, v18);
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


bool __fastcall AssetManager__LoadAssetStorage_39729480(
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
  System_Collections_Generic_List_object__o *AssetStorage; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_List_object__o *v25; // x23
  System_Collections_Generic_List_object__o **v26; // x22
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x4
  __int64 v31; // x8
  int v32; // w26
  unsigned __int64 v33; // x27
  AssetLoader_LoadEndDataHandler_o **v34; // x23
  bool v35; // w25
  System_String_o *v36; // x24
  AssetLoader_LoadEndDataHandler_o *v37; // x25
  const MethodInfo *v38; // x3
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x1

  if ( (byte_4B1B543 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__AddRange__, nameList);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__IndexOf__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__RemoveRange__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Remove__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string___ctor__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__get_Count__, v13);
    sub_1BCAFF8(&System_Collections_Generic_List_string__TypeInfo, v14);
    sub_1BCAFF8(&AssetLoader_LoadEndDataHandler_TypeInfo, v15);
    sub_1BCAFF8(&Method_AssetManager___c__DisplayClass172_0__LoadAssetStorage_b__0__, v16);
    sub_1BCAFF8(&AssetManager___c__DisplayClass172_0_TypeInfo, v17);
    byte_4B1B543 = 1;
  }
  v18 = sub_1BCB244(AssetManager___c__DisplayClass172_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_31;
  *(_QWORD *)(v18 + 40) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 40), (int32_t)this, v21, v22);
  *(_QWORD *)(v18 + 48) = callbackFunc;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 48), (int32_t)callbackFunc, v23, v24);
  *(_DWORD *)(v18 + 56) = loadParallelMax;
  v25 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v18 + 24) = v25;
  v26 = (System_Collections_Generic_List_object__o **)(v18 + 24);
  sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 24), (int32_t)v25, v27, v28);
  AssetStorage = *(System_Collections_Generic_List_object__o **)(v18 + 24);
  if ( !AssetStorage
    || (System_Collections_Generic_List_object___AddRange(
          AssetStorage,
          (System_Collections_Generic_IEnumerable_T__o *)nameList,
          (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_string__AddRange__),
        *(_DWORD *)(v18 + 16) = 0,
        *(_BYTE *)(v18 + 32) = 0,
        !nameList) )
  {
LABEL_31:
    sub_1BCB254(AssetStorage, v20);
  }
  v31 = *(_QWORD *)&nameList->max_length;
  if ( (int)v31 >= 1 )
  {
    v32 = 0;
    v33 = 0LL;
    v34 = (AssetLoader_LoadEndDataHandler_o **)(v18 + 64);
    v35 = 1;
    while ( 1 )
    {
      if ( v33 >= (unsigned int)v31 )
        sub_1BCB25C(AssetStorage, v20, v29);
      v36 = nameList->m_Items[v33];
      if ( !v36 )
      {
        AssetStorage = *v26;
        if ( !*v26 )
          goto LABEL_31;
        AssetStorage = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Remove(
                                                                      AssetStorage,
                                                                      0LL,
                                                                      (const MethodInfo_36BB0F8 *)Method_System_Collections_Generic_List_string__Remove__);
        goto LABEL_23;
      }
      if ( !v35 )
        goto LABEL_22;
      v37 = *v34;
      if ( !*v34 )
      {
        v37 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCB244(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v37,
          (Il2CppObject *)v18,
          Method_AssetManager___c__DisplayClass172_0__LoadAssetStorage_b__0__,
          v38);
        *(_QWORD *)(v18 + 64) = v37;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 64), (int32_t)v37, v39, v40);
      }
      if ( !this )
        goto LABEL_31;
      AssetStorage = (System_Collections_Generic_List_object__o *)AssetManager__LoadAssetStorage(
                                                                    this,
                                                                    v36,
                                                                    v37,
                                                                    *(_DWORD *)(v18 + 56),
                                                                    v30);
      if ( ((unsigned __int8)AssetStorage & 1) == 0 )
        break;
      ++v32;
      v35 = 1;
LABEL_23:
      LODWORD(v31) = nameList->max_length;
      if ( (__int64)++v33 >= (int)v31 )
        goto LABEL_26;
    }
    AssetStorage = *v26;
    if ( !*v26 )
      goto LABEL_31;
    AssetStorage = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___IndexOf(
                                                                  AssetStorage,
                                                                  (Il2CppObject *)v36,
                                                                  (const MethodInfo_36BA870 *)Method_System_Collections_Generic_List_string__IndexOf__);
    if ( ((unsigned int)AssetStorage & 0x80000000) == 0 )
    {
      v20 = (unsigned int)AssetStorage;
      AssetStorage = *v26;
      if ( !*v26 )
        goto LABEL_31;
      System_Collections_Generic_List_object___RemoveRange(
        AssetStorage,
        v20,
        AssetStorage->fields._size - v20,
        (const MethodInfo_36BB43C *)Method_System_Collections_Generic_List_string__RemoveRange__);
    }
LABEL_22:
    v35 = 0;
    goto LABEL_23;
  }
  v32 = 0;
  v35 = 1;
LABEL_26:
  if ( v32 < 1 || !*(_BYTE *)(v18 + 32) && *(_DWORD *)(v18 + 16) == v32 )
  {
    AssetManager__AddLoadWaitStatus(this, *(System_Action_o **)(v18 + 48), v29);
    this->fields.loadParallelMax = *(_DWORD *)(v18 + 56);
    *(_BYTE *)(v18 + 32) = 1;
    AssetManager__LoadStart(this, v41);
  }
  return v35;
}


bool __fastcall AssetManager__LoadAsset_39747516(
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
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, AssetData_o *, _QWORD))callbackFunc->fields.m_target)(
          callbackFunc->fields.original_method_info,
          AssetResource,
          *(_QWORD *)&callbackFunc->fields.extra_arg);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  _DWORD *monitor; // x8

  if ( (byte_4B1B520 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v1);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_4B1B520 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  if ( BYTE2(Instance[3].klass) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( Instance )
    {
      monitor = Instance[6].monitor;
      if ( monitor )
        return monitor[6] > 0;
    }
LABEL_9:
    sub_1BCB254(Instance, v4);
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
  System_Collections_Generic_Dictionary_object__object__o *assetBundleReleaseDic; // x0
  _BOOL8 Status; // x0
  const MethodInfo *v24; // x3
  AssetData_o *v25; // x23
  System_Collections_Generic_List_object__o *v26; // x24
  __int64 v27; // x2
  const MethodInfo *v28; // x3
  struct UnityEngine_Object_array *objectList; // x26
  __int64 v30; // x8
  unsigned __int64 v31; // x27
  int max_length; // w8
  Il2CppObject *v33; // x25
  __int64 v34; // x23
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  int v39; // w22
  System_String_array *v40; // x0
  const MethodInfo *v41; // x4
  const MethodInfo *v42; // x1
  AssetData_o *v44; // [xsp+8h] [xbp-68h]

  if ( (byte_4B1B542 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__, name);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__AddRange__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Add__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__ToArray__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string___ctor__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__get_Count__, v15);
    sub_1BCAFF8(&System_Collections_Generic_List_string__TypeInfo, v16);
    byte_4B1B542 = 1;
  }
  LOBYTE(v17) = 0;
  if ( !name || !resourceNames )
    return (char)v17;
  if ( !*(_QWORD *)&resourceNames->max_length )
  {
    LOBYTE(v17) = 0;
    return (char)v17;
  }
  AssetData = AssetManager__GetAssetData(
                0LL,
                this->fields.assetBundleReleaseDic,
                name,
                (const MethodInfo *)callbackFunc);
  if ( AssetData )
  {
    v21 = AssetData;
    assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleReleaseDic;
    if ( !assetBundleReleaseDic )
      goto LABEL_41;
    System_Collections_Generic_Dictionary_object__object___Remove(
      assetBundleReleaseDic,
      (Il2CppObject *)name,
      (const MethodInfo_3387274 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
    if ( !AssetData__get_IsEmpty(v21, 0LL) )
    {
      AssetData__AddEntry(v21, 0LL);
      if ( callbackFunc )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, AssetData_o *, _QWORD))callbackFunc->fields.m_target)(
          callbackFunc->fields.original_method_info,
          v21,
          *(_QWORD *)&callbackFunc->fields.extra_arg);
      goto LABEL_39;
    }
  }
  Status = AssetManager__AddEntryLoadStatus(this, 0, name, callbackFunc, v20);
  if ( Status )
  {
LABEL_39:
    LOBYTE(v17) = 1;
    return (char)v17;
  }
  v17 = AssetManager__GetAssetData((AssetManager_o *)Status, this->fields.assetBundleDic, name, v24);
  if ( v17 )
  {
    v25 = v17;
    v26 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v26,
      (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_string___ctor__);
    objectList = v25->fields.objectList;
    if ( objectList )
    {
      v30 = *(_QWORD *)&resourceNames->max_length;
      v44 = v25;
      if ( (int)v30 >= 1 )
      {
        v31 = 0LL;
        while ( 1 )
        {
          if ( v31 >= (unsigned int)v30 )
            goto LABEL_42;
          max_length = objectList->max_length;
          v33 = (Il2CppObject *)resourceNames->m_Items[v31];
          if ( max_length >= 1 )
            break;
LABEL_22:
          if ( !v26 )
            goto LABEL_41;
          items = v26->fields._items;
          v36 = Method_System_Collections_Generic_List_string__Add__;
          ++v26->fields._version;
          if ( !items )
            goto LABEL_41;
          size = v26->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v26,
              v33,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
          }
          else
          {
            v38 = &items->obj.klass + size;
            v26->fields._size = size + 1;
            v38[4] = (Il2CppClass *)v33;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v38 + 4), (int32_t)v33, v27, v28);
          }
LABEL_27:
          LODWORD(v30) = resourceNames->max_length;
          if ( (__int64)++v31 >= (int)v30 )
            goto LABEL_28;
        }
        v34 = 0LL;
        while ( (unsigned int)v34 < max_length )
        {
          assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)objectList->m_Items[v34];
          if ( !assetBundleReleaseDic )
            goto LABEL_41;
          assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_Object__get_name(
                                                                                               (UnityEngine_Object_o *)assetBundleReleaseDic,
                                                                                               0LL);
          if ( !v33 )
            goto LABEL_41;
          assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)System_String__Equals_62485728(
                                                                                               (System_String_o *)v33,
                                                                                               (System_String_o *)assetBundleReleaseDic,
                                                                                               0LL);
          if ( ((unsigned __int8)assetBundleReleaseDic & 1) != 0 )
            goto LABEL_27;
          max_length = objectList->max_length;
          if ( (int)++v34 >= max_length )
            goto LABEL_22;
        }
LABEL_42:
        sub_1BCB25C(assetBundleReleaseDic, v19, v27);
      }
LABEL_28:
      v25 = v44;
      if ( !v26 )
LABEL_41:
        sub_1BCB254(assetBundleReleaseDic, v19);
    }
    else
    {
      if ( !v26 )
        goto LABEL_41;
      System_Collections_Generic_List_object___AddRange(
        v26,
        (System_Collections_Generic_IEnumerable_T__o *)resourceNames,
        (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_string__AddRange__);
    }
    v39 = v26->fields._size;
    AssetData__AddEntry(v25, 0LL);
    if ( v39 < 1 )
    {
      if ( callbackFunc )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, AssetData_o *, _QWORD))callbackFunc->fields.m_target)(
          callbackFunc->fields.original_method_info,
          v25,
          *(_QWORD *)&callbackFunc->fields.extra_arg);
    }
    else
    {
      v40 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                     v26,
                                     (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_string__ToArray__);
      AssetManager__AddLoadWaitStatus_39746512(this, v25, callbackFunc, v40, v41);
      this->fields.loadParallelMax = loadParallelMax;
      AssetManager__LoadStart(this, v42);
    }
    goto LABEL_39;
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
  void *processingAssetLoaderList; // x0
  Il2CppObject *v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *downLoadWaitList; // x8
  struct System_Collections_Generic_List_AssetLoader__o *v24; // x8
  Il2CppObject *v25; // x0
  __int64 v26; // x21
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 v29; // x22
  __int64 v30; // x8
  System_String_o **v31; // x8
  __int64 v32; // x8
  Il2CppObject *v33; // x0
  Il2CppObject **v34; // x22
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  __int64 v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  __int64 v42; // x8
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  __int64 v45; // x1
  const MethodInfo *v46; // x2
  AssetLoader_LoadEndDataHandler_o *v47; // x1
  __int64 v48; // x19
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B1B53C & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__Dispose__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__MoveNext__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__get_Current__, v5);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_AddComponent_AssetLoader___, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_AssetLoader__Add__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_AssetLoader__GetEnumerator__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v9);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__, v12);
    sub_1BCAFF8(&Method_AssetManager___c__DisplayClass151_0__LoadStart_b__0__, v13);
    sub_1BCAFF8(&AssetManager___c__DisplayClass151_0_TypeInfo, v14);
    sub_1BCAFF8(&StringLiteral_5182/*"DelayLoadStart"*/, v15);
    byte_4B1B53C = 1;
  }
  memset(&v50, 0, sizeof(v50));
  v16 = sub_1BCB244(AssetManager___c__DisplayClass151_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_49;
  *(_QWORD *)(v16 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v16 + 16), (int32_t)this, v19, v20);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B17950 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v18);
    byte_4B17950 = 1;
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v49,
      (System_Collections_Generic_List_object__o *)processingAssetLoaderList,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_AssetLoader__GetEnumerator__);
    v50 = v49;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v50,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_AssetLoader__MoveNext__) )
      ;
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v50,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_AssetLoader__Dispose__);
  }
  downLoadWaitList = this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
    goto LABEL_49;
  if ( downLoadWaitList->fields._size <= 0 )
    return 0;
  v24 = this->fields.processingAssetLoaderList;
  if ( !v24 )
    goto LABEL_49;
  if ( v24->fields._size >= this->fields.loadParallelMax )
    return 0;
  UnityEngine_MonoBehaviour__StartCoroutine(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5182/*"DelayLoadStart"*/,
    0LL);
  processingAssetLoaderList = this->fields.downLoadWaitList;
  if ( !processingAssetLoaderList
    || (v25 = System_Collections_Generic_Queue_object___Dequeue(
                (System_Collections_Generic_Queue_T__o *)processingAssetLoaderList,
                (const MethodInfo_382E998 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__),
        *(_QWORD *)(v16 + 24) = v25,
        v26 = v16 + 24,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v16 + 24), (int32_t)v25, v27, v28),
        (v29 = *(_QWORD *)(v16 + 24)) == 0) )
  {
LABEL_49:
    sub_1BCB254(processingAssetLoaderList, v18);
  }
  if ( (byte_4B1B550 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_1/*""*/, v18);
    byte_4B1B550 = 1;
  }
  v30 = *(_QWORD *)(v29 + 16);
  if ( v30 )
    v31 = (System_String_o **)(v30 + 24);
  else
    v31 = (System_String_o **)&StringLiteral_1/*""*/;
  processingAssetLoaderList = (void *)System_String__IsNullOrEmpty(*v31, 0LL);
  if ( ((unsigned __int8)processingAssetLoaderList & 1) == 0 )
  {
    processingAssetLoaderList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( processingAssetLoaderList )
    {
      v33 = UnityEngine_GameObject__AddComponent_object_(
              (UnityEngine_GameObject_o *)processingAssetLoaderList,
              (const MethodInfo_306E628 *)Method_UnityEngine_GameObject_AddComponent_AssetLoader___);
      *(_QWORD *)(v16 + 32) = v33;
      v34 = (Il2CppObject **)(v16 + 32);
      sub_1BCAF9C((CGThumbnailListItem_o *)(v16 + 32), (int32_t)v33, v35, v36);
      processingAssetLoaderList = this->fields.processingAssetLoaderList;
      if ( processingAssetLoaderList )
      {
        v18 = *v34;
        v39 = *((_QWORD *)processingAssetLoaderList + 2);
        v40 = Method_System_Collections_Generic_List_AssetLoader__Add__;
        ++*((_DWORD *)processingAssetLoaderList + 7);
        if ( v39 )
        {
          v41 = *((int *)processingAssetLoaderList + 6);
          if ( (unsigned int)v41 >= *(_DWORD *)(v39 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)processingAssetLoaderList,
              v18,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          }
          else
          {
            v42 = v39 + 8 * v41;
            *((_DWORD *)processingAssetLoaderList + 6) = v41 + 1;
            *(_QWORD *)(v42 + 32) = v18;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v42 + 32), (int32_t)v18, v37, v38);
          }
          if ( *(_QWORD *)v26 )
          {
            processingAssetLoaderList = *v34;
            if ( *v34 )
            {
              v45 = *(_QWORD *)(*(_QWORD *)v26 + 16LL);
              *((_QWORD *)processingAssetLoaderList + 4) = v45;
              sub_1BCAF9C((CGThumbnailListItem_o *)((char *)processingAssetLoaderList + 32), v45, v43, v44);
              if ( *(_QWORD *)v26 )
              {
                processingAssetLoaderList = *v34;
                if ( *v34 )
                {
                  v47 = *(AssetLoader_LoadEndDataHandler_o **)(*(_QWORD *)v26 + 32LL);
                  if ( v47 )
                    AssetLoader__add_endCallback2((AssetLoader_o *)processingAssetLoaderList, v47, v46);
                  v48 = sub_1BCB244(System_Action_TypeInfo);
                  System_Action___ctor(
                    (System_Action_o *)v48,
                    (Il2CppObject *)v16,
                    Method_AssetManager___c__DisplayClass151_0__LoadStart_b__0__,
                    0LL);
                  if ( v48 )
                  {
                    (*(void (__fastcall **)(_QWORD, _QWORD))(v48 + 24))(*(_QWORD *)(v48 + 64), *(_QWORD *)(v48 + 40));
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
  if ( !*(_QWORD *)v26 )
    goto LABEL_49;
  v32 = *(_QWORD *)(*(_QWORD *)v26 + 24LL);
  if ( v32 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(v32 + 24))(*(_QWORD *)(v32 + 64), *(_QWORD *)(v32 + 40));
  return AssetManager__LoadStart(this, (const MethodInfo *)v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetManager__OnClickRetryDialog(AssetManager_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ManagementManager_c *v7; // x0
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_4B1B530 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Application_TypeInfo, isDecide);
    sub_1BCAFF8(&ManagementManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v6);
    byte_4B1B530 = 1;
  }
  if ( isDecide )
  {
    this->fields.isErrorDialog = 0;
  }
  else
  {
    if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    if ( !byte_4B1B4DA )
    {
      sub_1BCAFF8(&ManagementManager_TypeInfo, isDecide);
      byte_4B1B4DA = 1;
    }
    v7 = ManagementManager_TypeInfo;
    if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
      v7 = ManagementManager_TypeInfo;
    }
    if ( v7->static_fields->isDuringStartup )
    {
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__Quit_69931008(0LL);
    }
    else
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
      if ( !Instance )
        sub_1BCB254(0LL, v9);
      ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0LL);
    }
  }
}


void __fastcall AssetManager__OnClickWaitDebugDialog(AssetManager_o *this, bool isDecide, const MethodInfo *method)
{
  this->fields.isErrorDialog = 0;
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
  _BOOL4 isRequestDownload; // w23
  int32_t v9; // w21
  Il2CppObject *Item; // x22
  struct AssetData_o *data; // x8

  v4 = this;
  if ( (byte_4B1B53E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_AssetLoader__RemoveAt__, loader);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v6);
    this = (AssetManager_o *)sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    byte_4B1B53E = 1;
  }
  if ( !loader )
    goto LABEL_11;
  this = (AssetManager_o *)v4->fields.processingAssetLoaderList;
  if ( !this )
    goto LABEL_11;
  isRequestDownload = loader->fields.isRequestDownload;
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= SLODWORD(this->fields.m_CancellationTokenSource) )
      goto LABEL_15;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)this,
             v9,
             (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (AssetManager_o *)UnityEngine_Object__op_Equality(
                               (UnityEngine_Object_o *)Item,
                               (UnityEngine_Object_o *)loader,
                               0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    this = (AssetManager_o *)v4->fields.processingAssetLoaderList;
    ++v9;
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
    sub_1BCB254(this, loader);
  }
  System_Collections_Generic_List_object___RemoveAt(
    (System_Collections_Generic_List_object__o *)this,
    v9,
    (const MethodInfo_36BB3A4 *)Method_System_Collections_Generic_List_AssetLoader__RemoveAt__);
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


void __fastcall AssetManager__PauseDownloadAssetStorage(AssetManager_o *this, const MethodInfo *method)
{
  if ( !this->fields.isPauseDownload )
    this->fields.isPauseDownload = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetManager__ReleaseAsset(
        AssetManager_o *this,
        int32_t type,
        System_String_o *name,
        const MethodInfo *method)
{
  AssetData_o *Asset; // x0
  AssetData_o *v8; // x21
  bool v9; // w0
  __int64 v10; // x1
  struct System_Collections_Generic_Dictionary_string__AssetData__o *assetResourceDic; // x0

  if ( (byte_4B1B53F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__, *(_QWORD *)&type);
    byte_4B1B53F = 1;
  }
  Asset = AssetManager__GetAsset(this, type, name, method);
  if ( Asset )
  {
    v8 = Asset;
    v9 = AssetData__RemoveEntry(Asset, 0LL);
    if ( type == 1 && v9 )
    {
      assetResourceDic = this->fields.assetResourceDic;
      if ( !assetResourceDic )
        sub_1BCB254(0LL, v10);
      System_Collections_Generic_Dictionary_object__object___Remove(
        (System_Collections_Generic_Dictionary_object__object__o *)assetResourceDic,
        (Il2CppObject *)v8->fields.name,
        (const MethodInfo_3387274 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
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
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *assetResourceDic; // x0

  v5 = this;
  if ( (byte_4B1B547 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_1BCAFF8(
                               &Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__,
                               name);
    byte_4B1B547 = 1;
  }
  AssetData = AssetManager__GetAssetData(this, v5->fields.assetResourceDic, name, v3);
  if ( AssetData && AssetData__RemoveEntry(AssetData, 0LL) )
  {
    assetResourceDic = (System_Collections_Generic_Dictionary_object__object__o *)v5->fields.assetResourceDic;
    if ( !assetResourceDic )
      sub_1BCB254(0LL, v7);
    System_Collections_Generic_Dictionary_object__object___Remove(
      assetResourceDic,
      (Il2CppObject *)name,
      (const MethodInfo_3387274 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
  }
}


void __fastcall AssetManager__ReleaseAssetStorage(
        AssetManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AssetData_o *AssetData; // x0

  AssetData = AssetManager__GetAssetData(this, this->fields.assetBundleDic, name, v3);
  if ( AssetData )
    AssetData__RemoveEntry(AssetData, 0LL);
}


void __fastcall AssetManager__ReleaseAssetStorageAll(
        AssetManager_o *this,
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v3; // x8
  unsigned __int64 v6; // x21

  if ( !nameList )
    sub_1BCB254(this, 0LL);
  v3 = *(_QWORD *)&nameList->max_length;
  if ( (int)v3 >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v3 )
        sub_1BCB25C(this, nameList, method);
      AssetManager__ReleaseAssetStorageEntryAll(this, nameList->m_Items[v6], method);
      LODWORD(v3) = nameList->max_length;
      ++v6;
    }
    while ( (__int64)v6 < (int)v3 );
  }
}


void __fastcall AssetManager__ReleaseAssetStorageEntryAll(
        AssetManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AssetData_o *AssetData; // x0

  AssetData = AssetManager__GetAssetData(this, this->fields.assetBundleDic, name, v3);
  if ( AssetData )
    AssetData__RemoveEntryAll(AssetData, 0LL);
}


void __fastcall AssetManager__ReleaseAssetStorage_39731812(
        AssetManager_o *this,
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v3; // x8
  unsigned __int64 v6; // x21

  if ( !nameList )
    sub_1BCB254(this, 0LL);
  v3 = *(_QWORD *)&nameList->max_length;
  if ( (int)v3 >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v3 )
        sub_1BCB25C(this, nameList, method);
      AssetManager__ReleaseAssetStorage(this, nameList->m_Items[v6], method);
      LODWORD(v3) = nameList->max_length;
      ++v6;
    }
    while ( (__int64)v6 < (int)v3 );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetManager__ReleaseAsset_39722536(
        AssetManager_o *this,
        int32_t type,
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v4; // x8
  unsigned __int64 v8; // x22

  if ( !nameList )
    sub_1BCB254(this, type);
  v4 = *(_QWORD *)&nameList->max_length;
  if ( (int)v4 >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)v4 )
        sub_1BCB25C(this, *(_QWORD *)&type, nameList);
      AssetManager__ReleaseAsset(this, type, nameList->m_Items[v8], method);
      LODWORD(v4) = nameList->max_length;
      ++v8;
    }
    while ( (__int64)v8 < (int)v4 );
  }
}


void __fastcall AssetManager__ReleaseAsset_39722836(
        AssetManager_o *this,
        AssetData_o *assetInfo,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( assetInfo )
    AssetManager__ReleaseAsset(this, assetInfo->fields.type, assetInfo->fields.name, v3);
}


void __fastcall AssetManager__ReleaseAsset_39723036(
        AssetManager_o *this,
        AssetData_array *assetInfoList,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v4; // x8
  unsigned __int64 v7; // x21
  AssetData_o *v8; // x8

  if ( !assetInfoList )
    sub_1BCB254(this, 0LL);
  v4 = *(_QWORD *)&assetInfoList->max_length;
  if ( (int)v4 >= 1 )
  {
    v7 = 0LL;
    do
    {
      if ( v7 >= (unsigned int)v4 )
        sub_1BCB25C(this, assetInfoList, method);
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
  if ( (byte_4B1B53B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__AssetData__Add__, info);
    this = (AssetManager_o *)sub_1BCAFF8(
                               &Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__,
                               v5);
    byte_4B1B53B = 1;
  }
  if ( !info )
    goto LABEL_11;
  if ( info->fields.entryCount <= 0 && !AssetData__get_IsEmpty(info, 0LL) )
  {
    this = (AssetManager_o *)v4->fields.assetBundleReleaseDic;
    if ( this )
    {
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)this,
             (Il2CppObject *)info->fields.name,
             (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__) )
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
          (const MethodInfo_3385D78 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
        return;
      }
    }
LABEL_11:
    sub_1BCB254(this, info);
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
  if ( !this->fields.requestUnloadUnusedAssets )
  {
    this->fields.requestUnloadUnusedAssets = 1;
    v4 = AssetManager__coUnloadUnusedAssets(this, (const MethodInfo *)callback);
    UnityEngine_MonoBehaviour__StartCoroutine_70121648((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
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
  struct System_Collections_Generic_Dictionary_string__AssetData__o *assetBundleDic; // x8
  System_String_o *v13; // x19
  _BOOL8 v14; // x0
  __int64 v15; // x1
  Il2CppObject *currentValue; // x20
  System_String_o *monitor; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v18; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B1B52A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, path);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v5);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v6);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v8);
    sub_1BCAFF8(&StringLiteral_1039/*"/"*/, v9);
    byte_4B1B52A = 1;
  }
  memset(&v18, 0, sizeof(v18));
  Values = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)System_String__Concat_62450424(
                                                                                      path,
                                                                                      (System_String_o *)StringLiteral_1039/*"/"*/,
                                                                                      0LL);
  assetBundleDic = this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (v13 = (System_String_o *)Values,
        (Values = System_Collections_Generic_Dictionary_object__object___get_Values(
                    (System_Collections_Generic_Dictionary_object__object__o *)assetBundleDic,
                    (const MethodInfo_3385BA8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL) )
  {
    sub_1BCB254(Values, v11);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v18,
    Values,
    (const MethodInfo_39EC574 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v18,
            (const MethodInfo_3481F34 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v14 )
      break;
    currentValue = v18.fields._currentValue;
    if ( !v18.fields._currentValue )
      sub_1BCB254(v14, v15);
    monitor = (System_String_o *)v18.fields._currentValue[1].monitor;
    if ( !monitor )
      sub_1BCB254(0LL, v15);
    if ( System_String__StartsWith(monitor, v13, 0LL) )
      AssetData__ResetVersion((AssetData_o *)currentValue, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v18,
    (const MethodInfo_3481F30 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
}


void __fastcall AssetManager__ResumeDownloadAssetStorage(AssetManager_o *this, const MethodInfo *method)
{
  if ( this->fields.isPauseDownload )
  {
    this->fields.isPauseDownload = 0;
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

  if ( (byte_4B1B4EE & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, v1);
    sub_1BCAFF8(&ManagerConfig_TypeInfo, v2);
    byte_4B1B4EE = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( !v3->static_fields->UseStandaloneAsset )
  {
    v4 = AssetManager_TypeInfo;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4B1B4EF & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, v1);
    sub_1BCAFF8(&ManagerConfig_TypeInfo, v2);
    byte_4B1B4EF = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseStandaloneAsset )
    return 0;
  v4 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v4 = AssetManager_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(v4->static_fields->SAVE_KEY, v4->static_fields->SAVE_DATA_OFFLINE, 0LL);
  if ( System_String__op_Equality(String, AssetManager_TypeInfo->static_fields->SAVE_DATA_ONLINE, 0LL) )
    return 0;
  v7 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
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
  System_Collections_Generic_Dictionary_object__object__o *assetBundleDic; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *currentValue; // x20
  const MethodInfo *v11; // x2
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B1B522 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, method);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v3);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v4);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v6);
    byte_4B1B522 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      assetBundleDic,
                                                                                      (const MethodInfo_3385BA8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
    sub_1BCB254(assetBundleDic, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v12,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_39EC574 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v12,
           (const MethodInfo_3481F34 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v8 )
      break;
    currentValue = v12.fields._currentValue;
    if ( !v12.fields._currentValue )
      sub_1BCB254(v8, v9);
    if ( AssetData__IsNeedUpdateVersion((AssetData_o *)v12.fields._currentValue, 0LL) )
      AssetManager__AddLoadWaitStatus_39735032(this, (AssetData_o *)currentValue, v11);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v12,
    (const MethodInfo_3481F30 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
}


void __fastcall AssetManager__StartConfigWriteRequestThread(AssetManager_o *this, const MethodInfo *method)
{
  if ( this->fields.writeRequestThread )
    this->fields.reserveWriteRequest = 1;
  else
    AssetManager__StartThreadConfigWriteRequest(this, method);
}


void __fastcall AssetManager__StartThreadConfigWriteRequest(AssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Threading_ThreadStart_o *v5; // x20
  System_Threading_Thread_o *v6; // x21
  struct System_Threading_Thread_o **p_writeRequestThread; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x1

  if ( (byte_4B1B532 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_AssetManager_ConfigWriteRequestThread__, method);
    sub_1BCAFF8(&System_Threading_ThreadStart_TypeInfo, v3);
    sub_1BCAFF8(&System_Threading_Thread_TypeInfo, v4);
    byte_4B1B532 = 1;
  }
  this->fields.reserveWriteRequest = 0;
  v5 = (System_Threading_ThreadStart_o *)sub_1BCB244(System_Threading_ThreadStart_TypeInfo);
  System_Threading_ThreadStart___ctor(v5, (Il2CppObject *)this, Method_AssetManager_ConfigWriteRequestThread__, 0LL);
  v6 = (System_Threading_Thread_o *)sub_1BCB244(System_Threading_Thread_TypeInfo);
  System_Threading_Thread___ctor(v6, v5, 0LL);
  this->fields.writeRequestThread = v6;
  p_writeRequestThread = &this->fields.writeRequestThread;
  sub_1BCAF9C((CGThumbnailListItem_o *)p_writeRequestThread, (int32_t)v6, v8, v9);
  if ( !*p_writeRequestThread )
    sub_1BCB254(0LL, v10);
  System_Threading_Thread__Start(*p_writeRequestThread, 0LL);
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
        const MethodInfo_2FFC370 *method)
{
  __int64 v8; // x1
  AssetData_o *AssetStorage; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *Object_object__50315216; // x1
  Il2CppObject *v13; // x19

  if ( !method->rgctx_data )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, path);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v8);
    if ( !method->rgctx_data )
      sub_1C1B4B8(method);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0LL);
  if ( AssetStorage )
    Object_object__50315216 = AssetData__GetObject_object__50315216(
                                AssetStorage,
                                name,
                                (const MethodInfo_2FFBFD0 *)method->rgctx_data->_2_AssetData_GetObject_T_);
  else
    Object_object__50315216 = 0LL;
  *data = Object_object__50315216;
  sub_1BCAF9C((CGThumbnailListItem_o *)data, (int32_t)Object_object__50315216, v10, v11);
  v13 = *data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0LL, 0LL);
}


bool __fastcall AssetManager__TryGetUIAtlas(
        UIAtlas_o **atlas,
        System_String_o *name,
        System_String_o *atlasName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  const MethodInfo *v10; // x1
  AssetData_o *AssetStorage; // x0
  Il2CppObject *Object_object__50315216; // x20
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *Component_object; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UnityEngine_Object_o *v18; // x19

  if ( (byte_4B1B548 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_AssetData_GetObject_GameObject____76915336, name);
    sub_1BCAFF8(&AssetManager_TypeInfo, v7);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v8);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v9);
    byte_4B1B548 = 1;
  }
  *atlas = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)atlas, 0, (int32_t)atlasName, method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(name, v10);
  if ( AssetStorage )
    Object_object__50315216 = AssetData__GetObject_object__50315216(
                                AssetStorage,
                                atlasName,
                                (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  else
    Object_object__50315216 = 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v13 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__50315216, 0LL, 0LL);
  if ( v13 )
  {
    if ( !Object_object__50315216 )
      sub_1BCB254(v13, v14);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object_object__50315216,
                         (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    *atlas = (UIAtlas_o *)Component_object;
    sub_1BCAF9C((CGThumbnailListItem_o *)atlas, (int32_t)Component_object, v16, v17);
  }
  v18 = (UnityEngine_Object_o *)*atlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetManager__UpdateLoadParallelMax(AssetManager_o *this, int32_t value, const MethodInfo *method)
{
  this->fields.loadParallelMax = value;
  AssetManager__LoadStart(this, *(const MethodInfo **)&value);
}


System_Collections_IEnumerator_o *__fastcall AssetManager__WaitForExecutionUnloadUnuseAssets(
        AssetManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B1B4EC & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_TypeInfo, method);
    byte_4B1B4EC = 1;
  }
  v3 = sub_1BCB244(AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall AssetManager___DownloadAssetStorageAttributeWithCheckDialog_b__118_0(
        AssetManager_o *this,
        const MethodInfo *method)
{
  AssetManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_AssetLoader__o *processingAssetLoaderList; // x8

  v2 = this;
  if ( (byte_4B1B54E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, method);
    sub_1BCAFF8(&SoundManager_TypeInfo, v3);
    this = (AssetManager_o *)sub_1BCAFF8(&StringLiteral_9251/*"NOW_LOADING"*/, v4);
    byte_4B1B54E = 1;
  }
  processingAssetLoaderList = v2->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
    sub_1BCB254(this, method);
  if ( processingAssetLoaderList->fields._size >= 1 )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playBgm((System_String_o *)StringLiteral_9251/*"NOW_LOADING"*/, 0LL);
  }
}


void __fastcall AssetManager__add_unloadCallbacks(
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

  if ( (byte_4B1B4EA & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_ResourceUnloadEventHandler_TypeInfo, value);
    byte_4B1B4EA = 1;
  }
  unloadCallbacks = this->fields.unloadCallbacks;
  p_unloadCallbacks = &this->fields.unloadCallbacks;
  v6 = (System_Delegate_o *)unloadCallbacks;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (AssetManager_ResourceUnloadEventHandler_c *)v8->klass != AssetManager_ResourceUnloadEventHandler_TypeInfo )
        break;
    }
    v9 = sub_1C05088(p_unloadCallbacks, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCB514(v8);
  AssetManager__remove_unloadCallbacks(v11, v12, v13);
}


void __fastcall AssetManager__cancelDownloadAssetStorage(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4B1B50D & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v1);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_4B1B50D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1BCB254(v4, v5);
    AssetManager__CancelDownloadAssetStorage((AssetManager_o *)Instance, v5);
  }
}


System_Collections_IEnumerator_o *__fastcall AssetManager__coUnloadUnusedAssets(
        AssetManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B1B533 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager__coUnloadUnusedAssets_d__141_TypeInfo, method);
    byte_4B1B533 = 1;
  }
  v3 = sub_1BCB244(AssetManager__coUnloadUnusedAssets_d__141_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


bool __fastcall AssetManager__compAssetStorage(
        System_String_o *name1,
        System_String_o *name2,
        const MethodInfo *method)
{
  int32_t stringLength; // w8

  if ( name1 )
  {
    if ( name2 )
      return System_String__Equals_62485728(name1, name2, 0LL);
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


bool __fastcall AssetManager__compAssetStorageList(
        System_String_array *list1,
        System_String_array *list2,
        const MethodInfo *method)
{
  System_String_array *v3; // x19
  __int64 v4; // x8
  System_String_array *v5; // x20
  unsigned __int64 v6; // x21
  __int64 v7; // x22

  v3 = list2;
  if ( list1 && (v4 = *(_QWORD *)&list1->max_length, v5 = list1, v4) )
  {
    if ( !list2 || (_DWORD)v4 != list2->max_length )
      return 0;
    if ( (int)v4 >= 1 )
    {
      if ( (unsigned int)*(_QWORD *)&list1->max_length )
      {
        v6 = 0LL;
        v7 = (unsigned int)*(_QWORD *)&list1->max_length - 1LL;
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
            list1 = (System_String_array *)System_String__Equals_62485728(
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
          if ( v7 == v6 )
            return 1;
          ++v6;
        }
        while ( v6 < v5->max_length );
      }
      sub_1BCB25C(list1, list2, method);
    }
  }
  else if ( list2 )
  {
    return list2->max_length == 0;
  }
  return 1;
}


bool __fastcall AssetManager__compAssetStorageList_39720596(
        AssetData_array *assetList,
        System_String_array *list,
        const MethodInfo *method)
{
  System_String_array *v3; // x19
  __int64 v4; // x8
  AssetData_array *v5; // x20
  unsigned __int64 v6; // x21
  __int64 v7; // x22
  AssetData_o *v8; // x8
  System_String_o *name; // x0

  v3 = list;
  if ( assetList && (v4 = *(_QWORD *)&assetList->max_length, v5 = assetList, v4) )
  {
    if ( !list || (_DWORD)v4 != list->max_length )
      return 0;
    if ( (int)v4 >= 1 )
    {
      if ( (unsigned int)*(_QWORD *)&assetList->max_length )
      {
        v6 = 0LL;
        v7 = (unsigned int)*(_QWORD *)&assetList->max_length - 1LL;
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
              sub_1BCB254(0LL, list);
            assetList = (AssetData_array *)System_String__Equals_62485728(name, (System_String_o *)list, 0LL);
            if ( ((unsigned __int8)assetList & 1) == 0 )
              return 0;
          }
          else if ( list )
          {
            return 0;
          }
          if ( v7 == v6 )
            return 1;
          ++v6;
        }
        while ( v6 < v5->max_length );
      }
      sub_1BCB25C(assetList, list, method);
    }
  }
  else if ( list )
  {
    return list->max_length == 0;
  }
  return 1;
}


bool __fastcall AssetManager__compAssetStorage_39720324(
        AssetData_o *data,
        System_String_o *name,
        const MethodInfo *method)
{
  struct System_String_o *v3; // x0
  int32_t stringLength; // w8

  if ( data && (v3 = data->fields.name) != 0LL )
  {
    if ( name )
      return System_String__Equals_62485728(v3, name, 0LL);
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


void __fastcall AssetManager__debugLog(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4B1B4F2 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v1);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_4B1B4F2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1BCB254(v4, v5);
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
  Il2CppObject *Instance; // x22
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4

  if ( (byte_4B1B510 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_4B1B510 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_1BCB254(v9, v10);
  return AssetManager__DownloadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, v11);
}


bool __fastcall AssetManager__downloadAssetStorage_39727092(
        System_String_array *nameList,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4B1B511 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_4B1B511 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v7 )
    return 0;
  if ( !Instance )
    sub_1BCB254(v7, v8);
  return AssetManager__DownloadAssetStorage_39727284((AssetManager_o *)Instance, nameList, callbackFunc, 1, v9);
}


AssetData_o *__fastcall AssetManager__getAsset(int32_t type, System_String_o *name, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4B1B4FF & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, name);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_4B1B4FF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v7 )
    return 0LL;
  if ( !Instance )
    sub_1BCB254(v7, v8);
  return AssetManager__GetAsset((AssetManager_o *)Instance, type, name, v9);
}


AssetData_o *__fastcall AssetManager__getAssetResource(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4B1B51D & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4B1B51D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0LL;
  if ( !Instance )
    sub_1BCB254(v5, v6);
  return AssetManager__GetAssetResource((AssetManager_o *)Instance, name, v7);
}


AssetData_o *__fastcall AssetManager__getAssetStorage(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4B1B516 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4B1B516 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0LL;
  if ( !Instance )
    sub_1BCB254(v5, v6);
  return AssetManager__GetAssetStorage((AssetManager_o *)Instance, name, v7);
}


AssetData_o *__fastcall AssetManager__getAssetStorageData(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4B1B517 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4B1B517 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0LL;
  if ( !Instance )
    sub_1BCB254(v5, v6);
  return AssetManager__GetAssetData(
           (AssetManager_o *)v5,
           (System_Collections_Generic_Dictionary_string__AssetData__o *)Instance[4].klass,
           name,
           v7);
}


System_String_array *__fastcall AssetManager__getAssetStorageList(System_String_o *path, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4B1B50B & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4B1B50B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0LL;
  if ( !Instance )
    sub_1BCB254(v5, v6);
  return AssetManager__GetAssetStorageList((AssetManager_o *)Instance, path, v7);
}


AssetData_array *__fastcall AssetManager__getAssetStorage_39730648(
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4B1B518 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4B1B518 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0LL;
  if ( !Instance )
    sub_1BCB254(v5, v6);
  return AssetManager__GetAssetStorage_39730828((AssetManager_o *)Instance, nameList, v7);
}


bool __fastcall AssetManager__getAssetStorage_39731100(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4B1B519 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_4B1B519 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v7 )
    return 0;
  if ( !Instance )
    sub_1BCB254(v7, v8);
  return AssetManager__GetAssetStorage_39731288((AssetManager_o *)Instance, name, callbackFunc, v9);
}


bool __fastcall AssetManager__getAsset_39721352(
        int32_t type,
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *Instance; // x22
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4

  if ( (byte_4B1B500 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, name);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_4B1B500 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_1BCB254(v9, v10);
  return AssetManager__GetAsset_39721560((AssetManager_o *)Instance, type, name, callbackFunc, v11);
}


bool __fastcall AssetManager__getAsset_39721660(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4B1B501 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_4B1B501 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v7 )
    return 0;
  if ( !Instance )
    sub_1BCB254(v7, v8);
  return AssetManager__GetAsset_39721848((AssetManager_o *)Instance, name, callbackFunc, v9);
}


int64_t __fastcall AssetManager__getDownloadSize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4B1B506 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v1);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_4B1B506 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v4 )
    return 0LL;
  if ( !Instance )
    sub_1BCB254(v4, v5);
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
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x8
  unsigned __int64 v18; // x21
  int v20; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B1B4FC & 1) == 0 )
  {
    sub_1BCAFF8(&int_TypeInfo, method);
    sub_1BCAFF8(&System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo, v3);
    sub_1BCAFF8(&System_Text_StringBuilder_TypeInfo, v4);
    sub_1BCAFF8(&System_Text_UTF8Encoding_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_24825/*"{0,0:x2}"*/, v6);
    sub_1BCAFF8(&StringLiteral_1010/*".bin"*/, v7);
    byte_4B1B4FC = 1;
  }
  v8 = (System_Security_Cryptography_SHA1CryptoServiceProvider_o *)sub_1BCB244(System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_SHA1CryptoServiceProvider___ctor(v8, 0LL);
  v9 = (System_Text_UTF8Encoding_o *)sub_1BCB244(System_Text_UTF8Encoding_TypeInfo);
  System_Text_UTF8Encoding___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_13;
  appended = (System_Text_StringBuilder_o *)((__int64 (__fastcall *)(System_Text_UTF8Encoding_o *, System_String_o *, Il2CppMethodPointer))v9->klass->vtable._18_GetBytes.method)(
                                              v9,
                                              name,
                                              v9->klass->vtable._19_GetBytes.methodPtr);
  if ( !v8 )
    goto LABEL_13;
  v12 = System_Security_Cryptography_HashAlgorithm__ComputeHash(
          (System_Security_Cryptography_HashAlgorithm_o *)v8,
          (System_Byte_array *)appended,
          0LL);
  v13 = (System_Text_StringBuilder_o *)sub_1BCB244(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v13, 0LL);
  System_Security_Cryptography_HashAlgorithm__Clear((System_Security_Cryptography_HashAlgorithm_o *)v8, 0LL);
  if ( !v12 )
    goto LABEL_13;
  v17 = *(_QWORD *)&v12->max_length;
  if ( (int)v17 >= 1 )
  {
    v18 = 0LL;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)v17 )
        sub_1BCB25C(appended, v11, v14);
      v20 = v12->m_Items[v18 + 4] ^ 0xAA;
      appended = (System_Text_StringBuilder_o *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v14, v15, v16);
      if ( !v13 )
        break;
      appended = System_Text_StringBuilder__AppendFormat(
                   v13,
                   (System_String_o *)StringLiteral_24825/*"{0,0:x2}"*/,
                   (Il2CppObject *)appended,
                   0LL);
      LODWORD(v17) = v12->max_length;
      if ( (__int64)++v18 >= (int)v17 )
        goto LABEL_11;
    }
LABEL_13:
    sub_1BCB254(appended, v11);
  }
LABEL_11:
  if ( !v13 )
    goto LABEL_13;
  System_Text_StringBuilder__Append_62534368(v13, (System_String_o *)StringLiteral_1010/*".bin"*/, 0LL);
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
  int64_t v10; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1B4FB & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_1757/*"?t="*/, v3);
    sub_1BCAFF8(&StringLiteral_20853/*"jar:"*/, v4);
    byte_4B1B4FB = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !url )
    sub_1BCB254(v5, method);
  if ( !System_String__StartsWith(url, NetworkManager_TypeInfo->static_fields->FILE_URL_SCHEME, 0LL) )
  {
    v6 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v6 = NetworkManager_TypeInfo;
    }
    v7 = System_String__Concat_62450424((System_String_o *)StringLiteral_20853/*"jar:"*/, v6->static_fields->FILE_URL_SCHEME, 0LL);
    if ( !System_String__StartsWith(url, v7, 0LL) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v10 = NetworkManager__getTime(0LL) / 300;
      v8 = System_Int64__ToString((int64_t)&v10, 0LL);
      return System_String__Concat_62488672(url, (System_String_o *)StringLiteral_1757/*"?t="*/, v8, 0LL);
    }
  }
  return url;
}


System_String_o *__fastcall AssetManager__getUrlString_39719520(AssetData_o *data, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  AssetManager_c *v8; // x0
  char *DataServerAddress; // x0
  __int64 v10; // x1
  System_String_o *v11; // x20
  System_String_o *DownloadName; // x0
  System_String_o *v13; // x21
  NetworkManager_c *v14; // x0
  System_String_o *v15; // x0
  __int64 v16; // x2
  const MethodInfo *v17; // x3
  char *v18; // x20
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  const MethodInfo *v21; // x3
  __int64 v22; // x1
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  const MethodInfo *v25; // x3
  struct System_String_o *assetBundleDateVersion; // x1
  const MethodInfo *v27; // x3
  int32_t v28; // w1
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x3
  int32_t v31; // w1
  const MethodInfo *v32; // x3
  __int64 v34; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1B4FD & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, method);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v3);
    sub_1BCAFF8(&string___TypeInfo, v4);
    sub_1BCAFF8(&StringLiteral_15973/*"_"*/, v5);
    sub_1BCAFF8(&StringLiteral_20853/*"jar:"*/, v6);
    sub_1BCAFF8(&StringLiteral_1758/*"?v="*/, v7);
    byte_4B1B4FD = 1;
  }
  v8 = AssetManager_TypeInfo;
  v34 = 0LL;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  DataServerAddress = (char *)AssetManager__get_DataServerAddress((const MethodInfo *)v8);
  if ( !data )
    goto LABEL_27;
  v11 = (System_String_o *)DataServerAddress;
  DownloadName = AssetData__get_DownloadName(data, 0LL);
  DataServerAddress = (char *)System_String__Concat_62450424(v11, DownloadName, 0LL);
  v13 = (System_String_o *)DataServerAddress;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !v13 )
    goto LABEL_27;
  if ( !System_String__StartsWith(v13, NetworkManager_TypeInfo->static_fields->FILE_URL_SCHEME, 0LL) )
  {
    v14 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v14 = NetworkManager_TypeInfo;
    }
    v15 = System_String__Concat_62450424(
            (System_String_o *)StringLiteral_20853/*"jar:"*/,
            v14->static_fields->FILE_URL_SCHEME,
            0LL);
    if ( !System_String__StartsWith(v13, v15, 0LL) )
    {
      DataServerAddress = (char *)sub_1BCB0A0(string___TypeInfo, 9LL);
      if ( DataServerAddress )
      {
        v18 = DataServerAddress;
        if ( !*((_DWORD *)DataServerAddress + 6) )
          goto LABEL_28;
        *((_QWORD *)DataServerAddress + 4) = v13;
        sub_1BCAF9C((CGThumbnailListItem_o *)(DataServerAddress + 32), (int32_t)v13, v16, v17);
        if ( *((_DWORD *)v18 + 6) <= 1u )
          goto LABEL_28;
        v20 = StringLiteral_1758/*"?v="*/;
        *((_QWORD *)v18 + 5) = StringLiteral_1758/*"?v="*/;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 40), v20, v16, v19);
        DataServerAddress = (char *)AssetManager_TypeInfo;
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          DataServerAddress = (char *)AssetManager_TypeInfo;
        }
        if ( *((_DWORD *)v18 + 6) <= 2u )
          goto LABEL_28;
        v22 = *(_QWORD *)(*((_QWORD *)DataServerAddress + 23) + 80LL);
        *((_QWORD *)v18 + 6) = v22;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 48), v22, v16, v21);
        if ( *((_DWORD *)v18 + 6) <= 3u )
          goto LABEL_28;
        v24 = StringLiteral_15973/*"_"*/;
        *((_QWORD *)v18 + 7) = StringLiteral_15973/*"_"*/;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 56), v24, v16, v23);
        if ( *((_DWORD *)v18 + 6) <= 4u )
          goto LABEL_28;
        assetBundleDateVersion = AssetManager_TypeInfo->static_fields->assetBundleDateVersion;
        *((_QWORD *)v18 + 8) = assetBundleDateVersion;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 64), (int32_t)assetBundleDateVersion, v16, v25);
        if ( *((_DWORD *)v18 + 6) <= 5u )
          goto LABEL_28;
        v28 = StringLiteral_15973/*"_"*/;
        *((_QWORD *)v18 + 9) = StringLiteral_15973/*"_"*/;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 72), v28, v16, v27);
        HIDWORD(v34) = data->fields.size;
        DataServerAddress = (char *)System_Int32__ToString((int32_t)&v34 + 4, 0LL);
        if ( *((_DWORD *)v18 + 6) <= 6u
          || (*((_QWORD *)v18 + 10) = DataServerAddress,
              sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 80), (int32_t)DataServerAddress, v16, v29),
              *((_DWORD *)v18 + 6) <= 7u)
          || (v31 = StringLiteral_15973/*"_"*/,
              *((_QWORD *)v18 + 11) = StringLiteral_15973/*"_"*/,
              sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 88), v31, v16, v30),
              LODWORD(v34) = data->fields.crc,
              DataServerAddress = (char *)System_UInt32__ToString((uint32_t)&v34, 0LL),
              *((_DWORD *)v18 + 6) <= 8u) )
        {
LABEL_28:
          sub_1BCB25C(DataServerAddress, v10, v16);
        }
        *((_QWORD *)v18 + 12) = DataServerAddress;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 96), (int32_t)DataServerAddress, v16, v32);
        return System_String__Concat_62490940((System_String_array *)v18, 0LL);
      }
LABEL_27:
      sub_1BCB254(DataServerAddress, v10);
    }
  }
  return v13;
}


System_String_o *__fastcall AssetManager__get_CacheListFile(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_o *Path; // x0
  AssetManager_c *v3; // x8
  System_String_o *v4; // x19

  if ( (byte_4B1B4F6 & 1) == 0 )
  {
    method = (const MethodInfo *)sub_1BCAFF8(&AssetManager_TypeInfo, v1);
    byte_4B1B4F6 = 1;
  }
  Path = AssetStorageCache__GetPath(method);
  v3 = AssetManager_TypeInfo;
  v4 = Path;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v3 = AssetManager_TypeInfo;
  }
  return System_String__Concat_62450424(v4, v3->static_fields->configFileName, 0LL);
}


System_String_o *__fastcall AssetManager__get_CachePathName(const MethodInfo *method)
{
  __int64 v1; // x1
  AssetManager_c *v2; // x0

  if ( (byte_4B1B4F4 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, v1);
    byte_4B1B4F4 = 1;
  }
  v2 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4B1B4F5 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, v1);
    byte_4B1B4F5 = 1;
  }
  v2 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  DataServerAddress = AssetManager__get_DataServerAddress((const MethodInfo *)v2);
  return System_String__Concat_62450424(DataServerAddress, AssetManager_TypeInfo->static_fields->configFileName, 0LL);
}


System_String_o *__fastcall AssetManager__get_DataServerAddress(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_4B1B4F3 & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v1);
    byte_4B1B4F3 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B1B65C )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v1);
    byte_4B1B65C = 1;
  }
  v2 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v2 = NetworkManager_TypeInfo;
  }
  return v2->static_fields->dataServerAddress;
}


bool __fastcall AssetManager__get_DispLog(AssetManager_o *this, const MethodInfo *method)
{
  return this->fields._DispLog;
}


bool __fastcall AssetManager__get_InProgressUnloadUnusedAssets(AssetManager_o *this, const MethodInfo *method)
{
  return this->fields.inProgressUnloadUnusedAssets;
}


bool __fastcall AssetManager__get_IsOnline(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  ManagerConfig_c *v3; // x0
  AssetManager_c *v5; // x0
  System_String_o *String; // x0

  if ( (byte_4B1B4ED & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, v1);
    sub_1BCAFF8(&ManagerConfig_TypeInfo, v2);
    byte_4B1B4ED = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseStandaloneAsset )
    return 0;
  v5 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
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
  System_Collections_Generic_Dictionary_object__object__o *assetBundleDic; // x0
  _BOOL8 v10; // x0
  __int64 v11; // x1
  AssetData_o *currentValue; // x20
  char v13; // w19
  int v14; // w20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v16; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B1B523 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, attrib);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v5);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v6);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v8);
    byte_4B1B523 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      assetBundleDic,
                                                                                      (const MethodInfo_3385BA8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
    sub_1BCB254(assetBundleDic, attrib);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v16,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_39EC574 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v16,
            (const MethodInfo_3481F34 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v10 )
      break;
    currentValue = (AssetData_o *)v16.fields._currentValue;
    if ( !v16.fields._currentValue )
      sub_1BCB254(v10, v11);
    if ( AssetData__IsDownloadOldVersion((AssetData_o *)v16.fields._currentValue, 0LL)
      || System_String__op_Equality(attrib, currentValue->fields.attrib, 0LL)
      && AssetData__IsNeedUpdateVersion(currentValue, 0LL) )
    {
      v13 = 1;
      v14 = 5;
      goto LABEL_13;
    }
  }
  v13 = 0;
  v14 = 6;
LABEL_13:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v16,
    (const MethodInfo_3481F30 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  return v13 & (v14 == 5);
}


bool __fastcall AssetManager__isExistAssetStorage(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4B1B507 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4B1B507 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0;
  if ( !Instance )
    sub_1BCB254(v5, v6);
  return AssetManager__IsExistAssetStorage((AssetManager_o *)Instance, name, v7);
}


bool __fastcall AssetManager__isExistAssetStorage_39723564(System_String_array *nameList, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4B1B508 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4B1B508 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0;
  if ( !Instance )
    sub_1BCB254(v5, v6);
  return AssetManager__IsExistAssetStorage_39723744((AssetManager_o *)Instance, nameList, v7);
}


bool __fastcall AssetManager__isNeedDownload(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4B1B509 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4B1B509 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0;
  if ( !Instance )
    sub_1BCB254(v5, v6);
  return AssetManager__IsNeedDownload((AssetManager_o *)Instance, name, v7);
}


bool __fastcall AssetManager__isNeedDownload_39724104(System_String_array *nameList, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4B1B50A & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4B1B50A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0;
  if ( !Instance )
    sub_1BCB254(v5, v6);
  return AssetManager__IsNeedDownload_39724284((AssetManager_o *)Instance, nameList, v7);
}


bool __fastcall AssetManager__loadAsset(
        int32_t type,
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *Instance; // x22
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4

  if ( (byte_4B1B4FE & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, name);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_4B1B4FE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_1BCB254(v9, v10);
  return AssetManager__LoadAsset((AssetManager_o *)Instance, type, name, callbackFunc, v11);
}


AssetData_o *__fastcall AssetManager__loadAssetResource(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4B1B51C & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4B1B51C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0LL;
  if ( !Instance )
    sub_1BCB254(v5, v6);
  return AssetManager__LoadAssetResource((AssetManager_o *)Instance, name, v7);
}


bool __fastcall AssetManager__loadAssetStorage(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        int32_t maxParallelLoad,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *Instance; // x22
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4

  if ( (byte_4B1B512 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_4B1B512 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_1BCB254(v9, v10);
  return AssetManager__LoadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, v11);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AssetManager__loadAssetStorage_39729064(
        System_String_o *name,
        int32_t maxParallelLoad,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *Instance; // x22
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4

  if ( (byte_4B1B514 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&maxParallelLoad);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_4B1B514 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_1BCB254(v9, v10);
  return AssetManager__LoadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, v11);
}


bool __fastcall AssetManager__loadAssetStorage_39729272(
        System_String_array *nameList,
        System_Action_o *callbackFunc,
        int32_t loadParalleMax,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *Instance; // x22
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4

  if ( (byte_4B1B515 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_4B1B515 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_1BCB254(v9, v10);
  return AssetManager__LoadAssetStorage_39729480(
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
  Il2CppObject *Instance; // x23
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x5

  if ( (byte_4B1B513 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, resourceNames);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v9);
    byte_4B1B513 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v11 )
    return 0;
  if ( !Instance )
    sub_1BCB254(v11, v12);
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
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4B1B50E & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v1);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_4B1B50E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1BCB254(v4, v5);
    if ( !BYTE1(Instance[7].monitor) )
      BYTE1(Instance[7].monitor) = 1;
  }
}


void __fastcall AssetManager__releaseAsset(int32_t type, System_String_o *name, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4B1B502 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, name);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_4B1B502 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !Instance )
      sub_1BCB254(v7, v8);
    AssetManager__ReleaseAsset((AssetManager_o *)Instance, type, name, v9);
  }
}


void __fastcall AssetManager__releaseAssetResource(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4B1B51E & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4B1B51E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1BCB254(v5, v6);
    AssetManager__ReleaseAssetResource((AssetManager_o *)Instance, name, v7);
  }
}


void __fastcall AssetManager__releaseAssetStorage(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4B1B51A & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4B1B51A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1BCB254(v5, v6);
    AssetManager__ReleaseAssetStorage((AssetManager_o *)Instance, name, v7);
  }
}


void __fastcall AssetManager__releaseAssetStorage_39731636(System_String_array *nameList, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4B1B51B & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4B1B51B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1BCB254(v5, v6);
    AssetManager__ReleaseAssetStorage_39731812((AssetManager_o *)Instance, nameList, v7);
  }
}


void __fastcall AssetManager__releaseAsset_39722352(
        int32_t type,
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4B1B503 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, nameList);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_4B1B503 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !Instance )
      sub_1BCB254(v7, v8);
    AssetManager__ReleaseAsset_39722536((AssetManager_o *)Instance, type, nameList, v9);
  }
}


void __fastcall AssetManager__releaseAsset_39722652(AssetData_o *assetInfo, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4B1B504 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4B1B504 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1BCB254(v5, v6);
    if ( assetInfo )
      AssetManager__ReleaseAsset((AssetManager_o *)Instance, assetInfo->fields.type, assetInfo->fields.name, v7);
  }
}


void __fastcall AssetManager__releaseAsset_39722860(AssetData_array *assetInfoList, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4B1B505 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4B1B505 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1BCB254(v5, v6);
    AssetManager__ReleaseAsset_39723036((AssetManager_o *)Instance, assetInfoList, v7);
  }
}


void __fastcall AssetManager__remove_unloadCallbacks(
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

  if ( (byte_4B1B4EB & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_ResourceUnloadEventHandler_TypeInfo, value);
    byte_4B1B4EB = 1;
  }
  unloadCallbacks = this->fields.unloadCallbacks;
  p_unloadCallbacks = &this->fields.unloadCallbacks;
  v6 = (System_Delegate_o *)unloadCallbacks;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (AssetManager_ResourceUnloadEventHandler_c *)v8->klass != AssetManager_ResourceUnloadEventHandler_TypeInfo )
        break;
    }
    v9 = sub_1C05088(p_unloadCallbacks, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCB514(v8);
  AssetManager__WaitForExecutionUnloadUnuseAssets(v11, v12);
}


void __fastcall AssetManager__resetAssetStorageVersion(System_String_o *path, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4B1B50C & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4B1B50C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1BCB254(v5, v6);
    AssetManager__ResetAssetStorageVersion((AssetManager_o *)Instance, path, v7);
  }
}


void __fastcall AssetManager__resumeDownloadAssetStorage(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4B1B50F & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v1);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_4B1B50F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1BCB254(v4, v5);
    if ( BYTE1(Instance[7].monitor) )
    {
      BYTE1(Instance[7].monitor) = 0;
      AssetManager__LoadStart((AssetManager_o *)Instance, v5);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetManager__setDebugStatusOut(AssetManager_o *this, bool isUse, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_4B1B4F1 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, isUse);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4B1B4F1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !Instance && !v5 )
    sub_1BCB254(v5, v6);
}


void __fastcall AssetManager_LoadWaitStatus___ctor(
        AssetManager_LoadWaitStatus_o *this,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.callbackFunc = callbackFunc;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v5, v6);
}


void __fastcall AssetManager_LoadWaitStatus___ctor_39746464(
        AssetManager_LoadWaitStatus_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.data = data;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)data, v5, v6);
}


void __fastcall AssetManager_LoadWaitStatus___ctor_39746684(
        AssetManager_LoadWaitStatus_o *this,
        AssetData_o *data,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        System_String_array *resourceNames,
        const MethodInfo *method)
{
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.data = data;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)data, v9, v10);
  this->fields.callbackFunc2 = callbackFunc;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callbackFunc, v11, v12);
  this->fields.resourceNames = resourceNames;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.resourceNames, (int32_t)resourceNames, v13, v14);
}


void __fastcall AssetManager_LoadWaitStatus__AddCallback(
        AssetManager_LoadWaitStatus_o *this,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_callbackFunc2; // x19
  System_Delegate_o *callbackFunc2; // t1
  System_Delegate_o *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Delegate_o *v10; // x8
  AssetLoader_LoadEndDataHandler_c *v11; // x1

  if ( (byte_4B1B54F & 1) == 0 )
  {
    sub_1BCAFF8(&AssetLoader_LoadEndDataHandler_TypeInfo, callbackFunc);
    byte_4B1B54F = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = (CGThumbnailListItem_o *)&this->fields.callbackFunc2;
  v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)callbackFunc, 0LL);
  v10 = v7;
  if ( !v7 )
    goto LABEL_7;
  v11 = AssetLoader_LoadEndDataHandler_TypeInfo;
  if ( (AssetLoader_LoadEndDataHandler_c *)v7->klass != AssetLoader_LoadEndDataHandler_TypeInfo
    || (p_callbackFunc2->klass = (CGThumbnailListItem_c *)v7, (AssetLoader_LoadEndDataHandler_c *)v7->klass != v11) )
  {
    sub_1BCB514(v7);
LABEL_7:
    p_callbackFunc2->klass = (CGThumbnailListItem_c *)v10;
  }
  sub_1BCAF9C(p_callbackFunc2, (int32_t)v10, v8, v9);
}


void __fastcall AssetManager_LoadWaitStatus__AddEntry(AssetManager_LoadWaitStatus_o *this, const MethodInfo *method)
{
  AssetData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1BCB254(0LL, method);
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
    LOBYTE(data) = AssetData__IsSame_39695164(data, type, name, 0LL);
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

  if ( (byte_4B1B550 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_1/*""*/, method);
    byte_4B1B550 = 1;
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
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCB0B8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCB270(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCB120(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A15008;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A14FC8;
}


System_IAsyncResult_o *__fastcall AssetManager_ResourceUnloadEventHandler__BeginInvoke(
        AssetManager_ResourceUnloadEventHandler_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1BCAFAC(this, &v5, callback, object);
}


void __fastcall AssetManager_ResourceUnloadEventHandler__EndInvoke(
        AssetManager_ResourceUnloadEventHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCAFB0(result, 0LL, method);
}


void __fastcall AssetManager_ResourceUnloadEventHandler__Invoke(
        AssetManager_ResourceUnloadEventHandler_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall AssetManager__AssetObjectListSetupAndCall_d__189___ctor(
        AssetManager__AssetObjectListSetupAndCall_d__189_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AssetManager__AssetObjectListSetupAndCall_d__189__MoveNext(
        AssetManager__AssetObjectListSetupAndCall_d__189_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct AssetData_o *asset; // x1
  System_Func_bool__o *v13; // x21
  UnityEngine_WaitUntil_o *v14; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  bool result; // w0
  System_Action_o *action; // x0

  if ( (byte_4B1B555 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Func_bool__TypeInfo, method);
    sub_1BCAFF8(&Method_AssetManager___c__DisplayClass189_0__AssetObjectListSetupAndCall_b__0__, v3);
    sub_1BCAFF8(&AssetManager___c__DisplayClass189_0_TypeInfo, v4);
    sub_1BCAFF8(&UnityEngine_WaitUntil_TypeInfo, v5);
    byte_4B1B555 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    action = this->fields.action;
    this->fields.__1__state = -1;
    ActionExtensions__Call(action, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  v7 = sub_1BCB244(AssetManager___c__DisplayClass189_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1BCB254(v8, v9);
  asset = this->fields.asset;
  *(_QWORD *)(v7 + 16) = asset;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v7 + 16), (int32_t)asset, v10, v11);
  v13 = (System_Func_bool__o *)sub_1BCB244(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v13,
    (Il2CppObject *)v7,
    Method_AssetManager___c__DisplayClass189_0__AssetObjectListSetupAndCall_b__0__,
    0LL);
  v14 = (UnityEngine_WaitUntil_o *)sub_1BCB244(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v14, v13, 0LL);
  this->fields.__2__current = (Il2CppObject *)v14;
  p__2__current = &this->fields.__2__current;
  sub_1BCAF9C((CGThumbnailListItem_o *)p__2__current, (int32_t)v14, v16, v17);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall AssetManager__AssetObjectListSetupAndCall_d__189__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AssetManager__AssetObjectListSetupAndCall_d__189_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AssetManager__AssetObjectListSetupAndCall_d__189__System_Collections_IEnumerator_Reset(
        AssetManager__AssetObjectListSetupAndCall_d__189_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_AssetManager__AssetObjectListSetupAndCall_d__189_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall AssetManager__AssetObjectListSetupAndCall_d__189__System_Collections_IEnumerator_get_Current(
        AssetManager__AssetObjectListSetupAndCall_d__189_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall AssetManager__AssetObjectListSetupAndCall_d__189__System_IDisposable_Dispose(
        AssetManager__AssetObjectListSetupAndCall_d__189_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall AssetManager__AssetObjectListSetupAndCall_d__190___ctor(
        AssetManager__AssetObjectListSetupAndCall_d__190_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AssetManager__AssetObjectListSetupAndCall_d__190__MoveNext(
        AssetManager__AssetObjectListSetupAndCall_d__190_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct AssetData_array *assetList; // x1
  System_Func_bool__o *v13; // x21
  UnityEngine_WaitUntil_o *v14; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  bool result; // w0
  System_Action_o *action; // x0

  if ( (byte_4B1B556 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Func_bool__TypeInfo, method);
    sub_1BCAFF8(&Method_AssetManager___c__DisplayClass190_0__AssetObjectListSetupAndCall_b__0__, v3);
    sub_1BCAFF8(&AssetManager___c__DisplayClass190_0_TypeInfo, v4);
    sub_1BCAFF8(&UnityEngine_WaitUntil_TypeInfo, v5);
    byte_4B1B556 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    action = this->fields.action;
    this->fields.__1__state = -1;
    ActionExtensions__Call(action, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  v7 = sub_1BCB244(AssetManager___c__DisplayClass190_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1BCB254(v8, v9);
  assetList = this->fields.assetList;
  *(_QWORD *)(v7 + 16) = assetList;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v7 + 16), (int32_t)assetList, v10, v11);
  v13 = (System_Func_bool__o *)sub_1BCB244(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v13,
    (Il2CppObject *)v7,
    Method_AssetManager___c__DisplayClass190_0__AssetObjectListSetupAndCall_b__0__,
    0LL);
  v14 = (UnityEngine_WaitUntil_o *)sub_1BCB244(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v14, v13, 0LL);
  this->fields.__2__current = (Il2CppObject *)v14;
  p__2__current = &this->fields.__2__current;
  sub_1BCAF9C((CGThumbnailListItem_o *)p__2__current, (int32_t)v14, v16, v17);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall AssetManager__AssetObjectListSetupAndCall_d__190__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AssetManager__AssetObjectListSetupAndCall_d__190_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AssetManager__AssetObjectListSetupAndCall_d__190__System_Collections_IEnumerator_Reset(
        AssetManager__AssetObjectListSetupAndCall_d__190_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_AssetManager__AssetObjectListSetupAndCall_d__190_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall AssetManager__AssetObjectListSetupAndCall_d__190__System_Collections_IEnumerator_get_Current(
        AssetManager__AssetObjectListSetupAndCall_d__190_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall AssetManager__AssetObjectListSetupAndCall_d__190__System_IDisposable_Dispose(
        AssetManager__AssetObjectListSetupAndCall_d__190_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall AssetManager__DelayLoadStart_d__152___ctor(
        AssetManager__DelayLoadStart_d__152_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AssetManager__DelayLoadStart_d__152__MoveNext(
        AssetManager__DelayLoadStart_d__152_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
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
      sub_1BCB254(0LL, method);
    AssetManager__LoadStart(_4__this, method);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.__2__current, 0, v2, v3);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall AssetManager__DelayLoadStart_d__152__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AssetManager__DelayLoadStart_d__152_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AssetManager__DelayLoadStart_d__152__System_Collections_IEnumerator_Reset(
        AssetManager__DelayLoadStart_d__152_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_AssetManager__DelayLoadStart_d__152_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall AssetManager__DelayLoadStart_d__152__System_Collections_IEnumerator_get_Current(
        AssetManager__DelayLoadStart_d__152_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall AssetManager__DelayLoadStart_d__152__System_IDisposable_Dispose(
        AssetManager__DelayLoadStart_d__152_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118___ctor(
        AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118__MoveNext(
        AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *this,
        const MethodInfo *method)
{
  AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *v2; // x19
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
  __int64 v22; // x1
  __int64 v23; // x1
  int32_t _1__state; // w8
  struct AssetManager_o *_4__this; // x20
  _BOOL8 v26; // x0
  __int64 v27; // x1
  AssetData_o *currentValue; // x21
  const MethodInfo *v29; // x2
  _BOOL4 isDispLogo_5__2; // w8
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *downLoadWaitList; // x8
  Il2CppObject *v32; // x22
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_String_o *v35; // x22
  const MethodInfo *v36; // x1
  System_String_o *v37; // x23
  AssetManager_o *DownloadSize; // x0
  const MethodInfo *v39; // x1
  Il2CppObject *v40; // x0
  System_String_o *v41; // x23
  Il2CppObject *Instance; // x0
  Il2CppObject *v43; // x25
  CommonUI_o *v44; // x21
  ErrorDialog_ClickDelegate_o *v45; // x24
  struct AssetManager___c__DisplayClass118_0_o *_8__1; // x8
  struct AssetManager___c__DisplayClass118_0_o **p__8__1; // x21
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  UnityEngine_WaitForEndOfFrame_o *v50; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  bool result; // w0
  Il2CppObject *v55; // x21
  System_Action_o *v56; // x22
  AvalonSceneManager_c *v57; // x0
  float DEFAULT_FADE_TIME; // s8
  UnityEngine_WaitForSeconds_o *v59; // x20
  CGThumbnailListItem_o *v60; // x19
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v63; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v64; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_4B1B557 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_b__118_0__, v3);
    sub_1BCAFF8(&AvalonSceneManager_TypeInfo, v4);
    sub_1BCAFF8(&ErrorDialog_ClickDelegate_TypeInfo, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, v6);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v7);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v8);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v9);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__, v11);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v12);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1BCAFF8(&Method_AssetManager___c__DisplayClass118_0__DownloadAssetStorageAttributeWithCheckDialog_b__1__, v14);
    sub_1BCAFF8(&AssetManager___c__DisplayClass118_0_TypeInfo, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v16);
    sub_1BCAFF8(&UnityEngine_WaitForEndOfFrame_TypeInfo, v17);
    sub_1BCAFF8(&UnityEngine_WaitForSeconds_TypeInfo, v18);
    sub_1BCAFF8(&StringLiteral_25204/*"データ更新"*/, v19);
    sub_1BCAFF8(&StringLiteral_5391/*"END_BOOT_ASSET_DOWNLOAD"*/, v20);
    sub_1BCAFF8(&StringLiteral_9179/*"NETWORK_ERROR_DATA_UPDATE_TITLE"*/, v21);
    sub_1BCAFF8(&StringLiteral_329/*" ゲームデータの更新を行います。\n\n{0}\n\n ※Wi-Fi接続での更新を推奨します。"*/, v22);
    this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)sub_1BCAFF8(&StringLiteral_9177/*"NETWORK_ERROR_DATA_UPDATE_EXP"*/, v23);
    byte_4B1B557 = 1;
  }
  memset(&v64, 0, sizeof(v64));
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    isDispLogo_5__2 = v2->fields._isDispLogo_5__2;
    v2->fields.__1__state = -1;
    if ( isDispLogo_5__2 )
    {
      this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_59;
      CommonUI__SetLoadMode((CommonUI_o *)this, 3, 0LL);
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
      v50 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCB244(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v50, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v50;
      p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1BCAF9C(p__2__current, (int32_t)v50, v52, v53);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    }
    this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this )
      goto LABEL_59;
    this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)CommonUI__isBusyDataUpdateDialog(
                                                                                    (CommonUI_o *)this,
                                                                                    0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      goto LABEL_44;
    if ( !*p__8__1 )
      goto LABEL_59;
    if ( (*p__8__1)->fields.isDataUpdate )
    {
      this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( !this )
        goto LABEL_59;
      CrashReporter__SetNowState((CrashReporter_o *)this, (System_String_o *)StringLiteral_5391/*"END_BOOT_ASSET_DOWNLOAD"*/, 0LL);
    }
    *p__8__1 = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v2->fields.__8__1, 0, v48, v49);
    goto LABEL_50;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_59;
  this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)_4__this->fields.assetBundleDic;
  if ( !this )
    goto LABEL_59;
  this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                  (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                                                  (const MethodInfo_3385BA8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !this )
    goto LABEL_59;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v63,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_39EC574 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v64 = v63;
  while ( 1 )
  {
    v26 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v64,
            (const MethodInfo_3481F34 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v26 )
      break;
    currentValue = (AssetData_o *)v64.fields._currentValue;
    if ( !v64.fields._currentValue )
      sub_1BCB254(v26, v27);
    if ( AssetData__IsDownloadOldVersion((AssetData_o *)v64.fields._currentValue, 0LL)
      || System_String__op_Equality(v2->fields.attrib, currentValue->fields.attrib, 0LL)
      && AssetData__IsNeedUpdateVersion(currentValue, 0LL) )
    {
      AssetManager__AddLoadWaitStatus_39735032(_4__this, currentValue, v29);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v64,
    (const MethodInfo_3481F30 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  downLoadWaitList = _4__this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
LABEL_59:
    sub_1BCB254(this, method);
  if ( downLoadWaitList->fields._size >= 1 )
  {
    v32 = (Il2CppObject *)sub_1BCB244(AssetManager___c__DisplayClass118_0_TypeInfo);
    System_Object___ctor(v32, 0LL);
    v2->fields.__8__1 = (struct AssetManager___c__DisplayClass118_0_o *)v32;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v2->fields.__8__1, (int32_t)v32, v33, v34);
    if ( !v2->fields.__8__1 )
      goto LABEL_59;
    v2->fields.__8__1->fields.isDataUpdate = 0;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( LocalizationManager__ContainsKey((System_String_o *)StringLiteral_9179/*"NETWORK_ERROR_DATA_UPDATE_TITLE"*/, 0LL) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v35 = LocalizationManager__Get((System_String_o *)StringLiteral_9179/*"NETWORK_ERROR_DATA_UPDATE_TITLE"*/, 0LL);
    }
    else
    {
      v35 = (System_String_o *)StringLiteral_25204/*"データ更新"*/;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( LocalizationManager__ContainsKey((System_String_o *)StringLiteral_9177/*"NETWORK_ERROR_DATA_UPDATE_EXP"*/, 0LL) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v37 = LocalizationManager__Get((System_String_o *)StringLiteral_9177/*"NETWORK_ERROR_DATA_UPDATE_EXP"*/, 0LL);
    }
    else
    {
      v37 = (System_String_o *)StringLiteral_329/*" ゲームデータの更新を行います。\n\n{0}\n\n ※Wi-Fi接続での更新を推奨します。"*/;
    }
    DownloadSize = (AssetManager_o *)AssetManager__GetDownloadSize(_4__this, v36);
    v40 = (Il2CppObject *)AssetManager__ConvertDownloadSizeToString(DownloadSize, (double)(__int64)DownloadSize, v39);
    v41 = System_String__Format(v37, v40, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v43 = (Il2CppObject *)v2->fields.__8__1;
    v44 = (CommonUI_o *)Instance;
    v45 = (ErrorDialog_ClickDelegate_o *)sub_1BCB244(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(
      v45,
      v43,
      Method_AssetManager___c__DisplayClass118_0__DownloadAssetStorageAttributeWithCheckDialog_b__1__,
      0LL);
    if ( !v44 )
      goto LABEL_59;
    CommonUI__OpenDataUpdateDialog(v44, v35, v41, v45, 0, 0LL);
    goto LABEL_40;
  }
LABEL_50:
  v2->fields._isDispLogo_5__2 = 0;
  v55 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v56 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v56,
    (Il2CppObject *)_4__this,
    Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_b__118_0__,
    0LL);
  if ( !v55 )
    goto LABEL_59;
  this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)CommonUI__PlayLogo(
                                                                                  (CommonUI_o *)v55,
                                                                                  v56,
                                                                                  0LL);
  v2->fields._isDispLogo_5__2 = (unsigned __int8)this & 1;
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_55;
  v57 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v57 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v57->static_fields->DEFAULT_FADE_TIME;
  v59 = (UnityEngine_WaitForSeconds_o *)sub_1BCB244(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v59, DEFAULT_FADE_TIME, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v59;
  v60 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1BCAF9C(v60, (int32_t)v59, v61, v62);
  LODWORD(v60[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
  return 1;
}


Il2CppObject *__fastcall AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118__System_Collections_IEnumerator_Reset(
        AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118__System_Collections_IEnumerator_get_Current(
        AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118__System_IDisposable_Dispose(
        AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall AssetManager__InitCR_d__134___ctor(
        AssetManager__InitCR_d__134_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AssetManager__InitCR_d__134__MoveNext(AssetManager__InitCR_d__134_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  AssetManager__InitCR_d__134_o *v4; // x19
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
  struct AssetManager_o *_4__this; // x20
  AssetManager_c *v46; // x0
  AssetManager_c *v47; // x0
  AssetManager_c *v48; // x0
  AssetManager_c *v49; // x0
  System_String_o *AllText; // x21
  System_String_o *v51; // x0
  UnityEngine_WaitForEndOfFrame_o *v52; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  bool result; // w0
  System_String_o *v57; // x21
  System_Char_array *v58; // x0
  __int64 v59; // x2
  System_String_o *v60; // x21
  System_Char_array *v61; // x0
  __int64 v62; // x2
  il2cpp_array_size_t max_length; // w8
  __int64 v64; // x2
  const MethodInfo *v65; // x3
  int v66; // w23
  __int64 *v67; // x8
  System_String_o *v68; // x0
  __int64 v69; // x1
  System_String_o *v70; // x22
  System_String_o *v71; // x22
  System_String_o *v72; // x21
  System_Text_Encoding_o *UTF8; // x0
  __int64 v74; // x1
  System_Byte_array *v75; // x23
  uint32_t v76; // w23
  System_Char_array *v77; // x0
  __int64 v78; // x2
  il2cpp_array_size_t v79; // w8
  AssetManager__InitCR_d__134_o *v80; // x25
  Il2CppObject *_2__current; // x8
  AssetManager__InitCR_d__134_o *v82; // x22
  System_String_o *v83; // x0
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  AssetManager_c *v86; // x8
  System_String_o *v87; // x23
  struct AssetManager_StaticFields *v88; // x0
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  AssetManager_c *v91; // x0
  void **p_configFileUrl_5__2; // x8
  struct System_String_o *v93; // x23
  struct AssetManager_StaticFields *v94; // x0
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  AssetManager_c *v97; // x0
  void **p_loader_5__3; // x8
  struct System_String_o *v99; // x22
  struct AssetManager_StaticFields *v100; // x0
  int v101; // w8
  __int64 v102; // x21
  AssetManager__InitCR_d__134_o *v103; // x22
  System_String_o *v104; // x0
  int32_t v105; // w23
  System_String_o *configFileUrl_5__2; // x24
  System_String_o *v107; // x0
  int32_t v108; // w25
  System_String_o *v109; // x0
  int v110; // w8
  uint32_t v111; // w26
  System_String_o *v112; // x27
  System_String_o *wait_5__6; // x22
  System_Collections_Generic_Dictionary_object__object__o *assetBundleDic; // x28
  AssetData_o *v115; // x29
  System_String_o *v116; // x21
  AssetManager_c *v117; // x0
  struct AssetManager_StaticFields *static_fields; // x0
  int32_t v119; // w1
  int32_t v120; // w1
  struct AssetManager_StaticFields *v121; // x0
  int32_t v122; // w2
  const MethodInfo *v123; // x3
  int32_t v124; // w1
  struct AssetManager_StaticFields *v125; // x0
  int32_t v126; // w2
  const MethodInfo *v127; // x3
  ManagerConfig_c *v128; // x0
  struct ManagerConfig_StaticFields *v129; // x8
  Il2CppObject *Instance; // x22
  ErrorDialog_ClickDelegate_o *v131; // x23
  AssetManager_c *v132; // x0
  System_String_o *ConfigFileAddress; // x0
  int32_t v134; // w2
  const MethodInfo *v135; // x3
  int32_t v136; // w2
  const MethodInfo *v137; // x3
  System_String_o *v138; // x21
  System_String_o *UrlString; // x0
  UnityEngine_Networking_UnityWebRequest_o *v140; // x0
  int32_t v141; // w2
  const MethodInfo *v142; // x3
  float unscaledTime; // s8
  ManagerConfig_c *v144; // x0
  float TIMEOUT; // s0
  UnityEngine_WaitForEndOfFrame_o *v146; // x21
  int32_t v147; // w2
  const MethodInfo *v148; // x3
  AssetManager__InitCR_d__134_o **v149; // x21
  float downloadProgress; // s0
  float loadProgress_5__5; // s9
  float v152; // s8
  int32_t v153; // w2
  const MethodInfo *v154; // x3
  float v155; // s0
  bool v156; // zf
  float v157; // s8
  System_String_o *error; // x0
  System_String_o *text; // x22
  System_String_o *v160; // x22
  const MethodInfo *v161; // x1
  System_String_o *v162; // x22
  System_String_o *v163; // x0
  System_String_o *v164; // x0
  Il2CppObject *v165; // x22
  ManagerConfig_c *v166; // x0
  struct ManagerConfig_StaticFields *v167; // x8
  Il2CppObject *v168; // x1
  CGThumbnailListItem_o *v169; // x19
  int v170; // w8
  AssetManager__InitCR_d__134_o *v171; // x22
  int v172; // w8
  int32_t v173; // w0
  int32_t v174; // w24
  System_String_o *v175; // x23
  System_String_o *v176; // x22
  System_Byte_array *v177; // x24
  uint32_t v178; // w24
  int32_t v179; // w2
  const MethodInfo *v180; // x3
  int32_t v181; // w2
  const MethodInfo *v182; // x3
  int v183; // w8
  System_String_array *v184; // x25
  __int64 v185; // x22
  const MethodInfo *v186; // x1
  const MethodInfo *v187; // x3
  int v188; // w8
  unsigned int v189; // w29
  AssetManager__InitCR_d__134_o *v190; // x27
  char v191; // w8
  System_String_o *v192; // x0
  int v193; // w9
  void **v194; // x11
  AssetManager_c *v195; // x8
  System_String_o *v196; // x26
  bool v197; // cc
  void **v198; // x9
  void **v199; // x10
  CGThumbnailListItem_c *v200; // x24
  CGThumbnailListItem_c *v201; // x23
  int32_t v202; // w2
  const MethodInfo *v203; // x3
  int32_t v204; // w2
  const MethodInfo *v205; // x3
  int32_t v206; // w2
  const MethodInfo *v207; // x3
  System_String_o *v208; // x0
  System_String_o *v209; // x0
  int32_t v210; // w23
  System_String_o *v211; // x0
  const MethodInfo *v212; // x3
  int v213; // w8
  uint32_t v214; // w24
  System_String_o *v215; // x26
  AssetData_o *AssetData; // x0
  Il2CppObject *v217; // x27
  int32_t v218; // w2
  const MethodInfo *v219; // x3
  __int64 v220; // x8
  _QWORD *v221; // x9
  __int64 _2__current_low; // x10
  __int64 v223; // x8
  System_Collections_Generic_List_object__o *v224; // x27
  AssetData_o *v225; // x28
  int32_t v226; // w2
  const MethodInfo *v227; // x3
  struct System_Object_array *items; // x8
  _QWORD *v229; // x9
  __int64 size; // x10
  Il2CppClass **v231; // x0
  AssetManager_c *v232; // x0
  CGThumbnailListItem_c *v233; // x23
  struct AssetManager_StaticFields *v234; // x0
  struct AssetManager_StaticFields *v235; // x0
  CGThumbnailListItem_c *v236; // x1
  int32_t v237; // w2
  const MethodInfo *v238; // x3
  struct AssetManager_StaticFields *v239; // x0
  CGThumbnailListItem_c *v240; // x1
  int32_t v241; // w2
  const MethodInfo *v242; // x3
  _BOOL8 v243; // x0
  __int64 v244; // x1
  Il2CppObject *current; // x22
  System_Collections_Generic_Dictionary_object__object__o *v246; // x0
  __int64 v247; // x1
  System_Collections_Generic_Dictionary_object__object__o *v248; // x0
  Il2CppObject *v249; // x22
  int32_t v250; // w2
  const MethodInfo *v251; // x3
  ManagerConfig_c *v252; // x0
  struct ManagerConfig_StaticFields *v253; // x8
  Il2CppObject *v254; // x21
  ErrorDialog_ClickDelegate_o *v255; // x23
  UnityEngine_WaitForEndOfFrame_o *v256; // x20
  int32_t v257; // w2
  const MethodInfo *v258; // x3
  ManagementManager_c *v259; // x0
  _BOOL4 isDuringStartup; // w22
  Il2CppObject *v261; // x21
  System_String_o *v262; // x22
  ErrorDialog_ClickDelegate_o *v263; // x23
  System_String_o *v264; // x22
  ErrorDialog_ClickDelegate_o *v265; // x23
  UnityEngine_WaitForEndOfFrame_o *v266; // x20
  int32_t v267; // w2
  const MethodInfo *v268; // x3
  UnityEngine_WaitForSeconds_o *v269; // x20
  int32_t v270; // w2
  const MethodInfo *v271; // x3
  const MethodInfo *v272; // x2
  int32_t v273; // w2
  const MethodInfo *v274; // x3
  UnityEngine_WaitForEndOfFrame_o *v275; // x20
  int32_t v276; // w2
  const MethodInfo *v277; // x3
  System_Nullable_Vector2__o methoda; // [xsp+0h] [xbp-F0h]
  System_Nullable_Vector2__o methodb; // [xsp+0h] [xbp-F0h]
  System_String_o *klass; // [xsp+18h] [xbp-D8h]
  System_String_o *v281; // [xsp+20h] [xbp-D0h]
  int32_t version; // [xsp+2Ch] [xbp-C4h]
  CGThumbnailListItem_o *v283; // [xsp+30h] [xbp-C0h]
  CGThumbnailListItem_o *v284; // [xsp+38h] [xbp-B8h]
  AssetManager__InitCR_d__134_o *v285; // [xsp+40h] [xbp-B0h]
  CGThumbnailListItem_o *v286; // [xsp+40h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v287; // [xsp+48h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v288; // [xsp+60h] [xbp-90h] BYREF

  v4 = this;
  if ( (byte_4B1B558 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetDataListInfo_TypeInfo, method);
    sub_1BCAFF8(&AssetData_TypeInfo, v5);
    sub_1BCAFF8(&Method_AssetManager_OnClickRetryDialog__, v6);
    sub_1BCAFF8(&Method_AssetManager_OnClickWaitDebugDialog__, v7);
    sub_1BCAFF8(&AssetManager_TypeInfo, v8);
    sub_1BCAFF8(&CatAndMouseGame_TypeInfo, v9);
    sub_1BCAFF8(&char___TypeInfo, v10);
    sub_1BCAFF8(&ErrorDialog_ClickDelegate_TypeInfo, v11);
    sub_1BCAFF8(&Crc32_TypeInfo, v12);
    sub_1BCAFF8(&UnityEngine_Debug_TypeInfo, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__AssetData__Add__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__, v16);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__, v17);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__AssetData__set_Item__, v18);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__, v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__, v20);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__, v21);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_AssetData__Add__, v22);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__, v23);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v24);
    sub_1BCAFF8(&ManagementManager_TypeInfo, v25);
    sub_1BCAFF8(&ManagerConfig_TypeInfo, v26);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v27);
    sub_1BCAFF8(&UnityEngine_WaitForEndOfFrame_TypeInfo, v28);
    sub_1BCAFF8(&UnityEngine_WaitForSeconds_TypeInfo, v29);
    sub_1BCAFF8(&StringLiteral_2379/*"AssetStorageList download time over"*/, v30);
    sub_1BCAFF8(&StringLiteral_2375/*"AssetStorageList download crc error"*/, v31);
    sub_1BCAFF8(&StringLiteral_2371/*"AssetStorage boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/, v32);
    sub_1BCAFF8(&StringLiteral_2033/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, v33);
    sub_1BCAFF8(&StringLiteral_2367/*"AssetStorage boot load crc error : チェックサム値が不一致"*/, v34);
    sub_1BCAFF8(&StringLiteral_15795/*"[FFFF80]Download error for debug"*/, v35);
    sub_1BCAFF8(&StringLiteral_2376/*"AssetStorageList download data error"*/, v36);
    sub_1BCAFF8(&StringLiteral_2378/*"AssetStorageList download error : "*/, v37);
    sub_1BCAFF8(&StringLiteral_2369/*"AssetStorage boot load error : アセットバンドルリスト作成失敗"*/, v38);
    sub_1BCAFF8(&StringLiteral_25039/*"~"*/, v39);
    sub_1BCAFF8(&StringLiteral_2370/*"AssetStorage boot load error : ファイル先頭の１行目の内容が空"*/, v40);
    sub_1BCAFF8(&StringLiteral_11377/*"SCRIPT"*/, v41);
    sub_1BCAFF8(&StringLiteral_1760/*"@"*/, v42);
    sub_1BCAFF8(&StringLiteral_2034/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, v43);
    this = (AssetManager__InitCR_d__134_o *)sub_1BCAFF8(&StringLiteral_1/*""*/, v44);
    byte_4B1B558 = 1;
  }
  memset(&v288, 0, sizeof(v288));
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_281;
      v46 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v46 = AssetManager_TypeInfo;
      }
      if ( !System_IO_Directory__Exists(v46->static_fields->cachePathName, 0LL) )
      {
        v47 = AssetManager_TypeInfo;
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v47 = AssetManager_TypeInfo;
        }
        System_IO_Directory__CreateDirectory(v47->static_fields->cachePathName, 0LL);
      }
      this = (AssetManager__InitCR_d__134_o *)_4__this->fields.assetBundleDic;
      if ( !this )
        goto LABEL_281;
      if ( System_Collections_Generic_Dictionary_object__object___get_Count(
             (System_Collections_Generic_Dictionary_object__object__o *)this,
             (const MethodInfo_3385A48 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) )
      {
        goto LABEL_120;
      }
      v48 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v48 = AssetManager_TypeInfo;
      }
      if ( !System_IO_File__Exists(v48->static_fields->cacheListFileName, 0LL) )
        goto LABEL_120;
      v49 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v49 = AssetManager_TypeInfo;
      }
      AllText = System_IO_File__ReadAllText(v49->static_fields->cacheListFileName, 0LL);
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      v51 = CatAndMouseGame__MouseGame8(AllText, 0LL);
      v57 = v51;
      if ( !v51 )
        goto LABEL_120;
      v58 = (System_Char_array *)sub_1BCB0A0(char___TypeInfo, 1LL);
      if ( !v58 )
        sub_1BCB254(0LL, 0LL);
      if ( !v58->max_length )
        sub_1BCB25C(v58, v58, v59);
      v58->m_Items[2] = -257;
      v60 = System_String__Trim_62506972(v57, v58, 0LL);
      v61 = (System_Char_array *)sub_1BCB0A0(char___TypeInfo, 2LL);
      if ( !v61 )
        sub_1BCB254(0LL, 0LL);
      max_length = v61->max_length;
      if ( !max_length )
        sub_1BCB25C(v61, v61, v62);
      v61->m_Items[2] = 13;
      if ( max_length == 1 )
        sub_1BCB25C(v61, v61, v62);
      v61->m_Items[3] = 10;
      if ( !v60 )
        sub_1BCB254(v61, v61);
      v66 = System_String__IndexOfAny(v60, v61, 0LL);
      if ( v66 < 2 )
      {
        v67 = &StringLiteral_2370/*"AssetStorage boot load error : ファイル先頭の１行目の内容が空"*/;
        goto LABEL_96;
      }
      v68 = System_String__Substring_62496348(v60, 0, v66, 0LL);
      v70 = v68;
      if ( !v68 )
        sub_1BCB254(0LL, v69);
      if ( !System_String__StartsWith(v68, (System_String_o *)StringLiteral_25039/*"~"*/, 0LL) )
      {
        v67 = &StringLiteral_2371/*"AssetStorage boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
        goto LABEL_96;
      }
      v71 = System_String__Substring(v70, 1, 0LL);
      v72 = System_String__Substring(v60, v66 + 1, 0LL);
      UTF8 = System_Text_Encoding__get_UTF8(0LL);
      if ( !UTF8 )
        sub_1BCB254(0LL, v74);
      v75 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                                   UTF8,
                                   v72,
                                   UTF8->klass->vtable._19_GetBytes.methodPtr);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v76 = Crc32__Compute(v75, 0LL);
      if ( System_UInt32__Parse(v71, 0LL) != v76 )
      {
        v67 = &StringLiteral_2367/*"AssetStorage boot load crc error : チェックサム値が不一致"*/;
        goto LABEL_96;
      }
      v77 = (System_Char_array *)sub_1BCB0A0(char___TypeInfo, 2LL);
      if ( !v77 )
        sub_1BCB254(0LL, 0LL);
      v79 = v77->max_length;
      if ( !v79 )
        sub_1BCB25C(v77, v77, v78);
      v77->m_Items[2] = 13;
      if ( v79 == 1 )
        sub_1BCB25C(v77, v77, v78);
      v77->m_Items[3] = 10;
      if ( !v72 )
        sub_1BCB254(v77, v77);
      this = (AssetManager__InitCR_d__134_o *)System_String__Split_62499616(v72, v77, 1, 0LL);
      v80 = this;
      if ( !this )
        goto LABEL_120;
      _2__current = this->fields.__2__current;
      if ( !_2__current )
        goto LABEL_95;
      if ( !(_DWORD)_2__current )
        goto LABEL_282;
      this = (AssetManager__InitCR_d__134_o *)this->fields.__4__this;
      if ( !this )
        goto LABEL_281;
      this = (AssetManager__InitCR_d__134_o *)System_String__StartsWith(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_1760/*"@"*/,
                                                0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
LABEL_95:
        v67 = &StringLiteral_2369/*"AssetStorage boot load error : アセットバンドルリスト作成失敗"*/;
LABEL_96:
        v116 = (System_String_o *)*v67;
        if ( *v67 )
        {
          v117 = AssetManager_TypeInfo;
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
            v117 = AssetManager_TypeInfo;
          }
          static_fields = v117->static_fields;
          v119 = (int)StringLiteral_1/*""*/;
          static_fields->assetBundleMasterVersion = (struct System_String_o *)StringLiteral_1/*""*/;
          sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->assetBundleMasterVersion, v119, v64, v65);
          v120 = (int)StringLiteral_1/*""*/;
          v121 = AssetManager_TypeInfo->static_fields;
          v121->assetBundleDateVersion = (struct System_String_o *)StringLiteral_1/*""*/;
          sub_1BCAF9C((CGThumbnailListItem_o *)&v121->assetBundleDateVersion, v120, v122, v123);
          v124 = (int)StringLiteral_1/*""*/;
          v125 = AssetManager_TypeInfo->static_fields;
          v125->assetBundleBuildVersion = (struct System_String_o *)StringLiteral_1/*""*/;
          sub_1BCAF9C((CGThumbnailListItem_o *)&v125->assetBundleBuildVersion, v124, v126, v127);
          this = (AssetManager__InitCR_d__134_o *)_4__this->fields.assetBundleDic;
          if ( !this )
            goto LABEL_281;
          System_Collections_Generic_Dictionary_object__object___Clear(
            (System_Collections_Generic_Dictionary_object__object__o *)this,
            (const MethodInfo_3385F00 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
          v128 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v128 = ManagerConfig_TypeInfo;
          }
          v129 = v128->static_fields;
          if ( v129->UseDebugCommand )
          {
            if ( !v128->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v128);
              v129 = ManagerConfig_TypeInfo->static_fields;
            }
            if ( System_String__op_Inequality(v129->ServerDefaultType, (System_String_o *)StringLiteral_11377/*"SCRIPT"*/, 0LL) )
            {
              _4__this->fields.isErrorDialog = 1;
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v131 = (ErrorDialog_ClickDelegate_o *)sub_1BCB244(ErrorDialog_ClickDelegate_TypeInfo);
              ErrorDialog_ClickDelegate___ctor(
                v131,
                (Il2CppObject *)_4__this,
                Method_AssetManager_OnClickWaitDebugDialog__,
                0LL);
              if ( !Instance )
                goto LABEL_281;
              *(_QWORD *)&methoda.fields.hasValue = 0LL;
              methoda.fields.value.fields.y = 0.0;
              CommonUI__OpenWarningDialog(
                (CommonUI_o *)Instance,
                (System_String_o *)StringLiteral_15795/*"[FFFF80]Download error for debug"*/,
                v116,
                v131,
                1,
                0,
                -1.0,
                1,
                methoda,
                0LL);
LABEL_27:
              if ( _4__this->fields.isErrorDialog )
              {
                v52 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCB244(UnityEngine_WaitForEndOfFrame_TypeInfo);
                UnityEngine_WaitForEndOfFrame___ctor(v52, 0LL);
                v4->fields.__2__current = (Il2CppObject *)v52;
                p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
                sub_1BCAF9C(p__2__current, (int32_t)v52, v54, v55);
                result = 1;
                LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
                return result;
              }
            }
          }
        }
        goto LABEL_120;
      }
      if ( !LODWORD(v80->fields.__2__current) )
        goto LABEL_282;
      this = (AssetManager__InitCR_d__134_o *)v80->fields.__4__this;
      if ( !this )
        goto LABEL_281;
      this = (AssetManager__InitCR_d__134_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0LL);
      if ( !this )
        goto LABEL_281;
      v82 = this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_282;
      this = (AssetManager__InitCR_d__134_o *)this->fields.__4__this;
      if ( !this )
        goto LABEL_281;
      v83 = System_String__Substring((System_String_o *)this, 1, 0LL);
      v86 = AssetManager_TypeInfo;
      v87 = v83;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v86 = AssetManager_TypeInfo;
      }
      v88 = v86->static_fields;
      v88->assetBundleMasterVersion = v87;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v88->assetBundleMasterVersion, (int32_t)v87, v84, v85);
      v91 = AssetManager_TypeInfo;
      if ( SLODWORD(v82->fields.__2__current) <= 1 )
        p_configFileUrl_5__2 = &StringLiteral_1/*""*/;
      else
        p_configFileUrl_5__2 = (void **)&v82->fields._configFileUrl_5__2;
      v93 = (struct System_String_o *)*p_configFileUrl_5__2;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v91 = AssetManager_TypeInfo;
      }
      v94 = v91->static_fields;
      v94->assetBundleDateVersion = v93;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v94->assetBundleDateVersion, (int32_t)v93, v89, v90);
      v97 = AssetManager_TypeInfo;
      if ( SLODWORD(v82->fields.__2__current) <= 2 )
        p_loader_5__3 = &StringLiteral_1/*""*/;
      else
        p_loader_5__3 = (void **)&v82->fields._loader_5__3;
      v99 = (struct System_String_o *)*p_loader_5__3;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v97 = AssetManager_TypeInfo;
      }
      v100 = v97->static_fields;
      v100->assetBundleBuildVersion = v99;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v100->assetBundleBuildVersion, (int32_t)v99, v95, v96);
      v101 = (int)v80->fields.__2__current;
      if ( v101 >= 2 )
      {
        v102 = 5LL;
        v285 = v80;
        while ( (int)v102 - 4 < (unsigned int)v101 )
        {
          this = (AssetManager__InitCR_d__134_o *)*((_QWORD *)&v80->klass + v102);
          if ( !this )
            goto LABEL_281;
          this = (AssetManager__InitCR_d__134_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0LL);
          if ( !this )
            goto LABEL_281;
          v103 = this;
          if ( SLODWORD(this->fields.__2__current) < 5 )
            goto LABEL_120;
          this = (AssetManager__InitCR_d__134_o *)this->fields.__4__this;
          if ( !this )
            goto LABEL_281;
          v104 = System_String__Trim((System_String_o *)this, 0LL);
          this = (AssetManager__InitCR_d__134_o *)System_Int32__Parse(v104, 0LL);
          if ( LODWORD(v103->fields.__2__current) < 3 )
            goto LABEL_282;
          v105 = (int)this;
          this = (AssetManager__InitCR_d__134_o *)v103->fields._loader_5__3;
          if ( !this )
            goto LABEL_281;
          configFileUrl_5__2 = v103->fields._configFileUrl_5__2;
          v107 = System_String__Trim((System_String_o *)this, 0LL);
          this = (AssetManager__InitCR_d__134_o *)System_Int32__Parse(v107, 0LL);
          if ( LODWORD(v103->fields.__2__current) <= 3 )
            goto LABEL_282;
          v108 = (int)this;
          this = *(AssetManager__InitCR_d__134_o **)&v103->fields._requestTime_5__4;
          if ( !this )
            goto LABEL_281;
          v109 = System_String__Trim((System_String_o *)this, 0LL);
          this = (AssetManager__InitCR_d__134_o *)System_UInt32__Parse(v109, 0LL);
          v110 = (int)v103->fields.__2__current;
          if ( (unsigned int)v110 <= 4 )
            goto LABEL_282;
          v111 = (unsigned int)this;
          v112 = v110 >= 6 ? (System_String_o *)v103[1].klass : 0LL;
          wait_5__6 = (System_String_o *)v103->fields._wait_5__6;
          assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.assetBundleDic;
          v115 = (AssetData_o *)sub_1BCB244(AssetData_TypeInfo);
          AssetData___ctor_39694852(v115, 0, wait_5__6, v105, configFileUrl_5__2, v108, v111, v112, 0LL);
          if ( !assetBundleDic )
            goto LABEL_281;
          System_Collections_Generic_Dictionary_object__object___set_Item(
            assetBundleDic,
            (Il2CppObject *)wait_5__6,
            (Il2CppObject *)v115,
            (const MethodInfo_3385D64 *)Method_System_Collections_Generic_Dictionary_string__AssetData__set_Item__);
          v80 = v285;
          ++v102;
          v101 = (int)v285->fields.__2__current;
          if ( (int)v102 - 4 >= v101 )
            goto LABEL_120;
        }
        goto LABEL_282;
      }
LABEL_120:
      v132 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      ConfigFileAddress = AssetManager__get_ConfigFileAddress((const MethodInfo *)v132);
      v4->fields._configFileUrl_5__2 = ConfigFileAddress;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._configFileUrl_5__2, (int32_t)ConfigFileAddress, v134, v135);
      v4->fields._loader_5__3 = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._loader_5__3, 0, v136, v137);
LABEL_123:
      v138 = v4->fields._configFileUrl_5__2;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      UrlString = AssetManager__getUrlString(v138, method);
      v140 = UnityEngine_Networking_UnityWebRequest__Get(UrlString, 0LL);
      v4->fields._loader_5__3 = v140;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._loader_5__3, (int32_t)v140, v141, v142);
      this = (AssetManager__InitCR_d__134_o *)v4->fields._loader_5__3;
      if ( !this )
        goto LABEL_281;
      UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
      v144 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v144 = ManagerConfig_TypeInfo;
      }
      TIMEOUT = v144->static_fields->TIMEOUT;
      v4->fields._loadProgress_5__5 = 0.0;
      v4->fields._requestTime_5__4 = unscaledTime + TIMEOUT;
      v146 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCB244(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v146, 0LL);
      v4->fields._wait_5__6 = v146;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._wait_5__6, (int32_t)v146, v147, v148);
LABEL_129:
      v149 = (AssetManager__InitCR_d__134_o **)&v4->fields._loader_5__3;
      this = (AssetManager__InitCR_d__134_o *)v4->fields._loader_5__3;
      if ( !this )
        goto LABEL_281;
      this = (AssetManager__InitCR_d__134_o *)UnityEngine_Networking_UnityWebRequest__get_isDone(
                                                (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_136;
      this = *v149;
      if ( !*v149 )
        goto LABEL_281;
      downloadProgress = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                           (UnityEngine_Networking_UnityWebRequest_o *)this,
                           0LL);
      loadProgress_5__5 = v4->fields._loadProgress_5__5;
      v152 = downloadProgress;
      v155 = UnityEngine_Time__get_unscaledTime(0LL);
      v156 = v152 == loadProgress_5__5;
      v157 = v155;
      if ( !v156 )
      {
        v166 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v166 = ManagerConfig_TypeInfo;
        }
        v167 = v166->static_fields;
        this = (AssetManager__InitCR_d__134_o *)v4->fields._loader_5__3;
        v4->fields._requestTime_5__4 = v157 + v167->TIMEOUT;
        if ( this )
        {
          v4->fields._loadProgress_5__5 = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                                            (UnityEngine_Networking_UnityWebRequest_o *)this,
                                            0LL);
          goto LABEL_153;
        }
LABEL_281:
        sub_1BCB254(this, method);
      }
      if ( v155 >= v4->fields._requestTime_5__4 )
      {
LABEL_136:
        if ( !_4__this )
          goto LABEL_281;
        this = *v149;
        if ( !*v149 )
          goto LABEL_281;
        if ( !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL) )
        {
          v165 = (Il2CppObject *)StringLiteral_2379/*"AssetStorageList download time over"*/;
          goto LABEL_249;
        }
        this = *v149;
        if ( !*v149 )
          goto LABEL_281;
        error = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        this = (AssetManager__InitCR_d__134_o *)System_String__IsNullOrEmpty(error, 0LL);
        if ( !*v149 )
          goto LABEL_281;
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v164 = UnityEngine_Networking_UnityWebRequest__get_error(
                   (UnityEngine_Networking_UnityWebRequest_o *)*v149,
                   0LL);
LABEL_155:
          v165 = (Il2CppObject *)v164;
          goto LABEL_249;
        }
        this = (AssetManager__InitCR_d__134_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                  (UnityEngine_Networking_UnityWebRequest_o *)*v149,
                                                  0LL);
        if ( !this )
          goto LABEL_281;
        text = UnityEngine_Networking_DownloadHandler__get_text((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
        if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
        v160 = CatAndMouseGame__MouseGame3(text, 0LL);
        if ( System_String__IsNullOrEmpty(v160, 0LL) )
        {
          v162 = v4->fields._configFileUrl_5__2;
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v163 = AssetManager__getUrlString(v162, v161);
          v164 = System_String__Concat_62450424((System_String_o *)StringLiteral_2378/*"AssetStorageList download error : "*/, v163, 0LL);
          goto LABEL_155;
        }
        this = (AssetManager__InitCR_d__134_o *)sub_1BCB0A0(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_281;
        method = (const MethodInfo *)this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_282;
        LOWORD(this->fields.__4__this) = -257;
        if ( !v160 )
          goto LABEL_281;
        this = (AssetManager__InitCR_d__134_o *)System_String__Trim_62506972(v160, (System_Char_array *)this, 0LL);
        if ( !this )
          goto LABEL_281;
        v171 = this;
        if ( System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_25039/*"~"*/, 0LL) )
        {
          this = (AssetManager__InitCR_d__134_o *)sub_1BCB0A0(char___TypeInfo, 2LL);
          if ( !this )
            goto LABEL_281;
          v172 = (int)this->fields.__2__current;
          method = (const MethodInfo *)this;
          if ( !v172 )
            goto LABEL_282;
          LOWORD(this->fields.__4__this) = 13;
          if ( v172 == 1 )
            goto LABEL_282;
          WORD1(this->fields.__4__this) = 10;
          v173 = System_String__IndexOfAny((System_String_o *)v171, (System_Char_array *)this, 0LL);
          if ( v173 >= 2 )
          {
            v174 = v173;
            v175 = System_String__Substring_62496348((System_String_o *)v171, 1, v173 - 1, 0LL);
            v176 = System_String__Substring((System_String_o *)v171, v174 + 1, 0LL);
            this = (AssetManager__InitCR_d__134_o *)System_Text_Encoding__get_UTF8(0LL);
            if ( !this )
              goto LABEL_281;
            v177 = (System_Byte_array *)((__int64 (__fastcall *)(AssetManager__InitCR_d__134_o *, System_String_o *, Il2CppClass **))this->klass[1]._1.methods)(
                                          this,
                                          v176,
                                          this->klass[1]._1.nestedTypes);
            if ( !Crc32_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
            v178 = Crc32__Compute(v177, 0LL);
            if ( System_UInt32__Parse(v175, 0LL) == v178 )
            {
              if ( *v149 )
              {
                UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)*v149, 0LL);
                *v149 = 0LL;
                sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._loader_5__3, 0, v181, v182);
              }
              if ( !v176 )
                goto LABEL_280;
              this = (AssetManager__InitCR_d__134_o *)sub_1BCB0A0(char___TypeInfo, 2LL);
              if ( !this )
                goto LABEL_281;
              v183 = (int)this->fields.__2__current;
              method = (const MethodInfo *)this;
              if ( v183 )
              {
                LOWORD(this->fields.__4__this) = 13;
                if ( v183 != 1 )
                {
                  WORD1(this->fields.__4__this) = 10;
                  v184 = System_String__Split_62499616(v176, (System_Char_array *)this, 1, 0LL);
                  v185 = sub_1BCB244(AssetDataListInfo_TypeInfo);
                  AssetDataListInfo___ctor((AssetDataListInfo_o *)v185, v186);
                  if ( !v184 )
                    goto LABEL_281;
                  v188 = v184->max_length;
                  v283 = (CGThumbnailListItem_o *)(v185 + 16);
                  v284 = (CGThumbnailListItem_o *)(v185 + 24);
                  v286 = (CGThumbnailListItem_o *)(v185 + 32);
                  if ( v188 >= 1 )
                  {
                    v189 = 0;
                    while ( v189 < v188 )
                    {
                      this = (AssetManager__InitCR_d__134_o *)v184->m_Items[v189];
                      if ( !this )
                        goto LABEL_281;
                      this = (AssetManager__InitCR_d__134_o *)System_String__Split(
                                                                (System_String_o *)this,
                                                                0x2Cu,
                                                                0,
                                                                0LL);
                      if ( !this )
                        goto LABEL_281;
                      v190 = this;
                      if ( SLODWORD(this->fields.__2__current) < 1 )
                        goto LABEL_231;
                      this = (AssetManager__InitCR_d__134_o *)this->fields.__4__this;
                      if ( !this )
                        goto LABEL_281;
                      this = (AssetManager__InitCR_d__134_o *)System_String__StartsWith(
                                                                (System_String_o *)this,
                                                                (System_String_o *)StringLiteral_1760/*"@"*/,
                                                                0LL);
                      if ( !LODWORD(v190->fields.__2__current) )
                        goto LABEL_282;
                      v191 = (char)this;
                      this = (AssetManager__InitCR_d__134_o *)v190->fields.__4__this;
                      if ( !this )
                        goto LABEL_281;
                      if ( (v191 & 1) != 0 )
                      {
                        v192 = System_String__Substring((System_String_o *)this, 1, 0LL);
                        v193 = (int)v190->fields.__2__current;
                        v194 = (void **)&v190->fields._loader_5__3;
                        v195 = AssetManager_TypeInfo;
                        v196 = v192;
                        if ( v193 == 2 )
                          v194 = &StringLiteral_1/*""*/;
                        v197 = v193 <= 1;
                        if ( v193 <= 1 )
                          v198 = &StringLiteral_1/*""*/;
                        else
                          v198 = (void **)&v190->fields._configFileUrl_5__2;
                        if ( v197 )
                          v199 = &StringLiteral_1/*""*/;
                        else
                          v199 = v194;
                        v200 = (CGThumbnailListItem_c *)*v198;
                        v201 = (CGThumbnailListItem_c *)*v199;
                        if ( !AssetManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                          v195 = AssetManager_TypeInfo;
                        }
                        this = (AssetManager__InitCR_d__134_o *)System_String__op_Inequality(
                                                                  v196,
                                                                  v195->static_fields->assetBundleMasterVersion,
                                                                  0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                        {
                          this = (AssetManager__InitCR_d__134_o *)_4__this->fields.assetBundleDic;
                          if ( !this )
                            goto LABEL_281;
                          System_Collections_Generic_Dictionary_object__object___Clear(
                            (System_Collections_Generic_Dictionary_object__object__o *)this,
                            (const MethodInfo_3385F00 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
                        }
                        if ( !v185 )
                          goto LABEL_281;
                        v283->klass = (CGThumbnailListItem_c *)v196;
                        sub_1BCAF9C(v283, (int32_t)v196, v202, v203);
                        v284->klass = v200;
                        sub_1BCAF9C(v284, (int32_t)v200, v204, v205);
                        v286->klass = v201;
                        sub_1BCAF9C(v286, (int32_t)v201, v206, v207);
                      }
                      else
                      {
                        this = (AssetManager__InitCR_d__134_o *)System_String__StartsWith(
                                                                  (System_String_o *)this,
                                                                  (System_String_o *)StringLiteral_25039/*"~"*/,
                                                                  0LL);
                        if ( ((unsigned __int8)this & 1) == 0 )
                        {
                          if ( !LODWORD(v190->fields.__2__current) )
                            goto LABEL_282;
                          this = (AssetManager__InitCR_d__134_o *)v190->fields.__4__this;
                          if ( !this )
                            goto LABEL_281;
                          this = (AssetManager__InitCR_d__134_o *)System_String__IndexOf(
                                                                    (System_String_o *)this,
                                                                    0x7Eu,
                                                                    0LL);
                          if ( (_DWORD)this != 1 )
                          {
                            if ( SLODWORD(v190->fields.__2__current) < 5 )
                              goto LABEL_231;
                            this = (AssetManager__InitCR_d__134_o *)v190->fields.__4__this;
                            if ( !this )
                              goto LABEL_281;
                            v208 = System_String__Trim((System_String_o *)this, 0LL);
                            this = (AssetManager__InitCR_d__134_o *)System_Int32__Parse(v208, 0LL);
                            version = (int)this;
                            if ( LODWORD(v190->fields.__2__current) < 3 )
                              goto LABEL_282;
                            this = (AssetManager__InitCR_d__134_o *)v190->fields._loader_5__3;
                            if ( !this )
                              goto LABEL_281;
                            v281 = v190->fields._configFileUrl_5__2;
                            v209 = System_String__Trim((System_String_o *)this, 0LL);
                            this = (AssetManager__InitCR_d__134_o *)System_Int32__Parse(v209, 0LL);
                            if ( LODWORD(v190->fields.__2__current) <= 3 )
                              goto LABEL_282;
                            v210 = (int)this;
                            this = *(AssetManager__InitCR_d__134_o **)&v190->fields._requestTime_5__4;
                            if ( !this )
                              goto LABEL_281;
                            v211 = System_String__Trim((System_String_o *)this, 0LL);
                            this = (AssetManager__InitCR_d__134_o *)System_UInt32__Parse(v211, 0LL);
                            v213 = (int)v190->fields.__2__current;
                            if ( (unsigned int)v213 <= 4 )
                              goto LABEL_282;
                            v214 = (unsigned int)this;
                            if ( v213 >= 6 )
                              klass = (System_String_o *)v190[1].klass;
                            else
                              klass = 0LL;
                            v215 = (System_String_o *)v190->fields._wait_5__6;
                            AssetData = AssetManager__GetAssetData(
                                          (AssetManager_o *)this,
                                          _4__this->fields.assetBundleDic,
                                          v215,
                                          v212);
                            if ( AssetData )
                            {
                              v217 = (Il2CppObject *)AssetData;
                              this = (AssetManager__InitCR_d__134_o *)AssetData__SetUpdateInfo(
                                                                        AssetData,
                                                                        version,
                                                                        v281,
                                                                        v210,
                                                                        v214,
                                                                        klass,
                                                                        0LL);
                              if ( !v185 )
                                goto LABEL_281;
                              this = *(AssetManager__InitCR_d__134_o **)(v185 + 40);
                              if ( !this )
                                goto LABEL_281;
                              v220 = *(_QWORD *)&this->fields.__1__state;
                              v221 = Method_System_Collections_Generic_List_AssetData__Add__;
                              ++HIDWORD(this->fields.__2__current);
                              if ( !v220 )
                                goto LABEL_281;
                              _2__current_low = SLODWORD(this->fields.__2__current);
                              if ( (unsigned int)_2__current_low >= *(_DWORD *)(v220 + 24) )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  (System_Collections_Generic_List_object__o *)this,
                                  v217,
                                  *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v221[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v223 = v220 + 8 * _2__current_low;
                                LODWORD(this->fields.__2__current) = _2__current_low + 1;
                                *(_QWORD *)(v223 + 32) = v217;
                                sub_1BCAF9C((CGThumbnailListItem_o *)(v223 + 32), (int32_t)v217, v218, v219);
                              }
                              v215 = 0LL;
                            }
                            this = (AssetManager__InitCR_d__134_o *)System_String__IsNullOrEmpty(v215, 0LL);
                            if ( ((unsigned __int8)this & 1) == 0 )
                            {
                              if ( !v185 )
                                goto LABEL_281;
                              v224 = *(System_Collections_Generic_List_object__o **)(v185 + 40);
                              v225 = (AssetData_o *)sub_1BCB244(AssetData_TypeInfo);
                              AssetData___ctor_39694992(v225, 0, v215, 0, version, v281, v210, v214, klass, 0LL);
                              if ( !v224 )
                                goto LABEL_281;
                              items = v224->fields._items;
                              v229 = Method_System_Collections_Generic_List_AssetData__Add__;
                              ++v224->fields._version;
                              if ( !items )
                                goto LABEL_281;
                              size = v224->fields._size;
                              if ( (unsigned int)size >= items->max_length )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  v224,
                                  (Il2CppObject *)v225,
                                  *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v229[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v231 = &items->obj.klass + size;
                                v224->fields._size = size + 1;
                                v231[4] = (Il2CppClass *)v225;
                                sub_1BCAF9C((CGThumbnailListItem_o *)(v231 + 4), (int32_t)v225, v226, v227);
                              }
                            }
                          }
                        }
                      }
                      v188 = v184->max_length;
                      if ( (int)++v189 >= v188 )
                        goto LABEL_231;
                    }
                    goto LABEL_282;
                  }
LABEL_231:
                  if ( !v185 )
                    goto LABEL_281;
                  v232 = AssetManager_TypeInfo;
                  v233 = v283->klass;
                  if ( !AssetManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                    v232 = AssetManager_TypeInfo;
                  }
                  v234 = v232->static_fields;
                  v234->assetBundleMasterVersion = (struct System_String_o *)v233;
                  sub_1BCAF9C((CGThumbnailListItem_o *)&v234->assetBundleMasterVersion, (int32_t)v233, v64, v187);
                  v235 = AssetManager_TypeInfo->static_fields;
                  v236 = v284->klass;
                  v235->assetBundleDateVersion = (struct System_String_o *)v284->klass;
                  sub_1BCAF9C((CGThumbnailListItem_o *)&v235->assetBundleDateVersion, (int32_t)v236, v237, v238);
                  v239 = AssetManager_TypeInfo->static_fields;
                  v240 = v286->klass;
                  v239->assetBundleBuildVersion = (struct System_String_o *)v286->klass;
                  sub_1BCAF9C((CGThumbnailListItem_o *)&v239->assetBundleBuildVersion, (int32_t)v240, v241, v242);
                  this = (AssetManager__InitCR_d__134_o *)_4__this->fields.assetBundleDic;
                  if ( !this )
                    goto LABEL_281;
                  System_Collections_Generic_Dictionary_object__object___Clear(
                    (System_Collections_Generic_Dictionary_object__object__o *)this,
                    (const MethodInfo_3385F00 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
                  this = *(AssetManager__InitCR_d__134_o **)(v185 + 40);
                  if ( !this )
                    goto LABEL_281;
                  System_Collections_Generic_List_object___GetEnumerator(
                    (System_Collections_Generic_List_Enumerator_T__o *)&v287,
                    (System_Collections_Generic_List_object__o *)this,
                    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
                  v288 = v287;
                  while ( 1 )
                  {
                    v243 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                             &v288,
                             (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
                    if ( !v243 )
                      break;
                    current = v288.fields._current;
                    if ( !v288.fields._current )
                      sub_1BCB254(v243, v244);
                    v246 = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.assetBundleDic;
                    if ( !v246 )
                      sub_1BCB254(0LL, v244);
                    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                            v246,
                            (Il2CppObject *)v288.fields._current[1].monitor,
                            (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__) )
                    {
                      v248 = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.assetBundleDic;
                      if ( !v248 )
                        sub_1BCB254(0LL, v247);
                      System_Collections_Generic_Dictionary_object__object___Add(
                        v248,
                        (Il2CppObject *)current[1].monitor,
                        current,
                        (const MethodInfo_3385D78 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
                    }
                  }
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v288,
                    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
                  AssetManager__ConfigWriteRequest(_4__this, 1, v272);
LABEL_280:
                  v4->fields._configFileUrl_5__2 = 0LL;
                  sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._configFileUrl_5__2, 0, v179, v180);
                  v4->fields._loader_5__3 = 0LL;
                  sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._loader_5__3, 0, v273, v274);
                  v275 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCB244(UnityEngine_WaitForEndOfFrame_TypeInfo);
                  UnityEngine_WaitForEndOfFrame___ctor(v275, 0LL);
                  v4->fields.__2__current = (Il2CppObject *)v275;
                  v169 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
                  sub_1BCAF9C(v169, (int32_t)v275, v276, v277);
                  v170 = 6;
                  goto LABEL_278;
                }
              }
LABEL_282:
              sub_1BCB25C(this, method, v64);
            }
            v249 = (Il2CppObject *)StringLiteral_2375/*"AssetStorageList download crc error"*/;
            if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
            UnityEngine_Debug__LogError(v249, 0LL);
          }
        }
        v165 = (Il2CppObject *)StringLiteral_2376/*"AssetStorageList download data error"*/;
        if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
        UnityEngine_Debug__LogError(v165, 0LL);
LABEL_249:
        if ( *v149 )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)*v149, 0LL);
          *v149 = 0LL;
          sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._loader_5__3, 0, v250, v251);
        }
        if ( !v165 )
          goto LABEL_277;
        v252 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v252 = ManagerConfig_TypeInfo;
        }
        v253 = v252->static_fields;
        if ( v253->UseDebugCommand )
        {
          if ( !v252->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v252);
            v253 = ManagerConfig_TypeInfo->static_fields;
          }
          if ( System_String__op_Inequality(v253->ServerDefaultType, (System_String_o *)StringLiteral_11377/*"SCRIPT"*/, 0LL) )
          {
            _4__this->fields.isErrorDialog = 1;
            v254 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v255 = (ErrorDialog_ClickDelegate_o *)sub_1BCB244(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(
              v255,
              (Il2CppObject *)_4__this,
              Method_AssetManager_OnClickWaitDebugDialog__,
              0LL);
            if ( !v254 )
              goto LABEL_281;
            *(_QWORD *)&methodb.fields.hasValue = 0LL;
            methodb.fields.value.fields.y = 0.0;
            CommonUI__OpenWarningDialog(
              (CommonUI_o *)v254,
              (System_String_o *)StringLiteral_15795/*"[FFFF80]Download error for debug"*/,
              (System_String_o *)v165,
              v255,
              1,
              0,
              -1.0,
              1,
              methodb,
              0LL);
LABEL_260:
            if ( _4__this->fields.isErrorDialog )
            {
              v256 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCB244(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v256, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v256;
              v169 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1BCAF9C(v169, (int32_t)v256, v257, v258);
              v170 = 3;
              goto LABEL_278;
            }
          }
        }
        _4__this->fields.isErrorDialog = 1;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        if ( !byte_4B1B4DA )
        {
          sub_1BCAFF8(&ManagementManager_TypeInfo, method);
          byte_4B1B4DA = 1;
        }
        v259 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v259 = ManagementManager_TypeInfo;
        }
        isDuringStartup = v259->static_fields->isDuringStartup;
        v261 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          if ( isDuringStartup )
          {
LABEL_270:
            v262 = LocalizationManager__Get((System_String_o *)StringLiteral_2033/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
            v263 = (ErrorDialog_ClickDelegate_o *)sub_1BCB244(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(
              v263,
              (Il2CppObject *)_4__this,
              Method_AssetManager_OnClickRetryDialog__,
              0LL);
            if ( !v261 )
              goto LABEL_281;
            CommonUI__OpenRetryBootDialog((CommonUI_o *)v261, (System_String_o *)StringLiteral_1/*""*/, v262, v263, 0, 0LL);
LABEL_275:
            if ( _4__this->fields.isErrorDialog )
            {
              v266 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCB244(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v266, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v266;
              v169 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1BCAF9C(v169, (int32_t)v266, v267, v268);
              v170 = 4;
              goto LABEL_278;
            }
LABEL_277:
            v269 = (UnityEngine_WaitForSeconds_o *)sub_1BCB244(UnityEngine_WaitForSeconds_TypeInfo);
            UnityEngine_WaitForSeconds___ctor(v269, 1.0, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v269;
            v169 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1BCAF9C(v169, (int32_t)v269, v270, v271);
            v170 = 5;
            goto LABEL_278;
          }
        }
        else
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          if ( isDuringStartup )
            goto LABEL_270;
        }
        v264 = LocalizationManager__Get((System_String_o *)StringLiteral_2034/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
        v265 = (ErrorDialog_ClickDelegate_o *)sub_1BCB244(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v265, (Il2CppObject *)_4__this, Method_AssetManager_OnClickRetryDialog__, 0LL);
        if ( !v261 )
          goto LABEL_281;
        CommonUI__OpenRetryDialog((CommonUI_o *)v261, (System_String_o *)StringLiteral_1/*""*/, v264, v265, 0, 0LL);
        goto LABEL_275;
      }
LABEL_153:
      v168 = (Il2CppObject *)v4->fields._wait_5__6;
      v4->fields.__2__current = v168;
      v169 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1BCAF9C(v169, (int32_t)v168, v153, v154);
      v170 = 2;
LABEL_278:
      LODWORD(v169[-1].fields._ThumbnailSpritePath_k__BackingField) = v170;
      return 1;
    case 1:
      v4->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_27;
      goto LABEL_281;
    case 2:
      v4->fields.__1__state = -1;
      goto LABEL_129;
    case 3:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_281;
      goto LABEL_260;
    case 4:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_281;
      goto LABEL_275;
    case 5:
      v4->fields._wait_5__6 = 0LL;
      v4->fields.__1__state = -1;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._wait_5__6, 0, v2, v3);
      if ( !_4__this )
        goto LABEL_281;
      goto LABEL_123;
    case 6:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_281;
      _4__this->fields.initCRW = 0LL;
      _4__this->fields.isCancelDownload = 0;
      _4__this->fields.isInitEnd = 1;
      sub_1BCAF9C((CGThumbnailListItem_o *)&_4__this->fields.initCRW, 0, v2, v3);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall AssetManager__InitCR_d__134__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AssetManager__InitCR_d__134_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AssetManager__InitCR_d__134__System_Collections_IEnumerator_Reset(
        AssetManager__InitCR_d__134_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_AssetManager__InitCR_d__134_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall AssetManager__InitCR_d__134__System_Collections_IEnumerator_get_Current(
        AssetManager__InitCR_d__134_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall AssetManager__InitCR_d__134__System_IDisposable_Dispose(
        AssetManager__InitCR_d__134_o *this,
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_o *v4; // x19
  int32_t _1__state; // w8
  struct AssetManager_o *_4__this; // x21
  UnityEngine_WaitForEndOfFrame_o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *wait_5__2; // x1
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0

  v4 = this;
  if ( (byte_4B1B559 & 1) == 0 )
  {
    this = (AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_o *)sub_1BCAFF8(
                                                                        &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                        method);
    byte_4B1B559 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v4->fields.__1__state = -1;
    v7 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCB244(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v7, 0LL);
    v4->fields._wait_5__2 = v7;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._wait_5__2, (int32_t)v7, v8, v9);
  }
  if ( !_4__this )
    sub_1BCB254(this, method);
  if ( _4__this->fields.inProgressUnloadUnusedAssets || _4__this->fields.requestUnloadUnusedAssets )
  {
    wait_5__2 = (Il2CppObject *)v4->fields._wait_5__2;
    v4->fields.__2__current = wait_5__2;
    p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
    sub_1BCAF9C(p__2__current, (int32_t)wait_5__2, v2, v3);
    result = 1;
    LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
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

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
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


void __fastcall AssetManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1B551 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager___c_TypeInfo, v1);
    byte_4B1B551 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(AssetManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  AssetManager___c_TypeInfo->static_fields->__9 = (struct AssetManager___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)AssetManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall AssetManager___c___ctor(AssetManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssetManager___c___CancelAndReleaseDownloadAssetStorage_b__129_0(
        AssetManager___c_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  if ( !assetData )
    sub_1BCB254(this, 0LL);
  AssetData__RemoveEntryAll(assetData, 0LL);
}


void __fastcall AssetManager___c__DisplayClass118_0___ctor(
        AssetManager___c__DisplayClass118_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetManager___c__DisplayClass118_0___DownloadAssetStorageAttributeWithCheckDialog_b__1(
        AssetManager___c__DisplayClass118_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4B1B552 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Application_TypeInfo, isDecide);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v5);
    sub_1BCAFF8(&StringLiteral_12209/*"START_BOOT_ASSET_DOWNLOAD"*/, v6);
    byte_4B1B552 = 1;
  }
  if ( isDecide )
  {
    this->fields.isDataUpdate = 1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !Instance )
      sub_1BCB254(0LL, v8);
    CrashReporter__SetNowState((CrashReporter_o *)Instance, (System_String_o *)StringLiteral_12209/*"START_BOOT_ASSET_DOWNLOAD"*/, 0LL);
  }
  else
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    UnityEngine_Application__Quit_69931008(0LL);
  }
}


void __fastcall AssetManager___c__DisplayClass151_0___ctor(
        AssetManager___c__DisplayClass151_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssetManager___c__DisplayClass151_0___LoadStart_b__0(
        AssetManager___c__DisplayClass151_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  AssetLoader_o *loader; // x20
  Il2CppObject *_4__this; // x22
  AssetLoader_LoadEndHandler_o *v6; // x21
  const MethodInfo *v7; // x3
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  struct AssetManager_LoadWaitStatus_o *waiter; // x8

  if ( (byte_4B1B553 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_AssetManager_OnEndLoadAssetStorage__, method);
    sub_1BCAFF8(&AssetLoader_LoadEndHandler_TypeInfo, v3);
    byte_4B1B553 = 1;
  }
  loader = this->fields.loader;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v6 = (AssetLoader_LoadEndHandler_o *)sub_1BCB244(AssetLoader_LoadEndHandler_TypeInfo);
  AssetLoader_LoadEndHandler___ctor(v6, _4__this, Method_AssetManager_OnEndLoadAssetStorage__, v7);
  waiter = this->fields.waiter;
  if ( !waiter || !loader )
    sub_1BCB254(v8, v9);
  AssetLoader__StartLoad(loader, v6, waiter->fields.resourceNames, v10);
}


void __fastcall AssetManager___c__DisplayClass172_0___ctor(
        AssetManager___c__DisplayClass172_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssetManager___c__DisplayClass172_0___LoadAssetStorage_b__0(
        AssetManager___c__DisplayClass172_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  AssetManager___c__DisplayClass172_0_o *v4; // x19
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  struct System_Collections_Generic_List_string__o *remainNameList; // x8

  v4 = this;
  if ( (byte_4B1B554 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Remove__, data);
    this = (AssetManager___c__DisplayClass172_0_o *)sub_1BCAFF8(
                                                      &Method_System_Collections_Generic_List_string__get_Count__,
                                                      v5);
    byte_4B1B554 = 1;
  }
  ++v4->fields.calledCallbackFuncCounter;
  if ( !data )
    goto LABEL_12;
  this = (AssetManager___c__DisplayClass172_0_o *)v4->fields.remainNameList;
  if ( !this )
    goto LABEL_12;
  this = (AssetManager___c__DisplayClass172_0_o *)System_Collections_Generic_List_object___Remove(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    (Il2CppObject *)data->fields.name,
                                                    (const MethodInfo_36BB0F8 *)Method_System_Collections_Generic_List_string__Remove__);
  if ( v4->fields.calledCallbackFunc )
    return;
  remainNameList = v4->fields.remainNameList;
  if ( !remainNameList )
LABEL_12:
    sub_1BCB254(this, data);
  if ( remainNameList->fields._size <= 0 )
  {
    this = (AssetManager___c__DisplayClass172_0_o *)v4->fields.__4__this;
    if ( this )
    {
      AssetManager__AddLoadWaitStatus((AssetManager_o *)this, v4->fields.callbackFunc, v6);
      this = (AssetManager___c__DisplayClass172_0_o *)v4->fields.__4__this;
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


void __fastcall AssetManager___c__DisplayClass189_0___ctor(
        AssetManager___c__DisplayClass189_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssetManager___c__DisplayClass189_0___AssetObjectListSetupAndCall_b__0(
        AssetManager___c__DisplayClass189_0_o *this,
        const MethodInfo *method)
{
  struct AssetData_o *asset; // x8

  asset = this->fields.asset;
  if ( !asset )
    sub_1BCB254(this, method);
  return asset->fields.objectList != 0LL;
}


void __fastcall AssetManager___c__DisplayClass190_0___ctor(
        AssetManager___c__DisplayClass190_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssetManager___c__DisplayClass190_0___AssetObjectListSetupAndCall_b__0(
        AssetManager___c__DisplayClass190_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct AssetData_array *assetList; // x9
  int max_length; // w8
  int v5; // w10
  AssetData_o *v6; // x11

  assetList = this->fields.assetList;
  if ( !assetList )
    goto LABEL_12;
  max_length = assetList->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( max_length == v5 )
        sub_1BCB25C(this, method, v2);
      v6 = assetList->m_Items[v5];
      if ( !v6 )
        break;
      if ( v6->fields.objectList )
      {
        if ( max_length != ++v5 )
          continue;
      }
      return v5 >= max_length;
    }
LABEL_12:
    sub_1BCB254(this, method);
  }
  v5 = 0;
  return v5 >= max_length;
}


void __fastcall AssetManager__coUnloadUnusedAssets_d__141___ctor(
        AssetManager__coUnloadUnusedAssets_d__141_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AssetManager__coUnloadUnusedAssets_d__141__MoveNext(
        AssetManager__coUnloadUnusedAssets_d__141_o *this,
        const MethodInfo *method)
{
  AssetManager__coUnloadUnusedAssets_d__141_o *v2; // x19
  __int64 v3; // x1
  int32_t _1__state; // w8
  struct AssetManager_o *_4__this; // x20
  UnityEngine_WaitForEndOfFrame_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  AssetManager_c *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *wait_5__2; // x1
  CGThumbnailListItem_o *v13; // x19
  bool v14; // w21
  UnityEngine_AsyncOperation_o *v15; // x0
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct AssetManager_ResourceUnloadEventHandler_o *v19; // x8
  CGThumbnailListItem_o *p_unloadCallbacks; // x20
  struct AssetManager_ResourceUnloadEventHandler_o *unloadCallbacks; // t1
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  v2 = this;
  if ( (byte_4B1B55A & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, method);
    this = (AssetManager__coUnloadUnusedAssets_d__141_o *)sub_1BCAFF8(&UnityEngine_WaitForEndOfFrame_TypeInfo, v3);
    byte_4B1B55A = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_19;
    unloadCallbacks = _4__this->fields.unloadCallbacks;
    p_unloadCallbacks = (CGThumbnailListItem_o *)&_4__this->fields.unloadCallbacks;
    v19 = unloadCallbacks;
    *(_WORD *)((char *)&p_unloadCallbacks[-1].fields._Id_k__BackingField + 3) = 0;
    if ( unloadCallbacks )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v19->fields.m_target)(
        v19->fields.original_method_info,
        *(_QWORD *)&v19->fields.extra_arg);
      p_unloadCallbacks->klass = 0LL;
      sub_1BCAF9C(p_unloadCallbacks, 0, v22, v23);
    }
    return 0;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v2->fields.__1__state = -1;
      v6 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCB244(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v6, 0LL);
      v2->fields._wait_5__2 = v6;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v2->fields._wait_5__2, (int32_t)v6, v7, v8);
      goto LABEL_8;
    }
    return 0;
  }
  v2->fields.__1__state = -1;
LABEL_8:
  v9 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  this = (AssetManager__coUnloadUnusedAssets_d__141_o *)AssetManager__LoadIsBusy((const MethodInfo *)v9);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( _4__this )
    {
      v14 = 1;
      _4__this->fields.inProgressUnloadUnusedAssets = 1;
      v15 = UnityEngine_Resources__UnloadUnusedAssets(0LL);
      v2->fields.__2__current = (Il2CppObject *)v15;
      p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1BCAF9C(p__2__current, (int32_t)v15, v17, v18);
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
      return v14;
    }
LABEL_19:
    sub_1BCB254(this, method);
  }
  wait_5__2 = (Il2CppObject *)v2->fields._wait_5__2;
  v2->fields.__2__current = wait_5__2;
  v13 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1BCAF9C(v13, (int32_t)wait_5__2, v10, v11);
  v14 = 1;
  LODWORD(v13[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return v14;
}


Il2CppObject *__fastcall AssetManager__coUnloadUnusedAssets_d__141__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AssetManager__coUnloadUnusedAssets_d__141_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AssetManager__coUnloadUnusedAssets_d__141__System_Collections_IEnumerator_Reset(
        AssetManager__coUnloadUnusedAssets_d__141_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_AssetManager__coUnloadUnusedAssets_d__141_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall AssetManager__coUnloadUnusedAssets_d__141__System_Collections_IEnumerator_get_Current(
        AssetManager__coUnloadUnusedAssets_d__141_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall AssetManager__coUnloadUnusedAssets_d__141__System_IDisposable_Dispose(
        AssetManager__coUnloadUnusedAssets_d__141_o *this,
        const MethodInfo *method)
{
  ;
}