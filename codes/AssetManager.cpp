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

  if ( (byte_4A07D77 & 1) == 0 )
  {
    sub_1B686D4(&AssetManager_TypeInfo, v1);
    sub_1B686D4(&StringLiteral_2484/*"Asset"*/, v4);
    sub_1B686D4(&StringLiteral_2497/*"AssetStorageBack.txt"*/, v5);
    sub_1B686D4(&StringLiteral_22132/*"offline"*/, v6);
    sub_1B686D4(&StringLiteral_2496/*"AssetStorage.txt"*/, v7);
    sub_1B686D4(&StringLiteral_2498/*"AssetStorageCreate.txt"*/, v8);
    sub_1B686D4(&StringLiteral_1/*""*/, v9);
    sub_1B686D4(&StringLiteral_22202/*"online"*/, v10);
    byte_4A07D77 = 1;
  }
  AssetManager_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_2484/*"Asset"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)AssetManager_TypeInfo->static_fields, StringLiteral_2484/*"Asset"*/, v2, v3);
  v11 = StringLiteral_22132/*"offline"*/;
  static_fields = AssetManager_TypeInfo->static_fields;
  static_fields->SAVE_DATA_OFFLINE = (struct System_String_o *)StringLiteral_22132/*"offline"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->SAVE_DATA_OFFLINE, v11, v13, v14);
  v15 = StringLiteral_22202/*"online"*/;
  v16 = AssetManager_TypeInfo->static_fields;
  v16->SAVE_DATA_ONLINE = (struct System_String_o *)StringLiteral_22202/*"online"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v16->SAVE_DATA_ONLINE, v15, v17, v18);
  v19 = StringLiteral_2496/*"AssetStorage.txt"*/;
  v20 = AssetManager_TypeInfo->static_fields;
  v20->configFileName = (struct System_String_o *)StringLiteral_2496/*"AssetStorage.txt"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v20->configFileName, v19, v21, v22);
  v23 = StringLiteral_2498/*"AssetStorageCreate.txt"*/;
  v24 = AssetManager_TypeInfo->static_fields;
  v24->createConfigFileName = (struct System_String_o *)StringLiteral_2498/*"AssetStorageCreate.txt"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v24->createConfigFileName, v23, v25, v26);
  v27 = StringLiteral_2497/*"AssetStorageBack.txt"*/;
  v28 = AssetManager_TypeInfo->static_fields;
  v28->backConfigFileName = (struct System_String_o *)StringLiteral_2497/*"AssetStorageBack.txt"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v28->backConfigFileName, v27, v29, v30);
  v31 = (int)StringLiteral_1/*""*/;
  v32 = AssetManager_TypeInfo->static_fields;
  v32->assetBundleMasterVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v32->assetBundleMasterVersion, v31, v33, v34);
  v35 = (int)StringLiteral_1/*""*/;
  v36 = AssetManager_TypeInfo->static_fields;
  v36->assetBundleDateVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v36->assetBundleDateVersion, v35, v37, v38);
  v39 = (int)StringLiteral_1/*""*/;
  v40 = AssetManager_TypeInfo->static_fields;
  v40->assetBundleBuildVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v40->assetBundleBuildVersion, v39, v41, v42);
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
  int32_t v12; // w3
  System_Collections_Generic_Dictionary_object__object__o *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_Dictionary_object__object__o *v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_List_object__o *v22; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  System_Collections_Generic_Queue_T__o *v25; // x20
  int32_t v26; // w2
  int32_t v27; // w3

  if ( (byte_4A07D76 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__, method);
    sub_1B686D4(&System_Collections_Generic_Dictionary_string__AssetData__TypeInfo, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_AssetLoader___ctor__, v4);
    sub_1B686D4(&System_Collections_Generic_List_AssetLoader__TypeInfo, v5);
    sub_1B686D4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__, v6);
    sub_1B686D4(&System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo, v7);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AssetManager___ctor__, v8);
    sub_1B686D4(&StringLiteral_1/*""*/, v9);
    byte_4A07D76 = 1;
  }
  *(_WORD *)&this->fields._DispLog = 257;
  this->fields.isInitEnd = 1;
  v10 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B68920(System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v10,
    (const MethodInfo_31891B8 *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.assetBundleDic = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)v10;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.assetBundleDic, (int32_t)v10, v11, v12);
  v13 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B68920(System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v13,
    (const MethodInfo_31891B8 *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.assetBundleReleaseDic = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)v13;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.assetBundleReleaseDic, (int32_t)v13, v14, v15);
  v16 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B68920(System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v16,
    (const MethodInfo_31891B8 *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.assetResourceDic = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)v16;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.assetResourceDic, (int32_t)v16, v17, v18);
  v19 = (int)StringLiteral_1/*""*/;
  this->fields.requestConfigWriteData = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.requestConfigWriteData, v19, v20, v21);
  this->fields.requestWriteCounter = -1.0;
  v22 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_AssetLoader__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_AssetLoader___ctor__);
  this->fields.processingAssetLoaderList = (struct System_Collections_Generic_List_AssetLoader__o *)v22;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.processingAssetLoaderList, (int32_t)v22, v23, v24);
  this->fields.loadParallelMax = 1;
  v25 = (System_Collections_Generic_Queue_T__o *)sub_1B68920(System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v25,
    (const MethodInfo_362D8E0 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
  this->fields.downLoadWaitList = (struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)v25;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.downLoadWaitList, (int32_t)v25, v26, v27);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_36F7AB4 *)Method_SingletonMonoBehaviour_AssetManager___ctor__);
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

  if ( (byte_4A07D62 & 1) == 0 )
  {
    sub_1B686D4(
      &Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__,
      *(_QWORD *)&type);
    sub_1B686D4(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__, v9);
    sub_1B686D4(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__, v10);
    sub_1B686D4(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v11);
    sub_1B686D4(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v12);
    sub_1B686D4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__, v13);
    byte_4A07D62 = 1;
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
                                                                               (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    if ( !processingAssetLoaderList )
      goto LABEL_10;
    v17 = (AssetLoader_o *)processingAssetLoaderList;
    syncRoot = (AssetData_o *)processingAssetLoaderList->fields._syncRoot;
    if ( syncRoot && AssetData__IsSame_37513076(syncRoot, type, name, v16) )
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
    sub_1B68930(processingAssetLoaderList, *(_QWORD *)&type);
  System_Collections_Generic_Queue_object___GetEnumerator(
    &v29,
    (System_Collections_Generic_Queue_T__o *)processingAssetLoaderList,
    (const MethodInfo_362DF60 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  while ( 1 )
  {
    v20 = System_Collections_Generic_Queue_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_323AC2C *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    if ( !v20 )
      break;
    Current = System_Collections_Generic_Queue_Enumerator_object___get_Current(
                &v29,
                (const MethodInfo_323AD1C *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    v24 = (AssetManager_LoadWaitStatus_o *)Current;
    if ( !Current )
      sub_1B68930(0LL, v22);
    klass = (AssetData_o *)Current[1].klass;
    if ( klass && AssetData__IsSame_37513076(klass, type, name, v23) )
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
    (const MethodInfo_323AC1C *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
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
  _BOOL8 IsSame_37513076; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x2
  struct AssetData_o *v29; // x8
  int32_t v30; // w9
  int v31; // w19
  struct AssetData_o *data; // x8
  int32_t entryCount; // w9
  System_Collections_Generic_Queue_Enumerator_T__o v35; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Queue_Enumerator_T__o v36; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A07D61 & 1) == 0 )
  {
    sub_1B686D4(
      &Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__,
      *(_QWORD *)&type);
    sub_1B686D4(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__, v9);
    sub_1B686D4(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__, v10);
    sub_1B686D4(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v11);
    sub_1B686D4(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v12);
    sub_1B686D4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__, v13);
    byte_4A07D61 = 1;
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
                                                                               (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    if ( !processingAssetLoaderList )
      goto LABEL_10;
    v17 = (AssetLoader_o *)processingAssetLoaderList;
    syncRoot = (AssetData_o *)processingAssetLoaderList->fields._syncRoot;
    if ( syncRoot )
    {
      processingAssetLoaderList = (System_Collections_Generic_List_object__o *)AssetData__IsSame_37513076(
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
        sub_1B68930(processingAssetLoaderList, *(_QWORD *)&type);
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
    (const MethodInfo_362DF60 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  v36 = v35;
  while ( 1 )
  {
    v20 = System_Collections_Generic_Queue_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_323AC2C *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    if ( !v20 )
    {
      v31 = 8;
      goto LABEL_22;
    }
    Current = System_Collections_Generic_Queue_Enumerator_object___get_Current(
                &v36,
                (const MethodInfo_323AD1C *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    v24 = (AssetManager_LoadWaitStatus_o *)Current;
    if ( !Current )
      sub_1B68930(0LL, v22);
    klass = (AssetData_o *)Current[1].klass;
    if ( klass )
    {
      IsSame_37513076 = AssetData__IsSame_37513076(klass, type, name, v23);
      if ( IsSame_37513076 )
        break;
    }
  }
  v29 = v24->fields.data;
  if ( !v29 )
    sub_1B68930(IsSame_37513076, v27);
  v30 = v29->fields.entryCount;
  if ( (v30 & 0x80000000) == 0 )
    v29->fields.entryCount = v30 + 1;
  AssetManager_LoadWaitStatus__AddCallback(v24, callbackFunc, v28);
  v31 = 7;
LABEL_22:
  System_Collections_Generic_Queue_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_323AC1C *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
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
  int32_t v8; // w3
  __int64 v9; // x1
  System_Collections_Generic_Queue_T__o *downLoadWaitList; // x0

  if ( (byte_4A07D64 & 1) == 0 )
  {
    sub_1B686D4(&AssetManager_LoadWaitStatus_TypeInfo, callbackFunc);
    sub_1B686D4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__, v5);
    byte_4A07D64 = 1;
  }
  v6 = sub_1B68920(AssetManager_LoadWaitStatus_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_QWORD *)(v6 + 24) = callbackFunc;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v6 + 24), (int32_t)callbackFunc, v7, v8);
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
    sub_1B68930(0LL, v9);
  System_Collections_Generic_Queue_object___Enqueue(
    downLoadWaitList,
    (Il2CppObject *)v6,
    (const MethodInfo_362DEA8 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
}


void __fastcall AssetManager__AddLoadWaitStatus_37551800(
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
  if ( (byte_4A07D65 & 1) == 0 )
  {
    sub_1B686D4(&AssetManager_LoadWaitStatus_TypeInfo, info);
    this = (AssetManager_o *)sub_1B686D4(
                               &Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__,
                               v5);
    byte_4A07D65 = 1;
  }
  if ( !info
    || (v4->fields.downloadSize += info->fields.size,
        v6 = sub_1B68920(AssetManager_LoadWaitStatus_TypeInfo),
        System_Object___ctor((Il2CppObject *)v6, 0LL),
        *(_QWORD *)(v6 + 16) = info,
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v6 + 16), (int32_t)info, v7, v8),
        (this = (AssetManager_o *)v4->fields.downLoadWaitList) == 0LL) )
  {
    sub_1B68930(this, info);
  }
  System_Collections_Generic_Queue_object___Enqueue(
    (System_Collections_Generic_Queue_T__o *)this,
    (Il2CppObject *)v6,
    (const MethodInfo_362DEA8 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
}


void __fastcall AssetManager__AddLoadWaitStatus_37562192(
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
  if ( (byte_4A07D66 & 1) == 0 )
  {
    sub_1B686D4(&AssetManager_LoadWaitStatus_TypeInfo, info);
    this = (AssetManager_o *)sub_1B686D4(
                               &Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__,
                               v9);
    byte_4A07D66 = 1;
  }
  if ( !info
    || (v8->fields.downloadSize += info->fields.size,
        v10 = (AssetManager_LoadWaitStatus_o *)sub_1B68920(AssetManager_LoadWaitStatus_TypeInfo),
        AssetManager_LoadWaitStatus___ctor_37562364(v10, info, callbackFunc, resourceNames, v11),
        (this = (AssetManager_o *)v8->fields.downLoadWaitList) == 0LL) )
  {
    sub_1B68930(this, info);
  }
  System_Collections_Generic_Queue_object___Enqueue(
    (System_Collections_Generic_Queue_T__o *)this,
    (Il2CppObject *)v10,
    (const MethodInfo_362DEA8 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
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
  int32_t v10; // w3
  System_Collections_Generic_Queue_T__o *downLoadWaitList; // x0
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o **p_downLoadWaitList; // x21
  struct System_Object_array *array; // x8

  if ( (byte_4A07D59 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__, method);
    sub_1B686D4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__, v5);
    sub_1B686D4(&System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo, v6);
    byte_4A07D59 = 1;
  }
  v7 = (System_Collections_Generic_Queue_T__o *)sub_1B68920(System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v7,
    (const MethodInfo_362D8E0 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
  p_downLoadWaitList = &this->fields.downLoadWaitList;
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
LABEL_12:
    sub_1B68930(downLoadWaitList, v8);
  while ( downLoadWaitList->fields._size > 0 )
  {
    downLoadWaitList = (System_Collections_Generic_Queue_T__o *)System_Collections_Generic_Queue_object___Dequeue(
                                                                  downLoadWaitList,
                                                                  (const MethodInfo_362E038 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
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
        (const MethodInfo_362DEA8 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
    }
    downLoadWaitList = (System_Collections_Generic_Queue_T__o *)*p_downLoadWaitList;
    if ( !*p_downLoadWaitList )
      goto LABEL_12;
  }
  this->fields.downLoadWaitList = (struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)v7;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.downLoadWaitList, (int32_t)v7, v9, v10);
  this->fields.isCancelDownload = 1;
}


void __fastcall AssetManager__CancelDownloadAssetStorageAll(AssetManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *downLoadWaitList; // x0

  if ( (byte_4A07D5A & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__, method);
    byte_4A07D5A = 1;
  }
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
  this->fields.downloadSize = 0LL;
  if ( !downLoadWaitList )
    sub_1B68930(0LL, method);
  System_Collections_Generic_Queue_object___Clear(
    downLoadWaitList,
    (const MethodInfo_362DB68 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__);
}


bool __fastcall AssetManager__CheckDateVersion(System_String_o *dateVersion, const MethodInfo *method)
{
  AssetManager_c *v3; // x0
  System_String_o *assetBundleDateVersion; // x0

  if ( (byte_4A07D26 & 1) == 0 )
  {
    sub_1B686D4(&AssetManager_TypeInfo, method);
    byte_4A07D26 = 1;
  }
  v3 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v3 = AssetManager_TypeInfo;
  }
  assetBundleDateVersion = v3->static_fields->assetBundleDateVersion;
  if ( !assetBundleDateVersion )
    sub_1B68930(0LL, method);
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

  if ( (byte_4A07D63 & 1) == 0 )
  {
    sub_1B686D4(
      &Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__,
      *(_QWORD *)&type);
    sub_1B686D4(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v9);
    sub_1B686D4(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v10);
    sub_1B686D4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__, v11);
    byte_4A07D63 = 1;
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
                                                                               (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    if ( !processingAssetLoaderList )
      goto LABEL_10;
    syncRoot = (AssetData_o *)processingAssetLoaderList->fields._syncRoot;
    if ( syncRoot && AssetData__IsSame_37513076(syncRoot, type, name, v14) )
      return 1;
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
    ++v13;
    if ( !processingAssetLoaderList )
      goto LABEL_10;
  }
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.downLoadWaitList;
  if ( !processingAssetLoaderList )
LABEL_10:
    sub_1B68930(processingAssetLoaderList, *(_QWORD *)&type);
  System_Collections_Generic_Queue_object___GetEnumerator(
    &v23,
    (System_Collections_Generic_Queue_T__o *)processingAssetLoaderList,
    (const MethodInfo_362DF60 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  while ( 1 )
  {
    v16 = System_Collections_Generic_Queue_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_323AC2C *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    if ( !v16 )
      break;
    Current = System_Collections_Generic_Queue_Enumerator_object___get_Current(
                &v23,
                (const MethodInfo_323AD1C *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    if ( !Current )
      sub_1B68930(0LL, v18);
    klass = (AssetData_o *)Current[1].klass;
    if ( klass && AssetData__IsSame_37513076(klass, type, name, v19) )
    {
      v21 = 7;
      goto LABEL_19;
    }
  }
  v21 = 8;
LABEL_19:
  System_Collections_Generic_Queue_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_323AC1C *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  return v16 && v21 == 7;
}


bool __fastcall AssetManager__CheckVersion(
        System_String_o *masterVersion,
        System_String_o *dateVersion,
        const MethodInfo *method)
{
  AssetManager_c *v5; // x0
  AssetManager_c *v6; // x0

  if ( (byte_4A07D25 & 1) == 0 )
  {
    sub_1B686D4(&AssetManager_TypeInfo, dateVersion);
    byte_4A07D25 = 1;
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

  if ( (byte_4A07D75 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, method);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v3);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v4);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v5);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v6);
    sub_1B686D4(&StringLiteral_12425/*"SYSTEM"*/, v7);
    byte_4A07D75 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.assetBundleDic, 0LL) )
  {
    assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
    if ( !assetBundleDic
      || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                        assetBundleDic,
                                                                                        (const MethodInfo_3189998 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
    {
      sub_1B68930(assetBundleDic, v8);
    }
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v18,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
      (const MethodInfo_37CA0CC *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    v19 = v18;
    while ( 1 )
    {
      v10 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
              &v19,
              (const MethodInfo_3288490 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
      if ( !v10 )
        break;
      currentValue = (AssetData_o *)v19.fields._currentValue;
      if ( !v19.fields._currentValue )
        sub_1B68930(v10, v11);
      klass = v19.fields._currentValue[2].klass;
      if ( !klass )
        sub_1B68930(0LL, v11);
      if ( !System_String__Equals_61427848((System_String_o *)klass, (System_String_o *)StringLiteral_12425/*"SYSTEM"*/, 5, 0LL) )
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
      (const MethodInfo_328848C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
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
  int32_t v34; // w3
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v35; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v36; // [xsp+20h] [xbp-80h] BYREF
  uint32_t v37; // [xsp+48h] [xbp-58h] BYREF
  bool lockTaken; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_4A07D5D & 1) == 0 )
  {
    sub_1B686D4(&AssetManager_TypeInfo, isFast);
    sub_1B686D4(&CatAndMouseGame_TypeInfo, v5);
    sub_1B686D4(&Crc32_TypeInfo, v6);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, v8);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v9);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v10);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v11);
    sub_1B686D4(&System_Text_StringBuilder_TypeInfo, v12);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v13);
    sub_1B686D4(&StringLiteral_43/*"\n"*/, v14);
    sub_1B686D4(&StringLiteral_25072/*"~"*/, v15);
    byte_4A07D5D = 1;
  }
  memset(&v36, 0, sizeof(v36));
  lockTaken = 0;
  v37 = 0;
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic )
    goto LABEL_35;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         assetBundleDic,
         (const MethodInfo_3189838 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) < 1 )
    return;
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic )
    goto LABEL_35;
  Count = System_Collections_Generic_Dictionary_object__object___get_Count(
            assetBundleDic,
            (const MethodInfo_3189838 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__);
  v18 = (System_Text_StringBuilder_o *)sub_1B68920(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_60574716(v18, 60 * Count, 0LL);
  if ( !v18 )
    goto LABEL_35;
  System_Text_StringBuilder__Append_60583692(v18, 0x40u, 0LL);
  v19 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v19 = AssetManager_TypeInfo;
  }
  System_Text_StringBuilder__Append_60581364(v18, v19->static_fields->assetBundleMasterVersion, 0LL);
  if ( !System_String__IsNullOrEmpty(AssetManager_TypeInfo->static_fields->assetBundleDateVersion, 0LL) )
  {
    System_Text_StringBuilder__Append_60583692(v18, 0x2Cu, 0LL);
    v20 = AssetManager_TypeInfo;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      v20 = AssetManager_TypeInfo;
    }
    System_Text_StringBuilder__Append_60581364(v18, v20->static_fields->assetBundleDateVersion, 0LL);
    if ( !System_String__IsNullOrEmpty(AssetManager_TypeInfo->static_fields->assetBundleBuildVersion, 0LL) )
    {
      System_Text_StringBuilder__Append_60583692(v18, 0x2Cu, 0LL);
      v21 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v21 = AssetManager_TypeInfo;
      }
      System_Text_StringBuilder__Append_60581364(v18, v21->static_fields->assetBundleBuildVersion, 0LL);
    }
  }
  System_Text_StringBuilder__Append_60583692(v18, 0xAu, 0LL);
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      assetBundleDic,
                                                                                      (const MethodInfo_3189998 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
LABEL_35:
    sub_1B68930(assetBundleDic, isFast);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v35,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_37CA0CC *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v36 = v35;
  while ( 1 )
  {
    v22 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v36,
            (const MethodInfo_3288490 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v22 )
      break;
    currentValue = v36.fields._currentValue;
    if ( !v36.fields._currentValue )
      sub_1B68930(v22, v23);
    System_Text_StringBuilder__Append_60583860(v18, (int32_t)v36.fields._currentValue[2].monitor, 0LL);
    System_Text_StringBuilder__Append_60583692(v18, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_60581364(v18, (System_String_o *)currentValue[2].klass, 0LL);
    System_Text_StringBuilder__Append_60583692(v18, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_60583860(v18, (int32_t)currentValue[3].klass, 0LL);
    System_Text_StringBuilder__Append_60583692(v18, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_60584036(v18, HIDWORD(currentValue[3].klass), 0LL);
    System_Text_StringBuilder__Append_60583692(v18, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_60581364(v18, (System_String_o *)currentValue[1].monitor, 0LL);
    System_Text_StringBuilder__Append_60581364(v18, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v36,
    (const MethodInfo_328848C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  requestConfigWriteData = (Il2CppObject *)this->fields.requestConfigWriteData;
  lockTaken = 0;
  System_Threading_Monitor__Enter_62645196(requestConfigWriteData, &lockTaken, 0LL);
  v26 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v18->klass->vtable._3_ToString.method)(
                             v18,
                             v18->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_1B68930(0LL, v28);
  v29 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._19_GetBytes.method)(
                               UTF8,
                               v26,
                               UTF8->klass->vtable._20_GetBytes.methodPtr);
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  v37 = Crc32__Compute(v29, 0LL);
  v30 = System_UInt32__ToString((uint32_t)&v37, 0LL);
  v31 = System_String__Concat_61432732(
          (System_String_o *)StringLiteral_25072/*"~"*/,
          v30,
          (System_String_o *)StringLiteral_43/*"\n"*/,
          v26,
          0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v32 = CatAndMouseGame__CatGame8(v31, 0LL);
  this->fields.requestConfigWriteData = v32;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.requestConfigWriteData, (int32_t)v32, v33, v34);
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
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.writeRequestThread, 0, v4, v5);
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

  if ( (byte_4A07D53 & 1) == 0 )
  {
    sub_1B686D4(&string___TypeInfo, method);
    sub_1B686D4(&StringLiteral_8134/*"KB"*/, v4);
    sub_1B686D4(&StringLiteral_25023/*"{0}{1}"*/, v5);
    sub_1B686D4(&StringLiteral_9170/*"N2"*/, v6);
    sub_1B686D4(&StringLiteral_13212/*"TB"*/, v7);
    sub_1B686D4(&StringLiteral_2626/*"B"*/, v8);
    sub_1B686D4(&StringLiteral_8569/*"MB"*/, v9);
    sub_1B686D4(&StringLiteral_6854/*"GB"*/, v10);
    byte_4A07D53 = 1;
  }
  v11 = (System_String_o *)sub_1B6877C(string___TypeInfo, 5LL);
  if ( !v11 )
    sub_1B68930(0LL, v12);
  v15 = v11;
  if ( !LODWORD(v11[1].klass) )
    goto LABEL_14;
  v16 = StringLiteral_2626/*"B"*/;
  v11[1].monitor = (void *)StringLiteral_2626/*"B"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v11[1].monitor, v16, v13, v14);
  if ( LODWORD(v15[1].klass) <= 1 )
    goto LABEL_14;
  v19 = StringLiteral_8134/*"KB"*/;
  v15[1].fields = (System_String_Fields)StringLiteral_8134/*"KB"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v15[1].fields, v19, v17, v18);
  if ( LODWORD(v15[1].klass) <= 2 )
    goto LABEL_14;
  v22 = StringLiteral_8569/*"MB"*/;
  v15[2].klass = (System_String_c *)StringLiteral_8569/*"MB"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v15[2], v22, v20, v21);
  if ( LODWORD(v15[1].klass) <= 3 )
    goto LABEL_14;
  v25 = StringLiteral_6854/*"GB"*/;
  v15[2].monitor = (void *)StringLiteral_6854/*"GB"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v15[2].monitor, v25, v23, v24);
  if ( LODWORD(v15[1].klass) <= 4 )
    goto LABEL_14;
  v28 = StringLiteral_13212/*"TB"*/;
  v15[2].fields = (System_String_Fields)StringLiteral_13212/*"TB"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v15[2].fields, v28, v26, v27);
  for ( i = 0; i != 4; ++i )
  {
    if ( size < 1000.0 )
      break;
    size = size / 1000.0;
    *(double *)&format.klass = size;
  }
  v11 = System_Double__ToString_62129544(1000.0, &format, (const MethodInfo *)StringLiteral_9170/*"N2"*/);
  if ( i >= LODWORD(v15[1].klass) )
LABEL_14:
    sub_1B68938(v11, v12);
  return System_String__Format_61433840(
           (System_String_o *)StringLiteral_25023/*"{0}{1}"*/,
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

  if ( (byte_4A07D4D & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, method);
    sub_1B686D4(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__, v3);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v4);
    sub_1B686D4(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__, v5);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v6);
    sub_1B686D4(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__, v7);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v9);
    sub_1B686D4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__, v10);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v11);
    byte_4A07D4D = 1;
  }
  memset(&v21, 0, sizeof(v21));
  memset(&v20, 0, sizeof(v20));
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
    goto LABEL_22;
  System_Collections_Generic_Queue_object___GetEnumerator(
    (System_Collections_Generic_Queue_Enumerator_T__o *)&v19,
    downLoadWaitList,
    (const MethodInfo_362DF60 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  v21 = v19;
  while ( System_Collections_Generic_Queue_Enumerator_object___MoveNext(
            (System_Collections_Generic_Queue_Enumerator_T__o *)&v21,
            (const MethodInfo_323AC2C *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__) )
  {
    if ( !System_Collections_Generic_Queue_Enumerator_object___get_Current(
            (System_Collections_Generic_Queue_Enumerator_T__o *)&v21,
            (const MethodInfo_323AD1C *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__) )
      sub_1B68930(0LL, v13);
  }
  System_Collections_Generic_Queue_Enumerator_object___Dispose(
    (System_Collections_Generic_Queue_Enumerator_T__o *)&v21,
    (const MethodInfo_323AC1C *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
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
                                                                (const MethodInfo_3189998 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !downLoadWaitList )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v19,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)downLoadWaitList,
    (const MethodInfo_37CA0CC *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v20 = v19;
  while ( 1 )
  {
    v17 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v20,
            (const MethodInfo_3288490 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v17 )
      break;
    if ( !v20.fields._currentValue )
      sub_1B68930(v17, v18);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v20,
    (const MethodInfo_328848C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.assetResourceDic;
  if ( !downLoadWaitList
    || (downLoadWaitList = (System_Collections_Generic_Queue_T__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                      (System_Collections_Generic_Dictionary_object__object__o *)downLoadWaitList,
                                                                      (const MethodInfo_3189998 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
LABEL_22:
    sub_1B68930(downLoadWaitList, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v19,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)downLoadWaitList,
    (const MethodInfo_37CA0CC *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v20,
            (const MethodInfo_3288490 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__) )
    ;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v20,
    (const MethodInfo_328848C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
}


System_Collections_IEnumerator_o *__fastcall AssetManager__DelayLoadStart(
        AssetManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A07D69 & 1) == 0 )
  {
    sub_1B686D4(&AssetManager__DelayLoadStart_d__149_TypeInfo, method);
    byte_4A07D69 = 1;
  }
  v3 = sub_1B68920(AssetManager__DelayLoadStart_d__149_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall AssetManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  AssetManager_c *v2; // x0

  if ( (byte_4A07D1E & 1) == 0 )
  {
    sub_1B686D4(&AssetManager_TypeInfo, v1);
    byte_4A07D1E = 1;
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
        AssetManager__AddLoadWaitStatus_37562192(this, AssetData, callbackFunc, 0LL, v12);
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

  if ( (byte_4A07D54 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, attrib);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v7);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v8);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v9);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v10);
    byte_4A07D54 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      assetBundleDic,
                                                                                      (const MethodInfo_3189998 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
    sub_1B68930(assetBundleDic, attrib);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v19,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_37CA0CC *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v12 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v19,
            (const MethodInfo_3288490 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v12 )
      break;
    currentValue = (AssetData_o *)v19.fields._currentValue;
    if ( !v19.fields._currentValue )
      sub_1B68930(v12, v13);
    monitor = (int)v19.fields._currentValue[2].monitor;
    if ( monitor < 1 || monitor == HIDWORD(v19.fields._currentValue[2].monitor) )
    {
      if ( System_String__op_Equality(attrib, (System_String_o *)v19.fields._currentValue[2].klass, 0LL)
        && currentValue->fields.nowVersion != currentValue->fields.newVersion )
      {
        AssetManager__AddLoadWaitStatus_37551800(this, currentValue, v17);
      }
    }
    else
    {
      AssetManager__AddLoadWaitStatus_37551800(this, (AssetData_o *)v19.fields._currentValue, v14);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v19,
    (const MethodInfo_328848C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
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
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A07D52 & 1) == 0 )
  {
    sub_1B686D4(&AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_TypeInfo, attrib);
    byte_4A07D52 = 1;
  }
  v7 = sub_1B68920(AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 40) = attrib;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)attrib, v10, v11);
  *(_DWORD *)(v7 + 56) = loadParallelMax;
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall AssetManager__DownloadAssetStorageAttribute_37554740(
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
  if ( (byte_4A07D55 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, attribList);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v7);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v8);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v9);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v10);
    this = (AssetManager_o *)sub_1B686D4(&StringLiteral_870/*", "*/, v11);
    byte_4A07D55 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  if ( !attribList )
LABEL_33:
    sub_1B68930(this, attribList);
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
        this = (AssetManager_o *)System_String__Concat_61430728(
                                   v13,
                                   (System_String_o *)StringLiteral_870/*", "*/,
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
    sub_1B68938(this, attribList);
  }
LABEL_14:
  this = (AssetManager_o *)v6->fields.assetBundleDic;
  if ( !this )
    goto LABEL_33;
  this = (AssetManager_o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                             (System_Collections_Generic_Dictionary_object__object__o *)this,
                             (const MethodInfo_3189998 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !this )
    goto LABEL_33;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v30,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_37CA0CC *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v31 = v30;
LABEL_17:
  while ( 1 )
  {
    v17 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v31,
            (const MethodInfo_3288490 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v17 )
      break;
    currentValue = (AssetData_o *)v31.fields._currentValue;
    if ( !v31.fields._currentValue )
      sub_1B68930(v17, v18);
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
            sub_1B68938(v25, v26);
        }
        AssetManager__AddLoadWaitStatus_37551800(v6, currentValue, v27);
      }
    }
    else if ( monitor != monitor_high )
    {
      AssetManager__AddLoadWaitStatus_37551800(v6, (AssetData_o *)v31.fields._currentValue, v19);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v31,
    (const MethodInfo_328848C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  v6->fields.loadParallelMax = loadParallelMax;
  AssetManager__LoadStart(v6, v29);
}


bool __fastcall AssetManager__DownloadAssetStorage_37544092(
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
    sub_1B68930(this, 0LL);
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
        sub_1B68938(this, nameList);
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

  if ( (byte_4A07D70 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_1B686D4(
                               &Method_System_Collections_Generic_Dictionary_string__AssetData__TryGetValue__,
                               dic);
    byte_4A07D70 = 1;
  }
  value = 0LL;
  if ( !name )
    return 0LL;
  if ( !dic )
    sub_1B68930(this, dic);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)dic,
         (Il2CppObject *)name,
         &value,
         (const MethodInfo_318B374 *)Method_System_Collections_Generic_Dictionary_string__AssetData__TryGetValue__) )
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
  int32_t v25; // w3
  Il2CppObject *v26; // x1
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v32; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v33; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A07D57 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, path);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v5);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v6);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_string__Add__, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_string__ToArray__, v9);
    sub_1B686D4(&Method_System_Collections_Generic_List_string___ctor__, v10);
    sub_1B686D4(&System_Collections_Generic_List_string__TypeInfo, v11);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v12);
    sub_1B686D4(&StringLiteral_1123/*"/"*/, v13);
    byte_4A07D57 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  v14 = System_String__Concat_61419468(path, (System_String_o *)StringLiteral_1123/*"/"*/, 0LL);
  v15 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_string___ctor__);
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic )
    goto LABEL_21;
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                assetBundleDic,
                                                                                (const MethodInfo_3189998 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !assetBundleDic )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v32,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_37CA0CC *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    v18 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v33,
            (const MethodInfo_3288490 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v18 )
      break;
    currentValue = v33.fields._currentValue;
    if ( !v33.fields._currentValue )
      sub_1B68930(v18, v19);
    monitor = (System_String_o *)v33.fields._currentValue[1].monitor;
    if ( !monitor )
      sub_1B68930(0LL, v19);
    v22 = System_String__StartsWith(monitor, v14, 0LL);
    if ( v22 )
    {
      if ( !v15 )
        sub_1B68930(v22, v23);
      v26 = (Il2CppObject *)currentValue[1].monitor;
      items = v15->fields._items;
      v28 = Method_System_Collections_Generic_List_string__Add__;
      ++v15->fields._version;
      if ( !items )
        sub_1B68930(v22, v26);
      size = v15->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          v26,
          *(const MethodInfo_34BC278 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v15->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v26;
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)v26, v24, v25);
      }
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v33,
    (const MethodInfo_328848C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  if ( !v15 )
LABEL_21:
    sub_1B68930(assetBundleDic, v16);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v15,
                                  (const MethodInfo_34BDDD0 *)Method_System_Collections_Generic_List_string__ToArray__);
}


AssetData_array *__fastcall AssetManager__GetAssetStorage_37547632(
        AssetManager_o *this,
        System_String_array *nameList,
        const MethodInfo *method)
{
  AssetManager_o *v4; // x20
  const MethodInfo *v5; // x3
  __int64 v6; // x8
  AssetData_array *v7; // x21
  unsigned __int64 v8; // x24
  ServantStatusBattleListViewItem_o *p_isUseDebugStatus; // x22
  System_String_o *v10; // x2
  AssetManager_o *v11; // x23
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v15; // x0

  v4 = this;
  if ( (byte_4A07D71 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_1B686D4(&AssetData___TypeInfo, nameList);
    byte_4A07D71 = 1;
  }
  if ( !nameList )
LABEL_17:
    sub_1B68930(this, nameList);
  this = (AssetManager_o *)sub_1B6877C(AssetData___TypeInfo, nameList->max_length);
  v6 = *(_QWORD *)&nameList->max_length;
  v7 = (AssetData_array *)this;
  if ( (int)v6 >= 1 )
  {
    v8 = 0LL;
    p_isUseDebugStatus = (ServantStatusBattleListViewItem_o *)&this->fields.isUseDebugStatus;
    while ( v8 < (unsigned int)v6 )
    {
      v10 = nameList->m_Items[v8];
      if ( v10 )
      {
        this = (AssetManager_o *)AssetManager__GetAssetData(this, v4->fields.assetBundleDic, v10, v5);
        if ( this )
        {
          v11 = this;
          if ( this->fields.assetBundleReleaseDic )
          {
            if ( !v7 )
              goto LABEL_17;
            this = (AssetManager_o *)sub_1B68810(this, v7->obj.klass->_1.element_class);
            if ( !this )
            {
              v15 = sub_1B68954(0LL);
              sub_1B687FC(v15, 0LL);
            }
            if ( v8 >= v7->max_length )
              break;
            p_isUseDebugStatus->klass = (ServantStatusBattleListViewItem_c *)v11;
            sub_1B68678(p_isUseDebugStatus, (int32_t)v11, v12, v13);
          }
        }
      }
      LODWORD(v6) = nameList->max_length;
      ++v8;
      p_isUseDebugStatus = (ServantStatusBattleListViewItem_o *)((char *)p_isUseDebugStatus + 8);
      if ( (__int64)v8 >= (int)v6 )
        return v7;
    }
    sub_1B68938(this, nameList);
  }
  return v7;
}


bool __fastcall AssetManager__GetAssetStorage_37548088(
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


bool __fastcall AssetManager__GetAsset_37538356(
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


bool __fastcall AssetManager__GetAsset_37538644(
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


AssetData_o *__fastcall AssetManager__GetAsset_37563260(
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

  if ( (byte_4A07D28 & 1) == 0 )
  {
    sub_1B686D4(&AssetManager_TypeInfo, v1);
    byte_4A07D28 = 1;
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

  if ( (byte_4A07D56 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v3);
    byte_4A07D56 = 1;
  }
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
LABEL_8:
    sub_1B68930(processingAssetLoaderList, method);
  downloadSize = this->fields.downloadSize;
  v6 = 0;
  while ( v6 < processingAssetLoaderList->fields._size )
  {
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               processingAssetLoaderList,
                                                                               v6,
                                                                               (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
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

  if ( (byte_4A07D27 & 1) == 0 )
  {
    sub_1B686D4(&AssetManager_TypeInfo, v1);
    byte_4A07D27 = 1;
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
  int32_t v5; // w3

  if ( (byte_4A07D5B & 1) == 0 )
  {
    sub_1B686D4(&AssetManager__InitCR_d__131_TypeInfo, method);
    byte_4A07D5B = 1;
  }
  v3 = sub_1B68920(AssetManager__InitCR_d__131_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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

  if ( (byte_4A07D4F & 1) == 0 )
  {
    sub_1B686D4(&AndroidUtil_TypeInfo, method);
    sub_1B686D4(&AssetManager_TypeInfo, v3);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, v6);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v7);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v8);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v9);
    sub_1B686D4(&Method_System_Collections_Generic_List_AssetLoader__Clear__, v10);
    sub_1B686D4(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v11);
    sub_1B686D4(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v12);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v13);
    sub_1B686D4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__, v14);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v15);
    byte_4A07D4F = 1;
  }
  memset(&i, 0, sizeof(i));
  initCRW = this->fields.initCRW;
  if ( initCRW )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, initCRW, 0LL);
    this->fields.initCRW = 0LL;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.initCRW, 0, v17, v18);
  }
  assetBundleReleaseDic = this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_44;
  System_Collections_Generic_Dictionary_object__object___Clear(
    (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
    (const MethodInfo_3189CF0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
  assetBundleReleaseDic = this->fields.assetBundleDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_44;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
         (const MethodInfo_3189838 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) < 1 )
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
                              (const MethodInfo_3189998 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v58,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
      (const MethodInfo_37CA0CC *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    v20 = 0;
    for ( i = v58;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &i,
            (const MethodInfo_3288490 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
          v20 |= AssetData__ReleaseData((AssetData_o *)i.fields._currentValue, v21) )
    {
      if ( !i.fields._currentValue )
        sub_1B68930(0LL, v21);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
      &i,
      (const MethodInfo_328848C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    assetBundleReleaseDic = this->fields.assetBundleDic;
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    System_Collections_Generic_Dictionary_object__object___Clear(
      (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
      (const MethodInfo_3189CF0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
    v22 = v20 != 0;
  }
  assetBundleReleaseDic = this->fields.assetResourceDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_44;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
         (const MethodInfo_3189838 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) >= 1 )
  {
    assetBundleReleaseDic = this->fields.assetResourceDic;
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    assetBundleReleaseDic = System_Collections_Generic_Dictionary_object__object___get_Values(
                              (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
                              (const MethodInfo_3189998 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v58,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
      (const MethodInfo_37CA0CC *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    for ( i = v58;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &i,
            (const MethodInfo_3288490 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
          v22 |= AssetData__ReleaseData((AssetData_o *)i.fields._currentValue, v24) )
    {
      if ( !i.fields._currentValue )
        sub_1B68930(0LL, v24);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
      &i,
      (const MethodInfo_328848C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    assetBundleReleaseDic = this->fields.assetResourceDic;
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    System_Collections_Generic_Dictionary_object__object___Clear(
      (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
      (const MethodInfo_3189CF0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
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
               (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69171816((UnityEngine_Object_o *)Item, 0LL);
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
    sub_1B68930(assetBundleReleaseDic, initCRW);
  System_Collections_Generic_Queue_object___Clear(
    (System_Collections_Generic_Queue_T__o *)assetBundleReleaseDic,
    (const MethodInfo_362DB68 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__);
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
  sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->cachePathName, (int32_t)v34, v31, v32);
  v36 = AssetManager_TypeInfo->static_fields;
  cachePathName = v36->cachePathName;
  configFileName = v36->configFileName;
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  v39 = AndroidUtil__ConvertFileNameIfNeed(configFileName, 0LL);
  v40 = System_String__Concat_61419468(cachePathName, v39, 0LL);
  v41 = AssetManager_TypeInfo->static_fields;
  v41->cacheListFileName = v40;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v41->cacheListFileName, (int32_t)v40, v42, v43);
  v44 = AssetManager_TypeInfo->static_fields;
  v45 = v44->cachePathName;
  v46 = AndroidUtil__ConvertFileNameIfNeed(v44->createConfigFileName, 0LL);
  v47 = System_String__Concat_61419468(v45, v46, 0LL);
  v48 = AssetManager_TypeInfo->static_fields;
  v48->createCacheListFileName = v47;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v48->createCacheListFileName, (int32_t)v47, v49, v50);
  v51 = AssetManager_TypeInfo->static_fields;
  v52 = v51->cachePathName;
  v53 = AndroidUtil__ConvertFileNameIfNeed(v51->backConfigFileName, 0LL);
  v54 = System_String__Concat_61419468(v52, v53, 0LL);
  v55 = AssetManager_TypeInfo->static_fields;
  v55->backCacheListFileName = v54;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v55->backCacheListFileName, (int32_t)v54, v56, v57);
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
    sub_1B68678((ServantStatusBattleListViewItem_o *)p_initCRW, (int32_t)inited, v5, v6);
    UnityEngine_MonoBehaviour__StartCoroutine_69157088((UnityEngine_MonoBehaviour_o *)this, this->fields.initCRW, 0LL);
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

  if ( (byte_4A07D6C & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__, name);
    byte_4A07D6C = 1;
  }
  assetBundleDic = this->fields.assetBundleDic;
  if ( !assetBundleDic )
    sub_1B68930(0LL, name);
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)assetBundleDic,
           (Il2CppObject *)name,
           (const MethodInfo_3189D5C *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__);
}


bool __fastcall AssetManager__IsExistAssetStorage_37540536(
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
    sub_1B68930(this, 0LL);
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
        sub_1B68938(this, nameList);
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


bool __fastcall AssetManager__IsNeedDownload_37541084(
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
    sub_1B68930(this, 0LL);
  v4 = *(_QWORD *)&nameList->max_length;
  v6 = (int)v4 > 0;
  if ( (int)v4 >= 1 )
  {
    v7 = this;
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)v4 )
        sub_1B68938(this, nameList);
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
  System_IO_StreamWriter_o *v37; // x21
  __int64 v38; // x0
  __int64 v39; // x1
  AssetManager_c *v40; // x0
  AssetManager_c *v41; // x0
  AssetManager_c *v42; // x0
  AssetManager_c *v43; // x0
  int32_t v44; // w1
  int32_t v45; // w2
  int32_t v46; // w3
  __int64 v47; // x0
  System_IO_IOException_o *v48; // x20
  System_String_o *v49; // x0
  __int64 v50; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v51; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v52; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_4A07D60 & 1) == 0 )
  {
    sub_1B686D4(&Method_AssetManager_OnClickRetryDialog__, method);
    sub_1B686D4(&AssetManager_TypeInfo, v3);
    sub_1B686D4(&ErrorDialog_ClickDelegate_TypeInfo, v4);
    sub_1B686D4(&CommonServicePluginScript_TypeInfo, v5);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, v7);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v8);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v9);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v10);
    sub_1B686D4(&LocalizationManager_TypeInfo, v11);
    sub_1B686D4(&ManagementManager_TypeInfo, v12);
    sub_1B686D4(&ManagerConfig_TypeInfo, v13);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_1B686D4(&System_IO_StreamWriter_TypeInfo, v15);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v16);
    sub_1B686D4(&StringLiteral_2137/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, v17);
    sub_1B686D4(&StringLiteral_15872/*"[FFFF80]Download error for debug"*/, v18);
    sub_1B686D4(&StringLiteral_11407/*"SCRIPT"*/, v19);
    sub_1B686D4(&StringLiteral_2138/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, v20);
    sub_1B686D4(&StringLiteral_1/*""*/, v21);
    byte_4A07D60 = 1;
  }
  memset(&v52, 0, sizeof(v52));
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_49;
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                       assetBundleReleaseDic,
                                                                                       (const MethodInfo_3189998 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !assetBundleReleaseDic )
    goto LABEL_49;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v51,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
    (const MethodInfo_37CA0CC *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v23 = 0;
  v52 = v51;
  while ( 1 )
  {
    v24 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v52,
            (const MethodInfo_3288490 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v24 )
      break;
    if ( !v52.fields._currentValue )
      sub_1B68930(v24, v25);
    if ( !HIDWORD(v52.fields._currentValue[5].klass) )
    {
      if ( v52.fields._currentValue[4].monitor )
        v23 |= AssetData__ReleaseData((AssetData_o *)v52.fields._currentValue, v25);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v52,
    (const MethodInfo_328848C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  if ( (v23 & 1) != 0 )
    AssetManager__RequestUnloadUnusedAssets(this, 0LL, v26);
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
LABEL_49:
    sub_1B68930(assetBundleReleaseDic, method);
  System_Collections_Generic_Dictionary_object__object___Clear(
    assetBundleReleaseDic,
    (const MethodInfo_3189CF0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
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
          v47 = sub_1B686E8(&System_IO_IOException_TypeInfo);
          v48 = (System_IO_IOException_o *)sub_1B68920(v47);
          v49 = (System_String_o *)sub_1B686E8(&StringLiteral_5303/*"Disk full"*/);
          System_IO_IOException___ctor_61559712(v48, v49, 0LL);
          v50 = sub_1B686E8(&Method_AssetManager_LateUpdate__);
          sub_1B687FC(v48, v50);
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
      v37 = (System_IO_StreamWriter_o *)sub_1B68920(System_IO_StreamWriter_TypeInfo);
      System_IO_StreamWriter___ctor_61588604(v37, createCacheListFileName, 0, UTF8, 0LL);
      if ( !v37 )
        sub_1B68930(v38, v39);
      ((void (__fastcall *)(System_IO_StreamWriter_o *, struct System_String_o *, Il2CppMethodPointer))v37->klass->vtable._16_Write.method)(
        v37,
        this->fields.requestConfigWriteData,
        v37->klass->vtable._17_Write.methodPtr);
      ((void (__fastcall *)(System_IO_StreamWriter_o *, Il2CppMethodPointer))v37->klass->vtable._8_Close.method)(
        v37,
        v37->klass->vtable._9_Dispose.methodPtr);
      if ( System_IO_File__Exists(AssetManager_TypeInfo->static_fields->backCacheListFileName, 0LL) )
      {
        v40 = AssetManager_TypeInfo;
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v40 = AssetManager_TypeInfo;
        }
        System_IO_File__Delete(v40->static_fields->backCacheListFileName, 0LL);
      }
      v41 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v41 = AssetManager_TypeInfo;
      }
      if ( System_IO_File__Exists(v41->static_fields->cacheListFileName, 0LL) )
      {
        v42 = AssetManager_TypeInfo;
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v42 = AssetManager_TypeInfo;
        }
        System_IO_File__Move(v42->static_fields->cacheListFileName, v42->static_fields->backCacheListFileName, 0LL);
      }
      v43 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v43 = AssetManager_TypeInfo;
      }
      System_IO_File__Move(v43->static_fields->createCacheListFileName, v43->static_fields->cacheListFileName, 0LL);
      v44 = (int)StringLiteral_1/*""*/;
      this->fields.requestConfigWriteData = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.requestConfigWriteData, v44, v45, v46);
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
  if ( (byte_4A07D72 & 1) == 0 )
  {
    sub_1B686D4(&AssetData_TypeInfo, name);
    this = (AssetManager_o *)sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__AssetData__Add__, v6);
    byte_4A07D72 = 1;
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
    v9 = (AssetData_o *)sub_1B68920(AssetData_TypeInfo);
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
      sub_1B68930(assetResourceDic, v12);
    System_Collections_Generic_Dictionary_object__object___Add(
      assetResourceDic,
      (Il2CppObject *)name,
      (Il2CppObject *)v9,
      (const MethodInfo_3189B68 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
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
  if ( (byte_4A07D6D & 1) == 0 )
  {
    this = (AssetManager_o *)sub_1B686D4(
                               &Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__,
                               name);
    byte_4A07D6D = 1;
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
    sub_1B68930(0LL, v10);
  System_Collections_Generic_Dictionary_object__object___Remove(
    assetBundleReleaseDic,
    (Il2CppObject *)name,
    (const MethodInfo_318B064 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
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
      AssetManager__AddLoadWaitStatus_37562192(v8, v20, callbackFunc, 0LL, v19);
      v8->fields.loadParallelMax = loadParallelMax;
      AssetManager__LoadStart(v8, v22);
    }
  }
LABEL_19:
  LOBYTE(v17) = 1;
  return (char)v17;
}


bool __fastcall AssetManager__LoadAssetStorage_37546284(
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
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  System_Collections_Generic_List_object__o *v25; // x23
  System_Collections_Generic_List_object__o **v26; // x22
  int32_t v27; // w2
  int32_t v28; // w3
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
  int32_t v40; // w3
  const MethodInfo *v41; // x1

  if ( (byte_4A07D6F & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_string__AddRange__, nameList);
    sub_1B686D4(&Method_System_Collections_Generic_List_string__IndexOf__, v9);
    sub_1B686D4(&Method_System_Collections_Generic_List_string__RemoveRange__, v10);
    sub_1B686D4(&Method_System_Collections_Generic_List_string__Remove__, v11);
    sub_1B686D4(&Method_System_Collections_Generic_List_string___ctor__, v12);
    sub_1B686D4(&Method_System_Collections_Generic_List_string__get_Count__, v13);
    sub_1B686D4(&System_Collections_Generic_List_string__TypeInfo, v14);
    sub_1B686D4(&AssetLoader_LoadEndDataHandler_TypeInfo, v15);
    sub_1B686D4(&Method_AssetManager___c__DisplayClass169_0__LoadAssetStorage_b__0__, v16);
    sub_1B686D4(&AssetManager___c__DisplayClass169_0_TypeInfo, v17);
    byte_4A07D6F = 1;
  }
  v18 = sub_1B68920(AssetManager___c__DisplayClass169_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_31;
  *(_QWORD *)(v18 + 40) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v18 + 40), (int32_t)this, v21, v22);
  *(_QWORD *)(v18 + 48) = callbackFunc;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v18 + 48), (int32_t)callbackFunc, v23, v24);
  *(_DWORD *)(v18 + 56) = loadParallelMax;
  v25 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v18 + 24) = v25;
  v26 = (System_Collections_Generic_List_object__o **)(v18 + 24);
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v18 + 24), (int32_t)v25, v27, v28);
  AssetStorage = *(System_Collections_Generic_List_object__o **)(v18 + 24);
  if ( !AssetStorage
    || (System_Collections_Generic_List_object___AddRange(
          AssetStorage,
          (System_Collections_Generic_IEnumerable_T__o *)nameList,
          (const MethodInfo_34BC484 *)Method_System_Collections_Generic_List_string__AddRange__),
        *(_DWORD *)(v18 + 16) = 0,
        *(_BYTE *)(v18 + 32) = 0,
        !nameList) )
  {
LABEL_31:
    sub_1B68930(AssetStorage, v20);
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
        sub_1B68938(AssetStorage, v20);
      v36 = nameList->m_Items[v33];
      if ( !v36 )
      {
        AssetStorage = *v26;
        if ( !*v26 )
          goto LABEL_31;
        AssetStorage = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Remove(
                                                                      AssetStorage,
                                                                      0LL,
                                                                      (const MethodInfo_34BD7A0 *)Method_System_Collections_Generic_List_string__Remove__);
        goto LABEL_23;
      }
      if ( !v35 )
        goto LABEL_22;
      v37 = *v34;
      if ( !*v34 )
      {
        v37 = (AssetLoader_LoadEndDataHandler_o *)sub_1B68920(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v37,
          (Il2CppObject *)v18,
          Method_AssetManager___c__DisplayClass169_0__LoadAssetStorage_b__0__,
          v38);
        *(_QWORD *)(v18 + 64) = v37;
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v18 + 64), (int32_t)v37, v39, v40);
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
                                                                  (const MethodInfo_34BCF18 *)Method_System_Collections_Generic_List_string__IndexOf__);
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
        (const MethodInfo_34BDAE4 *)Method_System_Collections_Generic_List_string__RemoveRange__);
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


bool __fastcall AssetManager__LoadAsset_37563016(
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

  if ( (byte_4A07D4E & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v1);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_4A07D4E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  if ( BYTE2(Instance[3].klass) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( Instance )
    {
      monitor = Instance[6].monitor;
      if ( monitor )
        return monitor[6] > 0;
    }
LABEL_9:
    sub_1B68930(Instance, v4);
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
  int32_t v28; // w2
  int32_t v29; // w3
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

  if ( (byte_4A07D6E & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__, name);
    sub_1B686D4(&Method_System_Collections_Generic_List_string__AddRange__, v11);
    sub_1B686D4(&Method_System_Collections_Generic_List_string__Add__, v12);
    sub_1B686D4(&Method_System_Collections_Generic_List_string__ToArray__, v13);
    sub_1B686D4(&Method_System_Collections_Generic_List_string___ctor__, v14);
    sub_1B686D4(&Method_System_Collections_Generic_List_string__get_Count__, v15);
    sub_1B686D4(&System_Collections_Generic_List_string__TypeInfo, v16);
    byte_4A07D6E = 1;
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
          (const MethodInfo_318B064 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
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
        v27 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_string__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v27,
          (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_string___ctor__);
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
                  *(const MethodInfo_34BC278 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
              }
              else
              {
                v39 = &items->obj.klass + size;
                v27->fields._size = size + 1;
                v39[4] = (Il2CppClass *)v34;
                sub_1B68678((ServantStatusBattleListViewItem_o *)(v39 + 4), (int32_t)v34, v28, v29);
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
              assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)System_String__Equals_61427784(
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
            sub_1B68938(assetBundleReleaseDic, v19);
          }
LABEL_32:
          v26 = v46;
          if ( !v27 )
LABEL_45:
            sub_1B68930(assetBundleReleaseDic, v19);
        }
        else
        {
          if ( !v27 )
            goto LABEL_45;
          System_Collections_Generic_List_object___AddRange(
            v27,
            (System_Collections_Generic_IEnumerable_T__o *)resourceNames,
            (const MethodInfo_34BC484 *)Method_System_Collections_Generic_List_string__AddRange__);
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
                                         (const MethodInfo_34BDDD0 *)Method_System_Collections_Generic_List_string__ToArray__);
          AssetManager__AddLoadWaitStatus_37562192(this, v26, callbackFunc, v42, v43);
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
  int32_t v20; // w3
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *downLoadWaitList; // x8
  struct System_Collections_Generic_List_AssetLoader__o *v24; // x8
  Il2CppObject *v25; // x0
  __int64 v26; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x22
  __int64 v30; // x8
  System_String_o **v31; // x8
  __int64 v32; // x8
  Il2CppObject *v33; // x0
  Il2CppObject **v34; // x22
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w2
  int32_t v38; // w3
  __int64 v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  __int64 v42; // x8
  int32_t v43; // w2
  int32_t v44; // w3
  __int64 v45; // x1
  const MethodInfo *v46; // x2
  AssetLoader_LoadEndDataHandler_o *v47; // x1
  __int64 v48; // x19
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A07D68 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__Dispose__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__MoveNext__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__get_Current__, v5);
    sub_1B686D4(&Method_UnityEngine_GameObject_AddComponent_AssetLoader___, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_AssetLoader__Add__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_AssetLoader__GetEnumerator__, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v9);
    sub_1B686D4(&NetworkManager_TypeInfo, v10);
    sub_1B686D4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__, v11);
    sub_1B686D4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__, v12);
    sub_1B686D4(&Method_AssetManager___c__DisplayClass148_0__LoadStart_b__0__, v13);
    sub_1B686D4(&AssetManager___c__DisplayClass148_0_TypeInfo, v14);
    sub_1B686D4(&StringLiteral_5239/*"DelayLoadStart"*/, v15);
    byte_4A07D68 = 1;
  }
  memset(&v50, 0, sizeof(v50));
  v16 = sub_1B68920(AssetManager___c__DisplayClass148_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_49;
  *(_QWORD *)(v16 + 16) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v16 + 16), (int32_t)this, v19, v20);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A0456B )
  {
    sub_1B686D4(&NetworkManager_TypeInfo, v18);
    byte_4A0456B = 1;
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v49,
      (System_Collections_Generic_List_object__o *)processingAssetLoaderList,
      (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_AssetLoader__GetEnumerator__);
    v50 = v49;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v50,
              (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_AssetLoader__MoveNext__) )
      ;
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v50,
      (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_AssetLoader__Dispose__);
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
    (System_String_o *)StringLiteral_5239/*"DelayLoadStart"*/,
    0LL);
  processingAssetLoaderList = this->fields.downLoadWaitList;
  if ( !processingAssetLoaderList
    || (v25 = System_Collections_Generic_Queue_object___Dequeue(
                (System_Collections_Generic_Queue_T__o *)processingAssetLoaderList,
                (const MethodInfo_362E038 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__),
        *(_QWORD *)(v16 + 24) = v25,
        v26 = v16 + 24,
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v16 + 24), (int32_t)v25, v27, v28),
        (v29 = *(_QWORD *)(v16 + 24)) == 0) )
  {
LABEL_49:
    sub_1B68930(processingAssetLoaderList, v18);
  }
  if ( (byte_4A07D7A & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_1/*""*/, v18);
    byte_4A07D7A = 1;
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
              (const MethodInfo_2E98868 *)Method_UnityEngine_GameObject_AddComponent_AssetLoader___);
      *(_QWORD *)(v16 + 32) = v33;
      v34 = (Il2CppObject **)(v16 + 32);
      sub_1B68678((ServantStatusBattleListViewItem_o *)(v16 + 32), (int32_t)v33, v35, v36);
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
              *(const MethodInfo_34BC278 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          }
          else
          {
            v42 = v39 + 8 * v41;
            *((_DWORD *)processingAssetLoaderList + 6) = v41 + 1;
            *(_QWORD *)(v42 + 32) = v18;
            sub_1B68678((ServantStatusBattleListViewItem_o *)(v42 + 32), (int32_t)v18, v37, v38);
          }
          if ( *(_QWORD *)v26 )
          {
            processingAssetLoaderList = *v34;
            if ( *v34 )
            {
              v45 = *(_QWORD *)(*(_QWORD *)v26 + 16LL);
              *((_QWORD *)processingAssetLoaderList + 4) = v45;
              sub_1B68678((ServantStatusBattleListViewItem_o *)((char *)processingAssetLoaderList + 32), v45, v43, v44);
              if ( *(_QWORD *)v26 )
              {
                processingAssetLoaderList = *v34;
                if ( *v34 )
                {
                  v47 = *(AssetLoader_LoadEndDataHandler_o **)(*(_QWORD *)v26 + 32LL);
                  if ( v47 )
                    AssetLoader__add_endCallback2((AssetLoader_o *)processingAssetLoaderList, v47, v46);
                  v48 = sub_1B68920(System_Action_TypeInfo);
                  System_Action___ctor(
                    (System_Action_o *)v48,
                    (Il2CppObject *)v16,
                    Method_AssetManager___c__DisplayClass148_0__LoadStart_b__0__,
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

  if ( (byte_4A07D5C & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Application_TypeInfo, isDecide);
    sub_1B686D4(&ManagementManager_TypeInfo, v5);
    sub_1B686D4(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v6);
    byte_4A07D5C = 1;
  }
  if ( isDecide )
  {
    this->fields.isErrorDialog = 0;
  }
  else
  {
    if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    if ( !byte_4A07CF2 )
    {
      sub_1B686D4(&ManagementManager_TypeInfo, isDecide);
      byte_4A07CF2 = 1;
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
      UnityEngine_Application__Quit_68965772(0LL);
    }
    else
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
      if ( !Instance )
        sub_1B68930(0LL, v9);
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
  if ( (byte_4A07D6A & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_AssetLoader__RemoveAt__, loader);
    sub_1B686D4(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v6);
    this = (AssetManager_o *)sub_1B686D4(&UnityEngine_Object_TypeInfo, v7);
    byte_4A07D6A = 1;
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
             (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
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
    sub_1B68930(this, loader);
  }
  System_Collections_Generic_List_object___RemoveAt(
    (System_Collections_Generic_List_object__o *)this,
    v9,
    (const MethodInfo_34BDA4C *)Method_System_Collections_Generic_List_AssetLoader__RemoveAt__);
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

  if ( (byte_4A07D6B & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__, *(_QWORD *)&type);
    byte_4A07D6B = 1;
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
        sub_1B68930(0LL, v11);
      System_Collections_Generic_Dictionary_object__object___Remove(
        (System_Collections_Generic_Dictionary_object__object__o *)assetResourceDic,
        (Il2CppObject *)v9->fields.name,
        (const MethodInfo_318B064 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
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
  if ( (byte_4A07D73 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_1B686D4(
                               &Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__,
                               name);
    byte_4A07D73 = 1;
  }
  AssetData = AssetManager__GetAssetData(this, v5->fields.assetResourceDic, name, v3);
  if ( AssetData && AssetData__RemoveEntry(AssetData, v7) )
  {
    assetResourceDic = (System_Collections_Generic_Dictionary_object__object__o *)v5->fields.assetResourceDic;
    if ( !assetResourceDic )
      sub_1B68930(0LL, v8);
    System_Collections_Generic_Dictionary_object__object___Remove(
      assetResourceDic,
      (Il2CppObject *)name,
      (const MethodInfo_318B064 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
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


void __fastcall AssetManager__ReleaseAssetStorage_37548596(
        AssetManager_o *this,
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v3; // x8
  unsigned __int64 v6; // x21

  if ( !nameList )
    sub_1B68930(this, 0LL);
  v3 = *(_QWORD *)&nameList->max_length;
  if ( (int)v3 >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v3 )
        sub_1B68938(this, nameList);
      AssetManager__ReleaseAssetStorage(this, nameList->m_Items[v6], method);
      LODWORD(v3) = nameList->max_length;
      ++v6;
    }
    while ( (__int64)v6 < (int)v3 );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetManager__ReleaseAsset_37539328(
        AssetManager_o *this,
        int32_t type,
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v4; // x8
  unsigned __int64 v8; // x22

  if ( !nameList )
    sub_1B68930(this, type);
  v4 = *(_QWORD *)&nameList->max_length;
  if ( (int)v4 >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)v4 )
        sub_1B68938(this, *(_QWORD *)&type);
      AssetManager__ReleaseAsset(this, type, nameList->m_Items[v8], method);
      LODWORD(v4) = nameList->max_length;
      ++v8;
    }
    while ( (__int64)v8 < (int)v4 );
  }
}


void __fastcall AssetManager__ReleaseAsset_37539628(
        AssetManager_o *this,
        AssetData_o *assetInfo,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( assetInfo )
    AssetManager__ReleaseAsset(this, assetInfo->fields.type, assetInfo->fields.name, v3);
}


void __fastcall AssetManager__ReleaseAsset_37539828(
        AssetManager_o *this,
        AssetData_array *assetInfoList,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v4; // x8
  unsigned __int64 v7; // x21
  AssetData_o *v8; // x8

  if ( !assetInfoList )
    sub_1B68930(this, 0LL);
  v4 = *(_QWORD *)&assetInfoList->max_length;
  if ( (int)v4 >= 1 )
  {
    v7 = 0LL;
    do
    {
      if ( v7 >= (unsigned int)v4 )
        sub_1B68938(this, assetInfoList);
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
  if ( (byte_4A07D67 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__AssetData__Add__, info);
    this = (AssetManager_o *)sub_1B686D4(
                               &Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__,
                               v5);
    byte_4A07D67 = 1;
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
            (const MethodInfo_3189D5C *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__) )
    {
      this = (AssetManager_o *)v4->fields.assetBundleReleaseDic;
      if ( this )
      {
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)this,
          (Il2CppObject *)info->fields.name,
          (Il2CppObject *)info,
          (const MethodInfo_3189B68 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
        return;
      }
LABEL_11:
      sub_1B68930(this, info);
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
    UnityEngine_MonoBehaviour__StartCoroutine_69157088((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
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

  if ( (byte_4A07D58 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, path);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v5);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v6);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v7);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v8);
    sub_1B686D4(&StringLiteral_1123/*"/"*/, v9);
    byte_4A07D58 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  Values = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)System_String__Concat_61419468(
                                                                                      path,
                                                                                      (System_String_o *)StringLiteral_1123/*"/"*/,
                                                                                      0LL);
  assetBundleDic = this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (v13 = (System_String_o *)Values,
        (Values = System_Collections_Generic_Dictionary_object__object___get_Values(
                    (System_Collections_Generic_Dictionary_object__object__o *)assetBundleDic,
                    (const MethodInfo_3189998 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL) )
  {
    sub_1B68930(Values, v11);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v18,
    Values,
    (const MethodInfo_37CA0CC *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v18,
            (const MethodInfo_3288490 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v14 )
      break;
    currentValue = v18.fields._currentValue;
    if ( !v18.fields._currentValue )
      sub_1B68930(v14, v15);
    monitor = (System_String_o *)v18.fields._currentValue[1].monitor;
    if ( !monitor )
      sub_1B68930(0LL, v15);
    if ( System_String__StartsWith(monitor, v13, 0LL) )
      LODWORD(currentValue[2].monitor) = 0;
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v18,
    (const MethodInfo_328848C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
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

  if ( (byte_4A07D1C & 1) == 0 )
  {
    sub_1B686D4(&AssetManager_TypeInfo, v1);
    sub_1B686D4(&ManagerConfig_TypeInfo, v2);
    byte_4A07D1C = 1;
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

  if ( (byte_4A07D1D & 1) == 0 )
  {
    sub_1B686D4(&AssetManager_TypeInfo, v1);
    sub_1B686D4(&ManagerConfig_TypeInfo, v2);
    byte_4A07D1D = 1;
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

  if ( (byte_4A07D50 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, method);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v3);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v4);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v5);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v6);
    byte_4A07D50 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      assetBundleDic,
                                                                                      (const MethodInfo_3189998 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
    sub_1B68930(assetBundleDic, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v11,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_37CA0CC *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v11,
           (const MethodInfo_3288490 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v8 )
      break;
    if ( !v11.fields._currentValue )
      sub_1B68930(v8, v9);
    if ( LODWORD(v11.fields._currentValue[2].monitor) != HIDWORD(v11.fields._currentValue[2].monitor) )
      AssetManager__AddLoadWaitStatus_37551800(this, (AssetData_o *)v11.fields._currentValue, v10);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v11,
    (const MethodInfo_328848C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
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
  int32_t v9; // w3
  __int64 v10; // x1

  if ( (byte_4A07D5E & 1) == 0 )
  {
    sub_1B686D4(&Method_AssetManager_ConfigWriteRequestThread__, method);
    sub_1B686D4(&System_Threading_ThreadStart_TypeInfo, v3);
    sub_1B686D4(&System_Threading_Thread_TypeInfo, v4);
    byte_4A07D5E = 1;
  }
  this->fields.reserveWriteRequest = 0;
  v5 = (System_Threading_ThreadStart_o *)sub_1B68920(System_Threading_ThreadStart_TypeInfo);
  System_Threading_ThreadStart___ctor(v5, (Il2CppObject *)this, Method_AssetManager_ConfigWriteRequestThread__, 0LL);
  v6 = (System_Threading_Thread_o *)sub_1B68920(System_Threading_Thread_TypeInfo);
  System_Threading_Thread___ctor(v6, v5, 0LL);
  this->fields.writeRequestThread = v6;
  p_writeRequestThread = &this->fields.writeRequestThread;
  sub_1B68678((ServantStatusBattleListViewItem_o *)p_writeRequestThread, (int32_t)v6, v8, v9);
  if ( !*p_writeRequestThread )
    sub_1B68930(0LL, v10);
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
        const MethodInfo_2E2C69C *method)
{
  __int64 v8; // x1
  AssetData_o *AssetStorage; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *Object_object__48415484; // x1
  Il2CppObject *v13; // x19

  if ( !method->rgctx_data )
  {
    sub_1B686D4(&AssetManager_TypeInfo, path);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v8);
    if ( !method->rgctx_data )
      sub_1BBA60C(method);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0LL);
  if ( AssetStorage )
    Object_object__48415484 = AssetData__GetObject_object__48415484(
                                AssetStorage,
                                name,
                                (const MethodInfo_2E2C2FC *)method->rgctx_data->_2_AssetData_GetObject_T_);
  else
    Object_object__48415484 = 0LL;
  *data = Object_object__48415484;
  sub_1B68678((ServantStatusBattleListViewItem_o *)data, (int32_t)Object_object__48415484, v10, v11);
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
  Il2CppObject *Object_object__48415484; // x20
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *Component_object; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  UnityEngine_Object_o *v18; // x19

  if ( (byte_4A07D74 & 1) == 0 )
  {
    sub_1B686D4(&Method_AssetData_GetObject_GameObject____75755192, name);
    sub_1B686D4(&AssetManager_TypeInfo, v7);
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v8);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v9);
    byte_4A07D74 = 1;
  }
  *atlas = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)atlas, 0, (int32_t)atlasName, (int32_t)method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(name, v10);
  if ( AssetStorage )
    Object_object__48415484 = AssetData__GetObject_object__48415484(
                                AssetStorage,
                                atlasName,
                                (const MethodInfo_2E2C2FC *)Method_AssetData_GetObject_GameObject____75755192);
  else
    Object_object__48415484 = 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v13 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__48415484, 0LL, 0LL);
  if ( v13 )
  {
    if ( !Object_object__48415484 )
      sub_1B68930(v13, v14);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object_object__48415484,
                         (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    *atlas = (UIAtlas_o *)Component_object;
    sub_1B68678((ServantStatusBattleListViewItem_o *)atlas, (int32_t)Component_object, v16, v17);
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
  int32_t v5; // w3

  if ( (byte_4A07D1A & 1) == 0 )
  {
    sub_1B686D4(&AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_TypeInfo, method);
    byte_4A07D1A = 1;
  }
  v3 = sub_1B68920(AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
  if ( (byte_4A07D78 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, method);
    sub_1B686D4(&SoundManager_TypeInfo, v3);
    this = (AssetManager_o *)sub_1B686D4(&StringLiteral_9259/*"NOW_LOADING"*/, v4);
    byte_4A07D78 = 1;
  }
  processingAssetLoaderList = v2->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
    sub_1B68930(this, method);
  if ( processingAssetLoaderList->fields._size >= 1 )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playBgm((System_String_o *)StringLiteral_9259/*"NOW_LOADING"*/, 0LL);
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

  if ( (byte_4A07D18 & 1) == 0 )
  {
    sub_1B686D4(&AssetManager_ResourceUnloadEventHandler_TypeInfo, value);
    byte_4A07D18 = 1;
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
    v9 = sub_1BA3BC4(p_unloadCallbacks, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B68BF0(v8);
  AssetManager__remove_unloadCallbacks(v11, v12, v13);
}


void __fastcall AssetManager__cancelDownloadAssetStorage(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4A07D3B & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v1);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_4A07D3B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1B68930(v4, v5);
    AssetManager__CancelDownloadAssetStorage((AssetManager_o *)Instance, v5);
  }
}


System_Collections_IEnumerator_o *__fastcall AssetManager__coUnloadUnusedAssets(
        AssetManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A07D5F & 1) == 0 )
  {
    sub_1B686D4(&AssetManager__coUnloadUnusedAssets_d__138_TypeInfo, method);
    byte_4A07D5F = 1;
  }
  v3 = sub_1B68920(AssetManager__coUnloadUnusedAssets_d__138_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
      return System_String__Equals_61427784(name1, name2, 0LL);
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
            list1 = (System_String_array *)System_String__Equals_61427784(
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
      sub_1B68938(list1, list2);
    }
  }
  else if ( list2 )
  {
    return list2->max_length == 0;
  }
  return 1;
}


bool __fastcall AssetManager__compAssetStorageList_37537392(
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
              sub_1B68930(0LL, list);
            assetList = (AssetData_array *)System_String__Equals_61427784(name, (System_String_o *)list, 0LL);
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
      sub_1B68938(assetList, list);
    }
  }
  else if ( list )
  {
    return list->max_length == 0;
  }
  return 1;
}


bool __fastcall AssetManager__compAssetStorage_37537120(
        AssetData_o *data,
        System_String_o *name,
        const MethodInfo *method)
{
  struct System_String_o *v3; // x0
  int32_t stringLength; // w8

  if ( data && (v3 = data->fields.name) != 0LL )
  {
    if ( name )
      return System_String__Equals_61427784(v3, name, 0LL);
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

  if ( (byte_4A07D20 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v1);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_4A07D20 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1B68930(v4, v5);
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

  if ( (byte_4A07D3E & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_4A07D3E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_1B68930(v9, v10);
  return AssetManager__DownloadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, v11);
}


bool __fastcall AssetManager__downloadAssetStorage_37543900(
        System_String_array *nameList,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4A07D3F & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_4A07D3F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v7 )
    return 0;
  if ( !Instance )
    sub_1B68930(v7, v8);
  return AssetManager__DownloadAssetStorage_37544092((AssetManager_o *)Instance, nameList, callbackFunc, 1, v9);
}


AssetData_o *__fastcall AssetManager__getAsset(int32_t type, System_String_o *name, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4A07D2D & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, name);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_4A07D2D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v7 )
    return 0LL;
  if ( !Instance )
    sub_1B68930(v7, v8);
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

  if ( (byte_4A07D4B & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4A07D4B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  result = 0LL;
  if ( !v7 )
  {
    if ( !Instance )
      sub_1B68930(0LL, v5);
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

  if ( (byte_4A07D44 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4A07D44 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  result = 0LL;
  if ( !v7 )
  {
    if ( !Instance )
      sub_1B68930(0LL, v5);
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

  if ( (byte_4A07D45 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4A07D45 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0LL;
  if ( !Instance )
    sub_1B68930(v5, v6);
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

  if ( (byte_4A07D39 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4A07D39 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0LL;
  if ( !Instance )
    sub_1B68930(v5, v6);
  return AssetManager__GetAssetStorageList((AssetManager_o *)Instance, path, v7);
}


AssetData_array *__fastcall AssetManager__getAssetStorage_37547452(
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4A07D46 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4A07D46 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0LL;
  if ( !Instance )
    sub_1B68930(v5, v6);
  return AssetManager__GetAssetStorage_37547632((AssetManager_o *)Instance, nameList, v7);
}


bool __fastcall AssetManager__getAssetStorage_37547900(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4A07D47 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_4A07D47 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v7 )
    return 0;
  if ( !Instance )
    sub_1B68930(v7, v8);
  return AssetManager__GetAssetStorage_37548088((AssetManager_o *)Instance, name, callbackFunc, v9);
}


bool __fastcall AssetManager__getAsset_37538148(
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

  if ( (byte_4A07D2E & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, name);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_4A07D2E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_1B68930(v9, v10);
  return AssetManager__GetAsset_37538356((AssetManager_o *)Instance, type, name, callbackFunc, v11);
}


bool __fastcall AssetManager__getAsset_37538456(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4A07D2F & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_4A07D2F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v7 )
    return 0;
  if ( !Instance )
    sub_1B68930(v7, v8);
  return AssetManager__GetAsset_37538644((AssetManager_o *)Instance, name, callbackFunc, v9);
}


int64_t __fastcall AssetManager__getDownloadSize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4A07D34 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v1);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_4A07D34 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v4 )
    return 0LL;
  if ( !Instance )
    sub_1B68930(v4, v5);
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

  if ( (byte_4A07D2A & 1) == 0 )
  {
    sub_1B686D4(&int_TypeInfo, method);
    sub_1B686D4(&System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo, v3);
    sub_1B686D4(&System_Text_StringBuilder_TypeInfo, v4);
    sub_1B686D4(&System_Text_UTF8Encoding_TypeInfo, v5);
    sub_1B686D4(&StringLiteral_24842/*"{0,0:x2}"*/, v6);
    sub_1B686D4(&StringLiteral_1080/*".bin"*/, v7);
    byte_4A07D2A = 1;
  }
  v8 = (System_Security_Cryptography_SHA1CryptoServiceProvider_o *)sub_1B68920(System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_SHA1CryptoServiceProvider___ctor(v8, 0LL);
  v9 = (System_Text_UTF8Encoding_o *)sub_1B68920(System_Text_UTF8Encoding_TypeInfo);
  System_Text_UTF8Encoding___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_13;
  appended = (System_Text_StringBuilder_o *)((__int64 (__fastcall *)(System_Text_UTF8Encoding_o *, System_String_o *, Il2CppMethodPointer))v9->klass->vtable._19_GetBytes.method)(
                                              v9,
                                              name,
                                              v9->klass->vtable._20_GetBytes.methodPtr);
  if ( !v8 )
    goto LABEL_13;
  v12 = System_Security_Cryptography_HashAlgorithm__ComputeHash(
          (System_Security_Cryptography_HashAlgorithm_o *)v8,
          (System_Byte_array *)appended,
          0LL);
  v13 = (System_Text_StringBuilder_o *)sub_1B68920(System_Text_StringBuilder_TypeInfo);
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
        sub_1B68938(appended, v11);
      v20 = v12->m_Items[v18 + 4] ^ 0xAA;
      appended = (System_Text_StringBuilder_o *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v14, v15, v16);
      if ( !v13 )
        break;
      appended = System_Text_StringBuilder__AppendFormat(
                   v13,
                   (System_String_o *)StringLiteral_24842/*"{0,0:x2}"*/,
                   (Il2CppObject *)appended,
                   0LL);
      LODWORD(v17) = v12->max_length;
      if ( (__int64)++v18 >= (int)v17 )
        goto LABEL_11;
    }
LABEL_13:
    sub_1B68930(appended, v11);
  }
LABEL_11:
  if ( !v13 )
    goto LABEL_13;
  System_Text_StringBuilder__Append_60581364(v13, (System_String_o *)StringLiteral_1080/*".bin"*/, 0LL);
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

  if ( (byte_4A07D29 & 1) == 0 )
  {
    sub_1B686D4(&NetworkManager_TypeInfo, method);
    sub_1B686D4(&StringLiteral_1883/*"?t="*/, v3);
    sub_1B686D4(&StringLiteral_20836/*"jar:"*/, v4);
    byte_4A07D29 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !url )
    sub_1B68930(v5, method);
  if ( !System_String__StartsWith(url, NetworkManager_TypeInfo->static_fields->FILE_URL_SCHEME, 0LL) )
  {
    v6 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v6 = NetworkManager_TypeInfo;
    }
    v7 = System_String__Concat_61419468((System_String_o *)StringLiteral_20836/*"jar:"*/, v6->static_fields->FILE_URL_SCHEME, 0LL);
    if ( !System_String__StartsWith(url, v7, 0LL) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v10 = NetworkManager__getTime(0LL) / 300;
      v8 = System_Int64__ToString((int64_t)&v10, 0LL);
      return System_String__Concat_61430728(url, (System_String_o *)StringLiteral_1883/*"?t="*/, v8, 0LL);
    }
  }
  return url;
}


System_String_o *__fastcall AssetManager__getUrlString_37510212(AssetData_o *data, const MethodInfo *method)
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
  int32_t v16; // w2
  int32_t v17; // w3
  char *v18; // x20
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w1
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  int32_t v28; // w2
  int32_t v29; // w3
  struct System_String_o *assetBundleDateVersion; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w1
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w1
  int32_t v39; // w2
  int32_t v40; // w3
  __int64 v42; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A07D2B & 1) == 0 )
  {
    sub_1B686D4(&AssetManager_TypeInfo, method);
    sub_1B686D4(&NetworkManager_TypeInfo, v3);
    sub_1B686D4(&string___TypeInfo, v4);
    sub_1B686D4(&StringLiteral_16056/*"_"*/, v5);
    sub_1B686D4(&StringLiteral_20836/*"jar:"*/, v6);
    sub_1B686D4(&StringLiteral_1884/*"?v="*/, v7);
    byte_4A07D2B = 1;
  }
  v8 = AssetManager_TypeInfo;
  v42 = 0LL;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  DataServerAddress = (char *)AssetManager__get_DataServerAddress((const MethodInfo *)v8);
  if ( !data )
    goto LABEL_27;
  v11 = (System_String_o *)DataServerAddress;
  DownloadName = AssetData__get_DownloadName(data, v10);
  DataServerAddress = (char *)System_String__Concat_61419468(v11, DownloadName, 0LL);
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
    v15 = System_String__Concat_61419468(
            (System_String_o *)StringLiteral_20836/*"jar:"*/,
            v14->static_fields->FILE_URL_SCHEME,
            0LL);
    if ( !System_String__StartsWith(v13, v15, 0LL) )
    {
      DataServerAddress = (char *)sub_1B6877C(string___TypeInfo, 9LL);
      if ( DataServerAddress )
      {
        v18 = DataServerAddress;
        if ( !*((_DWORD *)DataServerAddress + 6) )
          goto LABEL_28;
        *((_QWORD *)DataServerAddress + 4) = v13;
        sub_1B68678((ServantStatusBattleListViewItem_o *)(DataServerAddress + 32), (int32_t)v13, v16, v17);
        if ( *((_DWORD *)v18 + 6) <= 1u )
          goto LABEL_28;
        v21 = StringLiteral_1884/*"?v="*/;
        *((_QWORD *)v18 + 5) = StringLiteral_1884/*"?v="*/;
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v18 + 40), v21, v19, v20);
        DataServerAddress = (char *)AssetManager_TypeInfo;
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          DataServerAddress = (char *)AssetManager_TypeInfo;
        }
        if ( *((_DWORD *)v18 + 6) <= 2u )
          goto LABEL_28;
        v24 = *(_QWORD *)(*((_QWORD *)DataServerAddress + 23) + 80LL);
        *((_QWORD *)v18 + 6) = v24;
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v18 + 48), v24, v22, v23);
        if ( *((_DWORD *)v18 + 6) <= 3u )
          goto LABEL_28;
        v27 = StringLiteral_16056/*"_"*/;
        *((_QWORD *)v18 + 7) = StringLiteral_16056/*"_"*/;
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v18 + 56), v27, v25, v26);
        if ( *((_DWORD *)v18 + 6) <= 4u )
          goto LABEL_28;
        assetBundleDateVersion = AssetManager_TypeInfo->static_fields->assetBundleDateVersion;
        *((_QWORD *)v18 + 8) = assetBundleDateVersion;
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v18 + 64), (int32_t)assetBundleDateVersion, v28, v29);
        if ( *((_DWORD *)v18 + 6) <= 5u )
          goto LABEL_28;
        v33 = StringLiteral_16056/*"_"*/;
        *((_QWORD *)v18 + 9) = StringLiteral_16056/*"_"*/;
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v18 + 72), v33, v31, v32);
        HIDWORD(v42) = data->fields.size;
        DataServerAddress = (char *)System_Int32__ToString((int32_t)&v42 + 4, 0LL);
        if ( *((_DWORD *)v18 + 6) <= 6u
          || (*((_QWORD *)v18 + 10) = DataServerAddress,
              sub_1B68678((ServantStatusBattleListViewItem_o *)(v18 + 80), (int32_t)DataServerAddress, v34, v35),
              *((_DWORD *)v18 + 6) <= 7u)
          || (v38 = StringLiteral_16056/*"_"*/,
              *((_QWORD *)v18 + 11) = StringLiteral_16056/*"_"*/,
              sub_1B68678((ServantStatusBattleListViewItem_o *)(v18 + 88), v38, v36, v37),
              LODWORD(v42) = data->fields.crc,
              DataServerAddress = (char *)System_UInt32__ToString((uint32_t)&v42, 0LL),
              *((_DWORD *)v18 + 6) <= 8u) )
        {
LABEL_28:
          sub_1B68938(DataServerAddress, v10);
        }
        *((_QWORD *)v18 + 12) = DataServerAddress;
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v18 + 96), (int32_t)DataServerAddress, v39, v40);
        return System_String__Concat_61432996((System_String_array *)v18, 0LL);
      }
LABEL_27:
      sub_1B68930(DataServerAddress, v10);
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

  if ( (byte_4A07D24 & 1) == 0 )
  {
    method = (const MethodInfo *)sub_1B686D4(&AssetManager_TypeInfo, v1);
    byte_4A07D24 = 1;
  }
  Path = AssetStorageCache__GetPath(method);
  v3 = AssetManager_TypeInfo;
  v4 = Path;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v3 = AssetManager_TypeInfo;
  }
  return System_String__Concat_61419468(v4, v3->static_fields->configFileName, 0LL);
}


System_String_o *__fastcall AssetManager__get_CachePathName(const MethodInfo *method)
{
  __int64 v1; // x1
  AssetManager_c *v2; // x0

  if ( (byte_4A07D22 & 1) == 0 )
  {
    sub_1B686D4(&AssetManager_TypeInfo, v1);
    byte_4A07D22 = 1;
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

  if ( (byte_4A07D23 & 1) == 0 )
  {
    sub_1B686D4(&AssetManager_TypeInfo, v1);
    byte_4A07D23 = 1;
  }
  v2 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  DataServerAddress = AssetManager__get_DataServerAddress((const MethodInfo *)v2);
  return System_String__Concat_61419468(DataServerAddress, AssetManager_TypeInfo->static_fields->configFileName, 0LL);
}


System_String_o *__fastcall AssetManager__get_DataServerAddress(const MethodInfo *method)
{
  __int64 v1; // x1
  NetworkManager_c *v2; // x0

  if ( (byte_4A07D21 & 1) == 0 )
  {
    sub_1B686D4(&NetworkManager_TypeInfo, v1);
    byte_4A07D21 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A07E7A )
  {
    sub_1B686D4(&NetworkManager_TypeInfo, v1);
    byte_4A07E7A = 1;
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

  if ( (byte_4A07D1B & 1) == 0 )
  {
    sub_1B686D4(&AssetManager_TypeInfo, v1);
    sub_1B686D4(&ManagerConfig_TypeInfo, v2);
    byte_4A07D1B = 1;
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

  if ( (byte_4A07D51 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, attrib);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v5);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v6);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v7);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v8);
    byte_4A07D51 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      assetBundleDic,
                                                                                      (const MethodInfo_3189998 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
    sub_1B68930(assetBundleDic, attrib);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v17,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_37CA0CC *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v17,
            (const MethodInfo_3288490 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v10 )
      break;
    currentValue = v17.fields._currentValue;
    if ( !v17.fields._currentValue )
      sub_1B68930(v10, v11);
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
    (const MethodInfo_328848C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  return v14 & (v15 == 5);
}


bool __fastcall AssetManager__isExistAssetStorage(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4A07D35 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4A07D35 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0;
  if ( !Instance )
    sub_1B68930(v5, v6);
  return AssetManager__IsExistAssetStorage((AssetManager_o *)Instance, name, v7);
}


bool __fastcall AssetManager__isExistAssetStorage_37540356(System_String_array *nameList, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4A07D36 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4A07D36 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0;
  if ( !Instance )
    sub_1B68930(v5, v6);
  return AssetManager__IsExistAssetStorage_37540536((AssetManager_o *)Instance, nameList, v7);
}


bool __fastcall AssetManager__isNeedDownload(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  AssetData_o *AssetData; // x0

  if ( (byte_4A07D37 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4A07D37 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
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
      sub_1B68930(v5, v6);
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


bool __fastcall AssetManager__isNeedDownload_37540904(System_String_array *nameList, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4A07D38 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4A07D38 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0;
  if ( !Instance )
    sub_1B68930(v5, v6);
  return AssetManager__IsNeedDownload_37541084((AssetManager_o *)Instance, nameList, v7);
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

  if ( (byte_4A07D2C & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, name);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_4A07D2C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_1B68930(v9, v10);
  return AssetManager__LoadAsset((AssetManager_o *)Instance, type, name, callbackFunc, v11);
}


AssetData_o *__fastcall AssetManager__loadAssetResource(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4A07D4A & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4A07D4A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v5 )
    return 0LL;
  if ( !Instance )
    sub_1B68930(v5, v6);
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

  if ( (byte_4A07D40 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_4A07D40 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_1B68930(v9, v10);
  return AssetManager__LoadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, v11);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AssetManager__loadAssetStorage_37545868(
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

  if ( (byte_4A07D42 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&maxParallelLoad);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_4A07D42 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_1B68930(v9, v10);
  return AssetManager__LoadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, v11);
}


bool __fastcall AssetManager__loadAssetStorage_37546076(
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

  if ( (byte_4A07D43 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, callbackFunc);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_4A07D43 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_1B68930(v9, v10);
  return AssetManager__LoadAssetStorage_37546284(
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

  if ( (byte_4A07D41 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, resourceNames);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v9);
    byte_4A07D41 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v11 )
    return 0;
  if ( !Instance )
    sub_1B68930(v11, v12);
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

  if ( (byte_4A07D3C & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v1);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_4A07D3C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1B68930(v4, v5);
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

  if ( (byte_4A07D30 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, name);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_4A07D30 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !Instance )
      sub_1B68930(v7, v8);
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

  if ( (byte_4A07D4C & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4A07D4C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1B68930(v5, v6);
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

  if ( (byte_4A07D48 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4A07D48 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1B68930(v5, v6);
    AssetManager__ReleaseAssetStorage((AssetManager_o *)Instance, name, v7);
  }
}


void __fastcall AssetManager__releaseAssetStorage_37548420(System_String_array *nameList, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4A07D49 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4A07D49 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1B68930(v5, v6);
    AssetManager__ReleaseAssetStorage_37548596((AssetManager_o *)Instance, nameList, v7);
  }
}


void __fastcall AssetManager__releaseAsset_37539144(
        int32_t type,
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4A07D31 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, nameList);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_4A07D31 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !Instance )
      sub_1B68930(v7, v8);
    AssetManager__ReleaseAsset_37539328((AssetManager_o *)Instance, type, nameList, v9);
  }
}


void __fastcall AssetManager__releaseAsset_37539444(AssetData_o *assetInfo, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4A07D32 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4A07D32 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1B68930(v5, v6);
    if ( assetInfo )
      AssetManager__ReleaseAsset((AssetManager_o *)Instance, assetInfo->fields.type, assetInfo->fields.name, v7);
  }
}


void __fastcall AssetManager__releaseAsset_37539652(AssetData_array *assetInfoList, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4A07D33 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4A07D33 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1B68930(v5, v6);
    AssetManager__ReleaseAsset_37539828((AssetManager_o *)Instance, assetInfoList, v7);
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

  if ( (byte_4A07D19 & 1) == 0 )
  {
    sub_1B686D4(&AssetManager_ResourceUnloadEventHandler_TypeInfo, value);
    byte_4A07D19 = 1;
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
    v9 = sub_1BA3BC4(p_unloadCallbacks, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B68BF0(v8);
  AssetManager__WaitForExecutionUnloadUnuseAssets(v11, v12);
}


void __fastcall AssetManager__resetAssetStorageVersion(System_String_o *path, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4A07D3A & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4A07D3A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !Instance )
      sub_1B68930(v5, v6);
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

  if ( (byte_4A07D3D & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v1);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v2);
    byte_4A07D3D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1B68930(v4, v5);
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

  if ( (byte_4A07D1F & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, isUse);
    sub_1B686D4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    byte_4A07D1F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !Instance && !v5 )
    sub_1B68930(v5, v6);
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
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v5, v6);
}


void __fastcall AssetManager_LoadWaitStatus___ctor_37562144(
        AssetManager_LoadWaitStatus_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.data = data;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)data, v5, v6);
}


void __fastcall AssetManager_LoadWaitStatus___ctor_37562364(
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
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)data, v9, v10);
  this->fields.callbackFunc2 = callbackFunc;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, (int32_t)callbackFunc, v11, v12);
  this->fields.resourceNames = resourceNames;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.resourceNames, (int32_t)resourceNames, v13, v14);
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

  if ( (byte_4A07D79 & 1) == 0 )
  {
    sub_1B686D4(&AssetLoader_LoadEndDataHandler_TypeInfo, callbackFunc);
    byte_4A07D79 = 1;
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
    sub_1B68BF0(v7);
LABEL_7:
    p_callbackFunc2->klass = (ServantStatusBattleListViewItem_c *)v10;
  }
  sub_1B68678(p_callbackFunc2, (int32_t)v10, v8, v9);
}


void __fastcall AssetManager_LoadWaitStatus__AddEntry(AssetManager_LoadWaitStatus_o *this, const MethodInfo *method)
{
  struct AssetData_o *data; // x8
  int32_t entryCount; // w9

  data = this->fields.data;
  if ( !data )
    sub_1B68930(this, method);
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
    LOBYTE(data) = AssetData__IsSame_37513076(data, type, name, method);
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

  if ( (byte_4A07D7A & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_1/*""*/, method);
    byte_4A07D7A = 1;
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
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B68794(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B6894C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B687FC(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19B0118;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19B00D8;
}


System_IAsyncResult_o *__fastcall AssetManager_ResourceUnloadEventHandler__BeginInvoke(
        AssetManager_ResourceUnloadEventHandler_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1B68688(this, &v5, callback, object);
}


void __fastcall AssetManager_ResourceUnloadEventHandler__EndInvoke(
        AssetManager_ResourceUnloadEventHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B6868C(result, 0LL, method);
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
      sub_1B68930(0LL, method);
    AssetManager__LoadStart(_4__this, method);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, 0, v2, v3);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B686E8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B68920(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B686E8(&Method_AssetManager__DelayLoadStart_d__149_System_Collections_IEnumerator_Reset__);
  sub_1B687FC(v3, v4);
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
  int32_t _1__state; // w8
  struct AssetManager_o *_4__this; // x20
  _BOOL8 v24; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x2
  AssetData_o *currentValue; // x21
  int monitor; // w8
  const MethodInfo *v29; // x2
  _BOOL4 isDispLogo_5__2; // w8
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *downLoadWaitList; // x8
  Il2CppObject *v32; // x22
  int32_t v33; // w2
  int32_t v34; // w3
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
  int32_t v47; // w2
  int32_t v48; // w3
  UnityEngine_WaitForEndOfFrame_o *v49; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v51; // w2
  int32_t v52; // w3
  bool result; // w0
  Il2CppObject *v54; // x21
  System_Action_o *v55; // x22
  AvalonSceneManager_c *v56; // x0
  float DEFAULT_FADE_TIME; // s8
  UnityEngine_WaitForSeconds_o *v58; // x20
  ServantStatusBattleListViewItem_o *v59; // x19
  int32_t v60; // w2
  int32_t v61; // w3
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v62; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v63; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_4A07D7E & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_b__118_0__, v3);
    sub_1B686D4(&AvalonSceneManager_TypeInfo, v4);
    sub_1B686D4(&ErrorDialog_ClickDelegate_TypeInfo, v5);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, v6);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v7);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v8);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v9);
    sub_1B686D4(&LocalizationManager_TypeInfo, v10);
    sub_1B686D4(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__, v11);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1B686D4(&Method_AssetManager___c__DisplayClass118_0__DownloadAssetStorageAttributeWithCheckDialog_b__1__, v13);
    sub_1B686D4(&AssetManager___c__DisplayClass118_0_TypeInfo, v14);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__, v15);
    sub_1B686D4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v16);
    sub_1B686D4(&UnityEngine_WaitForSeconds_TypeInfo, v17);
    sub_1B686D4(&StringLiteral_25227/*"データ更新"*/, v18);
    sub_1B686D4(&StringLiteral_9188/*"NETWORK_ERROR_DATA_UPDATE_TITLE"*/, v19);
    sub_1B686D4(&StringLiteral_360/*" ゲームデータの更新を行います。\n\n{0}\n\n ※Wi-Fi接続での更新を推奨します。"*/, v20);
    this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)sub_1B686D4(&StringLiteral_9186/*"NETWORK_ERROR_DATA_UPDATE_EXP"*/, v21);
    byte_4A07D7E = 1;
  }
  memset(&v63, 0, sizeof(v63));
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    isDispLogo_5__2 = v2->fields._isDispLogo_5__2;
    v2->fields.__1__state = -1;
    if ( isDispLogo_5__2 )
    {
      this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_56;
      CommonUI__SetLoadMode((CommonUI_o *)this, 3, 0LL);
    }
LABEL_52:
    if ( _4__this )
    {
      _4__this->fields.loadParallelMax = v2->fields.loadParallelMax;
      AssetManager__LoadStart(_4__this, method);
      return 0;
    }
    goto LABEL_56;
  }
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
LABEL_41:
    _8__1 = v2->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_56;
    if ( !_8__1->fields.isDataUpdate )
    {
LABEL_45:
      v49 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B68920(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v49, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v49;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B68678(p__2__current, (int32_t)v49, v51, v52);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    }
    this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this )
      goto LABEL_56;
    if ( CommonUI__isBusyDataUpdateDialog((CommonUI_o *)this, 0LL) )
      goto LABEL_45;
    v2->fields.__8__1 = 0LL;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&v2->fields.__8__1, 0, v47, v48);
    goto LABEL_47;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_56;
  this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)_4__this->fields.assetBundleDic;
  if ( !this )
    goto LABEL_56;
  this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                  (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                                                  (const MethodInfo_3189998 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !this )
    goto LABEL_56;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v62,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_37CA0CC *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v63 = v62;
  while ( 1 )
  {
    v24 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v63,
            (const MethodInfo_3288490 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v24 )
      break;
    currentValue = (AssetData_o *)v63.fields._currentValue;
    if ( !v63.fields._currentValue )
      sub_1B68930(v24, v25);
    monitor = (int)v63.fields._currentValue[2].monitor;
    if ( monitor < 1 || monitor == HIDWORD(v63.fields._currentValue[2].monitor) )
    {
      if ( System_String__op_Equality(v2->fields.attrib, (System_String_o *)v63.fields._currentValue[2].klass, 0LL)
        && currentValue->fields.nowVersion != currentValue->fields.newVersion )
      {
        AssetManager__AddLoadWaitStatus_37551800(_4__this, currentValue, v29);
      }
    }
    else
    {
      AssetManager__AddLoadWaitStatus_37551800(_4__this, (AssetData_o *)v63.fields._currentValue, v26);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v63,
    (const MethodInfo_328848C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  downLoadWaitList = _4__this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
LABEL_56:
    sub_1B68930(this, method);
  if ( downLoadWaitList->fields._size >= 1 )
  {
    v32 = (Il2CppObject *)sub_1B68920(AssetManager___c__DisplayClass118_0_TypeInfo);
    System_Object___ctor(v32, 0LL);
    v2->fields.__8__1 = (struct AssetManager___c__DisplayClass118_0_o *)v32;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&v2->fields.__8__1, (int32_t)v32, v33, v34);
    if ( !v2->fields.__8__1 )
      goto LABEL_56;
    v2->fields.__8__1->fields.isDataUpdate = 0;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( LocalizationManager__ContainsKey((System_String_o *)StringLiteral_9188/*"NETWORK_ERROR_DATA_UPDATE_TITLE"*/, 0LL) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v35 = LocalizationManager__Get((System_String_o *)StringLiteral_9188/*"NETWORK_ERROR_DATA_UPDATE_TITLE"*/, 0LL);
    }
    else
    {
      v35 = (System_String_o *)StringLiteral_25227/*"データ更新"*/;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( LocalizationManager__ContainsKey((System_String_o *)StringLiteral_9186/*"NETWORK_ERROR_DATA_UPDATE_EXP"*/, 0LL) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v37 = LocalizationManager__Get((System_String_o *)StringLiteral_9186/*"NETWORK_ERROR_DATA_UPDATE_EXP"*/, 0LL);
    }
    else
    {
      v37 = (System_String_o *)StringLiteral_360/*" ゲームデータの更新を行います。\n\n{0}\n\n ※Wi-Fi接続での更新を推奨します。"*/;
    }
    DownloadSize = (AssetManager_o *)AssetManager__GetDownloadSize(_4__this, v36);
    v40 = (Il2CppObject *)AssetManager__ConvertDownloadSizeToString(DownloadSize, (double)(__int64)DownloadSize, v39);
    v41 = System_String__Format(v37, v40, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v43 = (Il2CppObject *)v2->fields.__8__1;
    v44 = (CommonUI_o *)Instance;
    v45 = (ErrorDialog_ClickDelegate_o *)sub_1B68920(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(
      v45,
      v43,
      Method_AssetManager___c__DisplayClass118_0__DownloadAssetStorageAttributeWithCheckDialog_b__1__,
      0LL);
    if ( !v44 )
      goto LABEL_56;
    CommonUI__OpenDataUpdateDialog(v44, v35, v41, v45, 0, 0LL);
    goto LABEL_41;
  }
LABEL_47:
  v2->fields._isDispLogo_5__2 = 0;
  v54 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v55 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(
    v55,
    (Il2CppObject *)_4__this,
    Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_b__118_0__,
    0LL);
  if ( !v54 )
    goto LABEL_56;
  this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)CommonUI__PlayLogo(
                                                                                  (CommonUI_o *)v54,
                                                                                  v55,
                                                                                  0LL);
  v2->fields._isDispLogo_5__2 = (unsigned __int8)this & 1;
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_52;
  v56 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v56 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v56->static_fields->DEFAULT_FADE_TIME;
  v58 = (UnityEngine_WaitForSeconds_o *)sub_1B68920(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v58, DEFAULT_FADE_TIME, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v58;
  v59 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B68678(v59, (int32_t)v58, v60, v61);
  *(_DWORD *)&v59[-1].fields.isMine = 2;
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

  v2 = sub_1B686E8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B68920(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B686E8(&Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_System_Collections_IEnumerator_Reset__);
  sub_1B687FC(v3, v4);
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
  int32_t v2; // w2
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
  System_String_o *v57; // x21
  System_Char_array *v58; // x0
  System_String_o *v59; // x21
  System_Char_array *v60; // x0
  il2cpp_array_size_t max_length; // w8
  int32_t v62; // w2
  int32_t v63; // w3
  int v64; // w23
  __int64 *v65; // x8
  System_String_o *v66; // x0
  __int64 v67; // x1
  System_String_o *v68; // x22
  System_String_o *v69; // x22
  System_String_o *v70; // x21
  System_Text_Encoding_o *UTF8; // x0
  __int64 v72; // x1
  System_Byte_array *v73; // x23
  uint32_t v74; // w23
  System_Char_array *v75; // x0
  il2cpp_array_size_t v76; // w8
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
  int v107; // w8
  uint32_t v108; // w26
  System_String_o *v109; // x27
  System_String_o *wait_5__6; // x22
  System_Collections_Generic_Dictionary_object__object__o *assetBundleDic; // x28
  AssetData_o *v112; // x29
  System_String_o *v113; // x21
  AssetManager_c *v114; // x0
  struct AssetManager_StaticFields *static_fields; // x0
  int32_t v116; // w1
  int32_t v117; // w1
  struct AssetManager_StaticFields *v118; // x0
  int32_t v119; // w2
  int32_t v120; // w3
  int32_t v121; // w1
  struct AssetManager_StaticFields *v122; // x0
  int32_t v123; // w2
  int32_t v124; // w3
  ManagerConfig_c *v125; // x0
  struct ManagerConfig_StaticFields *v126; // x8
  Il2CppObject *Instance; // x22
  ErrorDialog_ClickDelegate_o *v128; // x23
  AssetManager_c *v129; // x0
  System_String_o *ConfigFileAddress; // x0
  int32_t v131; // w2
  int32_t v132; // w3
  int32_t v133; // w2
  int32_t v134; // w3
  System_String_o *v135; // x21
  System_String_o *UrlString; // x0
  UnityEngine_Networking_UnityWebRequest_o *v137; // x0
  int32_t v138; // w2
  int32_t v139; // w3
  float unscaledTime; // s8
  ManagerConfig_c *v141; // x0
  float TIMEOUT; // s0
  UnityEngine_WaitForEndOfFrame_o *v143; // x21
  int32_t v144; // w2
  int32_t v145; // w3
  AssetManager__InitCR_d__131_o **v146; // x21
  float downloadProgress; // s0
  float loadProgress_5__5; // s9
  float v149; // s8
  int32_t v150; // w2
  int32_t v151; // w3
  float v152; // s0
  bool v153; // zf
  float v154; // s8
  System_String_o *error; // x0
  System_String_o *text; // x22
  System_String_o *v157; // x22
  const MethodInfo *v158; // x1
  System_String_o *v159; // x22
  System_String_o *v160; // x0
  System_String_o *v161; // x0
  Il2CppObject *v162; // x22
  ManagerConfig_c *v163; // x0
  struct ManagerConfig_StaticFields *v164; // x8
  Il2CppObject *v165; // x1
  ServantStatusBattleListViewItem_o *v166; // x19
  int v167; // w8
  AssetManager__InitCR_d__131_o *v168; // x22
  int v169; // w8
  int32_t v170; // w0
  int32_t v171; // w24
  System_String_o *v172; // x23
  System_String_o *v173; // x22
  System_Byte_array *v174; // x24
  uint32_t v175; // w24
  int32_t v176; // w2
  int32_t v177; // w3
  int32_t v178; // w2
  int32_t v179; // w3
  int v180; // w8
  System_String_array *v181; // x25
  __int64 v182; // x22
  const MethodInfo *v183; // x1
  int32_t v184; // w2
  int32_t v185; // w3
  int v186; // w8
  unsigned int v187; // w29
  AssetManager__InitCR_d__131_o *v188; // x27
  char v189; // w8
  System_String_o *v190; // x0
  AssetManager_c *v191; // x8
  int v192; // w9
  void **v193; // x11
  void **v194; // x10
  System_String_o *v195; // x27
  bool v196; // cc
  void **v197; // x9
  void **v198; // x10
  ServantStatusBattleListViewItem_c *v199; // x24
  ServantStatusBattleListViewItem_c *v200; // x23
  int32_t v201; // w2
  int32_t v202; // w3
  int32_t v203; // w2
  int32_t v204; // w3
  int32_t v205; // w2
  int32_t v206; // w3
  System_String_o *v207; // x0
  System_String_o *v208; // x0
  int32_t v209; // w23
  System_String_o *v210; // x0
  const MethodInfo *v211; // x3
  int v212; // w8
  uint32_t v213; // w24
  System_String_o *v214; // x26
  AssetData_o *AssetData; // x0
  const MethodInfo *v216; // x6
  Il2CppObject *v217; // x27
  int32_t v218; // w2
  int32_t v219; // w3
  __int64 v220; // x8
  _QWORD *v221; // x9
  __int64 _2__current_low; // x10
  __int64 v223; // x8
  System_Collections_Generic_List_object__o *v224; // x27
  AssetData_o *v225; // x28
  int32_t v226; // w2
  int32_t v227; // w3
  struct System_Object_array *items; // x8
  _QWORD *v229; // x9
  __int64 size; // x10
  Il2CppClass **v231; // x0
  AssetManager_c *v232; // x0
  ServantStatusBattleListViewItem_c *v233; // x23
  struct AssetManager_StaticFields *v234; // x0
  struct AssetManager_StaticFields *v235; // x0
  ServantStatusBattleListViewItem_c *v236; // x1
  int32_t v237; // w2
  int32_t v238; // w3
  struct AssetManager_StaticFields *v239; // x0
  ServantStatusBattleListViewItem_c *v240; // x1
  int32_t v241; // w2
  int32_t v242; // w3
  _BOOL8 v243; // x0
  __int64 v244; // x1
  Il2CppObject *current; // x22
  System_Collections_Generic_Dictionary_object__object__o *v246; // x0
  __int64 v247; // x1
  System_Collections_Generic_Dictionary_object__object__o *v248; // x0
  Il2CppObject *v249; // x22
  int32_t v250; // w2
  int32_t v251; // w3
  ManagerConfig_c *v252; // x0
  struct ManagerConfig_StaticFields *v253; // x8
  Il2CppObject *v254; // x21
  ErrorDialog_ClickDelegate_o *v255; // x23
  UnityEngine_WaitForEndOfFrame_o *v256; // x20
  int32_t v257; // w2
  int32_t v258; // w3
  ManagementManager_c *v259; // x0
  _BOOL4 isDuringStartup; // w22
  Il2CppObject *v261; // x21
  System_String_o *v262; // x22
  ErrorDialog_ClickDelegate_o *v263; // x23
  System_String_o *v264; // x22
  ErrorDialog_ClickDelegate_o *v265; // x23
  UnityEngine_WaitForEndOfFrame_o *v266; // x20
  int32_t v267; // w2
  int32_t v268; // w3
  UnityEngine_WaitForSeconds_o *v269; // x20
  int32_t v270; // w2
  int32_t v271; // w3
  const MethodInfo *v272; // x2
  int32_t v273; // w2
  int32_t v274; // w3
  UnityEngine_WaitForEndOfFrame_o *v275; // x20
  int32_t v276; // w2
  int32_t v277; // w3
  const MethodInfo *effectDistance; // [xsp+0h] [xbp-F0h]
  System_Nullable_Vector2__o effectDistancea; // [xsp+0h] [xbp-F0h]
  System_Nullable_Vector2__o effectDistanceb; // [xsp+0h] [xbp-F0h]
  const MethodInfo *effectDistance_8; // [xsp+8h] [xbp-E8h]
  System_String_o *klass; // [xsp+18h] [xbp-D8h]
  System_String_o *v283; // [xsp+20h] [xbp-D0h]
  int32_t version; // [xsp+2Ch] [xbp-C4h]
  ServantStatusBattleListViewItem_o *v285; // [xsp+30h] [xbp-C0h]
  ServantStatusBattleListViewItem_o *v286; // [xsp+38h] [xbp-B8h]
  AssetManager__InitCR_d__131_o *v287; // [xsp+40h] [xbp-B0h]
  ServantStatusBattleListViewItem_o *v288; // [xsp+40h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v289; // [xsp+48h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v290; // [xsp+60h] [xbp-90h] BYREF

  v4 = this;
  if ( (byte_4A07D7F & 1) == 0 )
  {
    sub_1B686D4(&AssetDataListInfo_TypeInfo, method);
    sub_1B686D4(&AssetData_TypeInfo, v5);
    sub_1B686D4(&Method_AssetManager_OnClickRetryDialog__, v6);
    sub_1B686D4(&Method_AssetManager_OnClickWaitDebugDialog__, v7);
    sub_1B686D4(&AssetManager_TypeInfo, v8);
    sub_1B686D4(&CatAndMouseGame_TypeInfo, v9);
    sub_1B686D4(&char___TypeInfo, v10);
    sub_1B686D4(&ErrorDialog_ClickDelegate_TypeInfo, v11);
    sub_1B686D4(&Crc32_TypeInfo, v12);
    sub_1B686D4(&UnityEngine_Debug_TypeInfo, v13);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__AssetData__Add__, v14);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__, v15);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__, v16);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__, v17);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__AssetData__set_Item__, v18);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__, v19);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__, v20);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__, v21);
    sub_1B686D4(&Method_System_Collections_Generic_List_AssetData__Add__, v22);
    sub_1B686D4(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__, v23);
    sub_1B686D4(&LocalizationManager_TypeInfo, v24);
    sub_1B686D4(&ManagementManager_TypeInfo, v25);
    sub_1B686D4(&ManagerConfig_TypeInfo, v26);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v27);
    sub_1B686D4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v28);
    sub_1B686D4(&UnityEngine_WaitForSeconds_TypeInfo, v29);
    sub_1B686D4(&StringLiteral_2503/*"AssetStorageList download time over"*/, v30);
    sub_1B686D4(&StringLiteral_2499/*"AssetStorageList download crc error"*/, v31);
    sub_1B686D4(&StringLiteral_2495/*"AssetStorage boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/, v32);
    sub_1B686D4(&StringLiteral_2137/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, v33);
    sub_1B686D4(&StringLiteral_2491/*"AssetStorage boot load crc error : チェックサム値が不一致"*/, v34);
    sub_1B686D4(&StringLiteral_15872/*"[FFFF80]Download error for debug"*/, v35);
    sub_1B686D4(&StringLiteral_2500/*"AssetStorageList download data error"*/, v36);
    sub_1B686D4(&StringLiteral_2502/*"AssetStorageList download error : "*/, v37);
    sub_1B686D4(&StringLiteral_2493/*"AssetStorage boot load error : アセットバンドルリスト作成失敗"*/, v38);
    sub_1B686D4(&StringLiteral_25072/*"~"*/, v39);
    sub_1B686D4(&StringLiteral_2494/*"AssetStorage boot load error : ファイル先頭の１行目の内容が空"*/, v40);
    sub_1B686D4(&StringLiteral_11407/*"SCRIPT"*/, v41);
    sub_1B686D4(&StringLiteral_1886/*"@"*/, v42);
    sub_1B686D4(&StringLiteral_2138/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, v43);
    this = (AssetManager__InitCR_d__131_o *)sub_1B686D4(&StringLiteral_1/*""*/, v44);
    byte_4A07D7F = 1;
  }
  memset(&v290, 0, sizeof(v290));
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
             (const MethodInfo_3189838 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) )
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
      v58 = (System_Char_array *)sub_1B6877C(char___TypeInfo, 1LL);
      if ( !v58 )
        sub_1B68930(0LL, 0LL);
      if ( !v58->max_length )
        sub_1B68938(v58, v58);
      v58->m_Items[2] = -257;
      v59 = System_String__Trim_61449216(v57, v58, 0LL);
      v60 = (System_Char_array *)sub_1B6877C(char___TypeInfo, 2LL);
      if ( !v60 )
        sub_1B68930(0LL, 0LL);
      max_length = v60->max_length;
      if ( !max_length )
        sub_1B68938(v60, v60);
      v60->m_Items[2] = 13;
      if ( max_length == 1 )
        sub_1B68938(v60, v60);
      v60->m_Items[3] = 10;
      if ( !v59 )
        sub_1B68930(v60, v60);
      v64 = System_String__IndexOfAny(v59, v60, 0LL);
      if ( v64 < 2 )
      {
        v65 = &StringLiteral_2494/*"AssetStorage boot load error : ファイル先頭の１行目の内容が空"*/;
        goto LABEL_96;
      }
      v66 = System_String__Substring_61438472(v59, 0, v64, 0LL);
      v68 = v66;
      if ( !v66 )
        sub_1B68930(0LL, v67);
      if ( !System_String__StartsWith(v66, (System_String_o *)StringLiteral_25072/*"~"*/, 0LL) )
      {
        v65 = &StringLiteral_2495/*"AssetStorage boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
        goto LABEL_96;
      }
      v69 = System_String__Substring(v68, 1, 0LL);
      v70 = System_String__Substring(v59, v64 + 1, 0LL);
      UTF8 = System_Text_Encoding__get_UTF8(0LL);
      if ( !UTF8 )
        sub_1B68930(0LL, v72);
      v73 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._19_GetBytes.method)(
                                   UTF8,
                                   v70,
                                   UTF8->klass->vtable._20_GetBytes.methodPtr);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v74 = Crc32__Compute(v73, 0LL);
      if ( System_UInt32__Parse(v69, 0LL) != v74 )
      {
        v65 = &StringLiteral_2491/*"AssetStorage boot load crc error : チェックサム値が不一致"*/;
        goto LABEL_96;
      }
      v75 = (System_Char_array *)sub_1B6877C(char___TypeInfo, 2LL);
      if ( !v75 )
        sub_1B68930(0LL, 0LL);
      v76 = v75->max_length;
      if ( !v76 )
        sub_1B68938(v75, v75);
      v75->m_Items[2] = 13;
      if ( v76 == 1 )
        sub_1B68938(v75, v75);
      v75->m_Items[3] = 10;
      if ( !v70 )
        sub_1B68930(v75, v75);
      this = (AssetManager__InitCR_d__131_o *)System_String__Split_61441860(v70, v75, 1, 0LL);
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
                                                (System_String_o *)StringLiteral_1886/*"@"*/,
                                                0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
LABEL_95:
        v65 = &StringLiteral_2493/*"AssetStorage boot load error : アセットバンドルリスト作成失敗"*/;
LABEL_96:
        v113 = (System_String_o *)*v65;
        if ( *v65 )
        {
          v114 = AssetManager_TypeInfo;
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
            v114 = AssetManager_TypeInfo;
          }
          static_fields = v114->static_fields;
          v116 = (int)StringLiteral_1/*""*/;
          static_fields->assetBundleMasterVersion = (struct System_String_o *)StringLiteral_1/*""*/;
          sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->assetBundleMasterVersion, v116, v62, v63);
          v117 = (int)StringLiteral_1/*""*/;
          v118 = AssetManager_TypeInfo->static_fields;
          v118->assetBundleDateVersion = (struct System_String_o *)StringLiteral_1/*""*/;
          sub_1B68678((ServantStatusBattleListViewItem_o *)&v118->assetBundleDateVersion, v117, v119, v120);
          v121 = (int)StringLiteral_1/*""*/;
          v122 = AssetManager_TypeInfo->static_fields;
          v122->assetBundleBuildVersion = (struct System_String_o *)StringLiteral_1/*""*/;
          sub_1B68678((ServantStatusBattleListViewItem_o *)&v122->assetBundleBuildVersion, v121, v123, v124);
          this = (AssetManager__InitCR_d__131_o *)_4__this->fields.assetBundleDic;
          if ( !this )
            goto LABEL_281;
          System_Collections_Generic_Dictionary_object__object___Clear(
            (System_Collections_Generic_Dictionary_object__object__o *)this,
            (const MethodInfo_3189CF0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
          v125 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v125 = ManagerConfig_TypeInfo;
          }
          v126 = v125->static_fields;
          if ( v126->UseDebugCommand )
          {
            if ( !v125->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v125);
              v126 = ManagerConfig_TypeInfo->static_fields;
            }
            if ( System_String__op_Inequality(v126->ServerDefaultType, (System_String_o *)StringLiteral_11407/*"SCRIPT"*/, 0LL) )
            {
              _4__this->fields.isErrorDialog = 1;
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v128 = (ErrorDialog_ClickDelegate_o *)sub_1B68920(ErrorDialog_ClickDelegate_TypeInfo);
              ErrorDialog_ClickDelegate___ctor(
                v128,
                (Il2CppObject *)_4__this,
                Method_AssetManager_OnClickWaitDebugDialog__,
                0LL);
              if ( !Instance )
                goto LABEL_281;
              *(_QWORD *)&effectDistancea.fields.hasValue = 0LL;
              effectDistancea.fields.value.fields.y = 0.0;
              CommonUI__OpenWarningDialog(
                (CommonUI_o *)Instance,
                (System_String_o *)StringLiteral_15872/*"[FFFF80]Download error for debug"*/,
                v113,
                v128,
                1,
                0,
                -1.0,
                1,
                effectDistancea,
                0LL);
LABEL_27:
              if ( _4__this->fields.isErrorDialog )
              {
                v52 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B68920(UnityEngine_WaitForEndOfFrame_TypeInfo);
                UnityEngine_WaitForEndOfFrame___ctor(v52, 0LL);
                v4->fields.__2__current = (Il2CppObject *)v52;
                p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                sub_1B68678(p__2__current, (int32_t)v52, v54, v55);
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
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v85->assetBundleMasterVersion, (int32_t)v84, v81, v82);
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
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v91->assetBundleDateVersion, (int32_t)v90, v86, v87);
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
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v97->assetBundleBuildVersion, (int32_t)v96, v92, v93);
      v98 = (int)v77->fields.__2__current;
      if ( v98 >= 2 )
      {
        v99 = 5LL;
        v287 = v77;
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
          v107 = (int)v100->fields.__2__current;
          if ( (unsigned int)v107 <= 4 )
            goto LABEL_282;
          v108 = (unsigned int)this;
          v109 = v107 >= 6 ? (System_String_o *)v100[1].klass : 0LL;
          wait_5__6 = (System_String_o *)v100->fields._wait_5__6;
          assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.assetBundleDic;
          v112 = (AssetData_o *)sub_1B68920(AssetData_TypeInfo);
          AssetData___ctor_37512764(v112, 0, wait_5__6, v102, configFileUrl_5__2, v105, v108, v109, effectDistance);
          if ( !assetBundleDic )
            goto LABEL_281;
          System_Collections_Generic_Dictionary_object__object___set_Item(
            assetBundleDic,
            (Il2CppObject *)wait_5__6,
            (Il2CppObject *)v112,
            (const MethodInfo_3189B54 *)Method_System_Collections_Generic_Dictionary_string__AssetData__set_Item__);
          v77 = v287;
          ++v99;
          v98 = (int)v287->fields.__2__current;
          if ( (int)v99 - 4 >= v98 )
            goto LABEL_120;
        }
        goto LABEL_282;
      }
LABEL_120:
      v129 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      ConfigFileAddress = AssetManager__get_ConfigFileAddress((const MethodInfo *)v129);
      v4->fields._configFileUrl_5__2 = ConfigFileAddress;
      sub_1B68678(
        (ServantStatusBattleListViewItem_o *)&v4->fields._configFileUrl_5__2,
        (int32_t)ConfigFileAddress,
        v131,
        v132);
      v4->fields._loader_5__3 = 0LL;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v4->fields._loader_5__3, 0, v133, v134);
LABEL_123:
      v135 = v4->fields._configFileUrl_5__2;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      UrlString = AssetManager__getUrlString(v135, method);
      v137 = UnityEngine_Networking_UnityWebRequest__Get(UrlString, 0LL);
      v4->fields._loader_5__3 = v137;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v4->fields._loader_5__3, (int32_t)v137, v138, v139);
      this = (AssetManager__InitCR_d__131_o *)v4->fields._loader_5__3;
      if ( !this )
        goto LABEL_281;
      UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
      v141 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v141 = ManagerConfig_TypeInfo;
      }
      TIMEOUT = v141->static_fields->TIMEOUT;
      v4->fields._loadProgress_5__5 = 0.0;
      v4->fields._requestTime_5__4 = unscaledTime + TIMEOUT;
      v143 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B68920(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v143, 0LL);
      v4->fields._wait_5__6 = v143;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v4->fields._wait_5__6, (int32_t)v143, v144, v145);
LABEL_129:
      v146 = (AssetManager__InitCR_d__131_o **)&v4->fields._loader_5__3;
      this = (AssetManager__InitCR_d__131_o *)v4->fields._loader_5__3;
      if ( !this )
        goto LABEL_281;
      this = (AssetManager__InitCR_d__131_o *)UnityEngine_Networking_UnityWebRequest__get_isDone(
                                                (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_136;
      this = *v146;
      if ( !*v146 )
        goto LABEL_281;
      downloadProgress = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                           (UnityEngine_Networking_UnityWebRequest_o *)this,
                           0LL);
      loadProgress_5__5 = v4->fields._loadProgress_5__5;
      v149 = downloadProgress;
      v152 = UnityEngine_Time__get_unscaledTime(0LL);
      v153 = v149 == loadProgress_5__5;
      v154 = v152;
      if ( !v153 )
      {
        v163 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v163 = ManagerConfig_TypeInfo;
        }
        v164 = v163->static_fields;
        this = (AssetManager__InitCR_d__131_o *)v4->fields._loader_5__3;
        v4->fields._requestTime_5__4 = v154 + v164->TIMEOUT;
        if ( this )
        {
          v4->fields._loadProgress_5__5 = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                                            (UnityEngine_Networking_UnityWebRequest_o *)this,
                                            0LL);
          goto LABEL_153;
        }
LABEL_281:
        sub_1B68930(this, method);
      }
      if ( v152 >= v4->fields._requestTime_5__4 )
      {
LABEL_136:
        if ( !_4__this )
          goto LABEL_281;
        this = *v146;
        if ( !*v146 )
          goto LABEL_281;
        if ( !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL) )
        {
          v162 = (Il2CppObject *)StringLiteral_2503/*"AssetStorageList download time over"*/;
          goto LABEL_249;
        }
        this = *v146;
        if ( !*v146 )
          goto LABEL_281;
        error = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        this = (AssetManager__InitCR_d__131_o *)System_String__IsNullOrEmpty(error, 0LL);
        if ( !*v146 )
          goto LABEL_281;
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v161 = UnityEngine_Networking_UnityWebRequest__get_error(
                   (UnityEngine_Networking_UnityWebRequest_o *)*v146,
                   0LL);
LABEL_155:
          v162 = (Il2CppObject *)v161;
          goto LABEL_249;
        }
        this = (AssetManager__InitCR_d__131_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                  (UnityEngine_Networking_UnityWebRequest_o *)*v146,
                                                  0LL);
        if ( !this )
          goto LABEL_281;
        text = UnityEngine_Networking_DownloadHandler__get_text((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
        if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
        v157 = CatAndMouseGame__MouseGame3(text, 0LL);
        if ( System_String__IsNullOrEmpty(v157, 0LL) )
        {
          v159 = v4->fields._configFileUrl_5__2;
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v160 = AssetManager__getUrlString(v159, v158);
          v161 = System_String__Concat_61419468((System_String_o *)StringLiteral_2502/*"AssetStorageList download error : "*/, v160, 0LL);
          goto LABEL_155;
        }
        this = (AssetManager__InitCR_d__131_o *)sub_1B6877C(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_281;
        method = (const MethodInfo *)this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_282;
        LOWORD(this->fields.__4__this) = -257;
        if ( !v157 )
          goto LABEL_281;
        this = (AssetManager__InitCR_d__131_o *)System_String__Trim_61449216(v157, (System_Char_array *)this, 0LL);
        if ( !this )
          goto LABEL_281;
        v168 = this;
        if ( System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_25072/*"~"*/, 0LL) )
        {
          this = (AssetManager__InitCR_d__131_o *)sub_1B6877C(char___TypeInfo, 2LL);
          if ( !this )
            goto LABEL_281;
          v169 = (int)this->fields.__2__current;
          method = (const MethodInfo *)this;
          if ( !v169 )
            goto LABEL_282;
          LOWORD(this->fields.__4__this) = 13;
          if ( v169 == 1 )
            goto LABEL_282;
          WORD1(this->fields.__4__this) = 10;
          v170 = System_String__IndexOfAny((System_String_o *)v168, (System_Char_array *)this, 0LL);
          if ( v170 >= 2 )
          {
            v171 = v170;
            v172 = System_String__Substring_61438472((System_String_o *)v168, 1, v170 - 1, 0LL);
            v173 = System_String__Substring((System_String_o *)v168, v171 + 1, 0LL);
            this = (AssetManager__InitCR_d__131_o *)System_Text_Encoding__get_UTF8(0LL);
            if ( !this )
              goto LABEL_281;
            v174 = (System_Byte_array *)((__int64 (__fastcall *)(AssetManager__InitCR_d__131_o *, System_String_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                                          this,
                                          v173,
                                          this->klass[1]._1.interfaceOffsets);
            if ( !Crc32_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
            v175 = Crc32__Compute(v174, 0LL);
            if ( System_UInt32__Parse(v172, 0LL) == v175 )
            {
              if ( *v146 )
              {
                UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)*v146, 0LL);
                *v146 = 0LL;
                sub_1B68678((ServantStatusBattleListViewItem_o *)&v4->fields._loader_5__3, 0, v178, v179);
              }
              if ( !v173 )
                goto LABEL_280;
              this = (AssetManager__InitCR_d__131_o *)sub_1B6877C(char___TypeInfo, 2LL);
              if ( !this )
                goto LABEL_281;
              v180 = (int)this->fields.__2__current;
              method = (const MethodInfo *)this;
              if ( v180 )
              {
                LOWORD(this->fields.__4__this) = 13;
                if ( v180 != 1 )
                {
                  WORD1(this->fields.__4__this) = 10;
                  v181 = System_String__Split_61441860(v173, (System_Char_array *)this, 1, 0LL);
                  v182 = sub_1B68920(AssetDataListInfo_TypeInfo);
                  AssetDataListInfo___ctor((AssetDataListInfo_o *)v182, v183);
                  if ( !v181 )
                    goto LABEL_281;
                  v186 = v181->max_length;
                  v285 = (ServantStatusBattleListViewItem_o *)(v182 + 16);
                  v286 = (ServantStatusBattleListViewItem_o *)(v182 + 24);
                  v288 = (ServantStatusBattleListViewItem_o *)(v182 + 32);
                  if ( v186 >= 1 )
                  {
                    v187 = 0;
                    while ( v187 < v186 )
                    {
                      this = (AssetManager__InitCR_d__131_o *)v181->m_Items[v187];
                      if ( !this )
                        goto LABEL_281;
                      this = (AssetManager__InitCR_d__131_o *)System_String__Split(
                                                                (System_String_o *)this,
                                                                0x2Cu,
                                                                0,
                                                                0LL);
                      if ( !this )
                        goto LABEL_281;
                      v188 = this;
                      if ( SLODWORD(this->fields.__2__current) < 1 )
                        goto LABEL_231;
                      this = (AssetManager__InitCR_d__131_o *)this->fields.__4__this;
                      if ( !this )
                        goto LABEL_281;
                      this = (AssetManager__InitCR_d__131_o *)System_String__StartsWith(
                                                                (System_String_o *)this,
                                                                (System_String_o *)StringLiteral_1886/*"@"*/,
                                                                0LL);
                      if ( !LODWORD(v188->fields.__2__current) )
                        goto LABEL_282;
                      v189 = (char)this;
                      this = (AssetManager__InitCR_d__131_o *)v188->fields.__4__this;
                      if ( !this )
                        goto LABEL_281;
                      if ( (v189 & 1) != 0 )
                      {
                        v190 = System_String__Substring((System_String_o *)this, 1, 0LL);
                        v191 = AssetManager_TypeInfo;
                        v192 = (int)v188->fields.__2__current;
                        v193 = (void **)&v188->fields._loader_5__3;
                        v194 = (void **)&v188->fields._configFileUrl_5__2;
                        v195 = v190;
                        if ( v192 == 2 )
                          v193 = &StringLiteral_1/*""*/;
                        v196 = v192 <= 1;
                        if ( v192 <= 1 )
                          v197 = &StringLiteral_1/*""*/;
                        else
                          v197 = v194;
                        if ( v196 )
                          v198 = &StringLiteral_1/*""*/;
                        else
                          v198 = v193;
                        v199 = (ServantStatusBattleListViewItem_c *)*v197;
                        v200 = (ServantStatusBattleListViewItem_c *)*v198;
                        if ( !AssetManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                          v191 = AssetManager_TypeInfo;
                        }
                        this = (AssetManager__InitCR_d__131_o *)System_String__op_Inequality(
                                                                  v195,
                                                                  v191->static_fields->assetBundleMasterVersion,
                                                                  0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                        {
                          this = (AssetManager__InitCR_d__131_o *)_4__this->fields.assetBundleDic;
                          if ( !this )
                            goto LABEL_281;
                          System_Collections_Generic_Dictionary_object__object___Clear(
                            (System_Collections_Generic_Dictionary_object__object__o *)this,
                            (const MethodInfo_3189CF0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
                        }
                        if ( !v182 )
                          goto LABEL_281;
                        v285->klass = (ServantStatusBattleListViewItem_c *)v195;
                        sub_1B68678(v285, (int32_t)v195, v201, v202);
                        v286->klass = v199;
                        sub_1B68678(v286, (int32_t)v199, v203, v204);
                        v288->klass = v200;
                        sub_1B68678(v288, (int32_t)v200, v205, v206);
                      }
                      else
                      {
                        this = (AssetManager__InitCR_d__131_o *)System_String__StartsWith(
                                                                  (System_String_o *)this,
                                                                  (System_String_o *)StringLiteral_25072/*"~"*/,
                                                                  0LL);
                        if ( ((unsigned __int8)this & 1) == 0 )
                        {
                          if ( !LODWORD(v188->fields.__2__current) )
                            goto LABEL_282;
                          this = (AssetManager__InitCR_d__131_o *)v188->fields.__4__this;
                          if ( !this )
                            goto LABEL_281;
                          this = (AssetManager__InitCR_d__131_o *)System_String__IndexOf(
                                                                    (System_String_o *)this,
                                                                    0x7Eu,
                                                                    0LL);
                          if ( (_DWORD)this != 1 )
                          {
                            if ( SLODWORD(v188->fields.__2__current) < 5 )
                              goto LABEL_231;
                            this = (AssetManager__InitCR_d__131_o *)v188->fields.__4__this;
                            if ( !this )
                              goto LABEL_281;
                            v207 = System_String__Trim((System_String_o *)this, 0LL);
                            this = (AssetManager__InitCR_d__131_o *)System_Int32__Parse(v207, 0LL);
                            version = (int)this;
                            if ( LODWORD(v188->fields.__2__current) < 3 )
                              goto LABEL_282;
                            this = (AssetManager__InitCR_d__131_o *)v188->fields._loader_5__3;
                            if ( !this )
                              goto LABEL_281;
                            v283 = v188->fields._configFileUrl_5__2;
                            v208 = System_String__Trim((System_String_o *)this, 0LL);
                            this = (AssetManager__InitCR_d__131_o *)System_Int32__Parse(v208, 0LL);
                            if ( LODWORD(v188->fields.__2__current) <= 3 )
                              goto LABEL_282;
                            v209 = (int)this;
                            this = *(AssetManager__InitCR_d__131_o **)&v188->fields._requestTime_5__4;
                            if ( !this )
                              goto LABEL_281;
                            v210 = System_String__Trim((System_String_o *)this, 0LL);
                            this = (AssetManager__InitCR_d__131_o *)System_UInt32__Parse(v210, 0LL);
                            v212 = (int)v188->fields.__2__current;
                            if ( (unsigned int)v212 <= 4 )
                              goto LABEL_282;
                            v213 = (unsigned int)this;
                            if ( v212 >= 6 )
                              klass = (System_String_o *)v188[1].klass;
                            else
                              klass = 0LL;
                            v214 = (System_String_o *)v188->fields._wait_5__6;
                            AssetData = AssetManager__GetAssetData(
                                          (AssetManager_o *)this,
                                          _4__this->fields.assetBundleDic,
                                          v214,
                                          v211);
                            if ( AssetData )
                            {
                              v217 = (Il2CppObject *)AssetData;
                              this = (AssetManager__InitCR_d__131_o *)AssetData__SetUpdateInfo(
                                                                        AssetData,
                                                                        version,
                                                                        v283,
                                                                        v209,
                                                                        v213,
                                                                        klass,
                                                                        v216);
                              if ( !v182 )
                                goto LABEL_281;
                              this = *(AssetManager__InitCR_d__131_o **)(v182 + 40);
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
                                  *(const MethodInfo_34BC278 **)(*(_QWORD *)(v221[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v223 = v220 + 8 * _2__current_low;
                                LODWORD(this->fields.__2__current) = _2__current_low + 1;
                                *(_QWORD *)(v223 + 32) = v217;
                                sub_1B68678((ServantStatusBattleListViewItem_o *)(v223 + 32), (int32_t)v217, v218, v219);
                              }
                              v214 = 0LL;
                            }
                            this = (AssetManager__InitCR_d__131_o *)System_String__IsNullOrEmpty(v214, 0LL);
                            if ( ((unsigned __int8)this & 1) == 0 )
                            {
                              if ( !v182 )
                                goto LABEL_281;
                              v224 = *(System_Collections_Generic_List_object__o **)(v182 + 40);
                              v225 = (AssetData_o *)sub_1B68920(AssetData_TypeInfo);
                              AssetData___ctor_37512904(
                                v225,
                                0,
                                v214,
                                0,
                                version,
                                v283,
                                v209,
                                v213,
                                klass,
                                effectDistance_8);
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
                                  *(const MethodInfo_34BC278 **)(*(_QWORD *)(v229[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v231 = &items->obj.klass + size;
                                v224->fields._size = size + 1;
                                v231[4] = (Il2CppClass *)v225;
                                sub_1B68678((ServantStatusBattleListViewItem_o *)(v231 + 4), (int32_t)v225, v226, v227);
                              }
                            }
                          }
                        }
                      }
                      v186 = v181->max_length;
                      if ( (int)++v187 >= v186 )
                        goto LABEL_231;
                    }
                    goto LABEL_282;
                  }
LABEL_231:
                  if ( !v182 )
                    goto LABEL_281;
                  v232 = AssetManager_TypeInfo;
                  v233 = v285->klass;
                  if ( !AssetManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                    v232 = AssetManager_TypeInfo;
                  }
                  v234 = v232->static_fields;
                  v234->assetBundleMasterVersion = (struct System_String_o *)v233;
                  sub_1B68678(
                    (ServantStatusBattleListViewItem_o *)&v234->assetBundleMasterVersion,
                    (int32_t)v233,
                    v184,
                    v185);
                  v235 = AssetManager_TypeInfo->static_fields;
                  v236 = v286->klass;
                  v235->assetBundleDateVersion = (struct System_String_o *)v286->klass;
                  sub_1B68678(
                    (ServantStatusBattleListViewItem_o *)&v235->assetBundleDateVersion,
                    (int32_t)v236,
                    v237,
                    v238);
                  v239 = AssetManager_TypeInfo->static_fields;
                  v240 = v288->klass;
                  v239->assetBundleBuildVersion = (struct System_String_o *)v288->klass;
                  sub_1B68678(
                    (ServantStatusBattleListViewItem_o *)&v239->assetBundleBuildVersion,
                    (int32_t)v240,
                    v241,
                    v242);
                  this = (AssetManager__InitCR_d__131_o *)_4__this->fields.assetBundleDic;
                  if ( !this )
                    goto LABEL_281;
                  System_Collections_Generic_Dictionary_object__object___Clear(
                    (System_Collections_Generic_Dictionary_object__object__o *)this,
                    (const MethodInfo_3189CF0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
                  this = *(AssetManager__InitCR_d__131_o **)(v182 + 40);
                  if ( !this )
                    goto LABEL_281;
                  System_Collections_Generic_List_object___GetEnumerator(
                    (System_Collections_Generic_List_Enumerator_T__o *)&v289,
                    (System_Collections_Generic_List_object__o *)this,
                    (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
                  v290 = v289;
                  while ( 1 )
                  {
                    v243 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                             &v290,
                             (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
                    if ( !v243 )
                      break;
                    current = v290.fields._current;
                    if ( !v290.fields._current )
                      sub_1B68930(v243, v244);
                    v246 = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.assetBundleDic;
                    if ( !v246 )
                      sub_1B68930(0LL, v244);
                    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                            v246,
                            (Il2CppObject *)v290.fields._current[1].monitor,
                            (const MethodInfo_3189D5C *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__) )
                    {
                      v248 = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.assetBundleDic;
                      if ( !v248 )
                        sub_1B68930(0LL, v247);
                      System_Collections_Generic_Dictionary_object__object___Add(
                        v248,
                        (Il2CppObject *)current[1].monitor,
                        current,
                        (const MethodInfo_3189B68 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
                    }
                  }
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v290,
                    (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
                  AssetManager__ConfigWriteRequest(_4__this, 1, v272);
LABEL_280:
                  v4->fields._configFileUrl_5__2 = 0LL;
                  sub_1B68678((ServantStatusBattleListViewItem_o *)&v4->fields._configFileUrl_5__2, 0, v176, v177);
                  v4->fields._loader_5__3 = 0LL;
                  sub_1B68678((ServantStatusBattleListViewItem_o *)&v4->fields._loader_5__3, 0, v273, v274);
                  v275 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B68920(UnityEngine_WaitForEndOfFrame_TypeInfo);
                  UnityEngine_WaitForEndOfFrame___ctor(v275, 0LL);
                  v4->fields.__2__current = (Il2CppObject *)v275;
                  v166 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                  sub_1B68678(v166, (int32_t)v275, v276, v277);
                  v167 = 6;
                  goto LABEL_278;
                }
              }
LABEL_282:
              sub_1B68938(this, method);
            }
            v249 = (Il2CppObject *)StringLiteral_2499/*"AssetStorageList download crc error"*/;
            if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
            UnityEngine_Debug__LogError(v249, 0LL);
          }
        }
        v162 = (Il2CppObject *)StringLiteral_2500/*"AssetStorageList download data error"*/;
        if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
        UnityEngine_Debug__LogError(v162, 0LL);
LABEL_249:
        if ( *v146 )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)*v146, 0LL);
          *v146 = 0LL;
          sub_1B68678((ServantStatusBattleListViewItem_o *)&v4->fields._loader_5__3, 0, v250, v251);
        }
        if ( !v162 )
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
          if ( System_String__op_Inequality(v253->ServerDefaultType, (System_String_o *)StringLiteral_11407/*"SCRIPT"*/, 0LL) )
          {
            _4__this->fields.isErrorDialog = 1;
            v254 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v255 = (ErrorDialog_ClickDelegate_o *)sub_1B68920(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(
              v255,
              (Il2CppObject *)_4__this,
              Method_AssetManager_OnClickWaitDebugDialog__,
              0LL);
            if ( !v254 )
              goto LABEL_281;
            *(_QWORD *)&effectDistanceb.fields.hasValue = 0LL;
            effectDistanceb.fields.value.fields.y = 0.0;
            CommonUI__OpenWarningDialog(
              (CommonUI_o *)v254,
              (System_String_o *)StringLiteral_15872/*"[FFFF80]Download error for debug"*/,
              (System_String_o *)v162,
              v255,
              1,
              0,
              -1.0,
              1,
              effectDistanceb,
              0LL);
LABEL_260:
            if ( _4__this->fields.isErrorDialog )
            {
              v256 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B68920(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v256, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v256;
              v166 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B68678(v166, (int32_t)v256, v257, v258);
              v167 = 3;
              goto LABEL_278;
            }
          }
        }
        _4__this->fields.isErrorDialog = 1;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        if ( !byte_4A07CF2 )
        {
          sub_1B686D4(&ManagementManager_TypeInfo, method);
          byte_4A07CF2 = 1;
        }
        v259 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v259 = ManagementManager_TypeInfo;
        }
        isDuringStartup = v259->static_fields->isDuringStartup;
        v261 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          if ( isDuringStartup )
          {
LABEL_270:
            v262 = LocalizationManager__Get((System_String_o *)StringLiteral_2137/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
            v263 = (ErrorDialog_ClickDelegate_o *)sub_1B68920(ErrorDialog_ClickDelegate_TypeInfo);
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
              v266 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B68920(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v266, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v266;
              v166 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B68678(v166, (int32_t)v266, v267, v268);
              v167 = 4;
              goto LABEL_278;
            }
LABEL_277:
            v269 = (UnityEngine_WaitForSeconds_o *)sub_1B68920(UnityEngine_WaitForSeconds_TypeInfo);
            UnityEngine_WaitForSeconds___ctor(v269, 1.0, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v269;
            v166 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B68678(v166, (int32_t)v269, v270, v271);
            v167 = 5;
            goto LABEL_278;
          }
        }
        else
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          if ( isDuringStartup )
            goto LABEL_270;
        }
        v264 = LocalizationManager__Get((System_String_o *)StringLiteral_2138/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
        v265 = (ErrorDialog_ClickDelegate_o *)sub_1B68920(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v265, (Il2CppObject *)_4__this, Method_AssetManager_OnClickRetryDialog__, 0LL);
        if ( !v261 )
          goto LABEL_281;
        CommonUI__OpenRetryDialog((CommonUI_o *)v261, (System_String_o *)StringLiteral_1/*""*/, v264, v265, 0, 0LL);
        goto LABEL_275;
      }
LABEL_153:
      v165 = (Il2CppObject *)v4->fields._wait_5__6;
      v4->fields.__2__current = v165;
      v166 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B68678(v166, (int32_t)v165, v150, v151);
      v167 = 2;
LABEL_278:
      *(_DWORD *)&v166[-1].fields.isMine = v167;
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
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v4->fields._wait_5__6, 0, v2, v3);
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
      sub_1B68678((ServantStatusBattleListViewItem_o *)&_4__this->fields.initCRW, 0, v2, v3);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B686E8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B68920(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B686E8(&Method_AssetManager__InitCR_d__131_System_Collections_IEnumerator_Reset__);
  sub_1B687FC(v3, v4);
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
  int32_t v2; // w2
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
  if ( (byte_4A07D80 & 1) == 0 )
  {
    this = (AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_o *)sub_1B686D4(
                                                                        &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                        method);
    byte_4A07D80 = 1;
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
    v7 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B68920(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v7, 0LL);
    v4->fields._wait_5__2 = v7;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&v4->fields._wait_5__2, (int32_t)v7, v8, v9);
  }
  if ( !_4__this )
    sub_1B68930(this, method);
  if ( _4__this->fields.inProgressUnloadUnusedAssets || _4__this->fields.requestUnloadUnusedAssets )
  {
    wait_5__2 = (Il2CppObject *)v4->fields._wait_5__2;
    v4->fields.__2__current = wait_5__2;
    p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    sub_1B68678(p__2__current, (int32_t)wait_5__2, v2, v3);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B686E8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B68920(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B686E8(&Method_AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_System_Collections_IEnumerator_Reset__);
  sub_1B687FC(v3, v4);
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
  if ( (byte_4A07D7B & 1) != 0 )
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
    sub_1B686D4(&UnityEngine_Application_TypeInfo, isDecide);
    byte_4A07D7B = 1;
    if ( isDecide )
      goto LABEL_3;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_68965772(0LL);
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
  __int64 v3; // x1
  AssetLoader_o *loader; // x20
  Il2CppObject *_4__this; // x22
  AssetLoader_LoadEndHandler_o *v6; // x21
  const MethodInfo *v7; // x3
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  struct AssetManager_LoadWaitStatus_o *waiter; // x8

  if ( (byte_4A07D7C & 1) == 0 )
  {
    sub_1B686D4(&Method_AssetManager_OnEndLoadAssetStorage__, method);
    sub_1B686D4(&AssetLoader_LoadEndHandler_TypeInfo, v3);
    byte_4A07D7C = 1;
  }
  loader = this->fields.loader;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v6 = (AssetLoader_LoadEndHandler_o *)sub_1B68920(AssetLoader_LoadEndHandler_TypeInfo);
  AssetLoader_LoadEndHandler___ctor(v6, _4__this, Method_AssetManager_OnEndLoadAssetStorage__, v7);
  waiter = this->fields.waiter;
  if ( !waiter || !loader )
    sub_1B68930(v8, v9);
  AssetLoader__StartLoad(loader, v6, waiter->fields.resourceNames, v10);
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

  v4 = this;
  if ( (byte_4A07D7D & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_string__Remove__, data);
    this = (AssetManager___c__DisplayClass169_0_o *)sub_1B686D4(
                                                      &Method_System_Collections_Generic_List_string__get_Count__,
                                                      v5);
    byte_4A07D7D = 1;
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
                                                    (const MethodInfo_34BD7A0 *)Method_System_Collections_Generic_List_string__Remove__);
  if ( v4->fields.calledCallbackFunc )
    return;
  remainNameList = v4->fields.remainNameList;
  if ( !remainNameList )
LABEL_12:
    sub_1B68930(this, data);
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
        AssetManager__LoadStart((AssetManager_o *)this, (const MethodInfo *)data);
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
  AssetManager__coUnloadUnusedAssets_d__138_o *v2; // x19
  __int64 v3; // x1
  int32_t _1__state; // w8
  struct AssetManager_o *_4__this; // x20
  UnityEngine_WaitForEndOfFrame_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  AssetManager_c *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *wait_5__2; // x1
  ServantStatusBattleListViewItem_o *v13; // x19
  bool v14; // w21
  UnityEngine_AsyncOperation_o *v15; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v17; // w2
  int32_t v18; // w3
  struct AssetManager_ResourceUnloadEventHandler_o *v19; // x8
  ServantStatusBattleListViewItem_o *p_unloadCallbacks; // x20
  struct AssetManager_ResourceUnloadEventHandler_o *unloadCallbacks; // t1
  int32_t v22; // w2
  int32_t v23; // w3

  v2 = this;
  if ( (byte_4A07D81 & 1) == 0 )
  {
    sub_1B686D4(&AssetManager_TypeInfo, method);
    this = (AssetManager__coUnloadUnusedAssets_d__138_o *)sub_1B686D4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v3);
    byte_4A07D81 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_19;
    unloadCallbacks = _4__this->fields.unloadCallbacks;
    p_unloadCallbacks = (ServantStatusBattleListViewItem_o *)&_4__this->fields.unloadCallbacks;
    v19 = unloadCallbacks;
    *((_WORD *)&p_unloadCallbacks[-1].fields.isCanSelect + 1) = 0;
    if ( unloadCallbacks )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v19->fields.m_target)(
        v19->fields.original_method_info,
        *(_QWORD *)&v19->fields.extra_arg);
      p_unloadCallbacks->klass = 0LL;
      sub_1B68678(p_unloadCallbacks, 0, v22, v23);
    }
    return 0;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v2->fields.__1__state = -1;
      v6 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B68920(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v6, 0LL);
      v2->fields._wait_5__2 = v6;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v2->fields._wait_5__2, (int32_t)v6, v7, v8);
      goto LABEL_8;
    }
    return 0;
  }
  v2->fields.__1__state = -1;
LABEL_8:
  v9 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  this = (AssetManager__coUnloadUnusedAssets_d__138_o *)AssetManager__LoadIsBusy((const MethodInfo *)v9);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( _4__this )
    {
      v14 = 1;
      _4__this->fields.inProgressUnloadUnusedAssets = 1;
      v15 = UnityEngine_Resources__UnloadUnusedAssets(0LL);
      v2->fields.__2__current = (Il2CppObject *)v15;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B68678(p__2__current, (int32_t)v15, v17, v18);
      *(_DWORD *)&p__2__current[-1].fields.isMine = 2;
      return v14;
    }
LABEL_19:
    sub_1B68930(this, method);
  }
  wait_5__2 = (Il2CppObject *)v2->fields._wait_5__2;
  v2->fields.__2__current = wait_5__2;
  v13 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B68678(v13, (int32_t)wait_5__2, v10, v11);
  v14 = 1;
  *(_DWORD *)&v13[-1].fields.isMine = 1;
  return v14;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B686E8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B68920(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B686E8(&Method_AssetManager__coUnloadUnusedAssets_d__138_System_Collections_IEnumerator_Reset__);
  sub_1B687FC(v3, v4);
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