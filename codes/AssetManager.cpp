void __fastcall AssetManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  int64_t v22; // x1
  struct AssetManager_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x1
  struct AssetManager_StaticFields *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x1
  struct AssetManager_StaticFields *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x1
  struct AssetManager_StaticFields *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x1
  struct AssetManager_StaticFields *v55; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  void *v62; // x1
  struct AssetManager_StaticFields *v63; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  void *v70; // x1
  struct AssetManager_StaticFields *v71; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  void *v78; // x1
  struct AssetManager_StaticFields *v79; // x0
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7

  if ( (byte_4B152CE & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_2510/*"Asset"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_2523/*"AssetStorageBack.txt"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_22447/*"offline"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_2522/*"AssetStorage.txt"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_2524/*"AssetStorageCreate.txt"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_22517/*"online"*/, v20, v21);
    byte_4B152CE = 1;
  }
  AssetManager_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_2510/*"Asset"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)AssetManager_TypeInfo->static_fields,
    StringLiteral_2510/*"Asset"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v22 = StringLiteral_22447/*"offline"*/;
  static_fields = AssetManager_TypeInfo->static_fields;
  static_fields->SAVE_DATA_OFFLINE = (struct System_String_o *)StringLiteral_22447/*"offline"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->SAVE_DATA_OFFLINE, v22, v24, v25, v26, v27, v28, v29);
  v30 = StringLiteral_22517/*"online"*/;
  v31 = AssetManager_TypeInfo->static_fields;
  v31->SAVE_DATA_ONLINE = (struct System_String_o *)StringLiteral_22517/*"online"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v31->SAVE_DATA_ONLINE, v30, v32, v33, v34, v35, v36, v37);
  v38 = StringLiteral_2522/*"AssetStorage.txt"*/;
  v39 = AssetManager_TypeInfo->static_fields;
  v39->configFileName = (struct System_String_o *)StringLiteral_2522/*"AssetStorage.txt"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v39->configFileName, v38, v40, v41, v42, v43, v44, v45);
  v46 = StringLiteral_2524/*"AssetStorageCreate.txt"*/;
  v47 = AssetManager_TypeInfo->static_fields;
  v47->createConfigFileName = (struct System_String_o *)StringLiteral_2524/*"AssetStorageCreate.txt"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v47->createConfigFileName, v46, v48, v49, v50, v51, v52, v53);
  v54 = StringLiteral_2523/*"AssetStorageBack.txt"*/;
  v55 = AssetManager_TypeInfo->static_fields;
  v55->backConfigFileName = (struct System_String_o *)StringLiteral_2523/*"AssetStorageBack.txt"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v55->backConfigFileName, v54, v56, v57, v58, v59, v60, v61);
  v62 = StringLiteral_1/*""*/;
  v63 = AssetManager_TypeInfo->static_fields;
  v63->assetBundleMasterVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v63->assetBundleMasterVersion, (int64_t)v62, v64, v65, v66, v67, v68, v69);
  v70 = StringLiteral_1/*""*/;
  v71 = AssetManager_TypeInfo->static_fields;
  v71->assetBundleDateVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v71->assetBundleDateVersion, (int64_t)v70, v72, v73, v74, v75, v76, v77);
  v78 = StringLiteral_1/*""*/;
  v79 = AssetManager_TypeInfo->static_fields;
  v79->assetBundleBuildVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v79->assetBundleBuildVersion, (int64_t)v78, v80, v81, v82, v83, v84, v85);
}


void __fastcall AssetManager___ctor(AssetManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_Dictionary_object__object__o *v19; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Collections_Generic_Dictionary_object__object__o *v29; // x20
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Collections_Generic_Dictionary_object__object__o *v39; // x20
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  void *v46; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  System_Collections_Generic_List_object__o *v56; // x20
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  System_Collections_Generic_Queue_T__o *v66; // x20
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7

  if ( (byte_4B152CD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__AssetData__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssetLoader___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_AssetLoader__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager___ctor__, v15, v16);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v17, v18);
    byte_4B152CD = 1;
  }
  *(_WORD *)&this->fields._DispLog = 257;
  this->fields.isInitEnd = 1;
  v19 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_Dictionary_string__AssetData__TypeInfo,
                                                                     method,
                                                                     v2,
                                                                     v3);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v19,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.assetBundleDic = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)v19;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.assetBundleDic, (int64_t)v19, v20, v21, v22, v23, v24, v25);
  v29 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_Dictionary_string__AssetData__TypeInfo,
                                                                     v26,
                                                                     v27,
                                                                     v28);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v29,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.assetBundleReleaseDic = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)v29;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.assetBundleReleaseDic,
    (int64_t)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v39 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_Dictionary_string__AssetData__TypeInfo,
                                                                     v36,
                                                                     v37,
                                                                     v38);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v39,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__AssetData___ctor__);
  this->fields.assetResourceDic = (struct System_Collections_Generic_Dictionary_string__AssetData__o *)v39;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.assetResourceDic, (int64_t)v39, v40, v41, v42, v43, v44, v45);
  v46 = StringLiteral_1/*""*/;
  this->fields.requestConfigWriteData = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.requestConfigWriteData,
    (int64_t)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  this->fields.requestWriteCounter = -1.0;
  v56 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_AssetLoader__TypeInfo,
                                                       v53,
                                                       v54,
                                                       v55);
  System_Collections_Generic_List_object____ctor(
    v56,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_AssetLoader___ctor__);
  this->fields.processingAssetLoaderList = (struct System_Collections_Generic_List_AssetLoader__o *)v56;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.processingAssetLoaderList,
    (int64_t)v56,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  this->fields.loadParallelMax = 1;
  v66 = (System_Collections_Generic_Queue_T__o *)sub_1BCAA2C(
                                                   System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo,
                                                   v63,
                                                   v64,
                                                   v65);
  System_Collections_Generic_Queue_object____ctor(
    v66,
    (const MethodInfo_3713DF0 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
  this->fields.downLoadWaitList = (struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)v66;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.downLoadWaitList, (int64_t)v66, v67, v68, v69, v70, v71, v72);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37DEF2C *)Method_SingletonMonoBehaviour_AssetManager___ctor__);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *processingAssetLoaderList; // x0
  int32_t v20; // w23
  const MethodInfo *v21; // x3
  AssetLoader_o *v22; // x24
  AssetData_o *syncRoot; // x0
  const MethodInfo *v24; // x2
  bool v25; // w22
  Il2CppObject *Current; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x3
  AssetManager_LoadWaitStatus_o *v29; // x23
  AssetData_o *klass; // x0
  const MethodInfo *v31; // x2
  int v32; // w19
  System_Collections_Generic_Queue_Enumerator_T__o v34; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4B152B7 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__,
      *(_QWORD *)&type,
      name);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__, v9, v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__,
      v11,
      v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__, v17, v18);
    byte_4B152B7 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
    goto LABEL_10;
  v20 = 0;
  while ( v20 < processingAssetLoaderList->fields._size )
  {
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               processingAssetLoaderList,
                                                                               v20,
                                                                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    if ( !processingAssetLoaderList )
      goto LABEL_10;
    v22 = (AssetLoader_o *)processingAssetLoaderList;
    syncRoot = (AssetData_o *)processingAssetLoaderList->fields._syncRoot;
    if ( syncRoot && AssetData__IsSame_38479508(syncRoot, type, name, v21) )
    {
      if ( callbackFunc )
        AssetLoader__add_endCallback2(v22, callbackFunc, v24);
      return 1;
    }
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
    ++v20;
    if ( !processingAssetLoaderList )
      goto LABEL_10;
  }
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.downLoadWaitList;
  if ( !processingAssetLoaderList )
LABEL_10:
    sub_1BCAA3C(processingAssetLoaderList, *(_QWORD *)&type);
  System_Collections_Generic_Queue_object___GetEnumerator(
    &v34,
    (System_Collections_Generic_Queue_T__o *)processingAssetLoaderList,
    (const MethodInfo_3714470 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  while ( 1 )
  {
    v25 = System_Collections_Generic_Queue_Enumerator_object___MoveNext(
            &v34,
            (const MethodInfo_3317128 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    if ( !v25 )
      break;
    Current = System_Collections_Generic_Queue_Enumerator_object___get_Current(
                &v34,
                (const MethodInfo_3317218 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    v29 = (AssetManager_LoadWaitStatus_o *)Current;
    if ( !Current )
      sub_1BCAA3C(0LL, v27);
    klass = (AssetData_o *)Current[1].klass;
    if ( klass && AssetData__IsSame_38479508(klass, type, name, v28) )
    {
      AssetManager_LoadWaitStatus__AddCallback(v29, callbackFunc, v31);
      v32 = 7;
      goto LABEL_19;
    }
  }
  v32 = 8;
LABEL_19:
  System_Collections_Generic_Queue_Enumerator_object___Dispose(
    &v34,
    (const MethodInfo_3317118 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  return v25 && v32 == 7;
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *processingAssetLoaderList; // x0
  int32_t v20; // w23
  const MethodInfo *v21; // x3
  AssetLoader_o *v22; // x24
  AssetData_o *syncRoot; // x0
  const MethodInfo *v24; // x2
  bool v25; // w22
  Il2CppObject *Current; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x3
  AssetManager_LoadWaitStatus_o *v29; // x23
  AssetData_o *klass; // x0
  _BOOL8 IsSame_38479508; // x0
  __int64 v32; // x1
  const MethodInfo *v33; // x2
  struct AssetData_o *v34; // x8
  int32_t v35; // w9
  int v36; // w19
  struct AssetData_o *data; // x8
  int32_t entryCount; // w9
  System_Collections_Generic_Queue_Enumerator_T__o v40; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Queue_Enumerator_T__o v41; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B152B6 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__,
      *(_QWORD *)&type,
      name);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__, v9, v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__,
      v11,
      v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__, v17, v18);
    byte_4B152B6 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
    goto LABEL_10;
  v20 = 0;
  while ( v20 < processingAssetLoaderList->fields._size )
  {
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               processingAssetLoaderList,
                                                                               v20,
                                                                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    if ( !processingAssetLoaderList )
      goto LABEL_10;
    v22 = (AssetLoader_o *)processingAssetLoaderList;
    syncRoot = (AssetData_o *)processingAssetLoaderList->fields._syncRoot;
    if ( syncRoot )
    {
      processingAssetLoaderList = (System_Collections_Generic_List_object__o *)AssetData__IsSame_38479508(
                                                                                 syncRoot,
                                                                                 type,
                                                                                 name,
                                                                                 v21);
      if ( ((unsigned __int8)processingAssetLoaderList & 1) != 0 )
      {
        data = v22->fields.data;
        if ( data )
        {
          entryCount = data->fields.entryCount;
          if ( (entryCount & 0x80000000) == 0 )
            data->fields.entryCount = entryCount + 1;
          if ( callbackFunc )
            AssetLoader__add_endCallback2(v22, callbackFunc, v24);
          return 1;
        }
LABEL_10:
        sub_1BCAA3C(processingAssetLoaderList, *(_QWORD *)&type);
      }
    }
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
    ++v20;
    if ( !processingAssetLoaderList )
      goto LABEL_10;
  }
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.downLoadWaitList;
  if ( !processingAssetLoaderList )
    goto LABEL_10;
  System_Collections_Generic_Queue_object___GetEnumerator(
    &v40,
    (System_Collections_Generic_Queue_T__o *)processingAssetLoaderList,
    (const MethodInfo_3714470 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  v41 = v40;
  while ( 1 )
  {
    v25 = System_Collections_Generic_Queue_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_3317128 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    if ( !v25 )
    {
      v36 = 8;
      goto LABEL_22;
    }
    Current = System_Collections_Generic_Queue_Enumerator_object___get_Current(
                &v41,
                (const MethodInfo_3317218 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    v29 = (AssetManager_LoadWaitStatus_o *)Current;
    if ( !Current )
      sub_1BCAA3C(0LL, v27);
    klass = (AssetData_o *)Current[1].klass;
    if ( klass )
    {
      IsSame_38479508 = AssetData__IsSame_38479508(klass, type, name, v28);
      if ( IsSame_38479508 )
        break;
    }
  }
  v34 = v29->fields.data;
  if ( !v34 )
    sub_1BCAA3C(IsSame_38479508, v32);
  v35 = v34->fields.entryCount;
  if ( (v35 & 0x80000000) == 0 )
    v34->fields.entryCount = v35 + 1;
  AssetManager_LoadWaitStatus__AddCallback(v29, callbackFunc, v33);
  v36 = 7;
LABEL_22:
  System_Collections_Generic_Queue_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_3317118 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  return v25 && v36 == 7;
}


void __fastcall AssetManager__AddLoadWaitStatus(
        AssetManager_o *this,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x1
  System_Collections_Generic_Queue_T__o *downLoadWaitList; // x0

  if ( (byte_4B152B9 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_LoadWaitStatus_TypeInfo, callbackFunc, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__, v6, v7);
    byte_4B152B9 = 1;
  }
  v8 = sub_1BCAA2C(AssetManager_LoadWaitStatus_TypeInfo, callbackFunc, method, v3);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_QWORD *)(v8 + 24) = callbackFunc;
  sub_1BCA784((PartyOrganizationUtility_o *)(v8 + 24), (int64_t)callbackFunc, v9, v10, v11, v12, v13, v14);
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
    sub_1BCAA3C(0LL, v15);
  System_Collections_Generic_Queue_object___Enqueue(
    downLoadWaitList,
    (Il2CppObject *)v8,
    (const MethodInfo_37143B8 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
}


void __fastcall AssetManager__AddLoadWaitStatus_38518064(
        AssetManager_o *this,
        AssetData_o *info,
        const MethodInfo *method)
{
  __int64 v3; // x3
  AssetManager_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  v5 = this;
  if ( (byte_4B152BA & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_LoadWaitStatus_TypeInfo, info, method);
    this = (AssetManager_o *)sub_1BCA7E0(
                               &Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__,
                               v6,
                               v7);
    byte_4B152BA = 1;
  }
  if ( !info
    || (v5->fields.downloadSize += info->fields.size,
        v8 = sub_1BCAA2C(AssetManager_LoadWaitStatus_TypeInfo, info, method, v3),
        System_Object___ctor((Il2CppObject *)v8, 0LL),
        *(_QWORD *)(v8 + 16) = info,
        sub_1BCA784((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)info, v9, v10, v11, v12, v13, v14),
        (this = (AssetManager_o *)v5->fields.downLoadWaitList) == 0LL) )
  {
    sub_1BCAA3C(this, info);
  }
  System_Collections_Generic_Queue_object___Enqueue(
    (System_Collections_Generic_Queue_T__o *)this,
    (Il2CppObject *)v8,
    (const MethodInfo_37143B8 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
}


void __fastcall AssetManager__AddLoadWaitStatus_38528428(
        AssetManager_o *this,
        AssetData_o *info,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        System_String_array *resourceNames,
        const MethodInfo *method)
{
  AssetManager_o *v8; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  AssetManager_LoadWaitStatus_o *v11; // x23
  const MethodInfo *v12; // x4

  v8 = this;
  if ( (byte_4B152BB & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_LoadWaitStatus_TypeInfo, info, callbackFunc);
    this = (AssetManager_o *)sub_1BCA7E0(
                               &Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__,
                               v9,
                               v10);
    byte_4B152BB = 1;
  }
  if ( !info
    || (v8->fields.downloadSize += info->fields.size,
        v11 = (AssetManager_LoadWaitStatus_o *)sub_1BCAA2C(
                                                 AssetManager_LoadWaitStatus_TypeInfo,
                                                 info,
                                                 callbackFunc,
                                                 resourceNames),
        AssetManager_LoadWaitStatus___ctor_38528600(v11, info, callbackFunc, resourceNames, v12),
        (this = (AssetManager_o *)v8->fields.downLoadWaitList) == 0LL) )
  {
    sub_1BCAA3C(this, info);
  }
  System_Collections_Generic_Queue_object___Enqueue(
    (System_Collections_Generic_Queue_T__o *)this,
    (Il2CppObject *)v11,
    (const MethodInfo_37143B8 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
}


System_Collections_IEnumerator_o *__fastcall AssetManager__AssetObjectListSetupAndCall(
        AssetData_o *asset,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B152CA & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager__AssetObjectListSetupAndCall_d__184_TypeInfo, action, method);
    byte_4B152CA = 1;
  }
  v6 = sub_1BCAA2C(AssetManager__AssetObjectListSetupAndCall_d__184_TypeInfo, action, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = asset;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)asset, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 40) = action;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)action, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v6;
}


System_Collections_IEnumerator_o *__fastcall AssetManager__AssetObjectListSetupAndCall_38530112(
        AssetData_array *assetList,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B152CB & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager__AssetObjectListSetupAndCall_d__185_TypeInfo, action, method);
    byte_4B152CB = 1;
  }
  v6 = sub_1BCAA2C(AssetManager__AssetObjectListSetupAndCall_d__185_TypeInfo, action, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = assetList;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)assetList, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 40) = action;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)action, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall AssetManager__CancelDownloadAssetStorage(AssetManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_Queue_T__o *v13; // x20
  System_Collections_Generic_Queue_T__o *v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Collections_Generic_Queue_T__o *downLoadWaitList; // x0
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o **p_downLoadWaitList; // x21
  struct System_Object_array *array; // x8

  if ( (byte_4B152AE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo, v11, v12);
    byte_4B152AE = 1;
  }
  v13 = (System_Collections_Generic_Queue_T__o *)sub_1BCAA2C(
                                                   System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__TypeInfo,
                                                   method,
                                                   v2,
                                                   v3);
  System_Collections_Generic_Queue_object____ctor(
    v13,
    (const MethodInfo_3713DF0 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___ctor__);
  p_downLoadWaitList = &this->fields.downLoadWaitList;
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
LABEL_12:
    sub_1BCAA3C(downLoadWaitList, v14);
  while ( downLoadWaitList->fields._size > 0 )
  {
    downLoadWaitList = (System_Collections_Generic_Queue_T__o *)System_Collections_Generic_Queue_object___Dequeue(
                                                                  downLoadWaitList,
                                                                  (const MethodInfo_3714548 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__);
    if ( !downLoadWaitList )
      goto LABEL_12;
    array = downLoadWaitList->fields._array;
    v14 = downLoadWaitList;
    if ( array && SHIDWORD(array->m_Items[6]) <= 0 )
    {
      this->fields.downloadSize -= SLODWORD(array->m_Items[2]);
    }
    else
    {
      if ( !v13 )
        goto LABEL_12;
      System_Collections_Generic_Queue_object___Enqueue(
        v13,
        (Il2CppObject *)downLoadWaitList,
        (const MethodInfo_37143B8 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Enqueue__);
    }
    downLoadWaitList = (System_Collections_Generic_Queue_T__o *)*p_downLoadWaitList;
    if ( !*p_downLoadWaitList )
      goto LABEL_12;
  }
  this->fields.downLoadWaitList = (struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)v13;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.downLoadWaitList, (int64_t)v13, v15, v16, v17, v18, v19, v20);
  this->fields.isCancelDownload = 1;
}


void __fastcall AssetManager__CancelDownloadAssetStorageAll(AssetManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_Generic_Queue_T__o *downLoadWaitList; // x0

  if ( (byte_4B152AF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__, method, v2);
    byte_4B152AF = 1;
  }
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
  this->fields.downloadSize = 0LL;
  if ( !downLoadWaitList )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_Queue_object___Clear(
    downLoadWaitList,
    (const MethodInfo_3714078 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__);
}


bool __fastcall AssetManager__CheckDateVersion(System_String_o *dateVersion, const MethodInfo *method)
{
  __int64 v2; // x2
  AssetManager_c *v4; // x0
  System_String_o *assetBundleDateVersion; // x0

  if ( (byte_4B1527B & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    byte_4B1527B = 1;
  }
  v4 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
    v4 = AssetManager_TypeInfo;
  }
  assetBundleDateVersion = v4->static_fields->assetBundleDateVersion;
  if ( !assetBundleDateVersion )
    sub_1BCAA3C(0LL, method);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *processingAssetLoaderList; // x0
  int32_t v18; // w22
  const MethodInfo *v19; // x3
  AssetData_o *syncRoot; // x0
  bool v21; // w21
  Il2CppObject *Current; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x3
  AssetData_o *klass; // x0
  int v26; // w19
  System_Collections_Generic_Queue_Enumerator_T__o v28; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B152B8 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__,
      *(_QWORD *)&type,
      name);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__, v15, v16);
    byte_4B152B8 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
    goto LABEL_10;
  v18 = 0;
  while ( v18 < processingAssetLoaderList->fields._size )
  {
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               processingAssetLoaderList,
                                                                               v18,
                                                                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    if ( !processingAssetLoaderList )
      goto LABEL_10;
    syncRoot = (AssetData_o *)processingAssetLoaderList->fields._syncRoot;
    if ( syncRoot && AssetData__IsSame_38479508(syncRoot, type, name, v19) )
      return 1;
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
    ++v18;
    if ( !processingAssetLoaderList )
      goto LABEL_10;
  }
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.downLoadWaitList;
  if ( !processingAssetLoaderList )
LABEL_10:
    sub_1BCAA3C(processingAssetLoaderList, *(_QWORD *)&type);
  System_Collections_Generic_Queue_object___GetEnumerator(
    &v28,
    (System_Collections_Generic_Queue_T__o *)processingAssetLoaderList,
    (const MethodInfo_3714470 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  while ( 1 )
  {
    v21 = System_Collections_Generic_Queue_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_3317128 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__);
    if ( !v21 )
      break;
    Current = System_Collections_Generic_Queue_Enumerator_object___get_Current(
                &v28,
                (const MethodInfo_3317218 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__);
    if ( !Current )
      sub_1BCAA3C(0LL, v23);
    klass = (AssetData_o *)Current[1].klass;
    if ( klass && AssetData__IsSame_38479508(klass, type, name, v24) )
    {
      v26 = 7;
      goto LABEL_19;
    }
  }
  v26 = 8;
LABEL_19:
  System_Collections_Generic_Queue_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_3317118 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  return v21 && v26 == 7;
}


bool __fastcall AssetManager__CheckVersion(
        System_String_o *masterVersion,
        System_String_o *dateVersion,
        const MethodInfo *method)
{
  AssetManager_c *v5; // x0
  __int64 v6; // x1
  AssetManager_c *v7; // x0

  if ( (byte_4B1527A & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, dateVersion, method);
    byte_4B1527A = 1;
  }
  v5 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, dateVersion);
    v5 = AssetManager_TypeInfo;
  }
  if ( !System_String__op_Equality(v5->static_fields->assetBundleMasterVersion, masterVersion, 0LL) )
    return 0;
  v7 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v6);
    v7 = AssetManager_TypeInfo;
  }
  return System_String__op_Equality(v7->static_fields->assetBundleDateVersion, dateVersion, 0LL);
}


void __fastcall AssetManager__ClearCacheWithoutSystemAssets(AssetManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  System_Collections_Generic_Dictionary_object__object__o *assetBundleDic; // x0
  _BOOL8 v16; // x0
  __int64 v17; // x1
  AssetData_o *currentValue; // x21
  Il2CppClass *klass; // x0
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x1
  System_String_o *Path; // x23
  const MethodInfo *v23; // x2
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B152CC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, method, v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v6,
      v7);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v8,
      v9);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__,
      v10,
      v11);
    sub_1BCA7E0(&StringLiteral_12631/*"SYSTEM"*/, v12, v13);
    byte_4B152CC = 1;
  }
  memset(&v25, 0, sizeof(v25));
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.assetBundleDic, 0LL) )
  {
    assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
    if ( !assetBundleDic
      || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                        assetBundleDic,
                                                                                        (const MethodInfo_3265090 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
    {
      sub_1BCAA3C(assetBundleDic, v14);
    }
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v24,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
      (const MethodInfo_38D7DB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    v25 = v24;
    while ( 1 )
    {
      v16 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
              &v25,
              (const MethodInfo_3365640 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
      if ( !v16 )
        break;
      currentValue = (AssetData_o *)v25.fields._currentValue;
      if ( !v25.fields._currentValue )
        sub_1BCAA3C(v16, v17);
      klass = v25.fields._currentValue[2].klass;
      if ( !klass )
        sub_1BCAA3C(0LL, v17);
      if ( !System_String__Equals_62409600((System_String_o *)klass, (System_String_o *)StringLiteral_12631/*"SYSTEM"*/, 5, 0LL) )
      {
        AssetManager__ReleaseReservation(this, currentValue, v20);
        Path = AssetData__get_Path(currentValue, v21);
        if ( System_IO_File__Exists(Path, 0LL) )
        {
          System_IO_File__Delete(Path, 0LL);
          if ( !System_IO_File__Exists(Path, 0LL) )
            currentValue->fields.nowVersion = 0;
        }
      }
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
      &v25,
      (const MethodInfo_336563C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    AssetManager__ConfigWriteRequest(this, 1, v23);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetManager__ConfigWriteRequest(AssetManager_o *this, bool isFast, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_Dictionary_object__object__o *assetBundleDic; // x0
  int32_t Count; // w22
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  System_Text_StringBuilder_o *v32; // x21
  __int64 v33; // x1
  AssetManager_c *v34; // x0
  __int64 v35; // x1
  AssetManager_c *v36; // x0
  __int64 v37; // x1
  AssetManager_c *v38; // x0
  _BOOL8 v39; // x0
  __int64 v40; // x1
  Il2CppObject *currentValue; // x24
  Il2CppObject *requestConfigWriteData; // x22
  System_String_o *v43; // x21
  System_Text_Encoding_o *UTF8; // x0
  __int64 v45; // x1
  __int64 v46; // x1
  System_Byte_array *v47; // x24
  System_String_o *v48; // x1
  __int64 v49; // x1
  System_String_o *v50; // x21
  struct System_String_o *v51; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v58; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v59; // [xsp+20h] [xbp-80h] BYREF
  uint32_t v60; // [xsp+48h] [xbp-58h] BYREF
  bool lockTaken; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_4B152B2 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, isFast, method);
    sub_1BCA7E0(&CatAndMouseGame_TypeInfo, v5, v6);
    sub_1BCA7E0(&Crc32_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, v11, v12);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v13,
      v14);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v15,
      v16);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v17,
      v18);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v19, v20);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__,
      v21,
      v22);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_25411/*"~"*/, v25, v26);
    byte_4B152B2 = 1;
  }
  memset(&v59, 0, sizeof(v59));
  lockTaken = 0;
  v60 = 0;
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic )
    goto LABEL_35;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         assetBundleDic,
         (const MethodInfo_3264F30 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) < 1 )
    return;
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic )
    goto LABEL_35;
  Count = System_Collections_Generic_Dictionary_object__object___get_Count(
            assetBundleDic,
            (const MethodInfo_3264F30 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__);
  v32 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v29, v30, v31);
  System_Text_StringBuilder___ctor_61556468(v32, 60 * Count, 0LL);
  if ( !v32 )
    goto LABEL_35;
  System_Text_StringBuilder__Append_61565444(v32, 0x40u, 0LL);
  v34 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v33);
    v34 = AssetManager_TypeInfo;
  }
  System_Text_StringBuilder__Append_61563116(v32, v34->static_fields->assetBundleMasterVersion, 0LL);
  if ( !System_String__IsNullOrEmpty(AssetManager_TypeInfo->static_fields->assetBundleDateVersion, 0LL) )
  {
    System_Text_StringBuilder__Append_61565444(v32, 0x2Cu, 0LL);
    v36 = AssetManager_TypeInfo;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v35);
      v36 = AssetManager_TypeInfo;
    }
    System_Text_StringBuilder__Append_61563116(v32, v36->static_fields->assetBundleDateVersion, 0LL);
    if ( !System_String__IsNullOrEmpty(AssetManager_TypeInfo->static_fields->assetBundleBuildVersion, 0LL) )
    {
      System_Text_StringBuilder__Append_61565444(v32, 0x2Cu, 0LL);
      v38 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v37);
        v38 = AssetManager_TypeInfo;
      }
      System_Text_StringBuilder__Append_61563116(v32, v38->static_fields->assetBundleBuildVersion, 0LL);
    }
  }
  System_Text_StringBuilder__Append_61565444(v32, 0xAu, 0LL);
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      assetBundleDic,
                                                                                      (const MethodInfo_3265090 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
LABEL_35:
    sub_1BCAA3C(assetBundleDic, isFast);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v58,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_38D7DB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v59 = v58;
  while ( 1 )
  {
    v39 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v59,
            (const MethodInfo_3365640 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v39 )
      break;
    currentValue = v59.fields._currentValue;
    if ( !v59.fields._currentValue )
      sub_1BCAA3C(v39, v40);
    System_Text_StringBuilder__Append_61565612(v32, (int32_t)v59.fields._currentValue[2].monitor, 0LL);
    System_Text_StringBuilder__Append_61565444(v32, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_61563116(v32, (System_String_o *)currentValue[2].klass, 0LL);
    System_Text_StringBuilder__Append_61565444(v32, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_61565612(v32, (int32_t)currentValue[3].klass, 0LL);
    System_Text_StringBuilder__Append_61565444(v32, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_61565788(v32, HIDWORD(currentValue[3].klass), 0LL);
    System_Text_StringBuilder__Append_61565444(v32, 0x2Cu, 0LL);
    System_Text_StringBuilder__Append_61563116(v32, (System_String_o *)currentValue[1].monitor, 0LL);
    System_Text_StringBuilder__Append_61563116(v32, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v59,
    (const MethodInfo_336563C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  requestConfigWriteData = (Il2CppObject *)this->fields.requestConfigWriteData;
  lockTaken = 0;
  System_Threading_Monitor__Enter_63627392(requestConfigWriteData, &lockTaken, 0LL);
  v43 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v32->klass->vtable._3_ToString.method)(
                             v32,
                             v32->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_1BCAA3C(0LL, v45);
  v47 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._19_GetBytes.method)(
                               UTF8,
                               v43,
                               UTF8->klass->vtable._20_GetBytes.methodPtr);
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo, v46);
  v60 = Crc32__Compute(v47, 0LL);
  v48 = System_UInt32__ToString((uint32_t)&v60, 0LL);
  v50 = System_String__Concat_62414484(
          (System_String_o *)StringLiteral_25411/*"~"*/,
          v48,
          (System_String_o *)StringLiteral_43/*"\n"*/,
          v43,
          0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v49);
  v51 = CatAndMouseGame__CatGame8(v50, 0LL);
  this->fields.requestConfigWriteData = v51;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.requestConfigWriteData,
    (int64_t)v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.writeRequestThread, 0LL, v4, v5, v6, v7, v8, v9);
  if ( this->fields.reserveWriteRequest )
    AssetManager__StartThreadConfigWriteRequest(this, v10);
}


System_String_o *__fastcall AssetManager__ConvertDownloadSizeToString(
        AssetManager_o *this,
        double size,
        const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_String_o *v19; // x0
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_String_o *v27; // x19
  int64_t v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x1
  unsigned int i; // w21
  System_String_o format; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B152A8 & 1) == 0 )
  {
    sub_1BCA7E0(&string___TypeInfo, method, v3);
    sub_1BCA7E0(&StringLiteral_8294/*"KB"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_25361/*"{0}{1}"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_9338/*"N2"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_13432/*"TB"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_2652/*"B"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_8730/*"MB"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_7005/*"GB"*/, v17, v18);
    byte_4B152A8 = 1;
  }
  v19 = (System_String_o *)sub_1BCA888(string___TypeInfo, 5LL);
  if ( !v19 )
    sub_1BCAA3C(0LL, v20);
  v27 = v19;
  if ( !LODWORD(v19[1].klass) )
    goto LABEL_14;
  v28 = StringLiteral_2652/*"B"*/;
  v19[1].monitor = (void *)StringLiteral_2652/*"B"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v19[1].monitor, v28, v21, v22, v23, v24, v25, v26);
  if ( LODWORD(v27[1].klass) <= 1 )
    goto LABEL_14;
  v35 = StringLiteral_8294/*"KB"*/;
  v27[1].fields = (System_String_Fields)StringLiteral_8294/*"KB"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v27[1].fields, v35, v29, v30, v31, v32, v33, v34);
  if ( LODWORD(v27[1].klass) <= 2 )
    goto LABEL_14;
  v42 = StringLiteral_8730/*"MB"*/;
  v27[2].klass = (System_String_c *)StringLiteral_8730/*"MB"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v27[2], v42, v36, v37, v38, v39, v40, v41);
  if ( LODWORD(v27[1].klass) <= 3 )
    goto LABEL_14;
  v49 = StringLiteral_7005/*"GB"*/;
  v27[2].monitor = (void *)StringLiteral_7005/*"GB"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v27[2].monitor, v49, v43, v44, v45, v46, v47, v48);
  if ( LODWORD(v27[1].klass) <= 4 )
    goto LABEL_14;
  v56 = StringLiteral_13432/*"TB"*/;
  v27[2].fields = (System_String_Fields)StringLiteral_13432/*"TB"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v27[2].fields, v56, v50, v51, v52, v53, v54, v55);
  for ( i = 0; i != 4; ++i )
  {
    if ( size < 1000.0 )
      break;
    size = size / 1000.0;
    *(double *)&format.klass = size;
  }
  v19 = System_Double__ToString_63111624(1000.0, &format, (const MethodInfo *)StringLiteral_9338/*"N2"*/);
  if ( i >= LODWORD(v27[1].klass) )
LABEL_14:
    sub_1BCAA44(v19, v20);
  return System_String__Format_62415592(
           (System_String_o *)StringLiteral_25361/*"{0}{1}"*/,
           (Il2CppObject *)v19,
           *((Il2CppObject **)&v27[1].monitor + i),
           0LL);
}


void __fastcall AssetManager__DebugLog(AssetManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_Queue_T__o *downLoadWaitList; // x0
  __int64 v23; // x1
  struct System_Collections_Generic_List_AssetLoader__o *processingAssetLoaderList; // x8
  int size; // w8
  int v26; // w9
  _BOOL8 v27; // x0
  __int64 v28; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v29; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v30; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v31; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4B152A2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__, v4, v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v6,
      v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__, v8, v9);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v10,
      v11);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__,
      v12,
      v13);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v14,
      v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__, v18, v19);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__,
      v20,
      v21);
    byte_4B152A2 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  memset(&v30, 0, sizeof(v30));
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
    goto LABEL_22;
  System_Collections_Generic_Queue_object___GetEnumerator(
    (System_Collections_Generic_Queue_Enumerator_T__o *)&v29,
    downLoadWaitList,
    (const MethodInfo_3714470 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__GetEnumerator__);
  v31 = v29;
  while ( System_Collections_Generic_Queue_Enumerator_object___MoveNext(
            (System_Collections_Generic_Queue_Enumerator_T__o *)&v31,
            (const MethodInfo_3317128 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__MoveNext__) )
  {
    if ( !System_Collections_Generic_Queue_Enumerator_object___get_Current(
            (System_Collections_Generic_Queue_Enumerator_T__o *)&v31,
            (const MethodInfo_3317218 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__get_Current__) )
      sub_1BCAA3C(0LL, v23);
  }
  System_Collections_Generic_Queue_Enumerator_object___Dispose(
    (System_Collections_Generic_Queue_Enumerator_T__o *)&v31,
    (const MethodInfo_3317118 *)Method_System_Collections_Generic_Queue_Enumerator_AssetManager_LoadWaitStatus__Dispose__);
  processingAssetLoaderList = this->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
    goto LABEL_22;
  size = processingAssetLoaderList->fields._size;
  v26 = -1;
  do
    ++v26;
  while ( v26 < size );
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.assetBundleDic;
  if ( !downLoadWaitList )
    goto LABEL_22;
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                (System_Collections_Generic_Dictionary_object__object__o *)downLoadWaitList,
                                                                (const MethodInfo_3265090 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !downLoadWaitList )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v29,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)downLoadWaitList,
    (const MethodInfo_38D7DB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v30 = v29;
  while ( 1 )
  {
    v27 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v30,
            (const MethodInfo_3365640 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v27 )
      break;
    if ( !v30.fields._currentValue )
      sub_1BCAA3C(v27, v28);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v30,
    (const MethodInfo_336563C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  downLoadWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.assetResourceDic;
  if ( !downLoadWaitList
    || (downLoadWaitList = (System_Collections_Generic_Queue_T__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                      (System_Collections_Generic_Dictionary_object__object__o *)downLoadWaitList,
                                                                      (const MethodInfo_3265090 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
LABEL_22:
    sub_1BCAA3C(downLoadWaitList, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v29,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)downLoadWaitList,
    (const MethodInfo_38D7DB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v30 = v29;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v30,
            (const MethodInfo_3365640 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__) )
    ;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v30,
    (const MethodInfo_336563C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
}


System_Collections_IEnumerator_o *__fastcall AssetManager__DelayLoadStart(
        AssetManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B152BE & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager__DelayLoadStart_d__149_TypeInfo, method, v2);
    byte_4B152BE = 1;
  }
  v5 = sub_1BCAA2C(AssetManager__DelayLoadStart_d__149_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall AssetManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AssetManager_c *v3; // x0

  if ( (byte_4B15273 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, v1, v2);
    byte_4B15273 = 1;
  }
  v3 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v1);
    v3 = AssetManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v3->static_fields->SAVE_KEY, 0LL);
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
        AssetManager__AddLoadWaitStatus_38528428(this, AssetData, callbackFunc, 0LL, v12);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetManager__DownloadAssetStorageAttribute(
        AssetManager_o *this,
        System_String_o *attrib,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_Dictionary_object__object__o *assetBundleDic; // x0
  _BOOL8 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  AssetData_o *currentValue; // x22
  int monitor; // w8
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v23; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B152A9 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__,
      attrib,
      *(_QWORD *)&loadParallelMax);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v9,
      v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v11,
      v12);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__,
      v13,
      v14);
    byte_4B152A9 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      assetBundleDic,
                                                                                      (const MethodInfo_3265090 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
    sub_1BCAA3C(assetBundleDic, attrib);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v23,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_38D7DB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v16 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v23,
            (const MethodInfo_3365640 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v16 )
      break;
    currentValue = (AssetData_o *)v23.fields._currentValue;
    if ( !v23.fields._currentValue )
      sub_1BCAA3C(v16, v17);
    monitor = (int)v23.fields._currentValue[2].monitor;
    if ( monitor < 1 || monitor == HIDWORD(v23.fields._currentValue[2].monitor) )
    {
      if ( System_String__op_Equality(attrib, (System_String_o *)v23.fields._currentValue[2].klass, 0LL)
        && currentValue->fields.nowVersion != currentValue->fields.newVersion )
      {
        AssetManager__AddLoadWaitStatus_38518064(this, currentValue, v21);
      }
    }
    else
    {
      AssetManager__AddLoadWaitStatus_38518064(this, (AssetData_o *)v23.fields._currentValue, v18);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v23,
    (const MethodInfo_336563C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  this->fields.loadParallelMax = loadParallelMax;
  AssetManager__LoadStart(this, v22);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4B152A7 & 1) == 0 )
  {
    sub_1BCA7E0(
      &AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_TypeInfo,
      attrib,
      *(_QWORD *)&loadParallelMax);
    byte_4B152A7 = 1;
  }
  v7 = sub_1BCAA2C(
         AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_TypeInfo,
         attrib,
         *(_QWORD *)&loadParallelMax,
         method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = attrib;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)attrib, v14, v15, v16, v17, v18, v19);
  *(_DWORD *)(v7 + 56) = loadParallelMax;
  return (System_Collections_IEnumerator_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetManager__DownloadAssetStorageAttribute_38521004(
        AssetManager_o *this,
        System_String_array *attribList,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  AssetManager_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x9
  System_String_o *v18; // x8
  __int64 v19; // x22
  __int64 v20; // x24
  unsigned __int64 v21; // x10
  _BOOL8 v22; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x2
  AssetData_o *currentValue; // x22
  int monitor; // w8
  int monitor_high; // w9
  unsigned __int64 v28; // x26
  __int64 v29; // x25
  _BOOL8 v30; // x0
  __int64 v31; // x1
  const MethodInfo *v32; // x2
  const MethodInfo *v34; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v35; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v36; // [xsp+20h] [xbp-70h] BYREF

  v6 = this;
  if ( (byte_4B152AA & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__,
      attribList,
      *(_QWORD *)&loadParallelMax);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v9,
      v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v11,
      v12);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__,
      v13,
      v14);
    this = (AssetManager_o *)sub_1BCA7E0(&StringLiteral_865/*", "*/, v15, v16);
    byte_4B152AA = 1;
  }
  memset(&v36, 0, sizeof(v36));
  if ( !attribList )
LABEL_33:
    sub_1BCAA3C(this, attribList);
  v17 = *(_QWORD *)&attribList->max_length;
  if ( !v17 )
    return;
  if ( !(_DWORD)v17 )
    goto LABEL_13;
  v18 = attribList->m_Items[0];
  if ( (_DWORD)v17 == 1 )
  {
    AssetManager__DownloadAssetStorageAttribute(v6, attribList->m_Items[0], 1, method);
    return;
  }
  if ( (int)v17 >= 2 )
  {
    if ( (v17 & 0xFFFFFFFE) != 0 )
    {
      v19 = 0LL;
      v20 = (unsigned int)*(_QWORD *)&attribList->max_length - 2LL;
      do
      {
        this = (AssetManager_o *)System_String__Concat_62412480(
                                   v18,
                                   (System_String_o *)StringLiteral_865/*", "*/,
                                   attribList->m_Items[v19 + 1],
                                   0LL);
        if ( v20 == v19 )
          goto LABEL_14;
        v21 = v19 + 2;
        v18 = (System_String_o *)this;
        ++v19;
      }
      while ( v21 < attribList->max_length );
    }
LABEL_13:
    sub_1BCAA44(this, attribList);
  }
LABEL_14:
  this = (AssetManager_o *)v6->fields.assetBundleDic;
  if ( !this )
    goto LABEL_33;
  this = (AssetManager_o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                             (System_Collections_Generic_Dictionary_object__object__o *)this,
                             (const MethodInfo_3265090 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !this )
    goto LABEL_33;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v35,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_38D7DB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v36 = v35;
LABEL_17:
  while ( 1 )
  {
    v22 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v36,
            (const MethodInfo_3365640 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v22 )
      break;
    currentValue = (AssetData_o *)v36.fields._currentValue;
    if ( !v36.fields._currentValue )
      sub_1BCAA3C(v22, v23);
    monitor = (int)v36.fields._currentValue[2].monitor;
    monitor_high = HIDWORD(v36.fields._currentValue[2].monitor);
    if ( monitor < 1 )
    {
      if ( monitor != monitor_high && (int)*(_QWORD *)&attribList->max_length >= 1 )
      {
        v28 = 0LL;
        v29 = (unsigned int)*(_QWORD *)&attribList->max_length - 1LL;
        while ( 1 )
        {
          v30 = System_String__op_Equality(attribList->m_Items[v28], currentValue->fields.attrib, 0LL);
          if ( v30 )
            break;
          if ( v29 == v28++ )
            goto LABEL_17;
          if ( v28 >= attribList->max_length )
            sub_1BCAA44(v30, v31);
        }
        AssetManager__AddLoadWaitStatus_38518064(v6, currentValue, v32);
      }
    }
    else if ( monitor != monitor_high )
    {
      AssetManager__AddLoadWaitStatus_38518064(v6, (AssetData_o *)v36.fields._currentValue, v24);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v36,
    (const MethodInfo_336563C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  v6->fields.loadParallelMax = loadParallelMax;
  AssetManager__LoadStart(v6, v34);
}


bool __fastcall AssetManager__DownloadAssetStorage_38510352(
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
    sub_1BCAA3C(this, 0LL);
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
        sub_1BCAA44(this, nameList);
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

  if ( (byte_4B152C5 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_1BCA7E0(
                               &Method_System_Collections_Generic_Dictionary_string__AssetData__TryGetValue__,
                               dic,
                               name);
    byte_4B152C5 = 1;
  }
  value = 0LL;
  if ( !name )
    return 0LL;
  if ( !dic )
    sub_1BCAA3C(this, dic);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)dic,
         (Il2CppObject *)name,
         &value,
         (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__AssetData__TryGetValue__) )
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_String_o *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_List_object__o *v27; // x19
  __int64 v28; // x1
  System_Collections_Generic_Dictionary_object__object__o *assetBundleDic; // x0
  _BOOL8 v30; // x0
  __int64 v31; // x1
  Il2CppObject *currentValue; // x25
  System_String_o *monitor; // x0
  _BOOL8 v34; // x0
  __int64 v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  Il2CppObject *v42; // x1
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v48; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v49; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B152AC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, path, method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v9,
      v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ToArray__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v17, v18);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__,
      v19,
      v20);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v21, v22);
    byte_4B152AC = 1;
  }
  memset(&v49, 0, sizeof(v49));
  v23 = System_String__Concat_62401220(path, (System_String_o *)StringLiteral_1120/*"/"*/, 0LL);
  v27 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v24,
                                                       v25,
                                                       v26);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic )
    goto LABEL_21;
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                assetBundleDic,
                                                                                (const MethodInfo_3265090 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !assetBundleDic )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v48,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_38D7DB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v49 = v48;
  while ( 1 )
  {
    v30 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v49,
            (const MethodInfo_3365640 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v30 )
      break;
    currentValue = v49.fields._currentValue;
    if ( !v49.fields._currentValue )
      sub_1BCAA3C(v30, v31);
    monitor = (System_String_o *)v49.fields._currentValue[1].monitor;
    if ( !monitor )
      sub_1BCAA3C(0LL, v31);
    v34 = System_String__StartsWith(monitor, v23, 0LL);
    if ( v34 )
    {
      if ( !v27 )
        sub_1BCAA3C(v34, v35);
      v42 = (Il2CppObject *)currentValue[1].monitor;
      items = v27->fields._items;
      v44 = Method_System_Collections_Generic_List_string__Add__;
      ++v27->fields._version;
      if ( !items )
        sub_1BCAA3C(v34, v42);
      size = v27->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v27,
          v42,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v46 = &items->obj.klass + size;
        v27->fields._size = size + 1;
        v46[4] = (Il2CppClass *)v42;
        sub_1BCA784((PartyOrganizationUtility_o *)(v46 + 4), (int64_t)v42, v36, v37, v38, v39, v40, v41);
      }
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v49,
    (const MethodInfo_336563C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  if ( !v27 )
LABEL_21:
    sub_1BCAA3C(assetBundleDic, v28);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v27,
                                  (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
}


AssetData_array *__fastcall AssetManager__GetAssetStorage_38513892(
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
  if ( (byte_4B152C6 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_1BCA7E0(&AssetData___TypeInfo, nameList, method);
    byte_4B152C6 = 1;
  }
  if ( !nameList )
LABEL_17:
    sub_1BCAA3C(this, nameList);
  this = (AssetManager_o *)sub_1BCA888(AssetData___TypeInfo, nameList->max_length);
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
            this = (AssetManager_o *)sub_1BCA91C(this, v7->obj.klass->_1.element_class);
            if ( !this )
            {
              v19 = sub_1BCAA60(0LL);
              sub_1BCA908(v19, 0LL);
            }
            if ( v8 >= v7->max_length )
              break;
            p_isUseDebugStatus->klass = (PartyOrganizationUtility_c *)v11;
            sub_1BCA784(p_isUseDebugStatus, (int64_t)v11, v12, v13, v14, v15, v16, v17);
          }
        }
      }
      LODWORD(v6) = nameList->max_length;
      ++v8;
      p_isUseDebugStatus = (PartyOrganizationUtility_o *)((char *)p_isUseDebugStatus + 8);
      if ( (__int64)v8 >= (int)v6 )
        return v7;
    }
    sub_1BCAA44(this, nameList);
  }
  return v7;
}


bool __fastcall AssetManager__GetAssetStorage_38514348(
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


bool __fastcall AssetManager__GetAsset_38504616(
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


bool __fastcall AssetManager__GetAsset_38504904(
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


AssetData_o *__fastcall AssetManager__GetAsset_38529496(
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
  __int64 v2; // x2
  AssetManager_c *v3; // x0

  if ( (byte_4B1527D & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, v1, v2);
    byte_4B1527D = 1;
  }
  v3 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v1);
    v3 = AssetManager_TypeInfo;
  }
  return v3->static_fields->assetBundleDateVersion;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_object__o *processingAssetLoaderList; // x0
  int64_t downloadSize; // x21
  int32_t v8; // w20
  int32_t LoadSize; // w8

  if ( (byte_4B152AB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v4, v5);
    byte_4B152AB = 1;
  }
  processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
LABEL_8:
    sub_1BCAA3C(processingAssetLoaderList, method);
  downloadSize = this->fields.downloadSize;
  v8 = 0;
  while ( v8 < processingAssetLoaderList->fields._size )
  {
    processingAssetLoaderList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               processingAssetLoaderList,
                                                                               v8,
                                                                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    if ( processingAssetLoaderList )
    {
      LoadSize = AssetLoader__get_LoadSize((AssetLoader_o *)processingAssetLoaderList, method);
      processingAssetLoaderList = (System_Collections_Generic_List_object__o *)this->fields.processingAssetLoaderList;
      downloadSize -= LoadSize;
      ++v8;
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
  __int64 v2; // x2
  AssetManager_c *v3; // x0

  if ( (byte_4B1527C & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, v1, v2);
    byte_4B1527C = 1;
  }
  v3 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v1);
    v3 = AssetManager_TypeInfo;
  }
  return v3->static_fields->assetBundleMasterVersion;
}


System_Collections_IEnumerator_o *__fastcall AssetManager__InitCR(AssetManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B152B0 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager__InitCR_d__131_TypeInfo, method, v2);
    byte_4B152B0 = 1;
  }
  v5 = sub_1BCAA2C(AssetManager__InitCR_d__131_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall AssetManager__Initialize(AssetManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_IEnumerator_o *initCRW; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  void *assetBundleReleaseDic; // x0
  char v38; // w28
  const MethodInfo *v39; // x1
  int v40; // w28
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x1
  int32_t v43; // w20
  __int64 v44; // x1
  Il2CppObject *Item; // x21
  int32_t v46; // w2
  int v47; // w8
  System_String_o *Path; // x0
  __int64 v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  AssetManager_c *v56; // x8
  int64_t v57; // x20
  struct AssetManager_StaticFields *static_fields; // x0
  __int64 v59; // x1
  struct AssetManager_StaticFields *v60; // x8
  System_String_o *cachePathName; // x20
  System_String_o *configFileName; // x21
  System_String_o *v63; // x0
  System_String_o *v64; // x0
  struct AssetManager_StaticFields *v65; // x8
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  struct AssetManager_StaticFields *v72; // x8
  System_String_o *v73; // x20
  System_String_o *v74; // x0
  System_String_o *v75; // x0
  struct AssetManager_StaticFields *v76; // x8
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  struct AssetManager_StaticFields *v83; // x8
  System_String_o *v84; // x20
  System_String_o *v85; // x0
  System_String_o *v86; // x0
  struct AssetManager_StaticFields *v87; // x8
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v94; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o i; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B152A4 & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, method, v2);
    sub_1BCA7E0(&AssetManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, v10, v11);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v12,
      v13);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v14,
      v15);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v16,
      v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssetLoader__Clear__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v22, v23);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__, v26, v27);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__,
      v28,
      v29);
    byte_4B152A4 = 1;
  }
  memset(&i, 0, sizeof(i));
  initCRW = this->fields.initCRW;
  if ( initCRW )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, initCRW, 0LL);
    this->fields.initCRW = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.initCRW, 0LL, v31, v32, v33, v34, v35, v36);
  }
  assetBundleReleaseDic = this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_44;
  System_Collections_Generic_Dictionary_object__object___Clear(
    (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
    (const MethodInfo_32653E8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
  assetBundleReleaseDic = this->fields.assetBundleDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_44;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
         (const MethodInfo_3264F30 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) < 1 )
  {
    v40 = 0;
  }
  else
  {
    assetBundleReleaseDic = this->fields.assetBundleDic;
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    assetBundleReleaseDic = System_Collections_Generic_Dictionary_object__object___get_Values(
                              (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
                              (const MethodInfo_3265090 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v94,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
      (const MethodInfo_38D7DB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    v38 = 0;
    for ( i = v94;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &i,
            (const MethodInfo_3365640 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
          v38 |= AssetData__ReleaseData((AssetData_o *)i.fields._currentValue, v39) )
    {
      if ( !i.fields._currentValue )
        sub_1BCAA3C(0LL, v39);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
      &i,
      (const MethodInfo_336563C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    assetBundleReleaseDic = this->fields.assetBundleDic;
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    System_Collections_Generic_Dictionary_object__object___Clear(
      (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
      (const MethodInfo_32653E8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
    v40 = v38 != 0;
  }
  assetBundleReleaseDic = this->fields.assetResourceDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_44;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
         (const MethodInfo_3264F30 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) >= 1 )
  {
    assetBundleReleaseDic = this->fields.assetResourceDic;
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    assetBundleReleaseDic = System_Collections_Generic_Dictionary_object__object___get_Values(
                              (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
                              (const MethodInfo_3265090 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v94,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
      (const MethodInfo_38D7DB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
    for ( i = v94;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &i,
            (const MethodInfo_3365640 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
          v40 |= AssetData__ReleaseData((AssetData_o *)i.fields._currentValue, v42) )
    {
      if ( !i.fields._currentValue )
        sub_1BCAA3C(0LL, v42);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
      &i,
      (const MethodInfo_336563C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
    assetBundleReleaseDic = this->fields.assetResourceDic;
    if ( !assetBundleReleaseDic )
      goto LABEL_44;
    System_Collections_Generic_Dictionary_object__object___Clear(
      (System_Collections_Generic_Dictionary_object__object__o *)assetBundleReleaseDic,
      (const MethodInfo_32653E8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
  }
  if ( (v40 & 1) != 0 )
    AssetManager__RequestUnloadUnusedAssets(this, 0LL, v41);
  assetBundleReleaseDic = this->fields.processingAssetLoaderList;
  if ( !assetBundleReleaseDic )
    goto LABEL_44;
  if ( *((int *)assetBundleReleaseDic + 6) >= 1 )
  {
    v43 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)assetBundleReleaseDic,
               v43,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v44);
      UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)Item, 0LL);
      assetBundleReleaseDic = this->fields.processingAssetLoaderList;
      if ( !assetBundleReleaseDic )
        goto LABEL_44;
      v46 = *((_DWORD *)assetBundleReleaseDic + 6);
      ++v43;
    }
    while ( v43 < v46 );
    v47 = *((_DWORD *)assetBundleReleaseDic + 7) + 1;
    *((_DWORD *)assetBundleReleaseDic + 6) = 0;
    *((_DWORD *)assetBundleReleaseDic + 7) = v47;
    if ( v46 >= 1 )
      System_Array__Clear(*((System_Array_o **)assetBundleReleaseDic + 2), 0, v46, 0LL);
  }
  assetBundleReleaseDic = this->fields.downLoadWaitList;
  if ( !assetBundleReleaseDic )
LABEL_44:
    sub_1BCAA3C(assetBundleReleaseDic, initCRW);
  System_Collections_Generic_Queue_object___Clear(
    (System_Collections_Generic_Queue_T__o *)assetBundleReleaseDic,
    (const MethodInfo_3714078 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Clear__);
  this->fields.downloadSize = 0LL;
  this->fields.isCancelDownload = 0;
  Path = AssetStorageCache__GetPath(0LL);
  v56 = AssetManager_TypeInfo;
  v57 = (int64_t)Path;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v49);
    v56 = AssetManager_TypeInfo;
  }
  static_fields = v56->static_fields;
  static_fields->cachePathName = (struct System_String_o *)v57;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->cachePathName, v57, v50, v51, v52, v53, v54, v55);
  v60 = AssetManager_TypeInfo->static_fields;
  cachePathName = v60->cachePathName;
  configFileName = v60->configFileName;
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v59);
  v63 = AndroidUtil__ConvertFileNameIfNeed(configFileName, 0LL);
  v64 = System_String__Concat_62401220(cachePathName, v63, 0LL);
  v65 = AssetManager_TypeInfo->static_fields;
  v65->cacheListFileName = v64;
  sub_1BCA784((PartyOrganizationUtility_o *)&v65->cacheListFileName, (int64_t)v64, v66, v67, v68, v69, v70, v71);
  v72 = AssetManager_TypeInfo->static_fields;
  v73 = v72->cachePathName;
  v74 = AndroidUtil__ConvertFileNameIfNeed(v72->createConfigFileName, 0LL);
  v75 = System_String__Concat_62401220(v73, v74, 0LL);
  v76 = AssetManager_TypeInfo->static_fields;
  v76->createCacheListFileName = v75;
  sub_1BCA784((PartyOrganizationUtility_o *)&v76->createCacheListFileName, (int64_t)v75, v77, v78, v79, v80, v81, v82);
  v83 = AssetManager_TypeInfo->static_fields;
  v84 = v83->cachePathName;
  v85 = AndroidUtil__ConvertFileNameIfNeed(v83->backConfigFileName, 0LL);
  v86 = System_String__Concat_62401220(v84, v85, 0LL);
  v87 = AssetManager_TypeInfo->static_fields;
  v87->backCacheListFileName = v86;
  sub_1BCA784((PartyOrganizationUtility_o *)&v87->backCacheListFileName, (int64_t)v86, v88, v89, v90, v91, v92, v93);
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
    sub_1BCA784((PartyOrganizationUtility_o *)p_initCRW, (int64_t)inited, v5, v6, v7, v8, v9, v10);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, this->fields.initCRW, 0LL);
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

  if ( (byte_4B152C1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__, name, method);
    byte_4B152C1 = 1;
  }
  assetBundleDic = this->fields.assetBundleDic;
  if ( !assetBundleDic )
    sub_1BCAA3C(0LL, name);
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)assetBundleDic,
           (Il2CppObject *)name,
           (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__);
}


bool __fastcall AssetManager__IsExistAssetStorage_38506796(
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
    sub_1BCAA3C(this, 0LL);
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
        sub_1BCAA44(this, nameList);
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


bool __fastcall AssetManager__IsNeedDownload_38507344(
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
    sub_1BCAA3C(this, 0LL);
  v4 = *(_QWORD *)&nameList->max_length;
  v6 = (int)v4 > 0;
  if ( (int)v4 >= 1 )
  {
    v7 = this;
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)v4 )
        sub_1BCAA44(this, nameList);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  System_Collections_Generic_Dictionary_object__object__o *assetBundleReleaseDic; // x0
  int v43; // w24
  _BOOL8 v44; // x0
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x2
  float v47; // s0
  __int64 v48; // x1
  System_String_o *Path; // x20
  __int64 v50; // x1
  int64_t FreeSize; // x20
  ManagerConfig_c *v52; // x0
  AssetManager_c *v53; // x0
  __int64 v54; // x1
  AssetManager_c *v55; // x0
  AssetManager_c *v56; // x0
  System_String_o *createCacheListFileName; // x20
  System_Text_Encoding_o *UTF8; // x22
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  System_IO_StreamWriter_o *v62; // x21
  __int64 v63; // x0
  __int64 v64; // x1
  __int64 v65; // x1
  AssetManager_c *v66; // x0
  AssetManager_c *v67; // x0
  __int64 v68; // x1
  AssetManager_c *v69; // x0
  AssetManager_c *v70; // x0
  void *v71; // x1
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  __int64 v78; // x0
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  System_IO_IOException_o *v82; // x20
  __int64 v83; // x1
  System_String_o *v84; // x0
  __int64 v85; // x1
  __int64 v86; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v87; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v88; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_4B152B5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetManager_OnClickRetryDialog__, method, v2);
    sub_1BCA7E0(&AssetManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&ErrorDialog_ClickDelegate_TypeInfo, v6, v7);
    sub_1BCA7E0(&CommonServicePluginScript_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, v12, v13);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v14,
      v15);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v16,
      v17);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v18,
      v19);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&ManagementManager_TypeInfo, v22, v23);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v26, v27);
    sub_1BCA7E0(&System_IO_StreamWriter_TypeInfo, v28, v29);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__,
      v30,
      v31);
    sub_1BCA7E0(&StringLiteral_2157/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_16105/*"[FFFF80]Download error for debug"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_11594/*"SCRIPT"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_2158/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v40, v41);
    byte_4B152B5 = 1;
  }
  memset(&v88, 0, sizeof(v88));
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
    goto LABEL_49;
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                       assetBundleReleaseDic,
                                                                                       (const MethodInfo_3265090 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !assetBundleReleaseDic )
    goto LABEL_49;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v87,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleReleaseDic,
    (const MethodInfo_38D7DB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v43 = 0;
  v88 = v87;
  while ( 1 )
  {
    v44 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v88,
            (const MethodInfo_3365640 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v44 )
      break;
    if ( !v88.fields._currentValue )
      sub_1BCAA3C(v44, v45);
    if ( !HIDWORD(v88.fields._currentValue[5].klass) )
    {
      if ( v88.fields._currentValue[4].monitor )
        v43 |= AssetData__ReleaseData((AssetData_o *)v88.fields._currentValue, v45);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v88,
    (const MethodInfo_336563C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  if ( (v43 & 1) != 0 )
    AssetManager__RequestUnloadUnusedAssets(this, 0LL, v46);
  assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleReleaseDic;
  if ( !assetBundleReleaseDic )
LABEL_49:
    sub_1BCAA3C(assetBundleReleaseDic, method);
  System_Collections_Generic_Dictionary_object__object___Clear(
    assetBundleReleaseDic,
    (const MethodInfo_32653E8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
  if ( this->fields.requestWriteCounter >= 0.0 )
  {
    v47 = this->fields.requestWriteCounter - UnityEngine_Time__get_deltaTime(0LL);
    this->fields.requestWriteCounter = v47;
    if ( v47 <= 0.0 && !this->fields.isErrorDialog )
    {
      Path = AssetStorageCache__GetPath(0LL);
      if ( !CommonServicePluginScript_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CommonServicePluginScript_TypeInfo, v48);
      FreeSize = CommonServicePluginScript__GetFreeSize(Path, 0LL);
      if ( FreeSize >= 1 )
      {
        v52 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v50);
          v52 = ManagerConfig_TypeInfo;
        }
        if ( FreeSize < v52->static_fields->LIMIT_FREE_SIZE )
        {
          v78 = sub_1BCA7F4(&System_IO_IOException_TypeInfo, v50);
          v82 = (System_IO_IOException_o *)sub_1BCAA2C(v78, v79, v80, v81);
          v84 = (System_String_o *)sub_1BCA7F4(&StringLiteral_5402/*"Disk full"*/, v83);
          System_IO_IOException___ctor_62541464(v82, v84, 0LL);
          v86 = sub_1BCA7F4(&Method_AssetManager_LateUpdate__, v85);
          sub_1BCA908(v82, v86);
        }
      }
      v53 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v50);
        v53 = AssetManager_TypeInfo;
      }
      if ( System_IO_File__Exists(v53->static_fields->createCacheListFileName, 0LL) )
      {
        v55 = AssetManager_TypeInfo;
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v54);
          v55 = AssetManager_TypeInfo;
        }
        System_IO_File__Delete(v55->static_fields->createCacheListFileName, 0LL);
      }
      v56 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v54);
        v56 = AssetManager_TypeInfo;
      }
      createCacheListFileName = v56->static_fields->createCacheListFileName;
      UTF8 = System_Text_Encoding__get_UTF8(0LL);
      v62 = (System_IO_StreamWriter_o *)sub_1BCAA2C(System_IO_StreamWriter_TypeInfo, v59, v60, v61);
      System_IO_StreamWriter___ctor_62570356(v62, createCacheListFileName, 0, UTF8, 0LL);
      if ( !v62 )
        sub_1BCAA3C(v63, v64);
      ((void (__fastcall *)(System_IO_StreamWriter_o *, struct System_String_o *, Il2CppMethodPointer))v62->klass->vtable._16_Write.method)(
        v62,
        this->fields.requestConfigWriteData,
        v62->klass->vtable._17_Write.methodPtr);
      ((void (__fastcall *)(System_IO_StreamWriter_o *, Il2CppMethodPointer))v62->klass->vtable._8_Close.method)(
        v62,
        v62->klass->vtable._9_Dispose.methodPtr);
      if ( System_IO_File__Exists(AssetManager_TypeInfo->static_fields->backCacheListFileName, 0LL) )
      {
        v66 = AssetManager_TypeInfo;
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v65);
          v66 = AssetManager_TypeInfo;
        }
        System_IO_File__Delete(v66->static_fields->backCacheListFileName, 0LL);
      }
      v67 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v65);
        v67 = AssetManager_TypeInfo;
      }
      if ( System_IO_File__Exists(v67->static_fields->cacheListFileName, 0LL) )
      {
        v69 = AssetManager_TypeInfo;
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v68);
          v69 = AssetManager_TypeInfo;
        }
        System_IO_File__Move(v69->static_fields->cacheListFileName, v69->static_fields->backCacheListFileName, 0LL);
      }
      v70 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v68);
        v70 = AssetManager_TypeInfo;
      }
      System_IO_File__Move(v70->static_fields->createCacheListFileName, v70->static_fields->cacheListFileName, 0LL);
      v71 = StringLiteral_1/*""*/;
      this->fields.requestConfigWriteData = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.requestConfigWriteData,
        (int64_t)v71,
        v72,
        v73,
        v74,
        v75,
        v76,
        v77);
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
  __int64 v7; // x2
  AssetData_o *AssetData; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  int32_t entryCount; // w8
  AssetData_o *v13; // x20
  const MethodInfo *v14; // x3
  System_Collections_Generic_Dictionary_object__object__o *assetResourceDic; // x0
  const MethodInfo *v16; // x1
  int32_t v17; // w8

  v5 = this;
  if ( (byte_4B152C7 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetData_TypeInfo, name, method);
    this = (AssetManager_o *)sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__AssetData__Add__, v6, v7);
    byte_4B152C7 = 1;
  }
  AssetData = AssetManager__GetAssetData(this, v5->fields.assetResourceDic, name, v3);
  if ( AssetData )
  {
    entryCount = AssetData->fields.entryCount;
    v13 = AssetData;
    if ( (entryCount & 0x80000000) == 0 )
      AssetData->fields.entryCount = entryCount + 1;
  }
  else
  {
    v13 = (AssetData_o *)sub_1BCAA2C(AssetData_TypeInfo, v9, v10, v11);
    AssetData___ctor(v13, 1, name, v14);
    if ( !v13 )
      goto LABEL_14;
    if ( !AssetData__SetResource(v13, v16) )
      return 0LL;
    v17 = v13->fields.entryCount;
    if ( (v17 & 0x80000000) == 0 )
      v13->fields.entryCount = v17 + 1;
    assetResourceDic = (System_Collections_Generic_Dictionary_object__object__o *)v5->fields.assetResourceDic;
    if ( !assetResourceDic )
LABEL_14:
      sub_1BCAA3C(assetResourceDic, v16);
    System_Collections_Generic_Dictionary_object__object___Add(
      assetResourceDic,
      (Il2CppObject *)name,
      (Il2CppObject *)v13,
      (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
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
  if ( (byte_4B152C2 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_1BCA7E0(
                               &Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__,
                               name,
                               callbackFunc);
    byte_4B152C2 = 1;
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
    sub_1BCAA3C(0LL, v10);
  System_Collections_Generic_Dictionary_object__object___Remove(
    assetBundleReleaseDic,
    (Il2CppObject *)name,
    (const MethodInfo_326675C *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
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
      AssetManager__AddLoadWaitStatus_38528428(v8, v20, callbackFunc, 0LL, v19);
      v8->fields.loadParallelMax = loadParallelMax;
      AssetManager__LoadStart(v8, v22);
    }
  }
LABEL_19:
  LOBYTE(v17) = 1;
  return (char)v17;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AssetManager__LoadAssetStorage_38512544(
        AssetManager_o *this,
        System_String_array *nameList,
        System_Action_o *callbackFunc,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x21
  System_Collections_Generic_List_object__o *AssetStorage; // x0
  __int64 v29; // x1
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
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  System_Collections_Generic_List_object__o *v45; // x23
  System_Collections_Generic_List_object__o **v46; // x22
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  const MethodInfo *v53; // x2
  __int64 v54; // x3
  const MethodInfo *v55; // x4
  __int64 v56; // x8
  int v57; // w26
  unsigned __int64 v58; // x27
  AssetLoader_LoadEndDataHandler_o **v59; // x23
  bool v60; // w25
  System_String_o *v61; // x24
  AssetLoader_LoadEndDataHandler_o *v62; // x25
  const MethodInfo *v63; // x3
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  const MethodInfo *v70; // x1

  if ( (byte_4B152C4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__AddRange__, nameList, callbackFunc);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__IndexOf__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__RemoveRange__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Remove__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v19, v20);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_AssetManager___c__DisplayClass169_0__LoadAssetStorage_b__0__, v23, v24);
    sub_1BCA7E0(&AssetManager___c__DisplayClass169_0_TypeInfo, v25, v26);
    byte_4B152C4 = 1;
  }
  v27 = sub_1BCAA2C(AssetManager___c__DisplayClass169_0_TypeInfo, nameList, callbackFunc, *(_QWORD *)&loadParallelMax);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  if ( !v27 )
    goto LABEL_31;
  *(_QWORD *)(v27 + 40) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 40), (int64_t)this, v30, v31, v32, v33, v34, v35);
  *(_QWORD *)(v27 + 48) = callbackFunc;
  sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 48), (int64_t)callbackFunc, v36, v37, v38, v39, v40, v41);
  *(_DWORD *)(v27 + 56) = loadParallelMax;
  v45 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v42,
                                                       v43,
                                                       v44);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v27 + 24) = v45;
  v46 = (System_Collections_Generic_List_object__o **)(v27 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 24), (int64_t)v45, v47, v48, v49, v50, v51, v52);
  AssetStorage = *(System_Collections_Generic_List_object__o **)(v27 + 24);
  if ( !AssetStorage
    || (System_Collections_Generic_List_object___AddRange(
          AssetStorage,
          (System_Collections_Generic_IEnumerable_T__o *)nameList,
          (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_string__AddRange__),
        *(_DWORD *)(v27 + 16) = 0,
        *(_BYTE *)(v27 + 32) = 0,
        !nameList) )
  {
LABEL_31:
    sub_1BCAA3C(AssetStorage, v29);
  }
  v56 = *(_QWORD *)&nameList->max_length;
  if ( (int)v56 >= 1 )
  {
    v57 = 0;
    v58 = 0LL;
    v59 = (AssetLoader_LoadEndDataHandler_o **)(v27 + 64);
    v60 = 1;
    while ( 1 )
    {
      if ( v58 >= (unsigned int)v56 )
        sub_1BCAA44(AssetStorage, v29);
      v61 = nameList->m_Items[v58];
      if ( !v61 )
      {
        AssetStorage = *v46;
        if ( !*v46 )
          goto LABEL_31;
        AssetStorage = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Remove(
                                                                      AssetStorage,
                                                                      0LL,
                                                                      (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_string__Remove__);
        goto LABEL_23;
      }
      if ( !v60 )
        goto LABEL_22;
      v62 = *v59;
      if ( !*v59 )
      {
        v62 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v29, v53, v54);
        AssetLoader_LoadEndDataHandler___ctor(
          v62,
          (Il2CppObject *)v27,
          Method_AssetManager___c__DisplayClass169_0__LoadAssetStorage_b__0__,
          v63);
        *(_QWORD *)(v27 + 64) = v62;
        sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 64), (int64_t)v62, v64, v65, v66, v67, v68, v69);
      }
      if ( !this )
        goto LABEL_31;
      AssetStorage = (System_Collections_Generic_List_object__o *)AssetManager__LoadAssetStorage(
                                                                    this,
                                                                    v61,
                                                                    v62,
                                                                    *(_DWORD *)(v27 + 56),
                                                                    v55);
      if ( ((unsigned __int8)AssetStorage & 1) == 0 )
        break;
      ++v57;
      v60 = 1;
LABEL_23:
      LODWORD(v56) = nameList->max_length;
      if ( (__int64)++v58 >= (int)v56 )
        goto LABEL_26;
    }
    AssetStorage = *v46;
    if ( !*v46 )
      goto LABEL_31;
    AssetStorage = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___IndexOf(
                                                                  AssetStorage,
                                                                  (Il2CppObject *)v61,
                                                                  (const MethodInfo_35A28FC *)Method_System_Collections_Generic_List_string__IndexOf__);
    if ( ((unsigned int)AssetStorage & 0x80000000) == 0 )
    {
      v29 = (unsigned int)AssetStorage;
      AssetStorage = *v46;
      if ( !*v46 )
        goto LABEL_31;
      System_Collections_Generic_List_object___RemoveRange(
        AssetStorage,
        v29,
        AssetStorage->fields._size - v29,
        (const MethodInfo_35A34C8 *)Method_System_Collections_Generic_List_string__RemoveRange__);
    }
LABEL_22:
    v60 = 0;
    goto LABEL_23;
  }
  v57 = 0;
  v60 = 1;
LABEL_26:
  if ( v57 < 1 || !*(_BYTE *)(v27 + 32) && *(_DWORD *)(v27 + 16) == v57 )
  {
    AssetManager__AddLoadWaitStatus(this, *(System_Action_o **)(v27 + 48), v53);
    this->fields.loadParallelMax = *(_DWORD *)(v27 + 56);
    *(_BYTE *)(v27 + 32) = 1;
    AssetManager__LoadStart(this, v70);
  }
  return v60;
}


bool __fastcall AssetManager__LoadAsset_38529252(
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  _DWORD *monitor; // x8

  if ( (byte_4B152A3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3, v4);
    byte_4B152A3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  if ( BYTE2(Instance[3].klass) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( Instance )
    {
      monitor = Instance[6].monitor;
      if ( monitor )
        return monitor[6] > 0;
    }
LABEL_9:
    sub_1BCAA3C(Instance, v6);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  AssetData_o *v23; // x0
  AssetData_o *AssetData; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x4
  AssetData_o *v27; // x24
  System_Collections_Generic_Dictionary_object__object__o *assetBundleReleaseDic; // x0
  int32_t entryCount; // w8
  _BOOL8 Status; // x0
  const MethodInfo *v31; // x3
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  AssetData_o *v35; // x23
  System_Collections_Generic_List_object__o *v36; // x24
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct UnityEngine_Object_array *objectList; // x26
  __int64 v44; // x8
  unsigned __int64 v45; // x27
  int max_length; // w8
  Il2CppObject *v47; // x25
  __int64 v48; // x23
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x0
  int32_t v53; // w9
  int v54; // w8
  System_String_array *v55; // x0
  const MethodInfo *v56; // x4
  const MethodInfo *v57; // x1
  AssetData_o *v59; // [xsp+8h] [xbp-68h]

  if ( (byte_4B152C3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__, name, resourceNames);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__AddRange__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ToArray__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v21, v22);
    byte_4B152C3 = 1;
  }
  LOBYTE(v23) = 0;
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
        v27 = AssetData;
        assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleReleaseDic;
        if ( !assetBundleReleaseDic )
          goto LABEL_45;
        System_Collections_Generic_Dictionary_object__object___Remove(
          assetBundleReleaseDic,
          (Il2CppObject *)name,
          (const MethodInfo_326675C *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
        if ( v27->fields.objectList )
        {
          entryCount = v27->fields.entryCount;
          if ( (entryCount & 0x80000000) == 0 )
            v27->fields.entryCount = entryCount + 1;
          if ( callbackFunc )
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, AssetData_o *, _QWORD))callbackFunc->fields.m_target)(
              callbackFunc->fields.original_method_info,
              v27,
              *(_QWORD *)&callbackFunc->fields.extra_arg);
          goto LABEL_41;
        }
      }
      Status = AssetManager__AddEntryLoadStatus(this, 0, name, callbackFunc, v26);
      if ( Status )
      {
LABEL_41:
        LOBYTE(v23) = 1;
        return (char)v23;
      }
      v23 = AssetManager__GetAssetData((AssetManager_o *)Status, this->fields.assetBundleDic, name, v31);
      if ( v23 )
      {
        v35 = v23;
        v36 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                             System_Collections_Generic_List_string__TypeInfo,
                                                             v32,
                                                             v33,
                                                             v34);
        System_Collections_Generic_List_object____ctor(
          v36,
          (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
        objectList = v35->fields.objectList;
        if ( objectList )
        {
          v44 = *(_QWORD *)&resourceNames->max_length;
          v59 = v35;
          if ( (int)v44 >= 1 )
          {
            v45 = 0LL;
            while ( 1 )
            {
              if ( v45 >= (unsigned int)v44 )
                goto LABEL_46;
              max_length = objectList->max_length;
              v47 = (Il2CppObject *)resourceNames->m_Items[v45];
              if ( max_length >= 1 )
                break;
LABEL_26:
              if ( !v36 )
                goto LABEL_45;
              items = v36->fields._items;
              v50 = Method_System_Collections_Generic_List_string__Add__;
              ++v36->fields._version;
              if ( !items )
                goto LABEL_45;
              size = v36->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v36,
                  v47,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
              }
              else
              {
                v52 = &items->obj.klass + size;
                v36->fields._size = size + 1;
                v52[4] = (Il2CppClass *)v47;
                sub_1BCA784((PartyOrganizationUtility_o *)(v52 + 4), (int64_t)v47, v37, v38, v39, v40, v41, v42);
              }
LABEL_31:
              LODWORD(v44) = resourceNames->max_length;
              if ( (__int64)++v45 >= (int)v44 )
                goto LABEL_32;
            }
            v48 = 0LL;
            while ( (unsigned int)v48 < max_length )
            {
              assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)objectList->m_Items[v48];
              if ( !assetBundleReleaseDic )
                goto LABEL_45;
              assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_Object__get_name(
                                                                                                   (UnityEngine_Object_o *)assetBundleReleaseDic,
                                                                                                   0LL);
              if ( !v47 )
                goto LABEL_45;
              assetBundleReleaseDic = (System_Collections_Generic_Dictionary_object__object__o *)System_String__Equals_62409536(
                                                                                                   (System_String_o *)v47,
                                                                                                   (System_String_o *)assetBundleReleaseDic,
                                                                                                   0LL);
              if ( ((unsigned __int8)assetBundleReleaseDic & 1) != 0 )
                goto LABEL_31;
              max_length = objectList->max_length;
              if ( (int)++v48 >= max_length )
                goto LABEL_26;
            }
LABEL_46:
            sub_1BCAA44(assetBundleReleaseDic, v25);
          }
LABEL_32:
          v35 = v59;
          if ( !v36 )
LABEL_45:
            sub_1BCAA3C(assetBundleReleaseDic, v25);
        }
        else
        {
          if ( !v36 )
            goto LABEL_45;
          System_Collections_Generic_List_object___AddRange(
            v36,
            (System_Collections_Generic_IEnumerable_T__o *)resourceNames,
            (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_string__AddRange__);
        }
        v53 = v35->fields.entryCount;
        v54 = v36->fields._size;
        if ( (v53 & 0x80000000) == 0 )
          v35->fields.entryCount = v53 + 1;
        if ( v54 < 1 )
        {
          if ( callbackFunc )
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, AssetData_o *, _QWORD))callbackFunc->fields.m_target)(
              callbackFunc->fields.original_method_info,
              v35,
              *(_QWORD *)&callbackFunc->fields.extra_arg);
        }
        else
        {
          v55 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                         v36,
                                         (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
          AssetManager__AddLoadWaitStatus_38528428(this, v35, callbackFunc, v55, v56);
          this->fields.loadParallelMax = loadParallelMax;
          AssetManager__LoadStart(this, v57);
        }
        goto LABEL_41;
      }
    }
    else
    {
      LOBYTE(v23) = 0;
    }
  }
  return (char)v23;
}


bool __fastcall AssetManager__LoadStart(AssetManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x20
  void *processingAssetLoaderList; // x0
  Il2CppObject *v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x2
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *downLoadWaitList; // x8
  struct System_Collections_Generic_List_AssetLoader__o *v44; // x8
  Il2CppObject *v45; // x0
  __int64 v46; // x21
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  __int64 v53; // x2
  __int64 v54; // x22
  __int64 v55; // x8
  System_String_o **v56; // x8
  __int64 v57; // x8
  Il2CppObject *v58; // x0
  Il2CppObject **v59; // x22
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  __int64 v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  __int64 v75; // x8
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  int64_t v82; // x1
  const MethodInfo *v83; // x2
  __int64 v84; // x3
  AssetLoader_LoadEndDataHandler_o *v85; // x1
  __int64 v86; // x19
  System_Collections_Generic_List_Enumerator_object__o v87; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v88; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B152BD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_AssetLoader__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_AssetLoader___, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssetLoader__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssetLoader__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v17, v18);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__, v23, v24);
    sub_1BCA7E0(&Method_AssetManager___c__DisplayClass148_0__LoadStart_b__0__, v25, v26);
    sub_1BCA7E0(&AssetManager___c__DisplayClass148_0_TypeInfo, v27, v28);
    sub_1BCA7E0(&StringLiteral_5337/*"DelayLoadStart"*/, v29, v30);
    byte_4B152BD = 1;
  }
  memset(&v88, 0, sizeof(v88));
  v31 = sub_1BCAA2C(AssetManager___c__DisplayClass148_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v31, 0LL);
  if ( !v31 )
    goto LABEL_49;
  *(_QWORD *)(v31 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 16), (int64_t)this, v34, v35, v36, v37, v38, v39);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v33);
  if ( !byte_4B1194F )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, v33, v40);
    byte_4B1194F = 1;
  }
  processingAssetLoaderList = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v33);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v87,
      (System_Collections_Generic_List_object__o *)processingAssetLoaderList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_AssetLoader__GetEnumerator__);
    v88 = v87;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v88,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_AssetLoader__MoveNext__) )
      ;
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v88,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_AssetLoader__Dispose__);
  }
  downLoadWaitList = this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
    goto LABEL_49;
  if ( downLoadWaitList->fields._size <= 0 )
    return 0;
  v44 = this->fields.processingAssetLoaderList;
  if ( !v44 )
    goto LABEL_49;
  if ( v44->fields._size >= this->fields.loadParallelMax )
    return 0;
  UnityEngine_MonoBehaviour__StartCoroutine(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5337/*"DelayLoadStart"*/,
    0LL);
  processingAssetLoaderList = this->fields.downLoadWaitList;
  if ( !processingAssetLoaderList
    || (v45 = System_Collections_Generic_Queue_object___Dequeue(
                (System_Collections_Generic_Queue_T__o *)processingAssetLoaderList,
                (const MethodInfo_3714548 *)Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__Dequeue__),
        *(_QWORD *)(v31 + 24) = v45,
        v46 = v31 + 24,
        sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 24), (int64_t)v45, v47, v48, v49, v50, v51, v52),
        (v54 = *(_QWORD *)(v31 + 24)) == 0) )
  {
LABEL_49:
    sub_1BCAA3C(processingAssetLoaderList, v33);
  }
  if ( (byte_4B152D1 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, v33, v53);
    byte_4B152D1 = 1;
  }
  v55 = *(_QWORD *)(v54 + 16);
  if ( v55 )
    v56 = (System_String_o **)(v55 + 24);
  else
    v56 = (System_String_o **)&StringLiteral_1/*""*/;
  processingAssetLoaderList = (void *)System_String__IsNullOrEmpty(*v56, 0LL);
  if ( ((unsigned __int8)processingAssetLoaderList & 1) == 0 )
  {
    processingAssetLoaderList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( processingAssetLoaderList )
    {
      v58 = UnityEngine_GameObject__AddComponent_object_(
              (UnityEngine_GameObject_o *)processingAssetLoaderList,
              (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_AssetLoader___);
      *(_QWORD *)(v31 + 32) = v58;
      v59 = (Il2CppObject **)(v31 + 32);
      sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 32), (int64_t)v58, v60, v61, v62, v63, v64, v65);
      processingAssetLoaderList = this->fields.processingAssetLoaderList;
      if ( processingAssetLoaderList )
      {
        v33 = *v59;
        v72 = *((_QWORD *)processingAssetLoaderList + 2);
        v73 = Method_System_Collections_Generic_List_AssetLoader__Add__;
        ++*((_DWORD *)processingAssetLoaderList + 7);
        if ( v72 )
        {
          v74 = *((int *)processingAssetLoaderList + 6);
          if ( (unsigned int)v74 >= *(_DWORD *)(v72 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)processingAssetLoaderList,
              v33,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
          }
          else
          {
            v75 = v72 + 8 * v74;
            *((_DWORD *)processingAssetLoaderList + 6) = v74 + 1;
            *(_QWORD *)(v75 + 32) = v33;
            sub_1BCA784((PartyOrganizationUtility_o *)(v75 + 32), (int64_t)v33, v66, v67, v68, v69, v70, v71);
          }
          if ( *(_QWORD *)v46 )
          {
            processingAssetLoaderList = *v59;
            if ( *v59 )
            {
              v82 = *(_QWORD *)(*(_QWORD *)v46 + 16LL);
              *((_QWORD *)processingAssetLoaderList + 4) = v82;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)((char *)processingAssetLoaderList + 32),
                v82,
                v76,
                v77,
                v78,
                v79,
                v80,
                v81);
              if ( *(_QWORD *)v46 )
              {
                processingAssetLoaderList = *v59;
                if ( *v59 )
                {
                  v85 = *(AssetLoader_LoadEndDataHandler_o **)(*(_QWORD *)v46 + 32LL);
                  if ( v85 )
                    AssetLoader__add_endCallback2((AssetLoader_o *)processingAssetLoaderList, v85, v83);
                  v86 = sub_1BCAA2C(System_Action_TypeInfo, v85, v83, v84);
                  System_Action___ctor(
                    (System_Action_o *)v86,
                    (Il2CppObject *)v31,
                    Method_AssetManager___c__DisplayClass148_0__LoadStart_b__0__,
                    0LL);
                  if ( v86 )
                  {
                    (*(void (__fastcall **)(_QWORD, _QWORD))(v86 + 24))(*(_QWORD *)(v86 + 64), *(_QWORD *)(v86 + 40));
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
  if ( !*(_QWORD *)v46 )
    goto LABEL_49;
  v57 = *(_QWORD *)(*(_QWORD *)v46 + 24LL);
  if ( v57 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(v57 + 24))(*(_QWORD *)(v57 + 64), *(_QWORD *)(v57 + 40));
  return AssetManager__LoadStart(this, (const MethodInfo *)v33);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetManager__OnClickRetryDialog(AssetManager_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  ManagementManager_c *v9; // x0
  Il2CppObject *Instance; // x0
  __int64 v11; // x1

  if ( (byte_4B152B1 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, isDecide, method);
    sub_1BCA7E0(&ManagementManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, v7, v8);
    byte_4B152B1 = 1;
  }
  if ( isDecide )
  {
    this->fields.isErrorDialog = 0;
  }
  else
  {
    if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, isDecide);
    if ( !byte_4B152DA )
    {
      sub_1BCA7E0(&ManagementManager_TypeInfo, isDecide, method);
      byte_4B152DA = 1;
    }
    v9 = ManagementManager_TypeInfo;
    if ( !ManagementManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, isDecide);
      v9 = ManagementManager_TypeInfo;
    }
    if ( v9->static_fields->isDuringStartup )
    {
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, isDecide);
      UnityEngine_Application__Quit_69948112(0LL);
    }
    else
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
      if ( !Instance )
        sub_1BCAA3C(0LL, v11);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  _BOOL4 isRequestDownload; // w23
  int32_t v12; // w21
  __int64 v13; // x1
  Il2CppObject *Item; // x22
  struct AssetData_o *data; // x8

  v4 = this;
  if ( (byte_4B152BF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssetLoader__RemoveAt__, loader, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssetLoader__get_Item__, v7, v8);
    this = (AssetManager_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B152BF = 1;
  }
  if ( !loader )
    goto LABEL_11;
  this = (AssetManager_o *)v4->fields.processingAssetLoaderList;
  if ( !this )
    goto LABEL_11;
  isRequestDownload = loader->fields.isRequestDownload;
  v12 = 0;
  while ( 1 )
  {
    if ( v12 >= SLODWORD(this->fields.m_CancellationTokenSource) )
      goto LABEL_15;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)this,
             v12,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_AssetLoader__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    this = (AssetManager_o *)UnityEngine_Object__op_Equality(
                               (UnityEngine_Object_o *)Item,
                               (UnityEngine_Object_o *)loader,
                               0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    this = (AssetManager_o *)v4->fields.processingAssetLoaderList;
    ++v12;
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
    sub_1BCAA3C(this, loader);
  }
  System_Collections_Generic_List_object___RemoveAt(
    (System_Collections_Generic_List_object__o *)this,
    v12,
    (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_AssetLoader__RemoveAt__);
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

  if ( (byte_4B152C0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__, *(_QWORD *)&type, name);
    byte_4B152C0 = 1;
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
        sub_1BCAA3C(0LL, v11);
      System_Collections_Generic_Dictionary_object__object___Remove(
        (System_Collections_Generic_Dictionary_object__object__o *)assetResourceDic,
        (Il2CppObject *)v9->fields.name,
        (const MethodInfo_326675C *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
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
  if ( (byte_4B152C8 & 1) == 0 )
  {
    this = (AssetManager_o *)sub_1BCA7E0(
                               &Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__,
                               name,
                               method);
    byte_4B152C8 = 1;
  }
  AssetData = AssetManager__GetAssetData(this, v5->fields.assetResourceDic, name, v3);
  if ( AssetData && AssetData__RemoveEntry(AssetData, v7) )
  {
    assetResourceDic = (System_Collections_Generic_Dictionary_object__object__o *)v5->fields.assetResourceDic;
    if ( !assetResourceDic )
      sub_1BCAA3C(0LL, v8);
    System_Collections_Generic_Dictionary_object__object___Remove(
      assetResourceDic,
      (Il2CppObject *)name,
      (const MethodInfo_326675C *)Method_System_Collections_Generic_Dictionary_string__AssetData__Remove__);
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


void __fastcall AssetManager__ReleaseAssetStorage_38514856(
        AssetManager_o *this,
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v3; // x8
  unsigned __int64 v6; // x21

  if ( !nameList )
    sub_1BCAA3C(this, 0LL);
  v3 = *(_QWORD *)&nameList->max_length;
  if ( (int)v3 >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v3 )
        sub_1BCAA44(this, nameList);
      AssetManager__ReleaseAssetStorage(this, nameList->m_Items[v6], method);
      LODWORD(v3) = nameList->max_length;
      ++v6;
    }
    while ( (__int64)v6 < (int)v3 );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetManager__ReleaseAsset_38505588(
        AssetManager_o *this,
        int32_t type,
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v4; // x8
  unsigned __int64 v8; // x22

  if ( !nameList )
    sub_1BCAA3C(this, *(_QWORD *)&type);
  v4 = *(_QWORD *)&nameList->max_length;
  if ( (int)v4 >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)v4 )
        sub_1BCAA44(this, *(_QWORD *)&type);
      AssetManager__ReleaseAsset(this, type, nameList->m_Items[v8], method);
      LODWORD(v4) = nameList->max_length;
      ++v8;
    }
    while ( (__int64)v8 < (int)v4 );
  }
}


void __fastcall AssetManager__ReleaseAsset_38505888(
        AssetManager_o *this,
        AssetData_o *assetInfo,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( assetInfo )
    AssetManager__ReleaseAsset(this, assetInfo->fields.type, assetInfo->fields.name, v3);
}


void __fastcall AssetManager__ReleaseAsset_38506088(
        AssetManager_o *this,
        AssetData_array *assetInfoList,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v4; // x8
  unsigned __int64 v7; // x21
  AssetData_o *v8; // x8

  if ( !assetInfoList )
    sub_1BCAA3C(this, 0LL);
  v4 = *(_QWORD *)&assetInfoList->max_length;
  if ( (int)v4 >= 1 )
  {
    v7 = 0LL;
    do
    {
      if ( v7 >= (unsigned int)v4 )
        sub_1BCAA44(this, assetInfoList);
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
  __int64 v6; // x2

  v4 = this;
  if ( (byte_4B152BC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__AssetData__Add__, info, method);
    this = (AssetManager_o *)sub_1BCA7E0(
                               &Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__,
                               v5,
                               v6);
    byte_4B152BC = 1;
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
            (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__) )
    {
      this = (AssetManager_o *)v4->fields.assetBundleReleaseDic;
      if ( this )
      {
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)this,
          (Il2CppObject *)info->fields.name,
          (Il2CppObject *)info,
          (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
        return;
      }
LABEL_11:
      sub_1BCAA3C(this, info);
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
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
  }
}


void __fastcall AssetManager__ResetAssetStorageVersion(
        AssetManager_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v16; // x1
  struct System_Collections_Generic_Dictionary_string__AssetData__o *assetBundleDic; // x8
  System_String_o *v18; // x19
  _BOOL8 v19; // x0
  __int64 v20; // x1
  Il2CppObject *currentValue; // x22
  System_String_o *monitor; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v23; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B152AD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, path, method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v9,
      v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__,
      v11,
      v12);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v13, v14);
    byte_4B152AD = 1;
  }
  memset(&v23, 0, sizeof(v23));
  Values = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)System_String__Concat_62401220(
                                                                                      path,
                                                                                      (System_String_o *)StringLiteral_1120/*"/"*/,
                                                                                      0LL);
  assetBundleDic = this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (v18 = (System_String_o *)Values,
        (Values = System_Collections_Generic_Dictionary_object__object___get_Values(
                    (System_Collections_Generic_Dictionary_object__object__o *)assetBundleDic,
                    (const MethodInfo_3265090 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL) )
  {
    sub_1BCAA3C(Values, v16);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v23,
    Values,
    (const MethodInfo_38D7DB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v19 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v23,
            (const MethodInfo_3365640 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v19 )
      break;
    currentValue = v23.fields._currentValue;
    if ( !v23.fields._currentValue )
      sub_1BCAA3C(v19, v20);
    monitor = (System_String_o *)v23.fields._currentValue[1].monitor;
    if ( !monitor )
      sub_1BCAA3C(0LL, v20);
    if ( System_String__StartsWith(monitor, v18, 0LL) )
      LODWORD(currentValue[2].monitor) = 0;
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v23,
    (const MethodInfo_336563C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  ManagerConfig_c *v5; // x0
  AssetManager_c *v6; // x0

  if ( (byte_4B15271 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v3, v4);
    byte_4B15271 = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( !v5->static_fields->UseStandaloneAsset )
  {
    v6 = AssetManager_TypeInfo;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v1);
      v6 = AssetManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetString(v6->static_fields->SAVE_KEY, v6->static_fields->SAVE_DATA_OFFLINE, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


bool __fastcall AssetManager__SetOnlineStatus(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  ManagerConfig_c *v5; // x0
  AssetManager_c *v6; // x0
  System_String_o *String; // x0
  __int64 v8; // x1
  AssetManager_c *v10; // x0

  if ( (byte_4B15272 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v3, v4);
    byte_4B15272 = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( v5->static_fields->UseStandaloneAsset )
    return 0;
  v6 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v1);
    v6 = AssetManager_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(v6->static_fields->SAVE_KEY, v6->static_fields->SAVE_DATA_OFFLINE, 0LL);
  if ( System_String__op_Equality(String, AssetManager_TypeInfo->static_fields->SAVE_DATA_ONLINE, 0LL) )
    return 0;
  v10 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v8);
    v10 = AssetManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(v10->static_fields->SAVE_KEY, v10->static_fields->SAVE_DATA_ONLINE, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
  return 1;
}


void __fastcall AssetManager__SetupAssetStorageAll(AssetManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_Dictionary_object__object__o *assetBundleDic; // x0
  _BOOL8 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B152A5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, method, v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v6,
      v7);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v8,
      v9);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__,
      v10,
      v11);
    byte_4B152A5 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      assetBundleDic,
                                                                                      (const MethodInfo_3265090 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
    sub_1BCAA3C(assetBundleDic, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v16,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_38D7DB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v16,
            (const MethodInfo_3365640 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v13 )
      break;
    if ( !v16.fields._currentValue )
      sub_1BCAA3C(v13, v14);
    if ( LODWORD(v16.fields._currentValue[2].monitor) != HIDWORD(v16.fields._currentValue[2].monitor) )
      AssetManager__AddLoadWaitStatus_38518064(this, (AssetData_o *)v16.fields._currentValue, v15);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v16,
    (const MethodInfo_336563C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Threading_ThreadStart_o *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Threading_Thread_o *v13; // x21
  struct System_Threading_Thread_o **p_writeRequestThread; // x19
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x1

  if ( (byte_4B152B3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetManager_ConfigWriteRequestThread__, method, v2);
    sub_1BCA7E0(&System_Threading_ThreadStart_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Threading_Thread_TypeInfo, v7, v8);
    byte_4B152B3 = 1;
  }
  this->fields.reserveWriteRequest = 0;
  v9 = (System_Threading_ThreadStart_o *)sub_1BCAA2C(System_Threading_ThreadStart_TypeInfo, method, v2, v3);
  System_Threading_ThreadStart___ctor(v9, (Il2CppObject *)this, Method_AssetManager_ConfigWriteRequestThread__, 0LL);
  v13 = (System_Threading_Thread_o *)sub_1BCAA2C(System_Threading_Thread_TypeInfo, v10, v11, v12);
  System_Threading_Thread___ctor(v13, v9, 0LL);
  this->fields.writeRequestThread = v13;
  p_writeRequestThread = &this->fields.writeRequestThread;
  sub_1BCA784((PartyOrganizationUtility_o *)p_writeRequestThread, (int64_t)v13, v15, v16, v17, v18, v19, v20);
  if ( !*p_writeRequestThread )
    sub_1BCAA3C(0LL, v21);
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
        const MethodInfo_2EF51E0 *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  AssetData_o *AssetStorage; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  Il2CppObject *Object_object__49237568; // x1
  __int64 v18; // x1
  Il2CppObject *v19; // x19

  if ( !method->rgctx_data )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, path, name);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    if ( !method->rgctx_data )
      sub_1C1C718(method, path);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, path);
  AssetStorage = AssetManager__getAssetStorage(path, 0LL);
  if ( AssetStorage )
    Object_object__49237568 = AssetData__GetObject_object__49237568(
                                AssetStorage,
                                name,
                                (const MethodInfo_2EF4E40 *)method->rgctx_data->_2_AssetData_GetObject_T_);
  else
    Object_object__49237568 = 0LL;
  *data = Object_object__49237568;
  sub_1BCA784((PartyOrganizationUtility_o *)data, (int64_t)Object_object__49237568, v11, v12, v13, v14, v15, v16);
  v19 = *data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0LL, 0LL);
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  const MethodInfo *v17; // x1
  AssetData_o *AssetStorage; // x0
  __int64 v19; // x1
  Il2CppObject *Object_object__49237568; // x20
  _BOOL8 v21; // x0
  __int64 v22; // x1
  Il2CppObject *Component_object; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  UnityEngine_Object_o *v30; // x19

  if ( (byte_4B152C9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, name, atlasName);
    sub_1BCA7E0(&AssetManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B152C9 = 1;
  }
  *atlas = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)atlas, 0LL, (int64_t)atlasName, (int32_t)method, v4, v5, v6, v7);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v17);
  AssetStorage = AssetManager__getAssetStorage(name, v17);
  if ( AssetStorage )
    Object_object__49237568 = AssetData__GetObject_object__49237568(
                                AssetStorage,
                                atlasName,
                                (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  else
    Object_object__49237568 = 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  v21 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49237568, 0LL, 0LL);
  if ( v21 )
  {
    if ( !Object_object__49237568 )
      sub_1BCAA3C(v21, v22);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object_object__49237568,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    *atlas = (UIAtlas_o *)Component_object;
    sub_1BCA784((PartyOrganizationUtility_o *)atlas, (int64_t)Component_object, v24, v25, v26, v27, v28, v29);
  }
  v30 = (UnityEngine_Object_o *)*atlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
  return UnityEngine_Object__op_Inequality(v30, 0LL, 0LL);
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
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B1526F & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_TypeInfo, method, v2);
    byte_4B1526F = 1;
  }
  v5 = sub_1BCAA2C(AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall AssetManager___DownloadAssetStorageAttributeWithCheckDialog_b__118_0(
        AssetManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  AssetManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_Collections_Generic_List_AssetLoader__o *processingAssetLoaderList; // x8

  v3 = this;
  if ( (byte_4B152CF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssetLoader__get_Count__, method, v2);
    sub_1BCA7E0(&SoundManager_TypeInfo, v4, v5);
    this = (AssetManager_o *)sub_1BCA7E0(&StringLiteral_9428/*"NOW_LOADING"*/, v6, v7);
    byte_4B152CF = 1;
  }
  processingAssetLoaderList = v3->fields.processingAssetLoaderList;
  if ( !processingAssetLoaderList )
    sub_1BCAA3C(this, method);
  if ( processingAssetLoaderList->fields._size >= 1 )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
    SoundManager__playBgm((System_String_o *)StringLiteral_9428/*"NOW_LOADING"*/, 0LL);
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

  if ( (byte_4B1526D & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_ResourceUnloadEventHandler_TypeInfo, value, method);
    byte_4B1526D = 1;
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
    v9 = sub_1C05CD0(p_unloadCallbacks, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  AssetManager__remove_unloadCallbacks(v11, v12, v13);
}


void __fastcall AssetManager__cancelDownloadAssetStorage(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4B15290 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3, v4);
    byte_4B15290 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !Instance )
      sub_1BCAA3C(v7, v8);
    AssetManager__CancelDownloadAssetStorage((AssetManager_o *)Instance, v8);
  }
}


System_Collections_IEnumerator_o *__fastcall AssetManager__coUnloadUnusedAssets(
        AssetManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B152B4 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager__coUnloadUnusedAssets_d__138_TypeInfo, method, v2);
    byte_4B152B4 = 1;
  }
  v5 = sub_1BCAA2C(AssetManager__coUnloadUnusedAssets_d__138_TypeInfo, method, v2, v3);
  AssetManager__coUnloadUnusedAssets_d__138___ctor((AssetManager__coUnloadUnusedAssets_d__138_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1BCAA3C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
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
      return System_String__Equals_62409536(name1, name2, 0LL);
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
            list1 = (System_String_array *)System_String__Equals_62409536(
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
      sub_1BCAA44(list1, list2);
    }
  }
  else if ( list2 )
  {
    return list2->max_length == 0;
  }
  return 1;
}


bool __fastcall AssetManager__compAssetStorageList_38503652(
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
              sub_1BCAA3C(0LL, list);
            assetList = (AssetData_array *)System_String__Equals_62409536(name, (System_String_o *)list, 0LL);
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
      sub_1BCAA44(assetList, list);
    }
  }
  else if ( list )
  {
    return list->max_length == 0;
  }
  return 1;
}


bool __fastcall AssetManager__compAssetStorage_38503380(
        AssetData_o *data,
        System_String_o *name,
        const MethodInfo *method)
{
  struct System_String_o *v3; // x0
  int32_t stringLength; // w8

  if ( data && (v3 = data->fields.name) != 0LL )
  {
    if ( name )
      return System_String__Equals_62409536(v3, name, 0LL);
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4B15275 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3, v4);
    byte_4B15275 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !Instance )
      sub_1BCAA3C(v7, v8);
    AssetManager__DebugLog((AssetManager_o *)Instance, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AssetManager__downloadAssetStorage(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        int32_t maxParallelLoad,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  Il2CppObject *Instance; // x22
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4

  if ( (byte_4B15293 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, callbackFunc, *(_QWORD *)&maxParallelLoad);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7, v8);
    byte_4B15293 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v11 )
    return 0;
  if ( !Instance )
    sub_1BCAA3C(v11, v12);
  return AssetManager__DownloadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, v13);
}


bool __fastcall AssetManager__downloadAssetStorage_38510160(
        System_String_array *nameList,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4

  if ( (byte_4B15294 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, callbackFunc, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5, v6);
    byte_4B15294 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_1BCAA3C(v9, v10);
  return AssetManager__DownloadAssetStorage_38510352((AssetManager_o *)Instance, nameList, callbackFunc, 1, v11);
}


AssetData_o *__fastcall AssetManager__getAsset(int32_t type, System_String_o *name, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3

  if ( (byte_4B15282 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, name, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5, v6);
    byte_4B15282 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v9 )
    return 0LL;
  if ( !Instance )
    sub_1BCAA3C(v9, v10);
  return AssetManager__GetAsset((AssetManager_o *)Instance, type, name, v11);
}


AssetData_o *__fastcall AssetManager__getAssetResource(System_String_o *name, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  bool v10; // w8
  AssetData_o *result; // x0

  if ( (byte_4B152A0 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v4, v5);
    byte_4B152A0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  result = 0LL;
  if ( !v10 )
  {
    if ( !Instance )
      sub_1BCAA3C(0LL, v8);
    result = AssetManager__GetAssetData(
               0LL,
               (System_Collections_Generic_Dictionary_string__AssetData__o *)Instance[5].klass,
               name,
               v9);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  bool v10; // w8
  AssetData_o *result; // x0

  if ( (byte_4B15299 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v4, v5);
    byte_4B15299 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  result = 0LL;
  if ( !v10 )
  {
    if ( !Instance )
      sub_1BCAA3C(0LL, v8);
    result = AssetManager__GetAssetData(
               0LL,
               (System_Collections_Generic_Dictionary_string__AssetData__o *)Instance[4].klass,
               name,
               v9);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3

  if ( (byte_4B1529A & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v4, v5);
    byte_4B1529A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v8 )
    return 0LL;
  if ( !Instance )
    sub_1BCAA3C(v8, v9);
  return AssetManager__GetAssetData(
           (AssetManager_o *)v8,
           (System_Collections_Generic_Dictionary_string__AssetData__o *)Instance[4].klass,
           name,
           v10);
}


System_String_array *__fastcall AssetManager__getAssetStorageList(System_String_o *path, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4B1528E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v4, v5);
    byte_4B1528E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v8 )
    return 0LL;
  if ( !Instance )
    sub_1BCAA3C(v8, v9);
  return AssetManager__GetAssetStorageList((AssetManager_o *)Instance, path, v10);
}


AssetData_array *__fastcall AssetManager__getAssetStorage_38513712(
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4B1529B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v4, v5);
    byte_4B1529B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v8 )
    return 0LL;
  if ( !Instance )
    sub_1BCAA3C(v8, v9);
  return AssetManager__GetAssetStorage_38513892((AssetManager_o *)Instance, nameList, v10);
}


bool __fastcall AssetManager__getAssetStorage_38514160(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3

  if ( (byte_4B1529C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, callbackFunc, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5, v6);
    byte_4B1529C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_1BCAA3C(v9, v10);
  return AssetManager__GetAssetStorage_38514348((AssetManager_o *)Instance, name, callbackFunc, v11);
}


bool __fastcall AssetManager__getAsset_38504408(
        int32_t type,
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  Il2CppObject *Instance; // x22
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4

  if ( (byte_4B15283 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, name, callbackFunc);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7, v8);
    byte_4B15283 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v11 )
    return 0;
  if ( !Instance )
    sub_1BCAA3C(v11, v12);
  return AssetManager__GetAsset_38504616((AssetManager_o *)Instance, type, name, callbackFunc, v13);
}


bool __fastcall AssetManager__getAsset_38504716(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3

  if ( (byte_4B15284 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, callbackFunc, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5, v6);
    byte_4B15284 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v9 )
    return 0;
  if ( !Instance )
    sub_1BCAA3C(v9, v10);
  return AssetManager__GetAsset_38504904((AssetManager_o *)Instance, name, callbackFunc, v11);
}


int64_t __fastcall AssetManager__getDownloadSize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4B15289 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3, v4);
    byte_4B15289 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v7 )
    return 0LL;
  if ( !Instance )
    sub_1BCAA3C(v7, v8);
  return AssetManager__GetDownloadSize((AssetManager_o *)Instance, v8);
}


System_String_o *__fastcall AssetManager__getShaName(System_String_o *name, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Security_Cryptography_SHA1CryptoServiceProvider_o *v15; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Text_UTF8Encoding_o *v19; // x20
  System_Text_StringBuilder_o *appended; // x0
  __int64 v21; // x1
  System_Byte_array *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Text_StringBuilder_o *v26; // x19
  __int64 v27; // x8
  unsigned __int64 v28; // x21
  int v30; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B1527F & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Text_UTF8Encoding_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_25180/*"{0,0:x2}"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_1077/*".bin"*/, v13, v14);
    byte_4B1527F = 1;
  }
  v15 = (System_Security_Cryptography_SHA1CryptoServiceProvider_o *)sub_1BCAA2C(
                                                                      System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo,
                                                                      method,
                                                                      v2,
                                                                      v3);
  System_Security_Cryptography_SHA1CryptoServiceProvider___ctor(v15, 0LL);
  v19 = (System_Text_UTF8Encoding_o *)sub_1BCAA2C(System_Text_UTF8Encoding_TypeInfo, v16, v17, v18);
  System_Text_UTF8Encoding___ctor(v19, 0LL);
  if ( !v19 )
    goto LABEL_13;
  appended = (System_Text_StringBuilder_o *)((__int64 (__fastcall *)(System_Text_UTF8Encoding_o *, System_String_o *, Il2CppMethodPointer))v19->klass->vtable._19_GetBytes.method)(
                                              v19,
                                              name,
                                              v19->klass->vtable._20_GetBytes.methodPtr);
  if ( !v15 )
    goto LABEL_13;
  v22 = System_Security_Cryptography_HashAlgorithm__ComputeHash(
          (System_Security_Cryptography_HashAlgorithm_o *)v15,
          (System_Byte_array *)appended,
          0LL);
  v26 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v23, v24, v25);
  System_Text_StringBuilder___ctor(v26, 0LL);
  System_Security_Cryptography_HashAlgorithm__Clear((System_Security_Cryptography_HashAlgorithm_o *)v15, 0LL);
  if ( !v22 )
    goto LABEL_13;
  v27 = *(_QWORD *)&v22->max_length;
  if ( (int)v27 >= 1 )
  {
    v28 = 0LL;
    while ( 1 )
    {
      if ( v28 >= (unsigned int)v27 )
        sub_1BCAA44(appended, v21);
      v30 = v22->m_Items[v28 + 4] ^ 0xAA;
      appended = (System_Text_StringBuilder_o *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
      if ( !v26 )
        break;
      appended = System_Text_StringBuilder__AppendFormat(
                   v26,
                   (System_String_o *)StringLiteral_25180/*"{0,0:x2}"*/,
                   (Il2CppObject *)appended,
                   0LL);
      LODWORD(v27) = v22->max_length;
      if ( (__int64)++v28 >= (int)v27 )
        goto LABEL_11;
    }
LABEL_13:
    sub_1BCAA3C(appended, v21);
  }
LABEL_11:
  if ( !v26 )
    goto LABEL_13;
  System_Text_StringBuilder__Append_61563116(v26, (System_String_o *)StringLiteral_1077/*".bin"*/, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v26->klass->vtable._3_ToString.method)(
                              v26,
                              v26->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


System_String_o *__fastcall AssetManager__getUrlString(System_String_o *url, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  NetworkManager_c *v8; // x0
  __int64 v9; // x1
  NetworkManager_c *v10; // x0
  System_String_o *v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x0
  int64_t v15; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1527E & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1880/*"?t="*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_21134/*"jar:"*/, v6, v7);
    byte_4B1527E = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  if ( !url )
    sub_1BCAA3C(v8, method);
  if ( !System_String__StartsWith(url, NetworkManager_TypeInfo->static_fields->FILE_URL_SCHEME, 0LL) )
  {
    v10 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
      v10 = NetworkManager_TypeInfo;
    }
    v11 = System_String__Concat_62401220(
            (System_String_o *)StringLiteral_21134/*"jar:"*/,
            v10->static_fields->FILE_URL_SCHEME,
            0LL);
    if ( !System_String__StartsWith(url, v11, 0LL) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
      v15 = NetworkManager__getTime(0LL) / 300;
      v13 = System_Int64__ToString((int64_t)&v15, 0LL);
      return System_String__Concat_62412480(url, (System_String_o *)StringLiteral_1880/*"?t="*/, v13, 0LL);
    }
  }
  return url;
}


System_String_o *__fastcall AssetManager__getUrlString_38476644(AssetData_o *data, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  AssetManager_c *v14; // x0
  char *DataServerAddress; // x0
  const MethodInfo *v16; // x1
  System_String_o *v17; // x20
  System_String_o *DownloadName; // x0
  System_String_o *v19; // x21
  __int64 v20; // x1
  NetworkManager_c *v21; // x0
  System_String_o *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  char *v29; // x20
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x1
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct System_String_o *assetBundleDateVersion; // x1
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int64_t v64; // x1
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  int64_t v77; // x1
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  __int64 v85; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B15280 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&string___TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_21134/*"jar:"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_1881/*"?v="*/, v12, v13);
    byte_4B15280 = 1;
  }
  v14 = AssetManager_TypeInfo;
  v85 = 0LL;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
  DataServerAddress = (char *)AssetManager__get_DataServerAddress((const MethodInfo *)v14);
  if ( !data )
    goto LABEL_27;
  v17 = (System_String_o *)DataServerAddress;
  DownloadName = AssetData__get_DownloadName(data, v16);
  DataServerAddress = (char *)System_String__Concat_62401220(v17, DownloadName, 0LL);
  v19 = (System_String_o *)DataServerAddress;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v16);
  if ( !v19 )
    goto LABEL_27;
  if ( !System_String__StartsWith(v19, NetworkManager_TypeInfo->static_fields->FILE_URL_SCHEME, 0LL) )
  {
    v21 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v20);
      v21 = NetworkManager_TypeInfo;
    }
    v22 = System_String__Concat_62401220(
            (System_String_o *)StringLiteral_21134/*"jar:"*/,
            v21->static_fields->FILE_URL_SCHEME,
            0LL);
    if ( !System_String__StartsWith(v19, v22, 0LL) )
    {
      DataServerAddress = (char *)sub_1BCA888(string___TypeInfo, 9LL);
      if ( DataServerAddress )
      {
        v29 = DataServerAddress;
        if ( !*((_DWORD *)DataServerAddress + 6) )
          goto LABEL_28;
        *((_QWORD *)DataServerAddress + 4) = v19;
        sub_1BCA784((PartyOrganizationUtility_o *)(DataServerAddress + 32), (int64_t)v19, v23, v24, v25, v26, v27, v28);
        if ( *((_DWORD *)v29 + 6) <= 1u )
          goto LABEL_28;
        v36 = StringLiteral_1881/*"?v="*/;
        *((_QWORD *)v29 + 5) = StringLiteral_1881/*"?v="*/;
        sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 40), v36, v30, v31, v32, v33, v34, v35);
        DataServerAddress = (char *)AssetManager_TypeInfo;
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v16);
          DataServerAddress = (char *)AssetManager_TypeInfo;
        }
        if ( *((_DWORD *)v29 + 6) <= 2u )
          goto LABEL_28;
        v43 = *(_QWORD *)(*((_QWORD *)DataServerAddress + 23) + 80LL);
        *((_QWORD *)v29 + 6) = v43;
        sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 48), v43, v37, v38, v39, v40, v41, v42);
        if ( *((_DWORD *)v29 + 6) <= 3u )
          goto LABEL_28;
        v50 = StringLiteral_16290/*"_"*/;
        *((_QWORD *)v29 + 7) = StringLiteral_16290/*"_"*/;
        sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 56), v50, v44, v45, v46, v47, v48, v49);
        if ( *((_DWORD *)v29 + 6) <= 4u )
          goto LABEL_28;
        assetBundleDateVersion = AssetManager_TypeInfo->static_fields->assetBundleDateVersion;
        *((_QWORD *)v29 + 8) = assetBundleDateVersion;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)(v29 + 64),
          (int64_t)assetBundleDateVersion,
          v51,
          v52,
          v53,
          v54,
          v55,
          v56);
        if ( *((_DWORD *)v29 + 6) <= 5u )
          goto LABEL_28;
        v64 = StringLiteral_16290/*"_"*/;
        *((_QWORD *)v29 + 9) = StringLiteral_16290/*"_"*/;
        sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 72), v64, v58, v59, v60, v61, v62, v63);
        HIDWORD(v85) = data->fields.size;
        DataServerAddress = (char *)System_Int32__ToString((int32_t)&v85 + 4, 0LL);
        if ( *((_DWORD *)v29 + 6) <= 6u
          || (*((_QWORD *)v29 + 10) = DataServerAddress,
              sub_1BCA784(
                (PartyOrganizationUtility_o *)(v29 + 80),
                (int64_t)DataServerAddress,
                v65,
                v66,
                v67,
                v68,
                v69,
                v70),
              *((_DWORD *)v29 + 6) <= 7u)
          || (v77 = StringLiteral_16290/*"_"*/,
              *((_QWORD *)v29 + 11) = StringLiteral_16290/*"_"*/,
              sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 88), v77, v71, v72, v73, v74, v75, v76),
              LODWORD(v85) = data->fields.crc,
              DataServerAddress = (char *)System_UInt32__ToString((uint32_t)&v85, 0LL),
              *((_DWORD *)v29 + 6) <= 8u) )
        {
LABEL_28:
          sub_1BCAA44(DataServerAddress, v16);
        }
        *((_QWORD *)v29 + 12) = DataServerAddress;
        sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 96), (int64_t)DataServerAddress, v78, v79, v80, v81, v82, v83);
        return System_String__Concat_62414748((System_String_array *)v29, 0LL);
      }
LABEL_27:
      sub_1BCAA3C(DataServerAddress, v16);
    }
  }
  return v19;
}


System_String_o *__fastcall AssetManager__get_CacheListFile(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  System_String_o *Path; // x0
  __int64 v4; // x1
  AssetManager_c *v5; // x8
  System_String_o *v6; // x19

  if ( (byte_4B15279 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, v1, v2);
    byte_4B15279 = 1;
  }
  Path = AssetStorageCache__GetPath(0LL);
  v5 = AssetManager_TypeInfo;
  v6 = Path;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v4);
    v5 = AssetManager_TypeInfo;
  }
  return System_String__Concat_62401220(v6, v5->static_fields->configFileName, 0LL);
}


System_String_o *__fastcall AssetManager__get_CachePathName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AssetManager_c *v3; // x0

  if ( (byte_4B15277 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, v1, v2);
    byte_4B15277 = 1;
  }
  v3 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v1);
    v3 = AssetManager_TypeInfo;
  }
  return v3->static_fields->cachePathName;
}


System_String_o *__fastcall AssetManager__get_ConfigFileAddress(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AssetManager_c *v3; // x0
  System_String_o *DataServerAddress; // x0

  if ( (byte_4B15278 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, v1, v2);
    byte_4B15278 = 1;
  }
  v3 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v1);
  DataServerAddress = AssetManager__get_DataServerAddress((const MethodInfo *)v3);
  return System_String__Concat_62401220(DataServerAddress, AssetManager_TypeInfo->static_fields->configFileName, 0LL);
}


System_String_o *__fastcall AssetManager__get_DataServerAddress(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  NetworkManager_c *v3; // x0

  if ( (byte_4B15276 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, v1, v2);
    byte_4B15276 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v1);
  if ( !byte_4B152DC )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, v1, v2);
    byte_4B152DC = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v1);
    v3 = NetworkManager_TypeInfo;
  }
  return v3->static_fields->dataServerAddress;
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  ManagerConfig_c *v5; // x0
  AssetManager_c *v7; // x0
  System_String_o *String; // x0

  if ( (byte_4B15270 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v3, v4);
    byte_4B15270 = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( v5->static_fields->UseStandaloneAsset )
    return 0;
  v7 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v1);
    v7 = AssetManager_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(v7->static_fields->SAVE_KEY, v7->static_fields->SAVE_DATA_OFFLINE, 0LL);
  return System_String__op_Equality(String, AssetManager_TypeInfo->static_fields->SAVE_DATA_ONLINE, 0LL);
}


bool __fastcall AssetManager__isDownloadAssetStorageCheck(
        AssetManager_o *this,
        System_String_o *attrib,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_Dictionary_object__object__o *assetBundleDic; // x0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  Il2CppObject *currentValue; // x22
  int monitor; // w8
  char v18; // w19
  int v19; // w21
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v21; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B152A6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, attrib, method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v9,
      v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__,
      v11,
      v12);
    byte_4B152A6 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.assetBundleDic;
  if ( !assetBundleDic
    || (assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      assetBundleDic,
                                                                                      (const MethodInfo_3265090 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__)) == 0LL )
  {
    sub_1BCAA3C(assetBundleDic, attrib);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v21,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)assetBundleDic,
    (const MethodInfo_38D7DB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v21,
            (const MethodInfo_3365640 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v14 )
      break;
    currentValue = v21.fields._currentValue;
    if ( !v21.fields._currentValue )
      sub_1BCAA3C(v14, v15);
    monitor = (int)v21.fields._currentValue[2].monitor;
    if ( monitor >= 1 && monitor != HIDWORD(v21.fields._currentValue[2].monitor)
      || System_String__op_Equality(attrib, (System_String_o *)v21.fields._currentValue[2].klass, 0LL)
      && LODWORD(currentValue[2].monitor) != HIDWORD(currentValue[2].monitor) )
    {
      v18 = 1;
      v19 = 5;
      goto LABEL_14;
    }
  }
  v18 = 0;
  v19 = 6;
LABEL_14:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v21,
    (const MethodInfo_336563C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  return v18 & (v19 == 5);
}


bool __fastcall AssetManager__isExistAssetStorage(System_String_o *name, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4B1528A & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v4, v5);
    byte_4B1528A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v8 )
    return 0;
  if ( !Instance )
    sub_1BCAA3C(v8, v9);
  return AssetManager__IsExistAssetStorage((AssetManager_o *)Instance, name, v10);
}


bool __fastcall AssetManager__isExistAssetStorage_38506616(System_String_array *nameList, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4B1528B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v4, v5);
    byte_4B1528B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v8 )
    return 0;
  if ( !Instance )
    sub_1BCAA3C(v8, v9);
  return AssetManager__IsExistAssetStorage_38506796((AssetManager_o *)Instance, nameList, v10);
}


bool __fastcall AssetManager__isNeedDownload(System_String_o *name, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  AssetData_o *AssetData; // x0

  if ( (byte_4B1528C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v4, v5);
    byte_4B1528C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v8 )
  {
    LOBYTE(AssetData) = 0;
  }
  else
  {
    if ( !Instance )
      sub_1BCAA3C(v8, v9);
    AssetData = AssetManager__GetAssetData(
                  (AssetManager_o *)v8,
                  (System_Collections_Generic_Dictionary_string__AssetData__o *)Instance[4].klass,
                  name,
                  v10);
    if ( AssetData )
      LOBYTE(AssetData) = AssetData->fields.nowVersion != AssetData->fields.newVersion;
  }
  return (char)AssetData;
}


bool __fastcall AssetManager__isNeedDownload_38507164(System_String_array *nameList, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4B1528D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v4, v5);
    byte_4B1528D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v8 )
    return 0;
  if ( !Instance )
    sub_1BCAA3C(v8, v9);
  return AssetManager__IsNeedDownload_38507344((AssetManager_o *)Instance, nameList, v10);
}


bool __fastcall AssetManager__loadAsset(
        int32_t type,
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  Il2CppObject *Instance; // x22
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4

  if ( (byte_4B15281 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, name, callbackFunc);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7, v8);
    byte_4B15281 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v11 )
    return 0;
  if ( !Instance )
    sub_1BCAA3C(v11, v12);
  return AssetManager__LoadAsset((AssetManager_o *)Instance, type, name, callbackFunc, v13);
}


AssetData_o *__fastcall AssetManager__loadAssetResource(System_String_o *name, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4B1529F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v4, v5);
    byte_4B1529F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v8 )
    return 0LL;
  if ( !Instance )
    sub_1BCAA3C(v8, v9);
  return AssetManager__LoadAssetResource((AssetManager_o *)Instance, name, v10);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AssetManager__loadAssetStorage(
        System_String_o *name,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        int32_t maxParallelLoad,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  Il2CppObject *Instance; // x22
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4

  if ( (byte_4B15295 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, callbackFunc, *(_QWORD *)&maxParallelLoad);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7, v8);
    byte_4B15295 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v11 )
    return 0;
  if ( !Instance )
    sub_1BCAA3C(v11, v12);
  return AssetManager__LoadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, v13);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AssetManager__loadAssetStorage_38512128(
        System_String_o *name,
        int32_t maxParallelLoad,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  Il2CppObject *Instance; // x22
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4

  if ( (byte_4B15297 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&maxParallelLoad, callbackFunc);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7, v8);
    byte_4B15297 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v11 )
    return 0;
  if ( !Instance )
    sub_1BCAA3C(v11, v12);
  return AssetManager__LoadAssetStorage((AssetManager_o *)Instance, name, callbackFunc, maxParallelLoad, v13);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AssetManager__loadAssetStorage_38512336(
        System_String_array *nameList,
        System_Action_o *callbackFunc,
        int32_t loadParalleMax,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  Il2CppObject *Instance; // x22
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4

  if ( (byte_4B15298 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, callbackFunc, *(_QWORD *)&loadParalleMax);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7, v8);
    byte_4B15298 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v11 )
    return 0;
  if ( !Instance )
    sub_1BCAA3C(v11, v12);
  return AssetManager__LoadAssetStorage_38512544(
           (AssetManager_o *)Instance,
           nameList,
           callbackFunc,
           loadParalleMax,
           v13);
}


bool __fastcall AssetManager__loadResourcesFromAssetStorage(
        System_String_o *assetBandleName,
        System_String_array *resourceNames,
        AssetLoader_LoadEndDataHandler_o *callbackFunc,
        int32_t maxParallelLoad,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  Il2CppObject *Instance; // x23
  _BOOL8 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x5

  if ( (byte_4B15296 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, resourceNames, callbackFunc);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v9, v10);
    byte_4B15296 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  v13 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( v13 )
    return 0;
  if ( !Instance )
    sub_1BCAA3C(v13, v14);
  return AssetManager__LoadResourcesAssetStorage(
           (AssetManager_o *)Instance,
           assetBandleName,
           resourceNames,
           callbackFunc,
           maxParallelLoad,
           v15);
}


void __fastcall AssetManager__pauseDownloadAssetStorage(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_4B15291 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3, v4);
    byte_4B15291 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !Instance )
      sub_1BCAA3C(v7, v8);
    if ( !BYTE1(Instance[7].monitor) )
      BYTE1(Instance[7].monitor) = 1;
  }
}


void __fastcall AssetManager__releaseAsset(int32_t type, System_String_o *name, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3

  if ( (byte_4B15285 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, name, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5, v6);
    byte_4B15285 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v9 )
  {
    if ( !Instance )
      sub_1BCAA3C(v9, v10);
    AssetManager__ReleaseAsset((AssetManager_o *)Instance, type, name, v11);
  }
}


void __fastcall AssetManager__releaseAssetResource(System_String_o *name, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4B152A1 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v4, v5);
    byte_4B152A1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !Instance )
      sub_1BCAA3C(v8, v9);
    AssetManager__ReleaseAssetResource((AssetManager_o *)Instance, name, v10);
  }
}


void __fastcall AssetManager__releaseAssetStorage(System_String_o *name, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4B1529D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v4, v5);
    byte_4B1529D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !Instance )
      sub_1BCAA3C(v8, v9);
    AssetManager__ReleaseAssetStorage((AssetManager_o *)Instance, name, v10);
  }
}


void __fastcall AssetManager__releaseAssetStorage_38514680(System_String_array *nameList, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4B1529E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v4, v5);
    byte_4B1529E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !Instance )
      sub_1BCAA3C(v8, v9);
    AssetManager__ReleaseAssetStorage_38514856((AssetManager_o *)Instance, nameList, v10);
  }
}


void __fastcall AssetManager__releaseAsset_38505404(
        int32_t type,
        System_String_array *nameList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  Il2CppObject *Instance; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3

  if ( (byte_4B15286 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, nameList, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5, v6);
    byte_4B15286 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v9 )
  {
    if ( !Instance )
      sub_1BCAA3C(v9, v10);
    AssetManager__ReleaseAsset_38505588((AssetManager_o *)Instance, type, nameList, v11);
  }
}


void __fastcall AssetManager__releaseAsset_38505704(AssetData_o *assetInfo, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3

  if ( (byte_4B15287 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v4, v5);
    byte_4B15287 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !Instance )
      sub_1BCAA3C(v8, v9);
    if ( assetInfo )
      AssetManager__ReleaseAsset((AssetManager_o *)Instance, assetInfo->fields.type, assetInfo->fields.name, v10);
  }
}


void __fastcall AssetManager__releaseAsset_38505912(AssetData_array *assetInfoList, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4B15288 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v4, v5);
    byte_4B15288 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !Instance )
      sub_1BCAA3C(v8, v9);
    AssetManager__ReleaseAsset_38506088((AssetManager_o *)Instance, assetInfoList, v10);
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

  if ( (byte_4B1526E & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_ResourceUnloadEventHandler_TypeInfo, value, method);
    byte_4B1526E = 1;
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
    v9 = sub_1C05CD0(p_unloadCallbacks, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  AssetManager__WaitForExecutionUnloadUnuseAssets(v11, v12);
}


void __fastcall AssetManager__resetAssetStorageVersion(System_String_o *path, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4B1528F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v4, v5);
    byte_4B1528F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !Instance )
      sub_1BCAA3C(v8, v9);
    AssetManager__ResetAssetStorageVersion((AssetManager_o *)Instance, path, v10);
  }
}


void __fastcall AssetManager__resumeDownloadAssetStorage(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4B15292 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3, v4);
    byte_4B15292 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !Instance )
      sub_1BCAA3C(v7, v8);
    if ( BYTE1(Instance[7].monitor) )
    {
      BYTE1(Instance[7].monitor) = 0;
      AssetManager__LoadStart((AssetManager_o *)Instance, v8);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetManager__setDebugStatusOut(AssetManager_o *this, bool isUse, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  Il2CppObject *Instance; // x19
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_4B15274 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isUse, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3, v4);
    byte_4B15274 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( !Instance && !v7 )
    sub_1BCAA3C(v7, v8);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callbackFunc, v5, v6, v7, v8, v9, v10);
}


void __fastcall AssetManager_LoadWaitStatus___ctor_38528380(
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)data, v5, v6, v7, v8, v9, v10);
}


void __fastcall AssetManager_LoadWaitStatus___ctor_38528600(
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)data, v9, v10, v11, v12, v13, v14);
  this->fields.callbackFunc2 = callbackFunc;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc2,
    (int64_t)callbackFunc,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.resourceNames = resourceNames;
  sub_1BCA784(
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

  if ( (byte_4B152D0 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, callbackFunc, method);
    byte_4B152D0 = 1;
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
    sub_1BCACFC(v7);
LABEL_7:
    p_callbackFunc2->klass = (PartyOrganizationUtility_c *)v14;
  }
  sub_1BCA784(p_callbackFunc2, v14, v8, v9, v10, v11, v12, v13);
}


void __fastcall AssetManager_LoadWaitStatus__AddEntry(AssetManager_LoadWaitStatus_o *this, const MethodInfo *method)
{
  struct AssetData_o *data; // x8
  int32_t entryCount; // w9

  data = this->fields.data;
  if ( !data )
    sub_1BCAA3C(this, method);
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
    LOBYTE(data) = AssetData__IsSame_38479508(data, type, name, method);
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
  __int64 v2; // x2
  struct AssetData_o *data; // x8
  System_String_o **p_name; // x8

  if ( (byte_4B152D1 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B152D1 = 1;
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A0C8C8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0C888;
}


System_IAsyncResult_o *__fastcall AssetManager_ResourceUnloadEventHandler__BeginInvoke(
        AssetManager_ResourceUnloadEventHandler_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1BCA794(this, &v5, callback, object);
}


void __fastcall AssetManager_ResourceUnloadEventHandler__EndInvoke(
        AssetManager_ResourceUnloadEventHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t _1__state; // w8
  __int64 v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct AssetData_o *asset; // x1
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Func_bool__o *v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  UnityEngine_WaitUntil_o *v29; // x20
  Il2CppObject **p__2__current; // x19
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  bool result; // w0
  System_Action_o *action; // x0

  if ( (byte_4B152D5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Func_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_AssetManager___c__DisplayClass184_0__AssetObjectListSetupAndCall_b__0__, v5, v6);
    sub_1BCA7E0(&AssetManager___c__DisplayClass184_0_TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_WaitUntil_TypeInfo, v9, v10);
    byte_4B152D5 = 1;
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
  v12 = sub_1BCAA2C(AssetManager___c__DisplayClass184_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  asset = this->fields.asset;
  *(_QWORD *)(v12 + 16) = asset;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)asset, v15, v16, v17, v18, v19, v20);
  v25 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v22, v23, v24);
  System_Func_bool____ctor(
    v25,
    (Il2CppObject *)v12,
    Method_AssetManager___c__DisplayClass184_0__AssetObjectListSetupAndCall_b__0__,
    0LL);
  v29 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, v26, v27, v28);
  UnityEngine_WaitUntil___ctor(v29, v25, 0LL);
  this->fields.__2__current = (Il2CppObject *)v29;
  p__2__current = &this->fields.__2__current;
  sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, (int64_t)v29, v31, v32, v33, v34, v35, v36);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_AssetManager__AssetObjectListSetupAndCall_d__184_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t _1__state; // w8
  __int64 v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct AssetData_array *assetList; // x1
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Func_bool__o *v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  UnityEngine_WaitUntil_o *v29; // x20
  Il2CppObject **p__2__current; // x19
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  bool result; // w0
  System_Action_o *action; // x0

  if ( (byte_4B152D6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Func_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_AssetManager___c__DisplayClass185_0__AssetObjectListSetupAndCall_b__0__, v5, v6);
    sub_1BCA7E0(&AssetManager___c__DisplayClass185_0_TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_WaitUntil_TypeInfo, v9, v10);
    byte_4B152D6 = 1;
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
  v12 = sub_1BCAA2C(AssetManager___c__DisplayClass185_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  assetList = this->fields.assetList;
  *(_QWORD *)(v12 + 16) = assetList;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)assetList, v15, v16, v17, v18, v19, v20);
  v25 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v22, v23, v24);
  System_Func_bool____ctor(
    v25,
    (Il2CppObject *)v12,
    Method_AssetManager___c__DisplayClass185_0__AssetObjectListSetupAndCall_b__0__,
    0LL);
  v29 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, v26, v27, v28);
  UnityEngine_WaitUntil___ctor(v29, v25, 0LL);
  this->fields.__2__current = (Il2CppObject *)v29;
  p__2__current = &this->fields.__2__current;
  sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, (int64_t)v29, v31, v32, v33, v34, v35, v36);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_AssetManager__AssetObjectListSetupAndCall_d__185_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
      sub_1BCAA3C(0LL, method);
    AssetManager__LoadStart(_4__this, method);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__2__current, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_AssetManager__DelayLoadStart_d__149_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  int64_t v2; // x2
  __int64 v3; // x3
  AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  int32_t _1__state; // w8
  struct AssetManager_o *_4__this; // x20
  _BOOL8 v45; // x0
  __int64 v46; // x1
  const MethodInfo *v47; // x2
  AssetData_o *currentValue; // x21
  int monitor; // w8
  const MethodInfo *v50; // x2
  _BOOL4 isDispLogo_5__2; // w8
  __int64 v52; // x2
  __int64 v53; // x3
  struct System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *downLoadWaitList; // x8
  Il2CppObject *v55; // x22
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  __int64 v62; // x1
  System_String_o *v63; // x22
  const MethodInfo *v64; // x1
  System_String_o *v65; // x23
  AssetManager_o *DownloadSize; // x0
  const MethodInfo *v67; // x1
  Il2CppObject *v68; // x0
  System_String_o *v69; // x23
  Il2CppObject *Instance; // x0
  Il2CppObject *v71; // x25
  CommonUI_o *v72; // x21
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  ErrorDialog_ClickDelegate_o *v76; // x24
  struct AssetManager___c__DisplayClass118_0_o *_8__1; // x8
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  UnityEngine_WaitForEndOfFrame_o *v82; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  bool result; // w0
  Il2CppObject *v91; // x21
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x3
  System_Action_o *v95; // x22
  __int64 v96; // x2
  __int64 v97; // x3
  AvalonSceneManager_c *v98; // x0
  float DEFAULT_FADE_TIME; // s8
  UnityEngine_WaitForSeconds_o *v100; // x20
  PartyOrganizationUtility_o *v101; // x19
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v108; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v109; // [xsp+20h] [xbp-70h] BYREF

  v4 = this;
  if ( (byte_4B152D7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_b__118_0__, v5, v6);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&ErrorDialog_ClickDelegate_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__, v11, v12);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__,
      v13,
      v14);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__,
      v15,
      v16);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__get_Current__,
      v17,
      v18);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__get_Count__, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23, v24);
    sub_1BCA7E0(
      &Method_AssetManager___c__DisplayClass118_0__DownloadAssetStorageAttributeWithCheckDialog_b__1__,
      v25,
      v26);
    sub_1BCA7E0(&AssetManager___c__DisplayClass118_0_TypeInfo, v27, v28);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__,
      v29,
      v30);
    sub_1BCA7E0(&UnityEngine_WaitForEndOfFrame_TypeInfo, v31, v32);
    sub_1BCA7E0(&UnityEngine_WaitForSeconds_TypeInfo, v33, v34);
    sub_1BCA7E0(&StringLiteral_25566/*"データ更新"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_9356/*"NETWORK_ERROR_DATA_UPDATE_TITLE"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_355/*" ゲームデータの更新を行います。\n\n{0}\n\n ※Wi-Fi接続での更新を推奨します。"*/, v39, v40);
    this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)sub_1BCA7E0(
                                                                                    &StringLiteral_9354/*"NETWORK_ERROR_DATA_UPDATE_EXP"*/,
                                                                                    v41,
                                                                                    v42);
    byte_4B152D7 = 1;
  }
  memset(&v109, 0, sizeof(v109));
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 2 )
  {
    isDispLogo_5__2 = v4->fields._isDispLogo_5__2;
    v4->fields.__1__state = -1;
    if ( isDispLogo_5__2 )
    {
      this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_56;
      CommonUI__SetLoadMode((CommonUI_o *)this, 3, 0LL);
    }
LABEL_52:
    if ( _4__this )
    {
      _4__this->fields.loadParallelMax = v4->fields.loadParallelMax;
      AssetManager__LoadStart(_4__this, method);
      return 0;
    }
    goto LABEL_56;
  }
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
LABEL_41:
    _8__1 = v4->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_56;
    if ( !_8__1->fields.isDataUpdate )
    {
LABEL_45:
      v82 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2, v3);
      UnityEngine_WaitForEndOfFrame___ctor(v82, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v82;
      p__2__current = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
      sub_1BCA784(p__2__current, (int64_t)v82, v84, v85, v86, v87, v88, v89);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    }
    this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this )
      goto LABEL_56;
    if ( CommonUI__isBusyDataUpdateDialog((CommonUI_o *)this, 0LL) )
      goto LABEL_45;
    v4->fields.__8__1 = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__8__1, 0LL, v2, v3, v78, v79, v80, v81);
    goto LABEL_47;
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_56;
  this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)_4__this->fields.assetBundleDic;
  if ( !this )
    goto LABEL_56;
  this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                  (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                                                  (const MethodInfo_3265090 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Values__);
  if ( !this )
    goto LABEL_56;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v108,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_38D7DB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__AssetData__GetEnumerator__);
  v109 = v108;
  while ( 1 )
  {
    v45 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v109,
            (const MethodInfo_3365640 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__MoveNext__);
    if ( !v45 )
      break;
    currentValue = (AssetData_o *)v109.fields._currentValue;
    if ( !v109.fields._currentValue )
      sub_1BCAA3C(v45, v46);
    monitor = (int)v109.fields._currentValue[2].monitor;
    if ( monitor < 1 || monitor == HIDWORD(v109.fields._currentValue[2].monitor) )
    {
      if ( System_String__op_Equality(v4->fields.attrib, (System_String_o *)v109.fields._currentValue[2].klass, 0LL)
        && currentValue->fields.nowVersion != currentValue->fields.newVersion )
      {
        AssetManager__AddLoadWaitStatus_38518064(_4__this, currentValue, v50);
      }
    }
    else
    {
      AssetManager__AddLoadWaitStatus_38518064(_4__this, (AssetData_o *)v109.fields._currentValue, v47);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v109,
    (const MethodInfo_336563C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__AssetData__Dispose__);
  downLoadWaitList = _4__this->fields.downLoadWaitList;
  if ( !downLoadWaitList )
LABEL_56:
    sub_1BCAA3C(this, method);
  if ( downLoadWaitList->fields._size >= 1 )
  {
    v55 = (Il2CppObject *)sub_1BCAA2C(AssetManager___c__DisplayClass118_0_TypeInfo, method, v52, v53);
    System_Object___ctor(v55, 0LL);
    v4->fields.__8__1 = (struct AssetManager___c__DisplayClass118_0_o *)v55;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__8__1, (int64_t)v55, v56, v57, v58, v59, v60, v61);
    if ( !v4->fields.__8__1 )
      goto LABEL_56;
    v4->fields.__8__1->fields.isDataUpdate = 0;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    if ( LocalizationManager__ContainsKey((System_String_o *)StringLiteral_9356/*"NETWORK_ERROR_DATA_UPDATE_TITLE"*/, 0LL) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v62);
      v63 = LocalizationManager__Get((System_String_o *)StringLiteral_9356/*"NETWORK_ERROR_DATA_UPDATE_TITLE"*/, 0LL);
    }
    else
    {
      v63 = (System_String_o *)StringLiteral_25566/*"データ更新"*/;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v62);
    if ( LocalizationManager__ContainsKey((System_String_o *)StringLiteral_9354/*"NETWORK_ERROR_DATA_UPDATE_EXP"*/, 0LL) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v64);
      v65 = LocalizationManager__Get((System_String_o *)StringLiteral_9354/*"NETWORK_ERROR_DATA_UPDATE_EXP"*/, 0LL);
    }
    else
    {
      v65 = (System_String_o *)StringLiteral_355/*" ゲームデータの更新を行います。\n\n{0}\n\n ※Wi-Fi接続での更新を推奨します。"*/;
    }
    DownloadSize = (AssetManager_o *)AssetManager__GetDownloadSize(_4__this, v64);
    v68 = (Il2CppObject *)AssetManager__ConvertDownloadSizeToString(DownloadSize, (double)(__int64)DownloadSize, v67);
    v69 = System_String__Format(v65, v68, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v71 = (Il2CppObject *)v4->fields.__8__1;
    v72 = (CommonUI_o *)Instance;
    v76 = (ErrorDialog_ClickDelegate_o *)sub_1BCAA2C(ErrorDialog_ClickDelegate_TypeInfo, v73, v74, v75);
    ErrorDialog_ClickDelegate___ctor(
      v76,
      v71,
      Method_AssetManager___c__DisplayClass118_0__DownloadAssetStorageAttributeWithCheckDialog_b__1__,
      0LL);
    if ( !v72 )
      goto LABEL_56;
    CommonUI__OpenDataUpdateDialog(v72, v63, v69, v76, 0, 0LL);
    goto LABEL_41;
  }
LABEL_47:
  v4->fields._isDispLogo_5__2 = 0;
  v91 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v95 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v92, v93, v94);
  System_Action___ctor(
    v95,
    (Il2CppObject *)_4__this,
    Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_b__118_0__,
    0LL);
  if ( !v91 )
    goto LABEL_56;
  this = (AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_o *)CommonUI__PlayLogo(
                                                                                  (CommonUI_o *)v91,
                                                                                  v95,
                                                                                  0LL);
  v4->fields._isDispLogo_5__2 = (unsigned __int8)this & 1;
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_52;
  v98 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, method);
    v98 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v98->static_fields->DEFAULT_FADE_TIME;
  v100 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v96, v97);
  UnityEngine_WaitForSeconds___ctor(v100, DEFAULT_FADE_TIME, 0LL);
  v4->fields.__2__current = (Il2CppObject *)v100;
  v101 = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
  sub_1BCA784(v101, (int64_t)v100, v102, v103, v104, v105, v106, v107);
  *(_DWORD *)&v101[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_AssetManager__DownloadAssetStorageAttributeWithCheckDialog_d__118_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  AssetManager__InitCR_d__131_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x1
  __int64 v88; // x2
  struct AssetManager_o *_4__this; // x20
  AssetManager_c *v90; // x0
  AssetManager_c *v91; // x0
  AssetManager_c *v92; // x0
  AssetManager_c *v93; // x0
  __int64 v94; // x1
  System_String_o *AllText; // x21
  System_String_o *v96; // x0
  UnityEngine_WaitForEndOfFrame_o *v97; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  bool result; // w0
  System_String_o *v106; // x21
  System_Char_array *v107; // x0
  System_String_o *v108; // x21
  System_Char_array *v109; // x0
  il2cpp_array_size_t max_length; // w8
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  int v117; // w23
  __int64 *v118; // x8
  System_String_o *v119; // x0
  __int64 v120; // x1
  System_String_o *v121; // x22
  System_String_o *v122; // x22
  System_String_o *v123; // x21
  System_Text_Encoding_o *UTF8; // x0
  __int64 v125; // x1
  __int64 v126; // x1
  System_Byte_array *v127; // x23
  uint32_t v128; // w23
  System_Char_array *v129; // x0
  il2cpp_array_size_t v130; // w8
  AssetManager__InitCR_d__131_o *v131; // x25
  Il2CppObject *_2__current; // x8
  AssetManager__InitCR_d__131_o *v133; // x22
  System_String_o *v134; // x0
  __int64 v135; // x1
  int64_t v136; // x2
  int32_t v137; // w3
  System_String_o *v138; // x4
  BattleSetupInfo_o *v139; // x5
  FollowerInfo_o *v140; // x6
  PartyListViewItem_o *v141; // x7
  AssetManager_c *v142; // x8
  int64_t v143; // x23
  struct AssetManager_StaticFields *v144; // x0
  __int64 v145; // x1
  int64_t v146; // x2
  int32_t v147; // w3
  System_String_o *v148; // x4
  BattleSetupInfo_o *v149; // x5
  FollowerInfo_o *v150; // x6
  PartyListViewItem_o *v151; // x7
  AssetManager_c *v152; // x0
  int64_t *p_configFileUrl_5__2; // x8
  int64_t v154; // x23
  struct AssetManager_StaticFields *v155; // x0
  __int64 v156; // x1
  int64_t v157; // x2
  int32_t v158; // w3
  System_String_o *v159; // x4
  BattleSetupInfo_o *v160; // x5
  FollowerInfo_o *v161; // x6
  PartyListViewItem_o *v162; // x7
  AssetManager_c *v163; // x0
  int64_t *p_loader_5__3; // x8
  int64_t v165; // x22
  struct AssetManager_StaticFields *v166; // x0
  int v167; // w8
  __int64 v168; // x21
  AssetManager__InitCR_d__131_o *v169; // x22
  System_String_o *v170; // x0
  int32_t v171; // w23
  System_String_o *configFileUrl_5__2; // x24
  System_String_o *v173; // x0
  int32_t v174; // w25
  System_String_o *v175; // x0
  __int64 v176; // x2
  __int64 v177; // x3
  int v178; // w8
  uint32_t v179; // w26
  System_String_o *v180; // x27
  System_String_o *wait_5__6; // x22
  System_Collections_Generic_Dictionary_object__object__o *assetBundleDic; // x28
  AssetData_o *v183; // x29
  System_String_o *v184; // x21
  AssetManager_c *v185; // x0
  struct AssetManager_StaticFields *static_fields; // x0
  void *v187; // x1
  void *v188; // x1
  struct AssetManager_StaticFields *v189; // x0
  int64_t v190; // x2
  int32_t v191; // w3
  System_String_o *v192; // x4
  BattleSetupInfo_o *v193; // x5
  FollowerInfo_o *v194; // x6
  PartyListViewItem_o *v195; // x7
  void *v196; // x1
  struct AssetManager_StaticFields *v197; // x0
  int64_t v198; // x2
  int32_t v199; // w3
  System_String_o *v200; // x4
  BattleSetupInfo_o *v201; // x5
  FollowerInfo_o *v202; // x6
  PartyListViewItem_o *v203; // x7
  ManagerConfig_c *v204; // x0
  struct ManagerConfig_StaticFields *v205; // x8
  Il2CppObject *Instance; // x22
  __int64 v207; // x1
  __int64 v208; // x2
  __int64 v209; // x3
  ErrorDialog_ClickDelegate_o *v210; // x23
  AssetManager_c *v211; // x0
  System_String_o *ConfigFileAddress; // x0
  int64_t v213; // x2
  int32_t v214; // w3
  System_String_o *v215; // x4
  BattleSetupInfo_o *v216; // x5
  FollowerInfo_o *v217; // x6
  PartyListViewItem_o *v218; // x7
  int64_t v219; // x2
  int32_t v220; // w3
  System_String_o *v221; // x4
  BattleSetupInfo_o *v222; // x5
  FollowerInfo_o *v223; // x6
  PartyListViewItem_o *v224; // x7
  System_String_o *v225; // x21
  System_String_o *UrlString; // x0
  UnityEngine_Networking_UnityWebRequest_o *v227; // x0
  int64_t v228; // x2
  int32_t v229; // w3
  System_String_o *v230; // x4
  BattleSetupInfo_o *v231; // x5
  FollowerInfo_o *v232; // x6
  PartyListViewItem_o *v233; // x7
  __int64 v234; // x1
  __int64 v235; // x2
  __int64 v236; // x3
  float unscaledTime; // s8
  ManagerConfig_c *v238; // x0
  float TIMEOUT; // s0
  UnityEngine_WaitForEndOfFrame_o *v240; // x21
  int64_t v241; // x2
  int32_t v242; // w3
  System_String_o *v243; // x4
  BattleSetupInfo_o *v244; // x5
  FollowerInfo_o *v245; // x6
  PartyListViewItem_o *v246; // x7
  AssetManager__InitCR_d__131_o **v247; // x21
  float downloadProgress; // s0
  float loadProgress_5__5; // s9
  float v250; // s8
  int64_t v251; // x2
  int32_t v252; // w3
  System_String_o *v253; // x4
  BattleSetupInfo_o *v254; // x5
  FollowerInfo_o *v255; // x6
  PartyListViewItem_o *v256; // x7
  float v257; // s0
  bool v258; // zf
  float v259; // s8
  System_String_o *error; // x0
  __int64 v261; // x1
  System_String_o *text; // x22
  System_String_o *v263; // x22
  const MethodInfo *v264; // x1
  System_String_o *v265; // x22
  System_String_o *v266; // x0
  System_String_o *v267; // x0
  Il2CppObject *v268; // x22
  ManagerConfig_c *v269; // x0
  struct ManagerConfig_StaticFields *v270; // x8
  int64_t v271; // x1
  PartyOrganizationUtility_o *v272; // x19
  int v273; // w8
  AssetManager__InitCR_d__131_o *v274; // x22
  __int64 v275; // x1
  int v276; // w8
  int32_t v277; // w0
  int32_t v278; // w24
  System_String_o *v279; // x23
  System_String_o *v280; // x22
  __int64 v281; // x1
  System_Byte_array *v282; // x24
  uint32_t v283; // w24
  __int64 v284; // x1
  int64_t v285; // x2
  int32_t v286; // w3
  System_String_o *v287; // x4
  BattleSetupInfo_o *v288; // x5
  FollowerInfo_o *v289; // x6
  PartyListViewItem_o *v290; // x7
  int64_t v291; // x2
  int32_t v292; // w3
  System_String_o *v293; // x4
  BattleSetupInfo_o *v294; // x5
  FollowerInfo_o *v295; // x6
  PartyListViewItem_o *v296; // x7
  int v297; // w8
  System_String_array *v298; // x25
  __int64 v299; // x1
  __int64 v300; // x2
  __int64 v301; // x3
  __int64 v302; // x22
  const MethodInfo *v303; // x1
  int64_t v304; // x2
  __int64 v305; // x3
  System_String_o *v306; // x4
  BattleSetupInfo_o *v307; // x5
  FollowerInfo_o *v308; // x6
  PartyListViewItem_o *v309; // x7
  int v310; // w8
  unsigned int v311; // w29
  AssetManager__InitCR_d__131_o *v312; // x27
  char v313; // w8
  System_String_o *v314; // x0
  __int64 v315; // x1
  AssetManager_c *v316; // x8
  int v317; // w9
  void **v318; // x11
  struct System_String_o **v319; // x10
  System_String_o *v320; // x27
  bool v321; // cc
  int64_t *v322; // x9
  int64_t *v323; // x10
  int64_t v324; // x24
  int64_t v325; // x23
  int64_t v326; // x2
  int32_t v327; // w3
  System_String_o *v328; // x4
  BattleSetupInfo_o *v329; // x5
  FollowerInfo_o *v330; // x6
  PartyListViewItem_o *v331; // x7
  int64_t v332; // x2
  int32_t v333; // w3
  System_String_o *v334; // x4
  BattleSetupInfo_o *v335; // x5
  FollowerInfo_o *v336; // x6
  PartyListViewItem_o *v337; // x7
  int64_t v338; // x2
  int32_t v339; // w3
  System_String_o *v340; // x4
  BattleSetupInfo_o *v341; // x5
  FollowerInfo_o *v342; // x6
  PartyListViewItem_o *v343; // x7
  System_String_o *v344; // x0
  System_String_o *v345; // x0
  int32_t v346; // w23
  System_String_o *v347; // x0
  const MethodInfo *v348; // x3
  int v349; // w8
  uint32_t v350; // w24
  System_String_o *v351; // x26
  AssetData_o *AssetData; // x0
  const MethodInfo *v353; // x6
  Il2CppObject *v354; // x27
  int64_t v355; // x2
  int32_t v356; // w3
  System_String_o *v357; // x4
  BattleSetupInfo_o *v358; // x5
  FollowerInfo_o *v359; // x6
  PartyListViewItem_o *v360; // x7
  __int64 v361; // x8
  _QWORD *v362; // x9
  __int64 _2__current_low; // x10
  __int64 v364; // x8
  System_Collections_Generic_List_object__o *v365; // x27
  AssetData_o *v366; // x28
  int64_t v367; // x2
  int32_t v368; // w3
  System_String_o *v369; // x4
  BattleSetupInfo_o *v370; // x5
  FollowerInfo_o *v371; // x6
  PartyListViewItem_o *v372; // x7
  struct System_Object_array *items; // x8
  _QWORD *v374; // x9
  __int64 size; // x10
  Il2CppClass **v376; // x0
  AssetManager_c *v377; // x0
  int64_t v378; // x23
  struct AssetManager_StaticFields *v379; // x0
  struct AssetManager_StaticFields *v380; // x0
  int64_t v381; // x1
  int64_t v382; // x2
  int32_t v383; // w3
  System_String_o *v384; // x4
  BattleSetupInfo_o *v385; // x5
  FollowerInfo_o *v386; // x6
  PartyListViewItem_o *v387; // x7
  struct AssetManager_StaticFields *v388; // x0
  int64_t v389; // x1
  int64_t v390; // x2
  int32_t v391; // w3
  System_String_o *v392; // x4
  BattleSetupInfo_o *v393; // x5
  FollowerInfo_o *v394; // x6
  PartyListViewItem_o *v395; // x7
  _BOOL8 v396; // x0
  __int64 v397; // x1
  Il2CppObject *current; // x22
  System_Collections_Generic_Dictionary_object__object__o *v399; // x0
  __int64 v400; // x1
  System_Collections_Generic_Dictionary_object__object__o *v401; // x0
  Il2CppObject *v402; // x22
  int64_t v403; // x2
  int32_t v404; // w3
  System_String_o *v405; // x4
  BattleSetupInfo_o *v406; // x5
  FollowerInfo_o *v407; // x6
  PartyListViewItem_o *v408; // x7
  ManagerConfig_c *v409; // x0
  struct ManagerConfig_StaticFields *v410; // x8
  Il2CppObject *v411; // x21
  __int64 v412; // x1
  __int64 v413; // x2
  __int64 v414; // x3
  ErrorDialog_ClickDelegate_o *v415; // x23
  UnityEngine_WaitForEndOfFrame_o *v416; // x20
  int64_t v417; // x2
  int32_t v418; // w3
  System_String_o *v419; // x4
  BattleSetupInfo_o *v420; // x5
  FollowerInfo_o *v421; // x6
  PartyListViewItem_o *v422; // x7
  ManagementManager_c *v423; // x0
  _BOOL4 isDuringStartup; // w22
  __int64 v425; // x1
  Il2CppObject *v426; // x21
  System_String_o *v427; // x22
  __int64 v428; // x1
  __int64 v429; // x2
  __int64 v430; // x3
  ErrorDialog_ClickDelegate_o *v431; // x23
  System_String_o *v432; // x22
  __int64 v433; // x1
  __int64 v434; // x2
  __int64 v435; // x3
  ErrorDialog_ClickDelegate_o *v436; // x23
  UnityEngine_WaitForEndOfFrame_o *v437; // x20
  int64_t v438; // x2
  int32_t v439; // w3
  System_String_o *v440; // x4
  BattleSetupInfo_o *v441; // x5
  FollowerInfo_o *v442; // x6
  PartyListViewItem_o *v443; // x7
  UnityEngine_WaitForSeconds_o *v444; // x20
  int64_t v445; // x2
  int32_t v446; // w3
  System_String_o *v447; // x4
  BattleSetupInfo_o *v448; // x5
  FollowerInfo_o *v449; // x6
  PartyListViewItem_o *v450; // x7
  const MethodInfo *v451; // x2
  int64_t v452; // x2
  int32_t v453; // w3
  System_String_o *v454; // x4
  BattleSetupInfo_o *v455; // x5
  FollowerInfo_o *v456; // x6
  PartyListViewItem_o *v457; // x7
  __int64 v458; // x1
  __int64 v459; // x2
  __int64 v460; // x3
  UnityEngine_WaitForEndOfFrame_o *v461; // x20
  int64_t v462; // x2
  int32_t v463; // w3
  System_String_o *v464; // x4
  BattleSetupInfo_o *v465; // x5
  FollowerInfo_o *v466; // x6
  PartyListViewItem_o *v467; // x7
  const MethodInfo *effectDistance; // [xsp+0h] [xbp-F0h]
  System_Nullable_Vector2__o effectDistancea; // [xsp+0h] [xbp-F0h]
  System_Nullable_Vector2__o effectDistanceb; // [xsp+0h] [xbp-F0h]
  const MethodInfo *effectDistance_8; // [xsp+8h] [xbp-E8h]
  System_String_o *klass; // [xsp+18h] [xbp-D8h]
  System_String_o *v473; // [xsp+20h] [xbp-D0h]
  int32_t version; // [xsp+2Ch] [xbp-C4h]
  PartyOrganizationUtility_o *v475; // [xsp+30h] [xbp-C0h]
  PartyOrganizationUtility_o *v476; // [xsp+38h] [xbp-B8h]
  AssetManager__InitCR_d__131_o *v477; // [xsp+40h] [xbp-B0h]
  PartyOrganizationUtility_o *v478; // [xsp+40h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v479; // [xsp+48h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v480; // [xsp+60h] [xbp-90h] BYREF

  v8 = this;
  if ( (byte_4B152D8 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetDataListInfo_TypeInfo, method, v2);
    sub_1BCA7E0(&AssetData_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_AssetManager_OnClickRetryDialog__, v11, v12);
    sub_1BCA7E0(&Method_AssetManager_OnClickWaitDebugDialog__, v13, v14);
    sub_1BCA7E0(&AssetManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&CatAndMouseGame_TypeInfo, v17, v18);
    sub_1BCA7E0(&char___TypeInfo, v19, v20);
    sub_1BCA7E0(&ErrorDialog_ClickDelegate_TypeInfo, v21, v22);
    sub_1BCA7E0(&Crc32_TypeInfo, v23, v24);
    sub_1BCA7E0(&UnityEngine_Debug_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__AssetData__Add__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__AssetData__set_Item__, v35, v36);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__, v37, v38);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__, v39, v40);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__, v41, v42);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssetData__Add__, v43, v44);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__, v45, v46);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v47, v48);
    sub_1BCA7E0(&ManagementManager_TypeInfo, v49, v50);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v51, v52);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v53, v54);
    sub_1BCA7E0(&UnityEngine_WaitForEndOfFrame_TypeInfo, v55, v56);
    sub_1BCA7E0(&UnityEngine_WaitForSeconds_TypeInfo, v57, v58);
    sub_1BCA7E0(&StringLiteral_2529/*"AssetStorageList download time over"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_2525/*"AssetStorageList download crc error"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_2521/*"AssetStorage boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_2157/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_2517/*"AssetStorage boot load crc error : チェックサム値が不一致"*/, v67, v68);
    sub_1BCA7E0(&StringLiteral_16105/*"[FFFF80]Download error for debug"*/, v69, v70);
    sub_1BCA7E0(&StringLiteral_2526/*"AssetStorageList download data error"*/, v71, v72);
    sub_1BCA7E0(&StringLiteral_2528/*"AssetStorageList download error : "*/, v73, v74);
    sub_1BCA7E0(&StringLiteral_2519/*"AssetStorage boot load error : アセットバンドルリスト作成失敗"*/, v75, v76);
    sub_1BCA7E0(&StringLiteral_25411/*"~"*/, v77, v78);
    sub_1BCA7E0(&StringLiteral_2520/*"AssetStorage boot load error : ファイル先頭の１行目の内容が空"*/, v79, v80);
    sub_1BCA7E0(&StringLiteral_11594/*"SCRIPT"*/, v81, v82);
    sub_1BCA7E0(&StringLiteral_1883/*"@"*/, v83, v84);
    sub_1BCA7E0(&StringLiteral_2158/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, v85, v86);
    this = (AssetManager__InitCR_d__131_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v87, v88);
    byte_4B152D8 = 1;
  }
  memset(&v480, 0, sizeof(v480));
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_281;
      v90 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
        v90 = AssetManager_TypeInfo;
      }
      if ( !System_IO_Directory__Exists(v90->static_fields->cachePathName, 0LL) )
      {
        v91 = AssetManager_TypeInfo;
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
          v91 = AssetManager_TypeInfo;
        }
        System_IO_Directory__CreateDirectory(v91->static_fields->cachePathName, 0LL);
      }
      this = (AssetManager__InitCR_d__131_o *)_4__this->fields.assetBundleDic;
      if ( !this )
        goto LABEL_281;
      if ( System_Collections_Generic_Dictionary_object__object___get_Count(
             (System_Collections_Generic_Dictionary_object__object__o *)this,
             (const MethodInfo_3264F30 *)Method_System_Collections_Generic_Dictionary_string__AssetData__get_Count__) )
      {
        goto LABEL_120;
      }
      v92 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
        v92 = AssetManager_TypeInfo;
      }
      if ( !System_IO_File__Exists(v92->static_fields->cacheListFileName, 0LL) )
        goto LABEL_120;
      v93 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
        v93 = AssetManager_TypeInfo;
      }
      AllText = System_IO_File__ReadAllText(v93->static_fields->cacheListFileName, 0LL);
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v94);
      v96 = CatAndMouseGame__MouseGame8(AllText, 0LL);
      v106 = v96;
      if ( !v96 )
        goto LABEL_120;
      v107 = (System_Char_array *)sub_1BCA888(char___TypeInfo, 1LL);
      if ( !v107 )
        sub_1BCAA3C(0LL, 0LL);
      if ( !v107->max_length )
        sub_1BCAA44(v107, v107);
      v107->m_Items[2] = -257;
      v108 = System_String__Trim_62430968(v106, v107, 0LL);
      v109 = (System_Char_array *)sub_1BCA888(char___TypeInfo, 2LL);
      if ( !v109 )
        sub_1BCAA3C(0LL, 0LL);
      max_length = v109->max_length;
      if ( !max_length )
        sub_1BCAA44(v109, v109);
      v109->m_Items[2] = 13;
      if ( max_length == 1 )
        sub_1BCAA44(v109, v109);
      v109->m_Items[3] = 10;
      if ( !v108 )
        sub_1BCAA3C(v109, v109);
      v117 = System_String__IndexOfAny(v108, v109, 0LL);
      if ( v117 < 2 )
      {
        v118 = &StringLiteral_2520/*"AssetStorage boot load error : ファイル先頭の１行目の内容が空"*/;
        goto LABEL_96;
      }
      v119 = System_String__Substring_62420224(v108, 0, v117, 0LL);
      v121 = v119;
      if ( !v119 )
        sub_1BCAA3C(0LL, v120);
      if ( !System_String__StartsWith(v119, (System_String_o *)StringLiteral_25411/*"~"*/, 0LL) )
      {
        v118 = &StringLiteral_2521/*"AssetStorage boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
        goto LABEL_96;
      }
      v122 = System_String__Substring(v121, 1, 0LL);
      v123 = System_String__Substring(v108, v117 + 1, 0LL);
      UTF8 = System_Text_Encoding__get_UTF8(0LL);
      if ( !UTF8 )
        sub_1BCAA3C(0LL, v125);
      v127 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._19_GetBytes.method)(
                                    UTF8,
                                    v123,
                                    UTF8->klass->vtable._20_GetBytes.methodPtr);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo, v126);
      v128 = Crc32__Compute(v127, 0LL);
      if ( System_UInt32__Parse(v122, 0LL) != v128 )
      {
        v118 = &StringLiteral_2517/*"AssetStorage boot load crc error : チェックサム値が不一致"*/;
        goto LABEL_96;
      }
      v129 = (System_Char_array *)sub_1BCA888(char___TypeInfo, 2LL);
      if ( !v129 )
        sub_1BCAA3C(0LL, 0LL);
      v130 = v129->max_length;
      if ( !v130 )
        sub_1BCAA44(v129, v129);
      v129->m_Items[2] = 13;
      if ( v130 == 1 )
        sub_1BCAA44(v129, v129);
      v129->m_Items[3] = 10;
      if ( !v123 )
        sub_1BCAA3C(v129, v129);
      this = (AssetManager__InitCR_d__131_o *)System_String__Split_62423612(v123, v129, 1, 0LL);
      v131 = this;
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
                                                (System_String_o *)StringLiteral_1883/*"@"*/,
                                                0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
LABEL_95:
        v118 = &StringLiteral_2519/*"AssetStorage boot load error : アセットバンドルリスト作成失敗"*/;
LABEL_96:
        v184 = (System_String_o *)*v118;
        if ( *v118 )
        {
          v185 = AssetManager_TypeInfo;
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
            v185 = AssetManager_TypeInfo;
          }
          static_fields = v185->static_fields;
          v187 = StringLiteral_1/*""*/;
          static_fields->assetBundleMasterVersion = (struct System_String_o *)StringLiteral_1/*""*/;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&static_fields->assetBundleMasterVersion,
            (int64_t)v187,
            v111,
            v112,
            v113,
            v114,
            v115,
            v116);
          v188 = StringLiteral_1/*""*/;
          v189 = AssetManager_TypeInfo->static_fields;
          v189->assetBundleDateVersion = (struct System_String_o *)StringLiteral_1/*""*/;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v189->assetBundleDateVersion,
            (int64_t)v188,
            v190,
            v191,
            v192,
            v193,
            v194,
            v195);
          v196 = StringLiteral_1/*""*/;
          v197 = AssetManager_TypeInfo->static_fields;
          v197->assetBundleBuildVersion = (struct System_String_o *)StringLiteral_1/*""*/;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v197->assetBundleBuildVersion,
            (int64_t)v196,
            v198,
            v199,
            v200,
            v201,
            v202,
            v203);
          this = (AssetManager__InitCR_d__131_o *)_4__this->fields.assetBundleDic;
          if ( !this )
            goto LABEL_281;
          System_Collections_Generic_Dictionary_object__object___Clear(
            (System_Collections_Generic_Dictionary_object__object__o *)this,
            (const MethodInfo_32653E8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
          v204 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
            v204 = ManagerConfig_TypeInfo;
          }
          v205 = v204->static_fields;
          if ( v205->UseDebugCommand )
          {
            if ( !v204->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v204, method);
              v205 = ManagerConfig_TypeInfo->static_fields;
            }
            if ( System_String__op_Inequality(v205->ServerDefaultType, (System_String_o *)StringLiteral_11594/*"SCRIPT"*/, 0LL) )
            {
              _4__this->fields.isErrorDialog = 1;
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v210 = (ErrorDialog_ClickDelegate_o *)sub_1BCAA2C(ErrorDialog_ClickDelegate_TypeInfo, v207, v208, v209);
              ErrorDialog_ClickDelegate___ctor(
                v210,
                (Il2CppObject *)_4__this,
                Method_AssetManager_OnClickWaitDebugDialog__,
                0LL);
              if ( !Instance )
                goto LABEL_281;
              *(_QWORD *)&effectDistancea.fields.hasValue = 0LL;
              effectDistancea.fields.value.fields.y = 0.0;
              CommonUI__OpenWarningDialog(
                (CommonUI_o *)Instance,
                (System_String_o *)StringLiteral_16105/*"[FFFF80]Download error for debug"*/,
                v184,
                v210,
                1,
                0,
                -1.0,
                1,
                effectDistancea,
                0LL);
LABEL_27:
              if ( _4__this->fields.isErrorDialog )
              {
                v97 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(
                                                           UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                           method,
                                                           v2,
                                                           v3);
                UnityEngine_WaitForEndOfFrame___ctor(v97, 0LL);
                v8->fields.__2__current = (Il2CppObject *)v97;
                p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                sub_1BCA784(p__2__current, (int64_t)v97, v99, v100, v101, v102, v103, v104);
                result = 1;
                *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
                return result;
              }
            }
          }
        }
        goto LABEL_120;
      }
      if ( !LODWORD(v131->fields.__2__current) )
        goto LABEL_282;
      this = (AssetManager__InitCR_d__131_o *)v131->fields.__4__this;
      if ( !this )
        goto LABEL_281;
      this = (AssetManager__InitCR_d__131_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0LL);
      if ( !this )
        goto LABEL_281;
      v133 = this;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_282;
      this = (AssetManager__InitCR_d__131_o *)this->fields.__4__this;
      if ( !this )
        goto LABEL_281;
      v134 = System_String__Substring((System_String_o *)this, 1, 0LL);
      v142 = AssetManager_TypeInfo;
      v143 = (int64_t)v134;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v135);
        v142 = AssetManager_TypeInfo;
      }
      v144 = v142->static_fields;
      v144->assetBundleMasterVersion = (struct System_String_o *)v143;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v144->assetBundleMasterVersion,
        v143,
        v136,
        v137,
        v138,
        v139,
        v140,
        v141);
      v152 = AssetManager_TypeInfo;
      if ( SLODWORD(v133->fields.__2__current) <= 1 )
        p_configFileUrl_5__2 = (int64_t *)&StringLiteral_1/*""*/;
      else
        p_configFileUrl_5__2 = (int64_t *)&v133->fields._configFileUrl_5__2;
      v154 = *p_configFileUrl_5__2;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v145);
        v152 = AssetManager_TypeInfo;
      }
      v155 = v152->static_fields;
      v155->assetBundleDateVersion = (struct System_String_o *)v154;
      sub_1BCA784((PartyOrganizationUtility_o *)&v155->assetBundleDateVersion, v154, v146, v147, v148, v149, v150, v151);
      v163 = AssetManager_TypeInfo;
      if ( SLODWORD(v133->fields.__2__current) <= 2 )
        p_loader_5__3 = (int64_t *)&StringLiteral_1/*""*/;
      else
        p_loader_5__3 = (int64_t *)&v133->fields._loader_5__3;
      v165 = *p_loader_5__3;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v156);
        v163 = AssetManager_TypeInfo;
      }
      v166 = v163->static_fields;
      v166->assetBundleBuildVersion = (struct System_String_o *)v165;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v166->assetBundleBuildVersion,
        v165,
        v157,
        v158,
        v159,
        v160,
        v161,
        v162);
      v167 = (int)v131->fields.__2__current;
      if ( v167 >= 2 )
      {
        v168 = 5LL;
        v477 = v131;
        while ( (int)v168 - 4 < (unsigned int)v167 )
        {
          this = (AssetManager__InitCR_d__131_o *)*((_QWORD *)&v131->klass + v168);
          if ( !this )
            goto LABEL_281;
          this = (AssetManager__InitCR_d__131_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0LL);
          if ( !this )
            goto LABEL_281;
          v169 = this;
          if ( SLODWORD(this->fields.__2__current) < 5 )
            goto LABEL_120;
          this = (AssetManager__InitCR_d__131_o *)this->fields.__4__this;
          if ( !this )
            goto LABEL_281;
          v170 = System_String__Trim((System_String_o *)this, 0LL);
          this = (AssetManager__InitCR_d__131_o *)System_Int32__Parse(v170, 0LL);
          if ( LODWORD(v169->fields.__2__current) < 3 )
            goto LABEL_282;
          v171 = (int)this;
          this = (AssetManager__InitCR_d__131_o *)v169->fields._loader_5__3;
          if ( !this )
            goto LABEL_281;
          configFileUrl_5__2 = v169->fields._configFileUrl_5__2;
          v173 = System_String__Trim((System_String_o *)this, 0LL);
          this = (AssetManager__InitCR_d__131_o *)System_Int32__Parse(v173, 0LL);
          if ( LODWORD(v169->fields.__2__current) <= 3 )
            goto LABEL_282;
          v174 = (int)this;
          this = *(AssetManager__InitCR_d__131_o **)&v169->fields._requestTime_5__4;
          if ( !this )
            goto LABEL_281;
          v175 = System_String__Trim((System_String_o *)this, 0LL);
          this = (AssetManager__InitCR_d__131_o *)System_UInt32__Parse(v175, 0LL);
          v178 = (int)v169->fields.__2__current;
          if ( (unsigned int)v178 <= 4 )
            goto LABEL_282;
          v179 = (unsigned int)this;
          v180 = v178 >= 6 ? (System_String_o *)v169[1].klass : 0LL;
          wait_5__6 = (System_String_o *)v169->fields._wait_5__6;
          assetBundleDic = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.assetBundleDic;
          v183 = (AssetData_o *)sub_1BCAA2C(AssetData_TypeInfo, method, v176, v177);
          AssetData___ctor_38479196(v183, 0, wait_5__6, v171, configFileUrl_5__2, v174, v179, v180, effectDistance);
          if ( !assetBundleDic )
            goto LABEL_281;
          System_Collections_Generic_Dictionary_object__object___set_Item(
            assetBundleDic,
            (Il2CppObject *)wait_5__6,
            (Il2CppObject *)v183,
            (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__AssetData__set_Item__);
          v131 = v477;
          ++v168;
          v167 = (int)v477->fields.__2__current;
          if ( (int)v168 - 4 >= v167 )
            goto LABEL_120;
        }
        goto LABEL_282;
      }
LABEL_120:
      v211 = AssetManager_TypeInfo;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
      ConfigFileAddress = AssetManager__get_ConfigFileAddress((const MethodInfo *)v211);
      v8->fields._configFileUrl_5__2 = ConfigFileAddress;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v8->fields._configFileUrl_5__2,
        (int64_t)ConfigFileAddress,
        v213,
        v214,
        v215,
        v216,
        v217,
        v218);
      v8->fields._loader_5__3 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._loader_5__3, 0LL, v219, v220, v221, v222, v223, v224);
LABEL_123:
      v225 = v8->fields._configFileUrl_5__2;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
      UrlString = AssetManager__getUrlString(v225, method);
      v227 = UnityEngine_Networking_UnityWebRequest__Get(UrlString, 0LL);
      v8->fields._loader_5__3 = v227;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v8->fields._loader_5__3,
        (int64_t)v227,
        v228,
        v229,
        v230,
        v231,
        v232,
        v233);
      this = (AssetManager__InitCR_d__131_o *)v8->fields._loader_5__3;
      if ( !this )
        goto LABEL_281;
      UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
      unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
      v238 = ManagerConfig_TypeInfo;
      if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v234);
        v238 = ManagerConfig_TypeInfo;
      }
      TIMEOUT = v238->static_fields->TIMEOUT;
      v8->fields._loadProgress_5__5 = 0.0;
      v8->fields._requestTime_5__4 = unscaledTime + TIMEOUT;
      v240 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, v234, v235, v236);
      UnityEngine_WaitForEndOfFrame___ctor(v240, 0LL);
      v8->fields._wait_5__6 = v240;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v8->fields._wait_5__6,
        (int64_t)v240,
        v241,
        v242,
        v243,
        v244,
        v245,
        v246);
LABEL_129:
      v247 = (AssetManager__InitCR_d__131_o **)&v8->fields._loader_5__3;
      this = (AssetManager__InitCR_d__131_o *)v8->fields._loader_5__3;
      if ( !this )
        goto LABEL_281;
      this = (AssetManager__InitCR_d__131_o *)UnityEngine_Networking_UnityWebRequest__get_isDone(
                                                (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_136;
      this = *v247;
      if ( !*v247 )
        goto LABEL_281;
      downloadProgress = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                           (UnityEngine_Networking_UnityWebRequest_o *)this,
                           0LL);
      loadProgress_5__5 = v8->fields._loadProgress_5__5;
      v250 = downloadProgress;
      v257 = UnityEngine_Time__get_unscaledTime(0LL);
      v258 = v250 == loadProgress_5__5;
      v259 = v257;
      if ( !v258 )
      {
        v269 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
          v269 = ManagerConfig_TypeInfo;
        }
        v270 = v269->static_fields;
        this = (AssetManager__InitCR_d__131_o *)v8->fields._loader_5__3;
        v8->fields._requestTime_5__4 = v259 + v270->TIMEOUT;
        if ( this )
        {
          v8->fields._loadProgress_5__5 = UnityEngine_Networking_UnityWebRequest__get_downloadProgress(
                                            (UnityEngine_Networking_UnityWebRequest_o *)this,
                                            0LL);
          goto LABEL_153;
        }
LABEL_281:
        sub_1BCAA3C(this, method);
      }
      if ( v257 >= v8->fields._requestTime_5__4 )
      {
LABEL_136:
        if ( !_4__this )
          goto LABEL_281;
        this = *v247;
        if ( !*v247 )
          goto LABEL_281;
        if ( !UnityEngine_Networking_UnityWebRequest__get_isDone((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL) )
        {
          v268 = (Il2CppObject *)StringLiteral_2529/*"AssetStorageList download time over"*/;
          goto LABEL_249;
        }
        this = *v247;
        if ( !*v247 )
          goto LABEL_281;
        error = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
        this = (AssetManager__InitCR_d__131_o *)System_String__IsNullOrEmpty(error, 0LL);
        if ( !*v247 )
          goto LABEL_281;
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v267 = UnityEngine_Networking_UnityWebRequest__get_error(
                   (UnityEngine_Networking_UnityWebRequest_o *)*v247,
                   0LL);
LABEL_155:
          v268 = (Il2CppObject *)v267;
          goto LABEL_249;
        }
        this = (AssetManager__InitCR_d__131_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                  (UnityEngine_Networking_UnityWebRequest_o *)*v247,
                                                  0LL);
        if ( !this )
          goto LABEL_281;
        text = UnityEngine_Networking_DownloadHandler__get_text((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
        if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v261);
        v263 = CatAndMouseGame__MouseGame3(text, 0LL);
        if ( System_String__IsNullOrEmpty(v263, 0LL) )
        {
          v265 = v8->fields._configFileUrl_5__2;
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v264);
          v266 = AssetManager__getUrlString(v265, v264);
          v267 = System_String__Concat_62401220((System_String_o *)StringLiteral_2528/*"AssetStorageList download error : "*/, v266, 0LL);
          goto LABEL_155;
        }
        this = (AssetManager__InitCR_d__131_o *)sub_1BCA888(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_281;
        method = (const MethodInfo *)this;
        if ( !LODWORD(this->fields.__2__current) )
          goto LABEL_282;
        LOWORD(this->fields.__4__this) = -257;
        if ( !v263 )
          goto LABEL_281;
        this = (AssetManager__InitCR_d__131_o *)System_String__Trim_62430968(v263, (System_Char_array *)this, 0LL);
        if ( !this )
          goto LABEL_281;
        v274 = this;
        if ( System_String__StartsWith((System_String_o *)this, (System_String_o *)StringLiteral_25411/*"~"*/, 0LL) )
        {
          this = (AssetManager__InitCR_d__131_o *)sub_1BCA888(char___TypeInfo, 2LL);
          if ( !this )
            goto LABEL_281;
          v276 = (int)this->fields.__2__current;
          method = (const MethodInfo *)this;
          if ( !v276 )
            goto LABEL_282;
          LOWORD(this->fields.__4__this) = 13;
          if ( v276 == 1 )
            goto LABEL_282;
          WORD1(this->fields.__4__this) = 10;
          v277 = System_String__IndexOfAny((System_String_o *)v274, (System_Char_array *)this, 0LL);
          if ( v277 >= 2 )
          {
            v278 = v277;
            v279 = System_String__Substring_62420224((System_String_o *)v274, 1, v277 - 1, 0LL);
            v280 = System_String__Substring((System_String_o *)v274, v278 + 1, 0LL);
            this = (AssetManager__InitCR_d__131_o *)System_Text_Encoding__get_UTF8(0LL);
            if ( !this )
              goto LABEL_281;
            v282 = (System_Byte_array *)((__int64 (__fastcall *)(AssetManager__InitCR_d__131_o *, System_String_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                                          this,
                                          v280,
                                          this->klass[1]._1.interfaceOffsets);
            if ( !Crc32_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Crc32_TypeInfo, v281);
            v283 = Crc32__Compute(v282, 0LL);
            if ( System_UInt32__Parse(v279, 0LL) == v283 )
            {
              if ( *v247 )
              {
                UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)*v247, 0LL);
                *v247 = 0LL;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)&v8->fields._loader_5__3,
                  0LL,
                  v291,
                  v292,
                  v293,
                  v294,
                  v295,
                  v296);
              }
              if ( !v280 )
                goto LABEL_280;
              this = (AssetManager__InitCR_d__131_o *)sub_1BCA888(char___TypeInfo, 2LL);
              if ( !this )
                goto LABEL_281;
              v297 = (int)this->fields.__2__current;
              method = (const MethodInfo *)this;
              if ( v297 )
              {
                LOWORD(this->fields.__4__this) = 13;
                if ( v297 != 1 )
                {
                  WORD1(this->fields.__4__this) = 10;
                  v298 = System_String__Split_62423612(v280, (System_Char_array *)this, 1, 0LL);
                  v302 = sub_1BCAA2C(AssetDataListInfo_TypeInfo, v299, v300, v301);
                  AssetDataListInfo___ctor((AssetDataListInfo_o *)v302, v303);
                  if ( !v298 )
                    goto LABEL_281;
                  v310 = v298->max_length;
                  v475 = (PartyOrganizationUtility_o *)(v302 + 16);
                  v476 = (PartyOrganizationUtility_o *)(v302 + 24);
                  v478 = (PartyOrganizationUtility_o *)(v302 + 32);
                  if ( v310 >= 1 )
                  {
                    v311 = 0;
                    while ( v311 < v310 )
                    {
                      this = (AssetManager__InitCR_d__131_o *)v298->m_Items[v311];
                      if ( !this )
                        goto LABEL_281;
                      this = (AssetManager__InitCR_d__131_o *)System_String__Split(
                                                                (System_String_o *)this,
                                                                0x2Cu,
                                                                0,
                                                                0LL);
                      if ( !this )
                        goto LABEL_281;
                      v312 = this;
                      if ( SLODWORD(this->fields.__2__current) < 1 )
                        goto LABEL_231;
                      this = (AssetManager__InitCR_d__131_o *)this->fields.__4__this;
                      if ( !this )
                        goto LABEL_281;
                      this = (AssetManager__InitCR_d__131_o *)System_String__StartsWith(
                                                                (System_String_o *)this,
                                                                (System_String_o *)StringLiteral_1883/*"@"*/,
                                                                0LL);
                      if ( !LODWORD(v312->fields.__2__current) )
                        goto LABEL_282;
                      v313 = (char)this;
                      this = (AssetManager__InitCR_d__131_o *)v312->fields.__4__this;
                      if ( !this )
                        goto LABEL_281;
                      if ( (v313 & 1) != 0 )
                      {
                        v314 = System_String__Substring((System_String_o *)this, 1, 0LL);
                        v316 = AssetManager_TypeInfo;
                        v317 = (int)v312->fields.__2__current;
                        v318 = (void **)&v312->fields._loader_5__3;
                        v319 = &v312->fields._configFileUrl_5__2;
                        v320 = v314;
                        if ( v317 == 2 )
                          v318 = &StringLiteral_1/*""*/;
                        v321 = v317 <= 1;
                        if ( v317 <= 1 )
                          v322 = (int64_t *)&StringLiteral_1/*""*/;
                        else
                          v322 = (int64_t *)v319;
                        if ( v321 )
                          v323 = (int64_t *)&StringLiteral_1/*""*/;
                        else
                          v323 = (int64_t *)v318;
                        v324 = *v322;
                        v325 = *v323;
                        if ( !AssetManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v315);
                          v316 = AssetManager_TypeInfo;
                        }
                        this = (AssetManager__InitCR_d__131_o *)System_String__op_Inequality(
                                                                  v320,
                                                                  v316->static_fields->assetBundleMasterVersion,
                                                                  0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                        {
                          this = (AssetManager__InitCR_d__131_o *)_4__this->fields.assetBundleDic;
                          if ( !this )
                            goto LABEL_281;
                          System_Collections_Generic_Dictionary_object__object___Clear(
                            (System_Collections_Generic_Dictionary_object__object__o *)this,
                            (const MethodInfo_32653E8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
                        }
                        if ( !v302 )
                          goto LABEL_281;
                        v475->klass = (PartyOrganizationUtility_c *)v320;
                        sub_1BCA784(v475, (int64_t)v320, v326, v327, v328, v329, v330, v331);
                        v476->klass = (PartyOrganizationUtility_c *)v324;
                        sub_1BCA784(v476, v324, v332, v333, v334, v335, v336, v337);
                        v478->klass = (PartyOrganizationUtility_c *)v325;
                        sub_1BCA784(v478, v325, v338, v339, v340, v341, v342, v343);
                      }
                      else
                      {
                        this = (AssetManager__InitCR_d__131_o *)System_String__StartsWith(
                                                                  (System_String_o *)this,
                                                                  (System_String_o *)StringLiteral_25411/*"~"*/,
                                                                  0LL);
                        if ( ((unsigned __int8)this & 1) == 0 )
                        {
                          if ( !LODWORD(v312->fields.__2__current) )
                            goto LABEL_282;
                          this = (AssetManager__InitCR_d__131_o *)v312->fields.__4__this;
                          if ( !this )
                            goto LABEL_281;
                          this = (AssetManager__InitCR_d__131_o *)System_String__IndexOf(
                                                                    (System_String_o *)this,
                                                                    0x7Eu,
                                                                    0LL);
                          if ( (_DWORD)this != 1 )
                          {
                            if ( SLODWORD(v312->fields.__2__current) < 5 )
                              goto LABEL_231;
                            this = (AssetManager__InitCR_d__131_o *)v312->fields.__4__this;
                            if ( !this )
                              goto LABEL_281;
                            v344 = System_String__Trim((System_String_o *)this, 0LL);
                            this = (AssetManager__InitCR_d__131_o *)System_Int32__Parse(v344, 0LL);
                            version = (int)this;
                            if ( LODWORD(v312->fields.__2__current) < 3 )
                              goto LABEL_282;
                            this = (AssetManager__InitCR_d__131_o *)v312->fields._loader_5__3;
                            if ( !this )
                              goto LABEL_281;
                            v473 = v312->fields._configFileUrl_5__2;
                            v345 = System_String__Trim((System_String_o *)this, 0LL);
                            this = (AssetManager__InitCR_d__131_o *)System_Int32__Parse(v345, 0LL);
                            if ( LODWORD(v312->fields.__2__current) <= 3 )
                              goto LABEL_282;
                            v346 = (int)this;
                            this = *(AssetManager__InitCR_d__131_o **)&v312->fields._requestTime_5__4;
                            if ( !this )
                              goto LABEL_281;
                            v347 = System_String__Trim((System_String_o *)this, 0LL);
                            this = (AssetManager__InitCR_d__131_o *)System_UInt32__Parse(v347, 0LL);
                            v349 = (int)v312->fields.__2__current;
                            if ( (unsigned int)v349 <= 4 )
                              goto LABEL_282;
                            v350 = (unsigned int)this;
                            if ( v349 >= 6 )
                              klass = (System_String_o *)v312[1].klass;
                            else
                              klass = 0LL;
                            v351 = (System_String_o *)v312->fields._wait_5__6;
                            AssetData = AssetManager__GetAssetData(
                                          (AssetManager_o *)this,
                                          _4__this->fields.assetBundleDic,
                                          v351,
                                          v348);
                            if ( AssetData )
                            {
                              v354 = (Il2CppObject *)AssetData;
                              this = (AssetManager__InitCR_d__131_o *)AssetData__SetUpdateInfo(
                                                                        AssetData,
                                                                        version,
                                                                        v473,
                                                                        v346,
                                                                        v350,
                                                                        klass,
                                                                        v353);
                              if ( !v302 )
                                goto LABEL_281;
                              this = *(AssetManager__InitCR_d__131_o **)(v302 + 40);
                              if ( !this )
                                goto LABEL_281;
                              v361 = *(_QWORD *)&this->fields.__1__state;
                              v362 = Method_System_Collections_Generic_List_AssetData__Add__;
                              ++HIDWORD(this->fields.__2__current);
                              if ( !v361 )
                                goto LABEL_281;
                              _2__current_low = SLODWORD(this->fields.__2__current);
                              if ( (unsigned int)_2__current_low >= *(_DWORD *)(v361 + 24) )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  (System_Collections_Generic_List_object__o *)this,
                                  v354,
                                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v362[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v364 = v361 + 8 * _2__current_low;
                                LODWORD(this->fields.__2__current) = _2__current_low + 1;
                                *(_QWORD *)(v364 + 32) = v354;
                                sub_1BCA784(
                                  (PartyOrganizationUtility_o *)(v364 + 32),
                                  (int64_t)v354,
                                  v355,
                                  v356,
                                  v357,
                                  v358,
                                  v359,
                                  v360);
                              }
                              v351 = 0LL;
                            }
                            this = (AssetManager__InitCR_d__131_o *)System_String__IsNullOrEmpty(v351, 0LL);
                            if ( ((unsigned __int8)this & 1) == 0 )
                            {
                              if ( !v302 )
                                goto LABEL_281;
                              v365 = *(System_Collections_Generic_List_object__o **)(v302 + 40);
                              v366 = (AssetData_o *)sub_1BCAA2C(AssetData_TypeInfo, method, v304, v305);
                              AssetData___ctor_38479336(
                                v366,
                                0,
                                v351,
                                0,
                                version,
                                v473,
                                v346,
                                v350,
                                klass,
                                effectDistance_8);
                              if ( !v365 )
                                goto LABEL_281;
                              items = v365->fields._items;
                              v374 = Method_System_Collections_Generic_List_AssetData__Add__;
                              ++v365->fields._version;
                              if ( !items )
                                goto LABEL_281;
                              size = v365->fields._size;
                              if ( (unsigned int)size >= items->max_length )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  v365,
                                  (Il2CppObject *)v366,
                                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v374[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v376 = &items->obj.klass + size;
                                v365->fields._size = size + 1;
                                v376[4] = (Il2CppClass *)v366;
                                sub_1BCA784(
                                  (PartyOrganizationUtility_o *)(v376 + 4),
                                  (int64_t)v366,
                                  v367,
                                  v368,
                                  v369,
                                  v370,
                                  v371,
                                  v372);
                              }
                            }
                          }
                        }
                      }
                      v310 = v298->max_length;
                      if ( (int)++v311 >= v310 )
                        goto LABEL_231;
                    }
                    goto LABEL_282;
                  }
LABEL_231:
                  if ( !v302 )
                    goto LABEL_281;
                  v377 = AssetManager_TypeInfo;
                  v378 = (int64_t)v475->klass;
                  if ( !AssetManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
                    v377 = AssetManager_TypeInfo;
                  }
                  v379 = v377->static_fields;
                  v379->assetBundleMasterVersion = (struct System_String_o *)v378;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)&v379->assetBundleMasterVersion,
                    v378,
                    v304,
                    v305,
                    v306,
                    v307,
                    v308,
                    v309);
                  v380 = AssetManager_TypeInfo->static_fields;
                  v381 = (int64_t)v476->klass;
                  v380->assetBundleDateVersion = (struct System_String_o *)v476->klass;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)&v380->assetBundleDateVersion,
                    v381,
                    v382,
                    v383,
                    v384,
                    v385,
                    v386,
                    v387);
                  v388 = AssetManager_TypeInfo->static_fields;
                  v389 = (int64_t)v478->klass;
                  v388->assetBundleBuildVersion = (struct System_String_o *)v478->klass;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)&v388->assetBundleBuildVersion,
                    v389,
                    v390,
                    v391,
                    v392,
                    v393,
                    v394,
                    v395);
                  this = (AssetManager__InitCR_d__131_o *)_4__this->fields.assetBundleDic;
                  if ( !this )
                    goto LABEL_281;
                  System_Collections_Generic_Dictionary_object__object___Clear(
                    (System_Collections_Generic_Dictionary_object__object__o *)this,
                    (const MethodInfo_32653E8 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Clear__);
                  this = *(AssetManager__InitCR_d__131_o **)(v302 + 40);
                  if ( !this )
                    goto LABEL_281;
                  System_Collections_Generic_List_object___GetEnumerator(
                    (System_Collections_Generic_List_Enumerator_T__o *)&v479,
                    (System_Collections_Generic_List_object__o *)this,
                    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
                  v480 = v479;
                  while ( 1 )
                  {
                    v396 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                             &v480,
                             (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
                    if ( !v396 )
                      break;
                    current = v480.fields._current;
                    if ( !v480.fields._current )
                      sub_1BCAA3C(v396, v397);
                    v399 = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.assetBundleDic;
                    if ( !v399 )
                      sub_1BCAA3C(0LL, v397);
                    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                            v399,
                            (Il2CppObject *)v480.fields._current[1].monitor,
                            (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__AssetData__ContainsKey__) )
                    {
                      v401 = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.assetBundleDic;
                      if ( !v401 )
                        sub_1BCAA3C(0LL, v400);
                      System_Collections_Generic_Dictionary_object__object___Add(
                        v401,
                        (Il2CppObject *)current[1].monitor,
                        current,
                        (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__AssetData__Add__);
                    }
                  }
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v480,
                    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
                  AssetManager__ConfigWriteRequest(_4__this, 1, v451);
LABEL_280:
                  v8->fields._configFileUrl_5__2 = 0LL;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)&v8->fields._configFileUrl_5__2,
                    0LL,
                    v285,
                    v286,
                    v287,
                    v288,
                    v289,
                    v290);
                  v8->fields._loader_5__3 = 0LL;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)&v8->fields._loader_5__3,
                    0LL,
                    v452,
                    v453,
                    v454,
                    v455,
                    v456,
                    v457);
                  v461 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(
                                                              UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                              v458,
                                                              v459,
                                                              v460);
                  UnityEngine_WaitForEndOfFrame___ctor(v461, 0LL);
                  v8->fields.__2__current = (Il2CppObject *)v461;
                  v272 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                  sub_1BCA784(v272, (int64_t)v461, v462, v463, v464, v465, v466, v467);
                  v273 = 6;
                  goto LABEL_278;
                }
              }
LABEL_282:
              sub_1BCAA44(this, method);
            }
            v402 = (Il2CppObject *)StringLiteral_2525/*"AssetStorageList download crc error"*/;
            if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v284);
            UnityEngine_Debug__LogError(v402, 0LL);
          }
        }
        v268 = (Il2CppObject *)StringLiteral_2526/*"AssetStorageList download data error"*/;
        if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v275);
        UnityEngine_Debug__LogError(v268, 0LL);
LABEL_249:
        if ( *v247 )
        {
          UnityEngine_Networking_UnityWebRequest__Dispose((UnityEngine_Networking_UnityWebRequest_o *)*v247, 0LL);
          *v247 = 0LL;
          sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._loader_5__3, 0LL, v403, v404, v405, v406, v407, v408);
        }
        if ( !v268 )
          goto LABEL_277;
        v409 = ManagerConfig_TypeInfo;
        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
          v409 = ManagerConfig_TypeInfo;
        }
        v410 = v409->static_fields;
        if ( v410->UseDebugCommand )
        {
          if ( !v409->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v409, method);
            v410 = ManagerConfig_TypeInfo->static_fields;
          }
          if ( System_String__op_Inequality(v410->ServerDefaultType, (System_String_o *)StringLiteral_11594/*"SCRIPT"*/, 0LL) )
          {
            _4__this->fields.isErrorDialog = 1;
            v411 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v415 = (ErrorDialog_ClickDelegate_o *)sub_1BCAA2C(ErrorDialog_ClickDelegate_TypeInfo, v412, v413, v414);
            ErrorDialog_ClickDelegate___ctor(
              v415,
              (Il2CppObject *)_4__this,
              Method_AssetManager_OnClickWaitDebugDialog__,
              0LL);
            if ( !v411 )
              goto LABEL_281;
            *(_QWORD *)&effectDistanceb.fields.hasValue = 0LL;
            effectDistanceb.fields.value.fields.y = 0.0;
            CommonUI__OpenWarningDialog(
              (CommonUI_o *)v411,
              (System_String_o *)StringLiteral_16105/*"[FFFF80]Download error for debug"*/,
              (System_String_o *)v268,
              v415,
              1,
              0,
              -1.0,
              1,
              effectDistanceb,
              0LL);
LABEL_260:
            if ( _4__this->fields.isErrorDialog )
            {
              v416 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(
                                                          UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                          method,
                                                          v2,
                                                          v3);
              UnityEngine_WaitForEndOfFrame___ctor(v416, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v416;
              v272 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1BCA784(v272, (int64_t)v416, v417, v418, v419, v420, v421, v422);
              v273 = 3;
              goto LABEL_278;
            }
          }
        }
        _4__this->fields.isErrorDialog = 1;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method);
        if ( !byte_4B152DA )
        {
          sub_1BCA7E0(&ManagementManager_TypeInfo, method, v2);
          byte_4B152DA = 1;
        }
        v423 = ManagementManager_TypeInfo;
        if ( !ManagementManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, method);
          v423 = ManagementManager_TypeInfo;
        }
        isDuringStartup = v423->static_fields->isDuringStartup;
        v426 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          if ( isDuringStartup )
          {
LABEL_270:
            v427 = LocalizationManager__Get((System_String_o *)StringLiteral_2157/*"ASSET_LOADER_ERROR_BOOT_RETRY_MESSAGE"*/, 0LL);
            v431 = (ErrorDialog_ClickDelegate_o *)sub_1BCAA2C(ErrorDialog_ClickDelegate_TypeInfo, v428, v429, v430);
            ErrorDialog_ClickDelegate___ctor(
              v431,
              (Il2CppObject *)_4__this,
              Method_AssetManager_OnClickRetryDialog__,
              0LL);
            if ( !v426 )
              goto LABEL_281;
            CommonUI__OpenRetryBootDialog((CommonUI_o *)v426, (System_String_o *)StringLiteral_1/*""*/, v427, v431, 0, 0LL);
LABEL_275:
            if ( _4__this->fields.isErrorDialog )
            {
              v437 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(
                                                          UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                          method,
                                                          v2,
                                                          v3);
              UnityEngine_WaitForEndOfFrame___ctor(v437, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v437;
              v272 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1BCA784(v272, (int64_t)v437, v438, v439, v440, v441, v442, v443);
              v273 = 4;
              goto LABEL_278;
            }
LABEL_277:
            v444 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3);
            UnityEngine_WaitForSeconds___ctor(v444, 1.0, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v444;
            v272 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1BCA784(v272, (int64_t)v444, v445, v446, v447, v448, v449, v450);
            v273 = 5;
            goto LABEL_278;
          }
        }
        else
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v425);
          if ( isDuringStartup )
            goto LABEL_270;
        }
        v432 = LocalizationManager__Get((System_String_o *)StringLiteral_2158/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
        v436 = (ErrorDialog_ClickDelegate_o *)sub_1BCAA2C(ErrorDialog_ClickDelegate_TypeInfo, v433, v434, v435);
        ErrorDialog_ClickDelegate___ctor(v436, (Il2CppObject *)_4__this, Method_AssetManager_OnClickRetryDialog__, 0LL);
        if ( !v426 )
          goto LABEL_281;
        CommonUI__OpenRetryDialog((CommonUI_o *)v426, (System_String_o *)StringLiteral_1/*""*/, v432, v436, 0, 0LL);
        goto LABEL_275;
      }
LABEL_153:
      v271 = (int64_t)v8->fields._wait_5__6;
      v8->fields.__2__current = (Il2CppObject *)v271;
      v272 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BCA784(v272, v271, v251, v252, v253, v254, v255, v256);
      v273 = 2;
LABEL_278:
      *(_DWORD *)&v272[-1].fields._IsQuestStartMenuMode_k__BackingField = v273;
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
      sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._wait_5__6, 0LL, v2, v3, v4, v5, v6, v7);
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
      sub_1BCA784((PartyOrganizationUtility_o *)&_4__this->fields.initCRW, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_AssetManager__InitCR_d__131_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v3; // x3
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
  if ( (byte_4B152D9 & 1) == 0 )
  {
    this = (AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_o *)sub_1BCA7E0(
                                                                        &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                        method,
                                                                        v2);
    byte_4B152D9 = 1;
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
    v11 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2, v3);
    UnityEngine_WaitForEndOfFrame___ctor(v11, 0LL);
    v8->fields._wait_5__2 = v11;
    sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._wait_5__2, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  }
  if ( !_4__this )
    sub_1BCAA3C(this, method);
  if ( _4__this->fields.inProgressUnloadUnusedAssets || _4__this->fields.requestUnloadUnusedAssets )
  {
    wait_5__2 = (int64_t)v8->fields._wait_5__2;
    v8->fields.__2__current = (Il2CppObject *)wait_5__2;
    p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
    sub_1BCA784(p__2__current, wait_5__2, v2, v3, v4, v5, v6, v7);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_AssetManager__WaitForExecutionUnloadUnuseAssets_d__41_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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
  if ( (byte_4B152D2 & 1) != 0 )
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
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, isDecide, method);
    byte_4B152D2 = 1;
    if ( isDecide )
      goto LABEL_3;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, isDecide);
  UnityEngine_Application__Quit_69948112(0LL);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  AssetLoader_o *loader; // x20
  Il2CppObject *_4__this; // x22
  AssetLoader_LoadEndHandler_o *v9; // x21
  const MethodInfo *v10; // x3
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  struct AssetManager_LoadWaitStatus_o *waiter; // x8

  if ( (byte_4B152D3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetManager_OnEndLoadAssetStorage__, method, v2);
    sub_1BCA7E0(&AssetLoader_LoadEndHandler_TypeInfo, v5, v6);
    byte_4B152D3 = 1;
  }
  loader = this->fields.loader;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v9 = (AssetLoader_LoadEndHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndHandler_TypeInfo, method, v2, v3);
  AssetLoader_LoadEndHandler___ctor(v9, _4__this, Method_AssetManager_OnEndLoadAssetStorage__, v10);
  waiter = this->fields.waiter;
  if ( !waiter || !loader )
    sub_1BCAA3C(v11, v12);
  AssetLoader__StartLoad(loader, v9, waiter->fields.resourceNames, v13);
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
  __int64 v6; // x2
  const MethodInfo *v7; // x2
  struct System_Collections_Generic_List_string__o *remainNameList; // x8

  v4 = this;
  if ( (byte_4B152D4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Remove__, data, method);
    this = (AssetManager___c__DisplayClass169_0_o *)sub_1BCA7E0(
                                                      &Method_System_Collections_Generic_List_string__get_Count__,
                                                      v5,
                                                      v6);
    byte_4B152D4 = 1;
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
                                                    (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_string__Remove__);
  if ( v4->fields.calledCallbackFunc )
    return;
  remainNameList = v4->fields.remainNameList;
  if ( !remainNameList )
LABEL_12:
    sub_1BCAA3C(this, data);
  if ( remainNameList->fields._size <= 0 )
  {
    this = (AssetManager___c__DisplayClass169_0_o *)v4->fields.__4__this;
    if ( this )
    {
      AssetManager__AddLoadWaitStatus((AssetManager_o *)this, v4->fields.callbackFunc, v7);
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
    sub_1BCAA3C(this, method);
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
        sub_1BCAA44(this, method);
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
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  __int64 v3; // x3
  AssetManager__coUnloadUnusedAssets_d__138_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  int32_t _1__state; // w8
  struct AssetManager_o *_4__this; // x20
  UnityEngine_WaitForEndOfFrame_o *v9; // x21
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t wait_5__2; // x1
  PartyOrganizationUtility_o *v23; // x19
  bool v24; // w21
  UnityEngine_AsyncOperation_o *v25; // x0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct AssetManager_ResourceUnloadEventHandler_o *v33; // x8
  PartyOrganizationUtility_o *p_unloadCallbacks; // x20
  struct AssetManager_ResourceUnloadEventHandler_o *unloadCallbacks; // t1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7

  v4 = this;
  if ( (byte_4B152DD & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    this = (AssetManager__coUnloadUnusedAssets_d__138_o *)sub_1BCA7E0(&UnityEngine_WaitForEndOfFrame_TypeInfo, v5, v6);
    byte_4B152DD = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 2 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_19;
    unloadCallbacks = _4__this->fields.unloadCallbacks;
    p_unloadCallbacks = (PartyOrganizationUtility_o *)&_4__this->fields.unloadCallbacks;
    v33 = unloadCallbacks;
    *(_WORD *)((char *)&p_unloadCallbacks[-1].fields.temporaryPartyInfo + 3) = 0;
    if ( unloadCallbacks )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v33->fields.m_target)(
        v33->fields.original_method_info,
        *(_QWORD *)&v33->fields.extra_arg);
      p_unloadCallbacks->klass = 0LL;
      sub_1BCA784(p_unloadCallbacks, 0LL, v36, v37, v38, v39, v40, v41);
    }
    return 0;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v4->fields.__1__state = -1;
      v9 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2, v3);
      UnityEngine_WaitForEndOfFrame___ctor(v9, 0LL);
      v4->fields._wait_5__2 = v9;
      sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields._wait_5__2, (int64_t)v9, v10, v11, v12, v13, v14, v15);
      goto LABEL_8;
    }
    return 0;
  }
  v4->fields.__1__state = -1;
LABEL_8:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
  this = (AssetManager__coUnloadUnusedAssets_d__138_o *)AssetManager__LoadIsBusy(0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( _4__this )
    {
      v24 = 1;
      _4__this->fields.inProgressUnloadUnusedAssets = 1;
      v25 = UnityEngine_Resources__UnloadUnusedAssets(0LL);
      v4->fields.__2__current = (Il2CppObject *)v25;
      p__2__current = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
      sub_1BCA784(p__2__current, (int64_t)v25, v27, v28, v29, v30, v31, v32);
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
      return v24;
    }
LABEL_19:
    sub_1BCAA3C(this, method);
  }
  wait_5__2 = (int64_t)v4->fields._wait_5__2;
  v4->fields.__2__current = (Il2CppObject *)wait_5__2;
  v23 = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
  sub_1BCA784(v23, wait_5__2, v16, v17, v18, v19, v20, v21);
  v24 = 1;
  *(_DWORD *)&v23[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  return v24;
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_AssetManager__coUnloadUnusedAssets_d__138_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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