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

  if ( (byte_4B0105D & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, v1);
    sub_1BC3008(&StringLiteral_2358/*"Asset"*/, v4);
    sub_1BC3008(&StringLiteral_2371/*"AssetStorageBack.txt"*/, v5);
    sub_1BC3008(&StringLiteral_22148/*"offline"*/, v6);
    sub_1BC3008(&StringLiteral_2370/*"AssetStorage.txt"*/, v7);
    sub_1BC3008(&StringLiteral_2372/*"AssetStorageCreate.txt"*/, v8);
    sub_1BC3008(&StringLiteral_1/*""*/, v9);
    sub_1BC3008(&StringLiteral_22215/*"online"*/, v10);
    byte_4B0105D = 1;
  }
  AssetManager_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_2358/*"Asset"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)AssetManager_TypeInfo->static_fields, StringLiteral_2358/*"Asset"*/, v2, v3);
  v11 = StringLiteral_22148/*"offline"*/;
  static_fields = AssetManager_TypeInfo->static_fields;
  static_fields->SAVE_DATA_OFFLINE = (struct System_String_o *)StringLiteral_22148/*"offline"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->SAVE_DATA_OFFLINE, v11, v13, v14);
  v15 = StringLiteral_22215/*"online"*/;
  v16 = AssetManager_TypeInfo->static_fields;
  v16->SAVE_DATA_ONLINE = (struct System_String_o *)StringLiteral_22215/*"online"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v16->SAVE_DATA_ONLINE, v15, v17, v18);
  v19 = StringLiteral_2370/*"AssetStorage.txt"*/;
  v20 = AssetManager_TypeInfo->static_fields;
  v20->configFileName = (struct System_String_o *)StringLiteral_2370/*"AssetStorage.txt"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v20->configFileName, v19, v21, v22);
  v23 = StringLiteral_2372/*"AssetStorageCreate.txt"*/;
  v24 = AssetManager_TypeInfo->static_fields;
  v24->createConfigFileName = (struct System_String_o *)StringLiteral_2372/*"AssetStorageCreate.txt"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v24->createConfigFileName, v23, v25, v26);
  v27 = StringLiteral_2371/*"AssetStorageBack.txt"*/;
  v28 = AssetManager_TypeInfo->static_fields;
  v28->backConfigFileName = (struct System_String_o *)StringLiteral_2371/*"AssetStorageBack.txt"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v28->backConfigFileName, v27, v29, v30);
  v31 = (int)StringLiteral_1/*""*/;
  v32 = AssetManager_TypeInfo->static_fields;
  v32->assetBundleMasterVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v32->assetBundleMasterVersion, v31, v33, v34);
  v35 = (int)StringLiteral_1/*""*/;
  v36 = AssetManager_TypeInfo->static_fields;
  v36->assetBundleDateVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v36->assetBundleDateVersion, v35, v37, v38);
  v39 = (int)StringLiteral_1/*""*/;
  v40 = AssetManager_TypeInfo->static_fields;
  v40->assetBundleBuildVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v40->assetBundleBuildVersion, v39, v41, v42);
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

  if ( (byte_4B0105C & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__, method);
    sub_1BC3008(&System_Collections_Generic_Dictionary_string__AssetData__TypeInfo, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_AssetLoader___ctor__, v4);
    sub_1BC3008(&System_Collections_Generic_List_AssetLoader__TypeInfo, v5);
    sub_1BC3008(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__, v6);
    sub_1BC3008(&System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager___ctor__, v8);
    sub_1BC3008(&StringLiteral_1/*""*/, v9);
    byte_4B0105C = 1;
  }
  *(_WORD *)&this->fields._DispLog = 257;
  this->fields.isInitEnd = 1;
  v10 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v10,
    (const MethodInfo_336C638 *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.assetBundleDic = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)v10;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.assetBundleDic, (int32_t)v10, v11, v12);
  v13 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v13,
    (const MethodInfo_336C638 *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.assetBundleReleaseDic = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)v13;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.assetBundleReleaseDic, (int32_t)v13, v14, v15);
  v16 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v16,
    (const MethodInfo_336C638 *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.assetResourceDic = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)v16;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.assetResourceDic, (int32_t)v16, v17, v18);
  v19 = (int)StringLiteral_1/*""*/;
  this->fields.requestConfigWriteData = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.requestConfigWriteData, v19, v20, v21);
  this->fields.requestWriteCounter = -1.0;
  v22 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_AssetLoader__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_AssetLoader___ctor__);
  this->fields.processingAssetLoaderList = (struct System_Collections_Generic_List_AssetLoader__o *)v22;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.processingAssetLoaderList, (int32_t)v22, v23, v24);
  this->fields.loadParallelMax = 1;
  v25 = (System_Collections_Generic_Queue_T__o *)sub_1BC3254(System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v25,
    (const MethodInfo_38154B0 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
  this->fields.downLoadWaitList = (struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)v25;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.downLoadWaitList, (int32_t)v25, v26, v27);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_38E0160 *)Method_SingletonMonoBehaviour_AssetManager___ctor__);
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
  const MethodInfo *v16; // x3
  AssetLoader_o *v17; // x24
  AssetData_o *syncRoot; // x0
  const MethodInfo *v19; // x2
  bool v20; // w22
  Il2CppObject *Current; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x3
  AssetManager_LoadWaitStatus_o *v24; // x23
  AssetData_o *klass; // x0
  const MethodInfo *v26; // x2
  int v27; // w19
  System_Collections_Generic_Queue_Enumerator_T__o v29; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4B01046 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__,
      *(_QWORD *)&type);
    sub_1BC3008(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__, v13);
    byte_4B01046 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
    goto LABEL_10;
  v15 = 0;
  while ( v15 < processingAssetLoaderList->fields._size )
  {
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               processingAssetLoaderList,
                                                                               v15,
                                                                               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    if ( !processingAssetLoaderList )
      goto LABEL_10;
    v17 = (AssetLoader_o *)processingAssetLoaderList;
    syncRoot = (AssetData_o *)processingAssetLoaderList->fields._syncRoot;
    if ( syncRoot && AssetData__IsSame_39545180(syncRoot, type, name, v16) )
    {
      if ( callbackFunc )
        AssetLoader__add_endCallback2(v17, callbackFunc, v19);
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
    sub_1BC3264(processingAssetLoaderList, *(_QWORD *)&type);
  System_Collections_Generic_Queue_object___GetEnumerator(
    &v29,
    (System_Collections_Generic_Queue_T__o *)processingAssetLoaderList,
    (const MethodInfo_3815B30 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  while ( 1 )
  {
    v20 = System_Collections_Generic_Queue_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_3436B98 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    if ( !v20 )
      break;
    Current = System_Collections_Generic_Queue_Enumerator_object___get_Current(
                &v29,
                (const MethodInfo_3436C88 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    v24 = (AssetManager_LoadWaitStatus_o *)Current;
    if ( !Current )
      sub_1BC3264(0LL, v22);
    klass = (AssetData_o *)Current[1].klass;
    if ( klass && AssetData__IsSame_39545180(klass, type, name, v23) )
    {
      AssetManager_LoadWaitStatus__AddCallback(v24, callbackFunc, v26);
      v27 = 7;
      goto LABEL_19;
    }
  }
  v27 = 8;
LABEL_19:
  System_Collections_Generic_Queue_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_3436B88 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  return v20 && v27 == 7;
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
  const MethodInfo *v16; // x3
  AssetLoader_o *v17; // x24
  AssetData_o *syncRoot; // x0
  const MethodInfo *v19; // x2
  bool v20; // w22
  Il2CppObject *Current; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x3
  AssetManager_LoadWaitStatus_o *v24; // x23
  AssetData_o *klass; // x0
  _BOOL8 IsSame_39545180; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x2
  struct AssetData_o *v29; // x8
  int32_t v30; // w9
  int v31; // w19
  struct AssetData_o *data; // x8
  int32_t entryCount; // w9
  System_Collections_Generic_Queue_Enumerator_T__o v35; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Queue_Enumerator_T__o v36; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B01045 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__,
      *(_QWORD *)&type);
    sub_1BC3008(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__, v13);
    byte_4B01045 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
    goto LABEL_10;
  v15 = 0;
  while ( v15 < processingAssetLoaderList->fields._size )
  {
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               processingAssetLoaderList,
                                                                               v15,
                                                                               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    if ( !processingAssetLoaderList )
      goto LABEL_10;
    v17 = (AssetLoader_o *)processingAssetLoaderList;
    syncRoot = (AssetData_o *)processingAssetLoaderList->fields._syncRoot;
    if ( syncRoot )
    {
      processingAssetLoaderList = (System_Collections_Generic_List_object__o *)AssetData__IsSame_39545180(
                                                                                 syncRoot,
                                                                                 type,
                                                                                 name,
                                                                                 v16);
      if ( ((unsigned __int8)processingAssetLoaderList & 1) != 0 )
      {
        data = v17->fields.data;
        if ( data )
        {
          entryCount = data->fields.entryCount;
          if ( (entryCount & 0x80000000) == 0 )
            data->fields.entryCount = entryCount + 1;
          if ( callbackFunc )
            AssetLoader__add_endCallback2(v17, callbackFunc, v19);
          return 1;
        }
LABEL_10:
        sub_1BC3264(processingAssetLoaderList, *(_QWORD *)&type);
      }
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
    &v35,
    (System_Collections_Generic_Queue_T__o *)processingAssetLoaderList,
    (const MethodInfo_3815B30 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  v36 = v35;
  while ( 1 )
  {
    v20 = System_Collections_Generic_Queue_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_3436B98 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    if ( !v20 )
    {
      v31 = 8;
      goto LABEL_22;
    }
    Current = System_Collections_Generic_Queue_Enumerator_object___get_Current(
                &v36,
                (const MethodInfo_3436C88 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    v24 = (AssetManager_LoadWaitStatus_o *)Current;
    if ( !Current )
      sub_1BC3264(0LL, v22);
    klass = (AssetData_o *)Current[1].klass;
    if ( klass )
    {
      IsSame_39545180 = AssetData__IsSame_39545180(klass, type, name, v23);
      if ( IsSame_39545180 )
        break;
    }
  }
  v29 = v24->fields.data;
  if ( !v29 )
    sub_1BC3264(IsSame_39545180, v27);
  v30 = v29->fields.entryCount;
  if ( (v30 & 0x80000000) == 0 )
    v29->fields.entryCount = v30 + 1;
  AssetManager_LoadWaitStatus__AddCallback(v24, callbackFunc, v28);
  v31 = 7;
LABEL_22:
  System_Collections_Generic_Queue_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_3436B88 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  return v20 && v31 == 7;
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

  if ( (byte_4B01048 & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_LoadWaitStatus_TypeInfo, callbackFunc);
    sub_1BC3008(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__, v5);
    byte_4B01048 = 1;
  }
  v6 = sub_1BC3254(AssetManager_LoadWaitStatus_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_QWORD *)(v6 + 24) = callbackFunc;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v6 + 24), (int32_t)callbackFunc, v7, v8);
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
    sub_1BC3264(0LL, v9);
  System_Collections_Generic_Queue_object___Enqueue(
    downLoadWaitList,
    (Il2CppObject *)v6,
    (const MethodInfo_3815A78 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
}


void __fastcall AssetManager__AddLoadWaitStatus_39583704(
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
  if ( (byte_4B01049 & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_LoadWaitStatus_TypeInfo, info);
    this = (AssetManager_o *)sub_1BC3008(
                               &Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__,
                               v5);
    byte_4B01049 = 1;
  }
  if ( !info
    || (v4->fields.downloadSize += info->fields.size,
        v6 = sub_1BC3254(AssetManager_LoadWaitStatus_TypeInfo),
        System_Object___ctor((Il2CppObject *)v6, 0LL),
        *(_QWORD *)(v6 + 16) = info,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v6 + 16), (int32_t)info, v7, v8),
        (this = (AssetManager_o *)v4->fields.downLoadWaitList) == 0LL) )
  {
    sub_1BC3264(this, info);
  }
  System_Collections_Generic_Queue_object___Enqueue(
    (System_Collections_Generic_Queue_T__o *)this,
    (Il2CppObject *)v6,
    (const MethodInfo_3815A78 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
}


void __fastcall AssetManager__AddLoadWaitStatus_39595120(
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
  if ( (byte_4B0104A & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_LoadWaitStatus_TypeInfo, info);
    this = (AssetManager_o *)sub_1BC3008(
                               &Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__,
                               v9);
    byte_4B0104A = 1;
  }
  if ( !info
    || (v8->fields.downloadSize += info->fields.size,
        v10 = (AssetManager_LoadWaitStatus_o *)sub_1BC3254(AssetManager_LoadWaitStatus_TypeInfo),
        AssetManager_LoadWaitStatus___ctor_39595292(v10, info, callbackFunc, resourceNames, v11),
        (this = (AssetManager_o *)v8->fields.downLoadWaitList) == 0LL) )
  {
    sub_1BC3264(this, info);
  }
  System_Collections_Generic_Queue_object___Enqueue(
    (System_Collections_Generic_Queue_T__o *)this,
    (Il2CppObject *)v10,
    (const MethodInfo_3815A78 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
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

  if ( (byte_4B01059 & 1) == 0 )
  {
    sub_1BC3008(&AssetManager__AssetObjectListSetupAndCall_d__189_TypeInfo, action);
    byte_4B01059 = 1;
  }
  v5 = sub_1BC3254(AssetManager__AssetObjectListSetupAndCall_d__189_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = asset;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)asset, v6, v7);
  *(_QWORD *)(v5 + 40) = action;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v5 + 40), (int32_t)action, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall AssetManager__AssetObjectListSetupAndCall_39596952(
        AssetData_array *assetList,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B0105A & 1) == 0 )
  {
    sub_1BC3008(&AssetManager__AssetObjectListSetupAndCall_d__190_TypeInfo, action);
    byte_4B0105A = 1;
  }
  v5 = sub_1BC3254(AssetManager__AssetObjectListSetupAndCall_d__190_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = assetList;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)assetList, v6, v7);
  *(_QWORD *)(v5 + 40) = action;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v5 + 40), (int32_t)action, v8, v9);
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
  System_Collections_Generic_Queue_T__o *downLoadWaitList; // x0
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o **p_downLoadWaitList; // x22
  char v20; // w26
  struct System_Object_array *array; // x27
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

  if ( (byte_4B0103C & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, name);
    sub_1BC3008(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v5);
    sub_1BC3008(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_1BC3008(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__, v10);
    sub_1BC3008(&System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo, v11);
    sub_1BC3008(&Method_AssetManager___c__CancelAndReleaseDownloadAssetStorage_b__129_0__, v12);
    sub_1BC3008(&AssetManager___c_TypeInfo, v13);
    byte_4B0103C = 1;
  }
  v14 = (System_Collections_Generic_Queue_T__o *)sub_1BC3254(System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v14,
    (const MethodInfo_38154B0 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
  p_downLoadWaitList = &this->fields.downLoadWaitList;
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
    goto LABEL_34;
  v20 = 0;
  while ( downLoadWaitList->fields._size > 0 )
  {
    downLoadWaitList = (System_Collections_Generic_Queue_T__o *)System_Collections_Generic_Queue_object___Dequeue(
                                                                  downLoadWaitList,
                                                                  (const MethodInfo_3815C08 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
    if ( !downLoadWaitList )
      goto LABEL_34;
    array = downLoadWaitList->fields._array;
    v22 = (Il2CppObject *)downLoadWaitList;
    if ( !array )
      goto LABEL_37;
    downLoadWaitList = *(System_Collections_Generic_Queue_T__o **)&array->max_length;
    if ( !downLoadWaitList )
      goto LABEL_34;
    downLoadWaitList = (System_Collections_Generic_Queue_T__o *)System_String__Equals_62383952(
                                                                  (System_String_o *)downLoadWaitList,
                                                                  name,
                                                                  0LL);
    if ( ((unsigned __int8)downLoadWaitList & 1) != 0 )
    {
      downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
      v20 = 1;
      this->fields.downloadSize -= SLODWORD(array->m_Items[2]);
      if ( !downLoadWaitList )
        goto LABEL_34;
    }
    else
    {
LABEL_37:
      if ( !v14 )
        goto LABEL_34;
      System_Collections_Generic_Queue_object___Enqueue(
        v14,
        v22,
        (const MethodInfo_3815A78 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
      downLoadWaitList = (System_Collections_Generic_Queue_T__o *)*p_downLoadWaitList;
      if ( !*p_downLoadWaitList )
        goto LABEL_34;
    }
  }
  if ( (v20 & 1) == 0 )
  {
    downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.processingAssetLoaderList;
    if ( downLoadWaitList )
    {
      v23 = 0;
      while ( v23 < downLoadWaitList->fields._head )
      {
        downLoadWaitList = (System_Collections_Generic_Queue_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)downLoadWaitList,
                                                                      v23,
                                                                      (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
        if ( !downLoadWaitList )
          goto LABEL_34;
        v24 = *(AssetData_o **)&downLoadWaitList->fields._size;
        if ( v24 && AssetData__IsSame_39545180(v24, 0, name, v17) )
        {
          downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.processingAssetLoaderList;
          if ( !downLoadWaitList )
            goto LABEL_34;
          downLoadWaitList = (System_Collections_Generic_Queue_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                        (System_Collections_Generic_List_object__o *)downLoadWaitList,
                                                                        v23,
                                                                        (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
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
            _9__129_0 = (AssetLoader_LoadEndDataHandler_o *)sub_1BC3254(AssetLoader_LoadEndDataHandler_TypeInfo);
            AssetLoader_LoadEndDataHandler___ctor(
              _9__129_0,
              v28,
              Method_AssetManager___c__CancelAndReleaseDownloadAssetStorage_b__129_0__,
              v29);
            static_fields = AssetManager___c_TypeInfo->static_fields;
            static_fields->__9__129_0 = _9__129_0;
            sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__129_0, (int32_t)_9__129_0, v31, v32);
          }
          if ( !v26 )
            goto LABEL_34;
          if ( _9__129_0 )
            AssetLoader__add_endCallback2(v26, _9__129_0, v16);
        }
        downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.processingAssetLoaderList;
        ++v23;
        if ( !downLoadWaitList )
          goto LABEL_34;
      }
      goto LABEL_16;
    }
LABEL_34:
    sub_1BC3264(downLoadWaitList, v15);
  }
LABEL_16:
  this->fields.downLoadWaitList = (struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)v14;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.downLoadWaitList, (int32_t)v14, (int32_t)v16, v17);
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
    sub_1BC3264(this, 0LL);
  v3 = *(_QWORD *)&names->max_length;
  if ( (int)v3 >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v3 )
        sub_1BC326C(this, names, method);
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

  if ( (byte_4B0103B & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__, method);
    sub_1BC3008(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__, v5);
    sub_1BC3008(&System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo, v6);
    byte_4B0103B = 1;
  }
  v7 = (System_Collections_Generic_Queue_T__o *)sub_1BC3254(System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v7,
    (const MethodInfo_38154B0 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
  p_downLoadWaitList = &this->fields.downLoadWaitList;
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
LABEL_12:
    sub_1BC3264(downLoadWaitList, v8);
  while ( downLoadWaitList->fields._size > 0 )
  {
    downLoadWaitList = (System_Collections_Generic_Queue_T__o *)System_Collections_Generic_Queue_object___Dequeue(
                                                                  downLoadWaitList,
                                                                  (const MethodInfo_3815C08 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
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
        (const MethodInfo_3815A78 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
    }
    downLoadWaitList = (System_Collections_Generic_Queue_T__o *)*p_downLoadWaitList;
    if ( !*p_downLoadWaitList )
      goto LABEL_12;
  }
  this->fields.downLoadWaitList = (struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)v7;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.downLoadWaitList, (int32_t)v7, v9, v10);
  this->fields.isCancelDownload = 1;
}


void __fastcall AssetManager__CancelDownloadAssetStorageAll(AssetManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *downLoadWaitList; // x0

  if ( (byte_4B0103E & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__, method);
    byte_4B0103E = 1;
  }
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
  this->fields.downloadSize = 0LL;
  if ( !downLoadWaitList )
    sub_1BC3264(0LL, method);
  System_Collections_Generic_Queue_object___Clear(
    downLoadWaitList,
    (const MethodInfo_3815738 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__);
}


bool __fastcall AssetManager__CheckDateVersion(System_String_o *dateVersion, const MethodInfo *method)
{
  AssetManager_c *v3; // x0
  System_String_o *assetBundleDateVersion; // x0

  if ( (byte_4B01008 & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, method);
    byte_4B01008 = 1;
  }
  v3 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v3 = AssetManager_TypeInfo;
  }
  assetBundleDateVersion = v3->static_fields->assetBundleDateVersion;
  if ( !assetBundleDateVersion )
    sub_1BC3264(0LL, method);
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
  const MethodInfo *v14; // x3
  AssetData_o *syncRoot; // x0
  bool v16; // w21
  Il2CppObject *Current; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  AssetData_o *klass; // x0
  int v21; // w19
  System_Collections_Generic_Queue_Enumerator_T__o v23; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B01047 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__,
      *(_QWORD *)&type);
    sub_1BC3008(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__, v11);
    byte_4B01047 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
    goto LABEL_10;
  v13 = 0;
  while ( v13 < processingAssetLoaderList->fields._size )
  {
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               processingAssetLoaderList,
                                                                               v13,
                                                                               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    if ( !processingAssetLoaderList )
      goto LABEL_10;
    syncRoot = (AssetData_o *)processingAssetLoaderList->fields._syncRoot;
    if ( syncRoot && AssetData__IsSame_39545180(syncRoot, type, name, v14) )
      return 1;
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
    ++v13;
    if ( !processingAssetLoaderList )
      goto LABEL_10;
  }
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.downLoadWaitList;
  if ( !processingAssetLoaderList )
LABEL_10:
    sub_1BC3264(processingAssetLoaderList, *(_QWORD *)&type);
  System_Collections_Generic_Queue_object___GetEnumerator(
    &v23,
    (System_Collections_Generic_Queue_T__o *)processingAssetLoaderList,
    (const MethodInfo_3815B30 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  while ( 1 )
  {
    v16 = System_Collections_Generic_Queue_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_3436B98 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    if ( !v16 )
      break;
    Current = System_Collections_Generic_Queue_Enumerator_object___get_Current(
                &v23,
                (const MethodInfo_3436C88 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    if ( !Current )
      sub_1BC3264(0LL, v18);
    klass = (AssetData_o *)Current[1].klass;
    if ( klass && AssetData__IsSame_39545180(klass, type, name, v19) )
    {
      v21 = 7;
      goto LABEL_19;
    }
  }
  v21 = 8;
LABEL_19:
  System_Collections_Generic_Queue_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_3436B88 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  return v16 && v21 == 7;
}


bool __fastcall AssetManager__CheckVersion(
        System_String_o *masterVersion,
        System_String_o *dateVersion,
        const MethodInfo *method)
{
  AssetManager_c *v5; // x0
  AssetManager_c *v6; // x0

  if ( (byte_4B01007 & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, dateVersion);
    byte_4B01007 = 1;
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
  AssetData_o *currentValue; // x21
  Il2CppClass *klass; // x0
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1
  System_String_o *Path; // x23
  const MethodInfo *v17; // x2
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B0105B & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, method);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v3);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v4);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v5);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v6);
    sub_1BC3008(&StringLiteral_12460/*"SYSTEM"*/, v7);
    byte_4B0105B = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.assetBundleDic, 0LL) )
  {
    assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
    if ( !assetBundleDic
      || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                        assetBundleDic,
                                                                                        (const MethodInfo_336CE18 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
    {
      sub_1BC3264(assetBundleDic, v8);
    }
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v18,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
      (const MethodInfo_39D37E4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    v19 = v18;
    while ( 1 )
    {
      v10 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
              &v19,
              (const MethodInfo_34691A4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
      if ( !v10 )
        break;
      currentValue = (AssetData_o *)v19.fields._currentValue;
      if ( !v19.fields._currentValue )
        sub_1BC3264(v10, v11);
      klass = v19.fields._currentValue[2].klass;
      if ( !klass )
        sub_1BC3264(0LL, v11);
      if ( !System_String__Equals_62384016((System_String_o *)klass, (System_String_o *)StringLiteral_12460/*"SYSTEM"*/, 5, 0LL) )
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
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
      &v19,
      (const MethodInfo_34691A0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
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

  if ( (byte_4B01041 & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, isFast);
    sub_1BC3008(&CatAndMouseGame_TypeInfo, v5);
    sub_1BC3008(&Crc32_TypeInfo, v6);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, v8);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v9);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v10);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v11);
    sub_1BC3008(&System_Text_StringBuilder_TypeInfo, v12);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v13);
    sub_1BC3008(&StringLiteral_43/*"\n"*/, v14);
    sub_1BC3008(&StringLiteral_25018/*"~"*/, v15);
    byte_4B01041 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  lockTaken = 0;
  v37 = 0;
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic )
    goto LABEL_35;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         assetBundleDic,
         (const MethodInfo_336CCB8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) < 1 )
    return;
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic )
    goto LABEL_35;
  Count = System_Collections_Generic_Dictionary_object__object___get_Count(
            assetBundleDic,
            (const MethodInfo_336CCB8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__);
  v18 = (System_Text_StringBuilder_o *)sub_1BC3254(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_62425944(v18, 60 * Count, 0LL);
  if ( !v18 )
    goto LABEL_35;
  System_Text_StringBuilder__Append_62434920(v18, 0x40u, 0LL);
  v19 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v19 = AssetManager_TypeInfo;
  }
  System_Text_StringBuilder__Append_62432592(v18, v19->static_fields->assetBundleMasterVersion, 0LL);
  if ( !System_String__IsNullOrEmpty(AssetManager_TypeInfo->static_fields->assetBundleDateVersion, 0LL) )
  {
    System_Text_StringBuilder__Append_62434920(v18, 0x2Cu, 0LL);
    v20 = AssetManager_TypeInfo;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      v20 = AssetManager_TypeInfo;
    }
    System_Text_StringBuilder__Append_62432592(v18, v20->static_fields->assetBundleDateVersion, 0LL);
    if ( !System_String__IsNullOrEmpty(AssetManager_TypeInfo->static_fields->assetBundleBuildVersion, 0LL) )
    {
      System_Text_StringBuilder__Append_62434920(v18, 0x2Cu, 0LL);
      v21 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v21 = AssetManager_TypeInfo;
      }
      System_Text_StringBuilder__Append_62432592(v18, v21->static_fields->assetBundleBuildVersion, 0LL);
    }
  }
  System_Text_StringBuilder__Append_62434920(v18, 0xAu, 0LL);
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      assetBundleDic,
                                                                                      (const MethodInfo_336CE18 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
LABEL_35:
    sub_1BC3264(assetBundleDic, isFast);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v35,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_39D37E4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v36 = v35;
  while ( 1 )
  {
    v22 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v36,
            (const MethodInfo_34691A4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v22 )
      break;
    currentValue = v36.fields._currentValue;
    if ( !v36.fields._currentValue )
      sub_1BC3264(v22, v23);
    System_Text_StringBuilder__Append_62435088(v18, (int32_t)v36.fields._currentValue[2].monitor, 0LL);
    System_Text_StringBuilder__Append_62434920(v18, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_62432592(v18, (System_String_o *)currentValue[2].klass, 0LL);
    System_Text_StringBuilder__Append_62434920(v18, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_62435088(v18, (int32_t)currentValue[3].klass, 0LL);
    System_Text_StringBuilder__Append_62434920(v18, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_62435264(v18, HIDWORD(currentValue[3].klass), 0LL);
    System_Text_StringBuilder__Append_62434920(v18, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_62432592(v18, (System_String_o *)currentValue[1].monitor, 0LL);
    System_Text_StringBuilder__Append_62432592(v18, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v36,
    (const MethodInfo_34691A0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  requestConfigWriteData = (Il2CppObject *)this->fields.requestConfigWriteData;
  lockTaken = 0;
  System_Threading_Monitor__Enter_64276660(requestConfigWriteData, &lockTaken, 0LL);
  v26 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v18->klass->vtable._3_ToString.method)(
                             v18,
                             v18->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_1BC3264(0LL, v28);
  v29 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                               UTF8,
                               v26,
                               UTF8->klass->vtable._19_GetBytes.methodPtr);
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  v37 = Crc32__Compute(v29, 0LL);
  v30 = System_UInt32__ToString((uint32_t)&v37, 0LL);
  v31 = System_String__Concat_62388900(
          (System_String_o *)StringLiteral_25018/*"~"*/,
          v30,
          (System_String_o *)StringLiteral_43/*"\n"*/,
          v26,
          0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v32 = CatAndMouseGame__CatGame8(v31, 0LL);
  this->fields.requestConfigWriteData = v32;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.requestConfigWriteData, (int32_t)v32, v33, v34);
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
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.writeRequestThread, 0, v4, v5);
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

  if ( (byte_4B01035 & 1) == 0 )
  {
    sub_1BC3008(&string___TypeInfo, method);
    sub_1BC3008(&StringLiteral_8116/*"KB"*/, v4);
    sub_1BC3008(&StringLiteral_24967/*"{0}{1}"*/, v5);
    sub_1BC3008(&StringLiteral_9151/*"N2"*/, v6);
    sub_1BC3008(&StringLiteral_13229/*"TB"*/, v7);
    sub_1BC3008(&StringLiteral_2493/*"B"*/, v8);
    sub_1BC3008(&StringLiteral_8553/*"MB"*/, v9);
    sub_1BC3008(&StringLiteral_6864/*"GB"*/, v10);
    byte_4B01035 = 1;
  }
  v11 = (System_String_o *)sub_1BC30B0(string___TypeInfo, 5LL);
  if ( !v11 )
    sub_1BC3264(0LL, v12);
  v15 = v11;
  if ( !LODWORD(v11[1].klass) )
    goto LABEL_14;
  v16 = StringLiteral_2493/*"B"*/;
  v11[1].monitor = (void *)StringLiteral_2493/*"B"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v11[1].monitor, v16, v13, v14);
  if ( LODWORD(v15[1].klass) <= 1 )
    goto LABEL_14;
  v18 = StringLiteral_8116/*"KB"*/;
  v15[1].fields = (System_String_Fields)StringLiteral_8116/*"KB"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v15[1].fields, v18, v13, v17);
  if ( LODWORD(v15[1].klass) <= 2 )
    goto LABEL_14;
  v20 = StringLiteral_8553/*"MB"*/;
  v15[2].klass = (System_String_c *)StringLiteral_8553/*"MB"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v15[2], v20, v13, v19);
  if ( LODWORD(v15[1].klass) <= 3 )
    goto LABEL_14;
  v22 = StringLiteral_6864/*"GB"*/;
  v15[2].monitor = (void *)StringLiteral_6864/*"GB"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v15[2].monitor, v22, v13, v21);
  if ( LODWORD(v15[1].klass) <= 4 )
    goto LABEL_14;
  v24 = StringLiteral_13229/*"TB"*/;
  v15[2].fields = (System_String_Fields)StringLiteral_13229/*"TB"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v15[2].fields, v24, v13, v23);
  for ( i = 0; i != 4; ++i )
  {
    if ( size < 1000.0 )
      break;
    size = size / 1000.0;
    *(double *)&format.klass = size;
  }
  v11 = System_Double__ToString_63767908(1000.0, &format, (const MethodInfo *)StringLiteral_9151/*"N2"*/);
  if ( i >= LODWORD(v15[1].klass) )
LABEL_14:
    sub_1BC326C(v11, v12, v13);
  return System_String__Format_62389940(
           (System_String_o *)StringLiteral_24967/*"{0}{1}"*/,
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
  _BOOL8 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v19; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v20; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v21; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4B0102F & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, method);
    sub_1BC3008(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__, v3);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v4);
    sub_1BC3008(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__, v5);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v6);
    sub_1BC3008(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__, v7);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v11);
    byte_4B0102F = 1;
  }
  memset(&v21, 0, sizeof(v21));
  memset(&v20, 0, sizeof(v20));
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
    goto LABEL_22;
  System_Collections_Generic_Queue_object___GetEnumerator(
    (System_Collections_Generic_Queue_Enumerator_T__o *)&v19,
    downLoadWaitList,
    (const MethodInfo_3815B30 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  v21 = v19;
  while ( System_Collections_Generic_Queue_Enumerator_object___MoveNext(
            (System_Collections_Generic_Queue_Enumerator_T__o *)&v21,
            (const MethodInfo_3436B98 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__) )
  {
    if ( !System_Collections_Generic_Queue_Enumerator_object___get_Current(
            (System_Collections_Generic_Queue_Enumerator_T__o *)&v21,
            (const MethodInfo_3436C88 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__) )
      sub_1BC3264(0LL, v13);
  }
  System_Collections_Generic_Queue_Enumerator_object___Dispose(
    (System_Collections_Generic_Queue_Enumerator_T__o *)&v21,
    (const MethodInfo_3436B88 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  processingAssetLoaderList = this->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
    goto LABEL_22;
  size = processingAssetLoaderList->fields._size;
  v16 = -1;
  do
    ++v16;
  while ( v16 < size );
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.assetBundleDic;
  if ( !downLoadWaitList )
    goto LABEL_22;
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                (System_Collections_Generic_Dictionary_object__object__o *)downLoadWaitList,
                                                                (const MethodInfo_336CE18 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !downLoadWaitList )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v19,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)downLoadWaitList,
    (const MethodInfo_39D37E4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v20 = v19;
  while ( 1 )
  {
    v17 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v20,
            (const MethodInfo_34691A4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v17 )
      break;
    if ( !v20.fields._currentValue )
      sub_1BC3264(v17, v18);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v20,
    (const MethodInfo_34691A0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.assetResourceDic;
  if ( !downLoadWaitList
    || (downLoadWaitList = (System_Collections_Generic_Queue_T__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                      (System_Collections_Generic_Dictionary_object__object__o *)downLoadWaitList,
                                                                      (const MethodInfo_336CE18 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
LABEL_22:
    sub_1BC3264(downLoadWaitList, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v19,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)downLoadWaitList,
    (const MethodInfo_39D37E4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v20,
            (const MethodInfo_34691A4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__) )
    ;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v20,
    (const MethodInfo_34691A0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
}


System_Collections_IEnumerator_o *__fastcall AssetManager__DelayLoadStart(
        AssetManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B0104D & 1) == 0 )
  {
    sub_1BC3008(&AssetManager__DelayLoadStart_d__152_TypeInfo, method);
    byte_4B0104D = 1;
  }
  v3 = sub_1BC3254(AssetManager__DelayLoadStart_d__152_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall AssetManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  AssetManager_c *v2; // x0

  if ( (byte_4B01000 & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, v1);
    byte_4B01000 = 1;
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
    AssetData = AssetManager__GetAssetData((AssetManager_o *)Status, this->fields.assetBundleDic, name, v10);
    if ( AssetData )
    {
      if ( AssetData->fields.nowVersion == AssetData->fields.newVersion )
      {
        if ( callbackFunc )
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, AssetData_o *, _QWORD))callbackFunc->fields.m_target)(
            callbackFunc->fields.original_method_info,
            AssetData,
            *(_QWORD *)&callbackFunc->fields.extra_arg);
      }
      else
      {
        AssetManager__AddLoadWaitStatus_39595120(this, AssetData, callbackFunc, 0LL, v12);
        this->fields.loadParallelMax = loadParallelMax;
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
  const MethodInfo *v14; // x2
  AssetData_o *currentValue; // x22
  int monitor; // w8
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v19; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B01036 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, attrib);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v7);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v8);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v9);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v10);
    byte_4B01036 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      assetBundleDic,
                                                                                      (const MethodInfo_336CE18 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
    sub_1BC3264(assetBundleDic, attrib);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v19,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_39D37E4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v12 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v19,
            (const MethodInfo_34691A4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v12 )
      break;
    currentValue = (AssetData_o *)v19.fields._currentValue;
    if ( !v19.fields._currentValue )
      sub_1BC3264(v12, v13);
    monitor = (int)v19.fields._currentValue[2].monitor;
    if ( monitor < 1 || monitor == HIDWORD(v19.fields._currentValue[2].monitor) )
    {
      if ( System_String__op_Equality(attrib, (System_String_o *)v19.fields._currentValue[2].klass, 0LL)
        && currentValue->fields.nowVersion != currentValue->fields.newVersion )
      {
        AssetManager__AddLoadWaitStatus_39583704(this, currentValue, v17);
      }
    }
    else
    {
      AssetManager__AddLoadWaitStatus_39583704(this, (AssetData_o *)v19.fields._currentValue, v14);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v19,
    (const MethodInfo_34691A0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  this->fields.loadParallelMax = loadParallelMax;
  AssetManager__LoadStart(this, v18);
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

  if ( (byte_4B01034 & 1) == 0 )
  {
    sub_1BC3008(&AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_TypeInfo, attrib);
    byte_4B01034 = 1;
  }
  v7 = sub_1BC3254(AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 40) = attrib;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v7 + 40), (int32_t)attrib, v10, v11);
  *(_DWORD *)(v7 + 56) = loadParallelMax;
  return (System_Collections_IEnumerator_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetManager__DownloadAssetStorageAttribute_39586644(
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
  const MethodInfo *v19; // x2
  AssetData_o *currentValue; // x22
  int monitor; // w8
  int monitor_high; // w9
  unsigned __int64 v23; // x26
  __int64 v24; // x25
  _BOOL8 v25; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x2
  const MethodInfo *v29; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v30; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v31; // [xsp+20h] [xbp-70h] BYREF

  v6 = this;
  if ( (byte_4B01037 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, attribList);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v7);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v8);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v9);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v10);
    this = (AssetManager_o *)sub_1BC3008(&StringLiteral_807/*", "*/, v11);
    byte_4B01037 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  if ( !attribList )
LABEL_33:
    sub_1BC3264(this, attribList);
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
      v14 = 0LL;
      v15 = (unsigned int)*(_QWORD *)&attribList->max_length - 2LL;
      do
      {
        this = (AssetManager_o *)System_String__Concat_62386896(
                                   v13,
                                   (System_String_o *)StringLiteral_807/*", "*/,
                                   attribList->m_Items[v14 + 1],
                                   0LL);
        if ( v15 == v14 )
          goto LABEL_14;
        v16 = v14 + 2;
        v13 = (System_String_o *)this;
        ++v14;
      }
      while ( v16 < attribList->max_length );
    }
LABEL_13:
    sub_1BC326C(this, attribList, *(_QWORD *)&loadParallelMax);
  }
LABEL_14:
  this = (AssetManager_o *)v6->fields.assetBundleDic;
  if ( !this )
    goto LABEL_33;
  this = (AssetManager_o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                             (System_Collections_Generic_Dictionary_object__object__o *)this,
                             (const MethodInfo_336CE18 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !this )
    goto LABEL_33;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v30,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_39D37E4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v31 = v30;
LABEL_17:
  while ( 1 )
  {
    v17 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v31,
            (const MethodInfo_34691A4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v17 )
      break;
    currentValue = (AssetData_o *)v31.fields._currentValue;
    if ( !v31.fields._currentValue )
      sub_1BC3264(v17, v18);
    monitor = (int)v31.fields._currentValue[2].monitor;
    monitor_high = HIDWORD(v31.fields._currentValue[2].monitor);
    if ( monitor < 1 )
    {
      if ( monitor != monitor_high && (int)*(_QWORD *)&attribList->max_length >= 1 )
      {
        v23 = 0LL;
        v24 = (unsigned int)*(_QWORD *)&attribList->max_length - 1LL;
        while ( 1 )
        {
          v25 = System_String__op_Equality(attribList->m_Items[v23], currentValue->fields.attrib, 0LL);
          if ( v25 )
            break;
          if ( v24 == v23++ )
            goto LABEL_17;
          if ( v23 >= attribList->max_length )
            sub_1BC326C(v25, v26, v27);
        }
        AssetManager__AddLoadWaitStatus_39583704(v6, currentValue, v27);
      }
    }
    else if ( monitor != monitor_high )
    {
      AssetManager__AddLoadWaitStatus_39583704(v6, (AssetData_o *)v31.fields._currentValue, v19);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v31,
    (const MethodInfo_34691A0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  v6->fields.loadParallelMax = loadParallelMax;
  AssetManager__LoadStart(v6, v29);
}


bool __fastcall AssetManager__DownloadAssetStorage_39575992(
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
    sub_1BC3264(this, 0LL);
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
        sub_1BC326C(this, nameList, callbackFunc);
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

  if ( (byte_4B01054 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_1BC3008(
                               &Method_System_Collections_Generic_Dictionary_string__AssetData__TryGetValue__,
                               dic);
    byte_4B01054 = 1;
  }
  value = 0LL;
  if ( !name )
    return 0LL;
  if ( !dic )
    sub_1BC3264(this, dic);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)dic,
         (Il2CppObject *)name,
         &value,
         (const MethodInfo_336E7F4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__TryGetValue__) )
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

  result = AssetManager__GetAssetData(this, this->fields.assetResourceDic, name, v3);
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

  result = AssetManager__GetAssetData(this, this->fields.assetBundleDic, name, v3);
  if ( result )
  {
    if ( !result->fields.objectList )
      return 0LL;
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

  if ( (byte_4B01039 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, path);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v5);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v6);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__Add__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__ToArray__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_string___ctor__, v10);
    sub_1BC3008(&System_Collections_Generic_List_string__TypeInfo, v11);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v12);
    sub_1BC3008(&StringLiteral_1039/*"/"*/, v13);
    byte_4B01039 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  v14 = System_String__Concat_62348648(path, (System_String_o *)StringLiteral_1039/*"/"*/, 0LL);
  v15 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_string___ctor__);
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic )
    goto LABEL_21;
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                assetBundleDic,
                                                                                (const MethodInfo_336CE18 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !assetBundleDic )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v32,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_39D37E4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    v18 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v33,
            (const MethodInfo_34691A4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v18 )
      break;
    currentValue = v33.fields._currentValue;
    if ( !v33.fields._currentValue )
      sub_1BC3264(v18, v19);
    monitor = (System_String_o *)v33.fields._currentValue[1].monitor;
    if ( !monitor )
      sub_1BC3264(0LL, v19);
    v22 = System_String__StartsWith(monitor, v14, 0LL);
    if ( v22 )
    {
      if ( !v15 )
        sub_1BC3264(v22, v23);
      v26 = (Il2CppObject *)currentValue[1].monitor;
      items = v15->fields._items;
      v28 = Method_System_Collections_Generic_List_string__Add__;
      ++v15->fields._version;
      if ( !items )
        sub_1BC3264(v22, v26);
      size = v15->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          v26,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v15->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v26;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v26, v24, v25);
      }
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v33,
    (const MethodInfo_34691A0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  if ( !v15 )
LABEL_21:
    sub_1BC3264(assetBundleDic, v16);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v15,
                                  (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_string__ToArray__);
}


AssetData_array *__fastcall AssetManager__GetAssetStorage_39579532(
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
  if ( (byte_4B01055 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_1BC3008(&AssetData___TypeInfo, nameList);
    byte_4B01055 = 1;
  }
  if ( !nameList )
LABEL_17:
    sub_1BC3264(this, nameList);
  this = (AssetManager_o *)sub_1BC30B0(AssetData___TypeInfo, nameList->max_length);
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
          if ( this->fields.assetBundleReleaseDic )
          {
            if ( !v8 )
              goto LABEL_17;
            this = (AssetManager_o *)sub_1BC3144(this, v8->obj.klass->_1.element_class);
            if ( !this )
            {
              v14 = sub_1BC3288(0LL);
              sub_1BC3130(v14, 0LL);
            }
            if ( v9 >= v8->max_length )
              break;
            p_isUseDebugStatus->klass = (CGThumbnailListItem_c *)v11;
            sub_1BC2FAC(p_isUseDebugStatus, (int32_t)v11, (int32_t)v5, v12);
          }
        }
      }
      LODWORD(v7) = nameList->max_length;
      ++v9;
      p_isUseDebugStatus = (CGThumbnailListItem_o *)((char *)p_isUseDebugStatus + 8);
      if ( (__int64)v9 >= (int)v7 )
        return v8;
    }
    sub_1BC326C(this, nameList, v5);
  }
  return v8;
}


bool __fastcall AssetManager__GetAssetStorage_39579988(
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
  AssetData = AssetManager__GetAssetData((AssetManager_o *)Status, this->fields.assetBundleDic, name, v9);
  if ( AssetData )
  {
    if ( AssetData->fields.objectList )
    {
      if ( callbackFunc )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, AssetData_o *, _QWORD))callbackFunc->fields.m_target)(
          callbackFunc->fields.original_method_info,
          AssetData,
          *(_QWORD *)&callbackFunc->fields.extra_arg);
      goto LABEL_7;
    }
LABEL_8:
    LOBYTE(AssetData) = 0;
  }
  return (char)AssetData;
}


bool __fastcall AssetManager__GetAsset_39570256(
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


bool __fastcall AssetManager__GetAsset_39570544(
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


AssetData_o *__fastcall AssetManager__GetAsset_39596188(
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

  if ( (byte_4B0100A & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, v1);
    byte_4B0100A = 1;
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

  if ( (byte_4B01038 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v3);
    byte_4B01038 = 1;
  }
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
LABEL_8:
    sub_1BC3264(processingAssetLoaderList, method);
  downloadSize = this->fields.downloadSize;
  v6 = 0;
  while ( v6 < processingAssetLoaderList->fields._size )
  {
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               processingAssetLoaderList,
                                                                               v6,
                                                                               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
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

  if ( (byte_4B01009 & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, v1);
    byte_4B01009 = 1;
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

  if ( (byte_4B0103F & 1) == 0 )
  {
    sub_1BC3008(&AssetManager__InitCR_d__134_TypeInfo, method);
    byte_4B0103F = 1;
  }
  v3 = sub_1BC3254(AssetManager__InitCR_d__134_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
  const MethodInfo *v21; // x1
  int v22; // w28
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x1
  int32_t v25; // w20
  Il2CppObject *Item; // x21
  int32_t v27; // w2
  int v28; // w8
  System_String_o *Path; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  AssetManager_c *v32; // x8
  System_String_o *v33; // x20
  struct AssetManager_StaticFields *static_fields; // x0
  struct AssetManager_StaticFields *v35; // x8
  System_String_o *cachePathName; // x20
  System_String_o *configFileName; // x21
  System_String_o *v38; // x0
  System_String_o *v39; // x0
  struct AssetManager_StaticFields *v40; // x8
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct AssetManager_StaticFields *v43; // x8
  System_String_o *v44; // x20
  System_String_o *v45; // x0
  System_String_o *v46; // x0
  struct AssetManager_StaticFields *v47; // x8
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  struct AssetManager_StaticFields *v50; // x8
  System_String_o *v51; // x20
  System_String_o *v52; // x0
  System_String_o *v53; // x0
  struct AssetManager_StaticFields *v54; // x8
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v57; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o i; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B01031 & 1) == 0 )
  {
    sub_1BC3008(&AndroidUtil_TypeInfo, method);
    sub_1BC3008(&AssetManager_TypeInfo, v3);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, v6);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v7);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v8);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_AssetLoader__Clear__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v12);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v13);
    sub_1BC3008(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v15);
    byte_4B01031 = 1;
  }
  memset(&i, 0, sizeof(i));
  initCRW = this->fields.initCRW;
  if ( initCRW )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, initCRW, 0LL);
    this->fields.initCRW = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.initCRW, 0, v17, v18);
  }
  assetBundleReleaseDic = this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_44;
  System_Collections_Generic_Dictionary_object__object___Clear(
    (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
    (const MethodInfo_336D170 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
  assetBundleReleaseDic = this->fields.assetBundleDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_44;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
         (const MethodInfo_336CCB8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) < 1 )
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
                              (const MethodInfo_336CE18 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v57,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
      (const MethodInfo_39D37E4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    v20 = 0;
    for ( i = v57;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &i,
            (const MethodInfo_34691A4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
          v20 |= AssetData__ReleaseData((AssetData_o *)i.fields._currentValue, v21) )
    {
      if ( !i.fields._currentValue )
        sub_1BC3264(0LL, v21);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
      &i,
      (const MethodInfo_34691A0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    assetBundleReleaseDic = this->fields.assetBundleDic;
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    System_Collections_Generic_Dictionary_object__object___Clear(
      (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
      (const MethodInfo_336D170 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
    v22 = v20 != 0;
  }
  assetBundleReleaseDic = this->fields.assetResourceDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_44;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
         (const MethodInfo_336CCB8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) >= 1 )
  {
    assetBundleReleaseDic = this->fields.assetResourceDic;
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    assetBundleReleaseDic = System_Collections_Generic_Dictionary_object__object___get_Values(
                              (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
                              (const MethodInfo_336CE18 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v57,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
      (const MethodInfo_39D37E4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    for ( i = v57;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &i,
            (const MethodInfo_34691A4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
          v22 |= AssetData__ReleaseData((AssetData_o *)i.fields._currentValue, v24) )
    {
      if ( !i.fields._currentValue )
        sub_1BC3264(0LL, v24);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
      &i,
      (const MethodInfo_34691A0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    assetBundleReleaseDic = this->fields.assetResourceDic;
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    System_Collections_Generic_Dictionary_object__object___Clear(
      (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
      (const MethodInfo_336D170 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
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
               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70034300((UnityEngine_Object_o *)Item, 0LL);
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
    sub_1BC3264(assetBundleReleaseDic, initCRW);
  System_Collections_Generic_Queue_object___Clear(
    (System_Collections_Generic_Queue_T__o *)assetBundleReleaseDic,
    (const MethodInfo_3815738 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__);
  this->fields.downloadSize = 0LL;
  this->fields.isCancelDownload = 0;
  Path = AssetStorageCache__GetPath(0LL);
  v32 = AssetManager_TypeInfo;
  v33 = Path;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v32 = AssetManager_TypeInfo;
  }
  static_fields = v32->static_fields;
  static_fields->cachePathName = v33;
  sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->cachePathName, (int32_t)v33, v30, v31);
  v35 = AssetManager_TypeInfo->static_fields;
  cachePathName = v35->cachePathName;
  configFileName = v35->configFileName;
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  v38 = AndroidUtil__ConvertFileNameIfNeed(configFileName, 0LL);
  v39 = System_String__Concat_62348648(cachePathName, v38, 0LL);
  v40 = AssetManager_TypeInfo->static_fields;
  v40->cacheListFileName = v39;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v40->cacheListFileName, (int32_t)v39, v41, v42);
  v43 = AssetManager_TypeInfo->static_fields;
  v44 = v43->cachePathName;
  v45 = AndroidUtil__ConvertFileNameIfNeed(v43->createConfigFileName, 0LL);
  v46 = System_String__Concat_62348648(v44, v45, 0LL);
  v47 = AssetManager_TypeInfo->static_fields;
  v47->createCacheListFileName = v46;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v47->createCacheListFileName, (int32_t)v46, v48, v49);
  v50 = AssetManager_TypeInfo->static_fields;
  v51 = v50->cachePathName;
  v52 = AndroidUtil__ConvertFileNameIfNeed(v50->backConfigFileName, 0LL);
  v53 = System_String__Concat_62348648(v51, v52, 0LL);
  v54 = AssetManager_TypeInfo->static_fields;
  v54->backCacheListFileName = v53;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v54->backCacheListFileName, (int32_t)v53, v55, v56);
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
    sub_1BC2FAC((CGThumbnailListItem_o *)p_initCRW, (int32_t)inited, v5, v6);
    UnityEngine_MonoBehaviour__StartCoroutine_70019872((UnityEngine_MonoBehaviour_o *)this, this->fields.initCRW, 0LL);
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
  const MethodInfo *v13; // x3
  Il2CppObject *v14; // x22
  AssetData_o *v15; // x0

  v5 = this;
  if ( (byte_4B0103D & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__, target);
    sub_1BC3008(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Peek__, v7);
    this = (AssetManager_o *)sub_1BC3008(
                               &Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__,
                               v8);
    byte_4B0103D = 1;
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
                                 (const MethodInfo_3815D64 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Peek__);
      if ( !this )
        break;
      v14 = (Il2CppObject *)this;
      v15 = *(AssetData_o **)&this->fields.m_CachedPtr;
      if ( !v15 || !AssetData__IsSame_39545180(v15, 0, target, v13) )
      {
        System_Collections_Generic_Queue_object___Dequeue(
          v10,
          (const MethodInfo_3815C08 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
        System_Collections_Generic_Queue_object___Enqueue(
          v10,
          v14,
          (const MethodInfo_3815A78 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
        if ( --size )
          continue;
      }
      goto LABEL_9;
    }
LABEL_10:
    sub_1BC3264(this, target);
  }
LABEL_9:
  p_downLoadWaitList->klass = (CGThumbnailListItem_c *)v10;
  sub_1BC2FAC(p_downLoadWaitList, (int32_t)v10, (int32_t)method, v3);
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
    LOBYTE(AssetData) = AssetData->fields.objectList == 0LL;
  return (char)AssetData;
}


bool __fastcall AssetManager__IsExistAssetStorage(
        AssetManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__AssetData__o *assetBundleDic; // x0

  if ( (byte_4B01050 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__, name);
    byte_4B01050 = 1;
  }
  assetBundleDic = this->fields.assetBundleDic;
  if ( !assetBundleDic )
    sub_1BC3264(0LL, name);
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)assetBundleDic,
           (Il2CppObject *)name,
           (const MethodInfo_336D1DC *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__);
}


bool __fastcall AssetManager__IsExistAssetStorage_39572436(
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
    sub_1BC3264(this, 0LL);
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
        sub_1BC326C(this, nameList, method);
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
    LOBYTE(AssetData) = AssetData->fields.nowVersion != AssetData->fields.newVersion;
  return (char)AssetData;
}


bool __fastcall AssetManager__IsNeedDownload_39572984(
        AssetManager_o *this,
        System_String_array *nameList,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v4; // x8
  bool v6; // w21
  AssetManager_o *v7; // x20
  unsigned __int64 v8; // x22

  if ( !nameList )
    sub_1BC3264(this, 0LL);
  v4 = *(_QWORD *)&nameList->max_length;
  v6 = (int)v4 > 0;
  if ( (int)v4 >= 1 )
  {
    v7 = this;
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)v4 )
        sub_1BC326C(this, nameList, method);
      method = (const MethodInfo *)nameList->m_Items[v8];
      if ( method )
      {
        this = (AssetManager_o *)AssetManager__GetAssetData(
                                   this,
                                   v7->fields.assetBundleDic,
                                   (System_String_o *)method,
                                   v3);
        if ( this )
        {
          if ( LODWORD(this->fields.debugStatusLabel) != HIDWORD(this->fields.debugStatusLabel) )
            break;
        }
      }
      LODWORD(v4) = nameList->max_length;
      v6 = (__int64)++v8 < (int)v4;
    }
    while ( (__int64)v8 < (int)v4 );
  }
  return v6;
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
  int32_t v43; // w1
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  __int64 v46; // x0
  System_IO_IOException_o *v47; // x20
  System_String_o *v48; // x0
  __int64 v49; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v50; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v51; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_4B01044 & 1) == 0 )
  {
    sub_1BC3008(&Method_AssetManager_OnClickRetryDialog__, method);
    sub_1BC3008(&AssetManager_TypeInfo, v3);
    sub_1BC3008(&ErrorDialog_ClickDelegate_TypeInfo, v4);
    sub_1BC3008(&CommonServicePluginScript_TypeInfo, v5);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, v7);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v8);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v9);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v10);
    sub_1BC3008(&LocalizationManager_TypeInfo, v11);
    sub_1BC3008(&ManagementManager_TypeInfo, v12);
    sub_1BC3008(&ManagerConfig_TypeInfo, v13);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_1BC3008(&System_IO_StreamWriter_TypeInfo, v15);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v16);
    sub_1BC3008(&StringLiteral_2031/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, v17);
    sub_1BC3008(&StringLiteral_15783/*"[FFFF80]Download error for debug"*/, v18);
    sub_1BC3008(&StringLiteral_11366/*"SCRIPT"*/, v19);
    sub_1BC3008(&StringLiteral_2032/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, v20);
    sub_1BC3008(&StringLiteral_1/*""*/, v21);
    byte_4B01044 = 1;
  }
  memset(&v51, 0, sizeof(v51));
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_49;
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                       assetBundleReleaseDic,
                                                                                       (const MethodInfo_336CE18 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !assetBundleReleaseDic )
    goto LABEL_49;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v50,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
    (const MethodInfo_39D37E4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v23 = 0;
  v51 = v50;
  while ( 1 )
  {
    v24 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v51,
            (const MethodInfo_34691A4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v24 )
      break;
    if ( !v51.fields._currentValue )
      sub_1BC3264(v24, v25);
    if ( !HIDWORD(v51.fields._currentValue[5].klass) )
    {
      if ( v51.fields._currentValue[4].monitor )
        v23 |= AssetData__ReleaseData((AssetData_o *)v51.fields._currentValue, v25);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v51,
    (const MethodInfo_34691A0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  if ( (v23 & 1) != 0 )
    AssetManager__RequestUnloadUnusedAssets(this, 0LL, v26);
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
LABEL_49:
    sub_1BC3264(assetBundleReleaseDic, method);
  System_Collections_Generic_Dictionary_object__object___Clear(
    assetBundleReleaseDic,
    (const MethodInfo_336D170 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
  if ( this->fields.requestWriteCounter >= 0.0 )
  {
    v27 = this->fields.requestWriteCounter - UnityEngine_Time__get_deltaTime(0LL);
    this->fields.requestWriteCounter = v27;
    if ( v27 <= 0.0 && !this->fields.isErrorDialog )
    {
      Path = AssetStorageCache__GetPath(0LL);
      if ( !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
      FreeSize = CommonServicePluginScript__GetFreeSize(Path, 0LL);
      if ( FreeSize >= 1 )
      {
        v30 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v30 = ManagerConfig_TypeInfo;
        }
        if ( FreeSize < v30->static_fields->LIMIT_FREE_SIZE )
        {
          v46 = sub_1BC301C(&System_IO_IOException_TypeInfo);
          v47 = (System_IO_IOException_o *)sub_1BC3254(v46);
          v48 = (System_String_o *)sub_1BC301C(&StringLiteral_5245/*"Disk full"*/);
          System_IO_IOException___ctor_63166364(v47, v48, 0LL);
          v49 = sub_1BC301C(&Method_AssetManager_LateUpdate__);
          sub_1BC3130(v47, v49);
        }
      }
      v31 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v31 = AssetManager_TypeInfo;
      }
      if ( System_IO_File__Exists(v31->static_fields->createCacheListFileName, 0LL) )
      {
        v32 = AssetManager_TypeInfo;
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v32 = AssetManager_TypeInfo;
        }
        System_IO_File__Delete(v32->static_fields->createCacheListFileName, 0LL);
      }
      v33 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v33 = AssetManager_TypeInfo;
      }
      createCacheListFileName = v33->static_fields->createCacheListFileName;
      UTF8 = System_Text_Encoding__get_UTF8(0LL);
      v36 = (System_IO_StreamWriter_o *)sub_1BC3254(System_IO_StreamWriter_TypeInfo);
      System_IO_StreamWriter___ctor_63193712(v36, createCacheListFileName, 0, UTF8, 0LL);
      if ( !v36 )
        sub_1BC3264(v37, v38);
      ((void (__fastcall *)(System_IO_StreamWriter_o *, struct System_String_o *, Il2CppMethodPointer))v36->klass->vtable._16_Write.method)(
        v36,
        this->fields.requestConfigWriteData,
        v36->klass->vtable._17_WriteLine.methodPtr);
      ((void (__fastcall *)(System_IO_StreamWriter_o *, Il2CppMethodPointer))v36->klass->vtable._8_Close.method)(
        v36,
        v36->klass->vtable._9_Dispose.methodPtr);
      if ( System_IO_File__Exists(AssetManager_TypeInfo->static_fields->backCacheListFileName, 0LL) )
      {
        v39 = AssetManager_TypeInfo;
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v39 = AssetManager_TypeInfo;
        }
        System_IO_File__Delete(v39->static_fields->backCacheListFileName, 0LL);
      }
      v40 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v40 = AssetManager_TypeInfo;
      }
      if ( System_IO_File__Exists(v40->static_fields->cacheListFileName, 0LL) )
      {
        v41 = AssetManager_TypeInfo;
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v41 = AssetManager_TypeInfo;
        }
        System_IO_File__Move(v41->static_fields->cacheListFileName, v41->static_fields->backCacheListFileName, 0LL);
      }
      v42 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v42 = AssetManager_TypeInfo;
      }
      System_IO_File__Move(v42->static_fields->createCacheListFileName, v42->static_fields->cacheListFileName, 0LL);
      v43 = (int)StringLiteral_1/*""*/;
      this->fields.requestConfigWriteData = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.requestConfigWriteData, v43, v44, v45);
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
  AssetManager_o *v5; // x21
  __int64 v6; // x1
  AssetData_o *AssetData; // x0
  int32_t entryCount; // w8
  AssetData_o *v9; // x20
  const MethodInfo *v10; // x3
  System_Collections_Generic_Dictionary_object__object__o *assetResourceDic; // x0
  const MethodInfo *v12; // x1
  int32_t v13; // w8

  v5 = this;
  if ( (byte_4B01056 & 1) == 0 )
  {
    sub_1BC3008(&AssetData_TypeInfo, name);
    this = (AssetManager_o *)sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__AssetData__Add__, v6);
    byte_4B01056 = 1;
  }
  AssetData = AssetManager__GetAssetData(this, v5->fields.assetResourceDic, name, v3);
  if ( AssetData )
  {
    entryCount = AssetData->fields.entryCount;
    v9 = AssetData;
    if ( (entryCount & 0x80000000) == 0 )
      AssetData->fields.entryCount = entryCount + 1;
  }
  else
  {
    v9 = (AssetData_o *)sub_1BC3254(AssetData_TypeInfo);
    AssetData___ctor(v9, 1, name, v10);
    if ( !v9 )
      goto LABEL_14;
    if ( !AssetData__SetResource(v9, v12) )
      return 0LL;
    v13 = v9->fields.entryCount;
    if ( (v13 & 0x80000000) == 0 )
      v9->fields.entryCount = v13 + 1;
    assetResourceDic = (System_Collections_Generic_Dictionary_object__object__o *)v5->fields.assetResourceDic;
    if ( !assetResourceDic )
LABEL_14:
      sub_1BC3264(assetResourceDic, v12);
    System_Collections_Generic_Dictionary_object__object___Add(
      assetResourceDic,
      (Il2CppObject *)name,
      (Il2CppObject *)v9,
      (const MethodInfo_336CFE8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
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
  System_Collections_Generic_Dictionary_object__object__o *assetBundleReleaseDic; // x0
  int32_t entryCount; // w8
  _BOOL8 Status; // x0
  const MethodInfo *v16; // x3
  AssetData_o *v17; // x0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x4
  AssetData_o *v20; // x22
  int32_t v21; // w8
  const MethodInfo *v22; // x1
  int32_t v23; // w8

  v8 = this;
  if ( (byte_4B01051 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_1BC3008(
                               &Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__,
                               name);
    byte_4B01051 = 1;
  }
  if ( !name )
  {
    LOBYTE(v17) = 0;
    return (char)v17;
  }
  AssetData = AssetManager__GetAssetData(
                this,
                v8->fields.assetBundleReleaseDic,
                name,
                *(const MethodInfo **)&loadParallelMax);
  if ( !AssetData )
    goto LABEL_11;
  v12 = AssetData;
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)v8->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
    sub_1BC3264(0LL, v10);
  System_Collections_Generic_Dictionary_object__object___Remove(
    assetBundleReleaseDic,
    (Il2CppObject *)name,
    (const MethodInfo_336E4E4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
  if ( v12->fields.objectList )
  {
    entryCount = v12->fields.entryCount;
    if ( (entryCount & 0x80000000) == 0 )
      v12->fields.entryCount = entryCount + 1;
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, AssetData_o *, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        v12,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
  else
  {
LABEL_11:
    Status = AssetManager__AddEntryLoadStatus(v8, 0, name, callbackFunc, v11);
    if ( !Status )
    {
      v17 = AssetManager__GetAssetData((AssetManager_o *)Status, v8->fields.assetBundleDic, name, v16);
      if ( !v17 )
        return (char)v17;
      v20 = v17;
      if ( v17->fields.objectList )
      {
        if ( !v17->fields.isLoadResources )
        {
          v23 = v17->fields.entryCount;
          if ( (v23 & 0x80000000) == 0 )
            v17->fields.entryCount = v23 + 1;
          if ( callbackFunc )
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, AssetData_o *, _QWORD))callbackFunc->fields.m_target)(
              callbackFunc->fields.original_method_info,
              v17,
              *(_QWORD *)&callbackFunc->fields.extra_arg);
          goto LABEL_19;
        }
        AssetData__ReleaseData(v17, v18);
      }
      v21 = v20->fields.entryCount;
      if ( (v21 & 0x80000000) == 0 )
        v20->fields.entryCount = v21 + 1;
      AssetManager__AddLoadWaitStatus_39595120(v8, v20, callbackFunc, 0LL, v19);
      v8->fields.loadParallelMax = loadParallelMax;
      AssetManager__LoadStart(v8, v22);
    }
  }
LABEL_19:
  LOBYTE(v17) = 1;
  return (char)v17;
}


bool __fastcall AssetManager__LoadAssetStorage_39578184(
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

  if ( (byte_4B01053 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_string__AddRange__, nameList);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__IndexOf__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__RemoveRange__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__Remove__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_string___ctor__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__get_Count__, v13);
    sub_1BC3008(&System_Collections_Generic_List_string__TypeInfo, v14);
    sub_1BC3008(&AssetLoader_LoadEndDataHandler_TypeInfo, v15);
    sub_1BC3008(&Method_AssetManager___c__DisplayClass172_0__LoadAssetStorage_b__0__, v16);
    sub_1BC3008(&AssetManager___c__DisplayClass172_0_TypeInfo, v17);
    byte_4B01053 = 1;
  }
  v18 = sub_1BC3254(AssetManager___c__DisplayClass172_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_31;
  *(_QWORD *)(v18 + 40) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v18 + 40), (int32_t)this, v21, v22);
  *(_QWORD *)(v18 + 48) = callbackFunc;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v18 + 48), (int32_t)callbackFunc, v23, v24);
  *(_DWORD *)(v18 + 56) = loadParallelMax;
  v25 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v18 + 24) = v25;
  v26 = (System_Collections_Generic_List_object__o **)(v18 + 24);
  sub_1BC2FAC((CGThumbnailListItem_o *)(v18 + 24), (int32_t)v25, v27, v28);
  AssetStorage = *(System_Collections_Generic_List_object__o **)(v18 + 24);
  if ( !AssetStorage
    || (System_Collections_Generic_List_object___AddRange(
          AssetStorage,
          (System_Collections_Generic_IEnumerable_T__o *)nameList,
          (const MethodInfo_36A104C *)Method_System_Collections_Generic_List_string__AddRange__),
        *(_DWORD *)(v18 + 16) = 0,
        *(_BYTE *)(v18 + 32) = 0,
        !nameList) )
  {
LABEL_31:
    sub_1BC3264(AssetStorage, v20);
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
        sub_1BC326C(AssetStorage, v20, v29);
      v36 = nameList->m_Items[v33];
      if ( !v36 )
      {
        AssetStorage = *v26;
        if ( !*v26 )
          goto LABEL_31;
        AssetStorage = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Remove(
                                                                      AssetStorage,
                                                                      0LL,
                                                                      (const MethodInfo_36A2368 *)Method_System_Collections_Generic_List_string__Remove__);
        goto LABEL_23;
      }
      if ( !v35 )
        goto LABEL_22;
      v37 = *v34;
      if ( !*v34 )
      {
        v37 = (AssetLoader_LoadEndDataHandler_o *)sub_1BC3254(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v37,
          (Il2CppObject *)v18,
          Method_AssetManager___c__DisplayClass172_0__LoadAssetStorage_b__0__,
          v38);
        *(_QWORD *)(v18 + 64) = v37;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v18 + 64), (int32_t)v37, v39, v40);
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
                                                                  (const MethodInfo_36A1AE0 *)Method_System_Collections_Generic_List_string__IndexOf__);
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
        (const MethodInfo_36A26AC *)Method_System_Collections_Generic_List_string__RemoveRange__);
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


bool __fastcall AssetManager__LoadAsset_39595944(
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

  if ( (byte_4B01030 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v1);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_4B01030 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  if ( BYTE2(Instance[3].klass) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( Instance )
    {
      monitor = Instance[6].monitor;
      if ( monitor )
        return monitor[6] > 0;
    }
LABEL_9:
    sub_1BC3264(Instance, v4);
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
  int32_t entryCount; // w8
  _BOOL8 Status; // x0
  const MethodInfo *v25; // x3
  AssetData_o *v26; // x23
  System_Collections_Generic_List_object__o *v27; // x24
  __int64 v28; // x2
  const MethodInfo *v29; // x3
  struct UnityEngine_Object_array *objectList; // x26
  __int64 v31; // x8
  unsigned __int64 v32; // x27
  int max_length; // w8
  Il2CppObject *v34; // x25
  __int64 v35; // x23
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  int32_t v40; // w9
  int v41; // w8
  System_String_array *v42; // x0
  const MethodInfo *v43; // x4
  const MethodInfo *v44; // x1
  AssetData_o *v46; // [xsp+8h] [xbp-68h]

  if ( (byte_4B01052 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__, name);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__AddRange__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__Add__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__ToArray__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_string___ctor__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__get_Count__, v15);
    sub_1BC3008(&System_Collections_Generic_List_string__TypeInfo, v16);
    byte_4B01052 = 1;
  }
  LOBYTE(v17) = 0;
  if ( name && resourceNames )
  {
    if ( *(_QWORD *)&resourceNames->max_length )
    {
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
          goto LABEL_45;
        System_Collections_Generic_Dictionary_object__object___Remove(
          assetBundleReleaseDic,
          (Il2CppObject *)name,
          (const MethodInfo_336E4E4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
        if ( v21->fields.objectList )
        {
          entryCount = v21->fields.entryCount;
          if ( (entryCount & 0x80000000) == 0 )
            v21->fields.entryCount = entryCount + 1;
          if ( callbackFunc )
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, AssetData_o *, _QWORD))callbackFunc->fields.m_target)(
              callbackFunc->fields.original_method_info,
              v21,
              *(_QWORD *)&callbackFunc->fields.extra_arg);
          goto LABEL_41;
        }
      }
      Status = AssetManager__AddEntryLoadStatus(this, 0, name, callbackFunc, v20);
      if ( Status )
      {
LABEL_41:
        LOBYTE(v17) = 1;
        return (char)v17;
      }
      v17 = AssetManager__GetAssetData((AssetManager_o *)Status, this->fields.assetBundleDic, name, v25);
      if ( v17 )
      {
        v26 = v17;
        v27 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_string__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v27,
          (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_string___ctor__);
        objectList = v26->fields.objectList;
        if ( objectList )
        {
          v31 = *(_QWORD *)&resourceNames->max_length;
          v46 = v26;
          if ( (int)v31 >= 1 )
          {
            v32 = 0LL;
            while ( 1 )
            {
              if ( v32 >= (unsigned int)v31 )
                goto LABEL_46;
              max_length = objectList->max_length;
              v34 = (Il2CppObject *)resourceNames->m_Items[v32];
              if ( max_length >= 1 )
                break;
LABEL_26:
              if ( !v27 )
                goto LABEL_45;
              items = v27->fields._items;
              v37 = Method_System_Collections_Generic_List_string__Add__;
              ++v27->fields._version;
              if ( !items )
                goto LABEL_45;
              size = v27->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v27,
                  v34,
                  *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
              }
              else
              {
                v39 = &items->obj.klass + size;
                v27->fields._size = size + 1;
                v39[4] = (Il2CppClass *)v34;
                sub_1BC2FAC((CGThumbnailListItem_o *)(v39 + 4), (int32_t)v34, v28, v29);
              }
LABEL_31:
              LODWORD(v31) = resourceNames->max_length;
              if ( (__int64)++v32 >= (int)v31 )
                goto LABEL_32;
            }
            v35 = 0LL;
            while ( (unsigned int)v35 < max_length )
            {
              assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)objectList->m_Items[v35];
              if ( !assetBundleReleaseDic )
                goto LABEL_45;
              assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_Object__get_name(
                                                                                                   (UnityEngine_Object_o *)assetBundleReleaseDic,
                                                                                                   0LL);
              if ( !v34 )
                goto LABEL_45;
              assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)System_String__Equals_62383952(
                                                                                                   (System_String_o *)v34,
                                                                                                   (System_String_o *)assetBundleReleaseDic,
                                                                                                   0LL);
              if ( ((unsigned __int8)assetBundleReleaseDic & 1) != 0 )
                goto LABEL_31;
              max_length = objectList->max_length;
              if ( (int)++v35 >= max_length )
                goto LABEL_26;
            }
LABEL_46:
            sub_1BC326C(assetBundleReleaseDic, v19, v28);
          }
LABEL_32:
          v26 = v46;
          if ( !v27 )
LABEL_45:
            sub_1BC3264(assetBundleReleaseDic, v19);
        }
        else
        {
          if ( !v27 )
            goto LABEL_45;
          System_Collections_Generic_List_object___AddRange(
            v27,
            (System_Collections_Generic_IEnumerable_T__o *)resourceNames,
            (const MethodInfo_36A104C *)Method_System_Collections_Generic_List_string__AddRange__);
        }
        v40 = v26->fields.entryCount;
        v41 = v27->fields._size;
        if ( (v40 & 0x80000000) == 0 )
          v26->fields.entryCount = v40 + 1;
        if ( v41 < 1 )
        {
          if ( callbackFunc )
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, AssetData_o *, _QWORD))callbackFunc->fields.m_target)(
              callbackFunc->fields.original_method_info,
              v26,
              *(_QWORD *)&callbackFunc->fields.extra_arg);
        }
        else
        {
          v42 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                         v27,
                                         (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_string__ToArray__);
          AssetManager__AddLoadWaitStatus_39595120(this, v26, callbackFunc, v42, v43);
          this->fields.loadParallelMax = loadParallelMax;
          AssetManager__LoadStart(this, v44);
        }
        goto LABEL_41;
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

  if ( (byte_4B0104C & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__Dispose__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__MoveNext__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__get_Current__, v5);
    sub_1BC3008(&Method_UnityEngine_GameObject_AddComponent_AssetLoader___, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_AssetLoader__Add__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_AssetLoader__GetEnumerator__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v9);
    sub_1BC3008(&NetworkManager_TypeInfo, v10);
    sub_1BC3008(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__, v12);
    sub_1BC3008(&Method_AssetManager___c__DisplayClass151_0__LoadStart_b__0__, v13);
    sub_1BC3008(&AssetManager___c__DisplayClass151_0_TypeInfo, v14);
    sub_1BC3008(&StringLiteral_5180/*"DelayLoadStart"*/, v15);
    byte_4B0104C = 1;
  }
  memset(&v50, 0, sizeof(v50));
  v16 = sub_1BC3254(AssetManager___c__DisplayClass151_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_49;
  *(_QWORD *)(v16 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v16 + 16), (int32_t)this, v19, v20);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFD46F )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v18);
    byte_4AFD46F = 1;
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
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_AssetLoader__GetEnumerator__);
    v50 = v49;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v50,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_AssetLoader__MoveNext__) )
      ;
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v50,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_AssetLoader__Dispose__);
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
    (System_String_o *)StringLiteral_5180/*"DelayLoadStart"*/,
    0LL);
  processingAssetLoaderList = this->fields.downLoadWaitList;
  if ( !processingAssetLoaderList
    || (v25 = System_Collections_Generic_Queue_object___Dequeue(
                (System_Collections_Generic_Queue_T__o *)processingAssetLoaderList,
                (const MethodInfo_3815C08 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__),
        *(_QWORD *)(v16 + 24) = v25,
        v26 = v16 + 24,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v16 + 24), (int32_t)v25, v27, v28),
        (v29 = *(_QWORD *)(v16 + 24)) == 0) )
  {
LABEL_49:
    sub_1BC3264(processingAssetLoaderList, v18);
  }
  if ( (byte_4B01060 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_1/*""*/, v18);
    byte_4B01060 = 1;
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
              (const MethodInfo_30558B0 *)Method_UnityEngine_GameObject_AddComponent_AssetLoader___);
      *(_QWORD *)(v16 + 32) = v33;
      v34 = (Il2CppObject **)(v16 + 32);
      sub_1BC2FAC((CGThumbnailListItem_o *)(v16 + 32), (int32_t)v33, v35, v36);
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
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          }
          else
          {
            v42 = v39 + 8 * v41;
            *((_DWORD *)processingAssetLoaderList + 6) = v41 + 1;
            *(_QWORD *)(v42 + 32) = v18;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v42 + 32), (int32_t)v18, v37, v38);
          }
          if ( *(_QWORD *)v26 )
          {
            processingAssetLoaderList = *v34;
            if ( *v34 )
            {
              v45 = *(_QWORD *)(*(_QWORD *)v26 + 16LL);
              *((_QWORD *)processingAssetLoaderList + 4) = v45;
              sub_1BC2FAC((CGThumbnailListItem_o *)((char *)processingAssetLoaderList + 32), v45, v43, v44);
              if ( *(_QWORD *)v26 )
              {
                processingAssetLoaderList = *v34;
                if ( *v34 )
                {
                  v47 = *(AssetLoader_LoadEndDataHandler_o **)(*(_QWORD *)v26 + 32LL);
                  if ( v47 )
                    AssetLoader__add_endCallback2((AssetLoader_o *)processingAssetLoaderList, v47, v46);
                  v48 = sub_1BC3254(System_Action_TypeInfo);
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

  if ( (byte_4B01040 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Application_TypeInfo, isDecide);
    sub_1BC3008(&ManagementManager_TypeInfo, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v6);
    byte_4B01040 = 1;
  }
  if ( isDecide )
  {
    this->fields.isErrorDialog = 0;
  }
  else
  {
    if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    if ( !byte_4B01069 )
    {
      sub_1BC3008(&ManagementManager_TypeInfo, isDecide);
      byte_4B01069 = 1;
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
      UnityEngine_Application__Quit_69829232(0LL);
    }
    else
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
      if ( !Instance )
        sub_1BC3264(0LL, v9);
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
  if ( (byte_4B0104E & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_AssetLoader__RemoveAt__, loader);
    sub_1BC3008(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v6);
    this = (AssetManager_o *)sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    byte_4B0104E = 1;
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
             (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
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
    sub_1BC3264(this, loader);
  }
  System_Collections_Generic_List_object___RemoveAt(
    (System_Collections_Generic_List_object__o *)this,
    v9,
    (const MethodInfo_36A2614 *)Method_System_Collections_Generic_List_AssetLoader__RemoveAt__);
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
  const MethodInfo *v8; // x1
  AssetData_o *v9; // x21
  bool v10; // w0
  __int64 v11; // x1
  struct System_Collections_Generic_Dictionary_string__AssetData__o *assetResourceDic; // x0

  if ( (byte_4B0104F & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__, *(_QWORD *)&type);
    byte_4B0104F = 1;
  }
  Asset = AssetManager__GetAsset(this, type, name, method);
  if ( Asset )
  {
    v9 = Asset;
    v10 = AssetData__RemoveEntry(Asset, v8);
    if ( type == 1 && v10 )
    {
      assetResourceDic = this->fields.assetResourceDic;
      if ( !assetResourceDic )
        sub_1BC3264(0LL, v11);
      System_Collections_Generic_Dictionary_object__object___Remove(
        (System_Collections_Generic_Dictionary_object__object__o *)assetResourceDic,
        (Il2CppObject *)v9->fields.name,
        (const MethodInfo_336E4E4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
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
  System_Collections_Generic_Dictionary_object__object__o *assetResourceDic; // x0

  v5 = this;
  if ( (byte_4B01057 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_1BC3008(
                               &Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__,
                               name);
    byte_4B01057 = 1;
  }
  AssetData = AssetManager__GetAssetData(this, v5->fields.assetResourceDic, name, v3);
  if ( AssetData && AssetData__RemoveEntry(AssetData, v7) )
  {
    assetResourceDic = (System_Collections_Generic_Dictionary_object__object__o *)v5->fields.assetResourceDic;
    if ( !assetResourceDic )
      sub_1BC3264(0LL, v8);
    System_Collections_Generic_Dictionary_object__object___Remove(
      assetResourceDic,
      (Il2CppObject *)name,
      (const MethodInfo_336E4E4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
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

  AssetData = AssetManager__GetAssetData(this, this->fields.assetBundleDic, name, v3);
  if ( AssetData )
    AssetData__RemoveEntry(AssetData, v5);
}


void __fastcall AssetManager__ReleaseAssetStorageAll(
        AssetManager_o *this,
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v3; // x8
  unsigned __int64 v6; // x21

  if ( !nameList )
    sub_1BC3264(this, 0LL);
  v3 = *(_QWORD *)&nameList->max_length;
  if ( (int)v3 >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v3 )
        sub_1BC326C(this, nameList, method);
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
  const MethodInfo *v5; // x1

  AssetData = AssetManager__GetAssetData(this, this->fields.assetBundleDic, name, v3);
  if ( AssetData )
    AssetData__RemoveEntryAll(AssetData, v5);
}


void __fastcall AssetManager__ReleaseAssetStorage_39580496(
        AssetManager_o *this,
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v3; // x8
  unsigned __int64 v6; // x21

  if ( !nameList )
    sub_1BC3264(this, 0LL);
  v3 = *(_QWORD *)&nameList->max_length;
  if ( (int)v3 >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v3 )
        sub_1BC326C(this, nameList, method);
      AssetManager__ReleaseAssetStorage(this, nameList->m_Items[v6], method);
      LODWORD(v3) = nameList->max_length;
      ++v6;
    }
    while ( (__int64)v6 < (int)v3 );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetManager__ReleaseAsset_39571228(
        AssetManager_o *this,
        int32_t type,
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v4; // x8
  unsigned __int64 v8; // x22

  if ( !nameList )
    sub_1BC3264(this, type);
  v4 = *(_QWORD *)&nameList->max_length;
  if ( (int)v4 >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)v4 )
        sub_1BC326C(this, *(_QWORD *)&type, nameList);
      AssetManager__ReleaseAsset(this, type, nameList->m_Items[v8], method);
      LODWORD(v4) = nameList->max_length;
      ++v8;
    }
    while ( (__int64)v8 < (int)v4 );
  }
}


void __fastcall AssetManager__ReleaseAsset_39571528(
        AssetManager_o *this,
        AssetData_o *assetInfo,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( assetInfo )
    AssetManager__ReleaseAsset(this, assetInfo->fields.type, assetInfo->fields.name, v3);
}


void __fastcall AssetManager__ReleaseAsset_39571728(
        AssetManager_o *this,
        AssetData_array *assetInfoList,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v4; // x8
  unsigned __int64 v7; // x21
  AssetData_o *v8; // x8

  if ( !assetInfoList )
    sub_1BC3264(this, 0LL);
  v4 = *(_QWORD *)&assetInfoList->max_length;
  if ( (int)v4 >= 1 )
  {
    v7 = 0LL;
    do
    {
      if ( v7 >= (unsigned int)v4 )
        sub_1BC326C(this, assetInfoList, method);
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
  if ( (byte_4B0104B & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__AssetData__Add__, info);
    this = (AssetManager_o *)sub_1BC3008(
                               &Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__,
                               v5);
    byte_4B0104B = 1;
  }
  if ( !info )
    goto LABEL_11;
  if ( info->fields.entryCount <= 0 && info->fields.objectList )
  {
    this = (AssetManager_o *)v4->fields.assetBundleReleaseDic;
    if ( !this )
      goto LABEL_11;
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)this,
            (Il2CppObject *)info->fields.name,
            (const MethodInfo_336D1DC *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__) )
    {
      this = (AssetManager_o *)v4->fields.assetBundleReleaseDic;
      if ( this )
      {
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)this,
          (Il2CppObject *)info->fields.name,
          (Il2CppObject *)info,
          (const MethodInfo_336CFE8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
        return;
      }
LABEL_11:
      sub_1BC3264(this, info);
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
  if ( !this->fields.requestUnloadUnusedAssets )
  {
    this->fields.requestUnloadUnusedAssets = 1;
    v4 = AssetManager__coUnloadUnusedAssets(this, (const MethodInfo *)callback);
    UnityEngine_MonoBehaviour__StartCoroutine_70019872((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
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
  Il2CppObject *currentValue; // x22
  System_String_o *monitor; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v18; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B0103A & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, path);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v5);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v6);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v7);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v8);
    sub_1BC3008(&StringLiteral_1039/*"/"*/, v9);
    byte_4B0103A = 1;
  }
  memset(&v18, 0, sizeof(v18));
  Values = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)System_String__Concat_62348648(
                                                                                      path,
                                                                                      (System_String_o *)StringLiteral_1039/*"/"*/,
                                                                                      0LL);
  assetBundleDic = this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (v13 = (System_String_o *)Values,
        (Values = System_Collections_Generic_Dictionary_object__object___get_Values(
                    (System_Collections_Generic_Dictionary_object__object__o *)assetBundleDic,
                    (const MethodInfo_336CE18 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL) )
  {
    sub_1BC3264(Values, v11);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v18,
    Values,
    (const MethodInfo_39D37E4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v18,
            (const MethodInfo_34691A4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v14 )
      break;
    currentValue = v18.fields._currentValue;
    if ( !v18.fields._currentValue )
      sub_1BC3264(v14, v15);
    monitor = (System_String_o *)v18.fields._currentValue[1].monitor;
    if ( !monitor )
      sub_1BC3264(0LL, v15);
    if ( System_String__StartsWith(monitor, v13, 0LL) )
      LODWORD(currentValue[2].monitor) = 0;
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v18,
    (const MethodInfo_34691A0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
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

  if ( (byte_4B00FFE & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, v1);
    sub_1BC3008(&ManagerConfig_TypeInfo, v2);
    byte_4B00FFE = 1;
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

  if ( (byte_4B00FFF & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, v1);
    sub_1BC3008(&ManagerConfig_TypeInfo, v2);
    byte_4B00FFF = 1;
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
  const MethodInfo *v10; // x2
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B01032 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, method);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v3);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v4);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v5);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v6);
    byte_4B01032 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      assetBundleDic,
                                                                                      (const MethodInfo_336CE18 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
    sub_1BC3264(assetBundleDic, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v11,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_39D37E4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v11,
           (const MethodInfo_34691A4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v8 )
      break;
    if ( !v11.fields._currentValue )
      sub_1BC3264(v8, v9);
    if ( LODWORD(v11.fields._currentValue[2].monitor) != HIDWORD(v11.fields._currentValue[2].monitor) )
      AssetManager__AddLoadWaitStatus_39583704(this, (AssetData_o *)v11.fields._currentValue, v10);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v11,
    (const MethodInfo_34691A0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
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

  if ( (byte_4B01042 & 1) == 0 )
  {
    sub_1BC3008(&Method_AssetManager_ConfigWriteRequestThread__, method);
    sub_1BC3008(&System_Threading_ThreadStart_TypeInfo, v3);
    sub_1BC3008(&System_Threading_Thread_TypeInfo, v4);
    byte_4B01042 = 1;
  }
  this->fields.reserveWriteRequest = 0;
  v5 = (System_Threading_ThreadStart_o *)sub_1BC3254(System_Threading_ThreadStart_TypeInfo);
  System_Threading_ThreadStart___ctor(v5, (Il2CppObject *)this, Method_AssetManager_ConfigWriteRequestThread__, 0LL);
  v6 = (System_Threading_Thread_o *)sub_1BC3254(System_Threading_Thread_TypeInfo);
  System_Threading_Thread___ctor(v6, v5, 0LL);
  this->fields.writeRequestThread = v6;
  p_writeRequestThread = &this->fields.writeRequestThread;
  sub_1BC2FAC((CGThumbnailListItem_o *)p_writeRequestThread, (int32_t)v6, v8, v9);
  if ( !*p_writeRequestThread )
    sub_1BC3264(0LL, v10);
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
        const MethodInfo_2FE3730 *method)
{
  __int64 v8; // x1
  AssetData_o *AssetStorage; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *Object_object__50213776; // x1
  Il2CppObject *v13; // x19

  if ( !method->rgctx_data )
  {
    sub_1BC3008(&AssetManager_TypeInfo, path);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v8);
    if ( !method->rgctx_data )
      sub_1C134C8(method);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0LL);
  if ( AssetStorage )
    Object_object__50213776 = AssetData__GetObject_object__50213776(
                                AssetStorage,
                                name,
                                (const MethodInfo_2FE3390 *)method->rgctx_data->_2_AssetData_GetObject_T_);
  else
    Object_object__50213776 = 0LL;
  *data = Object_object__50213776;
  sub_1BC2FAC((CGThumbnailListItem_o *)data, (int32_t)Object_object__50213776, v10, v11);
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
  Il2CppObject *Object_object__50213776; // x20
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *Component_object; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UnityEngine_Object_o *v18; // x19

  if ( (byte_4B01058 & 1) == 0 )
  {
    sub_1BC3008(&Method_AssetData_GetObject_GameObject____76809672, name);
    sub_1BC3008(&AssetManager_TypeInfo, v7);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v8);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v9);
    byte_4B01058 = 1;
  }
  *atlas = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)atlas, 0, (int32_t)atlasName, method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(name, v10);
  if ( AssetStorage )
    Object_object__50213776 = AssetData__GetObject_object__50213776(
                                AssetStorage,
                                atlasName,
                                (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
  else
    Object_object__50213776 = 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v13 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__50213776, 0LL, 0LL);
  if ( v13 )
  {
    if ( !Object_object__50213776 )
      sub_1BC3264(v13, v14);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object_object__50213776,
                         (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    *atlas = (UIAtlas_o *)Component_object;
    sub_1BC2FAC((CGThumbnailListItem_o *)atlas, (int32_t)Component_object, v16, v17);
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
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B00FFC & 1) == 0 )
  {
    sub_1BC3008(&AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_TypeInfo, method);
    byte_4B00FFC = 1;
  }
  v3 = sub_1BC3254(AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_TypeInfo);
  AssetManager__WaitForExecutionUnloadUnuseAssets_d__41___ctor(
    (AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_1BC3264(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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
  if ( (byte_4B0105E & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, method);
    sub_1BC3008(&SoundManager_TypeInfo, v3);
    this = (AssetManager_o *)sub_1BC3008(&StringLiteral_9240/*"NOW_LOADING"*/, v4);
    byte_4B0105E = 1;
  }
  processingAssetLoaderList = v2->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
    sub_1BC3264(this, method);
  if ( processingAssetLoaderList->fields._size >= 1 )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playBgm((System_String_o *)StringLiteral_9240/*"NOW_LOADING"*/, 0LL);
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

  if ( (byte_4B00FFA & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_ResourceUnloadEventHandler_TypeInfo, value);
    byte_4B00FFA = 1;
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
    v9 = sub_1BFD098(p_unloadCallbacks, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BC3524(v8);
  AssetManager__remove_unloadCallbacks(v11, v12, v13);
}


void __fastcall AssetManager__cancelDownloadAssetStorage(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4B0101D & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v1);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_4B0101D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1BC3264(v4, v5);
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B01043 & 1) == 0 )
  {
    sub_1BC3008(&AssetManager__coUnloadUnusedAssets_d__141_TypeInfo, method);
    byte_4B01043 = 1;
  }
  v3 = sub_1BC3254(AssetManager__coUnloadUnusedAssets_d__141_TypeInfo);
  AssetManager__coUnloadUnusedAssets_d__141___ctor((AssetManager__coUnloadUnusedAssets_d__141_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1BC3264(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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
      return System_String__Equals_62383952(name1, name2, 0LL);
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
            list1 = (System_String_array *)System_String__Equals_62383952(
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
      sub_1BC326C(list1, list2, method);
    }
  }
  else if ( list2 )
  {
    return list2->max_length == 0;
  }
  return 1;
}


bool __fastcall AssetManager__compAssetStorageList_39569292(
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
              sub_1BC3264(0LL, list);
            assetList = (AssetData_array *)System_String__Equals_62383952(name, (System_String_o *)list, 0LL);
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
      sub_1BC326C(assetList, list, method);
    }
  }
  else if ( list )
  {
    return list->max_length == 0;
  }
  return 1;
}


bool __fastcall AssetManager__compAssetStorage_39569020(
        AssetData_o *data,
        System_String_o *name,
        const MethodInfo *method)
{
  struct System_String_o *v3; // x0
  int32_t stringLength; // w8

  if ( data && (v3 = data->fields.name) != 0LL )
  {
    if ( name )
      return System_String__Equals_62383952(v3, name, 0LL);
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

  if ( (byte_4B01002 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v1);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_4B01002 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1BC3264(v4, v5);
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

  if ( (byte_4B01020 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_4B01020 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_1BC3264(v9, v10);
  return AssetManager__DownloadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, v11);
}


bool __fastcall AssetManager__downloadAssetStorage_39575800(
        System_String_array *nameList,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4B01021 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_4B01021 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v7 )
    return 0;
  if ( !Instance )
    sub_1BC3264(v7, v8);
  return AssetManager__DownloadAssetStorage_39575992((AssetManager_o *)Instance, nameList, callbackFunc, 1, v9);
}


AssetData_o *__fastcall AssetManager__getAsset(int32_t type, System_String_o *name, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4B0100F & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, name);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_4B0100F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v7 )
    return 0LL;
  if ( !Instance )
    sub_1BC3264(v7, v8);
  return AssetManager__GetAsset((AssetManager_o *)Instance, type, name, v9);
}


AssetData_o *__fastcall AssetManager__getAssetResource(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  bool v7; // w8
  AssetData_o *result; // x0

  if ( (byte_4B0102D & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4B0102D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  result = 0LL;
  if ( !v7 )
  {
    if ( !Instance )
      sub_1BC3264(0LL, v5);
    result = AssetManager__GetAssetData(
               0LL,
               (System_Collections_Generic_Dictionary_string__AssetData__o *)Instance[5].klass,
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
  Il2CppObject *Instance; // x20
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  bool v7; // w8
  AssetData_o *result; // x0

  if ( (byte_4B01026 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4B01026 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  result = 0LL;
  if ( !v7 )
  {
    if ( !Instance )
      sub_1BC3264(0LL, v5);
    result = AssetManager__GetAssetData(
               0LL,
               (System_Collections_Generic_Dictionary_string__AssetData__o *)Instance[4].klass,
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


AssetData_o *__fastcall AssetManager__getAssetStorageData(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4B01027 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4B01027 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0LL;
  if ( !Instance )
    sub_1BC3264(v5, v6);
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

  if ( (byte_4B0101B & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4B0101B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0LL;
  if ( !Instance )
    sub_1BC3264(v5, v6);
  return AssetManager__GetAssetStorageList((AssetManager_o *)Instance, path, v7);
}


AssetData_array *__fastcall AssetManager__getAssetStorage_39579352(
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4B01028 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4B01028 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0LL;
  if ( !Instance )
    sub_1BC3264(v5, v6);
  return AssetManager__GetAssetStorage_39579532((AssetManager_o *)Instance, nameList, v7);
}


bool __fastcall AssetManager__getAssetStorage_39579800(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4B01029 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_4B01029 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v7 )
    return 0;
  if ( !Instance )
    sub_1BC3264(v7, v8);
  return AssetManager__GetAssetStorage_39579988((AssetManager_o *)Instance, name, callbackFunc, v9);
}


bool __fastcall AssetManager__getAsset_39570048(
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

  if ( (byte_4B01010 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, name);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_4B01010 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_1BC3264(v9, v10);
  return AssetManager__GetAsset_39570256((AssetManager_o *)Instance, type, name, callbackFunc, v11);
}


bool __fastcall AssetManager__getAsset_39570356(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4B01011 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_4B01011 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v7 )
    return 0;
  if ( !Instance )
    sub_1BC3264(v7, v8);
  return AssetManager__GetAsset_39570544((AssetManager_o *)Instance, name, callbackFunc, v9);
}


int64_t __fastcall AssetManager__getDownloadSize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4B01016 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v1);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_4B01016 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v4 )
    return 0LL;
  if ( !Instance )
    sub_1BC3264(v4, v5);
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

  if ( (byte_4B0100C & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, method);
    sub_1BC3008(&System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo, v3);
    sub_1BC3008(&System_Text_StringBuilder_TypeInfo, v4);
    sub_1BC3008(&System_Text_UTF8Encoding_TypeInfo, v5);
    sub_1BC3008(&StringLiteral_24803/*"{0,0:x2}"*/, v6);
    sub_1BC3008(&StringLiteral_1010/*".bin"*/, v7);
    byte_4B0100C = 1;
  }
  v8 = (System_Security_Cryptography_SHA1CryptoServiceProvider_o *)sub_1BC3254(System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_SHA1CryptoServiceProvider___ctor(v8, 0LL);
  v9 = (System_Text_UTF8Encoding_o *)sub_1BC3254(System_Text_UTF8Encoding_TypeInfo);
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
  v13 = (System_Text_StringBuilder_o *)sub_1BC3254(System_Text_StringBuilder_TypeInfo);
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
        sub_1BC326C(appended, v11, v14);
      v20 = v12->m_Items[v18 + 4] ^ 0xAA;
      appended = (System_Text_StringBuilder_o *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v14, v15, v16);
      if ( !v13 )
        break;
      appended = System_Text_StringBuilder__AppendFormat(
                   v13,
                   (System_String_o *)StringLiteral_24803/*"{0,0:x2}"*/,
                   (Il2CppObject *)appended,
                   0LL);
      LODWORD(v17) = v12->max_length;
      if ( (__int64)++v18 >= (int)v17 )
        goto LABEL_11;
    }
LABEL_13:
    sub_1BC3264(appended, v11);
  }
LABEL_11:
  if ( !v13 )
    goto LABEL_13;
  System_Text_StringBuilder__Append_62432592(v13, (System_String_o *)StringLiteral_1010/*".bin"*/, 0LL);
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

  if ( (byte_4B0100B & 1) == 0 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, method);
    sub_1BC3008(&StringLiteral_1755/*"?t="*/, v3);
    sub_1BC3008(&StringLiteral_20837/*"jar:"*/, v4);
    byte_4B0100B = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !url )
    sub_1BC3264(v5, method);
  if ( !System_String__StartsWith(url, NetworkManager_TypeInfo->static_fields->FILE_URL_SCHEME, 0LL) )
  {
    v6 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v6 = NetworkManager_TypeInfo;
    }
    v7 = System_String__Concat_62348648((System_String_o *)StringLiteral_20837/*"jar:"*/, v6->static_fields->FILE_URL_SCHEME, 0LL);
    if ( !System_String__StartsWith(url, v7, 0LL) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v10 = NetworkManager__getTime(0LL) / 300;
      v8 = System_Int64__ToString((int64_t)&v10, 0LL);
      return System_String__Concat_62386896(url, (System_String_o *)StringLiteral_1755/*"?t="*/, v8, 0LL);
    }
  }
  return url;
}


System_String_o *__fastcall AssetManager__getUrlString_39542316(AssetData_o *data, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  AssetManager_c *v8; // x0
  char *DataServerAddress; // x0
  const MethodInfo *v10; // x1
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

  if ( (byte_4B0100D & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, method);
    sub_1BC3008(&NetworkManager_TypeInfo, v3);
    sub_1BC3008(&string___TypeInfo, v4);
    sub_1BC3008(&StringLiteral_15961/*"_"*/, v5);
    sub_1BC3008(&StringLiteral_20837/*"jar:"*/, v6);
    sub_1BC3008(&StringLiteral_1756/*"?v="*/, v7);
    byte_4B0100D = 1;
  }
  v8 = AssetManager_TypeInfo;
  v34 = 0LL;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  DataServerAddress = (char *)AssetManager__get_DataServerAddress((const MethodInfo *)v8);
  if ( !data )
    goto LABEL_27;
  v11 = (System_String_o *)DataServerAddress;
  DownloadName = AssetData__get_DownloadName(data, v10);
  DataServerAddress = (char *)System_String__Concat_62348648(v11, DownloadName, 0LL);
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
    v15 = System_String__Concat_62348648(
            (System_String_o *)StringLiteral_20837/*"jar:"*/,
            v14->static_fields->FILE_URL_SCHEME,
            0LL);
    if ( !System_String__StartsWith(v13, v15, 0LL) )
    {
      DataServerAddress = (char *)sub_1BC30B0(string___TypeInfo, 9LL);
      if ( DataServerAddress )
      {
        v18 = DataServerAddress;
        if ( !*((_DWORD *)DataServerAddress + 6) )
          goto LABEL_28;
        *((_QWORD *)DataServerAddress + 4) = v13;
        sub_1BC2FAC((CGThumbnailListItem_o *)(DataServerAddress + 32), (int32_t)v13, v16, v17);
        if ( *((_DWORD *)v18 + 6) <= 1u )
          goto LABEL_28;
        v20 = StringLiteral_1756/*"?v="*/;
        *((_QWORD *)v18 + 5) = StringLiteral_1756/*"?v="*/;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v18 + 40), v20, v16, v19);
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
        sub_1BC2FAC((CGThumbnailListItem_o *)(v18 + 48), v22, v16, v21);
        if ( *((_DWORD *)v18 + 6) <= 3u )
          goto LABEL_28;
        v24 = StringLiteral_15961/*"_"*/;
        *((_QWORD *)v18 + 7) = StringLiteral_15961/*"_"*/;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v18 + 56), v24, v16, v23);
        if ( *((_DWORD *)v18 + 6) <= 4u )
          goto LABEL_28;
        assetBundleDateVersion = AssetManager_TypeInfo->static_fields->assetBundleDateVersion;
        *((_QWORD *)v18 + 8) = assetBundleDateVersion;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v18 + 64), (int32_t)assetBundleDateVersion, v16, v25);
        if ( *((_DWORD *)v18 + 6) <= 5u )
          goto LABEL_28;
        v28 = StringLiteral_15961/*"_"*/;
        *((_QWORD *)v18 + 9) = StringLiteral_15961/*"_"*/;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v18 + 72), v28, v16, v27);
        HIDWORD(v34) = data->fields.size;
        DataServerAddress = (char *)System_Int32__ToString((int32_t)&v34 + 4, 0LL);
        if ( *((_DWORD *)v18 + 6) <= 6u
          || (*((_QWORD *)v18 + 10) = DataServerAddress,
              sub_1BC2FAC((CGThumbnailListItem_o *)(v18 + 80), (int32_t)DataServerAddress, v16, v29),
              *((_DWORD *)v18 + 6) <= 7u)
          || (v31 = StringLiteral_15961/*"_"*/,
              *((_QWORD *)v18 + 11) = StringLiteral_15961/*"_"*/,
              sub_1BC2FAC((CGThumbnailListItem_o *)(v18 + 88), v31, v16, v30),
              LODWORD(v34) = data->fields.crc,
              DataServerAddress = (char *)System_UInt32__ToString((uint32_t)&v34, 0LL),
              *((_DWORD *)v18 + 6) <= 8u) )
        {
LABEL_28:
          sub_1BC326C(DataServerAddress, v10, v16);
        }
        *((_QWORD *)v18 + 12) = DataServerAddress;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v18 + 96), (int32_t)DataServerAddress, v16, v32);
        return System_String__Concat_62389164((System_String_array *)v18, 0LL);
      }
LABEL_27:
      sub_1BC3264(DataServerAddress, v10);
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

  if ( (byte_4B01006 & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, v1);
    byte_4B01006 = 1;
  }
  Path = AssetStorageCache__GetPath(0LL);
  v3 = AssetManager_TypeInfo;
  v4 = Path;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v3 = AssetManager_TypeInfo;
  }
  return System_String__Concat_62348648(v4, v3->static_fields->configFileName, 0LL);
}


System_String_o *__fastcall AssetManager__get_CachePathName(const MethodInfo *method)
{
  __int64 v1; // x1
  AssetManager_c *v2; // x0

  if ( (byte_4B01004 & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, v1);
    byte_4B01004 = 1;
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

  if ( (byte_4B01005 & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, v1);
    byte_4B01005 = 1;
  }
  v2 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  DataServerAddress = AssetManager__get_DataServerAddress((const MethodInfo *)v2);
  return System_String__Concat_62348648(DataServerAddress, AssetManager_TypeInfo->static_fields->configFileName, 0LL);
}


System_String_o *__fastcall AssetManager__get_DataServerAddress(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_4B01003 & 1) == 0 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v1);
    byte_4B01003 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B0106B )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v1);
    byte_4B0106B = 1;
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

  if ( (byte_4B00FFD & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, v1);
    sub_1BC3008(&ManagerConfig_TypeInfo, v2);
    byte_4B00FFD = 1;
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
  Il2CppObject *currentValue; // x22
  int monitor; // w8
  char v14; // w19
  int v15; // w21
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v17; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B01033 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, attrib);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v5);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v6);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v7);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v8);
    byte_4B01033 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      assetBundleDic,
                                                                                      (const MethodInfo_336CE18 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
    sub_1BC3264(assetBundleDic, attrib);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v17,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_39D37E4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v17,
            (const MethodInfo_34691A4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v10 )
      break;
    currentValue = v17.fields._currentValue;
    if ( !v17.fields._currentValue )
      sub_1BC3264(v10, v11);
    monitor = (int)v17.fields._currentValue[2].monitor;
    if ( monitor >= 1 && monitor != HIDWORD(v17.fields._currentValue[2].monitor)
      || System_String__op_Equality(attrib, (System_String_o *)v17.fields._currentValue[2].klass, 0LL)
      && LODWORD(currentValue[2].monitor) != HIDWORD(currentValue[2].monitor) )
    {
      v14 = 1;
      v15 = 5;
      goto LABEL_14;
    }
  }
  v14 = 0;
  v15 = 6;
LABEL_14:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v17,
    (const MethodInfo_34691A0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  return v14 & (v15 == 5);
}


bool __fastcall AssetManager__isExistAssetStorage(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4B01017 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4B01017 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0;
  if ( !Instance )
    sub_1BC3264(v5, v6);
  return AssetManager__IsExistAssetStorage((AssetManager_o *)Instance, name, v7);
}


bool __fastcall AssetManager__isExistAssetStorage_39572256(System_String_array *nameList, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4B01018 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4B01018 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0;
  if ( !Instance )
    sub_1BC3264(v5, v6);
  return AssetManager__IsExistAssetStorage_39572436((AssetManager_o *)Instance, nameList, v7);
}


bool __fastcall AssetManager__isNeedDownload(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  AssetData_o *AssetData; // x0

  if ( (byte_4B01019 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4B01019 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
  {
    LOBYTE(AssetData) = 0;
  }
  else
  {
    if ( !Instance )
      sub_1BC3264(v5, v6);
    AssetData = AssetManager__GetAssetData(
                  (AssetManager_o *)v5,
                  (System_Collections_Generic_Dictionary_string__AssetData__o *)Instance[4].klass,
                  name,
                  v7);
    if ( AssetData )
      LOBYTE(AssetData) = AssetData->fields.nowVersion != AssetData->fields.newVersion;
  }
  return (char)AssetData;
}


bool __fastcall AssetManager__isNeedDownload_39572804(System_String_array *nameList, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4B0101A & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4B0101A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0;
  if ( !Instance )
    sub_1BC3264(v5, v6);
  return AssetManager__IsNeedDownload_39572984((AssetManager_o *)Instance, nameList, v7);
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

  if ( (byte_4B0100E & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, name);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_4B0100E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_1BC3264(v9, v10);
  return AssetManager__LoadAsset((AssetManager_o *)Instance, type, name, callbackFunc, v11);
}


AssetData_o *__fastcall AssetManager__loadAssetResource(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4B0102C & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4B0102C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0LL;
  if ( !Instance )
    sub_1BC3264(v5, v6);
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

  if ( (byte_4B01022 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_4B01022 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_1BC3264(v9, v10);
  return AssetManager__LoadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, v11);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AssetManager__loadAssetStorage_39577768(
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

  if ( (byte_4B01024 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, *(_QWORD *)&maxParallelLoad);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_4B01024 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_1BC3264(v9, v10);
  return AssetManager__LoadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, v11);
}


bool __fastcall AssetManager__loadAssetStorage_39577976(
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

  if ( (byte_4B01025 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_4B01025 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_1BC3264(v9, v10);
  return AssetManager__LoadAssetStorage_39578184(
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

  if ( (byte_4B01023 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, resourceNames);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v9);
    byte_4B01023 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v11 )
    return 0;
  if ( !Instance )
    sub_1BC3264(v11, v12);
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

  if ( (byte_4B0101E & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v1);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_4B0101E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1BC3264(v4, v5);
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

  if ( (byte_4B01012 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, name);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_4B01012 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !Instance )
      sub_1BC3264(v7, v8);
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

  if ( (byte_4B0102E & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4B0102E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1BC3264(v5, v6);
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

  if ( (byte_4B0102A & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4B0102A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1BC3264(v5, v6);
    AssetManager__ReleaseAssetStorage((AssetManager_o *)Instance, name, v7);
  }
}


void __fastcall AssetManager__releaseAssetStorage_39580320(System_String_array *nameList, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4B0102B & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4B0102B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1BC3264(v5, v6);
    AssetManager__ReleaseAssetStorage_39580496((AssetManager_o *)Instance, nameList, v7);
  }
}


void __fastcall AssetManager__releaseAsset_39571044(
        int32_t type,
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4B01013 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, nameList);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_4B01013 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !Instance )
      sub_1BC3264(v7, v8);
    AssetManager__ReleaseAsset_39571228((AssetManager_o *)Instance, type, nameList, v9);
  }
}


void __fastcall AssetManager__releaseAsset_39571344(AssetData_o *assetInfo, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4B01014 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4B01014 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1BC3264(v5, v6);
    if ( assetInfo )
      AssetManager__ReleaseAsset((AssetManager_o *)Instance, assetInfo->fields.type, assetInfo->fields.name, v7);
  }
}


void __fastcall AssetManager__releaseAsset_39571552(AssetData_array *assetInfoList, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4B01015 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4B01015 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1BC3264(v5, v6);
    AssetManager__ReleaseAsset_39571728((AssetManager_o *)Instance, assetInfoList, v7);
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

  if ( (byte_4B00FFB & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_ResourceUnloadEventHandler_TypeInfo, value);
    byte_4B00FFB = 1;
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
    v9 = sub_1BFD098(p_unloadCallbacks, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BC3524(v8);
  AssetManager__WaitForExecutionUnloadUnuseAssets(v11, v12);
}


void __fastcall AssetManager__resetAssetStorageVersion(System_String_o *path, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4B0101C & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4B0101C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1BC3264(v5, v6);
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

  if ( (byte_4B0101F & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v1);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_4B0101F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1BC3264(v4, v5);
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

  if ( (byte_4B01001 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, isUse);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4B01001 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !Instance && !v5 )
    sub_1BC3264(v5, v6);
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
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v5, v6);
}


void __fastcall AssetManager_LoadWaitStatus___ctor_39595072(
        AssetManager_LoadWaitStatus_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.data = data;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)data, v5, v6);
}


void __fastcall AssetManager_LoadWaitStatus___ctor_39595292(
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
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)data, v9, v10);
  this->fields.callbackFunc2 = callbackFunc;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callbackFunc, v11, v12);
  this->fields.resourceNames = resourceNames;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.resourceNames, (int32_t)resourceNames, v13, v14);
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

  if ( (byte_4B0105F & 1) == 0 )
  {
    sub_1BC3008(&AssetLoader_LoadEndDataHandler_TypeInfo, callbackFunc);
    byte_4B0105F = 1;
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
    sub_1BC3524(v7);
LABEL_7:
    p_callbackFunc2->klass = (CGThumbnailListItem_c *)v10;
  }
  sub_1BC2FAC(p_callbackFunc2, (int32_t)v10, v8, v9);
}


void __fastcall AssetManager_LoadWaitStatus__AddEntry(AssetManager_LoadWaitStatus_o *this, const MethodInfo *method)
{
  struct AssetData_o *data; // x8
  int32_t entryCount; // w9

  data = this->fields.data;
  if ( !data )
    sub_1BC3264(this, method);
  entryCount = data->fields.entryCount;
  if ( (entryCount & 0x80000000) == 0 )
    data->fields.entryCount = entryCount + 1;
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
    LOBYTE(data) = AssetData__IsSame_39545180(data, type, name, method);
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

  if ( (byte_4B01060 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_1/*""*/, method);
    byte_4B01060 = 1;
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
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A0D160;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0D120;
}


System_IAsyncResult_o *__fastcall AssetManager_ResourceUnloadEventHandler__BeginInvoke(
        AssetManager_ResourceUnloadEventHandler_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, &v5, callback, object);
}


void __fastcall AssetManager_ResourceUnloadEventHandler__EndInvoke(
        AssetManager_ResourceUnloadEventHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
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

  if ( (byte_4B01065 & 1) == 0 )
  {
    sub_1BC3008(&System_Func_bool__TypeInfo, method);
    sub_1BC3008(&Method_AssetManager___c__DisplayClass189_0__AssetObjectListSetupAndCall_b__0__, v3);
    sub_1BC3008(&AssetManager___c__DisplayClass189_0_TypeInfo, v4);
    sub_1BC3008(&UnityEngine_WaitUntil_TypeInfo, v5);
    byte_4B01065 = 1;
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
  v7 = sub_1BC3254(AssetManager___c__DisplayClass189_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1BC3264(v8, v9);
  asset = this->fields.asset;
  *(_QWORD *)(v7 + 16) = asset;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)asset, v10, v11);
  v13 = (System_Func_bool__o *)sub_1BC3254(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v13,
    (Il2CppObject *)v7,
    Method_AssetManager___c__DisplayClass189_0__AssetObjectListSetupAndCall_b__0__,
    0LL);
  v14 = (UnityEngine_WaitUntil_o *)sub_1BC3254(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v14, v13, 0LL);
  this->fields.__2__current = (Il2CppObject *)v14;
  p__2__current = &this->fields.__2__current;
  sub_1BC2FAC((CGThumbnailListItem_o *)p__2__current, (int32_t)v14, v16, v17);
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

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_AssetManager__AssetObjectListSetupAndCall_d__189_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
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

  if ( (byte_4B01066 & 1) == 0 )
  {
    sub_1BC3008(&System_Func_bool__TypeInfo, method);
    sub_1BC3008(&Method_AssetManager___c__DisplayClass190_0__AssetObjectListSetupAndCall_b__0__, v3);
    sub_1BC3008(&AssetManager___c__DisplayClass190_0_TypeInfo, v4);
    sub_1BC3008(&UnityEngine_WaitUntil_TypeInfo, v5);
    byte_4B01066 = 1;
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
  v7 = sub_1BC3254(AssetManager___c__DisplayClass190_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1BC3264(v8, v9);
  assetList = this->fields.assetList;
  *(_QWORD *)(v7 + 16) = assetList;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)assetList, v10, v11);
  v13 = (System_Func_bool__o *)sub_1BC3254(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v13,
    (Il2CppObject *)v7,
    Method_AssetManager___c__DisplayClass190_0__AssetObjectListSetupAndCall_b__0__,
    0LL);
  v14 = (UnityEngine_WaitUntil_o *)sub_1BC3254(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v14, v13, 0LL);
  this->fields.__2__current = (Il2CppObject *)v14;
  p__2__current = &this->fields.__2__current;
  sub_1BC2FAC((CGThumbnailListItem_o *)p__2__current, (int32_t)v14, v16, v17);
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

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_AssetManager__AssetObjectListSetupAndCall_d__190_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
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
      sub_1BC3264(0LL, method);
    AssetManager__LoadStart(_4__this, method);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.__2__current, 0, v2, v3);
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

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_AssetManager__DelayLoadStart_d__152_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
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
  const MethodInfo *v28; // x2
  AssetData_o *currentValue; // x21
  int monitor; // w8
  const MethodInfo *v31; // x2
  _BOOL4 isDispLogo_5__2; // w8
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *downLoadWaitList; // x8
  Il2CppObject *v34; // x22
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_String_o *v37; // x22
  const MethodInfo *v38; // x1
  System_String_o *v39; // x23
  AssetManager_o *DownloadSize; // x0
  const MethodInfo *v41; // x1
  Il2CppObject *v42; // x0
  System_String_o *v43; // x23
  Il2CppObject *Instance; // x0
  Il2CppObject *v45; // x25
  CommonUI_o *v46; // x21
  ErrorDialog_ClickDelegate_o *v47; // x24
  struct AssetManager___c__DisplayClass118_0_o *_8__1; // x8
  struct AssetManager___c__DisplayClass118_0_o **p__8__1; // x21
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  UnityEngine_WaitForEndOfFrame_o *v52; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  bool result; // w0
  Il2CppObject *v57; // x21
  System_Action_o *v58; // x22
  AvalonSceneManager_c *v59; // x0
  float DEFAULT_FADE_TIME; // s8
  UnityEngine_WaitForSeconds_o *v61; // x20
  CGThumbnailListItem_o *v62; // x19
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v65; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v66; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_4B01067 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_b__118_0__, v3);
    sub_1BC3008(&AvalonSceneManager_TypeInfo, v4);
    sub_1BC3008(&ErrorDialog_ClickDelegate_TypeInfo, v5);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, v6);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v7);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v8);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v9);
    sub_1BC3008(&LocalizationManager_TypeInfo, v10);
    sub_1BC3008(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__, v11);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v12);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1BC3008(&Method_AssetManager___c__DisplayClass118_0__DownloadAssetStorageAttributeWithCheckDialog_b__1__, v14);
    sub_1BC3008(&AssetManager___c__DisplayClass118_0_TypeInfo, v15);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v16);
    sub_1BC3008(&UnityEngine_WaitForEndOfFrame_TypeInfo, v17);
    sub_1BC3008(&UnityEngine_WaitForSeconds_TypeInfo, v18);
    sub_1BC3008(&StringLiteral_25180/*"データ更新"*/, v19);
    sub_1BC3008(&StringLiteral_5388/*"END_BOOT_ASSET_DOWNLOAD"*/, v20);
    sub_1BC3008(&StringLiteral_9168/*"NETWORK_ERROR_DATA_UPDATE_TITLE"*/, v21);
    sub_1BC3008(&StringLiteral_329/*" ゲームデータの更新を行います。\n\n{0}\n\n ※Wi-Fi接続での更新を推奨します。"*/, v22);
    this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)sub_1BC3008(&StringLiteral_9166/*"NETWORK_ERROR_DATA_UPDATE_EXP"*/, v23);
    byte_4B01067 = 1;
  }
  memset(&v66, 0, sizeof(v66));
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    isDispLogo_5__2 = v2->fields._isDispLogo_5__2;
    v2->fields.__1__state = -1;
    if ( isDispLogo_5__2 )
    {
      this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_60;
      CommonUI__SetLoadMode((CommonUI_o *)this, 3, 0LL);
    }
LABEL_56:
    if ( _4__this )
    {
      _4__this->fields.loadParallelMax = v2->fields.loadParallelMax;
      AssetManager__LoadStart(_4__this, method);
      return 0;
    }
    goto LABEL_60;
  }
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
LABEL_41:
    p__8__1 = &v2->fields.__8__1;
    _8__1 = v2->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_60;
    if ( !_8__1->fields.isDataUpdate )
    {
LABEL_45:
      v52 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v52, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v52;
      p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1BC2FAC(p__2__current, (int32_t)v52, v54, v55);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    }
    this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this )
      goto LABEL_60;
    this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)CommonUI__isBusyDataUpdateDialog(
                                                                                    (CommonUI_o *)this,
                                                                                    0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      goto LABEL_45;
    if ( !*p__8__1 )
      goto LABEL_60;
    if ( (*p__8__1)->fields.isDataUpdate )
    {
      this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( !this )
        goto LABEL_60;
      CrashReporter__SetNowState((CrashReporter_o *)this, (System_String_o *)StringLiteral_5388/*"END_BOOT_ASSET_DOWNLOAD"*/, 0LL);
    }
    *p__8__1 = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v2->fields.__8__1, 0, v50, v51);
    goto LABEL_51;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_60;
  this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)_4__this->fields.assetBundleDic;
  if ( !this )
    goto LABEL_60;
  this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                  (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                                                  (const MethodInfo_336CE18 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !this )
    goto LABEL_60;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v65,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_39D37E4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v66 = v65;
  while ( 1 )
  {
    v26 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v66,
            (const MethodInfo_34691A4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v26 )
      break;
    currentValue = (AssetData_o *)v66.fields._currentValue;
    if ( !v66.fields._currentValue )
      sub_1BC3264(v26, v27);
    monitor = (int)v66.fields._currentValue[2].monitor;
    if ( monitor < 1 || monitor == HIDWORD(v66.fields._currentValue[2].monitor) )
    {
      if ( System_String__op_Equality(v2->fields.attrib, (System_String_o *)v66.fields._currentValue[2].klass, 0LL)
        && currentValue->fields.nowVersion != currentValue->fields.newVersion )
      {
        AssetManager__AddLoadWaitStatus_39583704(_4__this, currentValue, v31);
      }
    }
    else
    {
      AssetManager__AddLoadWaitStatus_39583704(_4__this, (AssetData_o *)v66.fields._currentValue, v28);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v66,
    (const MethodInfo_34691A0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  downLoadWaitList = _4__this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
LABEL_60:
    sub_1BC3264(this, method);
  if ( downLoadWaitList->fields._size >= 1 )
  {
    v34 = (Il2CppObject *)sub_1BC3254(AssetManager___c__DisplayClass118_0_TypeInfo);
    System_Object___ctor(v34, 0LL);
    v2->fields.__8__1 = (struct AssetManager___c__DisplayClass118_0_o *)v34;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v2->fields.__8__1, (int32_t)v34, v35, v36);
    if ( !v2->fields.__8__1 )
      goto LABEL_60;
    v2->fields.__8__1->fields.isDataUpdate = 0;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( LocalizationManager__ContainsKey((System_String_o *)StringLiteral_9168/*"NETWORK_ERROR_DATA_UPDATE_TITLE"*/, 0LL) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v37 = LocalizationManager__Get((System_String_o *)StringLiteral_9168/*"NETWORK_ERROR_DATA_UPDATE_TITLE"*/, 0LL);
    }
    else
    {
      v37 = (System_String_o *)StringLiteral_25180/*"データ更新"*/;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( LocalizationManager__ContainsKey((System_String_o *)StringLiteral_9166/*"NETWORK_ERROR_DATA_UPDATE_EXP"*/, 0LL) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v39 = LocalizationManager__Get((System_String_o *)StringLiteral_9166/*"NETWORK_ERROR_DATA_UPDATE_EXP"*/, 0LL);
    }
    else
    {
      v39 = (System_String_o *)StringLiteral_329/*" ゲームデータの更新を行います。\n\n{0}\n\n ※Wi-Fi接続での更新を推奨します。"*/;
    }
    DownloadSize = (AssetManager_o *)AssetManager__GetDownloadSize(_4__this, v38);
    v42 = (Il2CppObject *)AssetManager__ConvertDownloadSizeToString(DownloadSize, (double)(__int64)DownloadSize, v41);
    v43 = System_String__Format(v39, v42, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v45 = (Il2CppObject *)v2->fields.__8__1;
    v46 = (CommonUI_o *)Instance;
    v47 = (ErrorDialog_ClickDelegate_o *)sub_1BC3254(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(
      v47,
      v45,
      Method_AssetManager___c__DisplayClass118_0__DownloadAssetStorageAttributeWithCheckDialog_b__1__,
      0LL);
    if ( !v46 )
      goto LABEL_60;
    CommonUI__OpenDataUpdateDialog(v46, v37, v43, v47, 0, 0LL);
    goto LABEL_41;
  }
LABEL_51:
  v2->fields._isDispLogo_5__2 = 0;
  v57 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v58 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(
    v58,
    (Il2CppObject *)_4__this,
    Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_b__118_0__,
    0LL);
  if ( !v57 )
    goto LABEL_60;
  this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)CommonUI__PlayLogo(
                                                                                  (CommonUI_o *)v57,
                                                                                  v58,
                                                                                  0LL);
  v2->fields._isDispLogo_5__2 = (unsigned __int8)this & 1;
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_56;
  v59 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v59 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v59->static_fields->DEFAULT_FADE_TIME;
  v61 = (UnityEngine_WaitForSeconds_o *)sub_1BC3254(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v61, DEFAULT_FADE_TIME, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v61;
  v62 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1BC2FAC(v62, (int32_t)v61, v63, v64);
  LODWORD(v62[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
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

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
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
  AssetManager_c *v193; // x8
  int v194; // w9
  void **v195; // x11
  void **v196; // x10
  System_String_o *v197; // x27
  bool v198; // cc
  void **v199; // x9
  void **v200; // x10
  CGThumbnailListItem_c *v201; // x24
  CGThumbnailListItem_c *v202; // x23
  int32_t v203; // w2
  const MethodInfo *v204; // x3
  int32_t v205; // w2
  const MethodInfo *v206; // x3
  int32_t v207; // w2
  const MethodInfo *v208; // x3
  System_String_o *v209; // x0
  System_String_o *v210; // x0
  int32_t v211; // w23
  System_String_o *v212; // x0
  const MethodInfo *v213; // x3
  int v214; // w8
  uint32_t v215; // w24
  System_String_o *v216; // x26
  AssetData_o *AssetData; // x0
  const MethodInfo *v218; // x6
  Il2CppObject *v219; // x27
  int32_t v220; // w2
  const MethodInfo *v221; // x3
  __int64 v222; // x8
  _QWORD *v223; // x9
  __int64 _2__current_low; // x10
  __int64 v225; // x8
  System_Collections_Generic_List_object__o *v226; // x27
  AssetData_o *v227; // x28
  int32_t v228; // w2
  const MethodInfo *v229; // x3
  struct System_Object_array *items; // x8
  _QWORD *v231; // x9
  __int64 size; // x10
  Il2CppClass **v233; // x0
  AssetManager_c *v234; // x0
  CGThumbnailListItem_c *v235; // x23
  struct AssetManager_StaticFields *v236; // x0
  struct AssetManager_StaticFields *v237; // x0
  CGThumbnailListItem_c *v238; // x1
  int32_t v239; // w2
  const MethodInfo *v240; // x3
  struct AssetManager_StaticFields *v241; // x0
  CGThumbnailListItem_c *v242; // x1
  int32_t v243; // w2
  const MethodInfo *v244; // x3
  _BOOL8 v245; // x0
  __int64 v246; // x1
  Il2CppObject *current; // x22
  System_Collections_Generic_Dictionary_object__object__o *v248; // x0
  __int64 v249; // x1
  System_Collections_Generic_Dictionary_object__object__o *v250; // x0
  Il2CppObject *v251; // x22
  int32_t v252; // w2
  const MethodInfo *v253; // x3
  ManagerConfig_c *v254; // x0
  struct ManagerConfig_StaticFields *v255; // x8
  Il2CppObject *v256; // x21
  ErrorDialog_ClickDelegate_o *v257; // x23
  UnityEngine_WaitForEndOfFrame_o *v258; // x20
  int32_t v259; // w2
  const MethodInfo *v260; // x3
  ManagementManager_c *v261; // x0
  _BOOL4 isDuringStartup; // w22
  Il2CppObject *v263; // x21
  System_String_o *v264; // x22
  ErrorDialog_ClickDelegate_o *v265; // x23
  System_String_o *v266; // x22
  ErrorDialog_ClickDelegate_o *v267; // x23
  UnityEngine_WaitForEndOfFrame_o *v268; // x20
  int32_t v269; // w2
  const MethodInfo *v270; // x3
  UnityEngine_WaitForSeconds_o *v271; // x20
  int32_t v272; // w2
  const MethodInfo *v273; // x3
  const MethodInfo *v274; // x2
  int32_t v275; // w2
  const MethodInfo *v276; // x3
  UnityEngine_WaitForEndOfFrame_o *v277; // x20
  int32_t v278; // w2
  const MethodInfo *v279; // x3
  const MethodInfo *effectDistance; // [xsp+0h] [xbp-F0h]
  System_Nullable_Vector2__o effectDistancea; // [xsp+0h] [xbp-F0h]
  System_Nullable_Vector2__o effectDistanceb; // [xsp+0h] [xbp-F0h]
  const MethodInfo *effectDistance_8; // [xsp+8h] [xbp-E8h]
  System_String_o *klass; // [xsp+18h] [xbp-D8h]
  System_String_o *v285; // [xsp+20h] [xbp-D0h]
  int32_t version; // [xsp+2Ch] [xbp-C4h]
  CGThumbnailListItem_o *v287; // [xsp+30h] [xbp-C0h]
  CGThumbnailListItem_o *v288; // [xsp+38h] [xbp-B8h]
  AssetManager__InitCR_d__134_o *v289; // [xsp+40h] [xbp-B0h]
  CGThumbnailListItem_o *v290; // [xsp+40h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v291; // [xsp+48h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v292; // [xsp+60h] [xbp-90h] BYREF

  v4 = this;
  if ( (byte_4B01068 & 1) == 0 )
  {
    sub_1BC3008(&AssetDataListInfo_TypeInfo, method);
    sub_1BC3008(&AssetData_TypeInfo, v5);
    sub_1BC3008(&Method_AssetManager_OnClickRetryDialog__, v6);
    sub_1BC3008(&Method_AssetManager_OnClickWaitDebugDialog__, v7);
    sub_1BC3008(&AssetManager_TypeInfo, v8);
    sub_1BC3008(&CatAndMouseGame_TypeInfo, v9);
    sub_1BC3008(&char___TypeInfo, v10);
    sub_1BC3008(&ErrorDialog_ClickDelegate_TypeInfo, v11);
    sub_1BC3008(&Crc32_TypeInfo, v12);
    sub_1BC3008(&UnityEngine_Debug_TypeInfo, v13);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__AssetData__Add__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__, v17);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__AssetData__set_Item__, v18);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__, v19);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__, v20);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__, v21);
    sub_1BC3008(&Method_System_Collections_Generic_List_AssetData__Add__, v22);
    sub_1BC3008(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__, v23);
    sub_1BC3008(&LocalizationManager_TypeInfo, v24);
    sub_1BC3008(&ManagementManager_TypeInfo, v25);
    sub_1BC3008(&ManagerConfig_TypeInfo, v26);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v27);
    sub_1BC3008(&UnityEngine_WaitForEndOfFrame_TypeInfo, v28);
    sub_1BC3008(&UnityEngine_WaitForSeconds_TypeInfo, v29);
    sub_1BC3008(&StringLiteral_2377/*"AssetStorageList download time over"*/, v30);
    sub_1BC3008(&StringLiteral_2373/*"AssetStorageList download crc error"*/, v31);
    sub_1BC3008(&StringLiteral_2369/*"AssetStorage boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/, v32);
    sub_1BC3008(&StringLiteral_2031/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, v33);
    sub_1BC3008(&StringLiteral_2365/*"AssetStorage boot load crc error : チェックサム値が不一致"*/, v34);
    sub_1BC3008(&StringLiteral_15783/*"[FFFF80]Download error for debug"*/, v35);
    sub_1BC3008(&StringLiteral_2374/*"AssetStorageList download data error"*/, v36);
    sub_1BC3008(&StringLiteral_2376/*"AssetStorageList download error : "*/, v37);
    sub_1BC3008(&StringLiteral_2367/*"AssetStorage boot load error : アセットバンドルリスト作成失敗"*/, v38);
    sub_1BC3008(&StringLiteral_25018/*"~"*/, v39);
    sub_1BC3008(&StringLiteral_2368/*"AssetStorage boot load error : ファイル先頭の１行目の内容が空"*/, v40);
    sub_1BC3008(&StringLiteral_11366/*"SCRIPT"*/, v41);
    sub_1BC3008(&StringLiteral_1758/*"@"*/, v42);
    sub_1BC3008(&StringLiteral_2032/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, v43);
    this = (AssetManager__InitCR_d__134_o *)sub_1BC3008(&StringLiteral_1/*""*/, v44);
    byte_4B01068 = 1;
  }
  memset(&v292, 0, sizeof(v292));
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
             (const MethodInfo_336CCB8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) )
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
      v58 = (System_Char_array *)sub_1BC30B0(char___TypeInfo, 1LL);
      if ( !v58 )
        sub_1BC3264(0LL, 0LL);
      if ( !v58->max_length )
        sub_1BC326C(v58, v58, v59);
      v58->m_Items[2] = -257;
      v60 = System_String__Trim_62405196(v57, v58, 0LL);
      v61 = (System_Char_array *)sub_1BC30B0(char___TypeInfo, 2LL);
      if ( !v61 )
        sub_1BC3264(0LL, 0LL);
      max_length = v61->max_length;
      if ( !max_length )
        sub_1BC326C(v61, v61, v62);
      v61->m_Items[2] = 13;
      if ( max_length == 1 )
        sub_1BC326C(v61, v61, v62);
      v61->m_Items[3] = 10;
      if ( !v60 )
        sub_1BC3264(v61, v61);
      v66 = System_String__IndexOfAny(v60, v61, 0LL);
      if ( v66 < 2 )
      {
        v67 = &StringLiteral_2368/*"AssetStorage boot load error : ファイル先頭の１行目の内容が空"*/;
        goto LABEL_96;
      }
      v68 = System_String__Substring_62394572(v60, 0, v66, 0LL);
      v70 = v68;
      if ( !v68 )
        sub_1BC3264(0LL, v69);
      if ( !System_String__StartsWith(v68, (System_String_o *)StringLiteral_25018/*"~"*/, 0LL) )
      {
        v67 = &StringLiteral_2369/*"AssetStorage boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
        goto LABEL_96;
      }
      v71 = System_String__Substring(v70, 1, 0LL);
      v72 = System_String__Substring(v60, v66 + 1, 0LL);
      UTF8 = System_Text_Encoding__get_UTF8(0LL);
      if ( !UTF8 )
        sub_1BC3264(0LL, v74);
      v75 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                                   UTF8,
                                   v72,
                                   UTF8->klass->vtable._19_GetBytes.methodPtr);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v76 = Crc32__Compute(v75, 0LL);
      if ( System_UInt32__Parse(v71, 0LL) != v76 )
      {
        v67 = &StringLiteral_2365/*"AssetStorage boot load crc error : チェックサム値が不一致"*/;
        goto LABEL_96;
      }
      v77 = (System_Char_array *)sub_1BC30B0(char___TypeInfo, 2LL);
      if ( !v77 )
        sub_1BC3264(0LL, 0LL);
      v79 = v77->max_length;
      if ( !v79 )
        sub_1BC326C(v77, v77, v78);
      v77->m_Items[2] = 13;
      if ( v79 == 1 )
        sub_1BC326C(v77, v77, v78);
      v77->m_Items[3] = 10;
      if ( !v72 )
        sub_1BC3264(v77, v77);
      this = (AssetManager__InitCR_d__134_o *)System_String__Split_62397840(v72, v77, 1, 0LL);
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
                                                (System_String_o *)StringLiteral_1758/*"@"*/,
                                                0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
LABEL_95:
        v67 = &StringLiteral_2367/*"AssetStorage boot load error : アセットバンドルリスト作成失敗"*/;
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
          sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->assetBundleMasterVersion, v119, v64, v65);
          v120 = (int)StringLiteral_1/*""*/;
          v121 = AssetManager_TypeInfo->static_fields;
          v121->assetBundleDateVersion = (struct System_String_o *)StringLiteral_1/*""*/;
          sub_1BC2FAC((CGThumbnailListItem_o *)&v121->assetBundleDateVersion, v120, v122, v123);
          v124 = (int)StringLiteral_1/*""*/;
          v125 = AssetManager_TypeInfo->static_fields;
          v125->assetBundleBuildVersion = (struct System_String_o *)StringLiteral_1/*""*/;
          sub_1BC2FAC((CGThumbnailListItem_o *)&v125->assetBundleBuildVersion, v124, v126, v127);
          this = (AssetManager__InitCR_d__134_o *)_4__this->fields.assetBundleDic;
          if ( !this )
            goto LABEL_281;
          System_Collections_Generic_Dictionary_object__object___Clear(
            (System_Collections_Generic_Dictionary_object__object__o *)this,
            (const MethodInfo_336D170 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
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
            if ( System_String__op_Inequality(v129->ServerDefaultType, (System_String_o *)StringLiteral_11366/*"SCRIPT"*/, 0LL) )
            {
              _4__this->fields.isErrorDialog = 1;
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v131 = (ErrorDialog_ClickDelegate_o *)sub_1BC3254(ErrorDialog_ClickDelegate_TypeInfo);
              ErrorDialog_ClickDelegate___ctor(
                v131,
                (Il2CppObject *)_4__this,
                Method_AssetManager_OnClickWaitDebugDialog__,
                0LL);
              if ( !Instance )
                goto LABEL_281;
              *(_QWORD *)&effectDistancea.fields.hasValue = 0LL;
              effectDistancea.fields.value.fields.y = 0.0;
              CommonUI__OpenWarningDialog(
                (CommonUI_o *)Instance,
                (System_String_o *)StringLiteral_15783/*"[FFFF80]Download error for debug"*/,
                v116,
                v131,
                1,
                0,
                -1.0,
                1,
                effectDistancea,
                0LL);
LABEL_27:
              if ( _4__this->fields.isErrorDialog )
              {
                v52 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
                UnityEngine_WaitForEndOfFrame___ctor(v52, 0LL);
                v4->fields.__2__current = (Il2CppObject *)v52;
                p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
                sub_1BC2FAC(p__2__current, (int32_t)v52, v54, v55);
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
      sub_1BC2FAC((CGThumbnailListItem_o *)&v88->assetBundleMasterVersion, (int32_t)v87, v84, v85);
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
      sub_1BC2FAC((CGThumbnailListItem_o *)&v94->assetBundleDateVersion, (int32_t)v93, v89, v90);
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
      sub_1BC2FAC((CGThumbnailListItem_o *)&v100->assetBundleBuildVersion, (int32_t)v99, v95, v96);
      v101 = (int)v80->fields.__2__current;
      if ( v101 >= 2 )
      {
        v102 = 5LL;
        v289 = v80;
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
          v115 = (AssetData_o *)sub_1BC3254(AssetData_TypeInfo);
          AssetData___ctor_39544868(v115, 0, wait_5__6, v105, configFileUrl_5__2, v108, v111, v112, effectDistance);
          if ( !assetBundleDic )
            goto LABEL_281;
          System_Collections_Generic_Dictionary_object__object___set_Item(
            assetBundleDic,
            (Il2CppObject *)wait_5__6,
            (Il2CppObject *)v115,
            (const MethodInfo_336CFD4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__set_Item__);
          v80 = v289;
          ++v102;
          v101 = (int)v289->fields.__2__current;
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
      sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._configFileUrl_5__2, (int32_t)ConfigFileAddress, v134, v135);
      v4->fields._loader_5__3 = 0LL;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._loader_5__3, 0, v136, v137);
LABEL_123:
      v138 = v4->fields._configFileUrl_5__2;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      UrlString = AssetManager__getUrlString(v138, method);
      v140 = UnityEngine_Networking_UnityWebRequest__Get(UrlString, 0LL);
      v4->fields._loader_5__3 = v140;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._loader_5__3, (int32_t)v140, v141, v142);
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
      v146 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v146, 0LL);
      v4->fields._wait_5__6 = v146;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._wait_5__6, (int32_t)v146, v147, v148);
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
        sub_1BC3264(this, method);
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
          v165 = (Il2CppObject *)StringLiteral_2377/*"AssetStorageList download time over"*/;
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
          v164 = System_String__Concat_62348648((System_String_o *)StringLiteral_2376/*"AssetStorageList download error : "*/, v163, 0LL);
          goto LABEL_155;
        }
        this = (AssetManager__InitCR_d__134_o *)sub_1BC30B0(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_281;
        method = (const MethodInfo *)this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_282;
        LOWORD(this->fields.__4__this) = -257;
        if ( !v160 )
          goto LABEL_281;
        this = (AssetManager__InitCR_d__134_o *)System_String__Trim_62405196(v160, (System_Char_array *)this, 0LL);
        if ( !this )
          goto LABEL_281;
        v171 = this;
        if ( System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_25018/*"~"*/, 0LL) )
        {
          this = (AssetManager__InitCR_d__134_o *)sub_1BC30B0(char___TypeInfo, 2LL);
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
            v175 = System_String__Substring_62394572((System_String_o *)v171, 1, v173 - 1, 0LL);
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
                sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._loader_5__3, 0, v181, v182);
              }
              if ( !v176 )
                goto LABEL_280;
              this = (AssetManager__InitCR_d__134_o *)sub_1BC30B0(char___TypeInfo, 2LL);
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
                  v184 = System_String__Split_62397840(v176, (System_Char_array *)this, 1, 0LL);
                  v185 = sub_1BC3254(AssetDataListInfo_TypeInfo);
                  AssetDataListInfo___ctor((AssetDataListInfo_o *)v185, v186);
                  if ( !v184 )
                    goto LABEL_281;
                  v188 = v184->max_length;
                  v287 = (CGThumbnailListItem_o *)(v185 + 16);
                  v288 = (CGThumbnailListItem_o *)(v185 + 24);
                  v290 = (CGThumbnailListItem_o *)(v185 + 32);
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
                                                                (System_String_o *)StringLiteral_1758/*"@"*/,
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
                        v193 = AssetManager_TypeInfo;
                        v194 = (int)v190->fields.__2__current;
                        v195 = (void **)&v190->fields._loader_5__3;
                        v196 = (void **)&v190->fields._configFileUrl_5__2;
                        v197 = v192;
                        if ( v194 == 2 )
                          v195 = &StringLiteral_1/*""*/;
                        v198 = v194 <= 1;
                        if ( v194 <= 1 )
                          v199 = &StringLiteral_1/*""*/;
                        else
                          v199 = v196;
                        if ( v198 )
                          v200 = &StringLiteral_1/*""*/;
                        else
                          v200 = v195;
                        v201 = (CGThumbnailListItem_c *)*v199;
                        v202 = (CGThumbnailListItem_c *)*v200;
                        if ( !AssetManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                          v193 = AssetManager_TypeInfo;
                        }
                        this = (AssetManager__InitCR_d__134_o *)System_String__op_Inequality(
                                                                  v197,
                                                                  v193->static_fields->assetBundleMasterVersion,
                                                                  0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                        {
                          this = (AssetManager__InitCR_d__134_o *)_4__this->fields.assetBundleDic;
                          if ( !this )
                            goto LABEL_281;
                          System_Collections_Generic_Dictionary_object__object___Clear(
                            (System_Collections_Generic_Dictionary_object__object__o *)this,
                            (const MethodInfo_336D170 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
                        }
                        if ( !v185 )
                          goto LABEL_281;
                        v287->klass = (CGThumbnailListItem_c *)v197;
                        sub_1BC2FAC(v287, (int32_t)v197, v203, v204);
                        v288->klass = v201;
                        sub_1BC2FAC(v288, (int32_t)v201, v205, v206);
                        v290->klass = v202;
                        sub_1BC2FAC(v290, (int32_t)v202, v207, v208);
                      }
                      else
                      {
                        this = (AssetManager__InitCR_d__134_o *)System_String__StartsWith(
                                                                  (System_String_o *)this,
                                                                  (System_String_o *)StringLiteral_25018/*"~"*/,
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
                            v209 = System_String__Trim((System_String_o *)this, 0LL);
                            this = (AssetManager__InitCR_d__134_o *)System_Int32__Parse(v209, 0LL);
                            version = (int)this;
                            if ( LODWORD(v190->fields.__2__current) < 3 )
                              goto LABEL_282;
                            this = (AssetManager__InitCR_d__134_o *)v190->fields._loader_5__3;
                            if ( !this )
                              goto LABEL_281;
                            v285 = v190->fields._configFileUrl_5__2;
                            v210 = System_String__Trim((System_String_o *)this, 0LL);
                            this = (AssetManager__InitCR_d__134_o *)System_Int32__Parse(v210, 0LL);
                            if ( LODWORD(v190->fields.__2__current) <= 3 )
                              goto LABEL_282;
                            v211 = (int)this;
                            this = *(AssetManager__InitCR_d__134_o **)&v190->fields._requestTime_5__4;
                            if ( !this )
                              goto LABEL_281;
                            v212 = System_String__Trim((System_String_o *)this, 0LL);
                            this = (AssetManager__InitCR_d__134_o *)System_UInt32__Parse(v212, 0LL);
                            v214 = (int)v190->fields.__2__current;
                            if ( (unsigned int)v214 <= 4 )
                              goto LABEL_282;
                            v215 = (unsigned int)this;
                            if ( v214 >= 6 )
                              klass = (System_String_o *)v190[1].klass;
                            else
                              klass = 0LL;
                            v216 = (System_String_o *)v190->fields._wait_5__6;
                            AssetData = AssetManager__GetAssetData(
                                          (AssetManager_o *)this,
                                          _4__this->fields.assetBundleDic,
                                          v216,
                                          v213);
                            if ( AssetData )
                            {
                              v219 = (Il2CppObject *)AssetData;
                              this = (AssetManager__InitCR_d__134_o *)AssetData__SetUpdateInfo(
                                                                        AssetData,
                                                                        version,
                                                                        v285,
                                                                        v211,
                                                                        v215,
                                                                        klass,
                                                                        v218);
                              if ( !v185 )
                                goto LABEL_281;
                              this = *(AssetManager__InitCR_d__134_o **)(v185 + 40);
                              if ( !this )
                                goto LABEL_281;
                              v222 = *(_QWORD *)&this->fields.__1__state;
                              v223 = Method_System_Collections_Generic_List_AssetData__Add__;
                              ++HIDWORD(this->fields.__2__current);
                              if ( !v222 )
                                goto LABEL_281;
                              _2__current_low = SLODWORD(this->fields.__2__current);
                              if ( (unsigned int)_2__current_low >= *(_DWORD *)(v222 + 24) )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  (System_Collections_Generic_List_object__o *)this,
                                  v219,
                                  *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v223[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v225 = v222 + 8 * _2__current_low;
                                LODWORD(this->fields.__2__current) = _2__current_low + 1;
                                *(_QWORD *)(v225 + 32) = v219;
                                sub_1BC2FAC((CGThumbnailListItem_o *)(v225 + 32), (int32_t)v219, v220, v221);
                              }
                              v216 = 0LL;
                            }
                            this = (AssetManager__InitCR_d__134_o *)System_String__IsNullOrEmpty(v216, 0LL);
                            if ( ((unsigned __int8)this & 1) == 0 )
                            {
                              if ( !v185 )
                                goto LABEL_281;
                              v226 = *(System_Collections_Generic_List_object__o **)(v185 + 40);
                              v227 = (AssetData_o *)sub_1BC3254(AssetData_TypeInfo);
                              AssetData___ctor_39545008(
                                v227,
                                0,
                                v216,
                                0,
                                version,
                                v285,
                                v211,
                                v215,
                                klass,
                                effectDistance_8);
                              if ( !v226 )
                                goto LABEL_281;
                              items = v226->fields._items;
                              v231 = Method_System_Collections_Generic_List_AssetData__Add__;
                              ++v226->fields._version;
                              if ( !items )
                                goto LABEL_281;
                              size = v226->fields._size;
                              if ( (unsigned int)size >= items->max_length )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  v226,
                                  (Il2CppObject *)v227,
                                  *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v231[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v233 = &items->obj.klass + size;
                                v226->fields._size = size + 1;
                                v233[4] = (Il2CppClass *)v227;
                                sub_1BC2FAC((CGThumbnailListItem_o *)(v233 + 4), (int32_t)v227, v228, v229);
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
                  v234 = AssetManager_TypeInfo;
                  v235 = v287->klass;
                  if ( !AssetManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                    v234 = AssetManager_TypeInfo;
                  }
                  v236 = v234->static_fields;
                  v236->assetBundleMasterVersion = (struct System_String_o *)v235;
                  sub_1BC2FAC((CGThumbnailListItem_o *)&v236->assetBundleMasterVersion, (int32_t)v235, v64, v187);
                  v237 = AssetManager_TypeInfo->static_fields;
                  v238 = v288->klass;
                  v237->assetBundleDateVersion = (struct System_String_o *)v288->klass;
                  sub_1BC2FAC((CGThumbnailListItem_o *)&v237->assetBundleDateVersion, (int32_t)v238, v239, v240);
                  v241 = AssetManager_TypeInfo->static_fields;
                  v242 = v290->klass;
                  v241->assetBundleBuildVersion = (struct System_String_o *)v290->klass;
                  sub_1BC2FAC((CGThumbnailListItem_o *)&v241->assetBundleBuildVersion, (int32_t)v242, v243, v244);
                  this = (AssetManager__InitCR_d__134_o *)_4__this->fields.assetBundleDic;
                  if ( !this )
                    goto LABEL_281;
                  System_Collections_Generic_Dictionary_object__object___Clear(
                    (System_Collections_Generic_Dictionary_object__object__o *)this,
                    (const MethodInfo_336D170 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
                  this = *(AssetManager__InitCR_d__134_o **)(v185 + 40);
                  if ( !this )
                    goto LABEL_281;
                  System_Collections_Generic_List_object___GetEnumerator(
                    (System_Collections_Generic_List_Enumerator_T__o *)&v291,
                    (System_Collections_Generic_List_object__o *)this,
                    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
                  v292 = v291;
                  while ( 1 )
                  {
                    v245 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                             &v292,
                             (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
                    if ( !v245 )
                      break;
                    current = v292.fields._current;
                    if ( !v292.fields._current )
                      sub_1BC3264(v245, v246);
                    v248 = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.assetBundleDic;
                    if ( !v248 )
                      sub_1BC3264(0LL, v246);
                    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                            v248,
                            (Il2CppObject *)v292.fields._current[1].monitor,
                            (const MethodInfo_336D1DC *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__) )
                    {
                      v250 = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.assetBundleDic;
                      if ( !v250 )
                        sub_1BC3264(0LL, v249);
                      System_Collections_Generic_Dictionary_object__object___Add(
                        v250,
                        (Il2CppObject *)current[1].monitor,
                        current,
                        (const MethodInfo_336CFE8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
                    }
                  }
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v292,
                    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
                  AssetManager__ConfigWriteRequest(_4__this, 1, v274);
LABEL_280:
                  v4->fields._configFileUrl_5__2 = 0LL;
                  sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._configFileUrl_5__2, 0, v179, v180);
                  v4->fields._loader_5__3 = 0LL;
                  sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._loader_5__3, 0, v275, v276);
                  v277 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
                  UnityEngine_WaitForEndOfFrame___ctor(v277, 0LL);
                  v4->fields.__2__current = (Il2CppObject *)v277;
                  v169 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
                  sub_1BC2FAC(v169, (int32_t)v277, v278, v279);
                  v170 = 6;
                  goto LABEL_278;
                }
              }
LABEL_282:
              sub_1BC326C(this, method, v64);
            }
            v251 = (Il2CppObject *)StringLiteral_2373/*"AssetStorageList download crc error"*/;
            if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
            UnityEngine_Debug__LogError(v251, 0LL);
          }
        }
        v165 = (Il2CppObject *)StringLiteral_2374/*"AssetStorageList download data error"*/;
        if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
        UnityEngine_Debug__LogError(v165, 0LL);
LABEL_249:
        if ( *v149 )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)*v149, 0LL);
          *v149 = 0LL;
          sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._loader_5__3, 0, v252, v253);
        }
        if ( !v165 )
          goto LABEL_277;
        v254 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v254 = ManagerConfig_TypeInfo;
        }
        v255 = v254->static_fields;
        if ( v255->UseDebugCommand )
        {
          if ( !v254->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v254);
            v255 = ManagerConfig_TypeInfo->static_fields;
          }
          if ( System_String__op_Inequality(v255->ServerDefaultType, (System_String_o *)StringLiteral_11366/*"SCRIPT"*/, 0LL) )
          {
            _4__this->fields.isErrorDialog = 1;
            v256 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v257 = (ErrorDialog_ClickDelegate_o *)sub_1BC3254(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(
              v257,
              (Il2CppObject *)_4__this,
              Method_AssetManager_OnClickWaitDebugDialog__,
              0LL);
            if ( !v256 )
              goto LABEL_281;
            *(_QWORD *)&effectDistanceb.fields.hasValue = 0LL;
            effectDistanceb.fields.value.fields.y = 0.0;
            CommonUI__OpenWarningDialog(
              (CommonUI_o *)v256,
              (System_String_o *)StringLiteral_15783/*"[FFFF80]Download error for debug"*/,
              (System_String_o *)v165,
              v257,
              1,
              0,
              -1.0,
              1,
              effectDistanceb,
              0LL);
LABEL_260:
            if ( _4__this->fields.isErrorDialog )
            {
              v258 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v258, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v258;
              v169 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1BC2FAC(v169, (int32_t)v258, v259, v260);
              v170 = 3;
              goto LABEL_278;
            }
          }
        }
        _4__this->fields.isErrorDialog = 1;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        if ( !byte_4B01069 )
        {
          sub_1BC3008(&ManagementManager_TypeInfo, method);
          byte_4B01069 = 1;
        }
        v261 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v261 = ManagementManager_TypeInfo;
        }
        isDuringStartup = v261->static_fields->isDuringStartup;
        v263 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          if ( isDuringStartup )
          {
LABEL_270:
            v264 = LocalizationManager__Get((System_String_o *)StringLiteral_2031/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
            v265 = (ErrorDialog_ClickDelegate_o *)sub_1BC3254(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(
              v265,
              (Il2CppObject *)_4__this,
              Method_AssetManager_OnClickRetryDialog__,
              0LL);
            if ( !v263 )
              goto LABEL_281;
            CommonUI__OpenRetryBootDialog((CommonUI_o *)v263, (System_String_o *)StringLiteral_1/*""*/, v264, v265, 0, 0LL);
LABEL_275:
            if ( _4__this->fields.isErrorDialog )
            {
              v268 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v268, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v268;
              v169 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1BC2FAC(v169, (int32_t)v268, v269, v270);
              v170 = 4;
              goto LABEL_278;
            }
LABEL_277:
            v271 = (UnityEngine_WaitForSeconds_o *)sub_1BC3254(UnityEngine_WaitForSeconds_TypeInfo);
            UnityEngine_WaitForSeconds___ctor(v271, 1.0, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v271;
            v169 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1BC2FAC(v169, (int32_t)v271, v272, v273);
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
        v266 = LocalizationManager__Get((System_String_o *)StringLiteral_2032/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
        v267 = (ErrorDialog_ClickDelegate_o *)sub_1BC3254(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v267, (Il2CppObject *)_4__this, Method_AssetManager_OnClickRetryDialog__, 0LL);
        if ( !v263 )
          goto LABEL_281;
        CommonUI__OpenRetryDialog((CommonUI_o *)v263, (System_String_o *)StringLiteral_1/*""*/, v266, v267, 0, 0LL);
        goto LABEL_275;
      }
LABEL_153:
      v168 = (Il2CppObject *)v4->fields._wait_5__6;
      v4->fields.__2__current = v168;
      v169 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1BC2FAC(v169, (int32_t)v168, v153, v154);
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
      sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._wait_5__6, 0, v2, v3);
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
      sub_1BC2FAC((CGThumbnailListItem_o *)&_4__this->fields.initCRW, 0, v2, v3);
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

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_AssetManager__InitCR_d__134_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
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
  if ( (byte_4B0106C & 1) == 0 )
  {
    this = (AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_o *)sub_1BC3008(
                                                                        &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                        method);
    byte_4B0106C = 1;
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
    v7 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v7, 0LL);
    v4->fields._wait_5__2 = v7;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._wait_5__2, (int32_t)v7, v8, v9);
  }
  if ( !_4__this )
    sub_1BC3264(this, method);
  if ( _4__this->fields.inProgressUnloadUnusedAssets || _4__this->fields.requestUnloadUnusedAssets )
  {
    wait_5__2 = (Il2CppObject *)v4->fields._wait_5__2;
    v4->fields.__2__current = wait_5__2;
    p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
    sub_1BC2FAC(p__2__current, (int32_t)wait_5__2, v2, v3);
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

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
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

  if ( (byte_4B01061 & 1) == 0 )
  {
    sub_1BC3008(&AssetManager___c_TypeInfo, v1);
    byte_4B01061 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(AssetManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  AssetManager___c_TypeInfo->static_fields->__9 = (struct AssetManager___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)AssetManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BC3264(this, 0LL);
  AssetData__RemoveEntryAll(assetData, (const MethodInfo *)assetData);
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

  if ( (byte_4B01062 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Application_TypeInfo, isDecide);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v5);
    sub_1BC3008(&StringLiteral_12197/*"START_BOOT_ASSET_DOWNLOAD"*/, v6);
    byte_4B01062 = 1;
  }
  if ( isDecide )
  {
    this->fields.isDataUpdate = 1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !Instance )
      sub_1BC3264(0LL, v8);
    CrashReporter__SetNowState((CrashReporter_o *)Instance, (System_String_o *)StringLiteral_12197/*"START_BOOT_ASSET_DOWNLOAD"*/, 0LL);
  }
  else
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    UnityEngine_Application__Quit_69829232(0LL);
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

  if ( (byte_4B01063 & 1) == 0 )
  {
    sub_1BC3008(&Method_AssetManager_OnEndLoadAssetStorage__, method);
    sub_1BC3008(&AssetLoader_LoadEndHandler_TypeInfo, v3);
    byte_4B01063 = 1;
  }
  loader = this->fields.loader;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v6 = (AssetLoader_LoadEndHandler_o *)sub_1BC3254(AssetLoader_LoadEndHandler_TypeInfo);
  AssetLoader_LoadEndHandler___ctor(v6, _4__this, Method_AssetManager_OnEndLoadAssetStorage__, v7);
  waiter = this->fields.waiter;
  if ( !waiter || !loader )
    sub_1BC3264(v8, v9);
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
  if ( (byte_4B01064 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_string__Remove__, data);
    this = (AssetManager___c__DisplayClass172_0_o *)sub_1BC3008(
                                                      &Method_System_Collections_Generic_List_string__get_Count__,
                                                      v5);
    byte_4B01064 = 1;
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
                                                    (const MethodInfo_36A2368 *)Method_System_Collections_Generic_List_string__Remove__);
  if ( v4->fields.calledCallbackFunc )
    return;
  remainNameList = v4->fields.remainNameList;
  if ( !remainNameList )
LABEL_12:
    sub_1BC3264(this, data);
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
    sub_1BC3264(this, method);
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
        sub_1BC326C(this, method, v2);
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
    sub_1BC3264(this, method);
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
  if ( (byte_4B0106D & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, method);
    this = (AssetManager__coUnloadUnusedAssets_d__141_o *)sub_1BC3008(&UnityEngine_WaitForEndOfFrame_TypeInfo, v3);
    byte_4B0106D = 1;
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
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v18->fields.m_target)(
        v18->fields.original_method_info,
        *(_QWORD *)&v18->fields.extra_arg);
      p_unloadCallbacks->klass = 0LL;
      sub_1BC2FAC(p_unloadCallbacks, 0, v21, v22);
    }
    return 0;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v2->fields.__1__state = -1;
      v6 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v6, 0LL);
      v2->fields._wait_5__2 = v6;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v2->fields._wait_5__2, (int32_t)v6, v7, v8);
      goto LABEL_8;
    }
    return 0;
  }
  v2->fields.__1__state = -1;
LABEL_8:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  this = (AssetManager__coUnloadUnusedAssets_d__141_o *)AssetManager__LoadIsBusy(0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( _4__this )
    {
      v13 = 1;
      _4__this->fields.inProgressUnloadUnusedAssets = 1;
      v14 = UnityEngine_Resources__UnloadUnusedAssets(0LL);
      v2->fields.__2__current = (Il2CppObject *)v14;
      p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1BC2FAC(p__2__current, (int32_t)v14, v16, v17);
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
      return v13;
    }
LABEL_19:
    sub_1BC3264(this, method);
  }
  wait_5__2 = (Il2CppObject *)v2->fields._wait_5__2;
  v2->fields.__2__current = wait_5__2;
  v12 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1BC2FAC(v12, (int32_t)wait_5__2, v9, v10);
  v13 = 1;
  LODWORD(v12[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return v13;
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

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_AssetManager__coUnloadUnusedAssets_d__141_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
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