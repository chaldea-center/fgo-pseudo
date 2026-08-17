void AssetManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct AssetManager_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct AssetManager_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  struct AssetManager_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w1
  struct AssetManager_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int32_t v40; // w1
  struct AssetManager_StaticFields *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  int32_t v48; // w1
  struct AssetManager_StaticFields *v49; // x0
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  int32_t v56; // w1
  struct AssetManager_StaticFields *v57; // x0
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  int32_t v64; // w1
  struct AssetManager_StaticFields *v65; // x0
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7

  if ( (byte_596F7AF & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&StringLiteral_2480/*"Asset"*/);
    sub_2213A60(&StringLiteral_2493/*"AssetStorageBack.txt"*/);
    sub_2213A60(&StringLiteral_23500/*"offline"*/);
    sub_2213A60(&StringLiteral_2492/*"AssetStorage.txt"*/);
    sub_2213A60(&StringLiteral_2494/*"AssetStorageCreate.txt"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_23569/*"online"*/);
    byte_596F7AF = 1;
  }
  v7 = StringLiteral_2480/*"Asset"*/;
  AssetManager_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_2480/*"Asset"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)AssetManager_TypeInfo->static_fields, v7, v1, v2, v3, v4, v5, v6);
  v8 = StringLiteral_23500/*"offline"*/;
  static_fields = AssetManager_TypeInfo->static_fields;
  static_fields->SAVE_DATA_OFFLINE = (struct System_String_o *)StringLiteral_23500/*"offline"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->SAVE_DATA_OFFLINE, v8, v10, v11, v12, v13, v14, v15);
  v16 = StringLiteral_23569/*"online"*/;
  v17 = AssetManager_TypeInfo->static_fields;
  v17->SAVE_DATA_ONLINE = (struct System_String_o *)StringLiteral_23569/*"online"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->SAVE_DATA_ONLINE, v16, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_2492/*"AssetStorage.txt"*/;
  v25 = AssetManager_TypeInfo->static_fields;
  v25->configFileName = (struct System_String_o *)StringLiteral_2492/*"AssetStorage.txt"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->configFileName, v24, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_2494/*"AssetStorageCreate.txt"*/;
  v33 = AssetManager_TypeInfo->static_fields;
  v33->createConfigFileName = (struct System_String_o *)StringLiteral_2494/*"AssetStorageCreate.txt"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33->createConfigFileName, v32, v34, v35, v36, v37, v38, v39);
  v40 = StringLiteral_2493/*"AssetStorageBack.txt"*/;
  v41 = AssetManager_TypeInfo->static_fields;
  v41->backConfigFileName = (struct System_String_o *)StringLiteral_2493/*"AssetStorageBack.txt"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v41->backConfigFileName, v40, v42, v43, v44, v45, v46, v47);
  v48 = (int)StringLiteral_1/*""*/;
  v49 = AssetManager_TypeInfo->static_fields;
  v49->assetBundleMasterVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v49->assetBundleMasterVersion, v48, v50, v51, v52, v53, v54, v55);
  v56 = (int)StringLiteral_1/*""*/;
  v57 = AssetManager_TypeInfo->static_fields;
  v57->assetBundleDateVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v57->assetBundleDateVersion, v56, v58, v59, v60, v61, v62, v63);
  v64 = (int)StringLiteral_1/*""*/;
  v65 = AssetManager_TypeInfo->static_fields;
  v65->assetBundleBuildVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v65->assetBundleBuildVersion, v64, v66, v67, v68, v69, v70, v71);
}


void AssetManager___ctor(AssetManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__AssetData__c *v3; // x0
  System_Collections_Generic_Dictionary_object__object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_Dictionary_object__object__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_Dictionary_object__object__o *v18; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  int32_t v25; // w1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Collections_Generic_List_AssetLoader__c *v32; // x0
  System_Collections_Generic_List_object__o *v33; // x20
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__c *v40; // x0
  System_Collections_Generic_Queue_T__o *v41; // x20
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7

  if ( (byte_596F7AE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_AssetLoader___ctor__);
    sub_2213A60(&System_Collections_Generic_List_AssetLoader__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
    sub_2213A60(&System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager___ctor__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596F7AE = 1;
  }
  v3 = System_Collections_Generic_Dictionary_string__AssetData__TypeInfo;
  *(_WORD *)&this->fields._DispLog = 257;
  this->fields.isInitEnd = 1;
  v4 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(v3);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v4,
    (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.assetBundleDic = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.assetBundleDic, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v11,
    (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.assetBundleReleaseDic = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)v11;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.assetBundleReleaseDic,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v18,
    (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.assetResourceDic = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)v18;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.assetResourceDic,
    (int32_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (int)StringLiteral_1/*""*/;
  this->fields.requestConfigWriteData = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.requestConfigWriteData,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = System_Collections_Generic_List_AssetLoader__TypeInfo;
  this->fields.requestWriteCounter = -1.0;
  v33 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v32);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_AssetLoader___ctor__);
  this->fields.processingAssetLoaderList = (struct System_Collections_Generic_List_AssetLoader__o *)v33;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.processingAssetLoaderList,
    (int32_t)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo;
  this->fields.loadParallelMax = 1;
  v41 = (System_Collections_Generic_Queue_T__o *)sub_2213CCC(v40);
  System_Collections_Generic_Queue_object____ctor(
    v41,
    (const MethodInfo_46D37D8 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
  this->fields.downLoadWaitList = (struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)v41;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.downLoadWaitList,
    (int32_t)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_47A2F28 *)Method_SingletonMonoBehaviour_AssetManager___ctor__);
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
  System_Collections_Generic_Queue_Enumerator_T__o v21; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_596F798 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
    byte_596F798 = 1;
  }
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
  memset(&v21, 0, sizeof(v21));
  if ( !processingAssetLoaderList )
    goto LABEL_10;
  v10 = 0;
  while ( v10 < processingAssetLoaderList->fields._size )
  {
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               processingAssetLoaderList,
                                                                               v10,
                                                                               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    if ( !processingAssetLoaderList )
      goto LABEL_10;
    v11 = (AssetLoader_o *)processingAssetLoaderList;
    syncRoot = (AssetData_o *)processingAssetLoaderList->fields._syncRoot;
    if ( syncRoot && AssetData__IsSame_47468396(syncRoot, type, name, 0) )
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
    sub_2213CDC(processingAssetLoaderList, *(_QWORD *)&type);
  System_Collections_Generic_Queue_object___GetEnumerator(
    &v21,
    (System_Collections_Generic_Queue_T__o *)processingAssetLoaderList,
    (const MethodInfo_46D3E5C *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_Queue_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_40FC600 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    if ( !v14 )
      break;
    Current = System_Collections_Generic_Queue_Enumerator_object___get_Current(
                &v21,
                (const MethodInfo_40FC6F0 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    v17 = (AssetManager_LoadWaitStatus_o *)Current;
    if ( !Current )
      sub_2213CDC(0, v16);
    klass = (AssetData_o *)Current[1].klass;
    if ( klass && AssetData__IsSame_47468396(klass, type, name, 0) )
    {
      AssetManager_LoadWaitStatus__AddCallback(v17, callbackFunc, v19);
      break;
    }
  }
  System_Collections_Generic_Queue_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_40FC5F0 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  return v14;
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
  const MethodInfo *v21; // x2
  System_Collections_Generic_Queue_Enumerator_T__o v23; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Queue_Enumerator_T__o v24; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_596F797 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
    byte_596F797 = 1;
  }
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
  memset(&v24, 0, sizeof(v24));
  if ( !processingAssetLoaderList )
    goto LABEL_10;
  v10 = 0;
  while ( v10 < processingAssetLoaderList->fields._size )
  {
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               processingAssetLoaderList,
                                                                               v10,
                                                                               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    if ( !processingAssetLoaderList )
      goto LABEL_10;
    v11 = (AssetLoader_o *)processingAssetLoaderList;
    syncRoot = (AssetData_o *)processingAssetLoaderList->fields._syncRoot;
    if ( syncRoot && AssetData__IsSame_47468396(syncRoot, type, name, 0) )
    {
      processingAssetLoaderList = (System_Collections_Generic_List_object__o *)v11->fields.data;
      if ( processingAssetLoaderList )
      {
        AssetData__AddEntry((AssetData_o *)processingAssetLoaderList, 0);
        if ( callbackFunc )
          AssetLoader__add_endCallback2(v11, callbackFunc, v21);
        return 1;
      }
LABEL_10:
      sub_2213CDC(processingAssetLoaderList, *(_QWORD *)&type);
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
    &v23,
    (System_Collections_Generic_Queue_T__o *)processingAssetLoaderList,
    (const MethodInfo_46D3E5C *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  v24 = v23;
  v23.fields._q = 0;
  *(_QWORD *)&v23.fields._version = &v24;
  while ( 1 )
  {
    v13 = System_Collections_Generic_Queue_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_40FC600 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    if ( !v13 )
      break;
    Current = System_Collections_Generic_Queue_Enumerator_object___get_Current(
                &v24,
                (const MethodInfo_40FC6F0 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    v16 = (AssetManager_LoadWaitStatus_o *)Current;
    if ( !Current )
      sub_2213CDC(0, v15);
    klass = (AssetData_o *)Current[1].klass;
    if ( klass && AssetData__IsSame_47468396(klass, type, name, 0) )
    {
      data = v16->fields.data;
      if ( !data )
        sub_2213CDC(0, v18);
      AssetData__AddEntry(data, 0);
      AssetManager_LoadWaitStatus__AddCallback(v16, callbackFunc, v20);
      break;
    }
  }
  System_Collections_Generic_Queue_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_40FC5F0 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  return v13;
}


void AssetManager__AddLoadWaitStatus(AssetManager_o *this, System_Action_o *callbackFunc, const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  System_Collections_Generic_Queue_T__o *downLoadWaitList; // x0

  if ( (byte_596F79A & 1) == 0 )
  {
    sub_2213A60(&AssetManager_LoadWaitStatus_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
    byte_596F79A = 1;
  }
  v5 = sub_2213CCC(AssetManager_LoadWaitStatus_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_QWORD *)(v5 + 24) = callbackFunc;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)callbackFunc, v6, v7, v8, v9, v10, v11);
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
    sub_2213CDC(0, v12);
  System_Collections_Generic_Queue_object___Enqueue(
    downLoadWaitList,
    (Il2CppObject *)v5,
    (const MethodInfo_46D3DA4 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
}


void AssetManager__AddLoadWaitStatus_47509712(AssetManager_o *this, AssetData_o *info, const MethodInfo *method)
{
  AssetManager_o *v4; // x20
  AssetManager_LoadWaitStatus_c *v5; // x0
  __int64 v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v4 = this;
  if ( (byte_596F79B & 1) == 0 )
  {
    sub_2213A60(&AssetManager_LoadWaitStatus_TypeInfo);
    this = (AssetManager_o *)sub_2213A60(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
    byte_596F79B = 1;
  }
  if ( !info
    || (v5 = AssetManager_LoadWaitStatus_TypeInfo,
        v4->fields.downloadSize += info->fields.size,
        v6 = sub_2213CCC(v5),
        System_Object___ctor((Il2CppObject *)v6, 0),
        *(_QWORD *)(v6 + 16) = info,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 16), (int32_t)info, v7, v8, v9, v10, v11, v12),
        (this = (AssetManager_o *)v4->fields.downLoadWaitList) == 0) )
  {
    sub_2213CDC(this, info);
  }
  System_Collections_Generic_Queue_object___Enqueue(
    (System_Collections_Generic_Queue_T__o *)this,
    (Il2CppObject *)v6,
    (const MethodInfo_46D3DA4 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
}


void AssetManager__AddLoadWaitStatus_47521216(
        AssetManager_o *this,
        AssetData_o *info,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        System_String_array *resourceNames,
        bool canCancel,
        const MethodInfo *method)
{
  AssetManager_o *v10; // x21
  AssetManager_LoadWaitStatus_c *v11; // x0
  AssetManager_LoadWaitStatus_o *v12; // x24
  const MethodInfo *v13; // x5

  v10 = this;
  if ( (byte_596F79C & 1) == 0 )
  {
    sub_2213A60(&AssetManager_LoadWaitStatus_TypeInfo);
    this = (AssetManager_o *)sub_2213A60(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
    byte_596F79C = 1;
  }
  if ( !info
    || (v11 = AssetManager_LoadWaitStatus_TypeInfo,
        v10->fields.downloadSize += info->fields.size,
        v12 = (AssetManager_LoadWaitStatus_o *)sub_2213CCC(v11),
        AssetManager_LoadWaitStatus___ctor_47521404(v12, info, callbackFunc, resourceNames, canCancel, v13),
        (this = (AssetManager_o *)v10->fields.downLoadWaitList) == 0) )
  {
    sub_2213CDC(this, info);
  }
  System_Collections_Generic_Queue_object___Enqueue(
    (System_Collections_Generic_Queue_T__o *)this,
    (Il2CppObject *)v12,
    (const MethodInfo_46D3DA4 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
}


System_Collections_IEnumerator_o *AssetManager__AssetObjectListSetupAndCall(
        AssetData_o *asset,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596F7AB & 1) == 0 )
  {
    sub_2213A60(&AssetManager__AssetObjectListSetupAndCall_d__191_TypeInfo);
    byte_596F7AB = 1;
  }
  v5 = sub_2213CCC(AssetManager__AssetObjectListSetupAndCall_d__191_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = asset;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)asset, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = action;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)action, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *AssetManager__AssetObjectListSetupAndCall_47523312(
        AssetData_array *assetList,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596F7AC & 1) == 0 )
  {
    sub_2213A60(&AssetManager__AssetObjectListSetupAndCall_d__192_TypeInfo);
    byte_596F7AC = 1;
  }
  v5 = sub_2213CCC(AssetManager__AssetObjectListSetupAndCall_d__192_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = assetList;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)assetList, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = action;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)action, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void AssetManager__AssetStorageAddEntryCount(System_String_array *nameList, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x20
  AssetData_o *AssetData; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v10; // x21
  System_String_o *v11; // x2

  if ( (byte_596F780 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596F780 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  AssetData = (AssetData_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( ((unsigned __int8)AssetData & 1) == 0 )
  {
    if ( !nameList )
LABEL_17:
      sub_2213CDC(AssetData, v7);
    max_length = nameList->max_length;
    if ( (int)max_length >= 1 )
    {
      v10 = 0;
      do
      {
        if ( v10 >= (unsigned int)max_length )
          sub_2213CE4(AssetData);
        v11 = nameList->m_Items[v10];
        if ( v11 )
        {
          if ( !Instance )
            goto LABEL_17;
          AssetData = AssetManager__GetAssetData(
                        (AssetManager_o *)AssetData,
                        (System_Collections_Generic_Dictionary_string__AssetData__o *)Instance[4].klass,
                        v11,
                        v8);
          if ( AssetData )
            AssetData__AddEntry(AssetData, 0);
        }
        LODWORD(max_length) = nameList->max_length;
        ++v10;
      }
      while ( (__int64)v10 < (int)max_length );
    }
  }
}


void AssetManager__CancelAndReleaseDownloadAssetStorage(
        AssetManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *v5; // x21
  __int64 v6; // x1
  MethodInfo *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  void *downLoadWaitList; // x0
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o **p_downLoadWaitList; // x22
  char v15; // w27
  __int64 v16; // x24
  Il2CppObject *v17; // x23
  int32_t v18; // w23
  AssetData_o *v19; // x0
  AssetManager___c_c *v20; // x8
  AssetLoader_o *v21; // x24
  struct AssetManager___c_StaticFields *static_fields; // x9
  AssetLoader_LoadEndDataHandler_o *_9__131_0; // x25
  Il2CppObject *v24; // x26
  const MethodInfo *v25; // x3
  struct AssetManager___c_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7

  if ( (byte_596F78E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
    sub_2213A60(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
    sub_2213A60(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__);
    sub_2213A60(&System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo);
    sub_2213A60(&Method_AssetManager___c__CancelAndReleaseDownloadAssetStorage_b__131_0__);
    sub_2213A60(&AssetManager___c_TypeInfo);
    byte_596F78E = 1;
  }
  v5 = (System_Collections_Generic_Queue_T__o *)sub_2213CCC(System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v5,
    (const MethodInfo_46D37D8 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
  p_downLoadWaitList = &this->fields.downLoadWaitList;
  downLoadWaitList = this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
    goto LABEL_33;
  v15 = 0;
  while ( *((int *)downLoadWaitList + 8) > 0 )
  {
    downLoadWaitList = System_Collections_Generic_Queue_object___Dequeue(
                         (System_Collections_Generic_Queue_T__o *)downLoadWaitList,
                         (const MethodInfo_46D3F34 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
    if ( !downLoadWaitList )
      goto LABEL_33;
    v16 = *((_QWORD *)downLoadWaitList + 2);
    v17 = (Il2CppObject *)downLoadWaitList;
    if ( v16
      && (downLoadWaitList = (void *)AssetData__IsSame(*((AssetData_o **)downLoadWaitList + 2), name, 0),
          ((unsigned __int8)downLoadWaitList & 1) != 0) )
    {
      v15 = 1;
      downLoadWaitList = this->fields.downLoadWaitList;
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
        (const MethodInfo_46D3DA4 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
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
                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
        if ( !downLoadWaitList )
          goto LABEL_33;
        v19 = (AssetData_o *)*((_QWORD *)downLoadWaitList + 4);
        if ( v19 && AssetData__IsSame_47468396(v19, 0, name, 0) )
        {
          downLoadWaitList = this->fields.processingAssetLoaderList;
          if ( !downLoadWaitList )
            goto LABEL_33;
          downLoadWaitList = System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)downLoadWaitList,
                               v18,
                               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
          v20 = AssetManager___c_TypeInfo;
          v21 = (AssetLoader_o *)downLoadWaitList;
          if ( !*(&AssetManager___c_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(AssetManager___c_TypeInfo, v6, v7);
            v20 = AssetManager___c_TypeInfo;
          }
          static_fields = v20->static_fields;
          _9__131_0 = static_fields->__9__131_0;
          if ( !_9__131_0 )
          {
            if ( !*(&v20->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v20, v6, v7);
              static_fields = AssetManager___c_TypeInfo->static_fields;
            }
            v24 = (Il2CppObject *)static_fields->__9;
            _9__131_0 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
            AssetLoader_LoadEndDataHandler___ctor(
              _9__131_0,
              v24,
              Method_AssetManager___c__CancelAndReleaseDownloadAssetStorage_b__131_0__,
              v25);
            v26 = AssetManager___c_TypeInfo->static_fields;
            v26->__9__131_0 = _9__131_0;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v26->__9__131_0,
              (int32_t)_9__131_0,
              v27,
              v28,
              v29,
              v30,
              v31,
              v32);
          }
          if ( !v21 )
            goto LABEL_33;
          if ( _9__131_0 )
            AssetLoader__add_endCallback2(v21, _9__131_0, v7);
        }
        downLoadWaitList = this->fields.processingAssetLoaderList;
        ++v18;
        if ( !downLoadWaitList )
          goto LABEL_33;
      }
      goto LABEL_15;
    }
LABEL_33:
    sub_2213CDC(downLoadWaitList, v6);
  }
LABEL_15:
  this->fields.downLoadWaitList = (struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.downLoadWaitList,
    (int32_t)v5,
    (System_String_o *)v7,
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
    sub_2213CDC(this, 0);
  max_length = names->max_length;
  if ( (int)max_length >= 1 )
  {
    v6 = 0;
    do
    {
      if ( v6 >= (unsigned int)max_length )
        sub_2213CE4(this);
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
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_Queue_T__o *downLoadWaitList; // x0
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o **p_downLoadWaitList; // x21
  struct System_Object_array *array; // x8

  if ( (byte_596F78D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
    sub_2213A60(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
    sub_2213A60(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__);
    sub_2213A60(&System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo);
    byte_596F78D = 1;
  }
  v3 = (System_Collections_Generic_Queue_T__o *)sub_2213CCC(System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v3,
    (const MethodInfo_46D37D8 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
  p_downLoadWaitList = &this->fields.downLoadWaitList;
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
LABEL_12:
    sub_2213CDC(downLoadWaitList, v4);
  while ( downLoadWaitList->fields._size > 0 )
  {
    downLoadWaitList = (System_Collections_Generic_Queue_T__o *)System_Collections_Generic_Queue_object___Dequeue(
                                                                  downLoadWaitList,
                                                                  (const MethodInfo_46D3F34 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
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
        (const MethodInfo_46D3DA4 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
    }
    downLoadWaitList = (System_Collections_Generic_Queue_T__o *)*p_downLoadWaitList;
    if ( !*p_downLoadWaitList )
      goto LABEL_12;
  }
  this->fields.downLoadWaitList = (struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.downLoadWaitList, (int32_t)v3, v5, v6, v7, v8, v9, v10);
  this->fields.isCancelDownload = 1;
}


void AssetManager__CancelDownloadAssetStorageAll(AssetManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *downLoadWaitList; // x0

  if ( (byte_596F790 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__);
    byte_596F790 = 1;
  }
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
  this->fields.downloadSize = 0;
  if ( !downLoadWaitList )
    sub_2213CDC(0, method);
  System_Collections_Generic_Queue_object___Clear(
    downLoadWaitList,
    (const MethodInfo_46D3A6C *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__);
}


bool AssetManager__CheckDateVersion(System_String_o *dateVersion, const MethodInfo *method)
{
  __int64 v2; // x2
  AssetManager_c *v4; // x0
  System_String_o *assetBundleDateVersion; // x0

  if ( (byte_596F758 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596F758 = 1;
  }
  v4 = AssetManager_TypeInfo;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
    v4 = AssetManager_TypeInfo;
  }
  assetBundleDateVersion = v4->static_fields->assetBundleDateVersion;
  if ( !assetBundleDateVersion )
    sub_2213CDC(0, method);
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
  System_Collections_Generic_Queue_Enumerator_T__o v15; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596F799 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
    byte_596F799 = 1;
  }
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
  memset(&v15, 0, sizeof(v15));
  if ( !processingAssetLoaderList )
    goto LABEL_10;
  v8 = 0;
  while ( v8 < processingAssetLoaderList->fields._size )
  {
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               processingAssetLoaderList,
                                                                               v8,
                                                                               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    if ( !processingAssetLoaderList )
      goto LABEL_10;
    syncRoot = (AssetData_o *)processingAssetLoaderList->fields._syncRoot;
    if ( syncRoot && AssetData__IsSame_47468396(syncRoot, type, name, 0) )
      return 1;
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
    ++v8;
    if ( !processingAssetLoaderList )
      goto LABEL_10;
  }
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.downLoadWaitList;
  if ( !processingAssetLoaderList )
LABEL_10:
    sub_2213CDC(processingAssetLoaderList, *(_QWORD *)&type);
  System_Collections_Generic_Queue_object___GetEnumerator(
    &v15,
    (System_Collections_Generic_Queue_T__o *)processingAssetLoaderList,
    (const MethodInfo_46D3E5C *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_Queue_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_40FC600 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    if ( !v10 )
      break;
    Current = System_Collections_Generic_Queue_Enumerator_object___get_Current(
                &v15,
                (const MethodInfo_40FC6F0 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    if ( !Current )
      sub_2213CDC(0, v12);
    klass = (AssetData_o *)Current[1].klass;
    if ( klass )
    {
      if ( AssetData__IsSame_47468396(klass, type, name, 0) )
        break;
    }
  }
  System_Collections_Generic_Queue_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_40FC5F0 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  return v10;
}


bool AssetManager__CheckVersion(System_String_o *masterVersion, System_String_o *dateVersion, const MethodInfo *method)
{
  AssetManager_c *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  AssetManager_c *v8; // x0

  if ( (byte_596F757 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596F757 = 1;
  }
  v5 = AssetManager_TypeInfo;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, dateVersion, method);
    v5 = AssetManager_TypeInfo;
  }
  if ( !System_String__op_Equality(v5->static_fields->assetBundleMasterVersion, masterVersion, 0) )
    return 0;
  v8 = AssetManager_TypeInfo;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v6, v7);
    v8 = AssetManager_TypeInfo;
  }
  return System_String__op_Equality(v8->static_fields->assetBundleDateVersion, dateVersion, 0);
}


void AssetManager__ClearCacheWithoutSystemAssets(AssetManager_o *this, const MethodInfo *method)
{
  System_Collections_ICollection_o *assetBundleDic; // x0
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *Values; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *currentValue; // x21
  Il2CppClass *klass; // x0
  const MethodInfo *v10; // x2
  System_String_o *Path; // x24
  struct System_Collections_Generic_Dictionary_TKey__TValue__o *dictionary; // x20
  const MethodInfo *v13; // x2
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v14; // [xsp+8h] [xbp-98h] BYREF
  int v15; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v16; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_596F7AD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    sub_2213A60(&StringLiteral_13108/*"SYSTEM"*/);
    byte_596F7AD = 1;
  }
  assetBundleDic = (System_Collections_ICollection_o *)this->fields.assetBundleDic;
  memset(&v16, 0, sizeof(v16));
  v15 = 0;
  if ( !BasicHelper__IsNullOrEmpty(assetBundleDic, 0) )
  {
    Values = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
    if ( !Values
      || (Values = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                Values,
                                                                                (const MethodInfo_3FFDA34 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0 )
    {
      sub_2213CDC(Values, v4);
    }
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v14,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Values,
      (const MethodInfo_3CCF33C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    v16 = v14;
    v14.fields._dictionary = 0;
    *(_QWORD *)&v14.fields._index = &v16;
    while ( 1 )
    {
      v6 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
             &v16,
             (const MethodInfo_4169ED8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
      if ( !v6 )
        break;
      currentValue = v16.fields._currentValue;
      if ( !v16.fields._currentValue )
        sub_2213CDC(v6, v7);
      klass = v16.fields._currentValue[2].klass;
      if ( !klass )
        sub_2213CDC(0, v7);
      if ( !System_String__Equals_75686576((System_String_o *)klass, (System_String_o *)StringLiteral_13108/*"SYSTEM"*/, 5, 0) )
      {
        AssetManager__ReleaseReservation(this, (AssetData_o *)currentValue, v10);
        Path = AssetData__get_Path((AssetData_o *)currentValue, 0);
        if ( System_IO_File__Exists(Path, 0) )
        {
          System_IO_File__Delete(Path, 0);
          if ( !System_IO_File__Exists(Path, 0) )
            AssetData__ResetVersion((AssetData_o *)currentValue, 0);
        }
      }
    }
    dictionary = v14.fields._dictionary;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
      *(System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o **)&v14.fields._index,
      (const MethodInfo_4169ED4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    if ( dictionary )
      sub_2213CD4(dictionary);
    AssetManager__ConfigWriteRequest(this, 1, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void AssetManager__ConfigWriteRequest(AssetManager_o *this, bool isFast, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *assetBundleDic; // x0
  int32_t Count; // w21
  System_Text_StringBuilder_o *v7; // x0
  int32_t v8; // w1
  System_Text_StringBuilder_o *v9; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  AssetManager_c *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  AssetManager_c *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  AssetManager_c *v18; // x0
  _BOOL8 v19; // x0
  __int64 v20; // x1
  Il2CppObject *currentValue; // x28
  Il2CppObject *requestConfigWriteData; // x0
  System_String_o *v23; // x21
  System_Text_Encoding_o *UTF8; // x0
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x2
  System_Byte_array *v28; // x23
  System_String_o *v29; // x1
  __int64 v30; // x1
  __int64 v31; // x2
  System_String_o *v32; // x21
  struct System_String_o *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v40; // [xsp+0h] [xbp-A0h] BYREF
  uint32_t v41; // [xsp+18h] [xbp-88h] BYREF
  bool lockTaken[4]; // [xsp+1Ch] [xbp-84h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v43; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *v44; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_596F793 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&CatAndMouseGame_TypeInfo);
    sub_2213A60(&Crc32_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_26661/*"~"*/);
    byte_596F793 = 1;
  }
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  memset(&v43, 0, sizeof(v43));
  v44 = 0;
  lockTaken[0] = 0;
  v41 = 0;
  if ( !assetBundleDic )
    goto LABEL_35;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         assetBundleDic,
         (const MethodInfo_3FFD8C8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) < 1 )
    return;
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic )
    goto LABEL_35;
  Count = System_Collections_Generic_Dictionary_object__object___get_Count(
            assetBundleDic,
            (const MethodInfo_3FFD8C8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__);
  v7 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
  v8 = 60 * Count;
  v9 = v7;
  System_Text_StringBuilder___ctor_75728496(v7, v8, 0);
  if ( !v9 )
    goto LABEL_35;
  System_Text_StringBuilder__Append_75737396(v9, 0x40u, 0);
  v12 = AssetManager_TypeInfo;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v10, v11);
    v12 = AssetManager_TypeInfo;
  }
  System_Text_StringBuilder__Append_75735064(v9, v12->static_fields->assetBundleMasterVersion, 0);
  if ( !System_String__IsNullOrEmpty(AssetManager_TypeInfo->static_fields->assetBundleDateVersion, 0) )
  {
    System_Text_StringBuilder__Append_75737396(v9, 0x2Cu, 0);
    v15 = AssetManager_TypeInfo;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v13, v14);
      v15 = AssetManager_TypeInfo;
    }
    System_Text_StringBuilder__Append_75735064(v9, v15->static_fields->assetBundleDateVersion, 0);
    if ( !System_String__IsNullOrEmpty(AssetManager_TypeInfo->static_fields->assetBundleBuildVersion, 0) )
    {
      System_Text_StringBuilder__Append_75737396(v9, 0x2Cu, 0);
      v18 = AssetManager_TypeInfo;
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v16, v17);
        v18 = AssetManager_TypeInfo;
      }
      System_Text_StringBuilder__Append_75735064(v9, v18->static_fields->assetBundleBuildVersion, 0);
    }
  }
  System_Text_StringBuilder__Append_75737396(v9, 0xAu, 0);
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      assetBundleDic,
                                                                                      (const MethodInfo_3FFDA34 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0 )
  {
LABEL_35:
    sub_2213CDC(assetBundleDic, isFast);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v40,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_3CCF33C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v43 = v40;
  v40.fields._dictionary = 0;
  *(_QWORD *)&v40.fields._index = &v43;
  while ( 1 )
  {
    v19 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v43,
            (const MethodInfo_4169ED8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v19 )
      break;
    currentValue = v43.fields._currentValue;
    if ( !v43.fields._currentValue )
      sub_2213CDC(v19, v20);
    System_Text_StringBuilder__Append_75737564(v9, (int32_t)v43.fields._currentValue[2].monitor, 0);
    System_Text_StringBuilder__Append_75737396(v9, 0x2Cu, 0);
    System_Text_StringBuilder__Append_75735064(v9, (System_String_o *)currentValue[2].klass, 0);
    System_Text_StringBuilder__Append_75737396(v9, 0x2Cu, 0);
    System_Text_StringBuilder__Append_75737564(v9, (int32_t)currentValue[3].klass, 0);
    System_Text_StringBuilder__Append_75737396(v9, 0x2Cu, 0);
    System_Text_StringBuilder__Append_75737740(v9, HIDWORD(currentValue[3].klass), 0);
    System_Text_StringBuilder__Append_75737396(v9, 0x2Cu, 0);
    System_Text_StringBuilder__Append_75735064(v9, (System_String_o *)currentValue[1].monitor, 0);
    System_Text_StringBuilder__Append_75735064(v9, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v43,
    (const MethodInfo_4169ED4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  lockTaken[0] = 0;
  requestConfigWriteData = (Il2CppObject *)this->fields.requestConfigWriteData;
  v40.fields._dictionary = 0;
  *(_QWORD *)&v40.fields._index = lockTaken;
  v44 = requestConfigWriteData;
  v40.fields._currentValue = (Il2CppObject *)&v44;
  System_Threading_Monitor__Enter_77553232(requestConfigWriteData, lockTaken, 0);
  v23 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v9->klass->vtable._3_ToString.methodPtr)(
                             v9,
                             v9->klass->vtable._3_ToString.method);
  UTF8 = System_Text_Encoding__get_UTF8(0);
  if ( !UTF8 )
    sub_2213CDC(0, v25);
  v28 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
                               UTF8,
                               v23,
                               UTF8->klass->vtable._18_GetBytes.method);
  if ( !*(&Crc32_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo, v26, v27);
  v41 = Crc32__Compute(v28, 0);
  v29 = System_UInt32__ToString((uint32_t)&v41, 0);
  v32 = System_String__Concat_75696856(
          (System_String_o *)StringLiteral_26661/*"~"*/,
          v29,
          (System_String_o *)StringLiteral_43/*"\n"*/,
          v23,
          0);
  if ( !*(&CatAndMouseGame_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v30, v31);
  v33 = CatAndMouseGame__CatGame8(v32, 0);
  this->fields.requestConfigWriteData = v33;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.requestConfigWriteData,
    (int32_t)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  if ( isFast )
  {
    this->fields.requestWriteCounter = 0.0;
  }
  else if ( this->fields.requestWriteCounter < 0.0 )
  {
    this->fields.requestWriteCounter = 1.0;
  }
  if ( lockTaken[0] )
    System_Threading_Monitor__Exit((Il2CppObject *)v40.fields._currentValue->klass, 0);
}


void AssetManager__ConfigWriteRequestThread(AssetManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  const MethodInfo *v10; // x1

  AssetManager__ConfigWriteRequest(this, 0, v2);
  this->fields.writeRequestThread = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.writeRequestThread, 0, v4, v5, v6, v7, v8, v9);
  if ( this->fields.reserveWriteRequest )
    AssetManager__StartThreadConfigWriteRequest(this, v10);
}


System_String_o *AssetManager__ConvertDownloadSizeToString(AssetManager_o *this, double size, const MethodInfo *method)
{
  double v3; // d8
  System_String_o *v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x19
  int32_t v13; // w1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  int32_t v20; // w1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  int32_t v27; // w1
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  int32_t v34; // w1
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  int32_t v41; // w1
  unsigned int v42; // w21
  System_String_o format; // [xsp+8h] [xbp-28h] BYREF

  v3 = size;
  *(double *)&format.klass = size;
  if ( (byte_596F787 & 1) == 0 )
  {
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_8541/*"KB"*/);
    sub_2213A60(&StringLiteral_26608/*"{0}{1}"*/);
    sub_2213A60(&StringLiteral_9618/*"N2"*/);
    sub_2213A60(&StringLiteral_13912/*"TB"*/);
    sub_2213A60(&StringLiteral_2622/*"B"*/);
    sub_2213A60(&StringLiteral_8997/*"MB"*/);
    sub_2213A60(&StringLiteral_7215/*"GB"*/);
    byte_596F787 = 1;
  }
  v4 = (System_String_o *)sub_2213B20(string___TypeInfo, 5);
  if ( !v4 )
    sub_2213CDC(0, v5);
  v12 = v4;
  if ( !LODWORD(v4[1].klass) )
    goto LABEL_16;
  v13 = StringLiteral_2622/*"B"*/;
  v4[1].monitor = (void *)StringLiteral_2622/*"B"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4[1].monitor, v13, v6, v7, v8, v9, v10, v11);
  if ( ((__int64)v12[1].klass & 0xFFFFFFFE) == 0 )
    goto LABEL_16;
  v20 = StringLiteral_8541/*"KB"*/;
  v12[1].fields = (System_String_Fields)StringLiteral_8541/*"KB"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12[1].fields, v20, v14, v15, v16, v17, v18, v19);
  if ( LODWORD(v12[1].klass) <= 2 )
    goto LABEL_16;
  v27 = StringLiteral_8997/*"MB"*/;
  v12[2].klass = (System_String_c *)StringLiteral_8997/*"MB"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12[2], v27, v21, v22, v23, v24, v25, v26);
  if ( ((__int64)v12[1].klass & 0xFFFFFFFC) == 0 )
    goto LABEL_16;
  v34 = StringLiteral_7215/*"GB"*/;
  v12[2].monitor = (void *)StringLiteral_7215/*"GB"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12[2].monitor, v34, v28, v29, v30, v31, v32, v33);
  if ( LODWORD(v12[1].klass) <= 4 )
    goto LABEL_16;
  v41 = StringLiteral_13912/*"TB"*/;
  v12[2].fields = (System_String_Fields)StringLiteral_13912/*"TB"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12[2].fields, v41, v35, v36, v37, v38, v39, v40);
  v42 = 0;
  if ( v3 >= 1000.0 )
  {
    while ( 1 )
    {
      v3 = v3 / 1000.0;
      if ( v42 == 3 )
        break;
      ++v42;
      if ( v3 < 1000.0 )
        goto LABEL_14;
    }
    v42 = 4;
  }
LABEL_14:
  *(double *)&format.klass = v3;
  v4 = System_Double__ToString_77048788(1000.0, &format, (const MethodInfo *)StringLiteral_9618/*"N2"*/);
  if ( v42 >= LODWORD(v12[1].klass) )
LABEL_16:
    sub_2213CE4(v4);
  return System_String__Format_75697880(
           (System_String_o *)StringLiteral_26608/*"{0}{1}"*/,
           (Il2CppObject *)v4,
           *((Il2CppObject **)&v12[1].monitor + v42),
           0);
}


void AssetManager__DebugLog(AssetManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *downLoadWaitList; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v6; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v7; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v8; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_596F781 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_2213A60(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    byte_596F781 = 1;
  }
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
  memset(&v8, 0, sizeof(v8));
  memset(&v7, 0, sizeof(v7));
  if ( !downLoadWaitList )
    goto LABEL_21;
  System_Collections_Generic_Queue_object___GetEnumerator(
    (System_Collections_Generic_Queue_Enumerator_T__o *)&v6,
    downLoadWaitList,
    (const MethodInfo_46D3E5C *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  v8 = v6;
  v6.fields._dictionary = 0;
  *(_QWORD *)&v6.fields._index = &v8;
  while ( System_Collections_Generic_Queue_Enumerator_object___MoveNext(
            (System_Collections_Generic_Queue_Enumerator_T__o *)&v8,
            (const MethodInfo_40FC600 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__) )
  {
    if ( !System_Collections_Generic_Queue_Enumerator_object___get_Current(
            (System_Collections_Generic_Queue_Enumerator_T__o *)&v8,
            (const MethodInfo_40FC6F0 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__) )
      sub_2213CDC(0, v4);
  }
  System_Collections_Generic_Queue_Enumerator_object___Dispose(
    (System_Collections_Generic_Queue_Enumerator_T__o *)&v8,
    (const MethodInfo_40FC5F0 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  if ( !this->fields.processingAssetLoaderList )
    goto LABEL_21;
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.assetBundleDic;
  if ( !downLoadWaitList )
    goto LABEL_21;
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                (System_Collections_Generic_Dictionary_object__object__o *)downLoadWaitList,
                                                                (const MethodInfo_3FFDA34 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !downLoadWaitList )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v6,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)downLoadWaitList,
    (const MethodInfo_3CCF33C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v7 = v6;
  v6.fields._dictionary = 0;
  *(_QWORD *)&v6.fields._index = &v7;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v7,
            (const MethodInfo_4169ED8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__) )
  {
    if ( !v7.fields._currentValue )
      sub_2213CDC(0, v5);
    AssetData__get_IsEmpty((AssetData_o *)v7.fields._currentValue, 0);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v7,
    (const MethodInfo_4169ED4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.assetResourceDic;
  if ( !downLoadWaitList
    || (downLoadWaitList = (System_Collections_Generic_Queue_T__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                      (System_Collections_Generic_Dictionary_object__object__o *)downLoadWaitList,
                                                                      (const MethodInfo_3FFDA34 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0 )
  {
LABEL_21:
    sub_2213CDC(downLoadWaitList, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v6,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)downLoadWaitList,
    (const MethodInfo_3CCF33C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v7 = v6;
  v6.fields._dictionary = 0;
  *(_QWORD *)&v6.fields._index = &v7;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v7,
            (const MethodInfo_4169ED8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__) )
    ;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v7,
    (const MethodInfo_4169ED4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
}


System_Collections_IEnumerator_o *AssetManager__DelayLoadStart(AssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596F79F & 1) == 0 )
  {
    sub_2213A60(&AssetManager__DelayLoadStart_d__154_TypeInfo);
    byte_596F79F = 1;
  }
  v3 = sub_2213CCC(AssetManager__DelayLoadStart_d__154_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void AssetManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AssetManager_c *v3; // x0

  if ( (byte_596F750 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596F750 = 1;
  }
  v3 = AssetManager_TypeInfo;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v1, v2);
    v3 = AssetManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v3->static_fields->SAVE_KEY, 0);
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
  const MethodInfo *v13; // x5
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
        AssetManager__AddLoadWaitStatus_47521216(this, v12, callbackFunc, 0, 0, v13);
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
  Il2CppObject *currentValue; // x22
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1
  __int64 v13; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *v14; // [xsp+10h] [xbp-60h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v15; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_596F788 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    byte_596F788 = 1;
  }
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  memset(&v15, 0, sizeof(v15));
  if ( !assetBundleDic
    || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      assetBundleDic,
                                                                                      (const MethodInfo_3FFDA34 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0 )
  {
    sub_2213CDC(assetBundleDic, attrib);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v15,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_3CCF33C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v13 = 0;
  v14 = &v15;
  while ( 1 )
  {
    v8 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v15,
           (const MethodInfo_4169ED8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v8 )
      break;
    currentValue = v15.fields._currentValue;
    if ( !v15.fields._currentValue )
      sub_2213CDC(v8, v9);
    if ( AssetData__IsDownloadOldVersion((AssetData_o *)v15.fields._currentValue, 0)
      || System_String__op_Equality(attrib, *(System_String_o **)((char *)&qword_20 + (_QWORD)currentValue), 0)
      && AssetData__IsNeedUpdateVersion((AssetData_o *)currentValue, 0) )
    {
      AssetManager__AddLoadWaitStatus_47509712(this, (AssetData_o *)currentValue, v11);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v15,
    (const MethodInfo_4169ED4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_IEnumerator_o *result; // x0

  if ( (byte_596F786 & 1) == 0 )
  {
    sub_2213A60(&AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__120_TypeInfo);
    byte_596F786 = 1;
  }
  v7 = sub_2213CCC(AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__120_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = attrib;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 40), (int32_t)attrib, v14, v15, v16, v17, v18, v19);
  result = (System_Collections_IEnumerator_o *)v7;
  *(_DWORD *)(v7 + 56) = loadParallelMax;
  return result;
}


void AssetManager__DownloadAssetStorageAttribute_47512652(
        AssetManager_o *this,
        System_String_array *attribList,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  AssetManager_o *v6; // x20
  il2cpp_array_size_t max_length; // x9
  __int64 v8; // x8
  __int64 v9; // x24
  __int64 v10; // x25
  _BOOL8 v11; // x0
  __int64 v12; // x1
  AssetData_o *currentValue; // x22
  const MethodInfo *v14; // x2
  _BOOL8 IsNeedUpdateVersion; // x0
  unsigned __int64 v16; // x25
  __int64 v17; // x26
  const MethodInfo *v18; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v19; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v20; // [xsp+20h] [xbp-70h] BYREF

  v6 = this;
  if ( (byte_596F789 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    this = (AssetManager_o *)sub_2213A60(&StringLiteral_870/*", "*/);
    byte_596F789 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( !attribList )
    goto LABEL_32;
  max_length = attribList->max_length;
  if ( !max_length )
    return;
  if ( (_DWORD)max_length == 1 )
  {
    AssetManager__DownloadAssetStorageAttribute(v6, attribList->m_Items[0], 1, method);
    return;
  }
  if ( !(_DWORD)max_length )
    goto LABEL_31;
  if ( (int)max_length >= 2 )
  {
    this = (AssetManager_o *)attribList->m_Items[0];
    v8 = 0;
    v9 = (unsigned int)attribList->max_length - 1LL;
    while ( 1 )
    {
      v10 = v8 + 1;
      if ( v8 + 1 >= (unsigned __int64)LODWORD(attribList->max_length) )
        break;
      this = (AssetManager_o *)System_String__Concat_75694928(
                                 (System_String_o *)this,
                                 (System_String_o *)StringLiteral_870/*", "*/,
                                 attribList->m_Items[v8 + 1],
                                 0);
      v8 = v10;
      if ( v9 == v10 )
        goto LABEL_12;
    }
LABEL_31:
    sub_2213CE4(this);
  }
LABEL_12:
  this = (AssetManager_o *)v6->fields.assetBundleDic;
  if ( !this
    || (this = (AssetManager_o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                   (System_Collections_Generic_Dictionary_object__object__o *)this,
                                   (const MethodInfo_3FFDA34 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0 )
  {
LABEL_32:
    sub_2213CDC(this, attribList);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v19,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_3CCF33C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v20 = v19;
  v19.fields._dictionary = 0;
  *(_QWORD *)&v19.fields._index = &v20;
LABEL_15:
  while ( 1 )
  {
    v11 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v20,
            (const MethodInfo_4169ED8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v11 )
      break;
    currentValue = (AssetData_o *)v20.fields._currentValue;
    if ( !v20.fields._currentValue )
      sub_2213CDC(v11, v12);
    if ( AssetData__IsDownloadOldVersion((AssetData_o *)v20.fields._currentValue, 0) )
      goto LABEL_18;
    IsNeedUpdateVersion = AssetData__IsNeedUpdateVersion(currentValue, 0);
    if ( IsNeedUpdateVersion && (int)attribList->max_length >= 1 )
    {
      v16 = 0;
      v17 = (unsigned int)attribList->max_length;
      while ( 1 )
      {
        if ( v16 >= LODWORD(attribList->max_length) )
          sub_2213CE4(IsNeedUpdateVersion);
        IsNeedUpdateVersion = System_String__op_Equality(attribList->m_Items[v16], currentValue->fields.attrib, 0);
        if ( IsNeedUpdateVersion )
          break;
        if ( v17 == ++v16 )
          goto LABEL_15;
      }
LABEL_18:
      AssetManager__AddLoadWaitStatus_47509712(v6, currentValue, v14);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v20,
    (const MethodInfo_4169ED4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  v6->fields.loadParallelMax = loadParallelMax;
  AssetManager__LoadStart(v6, v18);
}


bool AssetManager__DownloadAssetStorage_47501764(
        AssetManager_o *this,
        System_String_array *nameList,
        System_Action_o *callbackFunc,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  AssetManager_o *v8; // x20
  unsigned __int64 v9; // x24
  unsigned int max_length; // w9
  int v11; // w8
  System_String_o *v12; // x1
  int v13; // w23
  const MethodInfo *v14; // x1

  if ( !nameList )
    sub_2213CDC(this, 0);
  v8 = this;
  if ( (int)nameList->max_length < 1 )
  {
    LOBYTE(v13) = 1;
  }
  else
  {
    v9 = 0;
    max_length = nameList->max_length;
    v11 = 1;
    do
    {
      if ( v9 >= max_length )
        sub_2213CE4(this);
      v12 = nameList->m_Items[v9];
      v13 = (v12 == 0) & (unsigned __int8)v11;
      if ( v12 && ((v11 ^ 1) & 1) == 0 )
      {
        this = (AssetManager_o *)AssetManager__DownloadAssetStorage(v8, v12, 0, 1, method);
        v13 = (int)this;
      }
      max_length = nameList->max_length;
      ++v9;
      v11 = v13;
    }
    while ( (__int64)v9 < (int)max_length );
  }
  AssetManager__AddLoadWaitStatus(v8, callbackFunc, (const MethodInfo *)callbackFunc);
  v8->fields.loadParallelMax = loadParallelMax;
  AssetManager__LoadStart(v8, v14);
  return v13 & 1;
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

  if ( (byte_596F7A6 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetData__TryGetValue__);
    byte_596F7A6 = 1;
  }
  value = 0;
  if ( !name )
    return 0;
  if ( !dic )
    sub_2213CDC(this, dic);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)dic,
         (Il2CppObject *)name,
         &value,
         (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__AssetData__TryGetValue__) )
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
  Il2CppObject *v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596F78B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    sub_2213A60(&StringLiteral_1123/*"/"*/);
    byte_596F78B = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v5 = System_String__Concat_75651716(path, (System_String_o *)StringLiteral_1123/*"/"*/, 0);
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic )
    goto LABEL_20;
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                assetBundleDic,
                                                                                (const MethodInfo_3FFDA34 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !assetBundleDic )
    goto LABEL_20;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v26,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_3CCF33C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v27 = v26;
  v26.fields._dictionary = 0;
  *(_QWORD *)&v26.fields._index = &v27;
  while ( 1 )
  {
    v9 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v27,
           (const MethodInfo_4169ED8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v9 )
      break;
    currentValue = v27.fields._currentValue;
    if ( !v27.fields._currentValue )
      sub_2213CDC(v9, v10);
    monitor = (System_String_o *)v27.fields._currentValue[1].monitor;
    if ( !monitor )
      sub_2213CDC(0, v10);
    v13 = System_String__StartsWith(monitor, v5, 0);
    if ( v13 )
    {
      if ( !v6
        || (items = v6->fields._items,
            v14 = (Il2CppObject *)currentValue[1].monitor,
            v22 = Method_System_Collections_Generic_List_string__Add__,
            ++v6->fields._version,
            !items) )
      {
        sub_2213CDC(v13, v14);
      }
      size = v6->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v6,
          v14,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v6->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v14;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v14, v15, v16, v17, v18, v19, v20);
      }
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v27,
    (const MethodInfo_4169ED4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  if ( !v6 )
LABEL_20:
    sub_2213CDC(assetBundleDic, v7);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v6,
                                  (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_string__ToArray__);
}


AssetData_array *AssetManager__GetAssetStorage_47505320(
        AssetManager_o *this,
        System_String_array *nameList,
        const MethodInfo *method)
{
  AssetManager_o *v4; // x20
  const MethodInfo *v5; // x3
  il2cpp_array_size_t max_length; // x8
  unsigned int *v7; // x21
  unsigned __int64 v8; // x23
  __int64 v9; // x24
  System_String_o *v10; // x2
  AssetManager_o *v11; // x22
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v20; // x0

  v4 = this;
  if ( (byte_596F7A7 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_2213A60(&AssetData___TypeInfo);
    byte_596F7A7 = 1;
  }
  if ( !nameList )
LABEL_17:
    sub_2213CDC(this, nameList);
  this = (AssetManager_o *)sub_2213B20(AssetData___TypeInfo, LODWORD(nameList->max_length));
  max_length = nameList->max_length;
  v7 = (unsigned int *)this;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    v9 = 8;
    while ( v8 < (unsigned int)max_length )
    {
      v10 = *(System_String_o **)((char *)&nameList->obj.klass + v9 * 4);
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
            this = (AssetManager_o *)sub_2213BB4(v11, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
            if ( !this )
            {
              v20 = sub_2213D00(0, v12);
              sub_2213BA0(v20, 0);
            }
            if ( v8 >= v7[6] )
              break;
            *(_QWORD *)&v7[v9] = v11;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)&v7[v9], (int32_t)v11, v13, v14, v15, v16, v17, v18);
          }
        }
      }
      LODWORD(max_length) = nameList->max_length;
      ++v8;
      v9 += 2;
      if ( (__int64)v8 >= (int)max_length )
        return (AssetData_array *)v7;
    }
    sub_2213CE4(this);
  }
  return (AssetData_array *)v7;
}


bool AssetManager__GetAssetStorage_47505776(
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

  if ( name )
  {
    Status = AssetManager__AddCallbackLoadStatus(this, 0, name, callbackFunc, v4);
    if ( !Status )
    {
      AssetData = AssetManager__GetAssetData((AssetManager_o *)Status, this->fields.assetBundleDic, name, v9);
      if ( !AssetData )
        return (char)AssetData;
      v11 = AssetData;
      if ( AssetData__get_IsEmpty(AssetData, 0) )
      {
        LOBYTE(AssetData) = 0;
        return (char)AssetData;
      }
      if ( callbackFunc )
        ((void (__fastcall *)(intptr_t, AssetData_o *, intptr_t))callbackFunc->fields.invoke_impl)(
          callbackFunc->fields.method_code,
          v11,
          callbackFunc->fields.method);
    }
    LOBYTE(AssetData) = 1;
  }
  else
  {
    LOBYTE(AssetData) = 0;
  }
  return (char)AssetData;
}


bool AssetManager__GetAsset_47495832(
        AssetManager_o *this,
        int32_t type,
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  _BOOL8 Status; // x0
  const MethodInfo *v10; // x3
  System_Collections_Generic_Dictionary_string__AssetData__o **p_assetResourceDic; // x8
  AssetData_o *AssetData; // x0

  Status = AssetManager__AddCallbackLoadStatus(this, type, name, callbackFunc, method);
  if ( Status )
  {
LABEL_9:
    LOBYTE(AssetData) = 1;
    return (char)AssetData;
  }
  if ( type == 1 )
  {
    p_assetResourceDic = &this->fields.assetResourceDic;
  }
  else
  {
    if ( type )
    {
      LOBYTE(AssetData) = 0;
      return (char)AssetData;
    }
    p_assetResourceDic = &this->fields.assetBundleDic;
  }
  AssetData = AssetManager__GetAssetData((AssetManager_o *)Status, *p_assetResourceDic, name, v10);
  if ( AssetData )
  {
    if ( callbackFunc )
      ((void (__fastcall *)(intptr_t, AssetData_o *, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        AssetData,
        callbackFunc->fields.method);
    goto LABEL_9;
  }
  return (char)AssetData;
}


bool AssetManager__GetAsset_47496148(
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


AssetData_o *AssetManager__GetAsset_47522544(AssetManager_o *this, System_String_o *name, const MethodInfo *method)
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
  __int64 v1; // x1
  __int64 v2; // x2
  AssetManager_c *v3; // x0

  if ( (byte_596F75A & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596F75A = 1;
  }
  v3 = AssetManager_TypeInfo;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v1, v2);
    v3 = AssetManager_TypeInfo;
  }
  return v3->static_fields->assetBundleDateVersion;
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
  int32_t v4; // w21
  int64_t downloadSize; // x20
  int32_t LoadSize; // w8

  if ( (byte_596F78A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    byte_596F78A = 1;
  }
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
LABEL_8:
    sub_2213CDC(processingAssetLoaderList, method);
  v4 = 0;
  downloadSize = this->fields.downloadSize;
  while ( v4 < processingAssetLoaderList->fields._size )
  {
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               processingAssetLoaderList,
                                                                               v4,
                                                                               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    if ( processingAssetLoaderList )
    {
      LoadSize = AssetLoader__get_LoadSize((AssetLoader_o *)processingAssetLoaderList, method);
      processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
      ++v4;
      downloadSize -= LoadSize;
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
  __int64 v1; // x1
  __int64 v2; // x2
  AssetManager_c *v3; // x0

  if ( (byte_596F759 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596F759 = 1;
  }
  v3 = AssetManager_TypeInfo;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v1, v2);
    v3 = AssetManager_TypeInfo;
  }
  return v3->static_fields->assetBundleMasterVersion;
}


System_Collections_IEnumerator_o *AssetManager__InitCR(AssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596F791 & 1) == 0 )
  {
    sub_2213A60(&AssetManager__InitCR_d__136_TypeInfo);
    byte_596F791 = 1;
  }
  v3 = sub_2213CCC(AssetManager__InitCR_d__136_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void AssetManager__Initialize(AssetManager_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *initCRW; // x1
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  void *assetBundleReleaseDic; // x0
  int v11; // w23
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  __int64 v14; // x1
  int32_t v15; // w20
  int32_t v16; // w2
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *Item; // x21
  int v20; // w8
  const MethodInfo *v21; // x0
  System_String_o *Path; // x0
  __int64 v23; // x1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  AssetManager_c *v30; // x8
  System_String_o *v31; // x20
  struct AssetManager_StaticFields *static_fields; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  struct AssetManager_StaticFields *v35; // x8
  System_String_o *cachePathName; // x20
  System_String_o *configFileName; // x21
  System_String_o *v38; // x0
  System_String_o *v39; // x0
  struct AssetManager_StaticFields *v40; // x8
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  struct AssetManager_StaticFields *v47; // x8
  System_String_o *v48; // x20
  System_String_o *v49; // x0
  System_String_o *v50; // x0
  struct AssetManager_StaticFields *v51; // x8
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  struct AssetManager_StaticFields *v58; // x8
  System_String_o *v59; // x20
  System_String_o *v60; // x0
  System_String_o *v61; // x0
  struct AssetManager_StaticFields *v62; // x8
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v69; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v70; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596F783 & 1) == 0 )
  {
    sub_2213A60(&AndroidUtil_TypeInfo);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_AssetLoader__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    byte_596F783 = 1;
  }
  memset(&v70, 0, sizeof(v70));
  initCRW = this->fields.initCRW;
  if ( initCRW )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, initCRW, 0);
    this->fields.initCRW = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.initCRW, 0, v4, v5, v6, v7, v8, v9);
  }
  assetBundleReleaseDic = this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_36;
  System_Collections_Generic_Dictionary_object__object___Clear(
    (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
    (const MethodInfo_3FFDD98 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
  assetBundleReleaseDic = this->fields.assetBundleDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_36;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
         (const MethodInfo_3FFD8C8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) < 1 )
  {
    v11 = 0;
  }
  else
  {
    assetBundleReleaseDic = this->fields.assetBundleDic;
    if ( !assetBundleReleaseDic )
      goto LABEL_36;
    assetBundleReleaseDic = System_Collections_Generic_Dictionary_object__object___get_Values(
                              (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
                              (const MethodInfo_3FFDA34 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    if ( !assetBundleReleaseDic )
      goto LABEL_36;
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v69,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
      (const MethodInfo_3CCF33C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    v11 = 0;
    v70 = v69;
    v69.fields._dictionary = 0;
    *(_QWORD *)&v69.fields._index = &v70;
    while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
              &v70,
              (const MethodInfo_4169ED8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__) )
    {
      if ( !v70.fields._currentValue )
        sub_2213CDC(0, v12);
      v11 |= AssetData__ReleaseData((AssetData_o *)v70.fields._currentValue, 0);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
      &v70,
      (const MethodInfo_4169ED4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    assetBundleReleaseDic = this->fields.assetBundleDic;
    if ( !assetBundleReleaseDic )
      goto LABEL_36;
    System_Collections_Generic_Dictionary_object__object___Clear(
      (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
      (const MethodInfo_3FFDD98 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
  }
  assetBundleReleaseDic = this->fields.assetResourceDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_36;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
         (const MethodInfo_3FFD8C8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) >= 1 )
  {
    assetBundleReleaseDic = this->fields.assetResourceDic;
    if ( !assetBundleReleaseDic )
      goto LABEL_36;
    assetBundleReleaseDic = System_Collections_Generic_Dictionary_object__object___get_Values(
                              (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
                              (const MethodInfo_3FFDA34 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    if ( !assetBundleReleaseDic )
      goto LABEL_36;
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v69,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
      (const MethodInfo_3CCF33C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    v70 = v69;
    v69.fields._dictionary = 0;
    *(_QWORD *)&v69.fields._index = &v70;
    while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
              &v70,
              (const MethodInfo_4169ED8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__) )
    {
      if ( !v70.fields._currentValue )
        sub_2213CDC(0, v14);
      v11 |= AssetData__ReleaseData((AssetData_o *)v70.fields._currentValue, 0);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
      &v70,
      (const MethodInfo_4169ED4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    assetBundleReleaseDic = this->fields.assetResourceDic;
    if ( !assetBundleReleaseDic )
      goto LABEL_36;
    System_Collections_Generic_Dictionary_object__object___Clear(
      (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
      (const MethodInfo_3FFDD98 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
  }
  if ( (v11 & 1) != 0 )
    AssetManager__RequestUnloadUnusedAssets(this, 0, v13);
  assetBundleReleaseDic = this->fields.processingAssetLoaderList;
  if ( !assetBundleReleaseDic )
    goto LABEL_36;
  if ( *((int *)assetBundleReleaseDic + 6) >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      v16 = *((_DWORD *)assetBundleReleaseDic + 6);
      if ( v15 >= v16 )
        break;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)assetBundleReleaseDic,
               v15,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
      UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)Item, 0);
      assetBundleReleaseDic = this->fields.processingAssetLoaderList;
      ++v15;
      if ( !assetBundleReleaseDic )
        goto LABEL_36;
    }
    v20 = *((_DWORD *)assetBundleReleaseDic + 7) + 1;
    *((_DWORD *)assetBundleReleaseDic + 6) = 0;
    *((_DWORD *)assetBundleReleaseDic + 7) = v20;
    if ( v16 >= 1 )
      System_Array__Clear(*((System_Array_o **)assetBundleReleaseDic + 2), 0, v16, 0);
  }
  assetBundleReleaseDic = this->fields.downLoadWaitList;
  if ( !assetBundleReleaseDic )
LABEL_36:
    sub_2213CDC(assetBundleReleaseDic, initCRW);
  System_Collections_Generic_Queue_object___Clear(
    (System_Collections_Generic_Queue_T__o *)assetBundleReleaseDic,
    (const MethodInfo_46D3A6C *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__);
  this->fields.downloadSize = 0;
  this->fields.isCancelDownload = 0;
  Path = AssetStorageCache__GetPath(v21);
  v30 = AssetManager_TypeInfo;
  v31 = Path;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v23, v24);
    v30 = AssetManager_TypeInfo;
  }
  static_fields = v30->static_fields;
  static_fields->cachePathName = v31;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->cachePathName,
    (int32_t)v31,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v35 = AssetManager_TypeInfo->static_fields;
  cachePathName = v35->cachePathName;
  configFileName = v35->configFileName;
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v33, v34);
  v38 = AndroidUtil__ConvertFileNameIfNeed(configFileName, 0);
  v39 = System_String__Concat_75651716(cachePathName, v38, 0);
  v40 = AssetManager_TypeInfo->static_fields;
  v40->cacheListFileName = v39;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v40->cacheListFileName, (int32_t)v39, v41, v42, v43, v44, v45, v46);
  v47 = AssetManager_TypeInfo->static_fields;
  v48 = v47->cachePathName;
  v49 = AndroidUtil__ConvertFileNameIfNeed(v47->createConfigFileName, 0);
  v50 = System_String__Concat_75651716(v48, v49, 0);
  v51 = AssetManager_TypeInfo->static_fields;
  v51->createCacheListFileName = v50;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v51->createCacheListFileName,
    (int32_t)v50,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  v58 = AssetManager_TypeInfo->static_fields;
  v59 = v58->cachePathName;
  v60 = AndroidUtil__ConvertFileNameIfNeed(v58->backConfigFileName, 0);
  v61 = System_String__Concat_75651716(v59, v60, 0);
  v62 = AssetManager_TypeInfo->static_fields;
  v62->backCacheListFileName = v61;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v62->backCacheListFileName,
    (int32_t)v61,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  this->fields.isInitFirst = 0;
}


void AssetManager__InitializeAssetStorage(AssetManager_o *this, const MethodInfo *method)
{
  struct System_Collections_IEnumerator_o **p_initCRW; // x20
  struct System_Collections_IEnumerator_o *inited; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  p_initCRW = &this->fields.initCRW;
  if ( !this->fields.initCRW )
  {
    this->fields.isInitEnd = 0;
    inited = AssetManager__InitCR(this, method);
    this->fields.initCRW = inited;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_initCRW, (int32_t)inited, v5, v6, v7, v8, v9, v10);
    UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, this->fields.initCRW, 0);
  }
}


void AssetManager__InterruptDownloadAssetStorage(
        AssetManager_o *this,
        System_String_o *target,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  AssetManager_o *v9; // x19
  MissionNaviTransitionBoardItem_o *p_downLoadWaitList; // x19
  System_Collections_Generic_Queue_T__o *v11; // x21
  System_Collections_Generic_Queue_T__o *downLoadWaitList; // t1
  int size; // w23
  Il2CppObject *v14; // x22
  AssetData_o *m_CachedPtr; // x0

  v9 = this;
  if ( (byte_596F78F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
    sub_2213A60(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
    sub_2213A60(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Peek__);
    this = (AssetManager_o *)sub_2213A60(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__);
    byte_596F78F = 1;
  }
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)v9->fields.downLoadWaitList;
  p_downLoadWaitList = (MissionNaviTransitionBoardItem_o *)&v9->fields.downLoadWaitList;
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
                                 (const MethodInfo_46D409C *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Peek__);
      if ( !this )
        break;
      v14 = (Il2CppObject *)this;
      m_CachedPtr = (AssetData_o *)this->fields.m_CachedPtr;
      if ( !m_CachedPtr || !AssetData__IsSame_47468396(m_CachedPtr, 0, target, 0) )
      {
        System_Collections_Generic_Queue_object___Dequeue(
          v11,
          (const MethodInfo_46D3F34 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
        System_Collections_Generic_Queue_object___Enqueue(
          v11,
          v14,
          (const MethodInfo_46D3DA4 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
        if ( --size )
          continue;
      }
      goto LABEL_9;
    }
LABEL_10:
    sub_2213CDC(this, target);
  }
LABEL_9:
  p_downLoadWaitList->klass = (MissionNaviTransitionBoardItem_c *)v11;
  sub_2213A04(p_downLoadWaitList, (int32_t)v11, (System_String_o *)method, v3, v4, v5, v6, v7);
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

  if ( (byte_596F7A2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__);
    byte_596F7A2 = 1;
  }
  assetBundleDic = this->fields.assetBundleDic;
  if ( !assetBundleDic )
    sub_2213CDC(0, name);
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)assetBundleDic,
           (Il2CppObject *)name,
           (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__);
}


bool AssetManager__IsExistAssetStorage_47498256(
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
    sub_2213CDC(this, 0);
  max_length = nameList->max_length;
  v5 = (int)max_length < 1;
  if ( (int)max_length >= 1 )
  {
    v6 = this;
    v7 = 0;
    do
    {
      if ( v7 >= (unsigned int)max_length )
        sub_2213CE4(this);
      v8 = nameList->m_Items[v7];
      if ( v8 )
      {
        this = (AssetManager_o *)AssetManager__IsExistAssetStorage(v6, v8, method);
        if ( ((unsigned __int8)this & 1) == 0 )
          break;
      }
      LODWORD(max_length) = nameList->max_length;
      v5 = (__int64)++v7 >= (int)max_length;
    }
    while ( (__int64)v7 < (int)max_length );
  }
  return v5;
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


bool AssetManager__IsNeedDownload_47498788(
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
    sub_2213CDC(this, 0);
  max_length = nameList->max_length;
  v5 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v6 = this;
    v7 = 0;
    do
    {
      if ( v7 >= (unsigned int)max_length )
        sub_2213CE4(this);
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
  int v4; // w22
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *currentValue; // x20
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x0
  float v10; // s0
  __int64 v11; // x1
  __int64 v12; // x2
  System_String_o *Path; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  int64_t FreeSize; // x20
  ManagerConfig_c *v17; // x0
  AssetManager_c *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  AssetManager_c *v21; // x0
  AssetManager_c *v22; // x0
  System_String_o *createCacheListFileName; // x21
  System_Text_Encoding_o *UTF8; // x22
  System_IO_StreamWriter_o *v25; // x20
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x2
  AssetManager_c *v30; // x0
  AssetManager_c *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  AssetManager_c *v34; // x0
  AssetManager_c *v35; // x0
  int32_t v36; // w1
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  __int64 v43; // x0
  System_IO_IOException_o *v44; // x20
  System_String_o *v45; // x0
  __int64 v46; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v47; // [xsp+18h] [xbp-88h] BYREF
  int v48; // [xsp+38h] [xbp-68h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v49; // [xsp+40h] [xbp-60h] BYREF

  if ( (byte_596F796 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetManager_OnClickRetryDialog__);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&CommonServicePluginScript_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&ManagementManager_TypeInfo);
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&System_IO_StreamWriter_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    sub_2213A60(&StringLiteral_2139/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/);
    sub_2213A60(&StringLiteral_16551/*"[FFFF80]Download error for debug"*/);
    sub_2213A60(&StringLiteral_11989/*"SCRIPT"*/);
    sub_2213A60(&StringLiteral_2140/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596F796 = 1;
  }
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleReleaseDic;
  memset(&v49, 0, sizeof(v49));
  v48 = 0;
  if ( !assetBundleReleaseDic )
    goto LABEL_49;
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                       assetBundleReleaseDic,
                                                                                       (const MethodInfo_3FFDA34 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !assetBundleReleaseDic )
    goto LABEL_49;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v47,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
    (const MethodInfo_3CCF33C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v4 = 0;
  v49 = v47;
  v47.fields._dictionary = 0;
  *(_QWORD *)&v47.fields._index = &v49;
  while ( 1 )
  {
    v5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v49,
           (const MethodInfo_4169ED8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v5 )
      break;
    currentValue = v49.fields._currentValue;
    if ( !v49.fields._currentValue )
      sub_2213CDC(v5, v6);
    if ( !HIDWORD(v49.fields._currentValue[5].klass)
      && !AssetData__get_IsEmpty((AssetData_o *)v49.fields._currentValue, 0) )
    {
      v4 |= AssetData__ReleaseData((AssetData_o *)currentValue, 0);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v49,
    (const MethodInfo_4169ED4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  if ( (v4 & 1) != 0 )
    AssetManager__RequestUnloadUnusedAssets(this, 0, v8);
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
LABEL_49:
    sub_2213CDC(assetBundleReleaseDic, method);
  System_Collections_Generic_Dictionary_object__object___Clear(
    assetBundleReleaseDic,
    (const MethodInfo_3FFDD98 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
  if ( this->fields.requestWriteCounter >= 0.0 )
  {
    v10 = this->fields.requestWriteCounter - UnityEngine_Time__get_deltaTime(0);
    this->fields.requestWriteCounter = v10;
    if ( v10 <= 0.0 && !this->fields.isErrorDialog )
    {
      Path = AssetStorageCache__GetPath(v9);
      if ( !*(&CommonServicePluginScript_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo, v11, v12);
      FreeSize = CommonServicePluginScript__GetFreeSize(Path, 0);
      if ( FreeSize < 0 )
        goto LABEL_47;
      v17 = ManagerConfig_TypeInfo;
      if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v14, v15);
        v17 = ManagerConfig_TypeInfo;
      }
      if ( FreeSize < v17->static_fields->LIMIT_FREE_SIZE )
      {
LABEL_47:
        v43 = sub_2213A74(&System_IO_IOException_TypeInfo);
        v44 = (System_IO_IOException_o *)sub_2213CCC(v43);
        v45 = (System_String_o *)sub_2213A74(&StringLiteral_5483/*"Disk full"*/);
        System_IO_IOException___ctor_76869484(v44, v45, 0);
        v46 = sub_2213A74(&Method_AssetManager_LateUpdate__);
        sub_2213BA0(v44, v46);
      }
      v18 = AssetManager_TypeInfo;
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v14, v15);
        v18 = AssetManager_TypeInfo;
      }
      if ( System_IO_File__Exists(v18->static_fields->createCacheListFileName, 0) )
      {
        v21 = AssetManager_TypeInfo;
        if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v19, v20);
          v21 = AssetManager_TypeInfo;
        }
        System_IO_File__Delete(v21->static_fields->createCacheListFileName, 0);
      }
      v22 = AssetManager_TypeInfo;
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v19, v20);
        v22 = AssetManager_TypeInfo;
      }
      createCacheListFileName = v22->static_fields->createCacheListFileName;
      UTF8 = System_Text_Encoding__get_UTF8(0);
      v25 = (System_IO_StreamWriter_o *)sub_2213CCC(System_IO_StreamWriter_TypeInfo);
      System_IO_StreamWriter___ctor_76900348(v25, createCacheListFileName, 0, UTF8, 0);
      if ( !v25 )
        sub_2213CDC(v26, v27);
      ((void (__fastcall *)(System_IO_StreamWriter_o *, struct System_String_o *, const MethodInfo *))v25->klass->vtable._16_Write.methodPtr)(
        v25,
        this->fields.requestConfigWriteData,
        v25->klass->vtable._16_Write.method);
      ((void (__fastcall *)(System_IO_StreamWriter_o *, const MethodInfo *))v25->klass->vtable._8_Close.methodPtr)(
        v25,
        v25->klass->vtable._8_Close.method);
      if ( System_IO_File__Exists(AssetManager_TypeInfo->static_fields->backCacheListFileName, 0) )
      {
        v30 = AssetManager_TypeInfo;
        if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v28, v29);
          v30 = AssetManager_TypeInfo;
        }
        System_IO_File__Delete(v30->static_fields->backCacheListFileName, 0);
      }
      v31 = AssetManager_TypeInfo;
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v28, v29);
        v31 = AssetManager_TypeInfo;
      }
      if ( System_IO_File__Exists(v31->static_fields->cacheListFileName, 0) )
      {
        v34 = AssetManager_TypeInfo;
        if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v32, v33);
          v34 = AssetManager_TypeInfo;
        }
        System_IO_File__Move(v34->static_fields->cacheListFileName, v34->static_fields->backCacheListFileName, 0);
      }
      v35 = AssetManager_TypeInfo;
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v32, v33);
        v35 = AssetManager_TypeInfo;
      }
      System_IO_File__Move(v35->static_fields->createCacheListFileName, v35->static_fields->cacheListFileName, 0);
      v36 = (int)StringLiteral_1/*""*/;
      this->fields.requestConfigWriteData = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.requestConfigWriteData,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
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
  const MethodInfo *v5; // x5
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
    LOBYTE(AssetResource) = AssetManager__LoadAssetStorage(this, name, callbackFunc, 1, 0, v5);
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
  if ( (byte_596F7A8 & 1) == 0 )
  {
    sub_2213A60(&AssetData_TypeInfo);
    this = (AssetManager_o *)sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
    byte_596F7A8 = 1;
  }
  AssetData = AssetManager__GetAssetData(this, v5->fields.assetResourceDic, name, v3);
  if ( !AssetData )
  {
    v8 = (AssetData_o *)sub_2213CCC(AssetData_TypeInfo);
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
          (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
        return v8;
      }
    }
    sub_2213CDC(assetResourceDic, v10);
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
        bool canCancel,
        const MethodInfo *method)
{
  AssetManager_o *v10; // x21
  AssetData_o *AssetData; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4
  AssetData_o *v14; // x24
  System_Collections_Generic_Dictionary_object__object__o *assetBundleReleaseDic; // x0
  _BOOL8 Status; // x0
  const MethodInfo *v17; // x3
  AssetData_o *v18; // x0
  AssetData_o *v19; // x23
  const MethodInfo *v20; // x5
  const MethodInfo *v21; // x1

  v10 = this;
  if ( (byte_596F7A3 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
    byte_596F7A3 = 1;
  }
  if ( name )
  {
    AssetData = AssetManager__GetAssetData(
                  this,
                  v10->fields.assetBundleReleaseDic,
                  name,
                  *(const MethodInfo **)&loadParallelMax);
    if ( AssetData )
    {
      v14 = AssetData;
      assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)v10->fields.assetBundleReleaseDic;
      if ( !assetBundleReleaseDic )
        sub_2213CDC(0, v12);
      System_Collections_Generic_Dictionary_object__object___Remove(
        assetBundleReleaseDic,
        (Il2CppObject *)name,
        (const MethodInfo_3FFF12C *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
      if ( !AssetData__get_IsEmpty(v14, 0) )
      {
        AssetData__AddEntry(v14, 0);
        if ( callbackFunc )
          ((void (__fastcall *)(intptr_t, AssetData_o *, intptr_t))callbackFunc->fields.invoke_impl)(
            callbackFunc->fields.method_code,
            v14,
            callbackFunc->fields.method);
        goto LABEL_16;
      }
    }
    Status = AssetManager__AddEntryLoadStatus(v10, 0, name, callbackFunc, v13);
    if ( Status )
      goto LABEL_16;
    v18 = AssetManager__GetAssetData((AssetManager_o *)Status, v10->fields.assetBundleDic, name, v17);
    if ( v18 )
    {
      v19 = v18;
      if ( !AssetData__get_IsEmpty(v18, 0) )
      {
        if ( !v19->fields.isLoadResources )
        {
          AssetData__AddEntry(v19, 0);
          if ( callbackFunc )
            ((void (__fastcall *)(intptr_t, AssetData_o *, intptr_t))callbackFunc->fields.invoke_impl)(
              callbackFunc->fields.method_code,
              v19,
              callbackFunc->fields.method);
          goto LABEL_16;
        }
        AssetData__ReleaseData(v19, 0);
      }
      AssetData__AddEntry(v19, 0);
      AssetManager__AddLoadWaitStatus_47521216(v10, v19, callbackFunc, 0, canCancel, v20);
      v10->fields.loadParallelMax = loadParallelMax;
      AssetManager__LoadStart(v10, v21);
LABEL_16:
      LOBYTE(v18) = 1;
    }
  }
  else
  {
    LOBYTE(v18) = 0;
  }
  return (char)v18;
}


bool AssetManager__LoadAssetStorage_47503988(
        AssetManager_o *this,
        System_String_array *nameList,
        System_Action_o *callbackFunc,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  __int64 v9; // x21
  System_Collections_Generic_List_object__o *AssetStorage; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_Generic_List_string__c *v24; // x0
  System_Collections_Generic_List_object__o *v25; // x23
  System_Collections_Generic_List_object__o **v26; // x22
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x5
  il2cpp_array_size_t max_length; // x8
  int v36; // w25
  unsigned __int64 v37; // x26
  bool v38; // w24
  System_String_o *v39; // x23
  AssetLoader_LoadEndDataHandler_o *v40; // x24
  const MethodInfo *v41; // x3
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  int32_t v48; // w8
  const MethodInfo *v49; // x1

  if ( (byte_596F7A5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__IndexOf__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__RemoveRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_AssetManager___c__DisplayClass174_0__LoadAssetStorage_b__0__);
    sub_2213A60(&AssetManager___c__DisplayClass174_0_TypeInfo);
    byte_596F7A5 = 1;
  }
  v9 = sub_2213CCC(AssetManager___c__DisplayClass174_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_31;
  *(_QWORD *)(v9 + 40) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 40), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 48) = callbackFunc;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 48), (int32_t)callbackFunc, v18, v19, v20, v21, v22, v23);
  v24 = System_Collections_Generic_List_string__TypeInfo;
  *(_DWORD *)(v9 + 56) = loadParallelMax;
  v25 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v24);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v9 + 24) = v25;
  v26 = (System_Collections_Generic_List_object__o **)(v9 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)v25, v27, v28, v29, v30, v31, v32);
  AssetStorage = *(System_Collections_Generic_List_object__o **)(v9 + 24);
  if ( !AssetStorage
    || (System_Collections_Generic_List_object___AddRange(
          AssetStorage,
          (System_Collections_Generic_IEnumerable_T__o *)nameList,
          (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_string__AddRange__),
        *(_DWORD *)(v9 + 16) = 0,
        *(_BYTE *)(v9 + 32) = 0,
        !nameList) )
  {
LABEL_31:
    sub_2213CDC(AssetStorage, v11);
  }
  max_length = nameList->max_length;
  if ( (int)max_length >= 1 )
  {
    v36 = 0;
    v37 = 0;
    v38 = 1;
    while ( 1 )
    {
      if ( v37 >= (unsigned int)max_length )
        sub_2213CE4(AssetStorage);
      v39 = nameList->m_Items[v37];
      if ( !v39 )
      {
        AssetStorage = *v26;
        if ( !*v26 )
          goto LABEL_31;
        AssetStorage = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Remove(
                                                                      AssetStorage,
                                                                      0,
                                                                      (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_string__Remove__);
        goto LABEL_23;
      }
      if ( !v38 )
        goto LABEL_22;
      v40 = *(AssetLoader_LoadEndDataHandler_o **)(v9 + 64);
      if ( !v40 )
      {
        v40 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v40,
          (Il2CppObject *)v9,
          Method_AssetManager___c__DisplayClass174_0__LoadAssetStorage_b__0__,
          v41);
        *(_QWORD *)(v9 + 64) = v40;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 64), (int32_t)v40, v42, v43, v44, v45, v46, v47);
      }
      if ( !this )
        goto LABEL_31;
      AssetStorage = (System_Collections_Generic_List_object__o *)AssetManager__LoadAssetStorage(
                                                                    this,
                                                                    v39,
                                                                    v40,
                                                                    *(_DWORD *)(v9 + 56),
                                                                    0,
                                                                    v34);
      if ( ((unsigned __int8)AssetStorage & 1) == 0 )
        break;
      ++v36;
      v38 = 1;
LABEL_23:
      LODWORD(max_length) = nameList->max_length;
      if ( (__int64)++v37 >= (int)max_length )
        goto LABEL_26;
    }
    AssetStorage = *v26;
    if ( !*v26 )
      goto LABEL_31;
    AssetStorage = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___IndexOf(
                                                                  AssetStorage,
                                                                  (Il2CppObject *)v39,
                                                                  (const MethodInfo_44848E8 *)Method_System_Collections_Generic_List_string__IndexOf__);
    if ( ((unsigned int)AssetStorage & 0x80000000) == 0 )
    {
      v11 = (unsigned int)AssetStorage;
      AssetStorage = *v26;
      if ( !*v26 )
        goto LABEL_31;
      System_Collections_Generic_List_object___RemoveRange(
        AssetStorage,
        v11,
        AssetStorage->fields._size - v11,
        (const MethodInfo_4485494 *)Method_System_Collections_Generic_List_string__RemoveRange__);
    }
LABEL_22:
    v38 = 0;
    goto LABEL_23;
  }
  v36 = 0;
  v38 = 1;
LABEL_26:
  if ( v36 < 1 || !*(_BYTE *)(v9 + 32) && *(_DWORD *)(v9 + 16) == v36 )
  {
    AssetManager__AddLoadWaitStatus(this, *(System_Action_o **)(v9 + 48), v33);
    v48 = *(_DWORD *)(v9 + 56);
    *(_BYTE *)(v9 + 32) = 1;
    this->fields.loadParallelMax = v48;
    AssetManager__LoadStart(this, v49);
  }
  return v38;
}


bool AssetManager__LoadAsset_47522296(
        AssetManager_o *this,
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  bool v8; // w22
  const MethodInfo *v9; // x2
  AssetData_o *AssetResource; // x0

  v8 = 1;
  if ( !AssetManager__LoadAssetStorage(this, name, callbackFunc, 1, 0, v4) )
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

  if ( (byte_596F782 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596F782 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  if ( BYTE2(Instance[3].klass) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( Instance )
    {
      monitor = Instance[6].monitor;
      if ( monitor )
        return monitor[6] > 0;
    }
LABEL_9:
    sub_2213CDC(Instance, v2);
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
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
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
  const MethodInfo *v39; // x5
  const MethodInfo *v40; // x1
  AssetData_o *v42; // [xsp+8h] [xbp-68h]

  if ( (byte_596F7A4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    byte_596F7A4 = 1;
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
      (const MethodInfo_3FFF12C *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
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
    v20 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v20,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
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
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
          }
          else
          {
            v36 = &items->obj.klass + size;
            v20->fields._size = size + 1;
            v36[4] = (Il2CppClass *)v31;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v36 + 4), (int32_t)v31, v21, v22, v23, v24, v25, v26);
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
          assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)System_String__Equals_75686512(
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
        sub_2213CE4(assetBundleReleaseDic);
      }
LABEL_28:
      v19 = v42;
      if ( !v20 )
LABEL_41:
        sub_2213CDC(assetBundleReleaseDic, v13);
    }
    else
    {
      if ( !v20 )
        goto LABEL_41;
      System_Collections_Generic_List_object___AddRange(
        v20,
        (System_Collections_Generic_IEnumerable_T__o *)resourceNames,
        (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_string__AddRange__);
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
                                     (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_string__ToArray__);
      AssetManager__AddLoadWaitStatus_47521216(this, v19, callbackFunc, v38, 0, v39);
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
  __int64 processingAssetLoaderList; // x0
  const MethodInfo *v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x2
  NetworkManager_c *v13; // x0
  Il2CppObject *v16; // x0
  __int64 v17; // x21
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x8
  __int64 v25; // x8
  struct System_Collections_Generic_List_AssetLoader__o *v26; // x8
  Il2CppObject *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  __int64 v34; // x22
  __int64 v35; // x8
  System_String_o **v36; // x8
  __int64 v37; // x8
  Il2CppObject *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  __int64 v45; // x8
  Il2CppObject *v46; // x0
  __int64 *v47; // x22
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  __int64 v60; // x1
  const MethodInfo *v61; // x2
  AssetLoader_LoadEndDataHandler_o *v62; // x1
  __int64 v63; // x19
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596F79E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_AssetLoader___);
    sub_2213A60(&Method_System_Collections_Generic_List_AssetLoader__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_AssetLoader__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
    sub_2213A60(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Peek__);
    sub_2213A60(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__);
    sub_2213A60(&Method_AssetManager___c__DisplayClass153_0__LoadStart_b__0__);
    sub_2213A60(&AssetManager___c__DisplayClass153_0_TypeInfo);
    sub_2213A60(&StringLiteral_5414/*"DelayLoadStart"*/);
    byte_596F79E = 1;
  }
  memset(&v65, 0, sizeof(v65));
  v3 = sub_2213CCC(AssetManager___c__DisplayClass153_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_53;
  *(_QWORD *)(v3 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v12);
  if ( !byte_596B88D )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596B88D = 1;
  }
  v13 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v12);
    v13 = NetworkManager_TypeInfo;
  }
  if ( v13->static_fields->isRebootBlock || this->fields.isPauseDownload )
    return 0;
  if ( this->fields._DispLog )
  {
    processingAssetLoaderList = (__int64)this->fields.processingAssetLoaderList;
    if ( !processingAssetLoaderList )
      goto LABEL_53;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v64,
      (System_Collections_Generic_List_object__o *)processingAssetLoaderList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_AssetLoader__GetEnumerator__);
    v65 = v64;
    v64.fields._list = 0;
    *(_QWORD *)&v64.fields._index = &v65;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v65,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_AssetLoader__MoveNext__) )
      ;
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v65,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_AssetLoader__Dispose__);
  }
  processingAssetLoaderList = (__int64)this->fields.downLoadWaitList;
  if ( !processingAssetLoaderList )
LABEL_53:
    sub_2213CDC(processingAssetLoaderList, v5);
  if ( *(int *)(processingAssetLoaderList + 32) <= 0 )
    return 0;
  v16 = System_Collections_Generic_Queue_object___Peek(
          (System_Collections_Generic_Queue_T__o *)processingAssetLoaderList,
          (const MethodInfo_46D409C *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Peek__);
  *(_QWORD *)(v3 + 24) = v16;
  v17 = v3 + 24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)v16, v18, v19, v20, v21, v22, v23);
  v24 = *(_QWORD *)(v3 + 24);
  if ( !v24 )
    goto LABEL_53;
  if ( *(_BYTE *)(v24 + 48) )
  {
    v25 = *(_QWORD *)(v24 + 16);
    if ( !v25 || !*(_DWORD *)(v25 + 84) )
    {
      processingAssetLoaderList = (__int64)this->fields.downLoadWaitList;
      if ( processingAssetLoaderList )
      {
        v38 = System_Collections_Generic_Queue_object___Dequeue(
                (System_Collections_Generic_Queue_T__o *)processingAssetLoaderList,
                (const MethodInfo_46D3F34 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
        *(_QWORD *)v17 = v38;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)v38, v39, v40, v41, v42, v43, v44);
        if ( *(_QWORD *)v17 )
        {
          v45 = *(_QWORD *)(*(_QWORD *)v17 + 16LL);
          if ( v45 )
          {
            this->fields.downloadSize -= *(int *)(v45 + 48);
            return AssetManager__LoadStart(this, v5);
          }
        }
      }
      goto LABEL_53;
    }
  }
  v26 = this->fields.processingAssetLoaderList;
  if ( !v26 )
    goto LABEL_53;
  if ( v26->fields._size < this->fields.loadParallelMax )
  {
    UnityEngine_MonoBehaviour__StartCoroutine(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_5414/*"DelayLoadStart"*/,
      0);
    processingAssetLoaderList = (__int64)this->fields.downLoadWaitList;
    if ( processingAssetLoaderList )
    {
      v27 = System_Collections_Generic_Queue_object___Dequeue(
              (System_Collections_Generic_Queue_T__o *)processingAssetLoaderList,
              (const MethodInfo_46D3F34 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
      *(_QWORD *)v17 = v27;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)v27, v28, v29, v30, v31, v32, v33);
      v34 = *(_QWORD *)v17;
      if ( *(_QWORD *)v17 )
      {
        if ( (byte_596F7B2 & 1) == 0 )
        {
          sub_2213A60(&StringLiteral_1/*""*/);
          byte_596F7B2 = 1;
        }
        v35 = *(_QWORD *)(v34 + 16);
        if ( v35 )
          v36 = (System_String_o **)(v35 + 24);
        else
          v36 = (System_String_o **)&StringLiteral_1/*""*/;
        processingAssetLoaderList = System_String__IsNullOrEmpty(*v36, 0);
        if ( (processingAssetLoaderList & 1) != 0 )
        {
          if ( *(_QWORD *)v17 )
          {
            v37 = *(_QWORD *)(*(_QWORD *)v17 + 24LL);
            if ( v37 )
              (*(void (__fastcall **)(_QWORD, _QWORD))(v37 + 24))(*(_QWORD *)(v37 + 64), *(_QWORD *)(v37 + 40));
            return AssetManager__LoadStart(this, v5);
          }
        }
        else
        {
          processingAssetLoaderList = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( processingAssetLoaderList )
          {
            v46 = UnityEngine_GameObject__AddComponent_object_(
                    (UnityEngine_GameObject_o *)processingAssetLoaderList,
                    (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_AssetLoader___);
            *(_QWORD *)(v3 + 32) = v46;
            v47 = (__int64 *)(v3 + 32);
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)v46, v48, v49, v50, v51, v52, v53);
            processingAssetLoaderList = (__int64)this->fields.processingAssetLoaderList;
            if ( processingAssetLoaderList )
            {
              processingAssetLoaderList = sub_1FFEDA8(
                                            processingAssetLoaderList,
                                            *v47,
                                            Method_System_Collections_Generic_List_AssetLoader__Add__);
              if ( *(_QWORD *)v17 )
              {
                processingAssetLoaderList = *v47;
                if ( *v47 )
                {
                  v60 = *(_QWORD *)(*(_QWORD *)v17 + 16LL);
                  *(_QWORD *)(processingAssetLoaderList + 32) = v60;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)(processingAssetLoaderList + 32),
                    v60,
                    v54,
                    v55,
                    v56,
                    v57,
                    v58,
                    v59);
                  if ( *(_QWORD *)v17 )
                  {
                    processingAssetLoaderList = *v47;
                    if ( *v47 )
                    {
                      v62 = *(AssetLoader_LoadEndDataHandler_o **)(*(_QWORD *)v17 + 32LL);
                      if ( v62 )
                        AssetLoader__add_endCallback2((AssetLoader_o *)processingAssetLoaderList, v62, v61);
                      v63 = sub_2213CCC(System_Action_TypeInfo);
                      System_Action___ctor(
                        (System_Action_o *)v63,
                        (Il2CppObject *)v3,
                        Method_AssetManager___c__DisplayClass153_0__LoadStart_b__0__,
                        0);
                      if ( v63 )
                      {
                        (*(void (__fastcall **)(_QWORD, _QWORD))(v63 + 24))(
                          *(_QWORD *)(v63 + 64),
                          *(_QWORD *)(v63 + 40));
                        return 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_53;
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void AssetManager__OnClickRetryDialog(AssetManager_o *this, bool isDecide, const MethodInfo *method)
{
  ManagementManager_c *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_596F792 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&ManagementManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_596F792 = 1;
  }
  if ( isDecide )
  {
    this->fields.isErrorDialog = 0;
  }
  else
  {
    if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, isDecide, method);
    if ( !byte_596F739 )
    {
      sub_2213A60(&ManagementManager_TypeInfo);
      byte_596F739 = 1;
    }
    v5 = ManagementManager_TypeInfo;
    if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, isDecide, method);
      v5 = ManagementManager_TypeInfo;
    }
    if ( v5->static_fields->isDuringStartup )
    {
      if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, isDecide, method);
      UnityEngine_Application__Quit_83177108(0);
    }
    else
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
      if ( !Instance )
        sub_2213CDC(0, v7);
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
  int32_t v5; // w21
  _BOOL4 isRequestDownload; // w23
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Item; // x22
  struct AssetData_o *data; // x8

  v4 = this;
  if ( (byte_596F7A0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_AssetLoader__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    this = (AssetManager_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F7A0 = 1;
  }
  if ( !loader )
    goto LABEL_11;
  this = (AssetManager_o *)v4->fields.processingAssetLoaderList;
  if ( !this )
    goto LABEL_11;
  v5 = 0;
  isRequestDownload = loader->fields.isRequestDownload;
  while ( 1 )
  {
    if ( v5 >= SLODWORD(this->fields.m_CancellationTokenSource) )
      goto LABEL_15;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)this,
             v5,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    this = (AssetManager_o *)UnityEngine_Object__op_Equality(
                               (UnityEngine_Object_o *)Item,
                               (UnityEngine_Object_o *)loader,
                               0);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    this = (AssetManager_o *)v4->fields.processingAssetLoaderList;
    ++v5;
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
    sub_2213CDC(this, loader);
  }
  System_Collections_Generic_List_object___RemoveAt(
    (System_Collections_Generic_List_object__o *)this,
    v5,
    (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_AssetLoader__RemoveAt__);
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
  AssetManager_o *v6; // x19
  System_Collections_Generic_Dictionary_string__AssetData__o **p_assetResourceDic; // x8
  AssetData_o *AssetData; // x0
  AssetData_o *v9; // x21
  bool v10; // w0
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_object__object__o *assetResourceDic; // x0

  v6 = this;
  if ( (byte_596F7A1 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
    byte_596F7A1 = 1;
  }
  if ( type == 1 )
  {
    p_assetResourceDic = &v6->fields.assetResourceDic;
  }
  else
  {
    if ( type )
      return;
    p_assetResourceDic = &v6->fields.assetBundleDic;
  }
  AssetData = AssetManager__GetAssetData(this, *p_assetResourceDic, name, method);
  if ( AssetData )
  {
    v9 = AssetData;
    v10 = AssetData__RemoveEntry(AssetData, 0);
    if ( type == 1 && v10 )
    {
      assetResourceDic = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.assetResourceDic;
      if ( !assetResourceDic )
        sub_2213CDC(0, v11);
      System_Collections_Generic_Dictionary_object__object___Remove(
        assetResourceDic,
        (Il2CppObject *)v9->fields.name,
        (const MethodInfo_3FFF12C *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
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
  if ( (byte_596F7A9 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
    byte_596F7A9 = 1;
  }
  AssetData = AssetManager__GetAssetData(this, v5->fields.assetResourceDic, name, v3);
  if ( AssetData && AssetData__RemoveEntry(AssetData, 0) )
  {
    assetResourceDic = (System_Collections_Generic_Dictionary_object__object__o *)v5->fields.assetResourceDic;
    if ( !assetResourceDic )
      sub_2213CDC(0, v7);
    System_Collections_Generic_Dictionary_object__object___Remove(
      assetResourceDic,
      (Il2CppObject *)name,
      (const MethodInfo_3FFF12C *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
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
    sub_2213CDC(this, 0);
  max_length = nameList->max_length;
  if ( (int)max_length >= 1 )
  {
    v6 = 0;
    do
    {
      if ( v6 >= (unsigned int)max_length )
        sub_2213CE4(this);
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


void AssetManager__ReleaseAssetStorage_47506308(
        AssetManager_o *this,
        System_String_array *nameList,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v6; // x21

  if ( !nameList )
    sub_2213CDC(this, 0);
  max_length = nameList->max_length;
  if ( (int)max_length >= 1 )
  {
    v6 = 0;
    do
    {
      if ( v6 >= (unsigned int)max_length )
        sub_2213CE4(this);
      AssetManager__ReleaseAssetStorage(this, nameList->m_Items[v6], method);
      LODWORD(max_length) = nameList->max_length;
      ++v6;
    }
    while ( (__int64)v6 < (int)max_length );
  }
}


// local variable allocation has failed, the output may be wrong!
void AssetManager__ReleaseAsset_47496856(
        AssetManager_o *this,
        int32_t type,
        System_String_array *nameList,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v8; // x22

  if ( !nameList )
    sub_2213CDC(this, *(_QWORD *)&type);
  max_length = nameList->max_length;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    do
    {
      if ( v8 >= (unsigned int)max_length )
        sub_2213CE4(this);
      AssetManager__ReleaseAsset(this, type, nameList->m_Items[v8], method);
      LODWORD(max_length) = nameList->max_length;
      ++v8;
    }
    while ( (__int64)v8 < (int)max_length );
  }
}


void AssetManager__ReleaseAsset_47497156(AssetManager_o *this, AssetData_o *assetInfo, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( assetInfo )
    AssetManager__ReleaseAsset(this, assetInfo->fields.type, assetInfo->fields.name, v3);
}


void AssetManager__ReleaseAsset_47497356(
        AssetManager_o *this,
        AssetData_array *assetInfoList,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v7; // x21
  AssetData_o *v8; // x8

  if ( !assetInfoList )
    sub_2213CDC(this, 0);
  max_length = assetInfoList->max_length;
  if ( (int)max_length >= 1 )
  {
    v7 = 0;
    do
    {
      if ( v7 >= (unsigned int)max_length )
        sub_2213CE4(this);
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
  if ( (byte_596F79D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
    this = (AssetManager_o *)sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__);
    byte_596F79D = 1;
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
             (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__) )
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
          (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
        return;
      }
    }
LABEL_11:
    sub_2213CDC(this, info);
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
    UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v4, 0);
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
  __int64 v13; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *v14; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v15; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596F78C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    sub_2213A60(&StringLiteral_1123/*"/"*/);
    byte_596F78C = 1;
  }
  memset(&v15, 0, sizeof(v15));
  Values = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)System_String__Concat_75651716(
                                                                                      path,
                                                                                      (System_String_o *)StringLiteral_1123/*"/"*/,
                                                                                      0);
  assetBundleDic = this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (v8 = (System_String_o *)Values,
        (Values = System_Collections_Generic_Dictionary_object__object___get_Values(
                    (System_Collections_Generic_Dictionary_object__object__o *)assetBundleDic,
                    (const MethodInfo_3FFDA34 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0) )
  {
    sub_2213CDC(Values, v6);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v15,
    Values,
    (const MethodInfo_3CCF33C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v13 = 0;
  v14 = &v15;
  while ( 1 )
  {
    v9 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v15,
           (const MethodInfo_4169ED8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v9 )
      break;
    currentValue = v15.fields._currentValue;
    if ( !v15.fields._currentValue )
      sub_2213CDC(v9, v10);
    v12 = *(System_String_o **)((char *)&v15.fields._currentValue->klass + (unsigned __int64)off_18);
    if ( !v12 )
      sub_2213CDC(0, v10);
    if ( System_String__StartsWith(v12, v8, 0) )
      AssetData__ResetVersion((AssetData_o *)currentValue, 0);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v15,
    (const MethodInfo_4169ED4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
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
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x20
  AssetData_o *AssetData; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_596F766 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596F766 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  AssetData = (AssetData_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( ((unsigned __int8)AssetData & 1) == 0 )
  {
    if ( !Instance
      || (AssetData = AssetManager__GetAssetData(
                        (AssetManager_o *)AssetData,
                        (System_Collections_Generic_Dictionary_string__AssetData__o *)Instance[4].klass,
                        name,
                        v8)) == 0 )
    {
      sub_2213CDC(AssetData, v7);
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
  __int64 v1; // x1
  __int64 v2; // x2
  ManagerConfig_c *v3; // x0
  AssetManager_c *v4; // x0

  if ( (byte_596F74E & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&ManagerConfig_TypeInfo);
    byte_596F74E = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1, v2);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( !v3->static_fields->UseStandaloneAsset )
  {
    v4 = AssetManager_TypeInfo;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v1, v2);
      v4 = AssetManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetString(v4->static_fields->SAVE_KEY, v4->static_fields->SAVE_DATA_OFFLINE, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


bool AssetManager__SetOnlineStatus(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  ManagerConfig_c *v3; // x0
  AssetManager_c *v4; // x0
  System_String_o *String; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  AssetManager_c *v9; // x0

  if ( (byte_596F74F & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&ManagerConfig_TypeInfo);
    byte_596F74F = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1, v2);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseStandaloneAsset )
    return 0;
  v4 = AssetManager_TypeInfo;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v1, v2);
    v4 = AssetManager_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(v4->static_fields->SAVE_KEY, v4->static_fields->SAVE_DATA_OFFLINE, 0);
  if ( System_String__op_Equality(String, AssetManager_TypeInfo->static_fields->SAVE_DATA_ONLINE, 0) )
    return 0;
  v9 = AssetManager_TypeInfo;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v6, v7);
    v9 = AssetManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(v9->static_fields->SAVE_KEY, v9->static_fields->SAVE_DATA_ONLINE, 0);
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
  __int64 v8; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *v9; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v10; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596F784 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    byte_596F784 = 1;
  }
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  memset(&v10, 0, sizeof(v10));
  if ( !assetBundleDic
    || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      assetBundleDic,
                                                                                      (const MethodInfo_3FFDA34 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0 )
  {
    sub_2213CDC(assetBundleDic, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v10,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_3CCF33C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v8 = 0;
  v9 = &v10;
  while ( 1 )
  {
    v4 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v10,
           (const MethodInfo_4169ED8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v4 )
      break;
    currentValue = v10.fields._currentValue;
    if ( !v10.fields._currentValue )
      sub_2213CDC(v4, v5);
    if ( AssetData__IsNeedUpdateVersion((AssetData_o *)v10.fields._currentValue, 0) )
      AssetManager__AddLoadWaitStatus_47509712(this, (AssetData_o *)currentValue, v7);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v10,
    (const MethodInfo_4169ED4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
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
  System_Threading_ThreadStart_c *v3; // x0
  System_Threading_ThreadStart_o *v4; // x20
  System_Threading_Thread_o *v5; // x21
  struct System_Threading_Thread_o **p_writeRequestThread; // x19
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1

  if ( (byte_596F794 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetManager_ConfigWriteRequestThread__);
    sub_2213A60(&System_Threading_ThreadStart_TypeInfo);
    sub_2213A60(&System_Threading_Thread_TypeInfo);
    byte_596F794 = 1;
  }
  v3 = System_Threading_ThreadStart_TypeInfo;
  this->fields.reserveWriteRequest = 0;
  v4 = (System_Threading_ThreadStart_o *)sub_2213CCC(v3);
  System_Threading_ThreadStart___ctor(v4, (Il2CppObject *)this, Method_AssetManager_ConfigWriteRequestThread__, 0);
  v5 = (System_Threading_Thread_o *)sub_2213CCC(System_Threading_Thread_TypeInfo);
  System_Threading_Thread___ctor(v5, v4, 0);
  this->fields.writeRequestThread = v5;
  p_writeRequestThread = &this->fields.writeRequestThread;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_writeRequestThread, (int32_t)v5, v7, v8, v9, v10, v11, v12);
  if ( !*p_writeRequestThread )
    sub_2213CDC(0, v13);
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
        const MethodInfo_37D27C0 *method)
{
  AssetData_o *AssetStorage; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  Il2CppObject *Object_object__58532980; // x1
  __int64 v16; // x1
  Il2CppObject *v17; // x19

  if ( !method->rgctx_data )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      sub_224B964(method);
  }
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, path);
  AssetStorage = AssetManager__getAssetStorage(path, 0);
  if ( AssetStorage )
    Object_object__58532980 = AssetData__GetObject_object__58532980(
                                AssetStorage,
                                name,
                                (const MethodInfo_37D2474 *)method->rgctx_data->_2_AssetData_GetObject_T_);
  else
    Object_object__58532980 = 0;
  *data = Object_object__58532980;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)data, (int32_t)Object_object__58532980, v9, v10, v11, v12, v13, v14);
  v17 = *data;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0, 0);
}


bool AssetManager__TryGetUIAtlas(
        UIAtlas_o **atlas,
        System_String_o *name,
        System_String_o *atlasName,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v11; // x1
  __int64 v12; // x2
  AssetData_o *AssetStorage; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Object_object__58532980; // x20
  _BOOL8 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  Il2CppObject *Component_object; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  UnityEngine_Object_o *v27; // x19

  if ( (byte_596F7AA & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F7AA = 1;
  }
  *atlas = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)atlas, 0, atlasName, (System_String_o *)method, v4, v5, v6, v7);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v11, v12);
  AssetStorage = AssetManager__getAssetStorage(name, v11);
  if ( AssetStorage )
    Object_object__58532980 = AssetData__GetObject_object__58532980(
                                AssetStorage,
                                atlasName,
                                (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  else
    Object_object__58532980 = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
  v17 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__58532980, 0, 0);
  if ( v17 )
  {
    if ( !Object_object__58532980 )
      sub_2213CDC(v17, v18);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object_object__58532980,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    *atlas = (UIAtlas_o *)Component_object;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)atlas, (int32_t)Component_object, v21, v22, v23, v24, v25, v26);
  }
  v27 = (UnityEngine_Object_o *)*atlas;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
  return UnityEngine_Object__op_Inequality(v27, 0, 0);
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
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596F74C & 1) == 0 )
  {
    sub_2213A60(&AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_TypeInfo);
    byte_596F74C = 1;
  }
  v3 = sub_2213CCC(AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void AssetManager___DownloadAssetStorageAttributeWithCheckDialog_b__120_0(
        AssetManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  AssetManager_o *v3; // x19
  struct System_Collections_Generic_List_AssetLoader__o *processingAssetLoaderList; // x8

  v3 = this;
  if ( (byte_596F7B0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_2213A60(&SoundManager_TypeInfo);
    this = (AssetManager_o *)sub_2213A60(&StringLiteral_9708/*"NOW_LOADING"*/);
    byte_596F7B0 = 1;
  }
  processingAssetLoaderList = v3->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
    sub_2213CDC(this, method);
  if ( processingAssetLoaderList->fields._size >= 1 )
  {
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method, v2);
    SoundManager__playBgm((System_String_o *)StringLiteral_9708/*"NOW_LOADING"*/, 0);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  AssetManager_o *v13; // x0
  AssetManager_ResourceUnloadEventHandler_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596F74A & 1) == 0 )
  {
    sub_2213A60(&AssetManager_ResourceUnloadEventHandler_TypeInfo);
    byte_596F74A = 1;
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
    v11 = sub_224B48C(p_unloadCallbacks, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, AssetManager_ResourceUnloadEventHandler_TypeInfo, v9, v10);
  AssetManager__remove_unloadCallbacks(v13, v14, v15);
}


void AssetManager__cancelDownloadAssetStorage(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_596F76E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596F76E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1, v2);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_2213CDC(v4, v5);
    AssetManager__CancelDownloadAssetStorage((AssetManager_o *)Instance, v5);
  }
}


System_Collections_IEnumerator_o *AssetManager__coUnloadUnusedAssets(AssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596F795 & 1) == 0 )
  {
    sub_2213A60(&AssetManager__coUnloadUnusedAssets_d__143_TypeInfo);
    byte_596F795 = 1;
  }
  v3 = sub_2213CCC(AssetManager__coUnloadUnusedAssets_d__143_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


bool AssetManager__compAssetStorage(System_String_o *name1, System_String_o *name2, const MethodInfo *method)
{
  int32_t stringLength; // w8

  if ( name1 )
  {
    if ( name2 )
      return System_String__Equals_75686512(name1, name2, 0);
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
  il2cpp_array_size_t v4; // x8
  System_String_array *v5; // x20
  unsigned __int64 v6; // x21
  __int64 max_length; // x22
  System_String_o **m_Items; // x24
  unsigned __int64 max_length_low; // x8
  System_String_o *v10; // x1

  if ( list1 && (v4 = list1->max_length, v5 = list1, v4) )
  {
    if ( list2 && (_DWORD)v4 == LODWORD(list2->max_length) )
    {
      if ( (int)v4 >= 1 )
      {
        v6 = 0;
        max_length = (unsigned int)list1->max_length;
        m_Items = list2->m_Items;
        while ( 1 )
        {
          if ( v6 >= LODWORD(v5->max_length) )
LABEL_21:
            sub_2213CE4(list1);
          max_length_low = LODWORD(list2->max_length);
          list1 = (System_String_array *)v5->m_Items[v6];
          if ( list1 )
          {
            if ( v6 >= max_length_low )
              goto LABEL_21;
            v10 = m_Items[v6];
            if ( !v10 || !System_String__Equals_75686512((System_String_o *)list1, v10, 0) )
              goto LABEL_19;
          }
          else
          {
            if ( v6 >= max_length_low )
              goto LABEL_21;
            if ( m_Items[v6] )
              goto LABEL_19;
          }
          ++v6;
          list1 = (System_String_array *)(&dword_0 + 1);
          if ( max_length == v6 )
            return (char)list1;
        }
      }
      goto LABEL_20;
    }
LABEL_19:
    LOBYTE(list1) = 0;
  }
  else
  {
    if ( !list2 )
    {
LABEL_20:
      LOBYTE(list1) = 1;
      return (char)list1;
    }
    LOBYTE(list1) = LODWORD(list2->max_length) == 0;
  }
  return (char)list1;
}


bool AssetManager__compAssetStorageList_47494836(
        AssetData_array *assetList,
        System_String_array *list,
        const MethodInfo *method)
{
  il2cpp_array_size_t v4; // x8
  AssetData_array *v5; // x20
  unsigned __int64 v6; // x21
  __int64 max_length; // x22
  System_String_o **m_Items; // x24
  unsigned __int64 max_length_low; // x9
  AssetData_o *v10; // x8
  System_String_o *v11; // x1
  System_String_o *name; // x0

  if ( assetList && (v4 = assetList->max_length, v5 = assetList, v4) )
  {
    if ( list && (_DWORD)v4 == LODWORD(list->max_length) )
    {
      if ( (int)v4 >= 1 )
      {
        v6 = 0;
        max_length = (unsigned int)assetList->max_length;
        m_Items = list->m_Items;
        while ( 1 )
        {
          if ( v6 >= LODWORD(v5->max_length) )
LABEL_22:
            sub_2213CE4(assetList);
          max_length_low = LODWORD(list->max_length);
          v10 = v5->m_Items[v6];
          if ( v10 )
          {
            if ( v6 >= max_length_low )
              goto LABEL_22;
            v11 = m_Items[v6];
            if ( !v11 )
              goto LABEL_20;
            name = v10->fields.name;
            if ( !name )
              sub_2213CDC(0, v11);
            if ( !System_String__Equals_75686512(name, v11, 0) )
              goto LABEL_20;
          }
          else
          {
            if ( v6 >= max_length_low )
              goto LABEL_22;
            if ( m_Items[v6] )
              goto LABEL_20;
          }
          ++v6;
          assetList = (AssetData_array *)(&dword_0 + 1);
          if ( max_length == v6 )
            return (char)assetList;
        }
      }
      goto LABEL_21;
    }
LABEL_20:
    LOBYTE(assetList) = 0;
  }
  else
  {
    if ( !list )
    {
LABEL_21:
      LOBYTE(assetList) = 1;
      return (char)assetList;
    }
    LOBYTE(assetList) = LODWORD(list->max_length) == 0;
  }
  return (char)assetList;
}


bool AssetManager__compAssetStorage_47494556(AssetData_o *data, System_String_o *name, const MethodInfo *method)
{
  struct System_String_o *v3; // x0
  int32_t stringLength; // w8

  if ( data && (v3 = data->fields.name) != 0 )
  {
    if ( name )
      return System_String__Equals_75686512(v3, name, 0);
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_596F752 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596F752 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1, v2);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_2213CDC(v4, v5);
    AssetManager__DebugLog((AssetManager_o *)Instance, v5);
  }
}


bool AssetManager__downloadAssetStorage(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        int32_t maxParallelLoad,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x22
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x4

  if ( (byte_596F771 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596F771 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v10 )
    return 0;
  if ( !Instance )
    sub_2213CDC(v10, v11);
  return AssetManager__DownloadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, v12);
}


bool AssetManager__downloadAssetStorage_47501572(
        System_String_array *nameList,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Instance; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_596F772 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596F772 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v8 )
    return 0;
  if ( !Instance )
    sub_2213CDC(v8, v9);
  return AssetManager__DownloadAssetStorage_47501764((AssetManager_o *)Instance, nameList, callbackFunc, 1, v10);
}


AssetData_o *AssetManager__getAsset(int32_t type, System_String_o *name, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Instance; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  System_Collections_Generic_Dictionary_string__AssetData__o **v11; // x8

  if ( (byte_596F75F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596F75F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v8 )
    return 0;
  if ( !Instance )
    sub_2213CDC(v8, v9);
  if ( type == 1 )
  {
    v11 = (System_Collections_Generic_Dictionary_string__AssetData__o **)&Instance[5];
    return AssetManager__GetAssetData((AssetManager_o *)v8, *v11, name, v10);
  }
  if ( type )
    return 0;
  v11 = (System_Collections_Generic_Dictionary_string__AssetData__o **)&Instance[4];
  return AssetManager__GetAssetData((AssetManager_o *)v8, *v11, name, v10);
}


AssetData_o *AssetManager__getAssetResource(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_596F77E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596F77E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v6 )
    return 0;
  if ( !Instance )
    sub_2213CDC(v6, v7);
  return AssetManager__GetAssetResource((AssetManager_o *)Instance, name, v8);
}


AssetData_o *AssetManager__getAssetStorage(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_596F777 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596F777 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v6 )
    return 0;
  if ( !Instance )
    sub_2213CDC(v6, v7);
  return AssetManager__GetAssetStorage((AssetManager_o *)Instance, name, v8);
}


AssetData_o *AssetManager__getAssetStorageData(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_596F778 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596F778 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v6 )
    return 0;
  if ( !Instance )
    sub_2213CDC(v6, v7);
  return AssetManager__GetAssetData(
           (AssetManager_o *)v6,
           (System_Collections_Generic_Dictionary_string__AssetData__o *)Instance[4].klass,
           name,
           v8);
}


System_String_array *AssetManager__getAssetStorageList(System_String_o *path, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_596F76C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596F76C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v6 )
    return 0;
  if ( !Instance )
    sub_2213CDC(v6, v7);
  return AssetManager__GetAssetStorageList((AssetManager_o *)Instance, path, v8);
}


AssetData_array *AssetManager__getAssetStorage_47505140(System_String_array *nameList, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_596F779 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596F779 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v6 )
    return 0;
  if ( !Instance )
    sub_2213CDC(v6, v7);
  return AssetManager__GetAssetStorage_47505320((AssetManager_o *)Instance, nameList, v8);
}


bool AssetManager__getAssetStorage_47505588(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Instance; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3

  if ( (byte_596F77A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596F77A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v8 )
    return 0;
  if ( !Instance )
    sub_2213CDC(v8, v9);
  return AssetManager__GetAssetStorage_47505776((AssetManager_o *)Instance, name, callbackFunc, v10);
}


bool AssetManager__getAsset_47495624(
        int32_t type,
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x22
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x4

  if ( (byte_596F760 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596F760 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v10 )
    return 0;
  if ( !Instance )
    sub_2213CDC(v10, v11);
  return AssetManager__GetAsset_47495832((AssetManager_o *)Instance, type, name, callbackFunc, v12);
}


bool AssetManager__getAsset_47495960(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Instance; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3

  if ( (byte_596F761 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596F761 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v8 )
    return 0;
  if ( !Instance )
    sub_2213CDC(v8, v9);
  return AssetManager__GetAsset_47496148((AssetManager_o *)Instance, name, callbackFunc, v10);
}


int64_t AssetManager__getDownloadSize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_596F767 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596F767 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1, v2);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_2213CDC(v4, v5);
  return AssetManager__GetDownloadSize((AssetManager_o *)Instance, v5);
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

  if ( (byte_596F75C & 1) == 0 )
  {
    sub_2213A60(&System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&System_Text_UTF8Encoding_TypeInfo);
    sub_2213A60(&StringLiteral_26424/*"{0,0:x2}"*/);
    sub_2213A60(&StringLiteral_1094/*".bin"*/);
    byte_596F75C = 1;
  }
  v3 = (System_Security_Cryptography_SHA1CryptoServiceProvider_o *)sub_2213CCC(System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_SHA1CryptoServiceProvider___ctor(v3, 0);
  v4 = (System_Text_UTF8Encoding_o *)sub_2213CCC(System_Text_UTF8Encoding_TypeInfo);
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
  v8 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
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
        sub_2213CE4(appended);
      v12 = v7->m_Items[v10] ^ 0xAA;
      appended = (System_Text_StringBuilder_o *)j_il2cpp_value_box_0(qword_5984348, &v12);
      if ( !v8 )
        break;
      appended = System_Text_StringBuilder__AppendFormat(
                   v8,
                   (System_String_o *)StringLiteral_26424/*"{0,0:x2}"*/,
                   (Il2CppObject *)appended,
                   0);
      LODWORD(max_length) = v7->max_length;
      if ( (__int64)++v10 >= (int)max_length )
        goto LABEL_11;
    }
LABEL_13:
    sub_2213CDC(appended, v6);
  }
LABEL_11:
  if ( !v8 )
    goto LABEL_13;
  System_Text_StringBuilder__Append_75735064(v8, (System_String_o *)StringLiteral_1094/*".bin"*/, 0);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v8->klass->vtable._3_ToString.methodPtr)(
                              v8,
                              v8->klass->vtable._3_ToString.method);
}


System_String_o *AssetManager__getUrlString(System_String_o *url, const MethodInfo *method)
{
  __int64 v2; // x2
  NetworkManager_c *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  NetworkManager_c *v7; // x0
  System_String_o *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *v11; // x0
  int64_t v13; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596F75B & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_1848/*"?t="*/);
    sub_2213A60(&StringLiteral_22093/*"jar:"*/);
    byte_596F75B = 1;
  }
  v4 = NetworkManager_TypeInfo;
  v13 = 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
  if ( !url )
    sub_2213CDC(v4, method);
  if ( !System_String__StartsWith(url, NetworkManager_TypeInfo->static_fields->FILE_URL_SCHEME, 0) )
  {
    v7 = NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
      v7 = NetworkManager_TypeInfo;
    }
    v8 = System_String__Concat_75651716((System_String_o *)StringLiteral_22093/*"jar:"*/, v7->static_fields->FILE_URL_SCHEME, 0);
    if ( !System_String__StartsWith(url, v8, 0) )
    {
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v10);
      v13 = NetworkManager__getTime(0) / 300;
      v11 = System_Int64__ToString((int64_t)&v13, 0);
      return System_String__Concat_75694928(url, (System_String_o *)StringLiteral_1848/*"?t="*/, v11, 0);
    }
  }
  return url;
}


System_String_o *AssetManager__getUrlString_47493752(AssetData_o *data, const MethodInfo *method)
{
  __int64 v2; // x2
  AssetManager_c *v4; // x0
  char *DataServerAddress; // x0
  __int64 v6; // x1
  System_String_o *v7; // x20
  System_String_o *DownloadName; // x0
  __int64 v9; // x2
  System_String_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  NetworkManager_c *v13; // x0
  System_String_o *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  char *v21; // x20
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  int32_t v28; // w1
  __int64 v29; // x1
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct System_String_o *assetBundleMasterVersion; // x1
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  int32_t v43; // w1
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  struct System_String_o *assetBundleDateVersion; // x1
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  int32_t v57; // w1
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  int32_t v70; // w1
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  __int64 v78; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596F75D & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_16746/*"_"*/);
    sub_2213A60(&StringLiteral_22093/*"jar:"*/);
    sub_2213A60(&StringLiteral_1849/*"?v="*/);
    byte_596F75D = 1;
  }
  v4 = AssetManager_TypeInfo;
  v78 = 0;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
  DataServerAddress = (char *)AssetManager__get_DataServerAddress((const MethodInfo *)v4);
  if ( !data )
    goto LABEL_27;
  v7 = (System_String_o *)DataServerAddress;
  DownloadName = AssetData__get_DownloadName(data, 0);
  DataServerAddress = (char *)System_String__Concat_75651716(v7, DownloadName, 0);
  v10 = (System_String_o *)DataServerAddress;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v9);
  if ( !v10 )
    goto LABEL_27;
  if ( !System_String__StartsWith(v10, NetworkManager_TypeInfo->static_fields->FILE_URL_SCHEME, 0) )
  {
    v13 = NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v12);
      v13 = NetworkManager_TypeInfo;
    }
    v14 = System_String__Concat_75651716((System_String_o *)StringLiteral_22093/*"jar:"*/, v13->static_fields->FILE_URL_SCHEME, 0);
    if ( !System_String__StartsWith(v10, v14, 0) )
    {
      DataServerAddress = (char *)sub_2213B20(string___TypeInfo, 9);
      if ( DataServerAddress )
      {
        v21 = DataServerAddress;
        if ( !*((_DWORD *)DataServerAddress + 6) )
          goto LABEL_28;
        *((_QWORD *)DataServerAddress + 4) = v10;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(DataServerAddress + 32),
          (int32_t)v10,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
        if ( (*((_DWORD *)v21 + 6) & 0xFFFFFFFE) == 0 )
          goto LABEL_28;
        v28 = StringLiteral_1849/*"?v="*/;
        *((_QWORD *)v21 + 5) = StringLiteral_1849/*"?v="*/;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 40), v28, v22, v23, v24, v25, v26, v27);
        DataServerAddress = (char *)AssetManager_TypeInfo;
        if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v29, v30);
        if ( *((_DWORD *)v21 + 6) <= 2u )
          goto LABEL_28;
        assetBundleMasterVersion = AssetManager_TypeInfo->static_fields->assetBundleMasterVersion;
        *((_QWORD *)v21 + 6) = assetBundleMasterVersion;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(v21 + 48),
          (int32_t)assetBundleMasterVersion,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
        if ( (*((_DWORD *)v21 + 6) & 0xFFFFFFFC) == 0 )
          goto LABEL_28;
        v43 = StringLiteral_16746/*"_"*/;
        *((_QWORD *)v21 + 7) = StringLiteral_16746/*"_"*/;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 56), v43, v37, v38, v39, v40, v41, v42);
        if ( *((_DWORD *)v21 + 6) <= 4u )
          goto LABEL_28;
        assetBundleDateVersion = AssetManager_TypeInfo->static_fields->assetBundleDateVersion;
        *((_QWORD *)v21 + 8) = assetBundleDateVersion;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(v21 + 64),
          (int32_t)assetBundleDateVersion,
          v44,
          v45,
          v46,
          v47,
          v48,
          v49);
        if ( *((_DWORD *)v21 + 6) <= 5u )
          goto LABEL_28;
        v57 = StringLiteral_16746/*"_"*/;
        *((_QWORD *)v21 + 9) = StringLiteral_16746/*"_"*/;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 72), v57, v51, v52, v53, v54, v55, v56);
        HIDWORD(v78) = data->fields.size;
        DataServerAddress = (char *)System_Int32__ToString((int32_t)&v78 + 4, 0);
        if ( *((_DWORD *)v21 + 6) <= 6u
          || (*((_QWORD *)v21 + 10) = DataServerAddress,
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v21 + 80),
                (int32_t)DataServerAddress,
                v58,
                v59,
                v60,
                v61,
                v62,
                v63),
              (*((_DWORD *)v21 + 6) & 0xFFFFFFF8) == 0)
          || (v70 = StringLiteral_16746/*"_"*/,
              *((_QWORD *)v21 + 11) = StringLiteral_16746/*"_"*/,
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 88), v70, v64, v65, v66, v67, v68, v69),
              LODWORD(v78) = data->fields.crc,
              DataServerAddress = (char *)System_UInt32__ToString((uint32_t)&v78, 0),
              *((_DWORD *)v21 + 6) <= 8u) )
        {
LABEL_28:
          sub_2213CE4(DataServerAddress);
        }
        *((_QWORD *)v21 + 12) = DataServerAddress;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(v21 + 96),
          (int32_t)DataServerAddress,
          v71,
          v72,
          v73,
          v74,
          v75,
          v76);
        return System_String__Concat_75697120((System_String_array *)v21, 0);
      }
LABEL_27:
      sub_2213CDC(DataServerAddress, v6);
    }
  }
  return v10;
}


System_String_o *AssetManager__get_CacheListFile(const MethodInfo *method)
{
  System_String_o *Path; // x0
  __int64 v2; // x1
  __int64 v3; // x2
  AssetManager_c *v4; // x8
  System_String_o *v5; // x19

  if ( (byte_596F756 & 1) == 0 )
  {
    method = (const MethodInfo *)sub_2213A60(&AssetManager_TypeInfo);
    byte_596F756 = 1;
  }
  Path = AssetStorageCache__GetPath(method);
  v4 = AssetManager_TypeInfo;
  v5 = Path;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v2, v3);
    v4 = AssetManager_TypeInfo;
  }
  return System_String__Concat_75651716(v5, v4->static_fields->configFileName, 0);
}


System_String_o *AssetManager__get_CachePathName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AssetManager_c *v3; // x0

  if ( (byte_596F754 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596F754 = 1;
  }
  v3 = AssetManager_TypeInfo;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v1, v2);
    v3 = AssetManager_TypeInfo;
  }
  return v3->static_fields->cachePathName;
}


System_String_o *AssetManager__get_ConfigFileAddress(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AssetManager_c *v3; // x0
  System_String_o *DataServerAddress; // x0

  if ( (byte_596F755 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596F755 = 1;
  }
  v3 = AssetManager_TypeInfo;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v1, v2);
  DataServerAddress = AssetManager__get_DataServerAddress((const MethodInfo *)v3);
  return System_String__Concat_75651716(DataServerAddress, AssetManager_TypeInfo->static_fields->configFileName, 0);
}


System_String_o *AssetManager__get_DataServerAddress(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  NetworkManager_c *v3; // x0

  if ( (byte_596F753 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596F753 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v1, v2);
  if ( !byte_596F8CF )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596F8CF = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v1, v2);
    v3 = NetworkManager_TypeInfo;
  }
  return v3->static_fields->dataServerAddress;
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
  __int64 v1; // x1
  __int64 v2; // x2
  ManagerConfig_c *v3; // x0
  AssetManager_c *v5; // x0
  System_String_o *String; // x0

  if ( (byte_596F74D & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&ManagerConfig_TypeInfo);
    byte_596F74D = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1, v2);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseStandaloneAsset )
    return 0;
  v5 = AssetManager_TypeInfo;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v1, v2);
    v5 = AssetManager_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(v5->static_fields->SAVE_KEY, v5->static_fields->SAVE_DATA_OFFLINE, 0);
  return System_String__op_Equality(String, AssetManager_TypeInfo->static_fields->SAVE_DATA_ONLINE, 0);
}


bool AssetManager__isDownloadAssetStorageCheck(AssetManager_o *this, System_String_o *attrib, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *assetBundleDic; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  bool v8; // w20
  Il2CppObject *currentValue; // x21
  __int64 v11; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *v12; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v13; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596F785 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    byte_596F785 = 1;
  }
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  memset(&v13, 0, sizeof(v13));
  if ( !assetBundleDic
    || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      assetBundleDic,
                                                                                      (const MethodInfo_3FFDA34 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0 )
  {
    sub_2213CDC(assetBundleDic, attrib);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v13,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_3CCF33C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v11 = 0;
  v12 = &v13;
  do
  {
    v6 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v13,
           (const MethodInfo_4169ED8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    v8 = v6;
    if ( !v6 )
      break;
    currentValue = v13.fields._currentValue;
    if ( !v13.fields._currentValue )
      sub_2213CDC(v6, v7);
  }
  while ( !AssetData__IsDownloadOldVersion((AssetData_o *)v13.fields._currentValue, 0)
       && (!System_String__op_Equality(attrib, *(System_String_o **)((char *)&qword_20 + (_QWORD)currentValue), 0)
        || !AssetData__IsNeedUpdateVersion((AssetData_o *)currentValue, 0)) );
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v13,
    (const MethodInfo_4169ED4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  return v8;
}


bool AssetManager__isExistAssetStorage(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_596F768 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596F768 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v6 )
    return 0;
  if ( !Instance )
    sub_2213CDC(v6, v7);
  return AssetManager__IsExistAssetStorage((AssetManager_o *)Instance, name, v8);
}


bool AssetManager__isExistAssetStorage_47498076(System_String_array *nameList, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_596F769 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596F769 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v6 )
    return 0;
  if ( !Instance )
    sub_2213CDC(v6, v7);
  return AssetManager__IsExistAssetStorage_47498256((AssetManager_o *)Instance, nameList, v8);
}


bool AssetManager__isNeedDownload(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_596F76A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596F76A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v6 )
    return 0;
  if ( !Instance )
    sub_2213CDC(v6, v7);
  return AssetManager__IsNeedDownload((AssetManager_o *)Instance, name, v8);
}


bool AssetManager__isNeedDownload_47498608(System_String_array *nameList, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_596F76B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596F76B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v6 )
    return 0;
  if ( !Instance )
    sub_2213CDC(v6, v7);
  return AssetManager__IsNeedDownload_47498788((AssetManager_o *)Instance, nameList, v8);
}


bool AssetManager__loadAsset(
        int32_t type,
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x22
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x4

  if ( (byte_596F75E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596F75E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v10 )
    return 0;
  if ( !Instance )
    sub_2213CDC(v10, v11);
  return AssetManager__LoadAsset((AssetManager_o *)Instance, type, name, callbackFunc, v12);
}


AssetData_o *AssetManager__loadAssetResource(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_596F77D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596F77D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v6 )
    return 0;
  if ( !Instance )
    sub_2213CDC(v6, v7);
  return AssetManager__LoadAssetResource((AssetManager_o *)Instance, name, v8);
}


bool AssetManager__loadAssetStorage(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        int32_t maxParallelLoad,
        bool canCancel,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x23
  _BOOL8 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x5

  if ( (byte_596F773 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596F773 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
  v12 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v12 )
    return 0;
  if ( !Instance )
    sub_2213CDC(v12, v13);
  return AssetManager__LoadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, canCancel, v14);
}


bool AssetManager__loadAssetStorage_47503568(
        System_String_o *name,
        int32_t maxParallelLoad,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x22
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x5

  if ( (byte_596F775 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596F775 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v10 )
    return 0;
  if ( !Instance )
    sub_2213CDC(v10, v11);
  return AssetManager__LoadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, 0, v12);
}


bool AssetManager__loadAssetStorage_47503780(
        System_String_array *nameList,
        System_Action_o *callbackFunc,
        int32_t loadParalleMax,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x22
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x4

  if ( (byte_596F776 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596F776 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v10 )
    return 0;
  if ( !Instance )
    sub_2213CDC(v10, v11);
  return AssetManager__LoadAssetStorage_47503988(
           (AssetManager_o *)Instance,
           nameList,
           callbackFunc,
           loadParalleMax,
           v12);
}


bool AssetManager__loadResourcesFromAssetStorage(
        System_String_o *assetBandleName,
        System_String_array *resourceNames,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        int32_t maxParallelLoad,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x23
  _BOOL8 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x5

  if ( (byte_596F774 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596F774 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
  v12 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( v12 )
    return 0;
  if ( !Instance )
    sub_2213CDC(v12, v13);
  return AssetManager__LoadResourcesAssetStorage(
           (AssetManager_o *)Instance,
           assetBandleName,
           resourceNames,
           callbackFunc,
           maxParallelLoad,
           v14);
}


void AssetManager__pauseDownloadAssetStorage(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_596F76F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596F76F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1, v2);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_2213CDC(v4, v5);
    if ( !BYTE1(Instance[7].monitor) )
      BYTE1(Instance[7].monitor) = 1;
  }
}


void AssetManager__releaseAsset(int32_t type, System_String_o *name, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Instance; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3

  if ( (byte_596F762 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596F762 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v8 )
  {
    if ( !Instance )
      sub_2213CDC(v8, v9);
    AssetManager__ReleaseAsset((AssetManager_o *)Instance, type, name, v10);
  }
}


void AssetManager__releaseAssetResource(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_596F77F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596F77F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v6 )
  {
    if ( !Instance )
      sub_2213CDC(v6, v7);
    AssetManager__ReleaseAssetResource((AssetManager_o *)Instance, name, v8);
  }
}


void AssetManager__releaseAssetStorage(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_596F77B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596F77B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v6 )
  {
    if ( !Instance )
      sub_2213CDC(v6, v7);
    AssetManager__ReleaseAssetStorage((AssetManager_o *)Instance, name, v8);
  }
}


void AssetManager__releaseAssetStorage_47506132(System_String_array *nameList, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_596F77C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596F77C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v6 )
  {
    if ( !Instance )
      sub_2213CDC(v6, v7);
    AssetManager__ReleaseAssetStorage_47506308((AssetManager_o *)Instance, nameList, v8);
  }
}


void AssetManager__releaseAsset_47496672(int32_t type, System_String_array *nameList, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Instance; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3

  if ( (byte_596F763 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596F763 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v8 )
  {
    if ( !Instance )
      sub_2213CDC(v8, v9);
    AssetManager__ReleaseAsset_47496856((AssetManager_o *)Instance, type, nameList, v10);
  }
}


void AssetManager__releaseAsset_47496972(AssetData_o *assetInfo, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_596F764 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596F764 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v6 )
  {
    if ( !Instance )
      sub_2213CDC(v6, v7);
    if ( assetInfo )
      AssetManager__ReleaseAsset((AssetManager_o *)Instance, assetInfo->fields.type, assetInfo->fields.name, v8);
  }
}


void AssetManager__releaseAsset_47497180(AssetData_array *assetInfoList, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_596F765 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596F765 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v6 )
  {
    if ( !Instance )
      sub_2213CDC(v6, v7);
    AssetManager__ReleaseAsset_47497356((AssetManager_o *)Instance, assetInfoList, v8);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  AssetManager_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596F74B & 1) == 0 )
  {
    sub_2213A60(&AssetManager_ResourceUnloadEventHandler_TypeInfo);
    byte_596F74B = 1;
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
    v11 = sub_224B48C(p_unloadCallbacks, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, AssetManager_ResourceUnloadEventHandler_TypeInfo, v9, v10);
  AssetManager__WaitForExecutionUnloadUnuseAssets(v13, v14);
}


void AssetManager__resetAssetStorageVersion(System_String_o *path, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_596F76D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596F76D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v6 )
  {
    if ( !Instance )
      sub_2213CDC(v6, v7);
    AssetManager__ResetAssetStorageVersion((AssetManager_o *)Instance, path, v8);
  }
}


void AssetManager__resumeDownloadAssetStorage(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_596F770 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596F770 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1, v2);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !v4 )
  {
    if ( !Instance )
      sub_2213CDC(v4, v5);
    if ( BYTE1(Instance[7].monitor) )
    {
      BYTE1(Instance[7].monitor) = 0;
      AssetManager__LoadStart((AssetManager_o *)Instance, v5);
    }
  }
}


void AssetManager__setDebugStatusOut(AssetManager_o *this, bool isUse, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x19
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_596F751 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596F751 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( !Instance && !v6 )
    sub_2213CDC(v6, v7);
}


void AssetManager_LoadWaitStatus___ctor(
        AssetManager_LoadWaitStatus_o *this,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.callbackFunc = callbackFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callbackFunc,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void AssetManager_LoadWaitStatus___ctor_47521168(
        AssetManager_LoadWaitStatus_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.data = data;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)data, v5, v6, v7, v8, v9, v10);
}


void AssetManager_LoadWaitStatus___ctor_47521404(
        AssetManager_LoadWaitStatus_o *this,
        AssetData_o *data,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        System_String_array *resourceNames,
        bool canCancel,
        const MethodInfo *method)
{
  AssetManager_LoadWaitStatus_o *v10; // x23
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v10->fields.data = data;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->fields, (int32_t)data, v11, v12, v13, v14, v15, v16);
  v10->fields.callbackFunc2 = callbackFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v10->fields.callbackFunc2,
    (int32_t)callbackFunc,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v10->fields.resourceNames = resourceNames;
  v10 = (AssetManager_LoadWaitStatus_o *)((char *)v10 + 40);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v10, (int32_t)resourceNames, v23, v24, v25, v26, v27, v28);
  LOBYTE(v10->monitor) = canCancel;
}


void AssetManager_LoadWaitStatus__AddCallback(
        AssetManager_LoadWaitStatus_o *this,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_callbackFunc2; // x19
  System_Delegate_o *callbackFunc2; // t1
  System_Delegate_o *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  int32_t v14; // w8
  AssetLoader_LoadEndDataHandler_c *v15; // x1

  if ( (byte_596F7B1 & 1) == 0 )
  {
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_596F7B1 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2;
  v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)callbackFunc, 0);
  v14 = (int)v7;
  if ( !v7 )
    goto LABEL_7;
  v15 = AssetLoader_LoadEndDataHandler_TypeInfo;
  if ( (AssetLoader_LoadEndDataHandler_c *)v7->klass != AssetLoader_LoadEndDataHandler_TypeInfo
    || (p_callbackFunc2->klass = (MissionNaviTransitionBoardItem_c *)v7,
        (AssetLoader_LoadEndDataHandler_c *)v7->klass != v15) )
  {
    sub_221405C(v7, v15, v8, v9);
LABEL_7:
    p_callbackFunc2->klass = 0;
  }
  sub_2213A04(p_callbackFunc2, v14, v8, v9, v10, v11, v12, v13);
}


void AssetManager_LoadWaitStatus__AddEntry(AssetManager_LoadWaitStatus_o *this, const MethodInfo *method)
{
  AssetData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_2213CDC(0, method);
  AssetData__AddEntry(data, 0);
}


bool AssetManager_LoadWaitStatus__IsCancel(AssetManager_LoadWaitStatus_o *this, const MethodInfo *method)
{
  struct AssetData_o *data; // x8

  if ( !this->fields.canCancel )
    return 0;
  data = this->fields.data;
  return !data || data->fields.entryCount == 0;
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
    LOBYTE(data) = AssetData__IsSame_47468396(data, type, name, 0);
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

  if ( (byte_596F7B2 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596F7B2 = 1;
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_200C9EC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_200C9AC;
}


System_IAsyncResult_o *AssetManager_ResourceUnloadEventHandler__BeginInvoke(
        AssetManager_ResourceUnloadEventHandler_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  return (System_IAsyncResult_o *)sub_2213A14(this, &v5, callback, object);
}


void AssetManager_ResourceUnloadEventHandler__EndInvoke(
        AssetManager_ResourceUnloadEventHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void AssetManager_ResourceUnloadEventHandler__Invoke(
        AssetManager_ResourceUnloadEventHandler_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
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
  int32_t _1__state; // w22
  System_Action_o *action; // x0
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct AssetData_o *asset; // x1
  System_Func_bool__o *v15; // x21
  UnityEngine_WaitUntil_o *v16; // x20
  Il2CppObject **p__2__current; // x19
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_596F7B7 & 1) == 0 )
  {
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&Method_AssetManager___c__DisplayClass191_0__AssetObjectListSetupAndCall_b__0__);
    sub_2213A60(&AssetManager___c__DisplayClass191_0_TypeInfo);
    sub_2213A60(&UnityEngine_WaitUntil_TypeInfo);
    byte_596F7B7 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      action = this->fields.action;
      this->fields.__1__state = -1;
      ActionExtensions__Call(action, 0);
    }
  }
  else
  {
    this->fields.__1__state = -1;
    v5 = sub_2213CCC(AssetManager___c__DisplayClass191_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0);
    if ( !v5 )
      sub_2213CDC(v6, v7);
    asset = this->fields.asset;
    *(_QWORD *)(v5 + 16) = asset;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)asset, v8, v9, v10, v11, v12, v13);
    v15 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v15,
      (Il2CppObject *)v5,
      Method_AssetManager___c__DisplayClass191_0__AssetObjectListSetupAndCall_b__0__,
      0);
    v16 = (UnityEngine_WaitUntil_o *)sub_2213CCC(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v16, v15, 0);
    this->fields.__2__current = (Il2CppObject *)v16;
    p__2__current = &this->fields.__2__current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v16, v18, v19, v20, v21, v22, v23);
    *((_DWORD *)p__2__current - 2) = 1;
  }
  return _1__state == 0;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_AssetManager__AssetObjectListSetupAndCall_d__191_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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


void AssetManager__AssetObjectListSetupAndCall_d__192___ctor(
        AssetManager__AssetObjectListSetupAndCall_d__192_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool AssetManager__AssetObjectListSetupAndCall_d__192__MoveNext(
        AssetManager__AssetObjectListSetupAndCall_d__192_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w22
  System_Action_o *action; // x0
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct AssetData_array *assetList; // x1
  System_Func_bool__o *v15; // x21
  UnityEngine_WaitUntil_o *v16; // x20
  Il2CppObject **p__2__current; // x19
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_596F7B8 & 1) == 0 )
  {
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&Method_AssetManager___c__DisplayClass192_0__AssetObjectListSetupAndCall_b__0__);
    sub_2213A60(&AssetManager___c__DisplayClass192_0_TypeInfo);
    sub_2213A60(&UnityEngine_WaitUntil_TypeInfo);
    byte_596F7B8 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      action = this->fields.action;
      this->fields.__1__state = -1;
      ActionExtensions__Call(action, 0);
    }
  }
  else
  {
    this->fields.__1__state = -1;
    v5 = sub_2213CCC(AssetManager___c__DisplayClass192_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0);
    if ( !v5 )
      sub_2213CDC(v6, v7);
    assetList = this->fields.assetList;
    *(_QWORD *)(v5 + 16) = assetList;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)assetList, v8, v9, v10, v11, v12, v13);
    v15 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v15,
      (Il2CppObject *)v5,
      Method_AssetManager___c__DisplayClass192_0__AssetObjectListSetupAndCall_b__0__,
      0);
    v16 = (UnityEngine_WaitUntil_o *)sub_2213CCC(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v16, v15, 0);
    this->fields.__2__current = (Il2CppObject *)v16;
    p__2__current = &this->fields.__2__current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v16, v18, v19, v20, v21, v22, v23);
    *((_DWORD *)p__2__current - 2) = 1;
  }
  return _1__state == 0;
}


Il2CppObject *AssetManager__AssetObjectListSetupAndCall_d__192__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AssetManager__AssetObjectListSetupAndCall_d__192_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn AssetManager__AssetObjectListSetupAndCall_d__192__System_Collections_IEnumerator_Reset(
        AssetManager__AssetObjectListSetupAndCall_d__192_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_AssetManager__AssetObjectListSetupAndCall_d__192_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *AssetManager__AssetObjectListSetupAndCall_d__192__System_Collections_IEnumerator_get_Current(
        AssetManager__AssetObjectListSetupAndCall_d__192_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void AssetManager__AssetObjectListSetupAndCall_d__192__System_IDisposable_Dispose(
        AssetManager__AssetObjectListSetupAndCall_d__192_o *this,
        const MethodInfo *method)
{
  ;
}


void AssetManager__DelayLoadStart_d__154___ctor(
        AssetManager__DelayLoadStart_d__154_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool AssetManager__DelayLoadStart_d__154__MoveNext(
        AssetManager__DelayLoadStart_d__154_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w20
  AssetManager_o *_4__this; // x0
  Il2CppObject **p__2__current; // x19

  _1__state = this->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      _4__this = this->fields.__4__this;
      this->fields.__1__state = -1;
      if ( !_4__this )
        sub_2213CDC(0, method);
      AssetManager__LoadStart(_4__this, method);
    }
  }
  else
  {
    this->fields.__2__current = 0;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__2__current, 0, v2, v3, v4, v5, v6, v7);
    *((_DWORD *)p__2__current - 2) = 1;
  }
  return _1__state == 0;
}


Il2CppObject *AssetManager__DelayLoadStart_d__154__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AssetManager__DelayLoadStart_d__154_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn AssetManager__DelayLoadStart_d__154__System_Collections_IEnumerator_Reset(
        AssetManager__DelayLoadStart_d__154_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_AssetManager__DelayLoadStart_d__154_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *AssetManager__DelayLoadStart_d__154__System_Collections_IEnumerator_get_Current(
        AssetManager__DelayLoadStart_d__154_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void AssetManager__DelayLoadStart_d__154__System_IDisposable_Dispose(
        AssetManager__DelayLoadStart_d__154_o *this,
        const MethodInfo *method)
{
  ;
}


void AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__120___ctor(
        AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__120_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__120__MoveNext(
        AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__120_o *this,
        const MethodInfo *method)
{
  AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__120_o *v2; // x19
  int32_t _1__state; // w8
  struct AssetManager_o *_4__this; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  AssetData_o *currentValue; // x21
  const MethodInfo *v8; // x2
  _BOOL4 isDispLogo_5__2; // w8
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *downLoadWaitList; // x8
  Il2CppObject *v11; // x22
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_String_o *v21; // x22
  const MethodInfo *v22; // x1
  __int64 v23; // x2
  System_String_o *v24; // x23
  AssetManager_o *DownloadSize; // x0
  const MethodInfo *v26; // x1
  Il2CppObject *v27; // x0
  System_String_o *v28; // x23
  Il2CppObject *Instance; // x0
  Il2CppObject *v30; // x25
  CommonUI_o *v31; // x21
  ErrorDialog_ClickDelegate_o *v32; // x24
  struct AssetManager___c__DisplayClass120_0_o *_8__1; // x8
  struct AssetManager___c__DisplayClass120_0_o **p__8__1; // x21
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  UnityEngine_WaitForEndOfFrame_o *v41; // x20
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  bool result; // w0
  Il2CppObject *v50; // x21
  System_Action_o *v51; // x22
  __int64 v52; // x2
  AvalonSceneManager_c *v53; // x0
  float DEFAULT_FADE_TIME; // s8
  UnityEngine_WaitForSeconds_o *v55; // x20
  MissionNaviTransitionBoardItem_o *v56; // x19
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v63; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v64; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_596F7B9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_b__120_0__);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_AssetManager___c__DisplayClass120_0__DownloadAssetStorageAttributeWithCheckDialog_b__1__);
    sub_2213A60(&AssetManager___c__DisplayClass120_0_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    sub_2213A60(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_2213A60(&StringLiteral_26826/*"データ更新"*/);
    sub_2213A60(&StringLiteral_5637/*"END_BOOT_ASSET_DOWNLOAD"*/);
    sub_2213A60(&StringLiteral_9635/*"NETWORK_ERROR_DATA_UPDATE_TITLE"*/);
    sub_2213A60(&StringLiteral_352/*" ゲームデータの更新を行います。\n\n{0}\n\n ※Wi-Fi接続での更新を推奨します。"*/);
    this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__120_o *)sub_2213A60(&StringLiteral_9633/*"NETWORK_ERROR_DATA_UPDATE_EXP"*/);
    byte_596F7B9 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  memset(&v64, 0, sizeof(v64));
  if ( _1__state == 2 )
  {
    isDispLogo_5__2 = v2->fields._isDispLogo_5__2;
    v2->fields.__1__state = -1;
    if ( isDispLogo_5__2 )
    {
      this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__120_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      v41 = (UnityEngine_WaitForEndOfFrame_o *)sub_2213CCC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v41, 0);
      v2->fields.__2__current = (Il2CppObject *)v41;
      p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
      sub_2213A04(p__2__current, (int32_t)v41, v43, v44, v45, v46, v47, v48);
      result = 1;
      p__2__current[-1].fields._BoardType_k__BackingField = 1;
      return result;
    }
    this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__120_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this )
      goto LABEL_59;
    this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__120_o *)CommonUI__isBusyDataUpdateDialog(
                                                                                    (CommonUI_o *)this,
                                                                                    0);
    if ( ((unsigned __int8)this & 1) != 0 )
      goto LABEL_44;
    if ( !*p__8__1 )
      goto LABEL_59;
    if ( (*p__8__1)->fields.isDataUpdate )
    {
      this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__120_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
      if ( !this )
        goto LABEL_59;
      CrashReporter__SetNowState((CrashReporter_o *)this, (System_String_o *)StringLiteral_5637/*"END_BOOT_ASSET_DOWNLOAD"*/, 0);
    }
    *p__8__1 = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.__8__1, 0, v35, v36, v37, v38, v39, v40);
    goto LABEL_50;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_59;
  this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__120_o *)_4__this->fields.assetBundleDic;
  if ( !this )
    goto LABEL_59;
  this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__120_o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                  (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                                                  (const MethodInfo_3FFDA34 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !this )
    goto LABEL_59;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v63,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_3CCF33C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v64 = v63;
  v63.fields._dictionary = 0;
  *(_QWORD *)&v63.fields._index = &v64;
  while ( 1 )
  {
    v5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v64,
           (const MethodInfo_4169ED8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v5 )
      break;
    currentValue = (AssetData_o *)v64.fields._currentValue;
    if ( !v64.fields._currentValue )
      sub_2213CDC(v5, v6);
    if ( AssetData__IsDownloadOldVersion((AssetData_o *)v64.fields._currentValue, 0)
      || System_String__op_Equality(v2->fields.attrib, currentValue->fields.attrib, 0)
      && AssetData__IsNeedUpdateVersion(currentValue, 0) )
    {
      AssetManager__AddLoadWaitStatus_47509712(_4__this, currentValue, v8);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v64,
    (const MethodInfo_4169ED4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  downLoadWaitList = _4__this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
LABEL_59:
    sub_2213CDC(this, method);
  if ( downLoadWaitList->fields._size >= 1 )
  {
    v11 = (Il2CppObject *)sub_2213CCC(AssetManager___c__DisplayClass120_0_TypeInfo);
    System_Object___ctor(v11, 0);
    v2->fields.__8__1 = (struct AssetManager___c__DisplayClass120_0_o *)v11;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.__8__1, (int32_t)v11, v12, v13, v14, v15, v16, v17);
    if ( !v2->fields.__8__1 )
      goto LABEL_59;
    v2->fields.__8__1->fields.isDataUpdate = 0;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v18);
    if ( LocalizationManager__ContainsKey((System_String_o *)StringLiteral_9635/*"NETWORK_ERROR_DATA_UPDATE_TITLE"*/, 0) )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v20);
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_9635/*"NETWORK_ERROR_DATA_UPDATE_TITLE"*/, 0);
    }
    else
    {
      v21 = (System_String_o *)StringLiteral_26826/*"データ更新"*/;
    }
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v20);
    if ( LocalizationManager__ContainsKey((System_String_o *)StringLiteral_9633/*"NETWORK_ERROR_DATA_UPDATE_EXP"*/, 0) )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22, v23);
      v24 = LocalizationManager__Get((System_String_o *)StringLiteral_9633/*"NETWORK_ERROR_DATA_UPDATE_EXP"*/, 0);
    }
    else
    {
      v24 = (System_String_o *)StringLiteral_352/*" ゲームデータの更新を行います。\n\n{0}\n\n ※Wi-Fi接続での更新を推奨します。"*/;
    }
    DownloadSize = (AssetManager_o *)AssetManager__GetDownloadSize(_4__this, v22);
    v27 = (Il2CppObject *)AssetManager__ConvertDownloadSizeToString(DownloadSize, (double)(__int64)DownloadSize, v26);
    v28 = System_String__Format(v24, v27, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v30 = (Il2CppObject *)v2->fields.__8__1;
    v31 = (CommonUI_o *)Instance;
    v32 = (ErrorDialog_ClickDelegate_o *)sub_2213CCC(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(
      v32,
      v30,
      Method_AssetManager___c__DisplayClass120_0__DownloadAssetStorageAttributeWithCheckDialog_b__1__,
      0);
    if ( !v31 )
      goto LABEL_59;
    CommonUI__OpenDataUpdateDialog(v31, v21, v28, v32, 0, 0);
    goto LABEL_40;
  }
LABEL_50:
  v2->fields._isDispLogo_5__2 = 0;
  v50 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v51 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v51,
    (Il2CppObject *)_4__this,
    Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_b__120_0__,
    0);
  if ( !v50 )
    goto LABEL_59;
  this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__120_o *)CommonUI__PlayLogo(
                                                                                  (CommonUI_o *)v50,
                                                                                  v51,
                                                                                  0);
  v2->fields._isDispLogo_5__2 = (unsigned __int8)this & 1;
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_55;
  v53 = AvalonSceneManager_TypeInfo;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, method, v52);
    v53 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v53->static_fields->DEFAULT_FADE_TIME;
  v55 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v55, DEFAULT_FADE_TIME, 0);
  v2->fields.__2__current = (Il2CppObject *)v55;
  v56 = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
  sub_2213A04(v56, (int32_t)v55, v57, v58, v59, v60, v61, v62);
  result = 1;
  v56[-1].fields._BoardType_k__BackingField = 2;
  return result;
}


Il2CppObject *AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__120__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__120_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__120__System_Collections_IEnumerator_Reset(
        AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__120_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__120_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__120__System_Collections_IEnumerator_get_Current(
        AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__120_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__120__System_IDisposable_Dispose(
        AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__120_o *this,
        const MethodInfo *method)
{
  ;
}


void AssetManager__InitCR_d__136___ctor(
        AssetManager__InitCR_d__136_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool AssetManager__InitCR_d__136__MoveNext(AssetManager__InitCR_d__136_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  struct AssetManager_o *_4__this; // x20
  __int64 loader_5__3; // x0
  AssetManager_c *v12; // x0
  __int64 v13; // x2
  AssetManager_c *v14; // x0
  AssetManager_c *v15; // x0
  AssetManager_c *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  System_String_o *AllText; // x21
  System_String_o *v20; // x0
  __int64 v21; // x2
  UnityEngine_WaitForEndOfFrame_o *v22; // x20
  Il2CppObject **v23; // x19
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *v30; // x21
  __int64 v31; // x0
  System_String_o *v32; // x21
  __int64 v33; // x0
  int v34; // w8
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int v40; // w23
  __int64 *v41; // x8
  System_String_o *v42; // x0
  __int64 v43; // x1
  System_String_o *v44; // x22
  System_String_o *v45; // x22
  System_String_o *v46; // x21
  System_Text_Encoding_o *UTF8; // x0
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x2
  System_Byte_array *v51; // x23
  uint32_t v52; // w23
  __int64 v53; // x0
  int v54; // w8
  __int64 v55; // x27
  __int64 v56; // x8
  __int64 v57; // x22
  System_String_o *v58; // x0
  __int64 v59; // x1
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  AssetManager_c *v66; // x8
  System_String_o *v67; // x23
  struct AssetManager_StaticFields *v68; // x0
  __int64 v69; // x1
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  AssetManager_c *v76; // x0
  struct System_String_o **v77; // x8
  struct System_String_o *v78; // x23
  struct AssetManager_StaticFields *v79; // x0
  __int64 v80; // x1
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  AssetManager_c *v87; // x0
  struct System_String_o **v88; // x8
  struct System_String_o *v89; // x22
  struct AssetManager_StaticFields *v90; // x0
  int klass; // w8
  __int64 v92; // x21
  __int64 v93; // x22
  System_String_o *v94; // x0
  int32_t v95; // w23
  System_String_o *v96; // x24
  System_String_o *v97; // x0
  int32_t v98; // w25
  System_String_o *v99; // x0
  int v100; // w8
  uint32_t v101; // w26
  System_String_o *v102; // x27
  System_String_o *v103; // x22
  System_Collections_Generic_Dictionary_object__object__o *v104; // x28
  AssetData_o *v105; // x29
  System_String_o *v106; // x21
  AssetManager_c *v107; // x0
  struct AssetManager_StaticFields *v108; // x0
  int32_t v109; // w1
  int32_t v110; // w1
  struct AssetManager_StaticFields *v111; // x0
  System_String_o *v112; // x2
  System_String_o *v113; // x3
  int32_t v114; // w4
  int32_t v115; // w5
  bool v116; // w6
  bool v117; // w7
  int32_t v118; // w1
  struct AssetManager_StaticFields *v119; // x0
  System_String_o *v120; // x2
  System_String_o *v121; // x3
  int32_t v122; // w4
  int32_t v123; // w5
  bool v124; // w6
  bool v125; // w7
  ManagerConfig_c *v126; // x0
  struct ManagerConfig_StaticFields *v127; // x8
  Il2CppObject *v128; // x22
  ErrorDialog_ClickDelegate_o *v129; // x23
  AssetManager_c *v130; // x0
  struct System_String_o *ConfigFileAddress; // x0
  System_String_o *v132; // x2
  System_String_o *v133; // x3
  int32_t v134; // w4
  int32_t v135; // w5
  bool v136; // w6
  bool v137; // w7
  System_String_o *v138; // x2
  System_String_o *v139; // x3
  int32_t v140; // w4
  int32_t v141; // w5
  bool v142; // w6
  bool v143; // w7
  System_String_o *v144; // x21
  System_String_o *v145; // x0
  struct UnityEngine_Networking_UnityWebRequest_o *v146; // x0
  System_String_o *v147; // x2
  System_String_o *v148; // x3
  int32_t v149; // w4
  int32_t v150; // w5
  bool v151; // w6
  bool v152; // w7
  __int64 v153; // x1
  __int64 v154; // x2
  float v155; // s8
  ManagerConfig_c *v156; // x0
  float TIMEOUT; // s0
  UnityEngine_WaitForEndOfFrame_c *v158; // x0
  UnityEngine_WaitForEndOfFrame_o *v159; // x21
  System_String_o *v160; // x2
  System_String_o *v161; // x3
  int32_t v162; // w4
  int32_t v163; // w5
  bool v164; // w6
  bool v165; // w7
  UnityEngine_Networking_UnityWebRequest_o **p_loader_5__3; // x21
  float downloadProgress; // s0
  float loadProgress_5__5; // s9
  float v169; // s8
  System_String_o *v170; // x2
  System_String_o *v171; // x3
  int32_t v172; // w4
  int32_t v173; // w5
  bool v174; // w6
  bool v175; // w7
  float unscaledTime; // s0
  bool v177; // zf
  float v178; // s8
  System_String_o *error; // x0
  bool IsNullOrEmpty; // w8
  __int64 v181; // x1
  __int64 v182; // x2
  System_String_o *text; // x22
  System_String_o *v184; // x22
  const MethodInfo *v185; // x1
  __int64 v186; // x2
  System_String_o *configFileUrl_5__2; // x22
  System_String_o *UrlString; // x0
  System_String_o *v189; // x0
  System_String_o *v190; // x22
  ManagerConfig_c *v191; // x0
  struct ManagerConfig_StaticFields *static_fields; // x8
  Il2CppObject *wait_5__6; // x1
  Il2CppObject **p__2__current; // x19
  int v195; // w8
  System_String_o *v196; // x22
  System_String_o **v197; // x29
  __int64 v198; // x1
  __int64 v199; // x2
  int v200; // w8
  int32_t v201; // w0
  int32_t v202; // w24
  System_String_o *v203; // x23
  System_String_o *v204; // x22
  __int64 v205; // x1
  __int64 v206; // x2
  System_Byte_array *v207; // x24
  uint32_t v208; // w24
  __int64 v209; // x1
  System_String_o *v210; // x2
  System_String_o *v211; // x3
  int32_t v212; // w4
  int32_t v213; // w5
  bool v214; // w6
  bool v215; // w7
  System_String_o *v216; // x2
  System_String_o *v217; // x3
  int32_t v218; // w4
  int32_t v219; // w5
  bool v220; // w6
  bool v221; // w7
  int v222; // w8
  System_String_array *v223; // x23
  __int64 v224; // x22
  const MethodInfo *v225; // x1
  System_String_o *v226; // x2
  System_String_o *v227; // x3
  int32_t v228; // w4
  int32_t v229; // w5
  bool v230; // w6
  bool v231; // w7
  int max_length; // w8
  int i; // w27
  __int64 v234; // x24
  System_String_o *v235; // x0
  __int64 v236; // x1
  __int64 v237; // x2
  int v238; // w9
  __int64 *v239; // x10
  System_String_o *v240; // x26
  AssetManager_c *v241; // x8
  bool v242; // cc
  __int64 *v243; // x9
  __int64 v244; // x25
  __int64 v245; // x24
  System_String_o *v246; // x2
  System_String_o *v247; // x3
  int32_t v248; // w4
  int32_t v249; // w5
  bool v250; // w6
  bool v251; // w7
  System_String_o *v252; // x2
  System_String_o *v253; // x3
  int32_t v254; // w4
  int32_t v255; // w5
  bool v256; // w6
  bool v257; // w7
  System_String_o *v258; // x2
  System_String_o *v259; // x3
  int32_t v260; // w4
  int32_t v261; // w5
  bool v262; // w6
  bool v263; // w7
  System_String_o *v264; // x0
  int32_t v265; // w26
  System_String_o *v266; // x0
  System_String_o *v267; // x0
  const MethodInfo *v268; // x3
  int v269; // w8
  uint32_t v270; // w28
  System_String_o *v271; // x24
  AssetData_o *AssetData; // x0
  AssetData_o *v273; // x25
  System_String_o **v274; // x26
  __int64 v275; // x29
  AssetData_o *v276; // x25
  struct System_String_o *v277; // x23
  AssetManager_c *v278; // x0
  struct AssetManager_StaticFields *v279; // x0
  struct System_String_o *v280; // x1
  struct AssetManager_StaticFields *v281; // x0
  System_String_o *v282; // x2
  System_String_o *v283; // x3
  int32_t v284; // w4
  int32_t v285; // w5
  bool v286; // w6
  bool v287; // w7
  struct System_String_o *v288; // x1
  struct AssetManager_StaticFields *v289; // x0
  System_String_o *v290; // x2
  System_String_o *v291; // x3
  int32_t v292; // w4
  int32_t v293; // w5
  bool v294; // w6
  bool v295; // w7
  _BOOL8 v296; // x0
  __int64 v297; // x1
  Il2CppObject *current; // x22
  System_Collections_Generic_Dictionary_object__object__o *assetBundleDic; // x0
  __int64 v300; // x1
  System_Collections_Generic_Dictionary_object__object__o *v301; // x0
  Il2CppObject *v302; // x22
  System_String_o *v303; // x2
  System_String_o *v304; // x3
  int32_t v305; // w4
  int32_t v306; // w5
  bool v307; // w6
  bool v308; // w7
  ManagerConfig_c *v309; // x0
  struct ManagerConfig_StaticFields *v310; // x8
  Il2CppObject *Instance; // x21
  ErrorDialog_ClickDelegate_o *v312; // x23
  UnityEngine_WaitForEndOfFrame_o *v313; // x20
  System_String_o *v314; // x2
  System_String_o *v315; // x3
  int32_t v316; // w4
  int32_t v317; // w5
  bool v318; // w6
  bool v319; // w7
  ManagementManager_c *v320; // x0
  _BOOL4 isDuringStartup; // w22
  __int64 v322; // x1
  __int64 v323; // x2
  Il2CppObject *v324; // x21
  int v325; // w9
  System_String_o *v326; // x22
  ErrorDialog_ClickDelegate_o *v327; // x23
  System_String_o *v328; // x22
  ErrorDialog_ClickDelegate_o *v329; // x23
  UnityEngine_WaitForEndOfFrame_o *v330; // x20
  System_String_o *v331; // x2
  System_String_o *v332; // x3
  int32_t v333; // w4
  int32_t v334; // w5
  bool v335; // w6
  bool v336; // w7
  UnityEngine_WaitForSeconds_o *v337; // x20
  System_String_o *v338; // x2
  System_String_o *v339; // x3
  int32_t v340; // w4
  int32_t v341; // w5
  bool v342; // w6
  bool v343; // w7
  const MethodInfo *v344; // x2
  System_String_o *v345; // x2
  System_String_o *v346; // x3
  int32_t v347; // w4
  int32_t v348; // w5
  bool v349; // w6
  bool v350; // w7
  UnityEngine_WaitForEndOfFrame_o *v351; // x20
  System_String_o *v352; // x2
  System_String_o *v353; // x3
  int32_t v354; // w4
  int32_t v355; // w5
  bool v356; // w6
  bool v357; // w7
  System_Nullable_Vector2__o methoda; // [xsp+0h] [xbp-D0h]
  System_Nullable_Vector2__o methodb; // [xsp+0h] [xbp-D0h]
  int32_t newVersion; // [xsp+1Ch] [xbp-B4h]
  System_String_o *keyType; // [xsp+20h] [xbp-B0h]
  int32_t size; // [xsp+2Ch] [xbp-A4h]
  System_String_o *attrib; // [xsp+30h] [xbp-A0h]
  System_String_o *attriba; // [xsp+30h] [xbp-A0h]
  _QWORD v366[2]; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v367; // [xsp+48h] [xbp-88h] BYREF

  if ( (byte_596F7BA & 1) == 0 )
  {
    sub_2213A60(&AssetDataListInfo_TypeInfo);
    sub_2213A60(&AssetData_TypeInfo);
    sub_2213A60(&Method_AssetManager_OnClickRetryDialog__);
    sub_2213A60(&Method_AssetManager_OnClickWaitDebugDialog__);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&CatAndMouseGame_TypeInfo);
    sub_2213A60(&char___TypeInfo);
    sub_2213A60(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Crc32_TypeInfo);
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__AssetData__set_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_AssetData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&ManagementManager_TypeInfo);
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_2213A60(&StringLiteral_2499/*"AssetStorageList download time over"*/);
    sub_2213A60(&StringLiteral_2495/*"AssetStorageList download crc error"*/);
    sub_2213A60(&StringLiteral_2491/*"AssetStorage boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/);
    sub_2213A60(&StringLiteral_2139/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/);
    sub_2213A60(&StringLiteral_2487/*"AssetStorage boot load crc error : チェックサム値が不一致"*/);
    sub_2213A60(&StringLiteral_16551/*"[FFFF80]Download error for debug"*/);
    sub_2213A60(&StringLiteral_2496/*"AssetStorageList download data error"*/);
    sub_2213A60(&StringLiteral_2498/*"AssetStorageList download error : "*/);
    sub_2213A60(&StringLiteral_2489/*"AssetStorage boot load error : アセットバンドルリスト作成失敗"*/);
    sub_2213A60(&StringLiteral_26661/*"~"*/);
    sub_2213A60(&StringLiteral_2490/*"AssetStorage boot load error : ファイル先頭の１行目の内容が空"*/);
    sub_2213A60(&StringLiteral_11989/*"SCRIPT"*/);
    sub_2213A60(&StringLiteral_1851/*"@"*/);
    sub_2213A60(&StringLiteral_2140/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596F7BA = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  loader_5__3 = 0;
  memset(&v367, 0, sizeof(v367));
  if ( _1__state <= 2 )
  {
    if ( _1__state )
    {
      if ( _1__state != 1 )
      {
        if ( _1__state != 2 )
          return loader_5__3;
        this->fields.__1__state = -1;
LABEL_135:
        p_loader_5__3 = &this->fields._loader_5__3;
        loader_5__3 = (__int64)this->fields._loader_5__3;
        if ( !loader_5__3 )
          goto LABEL_285;
        loader_5__3 = UnityEngine_Networking_UnityWebRequest__get_isDone(
                        (UnityEngine_Networking_UnityWebRequest_o *)loader_5__3,
                        0);
        if ( (loader_5__3 & 1) == 0 )
        {
          loader_5__3 = (__int64)*p_loader_5__3;
          if ( !*p_loader_5__3 )
            goto LABEL_285;
          downloadProgress = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                               (UnityEngine_Networking_UnityWebRequest_o *)loader_5__3,
                               0);
          loadProgress_5__5 = this->fields._loadProgress_5__5;
          v169 = downloadProgress;
          unscaledTime = UnityEngine_Time__get_unscaledTime(0);
          v177 = v169 == loadProgress_5__5;
          v178 = unscaledTime;
          if ( !v177 )
          {
            v191 = ManagerConfig_TypeInfo;
            if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method, v170);
              v191 = ManagerConfig_TypeInfo;
            }
            static_fields = v191->static_fields;
            loader_5__3 = (__int64)this->fields._loader_5__3;
            this->fields._requestTime_5__4 = v178 + static_fields->TIMEOUT;
            if ( !loader_5__3 )
              goto LABEL_285;
            this->fields._loadProgress_5__5 = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                                                (UnityEngine_Networking_UnityWebRequest_o *)loader_5__3,
                                                0);
            goto LABEL_159;
          }
          if ( unscaledTime < this->fields._requestTime_5__4 )
          {
LABEL_159:
            wait_5__6 = (Il2CppObject *)this->fields._wait_5__6;
            this->fields.__2__current = wait_5__6;
            p__2__current = &this->fields.__2__current;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)p__2__current,
              (int32_t)wait_5__6,
              v170,
              v171,
              v172,
              v173,
              v174,
              v175);
            v195 = 2;
LABEL_283:
            *((_DWORD *)p__2__current - 2) = v195;
            LOBYTE(loader_5__3) = 1;
            return loader_5__3;
          }
        }
        if ( !_4__this )
          goto LABEL_285;
        loader_5__3 = (__int64)*p_loader_5__3;
        if ( !*p_loader_5__3 )
          goto LABEL_285;
        if ( !UnityEngine_Networking_UnityWebRequest__get_isDone(
                (UnityEngine_Networking_UnityWebRequest_o *)loader_5__3,
                0) )
        {
          v190 = (System_String_o *)StringLiteral_2499/*"AssetStorageList download time over"*/;
LABEL_252:
          if ( *p_loader_5__3 )
          {
            UnityEngine_Networking_UnityWebRequest__Dispose(*p_loader_5__3, 0);
            *p_loader_5__3 = 0;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields._loader_5__3,
              0,
              v303,
              v304,
              v305,
              v306,
              v307,
              v308);
          }
          if ( !v190 )
            goto LABEL_282;
          v309 = ManagerConfig_TypeInfo;
          if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method, v2);
            v309 = ManagerConfig_TypeInfo;
          }
          v310 = v309->static_fields;
          if ( !v310->UseDebugCommand )
            goto LABEL_265;
          if ( !*(&v309->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v309, method, v2);
            v310 = ManagerConfig_TypeInfo->static_fields;
          }
          if ( !System_String__op_Inequality(v310->ServerDefaultType, (System_String_o *)StringLiteral_11989/*"SCRIPT"*/, 0) )
            goto LABEL_265;
          _4__this->fields.isErrorDialog = 1;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v312 = (ErrorDialog_ClickDelegate_o *)sub_2213CCC(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(
            v312,
            (Il2CppObject *)_4__this,
            Method_AssetManager_OnClickWaitDebugDialog__,
            0);
          if ( !Instance )
            goto LABEL_285;
          *(_QWORD *)&methodb.fields.hasValue = 0;
          methodb.fields.value.fields.y = 0.0;
          CommonUI__OpenWarningDialog(
            (CommonUI_o *)Instance,
            (System_String_o *)StringLiteral_16551/*"[FFFF80]Download error for debug"*/,
            v190,
            v312,
            1,
            0,
            -1.0,
            1,
            methodb,
            0);
LABEL_263:
          if ( _4__this->fields.isErrorDialog )
          {
            v313 = (UnityEngine_WaitForEndOfFrame_o *)sub_2213CCC(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v313, 0);
            this->fields.__2__current = (Il2CppObject *)v313;
            p__2__current = &this->fields.__2__current;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)p__2__current,
              (int32_t)v313,
              v314,
              v315,
              v316,
              v317,
              v318,
              v319);
            v195 = 3;
            goto LABEL_283;
          }
LABEL_265:
          _4__this->fields.isErrorDialog = 1;
          if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method, v2);
          if ( !byte_596F739 )
          {
            sub_2213A60(&ManagementManager_TypeInfo);
            byte_596F739 = 1;
          }
          v320 = ManagementManager_TypeInfo;
          if ( !*(&ManagementManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method, v2);
            v320 = ManagementManager_TypeInfo;
          }
          isDuringStartup = v320->static_fields->isDuringStartup;
          v324 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v325 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
          if ( isDuringStartup )
          {
            if ( !v325 )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v322, v323);
            v326 = LocalizationManager__Get((System_String_o *)StringLiteral_2139/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0);
            v327 = (ErrorDialog_ClickDelegate_o *)sub_2213CCC(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(
              v327,
              (Il2CppObject *)_4__this,
              Method_AssetManager_OnClickRetryDialog__,
              0);
            if ( v324 )
            {
              CommonUI__OpenRetryBootDialog((CommonUI_o *)v324, (System_String_o *)StringLiteral_1/*""*/, v326, v327, 0, 0);
              goto LABEL_280;
            }
          }
          else
          {
            if ( !v325 )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v322, v323);
            v328 = LocalizationManager__Get((System_String_o *)StringLiteral_2140/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0);
            v329 = (ErrorDialog_ClickDelegate_o *)sub_2213CCC(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(
              v329,
              (Il2CppObject *)_4__this,
              Method_AssetManager_OnClickRetryDialog__,
              0);
            if ( v324 )
            {
              CommonUI__OpenRetryDialog((CommonUI_o *)v324, (System_String_o *)StringLiteral_1/*""*/, v328, v329, 0, 0);
              goto LABEL_280;
            }
          }
          goto LABEL_285;
        }
        loader_5__3 = (__int64)*p_loader_5__3;
        if ( !*p_loader_5__3 )
          goto LABEL_285;
        error = UnityEngine_Networking_UnityWebRequest__get_error(
                  (UnityEngine_Networking_UnityWebRequest_o *)loader_5__3,
                  0);
        IsNullOrEmpty = System_String__IsNullOrEmpty(error, 0);
        loader_5__3 = (__int64)*p_loader_5__3;
        if ( !IsNullOrEmpty )
        {
          if ( !loader_5__3 )
            goto LABEL_285;
          v189 = UnityEngine_Networking_UnityWebRequest__get_error(
                   (UnityEngine_Networking_UnityWebRequest_o *)loader_5__3,
                   0);
          goto LABEL_162;
        }
        if ( !loader_5__3 )
          goto LABEL_285;
        loader_5__3 = (__int64)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                 (UnityEngine_Networking_UnityWebRequest_o *)loader_5__3,
                                 0);
        if ( !loader_5__3 )
          goto LABEL_285;
        text = UnityEngine_Networking_DownloadHandler__get_text(
                 (UnityEngine_Networking_DownloadHandler_o *)loader_5__3,
                 0);
        if ( !*(&CatAndMouseGame_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v181, v182);
        v184 = CatAndMouseGame__MouseGame3(text, 0);
        if ( System_String__IsNullOrEmpty(v184, 0) )
        {
          configFileUrl_5__2 = this->fields._configFileUrl_5__2;
          if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v185, v186);
          UrlString = AssetManager__getUrlString(configFileUrl_5__2, v185);
          v189 = System_String__Concat_75651716((System_String_o *)StringLiteral_2498/*"AssetStorageList download error : "*/, UrlString, 0);
LABEL_162:
          v190 = v189;
          goto LABEL_252;
        }
        loader_5__3 = sub_2213B20(char___TypeInfo, 1);
        if ( !loader_5__3 )
          goto LABEL_285;
        method = (const MethodInfo *)loader_5__3;
        if ( !*(_DWORD *)(loader_5__3 + 24) )
          goto LABEL_286;
        *(_WORD *)(loader_5__3 + 32) = -257;
        if ( !v184 )
          goto LABEL_285;
        loader_5__3 = (__int64)System_String__Trim_75713456(v184, (System_Char_array *)loader_5__3, 0);
        if ( !loader_5__3 )
          goto LABEL_285;
        v196 = (System_String_o *)loader_5__3;
        v197 = (System_String_o **)&StringLiteral_26661/*"~"*/;
        if ( System_String__StartsWith((System_String_o *)loader_5__3, (System_String_o *)StringLiteral_26661/*"~"*/, 0) )
        {
          loader_5__3 = sub_2213B20(char___TypeInfo, 2);
          if ( !loader_5__3 )
            goto LABEL_285;
          v200 = *(_DWORD *)(loader_5__3 + 24);
          if ( !v200 )
            goto LABEL_286;
          *(_WORD *)(loader_5__3 + 32) = 13;
          if ( v200 == 1 )
            goto LABEL_286;
          *(_WORD *)(loader_5__3 + 34) = 10;
          v201 = System_String__IndexOfAny(v196, (System_Char_array *)loader_5__3, 0);
          if ( v201 >= 2 )
          {
            v202 = v201;
            v203 = System_String__Substring_75702848(v196, 1, v201 - 1, 0);
            v204 = System_String__Substring(v196, v202 + 1, 0);
            loader_5__3 = (__int64)System_Text_Encoding__get_UTF8(0);
            if ( !loader_5__3 )
              goto LABEL_285;
            v207 = (System_Byte_array *)(*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))(*(_QWORD *)loader_5__3 + 600LL))(
                                          loader_5__3,
                                          v204,
                                          *(_QWORD *)(*(_QWORD *)loader_5__3 + 608LL));
            if ( !*(&Crc32_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(Crc32_TypeInfo, v205, v206);
            v208 = Crc32__Compute(v207, 0);
            if ( System_UInt32__Parse(v203, 0) == v208 )
            {
              if ( *p_loader_5__3 )
              {
                UnityEngine_Networking_UnityWebRequest__Dispose(*p_loader_5__3, 0);
                *p_loader_5__3 = 0;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)&this->fields._loader_5__3,
                  0,
                  v216,
                  v217,
                  v218,
                  v219,
                  v220,
                  v221);
              }
              if ( !v204 )
                goto LABEL_291;
              loader_5__3 = sub_2213B20(char___TypeInfo, 2);
              if ( !loader_5__3 )
                goto LABEL_285;
              v222 = *(_DWORD *)(loader_5__3 + 24);
              if ( v222 )
              {
                *(_WORD *)(loader_5__3 + 32) = 13;
                if ( v222 != 1 )
                {
                  *(_WORD *)(loader_5__3 + 34) = 10;
                  v223 = System_String__Split_75706100(v204, (System_Char_array *)loader_5__3, 1, 0);
                  v224 = sub_2213CCC(AssetDataListInfo_TypeInfo);
                  AssetDataListInfo___ctor((AssetDataListInfo_o *)v224, v225);
                  if ( !v223 )
                    goto LABEL_285;
                  max_length = v223->max_length;
                  if ( max_length >= 1 )
                  {
                    for ( i = 0; i < max_length; ++i )
                    {
                      if ( i >= (unsigned int)max_length )
                        goto LABEL_286;
                      loader_5__3 = (__int64)v223->m_Items[i];
                      if ( !loader_5__3 )
                        goto LABEL_285;
                      loader_5__3 = (__int64)System_String__Split((System_String_o *)loader_5__3, 0x2Cu, 0, 0);
                      if ( !loader_5__3 )
                        goto LABEL_285;
                      v234 = loader_5__3;
                      if ( *(int *)(loader_5__3 + 24) < 1 )
                        break;
                      loader_5__3 = *(_QWORD *)(loader_5__3 + 32);
                      if ( !loader_5__3 )
                        goto LABEL_285;
                      loader_5__3 = System_String__StartsWith(
                                      (System_String_o *)loader_5__3,
                                      (System_String_o *)StringLiteral_1851/*"@"*/,
                                      0);
                      if ( (loader_5__3 & 1) != 0 )
                      {
                        if ( !*(_DWORD *)(v234 + 24) )
                          goto LABEL_286;
                        loader_5__3 = *(_QWORD *)(v234 + 32);
                        if ( !loader_5__3 )
                          goto LABEL_285;
                        v235 = System_String__Substring((System_String_o *)loader_5__3, 1, 0);
                        v238 = *(_DWORD *)(v234 + 24);
                        v239 = (__int64 *)(v234 + 48);
                        v240 = v235;
                        v241 = AssetManager_TypeInfo;
                        if ( v238 == 2 )
                          v239 = (__int64 *)&StringLiteral_1/*""*/;
                        v242 = v238 <= 1;
                        if ( v238 <= 1 )
                          v243 = (__int64 *)&StringLiteral_1/*""*/;
                        else
                          v243 = (__int64 *)(v234 + 40);
                        if ( v242 )
                          v239 = (__int64 *)&StringLiteral_1/*""*/;
                        v244 = *v243;
                        v245 = *v239;
                        if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
                        {
                          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v236, v237);
                          v241 = AssetManager_TypeInfo;
                        }
                        loader_5__3 = System_String__op_Inequality(
                                        v240,
                                        v241->static_fields->assetBundleMasterVersion,
                                        0);
                        if ( (loader_5__3 & 1) != 0 )
                        {
                          loader_5__3 = (__int64)_4__this->fields.assetBundleDic;
                          if ( !loader_5__3 )
                            goto LABEL_285;
                          System_Collections_Generic_Dictionary_object__object___Clear(
                            (System_Collections_Generic_Dictionary_object__object__o *)loader_5__3,
                            (const MethodInfo_3FFDD98 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
                        }
                        if ( !v224 )
                          goto LABEL_285;
                        *(_QWORD *)(v224 + 16) = v240;
                        sub_2213A04(
                          (MissionNaviTransitionBoardItem_o *)(v224 + 16),
                          (int32_t)v240,
                          v246,
                          v247,
                          v248,
                          v249,
                          v250,
                          v251);
                        *(_QWORD *)(v224 + 24) = v244;
                        sub_2213A04(
                          (MissionNaviTransitionBoardItem_o *)(v224 + 24),
                          v244,
                          v252,
                          v253,
                          v254,
                          v255,
                          v256,
                          v257);
                        *(_QWORD *)(v224 + 32) = v245;
                        sub_2213A04(
                          (MissionNaviTransitionBoardItem_o *)(v224 + 32),
                          v245,
                          v258,
                          v259,
                          v260,
                          v261,
                          v262,
                          v263);
                      }
                      else
                      {
                        if ( !*(_DWORD *)(v234 + 24) )
                          goto LABEL_286;
                        loader_5__3 = *(_QWORD *)(v234 + 32);
                        if ( !loader_5__3 )
                          goto LABEL_285;
                        loader_5__3 = System_String__StartsWith((System_String_o *)loader_5__3, *v197, 0);
                        if ( (loader_5__3 & 1) == 0 )
                        {
                          if ( !*(_DWORD *)(v234 + 24) )
                            goto LABEL_286;
                          loader_5__3 = *(_QWORD *)(v234 + 32);
                          if ( !loader_5__3 )
                            goto LABEL_285;
                          loader_5__3 = System_String__IndexOf((System_String_o *)loader_5__3, 0x7Eu, 0);
                          if ( (_DWORD)loader_5__3 != 1 )
                          {
                            if ( *(int *)(v234 + 24) < 5 )
                              break;
                            loader_5__3 = *(_QWORD *)(v234 + 32);
                            if ( !loader_5__3 )
                              goto LABEL_285;
                            v264 = System_String__Trim((System_String_o *)loader_5__3, 0);
                            loader_5__3 = System_Int32__Parse(v264, 0);
                            if ( *(_DWORD *)(v234 + 24) <= 2u )
                              goto LABEL_286;
                            v265 = loader_5__3;
                            loader_5__3 = *(_QWORD *)(v234 + 48);
                            if ( !loader_5__3 )
                              goto LABEL_285;
                            attriba = *(System_String_o **)(v234 + 40);
                            v266 = System_String__Trim((System_String_o *)loader_5__3, 0);
                            loader_5__3 = System_Int32__Parse(v266, 0);
                            size = loader_5__3;
                            if ( (*(_DWORD *)(v234 + 24) & 0xFFFFFFFC) == 0 )
                              goto LABEL_286;
                            loader_5__3 = *(_QWORD *)(v234 + 56);
                            if ( !loader_5__3 )
                              goto LABEL_285;
                            v267 = System_String__Trim((System_String_o *)loader_5__3, 0);
                            loader_5__3 = System_UInt32__Parse(v267, 0);
                            v269 = *(_DWORD *)(v234 + 24);
                            if ( (unsigned int)v269 <= 4 )
                              goto LABEL_286;
                            v270 = loader_5__3;
                            if ( v269 >= 6 )
                              keyType = *(System_String_o **)(v234 + 72);
                            else
                              keyType = 0;
                            v271 = *(System_String_o **)(v234 + 64);
                            AssetData = AssetManager__GetAssetData(
                                          (AssetManager_o *)loader_5__3,
                                          _4__this->fields.assetBundleDic,
                                          v271,
                                          v268);
                            if ( AssetData )
                            {
                              v273 = AssetData;
                              loader_5__3 = AssetData__SetUpdateInfo(AssetData, v265, attriba, size, v270, keyType, 0);
                              if ( !v224 )
                                goto LABEL_285;
                              loader_5__3 = *(_QWORD *)(v224 + 40);
                              if ( !loader_5__3 )
                                goto LABEL_285;
                              sub_1FFEDA8(loader_5__3, v273, Method_System_Collections_Generic_List_AssetData__Add__);
                              loader_5__3 = System_String__IsNullOrEmpty(0, 0);
                              v271 = 0;
                              if ( (loader_5__3 & 1) == 0 )
                                goto LABEL_231;
                            }
                            else
                            {
                              loader_5__3 = System_String__IsNullOrEmpty(v271, 0);
                              if ( (loader_5__3 & 1) == 0 )
                              {
                                if ( !v224 )
                                  goto LABEL_285;
LABEL_231:
                                newVersion = v265;
                                v274 = v197;
                                v275 = *(_QWORD *)(v224 + 40);
                                v276 = (AssetData_o *)sub_2213CCC(AssetData_TypeInfo);
                                AssetData___ctor_47468228(v276, 0, v271, 0, newVersion, attriba, size, v270, keyType, 0);
                                if ( !v275 )
                                  goto LABEL_285;
                                loader_5__3 = sub_1FFEDA8(
                                                v275,
                                                v276,
                                                Method_System_Collections_Generic_List_AssetData__Add__);
                                v197 = v274;
                              }
                            }
                          }
                        }
                      }
                      max_length = v223->max_length;
                    }
                  }
                  if ( !v224 )
                    goto LABEL_285;
                  v277 = *(struct System_String_o **)(v224 + 16);
                  v278 = AssetManager_TypeInfo;
                  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
                  {
                    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v226);
                    v278 = AssetManager_TypeInfo;
                  }
                  v279 = v278->static_fields;
                  v279->assetBundleMasterVersion = v277;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)&v279->assetBundleMasterVersion,
                    (int32_t)v277,
                    v226,
                    v227,
                    v228,
                    v229,
                    v230,
                    v231);
                  v280 = *(struct System_String_o **)(v224 + 24);
                  v281 = AssetManager_TypeInfo->static_fields;
                  v281->assetBundleDateVersion = v280;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)&v281->assetBundleDateVersion,
                    (int32_t)v280,
                    v282,
                    v283,
                    v284,
                    v285,
                    v286,
                    v287);
                  v288 = *(struct System_String_o **)(v224 + 32);
                  v289 = AssetManager_TypeInfo->static_fields;
                  v289->assetBundleBuildVersion = v288;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)&v289->assetBundleBuildVersion,
                    (int32_t)v288,
                    v290,
                    v291,
                    v292,
                    v293,
                    v294,
                    v295);
                  loader_5__3 = (__int64)_4__this->fields.assetBundleDic;
                  if ( !loader_5__3 )
                    goto LABEL_285;
                  System_Collections_Generic_Dictionary_object__object___Clear(
                    (System_Collections_Generic_Dictionary_object__object__o *)loader_5__3,
                    (const MethodInfo_3FFDD98 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
                  loader_5__3 = *(_QWORD *)(v224 + 40);
                  if ( !loader_5__3 )
                    goto LABEL_285;
                  System_Collections_Generic_List_object___GetEnumerator(
                    (System_Collections_Generic_List_Enumerator_T__o *)&v367,
                    (System_Collections_Generic_List_object__o *)loader_5__3,
                    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
                  v366[0] = 0;
                  v366[1] = &v367;
                  while ( 1 )
                  {
                    v296 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                             &v367,
                             (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
                    if ( !v296 )
                      break;
                    current = v367.fields._current;
                    if ( !v367.fields._current )
                      sub_2213CDC(v296, v297);
                    assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.assetBundleDic;
                    if ( !assetBundleDic )
                      sub_2213CDC(0, v297);
                    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                            assetBundleDic,
                            (Il2CppObject *)v367.fields._current[1].monitor,
                            (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__) )
                    {
                      v301 = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.assetBundleDic;
                      if ( !v301 )
                        sub_2213CDC(0, v300);
                      System_Collections_Generic_Dictionary_object__object___Add(
                        v301,
                        (Il2CppObject *)current[1].monitor,
                        current,
                        (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
                    }
                  }
                  sub_1FFFBB0(v366);
                  AssetManager__ConfigWriteRequest(_4__this, 1, v344);
LABEL_291:
                  this->fields._configFileUrl_5__2 = 0;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)&this->fields._configFileUrl_5__2,
                    0,
                    v210,
                    v211,
                    v212,
                    v213,
                    v214,
                    v215);
                  this->fields._loader_5__3 = 0;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)&this->fields._loader_5__3,
                    0,
                    v345,
                    v346,
                    v347,
                    v348,
                    v349,
                    v350);
                  v351 = (UnityEngine_WaitForEndOfFrame_o *)sub_2213CCC(UnityEngine_WaitForEndOfFrame_TypeInfo);
                  UnityEngine_WaitForEndOfFrame___ctor(v351, 0);
                  this->fields.__2__current = (Il2CppObject *)v351;
                  p__2__current = &this->fields.__2__current;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)p__2__current,
                    (int32_t)v351,
                    v352,
                    v353,
                    v354,
                    v355,
                    v356,
                    v357);
                  v195 = 6;
                  goto LABEL_283;
                }
              }
LABEL_286:
              sub_2213CE4(loader_5__3);
            }
            v302 = (Il2CppObject *)StringLiteral_2495/*"AssetStorageList download crc error"*/;
            if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v209, v210);
            UnityEngine_Debug__LogError(v302, 0);
          }
        }
        v190 = (System_String_o *)StringLiteral_2496/*"AssetStorageList download data error"*/;
        if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v198, v199);
        UnityEngine_Debug__LogError((Il2CppObject *)v190, 0);
        goto LABEL_252;
      }
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_285;
      goto LABEL_38;
    }
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_285;
    v12 = AssetManager_TypeInfo;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
      v12 = AssetManager_TypeInfo;
    }
    if ( !System_IO_Directory__Exists(v12->static_fields->cachePathName, 0) )
    {
      v14 = AssetManager_TypeInfo;
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v13);
        v14 = AssetManager_TypeInfo;
      }
      System_IO_Directory__CreateDirectory(v14->static_fields->cachePathName, 0);
    }
    loader_5__3 = (__int64)_4__this->fields.assetBundleDic;
    if ( !loader_5__3 )
      goto LABEL_285;
    if ( !System_Collections_Generic_Dictionary_object__object___get_Count(
            (System_Collections_Generic_Dictionary_object__object__o *)loader_5__3,
            (const MethodInfo_3FFD8C8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) )
    {
      v15 = AssetManager_TypeInfo;
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
        v15 = AssetManager_TypeInfo;
      }
      if ( System_IO_File__Exists(v15->static_fields->cacheListFileName, 0) )
      {
        v16 = AssetManager_TypeInfo;
        if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
          v16 = AssetManager_TypeInfo;
        }
        AllText = System_IO_File__ReadAllText(v16->static_fields->cacheListFileName, 0);
        if ( !*(&CatAndMouseGame_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v17, v18);
        v20 = CatAndMouseGame__MouseGame8(AllText, 0);
        v30 = v20;
        if ( v20 )
        {
          v31 = sub_2213B20(char___TypeInfo, 1);
          if ( !v31 )
            sub_2213CDC(0, 0);
          if ( !*(_DWORD *)(v31 + 24) )
            sub_2213CE4(v31);
          *(_WORD *)(v31 + 32) = -257;
          v32 = System_String__Trim_75713456(v30, (System_Char_array *)v31, 0);
          v33 = sub_2213B20(char___TypeInfo, 2);
          if ( !v33 )
            sub_2213CDC(0, 0);
          v34 = *(_DWORD *)(v33 + 24);
          if ( !v34 )
            sub_2213CE4(v33);
          *(_WORD *)(v33 + 32) = 13;
          if ( v34 == 1 )
            sub_2213CE4(v33);
          *(_WORD *)(v33 + 34) = 10;
          if ( !v32 )
            sub_2213CDC(v33, v33);
          v40 = System_String__IndexOfAny(v32, (System_Char_array *)v33, 0);
          if ( v40 >= 2 )
          {
            v42 = System_String__Substring_75702848(v32, 0, v40, 0);
            v44 = v42;
            if ( !v42 )
              sub_2213CDC(0, v43);
            if ( System_String__StartsWith(v42, (System_String_o *)StringLiteral_26661/*"~"*/, 0) )
            {
              v45 = System_String__Substring(v44, 1, 0);
              v46 = System_String__Substring(v32, v40 + 1, 0);
              UTF8 = System_Text_Encoding__get_UTF8(0);
              if ( !UTF8 )
                sub_2213CDC(0, v48);
              v51 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
                                           UTF8,
                                           v46,
                                           UTF8->klass->vtable._18_GetBytes.method);
              if ( !*(&Crc32_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(Crc32_TypeInfo, v49, v50);
              v52 = Crc32__Compute(v51, 0);
              if ( System_UInt32__Parse(v45, 0) == v52 )
              {
                v53 = sub_2213B20(char___TypeInfo, 2);
                if ( !v53 )
                  sub_2213CDC(0, 0);
                v54 = *(_DWORD *)(v53 + 24);
                if ( !v54 )
                  sub_2213CE4(v53);
                *(_WORD *)(v53 + 32) = 13;
                if ( v54 == 1 )
                  sub_2213CE4(v53);
                *(_WORD *)(v53 + 34) = 10;
                if ( !v46 )
                  sub_2213CDC(v53, v53);
                loader_5__3 = (__int64)System_String__Split_75706100(v46, (System_Char_array *)v53, 1, 0);
                v55 = loader_5__3;
                if ( !loader_5__3 )
                  goto LABEL_126;
                v56 = *(_QWORD *)(loader_5__3 + 24);
                if ( v56 )
                {
                  if ( !(_DWORD)v56 )
                    goto LABEL_286;
                  loader_5__3 = *(_QWORD *)(loader_5__3 + 32);
                  if ( !loader_5__3 )
                    goto LABEL_285;
                  loader_5__3 = System_String__StartsWith(
                                  (System_String_o *)loader_5__3,
                                  (System_String_o *)StringLiteral_1851/*"@"*/,
                                  0);
                  if ( (loader_5__3 & 1) != 0 )
                  {
                    if ( !*(_DWORD *)(v55 + 24) )
                      goto LABEL_286;
                    loader_5__3 = *(_QWORD *)(v55 + 32);
                    if ( !loader_5__3 )
                      goto LABEL_285;
                    loader_5__3 = (__int64)System_String__Split((System_String_o *)loader_5__3, 0x2Cu, 0, 0);
                    if ( !loader_5__3 )
                      goto LABEL_285;
                    v57 = loader_5__3;
                    if ( !*(_DWORD *)(loader_5__3 + 24) )
                      goto LABEL_286;
                    loader_5__3 = *(_QWORD *)(loader_5__3 + 32);
                    if ( !loader_5__3 )
                      goto LABEL_285;
                    v58 = System_String__Substring((System_String_o *)loader_5__3, 1, 0);
                    v66 = AssetManager_TypeInfo;
                    v67 = v58;
                    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
                    {
                      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v59, v60);
                      v66 = AssetManager_TypeInfo;
                    }
                    v68 = v66->static_fields;
                    v68->assetBundleMasterVersion = v67;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)&v68->assetBundleMasterVersion,
                      (int32_t)v67,
                      v60,
                      v61,
                      v62,
                      v63,
                      v64,
                      v65);
                    v76 = AssetManager_TypeInfo;
                    if ( *(int *)(v57 + 24) <= 1 )
                      v77 = (struct System_String_o **)&StringLiteral_1/*""*/;
                    else
                      v77 = (struct System_String_o **)(v57 + 40);
                    v78 = *v77;
                    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
                    {
                      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v69, v70);
                      v76 = AssetManager_TypeInfo;
                    }
                    v79 = v76->static_fields;
                    v79->assetBundleDateVersion = v78;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)&v79->assetBundleDateVersion,
                      (int32_t)v78,
                      v70,
                      v71,
                      v72,
                      v73,
                      v74,
                      v75);
                    v87 = AssetManager_TypeInfo;
                    if ( *(int *)(v57 + 24) <= 2 )
                      v88 = (struct System_String_o **)&StringLiteral_1/*""*/;
                    else
                      v88 = (struct System_String_o **)(v57 + 48);
                    v89 = *v88;
                    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
                    {
                      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v80, v81);
                      v87 = AssetManager_TypeInfo;
                    }
                    v90 = v87->static_fields;
                    v90->assetBundleBuildVersion = v89;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)&v90->assetBundleBuildVersion,
                      (int32_t)v89,
                      v81,
                      v82,
                      v83,
                      v84,
                      v85,
                      v86);
                    klass = *(_DWORD *)(v55 + 24);
                    if ( klass >= 2 )
                    {
                      v92 = 5;
                      attrib = (System_String_o *)v55;
                      while ( (int)v92 - 4 < (unsigned int)klass )
                      {
                        loader_5__3 = *(_QWORD *)(v55 + 8 * v92);
                        if ( !loader_5__3 )
                          goto LABEL_285;
                        loader_5__3 = (__int64)System_String__Split((System_String_o *)loader_5__3, 0x2Cu, 0, 0);
                        if ( !loader_5__3 )
                          goto LABEL_285;
                        v93 = loader_5__3;
                        if ( *(int *)(loader_5__3 + 24) < 5 )
                          goto LABEL_126;
                        loader_5__3 = *(_QWORD *)(loader_5__3 + 32);
                        if ( !loader_5__3 )
                          goto LABEL_285;
                        v94 = System_String__Trim((System_String_o *)loader_5__3, 0);
                        loader_5__3 = System_Int32__Parse(v94, 0);
                        if ( *(_DWORD *)(v93 + 24) <= 2u )
                          goto LABEL_286;
                        v95 = loader_5__3;
                        loader_5__3 = *(_QWORD *)(v93 + 48);
                        if ( !loader_5__3 )
                          goto LABEL_285;
                        v96 = *(System_String_o **)(v93 + 40);
                        v97 = System_String__Trim((System_String_o *)loader_5__3, 0);
                        loader_5__3 = System_Int32__Parse(v97, 0);
                        if ( (*(_DWORD *)(v93 + 24) & 0xFFFFFFFC) == 0 )
                          goto LABEL_286;
                        v98 = loader_5__3;
                        loader_5__3 = *(_QWORD *)(v93 + 56);
                        if ( !loader_5__3 )
                          goto LABEL_285;
                        v99 = System_String__Trim((System_String_o *)loader_5__3, 0);
                        loader_5__3 = System_UInt32__Parse(v99, 0);
                        v100 = *(_DWORD *)(v93 + 24);
                        if ( (unsigned int)v100 <= 4 )
                          goto LABEL_286;
                        v101 = loader_5__3;
                        v102 = v100 >= 6 ? *(System_String_o **)(v93 + 72) : 0LL;
                        v103 = *(System_String_o **)(v93 + 64);
                        v104 = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.assetBundleDic;
                        v105 = (AssetData_o *)sub_2213CCC(AssetData_TypeInfo);
                        AssetData___ctor_47468088(v105, 0, v103, v95, v96, v98, v101, v102, 0);
                        if ( !v104 )
                          goto LABEL_285;
                        System_Collections_Generic_Dictionary_object__object___set_Item(
                          v104,
                          (Il2CppObject *)v103,
                          (Il2CppObject *)v105,
                          (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__AssetData__set_Item__);
                        v55 = (__int64)attrib;
                        ++v92;
                        klass = (int)attrib[1].klass;
                        if ( (int)v92 - 4 >= klass )
                          goto LABEL_126;
                      }
                      goto LABEL_286;
                    }
                    goto LABEL_126;
                  }
                }
                v41 = &StringLiteral_2489/*"AssetStorage boot load error : アセットバンドルリスト作成失敗"*/;
              }
              else
              {
                v41 = &StringLiteral_2487/*"AssetStorage boot load crc error : チェックサム値が不一致"*/;
              }
            }
            else
            {
              v41 = &StringLiteral_2491/*"AssetStorage boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
            }
          }
          else
          {
            v41 = &StringLiteral_2490/*"AssetStorage boot load error : ファイル先頭の１行目の内容が空"*/;
          }
          v106 = (System_String_o *)*v41;
          if ( *v41 )
          {
            v107 = AssetManager_TypeInfo;
            if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
              v107 = AssetManager_TypeInfo;
            }
            v108 = v107->static_fields;
            v109 = (int)StringLiteral_1/*""*/;
            v108->assetBundleMasterVersion = (struct System_String_o *)StringLiteral_1/*""*/;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v108->assetBundleMasterVersion,
              v109,
              v2,
              v35,
              v36,
              v37,
              v38,
              v39);
            v110 = (int)StringLiteral_1/*""*/;
            v111 = AssetManager_TypeInfo->static_fields;
            v111->assetBundleDateVersion = (struct System_String_o *)StringLiteral_1/*""*/;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v111->assetBundleDateVersion,
              v110,
              v112,
              v113,
              v114,
              v115,
              v116,
              v117);
            v118 = (int)StringLiteral_1/*""*/;
            v119 = AssetManager_TypeInfo->static_fields;
            v119->assetBundleBuildVersion = (struct System_String_o *)StringLiteral_1/*""*/;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v119->assetBundleBuildVersion,
              v118,
              v120,
              v121,
              v122,
              v123,
              v124,
              v125);
            loader_5__3 = (__int64)_4__this->fields.assetBundleDic;
            if ( !loader_5__3 )
              goto LABEL_285;
            System_Collections_Generic_Dictionary_object__object___Clear(
              (System_Collections_Generic_Dictionary_object__object__o *)loader_5__3,
              (const MethodInfo_3FFDD98 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
            v126 = ManagerConfig_TypeInfo;
            if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method, v2);
              v126 = ManagerConfig_TypeInfo;
            }
            v127 = v126->static_fields;
            if ( v127->UseDebugCommand )
            {
              if ( !*(&v126->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(v126, method, v2);
                v127 = ManagerConfig_TypeInfo->static_fields;
              }
              if ( System_String__op_Inequality(v127->ServerDefaultType, (System_String_o *)StringLiteral_11989/*"SCRIPT"*/, 0) )
              {
                _4__this->fields.isErrorDialog = 1;
                v128 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v129 = (ErrorDialog_ClickDelegate_o *)sub_2213CCC(ErrorDialog_ClickDelegate_TypeInfo);
                ErrorDialog_ClickDelegate___ctor(
                  v129,
                  (Il2CppObject *)_4__this,
                  Method_AssetManager_OnClickWaitDebugDialog__,
                  0);
                if ( !v128 )
                  goto LABEL_285;
                *(_QWORD *)&methoda.fields.hasValue = 0;
                methoda.fields.value.fields.y = 0.0;
                CommonUI__OpenWarningDialog(
                  (CommonUI_o *)v128,
                  (System_String_o *)StringLiteral_16551/*"[FFFF80]Download error for debug"*/,
                  v106,
                  v129,
                  1,
                  0,
                  -1.0,
                  1,
                  methoda,
                  0);
LABEL_38:
                if ( _4__this->fields.isErrorDialog )
                {
                  v22 = (UnityEngine_WaitForEndOfFrame_o *)sub_2213CCC(UnityEngine_WaitForEndOfFrame_TypeInfo);
                  UnityEngine_WaitForEndOfFrame___ctor(v22, 0);
                  this->fields.__2__current = (Il2CppObject *)v22;
                  v23 = &this->fields.__2__current;
                  sub_2213A04((MissionNaviTransitionBoardItem_o *)v23, (int32_t)v22, v24, v25, v26, v27, v28, v29);
                  LOBYTE(loader_5__3) = 1;
                  *((_DWORD *)v23 - 2) = 1;
                  return loader_5__3;
                }
              }
            }
          }
        }
      }
    }
LABEL_126:
    v130 = AssetManager_TypeInfo;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
    ConfigFileAddress = AssetManager__get_ConfigFileAddress((const MethodInfo *)v130);
    this->fields._configFileUrl_5__2 = ConfigFileAddress;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._configFileUrl_5__2,
      (int32_t)ConfigFileAddress,
      v132,
      v133,
      v134,
      v135,
      v136,
      v137);
    this->fields._loader_5__3 = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields._loader_5__3, 0, v138, v139, v140, v141, v142, v143);
LABEL_129:
    v144 = this->fields._configFileUrl_5__2;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v21);
    v145 = AssetManager__getUrlString(v144, method);
    v146 = UnityEngine_Networking_UnityWebRequest__Get(v145, 0);
    this->fields._loader_5__3 = v146;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._loader_5__3,
      (int32_t)v146,
      v147,
      v148,
      v149,
      v150,
      v151,
      v152);
    loader_5__3 = (__int64)this->fields._loader_5__3;
    if ( !loader_5__3 )
      goto LABEL_285;
    UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)loader_5__3, 0);
    v155 = UnityEngine_Time__get_unscaledTime(0);
    v156 = ManagerConfig_TypeInfo;
    if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v153, v154);
      v156 = ManagerConfig_TypeInfo;
    }
    TIMEOUT = v156->static_fields->TIMEOUT;
    this->fields._loadProgress_5__5 = 0.0;
    v158 = UnityEngine_WaitForEndOfFrame_TypeInfo;
    this->fields._requestTime_5__4 = v155 + TIMEOUT;
    v159 = (UnityEngine_WaitForEndOfFrame_o *)sub_2213CCC(v158);
    UnityEngine_WaitForEndOfFrame___ctor(v159, 0);
    this->fields._wait_5__6 = v159;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._wait_5__6,
      (int32_t)v159,
      v160,
      v161,
      v162,
      v163,
      v164,
      v165);
    goto LABEL_135;
  }
  if ( _1__state <= 4 )
  {
    if ( _1__state != 3 )
    {
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_285;
LABEL_280:
      if ( _4__this->fields.isErrorDialog )
      {
        v330 = (UnityEngine_WaitForEndOfFrame_o *)sub_2213CCC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v330, 0);
        this->fields.__2__current = (Il2CppObject *)v330;
        p__2__current = &this->fields.__2__current;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)p__2__current,
          (int32_t)v330,
          v331,
          v332,
          v333,
          v334,
          v335,
          v336);
        v195 = 4;
        goto LABEL_283;
      }
LABEL_282:
      v337 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v337, 1.0, 0);
      this->fields.__2__current = (Il2CppObject *)v337;
      p__2__current = &this->fields.__2__current;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v337, v338, v339, v340, v341, v342, v343);
      v195 = 5;
      goto LABEL_283;
    }
    this->fields.__1__state = -1;
    if ( !_4__this )
LABEL_285:
      sub_2213CDC(loader_5__3, method);
    goto LABEL_263;
  }
  if ( _1__state == 5 )
  {
    this->fields._wait_5__6 = 0;
    this->fields.__1__state = -1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields._wait_5__6, 0, v2, v3, v4, v5, v6, v7);
    if ( !_4__this )
      goto LABEL_285;
    goto LABEL_129;
  }
  if ( _1__state == 6 )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_285;
    _4__this->fields.initCRW = 0;
    _4__this->fields.isCancelDownload = 0;
    _4__this->fields.isInitEnd = 1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&_4__this->fields.initCRW, 0, v2, v3, v4, v5, v6, v7);
    LOBYTE(loader_5__3) = 0;
  }
  return loader_5__3;
}


Il2CppObject *AssetManager__InitCR_d__136__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AssetManager__InitCR_d__136_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn AssetManager__InitCR_d__136__System_Collections_IEnumerator_Reset(
        AssetManager__InitCR_d__136_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_AssetManager__InitCR_d__136_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *AssetManager__InitCR_d__136__System_Collections_IEnumerator_get_Current(
        AssetManager__InitCR_d__136_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void AssetManager__InitCR_d__136__System_IDisposable_Dispose(
        AssetManager__InitCR_d__136_o *this,
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_o *v8; // x19
  int32_t _1__state; // w8
  struct AssetManager_o *_4__this; // x21
  UnityEngine_WaitForEndOfFrame_o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *wait_5__2; // x1
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  bool result; // w0

  v8 = this;
  if ( (byte_596F7BB & 1) == 0 )
  {
    this = (AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_o *)sub_2213A60(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_596F7BB = 1;
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
    v11 = (UnityEngine_WaitForEndOfFrame_o *)sub_2213CCC(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v11, 0);
    v8->fields._wait_5__2 = v11;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields._wait_5__2, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  }
  if ( !_4__this )
    sub_2213CDC(this, method);
  if ( _4__this->fields.inProgressUnloadUnusedAssets || _4__this->fields.requestUnloadUnusedAssets )
  {
    wait_5__2 = (Il2CppObject *)v8->fields._wait_5__2;
    v8->fields.__2__current = wait_5__2;
    p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
    sub_2213A04(p__2__current, (int32_t)wait_5__2, v2, v3, v4, v5, v6, v7);
    result = 1;
    p__2__current[-1].fields._BoardType_k__BackingField = 1;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596F7B3 & 1) == 0 )
  {
    sub_2213A60(&AssetManager___c_TypeInfo);
    byte_596F7B3 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(AssetManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AssetManager___c_TypeInfo->static_fields->__9 = (struct AssetManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)AssetManager___c_TypeInfo->static_fields,
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


void AssetManager___c___CancelAndReleaseDownloadAssetStorage_b__131_0(
        AssetManager___c_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  if ( !assetData )
    sub_2213CDC(this, 0);
  AssetData__RemoveEntryAll(assetData, 0);
}


void AssetManager___c__DisplayClass120_0___ctor(AssetManager___c__DisplayClass120_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void AssetManager___c__DisplayClass120_0___DownloadAssetStorageAttributeWithCheckDialog_b__1(
        AssetManager___c__DisplayClass120_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_596F7B4 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_2213A60(&StringLiteral_12832/*"START_BOOT_ASSET_DOWNLOAD"*/);
    byte_596F7B4 = 1;
  }
  if ( isDecide )
  {
    this->fields.isDataUpdate = 1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( !Instance )
      sub_2213CDC(0, v6);
    CrashReporter__SetNowState((CrashReporter_o *)Instance, (System_String_o *)StringLiteral_12832/*"START_BOOT_ASSET_DOWNLOAD"*/, 0);
  }
  else
  {
    if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, isDecide, method);
    UnityEngine_Application__Quit_83177108(0);
  }
}


void AssetManager___c__DisplayClass153_0___ctor(AssetManager___c__DisplayClass153_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AssetManager___c__DisplayClass153_0___LoadStart_b__0(
        AssetManager___c__DisplayClass153_0_o *this,
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

  if ( (byte_596F7B5 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetManager_OnEndLoadAssetStorage__);
    sub_2213A60(&AssetLoader_LoadEndHandler_TypeInfo);
    byte_596F7B5 = 1;
  }
  loader = this->fields.loader;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v5 = (AssetLoader_LoadEndHandler_o *)sub_2213CCC(AssetLoader_LoadEndHandler_TypeInfo);
  AssetLoader_LoadEndHandler___ctor(v5, _4__this, Method_AssetManager_OnEndLoadAssetStorage__, v6);
  waiter = this->fields.waiter;
  if ( !waiter || !loader )
    sub_2213CDC(v7, v8);
  AssetLoader__StartLoad(loader, v5, waiter->fields.resourceNames, v9);
}


void AssetManager___c__DisplayClass174_0___ctor(AssetManager___c__DisplayClass174_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AssetManager___c__DisplayClass174_0___LoadAssetStorage_b__0(
        AssetManager___c__DisplayClass174_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  AssetManager___c__DisplayClass174_0_o *v4; // x19
  const MethodInfo *v5; // x2
  struct System_Collections_Generic_List_string__o *remainNameList; // x8
  int32_t loadParallelMax; // w8

  v4 = this;
  if ( (byte_596F7B6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_string__Remove__);
    this = (AssetManager___c__DisplayClass174_0_o *)sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_596F7B6 = 1;
  }
  ++v4->fields.calledCallbackFuncCounter;
  if ( !data )
    goto LABEL_12;
  this = (AssetManager___c__DisplayClass174_0_o *)v4->fields.remainNameList;
  if ( !this )
    goto LABEL_12;
  this = (AssetManager___c__DisplayClass174_0_o *)System_Collections_Generic_List_object___Remove(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    (Il2CppObject *)data->fields.name,
                                                    (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_string__Remove__);
  if ( v4->fields.calledCallbackFunc )
    return;
  remainNameList = v4->fields.remainNameList;
  if ( !remainNameList )
LABEL_12:
    sub_2213CDC(this, data);
  if ( remainNameList->fields._size <= 0 )
  {
    this = (AssetManager___c__DisplayClass174_0_o *)v4->fields.__4__this;
    if ( this )
    {
      AssetManager__AddLoadWaitStatus((AssetManager_o *)this, v4->fields.callbackFunc, v5);
      this = (AssetManager___c__DisplayClass174_0_o *)v4->fields.__4__this;
      if ( this )
      {
        loadParallelMax = v4->fields.loadParallelMax;
        v4->fields.calledCallbackFunc = 1;
        HIDWORD(this[1].fields.__9__0) = loadParallelMax;
        AssetManager__LoadStart((AssetManager_o *)this, (const MethodInfo *)data);
        return;
      }
    }
    goto LABEL_12;
  }
}


void AssetManager___c__DisplayClass191_0___ctor(AssetManager___c__DisplayClass191_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool AssetManager___c__DisplayClass191_0___AssetObjectListSetupAndCall_b__0(
        AssetManager___c__DisplayClass191_0_o *this,
        const MethodInfo *method)
{
  struct AssetData_o *asset; // x8

  asset = this->fields.asset;
  if ( !asset )
    sub_2213CDC(this, method);
  return asset->fields.objectList != 0;
}


void AssetManager___c__DisplayClass192_0___ctor(AssetManager___c__DisplayClass192_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool AssetManager___c__DisplayClass192_0___AssetObjectListSetupAndCall_b__0(
        AssetManager___c__DisplayClass192_0_o *this,
        const MethodInfo *method)
{
  struct AssetData_array *assetList; // x9
  int max_length; // w8
  int v4; // w10
  AssetData_o *v5; // x12

  assetList = this->fields.assetList;
  if ( !assetList )
    goto LABEL_11;
  max_length = assetList->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( max_length == v4 )
        sub_2213CE4(this);
      v5 = assetList->m_Items[v4];
      if ( !v5 )
        break;
      if ( v5->fields.objectList )
      {
        if ( (max_length & ~(max_length >> 31)) != ++v4 )
          continue;
      }
      return v4 >= max_length;
    }
LABEL_11:
    sub_2213CDC(this, method);
  }
  v4 = 0;
  return v4 >= max_length;
}


void AssetManager__coUnloadUnusedAssets_d__143___ctor(
        AssetManager__coUnloadUnusedAssets_d__143_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool AssetManager__coUnloadUnusedAssets_d__143__MoveNext(
        AssetManager__coUnloadUnusedAssets_d__143_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  AssetManager__coUnloadUnusedAssets_d__143_o *v3; // x19
  int32_t _1__state; // w8
  struct AssetManager_o *_4__this; // x20
  UnityEngine_WaitForEndOfFrame_o *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  AssetManager_c *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  Il2CppObject *wait_5__2; // x1
  MissionNaviTransitionBoardItem_o *v21; // x19
  bool v22; // w21
  UnityEngine_AsyncOperation_o *v23; // x0
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct AssetManager_ResourceUnloadEventHandler_o *v31; // x8
  MissionNaviTransitionBoardItem_o *p_unloadCallbacks; // x20
  struct AssetManager_ResourceUnloadEventHandler_o *unloadCallbacks; // t1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7

  v3 = this;
  if ( (byte_596F7BC & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    this = (AssetManager__coUnloadUnusedAssets_d__143_o *)sub_2213A60(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_596F7BC = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 2 )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_19;
    unloadCallbacks = _4__this->fields.unloadCallbacks;
    p_unloadCallbacks = (MissionNaviTransitionBoardItem_o *)&_4__this->fields.unloadCallbacks;
    v31 = unloadCallbacks;
    *(_WORD *)((char *)&p_unloadCallbacks[-1].fields._ClosedMessage_k__BackingField + 3) = 0;
    if ( unloadCallbacks )
    {
      ((void (__fastcall *)(intptr_t, intptr_t))v31->fields.invoke_impl)(v31->fields.method_code, v31->fields.method);
      p_unloadCallbacks->klass = 0;
      sub_2213A04(p_unloadCallbacks, 0, v34, v35, v36, v37, v38, v39);
    }
    return 0;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v3->fields.__1__state = -1;
      v6 = (UnityEngine_WaitForEndOfFrame_o *)sub_2213CCC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v6, 0);
      v3->fields._wait_5__2 = v6;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields._wait_5__2, (int32_t)v6, v7, v8, v9, v10, v11, v12);
      goto LABEL_8;
    }
    return 0;
  }
  v3->fields.__1__state = -1;
LABEL_8:
  v13 = AssetManager_TypeInfo;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
  this = (AssetManager__coUnloadUnusedAssets_d__143_o *)AssetManager__LoadIsBusy((const MethodInfo *)v13);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( _4__this )
    {
      v22 = 1;
      _4__this->fields.inProgressUnloadUnusedAssets = 1;
      v23 = UnityEngine_Resources__UnloadUnusedAssets(0);
      v3->fields.__2__current = (Il2CppObject *)v23;
      p__2__current = (MissionNaviTransitionBoardItem_o *)&v3->fields.__2__current;
      sub_2213A04(p__2__current, (int32_t)v23, v25, v26, v27, v28, v29, v30);
      p__2__current[-1].fields._BoardType_k__BackingField = 2;
      return v22;
    }
LABEL_19:
    sub_2213CDC(this, method);
  }
  wait_5__2 = (Il2CppObject *)v3->fields._wait_5__2;
  v3->fields.__2__current = wait_5__2;
  v21 = (MissionNaviTransitionBoardItem_o *)&v3->fields.__2__current;
  sub_2213A04(v21, (int32_t)wait_5__2, v14, v15, v16, v17, v18, v19);
  v22 = 1;
  v21[-1].fields._BoardType_k__BackingField = 1;
  return v22;
}


Il2CppObject *AssetManager__coUnloadUnusedAssets_d__143__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AssetManager__coUnloadUnusedAssets_d__143_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn AssetManager__coUnloadUnusedAssets_d__143__System_Collections_IEnumerator_Reset(
        AssetManager__coUnloadUnusedAssets_d__143_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_AssetManager__coUnloadUnusedAssets_d__143_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *AssetManager__coUnloadUnusedAssets_d__143__System_Collections_IEnumerator_get_Current(
        AssetManager__coUnloadUnusedAssets_d__143_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void AssetManager__coUnloadUnusedAssets_d__143__System_IDisposable_Dispose(
        AssetManager__coUnloadUnusedAssets_d__143_o *this,
        const MethodInfo *method)
{
  ;
}