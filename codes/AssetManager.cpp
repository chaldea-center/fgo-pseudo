void __fastcall AssetManager___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  int64_t v7; // x1
  struct AssetManager_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x1
  struct AssetManager_StaticFields *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x1
  struct AssetManager_StaticFields *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x1
  struct AssetManager_StaticFields *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x1
  struct AssetManager_StaticFields *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  void *v47; // x1
  struct AssetManager_StaticFields *v48; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  void *v55; // x1
  struct AssetManager_StaticFields *v56; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  void *v63; // x1
  struct AssetManager_StaticFields *v64; // x0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7

  if ( (byte_4BDB604 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&StringLiteral_2529/*"Asset"*/);
    sub_1C21E38(&StringLiteral_2542/*"AssetStorageBack.txt"*/);
    sub_1C21E38(&StringLiteral_22614/*"offline"*/);
    sub_1C21E38(&StringLiteral_2541/*"AssetStorage.txt"*/);
    sub_1C21E38(&StringLiteral_2543/*"AssetStorageCreate.txt"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_22684/*"online"*/);
    byte_4BDB604 = 1;
  }
  AssetManager_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_2529/*"Asset"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)AssetManager_TypeInfo->static_fields,
    StringLiteral_2529/*"Asset"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_22614/*"offline"*/;
  static_fields = AssetManager_TypeInfo->static_fields;
  static_fields->SAVE_DATA_OFFLINE = (struct System_String_o *)StringLiteral_22614/*"offline"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->SAVE_DATA_OFFLINE, v7, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_22684/*"online"*/;
  v16 = AssetManager_TypeInfo->static_fields;
  v16->SAVE_DATA_ONLINE = (struct System_String_o *)StringLiteral_22684/*"online"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v16->SAVE_DATA_ONLINE, v15, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_2541/*"AssetStorage.txt"*/;
  v24 = AssetManager_TypeInfo->static_fields;
  v24->configFileName = (struct System_String_o *)StringLiteral_2541/*"AssetStorage.txt"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v24->configFileName, v23, v25, v26, v27, v28, v29, v30);
  v31 = StringLiteral_2543/*"AssetStorageCreate.txt"*/;
  v32 = AssetManager_TypeInfo->static_fields;
  v32->createConfigFileName = (struct System_String_o *)StringLiteral_2543/*"AssetStorageCreate.txt"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v32->createConfigFileName, v31, v33, v34, v35, v36, v37, v38);
  v39 = StringLiteral_2542/*"AssetStorageBack.txt"*/;
  v40 = AssetManager_TypeInfo->static_fields;
  v40->backConfigFileName = (struct System_String_o *)StringLiteral_2542/*"AssetStorageBack.txt"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v40->backConfigFileName, v39, v41, v42, v43, v44, v45, v46);
  v47 = StringLiteral_1/*""*/;
  v48 = AssetManager_TypeInfo->static_fields;
  v48->assetBundleMasterVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v48->assetBundleMasterVersion, (int64_t)v47, v49, v50, v51, v52, v53, v54);
  v55 = StringLiteral_1/*""*/;
  v56 = AssetManager_TypeInfo->static_fields;
  v56->assetBundleDateVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v56->assetBundleDateVersion, (int64_t)v55, v57, v58, v59, v60, v61, v62);
  v63 = StringLiteral_1/*""*/;
  v64 = AssetManager_TypeInfo->static_fields;
  v64->assetBundleBuildVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v64->assetBundleBuildVersion, (int64_t)v63, v65, v66, v67, v68, v69, v70);
}


void __fastcall AssetManager___ctor(AssetManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  System_Collections_Generic_Dictionary_object__object__o *v10; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Collections_Generic_Dictionary_object__object__o *v17; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  void *v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_List_object__o *v31; // x20
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Collections_Generic_Queue_T__o *v38; // x20
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7

  if ( (byte_4BDB603 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_AssetLoader___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_AssetLoader__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
    sub_1C21E38(&System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager___ctor__);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDB603 = 1;
  }
  *(_WORD *)&this->fields._DispLog = 257;
  this->fields.isInitEnd = 1;
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3315CD0 *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.assetBundleDic = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.assetBundleDic, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v10,
    (const MethodInfo_3315CD0 *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.assetBundleReleaseDic = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)v10;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.assetBundleReleaseDic,
    (int64_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_string__AssetData__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v17,
    (const MethodInfo_3315CD0 *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.assetResourceDic = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)v17;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.assetResourceDic, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_1/*""*/;
  this->fields.requestConfigWriteData = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.requestConfigWriteData,
    (int64_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.requestWriteCounter = -1.0;
  v31 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_AssetLoader__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_AssetLoader___ctor__);
  this->fields.processingAssetLoaderList = (struct System_Collections_Generic_List_AssetLoader__o *)v31;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.processingAssetLoaderList,
    (int64_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this->fields.loadParallelMax = 1;
  v38 = (System_Collections_Generic_Queue_T__o *)sub_1C22084(System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v38,
    (const MethodInfo_37C0E20 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
  this->fields.downLoadWaitList = (struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)v38;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.downLoadWaitList, (int64_t)v38, v39, v40, v41, v42, v43, v44);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_388D470 *)Method_SingletonMonoBehaviour_AssetManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AssetManager__AddCallbackLoadStatus(
        AssetManager_o *this,
        int32_t type,
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *processingAssetLoaderList; // x0
  int32_t v10; // w23
  const MethodInfo *v11; // x3
  AssetLoader_o *v12; // x24
  AssetData_o *syncRoot; // x0
  const MethodInfo *v14; // x2
  bool v15; // w22
  Il2CppObject *Current; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x3
  AssetManager_LoadWaitStatus_o *v19; // x23
  AssetData_o *klass; // x0
  const MethodInfo *v21; // x2
  int v22; // w19
  System_Collections_Generic_Queue_Enumerator_T__o v24; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4BDB5ED & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
    byte_4BDB5ED = 1;
  }
  memset(&v24, 0, sizeof(v24));
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
    goto LABEL_10;
  v10 = 0;
  while ( v10 < processingAssetLoaderList->fields._size )
  {
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               processingAssetLoaderList,
                                                                               v10,
                                                                               (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    if ( !processingAssetLoaderList )
      goto LABEL_10;
    v12 = (AssetLoader_o *)processingAssetLoaderList;
    syncRoot = (AssetData_o *)processingAssetLoaderList->fields._syncRoot;
    if ( syncRoot && AssetData__IsSame_39008676(syncRoot, type, name, v11) )
    {
      if ( callbackFunc )
        AssetLoader__add_endCallback2(v12, callbackFunc, v14);
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
    sub_1C22094(processingAssetLoaderList, *(_QWORD *)&type);
  System_Collections_Generic_Queue_object___GetEnumerator(
    &v24,
    (System_Collections_Generic_Queue_T__o *)processingAssetLoaderList,
    (const MethodInfo_37C14A0 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  while ( 1 )
  {
    v15 = System_Collections_Generic_Queue_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_33E16A8 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    if ( !v15 )
      break;
    Current = System_Collections_Generic_Queue_Enumerator_object___get_Current(
                &v24,
                (const MethodInfo_33E1798 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    v19 = (AssetManager_LoadWaitStatus_o *)Current;
    if ( !Current )
      sub_1C22094(0LL, v17);
    klass = (AssetData_o *)Current[1].klass;
    if ( klass && AssetData__IsSame_39008676(klass, type, name, v18) )
    {
      AssetManager_LoadWaitStatus__AddCallback(v19, callbackFunc, v21);
      v22 = 7;
      goto LABEL_19;
    }
  }
  v22 = 8;
LABEL_19:
  System_Collections_Generic_Queue_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_33E1698 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  return v15 && v22 == 7;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AssetManager__AddEntryLoadStatus(
        AssetManager_o *this,
        int32_t type,
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *processingAssetLoaderList; // x0
  int32_t v10; // w23
  const MethodInfo *v11; // x3
  AssetLoader_o *v12; // x24
  AssetData_o *syncRoot; // x0
  const MethodInfo *v14; // x2
  bool v15; // w22
  Il2CppObject *Current; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x3
  AssetManager_LoadWaitStatus_o *v19; // x23
  AssetData_o *klass; // x0
  _BOOL8 IsSame_39008676; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  struct AssetData_o *v24; // x8
  int32_t v25; // w9
  int v26; // w19
  struct AssetData_o *data; // x8
  int32_t entryCount; // w9
  System_Collections_Generic_Queue_Enumerator_T__o v30; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Queue_Enumerator_T__o v31; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BDB5EC & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
    byte_4BDB5EC = 1;
  }
  memset(&v31, 0, sizeof(v31));
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
    goto LABEL_10;
  v10 = 0;
  while ( v10 < processingAssetLoaderList->fields._size )
  {
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               processingAssetLoaderList,
                                                                               v10,
                                                                               (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    if ( !processingAssetLoaderList )
      goto LABEL_10;
    v12 = (AssetLoader_o *)processingAssetLoaderList;
    syncRoot = (AssetData_o *)processingAssetLoaderList->fields._syncRoot;
    if ( syncRoot )
    {
      processingAssetLoaderList = (System_Collections_Generic_List_object__o *)AssetData__IsSame_39008676(
                                                                                 syncRoot,
                                                                                 type,
                                                                                 name,
                                                                                 v11);
      if ( ((unsigned __int8)processingAssetLoaderList & 1) != 0 )
      {
        data = v12->fields.data;
        if ( data )
        {
          entryCount = data->fields.entryCount;
          if ( (entryCount & 0x80000000) == 0 )
            data->fields.entryCount = entryCount + 1;
          if ( callbackFunc )
            AssetLoader__add_endCallback2(v12, callbackFunc, v14);
          return 1;
        }
LABEL_10:
        sub_1C22094(processingAssetLoaderList, *(_QWORD *)&type);
      }
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
    &v30,
    (System_Collections_Generic_Queue_T__o *)processingAssetLoaderList,
    (const MethodInfo_37C14A0 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  v31 = v30;
  while ( 1 )
  {
    v15 = System_Collections_Generic_Queue_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_33E16A8 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    if ( !v15 )
    {
      v26 = 8;
      goto LABEL_22;
    }
    Current = System_Collections_Generic_Queue_Enumerator_object___get_Current(
                &v31,
                (const MethodInfo_33E1798 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    v19 = (AssetManager_LoadWaitStatus_o *)Current;
    if ( !Current )
      sub_1C22094(0LL, v17);
    klass = (AssetData_o *)Current[1].klass;
    if ( klass )
    {
      IsSame_39008676 = AssetData__IsSame_39008676(klass, type, name, v18);
      if ( IsSame_39008676 )
        break;
    }
  }
  v24 = v19->fields.data;
  if ( !v24 )
    sub_1C22094(IsSame_39008676, v22);
  v25 = v24->fields.entryCount;
  if ( (v25 & 0x80000000) == 0 )
    v24->fields.entryCount = v25 + 1;
  AssetManager_LoadWaitStatus__AddCallback(v19, callbackFunc, v23);
  v26 = 7;
LABEL_22:
  System_Collections_Generic_Queue_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_33E1698 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  return v15 && v26 == 7;
}


void __fastcall AssetManager__AddLoadWaitStatus(
        AssetManager_o *this,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  __int64 v12; // x1
  System_Collections_Generic_Queue_T__o *downLoadWaitList; // x0

  if ( (byte_4BDB5EF & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_LoadWaitStatus_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
    byte_4BDB5EF = 1;
  }
  v5 = sub_1C22084(AssetManager_LoadWaitStatus_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_QWORD *)(v5 + 24) = callbackFunc;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)callbackFunc, v6, v7, v8, v9, v10, v11);
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
    sub_1C22094(0LL, v12);
  System_Collections_Generic_Queue_object___Enqueue(
    downLoadWaitList,
    (Il2CppObject *)v5,
    (const MethodInfo_37C13E8 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
}


void __fastcall AssetManager__AddLoadWaitStatus_39047232(
        AssetManager_o *this,
        AssetData_o *info,
        const MethodInfo *method)
{
  AssetManager_o *v4; // x20
  __int64 v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  v4 = this;
  if ( (byte_4BDB5F0 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_LoadWaitStatus_TypeInfo);
    this = (AssetManager_o *)sub_1C21E38(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
    byte_4BDB5F0 = 1;
  }
  if ( !info
    || (v4->fields.downloadSize += info->fields.size,
        v5 = sub_1C22084(AssetManager_LoadWaitStatus_TypeInfo),
        System_Object___ctor((Il2CppObject *)v5, 0LL),
        *(_QWORD *)(v5 + 16) = info,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)info, v6, v7, v8, v9, v10, v11),
        (this = (AssetManager_o *)v4->fields.downLoadWaitList) == 0LL) )
  {
    sub_1C22094(this, info);
  }
  System_Collections_Generic_Queue_object___Enqueue(
    (System_Collections_Generic_Queue_T__o *)this,
    (Il2CppObject *)v5,
    (const MethodInfo_37C13E8 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
}


void __fastcall AssetManager__AddLoadWaitStatus_39057596(
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
  if ( (byte_4BDB5F1 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_LoadWaitStatus_TypeInfo);
    this = (AssetManager_o *)sub_1C21E38(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
    byte_4BDB5F1 = 1;
  }
  if ( !info
    || (v8->fields.downloadSize += info->fields.size,
        v9 = (AssetManager_LoadWaitStatus_o *)sub_1C22084(AssetManager_LoadWaitStatus_TypeInfo),
        AssetManager_LoadWaitStatus___ctor_39057768(v9, info, callbackFunc, resourceNames, v10),
        (this = (AssetManager_o *)v8->fields.downLoadWaitList) == 0LL) )
  {
    sub_1C22094(this, info);
  }
  System_Collections_Generic_Queue_object___Enqueue(
    (System_Collections_Generic_Queue_T__o *)this,
    (Il2CppObject *)v9,
    (const MethodInfo_37C13E8 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
}


System_Collections_IEnumerator_o *__fastcall AssetManager__AssetObjectListSetupAndCall(
        AssetData_o *asset,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BDB600 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager__AssetObjectListSetupAndCall_d__184_TypeInfo);
    byte_4BDB600 = 1;
  }
  v5 = sub_1C22084(AssetManager__AssetObjectListSetupAndCall_d__184_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = asset;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)asset, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = action;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)action, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall AssetManager__AssetObjectListSetupAndCall_39059280(
        AssetData_array *assetList,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BDB601 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager__AssetObjectListSetupAndCall_d__185_TypeInfo);
    byte_4BDB601 = 1;
  }
  v5 = sub_1C22084(AssetManager__AssetObjectListSetupAndCall_d__185_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = assetList;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)assetList, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = action;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)action, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall AssetManager__CancelDownloadAssetStorage(AssetManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *v3; // x20
  System_Collections_Generic_Queue_T__o *v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  System_Collections_Generic_Queue_T__o *downLoadWaitList; // x0
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o **p_downLoadWaitList; // x21
  struct System_Object_array *array; // x8

  if ( (byte_4BDB5E4 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
    sub_1C21E38(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
    sub_1C21E38(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__);
    sub_1C21E38(&System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo);
    byte_4BDB5E4 = 1;
  }
  v3 = (System_Collections_Generic_Queue_T__o *)sub_1C22084(System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v3,
    (const MethodInfo_37C0E20 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
  p_downLoadWaitList = &this->fields.downLoadWaitList;
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
LABEL_12:
    sub_1C22094(downLoadWaitList, v4);
  while ( downLoadWaitList->fields._size > 0 )
  {
    downLoadWaitList = (System_Collections_Generic_Queue_T__o *)System_Collections_Generic_Queue_object___Dequeue(
                                                                  downLoadWaitList,
                                                                  (const MethodInfo_37C1578 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
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
        (const MethodInfo_37C13E8 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
    }
    downLoadWaitList = (System_Collections_Generic_Queue_T__o *)*p_downLoadWaitList;
    if ( !*p_downLoadWaitList )
      goto LABEL_12;
  }
  this->fields.downLoadWaitList = (struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.downLoadWaitList, (int64_t)v3, v5, v6, v7, v8, v9, v10);
  this->fields.isCancelDownload = 1;
}


void __fastcall AssetManager__CancelDownloadAssetStorageAll(AssetManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *downLoadWaitList; // x0

  if ( (byte_4BDB5E5 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__);
    byte_4BDB5E5 = 1;
  }
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
  this->fields.downloadSize = 0LL;
  if ( !downLoadWaitList )
    sub_1C22094(0LL, method);
  System_Collections_Generic_Queue_object___Clear(
    downLoadWaitList,
    (const MethodInfo_37C10A8 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__);
}


bool __fastcall AssetManager__CheckDateVersion(System_String_o *dateVersion, const MethodInfo *method)
{
  AssetManager_c *v3; // x0
  System_String_o *assetBundleDateVersion; // x0

  if ( (byte_4BDB5B1 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    byte_4BDB5B1 = 1;
  }
  v3 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v3 = AssetManager_TypeInfo;
  }
  assetBundleDateVersion = v3->static_fields->assetBundleDateVersion;
  if ( !assetBundleDateVersion )
    sub_1C22094(0LL, method);
  return System_String__StartsWith(assetBundleDateVersion, dateVersion, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AssetManager__CheckEntryLoadStatus(
        AssetManager_o *this,
        int32_t type,
        System_String_o *name,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *processingAssetLoaderList; // x0
  int32_t v8; // w22
  const MethodInfo *v9; // x3
  AssetData_o *syncRoot; // x0
  bool v11; // w21
  Il2CppObject *Current; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  AssetData_o *klass; // x0
  int v16; // w19
  System_Collections_Generic_Queue_Enumerator_T__o v18; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BDB5EE & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
    byte_4BDB5EE = 1;
  }
  memset(&v18, 0, sizeof(v18));
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
    goto LABEL_10;
  v8 = 0;
  while ( v8 < processingAssetLoaderList->fields._size )
  {
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               processingAssetLoaderList,
                                                                               v8,
                                                                               (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    if ( !processingAssetLoaderList )
      goto LABEL_10;
    syncRoot = (AssetData_o *)processingAssetLoaderList->fields._syncRoot;
    if ( syncRoot && AssetData__IsSame_39008676(syncRoot, type, name, v9) )
      return 1;
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
    ++v8;
    if ( !processingAssetLoaderList )
      goto LABEL_10;
  }
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.downLoadWaitList;
  if ( !processingAssetLoaderList )
LABEL_10:
    sub_1C22094(processingAssetLoaderList, *(_QWORD *)&type);
  System_Collections_Generic_Queue_object___GetEnumerator(
    &v18,
    (System_Collections_Generic_Queue_T__o *)processingAssetLoaderList,
    (const MethodInfo_37C14A0 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  while ( 1 )
  {
    v11 = System_Collections_Generic_Queue_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_33E16A8 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    if ( !v11 )
      break;
    Current = System_Collections_Generic_Queue_Enumerator_object___get_Current(
                &v18,
                (const MethodInfo_33E1798 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    if ( !Current )
      sub_1C22094(0LL, v13);
    klass = (AssetData_o *)Current[1].klass;
    if ( klass && AssetData__IsSame_39008676(klass, type, name, v14) )
    {
      v16 = 7;
      goto LABEL_19;
    }
  }
  v16 = 8;
LABEL_19:
  System_Collections_Generic_Queue_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_33E1698 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  return v11 && v16 == 7;
}


bool __fastcall AssetManager__CheckVersion(
        System_String_o *masterVersion,
        System_String_o *dateVersion,
        const MethodInfo *method)
{
  AssetManager_c *v5; // x0
  AssetManager_c *v6; // x0

  if ( (byte_4BDB5B0 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    byte_4BDB5B0 = 1;
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
  System_Collections_Generic_Dictionary_object__object__o *assetBundleDic; // x0
  _BOOL8 v5; // x0
  __int64 v6; // x1
  AssetData_o *currentValue; // x21
  Il2CppClass *klass; // x0
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  System_String_o *Path; // x23
  const MethodInfo *v12; // x2
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v13; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v14; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BDB602 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    sub_1C21E38(&StringLiteral_12719/*"SYSTEM"*/);
    byte_4BDB602 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.assetBundleDic, 0LL) )
  {
    assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
    if ( !assetBundleDic
      || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                        assetBundleDic,
                                                                                        (const MethodInfo_33164B0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
    {
      sub_1C22094(assetBundleDic, v3);
    }
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v13,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
      (const MethodInfo_3987B5C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    v14 = v13;
    while ( 1 )
    {
      v5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
             &v14,
             (const MethodInfo_3413764 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
      if ( !v5 )
        break;
      currentValue = (AssetData_o *)v14.fields._currentValue;
      if ( !v14.fields._currentValue )
        sub_1C22094(v5, v6);
      klass = v14.fields._currentValue[2].klass;
      if ( !klass )
        sub_1C22094(0LL, v6);
      if ( !System_String__Equals_63123856((System_String_o *)klass, (System_String_o *)StringLiteral_12719/*"SYSTEM"*/, 5, 0LL) )
      {
        AssetManager__ReleaseReservation(this, currentValue, v9);
        Path = AssetData__get_Path(currentValue, v10);
        if ( System_IO_File__Exists(Path, 0LL) )
        {
          System_IO_File__Delete(Path, 0LL);
          if ( !System_IO_File__Exists(Path, 0LL) )
            currentValue->fields.nowVersion = 0;
        }
      }
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
      &v14,
      (const MethodInfo_3413760 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    AssetManager__ConfigWriteRequest(this, 1, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetManager__ConfigWriteRequest(AssetManager_o *this, bool isFast, const MethodInfo *method)
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
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v28; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v29; // [xsp+20h] [xbp-80h] BYREF
  uint32_t v30; // [xsp+48h] [xbp-58h] BYREF
  bool lockTaken; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_4BDB5E8 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&CatAndMouseGame_TypeInfo);
    sub_1C21E38(&Crc32_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_1C21E38(&System_Text_StringBuilder_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    sub_1C21E38(&StringLiteral_43/*"\n"*/);
    sub_1C21E38(&StringLiteral_25605/*"~"*/);
    byte_4BDB5E8 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  lockTaken = 0;
  v30 = 0;
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic )
    goto LABEL_35;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         assetBundleDic,
         (const MethodInfo_3316350 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) < 1 )
    return;
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic )
    goto LABEL_35;
  Count = System_Collections_Generic_Dictionary_object__object___get_Count(
            assetBundleDic,
            (const MethodInfo_3316350 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__);
  v7 = (System_Text_StringBuilder_o *)sub_1C22084(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_62269980(v7, 60 * Count, 0LL);
  if ( !v7 )
    goto LABEL_35;
  System_Text_StringBuilder__Append_62278956(v7, 0x40u, 0LL);
  v8 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v8 = AssetManager_TypeInfo;
  }
  System_Text_StringBuilder__Append_62276628(v7, v8->static_fields->assetBundleMasterVersion, 0LL);
  if ( !System_String__IsNullOrEmpty(AssetManager_TypeInfo->static_fields->assetBundleDateVersion, 0LL) )
  {
    System_Text_StringBuilder__Append_62278956(v7, 0x2Cu, 0LL);
    v9 = AssetManager_TypeInfo;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      v9 = AssetManager_TypeInfo;
    }
    System_Text_StringBuilder__Append_62276628(v7, v9->static_fields->assetBundleDateVersion, 0LL);
    if ( !System_String__IsNullOrEmpty(AssetManager_TypeInfo->static_fields->assetBundleBuildVersion, 0LL) )
    {
      System_Text_StringBuilder__Append_62278956(v7, 0x2Cu, 0LL);
      v10 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v10 = AssetManager_TypeInfo;
      }
      System_Text_StringBuilder__Append_62276628(v7, v10->static_fields->assetBundleBuildVersion, 0LL);
    }
  }
  System_Text_StringBuilder__Append_62278956(v7, 0xAu, 0LL);
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      assetBundleDic,
                                                                                      (const MethodInfo_33164B0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
LABEL_35:
    sub_1C22094(assetBundleDic, isFast);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v28,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_3987B5C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v11 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v29,
            (const MethodInfo_3413764 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v11 )
      break;
    currentValue = v29.fields._currentValue;
    if ( !v29.fields._currentValue )
      sub_1C22094(v11, v12);
    System_Text_StringBuilder__Append_62279124(v7, (int32_t)v29.fields._currentValue[2].monitor, 0LL);
    System_Text_StringBuilder__Append_62278956(v7, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_62276628(v7, (System_String_o *)currentValue[2].klass, 0LL);
    System_Text_StringBuilder__Append_62278956(v7, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_62279124(v7, (int32_t)currentValue[3].klass, 0LL);
    System_Text_StringBuilder__Append_62278956(v7, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_62279300(v7, HIDWORD(currentValue[3].klass), 0LL);
    System_Text_StringBuilder__Append_62278956(v7, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_62276628(v7, (System_String_o *)currentValue[1].monitor, 0LL);
    System_Text_StringBuilder__Append_62276628(v7, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v29,
    (const MethodInfo_3413760 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  requestConfigWriteData = (Il2CppObject *)this->fields.requestConfigWriteData;
  lockTaken = 0;
  System_Threading_Monitor__Enter_64341908(requestConfigWriteData, &lockTaken, 0LL);
  v15 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v7->klass->vtable._3_ToString.method)(
                             v7,
                             v7->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_1C22094(0LL, v17);
  v18 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._19_GetBytes.method)(
                               UTF8,
                               v15,
                               UTF8->klass->vtable._20_GetBytes.methodPtr);
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  v30 = Crc32__Compute(v18, 0LL);
  v19 = System_UInt32__ToString((uint32_t)&v30, 0LL);
  v20 = System_String__Concat_63128740(
          (System_String_o *)StringLiteral_25605/*"~"*/,
          v19,
          (System_String_o *)StringLiteral_43/*"\n"*/,
          v15,
          0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v21 = CatAndMouseGame__CatGame8(v20, 0LL);
  this->fields.requestConfigWriteData = v21;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.requestConfigWriteData,
    (int64_t)v21,
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
    System_Threading_Monitor__Exit(requestConfigWriteData, 0LL);
}


void __fastcall AssetManager__ConfigWriteRequestThread(AssetManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  const MethodInfo *v10; // x1

  AssetManager__ConfigWriteRequest(this, 0, v2);
  this->fields.writeRequestThread = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.writeRequestThread, 0LL, v4, v5, v6, v7, v8, v9);
  if ( this->fields.reserveWriteRequest )
    AssetManager__StartThreadConfigWriteRequest(this, v10);
}


System_String_o *__fastcall AssetManager__ConvertDownloadSizeToString(
        AssetManager_o *this,
        double size,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  System_String_o *v12; // x19
  int64_t v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x1
  unsigned int i; // w21
  System_String_o format; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BDB5DE & 1) == 0 )
  {
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_8346/*"KB"*/);
    sub_1C21E38(&StringLiteral_25553/*"{0}{1}"*/);
    sub_1C21E38(&StringLiteral_9400/*"N2"*/);
    sub_1C21E38(&StringLiteral_13525/*"TB"*/);
    sub_1C21E38(&StringLiteral_2671/*"B"*/);
    sub_1C21E38(&StringLiteral_8789/*"MB"*/);
    sub_1C21E38(&StringLiteral_7058/*"GB"*/);
    byte_4BDB5DE = 1;
  }
  v4 = (System_String_o *)sub_1C21EE0(string___TypeInfo, 5LL);
  if ( !v4 )
    sub_1C22094(0LL, v5);
  v12 = v4;
  if ( !LODWORD(v4[1].klass) )
    goto LABEL_14;
  v13 = StringLiteral_2671/*"B"*/;
  v4[1].monitor = (void *)StringLiteral_2671/*"B"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v4[1].monitor, v13, v6, v7, v8, v9, v10, v11);
  if ( LODWORD(v12[1].klass) <= 1 )
    goto LABEL_14;
  v20 = StringLiteral_8346/*"KB"*/;
  v12[1].fields = (System_String_Fields)StringLiteral_8346/*"KB"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v12[1].fields, v20, v14, v15, v16, v17, v18, v19);
  if ( LODWORD(v12[1].klass) <= 2 )
    goto LABEL_14;
  v27 = StringLiteral_8789/*"MB"*/;
  v12[2].klass = (System_String_c *)StringLiteral_8789/*"MB"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v12[2], v27, v21, v22, v23, v24, v25, v26);
  if ( LODWORD(v12[1].klass) <= 3 )
    goto LABEL_14;
  v34 = StringLiteral_7058/*"GB"*/;
  v12[2].monitor = (void *)StringLiteral_7058/*"GB"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v12[2].monitor, v34, v28, v29, v30, v31, v32, v33);
  if ( LODWORD(v12[1].klass) <= 4 )
    goto LABEL_14;
  v41 = StringLiteral_13525/*"TB"*/;
  v12[2].fields = (System_String_Fields)StringLiteral_13525/*"TB"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v12[2].fields, v41, v35, v36, v37, v38, v39, v40);
  for ( i = 0; i != 4; ++i )
  {
    if ( size < 1000.0 )
      break;
    size = size / 1000.0;
    *(double *)&format.klass = size;
  }
  v4 = System_Double__ToString_63825880(1000.0, &format, (const MethodInfo *)StringLiteral_9400/*"N2"*/);
  if ( i >= LODWORD(v12[1].klass) )
LABEL_14:
    sub_1C2209C(v4, v5);
  return System_String__Format_63129848(
           (System_String_o *)StringLiteral_25553/*"{0}{1}"*/,
           (Il2CppObject *)v4,
           *((Il2CppObject **)&v12[1].monitor + i),
           0LL);
}


void __fastcall AssetManager__DebugLog(AssetManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *downLoadWaitList; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_List_AssetLoader__o *processingAssetLoaderList; // x8
  int size; // w8
  int v7; // w9
  _BOOL8 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v10; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v11; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v12; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4BDB5D8 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_1C21E38(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    byte_4BDB5D8 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  memset(&v11, 0, sizeof(v11));
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
    goto LABEL_22;
  System_Collections_Generic_Queue_object___GetEnumerator(
    (System_Collections_Generic_Queue_Enumerator_T__o *)&v10,
    downLoadWaitList,
    (const MethodInfo_37C14A0 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  v12 = v10;
  while ( System_Collections_Generic_Queue_Enumerator_object___MoveNext(
            (System_Collections_Generic_Queue_Enumerator_T__o *)&v12,
            (const MethodInfo_33E16A8 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__) )
  {
    if ( !System_Collections_Generic_Queue_Enumerator_object___get_Current(
            (System_Collections_Generic_Queue_Enumerator_T__o *)&v12,
            (const MethodInfo_33E1798 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__) )
      sub_1C22094(0LL, v4);
  }
  System_Collections_Generic_Queue_Enumerator_object___Dispose(
    (System_Collections_Generic_Queue_Enumerator_T__o *)&v12,
    (const MethodInfo_33E1698 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  processingAssetLoaderList = this->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
    goto LABEL_22;
  size = processingAssetLoaderList->fields._size;
  v7 = -1;
  do
    ++v7;
  while ( v7 < size );
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.assetBundleDic;
  if ( !downLoadWaitList )
    goto LABEL_22;
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                (System_Collections_Generic_Dictionary_object__object__o *)downLoadWaitList,
                                                                (const MethodInfo_33164B0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !downLoadWaitList )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v10,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)downLoadWaitList,
    (const MethodInfo_3987B5C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v11 = v10;
  while ( 1 )
  {
    v8 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v11,
           (const MethodInfo_3413764 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v8 )
      break;
    if ( !v11.fields._currentValue )
      sub_1C22094(v8, v9);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v11,
    (const MethodInfo_3413760 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.assetResourceDic;
  if ( !downLoadWaitList
    || (downLoadWaitList = (System_Collections_Generic_Queue_T__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                      (System_Collections_Generic_Dictionary_object__object__o *)downLoadWaitList,
                                                                      (const MethodInfo_33164B0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
LABEL_22:
    sub_1C22094(downLoadWaitList, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v10,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)downLoadWaitList,
    (const MethodInfo_3987B5C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v11 = v10;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v11,
            (const MethodInfo_3413764 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__) )
    ;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v11,
    (const MethodInfo_3413760 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
}


System_Collections_IEnumerator_o *__fastcall AssetManager__DelayLoadStart(
        AssetManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDB5F4 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager__DelayLoadStart_d__149_TypeInfo);
    byte_4BDB5F4 = 1;
  }
  v3 = sub_1C22084(AssetManager__DelayLoadStart_d__149_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall AssetManager__DeleteContinueData(const MethodInfo *method)
{
  AssetManager_c *v1; // x0

  if ( (byte_4BDB5A9 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    byte_4BDB5A9 = 1;
  }
  v1 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v1 = AssetManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v1->static_fields->SAVE_KEY, 0LL);
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
        AssetManager__AddLoadWaitStatus_39057596(this, AssetData, callbackFunc, 0LL, v12);
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
  System_Collections_Generic_Dictionary_object__object__o *assetBundleDic; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  AssetData_o *currentValue; // x22
  int monitor; // w8
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v15; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BDB5DF & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    byte_4BDB5DF = 1;
  }
  memset(&v15, 0, sizeof(v15));
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      assetBundleDic,
                                                                                      (const MethodInfo_33164B0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
    sub_1C22094(assetBundleDic, attrib);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v15,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_3987B5C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v15,
           (const MethodInfo_3413764 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v8 )
      break;
    currentValue = (AssetData_o *)v15.fields._currentValue;
    if ( !v15.fields._currentValue )
      sub_1C22094(v8, v9);
    monitor = (int)v15.fields._currentValue[2].monitor;
    if ( monitor < 1 || monitor == HIDWORD(v15.fields._currentValue[2].monitor) )
    {
      if ( System_String__op_Equality(attrib, (System_String_o *)v15.fields._currentValue[2].klass, 0LL)
        && currentValue->fields.nowVersion != currentValue->fields.newVersion )
      {
        AssetManager__AddLoadWaitStatus_39047232(this, currentValue, v13);
      }
    }
    else
    {
      AssetManager__AddLoadWaitStatus_39047232(this, (AssetData_o *)v15.fields._currentValue, v10);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v15,
    (const MethodInfo_3413760 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  this->fields.loadParallelMax = loadParallelMax;
  AssetManager__LoadStart(this, v14);
}


System_Collections_IEnumerator_o *__fastcall AssetManager__DownloadAssetStorageAttributeWithCheckDialog(
        AssetManager_o *this,
        System_String_o *attrib,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4BDB5DD & 1) == 0 )
  {
    sub_1C21E38(&AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_TypeInfo);
    byte_4BDB5DD = 1;
  }
  v7 = sub_1C22084(AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = attrib;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)attrib, v14, v15, v16, v17, v18, v19);
  *(_DWORD *)(v7 + 56) = loadParallelMax;
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall AssetManager__DownloadAssetStorageAttribute_39050172(
        AssetManager_o *this,
        System_String_array *attribList,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  AssetManager_o *v6; // x19
  __int64 v7; // x9
  System_String_o *v8; // x8
  __int64 v9; // x22
  __int64 v10; // x24
  unsigned __int64 v11; // x10
  _BOOL8 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  AssetData_o *currentValue; // x22
  int monitor; // w8
  int monitor_high; // w9
  unsigned __int64 v18; // x26
  __int64 v19; // x25
  _BOOL8 v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  const MethodInfo *v24; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v25; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v26; // [xsp+20h] [xbp-70h] BYREF

  v6 = this;
  if ( (byte_4BDB5E0 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    this = (AssetManager_o *)sub_1C21E38(&StringLiteral_868/*", "*/);
    byte_4BDB5E0 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  if ( !attribList )
LABEL_33:
    sub_1C22094(this, attribList);
  v7 = *(_QWORD *)&attribList->max_length;
  if ( !v7 )
    return;
  if ( !(_DWORD)v7 )
    goto LABEL_13;
  v8 = attribList->m_Items[0];
  if ( (_DWORD)v7 == 1 )
  {
    AssetManager__DownloadAssetStorageAttribute(v6, attribList->m_Items[0], 1, method);
    return;
  }
  if ( (int)v7 >= 2 )
  {
    if ( (v7 & 0xFFFFFFFE) != 0 )
    {
      v9 = 0LL;
      v10 = (unsigned int)*(_QWORD *)&attribList->max_length - 2LL;
      do
      {
        this = (AssetManager_o *)System_String__Concat_63126736(
                                   v8,
                                   (System_String_o *)StringLiteral_868/*", "*/,
                                   attribList->m_Items[v9 + 1],
                                   0LL);
        if ( v10 == v9 )
          goto LABEL_14;
        v11 = v9 + 2;
        v8 = (System_String_o *)this;
        ++v9;
      }
      while ( v11 < attribList->max_length );
    }
LABEL_13:
    sub_1C2209C(this, attribList);
  }
LABEL_14:
  this = (AssetManager_o *)v6->fields.assetBundleDic;
  if ( !this )
    goto LABEL_33;
  this = (AssetManager_o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                             (System_Collections_Generic_Dictionary_object__object__o *)this,
                             (const MethodInfo_33164B0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !this )
    goto LABEL_33;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v25,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_3987B5C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v26 = v25;
LABEL_17:
  while ( 1 )
  {
    v12 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v26,
            (const MethodInfo_3413764 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v12 )
      break;
    currentValue = (AssetData_o *)v26.fields._currentValue;
    if ( !v26.fields._currentValue )
      sub_1C22094(v12, v13);
    monitor = (int)v26.fields._currentValue[2].monitor;
    monitor_high = HIDWORD(v26.fields._currentValue[2].monitor);
    if ( monitor < 1 )
    {
      if ( monitor != monitor_high && (int)*(_QWORD *)&attribList->max_length >= 1 )
      {
        v18 = 0LL;
        v19 = (unsigned int)*(_QWORD *)&attribList->max_length - 1LL;
        while ( 1 )
        {
          v20 = System_String__op_Equality(attribList->m_Items[v18], currentValue->fields.attrib, 0LL);
          if ( v20 )
            break;
          if ( v19 == v18++ )
            goto LABEL_17;
          if ( v18 >= attribList->max_length )
            sub_1C2209C(v20, v21);
        }
        AssetManager__AddLoadWaitStatus_39047232(v6, currentValue, v22);
      }
    }
    else if ( monitor != monitor_high )
    {
      AssetManager__AddLoadWaitStatus_39047232(v6, (AssetData_o *)v26.fields._currentValue, v14);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v26,
    (const MethodInfo_3413760 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  v6->fields.loadParallelMax = loadParallelMax;
  AssetManager__LoadStart(v6, v24);
}


bool __fastcall AssetManager__DownloadAssetStorage_39039520(
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
    sub_1C22094(this, 0LL);
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
        sub_1C2209C(this, nameList);
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

  if ( (byte_4BDB5FB & 1) == 0 )
  {
    this = (AssetManager_o *)sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AssetData__TryGetValue__);
    byte_4BDB5FB = 1;
  }
  value = 0LL;
  if ( !name )
    return 0LL;
  if ( !dic )
    sub_1C22094(this, dic);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)dic,
         (Il2CppObject *)name,
         &value,
         (const MethodInfo_3317E8C *)Method_System_Collections_Generic_Dictionary_string__AssetData__TryGetValue__) )
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  Il2CppObject *v21; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v27; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v28; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BDB5E2 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    sub_1C21E38(&StringLiteral_1123/*"/"*/);
    byte_4BDB5E2 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v5 = System_String__Concat_63115476(path, (System_String_o *)StringLiteral_1123/*"/"*/, 0LL);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic )
    goto LABEL_21;
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                assetBundleDic,
                                                                                (const MethodInfo_33164B0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !assetBundleDic )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v27,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_3987B5C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v28 = v27;
  while ( 1 )
  {
    v9 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v28,
           (const MethodInfo_3413764 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v9 )
      break;
    currentValue = v28.fields._currentValue;
    if ( !v28.fields._currentValue )
      sub_1C22094(v9, v10);
    monitor = (System_String_o *)v28.fields._currentValue[1].monitor;
    if ( !monitor )
      sub_1C22094(0LL, v10);
    v13 = System_String__StartsWith(monitor, v5, 0LL);
    if ( v13 )
    {
      if ( !v6 )
        sub_1C22094(v13, v14);
      v21 = (Il2CppObject *)currentValue[1].monitor;
      items = v6->fields._items;
      v23 = Method_System_Collections_Generic_List_string__Add__;
      ++v6->fields._version;
      if ( !items )
        sub_1C22094(v13, v21);
      size = v6->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v6,
          v21,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = &items->obj.klass + size;
        v6->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v21;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v25 + 4), (int64_t)v21, v15, v16, v17, v18, v19, v20);
      }
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v28,
    (const MethodInfo_3413760 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  if ( !v6 )
LABEL_21:
    sub_1C22094(assetBundleDic, v7);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v6,
                                  (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_string__ToArray__);
}


AssetData_array *__fastcall AssetManager__GetAssetStorage_39043060(
        AssetManager_o *this,
        System_String_array *nameList,
        const MethodInfo *method)
{
  AssetManager_o *v4; // x20
  const MethodInfo *v5; // x3
  __int64 v6; // x8
  AssetData_array *v7; // x21
  unsigned __int64 v8; // x24
  PartyOrganizationUtility_o *p_isUseDebugStatus; // x22
  System_String_o *v10; // x2
  AssetManager_o *v11; // x23
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v19; // x0

  v4 = this;
  if ( (byte_4BDB5FC & 1) == 0 )
  {
    this = (AssetManager_o *)sub_1C21E38(&AssetData___TypeInfo);
    byte_4BDB5FC = 1;
  }
  if ( !nameList )
LABEL_17:
    sub_1C22094(this, nameList);
  this = (AssetManager_o *)sub_1C21EE0(AssetData___TypeInfo, nameList->max_length);
  v6 = *(_QWORD *)&nameList->max_length;
  v7 = (AssetData_array *)this;
  if ( (int)v6 >= 1 )
  {
    v8 = 0LL;
    p_isUseDebugStatus = (PartyOrganizationUtility_o *)&this->fields.isUseDebugStatus;
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
            this = (AssetManager_o *)sub_1C21F74(this, v7->obj.klass->_1.element_class);
            if ( !this )
            {
              v19 = sub_1C220B8(0LL);
              sub_1C21F60(v19, 0LL);
            }
            if ( v8 >= v7->max_length )
              break;
            p_isUseDebugStatus->klass = (PartyOrganizationUtility_c *)v11;
            sub_1C21DDC(p_isUseDebugStatus, (int64_t)v11, v12, v13, v14, v15, v16, v17);
          }
        }
      }
      LODWORD(v6) = nameList->max_length;
      ++v8;
      p_isUseDebugStatus = (PartyOrganizationUtility_o *)((char *)p_isUseDebugStatus + 8);
      if ( (__int64)v8 >= (int)v6 )
        return v7;
    }
    sub_1C2209C(this, nameList);
  }
  return v7;
}


bool __fastcall AssetManager__GetAssetStorage_39043516(
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


bool __fastcall AssetManager__GetAsset_39033784(
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


bool __fastcall AssetManager__GetAsset_39034072(
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


AssetData_o *__fastcall AssetManager__GetAsset_39058664(
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
  AssetManager_c *v1; // x0

  if ( (byte_4BDB5B3 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    byte_4BDB5B3 = 1;
  }
  v1 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v1 = AssetManager_TypeInfo;
  }
  return v1->static_fields->assetBundleDateVersion;
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
  System_Collections_Generic_List_object__o *processingAssetLoaderList; // x0
  int64_t downloadSize; // x21
  int32_t v5; // w20
  int32_t LoadSize; // w8

  if ( (byte_4BDB5E1 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    byte_4BDB5E1 = 1;
  }
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
LABEL_8:
    sub_1C22094(processingAssetLoaderList, method);
  downloadSize = this->fields.downloadSize;
  v5 = 0;
  while ( v5 < processingAssetLoaderList->fields._size )
  {
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               processingAssetLoaderList,
                                                                               v5,
                                                                               (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
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


System_String_o *__fastcall AssetManager__GetDownloadSizeString(AssetManager_o *this, const MethodInfo *method)
{
  AssetManager_o *DownloadSize; // x0
  const MethodInfo *v3; // x1

  DownloadSize = (AssetManager_o *)AssetManager__GetDownloadSize(this, method);
  return AssetManager__ConvertDownloadSizeToString(DownloadSize, (double)(__int64)DownloadSize, v3);
}


System_String_o *__fastcall AssetManager__GetMasterVersion(const MethodInfo *method)
{
  AssetManager_c *v1; // x0

  if ( (byte_4BDB5B2 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    byte_4BDB5B2 = 1;
  }
  v1 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v1 = AssetManager_TypeInfo;
  }
  return v1->static_fields->assetBundleMasterVersion;
}


System_Collections_IEnumerator_o *__fastcall AssetManager__InitCR(AssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDB5E6 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager__InitCR_d__131_TypeInfo);
    byte_4BDB5E6 = 1;
  }
  v3 = sub_1C22084(AssetManager__InitCR_d__131_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall AssetManager__Initialize(AssetManager_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *initCRW; // x1
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  void *assetBundleReleaseDic; // x0
  char v11; // w28
  const MethodInfo *v12; // x1
  int v13; // w28
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1
  int32_t v16; // w20
  Il2CppObject *Item; // x21
  int32_t v18; // w2
  int v19; // w8
  System_String_o *Path; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  AssetManager_c *v27; // x8
  int64_t v28; // x20
  struct AssetManager_StaticFields *static_fields; // x0
  struct AssetManager_StaticFields *v30; // x8
  System_String_o *cachePathName; // x20
  System_String_o *configFileName; // x21
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  struct AssetManager_StaticFields *v35; // x8
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct AssetManager_StaticFields *v42; // x8
  System_String_o *v43; // x20
  System_String_o *v44; // x0
  System_String_o *v45; // x0
  struct AssetManager_StaticFields *v46; // x8
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct AssetManager_StaticFields *v53; // x8
  System_String_o *v54; // x20
  System_String_o *v55; // x0
  System_String_o *v56; // x0
  struct AssetManager_StaticFields *v57; // x8
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v64; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o i; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BDB5DA & 1) == 0 )
  {
    sub_1C21E38(&AndroidUtil_TypeInfo);
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AssetLoader__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    byte_4BDB5DA = 1;
  }
  memset(&i, 0, sizeof(i));
  initCRW = this->fields.initCRW;
  if ( initCRW )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, initCRW, 0LL);
    this->fields.initCRW = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.initCRW, 0LL, v4, v5, v6, v7, v8, v9);
  }
  assetBundleReleaseDic = this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_44;
  System_Collections_Generic_Dictionary_object__object___Clear(
    (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
    (const MethodInfo_3316808 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
  assetBundleReleaseDic = this->fields.assetBundleDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_44;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
         (const MethodInfo_3316350 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) < 1 )
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
                              (const MethodInfo_33164B0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v64,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
      (const MethodInfo_3987B5C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    v11 = 0;
    for ( i = v64;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &i,
            (const MethodInfo_3413764 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
          v11 |= AssetData__ReleaseData((AssetData_o *)i.fields._currentValue, v12) )
    {
      if ( !i.fields._currentValue )
        sub_1C22094(0LL, v12);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
      &i,
      (const MethodInfo_3413760 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    assetBundleReleaseDic = this->fields.assetBundleDic;
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    System_Collections_Generic_Dictionary_object__object___Clear(
      (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
      (const MethodInfo_3316808 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
    v13 = v11 != 0;
  }
  assetBundleReleaseDic = this->fields.assetResourceDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_44;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
         (const MethodInfo_3316350 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) >= 1 )
  {
    assetBundleReleaseDic = this->fields.assetResourceDic;
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    assetBundleReleaseDic = System_Collections_Generic_Dictionary_object__object___get_Values(
                              (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
                              (const MethodInfo_33164B0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v64,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
      (const MethodInfo_3987B5C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    for ( i = v64;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &i,
            (const MethodInfo_3413764 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
          v13 |= AssetData__ReleaseData((AssetData_o *)i.fields._currentValue, v15) )
    {
      if ( !i.fields._currentValue )
        sub_1C22094(0LL, v15);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
      &i,
      (const MethodInfo_3413760 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    assetBundleReleaseDic = this->fields.assetResourceDic;
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    System_Collections_Generic_Dictionary_object__object___Clear(
      (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
      (const MethodInfo_3316808 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
  }
  if ( (v13 & 1) != 0 )
    AssetManager__RequestUnloadUnusedAssets(this, 0LL, v14);
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
               (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70869612((UnityEngine_Object_o *)Item, 0LL);
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
      System_Array__Clear(*((System_Array_o **)assetBundleReleaseDic + 2), 0, v18, 0LL);
  }
  assetBundleReleaseDic = this->fields.downLoadWaitList;
  if ( !assetBundleReleaseDic )
LABEL_44:
    sub_1C22094(assetBundleReleaseDic, initCRW);
  System_Collections_Generic_Queue_object___Clear(
    (System_Collections_Generic_Queue_T__o *)assetBundleReleaseDic,
    (const MethodInfo_37C10A8 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__);
  this->fields.downloadSize = 0LL;
  this->fields.isCancelDownload = 0;
  Path = AssetStorageCache__GetPath(0LL);
  v27 = AssetManager_TypeInfo;
  v28 = (int64_t)Path;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v27 = AssetManager_TypeInfo;
  }
  static_fields = v27->static_fields;
  static_fields->cachePathName = (struct System_String_o *)v28;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->cachePathName, v28, v21, v22, v23, v24, v25, v26);
  v30 = AssetManager_TypeInfo->static_fields;
  cachePathName = v30->cachePathName;
  configFileName = v30->configFileName;
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  v33 = AndroidUtil__ConvertFileNameIfNeed(configFileName, 0LL);
  v34 = System_String__Concat_63115476(cachePathName, v33, 0LL);
  v35 = AssetManager_TypeInfo->static_fields;
  v35->cacheListFileName = v34;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v35->cacheListFileName, (int64_t)v34, v36, v37, v38, v39, v40, v41);
  v42 = AssetManager_TypeInfo->static_fields;
  v43 = v42->cachePathName;
  v44 = AndroidUtil__ConvertFileNameIfNeed(v42->createConfigFileName, 0LL);
  v45 = System_String__Concat_63115476(v43, v44, 0LL);
  v46 = AssetManager_TypeInfo->static_fields;
  v46->createCacheListFileName = v45;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v46->createCacheListFileName, (int64_t)v45, v47, v48, v49, v50, v51, v52);
  v53 = AssetManager_TypeInfo->static_fields;
  v54 = v53->cachePathName;
  v55 = AndroidUtil__ConvertFileNameIfNeed(v53->backConfigFileName, 0LL);
  v56 = System_String__Concat_63115476(v54, v55, 0LL);
  v57 = AssetManager_TypeInfo->static_fields;
  v57->backCacheListFileName = v56;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v57->backCacheListFileName, (int64_t)v56, v58, v59, v60, v61, v62, v63);
  this->fields.isInitFirst = 0;
}


void __fastcall AssetManager__InitializeAssetStorage(AssetManager_o *this, const MethodInfo *method)
{
  struct System_Collections_IEnumerator_o **p_initCRW; // x20
  struct System_Collections_IEnumerator_o *inited; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  p_initCRW = &this->fields.initCRW;
  if ( !this->fields.initCRW )
  {
    this->fields.isInitEnd = 0;
    inited = AssetManager__InitCR(this, method);
    this->fields.initCRW = inited;
    sub_1C21DDC((PartyOrganizationUtility_o *)p_initCRW, (int64_t)inited, v5, v6, v7, v8, v9, v10);
    UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, this->fields.initCRW, 0LL);
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

  if ( (byte_4BDB5F7 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__);
    byte_4BDB5F7 = 1;
  }
  assetBundleDic = this->fields.assetBundleDic;
  if ( !assetBundleDic )
    sub_1C22094(0LL, name);
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)assetBundleDic,
           (Il2CppObject *)name,
           (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__);
}


bool __fastcall AssetManager__IsExistAssetStorage_39035964(
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
    sub_1C22094(this, 0LL);
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
        sub_1C2209C(this, nameList);
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


bool __fastcall AssetManager__IsNeedDownload_39036512(
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
    sub_1C22094(this, 0LL);
  v4 = *(_QWORD *)&nameList->max_length;
  v6 = (int)v4 > 0;
  if ( (int)v4 >= 1 )
  {
    v7 = this;
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)v4 )
        sub_1C2209C(this, nameList);
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
  System_Collections_Generic_Dictionary_object__object__o *assetBundleReleaseDic; // x0
  int v4; // w24
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  float v8; // s0
  System_String_o *Path; // x20
  int64_t FreeSize; // x20
  ManagerConfig_c *v11; // x0
  AssetManager_c *v12; // x0
  AssetManager_c *v13; // x0
  AssetManager_c *v14; // x0
  System_String_o *createCacheListFileName; // x20
  System_Text_Encoding_o *UTF8; // x22
  System_IO_StreamWriter_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1
  AssetManager_c *v20; // x0
  AssetManager_c *v21; // x0
  AssetManager_c *v22; // x0
  AssetManager_c *v23; // x0
  void *v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x0
  System_IO_IOException_o *v32; // x20
  System_String_o *v33; // x0
  __int64 v34; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v35; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v36; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_4BDB5EB & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetManager_OnClickRetryDialog__);
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&CommonServicePluginScript_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&ManagementManager_TypeInfo);
    sub_1C21E38(&ManagerConfig_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&System_IO_StreamWriter_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    sub_1C21E38(&StringLiteral_2175/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_16213/*"[FFFF80]Download error for debug"*/);
    sub_1C21E38(&StringLiteral_11674/*"SCRIPT"*/);
    sub_1C21E38(&StringLiteral_2176/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDB5EB = 1;
  }
  memset(&v36, 0, sizeof(v36));
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_49;
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                       assetBundleReleaseDic,
                                                                                       (const MethodInfo_33164B0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !assetBundleReleaseDic )
    goto LABEL_49;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v35,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
    (const MethodInfo_3987B5C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v4 = 0;
  v36 = v35;
  while ( 1 )
  {
    v5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v36,
           (const MethodInfo_3413764 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v5 )
      break;
    if ( !v36.fields._currentValue )
      sub_1C22094(v5, v6);
    if ( !HIDWORD(v36.fields._currentValue[5].klass) )
    {
      if ( v36.fields._currentValue[4].monitor )
        v4 |= AssetData__ReleaseData((AssetData_o *)v36.fields._currentValue, v6);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v36,
    (const MethodInfo_3413760 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  if ( (v4 & 1) != 0 )
    AssetManager__RequestUnloadUnusedAssets(this, 0LL, v7);
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
LABEL_49:
    sub_1C22094(assetBundleReleaseDic, method);
  System_Collections_Generic_Dictionary_object__object___Clear(
    assetBundleReleaseDic,
    (const MethodInfo_3316808 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
  if ( this->fields.requestWriteCounter >= 0.0 )
  {
    v8 = this->fields.requestWriteCounter - UnityEngine_Time__get_deltaTime(0LL);
    this->fields.requestWriteCounter = v8;
    if ( v8 <= 0.0 && !this->fields.isErrorDialog )
    {
      Path = AssetStorageCache__GetPath(0LL);
      if ( !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo);
      FreeSize = CommonServicePluginScript__GetFreeSize(Path, 0LL);
      if ( FreeSize >= 1 )
      {
        v11 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v11 = ManagerConfig_TypeInfo;
        }
        if ( FreeSize < v11->static_fields->LIMIT_FREE_SIZE )
        {
          v31 = sub_1C21E4C(&System_IO_IOException_TypeInfo);
          v32 = (System_IO_IOException_o *)sub_1C22084(v31);
          v33 = (System_String_o *)sub_1C21E4C(&StringLiteral_5440/*"Disk full"*/);
          System_IO_IOException___ctor_63255720(v32, v33, 0LL);
          v34 = sub_1C21E4C(&Method_AssetManager_LateUpdate__);
          sub_1C21F60(v32, v34);
        }
      }
      v12 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v12 = AssetManager_TypeInfo;
      }
      if ( System_IO_File__Exists(v12->static_fields->createCacheListFileName, 0LL) )
      {
        v13 = AssetManager_TypeInfo;
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v13 = AssetManager_TypeInfo;
        }
        System_IO_File__Delete(v13->static_fields->createCacheListFileName, 0LL);
      }
      v14 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v14 = AssetManager_TypeInfo;
      }
      createCacheListFileName = v14->static_fields->createCacheListFileName;
      UTF8 = System_Text_Encoding__get_UTF8(0LL);
      v17 = (System_IO_StreamWriter_o *)sub_1C22084(System_IO_StreamWriter_TypeInfo);
      System_IO_StreamWriter___ctor_63284612(v17, createCacheListFileName, 0, UTF8, 0LL);
      if ( !v17 )
        sub_1C22094(v18, v19);
      ((void (__fastcall *)(System_IO_StreamWriter_o *, struct System_String_o *, Il2CppMethodPointer))v17->klass->vtable._16_Write.method)(
        v17,
        this->fields.requestConfigWriteData,
        v17->klass->vtable._17_Write.methodPtr);
      ((void (__fastcall *)(System_IO_StreamWriter_o *, Il2CppMethodPointer))v17->klass->vtable._8_Close.method)(
        v17,
        v17->klass->vtable._9_Dispose.methodPtr);
      if ( System_IO_File__Exists(AssetManager_TypeInfo->static_fields->backCacheListFileName, 0LL) )
      {
        v20 = AssetManager_TypeInfo;
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v20 = AssetManager_TypeInfo;
        }
        System_IO_File__Delete(v20->static_fields->backCacheListFileName, 0LL);
      }
      v21 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v21 = AssetManager_TypeInfo;
      }
      if ( System_IO_File__Exists(v21->static_fields->cacheListFileName, 0LL) )
      {
        v22 = AssetManager_TypeInfo;
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v22 = AssetManager_TypeInfo;
        }
        System_IO_File__Move(v22->static_fields->cacheListFileName, v22->static_fields->backCacheListFileName, 0LL);
      }
      v23 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v23 = AssetManager_TypeInfo;
      }
      System_IO_File__Move(v23->static_fields->createCacheListFileName, v23->static_fields->cacheListFileName, 0LL);
      v24 = StringLiteral_1/*""*/;
      this->fields.requestConfigWriteData = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.requestConfigWriteData,
        (int64_t)v24,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
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
  AssetData_o *AssetData; // x0
  int32_t entryCount; // w8
  AssetData_o *v8; // x20
  const MethodInfo *v9; // x3
  System_Collections_Generic_Dictionary_object__object__o *assetResourceDic; // x0
  const MethodInfo *v11; // x1
  int32_t v12; // w8

  v5 = this;
  if ( (byte_4BDB5FD & 1) == 0 )
  {
    sub_1C21E38(&AssetData_TypeInfo);
    this = (AssetManager_o *)sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
    byte_4BDB5FD = 1;
  }
  AssetData = AssetManager__GetAssetData(this, v5->fields.assetResourceDic, name, v3);
  if ( AssetData )
  {
    entryCount = AssetData->fields.entryCount;
    v8 = AssetData;
    if ( (entryCount & 0x80000000) == 0 )
      AssetData->fields.entryCount = entryCount + 1;
  }
  else
  {
    v8 = (AssetData_o *)sub_1C22084(AssetData_TypeInfo);
    AssetData___ctor(v8, 1, name, v9);
    if ( !v8 )
      goto LABEL_14;
    if ( !AssetData__SetResource(v8, v11) )
      return 0LL;
    v12 = v8->fields.entryCount;
    if ( (v12 & 0x80000000) == 0 )
      v8->fields.entryCount = v12 + 1;
    assetResourceDic = (System_Collections_Generic_Dictionary_object__object__o *)v5->fields.assetResourceDic;
    if ( !assetResourceDic )
LABEL_14:
      sub_1C22094(assetResourceDic, v11);
    System_Collections_Generic_Dictionary_object__object___Add(
      assetResourceDic,
      (Il2CppObject *)name,
      (Il2CppObject *)v8,
      (const MethodInfo_3316680 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
  }
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
  if ( (byte_4BDB5F8 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
    byte_4BDB5F8 = 1;
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
    sub_1C22094(0LL, v10);
  System_Collections_Generic_Dictionary_object__object___Remove(
    assetBundleReleaseDic,
    (Il2CppObject *)name,
    (const MethodInfo_3317B7C *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
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
      AssetManager__AddLoadWaitStatus_39057596(v8, v20, callbackFunc, 0LL, v19);
      v8->fields.loadParallelMax = loadParallelMax;
      AssetManager__LoadStart(v8, v22);
    }
  }
LABEL_19:
  LOBYTE(v17) = 1;
  return (char)v17;
}


bool __fastcall AssetManager__LoadAssetStorage_39041712(
        AssetManager_o *this,
        System_String_array *nameList,
        System_Action_o *callbackFunc,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  __int64 v9; // x21
  System_Collections_Generic_List_object__o *AssetStorage; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_List_object__o *v24; // x23
  System_Collections_Generic_List_object__o **v25; // x22
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x4
  __int64 v34; // x8
  int v35; // w26
  unsigned __int64 v36; // x27
  AssetLoader_LoadEndDataHandler_o **v37; // x23
  bool v38; // w25
  System_String_o *v39; // x24
  AssetLoader_LoadEndDataHandler_o *v40; // x25
  const MethodInfo *v41; // x3
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  const MethodInfo *v48; // x1

  if ( (byte_4BDB5FA & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__IndexOf__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__RemoveRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Remove__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C21E38(&Method_AssetManager___c__DisplayClass169_0__LoadAssetStorage_b__0__);
    sub_1C21E38(&AssetManager___c__DisplayClass169_0_TypeInfo);
    byte_4BDB5FA = 1;
  }
  v9 = sub_1C22084(AssetManager___c__DisplayClass169_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_31;
  *(_QWORD *)(v9 + 40) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 40), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 48) = callbackFunc;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 48), (int64_t)callbackFunc, v18, v19, v20, v21, v22, v23);
  *(_DWORD *)(v9 + 56) = loadParallelMax;
  v24 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v9 + 24) = v24;
  v25 = (System_Collections_Generic_List_object__o **)(v9 + 24);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)v24, v26, v27, v28, v29, v30, v31);
  AssetStorage = *(System_Collections_Generic_List_object__o **)(v9 + 24);
  if ( !AssetStorage
    || (System_Collections_Generic_List_object___AddRange(
          AssetStorage,
          (System_Collections_Generic_IEnumerable_T__o *)nameList,
          (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_string__AddRange__),
        *(_DWORD *)(v9 + 16) = 0,
        *(_BYTE *)(v9 + 32) = 0,
        !nameList) )
  {
LABEL_31:
    sub_1C22094(AssetStorage, v11);
  }
  v34 = *(_QWORD *)&nameList->max_length;
  if ( (int)v34 >= 1 )
  {
    v35 = 0;
    v36 = 0LL;
    v37 = (AssetLoader_LoadEndDataHandler_o **)(v9 + 64);
    v38 = 1;
    while ( 1 )
    {
      if ( v36 >= (unsigned int)v34 )
        sub_1C2209C(AssetStorage, v11);
      v39 = nameList->m_Items[v36];
      if ( !v39 )
      {
        AssetStorage = *v25;
        if ( !*v25 )
          goto LABEL_31;
        AssetStorage = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Remove(
                                                                      AssetStorage,
                                                                      0LL,
                                                                      (const MethodInfo_36505DC *)Method_System_Collections_Generic_List_string__Remove__);
        goto LABEL_23;
      }
      if ( !v38 )
        goto LABEL_22;
      v40 = *v37;
      if ( !*v37 )
      {
        v40 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v40,
          (Il2CppObject *)v9,
          Method_AssetManager___c__DisplayClass169_0__LoadAssetStorage_b__0__,
          v41);
        *(_QWORD *)(v9 + 64) = v40;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 64), (int64_t)v40, v42, v43, v44, v45, v46, v47);
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
      LODWORD(v34) = nameList->max_length;
      if ( (__int64)++v36 >= (int)v34 )
        goto LABEL_26;
    }
    AssetStorage = *v25;
    if ( !*v25 )
      goto LABEL_31;
    AssetStorage = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___IndexOf(
                                                                  AssetStorage,
                                                                  (Il2CppObject *)v39,
                                                                  (const MethodInfo_364FD54 *)Method_System_Collections_Generic_List_string__IndexOf__);
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
        (const MethodInfo_3650920 *)Method_System_Collections_Generic_List_string__RemoveRange__);
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


bool __fastcall AssetManager__LoadAsset_39058420(
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
  Il2CppObject *Instance; // x0
  __int64 v2; // x1
  _DWORD *monitor; // x8

  if ( (byte_4BDB5D9 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4BDB5D9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  if ( BYTE2(Instance[3].klass) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( Instance )
    {
      monitor = Instance[6].monitor;
      if ( monitor )
        return monitor[6] > 0;
    }
LABEL_9:
    sub_1C22094(Instance, v2);
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
  AssetData_o *v11; // x0
  AssetData_o *AssetData; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x4
  AssetData_o *v15; // x24
  System_Collections_Generic_Dictionary_object__object__o *assetBundleReleaseDic; // x0
  int32_t entryCount; // w8
  _BOOL8 Status; // x0
  const MethodInfo *v19; // x3
  AssetData_o *v20; // x23
  System_Collections_Generic_List_object__o *v21; // x24
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct UnityEngine_Object_array *objectList; // x26
  __int64 v29; // x8
  unsigned __int64 v30; // x27
  int max_length; // w8
  Il2CppObject *v32; // x25
  __int64 v33; // x23
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  int32_t v38; // w9
  int v39; // w8
  System_String_array *v40; // x0
  const MethodInfo *v41; // x4
  const MethodInfo *v42; // x1
  AssetData_o *v44; // [xsp+8h] [xbp-68h]

  if ( (byte_4BDB5F9 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    byte_4BDB5F9 = 1;
  }
  LOBYTE(v11) = 0;
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
        v15 = AssetData;
        assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleReleaseDic;
        if ( !assetBundleReleaseDic )
          goto LABEL_45;
        System_Collections_Generic_Dictionary_object__object___Remove(
          assetBundleReleaseDic,
          (Il2CppObject *)name,
          (const MethodInfo_3317B7C *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
        if ( v15->fields.objectList )
        {
          entryCount = v15->fields.entryCount;
          if ( (entryCount & 0x80000000) == 0 )
            v15->fields.entryCount = entryCount + 1;
          if ( callbackFunc )
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, AssetData_o *, _QWORD))callbackFunc->fields.m_target)(
              callbackFunc->fields.original_method_info,
              v15,
              *(_QWORD *)&callbackFunc->fields.extra_arg);
          goto LABEL_41;
        }
      }
      Status = AssetManager__AddEntryLoadStatus(this, 0, name, callbackFunc, v14);
      if ( Status )
      {
LABEL_41:
        LOBYTE(v11) = 1;
        return (char)v11;
      }
      v11 = AssetManager__GetAssetData((AssetManager_o *)Status, this->fields.assetBundleDic, name, v19);
      if ( v11 )
      {
        v20 = v11;
        v21 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v21,
          (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
        objectList = v20->fields.objectList;
        if ( objectList )
        {
          v29 = *(_QWORD *)&resourceNames->max_length;
          v44 = v20;
          if ( (int)v29 >= 1 )
          {
            v30 = 0LL;
            while ( 1 )
            {
              if ( v30 >= (unsigned int)v29 )
                goto LABEL_46;
              max_length = objectList->max_length;
              v32 = (Il2CppObject *)resourceNames->m_Items[v30];
              if ( max_length >= 1 )
                break;
LABEL_26:
              if ( !v21 )
                goto LABEL_45;
              items = v21->fields._items;
              v35 = Method_System_Collections_Generic_List_string__Add__;
              ++v21->fields._version;
              if ( !items )
                goto LABEL_45;
              size = v21->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v21,
                  v32,
                  *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
              }
              else
              {
                v37 = &items->obj.klass + size;
                v21->fields._size = size + 1;
                v37[4] = (Il2CppClass *)v32;
                sub_1C21DDC((PartyOrganizationUtility_o *)(v37 + 4), (int64_t)v32, v22, v23, v24, v25, v26, v27);
              }
LABEL_31:
              LODWORD(v29) = resourceNames->max_length;
              if ( (__int64)++v30 >= (int)v29 )
                goto LABEL_32;
            }
            v33 = 0LL;
            while ( (unsigned int)v33 < max_length )
            {
              assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)objectList->m_Items[v33];
              if ( !assetBundleReleaseDic )
                goto LABEL_45;
              assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_Object__get_name(
                                                                                                   (UnityEngine_Object_o *)assetBundleReleaseDic,
                                                                                                   0LL);
              if ( !v32 )
                goto LABEL_45;
              assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)System_String__Equals_63123792(
                                                                                                   (System_String_o *)v32,
                                                                                                   (System_String_o *)assetBundleReleaseDic,
                                                                                                   0LL);
              if ( ((unsigned __int8)assetBundleReleaseDic & 1) != 0 )
                goto LABEL_31;
              max_length = objectList->max_length;
              if ( (int)++v33 >= max_length )
                goto LABEL_26;
            }
LABEL_46:
            sub_1C2209C(assetBundleReleaseDic, v13);
          }
LABEL_32:
          v20 = v44;
          if ( !v21 )
LABEL_45:
            sub_1C22094(assetBundleReleaseDic, v13);
        }
        else
        {
          if ( !v21 )
            goto LABEL_45;
          System_Collections_Generic_List_object___AddRange(
            v21,
            (System_Collections_Generic_IEnumerable_T__o *)resourceNames,
            (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_string__AddRange__);
        }
        v38 = v20->fields.entryCount;
        v39 = v21->fields._size;
        if ( (v38 & 0x80000000) == 0 )
          v20->fields.entryCount = v38 + 1;
        if ( v39 < 1 )
        {
          if ( callbackFunc )
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, AssetData_o *, _QWORD))callbackFunc->fields.m_target)(
              callbackFunc->fields.original_method_info,
              v20,
              *(_QWORD *)&callbackFunc->fields.extra_arg);
        }
        else
        {
          v40 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                         v21,
                                         (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_string__ToArray__);
          AssetManager__AddLoadWaitStatus_39057596(this, v20, callbackFunc, v40, v41);
          this->fields.loadParallelMax = loadParallelMax;
          AssetManager__LoadStart(this, v42);
        }
        goto LABEL_41;
      }
    }
    else
    {
      LOBYTE(v11) = 0;
    }
  }
  return (char)v11;
}


bool __fastcall AssetManager__LoadStart(AssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  void *processingAssetLoaderList; // x0
  Il2CppObject *v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *downLoadWaitList; // x8
  struct System_Collections_Generic_List_AssetLoader__o *v15; // x8
  Il2CppObject *v16; // x0
  __int64 v17; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x22
  __int64 v25; // x8
  System_String_o **v26; // x8
  __int64 v27; // x8
  Il2CppObject *v28; // x0
  Il2CppObject **v29; // x22
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  __int64 v45; // x8
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x1
  const MethodInfo *v53; // x2
  AssetLoader_LoadEndDataHandler_o *v54; // x1
  __int64 v55; // x19
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BDB5F3 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__get_Current__);
    sub_1C21E38(&Method_UnityEngine_GameObject_AddComponent_AssetLoader___);
    sub_1C21E38(&Method_System_Collections_Generic_List_AssetLoader__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AssetLoader__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
    sub_1C21E38(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__);
    sub_1C21E38(&Method_AssetManager___c__DisplayClass148_0__LoadStart_b__0__);
    sub_1C21E38(&AssetManager___c__DisplayClass148_0_TypeInfo);
    sub_1C21E38(&StringLiteral_5372/*"DelayLoadStart"*/);
    byte_4BDB5F3 = 1;
  }
  memset(&v57, 0, sizeof(v57));
  v3 = sub_1C22084(AssetManager___c__DisplayClass148_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_49;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 16), (int64_t)this, v6, v7, v8, v9, v10, v11);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD7BC5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD7BC5 = 1;
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
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_AssetLoader__GetEnumerator__);
    v57 = v56;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v57,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_AssetLoader__MoveNext__) )
      ;
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v57,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_AssetLoader__Dispose__);
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
    (System_String_o *)StringLiteral_5372/*"DelayLoadStart"*/,
    0LL);
  processingAssetLoaderList = this->fields.downLoadWaitList;
  if ( !processingAssetLoaderList
    || (v16 = System_Collections_Generic_Queue_object___Dequeue(
                (System_Collections_Generic_Queue_T__o *)processingAssetLoaderList,
                (const MethodInfo_37C1578 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__),
        *(_QWORD *)(v3 + 24) = v16,
        v17 = v3 + 24,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 24), (int64_t)v16, v18, v19, v20, v21, v22, v23),
        (v24 = *(_QWORD *)(v3 + 24)) == 0) )
  {
LABEL_49:
    sub_1C22094(processingAssetLoaderList, v5);
  }
  if ( (byte_4BDB607 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDB607 = 1;
  }
  v25 = *(_QWORD *)(v24 + 16);
  if ( v25 )
    v26 = (System_String_o **)(v25 + 24);
  else
    v26 = (System_String_o **)&StringLiteral_1/*""*/;
  processingAssetLoaderList = (void *)System_String__IsNullOrEmpty(*v26, 0LL);
  if ( ((unsigned __int8)processingAssetLoaderList & 1) == 0 )
  {
    processingAssetLoaderList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( processingAssetLoaderList )
    {
      v28 = UnityEngine_GameObject__AddComponent_object_(
              (UnityEngine_GameObject_o *)processingAssetLoaderList,
              (const MethodInfo_300044C *)Method_UnityEngine_GameObject_AddComponent_AssetLoader___);
      *(_QWORD *)(v3 + 32) = v28;
      v29 = (Il2CppObject **)(v3 + 32);
      sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)v28, v30, v31, v32, v33, v34, v35);
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
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
          }
          else
          {
            v45 = v42 + 8 * v44;
            *((_DWORD *)processingAssetLoaderList + 6) = v44 + 1;
            *(_QWORD *)(v45 + 32) = v5;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v45 + 32), (int64_t)v5, v36, v37, v38, v39, v40, v41);
          }
          if ( *(_QWORD *)v17 )
          {
            processingAssetLoaderList = *v29;
            if ( *v29 )
            {
              v52 = *(_QWORD *)(*(_QWORD *)v17 + 16LL);
              *((_QWORD *)processingAssetLoaderList + 4) = v52;
              sub_1C21DDC(
                (PartyOrganizationUtility_o *)((char *)processingAssetLoaderList + 32),
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
                  v55 = sub_1C22084(System_Action_TypeInfo);
                  System_Action___ctor(
                    (System_Action_o *)v55,
                    (Il2CppObject *)v3,
                    Method_AssetManager___c__DisplayClass148_0__LoadStart_b__0__,
                    0LL);
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


void __fastcall AssetManager__OnClickRetryDialog(AssetManager_o *this, bool isDecide, const MethodInfo *method)
{
  ManagementManager_c *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4BDB5E7 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Application_TypeInfo);
    sub_1C21E38(&ManagementManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4BDB5E7 = 1;
  }
  if ( isDecide )
  {
    this->fields.isErrorDialog = 0;
  }
  else
  {
    if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    if ( !byte_4BDB610 )
    {
      sub_1C21E38(&ManagementManager_TypeInfo);
      byte_4BDB610 = 1;
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
      UnityEngine_Application__Quit_70662884(0LL);
    }
    else
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
      if ( !Instance )
        sub_1C22094(0LL, v7);
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
  _BOOL4 isRequestDownload; // w23
  int32_t v6; // w21
  Il2CppObject *Item; // x22
  struct AssetData_o *data; // x8

  v4 = this;
  if ( (byte_4BDB5F5 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_AssetLoader__RemoveAt__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    this = (AssetManager_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDB5F5 = 1;
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
             (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (AssetManager_o *)UnityEngine_Object__op_Equality(
                               (UnityEngine_Object_o *)Item,
                               (UnityEngine_Object_o *)loader,
                               0LL);
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
    sub_1C22094(this, loader);
  }
  System_Collections_Generic_List_object___RemoveAt(
    (System_Collections_Generic_List_object__o *)this,
    v6,
    (const MethodInfo_3650888 *)Method_System_Collections_Generic_List_AssetLoader__RemoveAt__);
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

  if ( (byte_4BDB5F6 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
    byte_4BDB5F6 = 1;
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
        sub_1C22094(0LL, v11);
      System_Collections_Generic_Dictionary_object__object___Remove(
        (System_Collections_Generic_Dictionary_object__object__o *)assetResourceDic,
        (Il2CppObject *)v9->fields.name,
        (const MethodInfo_3317B7C *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
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
  if ( (byte_4BDB5FE & 1) == 0 )
  {
    this = (AssetManager_o *)sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
    byte_4BDB5FE = 1;
  }
  AssetData = AssetManager__GetAssetData(this, v5->fields.assetResourceDic, name, v3);
  if ( AssetData && AssetData__RemoveEntry(AssetData, v7) )
  {
    assetResourceDic = (System_Collections_Generic_Dictionary_object__object__o *)v5->fields.assetResourceDic;
    if ( !assetResourceDic )
      sub_1C22094(0LL, v8);
    System_Collections_Generic_Dictionary_object__object___Remove(
      assetResourceDic,
      (Il2CppObject *)name,
      (const MethodInfo_3317B7C *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
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


void __fastcall AssetManager__ReleaseAssetStorage_39044024(
        AssetManager_o *this,
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v3; // x8
  unsigned __int64 v6; // x21

  if ( !nameList )
    sub_1C22094(this, 0LL);
  v3 = *(_QWORD *)&nameList->max_length;
  if ( (int)v3 >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v3 )
        sub_1C2209C(this, nameList);
      AssetManager__ReleaseAssetStorage(this, nameList->m_Items[v6], method);
      LODWORD(v3) = nameList->max_length;
      ++v6;
    }
    while ( (__int64)v6 < (int)v3 );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetManager__ReleaseAsset_39034756(
        AssetManager_o *this,
        int32_t type,
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v4; // x8
  unsigned __int64 v8; // x22

  if ( !nameList )
    sub_1C22094(this, type);
  v4 = *(_QWORD *)&nameList->max_length;
  if ( (int)v4 >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)v4 )
        sub_1C2209C(this, *(_QWORD *)&type);
      AssetManager__ReleaseAsset(this, type, nameList->m_Items[v8], method);
      LODWORD(v4) = nameList->max_length;
      ++v8;
    }
    while ( (__int64)v8 < (int)v4 );
  }
}


void __fastcall AssetManager__ReleaseAsset_39035056(
        AssetManager_o *this,
        AssetData_o *assetInfo,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( assetInfo )
    AssetManager__ReleaseAsset(this, assetInfo->fields.type, assetInfo->fields.name, v3);
}


void __fastcall AssetManager__ReleaseAsset_39035256(
        AssetManager_o *this,
        AssetData_array *assetInfoList,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v4; // x8
  unsigned __int64 v7; // x21
  AssetData_o *v8; // x8

  if ( !assetInfoList )
    sub_1C22094(this, 0LL);
  v4 = *(_QWORD *)&assetInfoList->max_length;
  if ( (int)v4 >= 1 )
  {
    v7 = 0LL;
    do
    {
      if ( v7 >= (unsigned int)v4 )
        sub_1C2209C(this, assetInfoList);
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

  v4 = this;
  if ( (byte_4BDB5F2 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
    this = (AssetManager_o *)sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__);
    byte_4BDB5F2 = 1;
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
            (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__) )
    {
      this = (AssetManager_o *)v4->fields.assetBundleReleaseDic;
      if ( this )
      {
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)this,
          (Il2CppObject *)info->fields.name,
          (Il2CppObject *)info,
          (const MethodInfo_3316680 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
        return;
      }
LABEL_11:
      sub_1C22094(this, info);
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
    UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
  }
}


void __fastcall AssetManager__ResetAssetStorageVersion(
        AssetManager_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__AssetData__o *assetBundleDic; // x8
  System_String_o *v8; // x19
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *currentValue; // x22
  System_String_o *monitor; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v13; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BDB5E3 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    sub_1C21E38(&StringLiteral_1123/*"/"*/);
    byte_4BDB5E3 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  Values = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)System_String__Concat_63115476(
                                                                                      path,
                                                                                      (System_String_o *)StringLiteral_1123/*"/"*/,
                                                                                      0LL);
  assetBundleDic = this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (v8 = (System_String_o *)Values,
        (Values = System_Collections_Generic_Dictionary_object__object___get_Values(
                    (System_Collections_Generic_Dictionary_object__object__o *)assetBundleDic,
                    (const MethodInfo_33164B0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL) )
  {
    sub_1C22094(Values, v6);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v13,
    Values,
    (const MethodInfo_3987B5C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v9 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v13,
           (const MethodInfo_3413764 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v9 )
      break;
    currentValue = v13.fields._currentValue;
    if ( !v13.fields._currentValue )
      sub_1C22094(v9, v10);
    monitor = (System_String_o *)v13.fields._currentValue[1].monitor;
    if ( !monitor )
      sub_1C22094(0LL, v10);
    if ( System_String__StartsWith(monitor, v8, 0LL) )
      LODWORD(currentValue[2].monitor) = 0;
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v13,
    (const MethodInfo_3413760 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
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
  ManagerConfig_c *v1; // x0
  AssetManager_c *v2; // x0

  if ( (byte_4BDB5A7 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&ManagerConfig_TypeInfo);
    byte_4BDB5A7 = 1;
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
    UnityEngine_PlayerPrefs__SetString(v2->static_fields->SAVE_KEY, v2->static_fields->SAVE_DATA_OFFLINE, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


bool __fastcall AssetManager__SetOnlineStatus(const MethodInfo *method)
{
  ManagerConfig_c *v1; // x0
  AssetManager_c *v2; // x0
  System_String_o *String; // x0
  AssetManager_c *v5; // x0

  if ( (byte_4BDB5A8 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&ManagerConfig_TypeInfo);
    byte_4BDB5A8 = 1;
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
  String = UnityEngine_PlayerPrefs__GetString(v2->static_fields->SAVE_KEY, v2->static_fields->SAVE_DATA_OFFLINE, 0LL);
  if ( System_String__op_Equality(String, AssetManager_TypeInfo->static_fields->SAVE_DATA_ONLINE, 0LL) )
    return 0;
  v5 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v5 = AssetManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(v5->static_fields->SAVE_KEY, v5->static_fields->SAVE_DATA_ONLINE, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
  return 1;
}


void __fastcall AssetManager__SetupAssetStorageAll(AssetManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *assetBundleDic; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BDB5DB & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    byte_4BDB5DB = 1;
  }
  memset(&v7, 0, sizeof(v7));
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      assetBundleDic,
                                                                                      (const MethodInfo_33164B0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
    sub_1C22094(assetBundleDic, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v7,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_3987B5C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v7,
           (const MethodInfo_3413764 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v4 )
      break;
    if ( !v7.fields._currentValue )
      sub_1C22094(v4, v5);
    if ( LODWORD(v7.fields._currentValue[2].monitor) != HIDWORD(v7.fields._currentValue[2].monitor) )
      AssetManager__AddLoadWaitStatus_39047232(this, (AssetData_o *)v7.fields._currentValue, v6);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v7,
    (const MethodInfo_3413760 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
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
  System_Threading_ThreadStart_o *v3; // x20
  System_Threading_Thread_o *v4; // x21
  struct System_Threading_Thread_o **p_writeRequestThread; // x19
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  __int64 v12; // x1

  if ( (byte_4BDB5E9 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetManager_ConfigWriteRequestThread__);
    sub_1C21E38(&System_Threading_ThreadStart_TypeInfo);
    sub_1C21E38(&System_Threading_Thread_TypeInfo);
    byte_4BDB5E9 = 1;
  }
  this->fields.reserveWriteRequest = 0;
  v3 = (System_Threading_ThreadStart_o *)sub_1C22084(System_Threading_ThreadStart_TypeInfo);
  System_Threading_ThreadStart___ctor(v3, (Il2CppObject *)this, Method_AssetManager_ConfigWriteRequestThread__, 0LL);
  v4 = (System_Threading_Thread_o *)sub_1C22084(System_Threading_Thread_TypeInfo);
  System_Threading_Thread___ctor(v4, v3, 0LL);
  this->fields.writeRequestThread = v4;
  p_writeRequestThread = &this->fields.writeRequestThread;
  sub_1C21DDC((PartyOrganizationUtility_o *)p_writeRequestThread, (int64_t)v4, v6, v7, v8, v9, v10, v11);
  if ( !*p_writeRequestThread )
    sub_1C22094(0LL, v12);
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
        const MethodInfo_2F92268 *method)
{
  AssetData_o *AssetStorage; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  Il2CppObject *Object_object__49880776; // x1
  Il2CppObject *v16; // x19

  if ( !method->rgctx_data )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C73D70(method);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0LL);
  if ( AssetStorage )
    Object_object__49880776 = AssetData__GetObject_object__49880776(
                                AssetStorage,
                                name,
                                (const MethodInfo_2F91EC8 *)method->rgctx_data->_2_AssetData_GetObject_T_);
  else
    Object_object__49880776 = 0LL;
  *data = Object_object__49880776;
  sub_1C21DDC((PartyOrganizationUtility_o *)data, (int64_t)Object_object__49880776, v9, v10, v11, v12, v13, v14);
  v16 = *data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL);
}


bool __fastcall AssetManager__TryGetUIAtlas(
        UIAtlas_o **atlas,
        System_String_o *name,
        System_String_o *atlasName,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v11; // x1
  AssetData_o *AssetStorage; // x0
  Il2CppObject *Object_object__49880776; // x20
  _BOOL8 v14; // x0
  __int64 v15; // x1
  Il2CppObject *Component_object; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  UnityEngine_Object_o *v23; // x19

  if ( (byte_4BDB5FF & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDB5FF = 1;
  }
  *atlas = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)atlas, 0LL, (int64_t)atlasName, (int32_t)method, v4, v5, v6, v7);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(name, v11);
  if ( AssetStorage )
    Object_object__49880776 = AssetData__GetObject_object__49880776(
                                AssetStorage,
                                atlasName,
                                (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  else
    Object_object__49880776 = 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49880776, 0LL, 0LL);
  if ( v14 )
  {
    if ( !Object_object__49880776 )
      sub_1C22094(v14, v15);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object_object__49880776,
                         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    *atlas = (UIAtlas_o *)Component_object;
    sub_1C21DDC((PartyOrganizationUtility_o *)atlas, (int64_t)Component_object, v17, v18, v19, v20, v21, v22);
  }
  v23 = (UnityEngine_Object_o *)*atlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(v23, 0LL, 0LL);
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
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDB5A5 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_TypeInfo);
    byte_4BDB5A5 = 1;
  }
  v3 = sub_1C22084(AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall AssetManager___DownloadAssetStorageAttributeWithCheckDialog_b__118_0(
        AssetManager_o *this,
        const MethodInfo *method)
{
  AssetManager_o *v2; // x19
  struct System_Collections_Generic_List_AssetLoader__o *processingAssetLoaderList; // x8

  v2 = this;
  if ( (byte_4BDB605 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_AssetLoader__get_Count__);
    sub_1C21E38(&SoundManager_TypeInfo);
    this = (AssetManager_o *)sub_1C21E38(&StringLiteral_9490/*"NOW_LOADING"*/);
    byte_4BDB605 = 1;
  }
  processingAssetLoaderList = v2->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
    sub_1C22094(this, method);
  if ( processingAssetLoaderList->fields._size >= 1 )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playBgm((System_String_o *)StringLiteral_9490/*"NOW_LOADING"*/, 0LL);
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

  if ( (byte_4BDB5A3 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_ResourceUnloadEventHandler_TypeInfo);
    byte_4BDB5A3 = 1;
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
    v9 = sub_1C5D328(p_unloadCallbacks, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C22354(v8);
  AssetManager__remove_unloadCallbacks(v11, v12, v13);
}


void __fastcall AssetManager__cancelDownloadAssetStorage(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4BDB5C6 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4BDB5C6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1C22094(v2, v3);
    AssetManager__CancelDownloadAssetStorage((AssetManager_o *)Instance, v3);
  }
}


System_Collections_IEnumerator_o *__fastcall AssetManager__coUnloadUnusedAssets(
        AssetManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BDB5EA & 1) == 0 )
  {
    sub_1C21E38(&AssetManager__coUnloadUnusedAssets_d__138_TypeInfo);
    byte_4BDB5EA = 1;
  }
  v3 = sub_1C22084(AssetManager__coUnloadUnusedAssets_d__138_TypeInfo);
  AssetManager__coUnloadUnusedAssets_d__138___ctor((AssetManager__coUnloadUnusedAssets_d__138_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1C22094(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
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
      return System_String__Equals_63123792(name1, name2, 0LL);
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
            list1 = (System_String_array *)System_String__Equals_63123792(
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
      sub_1C2209C(list1, list2);
    }
  }
  else if ( list2 )
  {
    return list2->max_length == 0;
  }
  return 1;
}


bool __fastcall AssetManager__compAssetStorageList_39032820(
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
              sub_1C22094(0LL, list);
            assetList = (AssetData_array *)System_String__Equals_63123792(name, (System_String_o *)list, 0LL);
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
      sub_1C2209C(assetList, list);
    }
  }
  else if ( list )
  {
    return list->max_length == 0;
  }
  return 1;
}


bool __fastcall AssetManager__compAssetStorage_39032548(
        AssetData_o *data,
        System_String_o *name,
        const MethodInfo *method)
{
  struct System_String_o *v3; // x0
  int32_t stringLength; // w8

  if ( data && (v3 = data->fields.name) != 0LL )
  {
    if ( name )
      return System_String__Equals_63123792(v3, name, 0LL);
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
  Il2CppObject *Instance; // x19
  _BOOL8 v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4BDB5AB & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4BDB5AB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1C22094(v2, v3);
    AssetManager__DebugLog((AssetManager_o *)Instance, v3);
  }
}


bool __fastcall AssetManager__downloadAssetStorage(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        int32_t maxParallelLoad,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_4BDB5C9 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4BDB5C9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v8 )
    return 0;
  if ( !Instance )
    sub_1C22094(v8, v9);
  return AssetManager__DownloadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, v10);
}


bool __fastcall AssetManager__downloadAssetStorage_39039328(
        System_String_array *nameList,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x4

  if ( (byte_4BDB5CA & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4BDB5CA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v6 )
    return 0;
  if ( !Instance )
    sub_1C22094(v6, v7);
  return AssetManager__DownloadAssetStorage_39039520((AssetManager_o *)Instance, nameList, callbackFunc, 1, v8);
}


AssetData_o *__fastcall AssetManager__getAsset(int32_t type, System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4BDB5B8 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4BDB5B8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v6 )
    return 0LL;
  if ( !Instance )
    sub_1C22094(v6, v7);
  return AssetManager__GetAsset((AssetManager_o *)Instance, type, name, v8);
}


AssetData_o *__fastcall AssetManager__getAssetResource(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  bool v6; // w8
  AssetData_o *result; // x0

  if ( (byte_4BDB5D6 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4BDB5D6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  result = 0LL;
  if ( !v6 )
  {
    if ( !Instance )
      sub_1C22094(0LL, v4);
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
  Il2CppObject *Instance; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  bool v6; // w8
  AssetData_o *result; // x0

  if ( (byte_4BDB5CF & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4BDB5CF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  result = 0LL;
  if ( !v6 )
  {
    if ( !Instance )
      sub_1C22094(0LL, v4);
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
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3

  if ( (byte_4BDB5D0 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4BDB5D0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v4 )
    return 0LL;
  if ( !Instance )
    sub_1C22094(v4, v5);
  return AssetManager__GetAssetData(
           (AssetManager_o *)v4,
           (System_Collections_Generic_Dictionary_string__AssetData__o *)Instance[4].klass,
           name,
           v6);
}


System_String_array *__fastcall AssetManager__getAssetStorageList(System_String_o *path, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4BDB5C4 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4BDB5C4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v4 )
    return 0LL;
  if ( !Instance )
    sub_1C22094(v4, v5);
  return AssetManager__GetAssetStorageList((AssetManager_o *)Instance, path, v6);
}


AssetData_array *__fastcall AssetManager__getAssetStorage_39042880(
        System_String_array *nameList,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4BDB5D1 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4BDB5D1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v4 )
    return 0LL;
  if ( !Instance )
    sub_1C22094(v4, v5);
  return AssetManager__GetAssetStorage_39043060((AssetManager_o *)Instance, nameList, v6);
}


bool __fastcall AssetManager__getAssetStorage_39043328(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4BDB5D2 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4BDB5D2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v6 )
    return 0;
  if ( !Instance )
    sub_1C22094(v6, v7);
  return AssetManager__GetAssetStorage_39043516((AssetManager_o *)Instance, name, callbackFunc, v8);
}


bool __fastcall AssetManager__getAsset_39033576(
        int32_t type,
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_4BDB5B9 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4BDB5B9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v8 )
    return 0;
  if ( !Instance )
    sub_1C22094(v8, v9);
  return AssetManager__GetAsset_39033784((AssetManager_o *)Instance, type, name, callbackFunc, v10);
}


bool __fastcall AssetManager__getAsset_39033884(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4BDB5BA & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4BDB5BA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v6 )
    return 0;
  if ( !Instance )
    sub_1C22094(v6, v7);
  return AssetManager__GetAsset_39034072((AssetManager_o *)Instance, name, callbackFunc, v8);
}


int64_t __fastcall AssetManager__getDownloadSize(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4BDB5BF & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4BDB5BF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v2 )
    return 0LL;
  if ( !Instance )
    sub_1C22094(v2, v3);
  return AssetManager__GetDownloadSize((AssetManager_o *)Instance, v3);
}


System_String_o *__fastcall AssetManager__getShaName(System_String_o *name, const MethodInfo *method)
{
  System_Security_Cryptography_SHA1CryptoServiceProvider_o *v3; // x21
  System_Text_UTF8Encoding_o *v4; // x20
  System_Text_StringBuilder_o *appended; // x0
  __int64 v6; // x1
  System_Byte_array *v7; // x20
  System_Text_StringBuilder_o *v8; // x19
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x8
  unsigned __int64 v13; // x21
  int v15; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BDB5B5 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo);
    sub_1C21E38(&System_Text_StringBuilder_TypeInfo);
    sub_1C21E38(&System_Text_UTF8Encoding_TypeInfo);
    sub_1C21E38(&StringLiteral_25368/*"{0,0:x2}"*/);
    sub_1C21E38(&StringLiteral_1080/*".bin"*/);
    byte_4BDB5B5 = 1;
  }
  v3 = (System_Security_Cryptography_SHA1CryptoServiceProvider_o *)sub_1C22084(System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo);
  System_Security_Cryptography_SHA1CryptoServiceProvider___ctor(v3, 0LL);
  v4 = (System_Text_UTF8Encoding_o *)sub_1C22084(System_Text_UTF8Encoding_TypeInfo);
  System_Text_UTF8Encoding___ctor(v4, 0LL);
  if ( !v4 )
    goto LABEL_13;
  appended = (System_Text_StringBuilder_o *)((__int64 (__fastcall *)(System_Text_UTF8Encoding_o *, System_String_o *, Il2CppMethodPointer))v4->klass->vtable._19_GetBytes.method)(
                                              v4,
                                              name,
                                              v4->klass->vtable._20_GetBytes.methodPtr);
  if ( !v3 )
    goto LABEL_13;
  v7 = System_Security_Cryptography_HashAlgorithm__ComputeHash(
         (System_Security_Cryptography_HashAlgorithm_o *)v3,
         (System_Byte_array *)appended,
         0LL);
  v8 = (System_Text_StringBuilder_o *)sub_1C22084(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v8, 0LL);
  System_Security_Cryptography_HashAlgorithm__Clear((System_Security_Cryptography_HashAlgorithm_o *)v3, 0LL);
  if ( !v7 )
    goto LABEL_13;
  v12 = *(_QWORD *)&v7->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)v12 )
        sub_1C2209C(appended, v6);
      v15 = v7->m_Items[v13 + 4] ^ 0xAA;
      appended = (System_Text_StringBuilder_o *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v9, v10, v11);
      if ( !v8 )
        break;
      appended = System_Text_StringBuilder__AppendFormat(
                   v8,
                   (System_String_o *)StringLiteral_25368/*"{0,0:x2}"*/,
                   (Il2CppObject *)appended,
                   0LL);
      LODWORD(v12) = v7->max_length;
      if ( (__int64)++v13 >= (int)v12 )
        goto LABEL_11;
    }
LABEL_13:
    sub_1C22094(appended, v6);
  }
LABEL_11:
  if ( !v8 )
    goto LABEL_13;
  System_Text_StringBuilder__Append_62276628(v8, (System_String_o *)StringLiteral_1080/*".bin"*/, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v8->klass->vtable._3_ToString.method)(
                              v8,
                              v8->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


System_String_o *__fastcall AssetManager__getUrlString(System_String_o *url, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  NetworkManager_c *v4; // x0
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  int64_t v8; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BDB5B4 & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_1889/*"?t="*/);
    sub_1C21E38(&StringLiteral_21285/*"jar:"*/);
    byte_4BDB5B4 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !url )
    sub_1C22094(v3, method);
  if ( !System_String__StartsWith(url, NetworkManager_TypeInfo->static_fields->FILE_URL_SCHEME, 0LL) )
  {
    v4 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v4 = NetworkManager_TypeInfo;
    }
    v5 = System_String__Concat_63115476((System_String_o *)StringLiteral_21285/*"jar:"*/, v4->static_fields->FILE_URL_SCHEME, 0LL);
    if ( !System_String__StartsWith(url, v5, 0LL) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v8 = NetworkManager__getTime(0LL) / 300;
      v6 = System_Int64__ToString((int64_t)&v8, 0LL);
      return System_String__Concat_63126736(url, (System_String_o *)StringLiteral_1889/*"?t="*/, v6, 0LL);
    }
  }
  return url;
}


System_String_o *__fastcall AssetManager__getUrlString_39005812(AssetData_o *data, const MethodInfo *method)
{
  AssetManager_c *v3; // x0
  char *DataServerAddress; // x0
  const MethodInfo *v5; // x1
  System_String_o *v6; // x20
  System_String_o *DownloadName; // x0
  System_String_o *v8; // x21
  NetworkManager_c *v9; // x0
  System_String_o *v10; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  char *v17; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct System_String_o *assetBundleDateVersion; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x1
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t v65; // x1
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  __int64 v73; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BDB5B6 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_16399/*"_"*/);
    sub_1C21E38(&StringLiteral_21285/*"jar:"*/);
    sub_1C21E38(&StringLiteral_1890/*"?v="*/);
    byte_4BDB5B6 = 1;
  }
  v3 = AssetManager_TypeInfo;
  v73 = 0LL;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  DataServerAddress = (char *)AssetManager__get_DataServerAddress((const MethodInfo *)v3);
  if ( !data )
    goto LABEL_27;
  v6 = (System_String_o *)DataServerAddress;
  DownloadName = AssetData__get_DownloadName(data, v5);
  DataServerAddress = (char *)System_String__Concat_63115476(v6, DownloadName, 0LL);
  v8 = (System_String_o *)DataServerAddress;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !v8 )
    goto LABEL_27;
  if ( !System_String__StartsWith(v8, NetworkManager_TypeInfo->static_fields->FILE_URL_SCHEME, 0LL) )
  {
    v9 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v9 = NetworkManager_TypeInfo;
    }
    v10 = System_String__Concat_63115476(
            (System_String_o *)StringLiteral_21285/*"jar:"*/,
            v9->static_fields->FILE_URL_SCHEME,
            0LL);
    if ( !System_String__StartsWith(v8, v10, 0LL) )
    {
      DataServerAddress = (char *)sub_1C21EE0(string___TypeInfo, 9LL);
      if ( DataServerAddress )
      {
        v17 = DataServerAddress;
        if ( !*((_DWORD *)DataServerAddress + 6) )
          goto LABEL_28;
        *((_QWORD *)DataServerAddress + 4) = v8;
        sub_1C21DDC((PartyOrganizationUtility_o *)(DataServerAddress + 32), (int64_t)v8, v11, v12, v13, v14, v15, v16);
        if ( *((_DWORD *)v17 + 6) <= 1u )
          goto LABEL_28;
        v24 = StringLiteral_1890/*"?v="*/;
        *((_QWORD *)v17 + 5) = StringLiteral_1890/*"?v="*/;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v17 + 40), v24, v18, v19, v20, v21, v22, v23);
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
        sub_1C21DDC((PartyOrganizationUtility_o *)(v17 + 48), v31, v25, v26, v27, v28, v29, v30);
        if ( *((_DWORD *)v17 + 6) <= 3u )
          goto LABEL_28;
        v38 = StringLiteral_16399/*"_"*/;
        *((_QWORD *)v17 + 7) = StringLiteral_16399/*"_"*/;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v17 + 56), v38, v32, v33, v34, v35, v36, v37);
        if ( *((_DWORD *)v17 + 6) <= 4u )
          goto LABEL_28;
        assetBundleDateVersion = AssetManager_TypeInfo->static_fields->assetBundleDateVersion;
        *((_QWORD *)v17 + 8) = assetBundleDateVersion;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)(v17 + 64),
          (int64_t)assetBundleDateVersion,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
        if ( *((_DWORD *)v17 + 6) <= 5u )
          goto LABEL_28;
        v52 = StringLiteral_16399/*"_"*/;
        *((_QWORD *)v17 + 9) = StringLiteral_16399/*"_"*/;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v17 + 72), v52, v46, v47, v48, v49, v50, v51);
        HIDWORD(v73) = data->fields.size;
        DataServerAddress = (char *)System_Int32__ToString((int32_t)&v73 + 4, 0LL);
        if ( *((_DWORD *)v17 + 6) <= 6u
          || (*((_QWORD *)v17 + 10) = DataServerAddress,
              sub_1C21DDC(
                (PartyOrganizationUtility_o *)(v17 + 80),
                (int64_t)DataServerAddress,
                v53,
                v54,
                v55,
                v56,
                v57,
                v58),
              *((_DWORD *)v17 + 6) <= 7u)
          || (v65 = StringLiteral_16399/*"_"*/,
              *((_QWORD *)v17 + 11) = StringLiteral_16399/*"_"*/,
              sub_1C21DDC((PartyOrganizationUtility_o *)(v17 + 88), v65, v59, v60, v61, v62, v63, v64),
              LODWORD(v73) = data->fields.crc,
              DataServerAddress = (char *)System_UInt32__ToString((uint32_t)&v73, 0LL),
              *((_DWORD *)v17 + 6) <= 8u) )
        {
LABEL_28:
          sub_1C2209C(DataServerAddress, v5);
        }
        *((_QWORD *)v17 + 12) = DataServerAddress;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v17 + 96), (int64_t)DataServerAddress, v66, v67, v68, v69, v70, v71);
        return System_String__Concat_63129004((System_String_array *)v17, 0LL);
      }
LABEL_27:
      sub_1C22094(DataServerAddress, v5);
    }
  }
  return v8;
}


System_String_o *__fastcall AssetManager__get_CacheListFile(const MethodInfo *method)
{
  System_String_o *Path; // x0
  AssetManager_c *v2; // x8
  System_String_o *v3; // x19

  if ( (byte_4BDB5AF & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    byte_4BDB5AF = 1;
  }
  Path = AssetStorageCache__GetPath(0LL);
  v2 = AssetManager_TypeInfo;
  v3 = Path;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v2 = AssetManager_TypeInfo;
  }
  return System_String__Concat_63115476(v3, v2->static_fields->configFileName, 0LL);
}


System_String_o *__fastcall AssetManager__get_CachePathName(const MethodInfo *method)
{
  AssetManager_c *v1; // x0

  if ( (byte_4BDB5AD & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    byte_4BDB5AD = 1;
  }
  v1 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v1 = AssetManager_TypeInfo;
  }
  return v1->static_fields->cachePathName;
}


System_String_o *__fastcall AssetManager__get_ConfigFileAddress(const MethodInfo *method)
{
  AssetManager_c *v1; // x0
  System_String_o *DataServerAddress; // x0

  if ( (byte_4BDB5AE & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    byte_4BDB5AE = 1;
  }
  v1 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  DataServerAddress = AssetManager__get_DataServerAddress((const MethodInfo *)v1);
  return System_String__Concat_63115476(DataServerAddress, AssetManager_TypeInfo->static_fields->configFileName, 0LL);
}


System_String_o *__fastcall AssetManager__get_DataServerAddress(const MethodInfo *method)
{
  NetworkManager_c *v1; // x0

  if ( (byte_4BDB5AC & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDB5AC = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BDB612 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDB612 = 1;
  }
  v1 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v1 = NetworkManager_TypeInfo;
  }
  return v1->static_fields->dataServerAddress;
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
  ManagerConfig_c *v1; // x0
  AssetManager_c *v3; // x0
  System_String_o *String; // x0

  if ( (byte_4BDB5A6 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&ManagerConfig_TypeInfo);
    byte_4BDB5A6 = 1;
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
  String = UnityEngine_PlayerPrefs__GetString(v3->static_fields->SAVE_KEY, v3->static_fields->SAVE_DATA_OFFLINE, 0LL);
  return System_String__op_Equality(String, AssetManager_TypeInfo->static_fields->SAVE_DATA_ONLINE, 0LL);
}


bool __fastcall AssetManager__isDownloadAssetStorageCheck(
        AssetManager_o *this,
        System_String_o *attrib,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *assetBundleDic; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *currentValue; // x22
  int monitor; // w8
  char v10; // w19
  int v11; // w21
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v13; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BDB5DC & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    byte_4BDB5DC = 1;
  }
  memset(&v13, 0, sizeof(v13));
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      assetBundleDic,
                                                                                      (const MethodInfo_33164B0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
    sub_1C22094(assetBundleDic, attrib);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v13,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_3987B5C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v13,
           (const MethodInfo_3413764 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v6 )
      break;
    currentValue = v13.fields._currentValue;
    if ( !v13.fields._currentValue )
      sub_1C22094(v6, v7);
    monitor = (int)v13.fields._currentValue[2].monitor;
    if ( monitor >= 1 && monitor != HIDWORD(v13.fields._currentValue[2].monitor)
      || System_String__op_Equality(attrib, (System_String_o *)v13.fields._currentValue[2].klass, 0LL)
      && LODWORD(currentValue[2].monitor) != HIDWORD(currentValue[2].monitor) )
    {
      v10 = 1;
      v11 = 5;
      goto LABEL_14;
    }
  }
  v10 = 0;
  v11 = 6;
LABEL_14:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v13,
    (const MethodInfo_3413760 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  return v10 & (v11 == 5);
}


bool __fastcall AssetManager__isExistAssetStorage(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4BDB5C0 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4BDB5C0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_1C22094(v4, v5);
  return AssetManager__IsExistAssetStorage((AssetManager_o *)Instance, name, v6);
}


bool __fastcall AssetManager__isExistAssetStorage_39035784(System_String_array *nameList, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4BDB5C1 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4BDB5C1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_1C22094(v4, v5);
  return AssetManager__IsExistAssetStorage_39035964((AssetManager_o *)Instance, nameList, v6);
}


bool __fastcall AssetManager__isNeedDownload(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  AssetData_o *AssetData; // x0

  if ( (byte_4BDB5C2 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4BDB5C2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v4 )
  {
    LOBYTE(AssetData) = 0;
  }
  else
  {
    if ( !Instance )
      sub_1C22094(v4, v5);
    AssetData = AssetManager__GetAssetData(
                  (AssetManager_o *)v4,
                  (System_Collections_Generic_Dictionary_string__AssetData__o *)Instance[4].klass,
                  name,
                  v6);
    if ( AssetData )
      LOBYTE(AssetData) = AssetData->fields.nowVersion != AssetData->fields.newVersion;
  }
  return (char)AssetData;
}


bool __fastcall AssetManager__isNeedDownload_39036332(System_String_array *nameList, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4BDB5C3 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4BDB5C3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v4 )
    return 0;
  if ( !Instance )
    sub_1C22094(v4, v5);
  return AssetManager__IsNeedDownload_39036512((AssetManager_o *)Instance, nameList, v6);
}


bool __fastcall AssetManager__loadAsset(
        int32_t type,
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_4BDB5B7 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4BDB5B7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v8 )
    return 0;
  if ( !Instance )
    sub_1C22094(v8, v9);
  return AssetManager__LoadAsset((AssetManager_o *)Instance, type, name, callbackFunc, v10);
}


AssetData_o *__fastcall AssetManager__loadAssetResource(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4BDB5D5 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4BDB5D5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v4 )
    return 0LL;
  if ( !Instance )
    sub_1C22094(v4, v5);
  return AssetManager__LoadAssetResource((AssetManager_o *)Instance, name, v6);
}


bool __fastcall AssetManager__loadAssetStorage(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        int32_t maxParallelLoad,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_4BDB5CB & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4BDB5CB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v8 )
    return 0;
  if ( !Instance )
    sub_1C22094(v8, v9);
  return AssetManager__LoadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, v10);
}


bool __fastcall AssetManager__loadAssetStorage_39041296(
        System_String_o *name,
        int32_t maxParallelLoad,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_4BDB5CD & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4BDB5CD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v8 )
    return 0;
  if ( !Instance )
    sub_1C22094(v8, v9);
  return AssetManager__LoadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, v10);
}


bool __fastcall AssetManager__loadAssetStorage_39041504(
        System_String_array *nameList,
        System_Action_o *callbackFunc,
        int32_t loadParalleMax,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4

  if ( (byte_4BDB5CE & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4BDB5CE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v8 )
    return 0;
  if ( !Instance )
    sub_1C22094(v8, v9);
  return AssetManager__LoadAssetStorage_39041712(
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
  Il2CppObject *Instance; // x23
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x5

  if ( (byte_4BDB5CC & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4BDB5CC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v10 )
    return 0;
  if ( !Instance )
    sub_1C22094(v10, v11);
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
  Il2CppObject *Instance; // x19
  _BOOL8 v2; // x0
  __int64 v3; // x1

  if ( (byte_4BDB5C7 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4BDB5C7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1C22094(v2, v3);
    if ( !BYTE1(Instance[7].monitor) )
      BYTE1(Instance[7].monitor) = 1;
  }
}


void __fastcall AssetManager__releaseAsset(int32_t type, System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4BDB5BB & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4BDB5BB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !Instance )
      sub_1C22094(v6, v7);
    AssetManager__ReleaseAsset((AssetManager_o *)Instance, type, name, v8);
  }
}


void __fastcall AssetManager__releaseAssetResource(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4BDB5D7 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4BDB5D7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C22094(v4, v5);
    AssetManager__ReleaseAssetResource((AssetManager_o *)Instance, name, v6);
  }
}


void __fastcall AssetManager__releaseAssetStorage(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4BDB5D3 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4BDB5D3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C22094(v4, v5);
    AssetManager__ReleaseAssetStorage((AssetManager_o *)Instance, name, v6);
  }
}


void __fastcall AssetManager__releaseAssetStorage_39043848(System_String_array *nameList, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4BDB5D4 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4BDB5D4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C22094(v4, v5);
    AssetManager__ReleaseAssetStorage_39044024((AssetManager_o *)Instance, nameList, v6);
  }
}


void __fastcall AssetManager__releaseAsset_39034572(
        int32_t type,
        System_String_array *nameList,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4BDB5BC & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4BDB5BC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !Instance )
      sub_1C22094(v6, v7);
    AssetManager__ReleaseAsset_39034756((AssetManager_o *)Instance, type, nameList, v8);
  }
}


void __fastcall AssetManager__releaseAsset_39034872(AssetData_o *assetInfo, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3

  if ( (byte_4BDB5BD & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4BDB5BD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C22094(v4, v5);
    if ( assetInfo )
      AssetManager__ReleaseAsset((AssetManager_o *)Instance, assetInfo->fields.type, assetInfo->fields.name, v6);
  }
}


void __fastcall AssetManager__releaseAsset_39035080(AssetData_array *assetInfoList, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4BDB5BE & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4BDB5BE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C22094(v4, v5);
    AssetManager__ReleaseAsset_39035256((AssetManager_o *)Instance, assetInfoList, v6);
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

  if ( (byte_4BDB5A4 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_ResourceUnloadEventHandler_TypeInfo);
    byte_4BDB5A4 = 1;
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
    v9 = sub_1C5D328(p_unloadCallbacks, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C22354(v8);
  AssetManager__WaitForExecutionUnloadUnuseAssets(v11, v12);
}


void __fastcall AssetManager__resetAssetStorageVersion(System_String_o *path, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4BDB5C5 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4BDB5C5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v4 )
  {
    if ( !Instance )
      sub_1C22094(v4, v5);
    AssetManager__ResetAssetStorageVersion((AssetManager_o *)Instance, path, v6);
  }
}


void __fastcall AssetManager__resumeDownloadAssetStorage(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v2; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4BDB5C8 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4BDB5C8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v2 )
  {
    if ( !Instance )
      sub_1C22094(v2, v3);
    if ( BYTE1(Instance[7].monitor) )
    {
      BYTE1(Instance[7].monitor) = 0;
      AssetManager__LoadStart((AssetManager_o *)Instance, v3);
    }
  }
}


void __fastcall AssetManager__setDebugStatusOut(AssetManager_o *this, bool isUse, const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4BDB5AA & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4BDB5AA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !Instance && !v4 )
    sub_1C22094(v4, v5);
}


void __fastcall AssetManager_LoadWaitStatus___ctor(
        AssetManager_LoadWaitStatus_o *this,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.callbackFunc = callbackFunc;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callbackFunc, v5, v6, v7, v8, v9, v10);
}


void __fastcall AssetManager_LoadWaitStatus___ctor_39057548(
        AssetManager_LoadWaitStatus_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.data = data;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)data, v5, v6, v7, v8, v9, v10);
}


void __fastcall AssetManager_LoadWaitStatus___ctor_39057768(
        AssetManager_LoadWaitStatus_o *this,
        AssetData_o *data,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        System_String_array *resourceNames,
        const MethodInfo *method)
{
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.data = data;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)data, v9, v10, v11, v12, v13, v14);
  this->fields.callbackFunc2 = callbackFunc;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc2,
    (int64_t)callbackFunc,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.resourceNames = resourceNames;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.resourceNames,
    (int64_t)resourceNames,
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
  PartyOrganizationUtility_o *p_callbackFunc2; // x19
  System_Delegate_o *callbackFunc2; // t1
  System_Delegate_o *v7; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x8
  AssetLoader_LoadEndDataHandler_c *v15; // x1

  if ( (byte_4BDB606 & 1) == 0 )
  {
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4BDB606 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = (PartyOrganizationUtility_o *)&this->fields.callbackFunc2;
  v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)callbackFunc, 0LL);
  v14 = (int64_t)v7;
  if ( !v7 )
    goto LABEL_7;
  v15 = AssetLoader_LoadEndDataHandler_TypeInfo;
  if ( (AssetLoader_LoadEndDataHandler_c *)v7->klass != AssetLoader_LoadEndDataHandler_TypeInfo
    || (p_callbackFunc2->klass = (PartyOrganizationUtility_c *)v7, (AssetLoader_LoadEndDataHandler_c *)v7->klass != v15) )
  {
    sub_1C22354(v7);
LABEL_7:
    p_callbackFunc2->klass = (PartyOrganizationUtility_c *)v14;
  }
  sub_1C21DDC(p_callbackFunc2, v14, v8, v9, v10, v11, v12, v13);
}


void __fastcall AssetManager_LoadWaitStatus__AddEntry(AssetManager_LoadWaitStatus_o *this, const MethodInfo *method)
{
  struct AssetData_o *data; // x8
  int32_t entryCount; // w9

  data = this->fields.data;
  if ( !data )
    sub_1C22094(this, method);
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
    LOBYTE(data) = AssetData__IsSame_39008676(data, type, name, method);
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

  if ( (byte_4BDB607 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDB607 = 1;
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C21EF8(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C220B0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C21F60(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A62CBC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A62C7C;
}


System_IAsyncResult_o *__fastcall AssetManager_ResourceUnloadEventHandler__BeginInvoke(
        AssetManager_ResourceUnloadEventHandler_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1C21DEC(this, &v5, callback, object);
}


void __fastcall AssetManager_ResourceUnloadEventHandler__EndInvoke(
        AssetManager_ResourceUnloadEventHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C21DF0(result, 0LL, method);
}


void __fastcall AssetManager_ResourceUnloadEventHandler__Invoke(
        AssetManager_ResourceUnloadEventHandler_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall AssetManager__AssetObjectListSetupAndCall_d__184___ctor(
        AssetManager__AssetObjectListSetupAndCall_d__184_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AssetManager__AssetObjectListSetupAndCall_d__184__MoveNext(
        AssetManager__AssetObjectListSetupAndCall_d__184_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct AssetData_o *asset; // x1
  System_Func_bool__o *v14; // x21
  UnityEngine_WaitUntil_o *v15; // x20
  Il2CppObject **p__2__current; // x19
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  bool result; // w0
  System_Action_o *action; // x0

  if ( (byte_4BDB60B & 1) == 0 )
  {
    sub_1C21E38(&System_Func_bool__TypeInfo);
    sub_1C21E38(&Method_AssetManager___c__DisplayClass184_0__AssetObjectListSetupAndCall_b__0__);
    sub_1C21E38(&AssetManager___c__DisplayClass184_0_TypeInfo);
    sub_1C21E38(&UnityEngine_WaitUntil_TypeInfo);
    byte_4BDB60B = 1;
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
  v4 = sub_1C22084(AssetManager___c__DisplayClass184_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    sub_1C22094(v5, v6);
  asset = this->fields.asset;
  *(_QWORD *)(v4 + 16) = asset;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 16), (int64_t)asset, v7, v8, v9, v10, v11, v12);
  v14 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v14,
    (Il2CppObject *)v4,
    Method_AssetManager___c__DisplayClass184_0__AssetObjectListSetupAndCall_b__0__,
    0LL);
  v15 = (UnityEngine_WaitUntil_o *)sub_1C22084(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v15, v14, 0LL);
  this->fields.__2__current = (Il2CppObject *)v15;
  p__2__current = &this->fields.__2__current;
  sub_1C21DDC((PartyOrganizationUtility_o *)p__2__current, (int64_t)v15, v17, v18, v19, v20, v21, v22);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall AssetManager__AssetObjectListSetupAndCall_d__184__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AssetManager__AssetObjectListSetupAndCall_d__184_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AssetManager__AssetObjectListSetupAndCall_d__184__System_Collections_IEnumerator_Reset(
        AssetManager__AssetObjectListSetupAndCall_d__184_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_AssetManager__AssetObjectListSetupAndCall_d__184_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall AssetManager__AssetObjectListSetupAndCall_d__184__System_Collections_IEnumerator_get_Current(
        AssetManager__AssetObjectListSetupAndCall_d__184_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall AssetManager__AssetObjectListSetupAndCall_d__184__System_IDisposable_Dispose(
        AssetManager__AssetObjectListSetupAndCall_d__184_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall AssetManager__AssetObjectListSetupAndCall_d__185___ctor(
        AssetManager__AssetObjectListSetupAndCall_d__185_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AssetManager__AssetObjectListSetupAndCall_d__185__MoveNext(
        AssetManager__AssetObjectListSetupAndCall_d__185_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct AssetData_array *assetList; // x1
  System_Func_bool__o *v14; // x21
  UnityEngine_WaitUntil_o *v15; // x20
  Il2CppObject **p__2__current; // x19
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  bool result; // w0
  System_Action_o *action; // x0

  if ( (byte_4BDB60C & 1) == 0 )
  {
    sub_1C21E38(&System_Func_bool__TypeInfo);
    sub_1C21E38(&Method_AssetManager___c__DisplayClass185_0__AssetObjectListSetupAndCall_b__0__);
    sub_1C21E38(&AssetManager___c__DisplayClass185_0_TypeInfo);
    sub_1C21E38(&UnityEngine_WaitUntil_TypeInfo);
    byte_4BDB60C = 1;
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
  v4 = sub_1C22084(AssetManager___c__DisplayClass185_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    sub_1C22094(v5, v6);
  assetList = this->fields.assetList;
  *(_QWORD *)(v4 + 16) = assetList;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 16), (int64_t)assetList, v7, v8, v9, v10, v11, v12);
  v14 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v14,
    (Il2CppObject *)v4,
    Method_AssetManager___c__DisplayClass185_0__AssetObjectListSetupAndCall_b__0__,
    0LL);
  v15 = (UnityEngine_WaitUntil_o *)sub_1C22084(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v15, v14, 0LL);
  this->fields.__2__current = (Il2CppObject *)v15;
  p__2__current = &this->fields.__2__current;
  sub_1C21DDC((PartyOrganizationUtility_o *)p__2__current, (int64_t)v15, v17, v18, v19, v20, v21, v22);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall AssetManager__AssetObjectListSetupAndCall_d__185__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AssetManager__AssetObjectListSetupAndCall_d__185_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AssetManager__AssetObjectListSetupAndCall_d__185__System_Collections_IEnumerator_Reset(
        AssetManager__AssetObjectListSetupAndCall_d__185_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_AssetManager__AssetObjectListSetupAndCall_d__185_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall AssetManager__AssetObjectListSetupAndCall_d__185__System_Collections_IEnumerator_get_Current(
        AssetManager__AssetObjectListSetupAndCall_d__185_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall AssetManager__AssetObjectListSetupAndCall_d__185__System_IDisposable_Dispose(
        AssetManager__AssetObjectListSetupAndCall_d__185_o *this,
        const MethodInfo *method)
{
  ;
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
      sub_1C22094(0LL, method);
    AssetManager__LoadStart(_4__this, method);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__2__current, 0LL, v2, v3, v4, v5, v6, v7);
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_AssetManager__DelayLoadStart_d__149_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
  int32_t _1__state; // w8
  struct AssetManager_o *_4__this; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  AssetData_o *currentValue; // x21
  int monitor; // w8
  const MethodInfo *v10; // x2
  _BOOL4 isDispLogo_5__2; // w8
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *downLoadWaitList; // x8
  Il2CppObject *v13; // x22
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_String_o *v20; // x22
  const MethodInfo *v21; // x1
  System_String_o *v22; // x23
  AssetManager_o *DownloadSize; // x0
  const MethodInfo *v24; // x1
  Il2CppObject *v25; // x0
  System_String_o *v26; // x23
  Il2CppObject *Instance; // x0
  Il2CppObject *v28; // x25
  CommonUI_o *v29; // x21
  ErrorDialog_ClickDelegate_o *v30; // x24
  struct AssetManager___c__DisplayClass118_0_o *_8__1; // x8
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  UnityEngine_WaitForEndOfFrame_o *v38; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  bool result; // w0
  Il2CppObject *v47; // x21
  System_Action_o *v48; // x22
  AvalonSceneManager_c *v49; // x0
  float DEFAULT_FADE_TIME; // s8
  UnityEngine_WaitForSeconds_o *v51; // x20
  PartyOrganizationUtility_o *v52; // x19
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v59; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v60; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_4BDB60D & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_b__118_0__);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_AssetManager___c__DisplayClass118_0__DownloadAssetStorageAttributeWithCheckDialog_b__1__);
    sub_1C21E38(&AssetManager___c__DisplayClass118_0_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    sub_1C21E38(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C21E38(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C21E38(&StringLiteral_25762/*"データ更新"*/);
    sub_1C21E38(&StringLiteral_9418/*"NETWORK_ERROR_DATA_UPDATE_TITLE"*/);
    sub_1C21E38(&StringLiteral_357/*" ゲームデータの更新を行います。\n\n{0}\n\n ※Wi-Fi接続での更新を推奨します。"*/);
    this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)sub_1C21E38(&StringLiteral_9416/*"NETWORK_ERROR_DATA_UPDATE_EXP"*/);
    byte_4BDB60D = 1;
  }
  memset(&v60, 0, sizeof(v60));
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    isDispLogo_5__2 = v2->fields._isDispLogo_5__2;
    v2->fields.__1__state = -1;
    if ( isDispLogo_5__2 )
    {
      this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      v38 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v38, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v38;
      p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
      sub_1C21DDC(p__2__current, (int64_t)v38, v40, v41, v42, v43, v44, v45);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    }
    this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this )
      goto LABEL_56;
    if ( CommonUI__isBusyDataUpdateDialog((CommonUI_o *)this, 0LL) )
      goto LABEL_45;
    v2->fields.__8__1 = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.__8__1, 0LL, v32, v33, v34, v35, v36, v37);
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
                                                                                  (const MethodInfo_33164B0 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !this )
    goto LABEL_56;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v59,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_3987B5C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v60 = v59;
  while ( 1 )
  {
    v5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v60,
           (const MethodInfo_3413764 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v5 )
      break;
    currentValue = (AssetData_o *)v60.fields._currentValue;
    if ( !v60.fields._currentValue )
      sub_1C22094(v5, v6);
    monitor = (int)v60.fields._currentValue[2].monitor;
    if ( monitor < 1 || monitor == HIDWORD(v60.fields._currentValue[2].monitor) )
    {
      if ( System_String__op_Equality(v2->fields.attrib, (System_String_o *)v60.fields._currentValue[2].klass, 0LL)
        && currentValue->fields.nowVersion != currentValue->fields.newVersion )
      {
        AssetManager__AddLoadWaitStatus_39047232(_4__this, currentValue, v10);
      }
    }
    else
    {
      AssetManager__AddLoadWaitStatus_39047232(_4__this, (AssetData_o *)v60.fields._currentValue, v7);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v60,
    (const MethodInfo_3413760 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  downLoadWaitList = _4__this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
LABEL_56:
    sub_1C22094(this, method);
  if ( downLoadWaitList->fields._size >= 1 )
  {
    v13 = (Il2CppObject *)sub_1C22084(AssetManager___c__DisplayClass118_0_TypeInfo);
    System_Object___ctor(v13, 0LL);
    v2->fields.__8__1 = (struct AssetManager___c__DisplayClass118_0_o *)v13;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.__8__1, (int64_t)v13, v14, v15, v16, v17, v18, v19);
    if ( !v2->fields.__8__1 )
      goto LABEL_56;
    v2->fields.__8__1->fields.isDataUpdate = 0;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( LocalizationManager__ContainsKey((System_String_o *)StringLiteral_9418/*"NETWORK_ERROR_DATA_UPDATE_TITLE"*/, 0LL) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v20 = LocalizationManager__Get((System_String_o *)StringLiteral_9418/*"NETWORK_ERROR_DATA_UPDATE_TITLE"*/, 0LL);
    }
    else
    {
      v20 = (System_String_o *)StringLiteral_25762/*"データ更新"*/;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( LocalizationManager__ContainsKey((System_String_o *)StringLiteral_9416/*"NETWORK_ERROR_DATA_UPDATE_EXP"*/, 0LL) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v22 = LocalizationManager__Get((System_String_o *)StringLiteral_9416/*"NETWORK_ERROR_DATA_UPDATE_EXP"*/, 0LL);
    }
    else
    {
      v22 = (System_String_o *)StringLiteral_357/*" ゲームデータの更新を行います。\n\n{0}\n\n ※Wi-Fi接続での更新を推奨します。"*/;
    }
    DownloadSize = (AssetManager_o *)AssetManager__GetDownloadSize(_4__this, v21);
    v25 = (Il2CppObject *)AssetManager__ConvertDownloadSizeToString(DownloadSize, (double)(__int64)DownloadSize, v24);
    v26 = System_String__Format(v22, v25, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v28 = (Il2CppObject *)v2->fields.__8__1;
    v29 = (CommonUI_o *)Instance;
    v30 = (ErrorDialog_ClickDelegate_o *)sub_1C22084(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(
      v30,
      v28,
      Method_AssetManager___c__DisplayClass118_0__DownloadAssetStorageAttributeWithCheckDialog_b__1__,
      0LL);
    if ( !v29 )
      goto LABEL_56;
    CommonUI__OpenDataUpdateDialog(v29, v20, v26, v30, 0, 0LL);
    goto LABEL_41;
  }
LABEL_47:
  v2->fields._isDispLogo_5__2 = 0;
  v47 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v48 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v48,
    (Il2CppObject *)_4__this,
    Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_b__118_0__,
    0LL);
  if ( !v47 )
    goto LABEL_56;
  this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)CommonUI__PlayLogo(
                                                                                  (CommonUI_o *)v47,
                                                                                  v48,
                                                                                  0LL);
  v2->fields._isDispLogo_5__2 = (unsigned __int8)this & 1;
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_52;
  v49 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v49 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v49->static_fields->DEFAULT_FADE_TIME;
  v51 = (UnityEngine_WaitForSeconds_o *)sub_1C22084(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v51, DEFAULT_FADE_TIME, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v51;
  v52 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
  sub_1C21DDC(v52, (int64_t)v51, v53, v54, v55, v56, v57, v58);
  *(_DWORD *)&v52[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  AssetManager__InitCR_d__131_o *v8; // x19
  struct AssetManager_o *_4__this; // x20
  AssetManager_c *v10; // x0
  AssetManager_c *v11; // x0
  AssetManager_c *v12; // x0
  AssetManager_c *v13; // x0
  System_String_o *AllText; // x21
  System_String_o *v15; // x0
  UnityEngine_WaitForEndOfFrame_o *v16; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  bool result; // w0
  System_String_o *v25; // x21
  System_Char_array *v26; // x0
  System_String_o *v27; // x21
  System_Char_array *v28; // x0
  il2cpp_array_size_t max_length; // w8
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
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
  System_Char_array *v47; // x0
  il2cpp_array_size_t v48; // w8
  AssetManager__InitCR_d__131_o *v49; // x25
  Il2CppObject *_2__current; // x8
  AssetManager__InitCR_d__131_o *v51; // x22
  System_String_o *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  AssetManager_c *v59; // x8
  int64_t v60; // x23
  struct AssetManager_StaticFields *v61; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  AssetManager_c *v68; // x0
  int64_t *p_configFileUrl_5__2; // x8
  int64_t v70; // x23
  struct AssetManager_StaticFields *v71; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  AssetManager_c *v78; // x0
  int64_t *p_loader_5__3; // x8
  int64_t v80; // x22
  struct AssetManager_StaticFields *v81; // x0
  int v82; // w8
  __int64 v83; // x21
  AssetManager__InitCR_d__131_o *v84; // x22
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
  void *v100; // x1
  void *v101; // x1
  struct AssetManager_StaticFields *v102; // x0
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  void *v109; // x1
  struct AssetManager_StaticFields *v110; // x0
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  ManagerConfig_c *v117; // x0
  struct ManagerConfig_StaticFields *v118; // x8
  Il2CppObject *Instance; // x22
  ErrorDialog_ClickDelegate_o *v120; // x23
  AssetManager_c *v121; // x0
  System_String_o *ConfigFileAddress; // x0
  int64_t v123; // x2
  int32_t v124; // w3
  System_String_o *v125; // x4
  BattleSetupInfo_o *v126; // x5
  FollowerInfo_o *v127; // x6
  PartyListViewItem_o *v128; // x7
  int64_t v129; // x2
  int32_t v130; // w3
  System_String_o *v131; // x4
  BattleSetupInfo_o *v132; // x5
  FollowerInfo_o *v133; // x6
  PartyListViewItem_o *v134; // x7
  System_String_o *v135; // x21
  System_String_o *UrlString; // x0
  UnityEngine_Networking_UnityWebRequest_o *v137; // x0
  int64_t v138; // x2
  int32_t v139; // w3
  System_String_o *v140; // x4
  BattleSetupInfo_o *v141; // x5
  FollowerInfo_o *v142; // x6
  PartyListViewItem_o *v143; // x7
  float unscaledTime; // s8
  ManagerConfig_c *v145; // x0
  float TIMEOUT; // s0
  UnityEngine_WaitForEndOfFrame_o *v147; // x21
  int64_t v148; // x2
  int32_t v149; // w3
  System_String_o *v150; // x4
  BattleSetupInfo_o *v151; // x5
  FollowerInfo_o *v152; // x6
  PartyListViewItem_o *v153; // x7
  AssetManager__InitCR_d__131_o **v154; // x21
  float downloadProgress; // s0
  float loadProgress_5__5; // s9
  float v157; // s8
  int64_t v158; // x2
  int32_t v159; // w3
  System_String_o *v160; // x4
  BattleSetupInfo_o *v161; // x5
  FollowerInfo_o *v162; // x6
  PartyListViewItem_o *v163; // x7
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
  int64_t v177; // x1
  PartyOrganizationUtility_o *v178; // x19
  int v179; // w8
  AssetManager__InitCR_d__131_o *v180; // x22
  int v181; // w8
  int32_t v182; // w0
  int32_t v183; // w24
  System_String_o *v184; // x23
  System_String_o *v185; // x22
  System_Byte_array *v186; // x24
  uint32_t v187; // w24
  int64_t v188; // x2
  int32_t v189; // w3
  System_String_o *v190; // x4
  BattleSetupInfo_o *v191; // x5
  FollowerInfo_o *v192; // x6
  PartyListViewItem_o *v193; // x7
  int64_t v194; // x2
  int32_t v195; // w3
  System_String_o *v196; // x4
  BattleSetupInfo_o *v197; // x5
  FollowerInfo_o *v198; // x6
  PartyListViewItem_o *v199; // x7
  int v200; // w8
  System_String_array *v201; // x25
  __int64 v202; // x22
  const MethodInfo *v203; // x1
  int64_t v204; // x2
  int32_t v205; // w3
  System_String_o *v206; // x4
  BattleSetupInfo_o *v207; // x5
  FollowerInfo_o *v208; // x6
  PartyListViewItem_o *v209; // x7
  int v210; // w8
  unsigned int v211; // w29
  AssetManager__InitCR_d__131_o *v212; // x27
  char v213; // w8
  System_String_o *v214; // x0
  AssetManager_c *v215; // x8
  int v216; // w9
  void **v217; // x11
  struct System_String_o **v218; // x10
  System_String_o *v219; // x27
  bool v220; // cc
  int64_t *v221; // x9
  int64_t *v222; // x10
  int64_t v223; // x24
  int64_t v224; // x23
  int64_t v225; // x2
  int32_t v226; // w3
  System_String_o *v227; // x4
  BattleSetupInfo_o *v228; // x5
  FollowerInfo_o *v229; // x6
  PartyListViewItem_o *v230; // x7
  int64_t v231; // x2
  int32_t v232; // w3
  System_String_o *v233; // x4
  BattleSetupInfo_o *v234; // x5
  FollowerInfo_o *v235; // x6
  PartyListViewItem_o *v236; // x7
  int64_t v237; // x2
  int32_t v238; // w3
  System_String_o *v239; // x4
  BattleSetupInfo_o *v240; // x5
  FollowerInfo_o *v241; // x6
  PartyListViewItem_o *v242; // x7
  System_String_o *v243; // x0
  System_String_o *v244; // x0
  int32_t v245; // w23
  System_String_o *v246; // x0
  const MethodInfo *v247; // x3
  int v248; // w8
  uint32_t v249; // w24
  System_String_o *v250; // x26
  AssetData_o *AssetData; // x0
  const MethodInfo *v252; // x6
  Il2CppObject *v253; // x27
  int64_t v254; // x2
  int32_t v255; // w3
  System_String_o *v256; // x4
  BattleSetupInfo_o *v257; // x5
  FollowerInfo_o *v258; // x6
  PartyListViewItem_o *v259; // x7
  __int64 v260; // x8
  _QWORD *v261; // x9
  __int64 _2__current_low; // x10
  __int64 v263; // x8
  System_Collections_Generic_List_object__o *v264; // x27
  AssetData_o *v265; // x28
  int64_t v266; // x2
  int32_t v267; // w3
  System_String_o *v268; // x4
  BattleSetupInfo_o *v269; // x5
  FollowerInfo_o *v270; // x6
  PartyListViewItem_o *v271; // x7
  struct System_Object_array *items; // x8
  _QWORD *v273; // x9
  __int64 size; // x10
  Il2CppClass **v275; // x0
  AssetManager_c *v276; // x0
  int64_t v277; // x23
  struct AssetManager_StaticFields *v278; // x0
  struct AssetManager_StaticFields *v279; // x0
  int64_t v280; // x1
  int64_t v281; // x2
  int32_t v282; // w3
  System_String_o *v283; // x4
  BattleSetupInfo_o *v284; // x5
  FollowerInfo_o *v285; // x6
  PartyListViewItem_o *v286; // x7
  struct AssetManager_StaticFields *v287; // x0
  int64_t v288; // x1
  int64_t v289; // x2
  int32_t v290; // w3
  System_String_o *v291; // x4
  BattleSetupInfo_o *v292; // x5
  FollowerInfo_o *v293; // x6
  PartyListViewItem_o *v294; // x7
  _BOOL8 v295; // x0
  __int64 v296; // x1
  Il2CppObject *current; // x22
  System_Collections_Generic_Dictionary_object__object__o *v298; // x0
  __int64 v299; // x1
  System_Collections_Generic_Dictionary_object__object__o *v300; // x0
  Il2CppObject *v301; // x22
  int64_t v302; // x2
  int32_t v303; // w3
  System_String_o *v304; // x4
  BattleSetupInfo_o *v305; // x5
  FollowerInfo_o *v306; // x6
  PartyListViewItem_o *v307; // x7
  ManagerConfig_c *v308; // x0
  struct ManagerConfig_StaticFields *v309; // x8
  Il2CppObject *v310; // x21
  ErrorDialog_ClickDelegate_o *v311; // x23
  UnityEngine_WaitForEndOfFrame_o *v312; // x20
  int64_t v313; // x2
  int32_t v314; // w3
  System_String_o *v315; // x4
  BattleSetupInfo_o *v316; // x5
  FollowerInfo_o *v317; // x6
  PartyListViewItem_o *v318; // x7
  ManagementManager_c *v319; // x0
  _BOOL4 isDuringStartup; // w22
  Il2CppObject *v321; // x21
  System_String_o *v322; // x22
  ErrorDialog_ClickDelegate_o *v323; // x23
  System_String_o *v324; // x22
  ErrorDialog_ClickDelegate_o *v325; // x23
  UnityEngine_WaitForEndOfFrame_o *v326; // x20
  int64_t v327; // x2
  int32_t v328; // w3
  System_String_o *v329; // x4
  BattleSetupInfo_o *v330; // x5
  FollowerInfo_o *v331; // x6
  PartyListViewItem_o *v332; // x7
  UnityEngine_WaitForSeconds_o *v333; // x20
  int64_t v334; // x2
  int32_t v335; // w3
  System_String_o *v336; // x4
  BattleSetupInfo_o *v337; // x5
  FollowerInfo_o *v338; // x6
  PartyListViewItem_o *v339; // x7
  const MethodInfo *v340; // x2
  int64_t v341; // x2
  int32_t v342; // w3
  System_String_o *v343; // x4
  BattleSetupInfo_o *v344; // x5
  FollowerInfo_o *v345; // x6
  PartyListViewItem_o *v346; // x7
  UnityEngine_WaitForEndOfFrame_o *v347; // x20
  int64_t v348; // x2
  int32_t v349; // w3
  System_String_o *v350; // x4
  BattleSetupInfo_o *v351; // x5
  FollowerInfo_o *v352; // x6
  PartyListViewItem_o *v353; // x7
  const MethodInfo *effectDistance; // [xsp+0h] [xbp-F0h]
  System_Nullable_Vector2__o effectDistancea; // [xsp+0h] [xbp-F0h]
  System_Nullable_Vector2__o effectDistanceb; // [xsp+0h] [xbp-F0h]
  const MethodInfo *effectDistance_8; // [xsp+8h] [xbp-E8h]
  System_String_o *klass; // [xsp+18h] [xbp-D8h]
  System_String_o *v359; // [xsp+20h] [xbp-D0h]
  int32_t version; // [xsp+2Ch] [xbp-C4h]
  PartyOrganizationUtility_o *v361; // [xsp+30h] [xbp-C0h]
  PartyOrganizationUtility_o *v362; // [xsp+38h] [xbp-B8h]
  AssetManager__InitCR_d__131_o *v363; // [xsp+40h] [xbp-B0h]
  PartyOrganizationUtility_o *v364; // [xsp+40h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v365; // [xsp+48h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v366; // [xsp+60h] [xbp-90h] BYREF

  v8 = this;
  if ( (byte_4BDB60E & 1) == 0 )
  {
    sub_1C21E38(&AssetDataListInfo_TypeInfo);
    sub_1C21E38(&AssetData_TypeInfo);
    sub_1C21E38(&Method_AssetManager_OnClickRetryDialog__);
    sub_1C21E38(&Method_AssetManager_OnClickWaitDebugDialog__);
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&CatAndMouseGame_TypeInfo);
    sub_1C21E38(&char___TypeInfo);
    sub_1C21E38(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&Crc32_TypeInfo);
    sub_1C21E38(&UnityEngine_Debug_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AssetData__set_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AssetData__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&ManagementManager_TypeInfo);
    sub_1C21E38(&ManagerConfig_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C21E38(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C21E38(&StringLiteral_2548/*"AssetStorageList download time over"*/);
    sub_1C21E38(&StringLiteral_2544/*"AssetStorageList download crc error"*/);
    sub_1C21E38(&StringLiteral_2540/*"AssetStorage boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/);
    sub_1C21E38(&StringLiteral_2175/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_2536/*"AssetStorage boot load crc error : チェックサム値が不一致"*/);
    sub_1C21E38(&StringLiteral_16213/*"[FFFF80]Download error for debug"*/);
    sub_1C21E38(&StringLiteral_2545/*"AssetStorageList download data error"*/);
    sub_1C21E38(&StringLiteral_2547/*"AssetStorageList download error : "*/);
    sub_1C21E38(&StringLiteral_2538/*"AssetStorage boot load error : アセットバンドルリスト作成失敗"*/);
    sub_1C21E38(&StringLiteral_25605/*"~"*/);
    sub_1C21E38(&StringLiteral_2539/*"AssetStorage boot load error : ファイル先頭の１行目の内容が空"*/);
    sub_1C21E38(&StringLiteral_11674/*"SCRIPT"*/);
    sub_1C21E38(&StringLiteral_1892/*"@"*/);
    sub_1C21E38(&StringLiteral_2176/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/);
    this = (AssetManager__InitCR_d__131_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDB60E = 1;
  }
  memset(&v366, 0, sizeof(v366));
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
      if ( !System_IO_Directory__Exists(v10->static_fields->cachePathName, 0LL) )
      {
        v11 = AssetManager_TypeInfo;
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v11 = AssetManager_TypeInfo;
        }
        System_IO_Directory__CreateDirectory(v11->static_fields->cachePathName, 0LL);
      }
      this = (AssetManager__InitCR_d__131_o *)_4__this->fields.assetBundleDic;
      if ( !this )
        goto LABEL_281;
      if ( System_Collections_Generic_Dictionary_object__object___get_Count(
             (System_Collections_Generic_Dictionary_object__object__o *)this,
             (const MethodInfo_3316350 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) )
      {
        goto LABEL_120;
      }
      v12 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v12 = AssetManager_TypeInfo;
      }
      if ( !System_IO_File__Exists(v12->static_fields->cacheListFileName, 0LL) )
        goto LABEL_120;
      v13 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v13 = AssetManager_TypeInfo;
      }
      AllText = System_IO_File__ReadAllText(v13->static_fields->cacheListFileName, 0LL);
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      v15 = CatAndMouseGame__MouseGame8(AllText, 0LL);
      v25 = v15;
      if ( !v15 )
        goto LABEL_120;
      v26 = (System_Char_array *)sub_1C21EE0(char___TypeInfo, 1LL);
      if ( !v26 )
        sub_1C22094(0LL, 0LL);
      if ( !v26->max_length )
        sub_1C2209C(v26, v26);
      v26->m_Items[2] = -257;
      v27 = System_String__Trim_63145224(v25, v26, 0LL);
      v28 = (System_Char_array *)sub_1C21EE0(char___TypeInfo, 2LL);
      if ( !v28 )
        sub_1C22094(0LL, 0LL);
      max_length = v28->max_length;
      if ( !max_length )
        sub_1C2209C(v28, v28);
      v28->m_Items[2] = 13;
      if ( max_length == 1 )
        sub_1C2209C(v28, v28);
      v28->m_Items[3] = 10;
      if ( !v27 )
        sub_1C22094(v28, v28);
      v36 = System_String__IndexOfAny(v27, v28, 0LL);
      if ( v36 < 2 )
      {
        v37 = &StringLiteral_2539/*"AssetStorage boot load error : ファイル先頭の１行目の内容が空"*/;
        goto LABEL_96;
      }
      v38 = System_String__Substring_63134480(v27, 0, v36, 0LL);
      v40 = v38;
      if ( !v38 )
        sub_1C22094(0LL, v39);
      if ( !System_String__StartsWith(v38, (System_String_o *)StringLiteral_25605/*"~"*/, 0LL) )
      {
        v37 = &StringLiteral_2540/*"AssetStorage boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
        goto LABEL_96;
      }
      v41 = System_String__Substring(v40, 1, 0LL);
      v42 = System_String__Substring(v27, v36 + 1, 0LL);
      UTF8 = System_Text_Encoding__get_UTF8(0LL);
      if ( !UTF8 )
        sub_1C22094(0LL, v44);
      v45 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._19_GetBytes.method)(
                                   UTF8,
                                   v42,
                                   UTF8->klass->vtable._20_GetBytes.methodPtr);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v46 = Crc32__Compute(v45, 0LL);
      if ( System_UInt32__Parse(v41, 0LL) != v46 )
      {
        v37 = &StringLiteral_2536/*"AssetStorage boot load crc error : チェックサム値が不一致"*/;
        goto LABEL_96;
      }
      v47 = (System_Char_array *)sub_1C21EE0(char___TypeInfo, 2LL);
      if ( !v47 )
        sub_1C22094(0LL, 0LL);
      v48 = v47->max_length;
      if ( !v48 )
        sub_1C2209C(v47, v47);
      v47->m_Items[2] = 13;
      if ( v48 == 1 )
        sub_1C2209C(v47, v47);
      v47->m_Items[3] = 10;
      if ( !v42 )
        sub_1C22094(v47, v47);
      this = (AssetManager__InitCR_d__131_o *)System_String__Split_63137868(v42, v47, 1, 0LL);
      v49 = this;
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
                                                (System_String_o *)StringLiteral_1892/*"@"*/,
                                                0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
LABEL_95:
        v37 = &StringLiteral_2538/*"AssetStorage boot load error : アセットバンドルリスト作成失敗"*/;
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
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&static_fields->assetBundleMasterVersion,
            (int64_t)v100,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35);
          v101 = StringLiteral_1/*""*/;
          v102 = AssetManager_TypeInfo->static_fields;
          v102->assetBundleDateVersion = (struct System_String_o *)StringLiteral_1/*""*/;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v102->assetBundleDateVersion,
            (int64_t)v101,
            v103,
            v104,
            v105,
            v106,
            v107,
            v108);
          v109 = StringLiteral_1/*""*/;
          v110 = AssetManager_TypeInfo->static_fields;
          v110->assetBundleBuildVersion = (struct System_String_o *)StringLiteral_1/*""*/;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v110->assetBundleBuildVersion,
            (int64_t)v109,
            v111,
            v112,
            v113,
            v114,
            v115,
            v116);
          this = (AssetManager__InitCR_d__131_o *)_4__this->fields.assetBundleDic;
          if ( !this )
            goto LABEL_281;
          System_Collections_Generic_Dictionary_object__object___Clear(
            (System_Collections_Generic_Dictionary_object__object__o *)this,
            (const MethodInfo_3316808 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
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
            if ( System_String__op_Inequality(v118->ServerDefaultType, (System_String_o *)StringLiteral_11674/*"SCRIPT"*/, 0LL) )
            {
              _4__this->fields.isErrorDialog = 1;
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v120 = (ErrorDialog_ClickDelegate_o *)sub_1C22084(ErrorDialog_ClickDelegate_TypeInfo);
              ErrorDialog_ClickDelegate___ctor(
                v120,
                (Il2CppObject *)_4__this,
                Method_AssetManager_OnClickWaitDebugDialog__,
                0LL);
              if ( !Instance )
                goto LABEL_281;
              *(_QWORD *)&effectDistancea.fields.hasValue = 0LL;
              effectDistancea.fields.value.fields.y = 0.0;
              CommonUI__OpenWarningDialog(
                (CommonUI_o *)Instance,
                (System_String_o *)StringLiteral_16213/*"[FFFF80]Download error for debug"*/,
                v97,
                v120,
                1,
                0,
                -1.0,
                1,
                effectDistancea,
                0LL);
LABEL_27:
              if ( _4__this->fields.isErrorDialog )
              {
                v16 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
                UnityEngine_WaitForEndOfFrame___ctor(v16, 0LL);
                v8->fields.__2__current = (Il2CppObject *)v16;
                p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                sub_1C21DDC(p__2__current, (int64_t)v16, v18, v19, v20, v21, v22, v23);
                result = 1;
                *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
                return result;
              }
            }
          }
        }
        goto LABEL_120;
      }
      if ( !LODWORD(v49->fields.__2__current) )
        goto LABEL_282;
      this = (AssetManager__InitCR_d__131_o *)v49->fields.__4__this;
      if ( !this )
        goto LABEL_281;
      this = (AssetManager__InitCR_d__131_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0LL);
      if ( !this )
        goto LABEL_281;
      v51 = this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_282;
      this = (AssetManager__InitCR_d__131_o *)this->fields.__4__this;
      if ( !this )
        goto LABEL_281;
      v52 = System_String__Substring((System_String_o *)this, 1, 0LL);
      v59 = AssetManager_TypeInfo;
      v60 = (int64_t)v52;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v59 = AssetManager_TypeInfo;
      }
      v61 = v59->static_fields;
      v61->assetBundleMasterVersion = (struct System_String_o *)v60;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v61->assetBundleMasterVersion, v60, v53, v54, v55, v56, v57, v58);
      v68 = AssetManager_TypeInfo;
      if ( SLODWORD(v51->fields.__2__current) <= 1 )
        p_configFileUrl_5__2 = (int64_t *)&StringLiteral_1/*""*/;
      else
        p_configFileUrl_5__2 = (int64_t *)&v51->fields._configFileUrl_5__2;
      v70 = *p_configFileUrl_5__2;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v68 = AssetManager_TypeInfo;
      }
      v71 = v68->static_fields;
      v71->assetBundleDateVersion = (struct System_String_o *)v70;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v71->assetBundleDateVersion, v70, v62, v63, v64, v65, v66, v67);
      v78 = AssetManager_TypeInfo;
      if ( SLODWORD(v51->fields.__2__current) <= 2 )
        p_loader_5__3 = (int64_t *)&StringLiteral_1/*""*/;
      else
        p_loader_5__3 = (int64_t *)&v51->fields._loader_5__3;
      v80 = *p_loader_5__3;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        v78 = AssetManager_TypeInfo;
      }
      v81 = v78->static_fields;
      v81->assetBundleBuildVersion = (struct System_String_o *)v80;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v81->assetBundleBuildVersion, v80, v72, v73, v74, v75, v76, v77);
      v82 = (int)v49->fields.__2__current;
      if ( v82 >= 2 )
      {
        v83 = 5LL;
        v363 = v49;
        while ( (int)v83 - 4 < (unsigned int)v82 )
        {
          this = (AssetManager__InitCR_d__131_o *)*((_QWORD *)&v49->klass + v83);
          if ( !this )
            goto LABEL_281;
          this = (AssetManager__InitCR_d__131_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0LL);
          if ( !this )
            goto LABEL_281;
          v84 = this;
          if ( SLODWORD(this->fields.__2__current) < 5 )
            goto LABEL_120;
          this = (AssetManager__InitCR_d__131_o *)this->fields.__4__this;
          if ( !this )
            goto LABEL_281;
          v85 = System_String__Trim((System_String_o *)this, 0LL);
          this = (AssetManager__InitCR_d__131_o *)System_Int32__Parse(v85, 0LL);
          if ( LODWORD(v84->fields.__2__current) < 3 )
            goto LABEL_282;
          v86 = (int)this;
          this = (AssetManager__InitCR_d__131_o *)v84->fields._loader_5__3;
          if ( !this )
            goto LABEL_281;
          configFileUrl_5__2 = v84->fields._configFileUrl_5__2;
          v88 = System_String__Trim((System_String_o *)this, 0LL);
          this = (AssetManager__InitCR_d__131_o *)System_Int32__Parse(v88, 0LL);
          if ( LODWORD(v84->fields.__2__current) <= 3 )
            goto LABEL_282;
          v89 = (int)this;
          this = *(AssetManager__InitCR_d__131_o **)&v84->fields._requestTime_5__4;
          if ( !this )
            goto LABEL_281;
          v90 = System_String__Trim((System_String_o *)this, 0LL);
          this = (AssetManager__InitCR_d__131_o *)System_UInt32__Parse(v90, 0LL);
          v91 = (int)v84->fields.__2__current;
          if ( (unsigned int)v91 <= 4 )
            goto LABEL_282;
          v92 = (unsigned int)this;
          v93 = v91 >= 6 ? (System_String_o *)v84[1].klass : 0LL;
          wait_5__6 = (System_String_o *)v84->fields._wait_5__6;
          assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.assetBundleDic;
          v96 = (AssetData_o *)sub_1C22084(AssetData_TypeInfo);
          AssetData___ctor_39008364(v96, 0, wait_5__6, v86, configFileUrl_5__2, v89, v92, v93, effectDistance);
          if ( !assetBundleDic )
            goto LABEL_281;
          System_Collections_Generic_Dictionary_object__object___set_Item(
            assetBundleDic,
            (Il2CppObject *)wait_5__6,
            (Il2CppObject *)v96,
            (const MethodInfo_331666C *)Method_System_Collections_Generic_Dictionary_string__AssetData__set_Item__);
          v49 = v363;
          ++v83;
          v82 = (int)v363->fields.__2__current;
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
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v8->fields._configFileUrl_5__2,
        (int64_t)ConfigFileAddress,
        v123,
        v124,
        v125,
        v126,
        v127,
        v128);
      v8->fields._loader_5__3 = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._loader_5__3, 0LL, v129, v130, v131, v132, v133, v134);
LABEL_123:
      v135 = v8->fields._configFileUrl_5__2;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      UrlString = AssetManager__getUrlString(v135, method);
      v137 = UnityEngine_Networking_UnityWebRequest__Get(UrlString, 0LL);
      v8->fields._loader_5__3 = v137;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v8->fields._loader_5__3,
        (int64_t)v137,
        v138,
        v139,
        v140,
        v141,
        v142,
        v143);
      this = (AssetManager__InitCR_d__131_o *)v8->fields._loader_5__3;
      if ( !this )
        goto LABEL_281;
      UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
      v145 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v145 = ManagerConfig_TypeInfo;
      }
      TIMEOUT = v145->static_fields->TIMEOUT;
      v8->fields._loadProgress_5__5 = 0.0;
      v8->fields._requestTime_5__4 = unscaledTime + TIMEOUT;
      v147 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v147, 0LL);
      v8->fields._wait_5__6 = v147;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v8->fields._wait_5__6,
        (int64_t)v147,
        v148,
        v149,
        v150,
        v151,
        v152,
        v153);
LABEL_129:
      v154 = (AssetManager__InitCR_d__131_o **)&v8->fields._loader_5__3;
      this = (AssetManager__InitCR_d__131_o *)v8->fields._loader_5__3;
      if ( !this )
        goto LABEL_281;
      this = (AssetManager__InitCR_d__131_o *)UnityEngine_Networking_UnityWebRequest__get_isDone(
                                                (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_136;
      this = *v154;
      if ( !*v154 )
        goto LABEL_281;
      downloadProgress = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                           (UnityEngine_Networking_UnityWebRequest_o *)this,
                           0LL);
      loadProgress_5__5 = v8->fields._loadProgress_5__5;
      v157 = downloadProgress;
      v164 = UnityEngine_Time__get_unscaledTime(0LL);
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
        this = (AssetManager__InitCR_d__131_o *)v8->fields._loader_5__3;
        v8->fields._requestTime_5__4 = v166 + v176->TIMEOUT;
        if ( this )
        {
          v8->fields._loadProgress_5__5 = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                                            (UnityEngine_Networking_UnityWebRequest_o *)this,
                                            0LL);
          goto LABEL_153;
        }
LABEL_281:
        sub_1C22094(this, method);
      }
      if ( v164 >= v8->fields._requestTime_5__4 )
      {
LABEL_136:
        if ( !_4__this )
          goto LABEL_281;
        this = *v154;
        if ( !*v154 )
          goto LABEL_281;
        if ( !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL) )
        {
          v174 = (Il2CppObject *)StringLiteral_2548/*"AssetStorageList download time over"*/;
          goto LABEL_249;
        }
        this = *v154;
        if ( !*v154 )
          goto LABEL_281;
        error = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        this = (AssetManager__InitCR_d__131_o *)System_String__IsNullOrEmpty(error, 0LL);
        if ( !*v154 )
          goto LABEL_281;
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v173 = UnityEngine_Networking_UnityWebRequest__get_error(
                   (UnityEngine_Networking_UnityWebRequest_o *)*v154,
                   0LL);
LABEL_155:
          v174 = (Il2CppObject *)v173;
          goto LABEL_249;
        }
        this = (AssetManager__InitCR_d__131_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                  (UnityEngine_Networking_UnityWebRequest_o *)*v154,
                                                  0LL);
        if ( !this )
          goto LABEL_281;
        text = UnityEngine_Networking_DownloadHandler__get_text((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
        if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
        v169 = CatAndMouseGame__MouseGame3(text, 0LL);
        if ( System_String__IsNullOrEmpty(v169, 0LL) )
        {
          v171 = v8->fields._configFileUrl_5__2;
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          v172 = AssetManager__getUrlString(v171, v170);
          v173 = System_String__Concat_63115476((System_String_o *)StringLiteral_2547/*"AssetStorageList download error : "*/, v172, 0LL);
          goto LABEL_155;
        }
        this = (AssetManager__InitCR_d__131_o *)sub_1C21EE0(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_281;
        method = (const MethodInfo *)this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_282;
        LOWORD(this->fields.__4__this) = -257;
        if ( !v169 )
          goto LABEL_281;
        this = (AssetManager__InitCR_d__131_o *)System_String__Trim_63145224(v169, (System_Char_array *)this, 0LL);
        if ( !this )
          goto LABEL_281;
        v180 = this;
        if ( System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_25605/*"~"*/, 0LL) )
        {
          this = (AssetManager__InitCR_d__131_o *)sub_1C21EE0(char___TypeInfo, 2LL);
          if ( !this )
            goto LABEL_281;
          v181 = (int)this->fields.__2__current;
          method = (const MethodInfo *)this;
          if ( !v181 )
            goto LABEL_282;
          LOWORD(this->fields.__4__this) = 13;
          if ( v181 == 1 )
            goto LABEL_282;
          WORD1(this->fields.__4__this) = 10;
          v182 = System_String__IndexOfAny((System_String_o *)v180, (System_Char_array *)this, 0LL);
          if ( v182 >= 2 )
          {
            v183 = v182;
            v184 = System_String__Substring_63134480((System_String_o *)v180, 1, v182 - 1, 0LL);
            v185 = System_String__Substring((System_String_o *)v180, v183 + 1, 0LL);
            this = (AssetManager__InitCR_d__131_o *)System_Text_Encoding__get_UTF8(0LL);
            if ( !this )
              goto LABEL_281;
            v186 = (System_Byte_array *)((__int64 (__fastcall *)(AssetManager__InitCR_d__131_o *, System_String_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                                          this,
                                          v185,
                                          this->klass[1]._1.interfaceOffsets);
            if ( !Crc32_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
            v187 = Crc32__Compute(v186, 0LL);
            if ( System_UInt32__Parse(v184, 0LL) == v187 )
            {
              if ( *v154 )
              {
                UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)*v154, 0LL);
                *v154 = 0LL;
                sub_1C21DDC(
                  (PartyOrganizationUtility_o *)&v8->fields._loader_5__3,
                  0LL,
                  v194,
                  v195,
                  v196,
                  v197,
                  v198,
                  v199);
              }
              if ( !v185 )
                goto LABEL_280;
              this = (AssetManager__InitCR_d__131_o *)sub_1C21EE0(char___TypeInfo, 2LL);
              if ( !this )
                goto LABEL_281;
              v200 = (int)this->fields.__2__current;
              method = (const MethodInfo *)this;
              if ( v200 )
              {
                LOWORD(this->fields.__4__this) = 13;
                if ( v200 != 1 )
                {
                  WORD1(this->fields.__4__this) = 10;
                  v201 = System_String__Split_63137868(v185, (System_Char_array *)this, 1, 0LL);
                  v202 = sub_1C22084(AssetDataListInfo_TypeInfo);
                  AssetDataListInfo___ctor((AssetDataListInfo_o *)v202, v203);
                  if ( !v201 )
                    goto LABEL_281;
                  v210 = v201->max_length;
                  v361 = (PartyOrganizationUtility_o *)(v202 + 16);
                  v362 = (PartyOrganizationUtility_o *)(v202 + 24);
                  v364 = (PartyOrganizationUtility_o *)(v202 + 32);
                  if ( v210 >= 1 )
                  {
                    v211 = 0;
                    while ( v211 < v210 )
                    {
                      this = (AssetManager__InitCR_d__131_o *)v201->m_Items[v211];
                      if ( !this )
                        goto LABEL_281;
                      this = (AssetManager__InitCR_d__131_o *)System_String__Split(
                                                                (System_String_o *)this,
                                                                0x2Cu,
                                                                0,
                                                                0LL);
                      if ( !this )
                        goto LABEL_281;
                      v212 = this;
                      if ( SLODWORD(this->fields.__2__current) < 1 )
                        goto LABEL_231;
                      this = (AssetManager__InitCR_d__131_o *)this->fields.__4__this;
                      if ( !this )
                        goto LABEL_281;
                      this = (AssetManager__InitCR_d__131_o *)System_String__StartsWith(
                                                                (System_String_o *)this,
                                                                (System_String_o *)StringLiteral_1892/*"@"*/,
                                                                0LL);
                      if ( !LODWORD(v212->fields.__2__current) )
                        goto LABEL_282;
                      v213 = (char)this;
                      this = (AssetManager__InitCR_d__131_o *)v212->fields.__4__this;
                      if ( !this )
                        goto LABEL_281;
                      if ( (v213 & 1) != 0 )
                      {
                        v214 = System_String__Substring((System_String_o *)this, 1, 0LL);
                        v215 = AssetManager_TypeInfo;
                        v216 = (int)v212->fields.__2__current;
                        v217 = (void **)&v212->fields._loader_5__3;
                        v218 = &v212->fields._configFileUrl_5__2;
                        v219 = v214;
                        if ( v216 == 2 )
                          v217 = &StringLiteral_1/*""*/;
                        v220 = v216 <= 1;
                        if ( v216 <= 1 )
                          v221 = (int64_t *)&StringLiteral_1/*""*/;
                        else
                          v221 = (int64_t *)v218;
                        if ( v220 )
                          v222 = (int64_t *)&StringLiteral_1/*""*/;
                        else
                          v222 = (int64_t *)v217;
                        v223 = *v221;
                        v224 = *v222;
                        if ( !AssetManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                          v215 = AssetManager_TypeInfo;
                        }
                        this = (AssetManager__InitCR_d__131_o *)System_String__op_Inequality(
                                                                  v219,
                                                                  v215->static_fields->assetBundleMasterVersion,
                                                                  0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                        {
                          this = (AssetManager__InitCR_d__131_o *)_4__this->fields.assetBundleDic;
                          if ( !this )
                            goto LABEL_281;
                          System_Collections_Generic_Dictionary_object__object___Clear(
                            (System_Collections_Generic_Dictionary_object__object__o *)this,
                            (const MethodInfo_3316808 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
                        }
                        if ( !v202 )
                          goto LABEL_281;
                        v361->klass = (PartyOrganizationUtility_c *)v219;
                        sub_1C21DDC(v361, (int64_t)v219, v225, v226, v227, v228, v229, v230);
                        v362->klass = (PartyOrganizationUtility_c *)v223;
                        sub_1C21DDC(v362, v223, v231, v232, v233, v234, v235, v236);
                        v364->klass = (PartyOrganizationUtility_c *)v224;
                        sub_1C21DDC(v364, v224, v237, v238, v239, v240, v241, v242);
                      }
                      else
                      {
                        this = (AssetManager__InitCR_d__131_o *)System_String__StartsWith(
                                                                  (System_String_o *)this,
                                                                  (System_String_o *)StringLiteral_25605/*"~"*/,
                                                                  0LL);
                        if ( ((unsigned __int8)this & 1) == 0 )
                        {
                          if ( !LODWORD(v212->fields.__2__current) )
                            goto LABEL_282;
                          this = (AssetManager__InitCR_d__131_o *)v212->fields.__4__this;
                          if ( !this )
                            goto LABEL_281;
                          this = (AssetManager__InitCR_d__131_o *)System_String__IndexOf(
                                                                    (System_String_o *)this,
                                                                    0x7Eu,
                                                                    0LL);
                          if ( (_DWORD)this != 1 )
                          {
                            if ( SLODWORD(v212->fields.__2__current) < 5 )
                              goto LABEL_231;
                            this = (AssetManager__InitCR_d__131_o *)v212->fields.__4__this;
                            if ( !this )
                              goto LABEL_281;
                            v243 = System_String__Trim((System_String_o *)this, 0LL);
                            this = (AssetManager__InitCR_d__131_o *)System_Int32__Parse(v243, 0LL);
                            version = (int)this;
                            if ( LODWORD(v212->fields.__2__current) < 3 )
                              goto LABEL_282;
                            this = (AssetManager__InitCR_d__131_o *)v212->fields._loader_5__3;
                            if ( !this )
                              goto LABEL_281;
                            v359 = v212->fields._configFileUrl_5__2;
                            v244 = System_String__Trim((System_String_o *)this, 0LL);
                            this = (AssetManager__InitCR_d__131_o *)System_Int32__Parse(v244, 0LL);
                            if ( LODWORD(v212->fields.__2__current) <= 3 )
                              goto LABEL_282;
                            v245 = (int)this;
                            this = *(AssetManager__InitCR_d__131_o **)&v212->fields._requestTime_5__4;
                            if ( !this )
                              goto LABEL_281;
                            v246 = System_String__Trim((System_String_o *)this, 0LL);
                            this = (AssetManager__InitCR_d__131_o *)System_UInt32__Parse(v246, 0LL);
                            v248 = (int)v212->fields.__2__current;
                            if ( (unsigned int)v248 <= 4 )
                              goto LABEL_282;
                            v249 = (unsigned int)this;
                            if ( v248 >= 6 )
                              klass = (System_String_o *)v212[1].klass;
                            else
                              klass = 0LL;
                            v250 = (System_String_o *)v212->fields._wait_5__6;
                            AssetData = AssetManager__GetAssetData(
                                          (AssetManager_o *)this,
                                          _4__this->fields.assetBundleDic,
                                          v250,
                                          v247);
                            if ( AssetData )
                            {
                              v253 = (Il2CppObject *)AssetData;
                              this = (AssetManager__InitCR_d__131_o *)AssetData__SetUpdateInfo(
                                                                        AssetData,
                                                                        version,
                                                                        v359,
                                                                        v245,
                                                                        v249,
                                                                        klass,
                                                                        v252);
                              if ( !v202 )
                                goto LABEL_281;
                              this = *(AssetManager__InitCR_d__131_o **)(v202 + 40);
                              if ( !this )
                                goto LABEL_281;
                              v260 = *(_QWORD *)&this->fields.__1__state;
                              v261 = Method_System_Collections_Generic_List_AssetData__Add__;
                              ++HIDWORD(this->fields.__2__current);
                              if ( !v260 )
                                goto LABEL_281;
                              _2__current_low = SLODWORD(this->fields.__2__current);
                              if ( (unsigned int)_2__current_low >= *(_DWORD *)(v260 + 24) )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  (System_Collections_Generic_List_object__o *)this,
                                  v253,
                                  *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v261[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v263 = v260 + 8 * _2__current_low;
                                LODWORD(this->fields.__2__current) = _2__current_low + 1;
                                *(_QWORD *)(v263 + 32) = v253;
                                sub_1C21DDC(
                                  (PartyOrganizationUtility_o *)(v263 + 32),
                                  (int64_t)v253,
                                  v254,
                                  v255,
                                  v256,
                                  v257,
                                  v258,
                                  v259);
                              }
                              v250 = 0LL;
                            }
                            this = (AssetManager__InitCR_d__131_o *)System_String__IsNullOrEmpty(v250, 0LL);
                            if ( ((unsigned __int8)this & 1) == 0 )
                            {
                              if ( !v202 )
                                goto LABEL_281;
                              v264 = *(System_Collections_Generic_List_object__o **)(v202 + 40);
                              v265 = (AssetData_o *)sub_1C22084(AssetData_TypeInfo);
                              AssetData___ctor_39008504(
                                v265,
                                0,
                                v250,
                                0,
                                version,
                                v359,
                                v245,
                                v249,
                                klass,
                                effectDistance_8);
                              if ( !v264 )
                                goto LABEL_281;
                              items = v264->fields._items;
                              v273 = Method_System_Collections_Generic_List_AssetData__Add__;
                              ++v264->fields._version;
                              if ( !items )
                                goto LABEL_281;
                              size = v264->fields._size;
                              if ( (unsigned int)size >= items->max_length )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  v264,
                                  (Il2CppObject *)v265,
                                  *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v273[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v275 = &items->obj.klass + size;
                                v264->fields._size = size + 1;
                                v275[4] = (Il2CppClass *)v265;
                                sub_1C21DDC(
                                  (PartyOrganizationUtility_o *)(v275 + 4),
                                  (int64_t)v265,
                                  v266,
                                  v267,
                                  v268,
                                  v269,
                                  v270,
                                  v271);
                              }
                            }
                          }
                        }
                      }
                      v210 = v201->max_length;
                      if ( (int)++v211 >= v210 )
                        goto LABEL_231;
                    }
                    goto LABEL_282;
                  }
LABEL_231:
                  if ( !v202 )
                    goto LABEL_281;
                  v276 = AssetManager_TypeInfo;
                  v277 = (int64_t)v361->klass;
                  if ( !AssetManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
                    v276 = AssetManager_TypeInfo;
                  }
                  v278 = v276->static_fields;
                  v278->assetBundleMasterVersion = (struct System_String_o *)v277;
                  sub_1C21DDC(
                    (PartyOrganizationUtility_o *)&v278->assetBundleMasterVersion,
                    v277,
                    v204,
                    v205,
                    v206,
                    v207,
                    v208,
                    v209);
                  v279 = AssetManager_TypeInfo->static_fields;
                  v280 = (int64_t)v362->klass;
                  v279->assetBundleDateVersion = (struct System_String_o *)v362->klass;
                  sub_1C21DDC(
                    (PartyOrganizationUtility_o *)&v279->assetBundleDateVersion,
                    v280,
                    v281,
                    v282,
                    v283,
                    v284,
                    v285,
                    v286);
                  v287 = AssetManager_TypeInfo->static_fields;
                  v288 = (int64_t)v364->klass;
                  v287->assetBundleBuildVersion = (struct System_String_o *)v364->klass;
                  sub_1C21DDC(
                    (PartyOrganizationUtility_o *)&v287->assetBundleBuildVersion,
                    v288,
                    v289,
                    v290,
                    v291,
                    v292,
                    v293,
                    v294);
                  this = (AssetManager__InitCR_d__131_o *)_4__this->fields.assetBundleDic;
                  if ( !this )
                    goto LABEL_281;
                  System_Collections_Generic_Dictionary_object__object___Clear(
                    (System_Collections_Generic_Dictionary_object__object__o *)this,
                    (const MethodInfo_3316808 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
                  this = *(AssetManager__InitCR_d__131_o **)(v202 + 40);
                  if ( !this )
                    goto LABEL_281;
                  System_Collections_Generic_List_object___GetEnumerator(
                    (System_Collections_Generic_List_Enumerator_T__o *)&v365,
                    (System_Collections_Generic_List_object__o *)this,
                    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
                  v366 = v365;
                  while ( 1 )
                  {
                    v295 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                             &v366,
                             (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
                    if ( !v295 )
                      break;
                    current = v366.fields._current;
                    if ( !v366.fields._current )
                      sub_1C22094(v295, v296);
                    v298 = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.assetBundleDic;
                    if ( !v298 )
                      sub_1C22094(0LL, v296);
                    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                            v298,
                            (Il2CppObject *)v366.fields._current[1].monitor,
                            (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__) )
                    {
                      v300 = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.assetBundleDic;
                      if ( !v300 )
                        sub_1C22094(0LL, v299);
                      System_Collections_Generic_Dictionary_object__object___Add(
                        v300,
                        (Il2CppObject *)current[1].monitor,
                        current,
                        (const MethodInfo_3316680 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
                    }
                  }
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v366,
                    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
                  AssetManager__ConfigWriteRequest(_4__this, 1, v340);
LABEL_280:
                  v8->fields._configFileUrl_5__2 = 0LL;
                  sub_1C21DDC(
                    (PartyOrganizationUtility_o *)&v8->fields._configFileUrl_5__2,
                    0LL,
                    v188,
                    v189,
                    v190,
                    v191,
                    v192,
                    v193);
                  v8->fields._loader_5__3 = 0LL;
                  sub_1C21DDC(
                    (PartyOrganizationUtility_o *)&v8->fields._loader_5__3,
                    0LL,
                    v341,
                    v342,
                    v343,
                    v344,
                    v345,
                    v346);
                  v347 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
                  UnityEngine_WaitForEndOfFrame___ctor(v347, 0LL);
                  v8->fields.__2__current = (Il2CppObject *)v347;
                  v178 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                  sub_1C21DDC(v178, (int64_t)v347, v348, v349, v350, v351, v352, v353);
                  v179 = 6;
                  goto LABEL_278;
                }
              }
LABEL_282:
              sub_1C2209C(this, method);
            }
            v301 = (Il2CppObject *)StringLiteral_2544/*"AssetStorageList download crc error"*/;
            if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
            UnityEngine_Debug__LogError(v301, 0LL);
          }
        }
        v174 = (Il2CppObject *)StringLiteral_2545/*"AssetStorageList download data error"*/;
        if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
        UnityEngine_Debug__LogError(v174, 0LL);
LABEL_249:
        if ( *v154 )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)*v154, 0LL);
          *v154 = 0LL;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._loader_5__3, 0LL, v302, v303, v304, v305, v306, v307);
        }
        if ( !v174 )
          goto LABEL_277;
        v308 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v308 = ManagerConfig_TypeInfo;
        }
        v309 = v308->static_fields;
        if ( v309->UseDebugCommand )
        {
          if ( !v308->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v308);
            v309 = ManagerConfig_TypeInfo->static_fields;
          }
          if ( System_String__op_Inequality(v309->ServerDefaultType, (System_String_o *)StringLiteral_11674/*"SCRIPT"*/, 0LL) )
          {
            _4__this->fields.isErrorDialog = 1;
            v310 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v311 = (ErrorDialog_ClickDelegate_o *)sub_1C22084(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(
              v311,
              (Il2CppObject *)_4__this,
              Method_AssetManager_OnClickWaitDebugDialog__,
              0LL);
            if ( !v310 )
              goto LABEL_281;
            *(_QWORD *)&effectDistanceb.fields.hasValue = 0LL;
            effectDistanceb.fields.value.fields.y = 0.0;
            CommonUI__OpenWarningDialog(
              (CommonUI_o *)v310,
              (System_String_o *)StringLiteral_16213/*"[FFFF80]Download error for debug"*/,
              (System_String_o *)v174,
              v311,
              1,
              0,
              -1.0,
              1,
              effectDistanceb,
              0LL);
LABEL_260:
            if ( _4__this->fields.isErrorDialog )
            {
              v312 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v312, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v312;
              v178 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1C21DDC(v178, (int64_t)v312, v313, v314, v315, v316, v317, v318);
              v179 = 3;
              goto LABEL_278;
            }
          }
        }
        _4__this->fields.isErrorDialog = 1;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
        if ( !byte_4BDB610 )
        {
          sub_1C21E38(&ManagementManager_TypeInfo);
          byte_4BDB610 = 1;
        }
        v319 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
          v319 = ManagementManager_TypeInfo;
        }
        isDuringStartup = v319->static_fields->isDuringStartup;
        v321 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          if ( isDuringStartup )
          {
LABEL_270:
            v322 = LocalizationManager__Get((System_String_o *)StringLiteral_2175/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
            v323 = (ErrorDialog_ClickDelegate_o *)sub_1C22084(ErrorDialog_ClickDelegate_TypeInfo);
            ErrorDialog_ClickDelegate___ctor(
              v323,
              (Il2CppObject *)_4__this,
              Method_AssetManager_OnClickRetryDialog__,
              0LL);
            if ( !v321 )
              goto LABEL_281;
            CommonUI__OpenRetryBootDialog((CommonUI_o *)v321, (System_String_o *)StringLiteral_1/*""*/, v322, v323, 0, 0LL);
LABEL_275:
            if ( _4__this->fields.isErrorDialog )
            {
              v326 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v326, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v326;
              v178 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1C21DDC(v178, (int64_t)v326, v327, v328, v329, v330, v331, v332);
              v179 = 4;
              goto LABEL_278;
            }
LABEL_277:
            v333 = (UnityEngine_WaitForSeconds_o *)sub_1C22084(UnityEngine_WaitForSeconds_TypeInfo);
            UnityEngine_WaitForSeconds___ctor(v333, 1.0, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v333;
            v178 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1C21DDC(v178, (int64_t)v333, v334, v335, v336, v337, v338, v339);
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
        v324 = LocalizationManager__Get((System_String_o *)StringLiteral_2176/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
        v325 = (ErrorDialog_ClickDelegate_o *)sub_1C22084(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(v325, (Il2CppObject *)_4__this, Method_AssetManager_OnClickRetryDialog__, 0LL);
        if ( !v321 )
          goto LABEL_281;
        CommonUI__OpenRetryDialog((CommonUI_o *)v321, (System_String_o *)StringLiteral_1/*""*/, v324, v325, 0, 0LL);
        goto LABEL_275;
      }
LABEL_153:
      v177 = (int64_t)v8->fields._wait_5__6;
      v8->fields.__2__current = (Il2CppObject *)v177;
      v178 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C21DDC(v178, v177, v158, v159, v160, v161, v162, v163);
      v179 = 2;
LABEL_278:
      *(_DWORD *)&v178[-1].fields._IsQuestStartMenuMode_k__BackingField = v179;
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
      v8->fields._wait_5__6 = 0LL;
      v8->fields.__1__state = -1;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._wait_5__6, 0LL, v2, v3, v4, v5, v6, v7);
      if ( !_4__this )
        goto LABEL_281;
      goto LABEL_123;
    case 6:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_281;
      _4__this->fields.initCRW = 0LL;
      _4__this->fields.isCancelDownload = 0;
      _4__this->fields.isInitEnd = 1;
      sub_1C21DDC((PartyOrganizationUtility_o *)&_4__this->fields.initCRW, 0LL, v2, v3, v4, v5, v6, v7);
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_AssetManager__InitCR_d__131_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_o *v8; // x19
  int32_t _1__state; // w8
  struct AssetManager_o *_4__this; // x21
  UnityEngine_WaitForEndOfFrame_o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t wait_5__2; // x1
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0

  v8 = this;
  if ( (byte_4BDB60F & 1) == 0 )
  {
    this = (AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_o *)sub_1C21E38(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4BDB60F = 1;
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
    v11 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v11, 0LL);
    v8->fields._wait_5__2 = v11;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._wait_5__2, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  }
  if ( !_4__this )
    sub_1C22094(this, method);
  if ( _4__this->fields.inProgressUnloadUnusedAssets || _4__this->fields.requestUnloadUnusedAssets )
  {
    wait_5__2 = (int64_t)v8->fields._wait_5__2;
    v8->fields.__2__current = (Il2CppObject *)wait_5__2;
    p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
    sub_1C21DDC(p__2__current, wait_5__2, v2, v3, v4, v5, v6, v7);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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


void __fastcall AssetManager___c__DisplayClass118_0___DownloadAssetStorageAttributeWithCheckDialog_b__1(
        AssetManager___c__DisplayClass118_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  if ( (byte_4BDB608 & 1) != 0 )
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
    sub_1C21E38(&UnityEngine_Application_TypeInfo);
    byte_4BDB608 = 1;
    if ( isDecide )
      goto LABEL_3;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__Quit_70662884(0LL);
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
  AssetLoader_o *loader; // x20
  Il2CppObject *_4__this; // x22
  AssetLoader_LoadEndHandler_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  struct AssetManager_LoadWaitStatus_o *waiter; // x8

  if ( (byte_4BDB609 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetManager_OnEndLoadAssetStorage__);
    sub_1C21E38(&AssetLoader_LoadEndHandler_TypeInfo);
    byte_4BDB609 = 1;
  }
  loader = this->fields.loader;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v5 = (AssetLoader_LoadEndHandler_o *)sub_1C22084(AssetLoader_LoadEndHandler_TypeInfo);
  AssetLoader_LoadEndHandler___ctor(v5, _4__this, Method_AssetManager_OnEndLoadAssetStorage__, v6);
  waiter = this->fields.waiter;
  if ( !waiter || !loader )
    sub_1C22094(v7, v8);
  AssetLoader__StartLoad(loader, v5, waiter->fields.resourceNames, v9);
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
  const MethodInfo *v5; // x2
  struct System_Collections_Generic_List_string__o *remainNameList; // x8

  v4 = this;
  if ( (byte_4BDB60A & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Remove__);
    this = (AssetManager___c__DisplayClass169_0_o *)sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_4BDB60A = 1;
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
                                                    (const MethodInfo_36505DC *)Method_System_Collections_Generic_List_string__Remove__);
  if ( v4->fields.calledCallbackFunc )
    return;
  remainNameList = v4->fields.remainNameList;
  if ( !remainNameList )
LABEL_12:
    sub_1C22094(this, data);
  if ( remainNameList->fields._size <= 0 )
  {
    this = (AssetManager___c__DisplayClass169_0_o *)v4->fields.__4__this;
    if ( this )
    {
      AssetManager__AddLoadWaitStatus((AssetManager_o *)this, v4->fields.callbackFunc, v5);
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


void __fastcall AssetManager___c__DisplayClass184_0___ctor(
        AssetManager___c__DisplayClass184_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssetManager___c__DisplayClass184_0___AssetObjectListSetupAndCall_b__0(
        AssetManager___c__DisplayClass184_0_o *this,
        const MethodInfo *method)
{
  struct AssetData_o *asset; // x8

  asset = this->fields.asset;
  if ( !asset )
    sub_1C22094(this, method);
  return asset->fields.objectList != 0LL;
}


void __fastcall AssetManager___c__DisplayClass185_0___ctor(
        AssetManager___c__DisplayClass185_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssetManager___c__DisplayClass185_0___AssetObjectListSetupAndCall_b__0(
        AssetManager___c__DisplayClass185_0_o *this,
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
        sub_1C2209C(this, method);
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
    sub_1C22094(this, method);
  }
  v4 = 0;
  return v4 >= max_length;
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
  int32_t _1__state; // w8
  struct AssetManager_o *_4__this; // x20
  UnityEngine_WaitForEndOfFrame_o *v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t wait_5__2; // x1
  PartyOrganizationUtility_o *v19; // x19
  bool v20; // w21
  UnityEngine_AsyncOperation_o *v21; // x0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct AssetManager_ResourceUnloadEventHandler_o *v29; // x8
  PartyOrganizationUtility_o *p_unloadCallbacks; // x20
  struct AssetManager_ResourceUnloadEventHandler_o *unloadCallbacks; // t1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7

  v2 = this;
  if ( (byte_4BDB613 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    this = (AssetManager__coUnloadUnusedAssets_d__138_o *)sub_1C21E38(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4BDB613 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_19;
    unloadCallbacks = _4__this->fields.unloadCallbacks;
    p_unloadCallbacks = (PartyOrganizationUtility_o *)&_4__this->fields.unloadCallbacks;
    v29 = unloadCallbacks;
    *(_WORD *)((char *)&p_unloadCallbacks[-1].fields.temporaryPartyInfo + 3) = 0;
    if ( unloadCallbacks )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v29->fields.m_target)(
        v29->fields.original_method_info,
        *(_QWORD *)&v29->fields.extra_arg);
      p_unloadCallbacks->klass = 0LL;
      sub_1C21DDC(p_unloadCallbacks, 0LL, v32, v33, v34, v35, v36, v37);
    }
    return 0;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v2->fields.__1__state = -1;
      v5 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v5, 0LL);
      v2->fields._wait_5__2 = v5;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields._wait_5__2, (int64_t)v5, v6, v7, v8, v9, v10, v11);
      goto LABEL_8;
    }
    return 0;
  }
  v2->fields.__1__state = -1;
LABEL_8:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  this = (AssetManager__coUnloadUnusedAssets_d__138_o *)AssetManager__LoadIsBusy(0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( _4__this )
    {
      v20 = 1;
      _4__this->fields.inProgressUnloadUnusedAssets = 1;
      v21 = UnityEngine_Resources__UnloadUnusedAssets(0LL);
      v2->fields.__2__current = (Il2CppObject *)v21;
      p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
      sub_1C21DDC(p__2__current, (int64_t)v21, v23, v24, v25, v26, v27, v28);
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
      return v20;
    }
LABEL_19:
    sub_1C22094(this, method);
  }
  wait_5__2 = (int64_t)v2->fields._wait_5__2;
  v2->fields.__2__current = (Il2CppObject *)wait_5__2;
  v19 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
  sub_1C21DDC(v19, wait_5__2, v12, v13, v14, v15, v16, v17);
  v20 = 1;
  *(_DWORD *)&v19[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  return v20;
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_AssetManager__coUnloadUnusedAssets_d__138_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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