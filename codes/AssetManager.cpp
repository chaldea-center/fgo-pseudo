void __fastcall AssetManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
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
  int32_t v14; // w3
  int32_t v15; // w1
  struct AssetManager_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w1
  struct AssetManager_StaticFields *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w1
  struct AssetManager_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  struct AssetManager_StaticFields *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w1
  struct AssetManager_StaticFields *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w1
  struct AssetManager_StaticFields *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w1
  struct AssetManager_StaticFields *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3

  if ( (byte_49FB530 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_2486/*"Asset"*/, v4);
    sub_1B640C8(&StringLiteral_2499/*"AssetStorageBack.txt"*/, v5);
    sub_1B640C8(&StringLiteral_22119/*"offline"*/, v6);
    sub_1B640C8(&StringLiteral_2498/*"AssetStorage.txt"*/, v7);
    sub_1B640C8(&StringLiteral_2500/*"AssetStorageCreate.txt"*/, v8);
    sub_1B640C8(&StringLiteral_1/*""*/, v9);
    sub_1B640C8(&StringLiteral_22189/*"online"*/, v10);
    byte_49FB530 = 1;
  }
  AssetManager_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_2486/*"Asset"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)AssetManager_TypeInfo->static_fields, StringLiteral_2486/*"Asset"*/, v2, v3);
  v11 = StringLiteral_22119/*"offline"*/;
  static_fields = AssetManager_TypeInfo->static_fields;
  static_fields->SAVE_DATA_OFFLINE = (struct System_String_o *)StringLiteral_22119/*"offline"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->SAVE_DATA_OFFLINE, v11, v13, v14);
  v15 = StringLiteral_22189/*"online"*/;
  v16 = AssetManager_TypeInfo->static_fields;
  v16->SAVE_DATA_ONLINE = (struct System_String_o *)StringLiteral_22189/*"online"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v16->SAVE_DATA_ONLINE, v15, v17, v18);
  v19 = StringLiteral_2498/*"AssetStorage.txt"*/;
  v20 = AssetManager_TypeInfo->static_fields;
  v20->configFileName = (struct System_String_o *)StringLiteral_2498/*"AssetStorage.txt"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v20->configFileName, v19, v21, v22);
  v23 = StringLiteral_2500/*"AssetStorageCreate.txt"*/;
  v24 = AssetManager_TypeInfo->static_fields;
  v24->createConfigFileName = (struct System_String_o *)StringLiteral_2500/*"AssetStorageCreate.txt"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v24->createConfigFileName, v23, v25, v26);
  v27 = StringLiteral_2499/*"AssetStorageBack.txt"*/;
  v28 = AssetManager_TypeInfo->static_fields;
  v28->backConfigFileName = (struct System_String_o *)StringLiteral_2499/*"AssetStorageBack.txt"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v28->backConfigFileName, v27, v29, v30);
  v31 = (int)StringLiteral_1/*""*/;
  v32 = AssetManager_TypeInfo->static_fields;
  v32->assetBundleMasterVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v32->assetBundleMasterVersion, v31, v33, v34);
  v35 = (int)StringLiteral_1/*""*/;
  v36 = AssetManager_TypeInfo->static_fields;
  v36->assetBundleDateVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v36->assetBundleDateVersion, v35, v37, v38);
  v39 = (int)StringLiteral_1/*""*/;
  v40 = AssetManager_TypeInfo->static_fields;
  v40->assetBundleBuildVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v40->assetBundleBuildVersion, v39, v41, v42);
}


void __fastcall AssetManager___ctor(AssetManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_object__object__o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_Dictionary_object__object__o *v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_Dictionary_object__object__o *v21; // x20
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_object__o *v29; // x20
  int32_t v30; // w2
  int32_t v31; // w3
  __int64 v32; // x1
  __int64 v33; // x2
  System_Collections_Generic_Queue_T__o *v34; // x20
  int32_t v35; // w2
  int32_t v36; // w3

  if ( (byte_49FB52F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__AssetData__TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_AssetLoader___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_AssetLoader__TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager___ctor__, v9);
    sub_1B640C8(&StringLiteral_1/*""*/, v10);
    byte_49FB52F = 1;
  }
  *(_WORD *)&this->fields._DispLog = 257;
  this->fields.isInitEnd = 1;
  v11 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                     System_Collections_Generic_Dictionary_string__AssetData__TypeInfo,
                                                                     method,
                                                                     v2);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v11,
    (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.assetBundleDic = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)v11;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.assetBundleDic, (int32_t)v11, v12, v13);
  v16 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                     System_Collections_Generic_Dictionary_string__AssetData__TypeInfo,
                                                                     v14,
                                                                     v15);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v16,
    (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.assetBundleReleaseDic = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)v16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.assetBundleReleaseDic, (int32_t)v16, v17, v18);
  v21 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                     System_Collections_Generic_Dictionary_string__AssetData__TypeInfo,
                                                                     v19,
                                                                     v20);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v21,
    (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.assetResourceDic = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)v21;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.assetResourceDic, (int32_t)v21, v22, v23);
  v24 = (int)StringLiteral_1/*""*/;
  this->fields.requestConfigWriteData = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.requestConfigWriteData, v24, v25, v26);
  this->fields.requestWriteCounter = -1.0;
  v29 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_AssetLoader__TypeInfo,
                                                       v27,
                                                       v28);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_AssetLoader___ctor__);
  this->fields.processingAssetLoaderList = (struct System_Collections_Generic_List_AssetLoader__o *)v29;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.processingAssetLoaderList, (int32_t)v29, v30, v31);
  this->fields.loadParallelMax = 1;
  v34 = (System_Collections_Generic_Queue_T__o *)sub_1B64314(
                                                   System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo,
                                                   v32,
                                                   v33);
  System_Collections_Generic_Queue_object____ctor(
    v34,
    (const MethodInfo_362251C *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
  this->fields.downLoadWaitList = (struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)v34;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.downLoadWaitList, (int32_t)v34, v35, v36);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_36EC454 *)Method_SingletonMonoBehaviour_AssetManager___ctor__);
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
  const MethodInfo *v22; // x3
  AssetManager_LoadWaitStatus_o *v23; // x23
  AssetData_o *klass; // x0
  const MethodInfo *v25; // x2
  int v26; // w19
  System_Collections_Generic_Queue_Enumerator_T__o v28; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_49FB51B & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__,
      *(_QWORD *)&type);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__, v13);
    byte_49FB51B = 1;
  }
  memset(&v28, 0, sizeof(v28));
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
    goto LABEL_10;
  v15 = 0;
  while ( v15 < processingAssetLoaderList->fields._size )
  {
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               processingAssetLoaderList,
                                                                               v15,
                                                                               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    if ( !processingAssetLoaderList )
      goto LABEL_10;
    v17 = (AssetLoader_o *)processingAssetLoaderList;
    syncRoot = (AssetData_o *)processingAssetLoaderList->fields._syncRoot;
    if ( syncRoot && AssetData__IsSame_37451096(syncRoot, type, name, v16) )
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
    sub_1B64324(processingAssetLoaderList);
  System_Collections_Generic_Queue_object___GetEnumerator(
    &v28,
    (System_Collections_Generic_Queue_T__o *)processingAssetLoaderList,
    (const MethodInfo_3622B9C *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  while ( 1 )
  {
    v20 = System_Collections_Generic_Queue_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_322A4BC *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    if ( !v20 )
      break;
    Current = System_Collections_Generic_Queue_Enumerator_object___get_Current(
                &v28,
                (const MethodInfo_322A5AC *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    v23 = (AssetManager_LoadWaitStatus_o *)Current;
    if ( !Current )
      sub_1B64324(0LL);
    klass = (AssetData_o *)Current[1].klass;
    if ( klass && AssetData__IsSame_37451096(klass, type, name, v22) )
    {
      AssetManager_LoadWaitStatus__AddCallback(v23, callbackFunc, v25);
      v26 = 7;
      goto LABEL_19;
    }
  }
  v26 = 8;
LABEL_19:
  System_Collections_Generic_Queue_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_322A4AC *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  return v20 && v26 == 7;
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
  const MethodInfo *v22; // x3
  AssetManager_LoadWaitStatus_o *v23; // x23
  AssetData_o *klass; // x0
  _BOOL8 IsSame_37451096; // x0
  const MethodInfo *v26; // x2
  struct AssetData_o *v27; // x8
  int32_t v28; // w9
  int v29; // w19
  struct AssetData_o *data; // x8
  int32_t entryCount; // w9
  System_Collections_Generic_Queue_Enumerator_T__o v33; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Queue_Enumerator_T__o v34; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FB51A & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__,
      *(_QWORD *)&type);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__, v13);
    byte_49FB51A = 1;
  }
  memset(&v34, 0, sizeof(v34));
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
    goto LABEL_10;
  v15 = 0;
  while ( v15 < processingAssetLoaderList->fields._size )
  {
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               processingAssetLoaderList,
                                                                               v15,
                                                                               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    if ( !processingAssetLoaderList )
      goto LABEL_10;
    v17 = (AssetLoader_o *)processingAssetLoaderList;
    syncRoot = (AssetData_o *)processingAssetLoaderList->fields._syncRoot;
    if ( syncRoot )
    {
      processingAssetLoaderList = (System_Collections_Generic_List_object__o *)AssetData__IsSame_37451096(
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
        sub_1B64324(processingAssetLoaderList);
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
    &v33,
    (System_Collections_Generic_Queue_T__o *)processingAssetLoaderList,
    (const MethodInfo_3622B9C *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  v34 = v33;
  while ( 1 )
  {
    v20 = System_Collections_Generic_Queue_Enumerator_object___MoveNext(
            &v34,
            (const MethodInfo_322A4BC *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    if ( !v20 )
    {
      v29 = 8;
      goto LABEL_22;
    }
    Current = System_Collections_Generic_Queue_Enumerator_object___get_Current(
                &v34,
                (const MethodInfo_322A5AC *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    v23 = (AssetManager_LoadWaitStatus_o *)Current;
    if ( !Current )
      sub_1B64324(0LL);
    klass = (AssetData_o *)Current[1].klass;
    if ( klass )
    {
      IsSame_37451096 = AssetData__IsSame_37451096(klass, type, name, v22);
      if ( IsSame_37451096 )
        break;
    }
  }
  v27 = v23->fields.data;
  if ( !v27 )
    sub_1B64324(IsSame_37451096);
  v28 = v27->fields.entryCount;
  if ( (v28 & 0x80000000) == 0 )
    v27->fields.entryCount = v28 + 1;
  AssetManager_LoadWaitStatus__AddCallback(v23, callbackFunc, v26);
  v29 = 7;
LABEL_22:
  System_Collections_Generic_Queue_Enumerator_object___Dispose(
    &v34,
    (const MethodInfo_322A4AC *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  return v20 && v29 == 7;
}


void __fastcall AssetManager__AddLoadWaitStatus(
        AssetManager_o *this,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_Generic_Queue_T__o *downLoadWaitList; // x0

  if ( (byte_49FB51D & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_LoadWaitStatus_TypeInfo, callbackFunc);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__, v5);
    byte_49FB51D = 1;
  }
  v6 = sub_1B64314(AssetManager_LoadWaitStatus_TypeInfo, callbackFunc, method);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_QWORD *)(v6 + 24) = callbackFunc;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v6 + 24), (int32_t)callbackFunc, v7, v8);
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
    sub_1B64324(0LL);
  System_Collections_Generic_Queue_object___Enqueue(
    downLoadWaitList,
    (Il2CppObject *)v6,
    (const MethodInfo_3622AE4 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
}


void __fastcall AssetManager__AddLoadWaitStatus_37489820(
        AssetManager_o *this,
        AssetData_o *info,
        const MethodInfo *method)
{
  AssetManager_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3

  v4 = this;
  if ( (byte_49FB51E & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_LoadWaitStatus_TypeInfo, info);
    this = (AssetManager_o *)sub_1B640C8(
                               &Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__,
                               v5);
    byte_49FB51E = 1;
  }
  if ( !info
    || (v4->fields.downloadSize += info->fields.size,
        v6 = sub_1B64314(AssetManager_LoadWaitStatus_TypeInfo, info, method),
        System_Object___ctor((Il2CppObject *)v6, 0LL),
        *(_QWORD *)(v6 + 16) = info,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v6 + 16), (int32_t)info, v7, v8),
        (this = (AssetManager_o *)v4->fields.downLoadWaitList) == 0LL) )
  {
    sub_1B64324(this);
  }
  System_Collections_Generic_Queue_object___Enqueue(
    (System_Collections_Generic_Queue_T__o *)this,
    (Il2CppObject *)v6,
    (const MethodInfo_3622AE4 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
}


void __fastcall AssetManager__AddLoadWaitStatus_37500212(
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
  if ( (byte_49FB51F & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_LoadWaitStatus_TypeInfo, info);
    this = (AssetManager_o *)sub_1B640C8(
                               &Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__,
                               v9);
    byte_49FB51F = 1;
  }
  if ( !info
    || (v8->fields.downloadSize += info->fields.size,
        v10 = (AssetManager_LoadWaitStatus_o *)sub_1B64314(AssetManager_LoadWaitStatus_TypeInfo, info, callbackFunc),
        AssetManager_LoadWaitStatus___ctor_37500384(v10, info, callbackFunc, resourceNames, v11),
        (this = (AssetManager_o *)v8->fields.downLoadWaitList) == 0LL) )
  {
    sub_1B64324(this);
  }
  System_Collections_Generic_Queue_object___Enqueue(
    (System_Collections_Generic_Queue_T__o *)this,
    (Il2CppObject *)v10,
    (const MethodInfo_3622AE4 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
}


void __fastcall AssetManager__CancelDownloadAssetStorage(AssetManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Queue_T__o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  System_Collections_Generic_Queue_T__o *downLoadWaitList; // x0
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o **p_downLoadWaitList; // x21
  struct System_Object_array *array; // x8

  if ( (byte_49FB512 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__, v6);
    sub_1B640C8(&System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo, v7);
    byte_49FB512 = 1;
  }
  v8 = (System_Collections_Generic_Queue_T__o *)sub_1B64314(
                                                  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo,
                                                  method,
                                                  v2);
  System_Collections_Generic_Queue_object____ctor(
    v8,
    (const MethodInfo_362251C *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
  p_downLoadWaitList = &this->fields.downLoadWaitList;
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
LABEL_12:
    sub_1B64324(downLoadWaitList);
  while ( downLoadWaitList->fields._size > 0 )
  {
    downLoadWaitList = (System_Collections_Generic_Queue_T__o *)System_Collections_Generic_Queue_object___Dequeue(
                                                                  downLoadWaitList,
                                                                  (const MethodInfo_3622C74 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
    if ( !downLoadWaitList )
      goto LABEL_12;
    array = downLoadWaitList->fields._array;
    if ( array && SHIDWORD(array->m_Items[6]) <= 0 )
    {
      this->fields.downloadSize -= SLODWORD(array->m_Items[2]);
    }
    else
    {
      if ( !v8 )
        goto LABEL_12;
      System_Collections_Generic_Queue_object___Enqueue(
        v8,
        (Il2CppObject *)downLoadWaitList,
        (const MethodInfo_3622AE4 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
    }
    downLoadWaitList = (System_Collections_Generic_Queue_T__o *)*p_downLoadWaitList;
    if ( !*p_downLoadWaitList )
      goto LABEL_12;
  }
  this->fields.downLoadWaitList = (struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)v8;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.downLoadWaitList, (int32_t)v8, v9, v10);
  this->fields.isCancelDownload = 1;
}


void __fastcall AssetManager__CancelDownloadAssetStorageAll(AssetManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *downLoadWaitList; // x0

  if ( (byte_49FB513 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__, method);
    byte_49FB513 = 1;
  }
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
  this->fields.downloadSize = 0LL;
  if ( !downLoadWaitList )
    sub_1B64324(0LL);
  System_Collections_Generic_Queue_object___Clear(
    downLoadWaitList,
    (const MethodInfo_36227A4 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__);
}


bool __fastcall AssetManager__CheckDateVersion(System_String_o *dateVersion, const MethodInfo *method)
{
  AssetManager_c *v3; // x0
  System_String_o *assetBundleDateVersion; // x0

  if ( (byte_49FB4DF & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    byte_49FB4DF = 1;
  }
  v3 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v3 = AssetManager_TypeInfo;
  }
  assetBundleDateVersion = v3->static_fields->assetBundleDateVersion;
  if ( !assetBundleDateVersion )
    sub_1B64324(0LL);
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
  const MethodInfo *v18; // x3
  AssetData_o *klass; // x0
  int v20; // w19
  System_Collections_Generic_Queue_Enumerator_T__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FB51C & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__,
      *(_QWORD *)&type);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__, v11);
    byte_49FB51C = 1;
  }
  memset(&v22, 0, sizeof(v22));
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
    goto LABEL_10;
  v13 = 0;
  while ( v13 < processingAssetLoaderList->fields._size )
  {
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               processingAssetLoaderList,
                                                                               v13,
                                                                               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    if ( !processingAssetLoaderList )
      goto LABEL_10;
    syncRoot = (AssetData_o *)processingAssetLoaderList->fields._syncRoot;
    if ( syncRoot && AssetData__IsSame_37451096(syncRoot, type, name, v14) )
      return 1;
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
    ++v13;
    if ( !processingAssetLoaderList )
      goto LABEL_10;
  }
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.downLoadWaitList;
  if ( !processingAssetLoaderList )
LABEL_10:
    sub_1B64324(processingAssetLoaderList);
  System_Collections_Generic_Queue_object___GetEnumerator(
    &v22,
    (System_Collections_Generic_Queue_T__o *)processingAssetLoaderList,
    (const MethodInfo_3622B9C *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  while ( 1 )
  {
    v16 = System_Collections_Generic_Queue_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_322A4BC *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    if ( !v16 )
      break;
    Current = System_Collections_Generic_Queue_Enumerator_object___get_Current(
                &v22,
                (const MethodInfo_322A5AC *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    if ( !Current )
      sub_1B64324(0LL);
    klass = (AssetData_o *)Current[1].klass;
    if ( klass && AssetData__IsSame_37451096(klass, type, name, v18) )
    {
      v20 = 7;
      goto LABEL_19;
    }
  }
  v20 = 8;
LABEL_19:
  System_Collections_Generic_Queue_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_322A4AC *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  return v16 && v20 == 7;
}


bool __fastcall AssetManager__CheckVersion(
        System_String_o *masterVersion,
        System_String_o *dateVersion,
        const MethodInfo *method)
{
  AssetManager_c *v5; // x0
  AssetManager_c *v6; // x0

  if ( (byte_49FB4DE & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, dateVersion);
    byte_49FB4DE = 1;
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
  System_Collections_Generic_Dictionary_object__object__o *assetBundleDic; // x0
  _BOOL8 v9; // x0
  AssetData_o *currentValue; // x21
  Il2CppClass *klass; // x0
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1
  System_String_o *Path; // x23
  const MethodInfo *v15; // x2
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FB52E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, method);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v3);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v4);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v6);
    sub_1B640C8(&StringLiteral_12420/*"SYSTEM"*/, v7);
    byte_49FB52E = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.assetBundleDic, 0LL) )
  {
    assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
    if ( !assetBundleDic
      || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                        assetBundleDic,
                                                                                        (const MethodInfo_3179228 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
    {
      sub_1B64324(assetBundleDic);
    }
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v16,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
      (const MethodInfo_37BDDB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    v17 = v16;
    while ( 1 )
    {
      v9 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
             &v17,
             (const MethodInfo_3277270 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
      if ( !v9 )
        break;
      currentValue = (AssetData_o *)v17.fields._currentValue;
      if ( !v17.fields._currentValue )
        sub_1B64324(v9);
      klass = v17.fields._currentValue[2].klass;
      if ( !klass )
        sub_1B64324(0LL);
      if ( !System_String__Equals_61383776((System_String_o *)klass, (System_String_o *)StringLiteral_12420/*"SYSTEM"*/, 5, 0LL) )
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
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
      &v17,
      (const MethodInfo_327726C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
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
  System_Collections_Generic_Dictionary_object__object__o *assetBundleDic; // x0
  int32_t Count; // w22
  __int64 v18; // x1
  __int64 v19; // x2
  System_Text_StringBuilder_o *v20; // x21
  AssetManager_c *v21; // x0
  AssetManager_c *v22; // x0
  AssetManager_c *v23; // x0
  _BOOL8 v24; // x0
  Il2CppObject *currentValue; // x24
  Il2CppObject *requestConfigWriteData; // x22
  System_String_o *v27; // x21
  System_Text_Encoding_o *UTF8; // x0
  System_Byte_array *v29; // x24
  System_String_o *v30; // x1
  System_String_o *v31; // x21
  struct System_String_o *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v35; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v36; // [xsp+20h] [xbp-80h] BYREF
  uint32_t v37; // [xsp+48h] [xbp-58h] BYREF
  bool lockTaken; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_49FB516 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, isFast);
    sub_1B640C8(&CatAndMouseGame_TypeInfo, v5);
    sub_1B640C8(&Crc32_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, v8);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v9);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v10);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v11);
    sub_1B640C8(&System_Text_StringBuilder_TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v13);
    sub_1B640C8(&StringLiteral_43/*"\n"*/, v14);
    sub_1B640C8(&StringLiteral_25054/*"~"*/, v15);
    byte_49FB516 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  lockTaken = 0;
  v37 = 0;
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic )
    goto LABEL_35;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         assetBundleDic,
         (const MethodInfo_31790C8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) < 1 )
    return;
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic )
    goto LABEL_35;
  Count = System_Collections_Generic_Dictionary_object__object___get_Count(
            assetBundleDic,
            (const MethodInfo_31790C8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__);
  v20 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, v18, v19);
  System_Text_StringBuilder___ctor_60529900(v20, 60 * Count, 0LL);
  if ( !v20 )
    goto LABEL_35;
  System_Text_StringBuilder__Append_60538876(v20, 0x40u, 0LL);
  v21 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v21 = AssetManager_TypeInfo;
  }
  System_Text_StringBuilder__Append_60536548(v20, v21->static_fields->assetBundleMasterVersion, 0LL);
  if ( !System_String__IsNullOrEmpty(AssetManager_TypeInfo->static_fields->assetBundleDateVersion, 0LL) )
  {
    System_Text_StringBuilder__Append_60538876(v20, 0x2Cu, 0LL);
    v22 = AssetManager_TypeInfo;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      v22 = AssetManager_TypeInfo;
    }
    System_Text_StringBuilder__Append_60536548(v20, v22->static_fields->assetBundleDateVersion, 0LL);
    if ( !System_String__IsNullOrEmpty(AssetManager_TypeInfo->static_fields->assetBundleBuildVersion, 0LL) )
    {
      System_Text_StringBuilder__Append_60538876(v20, 0x2Cu, 0LL);
      v23 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v23 = AssetManager_TypeInfo;
      }
      System_Text_StringBuilder__Append_60536548(v20, v23->static_fields->assetBundleBuildVersion, 0LL);
    }
  }
  System_Text_StringBuilder__Append_60538876(v20, 0xAu, 0LL);
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      assetBundleDic,
                                                                                      (const MethodInfo_3179228 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
LABEL_35:
    sub_1B64324(assetBundleDic);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v35,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_37BDDB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v36 = v35;
  while ( 1 )
  {
    v24 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v36,
            (const MethodInfo_3277270 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v24 )
      break;
    currentValue = v36.fields._currentValue;
    if ( !v36.fields._currentValue )
      sub_1B64324(v24);
    System_Text_StringBuilder__Append_60539044(v20, (int32_t)v36.fields._currentValue[2].monitor, 0LL);
    System_Text_StringBuilder__Append_60538876(v20, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_60536548(v20, (System_String_o *)currentValue[2].klass, 0LL);
    System_Text_StringBuilder__Append_60538876(v20, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_60539044(v20, (int32_t)currentValue[3].klass, 0LL);
    System_Text_StringBuilder__Append_60538876(v20, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_60539220(v20, HIDWORD(currentValue[3].klass), 0LL);
    System_Text_StringBuilder__Append_60538876(v20, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_60536548(v20, (System_String_o *)currentValue[1].monitor, 0LL);
    System_Text_StringBuilder__Append_60536548(v20, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v36,
    (const MethodInfo_327726C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  requestConfigWriteData = (Il2CppObject *)this->fields.requestConfigWriteData;
  lockTaken = 0;
  System_Threading_Monitor__Enter_62601116(requestConfigWriteData, &lockTaken, 0LL);
  v27 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v20->klass->vtable._3_ToString.method)(
                             v20,
                             v20->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_1B64324(0LL);
  v29 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._19_GetBytes.method)(
                               UTF8,
                               v27,
                               UTF8->klass->vtable._20_GetBytes.methodPtr);
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  v37 = Crc32__Compute(v29, 0LL);
  v30 = System_UInt32__ToString((uint32_t)&v37, 0LL);
  v31 = System_String__Concat_61388660(
          (System_String_o *)StringLiteral_25054/*"~"*/,
          v30,
          (System_String_o *)StringLiteral_43/*"\n"*/,
          v27,
          0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v32 = CatAndMouseGame__CatGame8(v31, 0LL);
  this->fields.requestConfigWriteData = v32;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.requestConfigWriteData, (int32_t)v32, v33, v34);
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
  int32_t v5; // w3
  const MethodInfo *v6; // x1

  AssetManager__ConfigWriteRequest(this, 0, v2);
  this->fields.writeRequestThread = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.writeRequestThread, 0, v4, v5);
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
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x19
  int32_t v16; // w1
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w1
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w1
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w1
  unsigned int i; // w21
  System_String_o format; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FB50C & 1) == 0 )
  {
    sub_1B640C8(&string___TypeInfo, method);
    sub_1B640C8(&StringLiteral_8130/*"KB"*/, v4);
    sub_1B640C8(&StringLiteral_25005/*"{0}{1}"*/, v5);
    sub_1B640C8(&StringLiteral_9165/*"N2"*/, v6);
    sub_1B640C8(&StringLiteral_13206/*"TB"*/, v7);
    sub_1B640C8(&StringLiteral_2628/*"B"*/, v8);
    sub_1B640C8(&StringLiteral_8564/*"MB"*/, v9);
    sub_1B640C8(&StringLiteral_6854/*"GB"*/, v10);
    byte_49FB50C = 1;
  }
  v11 = (System_String_o *)sub_1B64170(string___TypeInfo, 5LL);
  if ( !v11 )
    sub_1B64324(0LL);
  v15 = v11;
  if ( !LODWORD(v11[1].klass) )
    goto LABEL_14;
  v16 = StringLiteral_2628/*"B"*/;
  v11[1].monitor = (void *)StringLiteral_2628/*"B"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v11[1].monitor, v16, v13, v14);
  if ( LODWORD(v15[1].klass) <= 1 )
    goto LABEL_14;
  v19 = StringLiteral_8130/*"KB"*/;
  v15[1].fields = (System_String_Fields)StringLiteral_8130/*"KB"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v15[1].fields, v19, v17, v18);
  if ( LODWORD(v15[1].klass) <= 2 )
    goto LABEL_14;
  v22 = StringLiteral_8564/*"MB"*/;
  v15[2].klass = (System_String_c *)StringLiteral_8564/*"MB"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v15[2], v22, v20, v21);
  if ( LODWORD(v15[1].klass) <= 3 )
    goto LABEL_14;
  v25 = StringLiteral_6854/*"GB"*/;
  v15[2].monitor = (void *)StringLiteral_6854/*"GB"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v15[2].monitor, v25, v23, v24);
  if ( LODWORD(v15[1].klass) <= 4 )
    goto LABEL_14;
  v28 = StringLiteral_13206/*"TB"*/;
  v15[2].fields = (System_String_Fields)StringLiteral_13206/*"TB"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v15[2].fields, v28, v26, v27);
  for ( i = 0; i != 4; ++i )
  {
    if ( size < 1000.0 )
      break;
    size = size / 1000.0;
    *(double *)&format.klass = size;
  }
  v11 = System_Double__ToString_62085464(1000.0, &format, (const MethodInfo *)StringLiteral_9165/*"N2"*/);
  if ( i >= LODWORD(v15[1].klass) )
LABEL_14:
    sub_1B6432C(v11, v12);
  return System_String__Format_61389768(
           (System_String_o *)StringLiteral_25005/*"{0}{1}"*/,
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
  struct System_Collections_Generic_List_AssetLoader__o *processingAssetLoaderList; // x8
  int size; // w8
  int v15; // w9
  _BOOL8 v16; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v17; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v18; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v19; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_49FB506 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__, v3);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v4);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__, v5);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v6);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__, v7);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v11);
    byte_49FB506 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  memset(&v18, 0, sizeof(v18));
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
    goto LABEL_22;
  System_Collections_Generic_Queue_object___GetEnumerator(
    (System_Collections_Generic_Queue_Enumerator_T__o *)&v17,
    downLoadWaitList,
    (const MethodInfo_3622B9C *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  v19 = v17;
  while ( System_Collections_Generic_Queue_Enumerator_object___MoveNext(
            (System_Collections_Generic_Queue_Enumerator_T__o *)&v19,
            (const MethodInfo_322A4BC *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__) )
  {
    if ( !System_Collections_Generic_Queue_Enumerator_object___get_Current(
            (System_Collections_Generic_Queue_Enumerator_T__o *)&v19,
            (const MethodInfo_322A5AC *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__) )
      sub_1B64324(0LL);
  }
  System_Collections_Generic_Queue_Enumerator_object___Dispose(
    (System_Collections_Generic_Queue_Enumerator_T__o *)&v19,
    (const MethodInfo_322A4AC *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  processingAssetLoaderList = this->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
    goto LABEL_22;
  size = processingAssetLoaderList->fields._size;
  v15 = -1;
  do
    ++v15;
  while ( v15 < size );
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.assetBundleDic;
  if ( !downLoadWaitList )
    goto LABEL_22;
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                (System_Collections_Generic_Dictionary_object__object__o *)downLoadWaitList,
                                                                (const MethodInfo_3179228 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !downLoadWaitList )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v17,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)downLoadWaitList,
    (const MethodInfo_37BDDB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v18 = v17;
  while ( 1 )
  {
    v16 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v18,
            (const MethodInfo_3277270 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v16 )
      break;
    if ( !v18.fields._currentValue )
      sub_1B64324(v16);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v18,
    (const MethodInfo_327726C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.assetResourceDic;
  if ( !downLoadWaitList
    || (downLoadWaitList = (System_Collections_Generic_Queue_T__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                      (System_Collections_Generic_Dictionary_object__object__o *)downLoadWaitList,
                                                                      (const MethodInfo_3179228 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
LABEL_22:
    sub_1B64324(downLoadWaitList);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v17,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)downLoadWaitList,
    (const MethodInfo_37BDDB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v18,
            (const MethodInfo_3277270 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__) )
    ;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v18,
    (const MethodInfo_327726C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
}


System_Collections_IEnumerator_o *__fastcall AssetManager__DelayLoadStart(
        AssetManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FB522 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager__DelayLoadStart_d__149_TypeInfo, method);
    byte_49FB522 = 1;
  }
  v4 = sub_1B64314(AssetManager__DelayLoadStart_d__149_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall AssetManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  AssetManager_c *v2; // x0

  if ( (byte_49FB4D7 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, v1);
    byte_49FB4D7 = 1;
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
        AssetManager__AddLoadWaitStatus_37500212(this, AssetData, callbackFunc, 0LL, v12);
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
  const MethodInfo *v13; // x2
  AssetData_o *currentValue; // x22
  int monitor; // w8
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v18; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49FB50D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, attrib);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v7);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v8);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v10);
    byte_49FB50D = 1;
  }
  memset(&v18, 0, sizeof(v18));
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      assetBundleDic,
                                                                                      (const MethodInfo_3179228 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
    sub_1B64324(assetBundleDic);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v18,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_37BDDB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v12 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v18,
            (const MethodInfo_3277270 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v12 )
      break;
    currentValue = (AssetData_o *)v18.fields._currentValue;
    if ( !v18.fields._currentValue )
      sub_1B64324(v12);
    monitor = (int)v18.fields._currentValue[2].monitor;
    if ( monitor < 1 || monitor == HIDWORD(v18.fields._currentValue[2].monitor) )
    {
      if ( System_String__op_Equality(attrib, (System_String_o *)v18.fields._currentValue[2].klass, 0LL)
        && currentValue->fields.nowVersion != currentValue->fields.newVersion )
      {
        AssetManager__AddLoadWaitStatus_37489820(this, currentValue, v16);
      }
    }
    else
    {
      AssetManager__AddLoadWaitStatus_37489820(this, (AssetData_o *)v18.fields._currentValue, v13);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v18,
    (const MethodInfo_327726C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  this->fields.loadParallelMax = loadParallelMax;
  AssetManager__LoadStart(this, v17);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall AssetManager__DownloadAssetStorageAttributeWithCheckDialog(
        AssetManager_o *this,
        System_String_o *attrib,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_49FB50B & 1) == 0 )
  {
    sub_1B640C8(&AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_TypeInfo, attrib);
    byte_49FB50B = 1;
  }
  v7 = sub_1B64314(
         AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_TypeInfo,
         attrib,
         *(_QWORD *)&loadParallelMax);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 40) = attrib;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)attrib, v10, v11);
  *(_DWORD *)(v7 + 56) = loadParallelMax;
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall AssetManager__DownloadAssetStorageAttribute_37492760(
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
  const MethodInfo *v18; // x2
  AssetData_o *currentValue; // x22
  int monitor; // w8
  int monitor_high; // w9
  unsigned __int64 v22; // x26
  __int64 v23; // x25
  _BOOL8 v24; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x2
  const MethodInfo *v28; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v29; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v30; // [xsp+20h] [xbp-70h] BYREF

  v6 = this;
  if ( (byte_49FB50E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, attribList);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v7);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v8);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v10);
    this = (AssetManager_o *)sub_1B640C8(&StringLiteral_871/*", "*/, v11);
    byte_49FB50E = 1;
  }
  memset(&v30, 0, sizeof(v30));
  if ( !attribList )
LABEL_33:
    sub_1B64324(this);
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
        this = (AssetManager_o *)System_String__Concat_61386656(
                                   v13,
                                   (System_String_o *)StringLiteral_871/*", "*/,
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
    sub_1B6432C(this, attribList);
  }
LABEL_14:
  this = (AssetManager_o *)v6->fields.assetBundleDic;
  if ( !this )
    goto LABEL_33;
  this = (AssetManager_o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                             (System_Collections_Generic_Dictionary_object__object__o *)this,
                             (const MethodInfo_3179228 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !this )
    goto LABEL_33;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v29,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_37BDDB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v30 = v29;
LABEL_17:
  while ( 1 )
  {
    v17 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v30,
            (const MethodInfo_3277270 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v17 )
      break;
    currentValue = (AssetData_o *)v30.fields._currentValue;
    if ( !v30.fields._currentValue )
      sub_1B64324(v17);
    monitor = (int)v30.fields._currentValue[2].monitor;
    monitor_high = HIDWORD(v30.fields._currentValue[2].monitor);
    if ( monitor < 1 )
    {
      if ( monitor != monitor_high && (int)*(_QWORD *)&attribList->max_length >= 1 )
      {
        v22 = 0LL;
        v23 = (unsigned int)*(_QWORD *)&attribList->max_length - 1LL;
        while ( 1 )
        {
          v24 = System_String__op_Equality(attribList->m_Items[v22], currentValue->fields.attrib, 0LL);
          if ( v24 )
            break;
          if ( v23 == v22++ )
            goto LABEL_17;
          if ( v22 >= attribList->max_length )
            sub_1B6432C(v24, v25);
        }
        AssetManager__AddLoadWaitStatus_37489820(v6, currentValue, v26);
      }
    }
    else if ( monitor != monitor_high )
    {
      AssetManager__AddLoadWaitStatus_37489820(v6, (AssetData_o *)v30.fields._currentValue, v18);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v30,
    (const MethodInfo_327726C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  v6->fields.loadParallelMax = loadParallelMax;
  AssetManager__LoadStart(v6, v28);
}


bool __fastcall AssetManager__DownloadAssetStorage_37482112(
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
    sub_1B64324(this);
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
        sub_1B6432C(this, nameList);
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

  if ( (byte_49FB529 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_1B640C8(
                               &Method_System_Collections_Generic_Dictionary_string__AssetData__TryGetValue__,
                               dic);
    byte_49FB529 = 1;
  }
  value = 0LL;
  if ( !name )
    return 0LL;
  if ( !dic )
    sub_1B64324(this);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)dic,
         (Il2CppObject *)name,
         &value,
         (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__AssetData__TryGetValue__) )
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
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *v17; // x19
  System_Collections_Generic_Dictionary_object__object__o *assetBundleDic; // x0
  _BOOL8 v19; // x0
  Il2CppObject *currentValue; // x25
  System_String_o *monitor; // x0
  _BOOL8 v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject *v25; // x1
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v31; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v32; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FB510 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, path);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v5);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v6);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__ToArray__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v12);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v13);
    byte_49FB510 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v14 = System_String__Concat_61375396(path, (System_String_o *)StringLiteral_1124/*"/"*/, 0LL);
  v17 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v15,
                                                       v16);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic )
    goto LABEL_21;
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                assetBundleDic,
                                                                                (const MethodInfo_3179228 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !assetBundleDic )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v31,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_37BDDB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v32 = v31;
  while ( 1 )
  {
    v19 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v32,
            (const MethodInfo_3277270 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v19 )
      break;
    currentValue = v32.fields._currentValue;
    if ( !v32.fields._currentValue )
      sub_1B64324(v19);
    monitor = (System_String_o *)v32.fields._currentValue[1].monitor;
    if ( !monitor )
      sub_1B64324(0LL);
    v22 = System_String__StartsWith(monitor, v14, 0LL);
    if ( v22 )
    {
      if ( !v17 )
        sub_1B64324(v22);
      v25 = (Il2CppObject *)currentValue[1].monitor;
      items = v17->fields._items;
      v27 = Method_System_Collections_Generic_List_string__Add__;
      ++v17->fields._version;
      if ( !items )
        sub_1B64324(v22);
      size = v17->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v17,
          v25,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = &items->obj.klass + size;
        v17->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v25;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v25, v23, v24);
      }
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v32,
    (const MethodInfo_327726C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  if ( !v17 )
LABEL_21:
    sub_1B64324(assetBundleDic);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v17,
                                  (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_string__ToArray__);
}


AssetData_array *__fastcall AssetManager__GetAssetStorage_37485652(
        AssetManager_o *this,
        System_String_array *nameList,
        const MethodInfo *method)
{
  AssetManager_o *v4; // x20
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  __int64 v7; // x8
  AssetData_array *v8; // x21
  unsigned __int64 v9; // x24
  ServantStatusBattleListViewItem_o *p_isUseDebugStatus; // x22
  System_String_o *v11; // x2
  AssetManager_o *v12; // x23
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v16; // x0

  v4 = this;
  if ( (byte_49FB52A & 1) == 0 )
  {
    this = (AssetManager_o *)sub_1B640C8(&AssetData___TypeInfo, nameList);
    byte_49FB52A = 1;
  }
  if ( !nameList )
LABEL_17:
    sub_1B64324(this);
  this = (AssetManager_o *)sub_1B64170(AssetData___TypeInfo, nameList->max_length);
  v7 = *(_QWORD *)&nameList->max_length;
  v8 = (AssetData_array *)this;
  if ( (int)v7 >= 1 )
  {
    v9 = 0LL;
    p_isUseDebugStatus = (ServantStatusBattleListViewItem_o *)&this->fields.isUseDebugStatus;
    while ( v9 < (unsigned int)v7 )
    {
      v11 = nameList->m_Items[v9];
      if ( v11 )
      {
        this = (AssetManager_o *)AssetManager__GetAssetData(this, v4->fields.assetBundleDic, v11, v6);
        if ( this )
        {
          v12 = this;
          if ( this->fields.assetBundleReleaseDic )
          {
            if ( !v8 )
              goto LABEL_17;
            this = (AssetManager_o *)sub_1B64204(this, v8->obj.klass->_1.element_class);
            if ( !this )
            {
              v16 = sub_1B64348(0LL);
              sub_1B641F0(v16, 0LL);
            }
            if ( v9 >= v8->max_length )
              break;
            p_isUseDebugStatus->klass = (ServantStatusBattleListViewItem_c *)v12;
            sub_1B6406C(p_isUseDebugStatus, (int32_t)v12, v13, v14);
          }
        }
      }
      LODWORD(v7) = nameList->max_length;
      ++v9;
      p_isUseDebugStatus = (ServantStatusBattleListViewItem_o *)((char *)p_isUseDebugStatus + 8);
      if ( (__int64)v9 >= (int)v7 )
        return v8;
    }
    sub_1B6432C(this, v5);
  }
  return v8;
}


bool __fastcall AssetManager__GetAssetStorage_37486108(
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


bool __fastcall AssetManager__GetAsset_37476376(
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


bool __fastcall AssetManager__GetAsset_37476664(
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


AssetData_o *__fastcall AssetManager__GetAsset_37501280(
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

  if ( (byte_49FB4E1 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, v1);
    byte_49FB4E1 = 1;
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
  const MethodInfo *v7; // x1
  int32_t LoadSize; // w8

  if ( (byte_49FB50F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v3);
    byte_49FB50F = 1;
  }
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
LABEL_8:
    sub_1B64324(processingAssetLoaderList);
  downloadSize = this->fields.downloadSize;
  v6 = 0;
  while ( v6 < processingAssetLoaderList->fields._size )
  {
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               processingAssetLoaderList,
                                                                               v6,
                                                                               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    if ( processingAssetLoaderList )
    {
      LoadSize = AssetLoader__get_LoadSize((AssetLoader_o *)processingAssetLoaderList, v7);
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

  if ( (byte_49FB4E0 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, v1);
    byte_49FB4E0 = 1;
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
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FB514 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager__InitCR_d__131_TypeInfo, method);
    byte_49FB514 = 1;
  }
  v4 = sub_1B64314(AssetManager__InitCR_d__131_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
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
  int32_t v18; // w3
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
  const MethodInfo *v29; // x0
  System_String_o *Path; // x0
  int32_t v31; // w2
  int32_t v32; // w3
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
  int32_t v43; // w3
  struct AssetManager_StaticFields *v44; // x8
  System_String_o *v45; // x20
  System_String_o *v46; // x0
  System_String_o *v47; // x0
  struct AssetManager_StaticFields *v48; // x8
  int32_t v49; // w2
  int32_t v50; // w3
  struct AssetManager_StaticFields *v51; // x8
  System_String_o *v52; // x20
  System_String_o *v53; // x0
  System_String_o *v54; // x0
  struct AssetManager_StaticFields *v55; // x8
  int32_t v56; // w2
  int32_t v57; // w3
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v58; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o i; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FB508 & 1) == 0 )
  {
    sub_1B640C8(&AndroidUtil_TypeInfo, method);
    sub_1B640C8(&AssetManager_TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, v6);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v7);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v8);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_AssetLoader__Clear__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v12);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v13);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v15);
    byte_49FB508 = 1;
  }
  memset(&i, 0, sizeof(i));
  initCRW = this->fields.initCRW;
  if ( initCRW )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, initCRW, 0LL);
    this->fields.initCRW = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.initCRW, 0, v17, v18);
  }
  assetBundleReleaseDic = this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_44;
  System_Collections_Generic_Dictionary_object__object___Clear(
    (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
    (const MethodInfo_3179580 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
  assetBundleReleaseDic = this->fields.assetBundleDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_44;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
         (const MethodInfo_31790C8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) < 1 )
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
                              (const MethodInfo_3179228 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v58,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
      (const MethodInfo_37BDDB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    v20 = 0;
    for ( i = v58;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &i,
            (const MethodInfo_3277270 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
          v20 |= AssetData__ReleaseData((AssetData_o *)i.fields._currentValue, v21) )
    {
      if ( !i.fields._currentValue )
        sub_1B64324(0LL);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
      &i,
      (const MethodInfo_327726C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    assetBundleReleaseDic = this->fields.assetBundleDic;
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    System_Collections_Generic_Dictionary_object__object___Clear(
      (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
      (const MethodInfo_3179580 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
    v22 = v20 != 0;
  }
  assetBundleReleaseDic = this->fields.assetResourceDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_44;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
         (const MethodInfo_31790C8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) >= 1 )
  {
    assetBundleReleaseDic = this->fields.assetResourceDic;
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    assetBundleReleaseDic = System_Collections_Generic_Dictionary_object__object___get_Values(
                              (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
                              (const MethodInfo_3179228 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v58,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
      (const MethodInfo_37BDDB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    for ( i = v58;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &i,
            (const MethodInfo_3277270 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
          v22 |= AssetData__ReleaseData((AssetData_o *)i.fields._currentValue, v24) )
    {
      if ( !i.fields._currentValue )
        sub_1B64324(0LL);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
      &i,
      (const MethodInfo_327726C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    assetBundleReleaseDic = this->fields.assetResourceDic;
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    System_Collections_Generic_Dictionary_object__object___Clear(
      (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
      (const MethodInfo_3179580 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
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
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69127736((UnityEngine_Object_o *)Item, 0LL);
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
    sub_1B64324(assetBundleReleaseDic);
  System_Collections_Generic_Queue_object___Clear(
    (System_Collections_Generic_Queue_T__o *)assetBundleReleaseDic,
    (const MethodInfo_36227A4 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->cachePathName, (int32_t)v34, v31, v32);
  v36 = AssetManager_TypeInfo->static_fields;
  cachePathName = v36->cachePathName;
  configFileName = v36->configFileName;
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  v39 = AndroidUtil__ConvertFileNameIfNeed(configFileName, 0LL);
  v40 = System_String__Concat_61375396(cachePathName, v39, 0LL);
  v41 = AssetManager_TypeInfo->static_fields;
  v41->cacheListFileName = v40;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v41->cacheListFileName, (int32_t)v40, v42, v43);
  v44 = AssetManager_TypeInfo->static_fields;
  v45 = v44->cachePathName;
  v46 = AndroidUtil__ConvertFileNameIfNeed(v44->createConfigFileName, 0LL);
  v47 = System_String__Concat_61375396(v45, v46, 0LL);
  v48 = AssetManager_TypeInfo->static_fields;
  v48->createCacheListFileName = v47;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v48->createCacheListFileName, (int32_t)v47, v49, v50);
  v51 = AssetManager_TypeInfo->static_fields;
  v52 = v51->cachePathName;
  v53 = AndroidUtil__ConvertFileNameIfNeed(v51->backConfigFileName, 0LL);
  v54 = System_String__Concat_61375396(v52, v53, 0LL);
  v55 = AssetManager_TypeInfo->static_fields;
  v55->backCacheListFileName = v54;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v55->backCacheListFileName, (int32_t)v54, v56, v57);
  this->fields.isInitFirst = 0;
}


void __fastcall AssetManager__InitializeAssetStorage(AssetManager_o *this, const MethodInfo *method)
{
  struct System_Collections_IEnumerator_o **p_initCRW; // x20
  struct System_Collections_IEnumerator_o *inited; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  p_initCRW = &this->fields.initCRW;
  if ( !this->fields.initCRW )
  {
    this->fields.isInitEnd = 0;
    inited = AssetManager__InitCR(this, method);
    this->fields.initCRW = inited;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)p_initCRW, (int32_t)inited, v5, v6);
    UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, this->fields.initCRW, 0LL);
  }
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

  if ( (byte_49FB525 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__, name);
    byte_49FB525 = 1;
  }
  assetBundleDic = this->fields.assetBundleDic;
  if ( !assetBundleDic )
    sub_1B64324(0LL);
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)assetBundleDic,
           (Il2CppObject *)name,
           (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__);
}


bool __fastcall AssetManager__IsExistAssetStorage_37478556(
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
    sub_1B64324(this);
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
        sub_1B6432C(this, nameList);
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


bool __fastcall AssetManager__IsNeedDownload_37479104(
        AssetManager_o *this,
        System_String_array *nameList,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v4; // x8
  bool v6; // w21
  AssetManager_o *v7; // x20
  unsigned __int64 v8; // x22
  System_String_o *v9; // x2

  if ( !nameList )
    sub_1B64324(this);
  v4 = *(_QWORD *)&nameList->max_length;
  v6 = (int)v4 > 0;
  if ( (int)v4 >= 1 )
  {
    v7 = this;
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)v4 )
        sub_1B6432C(this, nameList);
      v9 = nameList->m_Items[v8];
      if ( v9 )
      {
        this = (AssetManager_o *)AssetManager__GetAssetData(this, v7->fields.assetBundleDic, v9, v3);
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
  const MethodInfo *v27; // x0
  float v28; // s0
  System_String_o *Path; // x20
  int64_t FreeSize; // x20
  ManagerConfig_c *v31; // x0
  AssetManager_c *v32; // x0
  AssetManager_c *v33; // x0
  AssetManager_c *v34; // x0
  System_String_o *createCacheListFileName; // x20
  System_Text_Encoding_o *UTF8; // x22
  __int64 v37; // x1
  __int64 v38; // x2
  System_IO_StreamWriter_o *v39; // x21
  __int64 v40; // x0
  AssetManager_c *v41; // x0
  AssetManager_c *v42; // x0
  AssetManager_c *v43; // x0
  AssetManager_c *v44; // x0
  int32_t v45; // w1
  int32_t v46; // w2
  int32_t v47; // w3
  __int64 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  System_IO_IOException_o *v51; // x20
  System_String_o *v52; // x0
  __int64 v53; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v54; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v55; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_49FB519 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetManager_OnClickRetryDialog__, method);
    sub_1B640C8(&AssetManager_TypeInfo, v3);
    sub_1B640C8(&ErrorDialog_ClickDelegate_TypeInfo, v4);
    sub_1B640C8(&CommonServicePluginScript_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, v7);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v8);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v9);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v10);
    sub_1B640C8(&LocalizationManager_TypeInfo, v11);
    sub_1B640C8(&ManagementManager_TypeInfo, v12);
    sub_1B640C8(&ManagerConfig_TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_1B640C8(&System_IO_StreamWriter_TypeInfo, v15);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v16);
    sub_1B640C8(&StringLiteral_2139/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, v17);
    sub_1B640C8(&StringLiteral_15870/*"[FFFF80]Download error for debug"*/, v18);
    sub_1B640C8(&StringLiteral_11402/*"SCRIPT"*/, v19);
    sub_1B640C8(&StringLiteral_2140/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, v20);
    sub_1B640C8(&StringLiteral_1/*""*/, v21);
    byte_49FB519 = 1;
  }
  memset(&v55, 0, sizeof(v55));
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_49;
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                       assetBundleReleaseDic,
                                                                                       (const MethodInfo_3179228 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !assetBundleReleaseDic )
    goto LABEL_49;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v54,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
    (const MethodInfo_37BDDB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v23 = 0;
  v55 = v54;
  while ( 1 )
  {
    v24 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v55,
            (const MethodInfo_3277270 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v24 )
      break;
    if ( !v55.fields._currentValue )
      sub_1B64324(v24);
    if ( !HIDWORD(v55.fields._currentValue[5].klass) )
    {
      if ( v55.fields._currentValue[4].monitor )
        v23 |= AssetData__ReleaseData((AssetData_o *)v55.fields._currentValue, v25);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v55,
    (const MethodInfo_327726C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  if ( (v23 & 1) != 0 )
    AssetManager__RequestUnloadUnusedAssets(this, 0LL, v26);
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
LABEL_49:
    sub_1B64324(assetBundleReleaseDic);
  System_Collections_Generic_Dictionary_object__object___Clear(
    assetBundleReleaseDic,
    (const MethodInfo_3179580 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
  if ( this->fields.requestWriteCounter >= 0.0 )
  {
    v28 = this->fields.requestWriteCounter - UnityEngine_Time__get_deltaTime(0LL);
    this->fields.requestWriteCounter = v28;
    if ( v28 <= 0.0 && !this->fields.isErrorDialog )
    {
      Path = AssetStorageCache__GetPath(v27);
      if ( !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
      FreeSize = CommonServicePluginScript__GetFreeSize(Path, 0LL);
      if ( FreeSize >= 1 )
      {
        v31 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v31 = ManagerConfig_TypeInfo;
        }
        if ( FreeSize < v31->static_fields->LIMIT_FREE_SIZE )
        {
          v48 = sub_1B640DC(&System_IO_IOException_TypeInfo);
          v51 = (System_IO_IOException_o *)sub_1B64314(v48, v49, v50);
          v52 = (System_String_o *)sub_1B640DC(&StringLiteral_5302/*"Disk full"*/);
          System_IO_IOException___ctor_61515632(v51, v52, 0LL);
          v53 = sub_1B640DC(&Method_AssetManager_LateUpdate__);
          sub_1B641F0(v51, v53);
        }
      }
      v32 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v32 = AssetManager_TypeInfo;
      }
      if ( System_IO_File__Exists(v32->static_fields->createCacheListFileName, 0LL) )
      {
        v33 = AssetManager_TypeInfo;
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v33 = AssetManager_TypeInfo;
        }
        System_IO_File__Delete(v33->static_fields->createCacheListFileName, 0LL);
      }
      v34 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v34 = AssetManager_TypeInfo;
      }
      createCacheListFileName = v34->static_fields->createCacheListFileName;
      UTF8 = System_Text_Encoding__get_UTF8(0LL);
      v39 = (System_IO_StreamWriter_o *)sub_1B64314(System_IO_StreamWriter_TypeInfo, v37, v38);
      System_IO_StreamWriter___ctor_61544524(v39, createCacheListFileName, 0, UTF8, 0LL);
      if ( !v39 )
        sub_1B64324(v40);
      ((void (__fastcall *)(System_IO_StreamWriter_o *, struct System_String_o *, Il2CppMethodPointer))v39->klass->vtable._16_Write.method)(
        v39,
        this->fields.requestConfigWriteData,
        v39->klass->vtable._17_Write.methodPtr);
      ((void (__fastcall *)(System_IO_StreamWriter_o *, Il2CppMethodPointer))v39->klass->vtable._8_Close.method)(
        v39,
        v39->klass->vtable._9_Dispose.methodPtr);
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
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.requestConfigWriteData, v45, v46, v47);
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
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t entryCount; // w8
  AssetData_o *v11; // x20
  const MethodInfo *v12; // x3
  System_Collections_Generic_Dictionary_object__object__o *assetResourceDic; // x0
  const MethodInfo *v14; // x1
  int32_t v15; // w8

  v5 = this;
  if ( (byte_49FB52B & 1) == 0 )
  {
    sub_1B640C8(&AssetData_TypeInfo, name);
    this = (AssetManager_o *)sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__AssetData__Add__, v6);
    byte_49FB52B = 1;
  }
  AssetData = AssetManager__GetAssetData(this, v5->fields.assetResourceDic, name, v3);
  if ( AssetData )
  {
    entryCount = AssetData->fields.entryCount;
    v11 = AssetData;
    if ( (entryCount & 0x80000000) == 0 )
      AssetData->fields.entryCount = entryCount + 1;
  }
  else
  {
    v11 = (AssetData_o *)sub_1B64314(AssetData_TypeInfo, v8, v9);
    AssetData___ctor(v11, 1, name, v12);
    if ( !v11 )
      goto LABEL_14;
    if ( !AssetData__SetResource(v11, v14) )
      return 0LL;
    v15 = v11->fields.entryCount;
    if ( (v15 & 0x80000000) == 0 )
      v11->fields.entryCount = v15 + 1;
    assetResourceDic = (System_Collections_Generic_Dictionary_object__object__o *)v5->fields.assetResourceDic;
    if ( !assetResourceDic )
LABEL_14:
      sub_1B64324(assetResourceDic);
    System_Collections_Generic_Dictionary_object__object___Add(
      assetResourceDic,
      (Il2CppObject *)name,
      (Il2CppObject *)v11,
      (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
  }
  return v11;
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
  System_Collections_Generic_Dictionary_object__object__o *assetBundleReleaseDic; // x0
  int32_t entryCount; // w8
  _BOOL8 Status; // x0
  const MethodInfo *v15; // x3
  AssetData_o *v16; // x0
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x4
  AssetData_o *v19; // x22
  int32_t v20; // w8
  const MethodInfo *v21; // x1
  int32_t v22; // w8

  v8 = this;
  if ( (byte_49FB526 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_1B640C8(
                               &Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__,
                               name);
    byte_49FB526 = 1;
  }
  if ( !name )
  {
    LOBYTE(v16) = 0;
    return (char)v16;
  }
  AssetData = AssetManager__GetAssetData(
                this,
                v8->fields.assetBundleReleaseDic,
                name,
                *(const MethodInfo **)&loadParallelMax);
  if ( !AssetData )
    goto LABEL_11;
  v11 = AssetData;
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)v8->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
    sub_1B64324(0LL);
  System_Collections_Generic_Dictionary_object__object___Remove(
    assetBundleReleaseDic,
    (Il2CppObject *)name,
    (const MethodInfo_317A8F4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
  if ( v11->fields.objectList )
  {
    entryCount = v11->fields.entryCount;
    if ( (entryCount & 0x80000000) == 0 )
      v11->fields.entryCount = entryCount + 1;
    if ( callbackFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, AssetData_o *, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        v11,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
  else
  {
LABEL_11:
    Status = AssetManager__AddEntryLoadStatus(v8, 0, name, callbackFunc, v10);
    if ( !Status )
    {
      v16 = AssetManager__GetAssetData((AssetManager_o *)Status, v8->fields.assetBundleDic, name, v15);
      if ( !v16 )
        return (char)v16;
      v19 = v16;
      if ( v16->fields.objectList )
      {
        if ( !v16->fields.isLoadResources )
        {
          v22 = v16->fields.entryCount;
          if ( (v22 & 0x80000000) == 0 )
            v16->fields.entryCount = v22 + 1;
          if ( callbackFunc )
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, AssetData_o *, _QWORD))callbackFunc->fields.m_target)(
              callbackFunc->fields.original_method_info,
              v16,
              *(_QWORD *)&callbackFunc->fields.extra_arg);
          goto LABEL_19;
        }
        AssetData__ReleaseData(v16, v17);
      }
      v20 = v19->fields.entryCount;
      if ( (v20 & 0x80000000) == 0 )
        v19->fields.entryCount = v20 + 1;
      AssetManager__AddLoadWaitStatus_37500212(v8, v19, callbackFunc, 0LL, v18);
      v8->fields.loadParallelMax = loadParallelMax;
      AssetManager__LoadStart(v8, v21);
    }
  }
LABEL_19:
  LOBYTE(v16) = 1;
  return (char)v16;
}


bool __fastcall AssetManager__LoadAssetStorage_37484304(
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
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_object__o *v26; // x23
  System_Collections_Generic_List_object__o **v27; // x22
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 v30; // x1
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x4
  __int64 v33; // x8
  int v34; // w26
  unsigned __int64 v35; // x27
  AssetLoader_LoadEndDataHandler_o **v36; // x23
  bool v37; // w25
  System_String_o *v38; // x24
  AssetLoader_LoadEndDataHandler_o *v39; // x25
  const MethodInfo *v40; // x3
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w1
  const MethodInfo *v44; // x1

  if ( (byte_49FB528 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_string__AddRange__, nameList);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__IndexOf__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__RemoveRange__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Remove__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Count__, v13);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v14);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v15);
    sub_1B640C8(&Method_AssetManager___c__DisplayClass169_0__LoadAssetStorage_b__0__, v16);
    sub_1B640C8(&AssetManager___c__DisplayClass169_0_TypeInfo, v17);
    byte_49FB528 = 1;
  }
  v18 = sub_1B64314(AssetManager___c__DisplayClass169_0_TypeInfo, nameList, callbackFunc);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_31;
  *(_QWORD *)(v18 + 40) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 40), (int32_t)this, v20, v21);
  *(_QWORD *)(v18 + 48) = callbackFunc;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 48), (int32_t)callbackFunc, v22, v23);
  *(_DWORD *)(v18 + 56) = loadParallelMax;
  v26 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v24,
                                                       v25);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v18 + 24) = v26;
  v27 = (System_Collections_Generic_List_object__o **)(v18 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 24), (int32_t)v26, v28, v29);
  AssetStorage = *(System_Collections_Generic_List_object__o **)(v18 + 24);
  if ( !AssetStorage
    || (System_Collections_Generic_List_object___AddRange(
          AssetStorage,
          (System_Collections_Generic_IEnumerable_T__o *)nameList,
          (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_string__AddRange__),
        *(_DWORD *)(v18 + 16) = 0,
        *(_BYTE *)(v18 + 32) = 0,
        !nameList) )
  {
LABEL_31:
    sub_1B64324(AssetStorage);
  }
  v33 = *(_QWORD *)&nameList->max_length;
  if ( (int)v33 >= 1 )
  {
    v34 = 0;
    v35 = 0LL;
    v36 = (AssetLoader_LoadEndDataHandler_o **)(v18 + 64);
    v37 = 1;
    while ( 1 )
    {
      if ( v35 >= (unsigned int)v33 )
        sub_1B6432C(AssetStorage, v30);
      v38 = nameList->m_Items[v35];
      if ( !v38 )
      {
        AssetStorage = *v27;
        if ( !*v27 )
          goto LABEL_31;
        AssetStorage = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Remove(
                                                                      AssetStorage,
                                                                      0LL,
                                                                      (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_string__Remove__);
        goto LABEL_23;
      }
      if ( !v37 )
        goto LABEL_22;
      v39 = *v36;
      if ( !*v36 )
      {
        v39 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v30, v31);
        AssetLoader_LoadEndDataHandler___ctor(
          v39,
          (Il2CppObject *)v18,
          Method_AssetManager___c__DisplayClass169_0__LoadAssetStorage_b__0__,
          v40);
        *(_QWORD *)(v18 + 64) = v39;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 64), (int32_t)v39, v41, v42);
      }
      if ( !this )
        goto LABEL_31;
      AssetStorage = (System_Collections_Generic_List_object__o *)AssetManager__LoadAssetStorage(
                                                                    this,
                                                                    v38,
                                                                    v39,
                                                                    *(_DWORD *)(v18 + 56),
                                                                    v32);
      if ( ((unsigned __int8)AssetStorage & 1) == 0 )
        break;
      ++v34;
      v37 = 1;
LABEL_23:
      LODWORD(v33) = nameList->max_length;
      if ( (__int64)++v35 >= (int)v33 )
        goto LABEL_26;
    }
    AssetStorage = *v27;
    if ( !*v27 )
      goto LABEL_31;
    AssetStorage = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___IndexOf(
                                                                  AssetStorage,
                                                                  (Il2CppObject *)v38,
                                                                  (const MethodInfo_34AE414 *)Method_System_Collections_Generic_List_string__IndexOf__);
    if ( ((unsigned int)AssetStorage & 0x80000000) == 0 )
    {
      v43 = (int)AssetStorage;
      AssetStorage = *v27;
      if ( !*v27 )
        goto LABEL_31;
      System_Collections_Generic_List_object___RemoveRange(
        AssetStorage,
        v43,
        AssetStorage->fields._size - v43,
        (const MethodInfo_34AEFE0 *)Method_System_Collections_Generic_List_string__RemoveRange__);
    }
LABEL_22:
    v37 = 0;
    goto LABEL_23;
  }
  v34 = 0;
  v37 = 1;
LABEL_26:
  if ( v34 < 1 || !*(_BYTE *)(v18 + 32) && *(_DWORD *)(v18 + 16) == v34 )
  {
    AssetManager__AddLoadWaitStatus(this, *(System_Action_o **)(v18 + 48), v31);
    this->fields.loadParallelMax = *(_DWORD *)(v18 + 56);
    *(_BYTE *)(v18 + 32) = 1;
    AssetManager__LoadStart(this, v44);
  }
  return v37;
}


bool __fastcall AssetManager__LoadAsset_37501036(
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
  _DWORD *monitor; // x8

  if ( (byte_49FB507 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_49FB507 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  if ( BYTE2(Instance[3].klass) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( Instance )
    {
      monitor = Instance[6].monitor;
      if ( monitor )
        return monitor[6] > 0;
    }
LABEL_9:
    sub_1B64324(Instance);
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
  System_Collections_Generic_Dictionary_object__object__o *assetBundleReleaseDic; // x0
  int32_t entryCount; // w8
  _BOOL8 Status; // x0
  const MethodInfo *v24; // x3
  __int64 v25; // x1
  __int64 v26; // x2
  AssetData_o *v27; // x23
  System_Collections_Generic_List_object__o *v28; // x24
  __int64 v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  struct UnityEngine_Object_array *objectList; // x26
  __int64 v33; // x8
  unsigned __int64 v34; // x27
  int max_length; // w8
  Il2CppObject *v36; // x25
  __int64 v37; // x23
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  int32_t v42; // w9
  int v43; // w8
  System_String_array *v44; // x0
  const MethodInfo *v45; // x4
  const MethodInfo *v46; // x1
  AssetData_o *v48; // [xsp+8h] [xbp-68h]

  if ( (byte_49FB527 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__, name);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__AddRange__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__ToArray__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Count__, v15);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v16);
    byte_49FB527 = 1;
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
        v20 = AssetData;
        assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleReleaseDic;
        if ( !assetBundleReleaseDic )
          goto LABEL_45;
        System_Collections_Generic_Dictionary_object__object___Remove(
          assetBundleReleaseDic,
          (Il2CppObject *)name,
          (const MethodInfo_317A8F4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
        if ( v20->fields.objectList )
        {
          entryCount = v20->fields.entryCount;
          if ( (entryCount & 0x80000000) == 0 )
            v20->fields.entryCount = entryCount + 1;
          if ( callbackFunc )
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, AssetData_o *, _QWORD))callbackFunc->fields.m_target)(
              callbackFunc->fields.original_method_info,
              v20,
              *(_QWORD *)&callbackFunc->fields.extra_arg);
          goto LABEL_41;
        }
      }
      Status = AssetManager__AddEntryLoadStatus(this, 0, name, callbackFunc, v19);
      if ( Status )
      {
LABEL_41:
        LOBYTE(v17) = 1;
        return (char)v17;
      }
      v17 = AssetManager__GetAssetData((AssetManager_o *)Status, this->fields.assetBundleDic, name, v24);
      if ( v17 )
      {
        v27 = v17;
        v28 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                             System_Collections_Generic_List_string__TypeInfo,
                                                             v25,
                                                             v26);
        System_Collections_Generic_List_object____ctor(
          v28,
          (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
        objectList = v27->fields.objectList;
        if ( objectList )
        {
          v33 = *(_QWORD *)&resourceNames->max_length;
          v48 = v27;
          if ( (int)v33 >= 1 )
          {
            v34 = 0LL;
            while ( 1 )
            {
              if ( v34 >= (unsigned int)v33 )
                goto LABEL_46;
              max_length = objectList->max_length;
              v36 = (Il2CppObject *)resourceNames->m_Items[v34];
              if ( max_length >= 1 )
                break;
LABEL_26:
              if ( !v28 )
                goto LABEL_45;
              items = v28->fields._items;
              v39 = Method_System_Collections_Generic_List_string__Add__;
              ++v28->fields._version;
              if ( !items )
                goto LABEL_45;
              size = v28->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v28,
                  v36,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
              }
              else
              {
                v41 = &items->obj.klass + size;
                v28->fields._size = size + 1;
                v41[4] = (Il2CppClass *)v36;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v41 + 4), (int32_t)v36, v30, v31);
              }
LABEL_31:
              LODWORD(v33) = resourceNames->max_length;
              if ( (__int64)++v34 >= (int)v33 )
                goto LABEL_32;
            }
            v37 = 0LL;
            while ( (unsigned int)v37 < max_length )
            {
              assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)objectList->m_Items[v37];
              if ( !assetBundleReleaseDic )
                goto LABEL_45;
              assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_Object__get_name(
                                                                                                   (UnityEngine_Object_o *)assetBundleReleaseDic,
                                                                                                   0LL);
              if ( !v36 )
                goto LABEL_45;
              assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)System_String__Equals_61383712(
                                                                                                   (System_String_o *)v36,
                                                                                                   (System_String_o *)assetBundleReleaseDic,
                                                                                                   0LL);
              if ( ((unsigned __int8)assetBundleReleaseDic & 1) != 0 )
                goto LABEL_31;
              max_length = objectList->max_length;
              if ( (int)++v37 >= max_length )
                goto LABEL_26;
            }
LABEL_46:
            sub_1B6432C(assetBundleReleaseDic, v29);
          }
LABEL_32:
          v27 = v48;
          if ( !v28 )
LABEL_45:
            sub_1B64324(assetBundleReleaseDic);
        }
        else
        {
          if ( !v28 )
            goto LABEL_45;
          System_Collections_Generic_List_object___AddRange(
            v28,
            (System_Collections_Generic_IEnumerable_T__o *)resourceNames,
            (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_string__AddRange__);
        }
        v42 = v27->fields.entryCount;
        v43 = v28->fields._size;
        if ( (v42 & 0x80000000) == 0 )
          v27->fields.entryCount = v42 + 1;
        if ( v43 < 1 )
        {
          if ( callbackFunc )
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, AssetData_o *, _QWORD))callbackFunc->fields.m_target)(
              callbackFunc->fields.original_method_info,
              v27,
              *(_QWORD *)&callbackFunc->fields.extra_arg);
        }
        else
        {
          v44 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                         v28,
                                         (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_string__ToArray__);
          AssetManager__AddLoadWaitStatus_37500212(this, v27, callbackFunc, v44, v45);
          this->fields.loadParallelMax = loadParallelMax;
          AssetManager__LoadStart(this, v46);
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
  __int64 v2; // x2
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
  __int64 v17; // x20
  void *processingAssetLoaderList; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x1
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *downLoadWaitList; // x8
  struct System_Collections_Generic_List_AssetLoader__o *v25; // x8
  Il2CppObject *v26; // x0
  __int64 v27; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 v30; // x1
  __int64 v31; // x22
  __int64 v32; // x8
  System_String_o **v33; // x8
  const MethodInfo *v34; // x1
  __int64 v35; // x8
  Il2CppObject *v36; // x0
  Il2CppObject **v37; // x22
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w2
  int32_t v41; // w3
  Il2CppObject *v42; // x1
  __int64 v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  __int64 v46; // x8
  int32_t v47; // w2
  int32_t v48; // w3
  __int64 v49; // x1
  const MethodInfo *v50; // x2
  AssetLoader_LoadEndDataHandler_o *v51; // x1
  __int64 v52; // x19
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FB521 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__get_Current__, v6);
    sub_1B640C8(&Method_UnityEngine_GameObject_AddComponent_AssetLoader___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_AssetLoader__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_AssetLoader__GetEnumerator__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v10);
    sub_1B640C8(&NetworkManager_TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__, v13);
    sub_1B640C8(&Method_AssetManager___c__DisplayClass148_0__LoadStart_b__0__, v14);
    sub_1B640C8(&AssetManager___c__DisplayClass148_0_TypeInfo, v15);
    sub_1B640C8(&StringLiteral_5240/*"DelayLoadStart"*/, v16);
    byte_49FB521 = 1;
  }
  memset(&v54, 0, sizeof(v54));
  v17 = sub_1B64314(AssetManager___c__DisplayClass148_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_49;
  *(_QWORD *)(v17 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)this, v19, v20);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_49F7D6C )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, v21);
    byte_49F7D6C = 1;
  }
  processingAssetLoaderList = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    processingAssetLoaderList = NetworkManager_TypeInfo;
  }
  if ( *(_BYTE *)(*((_QWORD *)processingAssetLoaderList + 23) + 136LL) || this->fields.isPauseDownload )
    return 0;
  if ( this->fields._DispLog )
  {
    processingAssetLoaderList = this->fields.processingAssetLoaderList;
    if ( !processingAssetLoaderList )
      goto LABEL_49;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v53,
      (System_Collections_Generic_List_object__o *)processingAssetLoaderList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_AssetLoader__GetEnumerator__);
    v54 = v53;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v54,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_AssetLoader__MoveNext__) )
      ;
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v54,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_AssetLoader__Dispose__);
  }
  downLoadWaitList = this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
    goto LABEL_49;
  if ( downLoadWaitList->fields._size <= 0 )
    return 0;
  v25 = this->fields.processingAssetLoaderList;
  if ( !v25 )
    goto LABEL_49;
  if ( v25->fields._size >= this->fields.loadParallelMax )
    return 0;
  UnityEngine_MonoBehaviour__StartCoroutine(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5240/*"DelayLoadStart"*/,
    0LL);
  processingAssetLoaderList = this->fields.downLoadWaitList;
  if ( !processingAssetLoaderList
    || (v26 = System_Collections_Generic_Queue_object___Dequeue(
                (System_Collections_Generic_Queue_T__o *)processingAssetLoaderList,
                (const MethodInfo_3622C74 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__),
        *(_QWORD *)(v17 + 24) = v26,
        v27 = v17 + 24,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 24), (int32_t)v26, v28, v29),
        (v31 = *(_QWORD *)(v17 + 24)) == 0) )
  {
LABEL_49:
    sub_1B64324(processingAssetLoaderList);
  }
  if ( (byte_49FB533 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, v30);
    byte_49FB533 = 1;
  }
  v32 = *(_QWORD *)(v31 + 16);
  if ( v32 )
    v33 = (System_String_o **)(v32 + 24);
  else
    v33 = (System_String_o **)&StringLiteral_1/*""*/;
  processingAssetLoaderList = (void *)System_String__IsNullOrEmpty(*v33, 0LL);
  if ( ((unsigned __int8)processingAssetLoaderList & 1) == 0 )
  {
    processingAssetLoaderList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( processingAssetLoaderList )
    {
      v36 = UnityEngine_GameObject__AddComponent_object_(
              (UnityEngine_GameObject_o *)processingAssetLoaderList,
              (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_AssetLoader___);
      *(_QWORD *)(v17 + 32) = v36;
      v37 = (Il2CppObject **)(v17 + 32);
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 32), (int32_t)v36, v38, v39);
      processingAssetLoaderList = this->fields.processingAssetLoaderList;
      if ( processingAssetLoaderList )
      {
        v42 = *v37;
        v43 = *((_QWORD *)processingAssetLoaderList + 2);
        v44 = Method_System_Collections_Generic_List_AssetLoader__Add__;
        ++*((_DWORD *)processingAssetLoaderList + 7);
        if ( v43 )
        {
          v45 = *((int *)processingAssetLoaderList + 6);
          if ( (unsigned int)v45 >= *(_DWORD *)(v43 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)processingAssetLoaderList,
              v42,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
          }
          else
          {
            v46 = v43 + 8 * v45;
            *((_DWORD *)processingAssetLoaderList + 6) = v45 + 1;
            *(_QWORD *)(v46 + 32) = v42;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v46 + 32), (int32_t)v42, v40, v41);
          }
          if ( *(_QWORD *)v27 )
          {
            processingAssetLoaderList = *v37;
            if ( *v37 )
            {
              v49 = *(_QWORD *)(*(_QWORD *)v27 + 16LL);
              *((_QWORD *)processingAssetLoaderList + 4) = v49;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)processingAssetLoaderList + 32), v49, v47, v48);
              if ( *(_QWORD *)v27 )
              {
                processingAssetLoaderList = *v37;
                if ( *v37 )
                {
                  v51 = *(AssetLoader_LoadEndDataHandler_o **)(*(_QWORD *)v27 + 32LL);
                  if ( v51 )
                    AssetLoader__add_endCallback2((AssetLoader_o *)processingAssetLoaderList, v51, v50);
                  v52 = sub_1B64314(System_Action_TypeInfo, v51, v50);
                  System_Action___ctor(
                    (System_Action_o *)v52,
                    (Il2CppObject *)v17,
                    Method_AssetManager___c__DisplayClass148_0__LoadStart_b__0__,
                    0LL);
                  if ( v52 )
                  {
                    (*(void (__fastcall **)(_QWORD, _QWORD))(v52 + 24))(*(_QWORD *)(v52 + 64), *(_QWORD *)(v52 + 40));
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
  if ( !*(_QWORD *)v27 )
    goto LABEL_49;
  v35 = *(_QWORD *)(*(_QWORD *)v27 + 24LL);
  if ( v35 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(v35 + 24))(*(_QWORD *)(v35 + 64), *(_QWORD *)(v35 + 40));
  return AssetManager__LoadStart(this, v34);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetManager__OnClickRetryDialog(AssetManager_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ManagementManager_c *v7; // x0
  Il2CppObject *Instance; // x0

  if ( (byte_49FB515 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Application_TypeInfo, isDecide);
    sub_1B640C8(&ManagementManager_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v6);
    byte_49FB515 = 1;
  }
  if ( isDecide )
  {
    this->fields.isErrorDialog = 0;
  }
  else
  {
    if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    if ( !byte_49FB4AB )
    {
      sub_1B640C8(&ManagementManager_TypeInfo, isDecide);
      byte_49FB4AB = 1;
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
      UnityEngine_Application__Quit_68921692(0LL);
    }
    else
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
      if ( !Instance )
        sub_1B64324(0LL);
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
  if ( (byte_49FB523 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_AssetLoader__RemoveAt__, loader);
    sub_1B640C8(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v6);
    this = (AssetManager_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    byte_49FB523 = 1;
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
             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
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
    sub_1B64324(this);
  }
  System_Collections_Generic_List_object___RemoveAt(
    (System_Collections_Generic_List_object__o *)this,
    v9,
    (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_AssetLoader__RemoveAt__);
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
  struct System_Collections_Generic_Dictionary_string__AssetData__o *assetResourceDic; // x0

  if ( (byte_49FB524 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__, *(_QWORD *)&type);
    byte_49FB524 = 1;
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
        sub_1B64324(0LL);
      System_Collections_Generic_Dictionary_object__object___Remove(
        (System_Collections_Generic_Dictionary_object__object__o *)assetResourceDic,
        (Il2CppObject *)v9->fields.name,
        (const MethodInfo_317A8F4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
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
  System_Collections_Generic_Dictionary_object__object__o *assetResourceDic; // x0

  v5 = this;
  if ( (byte_49FB52C & 1) == 0 )
  {
    this = (AssetManager_o *)sub_1B640C8(
                               &Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__,
                               name);
    byte_49FB52C = 1;
  }
  AssetData = AssetManager__GetAssetData(this, v5->fields.assetResourceDic, name, v3);
  if ( AssetData && AssetData__RemoveEntry(AssetData, v7) )
  {
    assetResourceDic = (System_Collections_Generic_Dictionary_object__object__o *)v5->fields.assetResourceDic;
    if ( !assetResourceDic )
      sub_1B64324(0LL);
    System_Collections_Generic_Dictionary_object__object___Remove(
      assetResourceDic,
      (Il2CppObject *)name,
      (const MethodInfo_317A8F4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
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


void __fastcall AssetManager__ReleaseAssetStorage_37486616(
        AssetManager_o *this,
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v3; // x8
  unsigned __int64 v6; // x21

  if ( !nameList )
    sub_1B64324(this);
  v3 = *(_QWORD *)&nameList->max_length;
  if ( (int)v3 >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v3 )
        sub_1B6432C(this, nameList);
      AssetManager__ReleaseAssetStorage(this, nameList->m_Items[v6], method);
      LODWORD(v3) = nameList->max_length;
      ++v6;
    }
    while ( (__int64)v6 < (int)v3 );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetManager__ReleaseAsset_37477348(
        AssetManager_o *this,
        int32_t type,
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v4; // x8
  unsigned __int64 v8; // x22

  if ( !nameList )
    sub_1B64324(this);
  v4 = *(_QWORD *)&nameList->max_length;
  if ( (int)v4 >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)v4 )
        sub_1B6432C(this, *(_QWORD *)&type);
      AssetManager__ReleaseAsset(this, type, nameList->m_Items[v8], method);
      LODWORD(v4) = nameList->max_length;
      ++v8;
    }
    while ( (__int64)v8 < (int)v4 );
  }
}


void __fastcall AssetManager__ReleaseAsset_37477648(
        AssetManager_o *this,
        AssetData_o *assetInfo,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( assetInfo )
    AssetManager__ReleaseAsset(this, assetInfo->fields.type, assetInfo->fields.name, v3);
}


void __fastcall AssetManager__ReleaseAsset_37477848(
        AssetManager_o *this,
        AssetData_array *assetInfoList,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v4; // x8
  unsigned __int64 v7; // x21
  AssetData_o *v8; // x8

  if ( !assetInfoList )
    sub_1B64324(this);
  v4 = *(_QWORD *)&assetInfoList->max_length;
  if ( (int)v4 >= 1 )
  {
    v7 = 0LL;
    do
    {
      if ( v7 >= (unsigned int)v4 )
        sub_1B6432C(this, assetInfoList);
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
  if ( (byte_49FB520 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__AssetData__Add__, info);
    this = (AssetManager_o *)sub_1B640C8(
                               &Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__,
                               v5);
    byte_49FB520 = 1;
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
            (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__) )
    {
      this = (AssetManager_o *)v4->fields.assetBundleReleaseDic;
      if ( this )
      {
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)this,
          (Il2CppObject *)info->fields.name,
          (Il2CppObject *)info,
          (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
        return;
      }
LABEL_11:
      sub_1B64324(this);
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
    UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
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
  struct System_Collections_Generic_Dictionary_string__AssetData__o *assetBundleDic; // x8
  System_String_o *v12; // x19
  _BOOL8 v13; // x0
  Il2CppObject *currentValue; // x22
  System_String_o *monitor; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v16; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FB511 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, path);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v5);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v6);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v8);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v9);
    byte_49FB511 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  Values = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)System_String__Concat_61375396(
                                                                                      path,
                                                                                      (System_String_o *)StringLiteral_1124/*"/"*/,
                                                                                      0LL);
  assetBundleDic = this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (v12 = (System_String_o *)Values,
        (Values = System_Collections_Generic_Dictionary_object__object___get_Values(
                    (System_Collections_Generic_Dictionary_object__object__o *)assetBundleDic,
                    (const MethodInfo_3179228 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL) )
  {
    sub_1B64324(Values);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v16,
    Values,
    (const MethodInfo_37BDDB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v16,
            (const MethodInfo_3277270 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v13 )
      break;
    currentValue = v16.fields._currentValue;
    if ( !v16.fields._currentValue )
      sub_1B64324(v13);
    monitor = (System_String_o *)v16.fields._currentValue[1].monitor;
    if ( !monitor )
      sub_1B64324(0LL);
    if ( System_String__StartsWith(monitor, v12, 0LL) )
      LODWORD(currentValue[2].monitor) = 0;
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v16,
    (const MethodInfo_327726C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
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

  if ( (byte_49FB4D5 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, v1);
    sub_1B640C8(&ManagerConfig_TypeInfo, v2);
    byte_49FB4D5 = 1;
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

  if ( (byte_49FB4D6 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, v1);
    sub_1B640C8(&ManagerConfig_TypeInfo, v2);
    byte_49FB4D6 = 1;
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
  const MethodInfo *v9; // x2
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FB509 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, method);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v3);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v4);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v6);
    byte_49FB509 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      assetBundleDic,
                                                                                      (const MethodInfo_3179228 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
    sub_1B64324(assetBundleDic);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v10,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_37BDDB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v10,
           (const MethodInfo_3277270 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v8 )
      break;
    if ( !v10.fields._currentValue )
      sub_1B64324(v8);
    if ( LODWORD(v10.fields._currentValue[2].monitor) != HIDWORD(v10.fields._currentValue[2].monitor) )
      AssetManager__AddLoadWaitStatus_37489820(this, (AssetData_o *)v10.fields._currentValue, v9);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v10,
    (const MethodInfo_327726C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Threading_ThreadStart_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  System_Threading_Thread_o *v9; // x21
  struct System_Threading_Thread_o **p_writeRequestThread; // x19
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FB517 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetManager_ConfigWriteRequestThread__, method);
    sub_1B640C8(&System_Threading_ThreadStart_TypeInfo, v4);
    sub_1B640C8(&System_Threading_Thread_TypeInfo, v5);
    byte_49FB517 = 1;
  }
  this->fields.reserveWriteRequest = 0;
  v6 = (System_Threading_ThreadStart_o *)sub_1B64314(System_Threading_ThreadStart_TypeInfo, method, v2);
  System_Threading_ThreadStart___ctor(v6, (Il2CppObject *)this, Method_AssetManager_ConfigWriteRequestThread__, 0LL);
  v9 = (System_Threading_Thread_o *)sub_1B64314(System_Threading_Thread_TypeInfo, v7, v8);
  System_Threading_Thread___ctor(v9, v6, 0LL);
  this->fields.writeRequestThread = v9;
  p_writeRequestThread = &this->fields.writeRequestThread;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_writeRequestThread, (int32_t)v9, v11, v12);
  if ( !*p_writeRequestThread )
    sub_1B64324(0LL);
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
        const MethodInfo_2E1BDBC *method)
{
  __int64 v8; // x1
  AssetData_o *AssetStorage; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *Object_object__48347676; // x1
  Il2CppObject *v13; // x19

  if ( !method->rgctx_data )
  {
    sub_1B640C8(&AssetManager_TypeInfo, path);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    if ( !method->rgctx_data )
      sub_1BB6000(method);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0LL);
  if ( AssetStorage )
    Object_object__48347676 = AssetData__GetObject_object__48347676(
                                AssetStorage,
                                name,
                                (const MethodInfo_2E1BA1C *)method->rgctx_data->_2_AssetData_GetObject_T_);
  else
    Object_object__48347676 = 0LL;
  *data = Object_object__48347676;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)data, (int32_t)Object_object__48347676, v10, v11);
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
  Il2CppObject *Object_object__48347676; // x20
  _BOOL8 v13; // x0
  Il2CppObject *Component_object; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  UnityEngine_Object_o *v17; // x19

  if ( (byte_49FB52D & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, name);
    sub_1B640C8(&AssetManager_TypeInfo, v7);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    byte_49FB52D = 1;
  }
  *atlas = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)atlas, 0, (int32_t)atlasName, (int32_t)method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(name, v10);
  if ( AssetStorage )
    Object_object__48347676 = AssetData__GetObject_object__48347676(
                                AssetStorage,
                                atlasName,
                                (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  else
    Object_object__48347676 = 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v13 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__48347676, 0LL, 0LL);
  if ( v13 )
  {
    if ( !Object_object__48347676 )
      sub_1B64324(v13);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object_object__48347676,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    *atlas = (UIAtlas_o *)Component_object;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)atlas, (int32_t)Component_object, v15, v16);
  }
  v17 = (UnityEngine_Object_o *)*atlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FB4D3 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_TypeInfo, method);
    byte_49FB4D3 = 1;
  }
  v4 = sub_1B64314(AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
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
  if ( (byte_49FB531 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, method);
    sub_1B640C8(&SoundManager_TypeInfo, v3);
    this = (AssetManager_o *)sub_1B640C8(&StringLiteral_9254/*"NOW_LOADING"*/, v4);
    byte_49FB531 = 1;
  }
  processingAssetLoaderList = v2->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
    sub_1B64324(this);
  if ( processingAssetLoaderList->fields._size >= 1 )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playBgm((System_String_o *)StringLiteral_9254/*"NOW_LOADING"*/, 0LL);
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

  if ( (byte_49FB4D1 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_ResourceUnloadEventHandler_TypeInfo, value);
    byte_49FB4D1 = 1;
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
    v9 = sub_1B9F5B8(p_unloadCallbacks, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B645E4(v8);
  AssetManager__remove_unloadCallbacks(v11, v12, v13);
}


void __fastcall AssetManager__cancelDownloadAssetStorage(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_49FB4F4 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_49FB4F4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1B64324(v4);
    AssetManager__CancelDownloadAssetStorage((AssetManager_o *)Instance, v5);
  }
}


System_Collections_IEnumerator_o *__fastcall AssetManager__coUnloadUnusedAssets(
        AssetManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FB518 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager__coUnloadUnusedAssets_d__138_TypeInfo, method);
    byte_49FB518 = 1;
  }
  v4 = sub_1B64314(AssetManager__coUnloadUnusedAssets_d__138_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
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
      return System_String__Equals_61383712(name1, name2, 0LL);
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
            list1 = (System_String_array *)System_String__Equals_61383712(
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
      sub_1B6432C(list1, list2);
    }
  }
  else if ( list2 )
  {
    return list2->max_length == 0;
  }
  return 1;
}


bool __fastcall AssetManager__compAssetStorageList_37475412(
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
              sub_1B64324(0LL);
            assetList = (AssetData_array *)System_String__Equals_61383712(name, (System_String_o *)list, 0LL);
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
      sub_1B6432C(assetList, list);
    }
  }
  else if ( list )
  {
    return list->max_length == 0;
  }
  return 1;
}


bool __fastcall AssetManager__compAssetStorage_37475140(
        AssetData_o *data,
        System_String_o *name,
        const MethodInfo *method)
{
  struct System_String_o *v3; // x0
  int32_t stringLength; // w8

  if ( data && (v3 = data->fields.name) != 0LL )
  {
    if ( name )
      return System_String__Equals_61383712(v3, name, 0LL);
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

  if ( (byte_49FB4D9 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_49FB4D9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1B64324(v4);
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
  const MethodInfo *v10; // x4

  if ( (byte_49FB4F7 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_49FB4F7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_1B64324(v9);
  return AssetManager__DownloadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, v10);
}


bool __fastcall AssetManager__downloadAssetStorage_37481920(
        System_String_array *nameList,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x4

  if ( (byte_49FB4F8 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_49FB4F8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v7 )
    return 0;
  if ( !Instance )
    sub_1B64324(v7);
  return AssetManager__DownloadAssetStorage_37482112((AssetManager_o *)Instance, nameList, callbackFunc, 1, v8);
}


AssetData_o *__fastcall AssetManager__getAsset(int32_t type, System_String_o *name, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x3

  if ( (byte_49FB4E6 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, name);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_49FB4E6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v7 )
    return 0LL;
  if ( !Instance )
    sub_1B64324(v7);
  return AssetManager__GetAsset((AssetManager_o *)Instance, type, name, v8);
}


AssetData_o *__fastcall AssetManager__getAssetResource(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  const MethodInfo *v5; // x3
  bool v6; // w8
  AssetData_o *result; // x0

  if ( (byte_49FB504 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_49FB504 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  result = 0LL;
  if ( !v6 )
  {
    if ( !Instance )
      sub_1B64324(0LL);
    result = AssetManager__GetAssetData(
               0LL,
               (System_Collections_Generic_Dictionary_string__AssetData__o *)Instance[5].klass,
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
  Il2CppObject *Instance; // x20
  const MethodInfo *v5; // x3
  bool v6; // w8
  AssetData_o *result; // x0

  if ( (byte_49FB4FD & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_49FB4FD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  result = 0LL;
  if ( !v6 )
  {
    if ( !Instance )
      sub_1B64324(0LL);
    result = AssetManager__GetAssetData(
               0LL,
               (System_Collections_Generic_Dictionary_string__AssetData__o *)Instance[4].klass,
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


AssetData_o *__fastcall AssetManager__getAssetStorageData(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x3

  if ( (byte_49FB4FE & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_49FB4FE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0LL;
  if ( !Instance )
    sub_1B64324(v5);
  return AssetManager__GetAssetData(
           (AssetManager_o *)v5,
           (System_Collections_Generic_Dictionary_string__AssetData__o *)Instance[4].klass,
           name,
           v6);
}


System_String_array *__fastcall AssetManager__getAssetStorageList(System_String_o *path, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_49FB4F2 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_49FB4F2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0LL;
  if ( !Instance )
    sub_1B64324(v5);
  return AssetManager__GetAssetStorageList((AssetManager_o *)Instance, path, v6);
}


AssetData_array *__fastcall AssetManager__getAssetStorage_37485472(
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_49FB4FF & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_49FB4FF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0LL;
  if ( !Instance )
    sub_1B64324(v5);
  return AssetManager__GetAssetStorage_37485652((AssetManager_o *)Instance, nameList, v6);
}


bool __fastcall AssetManager__getAssetStorage_37485920(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x3

  if ( (byte_49FB500 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_49FB500 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v7 )
    return 0;
  if ( !Instance )
    sub_1B64324(v7);
  return AssetManager__GetAssetStorage_37486108((AssetManager_o *)Instance, name, callbackFunc, v8);
}


bool __fastcall AssetManager__getAsset_37476168(
        int32_t type,
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *Instance; // x22
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x4

  if ( (byte_49FB4E7 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, name);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_49FB4E7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_1B64324(v9);
  return AssetManager__GetAsset_37476376((AssetManager_o *)Instance, type, name, callbackFunc, v10);
}


bool __fastcall AssetManager__getAsset_37476476(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x3

  if ( (byte_49FB4E8 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_49FB4E8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v7 )
    return 0;
  if ( !Instance )
    sub_1B64324(v7);
  return AssetManager__GetAsset_37476664((AssetManager_o *)Instance, name, callbackFunc, v8);
}


int64_t __fastcall AssetManager__getDownloadSize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_49FB4ED & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_49FB4ED = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v4 )
    return 0LL;
  if ( !Instance )
    sub_1B64324(v4);
  return AssetManager__GetDownloadSize((AssetManager_o *)Instance, v5);
}


System_String_o *__fastcall AssetManager__getShaName(System_String_o *name, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Security_Cryptography_SHA1CryptoServiceProvider_o *v9; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  System_Text_UTF8Encoding_o *v12; // x20
  System_Text_StringBuilder_o *appended; // x0
  System_Byte_array *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  System_Text_StringBuilder_o *v17; // x19
  __int64 v18; // x1
  __int64 v19; // x8
  unsigned __int64 v20; // x21
  int v22; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FB4E3 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, method);
    sub_1B640C8(&System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo, v4);
    sub_1B640C8(&System_Text_StringBuilder_TypeInfo, v5);
    sub_1B640C8(&System_Text_UTF8Encoding_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_24826/*"{0,0:x2}"*/, v7);
    sub_1B640C8(&StringLiteral_1081/*".bin"*/, v8);
    byte_49FB4E3 = 1;
  }
  v9 = (System_Security_Cryptography_SHA1CryptoServiceProvider_o *)sub_1B64314(
                                                                     System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo,
                                                                     method,
                                                                     v2);
  System_Security_Cryptography_SHA1CryptoServiceProvider___ctor(v9, 0LL);
  v12 = (System_Text_UTF8Encoding_o *)sub_1B64314(System_Text_UTF8Encoding_TypeInfo, v10, v11);
  System_Text_UTF8Encoding___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_13;
  appended = (System_Text_StringBuilder_o *)((__int64 (__fastcall *)(System_Text_UTF8Encoding_o *, System_String_o *, Il2CppMethodPointer))v12->klass->vtable._19_GetBytes.method)(
                                              v12,
                                              name,
                                              v12->klass->vtable._20_GetBytes.methodPtr);
  if ( !v9 )
    goto LABEL_13;
  v14 = System_Security_Cryptography_HashAlgorithm__ComputeHash(
          (System_Security_Cryptography_HashAlgorithm_o *)v9,
          (System_Byte_array *)appended,
          0LL);
  v17 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, v15, v16);
  System_Text_StringBuilder___ctor(v17, 0LL);
  System_Security_Cryptography_HashAlgorithm__Clear((System_Security_Cryptography_HashAlgorithm_o *)v9, 0LL);
  if ( !v14 )
    goto LABEL_13;
  v19 = *(_QWORD *)&v14->max_length;
  if ( (int)v19 >= 1 )
  {
    v20 = 0LL;
    while ( 1 )
    {
      if ( v20 >= (unsigned int)v19 )
        sub_1B6432C(appended, v18);
      v22 = v14->m_Items[v20 + 4] ^ 0xAA;
      appended = (System_Text_StringBuilder_o *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
      if ( !v17 )
        break;
      appended = System_Text_StringBuilder__AppendFormat(
                   v17,
                   (System_String_o *)StringLiteral_24826/*"{0,0:x2}"*/,
                   (Il2CppObject *)appended,
                   0LL);
      LODWORD(v19) = v14->max_length;
      if ( (__int64)++v20 >= (int)v19 )
        goto LABEL_11;
    }
LABEL_13:
    sub_1B64324(appended);
  }
LABEL_11:
  if ( !v17 )
    goto LABEL_13;
  System_Text_StringBuilder__Append_60536548(v17, (System_String_o *)StringLiteral_1081/*".bin"*/, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v17->klass->vtable._3_ToString.method)(
                              v17,
                              v17->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
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

  if ( (byte_49FB4E2 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_1885/*"?t="*/, v3);
    sub_1B640C8(&StringLiteral_20825/*"jar:"*/, v4);
    byte_49FB4E2 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !url )
    sub_1B64324(v5);
  if ( !System_String__StartsWith(url, NetworkManager_TypeInfo->static_fields->FILE_URL_SCHEME, 0LL) )
  {
    v6 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v6 = NetworkManager_TypeInfo;
    }
    v7 = System_String__Concat_61375396((System_String_o *)StringLiteral_20825/*"jar:"*/, v6->static_fields->FILE_URL_SCHEME, 0LL);
    if ( !System_String__StartsWith(url, v7, 0LL) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v10 = NetworkManager__getTime(0LL) / 300;
      v8 = System_Int64__ToString((int64_t)&v10, 0LL);
      return System_String__Concat_61386656(url, (System_String_o *)StringLiteral_1885/*"?t="*/, v8, 0LL);
    }
  }
  return url;
}


System_String_o *__fastcall AssetManager__getUrlString_37448232(AssetData_o *data, const MethodInfo *method)
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
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  char *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w1
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w1
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_String_o *assetBundleDateVersion; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w1
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w1
  int32_t v40; // w2
  int32_t v41; // w3
  __int64 v43; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FB4E4 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    sub_1B640C8(&string___TypeInfo, v4);
    sub_1B640C8(&StringLiteral_16054/*"_"*/, v5);
    sub_1B640C8(&StringLiteral_20825/*"jar:"*/, v6);
    sub_1B640C8(&StringLiteral_1886/*"?v="*/, v7);
    byte_49FB4E4 = 1;
  }
  v8 = AssetManager_TypeInfo;
  v43 = 0LL;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  DataServerAddress = (char *)AssetManager__get_DataServerAddress((const MethodInfo *)v8);
  if ( !data )
    goto LABEL_27;
  v11 = (System_String_o *)DataServerAddress;
  DownloadName = AssetData__get_DownloadName(data, v10);
  DataServerAddress = (char *)System_String__Concat_61375396(v11, DownloadName, 0LL);
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
    v15 = System_String__Concat_61375396(
            (System_String_o *)StringLiteral_20825/*"jar:"*/,
            v14->static_fields->FILE_URL_SCHEME,
            0LL);
    if ( !System_String__StartsWith(v13, v15, 0LL) )
    {
      DataServerAddress = (char *)sub_1B64170(string___TypeInfo, 9LL);
      if ( DataServerAddress )
      {
        v19 = DataServerAddress;
        if ( !*((_DWORD *)DataServerAddress + 6) )
          goto LABEL_28;
        *((_QWORD *)DataServerAddress + 4) = v13;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(DataServerAddress + 32), (int32_t)v13, v17, v18);
        if ( *((_DWORD *)v19 + 6) <= 1u )
          goto LABEL_28;
        v22 = StringLiteral_1886/*"?v="*/;
        *((_QWORD *)v19 + 5) = StringLiteral_1886/*"?v="*/;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 40), v22, v20, v21);
        DataServerAddress = (char *)AssetManager_TypeInfo;
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          DataServerAddress = (char *)AssetManager_TypeInfo;
        }
        if ( *((_DWORD *)v19 + 6) <= 2u )
          goto LABEL_28;
        v25 = *(_QWORD *)(*((_QWORD *)DataServerAddress + 23) + 80LL);
        *((_QWORD *)v19 + 6) = v25;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 48), v25, v23, v24);
        if ( *((_DWORD *)v19 + 6) <= 3u )
          goto LABEL_28;
        v28 = StringLiteral_16054/*"_"*/;
        *((_QWORD *)v19 + 7) = StringLiteral_16054/*"_"*/;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 56), v28, v26, v27);
        if ( *((_DWORD *)v19 + 6) <= 4u )
          goto LABEL_28;
        assetBundleDateVersion = AssetManager_TypeInfo->static_fields->assetBundleDateVersion;
        *((_QWORD *)v19 + 8) = assetBundleDateVersion;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 64), (int32_t)assetBundleDateVersion, v29, v30);
        if ( *((_DWORD *)v19 + 6) <= 5u )
          goto LABEL_28;
        v34 = StringLiteral_16054/*"_"*/;
        *((_QWORD *)v19 + 9) = StringLiteral_16054/*"_"*/;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 72), v34, v32, v33);
        HIDWORD(v43) = data->fields.size;
        DataServerAddress = (char *)System_Int32__ToString((int32_t)&v43 + 4, 0LL);
        if ( *((_DWORD *)v19 + 6) <= 6u
          || (*((_QWORD *)v19 + 10) = DataServerAddress,
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 80), (int32_t)DataServerAddress, v35, v36),
              *((_DWORD *)v19 + 6) <= 7u)
          || (v39 = StringLiteral_16054/*"_"*/,
              *((_QWORD *)v19 + 11) = StringLiteral_16054/*"_"*/,
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 88), v39, v37, v38),
              LODWORD(v43) = data->fields.crc,
              DataServerAddress = (char *)System_UInt32__ToString((uint32_t)&v43, 0LL),
              *((_DWORD *)v19 + 6) <= 8u) )
        {
LABEL_28:
          sub_1B6432C(DataServerAddress, v16);
        }
        *((_QWORD *)v19 + 12) = DataServerAddress;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 96), (int32_t)DataServerAddress, v40, v41);
        return System_String__Concat_61388924((System_String_array *)v19, 0LL);
      }
LABEL_27:
      sub_1B64324(DataServerAddress);
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

  if ( (byte_49FB4DD & 1) == 0 )
  {
    method = (const MethodInfo *)sub_1B640C8(&AssetManager_TypeInfo, v1);
    byte_49FB4DD = 1;
  }
  Path = AssetStorageCache__GetPath(method);
  v3 = AssetManager_TypeInfo;
  v4 = Path;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v3 = AssetManager_TypeInfo;
  }
  return System_String__Concat_61375396(v4, v3->static_fields->configFileName, 0LL);
}


System_String_o *__fastcall AssetManager__get_CachePathName(const MethodInfo *method)
{
  __int64 v1; // x1
  AssetManager_c *v2; // x0

  if ( (byte_49FB4DB & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, v1);
    byte_49FB4DB = 1;
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

  if ( (byte_49FB4DC & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, v1);
    byte_49FB4DC = 1;
  }
  v2 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  DataServerAddress = AssetManager__get_DataServerAddress((const MethodInfo *)v2);
  return System_String__Concat_61375396(DataServerAddress, AssetManager_TypeInfo->static_fields->configFileName, 0LL);
}


System_String_o *__fastcall AssetManager__get_DataServerAddress(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_49FB4DA & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, v1);
    byte_49FB4DA = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_49FB633 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, v1);
    byte_49FB633 = 1;
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

  if ( (byte_49FB4D4 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, v1);
    sub_1B640C8(&ManagerConfig_TypeInfo, v2);
    byte_49FB4D4 = 1;
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
  Il2CppObject *currentValue; // x22
  int monitor; // w8
  char v13; // w19
  int v14; // w21
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v16; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FB50A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, attrib);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v5);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v6);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v8);
    byte_49FB50A = 1;
  }
  memset(&v16, 0, sizeof(v16));
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      assetBundleDic,
                                                                                      (const MethodInfo_3179228 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
    sub_1B64324(assetBundleDic);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v16,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_37BDDB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v16,
            (const MethodInfo_3277270 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v10 )
      break;
    currentValue = v16.fields._currentValue;
    if ( !v16.fields._currentValue )
      sub_1B64324(v10);
    monitor = (int)v16.fields._currentValue[2].monitor;
    if ( monitor >= 1 && monitor != HIDWORD(v16.fields._currentValue[2].monitor)
      || System_String__op_Equality(attrib, (System_String_o *)v16.fields._currentValue[2].klass, 0LL)
      && LODWORD(currentValue[2].monitor) != HIDWORD(currentValue[2].monitor) )
    {
      v13 = 1;
      v14 = 5;
      goto LABEL_14;
    }
  }
  v13 = 0;
  v14 = 6;
LABEL_14:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v16,
    (const MethodInfo_327726C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  return v13 & (v14 == 5);
}


bool __fastcall AssetManager__isExistAssetStorage(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_49FB4EE & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_49FB4EE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0;
  if ( !Instance )
    sub_1B64324(v5);
  return AssetManager__IsExistAssetStorage((AssetManager_o *)Instance, name, v6);
}


bool __fastcall AssetManager__isExistAssetStorage_37478376(System_String_array *nameList, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_49FB4EF & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_49FB4EF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0;
  if ( !Instance )
    sub_1B64324(v5);
  return AssetManager__IsExistAssetStorage_37478556((AssetManager_o *)Instance, nameList, v6);
}


bool __fastcall AssetManager__isNeedDownload(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x3
  AssetData_o *AssetData; // x0

  if ( (byte_49FB4F0 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_49FB4F0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
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
      sub_1B64324(v5);
    AssetData = AssetManager__GetAssetData(
                  (AssetManager_o *)v5,
                  (System_Collections_Generic_Dictionary_string__AssetData__o *)Instance[4].klass,
                  name,
                  v6);
    if ( AssetData )
      LOBYTE(AssetData) = AssetData->fields.nowVersion != AssetData->fields.newVersion;
  }
  return (char)AssetData;
}


bool __fastcall AssetManager__isNeedDownload_37478924(System_String_array *nameList, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_49FB4F1 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_49FB4F1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0;
  if ( !Instance )
    sub_1B64324(v5);
  return AssetManager__IsNeedDownload_37479104((AssetManager_o *)Instance, nameList, v6);
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
  const MethodInfo *v10; // x4

  if ( (byte_49FB4E5 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, name);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_49FB4E5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_1B64324(v9);
  return AssetManager__LoadAsset((AssetManager_o *)Instance, type, name, callbackFunc, v10);
}


AssetData_o *__fastcall AssetManager__loadAssetResource(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_49FB503 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_49FB503 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0LL;
  if ( !Instance )
    sub_1B64324(v5);
  return AssetManager__LoadAssetResource((AssetManager_o *)Instance, name, v6);
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
  const MethodInfo *v10; // x4

  if ( (byte_49FB4F9 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_49FB4F9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_1B64324(v9);
  return AssetManager__LoadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, v10);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AssetManager__loadAssetStorage_37483888(
        System_String_o *name,
        int32_t maxParallelLoad,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *Instance; // x22
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x4

  if ( (byte_49FB4FB & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&maxParallelLoad);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_49FB4FB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_1B64324(v9);
  return AssetManager__LoadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, v10);
}


bool __fastcall AssetManager__loadAssetStorage_37484096(
        System_String_array *nameList,
        System_Action_o *callbackFunc,
        int32_t loadParalleMax,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *Instance; // x22
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x4

  if ( (byte_49FB4FC & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_49FB4FC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_1B64324(v9);
  return AssetManager__LoadAssetStorage_37484304(
           (AssetManager_o *)Instance,
           nameList,
           callbackFunc,
           loadParalleMax,
           v10);
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
  const MethodInfo *v12; // x5

  if ( (byte_49FB4FA & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, resourceNames);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v9);
    byte_49FB4FA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v11 )
    return 0;
  if ( !Instance )
    sub_1B64324(v11);
  return AssetManager__LoadResourcesAssetStorage(
           (AssetManager_o *)Instance,
           assetBandleName,
           resourceNames,
           callbackFunc,
           maxParallelLoad,
           v12);
}


void __fastcall AssetManager__pauseDownloadAssetStorage(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0

  if ( (byte_49FB4F5 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_49FB4F5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1B64324(v4);
    if ( !BYTE1(Instance[7].monitor) )
      BYTE1(Instance[7].monitor) = 1;
  }
}


void __fastcall AssetManager__releaseAsset(int32_t type, System_String_o *name, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x3

  if ( (byte_49FB4E9 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, name);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_49FB4E9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !Instance )
      sub_1B64324(v7);
    AssetManager__ReleaseAsset((AssetManager_o *)Instance, type, name, v8);
  }
}


void __fastcall AssetManager__releaseAssetResource(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_49FB505 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_49FB505 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1B64324(v5);
    AssetManager__ReleaseAssetResource((AssetManager_o *)Instance, name, v6);
  }
}


void __fastcall AssetManager__releaseAssetStorage(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_49FB501 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_49FB501 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1B64324(v5);
    AssetManager__ReleaseAssetStorage((AssetManager_o *)Instance, name, v6);
  }
}


void __fastcall AssetManager__releaseAssetStorage_37486440(System_String_array *nameList, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_49FB502 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_49FB502 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1B64324(v5);
    AssetManager__ReleaseAssetStorage_37486616((AssetManager_o *)Instance, nameList, v6);
  }
}


void __fastcall AssetManager__releaseAsset_37477164(
        int32_t type,
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x3

  if ( (byte_49FB4EA & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, nameList);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_49FB4EA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !Instance )
      sub_1B64324(v7);
    AssetManager__ReleaseAsset_37477348((AssetManager_o *)Instance, type, nameList, v8);
  }
}


void __fastcall AssetManager__releaseAsset_37477464(AssetData_o *assetInfo, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x3

  if ( (byte_49FB4EB & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_49FB4EB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1B64324(v5);
    if ( assetInfo )
      AssetManager__ReleaseAsset((AssetManager_o *)Instance, assetInfo->fields.type, assetInfo->fields.name, v6);
  }
}


void __fastcall AssetManager__releaseAsset_37477672(AssetData_array *assetInfoList, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_49FB4EC & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_49FB4EC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1B64324(v5);
    AssetManager__ReleaseAsset_37477848((AssetManager_o *)Instance, assetInfoList, v6);
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

  if ( (byte_49FB4D2 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_ResourceUnloadEventHandler_TypeInfo, value);
    byte_49FB4D2 = 1;
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
    v9 = sub_1B9F5B8(p_unloadCallbacks, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B645E4(v8);
  AssetManager__WaitForExecutionUnloadUnuseAssets(v11, v12);
}


void __fastcall AssetManager__resetAssetStorageVersion(System_String_o *path, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_49FB4F3 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_49FB4F3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1B64324(v5);
    AssetManager__ResetAssetStorageVersion((AssetManager_o *)Instance, path, v6);
  }
}


void __fastcall AssetManager__resumeDownloadAssetStorage(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_49FB4F6 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_49FB4F6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1B64324(v4);
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

  if ( (byte_49FB4D8 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, isUse);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_49FB4D8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !Instance && !v5 )
    sub_1B64324(v5);
}


void __fastcall AssetManager_LoadWaitStatus___ctor(
        AssetManager_LoadWaitStatus_o *this,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.callbackFunc = callbackFunc;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v5, v6);
}


void __fastcall AssetManager_LoadWaitStatus___ctor_37500164(
        AssetManager_LoadWaitStatus_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.data = data;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)data, v5, v6);
}


void __fastcall AssetManager_LoadWaitStatus___ctor_37500384(
        AssetManager_LoadWaitStatus_o *this,
        AssetData_o *data,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        System_String_array *resourceNames,
        const MethodInfo *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.data = data;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)data, v9, v10);
  this->fields.callbackFunc2 = callbackFunc;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, (int32_t)callbackFunc, v11, v12);
  this->fields.resourceNames = resourceNames;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resourceNames, (int32_t)resourceNames, v13, v14);
}


void __fastcall AssetManager_LoadWaitStatus__AddCallback(
        AssetManager_LoadWaitStatus_o *this,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_callbackFunc2; // x19
  System_Delegate_o *callbackFunc2; // t1
  System_Delegate_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_Delegate_o *v10; // x8
  AssetLoader_LoadEndDataHandler_c *v11; // x1

  if ( (byte_49FB532 & 1) == 0 )
  {
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, callbackFunc);
    byte_49FB532 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2;
  v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)callbackFunc, 0LL);
  v10 = v7;
  if ( !v7 )
    goto LABEL_7;
  v11 = AssetLoader_LoadEndDataHandler_TypeInfo;
  if ( (AssetLoader_LoadEndDataHandler_c *)v7->klass != AssetLoader_LoadEndDataHandler_TypeInfo
    || (p_callbackFunc2->klass = (ServantStatusBattleListViewItem_c *)v7,
        (AssetLoader_LoadEndDataHandler_c *)v7->klass != v11) )
  {
    sub_1B645E4(v7);
LABEL_7:
    p_callbackFunc2->klass = (ServantStatusBattleListViewItem_c *)v10;
  }
  sub_1B6406C(p_callbackFunc2, (int32_t)v10, v8, v9);
}


void __fastcall AssetManager_LoadWaitStatus__AddEntry(AssetManager_LoadWaitStatus_o *this, const MethodInfo *method)
{
  struct AssetData_o *data; // x8
  int32_t entryCount; // w9

  data = this->fields.data;
  if ( !data )
    sub_1B64324(this);
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
    LOBYTE(data) = AssetData__IsSame_37451096(data, type, name, method);
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

  if ( (byte_49FB533 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49FB533 = 1;
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19ABB78;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19ABB38;
}


System_IAsyncResult_o *__fastcall AssetManager_ResourceUnloadEventHandler__BeginInvoke(
        AssetManager_ResourceUnloadEventHandler_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1B6407C(this, &v5, callback, object);
}


void __fastcall AssetManager_ResourceUnloadEventHandler__EndInvoke(
        AssetManager_ResourceUnloadEventHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
}


void __fastcall AssetManager_ResourceUnloadEventHandler__Invoke(
        AssetManager_ResourceUnloadEventHandler_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall AssetManager__DelayLoadStart_d__149___ctor(
        AssetManager__DelayLoadStart_d__149_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AssetManager__DelayLoadStart_d__149__MoveNext(
        AssetManager__DelayLoadStart_d__149_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
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
      sub_1B64324(0LL);
    AssetManager__LoadStart(_4__this, method);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, 0, v2, v3);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall AssetManager__DelayLoadStart_d__149__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AssetManager__DelayLoadStart_d__149_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AssetManager__DelayLoadStart_d__149__System_Collections_IEnumerator_Reset(
        AssetManager__DelayLoadStart_d__149_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_AssetManager__DelayLoadStart_d__149_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
}


Il2CppObject *__fastcall AssetManager__DelayLoadStart_d__149__System_Collections_IEnumerator_get_Current(
        AssetManager__DelayLoadStart_d__149_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall AssetManager__DelayLoadStart_d__149__System_IDisposable_Dispose(
        AssetManager__DelayLoadStart_d__149_o *this,
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
  __int64 v2; // x2
  AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *v3; // x19
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
  int32_t _1__state; // w8
  struct AssetManager_o *_4__this; // x20
  _BOOL8 v25; // x0
  const MethodInfo *v26; // x2
  AssetData_o *currentValue; // x21
  int monitor; // w8
  const MethodInfo *v29; // x2
  _BOOL4 isDispLogo_5__2; // w8
  __int64 v31; // x1
  __int64 v32; // x2
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *downLoadWaitList; // x8
  Il2CppObject *v34; // x22
  int32_t v35; // w2
  int32_t v36; // w3
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
  __int64 v47; // x1
  __int64 v48; // x2
  ErrorDialog_ClickDelegate_o *v49; // x24
  struct AssetManager___c__DisplayClass118_0_o *_8__1; // x8
  int32_t v51; // w3
  UnityEngine_WaitForEndOfFrame_o *v52; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v54; // w2
  int32_t v55; // w3
  bool result; // w0
  Il2CppObject *v57; // x21
  __int64 v58; // x1
  __int64 v59; // x2
  System_Action_o *v60; // x22
  __int64 v61; // x2
  AvalonSceneManager_c *v62; // x0
  float DEFAULT_FADE_TIME; // s8
  UnityEngine_WaitForSeconds_o *v64; // x20
  ServantStatusBattleListViewItem_o *v65; // x19
  int32_t v66; // w2
  int32_t v67; // w3
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v68; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v69; // [xsp+20h] [xbp-70h] BYREF

  v3 = this;
  if ( (byte_49FB537 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_b__118_0__, v4);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v5);
    sub_1B640C8(&ErrorDialog_ClickDelegate_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, v7);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v8);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v9);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v10);
    sub_1B640C8(&LocalizationManager_TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1B640C8(&Method_AssetManager___c__DisplayClass118_0__DownloadAssetStorageAttributeWithCheckDialog_b__1__, v14);
    sub_1B640C8(&AssetManager___c__DisplayClass118_0_TypeInfo, v15);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v16);
    sub_1B640C8(&UnityEngine_WaitForEndOfFrame_TypeInfo, v17);
    sub_1B640C8(&UnityEngine_WaitForSeconds_TypeInfo, v18);
    sub_1B640C8(&StringLiteral_25209/*"データ更新"*/, v19);
    sub_1B640C8(&StringLiteral_9183/*"NETWORK_ERROR_DATA_UPDATE_TITLE"*/, v20);
    sub_1B640C8(&StringLiteral_361/*" ゲームデータの更新を行います。\n\n{0}\n\n ※Wi-Fi接続での更新を推奨します。"*/, v21);
    this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)sub_1B640C8(&StringLiteral_9181/*"NETWORK_ERROR_DATA_UPDATE_EXP"*/, v22);
    byte_49FB537 = 1;
  }
  memset(&v69, 0, sizeof(v69));
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 2 )
  {
    isDispLogo_5__2 = v3->fields._isDispLogo_5__2;
    v3->fields.__1__state = -1;
    if ( isDispLogo_5__2 )
    {
      this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_56;
      CommonUI__SetLoadMode((CommonUI_o *)this, 3, 0LL);
    }
LABEL_52:
    if ( _4__this )
    {
      _4__this->fields.loadParallelMax = v3->fields.loadParallelMax;
      AssetManager__LoadStart(_4__this, method);
      return 0;
    }
    goto LABEL_56;
  }
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
LABEL_41:
    _8__1 = v3->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_56;
    if ( !_8__1->fields.isDataUpdate )
    {
LABEL_45:
      v52 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
      UnityEngine_WaitForEndOfFrame___ctor(v52, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v52;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
      sub_1B6406C(p__2__current, (int32_t)v52, v54, v55);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    }
    this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this )
      goto LABEL_56;
    if ( CommonUI__isBusyDataUpdateDialog((CommonUI_o *)this, 0LL) )
      goto LABEL_45;
    v3->fields.__8__1 = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.__8__1, 0, v2, v51);
    goto LABEL_47;
  }
  if ( _1__state )
    return 0;
  v3->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_56;
  this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)_4__this->fields.assetBundleDic;
  if ( !this )
    goto LABEL_56;
  this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                  (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                                                  (const MethodInfo_3179228 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !this )
    goto LABEL_56;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v68,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_37BDDB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v69 = v68;
  while ( 1 )
  {
    v25 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v69,
            (const MethodInfo_3277270 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v25 )
      break;
    currentValue = (AssetData_o *)v69.fields._currentValue;
    if ( !v69.fields._currentValue )
      sub_1B64324(v25);
    monitor = (int)v69.fields._currentValue[2].monitor;
    if ( monitor < 1 || monitor == HIDWORD(v69.fields._currentValue[2].monitor) )
    {
      if ( System_String__op_Equality(v3->fields.attrib, (System_String_o *)v69.fields._currentValue[2].klass, 0LL)
        && currentValue->fields.nowVersion != currentValue->fields.newVersion )
      {
        AssetManager__AddLoadWaitStatus_37489820(_4__this, currentValue, v29);
      }
    }
    else
    {
      AssetManager__AddLoadWaitStatus_37489820(_4__this, (AssetData_o *)v69.fields._currentValue, v26);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v69,
    (const MethodInfo_327726C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  downLoadWaitList = _4__this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
LABEL_56:
    sub_1B64324(this);
  if ( downLoadWaitList->fields._size >= 1 )
  {
    v34 = (Il2CppObject *)sub_1B64314(AssetManager___c__DisplayClass118_0_TypeInfo, v31, v32);
    System_Object___ctor(v34, 0LL);
    v3->fields.__8__1 = (struct AssetManager___c__DisplayClass118_0_o *)v34;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.__8__1, (int32_t)v34, v35, v36);
    if ( !v3->fields.__8__1 )
      goto LABEL_56;
    v3->fields.__8__1->fields.isDataUpdate = 0;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( LocalizationManager__ContainsKey((System_String_o *)StringLiteral_9183/*"NETWORK_ERROR_DATA_UPDATE_TITLE"*/, 0LL) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v37 = LocalizationManager__Get((System_String_o *)StringLiteral_9183/*"NETWORK_ERROR_DATA_UPDATE_TITLE"*/, 0LL);
    }
    else
    {
      v37 = (System_String_o *)StringLiteral_25209/*"データ更新"*/;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( LocalizationManager__ContainsKey((System_String_o *)StringLiteral_9181/*"NETWORK_ERROR_DATA_UPDATE_EXP"*/, 0LL) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v39 = LocalizationManager__Get((System_String_o *)StringLiteral_9181/*"NETWORK_ERROR_DATA_UPDATE_EXP"*/, 0LL);
    }
    else
    {
      v39 = (System_String_o *)StringLiteral_361/*" ゲームデータの更新を行います。\n\n{0}\n\n ※Wi-Fi接続での更新を推奨します。"*/;
    }
    DownloadSize = (AssetManager_o *)AssetManager__GetDownloadSize(_4__this, v38);
    v42 = (Il2CppObject *)AssetManager__ConvertDownloadSizeToString(DownloadSize, (double)(__int64)DownloadSize, v41);
    v43 = System_String__Format(v39, v42, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v45 = (Il2CppObject *)v3->fields.__8__1;
    v46 = (CommonUI_o *)Instance;
    v49 = (ErrorDialog_ClickDelegate_o *)sub_1B64314(ErrorDialog_ClickDelegate_TypeInfo, v47, v48);
    ErrorDialog_ClickDelegate___ctor(
      v49,
      v45,
      Method_AssetManager___c__DisplayClass118_0__DownloadAssetStorageAttributeWithCheckDialog_b__1__,
      0LL);
    if ( !v46 )
      goto LABEL_56;
    CommonUI__OpenDataUpdateDialog(v46, v37, v43, v49, 0, 0LL);
    goto LABEL_41;
  }
LABEL_47:
  v3->fields._isDispLogo_5__2 = 0;
  v57 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v60 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v58, v59);
  System_Action___ctor(
    v60,
    (Il2CppObject *)_4__this,
    Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_b__118_0__,
    0LL);
  if ( !v57 )
    goto LABEL_56;
  this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)CommonUI__PlayLogo(
                                                                                  (CommonUI_o *)v57,
                                                                                  v60,
                                                                                  0LL);
  v3->fields._isDispLogo_5__2 = (unsigned __int8)this & 1;
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_52;
  v62 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v62 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v62->static_fields->DEFAULT_FADE_TIME;
  v64 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, method, v61);
  UnityEngine_WaitForSeconds___ctor(v64, DEFAULT_FADE_TIME, 0LL);
  v3->fields.__2__current = (Il2CppObject *)v64;
  v65 = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
  sub_1B6406C(v65, (int32_t)v64, v66, v67);
  *(_DWORD *)&v65[-1].fields.isMine = 2;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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


void __fastcall AssetManager__InitCR_d__131___ctor(
        AssetManager__InitCR_d__131_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AssetManager__InitCR_d__131__MoveNext(AssetManager__InitCR_d__131_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t v3; // w3
  AssetManager__InitCR_d__131_o *v4; // x19
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
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v54; // w2
  int32_t v55; // w3
  bool result; // w0
  const MethodInfo *v57; // x1
  System_String_o *v58; // x21
  System_Char_array *v59; // x0
  System_String_o *v60; // x21
  System_Char_array *v61; // x0
  il2cpp_array_size_t max_length; // w8
  int32_t v63; // w2
  int32_t v64; // w3
  int v65; // w23
  __int64 *v66; // x8
  System_String_o *v67; // x0
  System_String_o *v68; // x22
  System_String_o *v69; // x22
  System_String_o *v70; // x21
  System_Text_Encoding_o *UTF8; // x0
  System_Byte_array *v72; // x23
  uint32_t v73; // w23
  System_Char_array *v74; // x0
  il2cpp_array_size_t v75; // w8
  AssetManager__InitCR_d__131_o *v76; // x1
  AssetManager__InitCR_d__131_o *v77; // x25
  Il2CppObject *_2__current; // x8
  AssetManager__InitCR_d__131_o *v79; // x22
  System_String_o *v80; // x0
  int32_t v81; // w2
  int32_t v82; // w3
  AssetManager_c *v83; // x8
  System_String_o *v84; // x23
  struct AssetManager_StaticFields *v85; // x0
  int32_t v86; // w2
  int32_t v87; // w3
  AssetManager_c *v88; // x0
  void **p_configFileUrl_5__2; // x8
  struct System_String_o *v90; // x23
  struct AssetManager_StaticFields *v91; // x0
  int32_t v92; // w2
  int32_t v93; // w3
  AssetManager_c *v94; // x0
  void **p_loader_5__3; // x8
  struct System_String_o *v96; // x22
  struct AssetManager_StaticFields *v97; // x0
  int v98; // w8
  __int64 v99; // x21
  AssetManager__InitCR_d__131_o *v100; // x22
  System_String_o *v101; // x0
  int32_t v102; // w23
  System_String_o *configFileUrl_5__2; // x24
  System_String_o *v104; // x0
  int32_t v105; // w25
  System_String_o *v106; // x0
  __int64 v107; // x2
  int v108; // w8
  uint32_t v109; // w26
  System_String_o *v110; // x27
  System_String_o *wait_5__6; // x22
  System_Collections_Generic_Dictionary_object__object__o *assetBundleDic; // x28
  AssetData_o *v113; // x29
  System_String_o *v114; // x21
  AssetManager_c *v115; // x0
  struct AssetManager_StaticFields *static_fields; // x0
  int32_t v117; // w1
  int32_t v118; // w1
  struct AssetManager_StaticFields *v119; // x0
  int32_t v120; // w2
  int32_t v121; // w3
  int32_t v122; // w1
  struct AssetManager_StaticFields *v123; // x0
  int32_t v124; // w2
  int32_t v125; // w3
  ManagerConfig_c *v126; // x0
  struct ManagerConfig_StaticFields *v127; // x8
  Il2CppObject *Instance; // x22
  __int64 v129; // x1
  __int64 v130; // x2
  ErrorDialog_ClickDelegate_o *v131; // x23
  AssetManager_c *v132; // x0
  System_String_o *ConfigFileAddress; // x0
  int32_t v134; // w2
  int32_t v135; // w3
  int32_t v136; // w2
  int32_t v137; // w3
  System_String_o *v138; // x21
  System_String_o *UrlString; // x0
  UnityEngine_Networking_UnityWebRequest_o *v140; // x0
  int32_t v141; // w2
  int32_t v142; // w3
  __int64 v143; // x1
  __int64 v144; // x2
  float unscaledTime; // s8
  ManagerConfig_c *v146; // x0
  float TIMEOUT; // s0
  UnityEngine_WaitForEndOfFrame_o *v148; // x21
  int32_t v149; // w2
  int32_t v150; // w3
  AssetManager__InitCR_d__131_o **v151; // x21
  float downloadProgress; // s0
  float loadProgress_5__5; // s9
  float v154; // s8
  int32_t v155; // w2
  int32_t v156; // w3
  float v157; // s0
  bool v158; // zf
  float v159; // s8
  System_String_o *error; // x0
  System_String_o *text; // x22
  System_String_o *v162; // x22
  const MethodInfo *v163; // x1
  System_String_o *v164; // x22
  System_String_o *v165; // x0
  System_String_o *v166; // x0
  Il2CppObject *v167; // x22
  ManagerConfig_c *v168; // x0
  struct ManagerConfig_StaticFields *v169; // x8
  Il2CppObject *v170; // x1
  ServantStatusBattleListViewItem_o *v171; // x19
  int v172; // w8
  AssetManager__InitCR_d__131_o *v173; // x22
  int v174; // w8
  int32_t v175; // w0
  int32_t v176; // w24
  System_String_o *v177; // x23
  System_String_o *v178; // x22
  System_Byte_array *v179; // x24
  uint32_t v180; // w24
  int32_t v181; // w2
  int32_t v182; // w3
  int32_t v183; // w2
  int32_t v184; // w3
  int v185; // w8
  System_String_array *v186; // x25
  __int64 v187; // x1
  __int64 v188; // x2
  __int64 v189; // x22
  const MethodInfo *v190; // x1
  __int64 v191; // x2
  int32_t v192; // w3
  int v193; // w8
  unsigned int v194; // w29
  AssetManager__InitCR_d__131_o *v195; // x27
  char v196; // w8
  System_String_o *v197; // x0
  AssetManager_c *v198; // x8
  int v199; // w9
  void **v200; // x11
  void **v201; // x10
  System_String_o *v202; // x27
  bool v203; // cc
  void **v204; // x9
  void **v205; // x10
  ServantStatusBattleListViewItem_c *v206; // x24
  ServantStatusBattleListViewItem_c *v207; // x23
  int32_t v208; // w2
  int32_t v209; // w3
  int32_t v210; // w2
  int32_t v211; // w3
  int32_t v212; // w2
  int32_t v213; // w3
  System_String_o *v214; // x0
  System_String_o *v215; // x0
  int32_t v216; // w23
  System_String_o *v217; // x0
  const MethodInfo *v218; // x3
  int v219; // w8
  uint32_t v220; // w24
  System_String_o *v221; // x26
  AssetData_o *AssetData; // x0
  const MethodInfo *v223; // x6
  Il2CppObject *v224; // x27
  int32_t v225; // w2
  int32_t v226; // w3
  __int64 v227; // x8
  _QWORD *v228; // x9
  __int64 _2__current_low; // x10
  __int64 v230; // x8
  System_Collections_Generic_List_object__o *v231; // x27
  AssetData_o *v232; // x28
  int32_t v233; // w2
  int32_t v234; // w3
  struct System_Object_array *items; // x8
  _QWORD *v236; // x9
  __int64 size; // x10
  Il2CppClass **v238; // x0
  AssetManager_c *v239; // x0
  ServantStatusBattleListViewItem_c *v240; // x23
  struct AssetManager_StaticFields *v241; // x0
  struct AssetManager_StaticFields *v242; // x0
  ServantStatusBattleListViewItem_c *v243; // x1
  int32_t v244; // w2
  int32_t v245; // w3
  struct AssetManager_StaticFields *v246; // x0
  ServantStatusBattleListViewItem_c *v247; // x1
  int32_t v248; // w2
  int32_t v249; // w3
  _BOOL8 v250; // x0
  Il2CppObject *current; // x22
  System_Collections_Generic_Dictionary_object__object__o *v252; // x0
  System_Collections_Generic_Dictionary_object__object__o *v253; // x0
  Il2CppObject *v254; // x22
  int32_t v255; // w2
  int32_t v256; // w3
  ManagerConfig_c *v257; // x0
  struct ManagerConfig_StaticFields *v258; // x8
  Il2CppObject *v259; // x21
  __int64 v260; // x1
  __int64 v261; // x2
  ErrorDialog_ClickDelegate_o *v262; // x23
  UnityEngine_WaitForEndOfFrame_o *v263; // x20
  int32_t v264; // w2
  int32_t v265; // w3
  ManagementManager_c *v266; // x0
  _BOOL4 isDuringStartup; // w22
  Il2CppObject *v268; // x21
  System_String_o *v269; // x22
  __int64 v270; // x1
  __int64 v271; // x2
  ErrorDialog_ClickDelegate_o *v272; // x23
  System_String_o *v273; // x22
  __int64 v274; // x1
  __int64 v275; // x2
  ErrorDialog_ClickDelegate_o *v276; // x23
  UnityEngine_WaitForEndOfFrame_o *v277; // x20
  int32_t v278; // w2
  int32_t v279; // w3
  UnityEngine_WaitForSeconds_o *v280; // x20
  int32_t v281; // w2
  int32_t v282; // w3
  const MethodInfo *v283; // x2
  int32_t v284; // w2
  int32_t v285; // w3
  __int64 v286; // x1
  __int64 v287; // x2
  UnityEngine_WaitForEndOfFrame_o *v288; // x20
  int32_t v289; // w2
  int32_t v290; // w3
  const MethodInfo *effectDistance; // [xsp+0h] [xbp-F0h]
  System_Nullable_Vector2__o effectDistancea; // [xsp+0h] [xbp-F0h]
  System_Nullable_Vector2__o effectDistanceb; // [xsp+0h] [xbp-F0h]
  const MethodInfo *effectDistance_8; // [xsp+8h] [xbp-E8h]
  System_String_o *klass; // [xsp+18h] [xbp-D8h]
  System_String_o *v296; // [xsp+20h] [xbp-D0h]
  int32_t version; // [xsp+2Ch] [xbp-C4h]
  ServantStatusBattleListViewItem_o *v298; // [xsp+30h] [xbp-C0h]
  ServantStatusBattleListViewItem_o *v299; // [xsp+38h] [xbp-B8h]
  AssetManager__InitCR_d__131_o *v300; // [xsp+40h] [xbp-B0h]
  ServantStatusBattleListViewItem_o *v301; // [xsp+40h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v302; // [xsp+48h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v303; // [xsp+60h] [xbp-90h] BYREF

  v4 = this;
  if ( (byte_49FB538 & 1) == 0 )
  {
    sub_1B640C8(&AssetDataListInfo_TypeInfo, method);
    sub_1B640C8(&AssetData_TypeInfo, v5);
    sub_1B640C8(&Method_AssetManager_OnClickRetryDialog__, v6);
    sub_1B640C8(&Method_AssetManager_OnClickWaitDebugDialog__, v7);
    sub_1B640C8(&AssetManager_TypeInfo, v8);
    sub_1B640C8(&CatAndMouseGame_TypeInfo, v9);
    sub_1B640C8(&char___TypeInfo, v10);
    sub_1B640C8(&ErrorDialog_ClickDelegate_TypeInfo, v11);
    sub_1B640C8(&Crc32_TypeInfo, v12);
    sub_1B640C8(&UnityEngine_Debug_TypeInfo, v13);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__AssetData__Add__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__AssetData__set_Item__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_AssetData__Add__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__, v23);
    sub_1B640C8(&LocalizationManager_TypeInfo, v24);
    sub_1B640C8(&ManagementManager_TypeInfo, v25);
    sub_1B640C8(&ManagerConfig_TypeInfo, v26);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v27);
    sub_1B640C8(&UnityEngine_WaitForEndOfFrame_TypeInfo, v28);
    sub_1B640C8(&UnityEngine_WaitForSeconds_TypeInfo, v29);
    sub_1B640C8(&StringLiteral_2505/*"AssetStorageList download time over"*/, v30);
    sub_1B640C8(&StringLiteral_2501/*"AssetStorageList download crc error"*/, v31);
    sub_1B640C8(&StringLiteral_2497/*"AssetStorage boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/, v32);
    sub_1B640C8(&StringLiteral_2139/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, v33);
    sub_1B640C8(&StringLiteral_2493/*"AssetStorage boot load crc error : チェックサム値が不一致"*/, v34);
    sub_1B640C8(&StringLiteral_15870/*"[FFFF80]Download error for debug"*/, v35);
    sub_1B640C8(&StringLiteral_2502/*"AssetStorageList download data error"*/, v36);
    sub_1B640C8(&StringLiteral_2504/*"AssetStorageList download error : "*/, v37);
    sub_1B640C8(&StringLiteral_2495/*"AssetStorage boot load error : アセットバンドルリスト作成失敗"*/, v38);
    sub_1B640C8(&StringLiteral_25054/*"~"*/, v39);
    sub_1B640C8(&StringLiteral_2496/*"AssetStorage boot load error : ファイル先頭の１行目の内容が空"*/, v40);
    sub_1B640C8(&StringLiteral_11402/*"SCRIPT"*/, v41);
    sub_1B640C8(&StringLiteral_1888/*"@"*/, v42);
    sub_1B640C8(&StringLiteral_2140/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, v43);
    this = (AssetManager__InitCR_d__131_o *)sub_1B640C8(&StringLiteral_1/*""*/, v44);
    byte_49FB538 = 1;
  }
  memset(&v303, 0, sizeof(v303));
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
      this = (AssetManager__InitCR_d__131_o *)_4__this->fields.assetBundleDic;
      if ( !this )
        goto LABEL_281;
      if ( System_Collections_Generic_Dictionary_object__object___get_Count(
             (System_Collections_Generic_Dictionary_object__object__o *)this,
             (const MethodInfo_31790C8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) )
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
      v58 = v51;
      if ( !v51 )
        goto LABEL_120;
      v59 = (System_Char_array *)sub_1B64170(char___TypeInfo, 1LL);
      if ( !v59 )
        sub_1B64324(0LL);
      if ( !v59->max_length )
        sub_1B6432C(v59, v59);
      v59->m_Items[2] = -257;
      v60 = System_String__Trim_61405136(v58, v59, 0LL);
      v61 = (System_Char_array *)sub_1B64170(char___TypeInfo, 2LL);
      if ( !v61 )
        sub_1B64324(0LL);
      max_length = v61->max_length;
      if ( !max_length )
        sub_1B6432C(v61, v61);
      v61->m_Items[2] = 13;
      if ( max_length == 1 )
        sub_1B6432C(v61, v61);
      v61->m_Items[3] = 10;
      if ( !v60 )
        sub_1B64324(v61);
      v65 = System_String__IndexOfAny(v60, v61, 0LL);
      if ( v65 < 2 )
      {
        v66 = &StringLiteral_2496/*"AssetStorage boot load error : ファイル先頭の１行目の内容が空"*/;
        goto LABEL_96;
      }
      v67 = System_String__Substring_61394392(v60, 0, v65, 0LL);
      v68 = v67;
      if ( !v67 )
        sub_1B64324(0LL);
      if ( !System_String__StartsWith(v67, (System_String_o *)StringLiteral_25054/*"~"*/, 0LL) )
      {
        v66 = &StringLiteral_2497/*"AssetStorage boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
        goto LABEL_96;
      }
      v69 = System_String__Substring(v68, 1, 0LL);
      v70 = System_String__Substring(v60, v65 + 1, 0LL);
      UTF8 = System_Text_Encoding__get_UTF8(0LL);
      if ( !UTF8 )
        sub_1B64324(0LL);
      v72 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._19_GetBytes.method)(
                                   UTF8,
                                   v70,
                                   UTF8->klass->vtable._20_GetBytes.methodPtr);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v73 = Crc32__Compute(v72, 0LL);
      if ( System_UInt32__Parse(v69, 0LL) != v73 )
      {
        v66 = &StringLiteral_2493/*"AssetStorage boot load crc error : チェックサム値が不一致"*/;
        goto LABEL_96;
      }
      v74 = (System_Char_array *)sub_1B64170(char___TypeInfo, 2LL);
      if ( !v74 )
        sub_1B64324(0LL);
      v75 = v74->max_length;
      if ( !v75 )
        sub_1B6432C(v74, v74);
      v74->m_Items[2] = 13;
      if ( v75 == 1 )
        sub_1B6432C(v74, v74);
      v74->m_Items[3] = 10;
      if ( !v70 )
        sub_1B64324(v74);
      this = (AssetManager__InitCR_d__131_o *)System_String__Split_61397780(v70, v74, 1, 0LL);
      v77 = this;
      if ( !this )
        goto LABEL_120;
      _2__current = this->fields.__2__current;
      if ( !_2__current )
        goto LABEL_95;
      if ( !(_DWORD)_2__current )
        goto LABEL_282;
      this = (AssetManager__InitCR_d__131_o *)this->fields.__4__this;
      if ( !this )
        goto LABEL_281;
      this = (AssetManager__InitCR_d__131_o *)System_String__StartsWith(
                                                (System_String_o *)this,
                                                (System_String_o *)StringLiteral_1888/*"@"*/,
                                                0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
LABEL_95:
        v66 = &StringLiteral_2495/*"AssetStorage boot load error : アセットバンドルリスト作成失敗"*/;
LABEL_96:
        v114 = (System_String_o *)*v66;
        if ( *v66 )
        {
          v115 = AssetManager_TypeInfo;
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
            v115 = AssetManager_TypeInfo;
          }
          static_fields = v115->static_fields;
          v117 = (int)StringLiteral_1/*""*/;
          static_fields->assetBundleMasterVersion = (struct System_String_o *)StringLiteral_1/*""*/;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->assetBundleMasterVersion, v117, v63, v64);
          v118 = (int)StringLiteral_1/*""*/;
          v119 = AssetManager_TypeInfo->static_fields;
          v119->assetBundleDateVersion = (struct System_String_o *)StringLiteral_1/*""*/;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v119->assetBundleDateVersion, v118, v120, v121);
          v122 = (int)StringLiteral_1/*""*/;
          v123 = AssetManager_TypeInfo->static_fields;
          v123->assetBundleBuildVersion = (struct System_String_o *)StringLiteral_1/*""*/;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v123->assetBundleBuildVersion, v122, v124, v125);
          this = (AssetManager__InitCR_d__131_o *)_4__this->fields.assetBundleDic;
          if ( !this )
            goto LABEL_281;
          System_Collections_Generic_Dictionary_object__object___Clear(
            (System_Collections_Generic_Dictionary_object__object__o *)this,
            (const MethodInfo_3179580 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
          v126 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v126 = ManagerConfig_TypeInfo;
          }
          v127 = v126->static_fields;
          if ( v127->UseDebugCommand )
          {
            if ( !v126->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v126);
              v127 = ManagerConfig_TypeInfo->static_fields;
            }
            if ( System_String__op_Inequality(v127->ServerDefaultType, (System_String_o *)StringLiteral_11402/*"SCRIPT"*/, 0LL) )
            {
              _4__this->fields.isErrorDialog = 1;
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v131 = (ErrorDialog_ClickDelegate_o *)sub_1B64314(ErrorDialog_ClickDelegate_TypeInfo, v129, v130);
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
                (System_String_o *)StringLiteral_15870/*"[FFFF80]Download error for debug"*/,
                v114,
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
                v52 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
                UnityEngine_WaitForEndOfFrame___ctor(v52, 0LL);
                v4->fields.__2__current = (Il2CppObject *)v52;
                p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                sub_1B6406C(p__2__current, (int32_t)v52, v54, v55);
                result = 1;
                *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
                return result;
              }
            }
          }
        }
        goto LABEL_120;
      }
      if ( !LODWORD(v77->fields.__2__current) )
        goto LABEL_282;
      this = (AssetManager__InitCR_d__131_o *)v77->fields.__4__this;
      if ( !this )
        goto LABEL_281;
      this = (AssetManager__InitCR_d__131_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0LL);
      if ( !this )
        goto LABEL_281;
      v79 = this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_282;
      this = (AssetManager__InitCR_d__131_o *)this->fields.__4__this;
      if ( !this )
        goto LABEL_281;
      v80 = System_String__Substring((System_String_o *)this, 1, 0LL);
      v83 = AssetManager_TypeInfo;
      v84 = v80;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v83 = AssetManager_TypeInfo;
      }
      v85 = v83->static_fields;
      v85->assetBundleMasterVersion = v84;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v85->assetBundleMasterVersion, (int32_t)v84, v81, v82);
      v88 = AssetManager_TypeInfo;
      if ( SLODWORD(v79->fields.__2__current) <= 1 )
        p_configFileUrl_5__2 = &StringLiteral_1/*""*/;
      else
        p_configFileUrl_5__2 = (void **)&v79->fields._configFileUrl_5__2;
      v90 = (struct System_String_o *)*p_configFileUrl_5__2;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v88 = AssetManager_TypeInfo;
      }
      v91 = v88->static_fields;
      v91->assetBundleDateVersion = v90;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v91->assetBundleDateVersion, (int32_t)v90, v86, v87);
      v94 = AssetManager_TypeInfo;
      if ( SLODWORD(v79->fields.__2__current) <= 2 )
        p_loader_5__3 = &StringLiteral_1/*""*/;
      else
        p_loader_5__3 = (void **)&v79->fields._loader_5__3;
      v96 = (struct System_String_o *)*p_loader_5__3;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v94 = AssetManager_TypeInfo;
      }
      v97 = v94->static_fields;
      v97->assetBundleBuildVersion = v96;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v97->assetBundleBuildVersion, (int32_t)v96, v92, v93);
      v98 = (int)v77->fields.__2__current;
      if ( v98 >= 2 )
      {
        v99 = 5LL;
        v300 = v77;
        while ( (int)v99 - 4 < (unsigned int)v98 )
        {
          this = (AssetManager__InitCR_d__131_o *)*((_QWORD *)&v77->klass + v99);
          if ( !this )
            goto LABEL_281;
          this = (AssetManager__InitCR_d__131_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0LL);
          if ( !this )
            goto LABEL_281;
          v100 = this;
          if ( SLODWORD(this->fields.__2__current) < 5 )
            goto LABEL_120;
          this = (AssetManager__InitCR_d__131_o *)this->fields.__4__this;
          if ( !this )
            goto LABEL_281;
          v101 = System_String__Trim((System_String_o *)this, 0LL);
          this = (AssetManager__InitCR_d__131_o *)System_Int32__Parse(v101, 0LL);
          if ( LODWORD(v100->fields.__2__current) < 3 )
            goto LABEL_282;
          v102 = (int)this;
          this = (AssetManager__InitCR_d__131_o *)v100->fields._loader_5__3;
          if ( !this )
            goto LABEL_281;
          configFileUrl_5__2 = v100->fields._configFileUrl_5__2;
          v104 = System_String__Trim((System_String_o *)this, 0LL);
          this = (AssetManager__InitCR_d__131_o *)System_Int32__Parse(v104, 0LL);
          if ( LODWORD(v100->fields.__2__current) <= 3 )
            goto LABEL_282;
          v105 = (int)this;
          this = *(AssetManager__InitCR_d__131_o **)&v100->fields._requestTime_5__4;
          if ( !this )
            goto LABEL_281;
          v106 = System_String__Trim((System_String_o *)this, 0LL);
          this = (AssetManager__InitCR_d__131_o *)System_UInt32__Parse(v106, 0LL);
          v108 = (int)v100->fields.__2__current;
          if ( (unsigned int)v108 <= 4 )
            goto LABEL_282;
          v109 = (unsigned int)this;
          v110 = v108 >= 6 ? (System_String_o *)v100[1].klass : 0LL;
          wait_5__6 = (System_String_o *)v100->fields._wait_5__6;
          assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.assetBundleDic;
          v113 = (AssetData_o *)sub_1B64314(AssetData_TypeInfo, v76, v107);
          AssetData___ctor_37450784(v113, 0, wait_5__6, v102, configFileUrl_5__2, v105, v109, v110, effectDistance);
          if ( !assetBundleDic )
            goto LABEL_281;
          System_Collections_Generic_Dictionary_object__object___set_Item(
            assetBundleDic,
            (Il2CppObject *)wait_5__6,
            (Il2CppObject *)v113,
            (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__AssetData__set_Item__);
          v77 = v300;
          ++v99;
          v98 = (int)v300->fields.__2__current;
          if ( (int)v99 - 4 >= v98 )
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
      sub_1B6406C(
        (ServantStatusBattleListViewItem_o *)&v4->fields._configFileUrl_5__2,
        (int32_t)ConfigFileAddress,
        v134,
        v135);
      v4->fields._loader_5__3 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._loader_5__3, 0, v136, v137);
LABEL_123:
      v138 = v4->fields._configFileUrl_5__2;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      UrlString = AssetManager__getUrlString(v138, v57);
      v140 = UnityEngine_Networking_UnityWebRequest__Get(UrlString, 0LL);
      v4->fields._loader_5__3 = v140;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._loader_5__3, (int32_t)v140, v141, v142);
      this = (AssetManager__InitCR_d__131_o *)v4->fields._loader_5__3;
      if ( !this )
        goto LABEL_281;
      UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
      v146 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v146 = ManagerConfig_TypeInfo;
      }
      TIMEOUT = v146->static_fields->TIMEOUT;
      v4->fields._loadProgress_5__5 = 0.0;
      v4->fields._requestTime_5__4 = unscaledTime + TIMEOUT;
      v148 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v143, v144);
      UnityEngine_WaitForEndOfFrame___ctor(v148, 0LL);
      v4->fields._wait_5__6 = v148;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._wait_5__6, (int32_t)v148, v149, v150);
LABEL_129:
      v151 = (AssetManager__InitCR_d__131_o **)&v4->fields._loader_5__3;
      this = (AssetManager__InitCR_d__131_o *)v4->fields._loader_5__3;
      if ( !this )
        goto LABEL_281;
      this = (AssetManager__InitCR_d__131_o *)UnityEngine_Networking_UnityWebRequest__get_isDone(
                                                (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_136;
      this = *v151;
      if ( !*v151 )
        goto LABEL_281;
      downloadProgress = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                           (UnityEngine_Networking_UnityWebRequest_o *)this,
                           0LL);
      loadProgress_5__5 = v4->fields._loadProgress_5__5;
      v154 = downloadProgress;
      v157 = UnityEngine_Time__get_unscaledTime(0LL);
      v158 = v154 == loadProgress_5__5;
      v159 = v157;
      if ( !v158 )
      {
        v168 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v168 = ManagerConfig_TypeInfo;
        }
        v169 = v168->static_fields;
        this = (AssetManager__InitCR_d__131_o *)v4->fields._loader_5__3;
        v4->fields._requestTime_5__4 = v159 + v169->TIMEOUT;
        if ( this )
        {
          v4->fields._loadProgress_5__5 = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                                            (UnityEngine_Networking_UnityWebRequest_o *)this,
                                            0LL);
          goto LABEL_153;
        }
LABEL_281:
        sub_1B64324(this);
      }
      if ( v157 >= v4->fields._requestTime_5__4 )
      {
LABEL_136:
        if ( !_4__this )
          goto LABEL_281;
        this = *v151;
        if ( !*v151 )
          goto LABEL_281;
        if ( !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL) )
        {
          v167 = (Il2CppObject *)StringLiteral_2505/*"AssetStorageList download time over"*/;
          goto LABEL_249;
        }
        this = *v151;
        if ( !*v151 )
          goto LABEL_281;
        error = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        this = (AssetManager__InitCR_d__131_o *)System_String__IsNullOrEmpty(error, 0LL);
        if ( !*v151 )
          goto LABEL_281;
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v166 = UnityEngine_Networking_UnityWebRequest__get_error(
                   (UnityEngine_Networking_UnityWebRequest_o *)*v151,
                   0LL);
LABEL_155:
          v167 = (Il2CppObject *)v166;
          goto LABEL_249;
        }
        this = (AssetManager__InitCR_d__131_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                  (UnityEngine_Networking_UnityWebRequest_o *)*v151,
                                                  0LL);
        if ( !this )
          goto LABEL_281;
        text = UnityEngine_Networking_DownloadHandler__get_text((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
        if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
        v162 = CatAndMouseGame__MouseGame3(text, 0LL);
        if ( System_String__IsNullOrEmpty(v162, 0LL) )
        {
          v164 = v4->fields._configFileUrl_5__2;
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v165 = AssetManager__getUrlString(v164, v163);
          v166 = System_String__Concat_61375396((System_String_o *)StringLiteral_2504/*"AssetStorageList download error : "*/, v165, 0LL);
          goto LABEL_155;
        }
        this = (AssetManager__InitCR_d__131_o *)sub_1B64170(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_281;
        v76 = this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_282;
        LOWORD(this->fields.__4__this) = -257;
        if ( !v162 )
          goto LABEL_281;
        this = (AssetManager__InitCR_d__131_o *)System_String__Trim_61405136(v162, (System_Char_array *)this, 0LL);
        if ( !this )
          goto LABEL_281;
        v173 = this;
        if ( System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_25054/*"~"*/, 0LL) )
        {
          this = (AssetManager__InitCR_d__131_o *)sub_1B64170(char___TypeInfo, 2LL);
          if ( !this )
            goto LABEL_281;
          v174 = (int)this->fields.__2__current;
          v76 = this;
          if ( !v174 )
            goto LABEL_282;
          LOWORD(this->fields.__4__this) = 13;
          if ( v174 == 1 )
            goto LABEL_282;
          WORD1(this->fields.__4__this) = 10;
          v175 = System_String__IndexOfAny((System_String_o *)v173, (System_Char_array *)this, 0LL);
          if ( v175 >= 2 )
          {
            v176 = v175;
            v177 = System_String__Substring_61394392((System_String_o *)v173, 1, v175 - 1, 0LL);
            v178 = System_String__Substring((System_String_o *)v173, v176 + 1, 0LL);
            this = (AssetManager__InitCR_d__131_o *)System_Text_Encoding__get_UTF8(0LL);
            if ( !this )
              goto LABEL_281;
            v179 = (System_Byte_array *)((__int64 (__fastcall *)(AssetManager__InitCR_d__131_o *, System_String_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                                          this,
                                          v178,
                                          this->klass[1]._1.interfaceOffsets);
            if ( !Crc32_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
            v180 = Crc32__Compute(v179, 0LL);
            if ( System_UInt32__Parse(v177, 0LL) == v180 )
            {
              if ( *v151 )
              {
                UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)*v151, 0LL);
                *v151 = 0LL;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._loader_5__3, 0, v183, v184);
              }
              if ( !v178 )
                goto LABEL_280;
              this = (AssetManager__InitCR_d__131_o *)sub_1B64170(char___TypeInfo, 2LL);
              if ( !this )
                goto LABEL_281;
              v185 = (int)this->fields.__2__current;
              v76 = this;
              if ( v185 )
              {
                LOWORD(this->fields.__4__this) = 13;
                if ( v185 != 1 )
                {
                  WORD1(this->fields.__4__this) = 10;
                  v186 = System_String__Split_61397780(v178, (System_Char_array *)this, 1, 0LL);
                  v189 = sub_1B64314(AssetDataListInfo_TypeInfo, v187, v188);
                  AssetDataListInfo___ctor((AssetDataListInfo_o *)v189, v190);
                  if ( !v186 )
                    goto LABEL_281;
                  v193 = v186->max_length;
                  v298 = (ServantStatusBattleListViewItem_o *)(v189 + 16);
                  v299 = (ServantStatusBattleListViewItem_o *)(v189 + 24);
                  v301 = (ServantStatusBattleListViewItem_o *)(v189 + 32);
                  if ( v193 >= 1 )
                  {
                    v194 = 0;
                    while ( v194 < v193 )
                    {
                      this = (AssetManager__InitCR_d__131_o *)v186->m_Items[v194];
                      if ( !this )
                        goto LABEL_281;
                      this = (AssetManager__InitCR_d__131_o *)System_String__Split(
                                                                (System_String_o *)this,
                                                                0x2Cu,
                                                                0,
                                                                0LL);
                      if ( !this )
                        goto LABEL_281;
                      v195 = this;
                      if ( SLODWORD(this->fields.__2__current) < 1 )
                        goto LABEL_231;
                      this = (AssetManager__InitCR_d__131_o *)this->fields.__4__this;
                      if ( !this )
                        goto LABEL_281;
                      this = (AssetManager__InitCR_d__131_o *)System_String__StartsWith(
                                                                (System_String_o *)this,
                                                                (System_String_o *)StringLiteral_1888/*"@"*/,
                                                                0LL);
                      if ( !LODWORD(v195->fields.__2__current) )
                        goto LABEL_282;
                      v196 = (char)this;
                      this = (AssetManager__InitCR_d__131_o *)v195->fields.__4__this;
                      if ( !this )
                        goto LABEL_281;
                      if ( (v196 & 1) != 0 )
                      {
                        v197 = System_String__Substring((System_String_o *)this, 1, 0LL);
                        v198 = AssetManager_TypeInfo;
                        v199 = (int)v195->fields.__2__current;
                        v200 = (void **)&v195->fields._loader_5__3;
                        v201 = (void **)&v195->fields._configFileUrl_5__2;
                        v202 = v197;
                        if ( v199 == 2 )
                          v200 = &StringLiteral_1/*""*/;
                        v203 = v199 <= 1;
                        if ( v199 <= 1 )
                          v204 = &StringLiteral_1/*""*/;
                        else
                          v204 = v201;
                        if ( v203 )
                          v205 = &StringLiteral_1/*""*/;
                        else
                          v205 = v200;
                        v206 = (ServantStatusBattleListViewItem_c *)*v204;
                        v207 = (ServantStatusBattleListViewItem_c *)*v205;
                        if ( !AssetManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                          v198 = AssetManager_TypeInfo;
                        }
                        this = (AssetManager__InitCR_d__131_o *)System_String__op_Inequality(
                                                                  v202,
                                                                  v198->static_fields->assetBundleMasterVersion,
                                                                  0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                        {
                          this = (AssetManager__InitCR_d__131_o *)_4__this->fields.assetBundleDic;
                          if ( !this )
                            goto LABEL_281;
                          System_Collections_Generic_Dictionary_object__object___Clear(
                            (System_Collections_Generic_Dictionary_object__object__o *)this,
                            (const MethodInfo_3179580 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
                        }
                        if ( !v189 )
                          goto LABEL_281;
                        v298->klass = (ServantStatusBattleListViewItem_c *)v202;
                        sub_1B6406C(v298, (int32_t)v202, v208, v209);
                        v299->klass = v206;
                        sub_1B6406C(v299, (int32_t)v206, v210, v211);
                        v301->klass = v207;
                        sub_1B6406C(v301, (int32_t)v207, v212, v213);
                      }
                      else
                      {
                        this = (AssetManager__InitCR_d__131_o *)System_String__StartsWith(
                                                                  (System_String_o *)this,
                                                                  (System_String_o *)StringLiteral_25054/*"~"*/,
                                                                  0LL);
                        if ( ((unsigned __int8)this & 1) == 0 )
                        {
                          if ( !LODWORD(v195->fields.__2__current) )
                            goto LABEL_282;
                          this = (AssetManager__InitCR_d__131_o *)v195->fields.__4__this;
                          if ( !this )
                            goto LABEL_281;
                          this = (AssetManager__InitCR_d__131_o *)System_String__IndexOf(
                                                                    (System_String_o *)this,
                                                                    0x7Eu,
                                                                    0LL);
                          if ( (_DWORD)this != 1 )
                          {
                            if ( SLODWORD(v195->fields.__2__current) < 5 )
                              goto LABEL_231;
                            this = (AssetManager__InitCR_d__131_o *)v195->fields.__4__this;
                            if ( !this )
                              goto LABEL_281;
                            v214 = System_String__Trim((System_String_o *)this, 0LL);
                            this = (AssetManager__InitCR_d__131_o *)System_Int32__Parse(v214, 0LL);
                            version = (int)this;
                            if ( LODWORD(v195->fields.__2__current) < 3 )
                              goto LABEL_282;
                            this = (AssetManager__InitCR_d__131_o *)v195->fields._loader_5__3;
                            if ( !this )
                              goto LABEL_281;
                            v296 = v195->fields._configFileUrl_5__2;
                            v215 = System_String__Trim((System_String_o *)this, 0LL);
                            this = (AssetManager__InitCR_d__131_o *)System_Int32__Parse(v215, 0LL);
                            if ( LODWORD(v195->fields.__2__current) <= 3 )
                              goto LABEL_282;
                            v216 = (int)this;
                            this = *(AssetManager__InitCR_d__131_o **)&v195->fields._requestTime_5__4;
                            if ( !this )
                              goto LABEL_281;
                            v217 = System_String__Trim((System_String_o *)this, 0LL);
                            this = (AssetManager__InitCR_d__131_o *)System_UInt32__Parse(v217, 0LL);
                            v219 = (int)v195->fields.__2__current;
                            if ( (unsigned int)v219 <= 4 )
                              goto LABEL_282;
                            v220 = (unsigned int)this;
                            if ( v219 >= 6 )
                              klass = (System_String_o *)v195[1].klass;
                            else
                              klass = 0LL;
                            v221 = (System_String_o *)v195->fields._wait_5__6;
                            AssetData = AssetManager__GetAssetData(
                                          (AssetManager_o *)this,
                                          _4__this->fields.assetBundleDic,
                                          v221,
                                          v218);
                            if ( AssetData )
                            {
                              v224 = (Il2CppObject *)AssetData;
                              this = (AssetManager__InitCR_d__131_o *)AssetData__SetUpdateInfo(
                                                                        AssetData,
                                                                        version,
                                                                        v296,
                                                                        v216,
                                                                        v220,
                                                                        klass,
                                                                        v223);
                              if ( !v189 )
                                goto LABEL_281;
                              this = *(AssetManager__InitCR_d__131_o **)(v189 + 40);
                              if ( !this )
                                goto LABEL_281;
                              v227 = *(_QWORD *)&this->fields.__1__state;
                              v228 = Method_System_Collections_Generic_List_AssetData__Add__;
                              ++HIDWORD(this->fields.__2__current);
                              if ( !v227 )
                                goto LABEL_281;
                              _2__current_low = SLODWORD(this->fields.__2__current);
                              if ( (unsigned int)_2__current_low >= *(_DWORD *)(v227 + 24) )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  (System_Collections_Generic_List_object__o *)this,
                                  v224,
                                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v228[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v230 = v227 + 8 * _2__current_low;
                                LODWORD(this->fields.__2__current) = _2__current_low + 1;
                                *(_QWORD *)(v230 + 32) = v224;
                                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v230 + 32), (int32_t)v224, v225, v226);
                              }
                              v221 = 0LL;
                            }
                            this = (AssetManager__InitCR_d__131_o *)System_String__IsNullOrEmpty(v221, 0LL);
                            if ( ((unsigned __int8)this & 1) == 0 )
                            {
                              if ( !v189 )
                                goto LABEL_281;
                              v231 = *(System_Collections_Generic_List_object__o **)(v189 + 40);
                              v232 = (AssetData_o *)sub_1B64314(AssetData_TypeInfo, v76, v191);
                              AssetData___ctor_37450924(
                                v232,
                                0,
                                v221,
                                0,
                                version,
                                v296,
                                v216,
                                v220,
                                klass,
                                effectDistance_8);
                              if ( !v231 )
                                goto LABEL_281;
                              items = v231->fields._items;
                              v236 = Method_System_Collections_Generic_List_AssetData__Add__;
                              ++v231->fields._version;
                              if ( !items )
                                goto LABEL_281;
                              size = v231->fields._size;
                              if ( (unsigned int)size >= items->max_length )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  v231,
                                  (Il2CppObject *)v232,
                                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v236[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v238 = &items->obj.klass + size;
                                v231->fields._size = size + 1;
                                v238[4] = (Il2CppClass *)v232;
                                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v238 + 4), (int32_t)v232, v233, v234);
                              }
                            }
                          }
                        }
                      }
                      v193 = v186->max_length;
                      if ( (int)++v194 >= v193 )
                        goto LABEL_231;
                    }
                    goto LABEL_282;
                  }
LABEL_231:
                  if ( !v189 )
                    goto LABEL_281;
                  v239 = AssetManager_TypeInfo;
                  v240 = v298->klass;
                  if ( !AssetManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                    v239 = AssetManager_TypeInfo;
                  }
                  v241 = v239->static_fields;
                  v241->assetBundleMasterVersion = (struct System_String_o *)v240;
                  sub_1B6406C(
                    (ServantStatusBattleListViewItem_o *)&v241->assetBundleMasterVersion,
                    (int32_t)v240,
                    v191,
                    v192);
                  v242 = AssetManager_TypeInfo->static_fields;
                  v243 = v299->klass;
                  v242->assetBundleDateVersion = (struct System_String_o *)v299->klass;
                  sub_1B6406C(
                    (ServantStatusBattleListViewItem_o *)&v242->assetBundleDateVersion,
                    (int32_t)v243,
                    v244,
                    v245);
                  v246 = AssetManager_TypeInfo->static_fields;
                  v247 = v301->klass;
                  v246->assetBundleBuildVersion = (struct System_String_o *)v301->klass;
                  sub_1B6406C(
                    (ServantStatusBattleListViewItem_o *)&v246->assetBundleBuildVersion,
                    (int32_t)v247,
                    v248,
                    v249);
                  this = (AssetManager__InitCR_d__131_o *)_4__this->fields.assetBundleDic;
                  if ( !this )
                    goto LABEL_281;
                  System_Collections_Generic_Dictionary_object__object___Clear(
                    (System_Collections_Generic_Dictionary_object__object__o *)this,
                    (const MethodInfo_3179580 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
                  this = *(AssetManager__InitCR_d__131_o **)(v189 + 40);
                  if ( !this )
                    goto LABEL_281;
                  System_Collections_Generic_List_object___GetEnumerator(
                    (System_Collections_Generic_List_Enumerator_T__o *)&v302,
                    (System_Collections_Generic_List_object__o *)this,
                    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
                  v303 = v302;
                  while ( 1 )
                  {
                    v250 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                             &v303,
                             (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
                    if ( !v250 )
                      break;
                    current = v303.fields._current;
                    if ( !v303.fields._current )
                      sub_1B64324(v250);
                    v252 = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.assetBundleDic;
                    if ( !v252 )
                      sub_1B64324(0LL);
                    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                            v252,
                            (Il2CppObject *)v303.fields._current[1].monitor,
                            (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__) )
                    {
                      v253 = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.assetBundleDic;
                      if ( !v253 )
                        sub_1B64324(0LL);
                      System_Collections_Generic_Dictionary_object__object___Add(
                        v253,
                        (Il2CppObject *)current[1].monitor,
                        current,
                        (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
                    }
                  }
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v303,
                    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
                  AssetManager__ConfigWriteRequest(_4__this, 1, v283);
LABEL_280:
                  v4->fields._configFileUrl_5__2 = 0LL;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._configFileUrl_5__2, 0, v181, v182);
                  v4->fields._loader_5__3 = 0LL;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._loader_5__3, 0, v284, v285);
                  v288 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(
                                                              UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                              v286,
                                                              v287);
                  UnityEngine_WaitForEndOfFrame___ctor(v288, 0LL);
                  v4->fields.__2__current = (Il2CppObject *)v288;
                  v171 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                  sub_1B6406C(v171, (int32_t)v288, v289, v290);
                  v172 = 6;
                  goto LABEL_278;
                }
              }
LABEL_282:
              sub_1B6432C(this, v76);
            }
            v254 = (Il2CppObject *)StringLiteral_2501/*"AssetStorageList download crc error"*/;
            if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
            UnityEngine_Debug__LogError(v254, 0LL);
          }
        }
        v167 = (Il2CppObject *)StringLiteral_2502/*"AssetStorageList download data error"*/;
        if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
        UnityEngine_Debug__LogError(v167, 0LL);
LABEL_249:
        if ( *v151 )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)*v151, 0LL);
          *v151 = 0LL;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._loader_5__3, 0, v255, v256);
        }
        if ( !v167 )
          goto LABEL_277;
        v257 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v257 = ManagerConfig_TypeInfo;
        }
        v258 = v257->static_fields;
        if ( v258->UseDebugCommand )
        {
          if ( !v257->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v257);
            v258 = ManagerConfig_TypeInfo->static_fields;
          }
          if ( System_String__op_Inequality(v258->ServerDefaultType, (System_String_o *)StringLiteral_11402/*"SCRIPT"*/, 0LL) )
          {
            _4__this->fields.isErrorDialog = 1;
            v259 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v262 = (ErrorDialog_ClickDelegate_o *)sub_1B64314(ErrorDialog_ClickDelegate_TypeInfo, v260, v261);
            ErrorDialog_ClickDelegate___ctor(
              v262,
              (Il2CppObject *)_4__this,
              Method_AssetManager_OnClickWaitDebugDialog__,
              0LL);
            if ( !v259 )
              goto LABEL_281;
            *(_QWORD *)&effectDistanceb.fields.hasValue = 0LL;
            effectDistanceb.fields.value.fields.y = 0.0;
            CommonUI__OpenWarningDialog(
              (CommonUI_o *)v259,
              (System_String_o *)StringLiteral_15870/*"[FFFF80]Download error for debug"*/,
              (System_String_o *)v167,
              v262,
              1,
              0,
              -1.0,
              1,
              effectDistanceb,
              0LL);
LABEL_260:
            if ( _4__this->fields.isErrorDialog )
            {
              v263 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
              UnityEngine_WaitForEndOfFrame___ctor(v263, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v263;
              v171 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B6406C(v171, (int32_t)v263, v264, v265);
              v172 = 3;
              goto LABEL_278;
            }
          }
        }
        _4__this->fields.isErrorDialog = 1;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        if ( !byte_49FB4AB )
        {
          sub_1B640C8(&ManagementManager_TypeInfo, method);
          byte_49FB4AB = 1;
        }
        v266 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v266 = ManagementManager_TypeInfo;
        }
        isDuringStartup = v266->static_fields->isDuringStartup;
        v268 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          if ( isDuringStartup )
          {
LABEL_270:
            v269 = LocalizationManager__Get((System_String_o *)StringLiteral_2139/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
            v272 = (ErrorDialog_ClickDelegate_o *)sub_1B64314(ErrorDialog_ClickDelegate_TypeInfo, v270, v271);
            ErrorDialog_ClickDelegate___ctor(
              v272,
              (Il2CppObject *)_4__this,
              Method_AssetManager_OnClickRetryDialog__,
              0LL);
            if ( !v268 )
              goto LABEL_281;
            CommonUI__OpenRetryBootDialog((CommonUI_o *)v268, (System_String_o *)StringLiteral_1/*""*/, v269, v272, 0, 0LL);
LABEL_275:
            if ( _4__this->fields.isErrorDialog )
            {
              v277 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
              UnityEngine_WaitForEndOfFrame___ctor(v277, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v277;
              v171 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B6406C(v171, (int32_t)v277, v278, v279);
              v172 = 4;
              goto LABEL_278;
            }
LABEL_277:
            v280 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
            UnityEngine_WaitForSeconds___ctor(v280, 1.0, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v280;
            v171 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B6406C(v171, (int32_t)v280, v281, v282);
            v172 = 5;
            goto LABEL_278;
          }
        }
        else
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          if ( isDuringStartup )
            goto LABEL_270;
        }
        v273 = LocalizationManager__Get((System_String_o *)StringLiteral_2140/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
        v276 = (ErrorDialog_ClickDelegate_o *)sub_1B64314(ErrorDialog_ClickDelegate_TypeInfo, v274, v275);
        ErrorDialog_ClickDelegate___ctor(v276, (Il2CppObject *)_4__this, Method_AssetManager_OnClickRetryDialog__, 0LL);
        if ( !v268 )
          goto LABEL_281;
        CommonUI__OpenRetryDialog((CommonUI_o *)v268, (System_String_o *)StringLiteral_1/*""*/, v273, v276, 0, 0LL);
        goto LABEL_275;
      }
LABEL_153:
      v170 = (Il2CppObject *)v4->fields._wait_5__6;
      v4->fields.__2__current = v170;
      v171 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B6406C(v171, (int32_t)v170, v155, v156);
      v172 = 2;
LABEL_278:
      *(_DWORD *)&v171[-1].fields.isMine = v172;
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
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._wait_5__6, 0, v2, v3);
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
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.initCRW, 0, v2, v3);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall AssetManager__InitCR_d__131__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AssetManager__InitCR_d__131_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AssetManager__InitCR_d__131__System_Collections_IEnumerator_Reset(
        AssetManager__InitCR_d__131_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_AssetManager__InitCR_d__131_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
}


Il2CppObject *__fastcall AssetManager__InitCR_d__131__System_Collections_IEnumerator_get_Current(
        AssetManager__InitCR_d__131_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall AssetManager__InitCR_d__131__System_IDisposable_Dispose(
        AssetManager__InitCR_d__131_o *this,
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
  __int64 v2; // x2
  int32_t v3; // w3
  AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_o *v4; // x19
  int32_t _1__state; // w8
  struct AssetManager_o *_4__this; // x21
  UnityEngine_WaitForEndOfFrame_o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  Il2CppObject *wait_5__2; // x1
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0

  v4 = this;
  if ( (byte_49FB539 & 1) == 0 )
  {
    this = (AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_o *)sub_1B640C8(
                                                                        &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                        method);
    byte_49FB539 = 1;
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
    v7 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
    UnityEngine_WaitForEndOfFrame___ctor(v7, 0LL);
    v4->fields._wait_5__2 = v7;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._wait_5__2, (int32_t)v7, v8, v9);
  }
  if ( !_4__this )
    sub_1B64324(this);
  if ( _4__this->fields.inProgressUnloadUnusedAssets || _4__this->fields.requestUnloadUnusedAssets )
  {
    wait_5__2 = (Il2CppObject *)v4->fields._wait_5__2;
    v4->fields.__2__current = wait_5__2;
    p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    sub_1B6406C(p__2__current, (int32_t)wait_5__2, v2, v3);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  if ( (byte_49FB534 & 1) != 0 )
  {
    if ( isDecide )
    {
LABEL_3:
      this->fields.isDataUpdate = 1;
      return;
    }
  }
  else
  {
    sub_1B640C8(&UnityEngine_Application_TypeInfo, isDecide);
    byte_49FB534 = 1;
    if ( isDecide )
      goto LABEL_3;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_68921692(0LL);
}


void __fastcall AssetManager___c__DisplayClass148_0___ctor(
        AssetManager___c__DisplayClass148_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssetManager___c__DisplayClass148_0___LoadStart_b__0(
        AssetManager___c__DisplayClass148_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  AssetLoader_o *loader; // x20
  Il2CppObject *_4__this; // x22
  AssetLoader_LoadEndHandler_o *v7; // x21
  const MethodInfo *v8; // x3
  __int64 v9; // x0
  const MethodInfo *v10; // x3
  struct AssetManager_LoadWaitStatus_o *waiter; // x8

  if ( (byte_49FB535 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetManager_OnEndLoadAssetStorage__, method);
    sub_1B640C8(&AssetLoader_LoadEndHandler_TypeInfo, v4);
    byte_49FB535 = 1;
  }
  loader = this->fields.loader;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v7 = (AssetLoader_LoadEndHandler_o *)sub_1B64314(AssetLoader_LoadEndHandler_TypeInfo, method, v2);
  AssetLoader_LoadEndHandler___ctor(v7, _4__this, Method_AssetManager_OnEndLoadAssetStorage__, v8);
  waiter = this->fields.waiter;
  if ( !waiter || !loader )
    sub_1B64324(v9);
  AssetLoader__StartLoad(loader, v7, waiter->fields.resourceNames, v10);
}


void __fastcall AssetManager___c__DisplayClass169_0___ctor(
        AssetManager___c__DisplayClass169_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssetManager___c__DisplayClass169_0___LoadAssetStorage_b__0(
        AssetManager___c__DisplayClass169_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  AssetManager___c__DisplayClass169_0_o *v4; // x19
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  struct System_Collections_Generic_List_string__o *remainNameList; // x8
  const MethodInfo *v8; // x1

  v4 = this;
  if ( (byte_49FB536 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Remove__, data);
    this = (AssetManager___c__DisplayClass169_0_o *)sub_1B640C8(
                                                      &Method_System_Collections_Generic_List_string__get_Count__,
                                                      v5);
    byte_49FB536 = 1;
  }
  ++v4->fields.calledCallbackFuncCounter;
  if ( !data )
    goto LABEL_12;
  this = (AssetManager___c__DisplayClass169_0_o *)v4->fields.remainNameList;
  if ( !this )
    goto LABEL_12;
  this = (AssetManager___c__DisplayClass169_0_o *)System_Collections_Generic_List_object___Remove(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    (Il2CppObject *)data->fields.name,
                                                    (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_string__Remove__);
  if ( v4->fields.calledCallbackFunc )
    return;
  remainNameList = v4->fields.remainNameList;
  if ( !remainNameList )
LABEL_12:
    sub_1B64324(this);
  if ( remainNameList->fields._size <= 0 )
  {
    this = (AssetManager___c__DisplayClass169_0_o *)v4->fields.__4__this;
    if ( this )
    {
      AssetManager__AddLoadWaitStatus((AssetManager_o *)this, v4->fields.callbackFunc, v6);
      this = (AssetManager___c__DisplayClass169_0_o *)v4->fields.__4__this;
      if ( this )
      {
        HIDWORD(this[1].fields.__9__0) = v4->fields.loadParallelMax;
        v4->fields.calledCallbackFunc = 1;
        AssetManager__LoadStart((AssetManager_o *)this, v8);
        return;
      }
    }
    goto LABEL_12;
  }
}


void __fastcall AssetManager__coUnloadUnusedAssets_d__138___ctor(
        AssetManager__coUnloadUnusedAssets_d__138_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AssetManager__coUnloadUnusedAssets_d__138__MoveNext(
        AssetManager__coUnloadUnusedAssets_d__138_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  AssetManager__coUnloadUnusedAssets_d__138_o *v3; // x19
  __int64 v4; // x1
  int32_t _1__state; // w8
  struct AssetManager_o *_4__this; // x20
  UnityEngine_WaitForEndOfFrame_o *v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  AssetManager_c *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *wait_5__2; // x1
  ServantStatusBattleListViewItem_o *v14; // x19
  bool v15; // w21
  UnityEngine_AsyncOperation_o *v16; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v18; // w2
  int32_t v19; // w3
  struct AssetManager_ResourceUnloadEventHandler_o *v20; // x8
  ServantStatusBattleListViewItem_o *p_unloadCallbacks; // x20
  struct AssetManager_ResourceUnloadEventHandler_o *unloadCallbacks; // t1
  int32_t v23; // w2
  int32_t v24; // w3

  v3 = this;
  if ( (byte_49FB53A & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    this = (AssetManager__coUnloadUnusedAssets_d__138_o *)sub_1B640C8(&UnityEngine_WaitForEndOfFrame_TypeInfo, v4);
    byte_49FB53A = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 2 )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_19;
    unloadCallbacks = _4__this->fields.unloadCallbacks;
    p_unloadCallbacks = (ServantStatusBattleListViewItem_o *)&_4__this->fields.unloadCallbacks;
    v20 = unloadCallbacks;
    *((_WORD *)&p_unloadCallbacks[-1].fields.isCanSelect + 1) = 0;
    if ( unloadCallbacks )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v20->fields.m_target)(
        v20->fields.original_method_info,
        *(_QWORD *)&v20->fields.extra_arg);
      p_unloadCallbacks->klass = 0LL;
      sub_1B6406C(p_unloadCallbacks, 0, v23, v24);
    }
    return 0;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v3->fields.__1__state = -1;
      v7 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
      UnityEngine_WaitForEndOfFrame___ctor(v7, 0LL);
      v3->fields._wait_5__2 = v7;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._wait_5__2, (int32_t)v7, v8, v9);
      goto LABEL_8;
    }
    return 0;
  }
  v3->fields.__1__state = -1;
LABEL_8:
  v10 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  this = (AssetManager__coUnloadUnusedAssets_d__138_o *)AssetManager__LoadIsBusy((const MethodInfo *)v10);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( _4__this )
    {
      v15 = 1;
      _4__this->fields.inProgressUnloadUnusedAssets = 1;
      v16 = UnityEngine_Resources__UnloadUnusedAssets(0LL);
      v3->fields.__2__current = (Il2CppObject *)v16;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
      sub_1B6406C(p__2__current, (int32_t)v16, v18, v19);
      *(_DWORD *)&p__2__current[-1].fields.isMine = 2;
      return v15;
    }
LABEL_19:
    sub_1B64324(this);
  }
  wait_5__2 = (Il2CppObject *)v3->fields._wait_5__2;
  v3->fields.__2__current = wait_5__2;
  v14 = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
  sub_1B6406C(v14, (int32_t)wait_5__2, v11, v12);
  v15 = 1;
  *(_DWORD *)&v14[-1].fields.isMine = 1;
  return v15;
}


Il2CppObject *__fastcall AssetManager__coUnloadUnusedAssets_d__138__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AssetManager__coUnloadUnusedAssets_d__138_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AssetManager__coUnloadUnusedAssets_d__138__System_Collections_IEnumerator_Reset(
        AssetManager__coUnloadUnusedAssets_d__138_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_AssetManager__coUnloadUnusedAssets_d__138_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
}


Il2CppObject *__fastcall AssetManager__coUnloadUnusedAssets_d__138__System_Collections_IEnumerator_get_Current(
        AssetManager__coUnloadUnusedAssets_d__138_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall AssetManager__coUnloadUnusedAssets_d__138__System_IDisposable_Dispose(
        AssetManager__coUnloadUnusedAssets_d__138_o *this,
        const MethodInfo *method)
{
  ;
}