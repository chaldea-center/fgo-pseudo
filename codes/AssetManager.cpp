void AssetManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct AssetManager_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  struct AssetManager_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  struct AssetManager_StaticFields *v12; // x0
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

  if ( (byte_4CB52BC & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_2367/*"Asset"*/);
    sub_1C6BA08(&StringLiteral_2380/*"AssetStorageBack.txt"*/);
    sub_1C6BA08(&StringLiteral_22456/*"offline"*/);
    sub_1C6BA08(&StringLiteral_2379/*"AssetStorage.txt"*/);
    sub_1C6BA08(&StringLiteral_2381/*"AssetStorageCreate.txt"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_22522/*"online"*/);
    byte_4CB52BC = 1;
  }
  AssetManager_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_2367/*"Asset"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)AssetManager_TypeInfo->static_fields, StringLiteral_2367/*"Asset"*/, v1, v2);
  v3 = StringLiteral_22456/*"offline"*/;
  static_fields = AssetManager_TypeInfo->static_fields;
  static_fields->SAVE_DATA_OFFLINE = (struct System_String_o *)StringLiteral_22456/*"offline"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->SAVE_DATA_OFFLINE, v3, v5, v6);
  v7 = StringLiteral_22522/*"online"*/;
  v8 = AssetManager_TypeInfo->static_fields;
  v8->SAVE_DATA_ONLINE = (struct System_String_o *)StringLiteral_22522/*"online"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8->SAVE_DATA_ONLINE, v7, v9, v10);
  v11 = StringLiteral_2379/*"AssetStorage.txt"*/;
  v12 = AssetManager_TypeInfo->static_fields;
  v12->configFileName = (struct System_String_o *)StringLiteral_2379/*"AssetStorage.txt"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v12->configFileName, v11, v13, v14);
  v15 = StringLiteral_2381/*"AssetStorageCreate.txt"*/;
  v16 = AssetManager_TypeInfo->static_fields;
  v16->createConfigFileName = (struct System_String_o *)StringLiteral_2381/*"AssetStorageCreate.txt"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v16->createConfigFileName, v15, v17, v18);
  v19 = StringLiteral_2380/*"AssetStorageBack.txt"*/;
  v20 = AssetManager_TypeInfo->static_fields;
  v20->backConfigFileName = (struct System_String_o *)StringLiteral_2380/*"AssetStorageBack.txt"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v20->backConfigFileName, v19, v21, v22);
  v23 = StringLiteral_1/*""*/;
  v24 = AssetManager_TypeInfo->static_fields;
  v24->assetBundleMasterVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v24->assetBundleMasterVersion, v23, v25, v26);
  v27 = StringLiteral_1/*""*/;
  v28 = AssetManager_TypeInfo->static_fields;
  v28->assetBundleDateVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v28->assetBundleDateVersion, v27, v29, v30);
  v31 = StringLiteral_1/*""*/;
  v32 = AssetManager_TypeInfo->static_fields;
  v32->assetBundleBuildVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v32->assetBundleBuildVersion, v31, v33, v34);
}


void AssetManager___ctor(AssetManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_Dictionary_object__object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_Dictionary_object__object__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_object__o *v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_Queue_T__o *v18; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4CB52BB & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssetLoader___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_AssetLoader__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager___ctor__);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB52BB = 1;
  }
  *(_WORD *)&this->fields._DispLog = 257;
  this->fields.isInitEnd = 1;
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_34BAF8C *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.assetBundleDic = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.assetBundleDic, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v6,
    (const MethodInfo_34BAF8C *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.assetBundleReleaseDic = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.assetBundleReleaseDic, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v9,
    (const MethodInfo_34BAF8C *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.assetResourceDic = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)v9;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.assetResourceDic, (int32_t)v9, v10, v11);
  v12 = StringLiteral_1/*""*/;
  this->fields.requestConfigWriteData = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.requestConfigWriteData, v12, v13, v14);
  this->fields.requestWriteCounter = -1.0;
  v15 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_AssetLoader__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_AssetLoader___ctor__);
  this->fields.processingAssetLoaderList = (struct System_Collections_Generic_List_AssetLoader__o *)v15;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.processingAssetLoaderList, (int32_t)v15, v16, v17);
  this->fields.loadParallelMax = 1;
  v18 = (System_Collections_Generic_Queue_T__o *)sub_1C6BC54(System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v18,
    (const MethodInfo_39AAE04 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
  this->fields.downLoadWaitList = (struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)v18;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.downLoadWaitList, (int32_t)v18, v19, v20);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3A4F89C *)Method_SingletonMonoBehaviour_AssetManager___ctor__);
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

  if ( (byte_4CB52A5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
    byte_4CB52A5 = 1;
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
                                                                               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    if ( !processingAssetLoaderList )
      goto LABEL_10;
    v11 = (AssetLoader_o *)processingAssetLoaderList;
    syncRoot = (AssetData_o *)processingAssetLoaderList->fields._syncRoot;
    if ( syncRoot && AssetData__IsSame_40737060(syncRoot, type, name, 0) )
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
    sub_1C6BC60(processingAssetLoaderList, *(_QWORD *)&type);
  System_Collections_Generic_Queue_object___GetEnumerator(
    &v22,
    (System_Collections_Generic_Queue_T__o *)processingAssetLoaderList,
    (const MethodInfo_39AB484 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_Queue_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_3586930 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    if ( !v14 )
      break;
    Current = System_Collections_Generic_Queue_Enumerator_object___get_Current(
                &v22,
                (const MethodInfo_3586A20 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    v17 = (AssetManager_LoadWaitStatus_o *)Current;
    if ( !Current )
      sub_1C6BC60(0, v16);
    klass = (AssetData_o *)Current[1].klass;
    if ( klass && AssetData__IsSame_40737060(klass, type, name, 0) )
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
    (const MethodInfo_3586920 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
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

  if ( (byte_4CB52A4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
    byte_4CB52A4 = 1;
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
                                                                               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    if ( !processingAssetLoaderList )
      goto LABEL_10;
    v11 = (AssetLoader_o *)processingAssetLoaderList;
    syncRoot = (AssetData_o *)processingAssetLoaderList->fields._syncRoot;
    if ( syncRoot && AssetData__IsSame_40737060(syncRoot, type, name, 0) )
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
      sub_1C6BC60(processingAssetLoaderList, *(_QWORD *)&type);
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
    (const MethodInfo_39AB484 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  v25 = v24;
  do
  {
    v13 = System_Collections_Generic_Queue_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_3586930 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    if ( !v13 )
    {
      v21 = 8;
      goto LABEL_20;
    }
    Current = System_Collections_Generic_Queue_Enumerator_object___get_Current(
                &v25,
                (const MethodInfo_3586A20 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    v16 = (AssetManager_LoadWaitStatus_o *)Current;
    if ( !Current )
      sub_1C6BC60(0, v15);
    klass = (AssetData_o *)Current[1].klass;
  }
  while ( !klass || !AssetData__IsSame_40737060(klass, type, name, 0) );
  data = v16->fields.data;
  if ( !data )
    sub_1C6BC60(0, v18);
  AssetData__AddEntry(data, 0);
  AssetManager_LoadWaitStatus__AddCallback(v16, callbackFunc, v20);
  v21 = 7;
LABEL_20:
  System_Collections_Generic_Queue_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_3586920 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  return v13 && v21 == 7;
}


void AssetManager__AddLoadWaitStatus(AssetManager_o *this, System_Action_o *callbackFunc, const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x1
  System_Collections_Generic_Queue_T__o *downLoadWaitList; // x0

  if ( (byte_4CB52A7 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_LoadWaitStatus_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
    byte_4CB52A7 = 1;
  }
  v5 = sub_1C6BC54(AssetManager_LoadWaitStatus_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_QWORD *)(v5 + 24) = callbackFunc;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callbackFunc, v6, v7);
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
    sub_1C6BC60(0, v8);
  System_Collections_Generic_Queue_object___Enqueue(
    downLoadWaitList,
    (Il2CppObject *)v5,
    (const MethodInfo_39AB3CC *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
}


void AssetManager__AddLoadWaitStatus_40778088(AssetManager_o *this, AssetData_o *info, const MethodInfo *method)
{
  AssetManager_o *v4; // x20
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  v4 = this;
  if ( (byte_4CB52A8 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_LoadWaitStatus_TypeInfo);
    this = (AssetManager_o *)sub_1C6BA08(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
    byte_4CB52A8 = 1;
  }
  if ( !info
    || (v4->fields.downloadSize += info->fields.size,
        v5 = sub_1C6BC54(AssetManager_LoadWaitStatus_TypeInfo),
        System_Object___ctor((Il2CppObject *)v5, 0),
        *(_QWORD *)(v5 + 16) = info,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)info, v6, v7),
        (this = (AssetManager_o *)v4->fields.downLoadWaitList) == 0) )
  {
    sub_1C6BC60(this, info);
  }
  System_Collections_Generic_Queue_object___Enqueue(
    (System_Collections_Generic_Queue_T__o *)this,
    (Il2CppObject *)v5,
    (const MethodInfo_39AB3CC *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
}


void AssetManager__AddLoadWaitStatus_40789564(
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
  if ( (byte_4CB52A9 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_LoadWaitStatus_TypeInfo);
    this = (AssetManager_o *)sub_1C6BA08(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
    byte_4CB52A9 = 1;
  }
  if ( !info
    || (v8->fields.downloadSize += info->fields.size,
        v9 = (AssetManager_LoadWaitStatus_o *)sub_1C6BC54(AssetManager_LoadWaitStatus_TypeInfo),
        AssetManager_LoadWaitStatus___ctor_40789736(v9, info, callbackFunc, resourceNames, v10),
        (this = (AssetManager_o *)v8->fields.downLoadWaitList) == 0) )
  {
    sub_1C6BC60(this, info);
  }
  System_Collections_Generic_Queue_object___Enqueue(
    (System_Collections_Generic_Queue_T__o *)this,
    (Il2CppObject *)v9,
    (const MethodInfo_39AB3CC *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
}


System_Collections_IEnumerator_o *AssetManager__AssetObjectListSetupAndCall(
        AssetData_o *asset,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4CB52B8 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager__AssetObjectListSetupAndCall_d__190_TypeInfo);
    byte_4CB52B8 = 1;
  }
  v5 = sub_1C6BC54(AssetManager__AssetObjectListSetupAndCall_d__190_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = asset;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)asset, v6, v7);
  *(_QWORD *)(v5 + 40) = action;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 40), (int32_t)action, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *AssetManager__AssetObjectListSetupAndCall_40791580(
        AssetData_array *assetList,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4CB52B9 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager__AssetObjectListSetupAndCall_d__191_TypeInfo);
    byte_4CB52B9 = 1;
  }
  v5 = sub_1C6BC54(AssetManager__AssetObjectListSetupAndCall_d__191_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = assetList;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)assetList, v6, v7);
  *(_QWORD *)(v5 + 40) = action;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 40), (int32_t)action, v8, v9);
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
  const MethodInfo *v8; // x3
  void *downLoadWaitList; // x0
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o **p_downLoadWaitList; // x22
  char v11; // w27
  __int64 v12; // x24
  Il2CppObject *v13; // x23
  int32_t v14; // w23
  AssetData_o *v15; // x0
  AssetManager___c_c *v16; // x8
  AssetLoader_o *v17; // x24
  AssetLoader_LoadEndDataHandler_o *_9__130_0; // x25
  Il2CppObject *v19; // x26
  const MethodInfo *v20; // x3
  struct AssetManager___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4CB529B & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
    sub_1C6BA08(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
    sub_1C6BA08(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__);
    sub_1C6BA08(&System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo);
    sub_1C6BA08(&Method_AssetManager___c__CancelAndReleaseDownloadAssetStorage_b__130_0__);
    sub_1C6BA08(&AssetManager___c_TypeInfo);
    byte_4CB529B = 1;
  }
  v5 = (System_Collections_Generic_Queue_T__o *)sub_1C6BC54(System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v5,
    (const MethodInfo_39AAE04 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
  p_downLoadWaitList = &this->fields.downLoadWaitList;
  downLoadWaitList = this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
    goto LABEL_33;
  v11 = 0;
  while ( *((int *)downLoadWaitList + 8) > 0 )
  {
    downLoadWaitList = System_Collections_Generic_Queue_object___Dequeue(
                         (System_Collections_Generic_Queue_T__o *)downLoadWaitList,
                         (const MethodInfo_39AB55C *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
    if ( !downLoadWaitList )
      goto LABEL_33;
    v12 = *((_QWORD *)downLoadWaitList + 2);
    v13 = (Il2CppObject *)downLoadWaitList;
    if ( v12
      && (downLoadWaitList = (void *)AssetData__IsSame(*((AssetData_o **)downLoadWaitList + 2), name, 0),
          ((unsigned __int8)downLoadWaitList & 1) != 0) )
    {
      downLoadWaitList = this->fields.downLoadWaitList;
      v11 = 1;
      this->fields.downloadSize -= *(int *)(v12 + 48);
      if ( !downLoadWaitList )
        goto LABEL_33;
    }
    else
    {
      if ( !v5 )
        goto LABEL_33;
      System_Collections_Generic_Queue_object___Enqueue(
        v5,
        v13,
        (const MethodInfo_39AB3CC *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
      downLoadWaitList = *p_downLoadWaitList;
      if ( !*p_downLoadWaitList )
        goto LABEL_33;
    }
  }
  if ( (v11 & 1) == 0 )
  {
    downLoadWaitList = this->fields.processingAssetLoaderList;
    if ( downLoadWaitList )
    {
      v14 = 0;
      while ( v14 < *((_DWORD *)downLoadWaitList + 6) )
      {
        downLoadWaitList = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)downLoadWaitList,
                             v14,
                             (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
        if ( !downLoadWaitList )
          goto LABEL_33;
        v15 = (AssetData_o *)*((_QWORD *)downLoadWaitList + 4);
        if ( v15 && AssetData__IsSame_40737060(v15, 0, name, 0) )
        {
          downLoadWaitList = this->fields.processingAssetLoaderList;
          if ( !downLoadWaitList )
            goto LABEL_33;
          downLoadWaitList = System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)downLoadWaitList,
                               v14,
                               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
          v16 = AssetManager___c_TypeInfo;
          v17 = (AssetLoader_o *)downLoadWaitList;
          if ( !AssetManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager___c_TypeInfo);
            v16 = AssetManager___c_TypeInfo;
          }
          _9__130_0 = v16->static_fields->__9__130_0;
          if ( !_9__130_0 )
          {
            if ( !v16->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v16);
              v16 = AssetManager___c_TypeInfo;
            }
            v19 = (Il2CppObject *)v16->static_fields->__9;
            _9__130_0 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
            AssetLoader_LoadEndDataHandler___ctor(
              _9__130_0,
              v19,
              Method_AssetManager___c__CancelAndReleaseDownloadAssetStorage_b__130_0__,
              v20);
            static_fields = AssetManager___c_TypeInfo->static_fields;
            static_fields->__9__130_0 = _9__130_0;
            sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__130_0, (int32_t)_9__130_0, v22, v23);
          }
          if ( !v17 )
            goto LABEL_33;
          if ( _9__130_0 )
            AssetLoader__add_endCallback2(v17, _9__130_0, v7);
        }
        downLoadWaitList = this->fields.processingAssetLoaderList;
        ++v14;
        if ( !downLoadWaitList )
          goto LABEL_33;
      }
      goto LABEL_15;
    }
LABEL_33:
    sub_1C6BC60(downLoadWaitList, v6);
  }
LABEL_15:
  this->fields.downLoadWaitList = (struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)v5;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.downLoadWaitList, (int32_t)v5, (int32_t)v7, v8);
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
    sub_1C6BC60(this, 0);
  max_length = names->max_length;
  if ( (int)max_length >= 1 )
  {
    v6 = 0;
    do
    {
      if ( v6 >= (unsigned int)max_length )
        sub_1C6BC68(this);
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
  const MethodInfo *v6; // x3
  System_Collections_Generic_Queue_T__o *downLoadWaitList; // x0
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o **p_downLoadWaitList; // x21
  struct System_Object_array *array; // x8

  if ( (byte_4CB529A & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
    sub_1C6BA08(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
    sub_1C6BA08(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__);
    sub_1C6BA08(&System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo);
    byte_4CB529A = 1;
  }
  v3 = (System_Collections_Generic_Queue_T__o *)sub_1C6BC54(System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v3,
    (const MethodInfo_39AAE04 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
  p_downLoadWaitList = &this->fields.downLoadWaitList;
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
LABEL_12:
    sub_1C6BC60(downLoadWaitList, v4);
  while ( downLoadWaitList->fields._size > 0 )
  {
    downLoadWaitList = (System_Collections_Generic_Queue_T__o *)System_Collections_Generic_Queue_object___Dequeue(
                                                                  downLoadWaitList,
                                                                  (const MethodInfo_39AB55C *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
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
        (const MethodInfo_39AB3CC *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
    }
    downLoadWaitList = (System_Collections_Generic_Queue_T__o *)*p_downLoadWaitList;
    if ( !*p_downLoadWaitList )
      goto LABEL_12;
  }
  this->fields.downLoadWaitList = (struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.downLoadWaitList, (int32_t)v3, v5, v6);
  this->fields.isCancelDownload = 1;
}


void AssetManager__CancelDownloadAssetStorageAll(AssetManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *downLoadWaitList; // x0

  if ( (byte_4CB529D & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__);
    byte_4CB529D = 1;
  }
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
  this->fields.downloadSize = 0;
  if ( !downLoadWaitList )
    sub_1C6BC60(0, method);
  System_Collections_Generic_Queue_object___Clear(
    downLoadWaitList,
    (const MethodInfo_39AB08C *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__);
}


bool AssetManager__CheckDateVersion(System_String_o *dateVersion, const MethodInfo *method)
{
  AssetManager_c *v3; // x0
  System_String_o *assetBundleDateVersion; // x0

  if ( (byte_4CB5266 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    byte_4CB5266 = 1;
  }
  v3 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v3 = AssetManager_TypeInfo;
  }
  assetBundleDateVersion = v3->static_fields->assetBundleDateVersion;
  if ( !assetBundleDateVersion )
    sub_1C6BC60(0, method);
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

  if ( (byte_4CB52A6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
    byte_4CB52A6 = 1;
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
                                                                               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    if ( !processingAssetLoaderList )
      goto LABEL_10;
    syncRoot = (AssetData_o *)processingAssetLoaderList->fields._syncRoot;
    if ( syncRoot && AssetData__IsSame_40737060(syncRoot, type, name, 0) )
      return 1;
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
    ++v8;
    if ( !processingAssetLoaderList )
      goto LABEL_10;
  }
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.downLoadWaitList;
  if ( !processingAssetLoaderList )
LABEL_10:
    sub_1C6BC60(processingAssetLoaderList, *(_QWORD *)&type);
  System_Collections_Generic_Queue_object___GetEnumerator(
    &v16,
    (System_Collections_Generic_Queue_T__o *)processingAssetLoaderList,
    (const MethodInfo_39AB484 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_Queue_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_3586930 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    if ( !v10 )
      break;
    Current = System_Collections_Generic_Queue_Enumerator_object___get_Current(
                &v16,
                (const MethodInfo_3586A20 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    if ( !Current )
      sub_1C6BC60(0, v12);
    klass = (AssetData_o *)Current[1].klass;
    if ( klass && AssetData__IsSame_40737060(klass, type, name, 0) )
    {
      v14 = 7;
      goto LABEL_19;
    }
  }
  v14 = 8;
LABEL_19:
  System_Collections_Generic_Queue_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_3586920 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  return v10 && v14 == 7;
}


bool AssetManager__CheckVersion(System_String_o *masterVersion, System_String_o *dateVersion, const MethodInfo *method)
{
  AssetManager_c *v5; // x0
  AssetManager_c *v6; // x0

  if ( (byte_4CB5265 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    byte_4CB5265 = 1;
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

  if ( (byte_4CB52BA & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    sub_1C6BA08(&StringLiteral_12586/*"SYSTEM"*/);
    byte_4CB52BA = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.assetBundleDic, 0) )
  {
    assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
    if ( !assetBundleDic
      || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                        assetBundleDic,
                                                                                        (const MethodInfo_34BB76C *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0 )
    {
      sub_1C6BC60(assetBundleDic, v3);
    }
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v12,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
      (const MethodInfo_3B47370 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    v13 = v12;
    while ( 1 )
    {
      v5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
             &v13,
             (const MethodInfo_35B9D1C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
      if ( !v5 )
        break;
      currentValue = v13.fields._currentValue;
      if ( !v13.fields._currentValue )
        sub_1C6BC60(v5, v6);
      klass = v13.fields._currentValue[2].klass;
      if ( !klass )
        sub_1C6BC60(0, v6);
      if ( !System_String__Equals_64002176((System_String_o *)klass, (System_String_o *)StringLiteral_12586/*"SYSTEM"*/, 5, 0) )
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
      (const MethodInfo_35B9D18 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
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
  const MethodInfo *v23; // x3
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v24; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v25; // [xsp+20h] [xbp-80h] BYREF
  uint32_t v26; // [xsp+48h] [xbp-58h] BYREF
  bool lockTaken; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_4CB52A0 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&CatAndMouseGame_TypeInfo);
    sub_1C6BA08(&Crc32_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_1C6BA08(&System_Text_StringBuilder_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    sub_1C6BA08(&StringLiteral_43/*"\n"*/);
    sub_1C6BA08(&StringLiteral_25370/*"~"*/);
    byte_4CB52A0 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  lockTaken = 0;
  v26 = 0;
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic )
    goto LABEL_35;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         assetBundleDic,
         (const MethodInfo_34BB60C *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) < 1 )
    return;
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic )
    goto LABEL_35;
  Count = System_Collections_Generic_Dictionary_object__object___get_Count(
            assetBundleDic,
            (const MethodInfo_34BB60C *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__);
  v7 = (System_Text_StringBuilder_o *)sub_1C6BC54(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_64044104(v7, 60 * Count, 0);
  if ( !v7 )
    goto LABEL_35;
  System_Text_StringBuilder__Append_64053080(v7, 0x40u, 0);
  v8 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v8 = AssetManager_TypeInfo;
  }
  System_Text_StringBuilder__Append_64050752(v7, v8->static_fields->assetBundleMasterVersion, 0);
  if ( !System_String__IsNullOrEmpty(AssetManager_TypeInfo->static_fields->assetBundleDateVersion, 0) )
  {
    System_Text_StringBuilder__Append_64053080(v7, 0x2Cu, 0);
    v9 = AssetManager_TypeInfo;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      v9 = AssetManager_TypeInfo;
    }
    System_Text_StringBuilder__Append_64050752(v7, v9->static_fields->assetBundleDateVersion, 0);
    if ( !System_String__IsNullOrEmpty(AssetManager_TypeInfo->static_fields->assetBundleBuildVersion, 0) )
    {
      System_Text_StringBuilder__Append_64053080(v7, 0x2Cu, 0);
      v10 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v10 = AssetManager_TypeInfo;
      }
      System_Text_StringBuilder__Append_64050752(v7, v10->static_fields->assetBundleBuildVersion, 0);
    }
  }
  System_Text_StringBuilder__Append_64053080(v7, 0xAu, 0);
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      assetBundleDic,
                                                                                      (const MethodInfo_34BB76C *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0 )
  {
LABEL_35:
    sub_1C6BC60(assetBundleDic, isFast);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v24,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_3B47370 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    v11 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v25,
            (const MethodInfo_35B9D1C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v11 )
      break;
    currentValue = v25.fields._currentValue;
    if ( !v25.fields._currentValue )
      sub_1C6BC60(v11, v12);
    System_Text_StringBuilder__Append_64053248(v7, (int32_t)v25.fields._currentValue[2].monitor, 0);
    System_Text_StringBuilder__Append_64053080(v7, 0x2Cu, 0);
    System_Text_StringBuilder__Append_64050752(v7, (System_String_o *)currentValue[2].klass, 0);
    System_Text_StringBuilder__Append_64053080(v7, 0x2Cu, 0);
    System_Text_StringBuilder__Append_64053248(v7, (int32_t)currentValue[3].klass, 0);
    System_Text_StringBuilder__Append_64053080(v7, 0x2Cu, 0);
    System_Text_StringBuilder__Append_64053424(v7, HIDWORD(currentValue[3].klass), 0);
    System_Text_StringBuilder__Append_64053080(v7, 0x2Cu, 0);
    System_Text_StringBuilder__Append_64050752(v7, (System_String_o *)currentValue[1].monitor, 0);
    System_Text_StringBuilder__Append_64050752(v7, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v25,
    (const MethodInfo_35B9D18 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  requestConfigWriteData = (Il2CppObject *)this->fields.requestConfigWriteData;
  lockTaken = 0;
  System_Threading_Monitor__Enter_65894432(requestConfigWriteData, &lockTaken, 0);
  v15 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v7->klass->vtable._3_ToString.methodPtr)(
                             v7,
                             v7->klass->vtable._3_ToString.method);
  UTF8 = System_Text_Encoding__get_UTF8(0);
  if ( !UTF8 )
    sub_1C6BC60(0, v17);
  v18 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
                               UTF8,
                               v15,
                               UTF8->klass->vtable._18_GetBytes.method);
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  v26 = Crc32__Compute(v18, 0);
  v19 = System_UInt32__ToString((uint32_t)&v26, 0);
  v20 = System_String__Concat_64007060(
          (System_String_o *)StringLiteral_25370/*"~"*/,
          v19,
          (System_String_o *)StringLiteral_43/*"\n"*/,
          v15,
          0);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v21 = CatAndMouseGame__CatGame8(v20, 0);
  this->fields.requestConfigWriteData = v21;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.requestConfigWriteData, (int32_t)v21, v22, v23);
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
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1

  AssetManager__ConfigWriteRequest(this, 0, v2);
  this->fields.writeRequestThread = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.writeRequestThread, 0, v4, v5);
  if ( this->fields.reserveWriteRequest )
    AssetManager__StartThreadConfigWriteRequest(this, v6);
}


System_String_o *AssetManager__ConvertDownloadSizeToString(AssetManager_o *this, double size, const MethodInfo *method)
{
  System_String_o *v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_String_o *v8; // x19
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  unsigned int i; // w21
  System_String_o format; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CB5294 & 1) == 0 )
  {
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&StringLiteral_8191/*"KB"*/);
    sub_1C6BA08(&StringLiteral_25318/*"{0}{1}"*/);
    sub_1C6BA08(&StringLiteral_9230/*"N2"*/);
    sub_1C6BA08(&StringLiteral_13360/*"TB"*/);
    sub_1C6BA08(&StringLiteral_2502/*"B"*/);
    sub_1C6BA08(&StringLiteral_8631/*"MB"*/);
    sub_1C6BA08(&StringLiteral_6915/*"GB"*/);
    byte_4CB5294 = 1;
  }
  v4 = (System_String_o *)sub_1C6BAB0(string___TypeInfo, 5);
  if ( !v4 )
    sub_1C6BC60(0, v5);
  v8 = v4;
  if ( !LODWORD(v4[1].klass) )
    goto LABEL_14;
  v9 = StringLiteral_2502/*"B"*/;
  v4[1].monitor = (void *)StringLiteral_2502/*"B"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v4[1].monitor, v9, v6, v7);
  if ( LODWORD(v8[1].klass) <= 1 )
    goto LABEL_14;
  v12 = StringLiteral_8191/*"KB"*/;
  v8[1].fields = (System_String_Fields)StringLiteral_8191/*"KB"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8[1].fields, v12, v10, v11);
  if ( LODWORD(v8[1].klass) <= 2 )
    goto LABEL_14;
  v15 = StringLiteral_8631/*"MB"*/;
  v8[2].klass = (System_String_c *)StringLiteral_8631/*"MB"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8[2], v15, v13, v14);
  if ( LODWORD(v8[1].klass) <= 3 )
    goto LABEL_14;
  v18 = StringLiteral_6915/*"GB"*/;
  v8[2].monitor = (void *)StringLiteral_6915/*"GB"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8[2].monitor, v18, v16, v17);
  if ( LODWORD(v8[1].klass) <= 4 )
    goto LABEL_14;
  v21 = StringLiteral_13360/*"TB"*/;
  v8[2].fields = (System_String_Fields)StringLiteral_13360/*"TB"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8[2].fields, v21, v19, v20);
  for ( i = 0; i != 4; ++i )
  {
    if ( size < 1000.0 )
      break;
    size = size / 1000.0;
    *(double *)&format.klass = size;
  }
  v4 = System_Double__ToString_65385836(1000.0, &format, (const MethodInfo *)StringLiteral_9230/*"N2"*/);
  if ( i >= LODWORD(v8[1].klass) )
LABEL_14:
    sub_1C6BC68(v4);
  return System_String__Format_64008100(
           (System_String_o *)StringLiteral_25318/*"{0}{1}"*/,
           (Il2CppObject *)v4,
           *((Il2CppObject **)&v8[1].monitor + i),
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

  if ( (byte_4CB528E & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_1C6BA08(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    byte_4CB528E = 1;
  }
  memset(&v11, 0, sizeof(v11));
  memset(&i, 0, sizeof(i));
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
    goto LABEL_23;
  System_Collections_Generic_Queue_object___GetEnumerator(
    (System_Collections_Generic_Queue_Enumerator_T__o *)&v9,
    downLoadWaitList,
    (const MethodInfo_39AB484 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  v11 = v9;
  while ( System_Collections_Generic_Queue_Enumerator_object___MoveNext(
            (System_Collections_Generic_Queue_Enumerator_T__o *)&v11,
            (const MethodInfo_3586930 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__) )
  {
    if ( !System_Collections_Generic_Queue_Enumerator_object___get_Current(
            (System_Collections_Generic_Queue_Enumerator_T__o *)&v11,
            (const MethodInfo_3586A20 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__) )
      sub_1C6BC60(0, v4);
  }
  System_Collections_Generic_Queue_Enumerator_object___Dispose(
    (System_Collections_Generic_Queue_Enumerator_T__o *)&v11,
    (const MethodInfo_3586920 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
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
                                                                (const MethodInfo_34BB76C *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !downLoadWaitList )
    goto LABEL_23;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v9,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)downLoadWaitList,
    (const MethodInfo_3B47370 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  for ( i = v9;
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
          &i,
          (const MethodInfo_35B9D1C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
        AssetData__get_IsEmpty((AssetData_o *)i.fields._currentValue, 0) )
  {
    if ( !i.fields._currentValue )
      sub_1C6BC60(0, v8);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &i,
    (const MethodInfo_35B9D18 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.assetResourceDic;
  if ( !downLoadWaitList
    || (downLoadWaitList = (System_Collections_Generic_Queue_T__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                      (System_Collections_Generic_Dictionary_object__object__o *)downLoadWaitList,
                                                                      (const MethodInfo_34BB76C *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0 )
  {
LABEL_23:
    sub_1C6BC60(downLoadWaitList, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v9,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)downLoadWaitList,
    (const MethodInfo_3B47370 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  i = v9;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &i,
            (const MethodInfo_35B9D1C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__) )
    ;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &i,
    (const MethodInfo_35B9D18 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
}


System_Collections_IEnumerator_o *AssetManager__DelayLoadStart(AssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB52AC & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager__DelayLoadStart_d__153_TypeInfo);
    byte_4CB52AC = 1;
  }
  v3 = sub_1C6BC54(AssetManager__DelayLoadStart_d__153_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void AssetManager__DeleteContinueData(const MethodInfo *method)
{
  AssetManager_c *v1; // x0

  if ( (byte_4CB525E & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    byte_4CB525E = 1;
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
        AssetManager__AddLoadWaitStatus_40789564(this, v12, callbackFunc, 0, v13);
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

  if ( (byte_4CB5295 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    byte_4CB5295 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      assetBundleDic,
                                                                                      (const MethodInfo_34BB76C *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0 )
  {
    sub_1C6BC60(assetBundleDic, attrib);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v13,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_3B47370 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v14 = v13;
  while ( 1 )
  {
    v8 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v14,
           (const MethodInfo_35B9D1C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v8 )
      break;
    currentValue = (AssetData_o *)v14.fields._currentValue;
    if ( !v14.fields._currentValue )
      sub_1C6BC60(v8, v9);
    if ( AssetData__IsDownloadOldVersion((AssetData_o *)v14.fields._currentValue, 0)
      || System_String__op_Equality(attrib, currentValue->fields.attrib, 0)
      && AssetData__IsNeedUpdateVersion(currentValue, 0) )
    {
      AssetManager__AddLoadWaitStatus_40778088(this, currentValue, v11);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v14,
    (const MethodInfo_35B9D18 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
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
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4CB5293 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__119_TypeInfo);
    byte_4CB5293 = 1;
  }
  v7 = sub_1C6BC54(AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__119_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 40) = attrib;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 40), (int32_t)attrib, v10, v11);
  *(_DWORD *)(v7 + 56) = loadParallelMax;
  return (System_Collections_IEnumerator_o *)v7;
}


void AssetManager__DownloadAssetStorageAttribute_40781032(
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
  if ( (byte_4CB5296 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    this = (AssetManager_o *)sub_1C6BA08(&StringLiteral_809/*", "*/);
    byte_4CB5296 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  if ( !attribList )
LABEL_32:
    sub_1C6BC60(this, attribList);
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
    sub_1C6BC68(this);
  v9 = 0;
  v10 = (unsigned int)attribList->max_length - 2LL;
  while ( 1 )
  {
    this = (AssetManager_o *)System_String__Concat_64005056(
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
                             (const MethodInfo_34BB76C *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !this )
    goto LABEL_32;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v21,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_3B47370 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v22 = v21;
LABEL_17:
  while ( 1 )
  {
    v12 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v22,
            (const MethodInfo_35B9D1C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v12 )
      break;
    currentValue = (AssetData_o *)v22.fields._currentValue;
    if ( !v22.fields._currentValue )
      sub_1C6BC60(v12, v13);
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
          sub_1C6BC68(v18);
      }
LABEL_20:
      AssetManager__AddLoadWaitStatus_40778088(v6, currentValue, v15);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v22,
    (const MethodInfo_35B9D18 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  v6->fields.loadParallelMax = loadParallelMax;
  AssetManager__LoadStart(v6, v20);
}


bool AssetManager__DownloadAssetStorage_40770356(
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
    sub_1C6BC60(this, 0);
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
        sub_1C6BC68(this);
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

  if ( (byte_4CB52B3 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetData__TryGetValue__);
    byte_4CB52B3 = 1;
  }
  value = 0;
  if ( !name )
    return 0;
  if ( !dic )
    sub_1C6BC60(this, dic);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)dic,
         (Il2CppObject *)name,
         &value,
         (const MethodInfo_34BD148 *)Method_System_Collections_Generic_Dictionary_string__AssetData__TryGetValue__) )
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
  const MethodInfo *v16; // x3
  Il2CppObject *v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v24; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CB5298 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    sub_1C6BA08(&StringLiteral_1041/*"/"*/);
    byte_4CB5298 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v5 = System_String__Concat_63966792(path, (System_String_o *)StringLiteral_1041/*"/"*/, 0);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic )
    goto LABEL_21;
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                assetBundleDic,
                                                                                (const MethodInfo_34BB76C *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !assetBundleDic )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v23,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_3B47370 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v24 = v23;
  while ( 1 )
  {
    v9 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v24,
           (const MethodInfo_35B9D1C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v9 )
      break;
    currentValue = v24.fields._currentValue;
    if ( !v24.fields._currentValue )
      sub_1C6BC60(v9, v10);
    monitor = (System_String_o *)v24.fields._currentValue[1].monitor;
    if ( !monitor )
      sub_1C6BC60(0, v10);
    v13 = System_String__StartsWith(monitor, v5, 0);
    if ( v13 )
    {
      if ( !v6 )
        sub_1C6BC60(v13, v14);
      v17 = (Il2CppObject *)currentValue[1].monitor;
      items = v6->fields._items;
      v19 = Method_System_Collections_Generic_List_string__Add__;
      ++v6->fields._version;
      if ( !items )
        sub_1C6BC60(v13, v17);
      size = v6->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v6,
          v17,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v6->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v17;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v17, v15, v16);
      }
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v24,
    (const MethodInfo_35B9D18 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  if ( !v6 )
LABEL_21:
    sub_1C6BC60(assetBundleDic, v7);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v6,
                                  (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_string__ToArray__);
}


AssetData_array *AssetManager__GetAssetStorage_40773884(
        AssetManager_o *this,
        System_String_array *nameList,
        const MethodInfo *method)
{
  AssetManager_o *v4; // x20
  const MethodInfo *v5; // x3
  il2cpp_array_size_t max_length; // x8
  unsigned int *v7; // x21
  unsigned __int64 v8; // x24
  CGThumbnailListItem_o *p_isUseDebugStatus; // x22
  System_String_o *v10; // x2
  AssetManager_o *v11; // x23
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v15; // x0

  v4 = this;
  if ( (byte_4CB52B4 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_1C6BA08(&AssetData___TypeInfo);
    byte_4CB52B4 = 1;
  }
  if ( !nameList )
LABEL_17:
    sub_1C6BC60(this, nameList);
  this = (AssetManager_o *)sub_1C6BAB0(AssetData___TypeInfo, LODWORD(nameList->max_length));
  max_length = nameList->max_length;
  v7 = (unsigned int *)this;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    p_isUseDebugStatus = (CGThumbnailListItem_o *)&this->fields.isUseDebugStatus;
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
            this = (AssetManager_o *)sub_1C6BB44(v11, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
            if ( !this )
            {
              v15 = sub_1C6BC84(0);
              sub_1C6BB30(v15, 0);
            }
            if ( v8 >= v7[6] )
              break;
            p_isUseDebugStatus->klass = (CGThumbnailListItem_c *)v11;
            sub_1C6B9AC(p_isUseDebugStatus, (int32_t)v11, v12, v13);
          }
        }
      }
      LODWORD(max_length) = nameList->max_length;
      ++v8;
      p_isUseDebugStatus = (CGThumbnailListItem_o *)((char *)p_isUseDebugStatus + 8);
      if ( (__int64)v8 >= (int)max_length )
        return (AssetData_array *)v7;
    }
    sub_1C6BC68(this);
  }
  return (AssetData_array *)v7;
}


bool AssetManager__GetAssetStorage_40774344(
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


bool AssetManager__GetAsset_40764440(
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


bool AssetManager__GetAsset_40764728(
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


AssetData_o *AssetManager__GetAsset_40790812(AssetManager_o *this, System_String_o *name, const MethodInfo *method)
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

  if ( (byte_4CB5268 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    byte_4CB5268 = 1;
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

  if ( (byte_4CB5297 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    byte_4CB5297 = 1;
  }
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
LABEL_8:
    sub_1C6BC60(processingAssetLoaderList, method);
  downloadSize = this->fields.downloadSize;
  v5 = 0;
  while ( v5 < processingAssetLoaderList->fields._size )
  {
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               processingAssetLoaderList,
                                                                               v5,
                                                                               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
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

  if ( (byte_4CB5267 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    byte_4CB5267 = 1;
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
  const MethodInfo *v5; // x3

  if ( (byte_4CB529E & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager__InitCR_d__135_TypeInfo);
    byte_4CB529E = 1;
  }
  v3 = sub_1C6BC54(AssetManager__InitCR_d__135_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void AssetManager__Initialize(AssetManager_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *initCRW; // x1
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  void *assetBundleReleaseDic; // x0
  char v7; // w28
  __int64 v8; // x1
  int v9; // w28
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  int32_t v12; // w20
  Il2CppObject *Item; // x21
  int32_t v14; // w2
  int v15; // w8
  const MethodInfo *v16; // x0
  System_String_o *Path; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  AssetManager_c *v20; // x8
  System_String_o *v21; // x20
  struct AssetManager_StaticFields *static_fields; // x0
  struct AssetManager_StaticFields *v23; // x8
  System_String_o *cachePathName; // x20
  System_String_o *configFileName; // x21
  System_String_o *v26; // x0
  System_String_o *v27; // x0
  struct AssetManager_StaticFields *v28; // x8
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct AssetManager_StaticFields *v31; // x8
  System_String_o *v32; // x20
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  struct AssetManager_StaticFields *v35; // x8
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct AssetManager_StaticFields *v38; // x8
  System_String_o *v39; // x20
  System_String_o *v40; // x0
  System_String_o *v41; // x0
  struct AssetManager_StaticFields *v42; // x8
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v45; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o i; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CB5290 & 1) == 0 )
  {
    sub_1C6BA08(&AndroidUtil_TypeInfo);
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssetLoader__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    byte_4CB5290 = 1;
  }
  memset(&i, 0, sizeof(i));
  initCRW = this->fields.initCRW;
  if ( initCRW )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, initCRW, 0);
    this->fields.initCRW = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.initCRW, 0, v4, v5);
  }
  assetBundleReleaseDic = this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_44;
  System_Collections_Generic_Dictionary_object__object___Clear(
    (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
    (const MethodInfo_34BBAC4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
  assetBundleReleaseDic = this->fields.assetBundleDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_44;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
         (const MethodInfo_34BB60C *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) < 1 )
  {
    v9 = 0;
  }
  else
  {
    assetBundleReleaseDic = this->fields.assetBundleDic;
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    assetBundleReleaseDic = System_Collections_Generic_Dictionary_object__object___get_Values(
                              (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
                              (const MethodInfo_34BB76C *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v45,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
      (const MethodInfo_3B47370 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    v7 = 0;
    for ( i = v45;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &i,
            (const MethodInfo_35B9D1C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
          v7 |= AssetData__ReleaseData((AssetData_o *)i.fields._currentValue, 0) )
    {
      if ( !i.fields._currentValue )
        sub_1C6BC60(0, v8);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
      &i,
      (const MethodInfo_35B9D18 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    assetBundleReleaseDic = this->fields.assetBundleDic;
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    System_Collections_Generic_Dictionary_object__object___Clear(
      (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
      (const MethodInfo_34BBAC4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
    v9 = v7 != 0;
  }
  assetBundleReleaseDic = this->fields.assetResourceDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_44;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
         (const MethodInfo_34BB60C *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) >= 1 )
  {
    assetBundleReleaseDic = this->fields.assetResourceDic;
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    assetBundleReleaseDic = System_Collections_Generic_Dictionary_object__object___get_Values(
                              (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
                              (const MethodInfo_34BB76C *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v45,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
      (const MethodInfo_3B47370 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    for ( i = v45;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &i,
            (const MethodInfo_35B9D1C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
          v9 |= AssetData__ReleaseData((AssetData_o *)i.fields._currentValue, 0) )
    {
      if ( !i.fields._currentValue )
        sub_1C6BC60(0, v11);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
      &i,
      (const MethodInfo_35B9D18 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    assetBundleReleaseDic = this->fields.assetResourceDic;
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    System_Collections_Generic_Dictionary_object__object___Clear(
      (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
      (const MethodInfo_34BBAC4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
  }
  if ( (v9 & 1) != 0 )
    AssetManager__RequestUnloadUnusedAssets(this, 0, v10);
  assetBundleReleaseDic = this->fields.processingAssetLoaderList;
  if ( !assetBundleReleaseDic )
    goto LABEL_44;
  if ( *((int *)assetBundleReleaseDic + 6) >= 1 )
  {
    v12 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)assetBundleReleaseDic,
               v12,
               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71659676((UnityEngine_Object_o *)Item, 0);
      assetBundleReleaseDic = this->fields.processingAssetLoaderList;
      if ( !assetBundleReleaseDic )
        goto LABEL_44;
      v14 = *((_DWORD *)assetBundleReleaseDic + 6);
      ++v12;
    }
    while ( v12 < v14 );
    v15 = *((_DWORD *)assetBundleReleaseDic + 7) + 1;
    *((_DWORD *)assetBundleReleaseDic + 6) = 0;
    *((_DWORD *)assetBundleReleaseDic + 7) = v15;
    if ( v14 >= 1 )
      System_Array__Clear(*((System_Array_o **)assetBundleReleaseDic + 2), 0, v14, 0);
  }
  assetBundleReleaseDic = this->fields.downLoadWaitList;
  if ( !assetBundleReleaseDic )
LABEL_44:
    sub_1C6BC60(assetBundleReleaseDic, initCRW);
  System_Collections_Generic_Queue_object___Clear(
    (System_Collections_Generic_Queue_T__o *)assetBundleReleaseDic,
    (const MethodInfo_39AB08C *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__);
  this->fields.downloadSize = 0;
  this->fields.isCancelDownload = 0;
  Path = AssetStorageCache__GetPath(v16);
  v20 = AssetManager_TypeInfo;
  v21 = Path;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v20 = AssetManager_TypeInfo;
  }
  static_fields = v20->static_fields;
  static_fields->cachePathName = v21;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->cachePathName, (int32_t)v21, v18, v19);
  v23 = AssetManager_TypeInfo->static_fields;
  cachePathName = v23->cachePathName;
  configFileName = v23->configFileName;
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  v26 = AndroidUtil__ConvertFileNameIfNeed(configFileName, 0);
  v27 = System_String__Concat_63966792(cachePathName, v26, 0);
  v28 = AssetManager_TypeInfo->static_fields;
  v28->cacheListFileName = v27;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v28->cacheListFileName, (int32_t)v27, v29, v30);
  v31 = AssetManager_TypeInfo->static_fields;
  v32 = v31->cachePathName;
  v33 = AndroidUtil__ConvertFileNameIfNeed(v31->createConfigFileName, 0);
  v34 = System_String__Concat_63966792(v32, v33, 0);
  v35 = AssetManager_TypeInfo->static_fields;
  v35->createCacheListFileName = v34;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v35->createCacheListFileName, (int32_t)v34, v36, v37);
  v38 = AssetManager_TypeInfo->static_fields;
  v39 = v38->cachePathName;
  v40 = AndroidUtil__ConvertFileNameIfNeed(v38->backConfigFileName, 0);
  v41 = System_String__Concat_63966792(v39, v40, 0);
  v42 = AssetManager_TypeInfo->static_fields;
  v42->backCacheListFileName = v41;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v42->backCacheListFileName, (int32_t)v41, v43, v44);
  this->fields.isInitFirst = 0;
}


void AssetManager__InitializeAssetStorage(AssetManager_o *this, const MethodInfo *method)
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
    sub_1C6B9AC((CGThumbnailListItem_o *)p_initCRW, (int32_t)inited, v5, v6);
    UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)this, this->fields.initCRW, 0);
  }
}


void AssetManager__InterruptDownloadAssetStorage(
        AssetManager_o *this,
        System_String_o *target,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AssetManager_o *v5; // x20
  CGThumbnailListItem_o *p_downLoadWaitList; // x20
  System_Collections_Generic_Queue_T__o *v7; // x21
  System_Collections_Generic_Queue_T__o *downLoadWaitList; // t1
  int size; // w23
  Il2CppObject *v10; // x22
  AssetData_o *m_CachedPtr; // x0

  v5 = this;
  if ( (byte_4CB529C & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
    sub_1C6BA08(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
    sub_1C6BA08(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Peek__);
    this = (AssetManager_o *)sub_1C6BA08(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__);
    byte_4CB529C = 1;
  }
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)v5->fields.downLoadWaitList;
  p_downLoadWaitList = (CGThumbnailListItem_o *)&v5->fields.downLoadWaitList;
  v7 = downLoadWaitList;
  if ( !downLoadWaitList )
    goto LABEL_10;
  size = v7->fields._size;
  if ( size >= 1 )
  {
    while ( 1 )
    {
      this = (AssetManager_o *)System_Collections_Generic_Queue_object___Peek(
                                 v7,
                                 (const MethodInfo_39AB6B8 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Peek__);
      if ( !this )
        break;
      v10 = (Il2CppObject *)this;
      m_CachedPtr = (AssetData_o *)this->fields.m_CachedPtr;
      if ( !m_CachedPtr || !AssetData__IsSame_40737060(m_CachedPtr, 0, target, 0) )
      {
        System_Collections_Generic_Queue_object___Dequeue(
          v7,
          (const MethodInfo_39AB55C *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
        System_Collections_Generic_Queue_object___Enqueue(
          v7,
          v10,
          (const MethodInfo_39AB3CC *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
        if ( --size )
          continue;
      }
      goto LABEL_9;
    }
LABEL_10:
    sub_1C6BC60(this, target);
  }
LABEL_9:
  p_downLoadWaitList->klass = (CGThumbnailListItem_c *)v7;
  sub_1C6B9AC(p_downLoadWaitList, (int32_t)v7, (int32_t)method, v3);
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

  if ( (byte_4CB52AF & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__);
    byte_4CB52AF = 1;
  }
  assetBundleDic = this->fields.assetBundleDic;
  if ( !assetBundleDic )
    sub_1C6BC60(0, name);
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)assetBundleDic,
           (Il2CppObject *)name,
           (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__);
}


bool AssetManager__IsExistAssetStorage_40766816(
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
    sub_1C6BC60(this, 0);
  max_length = nameList->max_length;
  v5 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v6 = this;
    v7 = 0;
    do
    {
      if ( v7 >= (unsigned int)max_length )
        sub_1C6BC68(this);
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


bool AssetManager__IsNeedDownload_40767356(
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
    sub_1C6BC60(this, 0);
  max_length = nameList->max_length;
  v5 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v6 = this;
    v7 = 0;
    do
    {
      if ( v7 >= (unsigned int)max_length )
        sub_1C6BC68(this);
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
  const MethodInfo *v28; // x3
  __int64 v29; // x0
  System_IO_IOException_o *v30; // x20
  System_String_o *v31; // x0
  __int64 v32; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v33; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v34; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_4CB52A3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetManager_OnClickRetryDialog__);
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C6BA08(&CommonServicePluginScript_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&ManagementManager_TypeInfo);
    sub_1C6BA08(&ManagerConfig_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&System_IO_StreamWriter_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    sub_1C6BA08(&StringLiteral_2036/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_15922/*"[FFFF80]Download error for debug"*/);
    sub_1C6BA08(&StringLiteral_11480/*"SCRIPT"*/);
    sub_1C6BA08(&StringLiteral_2037/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB52A3 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_49;
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                       assetBundleReleaseDic,
                                                                                       (const MethodInfo_34BB76C *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !assetBundleReleaseDic )
    goto LABEL_49;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v33,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
    (const MethodInfo_3B47370 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v4 = 0;
  v34 = v33;
  while ( 1 )
  {
    v5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v34,
           (const MethodInfo_35B9D1C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v5 )
      break;
    currentValue = v34.fields._currentValue;
    if ( !v34.fields._currentValue )
      sub_1C6BC60(v5, v6);
    if ( !HIDWORD(v34.fields._currentValue[5].klass)
      && !AssetData__get_IsEmpty((AssetData_o *)v34.fields._currentValue, 0) )
    {
      v4 |= AssetData__ReleaseData((AssetData_o *)currentValue, 0);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v34,
    (const MethodInfo_35B9D18 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  if ( (v4 & 1) != 0 )
    AssetManager__RequestUnloadUnusedAssets(this, 0, v8);
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
LABEL_49:
    sub_1C6BC60(assetBundleReleaseDic, method);
  System_Collections_Generic_Dictionary_object__object___Clear(
    assetBundleReleaseDic,
    (const MethodInfo_34BBAC4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
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
        v29 = sub_1C6BA1C(&System_IO_IOException_TypeInfo);
        v30 = (System_IO_IOException_o *)sub_1C6BC54(v29);
        v31 = (System_String_o *)sub_1C6BA1C(&StringLiteral_5280/*"Disk full"*/);
        System_IO_IOException___ctor_64783912(v30, v31, 0);
        v32 = sub_1C6BA1C(&Method_AssetManager_LateUpdate__);
        sub_1C6BB30(v30, v32);
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
      v19 = (System_IO_StreamWriter_o *)sub_1C6BC54(System_IO_StreamWriter_TypeInfo);
      System_IO_StreamWriter___ctor_64811260(v19, createCacheListFileName, 0, UTF8, 0);
      if ( !v19 )
        sub_1C6BC60(v20, v21);
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
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.requestConfigWriteData, v26, v27, v28);
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
  if ( (byte_4CB52B5 & 1) == 0 )
  {
    sub_1C6BA08(&AssetData_TypeInfo);
    this = (AssetManager_o *)sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
    byte_4CB52B5 = 1;
  }
  AssetData = AssetManager__GetAssetData(this, v5->fields.assetResourceDic, name, v3);
  if ( !AssetData )
  {
    v8 = (AssetData_o *)sub_1C6BC54(AssetData_TypeInfo);
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
          (const MethodInfo_34BB93C *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
        return v8;
      }
    }
    sub_1C6BC60(assetResourceDic, v10);
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
  if ( (byte_4CB52B0 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
    byte_4CB52B0 = 1;
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
        sub_1C6BC60(0, v10);
      System_Collections_Generic_Dictionary_object__object___Remove(
        assetBundleReleaseDic,
        (Il2CppObject *)name,
        (const MethodInfo_34BCE38 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
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
      AssetManager__AddLoadWaitStatus_40789564(v8, v17, callbackFunc, 0, v18);
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


bool AssetManager__LoadAssetStorage_40772552(
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
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_object__o *v16; // x23
  System_Collections_Generic_List_object__o **v17; // x22
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x4
  il2cpp_array_size_t max_length; // x8
  int v23; // w26
  unsigned __int64 v24; // x27
  AssetLoader_LoadEndDataHandler_o **v25; // x23
  bool v26; // w25
  System_String_o *v27; // x24
  AssetLoader_LoadEndDataHandler_o *v28; // x25
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x1

  if ( (byte_4CB52B2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__IndexOf__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__RemoveRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C6BA08(&Method_AssetManager___c__DisplayClass173_0__LoadAssetStorage_b__0__);
    sub_1C6BA08(&AssetManager___c__DisplayClass173_0_TypeInfo);
    byte_4CB52B2 = 1;
  }
  v9 = sub_1C6BC54(AssetManager___c__DisplayClass173_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_31;
  *(_QWORD *)(v9 + 40) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 40), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 48) = callbackFunc;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 48), (int32_t)callbackFunc, v14, v15);
  *(_DWORD *)(v9 + 56) = loadParallelMax;
  v16 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v9 + 24) = v16;
  v17 = (System_Collections_Generic_List_object__o **)(v9 + 24);
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 24), (int32_t)v16, v18, v19);
  AssetStorage = *(System_Collections_Generic_List_object__o **)(v9 + 24);
  if ( !AssetStorage
    || (System_Collections_Generic_List_object___AddRange(
          AssetStorage,
          (System_Collections_Generic_IEnumerable_T__o *)nameList,
          (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_string__AddRange__),
        *(_DWORD *)(v9 + 16) = 0,
        *(_BYTE *)(v9 + 32) = 0,
        !nameList) )
  {
LABEL_31:
    sub_1C6BC60(AssetStorage, v11);
  }
  max_length = nameList->max_length;
  if ( (int)max_length >= 1 )
  {
    v23 = 0;
    v24 = 0;
    v25 = (AssetLoader_LoadEndDataHandler_o **)(v9 + 64);
    v26 = 1;
    while ( 1 )
    {
      if ( v24 >= (unsigned int)max_length )
        sub_1C6BC68(AssetStorage);
      v27 = nameList->m_Items[v24];
      if ( !v27 )
      {
        AssetStorage = *v17;
        if ( !*v17 )
          goto LABEL_31;
        AssetStorage = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Remove(
                                                                      AssetStorage,
                                                                      0,
                                                                      (const MethodInfo_3801E9C *)Method_System_Collections_Generic_List_string__Remove__);
        goto LABEL_23;
      }
      if ( !v26 )
        goto LABEL_22;
      v28 = *v25;
      if ( !*v25 )
      {
        v28 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v28,
          (Il2CppObject *)v9,
          Method_AssetManager___c__DisplayClass173_0__LoadAssetStorage_b__0__,
          v29);
        *(_QWORD *)(v9 + 64) = v28;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 64), (int32_t)v28, v30, v31);
      }
      if ( !this )
        goto LABEL_31;
      AssetStorage = (System_Collections_Generic_List_object__o *)AssetManager__LoadAssetStorage(
                                                                    this,
                                                                    v27,
                                                                    v28,
                                                                    *(_DWORD *)(v9 + 56),
                                                                    v21);
      if ( ((unsigned __int8)AssetStorage & 1) == 0 )
        break;
      ++v23;
      v26 = 1;
LABEL_23:
      LODWORD(max_length) = nameList->max_length;
      if ( (__int64)++v24 >= (int)max_length )
        goto LABEL_26;
    }
    AssetStorage = *v17;
    if ( !*v17 )
      goto LABEL_31;
    AssetStorage = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___IndexOf(
                                                                  AssetStorage,
                                                                  (Il2CppObject *)v27,
                                                                  (const MethodInfo_3801614 *)Method_System_Collections_Generic_List_string__IndexOf__);
    if ( ((unsigned int)AssetStorage & 0x80000000) == 0 )
    {
      v11 = (unsigned int)AssetStorage;
      AssetStorage = *v17;
      if ( !*v17 )
        goto LABEL_31;
      System_Collections_Generic_List_object___RemoveRange(
        AssetStorage,
        v11,
        AssetStorage->fields._size - v11,
        (const MethodInfo_38021E0 *)Method_System_Collections_Generic_List_string__RemoveRange__);
    }
LABEL_22:
    v26 = 0;
    goto LABEL_23;
  }
  v23 = 0;
  v26 = 1;
LABEL_26:
  if ( v23 < 1 || !*(_BYTE *)(v9 + 32) && *(_DWORD *)(v9 + 16) == v23 )
  {
    AssetManager__AddLoadWaitStatus(this, *(System_Action_o **)(v9 + 48), v20);
    this->fields.loadParallelMax = *(_DWORD *)(v9 + 56);
    *(_BYTE *)(v9 + 32) = 1;
    AssetManager__LoadStart(this, v32);
  }
  return v26;
}


bool AssetManager__LoadAsset_40790568(
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

  if ( (byte_4CB528F & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CB528F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  if ( BYTE2(Instance[3].klass) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( Instance )
    {
      monitor = Instance[6].monitor;
      if ( monitor )
        return monitor[6] > 0;
    }
LABEL_9:
    sub_1C6BC60(Instance, v2);
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
  const MethodInfo *v22; // x3
  struct UnityEngine_Object_array *objectList; // x26
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v25; // x27
  int v26; // w8
  Il2CppObject *v27; // x25
  __int64 v28; // x23
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  int v33; // w22
  System_String_array *v34; // x0
  const MethodInfo *v35; // x4
  const MethodInfo *v36; // x1
  AssetData_o *v38; // [xsp+8h] [xbp-68h]

  if ( (byte_4CB52B1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    byte_4CB52B1 = 1;
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
      (const MethodInfo_34BCE38 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
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
    v20 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v20,
      (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
    objectList = v19->fields.objectList;
    if ( objectList )
    {
      max_length = resourceNames->max_length;
      v38 = v19;
      if ( (int)max_length >= 1 )
      {
        v25 = 0;
        while ( 1 )
        {
          if ( v25 >= (unsigned int)max_length )
            goto LABEL_42;
          v26 = objectList->max_length;
          v27 = (Il2CppObject *)resourceNames->m_Items[v25];
          if ( v26 >= 1 )
            break;
LABEL_22:
          if ( !v20 )
            goto LABEL_41;
          items = v20->fields._items;
          v30 = Method_System_Collections_Generic_List_string__Add__;
          ++v20->fields._version;
          if ( !items )
            goto LABEL_41;
          size = v20->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v20,
              v27,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = &items->obj.klass + size;
            v20->fields._size = size + 1;
            v32[4] = (Il2CppClass *)v27;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v27, v21, v22);
          }
LABEL_27:
          LODWORD(max_length) = resourceNames->max_length;
          if ( (__int64)++v25 >= (int)max_length )
            goto LABEL_28;
        }
        v28 = 0;
        while ( (unsigned int)v28 < v26 )
        {
          assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)objectList->m_Items[v28];
          if ( !assetBundleReleaseDic )
            goto LABEL_41;
          assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_Object__get_name(
                                                                                               (UnityEngine_Object_o *)assetBundleReleaseDic,
                                                                                               0);
          if ( !v27 )
            goto LABEL_41;
          assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)System_String__Equals_64002112(
                                                                                               (System_String_o *)v27,
                                                                                               (System_String_o *)assetBundleReleaseDic,
                                                                                               0);
          if ( ((unsigned __int8)assetBundleReleaseDic & 1) != 0 )
            goto LABEL_27;
          v26 = objectList->max_length;
          if ( (int)++v28 >= v26 )
            goto LABEL_22;
        }
LABEL_42:
        sub_1C6BC68(assetBundleReleaseDic);
      }
LABEL_28:
      v19 = v38;
      if ( !v20 )
LABEL_41:
        sub_1C6BC60(assetBundleReleaseDic, v13);
    }
    else
    {
      if ( !v20 )
        goto LABEL_41;
      System_Collections_Generic_List_object___AddRange(
        v20,
        (System_Collections_Generic_IEnumerable_T__o *)resourceNames,
        (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_string__AddRange__);
    }
    v33 = v20->fields._size;
    AssetData__AddEntry(v19, 0);
    if ( v33 < 1 )
    {
      if ( callbackFunc )
        ((void (__fastcall *)(intptr_t, AssetData_o *, intptr_t))callbackFunc->fields.invoke_impl)(
          callbackFunc->fields.method_code,
          v19,
          callbackFunc->fields.method);
    }
    else
    {
      v34 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                     v20,
                                     (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_string__ToArray__);
      AssetManager__AddLoadWaitStatus_40789564(this, v19, callbackFunc, v34, v35);
      this->fields.loadParallelMax = loadParallelMax;
      AssetManager__LoadStart(this, v36);
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
  const MethodInfo *v7; // x3
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *downLoadWaitList; // x8
  struct System_Collections_Generic_List_AssetLoader__o *v11; // x8
  Il2CppObject *v12; // x0
  __int64 v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x22
  __int64 v17; // x8
  System_String_o **v18; // x8
  __int64 v19; // x8
  Il2CppObject *v20; // x0
  Il2CppObject **v21; // x22
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  __int64 v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  __int64 v29; // x8
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  __int64 v32; // x1
  const MethodInfo *v33; // x2
  AssetLoader_LoadEndDataHandler_o *v34; // x1
  __int64 v35; // x19
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CB52AB & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__get_Current__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_AddComponent_AssetLoader___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssetLoader__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssetLoader__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
    sub_1C6BA08(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__);
    sub_1C6BA08(&Method_AssetManager___c__DisplayClass152_0__LoadStart_b__0__);
    sub_1C6BA08(&AssetManager___c__DisplayClass152_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_5213/*"DelayLoadStart"*/);
    byte_4CB52AB = 1;
  }
  memset(&v37, 0, sizeof(v37));
  v3 = sub_1C6BC54(AssetManager___c__DisplayClass152_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_49;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v6, v7);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB16DC )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB16DC = 1;
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v36,
      (System_Collections_Generic_List_object__o *)processingAssetLoaderList,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_AssetLoader__GetEnumerator__);
    v37 = v36;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v37,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_AssetLoader__MoveNext__) )
      ;
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v37,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_AssetLoader__Dispose__);
  }
  downLoadWaitList = this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
    goto LABEL_49;
  if ( downLoadWaitList->fields._size <= 0 )
    return 0;
  v11 = this->fields.processingAssetLoaderList;
  if ( !v11 )
    goto LABEL_49;
  if ( v11->fields._size >= this->fields.loadParallelMax )
    return 0;
  UnityEngine_MonoBehaviour__StartCoroutine(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5213/*"DelayLoadStart"*/,
    0);
  processingAssetLoaderList = this->fields.downLoadWaitList;
  if ( !processingAssetLoaderList
    || (v12 = System_Collections_Generic_Queue_object___Dequeue(
                (System_Collections_Generic_Queue_T__o *)processingAssetLoaderList,
                (const MethodInfo_39AB55C *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__),
        *(_QWORD *)(v3 + 24) = v12,
        v13 = v3 + 24,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)v12, v14, v15),
        (v16 = *(_QWORD *)(v3 + 24)) == 0) )
  {
LABEL_49:
    sub_1C6BC60(processingAssetLoaderList, v5);
  }
  if ( (byte_4CB52BF & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB52BF = 1;
  }
  v17 = *(_QWORD *)(v16 + 16);
  if ( v17 )
    v18 = (System_String_o **)(v17 + 24);
  else
    v18 = (System_String_o **)&StringLiteral_1/*""*/;
  processingAssetLoaderList = (void *)System_String__IsNullOrEmpty(*v18, 0);
  if ( ((unsigned __int8)processingAssetLoaderList & 1) == 0 )
  {
    processingAssetLoaderList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( processingAssetLoaderList )
    {
      v20 = UnityEngine_GameObject__AddComponent_object_(
              (UnityEngine_GameObject_o *)processingAssetLoaderList,
              (const MethodInfo_3193044 *)Method_UnityEngine_GameObject_AddComponent_AssetLoader___);
      *(_QWORD *)(v3 + 32) = v20;
      v21 = (Il2CppObject **)(v3 + 32);
      sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)v20, v22, v23);
      processingAssetLoaderList = this->fields.processingAssetLoaderList;
      if ( processingAssetLoaderList )
      {
        v5 = *v21;
        v26 = *((_QWORD *)processingAssetLoaderList + 2);
        v27 = Method_System_Collections_Generic_List_AssetLoader__Add__;
        ++*((_DWORD *)processingAssetLoaderList + 7);
        if ( v26 )
        {
          v28 = *((int *)processingAssetLoaderList + 6);
          if ( (unsigned int)v28 >= *(_DWORD *)(v26 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)processingAssetLoaderList,
              v5,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = v26 + 8 * v28;
            *((_DWORD *)processingAssetLoaderList + 6) = v28 + 1;
            *(_QWORD *)(v29 + 32) = v5;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v29 + 32), (int32_t)v5, v24, v25);
          }
          if ( *(_QWORD *)v13 )
          {
            processingAssetLoaderList = *v21;
            if ( *v21 )
            {
              v32 = *(_QWORD *)(*(_QWORD *)v13 + 16LL);
              *((_QWORD *)processingAssetLoaderList + 4) = v32;
              sub_1C6B9AC((CGThumbnailListItem_o *)((char *)processingAssetLoaderList + 32), v32, v30, v31);
              if ( *(_QWORD *)v13 )
              {
                processingAssetLoaderList = *v21;
                if ( *v21 )
                {
                  v34 = *(AssetLoader_LoadEndDataHandler_o **)(*(_QWORD *)v13 + 32LL);
                  if ( v34 )
                    AssetLoader__add_endCallback2((AssetLoader_o *)processingAssetLoaderList, v34, v33);
                  v35 = sub_1C6BC54(System_Action_TypeInfo);
                  System_Action___ctor(
                    (System_Action_o *)v35,
                    (Il2CppObject *)v3,
                    Method_AssetManager___c__DisplayClass152_0__LoadStart_b__0__,
                    0);
                  if ( v35 )
                  {
                    (*(void (__fastcall **)(_QWORD, _QWORD))(v35 + 24))(*(_QWORD *)(v35 + 64), *(_QWORD *)(v35 + 40));
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
  if ( !*(_QWORD *)v13 )
    goto LABEL_49;
  v19 = *(_QWORD *)(*(_QWORD *)v13 + 24LL);
  if ( v19 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(v19 + 24))(*(_QWORD *)(v19 + 64), *(_QWORD *)(v19 + 40));
  return AssetManager__LoadStart(this, (const MethodInfo *)v5);
}


void AssetManager__OnClickRetryDialog(AssetManager_o *this, bool isDecide, const MethodInfo *method)
{
  ManagementManager_c *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4CB529F & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Application_TypeInfo);
    sub_1C6BA08(&ManagementManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4CB529F = 1;
  }
  if ( isDecide )
  {
    this->fields.isErrorDialog = 0;
  }
  else
  {
    if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    if ( !byte_4CB5247 )
    {
      sub_1C6BA08(&ManagementManager_TypeInfo);
      byte_4CB5247 = 1;
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
      UnityEngine_Application__Quit_71452840(0);
    }
    else
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
      if ( !Instance )
        sub_1C6BC60(0, v7);
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
  if ( (byte_4CB52AD & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssetLoader__RemoveAt__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    this = (AssetManager_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB52AD = 1;
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
             (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
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
    sub_1C6BC60(this, loader);
  }
  System_Collections_Generic_List_object___RemoveAt(
    (System_Collections_Generic_List_object__o *)this,
    v6,
    (const MethodInfo_3802148 *)Method_System_Collections_Generic_List_AssetLoader__RemoveAt__);
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

  if ( (byte_4CB52AE & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
    byte_4CB52AE = 1;
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
        sub_1C6BC60(0, v10);
      System_Collections_Generic_Dictionary_object__object___Remove(
        (System_Collections_Generic_Dictionary_object__object__o *)assetResourceDic,
        (Il2CppObject *)v8->fields.name,
        (const MethodInfo_34BCE38 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
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
  if ( (byte_4CB52B6 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
    byte_4CB52B6 = 1;
  }
  AssetData = AssetManager__GetAssetData(this, v5->fields.assetResourceDic, name, v3);
  if ( AssetData && AssetData__RemoveEntry(AssetData, 0) )
  {
    assetResourceDic = (System_Collections_Generic_Dictionary_object__object__o *)v5->fields.assetResourceDic;
    if ( !assetResourceDic )
      sub_1C6BC60(0, v7);
    System_Collections_Generic_Dictionary_object__object___Remove(
      assetResourceDic,
      (Il2CppObject *)name,
      (const MethodInfo_34BCE38 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
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
    sub_1C6BC60(this, 0);
  max_length = nameList->max_length;
  if ( (int)max_length >= 1 )
  {
    v6 = 0;
    do
    {
      if ( v6 >= (unsigned int)max_length )
        sub_1C6BC68(this);
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


void AssetManager__ReleaseAssetStorage_40774868(
        AssetManager_o *this,
        System_String_array *nameList,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v6; // x21

  if ( !nameList )
    sub_1C6BC60(this, 0);
  max_length = nameList->max_length;
  if ( (int)max_length >= 1 )
  {
    v6 = 0;
    do
    {
      if ( v6 >= (unsigned int)max_length )
        sub_1C6BC68(this);
      AssetManager__ReleaseAssetStorage(this, nameList->m_Items[v6], method);
      LODWORD(max_length) = nameList->max_length;
      ++v6;
    }
    while ( (__int64)v6 < (int)max_length );
  }
}


void AssetManager__ReleaseAsset_40765416(
        AssetManager_o *this,
        int32_t type,
        System_String_array *nameList,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v8; // x22

  if ( !nameList )
    sub_1C6BC60(this, type);
  max_length = nameList->max_length;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    do
    {
      if ( v8 >= (unsigned int)max_length )
        sub_1C6BC68(this);
      AssetManager__ReleaseAsset(this, type, nameList->m_Items[v8], method);
      LODWORD(max_length) = nameList->max_length;
      ++v8;
    }
    while ( (__int64)v8 < (int)max_length );
  }
}


void AssetManager__ReleaseAsset_40765716(AssetManager_o *this, AssetData_o *assetInfo, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( assetInfo )
    AssetManager__ReleaseAsset(this, assetInfo->fields.type, assetInfo->fields.name, v3);
}


void AssetManager__ReleaseAsset_40765916(
        AssetManager_o *this,
        AssetData_array *assetInfoList,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v7; // x21
  AssetData_o *v8; // x8

  if ( !assetInfoList )
    sub_1C6BC60(this, 0);
  max_length = assetInfoList->max_length;
  if ( (int)max_length >= 1 )
  {
    v7 = 0;
    do
    {
      if ( v7 >= (unsigned int)max_length )
        sub_1C6BC68(this);
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
  if ( (byte_4CB52AA & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
    this = (AssetManager_o *)sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__);
    byte_4CB52AA = 1;
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
             (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__) )
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
          (const MethodInfo_34BB93C *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
        return;
      }
    }
LABEL_11:
    sub_1C6BC60(this, info);
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
    UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)this, v4, 0);
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

  if ( (byte_4CB5299 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    sub_1C6BA08(&StringLiteral_1041/*"/"*/);
    byte_4CB5299 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  Values = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)System_String__Concat_63966792(
                                                                                      path,
                                                                                      (System_String_o *)StringLiteral_1041/*"/"*/,
                                                                                      0);
  assetBundleDic = this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (v8 = (System_String_o *)Values,
        (Values = System_Collections_Generic_Dictionary_object__object___get_Values(
                    (System_Collections_Generic_Dictionary_object__object__o *)assetBundleDic,
                    (const MethodInfo_34BB76C *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0) )
  {
    sub_1C6BC60(Values, v6);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v13,
    Values,
    (const MethodInfo_3B47370 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v9 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v13,
           (const MethodInfo_35B9D1C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v9 )
      break;
    currentValue = v13.fields._currentValue;
    if ( !v13.fields._currentValue )
      sub_1C6BC60(v9, v10);
    v12 = *(System_String_o **)((char *)&v13.fields._currentValue->klass + (unsigned __int64)&off_18);
    if ( !v12 )
      sub_1C6BC60(0, v10);
    if ( System_String__StartsWith(v12, v8, 0) )
      AssetData__ResetVersion((AssetData_o *)currentValue, 0);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v13,
    (const MethodInfo_35B9D18 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
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

  if ( (byte_4CB5274 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CB5274 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
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
      sub_1C6BC60(AssetData, v5);
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

  if ( (byte_4CB525C & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&ManagerConfig_TypeInfo);
    byte_4CB525C = 1;
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

  if ( (byte_4CB525D & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&ManagerConfig_TypeInfo);
    byte_4CB525D = 1;
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

  if ( (byte_4CB5291 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    byte_4CB5291 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      assetBundleDic,
                                                                                      (const MethodInfo_34BB76C *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0 )
  {
    sub_1C6BC60(assetBundleDic, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v8,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_3B47370 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v8,
           (const MethodInfo_35B9D1C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v4 )
      break;
    currentValue = v8.fields._currentValue;
    if ( !v8.fields._currentValue )
      sub_1C6BC60(v4, v5);
    if ( AssetData__IsNeedUpdateVersion((AssetData_o *)v8.fields._currentValue, 0) )
      AssetManager__AddLoadWaitStatus_40778088(this, (AssetData_o *)currentValue, v7);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v8,
    (const MethodInfo_35B9D18 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
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
  const MethodInfo *v7; // x3
  __int64 v8; // x1

  if ( (byte_4CB52A1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetManager_ConfigWriteRequestThread__);
    sub_1C6BA08(&System_Threading_ThreadStart_TypeInfo);
    sub_1C6BA08(&System_Threading_Thread_TypeInfo);
    byte_4CB52A1 = 1;
  }
  this->fields.reserveWriteRequest = 0;
  v3 = (System_Threading_ThreadStart_o *)sub_1C6BC54(System_Threading_ThreadStart_TypeInfo);
  System_Threading_ThreadStart___ctor(v3, (Il2CppObject *)this, Method_AssetManager_ConfigWriteRequestThread__, 0);
  v4 = (System_Threading_Thread_o *)sub_1C6BC54(System_Threading_Thread_TypeInfo);
  System_Threading_Thread___ctor(v4, v3, 0);
  this->fields.writeRequestThread = v4;
  p_writeRequestThread = &this->fields.writeRequestThread;
  sub_1C6B9AC((CGThumbnailListItem_o *)p_writeRequestThread, (int32_t)v4, v6, v7);
  if ( !*p_writeRequestThread )
    sub_1C6BC60(0, v8);
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
        const MethodInfo_311C7A0 *method)
{
  AssetData_o *AssetStorage; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *Object_object__51495936; // x1
  Il2CppObject *v12; // x19

  if ( !method->rgctx_data )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C41AF8(method);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0);
  if ( AssetStorage )
    Object_object__51495936 = AssetData__GetObject_object__51495936(
                                AssetStorage,
                                name,
                                (const MethodInfo_311C400 *)method->rgctx_data->_2_AssetData_GetObject_T_);
  else
    Object_object__51495936 = 0;
  *data = Object_object__51495936;
  sub_1C6B9AC((CGThumbnailListItem_o *)data, (int32_t)Object_object__51495936, v9, v10);
  v12 = *data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0, 0);
}


bool AssetManager__TryGetUIAtlas(
        UIAtlas_o **atlas,
        System_String_o *name,
        System_String_o *atlasName,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  AssetData_o *AssetStorage; // x0
  Il2CppObject *Object_object__51495936; // x20
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *Component_object; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Object_o *v15; // x19

  if ( (byte_4CB52B7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_GameObject____78568200);
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB52B7 = 1;
  }
  *atlas = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)atlas, 0, (int32_t)atlasName, method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(name, v7);
  if ( AssetStorage )
    Object_object__51495936 = AssetData__GetObject_object__51495936(
                                AssetStorage,
                                atlasName,
                                (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
  else
    Object_object__51495936 = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51495936, 0, 0);
  if ( v10 )
  {
    if ( !Object_object__51495936 )
      sub_1C6BC60(v10, v11);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object_object__51495936,
                         (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    *atlas = (UIAtlas_o *)Component_object;
    sub_1C6B9AC((CGThumbnailListItem_o *)atlas, (int32_t)Component_object, v13, v14);
  }
  v15 = (UnityEngine_Object_o *)*atlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(v15, 0, 0);
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
  const MethodInfo *v5; // x3

  if ( (byte_4CB525A & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_TypeInfo);
    byte_4CB525A = 1;
  }
  v3 = sub_1C6BC54(AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void AssetManager___DownloadAssetStorageAttributeWithCheckDialog_b__119_0(
        AssetManager_o *this,
        const MethodInfo *method)
{
  AssetManager_o *v2; // x19
  struct System_Collections_Generic_List_AssetLoader__o *processingAssetLoaderList; // x8

  v2 = this;
  if ( (byte_4CB52BD & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_1C6BA08(&SoundManager_TypeInfo);
    this = (AssetManager_o *)sub_1C6BA08(&StringLiteral_9320/*"NOW_LOADING"*/);
    byte_4CB52BD = 1;
  }
  processingAssetLoaderList = v2->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
    sub_1C6BC60(this, method);
  if ( processingAssetLoaderList->fields._size >= 1 )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playBgm((System_String_o *)StringLiteral_9320/*"NOW_LOADING"*/, 0);
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

  if ( (byte_4CB5258 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_ResourceUnloadEventHandler_TypeInfo);
    byte_4CB5258 = 1;
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
    v9 = sub_1CC77DC(p_unloadCallbacks, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C6BFFC(v8);
  AssetManager__remove_unloadCallbacks(v11, v12, v13);
}


void AssetManager__cancelDownloadAssetStorage(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4CB527C & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CB527C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1C6BC60(v2, v3);
    AssetManager__CancelDownloadAssetStorage((AssetManager_o *)Instance, v3);
  }
}


System_Collections_IEnumerator_o *AssetManager__coUnloadUnusedAssets(AssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB52A2 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager__coUnloadUnusedAssets_d__142_TypeInfo);
    byte_4CB52A2 = 1;
  }
  v3 = sub_1C6BC54(AssetManager__coUnloadUnusedAssets_d__142_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


bool AssetManager__compAssetStorage(System_String_o *name1, System_String_o *name2, const MethodInfo *method)
{
  int32_t stringLength; // w8

  if ( name1 )
  {
    if ( name2 )
      return System_String__Equals_64002112(name1, name2, 0);
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
            list1 = (System_String_array *)System_String__Equals_64002112((System_String_o *)list1, v8, 0);
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
      sub_1C6BC68(list1);
    }
  }
  else if ( list2 )
  {
    return LODWORD(list2->max_length) == 0;
  }
  return 1;
}


bool AssetManager__compAssetStorageList_40763476(
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
              sub_1C6BC60(0, v9);
            assetList = (AssetData_array *)System_String__Equals_64002112(name, v9, 0);
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
      sub_1C6BC68(assetList);
    }
  }
  else if ( list )
  {
    return LODWORD(list->max_length) == 0;
  }
  return 1;
}


bool AssetManager__compAssetStorage_40763204(AssetData_o *data, System_String_o *name, const MethodInfo *method)
{
  struct System_String_o *v3; // x0
  int32_t stringLength; // w8

  if ( data && (v3 = data->fields.name) != 0 )
  {
    if ( name )
      return System_String__Equals_64002112(v3, name, 0);
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

  if ( (byte_4CB5260 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CB5260 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1C6BC60(v2, v3);
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

  if ( (byte_4CB527F & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CB527F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v8 )
    return 0;
  if ( !Instance )
    sub_1C6BC60(v8, v9);
  return AssetManager__DownloadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, v10);
}


bool AssetManager__downloadAssetStorage_40770164(
        System_String_array *nameList,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x4

  if ( (byte_4CB5280 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CB5280 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v6 )
    return 0;
  if ( !Instance )
    sub_1C6BC60(v6, v7);
  return AssetManager__DownloadAssetStorage_40770356((AssetManager_o *)Instance, nameList, callbackFunc, 1, v8);
}


AssetData_o *AssetManager__getAsset(int32_t type, System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4CB526D & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CB526D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v6 )
    return 0;
  if ( !Instance )
    sub_1C6BC60(v6, v7);
  return AssetManager__GetAsset((AssetManager_o *)Instance, type, name, v8);
}


AssetData_o *AssetManager__getAssetResource(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4CB528C & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CB528C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_1C6BC60(v4, v5);
  return AssetManager__GetAssetResource((AssetManager_o *)Instance, name, v6);
}


AssetData_o *AssetManager__getAssetStorage(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4CB5285 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CB5285 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_1C6BC60(v4, v5);
  return AssetManager__GetAssetStorage((AssetManager_o *)Instance, name, v6);
}


AssetData_o *AssetManager__getAssetStorageData(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3

  if ( (byte_4CB5286 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CB5286 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_1C6BC60(v4, v5);
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

  if ( (byte_4CB527A & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CB527A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_1C6BC60(v4, v5);
  return AssetManager__GetAssetStorageList((AssetManager_o *)Instance, path, v6);
}


AssetData_array *AssetManager__getAssetStorage_40773704(System_String_array *nameList, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4CB5287 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CB5287 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_1C6BC60(v4, v5);
  return AssetManager__GetAssetStorage_40773884((AssetManager_o *)Instance, nameList, v6);
}


bool AssetManager__getAssetStorage_40774156(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4CB5288 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CB5288 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v6 )
    return 0;
  if ( !Instance )
    sub_1C6BC60(v6, v7);
  return AssetManager__GetAssetStorage_40774344((AssetManager_o *)Instance, name, callbackFunc, v8);
}


bool AssetManager__getAsset_40764232(
        int32_t type,
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_4CB526E & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CB526E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v8 )
    return 0;
  if ( !Instance )
    sub_1C6BC60(v8, v9);
  return AssetManager__GetAsset_40764440((AssetManager_o *)Instance, type, name, callbackFunc, v10);
}


bool AssetManager__getAsset_40764540(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4CB526F & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CB526F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v6 )
    return 0;
  if ( !Instance )
    sub_1C6BC60(v6, v7);
  return AssetManager__GetAsset_40764728((AssetManager_o *)Instance, name, callbackFunc, v8);
}


int64_t AssetManager__getDownloadSize(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4CB5275 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CB5275 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v2 )
    return 0;
  if ( !Instance )
    sub_1C6BC60(v2, v3);
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

  if ( (byte_4CB526A & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo);
    sub_1C6BA08(&System_Text_StringBuilder_TypeInfo);
    sub_1C6BA08(&System_Text_UTF8Encoding_TypeInfo);
    sub_1C6BA08(&StringLiteral_25154/*"{0,0:x2}"*/);
    sub_1C6BA08(&StringLiteral_1012/*".bin"*/);
    byte_4CB526A = 1;
  }
  v3 = (System_Security_Cryptography_SHA1CryptoServiceProvider_o *)sub_1C6BC54(System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_SHA1CryptoServiceProvider___ctor(v3, 0);
  v4 = (System_Text_UTF8Encoding_o *)sub_1C6BC54(System_Text_UTF8Encoding_TypeInfo);
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
  v8 = (System_Text_StringBuilder_o *)sub_1C6BC54(System_Text_StringBuilder_TypeInfo);
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
        sub_1C6BC68(appended);
      v12 = v7->m_Items[v10] ^ 0xAA;
      appended = (System_Text_StringBuilder_o *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
      if ( !v8 )
        break;
      appended = System_Text_StringBuilder__AppendFormat(
                   v8,
                   (System_String_o *)StringLiteral_25154/*"{0,0:x2}"*/,
                   (Il2CppObject *)appended,
                   0);
      LODWORD(max_length) = v7->max_length;
      if ( (__int64)++v10 >= (int)max_length )
        goto LABEL_11;
    }
LABEL_13:
    sub_1C6BC60(appended, v6);
  }
LABEL_11:
  if ( !v8 )
    goto LABEL_13;
  System_Text_StringBuilder__Append_64050752(v8, (System_String_o *)StringLiteral_1012/*".bin"*/, 0);
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

  if ( (byte_4CB5269 & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_1758/*"?t="*/);
    sub_1C6BA08(&StringLiteral_21122/*"jar:"*/);
    byte_4CB5269 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !url )
    sub_1C6BC60(v3, method);
  if ( !System_String__StartsWith(url, NetworkManager_TypeInfo->static_fields->FILE_URL_SCHEME, 0) )
  {
    v4 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v4 = NetworkManager_TypeInfo;
    }
    v5 = System_String__Concat_63966792((System_String_o *)StringLiteral_21122/*"jar:"*/, v4->static_fields->FILE_URL_SCHEME, 0);
    if ( !System_String__StartsWith(url, v5, 0) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v8 = NetworkManager__getTime(0) / 300;
      v6 = System_Int64__ToString((int64_t)&v8, 0);
      return System_String__Concat_64005056(url, (System_String_o *)StringLiteral_1758/*"?t="*/, v6, 0);
    }
  }
  return url;
}


System_String_o *AssetManager__getUrlString_40762400(AssetData_o *data, const MethodInfo *method)
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
  const MethodInfo *v12; // x3
  char *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_String_o *assetBundleDateVersion; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w1
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  __int64 v37; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CB526B & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&StringLiteral_16102/*"_"*/);
    sub_1C6BA08(&StringLiteral_21122/*"jar:"*/);
    sub_1C6BA08(&StringLiteral_1759/*"?v="*/);
    byte_4CB526B = 1;
  }
  v3 = AssetManager_TypeInfo;
  v37 = 0;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  DataServerAddress = (char *)AssetManager__get_DataServerAddress((const MethodInfo *)v3);
  if ( !data )
    goto LABEL_27;
  v6 = (System_String_o *)DataServerAddress;
  DownloadName = AssetData__get_DownloadName(data, 0);
  DataServerAddress = (char *)System_String__Concat_63966792(v6, DownloadName, 0);
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
    v10 = System_String__Concat_63966792((System_String_o *)StringLiteral_21122/*"jar:"*/, v9->static_fields->FILE_URL_SCHEME, 0);
    if ( !System_String__StartsWith(v8, v10, 0) )
    {
      DataServerAddress = (char *)sub_1C6BAB0(string___TypeInfo, 9);
      if ( DataServerAddress )
      {
        v13 = DataServerAddress;
        if ( !*((_DWORD *)DataServerAddress + 6) )
          goto LABEL_28;
        *((_QWORD *)DataServerAddress + 4) = v8;
        sub_1C6B9AC((CGThumbnailListItem_o *)(DataServerAddress + 32), (int32_t)v8, v11, v12);
        if ( *((_DWORD *)v13 + 6) <= 1u )
          goto LABEL_28;
        v16 = StringLiteral_1759/*"?v="*/;
        *((_QWORD *)v13 + 5) = StringLiteral_1759/*"?v="*/;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v13 + 40), v16, v14, v15);
        DataServerAddress = (char *)AssetManager_TypeInfo;
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          DataServerAddress = (char *)AssetManager_TypeInfo;
        }
        if ( *((_DWORD *)v13 + 6) <= 2u )
          goto LABEL_28;
        v19 = *(_QWORD *)(*((_QWORD *)DataServerAddress + 23) + 80LL);
        *((_QWORD *)v13 + 6) = v19;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v13 + 48), v19, v17, v18);
        if ( *((_DWORD *)v13 + 6) <= 3u )
          goto LABEL_28;
        v22 = StringLiteral_16102/*"_"*/;
        *((_QWORD *)v13 + 7) = StringLiteral_16102/*"_"*/;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v13 + 56), v22, v20, v21);
        if ( *((_DWORD *)v13 + 6) <= 4u )
          goto LABEL_28;
        assetBundleDateVersion = AssetManager_TypeInfo->static_fields->assetBundleDateVersion;
        *((_QWORD *)v13 + 8) = assetBundleDateVersion;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v13 + 64), (int32_t)assetBundleDateVersion, v23, v24);
        if ( *((_DWORD *)v13 + 6) <= 5u )
          goto LABEL_28;
        v28 = StringLiteral_16102/*"_"*/;
        *((_QWORD *)v13 + 9) = StringLiteral_16102/*"_"*/;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v13 + 72), v28, v26, v27);
        HIDWORD(v37) = data->fields.size;
        DataServerAddress = (char *)System_Int32__ToString((int32_t)&v37 + 4, 0);
        if ( *((_DWORD *)v13 + 6) <= 6u
          || (*((_QWORD *)v13 + 10) = DataServerAddress,
              sub_1C6B9AC((CGThumbnailListItem_o *)(v13 + 80), (int32_t)DataServerAddress, v29, v30),
              *((_DWORD *)v13 + 6) <= 7u)
          || (v33 = StringLiteral_16102/*"_"*/,
              *((_QWORD *)v13 + 11) = StringLiteral_16102/*"_"*/,
              sub_1C6B9AC((CGThumbnailListItem_o *)(v13 + 88), v33, v31, v32),
              LODWORD(v37) = data->fields.crc,
              DataServerAddress = (char *)System_UInt32__ToString((uint32_t)&v37, 0),
              *((_DWORD *)v13 + 6) <= 8u) )
        {
LABEL_28:
          sub_1C6BC68(DataServerAddress);
        }
        *((_QWORD *)v13 + 12) = DataServerAddress;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v13 + 96), (int32_t)DataServerAddress, v34, v35);
        return System_String__Concat_64007324((System_String_array *)v13, 0);
      }
LABEL_27:
      sub_1C6BC60(DataServerAddress, v5);
    }
  }
  return v8;
}


System_String_o *AssetManager__get_CacheListFile(const MethodInfo *method)
{
  System_String_o *Path; // x0
  AssetManager_c *v2; // x8
  System_String_o *v3; // x19

  if ( (byte_4CB5264 & 1) == 0 )
  {
    method = (const MethodInfo *)sub_1C6BA08(&AssetManager_TypeInfo);
    byte_4CB5264 = 1;
  }
  Path = AssetStorageCache__GetPath(method);
  v2 = AssetManager_TypeInfo;
  v3 = Path;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v2 = AssetManager_TypeInfo;
  }
  return System_String__Concat_63966792(v3, v2->static_fields->configFileName, 0);
}


System_String_o *AssetManager__get_CachePathName(const MethodInfo *method)
{
  AssetManager_c *v1; // x0

  if ( (byte_4CB5262 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    byte_4CB5262 = 1;
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

  if ( (byte_4CB5263 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    byte_4CB5263 = 1;
  }
  v1 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  DataServerAddress = AssetManager__get_DataServerAddress((const MethodInfo *)v1);
  return System_String__Concat_63966792(DataServerAddress, AssetManager_TypeInfo->static_fields->configFileName, 0);
}


System_String_o *AssetManager__get_DataServerAddress(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0

  if ( (byte_4CB5261 & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB5261 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB53CD )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB53CD = 1;
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

  if ( (byte_4CB525B & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&ManagerConfig_TypeInfo);
    byte_4CB525B = 1;
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

  if ( (byte_4CB5292 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    byte_4CB5292 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      assetBundleDic,
                                                                                      (const MethodInfo_34BB76C *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0 )
  {
    sub_1C6BC60(assetBundleDic, attrib);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v12,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_3B47370 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v12,
           (const MethodInfo_35B9D1C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v6 )
      break;
    currentValue = v12.fields._currentValue;
    if ( !v12.fields._currentValue )
      sub_1C6BC60(v6, v7);
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
    (const MethodInfo_35B9D18 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  return v9 & (v10 == 5);
}


bool AssetManager__isExistAssetStorage(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4CB5276 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CB5276 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_1C6BC60(v4, v5);
  return AssetManager__IsExistAssetStorage((AssetManager_o *)Instance, name, v6);
}


bool AssetManager__isExistAssetStorage_40766636(System_String_array *nameList, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4CB5277 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CB5277 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_1C6BC60(v4, v5);
  return AssetManager__IsExistAssetStorage_40766816((AssetManager_o *)Instance, nameList, v6);
}


bool AssetManager__isNeedDownload(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4CB5278 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CB5278 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_1C6BC60(v4, v5);
  return AssetManager__IsNeedDownload((AssetManager_o *)Instance, name, v6);
}


bool AssetManager__isNeedDownload_40767176(System_String_array *nameList, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4CB5279 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CB5279 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_1C6BC60(v4, v5);
  return AssetManager__IsNeedDownload_40767356((AssetManager_o *)Instance, nameList, v6);
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

  if ( (byte_4CB526C & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CB526C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v8 )
    return 0;
  if ( !Instance )
    sub_1C6BC60(v8, v9);
  return AssetManager__LoadAsset((AssetManager_o *)Instance, type, name, callbackFunc, v10);
}


AssetData_o *AssetManager__loadAssetResource(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4CB528B & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CB528B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_1C6BC60(v4, v5);
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

  if ( (byte_4CB5281 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CB5281 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v8 )
    return 0;
  if ( !Instance )
    sub_1C6BC60(v8, v9);
  return AssetManager__LoadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, v10);
}


bool AssetManager__loadAssetStorage_40772136(
        System_String_o *name,
        int32_t maxParallelLoad,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_4CB5283 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CB5283 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v8 )
    return 0;
  if ( !Instance )
    sub_1C6BC60(v8, v9);
  return AssetManager__LoadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, v10);
}


bool AssetManager__loadAssetStorage_40772344(
        System_String_array *nameList,
        System_Action_o *callbackFunc,
        int32_t loadParalleMax,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_4CB5284 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CB5284 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v8 )
    return 0;
  if ( !Instance )
    sub_1C6BC60(v8, v9);
  return AssetManager__LoadAssetStorage_40772552(
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

  if ( (byte_4CB5282 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CB5282 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v10 )
    return 0;
  if ( !Instance )
    sub_1C6BC60(v10, v11);
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

  if ( (byte_4CB527D & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CB527D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1C6BC60(v2, v3);
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

  if ( (byte_4CB5270 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CB5270 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v6 )
  {
    if ( !Instance )
      sub_1C6BC60(v6, v7);
    AssetManager__ReleaseAsset((AssetManager_o *)Instance, type, name, v8);
  }
}


void AssetManager__releaseAssetResource(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4CB528D & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CB528D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C6BC60(v4, v5);
    AssetManager__ReleaseAssetResource((AssetManager_o *)Instance, name, v6);
  }
}


void AssetManager__releaseAssetStorage(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4CB5289 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CB5289 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C6BC60(v4, v5);
    AssetManager__ReleaseAssetStorage((AssetManager_o *)Instance, name, v6);
  }
}


void AssetManager__releaseAssetStorage_40774692(System_String_array *nameList, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4CB528A & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CB528A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C6BC60(v4, v5);
    AssetManager__ReleaseAssetStorage_40774868((AssetManager_o *)Instance, nameList, v6);
  }
}


void AssetManager__releaseAsset_40765232(int32_t type, System_String_array *nameList, const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4CB5271 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CB5271 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v6 )
  {
    if ( !Instance )
      sub_1C6BC60(v6, v7);
    AssetManager__ReleaseAsset_40765416((AssetManager_o *)Instance, type, nameList, v8);
  }
}


void AssetManager__releaseAsset_40765532(AssetData_o *assetInfo, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3

  if ( (byte_4CB5272 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CB5272 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C6BC60(v4, v5);
    if ( assetInfo )
      AssetManager__ReleaseAsset((AssetManager_o *)Instance, assetInfo->fields.type, assetInfo->fields.name, v6);
  }
}


void AssetManager__releaseAsset_40765740(AssetData_array *assetInfoList, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4CB5273 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CB5273 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C6BC60(v4, v5);
    AssetManager__ReleaseAsset_40765916((AssetManager_o *)Instance, assetInfoList, v6);
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

  if ( (byte_4CB5259 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_ResourceUnloadEventHandler_TypeInfo);
    byte_4CB5259 = 1;
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
    v9 = sub_1CC77DC(p_unloadCallbacks, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C6BFFC(v8);
  AssetManager__WaitForExecutionUnloadUnuseAssets(v11, v12);
}


void AssetManager__resetAssetStorageVersion(System_String_o *path, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4CB527B & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CB527B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C6BC60(v4, v5);
    AssetManager__ResetAssetStorageVersion((AssetManager_o *)Instance, path, v6);
  }
}


void AssetManager__resumeDownloadAssetStorage(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4CB527E & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CB527E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1C6BC60(v2, v3);
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

  if ( (byte_4CB525F & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CB525F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !Instance && !v4 )
    sub_1C6BC60(v4, v5);
}


void AssetManager_LoadWaitStatus___ctor(
        AssetManager_LoadWaitStatus_o *this,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.callbackFunc = callbackFunc;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v5, v6);
}


void AssetManager_LoadWaitStatus___ctor_40789516(
        AssetManager_LoadWaitStatus_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.data = data;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)data, v5, v6);
}


void AssetManager_LoadWaitStatus___ctor_40789736(
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

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.data = data;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)data, v9, v10);
  this->fields.callbackFunc2 = callbackFunc;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callbackFunc, v11, v12);
  this->fields.resourceNames = resourceNames;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.resourceNames, (int32_t)resourceNames, v13, v14);
}


void AssetManager_LoadWaitStatus__AddCallback(
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

  if ( (byte_4CB52BE & 1) == 0 )
  {
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4CB52BE = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = (CGThumbnailListItem_o *)&this->fields.callbackFunc2;
  v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)callbackFunc, 0);
  v10 = v7;
  if ( !v7 )
    goto LABEL_7;
  v11 = AssetLoader_LoadEndDataHandler_TypeInfo;
  if ( (AssetLoader_LoadEndDataHandler_c *)v7->klass != AssetLoader_LoadEndDataHandler_TypeInfo
    || (p_callbackFunc2->klass = (CGThumbnailListItem_c *)v7, (AssetLoader_LoadEndDataHandler_c *)v7->klass != v11) )
  {
    sub_1C6BFFC(v7);
LABEL_7:
    p_callbackFunc2->klass = (CGThumbnailListItem_c *)v10;
  }
  sub_1C6B9AC(p_callbackFunc2, (int32_t)v10, v8, v9);
}


void AssetManager_LoadWaitStatus__AddEntry(AssetManager_LoadWaitStatus_o *this, const MethodInfo *method)
{
  AssetData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1C6BC60(0, method);
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
    LOBYTE(data) = AssetData__IsSame_40737060(data, type, name, 0);
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

  if ( (byte_4CB52BF & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB52BF = 1;
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
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AA16B8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA1678;
}


System_IAsyncResult_o *AssetManager_ResourceUnloadEventHandler__BeginInvoke(
        AssetManager_ResourceUnloadEventHandler_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, &v5, callback, object);
}


void AssetManager_ResourceUnloadEventHandler__EndInvoke(
        AssetManager_ResourceUnloadEventHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
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
  const MethodInfo *v8; // x3
  struct AssetData_o *asset; // x1
  System_Func_bool__o *v10; // x21
  UnityEngine_WaitUntil_o *v11; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  bool result; // w0
  System_Action_o *action; // x0

  if ( (byte_4CB52C4 & 1) == 0 )
  {
    sub_1C6BA08(&System_Func_bool__TypeInfo);
    sub_1C6BA08(&Method_AssetManager___c__DisplayClass190_0__AssetObjectListSetupAndCall_b__0__);
    sub_1C6BA08(&AssetManager___c__DisplayClass190_0_TypeInfo);
    sub_1C6BA08(&UnityEngine_WaitUntil_TypeInfo);
    byte_4CB52C4 = 1;
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
  v4 = sub_1C6BC54(AssetManager___c__DisplayClass190_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    sub_1C6BC60(v5, v6);
  asset = this->fields.asset;
  *(_QWORD *)(v4 + 16) = asset;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v4 + 16), (int32_t)asset, v7, v8);
  v10 = (System_Func_bool__o *)sub_1C6BC54(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v10,
    (Il2CppObject *)v4,
    Method_AssetManager___c__DisplayClass190_0__AssetObjectListSetupAndCall_b__0__,
    0);
  v11 = (UnityEngine_WaitUntil_o *)sub_1C6BC54(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v11, v10, 0);
  this->fields.__2__current = (Il2CppObject *)v11;
  p__2__current = &this->fields.__2__current;
  sub_1C6B9AC((CGThumbnailListItem_o *)p__2__current, (int32_t)v11, v13, v14);
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

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_AssetManager__AssetObjectListSetupAndCall_d__190_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
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
  const MethodInfo *v8; // x3
  struct AssetData_array *assetList; // x1
  System_Func_bool__o *v10; // x21
  UnityEngine_WaitUntil_o *v11; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  bool result; // w0
  System_Action_o *action; // x0

  if ( (byte_4CB52C5 & 1) == 0 )
  {
    sub_1C6BA08(&System_Func_bool__TypeInfo);
    sub_1C6BA08(&Method_AssetManager___c__DisplayClass191_0__AssetObjectListSetupAndCall_b__0__);
    sub_1C6BA08(&AssetManager___c__DisplayClass191_0_TypeInfo);
    sub_1C6BA08(&UnityEngine_WaitUntil_TypeInfo);
    byte_4CB52C5 = 1;
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
  v4 = sub_1C6BC54(AssetManager___c__DisplayClass191_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    sub_1C6BC60(v5, v6);
  assetList = this->fields.assetList;
  *(_QWORD *)(v4 + 16) = assetList;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v4 + 16), (int32_t)assetList, v7, v8);
  v10 = (System_Func_bool__o *)sub_1C6BC54(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v10,
    (Il2CppObject *)v4,
    Method_AssetManager___c__DisplayClass191_0__AssetObjectListSetupAndCall_b__0__,
    0);
  v11 = (UnityEngine_WaitUntil_o *)sub_1C6BC54(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v11, v10, 0);
  this->fields.__2__current = (Il2CppObject *)v11;
  p__2__current = &this->fields.__2__current;
  sub_1C6B9AC((CGThumbnailListItem_o *)p__2__current, (int32_t)v11, v13, v14);
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

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_AssetManager__AssetObjectListSetupAndCall_d__191_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
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
      sub_1C6BC60(0, method);
    AssetManager__LoadStart(_4__this, method);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.__2__current, 0, v2, v3);
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

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_AssetManager__DelayLoadStart_d__153_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
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
  const MethodInfo *v13; // x3
  System_String_o *v14; // x22
  const MethodInfo *v15; // x1
  System_String_o *v16; // x23
  AssetManager_o *DownloadSize; // x0
  const MethodInfo *v18; // x1
  Il2CppObject *v19; // x0
  System_String_o *v20; // x23
  Il2CppObject *Instance; // x0
  Il2CppObject *v22; // x25
  CommonUI_o *v23; // x21
  ErrorDialog_ClickDelegate_o *v24; // x24
  struct AssetManager___c__DisplayClass119_0_o *_8__1; // x8
  struct AssetManager___c__DisplayClass119_0_o **p__8__1; // x21
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  UnityEngine_WaitForEndOfFrame_o *v29; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  bool result; // w0
  Il2CppObject *v34; // x21
  System_Action_o *v35; // x22
  AvalonSceneManager_c *v36; // x0
  float DEFAULT_FADE_TIME; // s8
  UnityEngine_WaitForSeconds_o *v38; // x20
  CGThumbnailListItem_o *v39; // x19
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v42; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v43; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_4CB52C6 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_b__119_0__);
    sub_1C6BA08(&AvalonSceneManager_TypeInfo);
    sub_1C6BA08(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_AssetManager___c__DisplayClass119_0__DownloadAssetStorageAttributeWithCheckDialog_b__1__);
    sub_1C6BA08(&AssetManager___c__DisplayClass119_0_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    sub_1C6BA08(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C6BA08(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C6BA08(&StringLiteral_25535/*"データ更新"*/);
    sub_1C6BA08(&StringLiteral_5426/*"END_BOOT_ASSET_DOWNLOAD"*/);
    sub_1C6BA08(&StringLiteral_9247/*"NETWORK_ERROR_DATA_UPDATE_TITLE"*/);
    sub_1C6BA08(&StringLiteral_330/*" ゲームデータの更新を行います。\n\n{0}\n\n ※Wi-Fi接続での更新を推奨します。"*/);
    this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__119_o *)sub_1C6BA08(&StringLiteral_9245/*"NETWORK_ERROR_DATA_UPDATE_EXP"*/);
    byte_4CB52C6 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    isDispLogo_5__2 = v2->fields._isDispLogo_5__2;
    v2->fields.__1__state = -1;
    if ( isDispLogo_5__2 )
    {
      this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__119_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      v29 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v29, 0);
      v2->fields.__2__current = (Il2CppObject *)v29;
      p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1C6B9AC(p__2__current, (int32_t)v29, v31, v32);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    }
    this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__119_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__119_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( !this )
        goto LABEL_59;
      CrashReporter__SetNowState((CrashReporter_o *)this, (System_String_o *)StringLiteral_5426/*"END_BOOT_ASSET_DOWNLOAD"*/, 0);
    }
    *p__8__1 = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v2->fields.__8__1, 0, v27, v28);
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
                                                                                  (const MethodInfo_34BB76C *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !this )
    goto LABEL_59;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v42,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_3B47370 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v43 = v42;
  while ( 1 )
  {
    v5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v43,
           (const MethodInfo_35B9D1C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v5 )
      break;
    currentValue = (AssetData_o *)v43.fields._currentValue;
    if ( !v43.fields._currentValue )
      sub_1C6BC60(v5, v6);
    if ( AssetData__IsDownloadOldVersion((AssetData_o *)v43.fields._currentValue, 0)
      || System_String__op_Equality(v2->fields.attrib, currentValue->fields.attrib, 0)
      && AssetData__IsNeedUpdateVersion(currentValue, 0) )
    {
      AssetManager__AddLoadWaitStatus_40778088(_4__this, currentValue, v8);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v43,
    (const MethodInfo_35B9D18 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  downLoadWaitList = _4__this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
LABEL_59:
    sub_1C6BC60(this, method);
  if ( downLoadWaitList->fields._size >= 1 )
  {
    v11 = (Il2CppObject *)sub_1C6BC54(AssetManager___c__DisplayClass119_0_TypeInfo);
    System_Object___ctor(v11, 0);
    v2->fields.__8__1 = (struct AssetManager___c__DisplayClass119_0_o *)v11;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v2->fields.__8__1, (int32_t)v11, v12, v13);
    if ( !v2->fields.__8__1 )
      goto LABEL_59;
    v2->fields.__8__1->fields.isDataUpdate = 0;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( LocalizationManager__ContainsKey((System_String_o *)StringLiteral_9247/*"NETWORK_ERROR_DATA_UPDATE_TITLE"*/, 0) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_9247/*"NETWORK_ERROR_DATA_UPDATE_TITLE"*/, 0);
    }
    else
    {
      v14 = (System_String_o *)StringLiteral_25535/*"データ更新"*/;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( LocalizationManager__ContainsKey((System_String_o *)StringLiteral_9245/*"NETWORK_ERROR_DATA_UPDATE_EXP"*/, 0) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v16 = LocalizationManager__Get((System_String_o *)StringLiteral_9245/*"NETWORK_ERROR_DATA_UPDATE_EXP"*/, 0);
    }
    else
    {
      v16 = (System_String_o *)StringLiteral_330/*" ゲームデータの更新を行います。\n\n{0}\n\n ※Wi-Fi接続での更新を推奨します。"*/;
    }
    DownloadSize = (AssetManager_o *)AssetManager__GetDownloadSize(_4__this, v15);
    v19 = (Il2CppObject *)AssetManager__ConvertDownloadSizeToString(DownloadSize, (double)(__int64)DownloadSize, v18);
    v20 = System_String__Format(v16, v19, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v22 = (Il2CppObject *)v2->fields.__8__1;
    v23 = (CommonUI_o *)Instance;
    v24 = (ErrorDialog_ClickDelegate_o *)sub_1C6BC54(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(
      v24,
      v22,
      Method_AssetManager___c__DisplayClass119_0__DownloadAssetStorageAttributeWithCheckDialog_b__1__,
      0);
    if ( !v23 )
      goto LABEL_59;
    CommonUI__OpenDataUpdateDialog(v23, v14, v20, v24, 0, 0);
    goto LABEL_40;
  }
LABEL_50:
  v2->fields._isDispLogo_5__2 = 0;
  v34 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v35 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v35,
    (Il2CppObject *)_4__this,
    Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_b__119_0__,
    0);
  if ( !v34 )
    goto LABEL_59;
  this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__119_o *)CommonUI__PlayLogo(
                                                                                  (CommonUI_o *)v34,
                                                                                  v35,
                                                                                  0);
  v2->fields._isDispLogo_5__2 = (unsigned __int8)this & 1;
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_55;
  v36 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v36 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v36->static_fields->DEFAULT_FADE_TIME;
  v38 = (UnityEngine_WaitForSeconds_o *)sub_1C6BC54(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v38, DEFAULT_FADE_TIME, 0);
  v2->fields.__2__current = (Il2CppObject *)v38;
  v39 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1C6B9AC(v39, (int32_t)v38, v40, v41);
  LODWORD(v39[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
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

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__119_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
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
  const MethodInfo *v3; // x3
  AssetManager__InitCR_d__135_o *v4; // x19
  struct AssetManager_o *_4__this; // x20
  AssetManager_c *v6; // x0
  AssetManager_c *v7; // x0
  AssetManager_c *v8; // x0
  AssetManager_c *v9; // x0
  System_String_o *AllText; // x21
  System_String_o *v11; // x0
  UnityEngine_WaitForEndOfFrame_o *v12; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  bool result; // w0
  System_String_o *v17; // x21
  __int64 v18; // x0
  System_String_o *v19; // x21
  __int64 v20; // x0
  int v21; // w8
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int v24; // w23
  __int64 *v25; // x8
  System_String_o *v26; // x0
  __int64 v27; // x1
  System_String_o *v28; // x22
  System_String_o *v29; // x22
  System_String_o *v30; // x21
  System_Text_Encoding_o *UTF8; // x0
  __int64 v32; // x1
  System_Byte_array *v33; // x23
  uint32_t v34; // w23
  __int64 v35; // x0
  int v36; // w8
  AssetManager__InitCR_d__135_o *v37; // x25
  Il2CppObject *_2__current; // x8
  AssetManager__InitCR_d__135_o *v39; // x22
  System_String_o *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  AssetManager_c *v43; // x8
  System_String_o *v44; // x23
  struct AssetManager_StaticFields *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  AssetManager_c *v48; // x0
  __int64 *p_configFileUrl_5__2; // x8
  __int64 v50; // x23
  struct AssetManager_StaticFields *v51; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  AssetManager_c *v54; // x0
  __int64 *p_loader_5__3; // x8
  __int64 v56; // x22
  struct AssetManager_StaticFields *v57; // x0
  int v58; // w8
  __int64 v59; // x21
  AssetManager__InitCR_d__135_o *v60; // x22
  System_String_o *v61; // x0
  int32_t v62; // w23
  System_String_o *configFileUrl_5__2; // x24
  System_String_o *v64; // x0
  int32_t v65; // w25
  System_String_o *v66; // x0
  int v67; // w8
  uint32_t v68; // w26
  System_String_o *v69; // x27
  System_String_o *wait_5__6; // x22
  System_Collections_Generic_Dictionary_object__object__o *assetBundleDic; // x28
  AssetData_o *v72; // x29
  System_String_o *v73; // x21
  AssetManager_c *v74; // x0
  struct AssetManager_StaticFields *static_fields; // x0
  int32_t v76; // w1
  int32_t v77; // w1
  struct AssetManager_StaticFields *v78; // x0
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  int32_t v81; // w1
  struct AssetManager_StaticFields *v82; // x0
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  ManagerConfig_c *v85; // x0
  struct ManagerConfig_StaticFields *v86; // x8
  Il2CppObject *Instance; // x22
  ErrorDialog_ClickDelegate_o *v88; // x23
  AssetManager_c *v89; // x0
  System_String_o *ConfigFileAddress; // x0
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  System_String_o *v95; // x21
  System_String_o *UrlString; // x0
  UnityEngine_Networking_UnityWebRequest_o *v97; // x0
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  float unscaledTime; // s8
  ManagerConfig_c *v101; // x0
  float TIMEOUT; // s0
  UnityEngine_WaitForEndOfFrame_o *v103; // x21
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  AssetManager__InitCR_d__135_o **v106; // x21
  float downloadProgress; // s0
  float loadProgress_5__5; // s9
  float v109; // s8
  int32_t v110; // w2
  const MethodInfo *v111; // x3
  float v112; // s0
  bool v113; // zf
  float v114; // s8
  System_String_o *error; // x0
  System_String_o *text; // x22
  System_String_o *v117; // x22
  const MethodInfo *v118; // x1
  System_String_o *v119; // x22
  System_String_o *v120; // x0
  System_String_o *v121; // x0
  Il2CppObject *v122; // x22
  ManagerConfig_c *v123; // x0
  struct ManagerConfig_StaticFields *v124; // x8
  Il2CppObject *v125; // x1
  CGThumbnailListItem_o *v126; // x19
  int v127; // w8
  AssetManager__InitCR_d__135_o *v128; // x22
  int v129; // w8
  int32_t v130; // w0
  int32_t v131; // w24
  System_String_o *v132; // x23
  System_String_o *v133; // x22
  System_Byte_array *v134; // x24
  uint32_t v135; // w24
  int32_t v136; // w2
  const MethodInfo *v137; // x3
  int32_t v138; // w2
  const MethodInfo *v139; // x3
  int v140; // w8
  System_String_array *v141; // x25
  __int64 v142; // x22
  const MethodInfo *v143; // x1
  int32_t v144; // w2
  const MethodInfo *v145; // x3
  int max_length; // w8
  unsigned int v147; // w29
  AssetManager__InitCR_d__135_o *v148; // x27
  char v149; // w8
  System_String_o *v150; // x0
  int v151; // w9
  __int64 *v152; // x11
  AssetManager_c *v153; // x8
  System_String_o *v154; // x26
  bool v155; // cc
  __int64 *v156; // x9
  __int64 *v157; // x10
  CGThumbnailListItem_c *v158; // x24
  CGThumbnailListItem_c *v159; // x23
  int32_t v160; // w2
  const MethodInfo *v161; // x3
  int32_t v162; // w2
  const MethodInfo *v163; // x3
  int32_t v164; // w2
  const MethodInfo *v165; // x3
  System_String_o *v166; // x0
  System_String_o *v167; // x0
  int32_t v168; // w23
  System_String_o *v169; // x0
  const MethodInfo *v170; // x3
  int v171; // w8
  uint32_t v172; // w24
  System_String_o *v173; // x26
  AssetData_o *AssetData; // x0
  Il2CppObject *v175; // x27
  int32_t v176; // w2
  const MethodInfo *v177; // x3
  __int64 v178; // x8
  _QWORD *v179; // x9
  __int64 _2__current_low; // x10
  __int64 v181; // x8
  System_Collections_Generic_List_object__o *v182; // x27
  AssetData_o *v183; // x28
  int32_t v184; // w2
  const MethodInfo *v185; // x3
  struct System_Object_array *items; // x8
  _QWORD *v187; // x9
  __int64 size; // x10
  Il2CppClass **v189; // x0
  AssetManager_c *v190; // x0
  CGThumbnailListItem_c *v191; // x23
  struct AssetManager_StaticFields *v192; // x0
  struct AssetManager_StaticFields *v193; // x0
  CGThumbnailListItem_c *v194; // x1
  int32_t v195; // w2
  const MethodInfo *v196; // x3
  struct AssetManager_StaticFields *v197; // x0
  CGThumbnailListItem_c *v198; // x1
  int32_t v199; // w2
  const MethodInfo *v200; // x3
  _BOOL8 v201; // x0
  __int64 v202; // x1
  Il2CppObject *current; // x22
  System_Collections_Generic_Dictionary_object__object__o *v204; // x0
  __int64 v205; // x1
  System_Collections_Generic_Dictionary_object__object__o *v206; // x0
  Il2CppObject *v207; // x22
  int32_t v208; // w2
  const MethodInfo *v209; // x3
  ManagerConfig_c *v210; // x0
  struct ManagerConfig_StaticFields *v211; // x8
  Il2CppObject *v212; // x21
  ErrorDialog_ClickDelegate_o *v213; // x23
  UnityEngine_WaitForEndOfFrame_o *v214; // x20
  int32_t v215; // w2
  const MethodInfo *v216; // x3
  ManagementManager_c *v217; // x0
  _BOOL4 isDuringStartup; // w22
  Il2CppObject *v219; // x21
  System_String_o *v220; // x22
  ErrorDialog_ClickDelegate_o *v221; // x23
  System_String_o *v222; // x22
  ErrorDialog_ClickDelegate_o *v223; // x23
  UnityEngine_WaitForEndOfFrame_o *v224; // x20
  int32_t v225; // w2
  const MethodInfo *v226; // x3
  UnityEngine_WaitForSeconds_o *v227; // x20
  int32_t v228; // w2
  const MethodInfo *v229; // x3
  const MethodInfo *v230; // x2
  int32_t v231; // w2
  const MethodInfo *v232; // x3
  UnityEngine_WaitForEndOfFrame_o *v233; // x20
  int32_t v234; // w2
  const MethodInfo *v235; // x3
  System_Nullable_Vector2__o methoda; // [xsp+0h] [xbp-F0h]
  System_Nullable_Vector2__o methodb; // [xsp+0h] [xbp-F0h]
  System_String_o *klass; // [xsp+18h] [xbp-D8h]
  System_String_o *v239; // [xsp+20h] [xbp-D0h]
  int32_t version; // [xsp+2Ch] [xbp-C4h]
  CGThumbnailListItem_o *v241; // [xsp+30h] [xbp-C0h]
  CGThumbnailListItem_o *v242; // [xsp+38h] [xbp-B8h]
  AssetManager__InitCR_d__135_o *v243; // [xsp+40h] [xbp-B0h]
  CGThumbnailListItem_o *v244; // [xsp+40h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v245; // [xsp+48h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v246; // [xsp+60h] [xbp-90h] BYREF

  v4 = this;
  if ( (byte_4CB52C7 & 1) == 0 )
  {
    sub_1C6BA08(&AssetDataListInfo_TypeInfo);
    sub_1C6BA08(&AssetData_TypeInfo);
    sub_1C6BA08(&Method_AssetManager_OnClickRetryDialog__);
    sub_1C6BA08(&Method_AssetManager_OnClickWaitDebugDialog__);
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&CatAndMouseGame_TypeInfo);
    sub_1C6BA08(&char___TypeInfo);
    sub_1C6BA08(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C6BA08(&Crc32_TypeInfo);
    sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__AssetData__set_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssetData__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&ManagementManager_TypeInfo);
    sub_1C6BA08(&ManagerConfig_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C6BA08(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C6BA08(&StringLiteral_2386/*"AssetStorageList download time over"*/);
    sub_1C6BA08(&StringLiteral_2382/*"AssetStorageList download crc error"*/);
    sub_1C6BA08(&StringLiteral_2378/*"AssetStorage boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/);
    sub_1C6BA08(&StringLiteral_2036/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_2374/*"AssetStorage boot load crc error : チェックサム値が不一致"*/);
    sub_1C6BA08(&StringLiteral_15922/*"[FFFF80]Download error for debug"*/);
    sub_1C6BA08(&StringLiteral_2383/*"AssetStorageList download data error"*/);
    sub_1C6BA08(&StringLiteral_2385/*"AssetStorageList download error : "*/);
    sub_1C6BA08(&StringLiteral_2376/*"AssetStorage boot load error : アセットバンドルリスト作成失敗"*/);
    sub_1C6BA08(&StringLiteral_25370/*"~"*/);
    sub_1C6BA08(&StringLiteral_2377/*"AssetStorage boot load error : ファイル先頭の１行目の内容が空"*/);
    sub_1C6BA08(&StringLiteral_11480/*"SCRIPT"*/);
    sub_1C6BA08(&StringLiteral_1761/*"@"*/);
    sub_1C6BA08(&StringLiteral_2037/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/);
    this = (AssetManager__InitCR_d__135_o *)sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB52C7 = 1;
  }
  memset(&v246, 0, sizeof(v246));
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_281;
      v6 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v6 = AssetManager_TypeInfo;
      }
      if ( !System_IO_Directory__Exists(v6->static_fields->cachePathName, 0) )
      {
        v7 = AssetManager_TypeInfo;
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v7 = AssetManager_TypeInfo;
        }
        System_IO_Directory__CreateDirectory(v7->static_fields->cachePathName, 0);
      }
      this = (AssetManager__InitCR_d__135_o *)_4__this->fields.assetBundleDic;
      if ( !this )
        goto LABEL_281;
      if ( System_Collections_Generic_Dictionary_object__object___get_Count(
             (System_Collections_Generic_Dictionary_object__object__o *)this,
             (const MethodInfo_34BB60C *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) )
      {
        goto LABEL_120;
      }
      v8 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v8 = AssetManager_TypeInfo;
      }
      if ( !System_IO_File__Exists(v8->static_fields->cacheListFileName, 0) )
        goto LABEL_120;
      v9 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v9 = AssetManager_TypeInfo;
      }
      AllText = System_IO_File__ReadAllText(v9->static_fields->cacheListFileName, 0);
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      v11 = CatAndMouseGame__MouseGame8(AllText, 0);
      v17 = v11;
      if ( !v11 )
        goto LABEL_120;
      v18 = sub_1C6BAB0(char___TypeInfo, 1);
      if ( !v18 )
        sub_1C6BC60(0, 0);
      if ( !*(_DWORD *)(v18 + 24) )
        sub_1C6BC68(v18);
      *(_WORD *)(v18 + 32) = -257;
      v19 = System_String__Trim_64023356(v17, (System_Char_array *)v18, 0);
      v20 = sub_1C6BAB0(char___TypeInfo, 2);
      if ( !v20 )
        sub_1C6BC60(0, 0);
      v21 = *(_DWORD *)(v20 + 24);
      if ( !v21 )
        sub_1C6BC68(v20);
      *(_WORD *)(v20 + 32) = 13;
      if ( v21 == 1 )
        sub_1C6BC68(v20);
      *(_WORD *)(v20 + 34) = 10;
      if ( !v19 )
        sub_1C6BC60(v20, v20);
      v24 = System_String__IndexOfAny(v19, (System_Char_array *)v20, 0);
      if ( v24 < 2 )
      {
        v25 = &StringLiteral_2377/*"AssetStorage boot load error : ファイル先頭の１行目の内容が空"*/;
        goto LABEL_96;
      }
      v26 = System_String__Substring_64012732(v19, 0, v24, 0);
      v28 = v26;
      if ( !v26 )
        sub_1C6BC60(0, v27);
      if ( !System_String__StartsWith(v26, (System_String_o *)StringLiteral_25370/*"~"*/, 0) )
      {
        v25 = &StringLiteral_2378/*"AssetStorage boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
        goto LABEL_96;
      }
      v29 = System_String__Substring(v28, 1, 0);
      v30 = System_String__Substring(v19, v24 + 1, 0);
      UTF8 = System_Text_Encoding__get_UTF8(0);
      if ( !UTF8 )
        sub_1C6BC60(0, v32);
      v33 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
                                   UTF8,
                                   v30,
                                   UTF8->klass->vtable._18_GetBytes.method);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v34 = Crc32__Compute(v33, 0);
      if ( System_UInt32__Parse(v29, 0) != v34 )
      {
        v25 = &StringLiteral_2374/*"AssetStorage boot load crc error : チェックサム値が不一致"*/;
        goto LABEL_96;
      }
      v35 = sub_1C6BAB0(char___TypeInfo, 2);
      if ( !v35 )
        sub_1C6BC60(0, 0);
      v36 = *(_DWORD *)(v35 + 24);
      if ( !v36 )
        sub_1C6BC68(v35);
      *(_WORD *)(v35 + 32) = 13;
      if ( v36 == 1 )
        sub_1C6BC68(v35);
      *(_WORD *)(v35 + 34) = 10;
      if ( !v30 )
        sub_1C6BC60(v35, v35);
      this = (AssetManager__InitCR_d__135_o *)System_String__Split_64016000(v30, (System_Char_array *)v35, 1, 0);
      v37 = this;
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
                                                (System_String_o *)StringLiteral_1761/*"@"*/,
                                                0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
LABEL_95:
        v25 = &StringLiteral_2376/*"AssetStorage boot load error : アセットバンドルリスト作成失敗"*/;
LABEL_96:
        v73 = (System_String_o *)*v25;
        if ( *v25 )
        {
          v74 = AssetManager_TypeInfo;
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
            v74 = AssetManager_TypeInfo;
          }
          static_fields = v74->static_fields;
          v76 = StringLiteral_1/*""*/;
          static_fields->assetBundleMasterVersion = (struct System_String_o *)StringLiteral_1/*""*/;
          sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->assetBundleMasterVersion, v76, v22, v23);
          v77 = StringLiteral_1/*""*/;
          v78 = AssetManager_TypeInfo->static_fields;
          v78->assetBundleDateVersion = (struct System_String_o *)StringLiteral_1/*""*/;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v78->assetBundleDateVersion, v77, v79, v80);
          v81 = StringLiteral_1/*""*/;
          v82 = AssetManager_TypeInfo->static_fields;
          v82->assetBundleBuildVersion = (struct System_String_o *)StringLiteral_1/*""*/;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v82->assetBundleBuildVersion, v81, v83, v84);
          this = (AssetManager__InitCR_d__135_o *)_4__this->fields.assetBundleDic;
          if ( !this )
            goto LABEL_281;
          System_Collections_Generic_Dictionary_object__object___Clear(
            (System_Collections_Generic_Dictionary_object__object__o *)this,
            (const MethodInfo_34BBAC4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
          v85 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v85 = ManagerConfig_TypeInfo;
          }
          v86 = v85->static_fields;
          if ( v86->UseDebugCommand )
          {
            if ( !v85->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v85);
              v86 = ManagerConfig_TypeInfo->static_fields;
            }
            if ( System_String__op_Inequality(v86->ServerDefaultType, (System_String_o *)StringLiteral_11480/*"SCRIPT"*/, 0) )
            {
              _4__this->fields.isErrorDialog = 1;
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v88 = (ErrorDialog_ClickDelegate_o *)sub_1C6BC54(ErrorDialog_ClickDelegate_TypeInfo);
              ErrorDialog_ClickDelegate___ctor(
                v88,
                (Il2CppObject *)_4__this,
                Method_AssetManager_OnClickWaitDebugDialog__,
                0);
              if ( !Instance )
                goto LABEL_281;
              *(_QWORD *)&methoda.fields.hasValue = 0;
              methoda.fields.value.fields.y = 0.0;
              CommonUI__OpenWarningDialog(
                (CommonUI_o *)Instance,
                (System_String_o *)StringLiteral_15922/*"[FFFF80]Download error for debug"*/,
                v73,
                v88,
                1,
                0,
                -1.0,
                1,
                methoda,
                0);
LABEL_27:
              if ( _4__this->fields.isErrorDialog )
              {
                v12 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
                UnityEngine_WaitForEndOfFrame___ctor(v12, 0);
                v4->fields.__2__current = (Il2CppObject *)v12;
                p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
                sub_1C6B9AC(p__2__current, (int32_t)v12, v14, v15);
                result = 1;
                LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
                return result;
              }
            }
          }
        }
        goto LABEL_120;
      }
      if ( !LODWORD(v37->fields.__2__current) )
        goto LABEL_282;
      this = (AssetManager__InitCR_d__135_o *)v37->fields.__4__this;
      if ( !this )
        goto LABEL_281;
      this = (AssetManager__InitCR_d__135_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0);
      if ( !this )
        goto LABEL_281;
      v39 = this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_282;
      this = (AssetManager__InitCR_d__135_o *)this->fields.__4__this;
      if ( !this )
        goto LABEL_281;
      v40 = System_String__Substring((System_String_o *)this, 1, 0);
      v43 = AssetManager_TypeInfo;
      v44 = v40;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v43 = AssetManager_TypeInfo;
      }
      v45 = v43->static_fields;
      v45->assetBundleMasterVersion = v44;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v45->assetBundleMasterVersion, (int32_t)v44, v41, v42);
      v48 = AssetManager_TypeInfo;
      if ( SLODWORD(v39->fields.__2__current) <= 1 )
        p_configFileUrl_5__2 = &StringLiteral_1/*""*/;
      else
        p_configFileUrl_5__2 = (__int64 *)&v39->fields._configFileUrl_5__2;
      v50 = *p_configFileUrl_5__2;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v48 = AssetManager_TypeInfo;
      }
      v51 = v48->static_fields;
      v51->assetBundleDateVersion = (struct System_String_o *)v50;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v51->assetBundleDateVersion, v50, v46, v47);
      v54 = AssetManager_TypeInfo;
      if ( SLODWORD(v39->fields.__2__current) <= 2 )
        p_loader_5__3 = &StringLiteral_1/*""*/;
      else
        p_loader_5__3 = (__int64 *)&v39->fields._loader_5__3;
      v56 = *p_loader_5__3;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v54 = AssetManager_TypeInfo;
      }
      v57 = v54->static_fields;
      v57->assetBundleBuildVersion = (struct System_String_o *)v56;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v57->assetBundleBuildVersion, v56, v52, v53);
      v58 = (int)v37->fields.__2__current;
      if ( v58 >= 2 )
      {
        v59 = 5;
        v243 = v37;
        while ( (int)v59 - 4 < (unsigned int)v58 )
        {
          this = (AssetManager__InitCR_d__135_o *)*((_QWORD *)&v37->klass + v59);
          if ( !this )
            goto LABEL_281;
          this = (AssetManager__InitCR_d__135_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0);
          if ( !this )
            goto LABEL_281;
          v60 = this;
          if ( SLODWORD(this->fields.__2__current) < 5 )
            goto LABEL_120;
          this = (AssetManager__InitCR_d__135_o *)this->fields.__4__this;
          if ( !this )
            goto LABEL_281;
          v61 = System_String__Trim((System_String_o *)this, 0);
          this = (AssetManager__InitCR_d__135_o *)System_Int32__Parse(v61, 0);
          if ( LODWORD(v60->fields.__2__current) <= 2 )
            goto LABEL_282;
          v62 = (int)this;
          this = (AssetManager__InitCR_d__135_o *)v60->fields._loader_5__3;
          if ( !this )
            goto LABEL_281;
          configFileUrl_5__2 = v60->fields._configFileUrl_5__2;
          v64 = System_String__Trim((System_String_o *)this, 0);
          this = (AssetManager__InitCR_d__135_o *)System_Int32__Parse(v64, 0);
          if ( LODWORD(v60->fields.__2__current) <= 3 )
            goto LABEL_282;
          v65 = (int)this;
          this = *(AssetManager__InitCR_d__135_o **)&v60->fields._requestTime_5__4;
          if ( !this )
            goto LABEL_281;
          v66 = System_String__Trim((System_String_o *)this, 0);
          this = (AssetManager__InitCR_d__135_o *)System_UInt32__Parse(v66, 0);
          v67 = (int)v60->fields.__2__current;
          if ( (unsigned int)v67 <= 4 )
            goto LABEL_282;
          v68 = (unsigned int)this;
          v69 = v67 >= 6 ? (System_String_o *)v60[1].klass : 0LL;
          wait_5__6 = (System_String_o *)v60->fields._wait_5__6;
          assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.assetBundleDic;
          v72 = (AssetData_o *)sub_1C6BC54(AssetData_TypeInfo);
          AssetData___ctor_40736748(v72, 0, wait_5__6, v62, configFileUrl_5__2, v65, v68, v69, 0);
          if ( !assetBundleDic )
            goto LABEL_281;
          System_Collections_Generic_Dictionary_object__object___set_Item(
            assetBundleDic,
            (Il2CppObject *)wait_5__6,
            (Il2CppObject *)v72,
            (const MethodInfo_34BB928 *)Method_System_Collections_Generic_Dictionary_string__AssetData__set_Item__);
          v37 = v243;
          ++v59;
          v58 = (int)v243->fields.__2__current;
          if ( (int)v59 - 4 >= v58 )
            goto LABEL_120;
        }
        goto LABEL_282;
      }
LABEL_120:
      v89 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      ConfigFileAddress = AssetManager__get_ConfigFileAddress((const MethodInfo *)v89);
      v4->fields._configFileUrl_5__2 = ConfigFileAddress;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields._configFileUrl_5__2, (int32_t)ConfigFileAddress, v91, v92);
      v4->fields._loader_5__3 = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields._loader_5__3, 0, v93, v94);
LABEL_123:
      v95 = v4->fields._configFileUrl_5__2;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      UrlString = AssetManager__getUrlString(v95, method);
      v97 = UnityEngine_Networking_UnityWebRequest__Get(UrlString, 0);
      v4->fields._loader_5__3 = v97;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields._loader_5__3, (int32_t)v97, v98, v99);
      this = (AssetManager__InitCR_d__135_o *)v4->fields._loader_5__3;
      if ( !this )
        goto LABEL_281;
      UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
      unscaledTime = UnityEngine_Time__get_unscaledTime(0);
      v101 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v101 = ManagerConfig_TypeInfo;
      }
      TIMEOUT = v101->static_fields->TIMEOUT;
      v4->fields._loadProgress_5__5 = 0.0;
      v4->fields._requestTime_5__4 = unscaledTime + TIMEOUT;
      v103 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v103, 0);
      v4->fields._wait_5__6 = v103;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields._wait_5__6, (int32_t)v103, v104, v105);
LABEL_129:
      v106 = (AssetManager__InitCR_d__135_o **)&v4->fields._loader_5__3;
      this = (AssetManager__InitCR_d__135_o *)v4->fields._loader_5__3;
      if ( !this )
        goto LABEL_281;
      this = (AssetManager__InitCR_d__135_o *)UnityEngine_Networking_UnityWebRequest__get_isDone(
                                                (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                0);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_136;
      this = *v106;
      if ( !*v106 )
        goto LABEL_281;
      downloadProgress = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                           (UnityEngine_Networking_UnityWebRequest_o *)this,
                           0);
      loadProgress_5__5 = v4->fields._loadProgress_5__5;
      v109 = downloadProgress;
      v112 = UnityEngine_Time__get_unscaledTime(0);
      v113 = v109 == loadProgress_5__5;
      v114 = v112;
      if ( !v113 )
      {
        v123 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v123 = ManagerConfig_TypeInfo;
        }
        v124 = v123->static_fields;
        this = (AssetManager__InitCR_d__135_o *)v4->fields._loader_5__3;
        v4->fields._requestTime_5__4 = v114 + v124->TIMEOUT;
        if ( this )
        {
          v4->fields._loadProgress_5__5 = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                                            (UnityEngine_Networking_UnityWebRequest_o *)this,
                                            0);
          goto LABEL_153;
        }
LABEL_281:
        sub_1C6BC60(this, method);
      }
      if ( v112 >= v4->fields._requestTime_5__4 )
      {
LABEL_136:
        if ( !_4__this )
          goto LABEL_281;
        this = *v106;
        if ( !*v106 )
          goto LABEL_281;
        if ( !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0) )
        {
          v122 = (Il2CppObject *)StringLiteral_2386/*"AssetStorageList download time over"*/;
          goto LABEL_249;
        }
        this = *v106;
        if ( !*v106 )
          goto LABEL_281;
        error = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
        this = (AssetManager__InitCR_d__135_o *)System_String__IsNullOrEmpty(error, 0);
        if ( !*v106 )
          goto LABEL_281;
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v121 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)*v106, 0);
LABEL_155:
          v122 = (Il2CppObject *)v121;
          goto LABEL_249;
        }
        this = (AssetManager__InitCR_d__135_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                  (UnityEngine_Networking_UnityWebRequest_o *)*v106,
                                                  0);
        if ( !this )
          goto LABEL_281;
        text = UnityEngine_Networking_DownloadHandler__get_text((UnityEngine_Networking_DownloadHandler_o *)this, 0);
        if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
        v117 = CatAndMouseGame__MouseGame3(text, 0);
        if ( System_String__IsNullOrEmpty(v117, 0) )
        {
          v119 = v4->fields._configFileUrl_5__2;
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v120 = AssetManager__getUrlString(v119, v118);
          v121 = System_String__Concat_63966792((System_String_o *)StringLiteral_2385/*"AssetStorageList download error : "*/, v120, 0);
          goto LABEL_155;
        }
        this = (AssetManager__InitCR_d__135_o *)sub_1C6BAB0(char___TypeInfo, 1);
        if ( !this )
          goto LABEL_281;
        method = (const MethodInfo *)this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_282;
        LOWORD(this->fields.__4__this) = -257;
        if ( !v117 )
          goto LABEL_281;
        this = (AssetManager__InitCR_d__135_o *)System_String__Trim_64023356(v117, (System_Char_array *)this, 0);
        if ( !this )
          goto LABEL_281;
        v128 = this;
        if ( System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_25370/*"~"*/, 0) )
        {
          this = (AssetManager__InitCR_d__135_o *)sub_1C6BAB0(char___TypeInfo, 2);
          if ( !this )
            goto LABEL_281;
          v129 = (int)this->fields.__2__current;
          if ( !v129 )
            goto LABEL_282;
          LOWORD(this->fields.__4__this) = 13;
          if ( v129 == 1 )
            goto LABEL_282;
          WORD1(this->fields.__4__this) = 10;
          v130 = System_String__IndexOfAny((System_String_o *)v128, (System_Char_array *)this, 0);
          if ( v130 >= 2 )
          {
            v131 = v130;
            v132 = System_String__Substring_64012732((System_String_o *)v128, 1, v130 - 1, 0);
            v133 = System_String__Substring((System_String_o *)v128, v131 + 1, 0);
            this = (AssetManager__InitCR_d__135_o *)System_Text_Encoding__get_UTF8(0);
            if ( !this )
              goto LABEL_281;
            v134 = (System_Byte_array *)((__int64 (__fastcall *)(AssetManager__InitCR_d__135_o *, System_String_o *, void *))this->klass[1]._1.properties)(
                                          this,
                                          v133,
                                          this->klass[1]._1.methods);
            if ( !Crc32_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
            v135 = Crc32__Compute(v134, 0);
            if ( System_UInt32__Parse(v132, 0) == v135 )
            {
              if ( *v106 )
              {
                UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)*v106, 0);
                *v106 = 0;
                sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields._loader_5__3, 0, v138, v139);
              }
              if ( !v133 )
                goto LABEL_280;
              this = (AssetManager__InitCR_d__135_o *)sub_1C6BAB0(char___TypeInfo, 2);
              if ( !this )
                goto LABEL_281;
              v140 = (int)this->fields.__2__current;
              if ( v140 )
              {
                LOWORD(this->fields.__4__this) = 13;
                if ( v140 != 1 )
                {
                  WORD1(this->fields.__4__this) = 10;
                  v141 = System_String__Split_64016000(v133, (System_Char_array *)this, 1, 0);
                  v142 = sub_1C6BC54(AssetDataListInfo_TypeInfo);
                  AssetDataListInfo___ctor((AssetDataListInfo_o *)v142, v143);
                  if ( !v141 )
                    goto LABEL_281;
                  max_length = v141->max_length;
                  v241 = (CGThumbnailListItem_o *)(v142 + 16);
                  v242 = (CGThumbnailListItem_o *)(v142 + 24);
                  v244 = (CGThumbnailListItem_o *)(v142 + 32);
                  if ( max_length >= 1 )
                  {
                    v147 = 0;
                    while ( v147 < max_length )
                    {
                      this = (AssetManager__InitCR_d__135_o *)v141->m_Items[v147];
                      if ( !this )
                        goto LABEL_281;
                      this = (AssetManager__InitCR_d__135_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0);
                      if ( !this )
                        goto LABEL_281;
                      v148 = this;
                      if ( SLODWORD(this->fields.__2__current) < 1 )
                        goto LABEL_231;
                      this = (AssetManager__InitCR_d__135_o *)this->fields.__4__this;
                      if ( !this )
                        goto LABEL_281;
                      this = (AssetManager__InitCR_d__135_o *)System_String__StartsWith(
                                                                (System_String_o *)this,
                                                                (System_String_o *)StringLiteral_1761/*"@"*/,
                                                                0);
                      if ( !LODWORD(v148->fields.__2__current) )
                        goto LABEL_282;
                      v149 = (char)this;
                      this = (AssetManager__InitCR_d__135_o *)v148->fields.__4__this;
                      if ( !this )
                        goto LABEL_281;
                      if ( (v149 & 1) != 0 )
                      {
                        v150 = System_String__Substring((System_String_o *)this, 1, 0);
                        v151 = (int)v148->fields.__2__current;
                        v152 = (__int64 *)&v148->fields._loader_5__3;
                        v153 = AssetManager_TypeInfo;
                        v154 = v150;
                        if ( v151 == 2 )
                          v152 = &StringLiteral_1/*""*/;
                        v155 = v151 <= 1;
                        if ( v151 <= 1 )
                          v156 = &StringLiteral_1/*""*/;
                        else
                          v156 = (__int64 *)&v148->fields._configFileUrl_5__2;
                        if ( v155 )
                          v157 = &StringLiteral_1/*""*/;
                        else
                          v157 = v152;
                        v158 = (CGThumbnailListItem_c *)*v156;
                        v159 = (CGThumbnailListItem_c *)*v157;
                        if ( !AssetManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                          v153 = AssetManager_TypeInfo;
                        }
                        this = (AssetManager__InitCR_d__135_o *)System_String__op_Inequality(
                                                                  v154,
                                                                  v153->static_fields->assetBundleMasterVersion,
                                                                  0);
                        if ( ((unsigned __int8)this & 1) != 0 )
                        {
                          this = (AssetManager__InitCR_d__135_o *)_4__this->fields.assetBundleDic;
                          if ( !this )
                            goto LABEL_281;
                          System_Collections_Generic_Dictionary_object__object___Clear(
                            (System_Collections_Generic_Dictionary_object__object__o *)this,
                            (const MethodInfo_34BBAC4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
                        }
                        if ( !v142 )
                          goto LABEL_281;
                        v241->klass = (CGThumbnailListItem_c *)v154;
                        sub_1C6B9AC(v241, (int32_t)v154, v160, v161);
                        v242->klass = v158;
                        sub_1C6B9AC(v242, (int32_t)v158, v162, v163);
                        v244->klass = v159;
                        sub_1C6B9AC(v244, (int32_t)v159, v164, v165);
                      }
                      else
                      {
                        this = (AssetManager__InitCR_d__135_o *)System_String__StartsWith(
                                                                  (System_String_o *)this,
                                                                  (System_String_o *)StringLiteral_25370/*"~"*/,
                                                                  0);
                        if ( ((unsigned __int8)this & 1) == 0 )
                        {
                          if ( !LODWORD(v148->fields.__2__current) )
                            goto LABEL_282;
                          this = (AssetManager__InitCR_d__135_o *)v148->fields.__4__this;
                          if ( !this )
                            goto LABEL_281;
                          this = (AssetManager__InitCR_d__135_o *)System_String__IndexOf(
                                                                    (System_String_o *)this,
                                                                    0x7Eu,
                                                                    0);
                          if ( (_DWORD)this != 1 )
                          {
                            if ( SLODWORD(v148->fields.__2__current) < 5 )
                              goto LABEL_231;
                            this = (AssetManager__InitCR_d__135_o *)v148->fields.__4__this;
                            if ( !this )
                              goto LABEL_281;
                            v166 = System_String__Trim((System_String_o *)this, 0);
                            this = (AssetManager__InitCR_d__135_o *)System_Int32__Parse(v166, 0);
                            version = (int)this;
                            if ( LODWORD(v148->fields.__2__current) <= 2 )
                              goto LABEL_282;
                            this = (AssetManager__InitCR_d__135_o *)v148->fields._loader_5__3;
                            if ( !this )
                              goto LABEL_281;
                            v239 = v148->fields._configFileUrl_5__2;
                            v167 = System_String__Trim((System_String_o *)this, 0);
                            this = (AssetManager__InitCR_d__135_o *)System_Int32__Parse(v167, 0);
                            if ( LODWORD(v148->fields.__2__current) <= 3 )
                              goto LABEL_282;
                            v168 = (int)this;
                            this = *(AssetManager__InitCR_d__135_o **)&v148->fields._requestTime_5__4;
                            if ( !this )
                              goto LABEL_281;
                            v169 = System_String__Trim((System_String_o *)this, 0);
                            this = (AssetManager__InitCR_d__135_o *)System_UInt32__Parse(v169, 0);
                            v171 = (int)v148->fields.__2__current;
                            if ( (unsigned int)v171 <= 4 )
                              goto LABEL_282;
                            v172 = (unsigned int)this;
                            if ( v171 >= 6 )
                              klass = (System_String_o *)v148[1].klass;
                            else
                              klass = 0;
                            v173 = (System_String_o *)v148->fields._wait_5__6;
                            AssetData = AssetManager__GetAssetData(
                                          (AssetManager_o *)this,
                                          _4__this->fields.assetBundleDic,
                                          v173,
                                          v170);
                            if ( AssetData )
                            {
                              v175 = (Il2CppObject *)AssetData;
                              this = (AssetManager__InitCR_d__135_o *)AssetData__SetUpdateInfo(
                                                                        AssetData,
                                                                        version,
                                                                        v239,
                                                                        v168,
                                                                        v172,
                                                                        klass,
                                                                        0);
                              if ( !v142 )
                                goto LABEL_281;
                              this = *(AssetManager__InitCR_d__135_o **)(v142 + 40);
                              if ( !this )
                                goto LABEL_281;
                              v178 = *(_QWORD *)&this->fields.__1__state;
                              v179 = Method_System_Collections_Generic_List_AssetData__Add__;
                              ++HIDWORD(this->fields.__2__current);
                              if ( !v178 )
                                goto LABEL_281;
                              _2__current_low = SLODWORD(this->fields.__2__current);
                              if ( (unsigned int)_2__current_low >= *(_DWORD *)(v178 + 24) )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  (System_Collections_Generic_List_object__o *)this,
                                  v175,
                                  *(const MethodInfo_3800974 **)(*(_QWORD *)(v179[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v181 = v178 + 8 * _2__current_low;
                                LODWORD(this->fields.__2__current) = _2__current_low + 1;
                                *(_QWORD *)(v181 + 32) = v175;
                                sub_1C6B9AC((CGThumbnailListItem_o *)(v181 + 32), (int32_t)v175, v176, v177);
                              }
                              v173 = 0;
                            }
                            this = (AssetManager__InitCR_d__135_o *)System_String__IsNullOrEmpty(v173, 0);
                            if ( ((unsigned __int8)this & 1) == 0 )
                            {
                              if ( !v142 )
                                goto LABEL_281;
                              v182 = *(System_Collections_Generic_List_object__o **)(v142 + 40);
                              v183 = (AssetData_o *)sub_1C6BC54(AssetData_TypeInfo);
                              AssetData___ctor_40736888(v183, 0, v173, 0, version, v239, v168, v172, klass, 0);
                              if ( !v182 )
                                goto LABEL_281;
                              items = v182->fields._items;
                              v187 = Method_System_Collections_Generic_List_AssetData__Add__;
                              ++v182->fields._version;
                              if ( !items )
                                goto LABEL_281;
                              size = v182->fields._size;
                              if ( (unsigned int)size >= LODWORD(items->max_length) )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  v182,
                                  (Il2CppObject *)v183,
                                  *(const MethodInfo_3800974 **)(*(_QWORD *)(v187[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v189 = &items->obj.klass + size;
                                v182->fields._size = size + 1;
                                v189[4] = (Il2CppClass *)v183;
                                sub_1C6B9AC((CGThumbnailListItem_o *)(v189 + 4), (int32_t)v183, v184, v185);
                              }
                            }
                          }
                        }
                      }
                      max_length = v141->max_length;
                      if ( (int)++v147 >= max_length )
                        goto LABEL_231;
                    }
                    goto LABEL_282;
                  }
LABEL_231:
                  if ( !v142 )
                    goto LABEL_281;
                  v190 = AssetManager_TypeInfo;
                  v191 = v241->klass;
                  if ( !AssetManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                    v190 = AssetManager_TypeInfo;
                  }
                  v192 = v190->static_fields;
                  v192->assetBundleMasterVersion = (struct System_String_o *)v191;
                  sub_1C6B9AC((CGThumbnailListItem_o *)&v192->assetBundleMasterVersion, (int32_t)v191, v144, v145);
                  v193 = AssetManager_TypeInfo->static_fields;
                  v194 = v242->klass;
                  v193->assetBundleDateVersion = (struct System_String_o *)v242->klass;
                  sub_1C6B9AC((CGThumbnailListItem_o *)&v193->assetBundleDateVersion, (int32_t)v194, v195, v196);
                  v197 = AssetManager_TypeInfo->static_fields;
                  v198 = v244->klass;
                  v197->assetBundleBuildVersion = (struct System_String_o *)v244->klass;
                  sub_1C6B9AC((CGThumbnailListItem_o *)&v197->assetBundleBuildVersion, (int32_t)v198, v199, v200);
                  this = (AssetManager__InitCR_d__135_o *)_4__this->fields.assetBundleDic;
                  if ( !this )
                    goto LABEL_281;
                  System_Collections_Generic_Dictionary_object__object___Clear(
                    (System_Collections_Generic_Dictionary_object__object__o *)this,
                    (const MethodInfo_34BBAC4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
                  this = *(AssetManager__InitCR_d__135_o **)(v142 + 40);
                  if ( !this )
                    goto LABEL_281;
                  System_Collections_Generic_List_object___GetEnumerator(
                    (System_Collections_Generic_List_Enumerator_T__o *)&v245,
                    (System_Collections_Generic_List_object__o *)this,
                    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
                  v246 = v245;
                  while ( 1 )
                  {
                    v201 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                             &v246,
                             (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
                    if ( !v201 )
                      break;
                    current = v246.fields._current;
                    if ( !v246.fields._current )
                      sub_1C6BC60(v201, v202);
                    v204 = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.assetBundleDic;
                    if ( !v204 )
                      sub_1C6BC60(0, v202);
                    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                            v204,
                            (Il2CppObject *)v246.fields._current[1].monitor,
                            (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__) )
                    {
                      v206 = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.assetBundleDic;
                      if ( !v206 )
                        sub_1C6BC60(0, v205);
                      System_Collections_Generic_Dictionary_object__object___Add(
                        v206,
                        (Il2CppObject *)current[1].monitor,
                        current,
                        (const MethodInfo_34BB93C *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
                    }
                  }
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v246,
                    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
                  AssetManager__ConfigWriteRequest(_4__this, 1, v230);
LABEL_280:
                  v4->fields._configFileUrl_5__2 = 0;
                  sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields._configFileUrl_5__2, 0, v136, v137);
                  v4->fields._loader_5__3 = 0;
                  sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields._loader_5__3, 0, v231, v232);
                  v233 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
                  UnityEngine_WaitForEndOfFrame___ctor(v233, 0);
                  v4->fields.__2__current = (Il2CppObject *)v233;
                  v126 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
                  sub_1C6B9AC(v126, (int32_t)v233, v234, v235);
                  v127 = 6;
                  goto LABEL_278;
                }
              }
LABEL_282:
              sub_1C6BC68(this);
            }
            v207 = (Il2CppObject *)StringLiteral_2382/*"AssetStorageList download crc error"*/;
            if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
            UnityEngine_Debug__LogError(v207, 0);
          }
        }
        v122 = (Il2CppObject *)StringLiteral_2383/*"AssetStorageList download data error"*/;
        if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
        UnityEngine_Debug__LogError(v122, 0);
LABEL_249:
        if ( *v106 )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)*v106, 0);
          *v106 = 0;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields._loader_5__3, 0, v208, v209);
        }
        if ( !v122 )
          goto LABEL_277;
        v210 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v210 = ManagerConfig_TypeInfo;
        }
        v211 = v210->static_fields;
        if ( v211->UseDebugCommand )
        {
          if ( !v210->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v210);
            v211 = ManagerConfig_TypeInfo->static_fields;
          }
          if ( System_String__op_Inequality(v211->ServerDefaultType, (System_String_o *)StringLiteral_11480/*"SCRIPT"*/, 0) )
          {
            _4__this->fields.isErrorDialog = 1;
            v212 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v213 = (ErrorDialog_ClickDelegate_o *)sub_1C6BC54(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(
              v213,
              (Il2CppObject *)_4__this,
              Method_AssetManager_OnClickWaitDebugDialog__,
              0);
            if ( !v212 )
              goto LABEL_281;
            *(_QWORD *)&methodb.fields.hasValue = 0;
            methodb.fields.value.fields.y = 0.0;
            CommonUI__OpenWarningDialog(
              (CommonUI_o *)v212,
              (System_String_o *)StringLiteral_15922/*"[FFFF80]Download error for debug"*/,
              (System_String_o *)v122,
              v213,
              1,
              0,
              -1.0,
              1,
              methodb,
              0);
LABEL_260:
            if ( _4__this->fields.isErrorDialog )
            {
              v214 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v214, 0);
              v4->fields.__2__current = (Il2CppObject *)v214;
              v126 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1C6B9AC(v126, (int32_t)v214, v215, v216);
              v127 = 3;
              goto LABEL_278;
            }
          }
        }
        _4__this->fields.isErrorDialog = 1;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        if ( !byte_4CB5247 )
        {
          sub_1C6BA08(&ManagementManager_TypeInfo);
          byte_4CB5247 = 1;
        }
        v217 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v217 = ManagementManager_TypeInfo;
        }
        isDuringStartup = v217->static_fields->isDuringStartup;
        v219 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          if ( isDuringStartup )
          {
LABEL_270:
            v220 = LocalizationManager__Get((System_String_o *)StringLiteral_2036/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0);
            v221 = (ErrorDialog_ClickDelegate_o *)sub_1C6BC54(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(
              v221,
              (Il2CppObject *)_4__this,
              Method_AssetManager_OnClickRetryDialog__,
              0);
            if ( !v219 )
              goto LABEL_281;
            CommonUI__OpenRetryBootDialog((CommonUI_o *)v219, (System_String_o *)StringLiteral_1/*""*/, v220, v221, 0, 0);
LABEL_275:
            if ( _4__this->fields.isErrorDialog )
            {
              v224 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v224, 0);
              v4->fields.__2__current = (Il2CppObject *)v224;
              v126 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1C6B9AC(v126, (int32_t)v224, v225, v226);
              v127 = 4;
              goto LABEL_278;
            }
LABEL_277:
            v227 = (UnityEngine_WaitForSeconds_o *)sub_1C6BC54(UnityEngine_WaitForSeconds_TypeInfo);
            UnityEngine_WaitForSeconds___ctor(v227, 1.0, 0);
            v4->fields.__2__current = (Il2CppObject *)v227;
            v126 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1C6B9AC(v126, (int32_t)v227, v228, v229);
            v127 = 5;
            goto LABEL_278;
          }
        }
        else
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          if ( isDuringStartup )
            goto LABEL_270;
        }
        v222 = LocalizationManager__Get((System_String_o *)StringLiteral_2037/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0);
        v223 = (ErrorDialog_ClickDelegate_o *)sub_1C6BC54(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v223, (Il2CppObject *)_4__this, Method_AssetManager_OnClickRetryDialog__, 0);
        if ( !v219 )
          goto LABEL_281;
        CommonUI__OpenRetryDialog((CommonUI_o *)v219, (System_String_o *)StringLiteral_1/*""*/, v222, v223, 0, 0);
        goto LABEL_275;
      }
LABEL_153:
      v125 = (Il2CppObject *)v4->fields._wait_5__6;
      v4->fields.__2__current = v125;
      v126 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C6B9AC(v126, (int32_t)v125, v110, v111);
      v127 = 2;
LABEL_278:
      LODWORD(v126[-1].fields._ThumbnailSpritePath_k__BackingField) = v127;
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
      v4->fields._wait_5__6 = 0;
      v4->fields.__1__state = -1;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields._wait_5__6, 0, v2, v3);
      if ( !_4__this )
        goto LABEL_281;
      goto LABEL_123;
    case 6:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_281;
      _4__this->fields.initCRW = 0;
      _4__this->fields.isCancelDownload = 0;
      _4__this->fields.isInitEnd = 1;
      sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.initCRW, 0, v2, v3);
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

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_AssetManager__InitCR_d__135_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
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
  if ( (byte_4CB52C8 & 1) == 0 )
  {
    this = (AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_o *)sub_1C6BA08(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4CB52C8 = 1;
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
    v7 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v7, 0);
    v4->fields._wait_5__2 = v7;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields._wait_5__2, (int32_t)v7, v8, v9);
  }
  if ( !_4__this )
    sub_1C6BC60(this, method);
  if ( _4__this->fields.inProgressUnloadUnusedAssets || _4__this->fields.requestUnloadUnusedAssets )
  {
    wait_5__2 = (Il2CppObject *)v4->fields._wait_5__2;
    v4->fields.__2__current = wait_5__2;
    p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
    sub_1C6B9AC(p__2__current, (int32_t)wait_5__2, v2, v3);
    result = 1;
    LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
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

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
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
  const MethodInfo *v3; // x3

  if ( (byte_4CB52C0 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager___c_TypeInfo);
    byte_4CB52C0 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(AssetManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AssetManager___c_TypeInfo->static_fields->__9 = (struct AssetManager___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)AssetManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C6BC60(this, 0);
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

  if ( (byte_4CB52C1 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Application_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C6BA08(&StringLiteral_12313/*"START_BOOT_ASSET_DOWNLOAD"*/);
    byte_4CB52C1 = 1;
  }
  if ( isDecide )
  {
    this->fields.isDataUpdate = 1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !Instance )
      sub_1C6BC60(0, v6);
    CrashReporter__SetNowState((CrashReporter_o *)Instance, (System_String_o *)StringLiteral_12313/*"START_BOOT_ASSET_DOWNLOAD"*/, 0);
  }
  else
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    UnityEngine_Application__Quit_71452840(0);
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

  if ( (byte_4CB52C2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetManager_OnEndLoadAssetStorage__);
    sub_1C6BA08(&AssetLoader_LoadEndHandler_TypeInfo);
    byte_4CB52C2 = 1;
  }
  loader = this->fields.loader;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v5 = (AssetLoader_LoadEndHandler_o *)sub_1C6BC54(AssetLoader_LoadEndHandler_TypeInfo);
  AssetLoader_LoadEndHandler___ctor(v5, _4__this, Method_AssetManager_OnEndLoadAssetStorage__, v6);
  waiter = this->fields.waiter;
  if ( !waiter || !loader )
    sub_1C6BC60(v7, v8);
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
  if ( (byte_4CB52C3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Remove__);
    this = (AssetManager___c__DisplayClass173_0_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_4CB52C3 = 1;
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
                                                    (const MethodInfo_3801E9C *)Method_System_Collections_Generic_List_string__Remove__);
  if ( v4->fields.calledCallbackFunc )
    return;
  remainNameList = v4->fields.remainNameList;
  if ( !remainNameList )
LABEL_12:
    sub_1C6BC60(this, data);
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
    sub_1C6BC60(this, method);
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
        sub_1C6BC68(this);
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
    sub_1C6BC60(this, method);
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
  const MethodInfo *v7; // x3
  AssetManager_c *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *wait_5__2; // x1
  CGThumbnailListItem_o *v12; // x19
  bool v13; // w21
  UnityEngine_AsyncOperation_o *v14; // x0
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct AssetManager_ResourceUnloadEventHandler_o *v18; // x8
  CGThumbnailListItem_o *p_unloadCallbacks; // x20
  struct AssetManager_ResourceUnloadEventHandler_o *unloadCallbacks; // t1
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  v2 = this;
  if ( (byte_4CB52C9 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    this = (AssetManager__coUnloadUnusedAssets_d__142_o *)sub_1C6BA08(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4CB52C9 = 1;
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
    v18 = unloadCallbacks;
    *(_WORD *)((char *)&p_unloadCallbacks[-1].fields._Id_k__BackingField + 3) = 0;
    if ( unloadCallbacks )
    {
      ((void (__fastcall *)(intptr_t, intptr_t))v18->fields.invoke_impl)(v18->fields.method_code, v18->fields.method);
      p_unloadCallbacks->klass = 0;
      sub_1C6B9AC(p_unloadCallbacks, 0, v21, v22);
    }
    return 0;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v2->fields.__1__state = -1;
      v5 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v5, 0);
      v2->fields._wait_5__2 = v5;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v2->fields._wait_5__2, (int32_t)v5, v6, v7);
      goto LABEL_8;
    }
    return 0;
  }
  v2->fields.__1__state = -1;
LABEL_8:
  v8 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  this = (AssetManager__coUnloadUnusedAssets_d__142_o *)AssetManager__LoadIsBusy((const MethodInfo *)v8);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( _4__this )
    {
      v13 = 1;
      _4__this->fields.inProgressUnloadUnusedAssets = 1;
      v14 = UnityEngine_Resources__UnloadUnusedAssets(0);
      v2->fields.__2__current = (Il2CppObject *)v14;
      p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1C6B9AC(p__2__current, (int32_t)v14, v16, v17);
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
      return v13;
    }
LABEL_19:
    sub_1C6BC60(this, method);
  }
  wait_5__2 = (Il2CppObject *)v2->fields._wait_5__2;
  v2->fields.__2__current = wait_5__2;
  v12 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1C6B9AC(v12, (int32_t)wait_5__2, v9, v10);
  v13 = 1;
  LODWORD(v12[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return v13;
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

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_AssetManager__coUnloadUnusedAssets_d__142_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
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